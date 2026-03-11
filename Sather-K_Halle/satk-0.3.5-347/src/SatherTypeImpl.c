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
    
#include "SatherTypeImpl.h"

STPtr NewType(DefTableKey k, IntSet properties, int sym)
{
  if (!type_stack_initialized)
  {
    obstack_init(&typestack);
    type_stack_initialized = 1;
  }
  
  if (k == NoKey)
    return NoType;

  STPtr newtype = (STPtr) obstack_alloc(&typestack, sizeof(struct SatherType));

  newtype->k = k;
  newtype->props = properties;
  newtype->name = sym;
  newtype->bounds = NULLCTValuePtrList;
  newtype->id = 0;

  return newtype;
}

STPtr SetBounds(STPtr t, CTValuePtrList l)
{
  if (t == NoType)
    return t;

  t->bounds = l;  
  return t;
}

STPtr SetId(STPtr t)
{
  STPtrList it = method_types;  
  int i = 0;

  if (!IsMethodType(t))
    return t;
  
  while (it != NULLSTPtrList)
  {
    i++;  
    
    if (EqualsType(t, HeadSTPtrList(it)))
    {
      t->id = i;
      return t;
    }
    it =TailSTPtrList(it);
  }
  
  t->id = ++i;
  method_types = AppElSTPtrList(method_types, t);
  return t;
}

int EqualsType(STPtr t1, STPtr t2)
{
  DefTableKeyList params1, params2;
  IntSet kinds1, kinds2;

  if (t1==t2)
    return 1;

  if (t1==NoType || t2==NoType)
    return 0;
  
  if(IsMethodType(t1))
  {
    if (((IsProcedureType(t1)-IsProcedureType(t2))!=0) || // XOR
      ((IsStreamType(t1)-IsStreamType(t2))!=0))
      return 0;

    params1 = GetParams(KeyOfType(t1), NULLDefTableKeyList);
    params2 = GetParams(KeyOfType(t2), NULLDefTableKeyList);

    if (LengthDefTableKeyList(params1) != LengthDefTableKeyList(params2))
      return 0;

    while(params1 != NULLDefTableKeyList)
    {
      if (!EqualsType(GetType(HeadDefTableKeyList(params1), NoType),
      GetType(HeadDefTableKeyList(params2), NoType)))
        return 0;

      if (GetKindSet(HeadDefTableKeyList(params1), NULLIS) == NULLIS)
      {
        kinds1 = GetSemKindSet(HeadDefTableKeyList(params1), NULLIS);
        kinds2 = GetSemKindSet(HeadDefTableKeyList(params2), NULLIS);
      } else
      {
        kinds1 = GetKindSet(HeadDefTableKeyList(params1), NULLIS);
        kinds2 = GetKindSet(HeadDefTableKeyList(params2), NULLIS);
      }
      
      if (
        InIS(inK, kinds1) !=
        InIS(inK, kinds2) ||
        InIS(outK, kinds1) !=
        InIS(outK, kinds2) ||
        InIS(inoutK, kinds1) !=
        InIS(inoutK, kinds2))
        return 0;

      params1 = TailDefTableKeyList(params1);
      params2 = TailDefTableKeyList(params2);
    }

    if (!EqualsType(GetResultType(KeyOfType(t1), NoType),
    GetResultType(KeyOfType(t2), NoType)))
      return 0;
    
    return 1;
  }
  else
   return ((KeyOfType(t1) == KeyOfType(t2)) && (IsPolymorph(t1)==IsPolymorph(t2)));
}

int AddProperty(STPtr t, int prop)
{
  if (t==NoType)
    return 0;

  AddElIS(t->props, prop);  

  return 1;
}


int IsPolymorph(STPtr t)
{
  if (t==NoType)
    return 0;

  return InIS(polymorphK, t->props);

}

int IsMonomorph(STPtr t)
{
  if (t==NoType)
    return 0;

  return InIS(monomorphK, t->props);

}

int IsMethodType(STPtr t)
{
  if (t==NoType)
    return 0;

  return IsProcedureType(t) || IsStreamType(t) || InIS(methodK, t->props);
}

int IsProcedureType(STPtr t)
{
  if (t==NoType)
    return 0;

  return InIS(procedureK, t->props);

}

int IsStreamType(STPtr t)
{
  if (t==NoType)
    return 0;

  return InIS(streamK, t->props);
}

int IsValueType(STPtr t)
{
  if (t==NoType)
    return 0;

  return InIS(valueK, t->props);
}

int IsMonoValueType(STPtr t)
{
  if (t==NoType)
    return 0;

  return (InIS(valueK, t->props) && InIS(monomorphK, t->props));
}

int IsAbstractType(STPtr t)
{
  if (t==NoType)
    return 0;

  return (InIS(abstractK, t->props));
}

int IsReferenceType(STPtr t)
{
  if (t==NoType)
    return 0;

  return InIS(referenceK, t->props);
}

int IsBuiltinArray(STPtr t)
{
  if (t==NoType)
    return 0;

  return (InIS(builtinarrayK, t->props));
}

int IsArrayType(STPtr t)
{
  if (t==NoType)
    return 0;

  return (InIS(arrayclassK, t->props));
}

IntSet GetProps(STPtr t)
{
  if (t==NoType)
    return NULLIS;

  return t->props;
}

DefTableKey KeyOfType(STPtr t)
{
  if (t==NoType)
    return NoKey;

  return t->k;  

}

char* NameOfType(STPtr t)
{
  if (t==NoType)
    return "ERROR_TYPE";

  return StringTable(t->name);
} 

int GetTypeId(STPtr t)
{
  if (t==NoType)
    return 0;

  return t->id;
} 

STPtrList GetUniqueMethodTypes()
{
  return method_types;
}

STPtr GetVoidType()
{
  if (VoidType == NoType)
    VoidType = NewType(NewKey(), AddElIS(referenceK, SingleIS(monomorphK)), MakeName("void"));

  return VoidType;  
}    
