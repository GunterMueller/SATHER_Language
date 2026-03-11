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
    
#ifndef COERCIONS_H
#define COERCIONS_H
#include "SatherTypeImpl.h"
#include "SemanticValues.h"
#include "err.h"
#include <gmp.h>
#include "PreDefKeys.h"
#include "Strings.h"
#include "csm.h"
#include "envmod.h"
#include "pdl_gen.h"
#include "math.h"

#define SK_INT_MIN "-2147483648"
#define SK_INT_MAX "2147483647"
#define SK_LONG_INT_MIN "-9223372036854775808"
#define SK_LONG_INT_MAX "9223372036854775807"
#define SK_SHORT_INT_MIN "-32768"
#define SK_SHORT_INT_MAX "32767"

#define SK_UNSIGNED_MIN "0"
#define SK_UNSIGNED_MAX "4294967296"
#define SK_LONG_UNSIGNED_MIN "0"
#define SK_LONG_UNSIGNED_MAX "18446744073709551616"
#define SK_SHORT_UNSIGNED_MIN "0"
#define SK_SHORT_UNSIGNED_MAX "65536"

#define NOT_COERCIBLE 0
#define SUBTYPE_COERCION 1
#define NUMERIC_COERCION 2
#define SIMPLE_COERCION 3
#define STRING_BOXING 4

STPtr IsNumeric(STPtr t, CoordPtr pos, Environment scope);
int IsNumericLowerEqual(STPtr t1, STPtr t2, CoordPtr pos, Environment scope);
STPtr IsSimpleValue(STPtr t, CoordPtr pos, Environment scope); // without numeric
STPtr CoerceValue(CTValuePtr val, STPtr est_type, int allow_truncate, CoordPtr pos, 
  Environment scope);
int IsCoercible(STPtr t1, STPtr t2, CoordPtr pos, Environment scope, int automatic);
#endif
