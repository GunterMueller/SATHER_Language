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
    

#include "CodeGenStreams.h"
#include "Strings.h"
#include "pdl_gen.h"
#include "CodeGenMisc.h"

PTGNode CreateStreamBase()
{
  return PTGcilClassDecl(
    PTGcilClassHead(
      PTGcilClassAttributes(PTGIdent("abstract "), PTGNULL), 
      PTGIdent(STREAM_BASE_NAME), 
      PTGcilExtends(PTGIdent("[mscorlib]System.Object")), 
      PTGNULL),
    PTGcilField(PTGIdent("unsigned int32 _status")));
}
PTGNode CreateStreamObject(int name, DefTableKey k)
{
  PTGNode res = PTGNULL;
  PTGNode fields = PTGNULL;
  PTGNode ctor_body = PTGNULL;
  DefTableKeyList locals, onces;
  DefTableKey local;
  IntSet kinds;
  int i;

  if (name == 0)  
    return PTGNULL; 

  onces = NULLDefTableKeyList;
  locals = GetLocals(k, NULLDefTableKeyList);
  while (locals != NULLDefTableKeyList)
  {
        local = HeadDefTableKeyList(locals);
    if (GetUniqueName(local, 0) != 0) {
      kinds = GetSemKindSet(local, NULLIS);
      if ( !InIS(parameterK, kinds) || InIS(outK, kinds) || InIS(onceK, kinds) )
        fields = PTGNewLineSeq(fields, PTGcilField(PTGSpaceSeq(
          InIS(implicitstreamK, kinds) ?
            PTGcilIdent(StringTable(GetCLRStreamName(KeyOfType(GetType(local, NoType)), 0))) :
            GetCLRType(GetType(local, NoType)),
          PTGIdent(CatStrInd("__", GetUniqueName(local, 0))))));
      if (InIS(onceK, kinds))
        onces = AppElDefTableKeyList(onces, local);
    }
    locals = TailDefTableKeyList(locals);
  }

  for (i=1; i<= LengthDefTableKeyList(onces); i++)
  {
    ctor_body = PTGNewLineSeq(ctor_body,
      PTGNewLineSeq(PTGNewLineSeq(
        PTGcilPushSelf(),
        PTGcilPushArgumentNum(i)),
        PTGcilStoreField(
          PTGSpaceSeq(GetCLRType(GetType(IthElemDefTableKeyList(onces, i), NoType)),
          PTGTriple(
            PTGIdent(StringTable(name)),
            PTGIdent("::"),
            PTGIdent(CatStrInd("__", 
              GetUniqueName(IthElemDefTableKeyList(onces, i), 0))))))));
  }

  ctor_body = PTGNewLineSeq(ctor_body, PTGcilReturn());
  res = PTGcilClassDecl(
    PTGcilClassHead(
      PTGcilClassAttributes(PTGIdent("sealed "), PTGNULL), 
      PTGIdent(StringTable(name)), 
      PTGcilExtends(PTGIdent(STREAM_BASE_NAME)), 
      PTGNULL),
    PTGNewLineSeq(
      fields,
      PTGcilConstructor(
        GenerateCommaSepTypeList(onces, 1), 
        ctor_body)));
  return res; 
}

PTGNode EmptyStack(int h)
{
  PTGNode res = PTGNULL;

  while (h>0)
  {
    res = PTGNewLineSeq(res, PTGcilPop());
    h--;
  }

  return res;
}

PTGNode BackupLocals(DefTableKey k, int stream_object)
{
  PTGNode res = PTGNULL;
  int name;
  IntSet kinds;
  DefTableKeyList locals = GetLocals(k, NULLDefTableKeyList);
  DefTableKey local;
  
  while (locals != NULLDefTableKeyList)
  {
        local = HeadDefTableKeyList(locals);
        if (GetUniqueName(local, 0) != 0) {
      kinds = GetSemKindSet(local, NULLIS);
      if ( !InIS(parameterK, kinds) || InIS(outK, kinds) || InIS(onceK, kinds) )
      {
        name = GetUniqueName(local, 0);
        res = PTGNewLineSeq(res, PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(
          PTGcilPushArgument(PTGIdent("?streamo")),
          PTGcilCast(PTGIdent(StringTable(stream_object)))),
          PTGcilPushLocal(PTGcilIdent(StringTable(name)))),
        PTGcilStoreField(
          PTGSpaceSeq(
            InIS(implicitstreamK, kinds) ?
              PTGcilIdent(StringTable(GetCLRStreamName(KeyOfType(GetType(local, NoType)), 0))) :
              GetCLRType(GetType(local, NoType)),
          PTGTriple(
            PTGIdent(StringTable(stream_object)),
            PTGIdent("::"),
            PTGIdent(CatStrInd("__", name)))))));
      }
    }
    locals = TailDefTableKeyList(locals);
  }
  return res;
}

PTGNode RecoverLocals(DefTableKey k, int stream_object)
{
  PTGNode res = PTGNULL;
  IntSet kinds;
  int name;
  DefTableKeyList locals = GetLocals(k, NULLDefTableKeyList);
  DefTableKey local;
  
  while (locals != NULLDefTableKeyList)
  {
        local = HeadDefTableKeyList(locals);
        if (GetUniqueName(local, 0) != 0) {
      kinds = GetSemKindSet(local, NULLIS);
      if ( !InIS(parameterK, kinds) || InIS(outK, kinds) || InIS(onceK, kinds) )
      {
        name = GetUniqueName(local, 0);
        res = PTGNewLineSeq(res, PTGNewLineSeq(PTGNewLineSeq(
          PTGcilPushArgument(PTGIdent("?streamo")),
          PTGcilPushField(
            PTGSpaceSeq(
              InIS(implicitstreamK, kinds) ?
                PTGcilIdent(StringTable(GetCLRStreamName(KeyOfType(GetType(local, NoType)), 0))) :
                GetCLRType(GetType(local, NoType)),
            PTGTriple(
              PTGIdent(StringTable(stream_object)),
              PTGIdent("::"),
              PTGIdent(CatStrInd("__", name)))))),
          PTGcilStoreLocal(PTGcilIdent(StringTable(name)))));
      }
    }
    locals = TailDefTableKeyList(locals);
  }
  return res;
}
