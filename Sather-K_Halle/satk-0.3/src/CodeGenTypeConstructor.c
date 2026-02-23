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
    

#include "CodeGenTypeConstructor.head"
#include "CodeGenMisc.h"
#include "Strings.h"
#include "MyDebug.h"

PTGNode CreateArray(STPtr t, STPtr elem_type, DefTableKeyList bounds, int is_builtin)
{
  PTGNode res = PTGNULL;
  PTGNode native_ints = PTGNULL;
  PTGNode clrarr = PTGNULL;
  PTGNode load_native_arguments = PTGNULL;
  int i;

  for (i=1; i<=LengthDefTableKeyList(bounds); i++)
  {
    res = PTGNewLineSeq(res, 
      PTGNewLineSeq(PTGNewLineSeq(
        PTGcilPushArgumentNum(0),
        PTGcilPushArgumentNum(i)),
        PTGcilStoreField(GetCLRFieldRef(IthElemDefTableKeyList(bounds, i))))); 
    
    if (is_builtin) {
      native_ints = PTGCommaSeq(native_ints, PTGIdent("int32"));
      clrarr = PTGCommaSeq(clrarr, PTGIdent("")); 
      load_native_arguments = PTGNewLineSeq(PTGNewLineSeq(
        load_native_arguments,
        PTGcilPushArgumentNum(i)),
        PTGcilSatk2CLR(PTGIdent("valuetype 'INT'"), PTGIdent("int32")));
    }
  }
  if (is_builtin) { 
    clrarr = PTGTuple(GetCLRType(elem_type),PTGBracket(clrarr));
    
    res = PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(
      res,
      PTGcilPushArgumentNum(0)),
      load_native_arguments),
      (LengthDefTableKeyList(bounds)>1 ?
        PTGcilNewObjectArgs(clrarr, native_ints) :
        PTGcilNewArray(GetCLRType(elem_type)))),
      PTGcilStoreField(PTGSpaceSeq(clrarr,
      PTGTuple(GetCLRType(t), PTGIdent("::_val")))));
  }

  return res;
}

