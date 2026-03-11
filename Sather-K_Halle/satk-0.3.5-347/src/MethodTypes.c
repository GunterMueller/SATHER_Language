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
    
#include "MethodTypes.h"
#include "CodeGenMisc.h"

PTGNode CreateMethodTypes()
{

  PTGNode res = PTGNULL;
  STPtr restype, cur;
  STPtrList it = GetUniqueMethodTypes();
  STPtrList it2;
  DefTableKeyList conformsto = NULLDefTableKeyList;

  while (it != NULLSTPtrList)
  {
    cur = HeadSTPtrList(it);
    it2 = GetUniqueMethodTypes();
    
    while (it2 != NULLSTPtrList)
    {
      if (cur != HeadSTPtrList(it2) && IsConform(cur, HeadSTPtrList(it2)))
      {
        conformsto = AppElDefTableKeyList(conformsto, KeyOfType(HeadSTPtrList(it2)));
        ResetOverrides(KeyOfType(cur), 
          AppElOvrPtrList(GetOverrides(KeyOfType(cur), NULLOvrPtrList),
            NewOverriding(KeyOfType(HeadSTPtrList(it2)), KeyOfType(cur))));
      }
      it2 = TailSTPtrList(it2);
    }

    restype = GetResultType(KeyOfType(cur), NoType);
    res = PTGNewLineSeq(res,
      PTGcilClassDecl(
        PTGcilClassHead(
          PTGcilClassAttributes(PTGIdent("interface "), PTGNULL), 
          PTGTuple(PTGIdent("MethodType"), PTGNumber(cur->id)),
          PTGNULL, 
          PTGcilImplements(GetImplementsPattern(conformsto))),
        PTGNewLineSeq(  
        PTGcilMethod(
          PTGIdent("Call"), 
          GenerateCommaSepTypeList(GetParams(KeyOfType(cur), NULLDefTableKeyList), 0),
          restype ? GetCLRType(restype) : PTGIdent("void"),
          PTGNULL,
          PTGIdent("public abstract virtual ")),
        IsStreamType(cur) ?
          PTGcilMethod(
            PTGIdent("terminated"), 
            PTGNULL,  
            PTGcilIdent("BOOL"),
            PTGNULL,
            PTGIdent("public abstract virtual "))
          : PTGNULL))); 
          
    it = TailSTPtrList(it);
  }

  return PTGNewLineSeq(res, CreateMethodObjects());
}
