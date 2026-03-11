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
    
#include "SemanticSharedFeatures.h"
#include "Inheritances.h"

DefTableKey IsNotShared(DefTableKey k, DefTableKey l)
{
  if (!InIS(sharedK, GetSemKindSet(l, NULLIS)))
    ResetSemKindSet(k, AddElIS(unsharedK, GetSemKindSet(k, NULLIS)));

  return k; 
}

int IsGlobalUnshared(DefTableKey k)
{
  DefTableKeyList local_called;
  
  if (k == NoKey)
  {
    return 1;
  }

  if (GetSharedStatus(k, NOTSTARTED) == FINISHED)
    return InIS(unsharedK, GetSemKindSet(k, NULLIS));
  
  if (GetSharedStatus(k, NOTSTARTED) == STARTED)
    return 0;

  ResetSharedStatus(k, STARTED);

  local_called = GetLocalCalled(k, NULLDefTableKeyList);

  while (local_called != NULLDefTableKeyList)
  {
    if (IsGlobalUnshared(HeadDefTableKeyList(local_called)))
    {
      ResetSemKindSet(k, AddElIS(unsharedK, GetSemKindSet(k, NULLIS)));
      ResetSharedStatus(k, FINISHED);
      return 1;
    }
    
    local_called = TailDefTableKeyList(local_called);
  }

  ResetSharedStatus(k, FINISHED);
  return 0;
}

