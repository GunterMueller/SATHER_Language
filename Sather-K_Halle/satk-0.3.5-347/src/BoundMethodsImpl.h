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
    
#include "BMPtrList.h"
#include "obstack.h"
#include "IntSet.h"
#include "Kinds.head"
#include "pdl_gen.h"
#include "SatherTypeImpl.h"
#include "ptg_gen.h"

#ifndef BOUND_METHODS_IMPL_H
#define BOUND_METHODS_IMPL_H

static Obstack bmstack;
static int bm_stack_initialized = 0;

static BMPtrList bound_methods;

BMPtr NewBoundMethod(STPtr t, DefTableKey k, STPtrList args, int qualified_polymorph);
int CmpBoundMethod(BMPtr b1, BMPtr b2);
int EqualsSTPtrList(STPtrList l1, STPtrList l2);
BMPtrList GetBoundMethods();
PTGNode GetCLRBoundMethod(BMPtr b);
PTGNode GetCLRBoundMethodType(BMPtr b);
PTGNode CreateMethodObjects();
PTGNode GetCLRBoundedArgs(BMPtr b);
STPtr GetBoundMethodBaseType(DefTableKey k);
#endif
