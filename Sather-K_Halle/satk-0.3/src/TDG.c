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
    
#include "TDG.h"

DefTableKeyList GenerateMustConformTo(DefTableKey k, DefTableKey polyob, CoordPtr pos)  
{
  DefTableKey poly, mono;
  DefTableKeyList res, likes, temp = NULLDefTableKeyList;

  if (k==NoKey)
  {
    message(FATAL, "unexpected error while building type dependence graph",
    0, pos);
    return NULLDefTableKeyList;
  } 

  res = GetMustConformTo(k, NULLDefTableKeyList);

  if (res != NULLDefTableKeyList)
    return res;

  poly = KeyOfType(GetPolyType(k, NoType)); 
  mono = KeyOfType(GetMonoType(k, NoType)); 
  
  if (poly == NoKey || poly == k)
  {
    if (mono == NoKey)
      likes = GetIsLike(k, NULLDefTableKeyList);
    else
      likes = GetIsLike(mono, NULLDefTableKeyList);

    while (likes != NULLDefTableKeyList)
    {
      if (HeadDefTableKeyList(likes) == k)
      { 
        likes = TailDefTableKeyList(likes);
        continue;
      } 
      
      temp = GetMustConformTo(HeadDefTableKeyList(likes), NULLDefTableKeyList);
      if (temp == NULLDefTableKeyList && k != polyob)
        temp = GenerateMustConformTo(HeadDefTableKeyList(likes), polyob, pos);
    
      while (temp != NULLDefTableKeyList)
      {
        res = AddToSetDefTableKeyList(HeadDefTableKeyList(temp), res, CmpDefTableKey);
        temp = TailDefTableKeyList(temp);
      }
      likes = TailDefTableKeyList(likes);
    }
  } 
  else
    res = AppElDefTableKeyList(res, poly);

  ResetMustConformTo(k, res);
  return res;
}

int MakeTDG(DefTableKey k, CoordPtr pos)
{
DefTableKey cur;
DefTableKeyList l, m;
DefTableKeyList res = NULLDefTableKeyList;

l = GetMustConformTo(k,  NULLDefTableKeyList);
res = l;
  
if (GetTDGReady(k, NOTSTARTED)==STARTED)
  return 0;

ResetTDGReady(k, STARTED);

while (l != NULLDefTableKeyList)
{
    cur = HeadDefTableKeyList(l);
    if (!(GetTDGReady(cur, NOTSTARTED)==FINISHED))
    {
      if(MakeTDG(cur, pos)==0)
      {
        message(ERROR, CatStrInd("Cyclic dependency while constructing TDG - class ",
        GetSym(k, 0)), 0, pos);
        return 0;
      } 
    }
    m = GetConformsTo(cur, NULLDefTableKeyList);
   
    while (m != NULLDefTableKeyList)
    {
      res = AddToSetDefTableKeyList(HeadDefTableKeyList(m), res, CmpDefTableKey);
      m = TailDefTableKeyList(m);     
    }
    l = TailDefTableKeyList(l);
}

ResetConformsTo(k, res);
ResetTDGReady(k, FINISHED);
return 1;
}
