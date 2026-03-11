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
    

#include "CodeGenValues.head"
#include "SemanticValues.h"
#include "MyDebug.h"

PTGNode GetValueCode(STPtr type, CTValuePtr val, CoordPtr pos, Environment scope)
{
  STPtr temp_type;
  PTGNode temp;

  if (IsPolymorph(type))
  {
    temp_type = CoerceValue(val, NoType, 0, pos, scope);
    return PTGNewLineSeq(
      GetValueCode(temp_type, val, pos, scope),
      PTGcilBox(GetCLRType(temp_type)));
  }
    
  if (EqualsType(GetType(GetPreDefKey(MakeName("SHORT_INT"), scope, pos), NoType), type))
    return PTGNewLineSeq(
      PTGTuple(PTGIdent("ldc.i4 "), PTGIdent(Value2Str(val))),
      PTGIdent("newobj instance void SHORT_INT::.ctor (int16)"));
  if (EqualsType(GetType(GetPreDefKey(MakeName("INT"), scope, pos), NoType), type))
    return PTGNewLineSeq(
      PTGTuple(PTGIdent("ldc.i4 "), PTGIdent(Value2Str(val))),
      PTGIdent("newobj instance void INT::.ctor (int32)"));
  if (EqualsType(GetType(GetPreDefKey(MakeName("LONG_INT"), scope, pos), NoType), type))
    return PTGNewLineSeq(
      PTGTuple(PTGIdent("ldc.i8 "), PTGIdent(Value2Str(val))),
      PTGIdent("newobj instance void LONG_INT::.ctor (int64)"));
  
  if (EqualsType(GetType(GetPreDefKey(MakeName("SHORT_UNSIGNED"), scope, pos), NoType), type))
    return PTGNewLineSeq(
      PTGTuple(PTGIdent("ldc.i4 "), PTGIdent(Value2Str(val))),
      PTGIdent("newobj instance void SHORT_UNSIGNED::.ctor (unsigned int16)"));
  if (EqualsType(GetType(GetPreDefKey(MakeName("UNSIGNED"), scope, pos), NoType), type))
    return PTGNewLineSeq(
      PTGTuple(PTGIdent("ldc.i4 "), PTGIdent(Value2Str(val))),
      PTGIdent("newobj instance void UNSIGNED::.ctor (unsigned int32)"));
  if (EqualsType(GetType(GetPreDefKey(MakeName("LONG_UNSIGNED"), scope, pos), NoType), type))
    return PTGNewLineSeq(
      PTGTuple(PTGIdent("ldc.i8 "), PTGIdent(Value2Str(val))),
      PTGIdent("newobj instance void LONG_UNSIGNED::.ctor (unsigned int64)"));
  
  Value2Real(val);

  if (EqualsType(GetType(GetPreDefKey(MakeName("FLT"), scope, pos), NoType), type))
  {
    switch (val->special_real)
    {
      case SK_NOT_A_NUMBER:      
        temp = PTGIdent("(00 00 c0 ff)"); break;
      case SK_INFINITY:      
        temp = PTGIdent("(00 00 80 7f)"); break;
      case SK_NEG_INFINITY:      
        temp = PTGIdent("(00 00 80 ff)"); break;
      default:
        temp = PTGIdent(Value2Str(val)); break;
    }

    return PTGNewLineSeq(
      PTGTuple(PTGIdent("ldc.r4 "), temp),
      PTGIdent("newobj instance void FLT::.ctor (float32)"));
  }
  if (EqualsType(GetType(GetPreDefKey(MakeName("FLTD"), scope, pos), NoType), type))
  {
    switch (val->special_real)
    {
      case SK_NOT_A_NUMBER:      
        temp = PTGIdent("(00 00 00 00 00 00 f8 ff)"); break;
      case SK_INFINITY:      
        temp = PTGIdent("(00 00 00 00 00 00 f0 7f)"); break;
      case SK_NEG_INFINITY:      
        temp = PTGIdent("(00 00 00 00 00 00 f0 ff)"); break;
      default:
        temp = PTGIdent(Value2Str(val)); break;
    }

    return PTGNewLineSeq(
      PTGTuple(PTGIdent("ldc.r8 "), temp),
      PTGIdent("newobj instance void FLTD::.ctor (float64)"));
  }

  return PTGNULL;
}
