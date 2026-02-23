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
    
#ifndef SEMANTIC_VALUES_H
#define SEMANTIC_VALUES_H

#include <gmp.h>
#include "CTValue.h"
#include "obstack.h"
#include "Strings.h"
#include "err.h"

static Obstack valuestack;
static int value_stack_initialized = 0;

CTValuePtr NewValue(int sym, int val_type);
CTValuePtr NewEmptyValue(int val_type);

CTValuePtr CalcCTValue(CTValuePtr arg1, CTValuePtr arg2, int op, int arg_num, CoordPtr pos);
int RealSpecialCalc(int op, int s1, int s2);

void Value2Real(CTValuePtr val);
void Value2Int(CTValuePtr val);

CharPtr Value2Str(CTValuePtr val);
#endif
