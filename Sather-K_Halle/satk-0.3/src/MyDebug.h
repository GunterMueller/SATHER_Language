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
    

#ifndef MY_DEBUG_H
#define MY_DEBUG_H
#include "envmod.h"
#include "Strings.h"
#include "err.h"
#include "pdl_gen.h"
#include "Kinds.head"
#include "CTValue.h"
#include "TreeNodeImpl.h"
#include "OvrPtrList.h"
#include "BMPtrList.h"
#include "STPtrList.h"
#include <gmp.h>

#define DEBUG_ON 0 
#define DEBUG_METHOD_CALL 0
#define DEBUG_CONFORMANCE 0 
#define DEBUG_DESIGNATOR 0 
#define DEBUG_EQUALS_TYPE 0 

void PrintEnv(Environment e);
void PrintType(STPtr t, CoordPtr pos);
void PrintSTPtrList(STPtrList l);
void PrintKey(DefTableKey, CoordPtr pos, int nl);
void PrintKeyList(DefTableKeyList l, CoordPtr pos);
void PrintKindSet(IntSet s);
void PrintValue(CTValuePtr v, CoordPtr pos);
void PrintTree(TreeNodePtr tree);
void PrintOverriding(OvrPtr o);
void PrintOvrPtrList(OvrPtrList l);
void PrintBoundMethod(BMPtr b);
void PrintBMPtrList(BMPtrList l);
#endif
