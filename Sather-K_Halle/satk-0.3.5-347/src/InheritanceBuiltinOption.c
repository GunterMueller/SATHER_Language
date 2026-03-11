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
    
#include "InheritanceBuiltinOption.head"
#include "InheritanceInfoList.h"
#include "pdl_gen.h"

DefTableKey CalcGetsBuiltinFrom(DefTableKey k, CoordPtr pos)
{
  InheritanceInfoList il;
  int found = 0;
  DefTableKey temp_key;

  if (k ==NoKey) 
    return NoKey;
  
  if (GetGetsBuiltinFrom(k, NoKey) != NoKey)
    return GetGetsBuiltinFrom(k, NoKey);

  if(GetBuiltinTree(k, NULL) != NULL)
  {
    ResetGetsBuiltinFrom(k, k);
    return k;
  }

  il = GetInheritances(k, NULLInheritanceInfoList); 

  while (il != NULLInheritanceInfoList)
  {
    temp_key = CalcGetsBuiltinFrom(HeadInheritanceInfoList(il)->SuperKey, pos); 
    if (GetBuiltinTree(temp_key, NULL) != NULL)
    { 
      if (found)
        message(ERROR, "no direct or transitive inheritance of more than one builtin type",
        0, pos);
      else
      {
        found = 1;
        ResetGetsBuiltinFrom(k, temp_key);
      }
    }
    il = TailInheritanceInfoList(il);
  }

  if (!found)
    ResetGetsBuiltinFrom(k, k);
  
  return GetGetsBuiltinFrom(k, NoKey);
}
