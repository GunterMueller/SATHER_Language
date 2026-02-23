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
    
#include "GetReferencedClasses.h"

#define IMPORTANT_CLASSES 49

char* ImportantClasses[IMPORTANT_CLASSES] =
{
"EXCEPTION",
"EXTOB",
"OB",
"REFERENCE",
"VALUE",
"INT",
"SHORT_INT",
"LONG_INT",
"UNSIGNED",
"SHORT_UNSIGNED",
"LONG_UNSIGNED",
"INTINF",
"FLTD",
"FLT",
"BYTE",
"BITS",
"TYPE",
"BOOL",
"STR[*]",
"CHAR",
"STRING[*]",
"ARRAY",
"ARR",
"SYS_EXCEPTION",
"REFERENCE_ERROR",
"INDEX_ERROR",
"NUMERIC_ERROR",
"INTEGER_OVERFLOW",
"FLOAT_UNDERFLOW",
"FLOAT_OVERFLOW",
"ZERO_DIVIDE",
"STREAM_TERMINATION",
"TEXT",
"SYS_SIMPLE_VALUE",
"SYS_SIMPLE_NUM",
"SYS_SIMPLE_INUM",
"SYS_SIMPLE_FNUM",
"SYS_SIMPLE_ARRAY",
"SYS_ATTR",
"SYS_CONVERSION"
};

int CmpDefTableKey(DefTableKey k, DefTableKey l)
{
  return !(k == l);
}

DefTableKeyList FromMainReachable(DefTableKey curkey)
{
  DefTableKeyList res, curlist, templist;
  DefTableKey nextkey;

  res = curlist = GetReferencedClasses(curkey, NULLDefTableKeyList);

  ResetReachableVisited(curkey,1);
  while (curlist != NULLDefTableKeyList)
  {
    nextkey = HeadDefTableKeyList(curlist);
    if (!GetReachableVisited(nextkey, 0)) {
      templist = FromMainReachable(nextkey);
      while (templist != NULLDefTableKeyList)
      {
        res = AddToSetDefTableKeyList(HeadDefTableKeyList(templist), 
        res, &CmpDefTableKey);  
        templist = TailDefTableKeyList(templist);
      }
    }

    curlist = TailDefTableKeyList(curlist);    
  }
  
  return res;
}

DefTableKeyList AddImportantPredefined(DefTableKeyList l, Environment scope)
{
  Binding b;
  int i;

  if (scope == NoEnv)
    return l;

  for (i=0; i<IMPORTANT_CLASSES; i++)
  {
    b = BindingInEnv(scope, MakeName(ImportantClasses[i]));
    if (b==NoBinding)
      continue;
    
    l = AddToSetDefTableKeyList(KeyOf(b), l, CmpDefTableKey);
  }

  return l;
}
