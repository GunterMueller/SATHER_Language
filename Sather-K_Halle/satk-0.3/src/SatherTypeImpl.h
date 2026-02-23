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
    
#include "obstack.h"
#include "deftbl.h"
#include "stdio.h"
#include "IntSet.h"
#include "Kinds.head"
#include "csm.h" 
#include "DefTableKeyList.h"
#include "pdl_gen.h"
#include "STPtrList.h"
#include "MyDebug.h"

#ifndef SATHER_TYPE_IMPL
#define SATHER_TYPE_IMPL

static Obstack typestack;
static int type_stack_initialized = 0;

static STPtrList method_types;

static STPtr VoidType;

STPtr NewType(DefTableKey k, IntSet properties, int sym);
STPtr SetBounds(STPtr t, CTValuePtrList l);
STPtr SetId(STPtr t);
int EqualsType(STPtr t1, STPtr t2);
int AddProperty(STPtr t, int prop);
int IsPolymorph(STPtr t);
int IsMonomorph(STPtr t);
int IsMethodType(STPtr t);
int IsProcedureType(STPtr t);
int IsStreamType(STPtr t);
int IsValueType(STPtr t);
int IsMonoValueType(STPtr t);
int IsAbstractType(STPtr t);
int IsReferenceType(STPtr t);
int IsBuiltinArray(STPtr t);
int IsArrayType(STPtr t);
IntSet GetProps(STPtr t);
DefTableKey KeyOfType(STPtr t);
char* NameOfType(STPtr t);
int GetTypeId(STPtr t);
STPtrList GetUniqueMethodTypes();
STPtr GetVoidType();
#endif
