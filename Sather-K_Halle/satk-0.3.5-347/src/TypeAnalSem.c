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
    
#include "TypeAnalSem.h"

int IsApplicable(STPtr t, MethArgInfoList al, int call_kind, CoordPtr pos,
Environment scope)
{
  DefTableKeyList li;
  DefTableKey p1;
  STPtr pt1, pt2, pt2res;
  int kind;

  // stream oder procedure
  if (!InIS(call_kind, GetProps(t)))
    return 0;

  li = GetParams(KeyOfType(t), NULLDefTableKeyList);

  // Anzahl der Parameter
  if(LengthDefTableKeyList(li) != LengthMethArgInfoList(al))
    return 0;
  if (LengthDefTableKeyList(li) == 0)
    return 1;

  while(al != NULLMethArgInfoList)
  {
    if (HeadMethArgInfoList(al) != NULL)
    {
      p1 = HeadDefTableKeyList(li);
      
      pt1 = GetType(p1, NoType);
      if (HeadMethArgInfoList(al)->Val != NULLValue)
        pt2 = CoerceValue(HeadMethArgInfoList(al)->Val, pt1, 0, pos, scope); 
      else pt2 = HeadMethArgInfoList(al)->Type;
      
      // wenn pt2 eine parameterlose Prozedur 
      // ist, kann auch das Ergebnis von pt2 gemeint sein
      
      if (IsProcedureType(pt2))
        pt2res = GetResultType(KeyOfType(pt2), NoType);
      else
        pt2res = NoType;

      kind = HeadMethArgInfoList(al)->ParameterKind;

      
      if (kind == inK)
      {

        if (!InIS(inK, GetSemKindSet(p1, NULLIS)) && 
            !InIS(onceK, GetSemKindSet(p1, NULLIS)))
          return 0;
        
        if (!IsCoercible(pt2, pt1, pos, scope, 1))
          if (pt2res == NoType || !IsCoercible(pt2res, pt1, pos, scope, 1))
            return 0;
      }
      else
      {
        if (!InIS(kind, GetSemKindSet(p1, NULLIS)))
          return 0;
      }
         
      if (kind == outK && !IsCoercible(pt1, pt2, pos, scope, 1))
        if (pt2res == NoType || !IsCoercible(pt1, pt2res, pos, scope, 1))
          return 0;

      if (kind == inoutK && !EqualsType(pt1, pt2))
        if (pt2res == NoType || !EqualsType(pt1, pt2res))
        return 0;
    }

    li = TailDefTableKeyList(li);
    al = TailMethArgInfoList(al);

    if (li ==NULLDefTableKeyList)
      return 1;   
  }
  return 0;
}

STPtr GetMethodCallDestination(DefTableKey k, MethArgInfoList al, CoordPtr pos, 
int call_kind, int is_partial_call, DefTableKey* called, int is_init_call,
Environment scope)
{
  DefTableKeyList dl;
  DefTableKeyList res = NULLDefTableKeyList;
  STPtr restype;

  dl = GetBindings(k, NULLDefTableKeyList);

  while (dl != NULLDefTableKeyList)
  {
    if (IsApplicable(GetType(HeadDefTableKeyList(dl), NoType), al, call_kind, pos, scope))
      res = AppElDefTableKeyList(res, HeadDefTableKeyList(dl));
    
    dl = TailDefTableKeyList(dl);
  }

  // vielleicht hat das Objekt einen Methodentyp
  if (IsApplicable(GetType(k, NoType), al, call_kind, pos, scope))
    res = AppElDefTableKeyList(res, k);
  
  if (res == NULLDefTableKeyList)
  {
    if(is_init_call && al == NULLMethArgInfoList)
      return NoType;
    
    message(ERROR, "could not find applicable method", 0 , pos);
    return  NoType;
  }

  if (LengthDefTableKeyList(res) > 1)
  {
    DefTableKey cand;
    DefTableKeyList il1, il2;
    int ok;
    
    il1 = res;

    while (il1 != NULLDefTableKeyList)
    {
      cand = HeadDefTableKeyList(il1);
      il2 = res;
      ok = 1;
      while (il2 != NULLDefTableKeyList)
      {
        if (HeadDefTableKeyList(il2) != cand)
        {
          if (CompareParamList(GetParams(cand, NULLDefTableKeyList),
            GetParams(HeadDefTableKeyList(il2), NULLDefTableKeyList), pos, scope)
            != 1)
          {
            ok = 0;
            break;
          } 
        }
        il2 =TailDefTableKeyList(il2);
      }

      if (ok)
        break;

      il1 = TailDefTableKeyList(il1);
    }
    
    if (!ok)
    {
      message(ERROR, "More than one applicable method", 0 , pos);
      return NoType;
    }

    res = SingleDefTableKeyList(cand);
  } 
  
  if (InIS(initK, GetSemKindSet(HeadDefTableKeyList(res), NULLIS)) && !is_init_call)
  {
    message(ERROR, "init method must not be called explicitely", 0 , pos);
    return NoType;
  }

  if (!InIS(initK, GetSemKindSet(HeadDefTableKeyList(res), NULLIS)) && is_init_call)
  {
    message(ERROR, "called init method is not feature of a class", 0 , pos);
    return NoType;
  }

  restype = GetResultType(KeyOfType(GetType(HeadDefTableKeyList(res), NoType)), NoType);
  *called = HeadDefTableKeyList(res);
  
  // bei bound methods muss der Typ gebaut werden
  if (is_partial_call > 0)
    return BuildBoundMethodType(GetType(HeadDefTableKeyList(res), NoType), al, pos,
      is_partial_call, restype);
  
  return restype;
}

STPtr BuildBoundMethodType(STPtr t, MethArgInfoList al, CoordPtr pos, 
int partial_call_kind, STPtr restype)
{
  DefTableKey bound_key;
  DefTableKeyList params;
  STPtr featureoftype;
  DefTableKey self_param;
  int i = 1;
  int set_comma = 0;
  CharPtr bound_name;
  STPtr bound_type;
  
  bound_key = NewKey();
  ResetSemKindSet(bound_key, GetProps(t));
  ResetResultType(bound_key, restype);
  params = GetParams(KeyOfType(t), NULLDefTableKeyList);

  bound_name = 
    CatStrStr(CatStrStr(CatStrStr(
    "bound ", 
    (IsStreamType(t) ? 
    "stream ": "procedure ")), StringTable(GetSym(KeyOfType(t), 0)))
    ,"(");

  if (partial_call_kind == 2)
  {
    featureoftype = GetType(GetFeatureOf(KeyOfType(t), NoKey),NoType);
    self_param = NewKey();
    ResetType(self_param, featureoftype);
    ResetSemKindSet(self_param,
     AddElIS(constantK, AddElIS(locVarK,AddElIS(inK,SingleIS(parameterK))))); 
    ResetSym(self_param, MakeName("self"));

    ResetParams(bound_key, 
      AppElDefTableKeyList(GetParams(bound_key, NULLDefTableKeyList),
      self_param)); 
      
    bound_name = CatStrStr(bound_name, 
    NameOfType(featureoftype));
    
    set_comma = 1;
  }
  
  while (params != NULLDefTableKeyList)
  {
    if (IthElemMethArgInfoList(al, i) == NoMethArg)
    {
      if (InIS(onceK, GetSemKindSet(HeadDefTableKeyList(params), NULLIS)))
        message(ERROR, "partial call must bound all once parameters", 0, pos);
      
      ResetParams(bound_key, 
      AppElDefTableKeyList(GetParams(bound_key, NULLDefTableKeyList),
        HeadDefTableKeyList(params)));
      
      if (set_comma)
        bound_name = CatStrStr(bound_name, ",");

      bound_name = CatStrStr(bound_name, 
      NameOfType(GetType(HeadDefTableKeyList(params), NoType)));
    
      set_comma = 1;
    }
    i++;
    params = TailDefTableKeyList(params);
  }

  bound_name = CatStrStr(bound_name, ")");
  
  if (restype != NoType)
    bound_name = CatStrStr(CatStrStr(bound_name, ":"), NameOfType(restype));
  
  bound_type = 
    SetId(NewType(bound_key, GetProps(t), MakeName(bound_name)));

  ResetType(bound_key, bound_type);
  return bound_type;  
}

int CompareParamList(DefTableKeyList l1, DefTableKeyList l2, CoordPtr pos, 
Environment scope)
{
  STPtr t1, t2;
  int res = 0;

  if (LengthDefTableKeyList(l1) != LengthDefTableKeyList(l2))
    return 0;

  while (l1 != NULLDefTableKeyList)
  {
    t1 = GetType(HeadDefTableKeyList(l1), NoType);
    t2 = GetType(HeadDefTableKeyList(l2), NoType);

    if ( !EqualsType(t1, t2) ) 
    {
      if (IsCoercible(t1, t2, pos, scope, 1))
      {
        if (res == -1)
          return 0;
        else
          res = InIS(outK, GetSemKindSet(HeadDefTableKeyList(l1), NULLIS)) ? -1 : 1;
      } 

      if (IsCoercible(t2, t1, pos, scope, 1))
      {
        if (res == 1)
          return 0;
        else
          res = InIS(outK, GetSemKindSet(HeadDefTableKeyList(l1), NULLIS)) ? 1 : -1;
      }
    }

    l1 = TailDefTableKeyList(l1);
    l2 = TailDefTableKeyList(l2);
  }

  return res;
}

