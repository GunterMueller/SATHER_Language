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
    

#include "CodeGenMisc.head"
#include "Kinds.head"
#include "Strings.h"
#include "pdl_gen.h"
#include "IntSet.h"
#include "MakeName.h"
#include "Coercions.h"
#include "envmod.h"

PTGNode GetCLRType(STPtr type)  
{
  if (type==NoType)
    return PTGIdent("void");
  
  if (IsPolymorph(type))
    return PTGTuple(PTGIdent("class "), PTGcilIdent(StringTable(type->name)));
  
  if (IsValueType(type))
    return PTGTuple(PTGIdent("valuetype "), PTGcilIdent(StringTable(type->name)));
  
  if (InIS(monomorphK, type->props))
    return PTGTuple(PTGIdent("class "), PTGcilIdent(StringTable(type->name)));
  
  if (IsMethodType(type))
    return PTGTuple(PTGIdent("class MethodType"), PTGNumber(type->id));

  return PTGTuple(PTGIdent("class "), PTGcilIdent(StringTable(type->name)));
}

PTGNode GetCLRFieldRef(DefTableKey k)
{
  if (k==NoKey)
    return PTGNULL;

  return PTGcilFieldRef(
    GetCLRType(GetType(k, NoType)),
    GetCLRType(GetType(GetFeatureOf(k, NoKey), NoType)),
    PTGcilIdent(StringTable(GetSym(k, 0))));
}

PTGNode GetImplementsPattern(DefTableKeyList l)
{
  PTGNode res = PTGNULL;

  while (l != NULLDefTableKeyList)
  {
    res = PTGCommaSeq(res, PTGcilIdent(NameOfType(GetType(HeadDefTableKeyList(l),
      NoType))));
    l = TailDefTableKeyList(l);
  }

  return res;
}

PTGNode GetConvCode(STPtr from, STPtr to, int conv_type, CoordPtr pos, Environment scope)
{
  PTGNode res = PTGNULL;

  if (EqualsType(from, to))
    return res;

  if (conv_type == NOT_COERCIBLE)
    return res;
  
  if (conv_type == NUMERIC_COERCION || conv_type == SIMPLE_COERCION || 
        conv_type == STRING_BOXING)
    res = PTGcilCallConvert(GetCLRType(from), GetCLRType(to));

  if (IsMonoValueType(from) && IsPolymorph(to))
    res = PTGNewLineSeq(res,
      PTGcilBox(GetCLRType(from)));

  return res;
}

PTGNode GetNativeArrayName(STPtr elem_type, int bound_num)
{
  int i;
  PTGNode res = PTGTuple(GetCLRType(elem_type), PTGIdent("["));

  if (bound_num <= 0)
    return PTGNULL;

  for (i=0; i<bound_num-1; i++)
  {
    res = PTGTuple(res, PTGIdent(","));  
  }
  res = PTGTuple(res, PTGIdent("]"));

  return res;
}

PTGNode GenerateCommaSepTypeList(DefTableKeyList l, int only_once)
{
  PTGNode res = PTGNULL;
  
  if (l == NULLDefTableKeyList)
      return PTGNULL;

  while ( l != NULLDefTableKeyList)
  {
    if (only_once)
    {
      if (InIS(onceK, GetSemKindSet(HeadDefTableKeyList(l), NULLIS))) 
        res = PTGCommaSeq(res, 
          GetCLRType(GetType(HeadDefTableKeyList(l), NoType))); 
    } else
    {
      if (InIS(outK, GetSemKindSet(HeadDefTableKeyList(l), NULLIS)) ||
      InIS(inoutK, GetSemKindSet(HeadDefTableKeyList(l), NULLIS)))
        res = PTGCommaSeq(res, 
          PTGTuple(GetCLRType(GetType(HeadDefTableKeyList(l), NoType)),
            PTGIdent("&")));  
      else
        if (!InIS(onceK, GetSemKindSet(HeadDefTableKeyList(l), NULLIS))) 
          res = PTGCommaSeq(res, 
            GetCLRType(GetType(HeadDefTableKeyList(l), NoType))); 
    }
    l = TailDefTableKeyList(l);
  }

  return res;
}

int NewUniqueLabel()
{
  static int labels = 0;
  
  return IdnNumb(MakeName("lb"),++labels);
}

int NewUniqueLocal()
{
  static int locals = 0;
  
  return IdnNumb(MakeName("_V"),++locals);
}
