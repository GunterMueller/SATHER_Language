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
    
#include "BoundMethodsImpl.h"

BMPtr NewBoundMethod(STPtr t, DefTableKey k, STPtrList args, int qualified_polymorph)
{
  BMPtrList temp;
  int i=1;

  if (!bm_stack_initialized)
  {
    obstack_init(&bmstack);
    bm_stack_initialized = 1;
  }
  
  if (k == NoKey || t == NoType)
    return NoBoundMethod;

  temp = bound_methods;   

  BMPtr newboundmethod = (BMPtr) obstack_alloc(&bmstack, sizeof(struct BoundMethod));
  
  newboundmethod->method_type = t;
  newboundmethod->called = k;
  newboundmethod->bound_args = args;
  newboundmethod->no_base = (qualified_polymorph == 2);

  while (temp != NULLBMPtrList)
  {
    if (!CmpBoundMethod(HeadBMPtrList(temp), newboundmethod))
    {
      obstack_free(&bmstack, newboundmethod);
      return HeadBMPtrList(temp);
    }
    temp = TailBMPtrList(temp);
    i++;
  }
  
  bound_methods = AppElBMPtrList(bound_methods, newboundmethod);
  newboundmethod->id = i;
  return newboundmethod;
}

int CmpBoundMethod(BMPtr b1, BMPtr b2)
{
  if (b1 == b2)
    return 0;

  if (b1 == NoBoundMethod || b2 == NoBoundMethod)
    return 1;

  //gleiche Methodentypen
  if (!EqualsType(b1->method_type, b2->method_type))
    return 1;

  //gleiche Keys bei echten Methoden und gleicher Typ bei gebundenen Methoden
  if (b1->called != b2->called)
  {
    if (InIS(featureK, GetSemKindSet(b1->called, NULLIS)) || 
      InIS(featureK, GetSemKindSet(b2->called, NULLIS)) || 
      !EqualsType(GetType(b1->called, NoType), GetType(b2->called, NoType)))
      return 1;
  }

  if (b1->no_base != b2->no_base)
    return 1;
  
  return 0;
}

int EqualsSTPtrList(STPtrList l1, STPtrList l2)
{
  if (l1 == l2)
    return 1;

  if (LengthSTPtrList(l1) != LengthSTPtrList(l2))
    return 0;

  while (l1 != NULLSTPtrList)
  {
    if(!EqualsType(HeadSTPtrList(l1), HeadSTPtrList(l2)))
      return 0;
    l1 = TailSTPtrList(l1);
    l2 = TailSTPtrList(l2);
  }
  
  return 1;
}

BMPtrList GetBoundMethods()
{
  return bound_methods;
}

PTGNode GetCLRBoundMethod(BMPtr b)
{
  if (b==NoBoundMethod)
    return PTGIdent("object");
  
  return PTGTuple(PTGIdent("MethodObject"), PTGNumber(b->id)); 
}

PTGNode GetCLRBoundMethodType(BMPtr b)
{
  if (b==NoBoundMethod)
    return PTGIdent("object");
  
  return PTGTuple(PTGIdent("valuetype MethodObject"), PTGNumber(b->id)); 
}

PTGNode CreateMethodObjects()
{
  PTGNode ctor_params, ctor_body, 
    mbody, fields, term_method, res = PTGNULL;
  STPtr restype = NoType;
  STPtr mtype, t, base;
  BMPtrList it = bound_methods;
  BMPtr cur;
  STPtrList tl;
  int i, j, stream_name;

  while (it != NULLBMPtrList)
  {
    fields = PTGNULL; mbody = PTGNULL; 
    ctor_params = PTGNULL; ctor_body = PTGNULL;
    term_method = PTGNULL;
    cur = HeadBMPtrList(it);
    mtype = cur->method_type;
    i=j=0;

    base = GetBoundMethodBaseType(cur->called);

    if (cur->no_base)
      mbody = PTGcilPushArgument(PTGIdent("1"));
    else mbody = 
      PTGNewLineSeq(
        PTGcilPushSelf(), 
        IsMonoValueType(base) ?
          PTGcilPushFieldAddress(PTGSpaceSeq(GetCLRType(base), 
            PTGTuple(GetCLRBoundMethodType(cur),  PTGIdent("::base")))) :
          PTGcilPushField(PTGSpaceSeq(GetCLRType(base), 
            PTGTuple(GetCLRBoundMethodType(cur),  PTGIdent("::base")))));

    stream_name = GetCLRStreamName(cur->called, 0);

    if (stream_name)
    {
      fields = PTGNewLineSeq(fields, 
        PTGcilField(PTGSpaceSeq(
          PTGIdent(StringTable(stream_name)),
          PTGIdent("streamo"))));
      mbody = PTGNewLineSeq(mbody,
        PTGNewLineSeq(
          PTGcilPushSelf(),
          PTGcilPushField(PTGSpaceSeq(
            PTGIdent(StringTable(stream_name)),
            PTGTuple(GetCLRBoundMethodType(cur), PTGIdent("::streamo"))))));
      term_method = PTGcilMethod(
        PTGIdent("terminated"), 
        PTGNULL,
        PTGcilIdent("BOOL"),
        PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(
        PTGNewLineSeq(PTGNewLineSeq(
          PTGcilPushSelf(),
          PTGcilPushField(PTGcilFieldRef(
            PTGIdent(StringTable(stream_name)),
            GetCLRBoundMethodType(cur),
            PTGIdent("streamo")))),
          PTGcilPushField(PTGcilFieldRef(
            PTGIdent("unsigned int32"),
            PTGIdent(StringTable(stream_name)),
            PTGIdent("_status")))),
          PTGIdent("ldc.i4 -1")),
          PTGIdent("conv.u4")),
          PTGIdent("ceq")), 
          PTGIdent("newobj instance void 'BOOL'::.ctor(bool)")),
          PTGcilReturn()),
        PTGIdent("public virtual "));
    }

    if(!stream_name && IsStreamType(GetType(cur->called, NoType)))
      term_method = PTGcilMethod(
        PTGIdent("terminated"), 
        PTGNULL,
        PTGcilIdent("BOOL"),
        PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(
          PTGcilPushSelf(),
          PTGcilPushField(PTGcilFieldRef(
            GetCLRType(base),
            GetCLRBoundMethodType(cur),
            PTGIdent("base")))),
          PTGcilMethodCall(
            PTGcilIdent("BOOL"),
            GetCLRType(base),
            PTGIdent("terminated"),
            PTGNULL)),
          PTGcilReturn()),
        PTGIdent("public virtual "));
  
    tl = cur->bound_args;

    while (tl != NULLSTPtrList)
    {
      t = HeadSTPtrList(tl);
      if (t != NoType)
      {
        i++;
        fields = PTGNewLineSeq(fields,
          PTGcilField(PTGSpaceSeq(GetCLRType(t), PTGTuple(PTGIdent("arg"), 
            PTGNumber(i)))));
        mbody = PTGNewLineSeq(PTGNewLineSeq(mbody, PTGcilPushSelf()),
          PTGcilPushField(PTGSpaceSeq(GetCLRType(t), 
            PTGTriple(GetCLRBoundMethodType(cur), PTGIdent("::arg"), PTGNumber(i)))));
        ctor_body = PTGNewLineSeq(ctor_body, 
          PTGNewLineSeq(PTGNewLineSeq(
            PTGcilPushSelf(),
            PTGcilPushArgument(PTGNumber(i))),
            PTGcilStoreField(PTGSpaceSeq(GetCLRType(t), 
            PTGTriple(GetCLRBoundMethodType(cur), PTGIdent("::arg"), PTGNumber(i))))));
        ctor_params = PTGCommaSeq(ctor_params, GetCLRType(t));
      } else
      {
        j++;
        mbody = PTGNewLineSeq(mbody, PTGcilPushArgument(PTGNumber(cur->no_base ? j+1 : j)));
      }

      tl = TailSTPtrList(tl);
    }

    if (!cur->no_base)
    {
      ctor_params = PTGCommaSeq(ctor_params, GetCLRType(base));
      ctor_body = PTGNewLineSeq(ctor_body, 
        PTGNewLineSeq(PTGNewLineSeq(
          PTGcilPushSelf(),
          PTGcilPushArgument(PTGNumber(++i))),
          PTGcilStoreField(PTGSpaceSeq(GetCLRType(base), 
          PTGTuple(GetCLRBoundMethodType(cur),  PTGIdent("::base"))))));
      fields = PTGNewLineSeq(fields, PTGcilField(PTGSpaceSeq(GetCLRType(base),
        PTGIdent("base"))));
    }
    
    if(stream_name)
    {
      ctor_params = PTGCommaSeq(ctor_params, PTGIdent(StringTable(stream_name)));
      ctor_body = PTGNewLineSeq(ctor_body, 
        PTGNewLineSeq(PTGNewLineSeq(
          PTGcilPushSelf(),
          PTGcilPushArgument(PTGNumber(++i))),
          PTGcilStoreField(PTGSpaceSeq(PTGIdent(StringTable(stream_name)), 
            PTGTuple(GetCLRBoundMethodType(cur),  PTGIdent("::streamo"))))));
    }

    mbody = PTGNewLineSeq(PTGNewLineSeq(
      mbody,
      PTGcilMethodCall(
        GetCLRType(GetResultType(KeyOfType(GetType(cur->called, NoType)), NoType)), 
        GetCLRType(base),
        PTGcilIdent(InIS(methodK, GetSemKindSet(cur->called, NULLIS)) ?
          StringTable(GetSym(cur->called, 0)) :
          "Call"),
        PTGCommaSeq(  
          stream_name ? PTGIdent(CatStrStr("class ", STREAM_BASE_NAME)) : PTGNULL,
          GenerateCommaSepTypeList(GetParams(KeyOfType(GetType(cur->called, NoType)), 
            NULLDefTableKeyList), 0)))),
      PTGcilReturn());

    ctor_body = PTGNewLineSeq(ctor_body, PTGcilReturn());
    restype = GetResultType(KeyOfType(mtype), NoType);
    res = PTGNewLineSeq(res,
      PTGcilClassDecl(
        PTGcilClassHead(
          PTGcilClassAttributes(PTGIdent("sealed "), PTGNULL), 
          GetCLRBoundMethod(cur), 
          PTGcilExtends(PTGIdent("[mscorlib]System.ValueType")), 
          PTGcilImplements(PTGTuple(PTGIdent("MethodType"), PTGNumber(mtype->id)))),
        PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(
          fields,
          PTGcilConstructor(ctor_params, ctor_body)),
          PTGcilMethod(
            PTGIdent("Call"), 
            GenerateCommaSepTypeList(GetParams(KeyOfType(mtype), NULLDefTableKeyList), 0),
            restype ? GetCLRType(restype) : PTGIdent("void"),
            mbody,
            PTGIdent("public virtual "))),
          term_method),
          GenerateBridgeMethods(KeyOfType(mtype), GetCLRBoundMethod(cur))))); 
    it = TailBMPtrList(it);
  }

  return res;
}

PTGNode GetCLRBoundedArgs(BMPtr b)
{
  PTGNode res = PTGNULL;
  STPtrList it;

  if (b == NoBoundMethod)
    return PTGNULL;

  it = b->bound_args;

  while (it != NULLSTPtrList)
  {
    if (HeadSTPtrList(it) != NoType)
      res = PTGCommaSeq(res, GetCLRType(HeadSTPtrList(it)));
    it = TailSTPtrList(it);
  }

  return res;
}

STPtr GetBoundMethodBaseType(DefTableKey k)
{
  if (InIS(methodK, GetSemKindSet(k, NULLIS)))
    return GetType(GetFeatureOf(k, NoKey), NoType);
  else
    return GetType(k, NoType);
}
