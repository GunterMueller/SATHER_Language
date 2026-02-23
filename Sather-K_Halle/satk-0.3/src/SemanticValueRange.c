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
    
#include "SemanticValueRange.h"

ValueRangePtr NewValueRange(CTValuePtr from, CTValuePtr to)
{
  
  if (!value_stack_initialized)
  {
    obstack_init(&valuestack);
    value_stack_initialized = 1;
  }

  ValueRangePtr newvr = obstack_alloc(&valuestack, sizeof(struct ValueRange)); 

  newvr->start = from;
  newvr->end = to;

  return newvr;
}

int IsLabelValue(CTValuePtr val)
{
  if (val == NULLValue)
    return 0;

  if (  val->value_type != UNI_INT &&
        val->value_type != UNI_BOOL &&
        val->value_type != UNI_CHAR)
    return 0;
  
  return 1;
}

int IsLabelRange(CTValuePtr val1, CTValuePtr val2)
{
  if (val1 == NULLValue || val2== NULLValue)
    return 0;

  if (val1->value_type != val2->value_type)
    return 1;

  if(mpz_cmp(val1->int_value, val2->int_value)>0)
    return 2;
  
  return 3;
}

int CompareLabelRange(ValueRangePtr l1, ValueRangePtr l2)
{
  if (l1 == NULLValueRange || l2 == NULLValueRange)
    return 0;
  
  if (l1->start == NULLValue || l2->start == NULLValue)
    return 0;
  
  return mpz_cmp(l1->start->int_value, l2->start->int_value);
}

void CheckOverlappingLabels(ValueRangePtrList l, CoordPtr pos)
{
  ValueRangePtr r1, r2;
  CTValuePtr v1, v2;
  
  while (l != NULLValueRangePtrList)
  {
    if (TailValueRangePtrList(l) != NULLValueRangePtrList)
    {
      r1 = HeadValueRangePtrList(l);
      r2 = HeadValueRangePtrList(TailValueRangePtrList(l));

      if (r1 != NULLValueRange && r2 != NULLValueRange)
      {
        v1 = r1->end;
        v2 = r2->start;
      
        if (v1 != NULLValue && v2 != NULLValue)
        {
          if (!(mpz_cmp(v1->int_value, v2->int_value) < 0))
            message(ERROR, "overlapping values of case labels", 0, pos);
        }
      }
    }
    
    l = TailValueRangePtrList(l);
  }
}
