/*  -*- Mode: C;  -*-
 * File: exception.c
 * Author: Reiner Mauch (mauch@ira.uka.de)
 * Copyright (C) Reiner Mauch & Martin Trapp
 * Copyright (C) Universitaet Karlsruhe, Germany, 1992
 *
 *
 * COPYRIGHT NOTICE: This code is provided "AS IS" WITHOUT ANY WARRANTY
 * and is subject to the terms of the GENERAL PUBLIC LICENSE contained in
 * the file: "doc/license.txt" of this distribution.
 * The license is also available from University at Karlsruhe,
 * Vincenz-Priessnitzstr.1, W-7500 Karlsruhe 1, Germany.
 **~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ** HISTORY:
 ** Last edited: Feb 23 00:37 1993 (mauch)
 ** Created: Sat Dec 12 14:22:34 1992 (mauch)
 **~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/** Project: sather compiler (run time system)
 **
 ** Description: run time system stuff of exception handling
 **
 ** Functions:
 **
 ** ID: $Id$
 **
 ** Related Packages:
 **	base/exception.sa
 ** Miscellanous:
 **	
 **~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ** $Log$
 **~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <machine/reg.h>
#include <machine/frame.h>

void *makestr_(char* str);

/*************************************************************
 * sather signal creater
 *************************************************************/

/* SIGINT   */
extern char *EXCEPTION_INT_create_2(char *self);
/* SIGFPE   */
extern char *EXCEPTION_FPE_create_2(char *self,int code,char *name);
/* SIGSEGV   */
extern char *EXCEPTION_SEGV_create_2(char *self,char *name);

extern int   SAINT_set_exception_linenumber_1(void*,int);
extern void* SAINT_set_exception_filename_1(void*,void*);

/*************************************************************
 * INCLUDES
 *************************************************************/

#include <setjmp.h>
#include <signal.h>
#include <stdio.h>

/*************************************************************
 * TYPEDEFS
 *************************************************************/
/*
 * exception base struct
 */
typedef struct {
  int actual;
  int all;
  jmp_buf *buffer;
} SaintExceptionStruct;

/*************************************************************
 * sather exception base
 *************************************************************/

extern SaintExceptionStruct* SAINT_get_exception_base_1(void);
extern SAINT_set_exception_base_1(void*,SaintExceptionStruct* set);


/*************************************************************
 * DEFINES
 *************************************************************/

/* factor of increasing exception buffers */
#define SAINT_EXCEPTION_FAC 20




/*************************************************************
 * saint_exception_raise
 *************************************************************/
void saint_exception_raise(char *ex) {
  if (!SAINT_get_exception_base_1()) {
    fprintf(stderr,
	    "saint_exception_raise(): Internal error in exception handling\n");
    abort();
  }
  if (SAINT_get_exception_base_1()->actual<0) {
    fprintf(stderr,"saint_exception_raise(): Internal error in exception handling (underflow)\n");
    abort();
  }
  /*  fprintf(stderr,"saint_exception_raise(): type: %d\n",*((int*)ex)); */
  longjmp(SAINT_get_exception_base_1()->buffer[SAINT_get_exception_base_1()->
					     actual],ex);
}

/*************************************************************
 * saint_exception_push
 *************************************************************/
char *saint_exception_push(void){
  if (!SAINT_get_exception_base_1()) {
    fprintf(stderr,"Internal error in exception handling\n");
    abort();
  }
  if (SAINT_get_exception_base_1()->buffer==0) {
    SAINT_get_exception_base_1()->buffer
      = (jmp_buf*)calloc(SAINT_EXCEPTION_FAC,sizeof(jmp_buf));
    SAINT_get_exception_base_1()->all = SAINT_EXCEPTION_FAC;
  }
  else {
    if (SAINT_get_exception_base_1()->all
	<= SAINT_get_exception_base_1()->actual) {
      SAINT_get_exception_base_1()->buffer
	= (jmp_buf*)realloc(SAINT_get_exception_base_1()->all*2,sizeof(jmp_buf));
      SAINT_get_exception_base_1()->all = SAINT_get_exception_base_1()->all*2;
    }
  }
  SAINT_get_exception_base_1()->actual++;
  return (char*)(&(SAINT_get_exception_base_1()->buffer[SAINT_get_exception_base_1()->actual]));
    
}
/*************************************************************
 * saint_exception_pop():
 *************************************************************/
void saint_exception_pop(void){
  if (!SAINT_get_exception_base_1()) {
    fprintf(stderr,"Internal error in exception handling\n");
    abort();
  }
  if (SAINT_get_exception_base_1()->actual>=1) {
    SAINT_get_exception_base_1()->actual--;
  }
  else {
    fprintf(stderr,"saint_exception_pop(): Internal error in exception handling (underflow)\n");
    abort();
  }
}

/*************************************************************
 * signal handler
 *************************************************************/

/*----------------------------------------
 * interrupt
 *----------------------------------------*/
void saint_sh_int(int sig,int code,struct sigcontext *scp,char *addr) { 
  signal(SIGINT,saint_sh_int);
  /* fprintf(stderr,"%p\n",scp->sc_pc); */
  SAINT_set_exception_linenumber_1(NULL,0);
  SAINT_set_exception_filename_1(NULL,NULL);
  EXCEPTION_INT_raise_2(EXCEPTION_INT_create_2(NULL));
}

/*----------------------------------------
 * floating point exception
 *----------------------------------------*/
void saint_sh_fpe(int sig, int code, struct sigcontext *scp, char *addr) {
  volatile int i;
  char *str;
  volatile struct frame *frm;
  
  SAINT_set_exception_linenumber_1(NULL,0);
  SAINT_set_exception_filename_1(NULL,NULL);
  /*  fprintf(stderr,"%p\n",scp->sc_pc); */
  signal(SIGFPE,saint_sh_fpe);
  switch(code) {
  case FPE_INTOVF_TRAP:   str="integer overflow";          break;
  case FPE_STARTSIG_TRAP: str="process using fp";          break;
  case FPE_INTDIV_TRAP:   str="integer divide by zero";    break;
  case FPE_FLTINEX_TRAP:  str="[floating inexact result]"; break;
  case FPE_FLTDIV_TRAP:   str="[floating divide by zero]"; break;
  case FPE_FLTUND_TRAP:   str="[floating underflow]";      break;
  case FPE_FLTOPERR_TRAP: str="[floating operand error]"; break;
  case FPE_FLTOVF_TRAP:   str="[floating overflow]";       break;
  default:                str="*unknown*"; 
  }
  /*
    i = ((struct frame*)scp->sc_sp)->fr_savpc;
    frm = ((struct frame*)fp_get())->fr_savfp;
    i= frm->fr_savpc;
   */
      
  EXCEPTION_FPE_raise_2(EXCEPTION_FPE_create_2(NULL,code,
					       makestr_(str)));
}

/*----------------------------------------
 * segmentation violation
 *----------------------------------------*/
void saint_sh_segv(int sig,int code,struct sigcontext *scp,char *addr) {
  signal(SIGSEGV,saint_sh_segv);
  SAINT_set_exception_linenumber_1(NULL,0);
  SAINT_set_exception_filename_1(NULL,NULL);
  EXCEPTION_SEGV_raise_2(EXCEPTION_SEGV_create_2(NULL,NULL));
}



/*************************************************************
 * signal handler initializer
 *************************************************************/
void saint_exception_init_handler(int code) {
  switch (code) {
  case SIGINT:    signal(code,saint_sh_int    ); break;
  case SIGFPE:    signal(code,saint_sh_fpe    ); break;
  case SIGSEGV:   signal(code,saint_sh_segv   ); break;

  default: fprintf(stderr,"saint_exception_init_handler(): unknown exception_handler\n");
  }
}
  
/*************************************************************
 * signal handler deinitializer
 *************************************************************/
void saint_exception_deinit_handler(int code) {
  switch (code) {
  case SIGINT:    signal(code,SIG_DFL); break;
  case SIGFPE:    signal(code,SIG_DFL); break;
  case SIGSEGV:   signal(code,SIG_DFL); break;

  default: fprintf(stderr,"saint_exception_deinit_handler(): unknown exception_handler\n");
  }
}



/*************************************************************
 * exception handling initializer
 *************************************************************/
void saint_exception_init(void) {
  char *str;
  
  if (!SAINT_get_exception_base_1()) {
    SAINT_set_exception_base_1(NULL,(SaintExceptionStruct*)
			     calloc(1,sizeof(SaintExceptionStruct)));
  }
}

/*************************************************************
 * exception handling deinitializer
 *************************************************************/
void saint_exception_deinit(void) {
}


/*************************************************************
 * aux functions
 *************************************************************/
int saint_f_ob_to_int(int val) {
  return val;
}

/*************************************************************
 * aux functions, used from compiler (internal)
 *************************************************************/
void _raise_info(char *exception_file,int exception_line) {
  SAINT_set_exception_filename_1(NULL,makestr_(exception_file));
  SAINT_set_exception_linenumber_1(NULL,exception_line);
}

