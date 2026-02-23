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
    
#include "SemanticArrays.head"
#include "pdl_gen.h"

int IsAget(DefTableKeyList params, STPtr int_type, int bound_count)
{
  if (params == NULLDefTableKeyList || !(bound_count == LengthDefTableKeyList(params)))
    return 0;

  while (params != NULLDefTableKeyList)
  {
    if (!(EqualsType(GetType(HeadDefTableKeyList(params), NoType), int_type)))
      return 0;
    
    params = TailDefTableKeyList(params);
  }
  
  return 1;
} 

int IsAset(DefTableKeyList params, STPtr int_type, STPtr element_type,
int bound_count)
{
  int i;

  if (params == NULLDefTableKeyList || !(bound_count+1 == LengthDefTableKeyList(params)))
    return 0;

  for (i=1; i<= bound_count; i++)
  {
    if (!(EqualsType(GetType(IthElemDefTableKeyList(params, i), NoType), int_type)))
      return 0;
  }

  if (!(EqualsType(GetType(IthElemDefTableKeyList(params, i), NoType), element_type)))
    return 0;
  
  return 1;
} 
