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
    
#include "OverridingImpl.head"
#include "SatherTypeImpl.h"

OvrPtr NewOverriding(DefTableKey oridden, DefTableKey oriding)
{
  if (!ovr_stack_initialized)
  {
    obstack_init(&ovrstack);
    ovr_stack_initialized = 1;
  }
  
  OvrPtr newovr = (OvrPtr) obstack_alloc(&ovrstack, sizeof(struct Overriding));

  newovr->overridden = oridden;
  newovr->overriding = oriding;

  return newovr;
}

int CmpOverriding(OvrPtr o1, OvrPtr o2)
{
  if (o1 == NoOverriding || o2 == NoOverriding)
    return 0;

  return 
    !(EqualsType(GetType(o1->overridden, NoType), GetType(o2->overridden, NoType)) &&
//    EqualsType(GetType(o1->overriding, NoType), GetType(o2->overriding, NoType)) &&
    GetSym(o1->overridden, 0) == GetSym(o2->overridden, 1)); 
}

int TransitiveClosureOverrides(DefTableKey k, CoordPtr pos)
{
  DefTableKey cur;
  DefTableKeyList l;
  OvrPtrList res, temp;

  l = GetMustConformTo(k,  NULLDefTableKeyList);
  res = GetOverrides(k, NULLOvrPtrList);

  if (GetOvrReady(k, NOTSTARTED)==STARTED)
    return 0;

  ResetOvrReady(k, STARTED);

  while (l != NULLDefTableKeyList)
  {
      cur = HeadDefTableKeyList(l);

      if (!(GetOvrReady(cur, NOTSTARTED)==FINISHED))
      {
        if(TransitiveClosureOverrides(cur, pos)==0)
        {
          message(ERROR, CatStrInd("Cyclic dependency while computing overriding for ",
          GetSym(k, 0)), 0, pos);
          return 0;
        } 
      }

      temp = GetOverrides(cur, NULLOvrPtrList);

      while (temp != NULLOvrPtrList)
      {
        res = AddToSetOvrPtrList(HeadOvrPtrList(temp), res, CmpOverriding);
        temp = TailOvrPtrList(temp);
      } 
      
      l = TailDefTableKeyList(l);
  }

  ResetOverrides(k, res);
  ResetOvrReady(k, FINISHED);
  return 1;
  }
