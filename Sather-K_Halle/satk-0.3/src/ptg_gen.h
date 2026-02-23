/* Copyright (C) 2010, University of Halle */

/*  This file is part of Sather-K Compiler Halle.
      
    Sather-K Compiler Halle is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
                      
    Sather-K Compiler Halle is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
                                      
    You should have received a copy of the GNU General Public
    License along with Sather-K Compiler Halle.  If not, see
    <http://www.gnu.org/licenses/>. */
    
#ifndef _PTGGEN_H
#define _PTGGEN_H

#include <stdio.h>
#include "eliproto.h"

/* Include-files specified in .ptg.phi-files */

#include "ptg.h"
/* Definition of Output-Macros */

#if !defined(PTG_OUTPUT_FILE)
#    define PTG_OUTPUT_FILE FILE *
#    define PTG_OUTPUT_DEFAULT 1
#else
#    define PTG_OUTPUT_DEFAULT 0
#endif
#if !defined(PTG_OUTPUT_STRING)
#    define PTG_OUTPUT_STRING(file,param) fputs(param, file)
#    if !defined(PTG_OUTPUT_INT)
#            define PTG_OUTPUT_INT(file,param)    fprintf(file,"%d",param)
#    endif
#    if !defined(PTG_OUTPUT_LONG)
#            define PTG_OUTPUT_LONG(file,param)   fprintf(file,"%ld",param)
#    endif
#    if !defined(PTG_OUTPUT_SHORT)
#            define PTG_OUTPUT_SHORT(file,param)  fprintf(file,"%d",(int) param)
#    endif
#    if !defined(PTG_OUTPUT_CHAR)
#            define PTG_OUTPUT_CHAR(file,param)   fputc(param, file)
#    endif
#    if !defined(PTG_OUTPUT_FLOAT)
#            define PTG_OUTPUT_FLOAT(file,param)  fprintf(file,"%g",(double)param)
#    endif
#    if !defined(PTG_OUTPUT_DOUBLE)
#            define PTG_OUTPUT_DOUBLE(file,param) fprintf(file,"%g",param)
#    endif

#else
     /* PTG_OUTPUT_STRING defined */
     extern void _PTGPrintInt ELI_ARG((PTG_OUTPUT_FILE,int));
     extern void _PTGPrintLong ELI_ARG((PTG_OUTPUT_FILE,long));
     extern void _PTGPrintChar ELI_ARG((PTG_OUTPUT_FILE,char));
     extern void _PTGPrintDouble ELI_ARG((PTG_OUTPUT_FILE,double));
#    if !defined(PTG_OUTPUT_INT)
#            define PTG_OUTPUT_INT(file,param)    _PTGPrintInt(file,param)
#    endif
#    if !defined(PTG_OUTPUT_LONG)
#            define PTG_OUTPUT_LONG(file,param)   _PTGPrintLong(file,param)
#    endif
#    if !defined(PTG_OUTPUT_SHORT)
#            define PTG_OUTPUT_SHORT(file,param)  _PTGPrintInt(file,(int)param)
#    endif
#    if !defined(PTG_OUTPUT_CHAR)
#            define PTG_OUTPUT_CHAR(file,param)   _PTGPrintChar(file,param)
#    endif
#    if !defined(PTG_OUTPUT_FLOAT)
#            define PTG_OUTPUT_FLOAT(file,param)  _PTGPrintDouble(file,(double)param)
#    endif
#    if !defined(PTG_OUTPUT_DOUBLE)
#            define PTG_OUTPUT_DOUBLE(file,param) _PTGPrintDouble(file,param)
#    endif
#endif

/* Define PTGNode Type */
#if defined(__cplusplus)
struct _SPTG0;
typedef void (* _PTGProc)(struct _SPTG0 *);
#else
typedef void (* _PTGProc)();
#endif

typedef struct _SPTG0
{
  _PTGProc _print;
} * _PPTG0;
typedef _PPTG0 PTGNode;                      /* the only exported type */

/* predefined static PTGNULL-Node */

extern struct _SPTG0 _PTGNULL;
#define PTGNULL (& _PTGNULL)
#define PTGNull() (& _PTGNULL)

/* output functions */

#if PTG_OUTPUT_DEFAULT
extern PTGNode PTGOut ELI_ARG((PTGNode root));
extern PTGNode PTGOutFile ELI_ARG((const char *filename, PTGNode root));
extern PTGNode PTGOutFPtr ELI_ARG((FILE *output, PTGNode root));
#endif
extern PTGNode PTGProcess ELI_ARG((PTG_OUTPUT_FILE file, PTGNode root));

/* Memory Management functions. */

extern void PTGFree ELI_ARG((void));

/* ============================ */
/* functions for making PTG nodes */
PTGNode PTGcilBox ELI_ARG((PTGNode p1));
PTGNode PTGcilBranchFalse ELI_ARG((CONST char* p1));
PTGNode PTGcilBranchTrue ELI_ARG((CONST char* p1));
PTGNode PTGcilCast ELI_ARG((PTGNode p1));
PTGNode PTGcilCatch ELI_ARG((PTGNode p1, PTGNode p2));
PTGNode PTGcilDup ELI_ARG((void));
PTGNode PTGcilIsinst ELI_ARG((PTGNode p1));
PTGNode PTGcilJump ELI_ARG((CONST char* p1));
PTGNode PTGcilJumpNull ELI_ARG((CONST char* p1));
PTGNode PTGcilLeave ELI_ARG((CONST char* p1));
PTGNode PTGcilMethodCall ELI_ARG((PTGNode p1, PTGNode p2, PTGNode p3, PTGNode p4));
PTGNode PTGcilMethodCallVirt ELI_ARG((PTGNode p1, PTGNode p2, PTGNode p3, PTGNode p4));
PTGNode PTGcilNewObjectArgs ELI_ARG((PTGNode p1, PTGNode p2));
PTGNode PTGcilNewArray ELI_ARG((PTGNode p1));
PTGNode PTGcilNewObject ELI_ARG((PTGNode p1));
PTGNode PTGcilPop ELI_ARG((void));
PTGNode PTGcilPushArgumentAddress ELI_ARG((PTGNode p1));
PTGNode PTGcilPushArgument ELI_ARG((PTGNode p1));
PTGNode PTGcilPushArgumentNum ELI_ARG((int p1));
PTGNode PTGcilPushFieldAddress ELI_ARG((PTGNode p1));
PTGNode PTGcilPushField ELI_ARG((PTGNode p1));
PTGNode PTGcilPushLocalAddress ELI_ARG((PTGNode p1));
PTGNode PTGcilPushLocal ELI_ARG((PTGNode p1));
PTGNode PTGcilPushNull ELI_ARG((void));
PTGNode PTGcilPushObject ELI_ARG((PTGNode p1));
PTGNode PTGcilPushSelf ELI_ARG((void));
PTGNode PTGcilPushStaticFieldAddress ELI_ARG((PTGNode p1));
PTGNode PTGcilPushStaticField ELI_ARG((PTGNode p1));
PTGNode PTGcilRethrow ELI_ARG((void));
PTGNode PTGcilReturn ELI_ARG((void));
PTGNode PTGcilStoreArgument ELI_ARG((PTGNode p1));
PTGNode PTGcilStoreField ELI_ARG((PTGNode p1));
PTGNode PTGcilStoreLocal ELI_ARG((PTGNode p1));
PTGNode PTGcilStoreObject ELI_ARG((PTGNode p1));
PTGNode PTGcilStoreStaticField ELI_ARG((PTGNode p1));
PTGNode PTGcilThrow ELI_ARG((void));
PTGNode PTGcilTry ELI_ARG((PTGNode p1));
PTGNode PTGcilUnbox ELI_ARG((PTGNode p1));
PTGNode PTGIdent ELI_ARG((CONST char* p1));
PTGNode PTGNumber ELI_ARG((int p1));
PTGNode PTGCommaSeq ELI_ARG((PTGNode p1, PTGNode p2));
PTGNode PTGSpaceSeq ELI_ARG((PTGNode p1, PTGNode p2));
PTGNode PTGSemicolonSeq ELI_ARG((PTGNode p1, PTGNode p2));
PTGNode PTGNewLineSeq ELI_ARG((PTGNode p1, PTGNode p2));
PTGNode PTGTuple ELI_ARG((PTGNode p1, PTGNode p2));
PTGNode PTGTriple ELI_ARG((PTGNode p1, PTGNode p2, PTGNode p3));
PTGNode PTGParenthesis ELI_ARG((PTGNode p1));
PTGNode PTGBracket ELI_ARG((PTGNode p1));
PTGNode PTGBraces ELI_ARG((PTGNode p1));
PTGNode PTGResultType ELI_ARG((PTGNode p1));
PTGNode PTGcilBoolConstant ELI_ARG((CONST char* p1));
PTGNode PTGcilIntConstant ELI_ARG((int p1));
PTGNode PTGcilCharConstant ELI_ARG((int p1));
PTGNode PTGcilStrConstant ELI_ARG((PTGNode p1));
PTGNode PTGcilSatk2CLR ELI_ARG((PTGNode p1, PTGNode p2));
PTGNode PTGcilFallTrue ELI_ARG((CONST char* p1, PTGNode p2, CONST char* p3, PTGNode p4));
PTGNode PTGcilFallFalse ELI_ARG((CONST char* p1, PTGNode p2, CONST char* p3, PTGNode p4));
PTGNode PTGcilCase ELI_ARG((CONST char* p1, PTGNode p2, CONST char* p3, CONST char* p4));
PTGNode PTGcilEqual ELI_ARG((PTGNode p1));
PTGNode PTGcilGreaterEqual ELI_ARG((PTGNode p1));
PTGNode PTGcilLowerEqual ELI_ARG((PTGNode p1));
PTGNode PTGcilWhile ELI_ARG((CONST char* p1, PTGNode p2, PTGNode p3, CONST char* p4));
PTGNode PTGcilValueToAddress ELI_ARG((PTGNode p1));
PTGNode PTGcilMapExceptions ELI_ARG((CONST char* p1, int p2, CONST char* p3, CONST char* p4, CONST char* p5));
PTGNode PTGcilRaiseException ELI_ARG((PTGNode p1, CONST char* p2, int p3));
PTGNode PTGcilLoadParam ELI_ARG((CONST char* p1));
PTGNode PTGcilLoadValueParam ELI_ARG((CONST char* p1, PTGNode p2));
PTGNode PTGcilStoreParam ELI_ARG((CONST char* p1));
PTGNode PTGcilStoreValueParam ELI_ARG((CONST char* p1, PTGNode p2));
PTGNode PTGcilConvertMainArguments ELI_ARG((CONST char* p1));
PTGNode PTGcilCallConvert ELI_ARG((PTGNode p1, PTGNode p2));
PTGNode PTGcilGetStreamObject ELI_ARG((PTGNode p1, PTGNode p2, PTGNode p3, PTGNode p4, PTGNode p5));
PTGNode PTGcilResumeStream ELI_ARG((PTGNode p1, PTGNode p2));
PTGNode PTGcilSetStreamStatus ELI_ARG((PTGNode p1, int p2));
PTGNode PTGcilImplStreamCheckEnd ELI_ARG((PTGNode p1, PTGNode p2, PTGNode p3, PTGNode p4, PTGNode p5));
PTGNode PTGcilExplStreamCheckEnd ELI_ARG((PTGNode p1, PTGNode p2, PTGNode p3, PTGNode p4, PTGNode p5));
PTGNode PTGcilStreamTerminate ELI_ARG((PTGNode p1));
PTGNode PTGcilArrayCopy ELI_ARG((PTGNode p1));
PTGNode PTGcilLocals ELI_ARG((PTGNode p1));
PTGNode PTGcilMethodBody ELI_ARG((int p1, PTGNode p2, PTGNode p3));
PTGNode PTGcilIdent ELI_ARG((CONST char* p1));
PTGNode PTGcilLabel ELI_ARG((CONST char* p1));
PTGNode PTGcilFieldRef ELI_ARG((PTGNode p1, PTGNode p2, PTGNode p3));
PTGNode PTGcilBlock ELI_ARG((PTGNode p1));
PTGNode PTGcilAssembly ELI_ARG((CONST char* p1, PTGNode p2));
PTGNode PTGcilConstructor ELI_ARG((PTGNode p1, PTGNode p2));
PTGNode PTGcilClassConstructor ELI_ARG((PTGNode p1));
PTGNode PTGcilMainWrapper ELI_ARG((PTGNode p1, PTGNode p2, PTGNode p3, PTGNode p4, PTGNode p5, PTGNode p6, PTGNode p7));
PTGNode PTGcilBuiltinValue ELI_ARG((PTGNode p1, PTGNode p2));
PTGNode PTGcilClassDecl ELI_ARG((PTGNode p1, PTGNode p2));
PTGNode PTGcilClassHead ELI_ARG((PTGNode p1, PTGNode p2, PTGNode p3, PTGNode p4));
PTGNode PTGcilClassAttributes ELI_ARG((PTGNode p1, PTGNode p2));
PTGNode PTGcilExtends ELI_ARG((PTGNode p1));
PTGNode PTGcilImplements ELI_ARG((PTGNode p1));
PTGNode PTGcilField ELI_ARG((PTGNode p1));
PTGNode PTGcilMethod ELI_ARG((PTGNode p1, PTGNode p2, PTGNode p3, PTGNode p4, PTGNode p5));

/* prototypes for used function call insertions */

void IndentNewLine ELI_ARG((PTG_OUTPUT_FILE));
void IndentIncr ELI_ARG((PTG_OUTPUT_FILE));
void IndentDecr ELI_ARG((PTG_OUTPUT_FILE));
/* ============================ */

#ifdef MONITOR
/* Monitoring support for structured values */
#define DAPTO_RESULTPTGNode(n) DAPTO_RESULT_PTR(n)
#define DAPTO_ARGPTGNode(n) DAPTO_ARG_PTR(n, PTGNode)
#endif

#endif
