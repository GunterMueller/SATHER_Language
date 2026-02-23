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
    

#ifndef CTVALUE_H
#define CTVALUE_H
#include <gmp.h>

#define UNI_INT 1
#define UNI_REAL 2
#define UNI_BITS_OCT 3
#define UNI_BITS_HEX 4
#define UNI_BOOL 5
#define UNI_CHAR 6

#define SK_INFINITY 1
#define SK_NEG_INFINITY 2
#define SK_NOT_A_NUMBER 3
#define SK_REAL_ZERO 4

#define NULLValue NULL
#define NULLValueRange NULL

#define UNI_BITS(a) ( (( a )==3 || ( a )==4) ? 1 : 0)
//Compile Time Value
struct CTValue {
  mpz_t int_value;
  mpf_t real_value;
  int value_type;
  int special_real;
};

typedef struct CTValue* CTValuePtr;

//Value Range
struct ValueRange {
  CTValuePtr start;
  CTValuePtr end;
};

typedef struct ValueRange* ValueRangePtr;
#endif
