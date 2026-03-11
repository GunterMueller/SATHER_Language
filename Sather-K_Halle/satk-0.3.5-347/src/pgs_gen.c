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
    
/* $Id: StructConn,v 1.13 1998/10/12 06:09:57 tony Exp $ */
#include "gsdescr.h"
#include "treestack.h"
#include "HEAD.h"

#define TokenStack(i)	(ZAttributKeller[(i)])

#ifdef RIGHTCOORD
extern POSITION rightpos;
#endif

#if defined(__cplusplus) || defined(__STDC__) 
void
StrukturAnknuepfung(unsigned PR, GRUNDSYMBOLDESKRIPTOR *ZAttributKeller)
#else
void
StrukturAnknuepfung(PR, ZAttributKeller)
unsigned  PR;
register GRUNDSYMBOLDESKRIPTOR  *ZAttributKeller;
#endif
{
  curpos = ZAttributKeller->Pos;
#ifdef RIGHTCOORD
  RLineOf (curpos) = RLineOf (rightpos);
  RColOf (curpos) = RColOf (rightpos);
#ifdef MONITOR
  RCumColOf (curpos) = RCumColOf (rightpos);
#endif
#endif
  switch (PR) {
  case 1: IncludePredefinedClasses();  break;
  case 2: _nst[_nsp]=Mkrule_2(&curpos, _nst[_nsp+0], NULLNODEPTR, NULLNODEPTR); break;
  case 3: IncludePredefinedClasses(); 
            _nsp -= 1;_nst[_nsp]=Mk2CLASS_DECLARATIONS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]);
            break;
  case 4: _nsp -= 1;_nst[_nsp]=MkCLASS_HEAD_O(&curpos, MkCLASS_ID_DEF_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0], _nst[_nsp+1]); break;
  case 5: _nsp -= 1;_nst[_nsp]=MkCLASS_BOUNDS_LST_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 6: _nsp -= 1;_nst[_nsp]=MkCLASS_BOUNDS_LST_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 7: _nst[_nsp]=MkFEATURE_DECL_O(&curpos, _nst[_nsp+0]); break;
  case 8: _nst[_nsp]=MkFEATURE_ATT_O(&curpos, _nst[_nsp+0]); break;
  case 9: _nst[_nsp]=MkFEATURE_METH_O(&curpos, _nst[_nsp+0]); break;
  case 10: _nsp -= 1;_nst[_nsp]=MkCLASS_BOUNDS_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 11: _nsp -= 1;_nst[_nsp]=MkCLASS_HEAD_O(&curpos, MkCLASS_ID_DEF_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0], _nst[_nsp+1]); break;
  case 12: _nsp -= 1;_nst[_nsp]=MkCLASS_BOUNDS_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 13: _nst[_nsp]=MkCLASS_PARAMETER_O(&curpos, MkCLASS_PARAM_ID_DEF_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0]); break;
  case 14: _nsp -= 1;_nst[_nsp]=MkCLASS_PARAMETERS_LST_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 15: _nst[_nsp]=MkBUILTIN_OPT_CL_O(&curpos, _nst[_nsp+0]); break;
  case 16: _nsp -= 1;_nst[_nsp]=MkFEATURE_ATT_ACC_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 17: _nst[_nsp]=MkFEATURE_METH_O(&curpos, _nst[_nsp+0]); break;
  case 18: _nst[_nsp]=MkFEATURE_STREAM_O(&curpos, _nst[_nsp+0]); break;
  case 19: _nsp -= 2;_nst[_nsp]=MkCLASS_BODY_O(&curpos, _nst[_nsp+0], _nst[_nsp+2], _nst[_nsp+1]); break;
  case 20: _nst[_nsp]=MkFEATURE_DECL_PRIV_O(&curpos, _nst[_nsp+0]); break;
  case 21: _nst[_nsp]=MkINHERITANCE_PRIV_O(&curpos, _nst[_nsp+0]); break;
  case 22: _nsp -= 2;_nst[_nsp]=MkCLASS_BODY_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], _nst[_nsp+2]); break;
  case 23: _nsp -= 2;_nst[_nsp]=MkCLASS_BODY_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], _nst[_nsp+2]); break;
  case 24: _nsp -= 2;_nst[_nsp]=MkCLASS_BODY_O(&curpos, _nst[_nsp+0], _nst[_nsp+2], _nst[_nsp+1]); break;
  case 25: _nst[_nsp]=MkTYPE_SPECIFIER_CL_O(&curpos, _nst[_nsp+0]); break;
  case 26: _nsp -= 1;_nst[_nsp]=MkCLASS_PARAMETERS_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 27: _nst[_nsp]=MkTYPE_CONSTRUCTOR_AGG_O(&curpos, _nst[_nsp+0]); break;
  case 28: _nsp -= 1;_nst[_nsp]=MkATTR_SPEC_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 29: _nsp -= 1;_nst[_nsp]=MkATTR_DECL_TYPE_CONST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 30: _nsp -= 1;_nst[_nsp]=MkATTR_DECL_EXP_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 31: _nst[_nsp]=MkDESIGNATOR_METH_O(&curpos, _nst[_nsp+0]); break;
  case 32: _nst[_nsp]=MkEXPRESSION_BOUND_O(&curpos, _nst[_nsp+0]); break;
  case 33: _nst[_nsp]=MkEXPRESSION_VALUE_O(&curpos, _nst[_nsp+0]); break;
  case 34: _nst[_nsp]=MkEXPRESSION_COERCION_O(&curpos, _nst[_nsp+0]); break;
  case 35: _nst[_nsp]=MkDESIGNATOR_QUAL_O(&curpos, _nst[_nsp+0]); break;
  case 36: _nst[_nsp]=MkEXPRESSION_STREAM_O(&curpos, _nst[_nsp+0]); break;
  case 37: _nst[_nsp]=MkEXPRESSION_CONS_O(&curpos, _nst[_nsp+0]); break;
  case 38: _nst[_nsp]=MkEXPRESSION_METH_O(&curpos, _nst[_nsp+0]); break;
  case 39: _nst[_nsp]=MkEXPRESSION_METH_O(&curpos, _nst[_nsp+0]); break;
  case 40: _nst[_nsp]=MkEXPRESSION_METH_O(&curpos, _nst[_nsp+0]); break;
  case 41: _nst[_nsp]=MkEXPRESSION_METH_O(&curpos, _nst[_nsp+0]); break;
  case 42: _nst[_nsp]=MkEXPRESSION_METH_O(&curpos, _nst[_nsp+0]); break;
  case 43: _nst[_nsp]=MkEXPRESSION_METH_O(&curpos, _nst[_nsp+0]); break;
  case 44: _nst[_nsp]=MkEXPRESSION_METH_O(&curpos, _nst[_nsp+0]); break;
  case 45: _nst[_nsp]=MkVALUE_STR_O(&curpos, _nst[_nsp+0]); break;
  case 46: _nst[_nsp]=MkEXPRESSION_METH_O(&curpos, _nst[_nsp+0]); break;
  case 47: _nst[_nsp]=MkPARAMETERS_O(&curpos, _nst[_nsp+0]); break;
  case 48: _nst[_nsp]=MkATTR_DECL_TYPE_CONST_O(&curpos, MkIDENT_DEF_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0]); break;
  case 49: _nsp -= 1;_nst[_nsp]=Mk2FEATURE_DECLS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 50: _nsp -= 1;_nst[_nsp]=MkINHERITANCE_INCLUDE_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 51: _nsp -= 1;_nst[_nsp]=MkINHERITANCE_LIKE_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 52: _nsp -= 1;_nst[_nsp]=MkINHERITANCES_LST_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 53: _nst[_nsp]=MkTYPE_SPECIFIER_CL_POLY_O(&curpos, _nst[_nsp+0]); break;
  case 54: _nst[_nsp]=MkTYPE_SPECIFIER_PROC_O(&curpos, _nst[_nsp+0]); break;
  case 55: _nst[_nsp]=MkTYPE_SPECIFIER_STREAM_O(&curpos, _nst[_nsp+0]); break;
  case 56: _nsp -= 1;_nst[_nsp]=MkTYPE_SPECIFIERS_LST_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 57: _nst[_nsp]=MkBOUND_EXP_O(&curpos, _nst[_nsp+0]); break;
  case 58: _nst[_nsp]=MkBOUNDS_O(&curpos, _nst[_nsp+0]); break;
  case 59: _nsp -= 1;_nst[_nsp]=MkCLASS_SPECIFIER_O(&curpos, MkCLASS_ID_USE_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0], _nst[_nsp+1]); break;
  case 60: _nst[_nsp]=MkATTR_SPEC_O(&curpos, MkIDENT_DEF_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0]); break;
  case 61: _nsp -= 1;_nst[_nsp]=MkATTR_DECL_CONST_EXP_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 62: _nsp -= 1;_nst[_nsp]=MkATTR_DECL_CONST_TYPE_CONST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 63: _nst[_nsp]=MkATTR_DECL_CONST_TYPE_CONST_O(&curpos, MkIDENT_DEF_O(&(T_POS(TokenStack(1))), Mkidentifier(&(T_POS(TokenStack(1))), T_ATTR(TokenStack(1)))), _nst[_nsp+0]); break;
  case 65: _nsp -= 1;_nst[_nsp]=MkSTD_METHOD_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 66: _nsp -= 1;_nst[_nsp]=MkDESIGNATOR_EXP_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 67: _nsp -= 1;_nst[_nsp]=MkDESIGNATOR_EXP_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 68: _nsp -= 1;_nst[_nsp]=MkSTD_METHOD_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 69: _nsp -= 1;_nst[_nsp]=MkSTD_METHOD_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 70: _nsp -= 1;_nst[_nsp]=MkSTD_METHOD_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 71: _nsp -= 1;_nst[_nsp]=MkSTD_METHOD_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 72: _nsp -= 1;_nst[_nsp]=MkSTD_METHOD_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 73: _nsp -= 1;_nst[_nsp]=MkDESIGNATOR_EXP_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 74: _nsp -= 1;_nst[_nsp]=MkSTD_METHOD_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 75: _nst[_nsp]=MkTYPE_SPECIFIER_CL_POLY_O(&curpos, _nst[_nsp+0]); break;
  case 76: _nst[_nsp]=MkSTR_CONSTANTS_LST_O(&curpos, MkSTR_CONSTANT_O(&(T_POS(TokenStack(0))), Mkstringconst(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0]); break;
  case 77: _nsp -= 1;_nst[_nsp]=MkDESIGNATOR_EXP_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 78: _nsp -= 1;_nst[_nsp]=MkDESIGNATOR_EXP_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 79: _nsp -= 1;_nst[_nsp]=MkDESIGNATOR_EXP_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 80: _nsp -= 1;_nst[_nsp]=MkDESIGNATOR_EXP_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 81: _nsp -= 1;_nst[_nsp]=MkDESIGNATOR_EXP_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 82: _nsp -= 1;_nst[_nsp]=MkDESIGNATOR_EXP_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 83: _nsp -= 1;_nst[_nsp]=MkDESIGNATOR_EXP_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 84: _nsp -= 1;_nst[_nsp]=MkPARAMETER_SPEC_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 85: _nst[_nsp]=MkMETHOD_BODY_O(&curpos, _nst[_nsp+0]); break;
  case 86: _nsp -= 1;_nst[_nsp]=MkINHERITANCE_INC_ONLY_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 87: _nst[_nsp]=MkMODIFICATIONS_O(&curpos, _nst[_nsp+0]); break;
  case 88: _nsp -= 1;_nst[_nsp]=MkINHERITANCE_INCLUDE_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 89: _nsp -= 1;_nst[_nsp]=MkINHERITANCE_LIKE_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 90: _nst[_nsp]=MkPARAMETER_TYPES_O(&curpos, _nst[_nsp+0]); break;
  case 91: _nsp -= 1;_nst[_nsp]=MkMETHOD_SPECIFICATION_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 92: _nst[_nsp]=MkTYPE_SPECIFIER_STREAM_O(&curpos, _nst[_nsp+0]); break;
  case 93: _nsp -= 1;_nst[_nsp]=MkTYPE_SPECIFIERS_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 94: _nsp -= 1;_nst[_nsp]=MkNAMED_EXPRESSION_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 95: _nst[_nsp]=MkTYPE_CONSTRUCTOR_SAME_AGG_O(&curpos, _nst[_nsp+0]); break;
  case 96: _nst[_nsp]=MkTYPE_CONSTRUCTOR_SAME_O(&curpos, _nst[_nsp+0]); break;
  case 97: _nsp -= 1;_nst[_nsp]=MkARGUMENTS_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 98: _nsp -= 1;_nst[_nsp]=MkARGUMENTS_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 99: _nsp -= 1;_nst[_nsp]=MkARGUMENTS_LST_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 100: _nsp -= 1;_nst[_nsp]=MkDIRECT_STREAM_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 101: _nsp -= 1;_nst[_nsp]=MkDIRECT_STREAM_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 102: _nsp -= 1;_nst[_nsp]=MkCOERCION_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 103: _nsp -= 1;_nst[_nsp]=Mk2PARAMETERS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 104: _nst[_nsp]=MkFEATURE_SPEC_O(&curpos, MkFEATURE_ID_USE_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0]); break;
  case 105: _nsp -= 1;_nst[_nsp]=MkPARAMETER_TYPE_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 106: _nsp -= 1;_nst[_nsp]=MkMETHOD_SPECIFICATION_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 107: _nsp -= 1;_nst[_nsp]=Mk2BOUNDS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 108: _nsp -= 1;_nst[_nsp]=MkCLASS_SPECIFIER_O(&curpos, MkCLASS_ID_USE_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0], _nst[_nsp+1]); break;
  case 109: _nst[_nsp]=MkCLASS_ARGUMENT_O(&curpos, _nst[_nsp+0]); break;
  case 110: _nsp -= 1;_nst[_nsp]=MkCLASS_ARGUMENTS_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 111: _nst[_nsp]=MkNAMED_EXPRESSION_O(&curpos, MkOBJ_ID_USE_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0]); break;
  case 112: _nsp -= 1;_nst[_nsp]=Mk2NAMED_EXPRESSIONS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 113: _nsp -= 2;_nst[_nsp]=MkTYPE_CONSTRUCTOR_CL_AGG_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], _nst[_nsp+2], NULLNODEPTR); break;
  case 114: _nsp -= 2;_nst[_nsp]=MkTYPE_CONSTRUCTOR_CLASS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], _nst[_nsp+2], NULLNODEPTR); break;
  case 115: _nsp -= 2;_nst[_nsp]=MkTYPE_CONSTRUCTOR_CL_AGG_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], _nst[_nsp+2], NULLNODEPTR); break;
  case 116: _nsp -= 2;_nst[_nsp]=MkTYPE_CONSTRUCTOR_CLASS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], _nst[_nsp+2], NULLNODEPTR); break;
  case 117: _nsp -= 1;_nst[_nsp]=MkARGUMENTS_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 118: _nst[_nsp]=MkARGUMENT_EXP_O(&curpos, _nst[_nsp+0]); break;
  case 119: _nsp -= 1;_nst[_nsp]=MkARGUMENTS_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 120: _nsp -= 1;_nst[_nsp]=MkMETHOD_BODY_FOREIGN_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 121: _nsp -= 1;_nst[_nsp]=MkBUILTIN_INSTS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 122: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_EXP_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 123: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_EXP_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 124: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_COND_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 125: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_ASSIGN_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 126: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_CASE_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 127: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_TYPE_CASE_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 128: _nst[_nsp]=MkASSERTION_STATEMENT_O(&curpos, _nst[_nsp+0]); break;
  case 129: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_ASSERT_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 130: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_BEGIN_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 132: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_LOOP_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 133: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_BREAK_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 134: _nsp -= 1;_nst[_nsp]=MkSTD_METHOD_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 135: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_EXP_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 136: _nst[_nsp]=MkRAISE_STATEMENT_O(&curpos, _nst[_nsp+0]); break;
  case 137: _nst[_nsp]=MkRAISE_STATEMENT_O(&curpos, _nst[_nsp+0]); break;
  case 138: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_RAISE_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 139: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_RESUME_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 140: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_RETURN_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 141: _nsp -= 2;_nst[_nsp]=MkMETHOD_DECL_O(&curpos, MkMETHOD_IDENT_DEF_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+2], _nst[_nsp+0], _nst[_nsp+1]); break;
  case 142: _nst[_nsp]=MkFEATURE_SPEC_STREAM_O(&curpos, MkFEATURE_ID_USE_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0]); break;
  case 143: _nsp -= 1;_nst[_nsp]=Mk2MODIFICATIONS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 144: _nsp -= 1;_nst[_nsp]=Mk2PARAMETER_TYPES_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 145: _nsp -= 1;_nst[_nsp]=MkMETHOD_SPECIFICATION_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 146: _nsp -= 1;_nst[_nsp]=MkCLASS_ARGUMENTS_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 147: _nsp -= 1;_nst[_nsp]=MkARGUMENTS_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 148: _nsp -= 2;_nst[_nsp]=MkMETHOD_DECL_O(&curpos, MkMETHOD_IDENT_DEF_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+2], _nst[_nsp+0], _nst[_nsp+1]); break;
  case 149: _nsp -= 1;_nst[_nsp]=MkSTD_METHOD_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 150: _nst[_nsp]=MkASSIGNMENT_O(&curpos, MkOBJ_ID_USE_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0]); break;
  case 151: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_EXP_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 152: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_EXP_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 153: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_ASSERT_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 154: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_ASSIGN_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 155: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_BEGIN_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 156: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_BREAK_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 157: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_CASE_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 158: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_COND_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 159: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_LOOP_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 160: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_RAISE_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 161: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_RESUME_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 162: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_RETURN_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 163: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_EXP_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 164: _nsp -= 1;_nst[_nsp]=MkSTATEMENTS_TYPE_CASE_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 165: _nsp -= 1;_nst[_nsp]=MkMETHOD_SPECIFICATION_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 166: _nsp -= 2;_nst[_nsp]=MkTYPE_CONSTRUCTOR_CL_AGG_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], _nst[_nsp+2], NULLNODEPTR); break;
  case 167: _nsp -= 2;_nst[_nsp]=MkTYPE_CONSTRUCTOR_CLASS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], _nst[_nsp+2], NULLNODEPTR); break;
  case 168: _nsp -= 2;_nst[_nsp]=MkTYPE_CONSTRUCTOR_CL_AGG_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], _nst[_nsp+2], NULLNODEPTR); break;
  case 169: _nsp -= 2;_nst[_nsp]=MkTYPE_CONSTRUCTOR_CLASS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], _nst[_nsp+2], NULLNODEPTR); break;
  case 170: _nsp -= 1;_nst[_nsp]=MkWHEN_LABEL_STMTS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 171: _nsp -= 1;_nst[_nsp]=MkWHEN_LABEL_STMTS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 172: _nsp -= 1;_nst[_nsp]=MkWHEN_TYPES_BLOCKS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 173: _nsp -= 1;_nst[_nsp]=MkWHEN_TYPES_BLOCKS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 174: _nsp -= 1;_nst[_nsp]=MkARGUMENTS_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 175: _nsp -= 1;_nst[_nsp]=MkLOCAL_STREAM_DECL_O(&curpos, MkIDENT_DEF_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(1))), T_ATTR(TokenStack(1)))), _nst[_nsp+0], _nst[_nsp+1]); break;
  case 176: _nst[_nsp]=MkCOND_STATEMENT_ELSE_O(&curpos, _nst[_nsp+0]); break;
  case 177: _nsp -= 1;_nst[_nsp]=MkEXCEPTIONS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 178: _nsp -= 1;_nst[_nsp]=MkARGUMENTS_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 180: _nsp -= 1;_nst[_nsp]=MkBLOCK_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 181: _nsp -= 1;_nst[_nsp]=MkWHEN_LABEL_STMT_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 182: _nsp -= 1;_nst[_nsp]=MkWHEN_TYPES_BLOCK_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 183: _nsp -= 1;_nst[_nsp]=MkTYPES_LST_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 184: _nsp -= 1;_nst[_nsp]=MkWHEN_EXCEPTION_STMTS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 185: _nsp -= 1;_nst[_nsp]=MkWHEN_EXCEPTION_STMTS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 186: _nsp -= 1;_nst[_nsp]=MkLABEL_RANGE_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 187: _nsp -= 1;_nst[_nsp]=Mk2LABEL_LIST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 188: _nsp -= 1;_nst[_nsp]=MkWHEN_LABEL_STMT_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 189: _nsp -= 1;_nst[_nsp]=MkTYPES_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 190: _nsp -= 1;_nst[_nsp]=MkWHEN_TYPES_BLOCK_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 191: _nsp -= 1;_nst[_nsp]=MkWHEN_EXCEPTION_STMT_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 192: _nsp -= 1;_nst[_nsp]=MkEXCEPTION_TYPES_LST_O(&curpos, _nst[_nsp+1], _nst[_nsp+0]); break;
  case 193: _nsp -= 2;_nst[_nsp]=MkCOND_STATEMENT_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], _nst[_nsp+2]); break;
  case 194: _nsp -= 1;_nst[_nsp]=MkEXCEPTION_TYPES_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 195: _nsp -= 1;_nst[_nsp]=MkWHEN_EXCEPTION_STMT_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 196: ErrorInit(!LongErrorReporting, 0, 1); break;
  case 197: IncludePredefinedClasses(); 
            _incrnodestack();_nst[_nsp]=Mk0CLASS_DECLARATIONS_O(NoPosition);
            break;
  case 198: _incrnodestack();_nst[_nsp]=MkCLASS_ATTRIBUTE_VA_O(&curpos); break;
  case 199: _incrnodestack();_nst[_nsp]=MkCLASS_ATTRIBUTE_EX_O(&curpos); break;
  case 200: _incrnodestack();_nst[_nsp]=MkCLASS_ATTRIBUTE_O(&curpos); break;
  case 202: _incrnodestack();_nst[_nsp]=MkCLASS_ATTRIBUTE_ABVA_O(&curpos); break;
  case 203: _incrnodestack();_nst[_nsp]=MkCLASS_ATTRIBUTE_AB_O(&curpos); break;
  case 204: _nst[_nsp]=MkCLASS_DECLARATIONS_O(&curpos, _nst[_nsp+0]); break;
  case 205: IncludePredefinedClasses();  break;
  case 206: _incrnodestack();_nst[_nsp]=MkCLASS_BOUNDS_EMPTY_O(&curpos); break;
  case 207: _incrnodestack();_nst[_nsp]=MkBOUND_IDENTIFIER_O(&curpos, MkIDENT_DEF_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0))))); break;
  case 208: _incrnodestack();_nst[_nsp]=MkBOUND_IDENTIFIER_STAR_O(&curpos, Mkstar(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))); break;
  case 209: _incrnodestack();_nst[_nsp]=MkCLASS_PARAMETERS_EMPTY_O(&curpos); break;
  case 210: _incrnodestack();_nst[_nsp]=MkBUILTIN_OPT_EMPTY_O(&curpos); break;
  case 211: _incrnodestack();_nst[_nsp]=MkBUILTIN_OPT_O(&curpos); break;
  case 212: _incrnodestack();_nst[_nsp]=MkATTR_ACCESS_RO_O(&curpos); break;
  case 213: _incrnodestack();_nst[_nsp]=MkFEATURE_DECLS_O(&curpos, Mk0FEATURE_DECLS_O(NoPosition)); break;
  case 214: _nsp -= 2;_nst[_nsp]=MkCLASS_DECLARATION_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], _nst[_nsp+2]); break;
  case 215: _incrnodestack();_nst[_nsp]=MkTYPE_SPECIFIERS_EMPTY_O(&curpos); break;
  case 216: _nsp -= 1;_nst[_nsp]=MkCLASS_HEAD_O(&curpos, MkCLASS_ID_DEF_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0], _nst[_nsp+1]); break;
  case 217: _incrnodestack();_nst[_nsp]=MkBUILTIN_OPT_ID_O(&curpos, Mkstringconst(&(T_POS(TokenStack(2))), T_ATTR(TokenStack(2)))); break;
  case 218: _incrnodestack();_nst[_nsp]=MkATTR_ACCESS_SH_O(&curpos); break;
  case 219: _incrnodestack();_nst[_nsp]=MkATTR_ACCESS_SH_RO_O(&curpos); break;
  case 220: _nst[_nsp]=MkATTR_DECL_O(&curpos, _nst[_nsp+0]); break;
  case 221: _incrnodestack();_nst[_nsp]=MkIDENTIFIERS_O(&curpos, MkIDENT_DEF_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0))))); break;
  case 222: _incrnodestack();_nst[_nsp]=MkTYPE_SPECIFIER_EMPTY_O(&curpos); break;
  case 223: _nst[_nsp]=MkFEATURE_DECLS_O(&curpos, _nst[_nsp+0]); break;
  case 224: _incrnodestack();_nst[_nsp]=MkINHERITANCES_EMPTY_O(&curpos); break;
  case 225: _incrnodestack();_nst[_nsp]=MkTYPE_SPECIFIER_SAME_O(&curpos); break;
  case 226: _incrnodestack();_nst[_nsp]=MkBOUNDS_O(&curpos, Mk0BOUNDS_O(NoPosition)); break;
  case 227: _nst[_nsp]=MkIDENTIFIERS_LST_O(&curpos, _nst[_nsp+0], MkIDENT_DEF_O(&(T_POS(TokenStack(1))), Mkidentifier(&(T_POS(TokenStack(2))), T_ATTR(TokenStack(2))))); break;
  case 228: _incrnodestack();_nst[_nsp]=MkEXPRESSION_STAR_O(&curpos, Mkstar(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))); break;
  case 229: _incrnodestack();_nst[_nsp]=MkNAME_MINUS_O(&curpos); break;
  case 230: _incrnodestack();_nst[_nsp]=MkTYPE_SPECIFIER_SAME_O(&curpos); break;
  case 231: _incrnodestack();_nst[_nsp]=MkNAME_GRAVE_O(&curpos); break;
  case 232: _incrnodestack();_nst[_nsp]=MkNAME_TILDE_O(&curpos); break;
  case 233: _incrnodestack();_nst[_nsp]=MkNAME_STROKE_O(&curpos); break;
  case 234: _incrnodestack();_nst[_nsp]=MkNAME_QUESTION_O(&curpos); break;
  case 235: _incrnodestack();_nst[_nsp]=MkNAME_BACKSLASH_O(&curpos); break;
  case 236: _incrnodestack();_nst[_nsp]=MkEXPRESSION_EMPTY_O(&curpos); break;
  case 237: _incrnodestack();_nst[_nsp]=MkNAME_NOT_O(&curpos); break;
  case 238: _incrnodestack();_nst[_nsp]=MkVALUE_BOOL_O(&curpos, Mkboolean_value(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))); break;
  case 239: _incrnodestack();_nst[_nsp]=MkVALUE_CHAR_O(&curpos, Mkcharacterconst(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))); break;
  case 240: _incrnodestack();_nst[_nsp]=MkVALUE_FLOAT_O(&curpos, Mkfloating_number(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))); break;
  case 241: _incrnodestack();_nst[_nsp]=MkVALUE_INT_O(&curpos, Mkinteger_number(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))); break;
  case 242: _incrnodestack();_nst[_nsp]=MkVALUE_OCT_O(&curpos, Mkoctal_number(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))); break;
  case 243: _incrnodestack();_nst[_nsp]=MkVALUE_SED_O(&curpos, Mksedecimal_number(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))); break;
  case 244: _incrnodestack();_nst[_nsp]=MkVALUE_VOID_O(&curpos); break;
  case 245: _incrnodestack();_nst[_nsp]=MkPARAMETER_KIND_OUT_O(&curpos); break;
  case 246: _incrnodestack();_nst[_nsp]=MkPARAMETER_KIND_INOUT_O(&curpos); break;
  case 247: _incrnodestack();_nst[_nsp]=MkPARAMETER_KIND_IN_O(&curpos); break;
  case 248: _incrnodestack();_nst[_nsp]=MkPARAMETER_KIND_ONCE_O(&curpos); break;
  case 250: _incrnodestack();_nst[_nsp]=MkMODIFICATIONS_O(&curpos, Mk0MODIFICATIONS_O(NoPosition)); break;
  case 251: _nsp -= 1;_nst[_nsp]=MkINHERITANCES_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 252: _nsp -= 1;_nst[_nsp]=MkCLASS_HEAD_O(&curpos, MkCLASS_ID_DEF_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0], _nst[_nsp+1]); break;
  case 253: _incrnodestack();_nst[_nsp]=MkTYPE_SPECIFIER_SAME_POLY_O(&curpos); break;
  case 254: _incrnodestack();_nst[_nsp]=MkPARAMETER_TYPES_O(&curpos, Mk0PARAMETER_TYPES_O(NoPosition)); break;
  case 255: _nst[_nsp]=MkCLASS_PARAMETER_O(&curpos, MkCLASS_PARAM_ID_DEF_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0]); break;
  case 256: _incrnodestack();_nst[_nsp]=MkDESIGNATOR_NAME_O(&curpos, MkOBJ_ID_USE_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0))))); break;
  case 257: _incrnodestack();_nst[_nsp]=MkCLASS_ARGUMENTS_EMPTY_O(&curpos); break;
  case 258: _incrnodestack();_nst[_nsp]=MkAGG_ID_DEF_O(&curpos, Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))); break;
  case 259: _incrnodestack();_nst[_nsp]=MkARGUMENTS_EMPTY_O(&curpos); break;
  case 260: _incrnodestack();_nst[_nsp]=MkNAME_STR_IN_O(&curpos); break;
  case 261: _incrnodestack();_nst[_nsp]=MkNAME_STR_OUT_O(&curpos); break;
  case 262: _incrnodestack();_nst[_nsp]=MkARGUMENTS_EMPTY_O(&curpos); break;
  case 263: _incrnodestack();_nst[_nsp]=MkTYPE_SPECIFIER_SAME_POLY_O(&curpos); break;
  case 264: _incrnodestack();_nst[_nsp]=MkARGUMENTS_EMPTY_O(&curpos); break;
  case 265: _incrnodestack();_nst[_nsp]=MkSTR_CONSTANTS_O(&curpos, MkSTR_CONSTANT_O(&(T_POS(TokenStack(0))), Mkstringconst(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0))))); break;
  case 266: _nst[_nsp]=MkDESIGNATOR_EXP_O(&curpos, _nst[_nsp+0], MkNAME_LEFT_SQ_BRACKET_O(&(T_POS(TokenStack(1))))); break;
  case 267: _incrnodestack();_nst[_nsp]=MkNAME_STAR_O(&curpos, Mkstar(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))); break;
  case 268: _incrnodestack();_nst[_nsp]=MkNAME_LT_O(&curpos); break;
  case 269: _incrnodestack();_nst[_nsp]=MkNAME_MINUS_O(&curpos); break;
  case 270: _incrnodestack();_nst[_nsp]=MkNAME_GRAVE_O(&curpos); break;
  case 271: _incrnodestack();_nst[_nsp]=MkNAME_TILDE_O(&curpos); break;
  case 272: _incrnodestack();_nst[_nsp]=MkNAME_STROKE_O(&curpos); break;
  case 273: _incrnodestack();_nst[_nsp]=MkNAME_QUESTION_O(&curpos); break;
  case 274: _incrnodestack();_nst[_nsp]=MkNAME_BACKSLASH_O(&curpos); break;
  case 275: _incrnodestack();_nst[_nsp]=MkNAME_LT_EQ_O(&curpos); break;
  case 276: _incrnodestack();_nst[_nsp]=MkNAME_EQ_O(&curpos); break;
  case 277: _incrnodestack();_nst[_nsp]=MkNAME_GT_EQ_O(&curpos); break;
  case 278: _incrnodestack();_nst[_nsp]=MkNAME_GT_O(&curpos); break;
  case 279: _incrnodestack();_nst[_nsp]=MkNAME_NOT_EQ_O(&curpos); break;
  case 280: _incrnodestack();_nst[_nsp]=MkNAME_PLUS_O(&curpos); break;
  case 281: _incrnodestack();_nst[_nsp]=MkNAME_QUOTIENT_O(&curpos); break;
  case 282: _incrnodestack();_nst[_nsp]=Mkrule_1(&curpos); break;
  case 283: _incrnodestack();_nst[_nsp]=MkNAME_DIV_O(&curpos); break;
  case 284: _incrnodestack();_nst[_nsp]=MkNAME_MOD_O(&curpos); break;
  case 285: _incrnodestack();_nst[_nsp]=MkNAME_POW_O(&curpos); break;
  case 286: _incrnodestack();_nst[_nsp]=MkLOCAL_DECLS_EMPTY_O(&curpos); break;
  case 287: _incrnodestack();_nst[_nsp]=MkMETHOD_BODY_AB_O(&curpos); break;
  case 288: _incrnodestack();_nst[_nsp]=MkTYPE_SPECIFIER_EMPTY_O(&curpos); break;
  case 289: _incrnodestack();_nst[_nsp]=MkNAME_EMPTY_O(&curpos); break;
  case 290: _nst[_nsp]=MkNAMED_EXPRESSIONS_O(&curpos, _nst[_nsp+0]); break;
  case 291: _nst[_nsp]=MkAGGREGATE_O(&curpos, _nst[_nsp+0]); break;
  case 293: _nsp -= 1;_nst[_nsp]=MkSTD_METHOD_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 294: _nst[_nsp]=MkQUALIFICATION_TYPE_O(&curpos, _nst[_nsp+0], MkQUAL_FEATURE_ID_USE_O(&(T_POS(TokenStack(1))), Mkidentifier(&(T_POS(TokenStack(2))), T_ATTR(TokenStack(2))))); break;
  case 295: _nsp -= 1;_nst[_nsp]=MkSTD_METHOD_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 296: _nsp -= 1;_nst[_nsp]=MkTYPE_SPECIFIER_DES_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], NULLNODEPTR); break;
  case 297: _nsp -= 1;_nst[_nsp]=MkSTD_METHOD_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 298: _nsp -= 1;_nst[_nsp]=MkTYPE_SPECIFIER_DES_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], NULLNODEPTR); break;
  case 299: _nst[_nsp]=MkQUALIFICATION_EXP_O(&curpos, _nst[_nsp+0], MkQUAL_FEATURE_ID_USE_O(&(T_POS(TokenStack(1))), Mkidentifier(&(T_POS(TokenStack(2))), T_ATTR(TokenStack(2))))); break;
  case 300: _incrnodestack();_nst[_nsp]=MkFOREIGN_LANGUAGE_O(&curpos, Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))); break;
  case 301: _incrnodestack();_nst[_nsp]=MkBUILTIN_INSTS_EMPTY_O(&curpos); break;
  case 302: _incrnodestack();_nst[_nsp]=MkSTATEMENTS_EMPTY_O(&curpos); break;
  case 303: _incrnodestack();_nst[_nsp]=MkBREAK_STATEMENT_O(&curpos); break;
  case 304: _incrnodestack();_nst[_nsp]=MkRESUME_STATEMENT_O(&curpos); break;
  case 305: _incrnodestack();_nst[_nsp]=MkRETURN_STATEMENT_O(&curpos); break;
  case 306: _nst[_nsp]=MkMODIFICATION_ONLY_O(&curpos, _nst[_nsp+0]); break;
  case 307: _nsp -= 1;_nst[_nsp]=MkCLASS_SPECIFIER_O(&curpos, MkCLASS_ID_USE_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0], _nst[_nsp+1]); break;
  case 308: _nsp -= 1;_nst[_nsp]=MkAGGREGATE_NAMED_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 309: _nsp -= 1;_nst[_nsp]=MkBOUND_METHOD_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 310: _nsp -= 1;_nst[_nsp]=MkBOUND_METHOD_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 311: _nsp -= 1;_nst[_nsp]=MkARGUMENTS_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 312: _nst[_nsp]=MkARGUMENT_OUT_O(&curpos, _nst[_nsp+0]); break;
  case 313: _nst[_nsp]=MkARGUMENT_OUT_O(&curpos, _nst[_nsp+0]); break;
  case 314: _nsp -= 1;_nst[_nsp]=MkARGUMENTS_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 315: _nsp -= 1;_nst[_nsp]=MkARGUMENTS_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 316: _nsp -= 1;_nst[_nsp]=MkARGUMENTS_LST_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 317: _incrnodestack();_nst[_nsp]=MkARGUMENT_EMPTY_O(&curpos); break;
  case 318: _nsp -= 1;_nst[_nsp]=MkEXPRESSION_OR_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 319: _nsp -= 1;_nst[_nsp]=MkEXPRESSION_AND_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 320: _incrnodestack();_nst[_nsp]=MkLINKER_SYMBOL_EMPTY_O(&curpos); break;
  case 321: _incrnodestack();_nst[_nsp]=MkLINKER_SYMBOL_O(&curpos, Mkstringconst(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))); break;
  case 322: _nst[_nsp]=MkMETHOD_BODY_BUILTIN_O(&curpos, _nst[_nsp+0]); break;
  case 323: _incrnodestack();_nst[_nsp]=MkBUILTIN_INST_STR_O(&curpos, Mkstringconst(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))); break;
  case 324: _nst[_nsp]=MkMETHOD_BODY_STATIC_BUILTIN_O(&curpos, _nst[_nsp+0]); break;
  case 325: _nsp -= 1;_nst[_nsp]=MkLOCAL_DECLS_STREAM_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 326: _nsp -= 1;_nst[_nsp]=MkLOCAL_DECLS_ATT_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 327: _incrnodestack();_nst[_nsp]=MkSTATEMENTS_EMPTY_O(&curpos); break;
  case 328: _incrnodestack();_nst[_nsp]=MkTYPE_SPECIFIER_EMPTY_O(&curpos); break;
  case 329: _nsp -= 1;_nst[_nsp]=MkBLOCK_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 330: _incrnodestack();_nst[_nsp]=MkPARAMETERS_O(&curpos, Mk0PARAMETERS_O(NoPosition)); break;
  case 331: _nst[_nsp]=MkMODIFICATION_OUT_O(&curpos, _nst[_nsp+0]); break;
  case 332: _nst[_nsp]=MkMODIFICATION_NAME_O(&curpos, _nst[_nsp+0], MkIDENT_MOD_O(&(T_POS(TokenStack(2))), Mkidentifier(&(T_POS(TokenStack(2))), T_ATTR(TokenStack(2))))); break;
  case 333: _nsp -= 1;_nst[_nsp]=MkTYPE_CONSTRUCTOR_DES_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 334: _nsp -= 1;_nst[_nsp]=MkTYPE_CONSTRUCTOR_DES_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 335: _nst[_nsp]=MkTYPE_CONSTRUCTOR_SAME_O(&curpos, _nst[_nsp+0]); break;
  case 336: _nsp -= 1;_nst[_nsp]=MkDIRECT_STREAM_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 337: _nsp -= 1;_nst[_nsp]=MkSTD_METHOD_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 338: _nsp -= 1;_nst[_nsp]=MkTYPE_SPECIFIER_DES_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], NULLNODEPTR); break;
  case 339: _nsp -= 1;_nst[_nsp]=MkDIRECT_STREAM_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 340: _nsp -= 1;_nst[_nsp]=MkSTD_METHOD_CALL_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 341: _nsp -= 1;_nst[_nsp]=MkTYPE_SPECIFIER_DES_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], NULLNODEPTR); break;
  case 342: _nst[_nsp]=MkBUILTIN_INST_TYPE_O(&curpos, _nst[_nsp+0]); break;
  case 343: _nst[_nsp]=MkBUILTIN_INST_CLRTYPE_O(&curpos, _nst[_nsp+0]); break;
  case 344: _incrnodestack();_nst[_nsp]=MkWHEN_LABEL_STMTS_EMPTY_O(&curpos); break;
  case 345: _incrnodestack();_nst[_nsp]=MkWHEN_TYPES_BLOCKS_EMPTY_O(&curpos); break;
  case 346: _incrnodestack();_nst[_nsp]=MkEXCEPTIONS_EMPTY_O(&curpos); break;
  case 347: _nst[_nsp]=MkLOOP_O(&curpos, _nst[_nsp+0]); break;
  case 348: _incrnodestack();_nst[_nsp]=MkARGUMENTS_EMPTY_O(&curpos); break;
  case 350: _nsp -= 1;_nst[_nsp]=MkCLASS_SPECIFIER_O(&curpos, MkCLASS_ID_USE_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0], _nst[_nsp+1]); break;
  case 351: _nsp -= 1;_nst[_nsp]=MkBOUND_METHOD_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 352: _nsp -= 1;_nst[_nsp]=MkBOUND_METHOD_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 353: _nst[_nsp]=MkARGUMENT_OUT_O(&curpos, _nst[_nsp+0]); break;
  case 354: _nst[_nsp]=MkARGUMENT_OUT_O(&curpos, _nst[_nsp+0]); break;
  case 355: _nst[_nsp]=MkARGUMENT_INOUT_O(&curpos, _nst[_nsp+0]); break;
  case 356: _nst[_nsp]=MkARGUMENT_INOUT_O(&curpos, _nst[_nsp+0]); break;
  case 357: _nsp -= 2;_nst[_nsp]=MkMETHOD_DECL_O(&curpos, MkMETHOD_IDENT_DEF_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0], _nst[_nsp+1], _nst[_nsp+2]); break;
  case 358: _nsp -= 1;_nst[_nsp]=MkCASE_STATEMENT_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 359: _nsp -= 1;_nst[_nsp]=MkTYPE_CASE_STATEMENT_ATT_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 360: _nst[_nsp]=MkTYPE_CASE_STATEMENT_O(&curpos, MkOBJ_ID_USE_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(1))), T_ATTR(TokenStack(1)))), _nst[_nsp+0]); break;
  case 361: _incrnodestack();_nst[_nsp]=MkIDENT_DEF_O(&curpos, Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))); break;
  case 362: _nsp -= 1;_nst[_nsp]=MkBEGIN_BLOCK_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 363: _nsp -= 1;_nst[_nsp]=MkLOOP_EXP_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 364: _nsp -= 1;_nst[_nsp]=MkTYPE_CONSTRUCTOR_DES_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 365: _nsp -= 1;_nst[_nsp]=MkTYPE_CONSTRUCTOR_DES_O(&curpos, _nst[_nsp+0], _nst[_nsp+1]); break;
  case 366: _nsp -= 2;_nst[_nsp]=MkMETHOD_DECL_O(&curpos, MkMETHOD_IDENT_DEF_O(&(T_POS(TokenStack(0))), Mkidentifier(&(T_POS(TokenStack(0))), T_ATTR(TokenStack(0)))), _nst[_nsp+0], _nst[_nsp+1], _nst[_nsp+2]); break;
  case 367: _incrnodestack();_nst[_nsp]=MkLOCAL_DECLS_EMPTY_O(&curpos); break;
  case 368: _incrnodestack();_nst[_nsp]=MkLABEL_LIST_O(&curpos, Mk0LABEL_LIST_O(NoPosition)); break;
  case 369: _incrnodestack();_nst[_nsp]=MkTYPES_EMPTY_O(&curpos); break;
  case 370: _incrnodestack();_nst[_nsp]=MkWHEN_EXCEPTION_STMTS_EMPTY_O(&curpos); break;
  case 371: _nsp -= 2;_nst[_nsp]=MkTYPE_CONSTRUCTOR_CLASS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], _nst[_nsp+2], NULLNODEPTR); break;
  case 372: _nsp -= 2;_nst[_nsp]=MkTYPE_CONSTRUCTOR_CLASS_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], _nst[_nsp+2], NULLNODEPTR); break;
  case 373: _nsp -= 2;_nst[_nsp]=MkCOND_STATEMENT_O(&curpos, _nst[_nsp+0], _nst[_nsp+1], _nst[_nsp+2]); break;
  case 374: _nst[_nsp]=MkCASE_LABEL_DES_O(&curpos, _nst[_nsp+0]); break;
  case 375: _nst[_nsp]=MkCASE_LABEL_DES_O(&curpos, _nst[_nsp+0]); break;
  case 376: _nst[_nsp]=MkCASE_LABEL_VALUE_O(&curpos, _nst[_nsp+0]); break;
  case 377: _nst[_nsp]=MkLABEL_RANGE_SINGLE_O(&curpos, _nst[_nsp+0]); break;
  case 378: _nst[_nsp]=MkLABEL_LIST_O(&curpos, _nst[_nsp+0]); break;
  case 379: _incrnodestack();_nst[_nsp]=MkEXCEPTION_TYPES_EMPTY_O(&curpos); break;
  } /* end switch */
}
