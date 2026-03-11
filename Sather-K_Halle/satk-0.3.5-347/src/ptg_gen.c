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
    
#include <stdio.h>
#include <stdlib.h>

#include "ptg_gen.h"
#include "obstack.h"

/* -------------------------------------------------------- */
/*                      Memory Management                   */
/* -------------------------------------------------------- */

static Obstack _PTGObstack;
static void *_PTGFirstObj = NULL;

static void _PTGInit()
{
       if (_PTGFirstObj)
               return;
       obstack_init(&_PTGObstack);
       _PTGFirstObj = obstack_alloc(&_PTGObstack, 0);
}

void PTGFree()
{
       obstack_free(&_PTGObstack, _PTGFirstObj);
       _PTGFirstObj = obstack_alloc(&_PTGObstack, 0);
}


#if defined(__STDC__) || defined(__cplusplus)
static void *MALLOC(int size)
#else
static void *MALLOC(size) int size;
#endif
{
       if (! _PTGFirstObj)
               _PTGInit();
       return (obstack_alloc(&_PTGObstack, size));
}

/* -------------------------------------------------------- */
/*                       Output-functions                   */
/* -------------------------------------------------------- */

static PTG_OUTPUT_FILE f;
static char buffer[40];

#if PTG_OUTPUT_DEFAULT
#if defined(__STDC__) || defined(__cplusplus)
PTGNode PTGOut (PTGNode r)
#else
PTGNode PTGOut (r)
       PTGNode r;
#endif
{
       f = stdout;
       if (r) {
               (* (r->_print)) (r);
       }
       return (r);
}

#if defined(__STDC__) || defined(__cplusplus)
PTGNode PTGOutFile (const char *fn, PTGNode r)
#else
PTGNode PTGOutFile (fn, r)
       char * fn; PTGNode r;
#endif
{
       if ((f = fopen(fn, "w"))  == (FILE *)NULL)
       {
               fprintf(stderr, "ERROR: PTGOutFile: output file '%s' can't be opened.\n",fn);
               exit(1);
       }
       if (r)
               (* (r->_print)) (r);
       fclose(f);
       return (r);
}

#if defined(__STDC__) || defined(__cplusplus)
PTGNode PTGOutFPtr(FILE *fptr, PTGNode r)
#else
PTGNode PTGOutFPtr(fptr, r)
       FILE *fptr; PTGNode r;
#endif
{
       if ((f = fptr) == (FILE *)NULL)
       {
               fprintf(stderr, "ERROR: PTGOutFPtr: output file not open.\n");
               exit(1);
       }
       if (r)
               (* (r->_print)) (r);
       return (r);
}

#endif

#if defined(__STDC__) || defined(__cplusplus)
PTGNode PTGProcess(PTG_OUTPUT_FILE file, PTGNode r)
#else
PTGNode PTGProcess(file, r)
       PTG_OUTPUT_FILE file; PTGNode r;
#endif
{
       f = file;
       if (r)
               (* (r->_print)) (r);
       return (r);
}
/* -------------------------------------------------------- */
/*                            PTGNULL                       */
/* -------------------------------------------------------- */

/* Define PTGNULL as a PTGNode that prints nothing. */

#if defined(__STDC__) || defined(__cplusplus)
static void _PrPTGNULL(_PPTG0 n)
#else
static void _PrPTGNULL(n)
_PPTG0 n;
#endif
{(void)n; /* function printing nothing */}

struct _SPTG0   _PTGNULL = { (_PTGProc) _PrPTGNULL };

/* -------------------------------------------------------- */
/*          Node-Construction and Print-functions           */
/* -------------------------------------------------------- */

/* ============================ */

/* Implementation of Pattern cilBox */

typedef struct _SPTGcilBox{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilBox;

#ifdef PROTO_OK
static void _PrPTGcilBox(_PPTGcilBox n)
#else
static void _PrPTGcilBox(n)
	_PPTGcilBox n;
#endif
{
	PTG_OUTPUT_STRING(f, "box ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilBox(PTGNode p1)
#else
PTGNode PTGcilBox(p1)

PTGNode p1;
#endif
{
	_PPTGcilBox n;
	n = (_PPTGcilBox)MALLOC(sizeof(struct _SPTGcilBox));
	n->_print = (_PTGProc)_PrPTGcilBox;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilBranchFalse */

typedef struct _SPTGcilBranchFalse{
	_PTGProc _print;
	CONST char* p1;
} * _PPTGcilBranchFalse;

#ifdef PROTO_OK
static void _PrPTGcilBranchFalse(_PPTGcilBranchFalse n)
#else
static void _PrPTGcilBranchFalse(n)
	_PPTGcilBranchFalse n;
#endif
{
	PTG_OUTPUT_STRING(f, "brfalse ");
	PTG_OUTPUT_STRING(f, n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilBranchFalse(CONST char* p1)
#else
PTGNode PTGcilBranchFalse(p1)

CONST char* p1;
#endif
{
	_PPTGcilBranchFalse n;
	n = (_PPTGcilBranchFalse)MALLOC(sizeof(struct _SPTGcilBranchFalse));
	n->_print = (_PTGProc)_PrPTGcilBranchFalse;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilBranchTrue */

typedef struct _SPTGcilBranchTrue{
	_PTGProc _print;
	CONST char* p1;
} * _PPTGcilBranchTrue;

#ifdef PROTO_OK
static void _PrPTGcilBranchTrue(_PPTGcilBranchTrue n)
#else
static void _PrPTGcilBranchTrue(n)
	_PPTGcilBranchTrue n;
#endif
{
	PTG_OUTPUT_STRING(f, "brtrue ");
	PTG_OUTPUT_STRING(f, n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilBranchTrue(CONST char* p1)
#else
PTGNode PTGcilBranchTrue(p1)

CONST char* p1;
#endif
{
	_PPTGcilBranchTrue n;
	n = (_PPTGcilBranchTrue)MALLOC(sizeof(struct _SPTGcilBranchTrue));
	n->_print = (_PTGProc)_PrPTGcilBranchTrue;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilCast */

typedef struct _SPTGcilCast{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilCast;

#ifdef PROTO_OK
static void _PrPTGcilCast(_PPTGcilCast n)
#else
static void _PrPTGcilCast(n)
	_PPTGcilCast n;
#endif
{
	PTG_OUTPUT_STRING(f, "//castclass ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilCast(PTGNode p1)
#else
PTGNode PTGcilCast(p1)

PTGNode p1;
#endif
{
	_PPTGcilCast n;
	n = (_PPTGcilCast)MALLOC(sizeof(struct _SPTGcilCast));
	n->_print = (_PTGProc)_PrPTGcilCast;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilCatch */

typedef struct _SPTGcilCatch{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
} * _PPTGcilCatch;

#ifdef PROTO_OK
static void _PrPTGcilCatch(_PPTGcilCatch n)
#else
static void _PrPTGcilCatch(n)
	_PPTGcilCatch n;
#endif
{
	PTG_OUTPUT_STRING(f, " catch ");
	n->p1->_print(n->p1);
	n->p2->_print(n->p2);
}

#ifdef PROTO_OK
PTGNode PTGcilCatch(PTGNode p1, PTGNode p2)
#else
PTGNode PTGcilCatch(p1, p2)

PTGNode p1;
PTGNode p2;
#endif
{
	_PPTGcilCatch n;
	n = (_PPTGcilCatch)MALLOC(sizeof(struct _SPTGcilCatch));
	n->_print = (_PTGProc)_PrPTGcilCatch;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern cilDup */

typedef struct _SPTGcilDup{
	_PTGProc _print;
} * _PPTGcilDup;

#ifdef PROTO_OK
static void _PrPTGcilDup(_PPTGcilDup n)
#else
static void _PrPTGcilDup(n)
	_PPTGcilDup n;
#endif
{
	PTG_OUTPUT_STRING(f, "dup");
}

static struct _SPTGcilDup _sptgcilDup = { (_PTGProc) _PrPTGcilDup };

#ifdef PROTO_OK
PTGNode PTGcilDup(void)
#else
PTGNode PTGcilDup()
#endif
{
	return (PTGNode)(&_sptgcilDup);
}


/* Implementation of Pattern cilIsinst */

typedef struct _SPTGcilIsinst{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilIsinst;

#ifdef PROTO_OK
static void _PrPTGcilIsinst(_PPTGcilIsinst n)
#else
static void _PrPTGcilIsinst(n)
	_PPTGcilIsinst n;
#endif
{
	PTG_OUTPUT_STRING(f, "isinst ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilIsinst(PTGNode p1)
#else
PTGNode PTGcilIsinst(p1)

PTGNode p1;
#endif
{
	_PPTGcilIsinst n;
	n = (_PPTGcilIsinst)MALLOC(sizeof(struct _SPTGcilIsinst));
	n->_print = (_PTGProc)_PrPTGcilIsinst;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilJump */

typedef struct _SPTGcilJump{
	_PTGProc _print;
	CONST char* p1;
} * _PPTGcilJump;

#ifdef PROTO_OK
static void _PrPTGcilJump(_PPTGcilJump n)
#else
static void _PrPTGcilJump(n)
	_PPTGcilJump n;
#endif
{
	PTG_OUTPUT_STRING(f, "br ");
	PTG_OUTPUT_STRING(f, n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilJump(CONST char* p1)
#else
PTGNode PTGcilJump(p1)

CONST char* p1;
#endif
{
	_PPTGcilJump n;
	n = (_PPTGcilJump)MALLOC(sizeof(struct _SPTGcilJump));
	n->_print = (_PTGProc)_PrPTGcilJump;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilJumpNull */

typedef struct _SPTGcilJumpNull{
	_PTGProc _print;
	CONST char* p1;
} * _PPTGcilJumpNull;

#ifdef PROTO_OK
static void _PrPTGcilJumpNull(_PPTGcilJumpNull n)
#else
static void _PrPTGcilJumpNull(n)
	_PPTGcilJumpNull n;
#endif
{
	PTG_OUTPUT_STRING(f, "brnull ");
	PTG_OUTPUT_STRING(f, n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilJumpNull(CONST char* p1)
#else
PTGNode PTGcilJumpNull(p1)

CONST char* p1;
#endif
{
	_PPTGcilJumpNull n;
	n = (_PPTGcilJumpNull)MALLOC(sizeof(struct _SPTGcilJumpNull));
	n->_print = (_PTGProc)_PrPTGcilJumpNull;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilLeave */

typedef struct _SPTGcilLeave{
	_PTGProc _print;
	CONST char* p1;
} * _PPTGcilLeave;

#ifdef PROTO_OK
static void _PrPTGcilLeave(_PPTGcilLeave n)
#else
static void _PrPTGcilLeave(n)
	_PPTGcilLeave n;
#endif
{
	PTG_OUTPUT_STRING(f, "leave ");
	PTG_OUTPUT_STRING(f, n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilLeave(CONST char* p1)
#else
PTGNode PTGcilLeave(p1)

CONST char* p1;
#endif
{
	_PPTGcilLeave n;
	n = (_PPTGcilLeave)MALLOC(sizeof(struct _SPTGcilLeave));
	n->_print = (_PTGProc)_PrPTGcilLeave;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilMethodCall */

typedef struct _SPTGcilMethodCall{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
	PTGNode p3;
	PTGNode p4;
} * _PPTGcilMethodCall;

#ifdef PROTO_OK
static void _PrPTGcilMethodCall(_PPTGcilMethodCall n)
#else
static void _PrPTGcilMethodCall(n)
	_PPTGcilMethodCall n;
#endif
{
	PTG_OUTPUT_STRING(f, "call instance ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, " ");
	n->p2->_print(n->p2);
	PTG_OUTPUT_STRING(f, "::");
	n->p3->_print(n->p3);
	PTG_OUTPUT_STRING(f, " (");
	n->p4->_print(n->p4);
	PTG_OUTPUT_STRING(f, ")");
}

#ifdef PROTO_OK
PTGNode PTGcilMethodCall(PTGNode p1, PTGNode p2, PTGNode p3, PTGNode p4)
#else
PTGNode PTGcilMethodCall(p1, p2, p3, p4)

PTGNode p1;
PTGNode p2;
PTGNode p3;
PTGNode p4;
#endif
{
	_PPTGcilMethodCall n;
	n = (_PPTGcilMethodCall)MALLOC(sizeof(struct _SPTGcilMethodCall));
	n->_print = (_PTGProc)_PrPTGcilMethodCall;
	n->p1 = p1;
	n->p2 = p2;
	n->p3 = p3;
	n->p4 = p4;
	return (PTGNode)n;
}


/* Implementation of Pattern cilMethodCallVirt */

typedef struct _SPTGcilMethodCallVirt{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
	PTGNode p3;
	PTGNode p4;
} * _PPTGcilMethodCallVirt;

#ifdef PROTO_OK
static void _PrPTGcilMethodCallVirt(_PPTGcilMethodCallVirt n)
#else
static void _PrPTGcilMethodCallVirt(n)
	_PPTGcilMethodCallVirt n;
#endif
{
	PTG_OUTPUT_STRING(f, "callvirt instance ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, " ");
	n->p2->_print(n->p2);
	PTG_OUTPUT_STRING(f, "::");
	n->p3->_print(n->p3);
	PTG_OUTPUT_STRING(f, " (");
	n->p4->_print(n->p4);
	PTG_OUTPUT_STRING(f, ")");
}

#ifdef PROTO_OK
PTGNode PTGcilMethodCallVirt(PTGNode p1, PTGNode p2, PTGNode p3, PTGNode p4)
#else
PTGNode PTGcilMethodCallVirt(p1, p2, p3, p4)

PTGNode p1;
PTGNode p2;
PTGNode p3;
PTGNode p4;
#endif
{
	_PPTGcilMethodCallVirt n;
	n = (_PPTGcilMethodCallVirt)MALLOC(sizeof(struct _SPTGcilMethodCallVirt));
	n->_print = (_PTGProc)_PrPTGcilMethodCallVirt;
	n->p1 = p1;
	n->p2 = p2;
	n->p3 = p3;
	n->p4 = p4;
	return (PTGNode)n;
}


/* Implementation of Pattern cilNewObjectArgs */

typedef struct _SPTGcilNewObjectArgs{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
} * _PPTGcilNewObjectArgs;

#ifdef PROTO_OK
static void _PrPTGcilNewObjectArgs(_PPTGcilNewObjectArgs n)
#else
static void _PrPTGcilNewObjectArgs(n)
	_PPTGcilNewObjectArgs n;
#endif
{
	PTG_OUTPUT_STRING(f, "newobj instance void ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, "::.ctor(");
	n->p2->_print(n->p2);
	PTG_OUTPUT_STRING(f, ")");
}

#ifdef PROTO_OK
PTGNode PTGcilNewObjectArgs(PTGNode p1, PTGNode p2)
#else
PTGNode PTGcilNewObjectArgs(p1, p2)

PTGNode p1;
PTGNode p2;
#endif
{
	_PPTGcilNewObjectArgs n;
	n = (_PPTGcilNewObjectArgs)MALLOC(sizeof(struct _SPTGcilNewObjectArgs));
	n->_print = (_PTGProc)_PrPTGcilNewObjectArgs;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern cilNewArray */

typedef struct _SPTGcilNewArray{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilNewArray;

#ifdef PROTO_OK
static void _PrPTGcilNewArray(_PPTGcilNewArray n)
#else
static void _PrPTGcilNewArray(n)
	_PPTGcilNewArray n;
#endif
{
	PTG_OUTPUT_STRING(f, "newarr ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilNewArray(PTGNode p1)
#else
PTGNode PTGcilNewArray(p1)

PTGNode p1;
#endif
{
	_PPTGcilNewArray n;
	n = (_PPTGcilNewArray)MALLOC(sizeof(struct _SPTGcilNewArray));
	n->_print = (_PTGProc)_PrPTGcilNewArray;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilNewObject */

typedef struct _SPTGcilNewObject{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilNewObject;

#ifdef PROTO_OK
static void _PrPTGcilNewObject(_PPTGcilNewObject n)
#else
static void _PrPTGcilNewObject(n)
	_PPTGcilNewObject n;
#endif
{
	PTG_OUTPUT_STRING(f, "newobj instance void ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, "::.ctor ()");
}

#ifdef PROTO_OK
PTGNode PTGcilNewObject(PTGNode p1)
#else
PTGNode PTGcilNewObject(p1)

PTGNode p1;
#endif
{
	_PPTGcilNewObject n;
	n = (_PPTGcilNewObject)MALLOC(sizeof(struct _SPTGcilNewObject));
	n->_print = (_PTGProc)_PrPTGcilNewObject;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilPop */

typedef struct _SPTGcilPop{
	_PTGProc _print;
} * _PPTGcilPop;

#ifdef PROTO_OK
static void _PrPTGcilPop(_PPTGcilPop n)
#else
static void _PrPTGcilPop(n)
	_PPTGcilPop n;
#endif
{
	PTG_OUTPUT_STRING(f, "pop");
}

static struct _SPTGcilPop _sptgcilPop = { (_PTGProc) _PrPTGcilPop };

#ifdef PROTO_OK
PTGNode PTGcilPop(void)
#else
PTGNode PTGcilPop()
#endif
{
	return (PTGNode)(&_sptgcilPop);
}


/* Implementation of Pattern cilPushArgumentAddress */

typedef struct _SPTGcilPushArgumentAddress{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilPushArgumentAddress;

#ifdef PROTO_OK
static void _PrPTGcilPushArgumentAddress(_PPTGcilPushArgumentAddress n)
#else
static void _PrPTGcilPushArgumentAddress(n)
	_PPTGcilPushArgumentAddress n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldarga ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilPushArgumentAddress(PTGNode p1)
#else
PTGNode PTGcilPushArgumentAddress(p1)

PTGNode p1;
#endif
{
	_PPTGcilPushArgumentAddress n;
	n = (_PPTGcilPushArgumentAddress)MALLOC(sizeof(struct _SPTGcilPushArgumentAddress));
	n->_print = (_PTGProc)_PrPTGcilPushArgumentAddress;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilPushArgument */

typedef struct _SPTGcilPushArgument{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilPushArgument;

#ifdef PROTO_OK
static void _PrPTGcilPushArgument(_PPTGcilPushArgument n)
#else
static void _PrPTGcilPushArgument(n)
	_PPTGcilPushArgument n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldarg ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilPushArgument(PTGNode p1)
#else
PTGNode PTGcilPushArgument(p1)

PTGNode p1;
#endif
{
	_PPTGcilPushArgument n;
	n = (_PPTGcilPushArgument)MALLOC(sizeof(struct _SPTGcilPushArgument));
	n->_print = (_PTGProc)_PrPTGcilPushArgument;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilPushArgumentNum */

typedef struct _SPTGcilPushArgumentNum{
	_PTGProc _print;
	int p1;
} * _PPTGcilPushArgumentNum;

#ifdef PROTO_OK
static void _PrPTGcilPushArgumentNum(_PPTGcilPushArgumentNum n)
#else
static void _PrPTGcilPushArgumentNum(n)
	_PPTGcilPushArgumentNum n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldarg ");
	PTG_OUTPUT_INT(f, n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilPushArgumentNum(int p1)
#else
PTGNode PTGcilPushArgumentNum(p1)

int p1;
#endif
{
	_PPTGcilPushArgumentNum n;
	n = (_PPTGcilPushArgumentNum)MALLOC(sizeof(struct _SPTGcilPushArgumentNum));
	n->_print = (_PTGProc)_PrPTGcilPushArgumentNum;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilPushFieldAddress */

typedef struct _SPTGcilPushFieldAddress{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilPushFieldAddress;

#ifdef PROTO_OK
static void _PrPTGcilPushFieldAddress(_PPTGcilPushFieldAddress n)
#else
static void _PrPTGcilPushFieldAddress(n)
	_PPTGcilPushFieldAddress n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldflda ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilPushFieldAddress(PTGNode p1)
#else
PTGNode PTGcilPushFieldAddress(p1)

PTGNode p1;
#endif
{
	_PPTGcilPushFieldAddress n;
	n = (_PPTGcilPushFieldAddress)MALLOC(sizeof(struct _SPTGcilPushFieldAddress));
	n->_print = (_PTGProc)_PrPTGcilPushFieldAddress;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilPushField */

typedef struct _SPTGcilPushField{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilPushField;

#ifdef PROTO_OK
static void _PrPTGcilPushField(_PPTGcilPushField n)
#else
static void _PrPTGcilPushField(n)
	_PPTGcilPushField n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldfld ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilPushField(PTGNode p1)
#else
PTGNode PTGcilPushField(p1)

PTGNode p1;
#endif
{
	_PPTGcilPushField n;
	n = (_PPTGcilPushField)MALLOC(sizeof(struct _SPTGcilPushField));
	n->_print = (_PTGProc)_PrPTGcilPushField;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilPushLocalAddress */

typedef struct _SPTGcilPushLocalAddress{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilPushLocalAddress;

#ifdef PROTO_OK
static void _PrPTGcilPushLocalAddress(_PPTGcilPushLocalAddress n)
#else
static void _PrPTGcilPushLocalAddress(n)
	_PPTGcilPushLocalAddress n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldloca ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilPushLocalAddress(PTGNode p1)
#else
PTGNode PTGcilPushLocalAddress(p1)

PTGNode p1;
#endif
{
	_PPTGcilPushLocalAddress n;
	n = (_PPTGcilPushLocalAddress)MALLOC(sizeof(struct _SPTGcilPushLocalAddress));
	n->_print = (_PTGProc)_PrPTGcilPushLocalAddress;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilPushLocal */

typedef struct _SPTGcilPushLocal{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilPushLocal;

#ifdef PROTO_OK
static void _PrPTGcilPushLocal(_PPTGcilPushLocal n)
#else
static void _PrPTGcilPushLocal(n)
	_PPTGcilPushLocal n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldloc ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilPushLocal(PTGNode p1)
#else
PTGNode PTGcilPushLocal(p1)

PTGNode p1;
#endif
{
	_PPTGcilPushLocal n;
	n = (_PPTGcilPushLocal)MALLOC(sizeof(struct _SPTGcilPushLocal));
	n->_print = (_PTGProc)_PrPTGcilPushLocal;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilPushNull */

typedef struct _SPTGcilPushNull{
	_PTGProc _print;
} * _PPTGcilPushNull;

#ifdef PROTO_OK
static void _PrPTGcilPushNull(_PPTGcilPushNull n)
#else
static void _PrPTGcilPushNull(n)
	_PPTGcilPushNull n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldnull");
}

static struct _SPTGcilPushNull _sptgcilPushNull = { (_PTGProc) _PrPTGcilPushNull };

#ifdef PROTO_OK
PTGNode PTGcilPushNull(void)
#else
PTGNode PTGcilPushNull()
#endif
{
	return (PTGNode)(&_sptgcilPushNull);
}


/* Implementation of Pattern cilPushObject */

typedef struct _SPTGcilPushObject{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilPushObject;

#ifdef PROTO_OK
static void _PrPTGcilPushObject(_PPTGcilPushObject n)
#else
static void _PrPTGcilPushObject(n)
	_PPTGcilPushObject n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldobj ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilPushObject(PTGNode p1)
#else
PTGNode PTGcilPushObject(p1)

PTGNode p1;
#endif
{
	_PPTGcilPushObject n;
	n = (_PPTGcilPushObject)MALLOC(sizeof(struct _SPTGcilPushObject));
	n->_print = (_PTGProc)_PrPTGcilPushObject;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilPushSelf */

typedef struct _SPTGcilPushSelf{
	_PTGProc _print;
} * _PPTGcilPushSelf;

#ifdef PROTO_OK
static void _PrPTGcilPushSelf(_PPTGcilPushSelf n)
#else
static void _PrPTGcilPushSelf(n)
	_PPTGcilPushSelf n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldarg 0");
}

static struct _SPTGcilPushSelf _sptgcilPushSelf = { (_PTGProc) _PrPTGcilPushSelf };

#ifdef PROTO_OK
PTGNode PTGcilPushSelf(void)
#else
PTGNode PTGcilPushSelf()
#endif
{
	return (PTGNode)(&_sptgcilPushSelf);
}


/* Implementation of Pattern cilPushStaticFieldAddress */

typedef struct _SPTGcilPushStaticFieldAddress{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilPushStaticFieldAddress;

#ifdef PROTO_OK
static void _PrPTGcilPushStaticFieldAddress(_PPTGcilPushStaticFieldAddress n)
#else
static void _PrPTGcilPushStaticFieldAddress(n)
	_PPTGcilPushStaticFieldAddress n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldsflda ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilPushStaticFieldAddress(PTGNode p1)
#else
PTGNode PTGcilPushStaticFieldAddress(p1)

PTGNode p1;
#endif
{
	_PPTGcilPushStaticFieldAddress n;
	n = (_PPTGcilPushStaticFieldAddress)MALLOC(sizeof(struct _SPTGcilPushStaticFieldAddress));
	n->_print = (_PTGProc)_PrPTGcilPushStaticFieldAddress;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilPushStaticField */

typedef struct _SPTGcilPushStaticField{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilPushStaticField;

#ifdef PROTO_OK
static void _PrPTGcilPushStaticField(_PPTGcilPushStaticField n)
#else
static void _PrPTGcilPushStaticField(n)
	_PPTGcilPushStaticField n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldsfld ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilPushStaticField(PTGNode p1)
#else
PTGNode PTGcilPushStaticField(p1)

PTGNode p1;
#endif
{
	_PPTGcilPushStaticField n;
	n = (_PPTGcilPushStaticField)MALLOC(sizeof(struct _SPTGcilPushStaticField));
	n->_print = (_PTGProc)_PrPTGcilPushStaticField;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilRethrow */

typedef struct _SPTGcilRethrow{
	_PTGProc _print;
} * _PPTGcilRethrow;

#ifdef PROTO_OK
static void _PrPTGcilRethrow(_PPTGcilRethrow n)
#else
static void _PrPTGcilRethrow(n)
	_PPTGcilRethrow n;
#endif
{
	PTG_OUTPUT_STRING(f, "rethrow");
}

static struct _SPTGcilRethrow _sptgcilRethrow = { (_PTGProc) _PrPTGcilRethrow };

#ifdef PROTO_OK
PTGNode PTGcilRethrow(void)
#else
PTGNode PTGcilRethrow()
#endif
{
	return (PTGNode)(&_sptgcilRethrow);
}


/* Implementation of Pattern cilReturn */

typedef struct _SPTGcilReturn{
	_PTGProc _print;
} * _PPTGcilReturn;

#ifdef PROTO_OK
static void _PrPTGcilReturn(_PPTGcilReturn n)
#else
static void _PrPTGcilReturn(n)
	_PPTGcilReturn n;
#endif
{
	PTG_OUTPUT_STRING(f, "ret");
}

static struct _SPTGcilReturn _sptgcilReturn = { (_PTGProc) _PrPTGcilReturn };

#ifdef PROTO_OK
PTGNode PTGcilReturn(void)
#else
PTGNode PTGcilReturn()
#endif
{
	return (PTGNode)(&_sptgcilReturn);
}


/* Implementation of Pattern cilStoreArgument */

typedef struct _SPTGcilStoreArgument{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilStoreArgument;

#ifdef PROTO_OK
static void _PrPTGcilStoreArgument(_PPTGcilStoreArgument n)
#else
static void _PrPTGcilStoreArgument(n)
	_PPTGcilStoreArgument n;
#endif
{
	PTG_OUTPUT_STRING(f, "starg ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilStoreArgument(PTGNode p1)
#else
PTGNode PTGcilStoreArgument(p1)

PTGNode p1;
#endif
{
	_PPTGcilStoreArgument n;
	n = (_PPTGcilStoreArgument)MALLOC(sizeof(struct _SPTGcilStoreArgument));
	n->_print = (_PTGProc)_PrPTGcilStoreArgument;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilStoreField */

typedef struct _SPTGcilStoreField{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilStoreField;

#ifdef PROTO_OK
static void _PrPTGcilStoreField(_PPTGcilStoreField n)
#else
static void _PrPTGcilStoreField(n)
	_PPTGcilStoreField n;
#endif
{
	PTG_OUTPUT_STRING(f, "stfld ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilStoreField(PTGNode p1)
#else
PTGNode PTGcilStoreField(p1)

PTGNode p1;
#endif
{
	_PPTGcilStoreField n;
	n = (_PPTGcilStoreField)MALLOC(sizeof(struct _SPTGcilStoreField));
	n->_print = (_PTGProc)_PrPTGcilStoreField;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilStoreLocal */

typedef struct _SPTGcilStoreLocal{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilStoreLocal;

#ifdef PROTO_OK
static void _PrPTGcilStoreLocal(_PPTGcilStoreLocal n)
#else
static void _PrPTGcilStoreLocal(n)
	_PPTGcilStoreLocal n;
#endif
{
	PTG_OUTPUT_STRING(f, "stloc ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilStoreLocal(PTGNode p1)
#else
PTGNode PTGcilStoreLocal(p1)

PTGNode p1;
#endif
{
	_PPTGcilStoreLocal n;
	n = (_PPTGcilStoreLocal)MALLOC(sizeof(struct _SPTGcilStoreLocal));
	n->_print = (_PTGProc)_PrPTGcilStoreLocal;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilStoreObject */

typedef struct _SPTGcilStoreObject{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilStoreObject;

#ifdef PROTO_OK
static void _PrPTGcilStoreObject(_PPTGcilStoreObject n)
#else
static void _PrPTGcilStoreObject(n)
	_PPTGcilStoreObject n;
#endif
{
	PTG_OUTPUT_STRING(f, "stobj ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilStoreObject(PTGNode p1)
#else
PTGNode PTGcilStoreObject(p1)

PTGNode p1;
#endif
{
	_PPTGcilStoreObject n;
	n = (_PPTGcilStoreObject)MALLOC(sizeof(struct _SPTGcilStoreObject));
	n->_print = (_PTGProc)_PrPTGcilStoreObject;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilStoreStaticField */

typedef struct _SPTGcilStoreStaticField{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilStoreStaticField;

#ifdef PROTO_OK
static void _PrPTGcilStoreStaticField(_PPTGcilStoreStaticField n)
#else
static void _PrPTGcilStoreStaticField(n)
	_PPTGcilStoreStaticField n;
#endif
{
	PTG_OUTPUT_STRING(f, "stsfld ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilStoreStaticField(PTGNode p1)
#else
PTGNode PTGcilStoreStaticField(p1)

PTGNode p1;
#endif
{
	_PPTGcilStoreStaticField n;
	n = (_PPTGcilStoreStaticField)MALLOC(sizeof(struct _SPTGcilStoreStaticField));
	n->_print = (_PTGProc)_PrPTGcilStoreStaticField;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilThrow */

typedef struct _SPTGcilThrow{
	_PTGProc _print;
} * _PPTGcilThrow;

#ifdef PROTO_OK
static void _PrPTGcilThrow(_PPTGcilThrow n)
#else
static void _PrPTGcilThrow(n)
	_PPTGcilThrow n;
#endif
{
	PTG_OUTPUT_STRING(f, "throw");
}

static struct _SPTGcilThrow _sptgcilThrow = { (_PTGProc) _PrPTGcilThrow };

#ifdef PROTO_OK
PTGNode PTGcilThrow(void)
#else
PTGNode PTGcilThrow()
#endif
{
	return (PTGNode)(&_sptgcilThrow);
}


/* Implementation of Pattern cilTry */

typedef struct _SPTGcilTry{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilTry;

#ifdef PROTO_OK
static void _PrPTGcilTry(_PPTGcilTry n)
#else
static void _PrPTGcilTry(n)
	_PPTGcilTry n;
#endif
{
	PTG_OUTPUT_STRING(f, ".try ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilTry(PTGNode p1)
#else
PTGNode PTGcilTry(p1)

PTGNode p1;
#endif
{
	_PPTGcilTry n;
	n = (_PPTGcilTry)MALLOC(sizeof(struct _SPTGcilTry));
	n->_print = (_PTGProc)_PrPTGcilTry;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilUnbox */

typedef struct _SPTGcilUnbox{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilUnbox;

#ifdef PROTO_OK
static void _PrPTGcilUnbox(_PPTGcilUnbox n)
#else
static void _PrPTGcilUnbox(n)
	_PPTGcilUnbox n;
#endif
{
	PTG_OUTPUT_STRING(f, "unbox ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilUnbox(PTGNode p1)
#else
PTGNode PTGcilUnbox(p1)

PTGNode p1;
#endif
{
	_PPTGcilUnbox n;
	n = (_PPTGcilUnbox)MALLOC(sizeof(struct _SPTGcilUnbox));
	n->_print = (_PTGProc)_PrPTGcilUnbox;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern Ident */

typedef struct _SPTGIdent{
	_PTGProc _print;
	CONST char* p1;
} * _PPTGIdent;

#ifdef PROTO_OK
static void _PrPTGIdent(_PPTGIdent n)
#else
static void _PrPTGIdent(n)
	_PPTGIdent n;
#endif
{
	PTG_OUTPUT_STRING(f, n->p1);
}

#ifdef PROTO_OK
PTGNode PTGIdent(CONST char* p1)
#else
PTGNode PTGIdent(p1)

CONST char* p1;
#endif
{
	_PPTGIdent n;
	n = (_PPTGIdent)MALLOC(sizeof(struct _SPTGIdent));
	n->_print = (_PTGProc)_PrPTGIdent;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern Number */

typedef struct _SPTGNumber{
	_PTGProc _print;
	int p1;
} * _PPTGNumber;

#ifdef PROTO_OK
static void _PrPTGNumber(_PPTGNumber n)
#else
static void _PrPTGNumber(n)
	_PPTGNumber n;
#endif
{
	PTG_OUTPUT_INT(f, n->p1);
}

#ifdef PROTO_OK
PTGNode PTGNumber(int p1)
#else
PTGNode PTGNumber(p1)

int p1;
#endif
{
	_PPTGNumber n;
	n = (_PPTGNumber)MALLOC(sizeof(struct _SPTGNumber));
	n->_print = (_PTGProc)_PrPTGNumber;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern CommaSeq */

typedef struct _SPTGCommaSeq{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
} * _PPTGCommaSeq;

#ifdef PROTO_OK
static void _PrPTGCommaSeq(_PPTGCommaSeq n)
#else
static void _PrPTGCommaSeq(n)
	_PPTGCommaSeq n;
#endif
{
	n->p1->_print(n->p1);
	if (n->p1 != PTGNULL && n->p2 != PTGNULL)
	{
		PTG_OUTPUT_STRING(f, ",");
	}
	n->p2->_print(n->p2);
}

#ifdef PROTO_OK
PTGNode PTGCommaSeq(PTGNode p1, PTGNode p2)
#else
PTGNode PTGCommaSeq(p1, p2)

PTGNode p1;
PTGNode p2;
#endif
{
	_PPTGCommaSeq n;
	if(p1 == PTGNULL && p2 == PTGNULL)
		return PTGNULL;
	n = (_PPTGCommaSeq)MALLOC(sizeof(struct _SPTGCommaSeq));
	n->_print = (_PTGProc)_PrPTGCommaSeq;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern SpaceSeq */

typedef struct _SPTGSpaceSeq{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
} * _PPTGSpaceSeq;

#ifdef PROTO_OK
static void _PrPTGSpaceSeq(_PPTGSpaceSeq n)
#else
static void _PrPTGSpaceSeq(n)
	_PPTGSpaceSeq n;
#endif
{
	n->p1->_print(n->p1);
	if (n->p1 != PTGNULL && n->p2 != PTGNULL)
	{
		PTG_OUTPUT_STRING(f, " ");
	}
	n->p2->_print(n->p2);
}

#ifdef PROTO_OK
PTGNode PTGSpaceSeq(PTGNode p1, PTGNode p2)
#else
PTGNode PTGSpaceSeq(p1, p2)

PTGNode p1;
PTGNode p2;
#endif
{
	_PPTGSpaceSeq n;
	if(p1 == PTGNULL && p2 == PTGNULL)
		return PTGNULL;
	n = (_PPTGSpaceSeq)MALLOC(sizeof(struct _SPTGSpaceSeq));
	n->_print = (_PTGProc)_PrPTGSpaceSeq;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern SemicolonSeq */

typedef struct _SPTGSemicolonSeq{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
} * _PPTGSemicolonSeq;

#ifdef PROTO_OK
static void _PrPTGSemicolonSeq(_PPTGSemicolonSeq n)
#else
static void _PrPTGSemicolonSeq(n)
	_PPTGSemicolonSeq n;
#endif
{
	n->p1->_print(n->p1);
	if (n->p1 != PTGNULL && n->p2 != PTGNULL)
	{
		PTG_OUTPUT_STRING(f, ";");
	}
	n->p2->_print(n->p2);
}

#ifdef PROTO_OK
PTGNode PTGSemicolonSeq(PTGNode p1, PTGNode p2)
#else
PTGNode PTGSemicolonSeq(p1, p2)

PTGNode p1;
PTGNode p2;
#endif
{
	_PPTGSemicolonSeq n;
	if(p1 == PTGNULL && p2 == PTGNULL)
		return PTGNULL;
	n = (_PPTGSemicolonSeq)MALLOC(sizeof(struct _SPTGSemicolonSeq));
	n->_print = (_PTGProc)_PrPTGSemicolonSeq;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern NewLineSeq */

typedef struct _SPTGNewLineSeq{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
} * _PPTGNewLineSeq;

#ifdef PROTO_OK
static void _PrPTGNewLineSeq(_PPTGNewLineSeq n)
#else
static void _PrPTGNewLineSeq(n)
	_PPTGNewLineSeq n;
#endif
{
	n->p1->_print(n->p1);
	if (n->p1 != PTGNULL && n->p2 != PTGNULL)
	{
		IndentNewLine(f);
	}
	n->p2->_print(n->p2);
}

#ifdef PROTO_OK
PTGNode PTGNewLineSeq(PTGNode p1, PTGNode p2)
#else
PTGNode PTGNewLineSeq(p1, p2)

PTGNode p1;
PTGNode p2;
#endif
{
	_PPTGNewLineSeq n;
	if(p1 == PTGNULL && p2 == PTGNULL)
		return PTGNULL;
	n = (_PPTGNewLineSeq)MALLOC(sizeof(struct _SPTGNewLineSeq));
	n->_print = (_PTGProc)_PrPTGNewLineSeq;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern Tuple */

typedef struct _SPTGTuple{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
} * _PPTGTuple;

#ifdef PROTO_OK
static void _PrPTGTuple(_PPTGTuple n)
#else
static void _PrPTGTuple(n)
	_PPTGTuple n;
#endif
{
	n->p1->_print(n->p1);
	n->p2->_print(n->p2);
}

#ifdef PROTO_OK
PTGNode PTGTuple(PTGNode p1, PTGNode p2)
#else
PTGNode PTGTuple(p1, p2)

PTGNode p1;
PTGNode p2;
#endif
{
	_PPTGTuple n;
	if(p1 == PTGNULL && p2 == PTGNULL)
		return PTGNULL;
	n = (_PPTGTuple)MALLOC(sizeof(struct _SPTGTuple));
	n->_print = (_PTGProc)_PrPTGTuple;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern Triple */

typedef struct _SPTGTriple{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
	PTGNode p3;
} * _PPTGTriple;

#ifdef PROTO_OK
static void _PrPTGTriple(_PPTGTriple n)
#else
static void _PrPTGTriple(n)
	_PPTGTriple n;
#endif
{
	n->p1->_print(n->p1);
	n->p2->_print(n->p2);
	n->p3->_print(n->p3);
}

#ifdef PROTO_OK
PTGNode PTGTriple(PTGNode p1, PTGNode p2, PTGNode p3)
#else
PTGNode PTGTriple(p1, p2, p3)

PTGNode p1;
PTGNode p2;
PTGNode p3;
#endif
{
	_PPTGTriple n;
	if(p1 == PTGNULL && p2 == PTGNULL && p3 == PTGNULL)
		return PTGNULL;
	n = (_PPTGTriple)MALLOC(sizeof(struct _SPTGTriple));
	n->_print = (_PTGProc)_PrPTGTriple;
	n->p1 = p1;
	n->p2 = p2;
	n->p3 = p3;
	return (PTGNode)n;
}


/* Implementation of Pattern Parenthesis */

typedef struct _SPTGParenthesis{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGParenthesis;

#ifdef PROTO_OK
static void _PrPTGParenthesis(_PPTGParenthesis n)
#else
static void _PrPTGParenthesis(n)
	_PPTGParenthesis n;
#endif
{
	if (n->p1 != PTGNULL)
	{
		PTG_OUTPUT_STRING(f, "(");
	}
	n->p1->_print(n->p1);
	if (n->p1 != PTGNULL)
	{
		PTG_OUTPUT_STRING(f, ")");
	}
}

#ifdef PROTO_OK
PTGNode PTGParenthesis(PTGNode p1)
#else
PTGNode PTGParenthesis(p1)

PTGNode p1;
#endif
{
	_PPTGParenthesis n;
	if(p1 == PTGNULL)
		return PTGNULL;
	n = (_PPTGParenthesis)MALLOC(sizeof(struct _SPTGParenthesis));
	n->_print = (_PTGProc)_PrPTGParenthesis;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern Bracket */

typedef struct _SPTGBracket{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGBracket;

#ifdef PROTO_OK
static void _PrPTGBracket(_PPTGBracket n)
#else
static void _PrPTGBracket(n)
	_PPTGBracket n;
#endif
{
	if (n->p1 != PTGNULL)
	{
		PTG_OUTPUT_STRING(f, "[");
	}
	n->p1->_print(n->p1);
	if (n->p1 != PTGNULL)
	{
		PTG_OUTPUT_STRING(f, "]");
	}
}

#ifdef PROTO_OK
PTGNode PTGBracket(PTGNode p1)
#else
PTGNode PTGBracket(p1)

PTGNode p1;
#endif
{
	_PPTGBracket n;
	if(p1 == PTGNULL)
		return PTGNULL;
	n = (_PPTGBracket)MALLOC(sizeof(struct _SPTGBracket));
	n->_print = (_PTGProc)_PrPTGBracket;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern Braces */

typedef struct _SPTGBraces{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGBraces;

#ifdef PROTO_OK
static void _PrPTGBraces(_PPTGBraces n)
#else
static void _PrPTGBraces(n)
	_PPTGBraces n;
#endif
{
	if (n->p1 != PTGNULL)
	{
		PTG_OUTPUT_STRING(f, "{");
	}
	n->p1->_print(n->p1);
	if (n->p1 != PTGNULL)
	{
		PTG_OUTPUT_STRING(f, "}");
	}
}

#ifdef PROTO_OK
PTGNode PTGBraces(PTGNode p1)
#else
PTGNode PTGBraces(p1)

PTGNode p1;
#endif
{
	_PPTGBraces n;
	if(p1 == PTGNULL)
		return PTGNULL;
	n = (_PPTGBraces)MALLOC(sizeof(struct _SPTGBraces));
	n->_print = (_PTGProc)_PrPTGBraces;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern ResultType */

typedef struct _SPTGResultType{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGResultType;

#ifdef PROTO_OK
static void _PrPTGResultType(_PPTGResultType n)
#else
static void _PrPTGResultType(n)
	_PPTGResultType n;
#endif
{
	if (n->p1 != PTGNULL)
	{
		PTG_OUTPUT_STRING(f, ":");
	}
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGResultType(PTGNode p1)
#else
PTGNode PTGResultType(p1)

PTGNode p1;
#endif
{
	_PPTGResultType n;
	if(p1 == PTGNULL)
		return PTGNULL;
	n = (_PPTGResultType)MALLOC(sizeof(struct _SPTGResultType));
	n->_print = (_PTGProc)_PrPTGResultType;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilBoolConstant */

typedef struct _SPTGcilBoolConstant{
	_PTGProc _print;
	CONST char* p1;
} * _PPTGcilBoolConstant;

#ifdef PROTO_OK
static void _PrPTGcilBoolConstant(_PPTGcilBoolConstant n)
#else
static void _PrPTGcilBoolConstant(n)
	_PPTGcilBoolConstant n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldc.i4.s ");
	PTG_OUTPUT_STRING(f, n->p1);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "newobj instance void BOOL::.ctor (bool)");
}

#ifdef PROTO_OK
PTGNode PTGcilBoolConstant(CONST char* p1)
#else
PTGNode PTGcilBoolConstant(p1)

CONST char* p1;
#endif
{
	_PPTGcilBoolConstant n;
	n = (_PPTGcilBoolConstant)MALLOC(sizeof(struct _SPTGcilBoolConstant));
	n->_print = (_PTGProc)_PrPTGcilBoolConstant;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilIntConstant */

typedef struct _SPTGcilIntConstant{
	_PTGProc _print;
	int p1;
} * _PPTGcilIntConstant;

#ifdef PROTO_OK
static void _PrPTGcilIntConstant(_PPTGcilIntConstant n)
#else
static void _PrPTGcilIntConstant(n)
	_PPTGcilIntConstant n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldc.i4 ");
	PTG_OUTPUT_INT(f, n->p1);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "newobj instance void INT::.ctor (int32)");
}

#ifdef PROTO_OK
PTGNode PTGcilIntConstant(int p1)
#else
PTGNode PTGcilIntConstant(p1)

int p1;
#endif
{
	_PPTGcilIntConstant n;
	n = (_PPTGcilIntConstant)MALLOC(sizeof(struct _SPTGcilIntConstant));
	n->_print = (_PTGProc)_PrPTGcilIntConstant;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilCharConstant */

typedef struct _SPTGcilCharConstant{
	_PTGProc _print;
	int p1;
} * _PPTGcilCharConstant;

#ifdef PROTO_OK
static void _PrPTGcilCharConstant(_PPTGcilCharConstant n)
#else
static void _PrPTGcilCharConstant(n)
	_PPTGcilCharConstant n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldc.i4 ");
	PTG_OUTPUT_INT(f, n->p1);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "newobj instance void CHAR::.ctor (char)");
}

#ifdef PROTO_OK
PTGNode PTGcilCharConstant(int p1)
#else
PTGNode PTGcilCharConstant(p1)

int p1;
#endif
{
	_PPTGcilCharConstant n;
	n = (_PPTGcilCharConstant)MALLOC(sizeof(struct _SPTGcilCharConstant));
	n->_print = (_PTGProc)_PrPTGcilCharConstant;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilStrConstant */

typedef struct _SPTGcilStrConstant{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilStrConstant;

#ifdef PROTO_OK
static void _PrPTGcilStrConstant(_PPTGcilStrConstant n)
#else
static void _PrPTGcilStrConstant(n)
	_PPTGcilStrConstant n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldstr \"");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, "\"");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "newobj instance void 'STR[*]'::.ctor (string)");
}

#ifdef PROTO_OK
PTGNode PTGcilStrConstant(PTGNode p1)
#else
PTGNode PTGcilStrConstant(p1)

PTGNode p1;
#endif
{
	_PPTGcilStrConstant n;
	n = (_PPTGcilStrConstant)MALLOC(sizeof(struct _SPTGcilStrConstant));
	n->_print = (_PTGProc)_PrPTGcilStrConstant;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilSatk2CLR */

typedef struct _SPTGcilSatk2CLR{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
} * _PPTGcilSatk2CLR;

#ifdef PROTO_OK
static void _PrPTGcilSatk2CLR(_PPTGcilSatk2CLR n)
#else
static void _PrPTGcilSatk2CLR(n)
	_PPTGcilSatk2CLR n;
#endif
{
	PTG_OUTPUT_STRING(f, "call ");
	n->p2->_print(n->p2);
	PTG_OUTPUT_STRING(f, " ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, "::_valueOut(");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, ")");
}

#ifdef PROTO_OK
PTGNode PTGcilSatk2CLR(PTGNode p1, PTGNode p2)
#else
PTGNode PTGcilSatk2CLR(p1, p2)

PTGNode p1;
PTGNode p2;
#endif
{
	_PPTGcilSatk2CLR n;
	n = (_PPTGcilSatk2CLR)MALLOC(sizeof(struct _SPTGcilSatk2CLR));
	n->_print = (_PTGProc)_PrPTGcilSatk2CLR;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern cilFallTrue */

typedef struct _SPTGcilFallTrue{
	_PTGProc _print;
	CONST char* p1;
	PTGNode p2;
	CONST char* p3;
	PTGNode p4;
} * _PPTGcilFallTrue;

#ifdef PROTO_OK
static void _PrPTGcilFallTrue(_PPTGcilFallTrue n)
#else
static void _PrPTGcilFallTrue(n)
	_PPTGcilFallTrue n;
#endif
{
	PTG_OUTPUT_STRING(f, "brfalse ");
	PTG_OUTPUT_STRING(f, n->p1);
	IndentNewLine(f);
	n->p2->_print(n->p2);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "br ");
	PTG_OUTPUT_STRING(f, n->p3);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, n->p1);
	PTG_OUTPUT_STRING(f, ":");
	IndentNewLine(f);
	n->p4->_print(n->p4);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, n->p3);
	PTG_OUTPUT_STRING(f, ":");
}

#ifdef PROTO_OK
PTGNode PTGcilFallTrue(CONST char* p1, PTGNode p2, CONST char* p3, PTGNode p4)
#else
PTGNode PTGcilFallTrue(p1, p2, p3, p4)

CONST char* p1;
PTGNode p2;
CONST char* p3;
PTGNode p4;
#endif
{
	_PPTGcilFallTrue n;
	n = (_PPTGcilFallTrue)MALLOC(sizeof(struct _SPTGcilFallTrue));
	n->_print = (_PTGProc)_PrPTGcilFallTrue;
	n->p1 = p1;
	n->p2 = p2;
	n->p3 = p3;
	n->p4 = p4;
	return (PTGNode)n;
}


/* Implementation of Pattern cilFallFalse */

typedef struct _SPTGcilFallFalse{
	_PTGProc _print;
	CONST char* p1;
	PTGNode p2;
	CONST char* p3;
	PTGNode p4;
} * _PPTGcilFallFalse;

#ifdef PROTO_OK
static void _PrPTGcilFallFalse(_PPTGcilFallFalse n)
#else
static void _PrPTGcilFallFalse(n)
	_PPTGcilFallFalse n;
#endif
{
	PTG_OUTPUT_STRING(f, "brtrue ");
	PTG_OUTPUT_STRING(f, n->p1);
	IndentNewLine(f);
	n->p2->_print(n->p2);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "br ");
	PTG_OUTPUT_STRING(f, n->p3);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, n->p1);
	PTG_OUTPUT_STRING(f, ":");
	IndentNewLine(f);
	n->p4->_print(n->p4);
	PTG_OUTPUT_STRING(f, n->p3);
	PTG_OUTPUT_STRING(f, ":");
}

#ifdef PROTO_OK
PTGNode PTGcilFallFalse(CONST char* p1, PTGNode p2, CONST char* p3, PTGNode p4)
#else
PTGNode PTGcilFallFalse(p1, p2, p3, p4)

CONST char* p1;
PTGNode p2;
CONST char* p3;
PTGNode p4;
#endif
{
	_PPTGcilFallFalse n;
	n = (_PPTGcilFallFalse)MALLOC(sizeof(struct _SPTGcilFallFalse));
	n->_print = (_PTGProc)_PrPTGcilFallFalse;
	n->p1 = p1;
	n->p2 = p2;
	n->p3 = p3;
	n->p4 = p4;
	return (PTGNode)n;
}


/* Implementation of Pattern cilCase */

typedef struct _SPTGcilCase{
	_PTGProc _print;
	CONST char* p1;
	PTGNode p2;
	CONST char* p3;
	CONST char* p4;
} * _PPTGcilCase;

#ifdef PROTO_OK
static void _PrPTGcilCase(_PPTGcilCase n)
#else
static void _PrPTGcilCase(n)
	_PPTGcilCase n;
#endif
{
	PTG_OUTPUT_STRING(f, "br ");
	PTG_OUTPUT_STRING(f, n->p4);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, n->p1);
	PTG_OUTPUT_STRING(f, ":");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "pop");
	IndentNewLine(f);
	n->p2->_print(n->p2);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "br ");
	PTG_OUTPUT_STRING(f, n->p3);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, n->p4);
	PTG_OUTPUT_STRING(f, ":");
	IndentNewLine(f);
}

#ifdef PROTO_OK
PTGNode PTGcilCase(CONST char* p1, PTGNode p2, CONST char* p3, CONST char* p4)
#else
PTGNode PTGcilCase(p1, p2, p3, p4)

CONST char* p1;
PTGNode p2;
CONST char* p3;
CONST char* p4;
#endif
{
	_PPTGcilCase n;
	n = (_PPTGcilCase)MALLOC(sizeof(struct _SPTGcilCase));
	n->_print = (_PTGProc)_PrPTGcilCase;
	n->p1 = p1;
	n->p2 = p2;
	n->p3 = p3;
	n->p4 = p4;
	return (PTGNode)n;
}


/* Implementation of Pattern cilEqual */

typedef struct _SPTGcilEqual{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilEqual;

#ifdef PROTO_OK
static void _PrPTGcilEqual(_PPTGcilEqual n)
#else
static void _PrPTGcilEqual(n)
	_PPTGcilEqual n;
#endif
{
	PTG_OUTPUT_STRING(f, "call instance valuetype BOOL ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, "::is_equal(class '$OB')");
}

#ifdef PROTO_OK
PTGNode PTGcilEqual(PTGNode p1)
#else
PTGNode PTGcilEqual(p1)

PTGNode p1;
#endif
{
	_PPTGcilEqual n;
	n = (_PPTGcilEqual)MALLOC(sizeof(struct _SPTGcilEqual));
	n->_print = (_PTGProc)_PrPTGcilEqual;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilGreaterEqual */

typedef struct _SPTGcilGreaterEqual{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilGreaterEqual;

#ifdef PROTO_OK
static void _PrPTGcilGreaterEqual(_PPTGcilGreaterEqual n)
#else
static void _PrPTGcilGreaterEqual(n)
	_PPTGcilGreaterEqual n;
#endif
{
	PTG_OUTPUT_STRING(f, "call valuetype BOOL ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, "::is_geq(");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, ")");
}

#ifdef PROTO_OK
PTGNode PTGcilGreaterEqual(PTGNode p1)
#else
PTGNode PTGcilGreaterEqual(p1)

PTGNode p1;
#endif
{
	_PPTGcilGreaterEqual n;
	n = (_PPTGcilGreaterEqual)MALLOC(sizeof(struct _SPTGcilGreaterEqual));
	n->_print = (_PTGProc)_PrPTGcilGreaterEqual;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilLowerEqual */

typedef struct _SPTGcilLowerEqual{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilLowerEqual;

#ifdef PROTO_OK
static void _PrPTGcilLowerEqual(_PPTGcilLowerEqual n)
#else
static void _PrPTGcilLowerEqual(n)
	_PPTGcilLowerEqual n;
#endif
{
	PTG_OUTPUT_STRING(f, "call valuetype BOOL ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, "::is_leq(");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, ")");
}

#ifdef PROTO_OK
PTGNode PTGcilLowerEqual(PTGNode p1)
#else
PTGNode PTGcilLowerEqual(p1)

PTGNode p1;
#endif
{
	_PPTGcilLowerEqual n;
	n = (_PPTGcilLowerEqual)MALLOC(sizeof(struct _SPTGcilLowerEqual));
	n->_print = (_PTGProc)_PrPTGcilLowerEqual;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilWhile */

typedef struct _SPTGcilWhile{
	_PTGProc _print;
	CONST char* p1;
	PTGNode p2;
	PTGNode p3;
	CONST char* p4;
} * _PPTGcilWhile;

#ifdef PROTO_OK
static void _PrPTGcilWhile(_PPTGcilWhile n)
#else
static void _PrPTGcilWhile(n)
	_PPTGcilWhile n;
#endif
{
	PTG_OUTPUT_STRING(f, n->p1);
	PTG_OUTPUT_STRING(f, ":");
	IndentNewLine(f);
	n->p2->_print(n->p2);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "brfalse ");
	PTG_OUTPUT_STRING(f, n->p4);
	IndentNewLine(f);
	n->p3->_print(n->p3);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "br ");
	PTG_OUTPUT_STRING(f, n->p1);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, n->p4);
	PTG_OUTPUT_STRING(f, ":");
	IndentNewLine(f);
}

#ifdef PROTO_OK
PTGNode PTGcilWhile(CONST char* p1, PTGNode p2, PTGNode p3, CONST char* p4)
#else
PTGNode PTGcilWhile(p1, p2, p3, p4)

CONST char* p1;
PTGNode p2;
PTGNode p3;
CONST char* p4;
#endif
{
	_PPTGcilWhile n;
	n = (_PPTGcilWhile)MALLOC(sizeof(struct _SPTGcilWhile));
	n->_print = (_PTGProc)_PrPTGcilWhile;
	n->p1 = p1;
	n->p2 = p2;
	n->p3 = p3;
	n->p4 = p4;
	return (PTGNode)n;
}


/* Implementation of Pattern cilValueToAddress */

typedef struct _SPTGcilValueToAddress{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilValueToAddress;

#ifdef PROTO_OK
static void _PrPTGcilValueToAddress(_PPTGcilValueToAddress n)
#else
static void _PrPTGcilValueToAddress(n)
	_PPTGcilValueToAddress n;
#endif
{
	PTG_OUTPUT_STRING(f, "box ");
	n->p1->_print(n->p1);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "unbox ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilValueToAddress(PTGNode p1)
#else
PTGNode PTGcilValueToAddress(p1)

PTGNode p1;
#endif
{
	_PPTGcilValueToAddress n;
	n = (_PPTGcilValueToAddress)MALLOC(sizeof(struct _SPTGcilValueToAddress));
	n->_print = (_PTGProc)_PrPTGcilValueToAddress;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilMapExceptions */

typedef struct _SPTGcilMapExceptions{
	_PTGProc _print;
	CONST char* p1;
	int p2;
	CONST char* p3;
	CONST char* p4;
	CONST char* p5;
} * _PPTGcilMapExceptions;

#ifdef PROTO_OK
static void _PrPTGcilMapExceptions(_PPTGcilMapExceptions n)
#else
static void _PrPTGcilMapExceptions(n)
	_PPTGcilMapExceptions n;
#endif
{
	PTG_OUTPUT_STRING(f, "catch [mscorlib]System.Exception {");
	IndentIncr(f);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "dup");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "isinst '$EXCEPTION'");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "brnull ");
	PTG_OUTPUT_STRING(f, n->p5);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "br ");
	PTG_OUTPUT_STRING(f, n->p4);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, n->p5);
	PTG_OUTPUT_STRING(f, ":");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "newobj instance void SYS_EXCEPTION::.ctor(class [mscorlib]System.Exception)");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "dup");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldstr \"");
	PTG_OUTPUT_STRING(f, n->p1);
	PTG_OUTPUT_STRING(f, "\"");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "newobj instance void 'STR[*]'::.ctor(string)");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "stfld valuetype 'STR[*]' SYS_EXCEPTION::file_name");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "dup");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldc.i4 ");
	PTG_OUTPUT_INT(f, n->p2);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "newobj instance void 'INT'::.ctor(int32)");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "stfld valuetype 'INT' SYS_EXCEPTION::line_number");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "call class '$EXCEPTION' SYS_EXCEPTION::map()");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, n->p4);
	PTG_OUTPUT_STRING(f, ": throw");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "leave ");
	PTG_OUTPUT_STRING(f, n->p3);
	IndentDecr(f);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "}");
}

#ifdef PROTO_OK
PTGNode PTGcilMapExceptions(CONST char* p1, int p2, CONST char* p3, CONST char* p4, CONST char* p5)
#else
PTGNode PTGcilMapExceptions(p1, p2, p3, p4, p5)

CONST char* p1;
int p2;
CONST char* p3;
CONST char* p4;
CONST char* p5;
#endif
{
	_PPTGcilMapExceptions n;
	n = (_PPTGcilMapExceptions)MALLOC(sizeof(struct _SPTGcilMapExceptions));
	n->_print = (_PTGProc)_PrPTGcilMapExceptions;
	n->p1 = p1;
	n->p2 = p2;
	n->p3 = p3;
	n->p4 = p4;
	n->p5 = p5;
	return (PTGNode)n;
}


/* Implementation of Pattern cilRaiseException */

typedef struct _SPTGcilRaiseException{
	_PTGProc _print;
	PTGNode p1;
	CONST char* p2;
	int p3;
} * _PPTGcilRaiseException;

#ifdef PROTO_OK
static void _PrPTGcilRaiseException(_PPTGcilRaiseException n)
#else
static void _PrPTGcilRaiseException(n)
	_PPTGcilRaiseException n;
#endif
{
	PTG_OUTPUT_STRING(f, "newobj instance void ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, "::.ctor ()");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "dup");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldstr \"");
	PTG_OUTPUT_STRING(f, n->p2);
	PTG_OUTPUT_STRING(f, "\"");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "newobj instance void 'STR[*]'::.ctor (string)");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "stfld valuetype 'STR[*]' ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, "::file_name");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "dup");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldc.i4 ");
	PTG_OUTPUT_INT(f, n->p3);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "newobj instance void 'INT'::.ctor (int32)");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "stfld valuetype 'INT' ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, "::line_number");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "throw");
}

#ifdef PROTO_OK
PTGNode PTGcilRaiseException(PTGNode p1, CONST char* p2, int p3)
#else
PTGNode PTGcilRaiseException(p1, p2, p3)

PTGNode p1;
CONST char* p2;
int p3;
#endif
{
	_PPTGcilRaiseException n;
	n = (_PPTGcilRaiseException)MALLOC(sizeof(struct _SPTGcilRaiseException));
	n->_print = (_PTGProc)_PrPTGcilRaiseException;
	n->p1 = p1;
	n->p2 = p2;
	n->p3 = p3;
	return (PTGNode)n;
}


/* Implementation of Pattern cilLoadParam */

typedef struct _SPTGcilLoadParam{
	_PTGProc _print;
	CONST char* p1;
} * _PPTGcilLoadParam;

#ifdef PROTO_OK
static void _PrPTGcilLoadParam(_PPTGcilLoadParam n)
#else
static void _PrPTGcilLoadParam(n)
	_PPTGcilLoadParam n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldarg '_");
	PTG_OUTPUT_STRING(f, n->p1);
	PTG_OUTPUT_STRING(f, "'");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldind.ref ");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "stloc '");
	PTG_OUTPUT_STRING(f, n->p1);
	PTG_OUTPUT_STRING(f, "'");
}

#ifdef PROTO_OK
PTGNode PTGcilLoadParam(CONST char* p1)
#else
PTGNode PTGcilLoadParam(p1)

CONST char* p1;
#endif
{
	_PPTGcilLoadParam n;
	n = (_PPTGcilLoadParam)MALLOC(sizeof(struct _SPTGcilLoadParam));
	n->_print = (_PTGProc)_PrPTGcilLoadParam;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilLoadValueParam */

typedef struct _SPTGcilLoadValueParam{
	_PTGProc _print;
	CONST char* p1;
	PTGNode p2;
} * _PPTGcilLoadValueParam;

#ifdef PROTO_OK
static void _PrPTGcilLoadValueParam(_PPTGcilLoadValueParam n)
#else
static void _PrPTGcilLoadValueParam(n)
	_PPTGcilLoadValueParam n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldarg '_");
	PTG_OUTPUT_STRING(f, n->p1);
	PTG_OUTPUT_STRING(f, "'");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldobj ");
	n->p2->_print(n->p2);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "stloc '");
	PTG_OUTPUT_STRING(f, n->p1);
	PTG_OUTPUT_STRING(f, "'");
}

#ifdef PROTO_OK
PTGNode PTGcilLoadValueParam(CONST char* p1, PTGNode p2)
#else
PTGNode PTGcilLoadValueParam(p1, p2)

CONST char* p1;
PTGNode p2;
#endif
{
	_PPTGcilLoadValueParam n;
	n = (_PPTGcilLoadValueParam)MALLOC(sizeof(struct _SPTGcilLoadValueParam));
	n->_print = (_PTGProc)_PrPTGcilLoadValueParam;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern cilStoreParam */

typedef struct _SPTGcilStoreParam{
	_PTGProc _print;
	CONST char* p1;
} * _PPTGcilStoreParam;

#ifdef PROTO_OK
static void _PrPTGcilStoreParam(_PPTGcilStoreParam n)
#else
static void _PrPTGcilStoreParam(n)
	_PPTGcilStoreParam n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldarg '_");
	PTG_OUTPUT_STRING(f, n->p1);
	PTG_OUTPUT_STRING(f, "'");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldloc '");
	PTG_OUTPUT_STRING(f, n->p1);
	PTG_OUTPUT_STRING(f, "'");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "stind.ref ");
}

#ifdef PROTO_OK
PTGNode PTGcilStoreParam(CONST char* p1)
#else
PTGNode PTGcilStoreParam(p1)

CONST char* p1;
#endif
{
	_PPTGcilStoreParam n;
	n = (_PPTGcilStoreParam)MALLOC(sizeof(struct _SPTGcilStoreParam));
	n->_print = (_PTGProc)_PrPTGcilStoreParam;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilStoreValueParam */

typedef struct _SPTGcilStoreValueParam{
	_PTGProc _print;
	CONST char* p1;
	PTGNode p2;
} * _PPTGcilStoreValueParam;

#ifdef PROTO_OK
static void _PrPTGcilStoreValueParam(_PPTGcilStoreValueParam n)
#else
static void _PrPTGcilStoreValueParam(n)
	_PPTGcilStoreValueParam n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldarg '_");
	PTG_OUTPUT_STRING(f, n->p1);
	PTG_OUTPUT_STRING(f, "'");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldloc '");
	PTG_OUTPUT_STRING(f, n->p1);
	PTG_OUTPUT_STRING(f, "'");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "stobj ");
	n->p2->_print(n->p2);
}

#ifdef PROTO_OK
PTGNode PTGcilStoreValueParam(CONST char* p1, PTGNode p2)
#else
PTGNode PTGcilStoreValueParam(p1, p2)

CONST char* p1;
PTGNode p2;
#endif
{
	_PPTGcilStoreValueParam n;
	n = (_PPTGcilStoreValueParam)MALLOC(sizeof(struct _SPTGcilStoreValueParam));
	n->_print = (_PTGProc)_PrPTGcilStoreValueParam;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern cilConvertMainArguments */

typedef struct _SPTGcilConvertMainArguments{
	_PTGProc _print;
	CONST char* p1;
} * _PPTGcilConvertMainArguments;

#ifdef PROTO_OK
static void _PrPTGcilConvertMainArguments(_PPTGcilConvertMainArguments n)
#else
static void _PrPTGcilConvertMainArguments(n)
	_PPTGcilConvertMainArguments n;
#endif
{
	PTG_OUTPUT_STRING(f, ".locals init (int32 i)");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldarg 0");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldlen");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "conv.i4");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldc.i4.1");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "add");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "newobj instance void valuetype INT::.ctor(int32)");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "newobj instance void 'ARRAY[*](STRING[*])'::.ctor(valuetype 'INT')");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "dup");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldfld class 'STRING[*]'[] 'ARRAY[*](STRING[*])'::_val");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldc.i4.0");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldstr \"");
	PTG_OUTPUT_STRING(f, n->p1);
	PTG_OUTPUT_STRING(f, "\"");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "call instance char[] string::ToCharArray()");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "newobj instance void 'STRING[*]'::.ctor(char[])");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "stelem class 'STRING[*]'");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldc.i4.0");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "stloc i");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "start:");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldarg 0");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldlen");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "conv.i4");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldloc i");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "beq end");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "dup");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldfld class 'STRING[*]'[] 'ARRAY[*](STRING[*])'::_val");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldloc i");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldc.i4.1");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "add");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldarg 0");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldloc i");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldelem string");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "call instance char[] string::ToCharArray()");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "newobj instance void 'STRING[*]'::.ctor(char[])");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "stelem class 'STRING[*]'");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldloc i");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldc.i4.1");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "add");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "stloc i");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "br start");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "end:");
}

#ifdef PROTO_OK
PTGNode PTGcilConvertMainArguments(CONST char* p1)
#else
PTGNode PTGcilConvertMainArguments(p1)

CONST char* p1;
#endif
{
	_PPTGcilConvertMainArguments n;
	n = (_PPTGcilConvertMainArguments)MALLOC(sizeof(struct _SPTGcilConvertMainArguments));
	n->_print = (_PTGProc)_PrPTGcilConvertMainArguments;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilCallConvert */

typedef struct _SPTGcilCallConvert{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
} * _PPTGcilCallConvert;

#ifdef PROTO_OK
static void _PrPTGcilCallConvert(_PPTGcilCallConvert n)
#else
static void _PrPTGcilCallConvert(n)
	_PPTGcilCallConvert n;
#endif
{
	PTG_OUTPUT_STRING(f, "call ");
	n->p2->_print(n->p2);
	PTG_OUTPUT_STRING(f, " SYS_CONVERSION::convert (");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, ")");
}

#ifdef PROTO_OK
PTGNode PTGcilCallConvert(PTGNode p1, PTGNode p2)
#else
PTGNode PTGcilCallConvert(p1, p2)

PTGNode p1;
PTGNode p2;
#endif
{
	_PPTGcilCallConvert n;
	n = (_PPTGcilCallConvert)MALLOC(sizeof(struct _SPTGcilCallConvert));
	n->_print = (_PTGProc)_PrPTGcilCallConvert;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern cilGetStreamObject */

typedef struct _SPTGcilGetStreamObject{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
	PTGNode p3;
	PTGNode p4;
	PTGNode p5;
} * _PPTGcilGetStreamObject;

#ifdef PROTO_OK
static void _PrPTGcilGetStreamObject(_PPTGcilGetStreamObject n)
#else
static void _PrPTGcilGetStreamObject(n)
	_PPTGcilGetStreamObject n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldloc ");
	n->p1->_print(n->p1);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "brtrue ");
	n->p5->_print(n->p5);
	IndentNewLine(f);
	n->p3->_print(n->p3);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "newobj instance void ");
	n->p2->_print(n->p2);
	PTG_OUTPUT_STRING(f, "::.ctor(");
	n->p4->_print(n->p4);
	PTG_OUTPUT_STRING(f, ")");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "stloc ");
	n->p1->_print(n->p1);
	IndentNewLine(f);
	n->p5->_print(n->p5);
	PTG_OUTPUT_STRING(f, ": ldloc ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilGetStreamObject(PTGNode p1, PTGNode p2, PTGNode p3, PTGNode p4, PTGNode p5)
#else
PTGNode PTGcilGetStreamObject(p1, p2, p3, p4, p5)

PTGNode p1;
PTGNode p2;
PTGNode p3;
PTGNode p4;
PTGNode p5;
#endif
{
	_PPTGcilGetStreamObject n;
	n = (_PPTGcilGetStreamObject)MALLOC(sizeof(struct _SPTGcilGetStreamObject));
	n->_print = (_PTGProc)_PrPTGcilGetStreamObject;
	n->p1 = p1;
	n->p2 = p2;
	n->p3 = p3;
	n->p4 = p4;
	n->p5 = p5;
	return (PTGNode)n;
}


/* Implementation of Pattern cilResumeStream */

typedef struct _SPTGcilResumeStream{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
} * _PPTGcilResumeStream;

#ifdef PROTO_OK
static void _PrPTGcilResumeStream(_PPTGcilResumeStream n)
#else
static void _PrPTGcilResumeStream(n)
	_PPTGcilResumeStream n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldarg ?streamo");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "//castclass ");
	n->p1->_print(n->p1);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldfld unsigned int32 ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, "::_status");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "switch (");
	n->p2->_print(n->p2);
	PTG_OUTPUT_STRING(f, ")");
}

#ifdef PROTO_OK
PTGNode PTGcilResumeStream(PTGNode p1, PTGNode p2)
#else
PTGNode PTGcilResumeStream(p1, p2)

PTGNode p1;
PTGNode p2;
#endif
{
	_PPTGcilResumeStream n;
	n = (_PPTGcilResumeStream)MALLOC(sizeof(struct _SPTGcilResumeStream));
	n->_print = (_PTGProc)_PrPTGcilResumeStream;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern cilSetStreamStatus */

typedef struct _SPTGcilSetStreamStatus{
	_PTGProc _print;
	PTGNode p1;
	int p2;
} * _PPTGcilSetStreamStatus;

#ifdef PROTO_OK
static void _PrPTGcilSetStreamStatus(_PPTGcilSetStreamStatus n)
#else
static void _PrPTGcilSetStreamStatus(n)
	_PPTGcilSetStreamStatus n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldarg ?streamo");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "//castclass ");
	n->p1->_print(n->p1);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldc.i4 ");
	PTG_OUTPUT_INT(f, n->p2);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "conv.u4");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "stfld unsigned int32 ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, "::_status");
}

#ifdef PROTO_OK
PTGNode PTGcilSetStreamStatus(PTGNode p1, int p2)
#else
PTGNode PTGcilSetStreamStatus(p1, p2)

PTGNode p1;
int p2;
#endif
{
	_PPTGcilSetStreamStatus n;
	n = (_PPTGcilSetStreamStatus)MALLOC(sizeof(struct _SPTGcilSetStreamStatus));
	n->_print = (_PTGProc)_PrPTGcilSetStreamStatus;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern cilImplStreamCheckEnd */

typedef struct _SPTGcilImplStreamCheckEnd{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
	PTGNode p3;
	PTGNode p4;
	PTGNode p5;
} * _PPTGcilImplStreamCheckEnd;

#ifdef PROTO_OK
static void _PrPTGcilImplStreamCheckEnd(_PPTGcilImplStreamCheckEnd n)
#else
static void _PrPTGcilImplStreamCheckEnd(n)
	_PPTGcilImplStreamCheckEnd n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldloc ");
	n->p1->_print(n->p1);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldfld unsigned int32 ");
	n->p2->_print(n->p2);
	PTG_OUTPUT_STRING(f, "::_status");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldc.i4 -1");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "conv.u4");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "bne.un ");
	n->p3->_print(n->p3);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldnull");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "stloc ");
	n->p1->_print(n->p1);
	IndentNewLine(f);
	n->p5->_print(n->p5);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "br ");
	n->p4->_print(n->p4);
	IndentNewLine(f);
	n->p3->_print(n->p3);
	PTG_OUTPUT_STRING(f, ":");
}

#ifdef PROTO_OK
PTGNode PTGcilImplStreamCheckEnd(PTGNode p1, PTGNode p2, PTGNode p3, PTGNode p4, PTGNode p5)
#else
PTGNode PTGcilImplStreamCheckEnd(p1, p2, p3, p4, p5)

PTGNode p1;
PTGNode p2;
PTGNode p3;
PTGNode p4;
PTGNode p5;
#endif
{
	_PPTGcilImplStreamCheckEnd n;
	n = (_PPTGcilImplStreamCheckEnd)MALLOC(sizeof(struct _SPTGcilImplStreamCheckEnd));
	n->_print = (_PTGProc)_PrPTGcilImplStreamCheckEnd;
	n->p1 = p1;
	n->p2 = p2;
	n->p3 = p3;
	n->p4 = p4;
	n->p5 = p5;
	return (PTGNode)n;
}


/* Implementation of Pattern cilExplStreamCheckEnd */

typedef struct _SPTGcilExplStreamCheckEnd{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
	PTGNode p3;
	PTGNode p4;
	PTGNode p5;
} * _PPTGcilExplStreamCheckEnd;

#ifdef PROTO_OK
static void _PrPTGcilExplStreamCheckEnd(_PPTGcilExplStreamCheckEnd n)
#else
static void _PrPTGcilExplStreamCheckEnd(n)
	_PPTGcilExplStreamCheckEnd n;
#endif
{
	n->p1->_print(n->p1);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "call valuetype 'BOOL' ");
	n->p2->_print(n->p2);
	PTG_OUTPUT_STRING(f, "::terminated ()");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "call bool 'BOOL'::_valueOut(valuetype 'BOOL')");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "brfalse ");
	n->p3->_print(n->p3);
	IndentNewLine(f);
	n->p5->_print(n->p5);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "br ");
	n->p4->_print(n->p4);
	IndentNewLine(f);
	n->p3->_print(n->p3);
	PTG_OUTPUT_STRING(f, ":");
}

#ifdef PROTO_OK
PTGNode PTGcilExplStreamCheckEnd(PTGNode p1, PTGNode p2, PTGNode p3, PTGNode p4, PTGNode p5)
#else
PTGNode PTGcilExplStreamCheckEnd(p1, p2, p3, p4, p5)

PTGNode p1;
PTGNode p2;
PTGNode p3;
PTGNode p4;
PTGNode p5;
#endif
{
	_PPTGcilExplStreamCheckEnd n;
	n = (_PPTGcilExplStreamCheckEnd)MALLOC(sizeof(struct _SPTGcilExplStreamCheckEnd));
	n->_print = (_PTGProc)_PrPTGcilExplStreamCheckEnd;
	n->p1 = p1;
	n->p2 = p2;
	n->p3 = p3;
	n->p4 = p4;
	n->p5 = p5;
	return (PTGNode)n;
}


/* Implementation of Pattern cilStreamTerminate */

typedef struct _SPTGcilStreamTerminate{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilStreamTerminate;

#ifdef PROTO_OK
static void _PrPTGcilStreamTerminate(_PPTGcilStreamTerminate n)
#else
static void _PrPTGcilStreamTerminate(n)
	_PPTGcilStreamTerminate n;
#endif
{
	PTG_OUTPUT_STRING(f, "ldarg ?streamo");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "//castclass ");
	n->p1->_print(n->p1);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldc.i4 -1");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "conv.u4");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "stfld unsigned int32 ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, "::_status");
}

#ifdef PROTO_OK
PTGNode PTGcilStreamTerminate(PTGNode p1)
#else
PTGNode PTGcilStreamTerminate(p1)

PTGNode p1;
#endif
{
	_PPTGcilStreamTerminate n;
	n = (_PPTGcilStreamTerminate)MALLOC(sizeof(struct _SPTGcilStreamTerminate));
	n->_print = (_PTGProc)_PrPTGcilStreamTerminate;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilArrayCopy */

typedef struct _SPTGcilArrayCopy{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilArrayCopy;

#ifdef PROTO_OK
static void _PrPTGcilArrayCopy(_PPTGcilArrayCopy n)
#else
static void _PrPTGcilArrayCopy(n)
	_PPTGcilArrayCopy n;
#endif
{
	PTG_OUTPUT_STRING(f, "box ");
	n->p1->_print(n->p1);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "unbox ");
	n->p1->_print(n->p1);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "call ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, " ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, "::copy()");
}

#ifdef PROTO_OK
PTGNode PTGcilArrayCopy(PTGNode p1)
#else
PTGNode PTGcilArrayCopy(p1)

PTGNode p1;
#endif
{
	_PPTGcilArrayCopy n;
	n = (_PPTGcilArrayCopy)MALLOC(sizeof(struct _SPTGcilArrayCopy));
	n->_print = (_PTGProc)_PrPTGcilArrayCopy;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilLocals */

typedef struct _SPTGcilLocals{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilLocals;

#ifdef PROTO_OK
static void _PrPTGcilLocals(_PPTGcilLocals n)
#else
static void _PrPTGcilLocals(n)
	_PPTGcilLocals n;
#endif
{
	if (n->p1 != PTGNULL)
	{
		PTG_OUTPUT_STRING(f, ".locals init (");
	}
	n->p1->_print(n->p1);
	if (n->p1 != PTGNULL)
	{
		PTG_OUTPUT_STRING(f, ")");
	}
}

#ifdef PROTO_OK
PTGNode PTGcilLocals(PTGNode p1)
#else
PTGNode PTGcilLocals(p1)

PTGNode p1;
#endif
{
	_PPTGcilLocals n;
	if(p1 == PTGNULL)
		return PTGNULL;
	n = (_PPTGcilLocals)MALLOC(sizeof(struct _SPTGcilLocals));
	n->_print = (_PTGProc)_PrPTGcilLocals;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilMethodBody */

typedef struct _SPTGcilMethodBody{
	_PTGProc _print;
	int p1;
	PTGNode p2;
	PTGNode p3;
} * _PPTGcilMethodBody;

#ifdef PROTO_OK
static void _PrPTGcilMethodBody(_PPTGcilMethodBody n)
#else
static void _PrPTGcilMethodBody(n)
	_PPTGcilMethodBody n;
#endif
{
	PTG_OUTPUT_STRING(f, ".maxstack ");
	PTG_OUTPUT_INT(f, n->p1);
	IndentNewLine(f);
	n->p2->_print(n->p2);
	IndentNewLine(f);
	n->p3->_print(n->p3);
}

#ifdef PROTO_OK
PTGNode PTGcilMethodBody(int p1, PTGNode p2, PTGNode p3)
#else
PTGNode PTGcilMethodBody(p1, p2, p3)

int p1;
PTGNode p2;
PTGNode p3;
#endif
{
	_PPTGcilMethodBody n;
	n = (_PPTGcilMethodBody)MALLOC(sizeof(struct _SPTGcilMethodBody));
	n->_print = (_PTGProc)_PrPTGcilMethodBody;
	n->p1 = p1;
	n->p2 = p2;
	n->p3 = p3;
	return (PTGNode)n;
}


/* Implementation of Pattern cilIdent */

typedef struct _SPTGcilIdent{
	_PTGProc _print;
	CONST char* p1;
} * _PPTGcilIdent;

#ifdef PROTO_OK
static void _PrPTGcilIdent(_PPTGcilIdent n)
#else
static void _PrPTGcilIdent(n)
	_PPTGcilIdent n;
#endif
{
	PTG_OUTPUT_STRING(f, "'");
	PTG_OUTPUT_STRING(f, n->p1);
	PTG_OUTPUT_STRING(f, "'");
}

#ifdef PROTO_OK
PTGNode PTGcilIdent(CONST char* p1)
#else
PTGNode PTGcilIdent(p1)

CONST char* p1;
#endif
{
	_PPTGcilIdent n;
	n = (_PPTGcilIdent)MALLOC(sizeof(struct _SPTGcilIdent));
	n->_print = (_PTGProc)_PrPTGcilIdent;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilLabel */

typedef struct _SPTGcilLabel{
	_PTGProc _print;
	CONST char* p1;
} * _PPTGcilLabel;

#ifdef PROTO_OK
static void _PrPTGcilLabel(_PPTGcilLabel n)
#else
static void _PrPTGcilLabel(n)
	_PPTGcilLabel n;
#endif
{
	PTG_OUTPUT_STRING(f, n->p1);
	PTG_OUTPUT_STRING(f, ":");
}

#ifdef PROTO_OK
PTGNode PTGcilLabel(CONST char* p1)
#else
PTGNode PTGcilLabel(p1)

CONST char* p1;
#endif
{
	_PPTGcilLabel n;
	n = (_PPTGcilLabel)MALLOC(sizeof(struct _SPTGcilLabel));
	n->_print = (_PTGProc)_PrPTGcilLabel;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilFieldRef */

typedef struct _SPTGcilFieldRef{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
	PTGNode p3;
} * _PPTGcilFieldRef;

#ifdef PROTO_OK
static void _PrPTGcilFieldRef(_PPTGcilFieldRef n)
#else
static void _PrPTGcilFieldRef(n)
	_PPTGcilFieldRef n;
#endif
{
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, " ");
	n->p2->_print(n->p2);
	PTG_OUTPUT_STRING(f, "::");
	n->p3->_print(n->p3);
}

#ifdef PROTO_OK
PTGNode PTGcilFieldRef(PTGNode p1, PTGNode p2, PTGNode p3)
#else
PTGNode PTGcilFieldRef(p1, p2, p3)

PTGNode p1;
PTGNode p2;
PTGNode p3;
#endif
{
	_PPTGcilFieldRef n;
	n = (_PPTGcilFieldRef)MALLOC(sizeof(struct _SPTGcilFieldRef));
	n->_print = (_PTGProc)_PrPTGcilFieldRef;
	n->p1 = p1;
	n->p2 = p2;
	n->p3 = p3;
	return (PTGNode)n;
}


/* Implementation of Pattern cilBlock */

typedef struct _SPTGcilBlock{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilBlock;

#ifdef PROTO_OK
static void _PrPTGcilBlock(_PPTGcilBlock n)
#else
static void _PrPTGcilBlock(n)
	_PPTGcilBlock n;
#endif
{
	if (n->p1 != PTGNULL)
	{
		PTG_OUTPUT_STRING(f, "{");
		IndentIncr(f);
		IndentNewLine(f);
	}
	n->p1->_print(n->p1);
	if (n->p1 != PTGNULL)
	{
		IndentDecr(f);
		IndentNewLine(f);
		PTG_OUTPUT_STRING(f, "}");
	}
}

#ifdef PROTO_OK
PTGNode PTGcilBlock(PTGNode p1)
#else
PTGNode PTGcilBlock(p1)

PTGNode p1;
#endif
{
	_PPTGcilBlock n;
	if(p1 == PTGNULL)
		return PTGNULL;
	n = (_PPTGcilBlock)MALLOC(sizeof(struct _SPTGcilBlock));
	n->_print = (_PTGProc)_PrPTGcilBlock;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilAssembly */

typedef struct _SPTGcilAssembly{
	_PTGProc _print;
	CONST char* p1;
	PTGNode p2;
} * _PPTGcilAssembly;

#ifdef PROTO_OK
static void _PrPTGcilAssembly(_PPTGcilAssembly n)
#else
static void _PrPTGcilAssembly(n)
	_PPTGcilAssembly n;
#endif
{
	PTG_OUTPUT_STRING(f, ".assembly ");
	PTG_OUTPUT_STRING(f, n->p1);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "{}");
	IndentNewLine(f);
	IndentNewLine(f);
	n->p2->_print(n->p2);
}

#ifdef PROTO_OK
PTGNode PTGcilAssembly(CONST char* p1, PTGNode p2)
#else
PTGNode PTGcilAssembly(p1, p2)

CONST char* p1;
PTGNode p2;
#endif
{
	_PPTGcilAssembly n;
	n = (_PPTGcilAssembly)MALLOC(sizeof(struct _SPTGcilAssembly));
	n->_print = (_PTGProc)_PrPTGcilAssembly;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern cilConstructor */

typedef struct _SPTGcilConstructor{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
} * _PPTGcilConstructor;

#ifdef PROTO_OK
static void _PrPTGcilConstructor(_PPTGcilConstructor n)
#else
static void _PrPTGcilConstructor(n)
	_PPTGcilConstructor n;
#endif
{
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, ".method public rtspecialname specialname instance ");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "void .ctor (");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, ") cil managed {");
	IndentIncr(f);
	IndentNewLine(f);
	n->p2->_print(n->p2);
	IndentDecr(f);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "}");
}

#ifdef PROTO_OK
PTGNode PTGcilConstructor(PTGNode p1, PTGNode p2)
#else
PTGNode PTGcilConstructor(p1, p2)

PTGNode p1;
PTGNode p2;
#endif
{
	_PPTGcilConstructor n;
	n = (_PPTGcilConstructor)MALLOC(sizeof(struct _SPTGcilConstructor));
	n->_print = (_PTGProc)_PrPTGcilConstructor;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern cilClassConstructor */

typedef struct _SPTGcilClassConstructor{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilClassConstructor;

#ifdef PROTO_OK
static void _PrPTGcilClassConstructor(_PPTGcilClassConstructor n)
#else
static void _PrPTGcilClassConstructor(n)
	_PPTGcilClassConstructor n;
#endif
{
	if (n->p1 != PTGNULL)
	{
		IndentNewLine(f);
		PTG_OUTPUT_STRING(f, ".method public static rtspecialname specialname instance ");
		IndentNewLine(f);
		PTG_OUTPUT_STRING(f, "void .cctor () cil managed {");
		IndentIncr(f);
		IndentNewLine(f);
	}
	n->p1->_print(n->p1);
	if (n->p1 != PTGNULL)
	{
		IndentNewLine(f);
		PTG_OUTPUT_STRING(f, "ret");
		IndentDecr(f);
		IndentNewLine(f);
		PTG_OUTPUT_STRING(f, "}");
	}
}

#ifdef PROTO_OK
PTGNode PTGcilClassConstructor(PTGNode p1)
#else
PTGNode PTGcilClassConstructor(p1)

PTGNode p1;
#endif
{
	_PPTGcilClassConstructor n;
	if(p1 == PTGNULL)
		return PTGNULL;
	n = (_PPTGcilClassConstructor)MALLOC(sizeof(struct _SPTGcilClassConstructor));
	n->_print = (_PTGProc)_PrPTGcilClassConstructor;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilMainWrapper */

typedef struct _SPTGcilMainWrapper{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
	PTGNode p3;
	PTGNode p4;
	PTGNode p5;
	PTGNode p6;
	PTGNode p7;
} * _PPTGcilMainWrapper;

#ifdef PROTO_OK
static void _PrPTGcilMainWrapper(_PPTGcilMainWrapper n)
#else
static void _PrPTGcilMainWrapper(n)
	_PPTGcilMainWrapper n;
#endif
{
	PTG_OUTPUT_STRING(f, ".method public static ");
	n->p2->_print(n->p2);
	PTG_OUTPUT_STRING(f, " _main (");
	n->p5->_print(n->p5);
	PTG_OUTPUT_STRING(f, ") cil managed {");
	IndentIncr(f);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, ".entrypoint");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldnull");
	IndentNewLine(f);
	n->p7->_print(n->p7);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "call instance ");
	n->p3->_print(n->p3);
	PTG_OUTPUT_STRING(f, " ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, "::main (");
	n->p6->_print(n->p6);
	PTG_OUTPUT_STRING(f, ")");
	IndentNewLine(f);
	n->p4->_print(n->p4);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ret");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "}");
}

#ifdef PROTO_OK
PTGNode PTGcilMainWrapper(PTGNode p1, PTGNode p2, PTGNode p3, PTGNode p4, PTGNode p5, PTGNode p6, PTGNode p7)
#else
PTGNode PTGcilMainWrapper(p1, p2, p3, p4, p5, p6, p7)

PTGNode p1;
PTGNode p2;
PTGNode p3;
PTGNode p4;
PTGNode p5;
PTGNode p6;
PTGNode p7;
#endif
{
	_PPTGcilMainWrapper n;
	n = (_PPTGcilMainWrapper)MALLOC(sizeof(struct _SPTGcilMainWrapper));
	n->_print = (_PTGProc)_PrPTGcilMainWrapper;
	n->p1 = p1;
	n->p2 = p2;
	n->p3 = p3;
	n->p4 = p4;
	n->p5 = p5;
	n->p6 = p6;
	n->p7 = p7;
	return (PTGNode)n;
}


/* Implementation of Pattern cilBuiltinValue */

typedef struct _SPTGcilBuiltinValue{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
} * _PPTGcilBuiltinValue;

#ifdef PROTO_OK
static void _PrPTGcilBuiltinValue(_PPTGcilBuiltinValue n)
#else
static void _PrPTGcilBuiltinValue(n)
	_PPTGcilBuiltinValue n;
#endif
{
	PTG_OUTPUT_STRING(f, ".field ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, " _val");
	IndentNewLine(f);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, ".method rtspecialname specialname instance");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "void .ctor (");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, ") cil managed {");
	IndentIncr(f);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, ".maxstack 2");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldarg 0");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldarg 1");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "stfld ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, " ");
	n->p2->_print(n->p2);
	PTG_OUTPUT_STRING(f, "::_val");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ret");
	IndentDecr(f);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "}");
	IndentNewLine(f);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, ".method public static ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, " _valueOut (");
	n->p2->_print(n->p2);
	PTG_OUTPUT_STRING(f, " v) cil managed {");
	IndentIncr(f);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, ".maxstack 1");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldarga v");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ldfld ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, " ");
	n->p2->_print(n->p2);
	PTG_OUTPUT_STRING(f, "::_val");
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "ret");
	IndentDecr(f);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "}");
}

#ifdef PROTO_OK
PTGNode PTGcilBuiltinValue(PTGNode p1, PTGNode p2)
#else
PTGNode PTGcilBuiltinValue(p1, p2)

PTGNode p1;
PTGNode p2;
#endif
{
	_PPTGcilBuiltinValue n;
	n = (_PPTGcilBuiltinValue)MALLOC(sizeof(struct _SPTGcilBuiltinValue));
	n->_print = (_PTGProc)_PrPTGcilBuiltinValue;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern cilClassDecl */

typedef struct _SPTGcilClassDecl{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
} * _PPTGcilClassDecl;

#ifdef PROTO_OK
static void _PrPTGcilClassDecl(_PPTGcilClassDecl n)
#else
static void _PrPTGcilClassDecl(n)
	_PPTGcilClassDecl n;
#endif
{
	PTG_OUTPUT_STRING(f, ".class ");
	n->p1->_print(n->p1);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "{");
	IndentIncr(f);
	IndentNewLine(f);
	n->p2->_print(n->p2);
	IndentDecr(f);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "}");
	IndentNewLine(f);
}

#ifdef PROTO_OK
PTGNode PTGcilClassDecl(PTGNode p1, PTGNode p2)
#else
PTGNode PTGcilClassDecl(p1, p2)

PTGNode p1;
PTGNode p2;
#endif
{
	_PPTGcilClassDecl n;
	n = (_PPTGcilClassDecl)MALLOC(sizeof(struct _SPTGcilClassDecl));
	n->_print = (_PTGProc)_PrPTGcilClassDecl;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern cilClassHead */

typedef struct _SPTGcilClassHead{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
	PTGNode p3;
	PTGNode p4;
} * _PPTGcilClassHead;

#ifdef PROTO_OK
static void _PrPTGcilClassHead(_PPTGcilClassHead n)
#else
static void _PrPTGcilClassHead(n)
	_PPTGcilClassHead n;
#endif
{
	n->p1->_print(n->p1);
	n->p2->_print(n->p2);
	n->p3->_print(n->p3);
	n->p4->_print(n->p4);
}

#ifdef PROTO_OK
PTGNode PTGcilClassHead(PTGNode p1, PTGNode p2, PTGNode p3, PTGNode p4)
#else
PTGNode PTGcilClassHead(p1, p2, p3, p4)

PTGNode p1;
PTGNode p2;
PTGNode p3;
PTGNode p4;
#endif
{
	_PPTGcilClassHead n;
	if(p1 == PTGNULL && p2 == PTGNULL && p3 == PTGNULL && p4 == PTGNULL)
		return PTGNULL;
	n = (_PPTGcilClassHead)MALLOC(sizeof(struct _SPTGcilClassHead));
	n->_print = (_PTGProc)_PrPTGcilClassHead;
	n->p1 = p1;
	n->p2 = p2;
	n->p3 = p3;
	n->p4 = p4;
	return (PTGNode)n;
}


/* Implementation of Pattern cilClassAttributes */

typedef struct _SPTGcilClassAttributes{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
} * _PPTGcilClassAttributes;

#ifdef PROTO_OK
static void _PrPTGcilClassAttributes(_PPTGcilClassAttributes n)
#else
static void _PrPTGcilClassAttributes(n)
	_PPTGcilClassAttributes n;
#endif
{
	PTG_OUTPUT_STRING(f, "public auto ansi ");
	n->p1->_print(n->p1);
	n->p2->_print(n->p2);
}

#ifdef PROTO_OK
PTGNode PTGcilClassAttributes(PTGNode p1, PTGNode p2)
#else
PTGNode PTGcilClassAttributes(p1, p2)

PTGNode p1;
PTGNode p2;
#endif
{
	_PPTGcilClassAttributes n;
	n = (_PPTGcilClassAttributes)MALLOC(sizeof(struct _SPTGcilClassAttributes));
	n->_print = (_PTGProc)_PrPTGcilClassAttributes;
	n->p1 = p1;
	n->p2 = p2;
	return (PTGNode)n;
}


/* Implementation of Pattern cilExtends */

typedef struct _SPTGcilExtends{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilExtends;

#ifdef PROTO_OK
static void _PrPTGcilExtends(_PPTGcilExtends n)
#else
static void _PrPTGcilExtends(n)
	_PPTGcilExtends n;
#endif
{
	PTG_OUTPUT_STRING(f, " extends ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilExtends(PTGNode p1)
#else
PTGNode PTGcilExtends(p1)

PTGNode p1;
#endif
{
	_PPTGcilExtends n;
	n = (_PPTGcilExtends)MALLOC(sizeof(struct _SPTGcilExtends));
	n->_print = (_PTGProc)_PrPTGcilExtends;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilImplements */

typedef struct _SPTGcilImplements{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilImplements;

#ifdef PROTO_OK
static void _PrPTGcilImplements(_PPTGcilImplements n)
#else
static void _PrPTGcilImplements(n)
	_PPTGcilImplements n;
#endif
{
	if (n->p1 != PTGNULL)
	{
		PTG_OUTPUT_STRING(f, " implements ");
	}
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilImplements(PTGNode p1)
#else
PTGNode PTGcilImplements(p1)

PTGNode p1;
#endif
{
	_PPTGcilImplements n;
	if(p1 == PTGNULL)
		return PTGNULL;
	n = (_PPTGcilImplements)MALLOC(sizeof(struct _SPTGcilImplements));
	n->_print = (_PTGProc)_PrPTGcilImplements;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilField */

typedef struct _SPTGcilField{
	_PTGProc _print;
	PTGNode p1;
} * _PPTGcilField;

#ifdef PROTO_OK
static void _PrPTGcilField(_PPTGcilField n)
#else
static void _PrPTGcilField(n)
	_PPTGcilField n;
#endif
{
	PTG_OUTPUT_STRING(f, ".field ");
	n->p1->_print(n->p1);
}

#ifdef PROTO_OK
PTGNode PTGcilField(PTGNode p1)
#else
PTGNode PTGcilField(p1)

PTGNode p1;
#endif
{
	_PPTGcilField n;
	n = (_PPTGcilField)MALLOC(sizeof(struct _SPTGcilField));
	n->_print = (_PTGProc)_PrPTGcilField;
	n->p1 = p1;
	return (PTGNode)n;
}


/* Implementation of Pattern cilMethod */

typedef struct _SPTGcilMethod{
	_PTGProc _print;
	PTGNode p1;
	PTGNode p2;
	PTGNode p3;
	PTGNode p4;
	PTGNode p5;
} * _PPTGcilMethod;

#ifdef PROTO_OK
static void _PrPTGcilMethod(_PPTGcilMethod n)
#else
static void _PrPTGcilMethod(n)
	_PPTGcilMethod n;
#endif
{
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, ".method ");
	n->p5->_print(n->p5);
	n->p3->_print(n->p3);
	PTG_OUTPUT_STRING(f, " ");
	n->p1->_print(n->p1);
	PTG_OUTPUT_STRING(f, " (");
	n->p2->_print(n->p2);
	PTG_OUTPUT_STRING(f, ") cil managed {");
	IndentIncr(f);
	IndentNewLine(f);
	n->p4->_print(n->p4);
	IndentDecr(f);
	IndentNewLine(f);
	PTG_OUTPUT_STRING(f, "}");
}

#ifdef PROTO_OK
PTGNode PTGcilMethod(PTGNode p1, PTGNode p2, PTGNode p3, PTGNode p4, PTGNode p5)
#else
PTGNode PTGcilMethod(p1, p2, p3, p4, p5)

PTGNode p1;
PTGNode p2;
PTGNode p3;
PTGNode p4;
PTGNode p5;
#endif
{
	_PPTGcilMethod n;
	n = (_PPTGcilMethod)MALLOC(sizeof(struct _SPTGcilMethod));
	n->_print = (_PTGProc)_PrPTGcilMethod;
	n->p1 = p1;
	n->p2 = p2;
	n->p3 = p3;
	n->p4 = p4;
	n->p5 = p5;
	return (PTGNode)n;
}

/* ============================ */

/* -------------------------------------------------------- */
/*                  Default Output Functions                */
/* -------------------------------------------------------- */


#ifdef PROTO_OK
void _PTGPrintInt(PTG_OUTPUT_FILE file, int param)
#else
void _PTGPrintInt(file, param)
       PTG_OUTPUT_FILE file; int param;
#endif
{    /* used for short and int */
       sprintf(buffer,"%d",param);
       PTG_OUTPUT_STRING(file,buffer);
}

#ifdef PROTO_OK
void _PTGPrintLong(PTG_OUTPUT_FILE file, long param)
#else
void _PTGPrintLong(file, param)
       PTG_OUTPUT_FILE file; long param;
#endif
{
       sprintf(buffer,"%ld",param);
       PTG_OUTPUT_STRING(file,buffer);
}

#ifdef PROTO_OK
void _PTGPrintDouble(PTG_OUTPUT_FILE file, double param)
#else
void _PTGPrintDouble(file, param)
       PTG_OUTPUT_FILE file; double param;
#endif
{    /* used for float and double */
       sprintf(buffer,"%g",param);
       PTG_OUTPUT_STRING(file,buffer);
}

#ifdef PROTO_OK
void _PTGPrintChar(PTG_OUTPUT_FILE file, char param)
#else
void _PTGPrintChar(file, param)
       PTG_OUTPUT_FILE file; char param;
#endif
{
       buffer[0] = param;
       buffer[1] = 0;
       PTG_OUTPUT_STRING(file,buffer);
}

