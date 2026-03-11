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
    
#include "Coercions.h"

STPtr IsNumeric(STPtr t, CoordPtr pos, Environment scope)
{
  STPtr res;
  if (t == NoType)
    return NoType;
  
  res = GetType(GetPreDefKey(MakeName("$SHORT_INT"), scope, pos), NoType); 
  if (IsConform(t, res))
    return GetMonoType(KeyOfType(res), NoType);
  res = GetType(GetPreDefKey(MakeName("$INT"), scope, pos), NoType); 
  if (IsConform(t, res))
    return GetMonoType(KeyOfType(res), NoType);
  res = GetType(GetPreDefKey(MakeName("$LONG_INT"), scope, pos), NoType); 
  if (IsConform(t, res))
    return GetMonoType(KeyOfType(res), NoType);
  res = GetType(GetPreDefKey(MakeName("$INTINF"), scope, pos), NoType); 
  if (IsConform(t, res))
    return GetMonoType(KeyOfType(res), NoType);
  res = GetType(GetPreDefKey(MakeName("$UNSIGNED"), scope, pos), NoType); 
  if (IsConform(t, res))
    return GetMonoType(KeyOfType(res), NoType);
  res = GetType(GetPreDefKey(MakeName("$SHORT_UNSIGNED"), scope, pos), NoType); 
  if (IsConform(t, res))
    return GetMonoType(KeyOfType(res), NoType);
  res = GetType(GetPreDefKey(MakeName("$LONG_UNSIGNED"), scope, pos), NoType); 
  if (IsConform(t, res))
    return GetMonoType(KeyOfType(res), NoType);
  res = GetType(GetPreDefKey(MakeName("$FLT"), scope, pos), NoType); 
  if (IsConform(t, res))
    return GetMonoType(KeyOfType(res), NoType);
  res = GetType(GetPreDefKey(MakeName("$FLTD"), scope, pos), NoType); 
  if (IsConform(t, res))
    return GetMonoType(KeyOfType(res), NoType);

  return NoType;  
}

int IsNumericLowerEqual(STPtr t1, STPtr t2, CoordPtr pos, Environment scope)
{
  if (t1 == NoType || t2 == NoType)
    return 0;
  
  if (t1 == t2)
    return 1;

  if (t1 == GetType(GetPreDefKey(MakeName("SHORT_INT"), scope, pos), NoType) &&
    (t2 == GetType(GetPreDefKey(MakeName("INT"), scope, pos), NoType) ||
    t2 == GetType(GetPreDefKey(MakeName("LONG_INT"), scope, pos), NoType) ||
    t2 == GetType(GetPreDefKey(MakeName("INTINF"), scope, pos), NoType) ||
    t2 == GetType(GetPreDefKey(MakeName("FLT"), scope, pos), NoType) ||
    t2 == GetType(GetPreDefKey(MakeName("FLTD"), scope, pos), NoType)))
    return 1;

  if (t1 == GetType(GetPreDefKey(MakeName("INT"), scope, pos), NoType) &&
    (t2 == GetType(GetPreDefKey(MakeName("LONG_INT"), scope, pos), NoType)  ||
    t2 == GetType(GetPreDefKey(MakeName("INTINF"), scope, pos), NoType) ||
    t2 == GetType(GetPreDefKey(MakeName("FLT"), scope, pos), NoType) ||
    t2 == GetType(GetPreDefKey(MakeName("FLTD"), scope, pos), NoType)))
    return 1;
  
  if (t1 == GetType(GetPreDefKey(MakeName("LONG_INT"), scope, pos), NoType) &&
    (t2 == GetType(GetPreDefKey(MakeName("INTINF"), scope, pos), NoType) ||
    t2 == GetType(GetPreDefKey(MakeName("FLT"), scope, pos), NoType) ||
    t2 == GetType(GetPreDefKey(MakeName("FLTD"), scope, pos), NoType)))
    return 1;

  if (t1 == GetType(GetPreDefKey(MakeName("SHORT_UNSIGNED"), scope, pos), NoType) &&
    (t2 == GetType(GetPreDefKey(MakeName("UNSIGNED"), scope, pos), NoType)  ||
    t2 == GetType(GetPreDefKey(MakeName("LONG_UNSIGNED"), scope, pos), NoType)  ||
    t2 == GetType(GetPreDefKey(MakeName("INTINF"), scope, pos), NoType) ||
    t2 == GetType(GetPreDefKey(MakeName("FLT"), scope, pos), NoType) ||
    t2 == GetType(GetPreDefKey(MakeName("FLTD"), scope, pos), NoType)))
    return 1;

  if (t1 == GetType(GetPreDefKey(MakeName("UNSIGNED"), scope, pos), NoType) &&
    (t2 == GetType(GetPreDefKey(MakeName("LONG_UNSIGNED"), scope, pos), NoType) ||
    t2 == GetType(GetPreDefKey(MakeName("INTINF"), scope, pos), NoType) ||
    t2 == GetType(GetPreDefKey(MakeName("FLT"), scope, pos), NoType) ||
    t2 == GetType(GetPreDefKey(MakeName("FLTD"), scope, pos), NoType)))
    return 1;

  if (t1 == GetType(GetPreDefKey(MakeName("LONG_UNSIGNED"), scope, pos), NoType) &&
    (t2 == GetType(GetPreDefKey(MakeName("INTINF"), scope, pos), NoType) ||
    t2 == GetType(GetPreDefKey(MakeName("FLT"), scope, pos), NoType) ||
    t2 == GetType(GetPreDefKey(MakeName("FLTD"), scope, pos), NoType)))
    return 1;

  if (t1 == GetType(GetPreDefKey(MakeName("FLT"), scope, pos), NoType) &&
    t2 == GetType(GetPreDefKey(MakeName("FLTD"), scope, pos), NoType))
    return 1;

  return 0;
}

STPtr IsSimpleValue(STPtr t, CoordPtr pos, Environment scope)
{
  STPtr res;

  if (t==NoType)
    return NoType;

  res = GetType(GetPreDefKey(MakeName("$BOOL"), scope, pos), NoType); 
  if (IsConform(t, res))
    return GetMonoType(KeyOfType(res), NoType);
  res = GetType(GetPreDefKey(MakeName("$BYTE"), scope, pos), NoType); 
  if (IsConform(t, res))
    return GetMonoType(KeyOfType(res), NoType);
  res = GetType(GetPreDefKey(MakeName("$CHAR"), scope, pos), NoType); 
  if (IsConform(t, res))
    return GetMonoType(KeyOfType(res), NoType);
  res = GetType(GetPreDefKey(MakeName("$TYPE"), scope, pos), NoType); 
  if (IsConform(t, res))
    return GetMonoType(KeyOfType(res), NoType);

  return NoType;  
}

STPtr CoerceValue(CTValuePtr val, STPtr est_type, int allow_truncate, CoordPtr pos, 
Environment scope)
{
  mpz_t temp1, temp2;
  STPtr temp_type, restype;

  if (val == NULLValue)
    return NoType;
  
  mpz_init(temp1);
  mpz_init(temp2);
  restype = NoType;
  temp_type = NoType;

  //numerischer Zieltyp
  if (est_type != NoType)
    temp_type = IsNumeric(est_type, pos, scope);

  //nichtnumerischer Zieltyp
  if (est_type != NoType && temp_type == NoType)
  {
    //einfach
    temp_type = IsSimpleValue(est_type, pos, scope);

    if (temp_type != NoType && 
    (val->value_type==UNI_BITS_HEX || val->value_type == UNI_BITS_OCT))
      restype = temp_type;
    // TODO ARRAYS  
    else
      temp_type = NoType;
  }   

  if (restype == NoType)
  {
    // ist es eine Gleitkommakonstante oder FLT bzw. FLTD vorgegeben
    if ( (val->value_type == UNI_REAL && (temp_type == NoType || !allow_truncate))
    || temp_type == GetType(GetPreDefKey(MakeName("FLT"), scope, pos), NoType)
    || temp_type == GetType(GetPreDefKey(MakeName("FLTD"), scope, pos), NoType))
    {
      if (temp_type != GetType(GetPreDefKey(MakeName("FLT"), scope, pos), NoType))
        restype = GetType(GetPreDefKey(MakeName("FLTD"), scope, pos), NoType);
      else  
        restype = GetType(GetPreDefKey(MakeName("FLT"), scope, pos), NoType);
    } else
    {
      //fuer die grenzen muessen die reals abgeschnitten werden
      Value2Int(val);

      // befinden wir uns in der INT-Reihe?
      if ((restype == NoType && temp_type == NoType)  
      || IsNumericLowerEqual(temp_type, 
        GetType(GetPreDefKey(MakeName("LONG_INT"), scope, pos), NoType), pos, scope))
      { 
        mpz_set_str(temp1, SK_SHORT_INT_MIN, 10);
        mpz_set_str(temp2, SK_SHORT_INT_MAX, 10);
        if (mpz_cmp(val->int_value, temp1)>=0 && mpz_cmp(val->int_value, temp2)<=0
          && temp_type != NoType)
          restype = GetType(GetPreDefKey(MakeName("SHORT_INT"), scope, pos), NoType); 
        else//if
        {
        mpz_set_str(temp1, SK_INT_MIN, 10);
        mpz_set_str(temp2, SK_INT_MAX, 10);
        if (mpz_cmp(val->int_value, temp1)>=0 && mpz_cmp(val->int_value, temp2)<=0)
          restype = GetType(GetPreDefKey(MakeName("INT"), scope, pos), NoType); 
        else//if 
        {
        mpz_set_str(temp1, SK_LONG_INT_MIN, 10);
        mpz_set_str(temp2, SK_LONG_INT_MAX, 10);
        if (mpz_cmp(val->int_value, temp1)>=0 && mpz_cmp(val->int_value, temp2)<=0)
          restype = GetType(GetPreDefKey(MakeName("LONG_INT"), scope, pos), NoType); 
        }}
      } 
      //oder in der UNSIGNED-Reihe
      if ((restype == NoType && temp_type == NoType)    
      || IsNumericLowerEqual(temp_type, 
        GetType(GetPreDefKey(MakeName("LONG_UNSIGNED"), scope, pos), NoType), pos, scope))
      {
        mpz_set_str(temp1, SK_SHORT_UNSIGNED_MIN, 10);
        mpz_set_str(temp2, SK_SHORT_UNSIGNED_MAX, 10);
        if (mpz_cmp(val->int_value, temp1)>=0 && mpz_cmp(val->int_value, temp2)<=0)
          restype = GetType(GetPreDefKey(MakeName("SHORT_UNSIGNED"), scope, pos), NoType); 
        else//if
        {
        mpz_set_str(temp1, SK_UNSIGNED_MIN, 10);
        mpz_set_str(temp2, SK_UNSIGNED_MAX, 10);
        if (mpz_cmp(val->int_value, temp1)>=0 && mpz_cmp(val->int_value, temp2)<=0)
          restype = GetType(GetPreDefKey(MakeName("UNSIGNED"), scope, pos), NoType); 
        else//if 
        {
        mpz_set_str(temp1, SK_LONG_UNSIGNED_MIN, 10);
        mpz_set_str(temp2, SK_LONG_UNSIGNED_MAX, 10);
        if (mpz_cmp(val->int_value, temp1)>=0 && mpz_cmp(val->int_value, temp2)<=0)
          restype = GetType(GetPreDefKey(MakeName("LONG_UNSIGNED"), scope, pos), NoType); 
        }}
      }
      //sonst INTINF
      if (restype == NoType)
        restype = GetType(GetPreDefKey(MakeName("INTINF"), scope, pos), NoType); 
    }
  }
  
  mpz_clear(temp1);
  mpz_clear(temp2);
  
  return restype;
}

int IsCoercible(STPtr t1, STPtr t2, CoordPtr pos, Environment scope, int automatic)
{
  STPtr dt1, dt2;

  if ((t1 == GetVoidType() && (IsReferenceType(t2) || IsPolymorph(t2))) ||
      (t2 == GetVoidType() && (IsReferenceType(t1) || IsPolymorph(t1))) )
    return 1;
  
  if (IsConform(t1, t2))
    return SUBTYPE_COERCION;

  if (!IsPolymorph(t2))
  {
        //STR und STRING

        if (
                (t1 == GetType(GetPreDefKey(MakeName("STRING[*]"),scope,pos), NoType) ||
       t1 == GetType(GetPreDefKey(MakeName("STR[*]"),scope,pos), NoType)) &&
                (t2 == GetType(GetPreDefKey(MakeName("STRING[*]"),scope,pos), NoType) ||
       t2 == GetType(GetPreDefKey(MakeName("STR[*]"),scope,pos), NoType)))
      return STRING_BOXING;

    dt1 = IsNumeric(t1, pos, scope);
    dt2 = IsNumeric(t2, pos, scope);

    if (dt1 != NoType && dt2 != NoType)
      if (!automatic)
        return NUMERIC_COERCION;
      else
        if(IsNumericLowerEqual(dt1, dt2, pos, scope))
          return NUMERIC_COERCION;
      
    dt1 = IsSimpleValue(t1, pos, scope);
    dt2 = IsSimpleValue(t2, pos, scope);

    if (!automatic && EqualsType(dt1, dt2) && dt1 != NoType)
      return SIMPLE_COERCION;
  }
  
  return NOT_COERCIBLE;
}
