/*  -*- Mode: C;  -*-
 * File: rts.c
 * Author: Martin Trapp (trapp@ira.uka.de)
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
 ** Last edited: Feb 18 23:13 1993 (mauch)
 ** Created: Tue Aug 11 17:22:21 1992 (trapp)
 **~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/** Project:
 **
 ** Description:
 **
 ** Functions:
 **
 ** ID: $Id$
 **
 ** Related Packages:
 **
 ** Miscellanous:
 **
 **~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ** $Log$
 **~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

# define min(a,b) (((a)<(b))?(a):(b))
# include <stdio.h>

extern EXCEPTION_ARRAY_BOUND_raise_3();
extern EXCEPTION_ARRAY_BOUND_create_3();

extern int   SAINT_get_exception_linenumber_1(void*,int);
extern void* SAINT_set_exception_filename_1(void*, char*);

char *makestr_(char* str);

/*************************************************************
 *
 *************************************************************/
void saint_rearrange1(char *self, char *res, int off, int size, int elemsize,
		     int osize, int nsize){

  memcpy(res+off,self+off,size-off);
  memcpy(res+size,self+size,min(osize,nsize)*elemsize);
}


/*************************************************************
 *
 *************************************************************/
void saint_rearrange2(char *self, char *res, int off, int size, int elemsize,
		     int osize1, int osize2, int nsize1, int nsize2){

  int i;
  
  memcpy(res+off,self+off,size-off);
  for (i=1; i< min(osize2,nsize2); i++)
    memcpy(res +size+i*nsize1*elemsize,
	   self+size+i*osize1*elemsize,
	   min(osize1,nsize1)*elemsize);
}


/*************************************************************
 *
 *************************************************************/
void saint_rearrange3(char *self, char *res, int off, int size, int elemsize,
		     int osize1, int osize2, int osize3,
		     int nsize1, int nsize2, int nsize3){

  int i,j;

  memcpy(res+off,self+off,size-off);
  for (i=0; i< min(osize3,nsize3); i++)
    for (j=0; j< min(osize2,nsize2); j++)
      memcpy(res + size + (i * nsize1 * nsize2 + j * nsize1) * elemsize,
	     self+ size + (i * osize1 * osize2 + j * osize1) * elemsize,
	     min(osize1,nsize1) * elemsize);
}


/*************************************************************
 *
 *************************************************************/
void saint_rearrange4(char *self, char *res, int off, int size, int elemsize,
		     int osize1, int osize2, int osize3, int osize4,
		     int nsize1, int nsize2, int nsize3, int nsize4){

  int i,j,k;

  memcpy(res+off,self+off,size-off);
  for (i=0; i< min(osize4,nsize4); i++)
    for (j=0; j< min(osize3,nsize3); j++)
      for (k=0; k< min(osize2,nsize2); k++)
      memcpy(res + size + (i * nsize1 * nsize2 * nsize3 +
			   j * nsize1 * nsize2 +
			   k * nsize1) * elemsize,
	     self+ size + (i * osize1 * osize2 * osize3 +
			   j * osize1 * osize2 +
			   k * osize1) * elemsize,
	     min(osize1,nsize1) * elemsize);
}



/*************************************************************
 *
 *************************************************************/
void saint_abort(void){
  fprintf(stderr,"       use gdb's backtrace command to examine core file.\n");
  abort();
}


/*************************************************************
 *
 *************************************************************/
void saint_voidbase(void){

  EXCEPTION_SEGV_raise_2(EXCEPTION_SEGV_create_2(NULL,makestr_("array base is void")));
  /*  
    fprintf(stderr,
    "FATAL: void pointer usage.\n");
    saint_abort();
  */
}

/*************************************************************
 *
 *************************************************************/
void saint_voidderef(void){

  SAINT_set_exception_linenumber_1(NULL,0);
  SAINT_set_exception_filename_1(NULL,NULL);
  EXCEPTION_SEGV_raise_2(EXCEPTION_SEGV_create_2(NULL,NULL));
  /*  
    fprintf(stderr,
    "FATAL: void pointer usage.\n");
    saint_abort();
  */
}

/*************************************************************
 *
 *************************************************************/
void saint_incotypes(void){

  fprintf(stderr,"FATAL: incompatiple types in assignment.\n");
  saint_abort();
}


/*************************************************************
 *
 *************************************************************/
void *saint_voidtest(void *ptr){

  if (ptr) return ptr;
  saint_voidderef();
}


/*************************************************************
 * ARRAY/ARR/ROW : index bound out of range
 *************************************************************/
void saint_bound_check(int idx, int max){
  /* 
    fprintf(stderr,
    "FATAL: array index out of bound: %d for [0..%d].\n",idx,max-1);
    saint_abort();
    */
  EXCEPTION_ARRAY_BOUND_raise_3(EXCEPTION_ARRAY_BOUND_create_3(NULL,idx,max-1));
}


extern void saint_calloc_initialize(void);

/*************************************************************
 *
 *************************************************************/
void saint_init_rts(void){
  saint_calloc_initialize();
}

/************************************************************
 * saint_assert
 ************************************************************/
void saint_assert(void) {
  /*  fprintf(stderr,
      "%s: %d: FATAL: assertion failed.",file,line);
      */
  fprintf(stderr,"FATAL: assertion failed.\n");
  saint_abort();
}
