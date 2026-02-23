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
    

#include "CodeGenOverriding.head"
#include "OvrPtrList.h"
#include "Strings.h"
#include "pdl_gen.h"
#include "CodeGenMisc.h"

PTGNode GenerateBridgeMethods(DefTableKey k, PTGNode meth_object)
{
  PTGNode res = PTGNULL;
  PTGNode par_out, arg_out, locals, write_back;
  OvrPtrList l;
  DefTableKey from, to, temp;
  DefTableKeyList params;
  int i;

  l = GetOverrides(k, NULLOvrPtrList);

  while (l != NULLOvrPtrList)
  {
    from = HeadOvrPtrList(l)->overridden;
    to = HeadOvrPtrList(l)->overriding;

    par_out = PTGNULL;  arg_out = PTGNULL;  locals = PTGNULL; write_back = PTGNULL; i = 0;
    params = GetParams(from, NULLDefTableKeyList);

    while (params != NULLDefTableKeyList)
    {
      int is_outK;
      i++;

      temp = IthElemDefTableKeyList(GetParams(to, NULLDefTableKeyList), i);

      is_outK = InIS(outK, GetSemKindSet(HeadDefTableKeyList(params), NULLIS))
        && IsMonoValueType(GetType(IthElemDefTableKeyList(
          GetParams(to, NULLDefTableKeyList), i), NoType))
        && IsPolymorph(GetType(HeadDefTableKeyList(params), NoType));
      
      par_out = PTGCommaSeq(par_out, PTGSpaceSeq(
        GetCLRType(GetType(HeadDefTableKeyList(params), NoType)),
        (InIS(outK, GetSemKindSet(HeadDefTableKeyList(params), NULLIS)) ||
         InIS(inoutK, GetSemKindSet(HeadDefTableKeyList(params), NULLIS))) ?
        PTGIdent("&"): PTGNULL));

      if (is_outK)
      {
        locals = PTGCommaSeq(locals, PTGSpaceSeq(GetCLRType(GetType(temp, NoType)),
        PTGcilIdent(CatStrInd("_", GetSym(temp, 0)))));
        
        arg_out = PTGNewLineSeq(arg_out, PTGcilPushLocalAddress(
          PTGcilIdent(CatStrInd("_", GetSym(temp, 0)))));

        write_back = PTGNewLineSeq(write_back, PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(
          PTGcilPushArgument(PTGcilIdent(StringTable(
            GetSym(HeadDefTableKeyList(params), 0)))),
          PTGcilPushLocal(PTGcilIdent(CatStrInd("_", GetSym(temp, 0))))),
          PTGcilBox(GetCLRType(GetType(temp, NoType)))),
          PTGIdent("stind.ref")));
      }
      else
        arg_out = PTGNewLineSeq(PTGNewLineSeq(
          arg_out, 
          PTGcilPushArgumentNum(i)),
          (IsMonoValueType(GetType(HeadDefTableKeyList(params), NoType)) &&
          IsPolymorph(GetType(IthElemDefTableKeyList(
            GetParams(to, NULLDefTableKeyList), i), NoType))) 
          ?
            PTGcilBox(GetCLRType(GetType(HeadDefTableKeyList(params), NoType))) :
            PTGNULL);

      params = TailDefTableKeyList(params);
    }

    locals = PTGcilLocals(locals);
    
    res = PTGNewLineSeq(res, PTGcilMethod(
      PTGcilIdent(
        meth_object==PTGNULL ?
          StringTable(GetSym(from, 0)):
          "Call"),
      par_out,
      GetCLRType(GetResultType(KeyOfType(GetType(from, NoType)), NoType)),
      PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(
      PTGNewLineSeq(PTGNewLineSeq(
        locals,
        PTGcilPushSelf()),
        arg_out),
        PTGcilMethodCall(
          GetCLRType(GetResultType(KeyOfType(GetType(to, NoType)), NoType)), 
          meth_object == PTGNULL ?
            GetCLRType(GetType(k, NoType)) :
            meth_object,
          PTGcilIdent(
            meth_object == PTGNULL ?
              StringTable(GetSym(to, 0)):
              "Call"),
          GenerateCommaSepTypeList(GetParams(to, NULLDefTableKeyList), 0))),
          (IsMonoValueType(GetResultType(to, NoType)) && 
          IsPolymorph(GetResultType(from, NoType))) ?
        PTGcilBox(GetCLRType(GetResultType(KeyOfType(GetType(to, NoType)), NoType))) : PTGNULL),
        write_back),
        (GetResultType(KeyOfType(GetType(from, NoType)), NoType) == NoType && 
        GetResultType(KeyOfType(GetType(to, NoType)), NoType) != NoType) ?
        PTGcilPop() : PTGNULL),
        PTGcilReturn()),  
      PTGSpaceSeq(PTGSpaceSeq(
        PTGIdent("virtual"),
        InIS(privateK, GetSemKindSet(from, NULLIS)) ? 
          PTGIdent("private ") :
          PTGIdent("public ")),
        InIS(abstractK, GetSemKindSet(from, NULLIS)) ? 
          PTGIdent("abstract") :
          PTGNULL)));

    l = TailOvrPtrList(l);
  }
  
  return res;
}
