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
    
#include "SemanticValues.h"

CTValuePtr NewValue(int sym, int val_type)
{
  
  if (!value_stack_initialized)
  {
    obstack_init(&valuestack);
    value_stack_initialized = 1;
  }

  CTValuePtr newvalue = obstack_alloc(&valuestack, sizeof(struct CTValue)); 
  int i, j;

  switch (val_type)
  {
    case UNI_INT:
      mpz_init_set_str(newvalue->int_value, StringTable(sym), 10);
      break;
    case UNI_REAL:
      mpf_init_set_str(newvalue->real_value, StringTable(sym), 10);
      newvalue->special_real = 0;
      if (sym == MakeName("NaN"))
        newvalue->special_real = SK_NOT_A_NUMBER;
      if (sym == MakeName("Inf"))
        newvalue->special_real = SK_INFINITY;

      break;
    case UNI_BITS_OCT:
      mpz_init_set_str(newvalue->int_value, StringTable(sym), 8);
      break;
    case UNI_BITS_HEX:
      mpz_init_set_str(newvalue->int_value, StringTable(sym), 16);
      break;
    case UNI_BOOL:
      if (sym==MakeName("true"))
        mpz_init_set_ui(newvalue->int_value, 1);
      else  
        mpz_init_set_ui(newvalue->int_value, 0);
      break;  
    case UNI_CHAR:
      mpz_init_set_ui(newvalue->int_value, sym);
      break;
  }

  newvalue->value_type = val_type;

  return newvalue;
}

CTValuePtr NewEmptyValue(int val_type)
{
  if (!value_stack_initialized)
  {
    obstack_init(&valuestack);
    value_stack_initialized = 1;
  }

  CTValuePtr newvalue = obstack_alloc(&valuestack, sizeof(struct CTValue)); 

  switch (val_type)
  {
    case UNI_BITS_OCT:
    case UNI_BITS_HEX:
    case UNI_BOOL:
    case UNI_CHAR:
    case UNI_INT:
      mpz_init(newvalue->int_value);
      break;
    case UNI_REAL:
      mpf_init(newvalue->real_value);
      break;
  }
  
  newvalue->value_type = val_type;
  return newvalue;
}

void Value2Real(CTValuePtr val)
{
  if (val == NULLValue)
    return;
  
  if (val->value_type == UNI_REAL)
    return;
  
  mpf_init(val->real_value);
  mpf_set_z(val->real_value, val->int_value);
  mpz_clear(val->int_value);

  val->value_type = UNI_REAL;
}

void Value2Int(CTValuePtr val)
{
  if (val == NULLValue)
    return;
  
  if (val->value_type != UNI_REAL)
    return;
  
  mpz_init(val->int_value);
  mpz_set_ui(val->int_value, mpf_get_ui(val->real_value));
  mpf_clear(val->real_value);

  val->value_type = UNI_INT;
}

CTValuePtr CalcCTValue(CTValuePtr arg1, CTValuePtr arg2, int op, int arg_num, CoordPtr pos)
{
  CTValuePtr res = NULLValue;
  
  if (arg1 == NULLValue)
    return NULLValue;

  // BOOL und CHARS werden nicht berechnet
  if (arg1->value_type == UNI_BOOL || arg1->value_type == UNI_CHAR)
    return NULLValue;

  if (arg1->value_type == UNI_REAL || 
      op == MakeName("quotient"))
    res = NewEmptyValue(UNI_REAL);
  else
  {
    if (arg2 == NULLValue)
      res = NewEmptyValue(UNI_INT);
    else
    {
      if (arg2->value_type == UNI_REAL)
        res = NewEmptyValue(UNI_REAL);
      else
        res = NewEmptyValue(UNI_INT);
    }
  }

  switch (arg_num)
  {
    case 0:
      switch (res->value_type)
      {
        case UNI_REAL:
          if (op == MakeName("minus"))
            switch (arg1->special_real)
            {
              case SK_NOT_A_NUMBER: res = arg1; break;
              case SK_INFINITY: res->special_real = SK_NEG_INFINITY; break;
              case SK_NEG_INFINITY: res->special_real = SK_INFINITY; break;
              default: mpf_neg(res->real_value, arg1->real_value); break;
            }
          break;
        default:
          if (op == MakeName("minus"))
            mpz_neg(res->int_value, arg1->int_value); 
          break;
      }
      break;
    case 1:
      if (arg2 == NULLValue)
        return NULLValue;
      
      // BOOL und CHARS werden nicht berechnet
      if (arg2->value_type == UNI_BOOL || arg2->value_type == UNI_BOOL)
        return NULLValue;
      
      switch (res->value_type)
      {
        case UNI_REAL:
          Value2Real(arg1);
          Value2Real(arg2);

          if (arg1->special_real == 0 && mpf_sgn(arg1->real_value) == 0)
            arg1->special_real = SK_REAL_ZERO;
          if (arg2->special_real == 0 && mpf_sgn(arg2->real_value) == 0)
            arg2->special_real = SK_REAL_ZERO;
          res->special_real = RealSpecialCalc(op, arg1->special_real, arg2->special_real);

          if (op == MakeName("plus"))
            mpf_add(res->real_value, arg1->real_value, arg2->real_value); 
          if (op == MakeName("minus"))
            mpf_sub(res->real_value, arg1->real_value, arg2->real_value); 
          if (op == MakeName("times"))
            mpf_mul(res->real_value, arg1->real_value, arg2->real_value); 
          if (op == MakeName("quotient"))
          {
            if (mpf_sgn(arg2->real_value) == 0)
            {
              message(ERROR, "division by zero",0, pos);
              return NULLValue;
            }
            mpf_div(res->real_value, arg1->real_value, arg2->real_value); 
          } 
          if (op == MakeName("pow"))
            mpf_pow_ui(res->real_value, arg1->real_value, mpf_get_ui(arg2->real_value));  
          if (op == MakeName("modulo"))
          {
            message(ERROR, "modulo not defined for compile time float constants",0, pos);
            return res;
          }
          if (op == MakeName("divide"))
          {
            message(ERROR, "divide not defined for compile time float constants",0, pos);
            return res;
          }
          
          break;
        default:
          if (op == MakeName("plus"))
            mpz_add(res->int_value, arg1->int_value, arg2->int_value);  
          if (op == MakeName("minus"))
            mpz_sub(res->int_value, arg1->int_value, arg2->int_value);  
          if (op == MakeName("times"))
            mpz_mul(res->int_value, arg1->int_value, arg2->int_value);  
          if (op == MakeName("modulo"))
          {
            if (mpz_sgn(arg2->int_value) == 0)
            {
              message(ERROR, "division by zero",0, pos);
              return NULLValue;
            }
            mpz_mod(res->int_value, arg1->int_value, arg2->int_value);  
          }
          if (op == MakeName("divide"))
          {
            if (mpz_sgn(arg2->int_value) == 0)
            {
              message(ERROR, "division by zero",0, pos);
              return NULLValue;
            }
            mpz_tdiv_q(res->int_value, arg1->int_value, arg2->int_value); 
          }
          if (op == MakeName("pow"))
            mpz_pow_ui(res->int_value, arg1->int_value, mpz_get_ui(arg2->int_value)); 
          break;
      }
      break;
      
      
      break;  
  }
  return res;
}

int RealSpecialCalc(int op, int s1, int s2)
{
  if(s1 == SK_NOT_A_NUMBER || s2 == SK_NOT_A_NUMBER) 
    return SK_NOT_A_NUMBER;

  if (op == MakeName("plus"))
    switch (s1) { 
      case SK_INFINITY:
        switch (s2) { 
          case SK_INFINITY: return SK_INFINITY;
          case SK_NEG_INFINITY: return SK_NOT_A_NUMBER;
          case SK_REAL_ZERO: return SK_INFINITY;}
      case SK_NEG_INFINITY:
        switch (s2) { 
          case SK_INFINITY: return SK_NOT_A_NUMBER;
          case SK_NEG_INFINITY: return SK_NEG_INFINITY;
          case SK_REAL_ZERO: return SK_NEG_INFINITY;}
      case SK_REAL_ZERO:
        switch (s2) { 
          case SK_INFINITY: return SK_INFINITY;
          case SK_NEG_INFINITY: return SK_NEG_INFINITY;
          case SK_REAL_ZERO: return SK_REAL_ZERO;}
    }
  if (op == MakeName("minus"))
    switch (s1) { 
      case SK_INFINITY:
        switch (s2) { 
          case SK_INFINITY: return SK_NOT_A_NUMBER;
          case SK_NEG_INFINITY: return SK_INFINITY;
          case SK_REAL_ZERO: return SK_INFINITY;}
      case SK_NEG_INFINITY:
        switch (s2) { 
          case SK_INFINITY: return SK_NEG_INFINITY;
          case SK_NEG_INFINITY: return SK_NOT_A_NUMBER;
          case SK_REAL_ZERO: return SK_NEG_INFINITY;}
      case SK_REAL_ZERO:
        switch (s2) { 
          case SK_INFINITY: return SK_NEG_INFINITY;
          case SK_NEG_INFINITY: return SK_INFINITY;
          case SK_REAL_ZERO: return SK_REAL_ZERO;}
    }
  if (op == MakeName("times"))
    switch (s1) { 
      case SK_INFINITY:
        switch (s2) { 
          case SK_INFINITY: return SK_INFINITY;
          case SK_NEG_INFINITY: return SK_NEG_INFINITY;
          case SK_REAL_ZERO: return SK_NOT_A_NUMBER;}
      case SK_NEG_INFINITY:
        switch (s2) { 
          case SK_INFINITY: return SK_NEG_INFINITY;
          case SK_NEG_INFINITY: return SK_INFINITY;
          case SK_REAL_ZERO: return SK_NOT_A_NUMBER;}
      case SK_REAL_ZERO:
        switch (s2) { 
          case SK_INFINITY: return SK_NOT_A_NUMBER;
          case SK_NEG_INFINITY: return SK_NOT_A_NUMBER;
          case SK_REAL_ZERO: return SK_REAL_ZERO;}
    }
  if (op == MakeName("quotient"))
    switch (s1) { 
      case SK_INFINITY:
        switch (s2) { 
          case SK_INFINITY: return SK_NOT_A_NUMBER;
          case SK_NEG_INFINITY: return SK_NOT_A_NUMBER;
          case SK_REAL_ZERO: return SK_INFINITY;}
      case SK_NEG_INFINITY:
        switch (s2) { 
          case SK_INFINITY: return SK_NOT_A_NUMBER;
          case SK_NEG_INFINITY: return SK_NOT_A_NUMBER;
          case SK_REAL_ZERO: return SK_NEG_INFINITY;}
      case SK_REAL_ZERO:
        switch (s2) { 
          case SK_INFINITY: return SK_NOT_A_NUMBER;
          case SK_NEG_INFINITY: return SK_NOT_A_NUMBER;
          case SK_REAL_ZERO: return SK_NOT_A_NUMBER;}
    }
  if (op == MakeName("pow"))
  {
    switch (s1) { 
      case SK_INFINITY:
        switch (s2) { 
          case SK_INFINITY: return SK_INFINITY;
          case SK_NEG_INFINITY: return SK_REAL_ZERO;
          case SK_REAL_ZERO: return SK_NOT_A_NUMBER;}
      case SK_NEG_INFINITY:
        switch (s2) { 
          case SK_INFINITY: return SK_NEG_INFINITY;
          case SK_NEG_INFINITY: return SK_REAL_ZERO;
          case SK_REAL_ZERO: return SK_NOT_A_NUMBER;}
      case SK_REAL_ZERO:
        switch (s2) { 
          case SK_INFINITY: return SK_NOT_A_NUMBER;
          case SK_NEG_INFINITY: return SK_NOT_A_NUMBER;
          case SK_REAL_ZERO: return SK_NOT_A_NUMBER;}
    }
  }

  return 0;
}

CharPtr Value2Str(CTValuePtr val)
{
  mp_exp_t exp;
  char * res;

  if (val == NULLValue) 
    return "0";

  if (val->value_type == UNI_REAL)
  {
    if (mpf_sgn(val->real_value) == 0)
      return "0";

    gmp_asprintf(&res, "%Fe", val->real_value);     
    return res;

  }
  return mpz_get_str(NULL, 10, val->int_value);
}
