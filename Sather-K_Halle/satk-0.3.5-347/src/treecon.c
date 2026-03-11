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
    

/* implementation of tree construction functions */

#include "node.h"

#include "nodecode.h"

#include "attrpredef.h"

#include "visitmap.h"

#include "treeact.h"

#ifdef MONITOR
#include "attr_mon_dapto.h"
#endif

#include <stdlib.h>

#define _USE_OBSTACK 1

/* use of obstack: */

#if _USE_OBSTACK

#include "obstack.h"
static struct obstack TreeSpace;
static void *_TreeBase;

#ifdef __cplusplus
void* NODEPTR_struct::operator new(size_t size)
{
	return obstack_alloc(&TreeSpace, size);
}
#else
#if defined(__STDC__) || defined(__cplusplus)
char* TreeNodeAlloc(int size)
#else
char* TreeNodeAlloc(size) int size;
#endif
{
	return (char *)(obstack_alloc(&TreeSpace, size));
}
#endif

void InitTree()
{
	obstack_init(&TreeSpace);
	_TreeBase=obstack_alloc(&TreeSpace,0);
}

void FreeTree()
{
	obstack_free(&TreeSpace, _TreeBase);
	_TreeBase=obstack_alloc(&TreeSpace,0);
}

#else

#include <stdio.h>

#ifdef __cplusplus
void* NODEPTR_struct::operator new(size_t size)
{
	void *retval = malloc(size);
	if (retval) return retval;
	fprintf(stderr, "*** DEADLY: No more memory.\n");
	exit(1);
}
#else
#if defined(__STDC__) || defined(__cplusplus)
char* TreeNodeAlloc(int size)
#else
char* TreeNodeAlloc(size) int size;
#endif
{
	char *retval = (char *) malloc(size);
	if (retval) return retval;
	fprintf(stderr, "*** DEADLY: No more memory.\n");
	exit(1);
}
#endif

void InitTree() { }

void FreeTree() { }

#endif

#ifdef MONITOR
#define _SETCOORD(node) \
        node->_coord = _coordref ? *_coordref : NoCoord;
#define _COPYCOORD(node) \
        node->_coord = _currn->_desc1->_coord;
#else
#define _SETCOORD(node)
#define _COPYCOORD(node)
#endif
#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mktypes (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mktypes (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBtypes)) return (_currn);
return(NULLNODEPTR);
}/* Mktypes */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkwhen_types_block (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkwhen_types_block (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBwhen_types_block)) return (_currn);
return(NULLNODEPTR);
}/* Mkwhen_types_block */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkwhen_types_blocks (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkwhen_types_blocks (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBwhen_types_blocks)) return (_currn);
return(NULLNODEPTR);
}/* Mkwhen_types_blocks */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mktype_case_statement (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mktype_case_statement (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBtype_case_statement)) return (_currn);
return(NULLNODEPTR);
}/* Mktype_case_statement */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkInheritance_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkInheritance_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBInheritance_2)) return (_currn);
return(NULLNODEPTR);
}/* MkInheritance_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_argument_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_argument_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_argument_2)) return (_currn);
if (IsSymb (_currn, SYMBClass_specifier_2)) return (MkCLASS_ARGUMENT_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkClass_argument_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkType_specifiers_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkType_specifiers_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBType_specifiers_2)) return (_currn);
return(NULLNODEPTR);
}/* MkType_specifiers_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_parameter_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_parameter_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_parameter_2)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_parameter_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTypes (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkTypes (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBTypes)) return (_currn);
return(NULLNODEPTR);
}/* MkTypes */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWhen_types_block (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkWhen_types_block (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBWhen_types_block)) return (_currn);
return(NULLNODEPTR);
}/* MkWhen_types_block */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCase_label (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkCase_label (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBCase_label)) return (_currn);
if (IsSymb (_currn, SYMBQualification)) return (MkCASE_LABEL_DES(_coordref, _currn));
if (IsSymb (_currn, SYMBStd_method_call)) return (MkCASE_LABEL_DES(_coordref, _currn));
if (IsSymb (_currn, SYMBObj_id_use)) return (MkCASE_LABEL_DES(_coordref, _currn));
if (IsSymb (_currn, SYMBName)) return (MkCASE_LABEL_DES(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstant)) return (MkCASE_LABEL_VALUE(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstants)) return (MkCASE_LABEL_VALUE(_coordref, _currn));
if (IsSymb (_currn, SYMBValue)) return (MkCASE_LABEL_VALUE(_coordref, _currn));
if (IsSymb (_currn, SYMBDesignator)) return (MkCASE_LABEL_DES(_coordref, _currn));
return(NULLNODEPTR);
}/* MkCase_label */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLabel_range (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkLabel_range (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBLabel_range)) return (_currn);
if (IsSymb (_currn, SYMBQualification)) return (MkLABEL_RANGE_SINGLE(_coordref, _currn));
if (IsSymb (_currn, SYMBStd_method_call)) return (MkLABEL_RANGE_SINGLE(_coordref, _currn));
if (IsSymb (_currn, SYMBObj_id_use)) return (MkLABEL_RANGE_SINGLE(_coordref, _currn));
if (IsSymb (_currn, SYMBName)) return (MkLABEL_RANGE_SINGLE(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstant)) return (MkLABEL_RANGE_SINGLE(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstants)) return (MkLABEL_RANGE_SINGLE(_coordref, _currn));
if (IsSymb (_currn, SYMBValue)) return (MkLABEL_RANGE_SINGLE(_coordref, _currn));
if (IsSymb (_currn, SYMBDesignator)) return (MkLABEL_RANGE_SINGLE(_coordref, _currn));
if (IsSymb (_currn, SYMBCase_label)) return (MkLABEL_RANGE_SINGLE(_coordref, _currn));
return(NULLNODEPTR);
}/* MkLabel_range */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLabel_list (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkLabel_list (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBLabel_list)) return (_currn);
return(NULLNODEPTR);
}/* MkLabel_list */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWhen_label_stmt (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkWhen_label_stmt (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBWhen_label_stmt)) return (_currn);
return(NULLNODEPTR);
}/* MkWhen_label_stmt */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWhen_label_stmts (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkWhen_label_stmts (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBWhen_label_stmts)) return (_currn);
return(NULLNODEPTR);
}/* MkWhen_label_stmts */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkException_types (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkException_types (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBException_types)) return (_currn);
return(NULLNODEPTR);
}/* MkException_types */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWhen_exception_stmt (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkWhen_exception_stmt (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBWhen_exception_stmt)) return (_currn);
return(NULLNODEPTR);
}/* MkWhen_exception_stmt */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWhen_exception_stmts (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkWhen_exception_stmts (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBWhen_exception_stmts)) return (_currn);
return(NULLNODEPTR);
}/* MkWhen_exception_stmts */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkExceptions (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkExceptions (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBExceptions)) return (_currn);
return(NULLNODEPTR);
}/* MkExceptions */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAssertion_statement (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkAssertion_statement (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBAssertion_statement)) return (_currn);
if (IsSymb (_currn, SYMBBound_method)) return (MkASSERTION_STATEMENT(_coordref, _currn));
if (IsSymb (_currn, SYMBCoercion)) return (MkASSERTION_STATEMENT(_coordref, _currn));
if (IsSymb (_currn, SYMBStd_method_call)) return (MkASSERTION_STATEMENT(_coordref, _currn));
if (IsSymb (_currn, SYMBDirect_stream_call)) return (MkASSERTION_STATEMENT(_coordref, _currn));
if (IsSymb (_currn, SYMBType_constructor)) return (MkASSERTION_STATEMENT(_coordref, _currn));
if (IsSymb (_currn, SYMBNamed_expressions)) return (MkASSERTION_STATEMENT(_coordref, _currn));
if (IsSymb (_currn, SYMBAggregate)) return (MkASSERTION_STATEMENT(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstant)) return (MkASSERTION_STATEMENT(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstants)) return (MkASSERTION_STATEMENT(_coordref, _currn));
if (IsSymb (_currn, SYMBValue)) return (MkASSERTION_STATEMENT(_coordref, _currn));
if (IsSymb (_currn, SYMBExpression)) return (MkASSERTION_STATEMENT(_coordref, _currn));
return(NULLNODEPTR);
}/* MkAssertion_statement */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkRaise_statement (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkRaise_statement (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBRaise_statement)) return (_currn);
return(NULLNODEPTR);
}/* MkRaise_statement */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkReturn_statement (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkReturn_statement (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBReturn_statement)) return (_currn);
return(NULLNODEPTR);
}/* MkReturn_statement */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkResume_statement (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkResume_statement (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBResume_statement)) return (_currn);
return(NULLNODEPTR);
}/* MkResume_statement */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBreak_statement (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBreak_statement (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBreak_statement)) return (_currn);
return(NULLNODEPTR);
}/* MkBreak_statement */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLoop (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkLoop (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBLoop)) return (_currn);
if (IsSymb (_currn, SYMBBlock)) return (MkLOOP(_coordref, _currn));
return(NULLNODEPTR);
}/* MkLoop */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCase_statement (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkCase_statement (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBCase_statement)) return (_currn);
return(NULLNODEPTR);
}/* MkCase_statement */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkConditional_statement (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkConditional_statement (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBConditional_statement)) return (_currn);
if (IsSymb (_currn, SYMBBlock)) return (MkCOND_STATEMENT_ELSE(_coordref, _currn));
return(NULLNODEPTR);
}/* MkConditional_statement */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBegin_block (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBegin_block (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBegin_block)) return (_currn);
return(NULLNODEPTR);
}/* MkBegin_block */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAssignment (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkAssignment (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBAssignment)) return (_currn);
return(NULLNODEPTR);
}/* MkAssignment */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLocal_stream_declaration (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkLocal_stream_declaration (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBLocal_stream_declaration)) return (_currn);
return(NULLNODEPTR);
}/* MkLocal_stream_declaration */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkStatements (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkStatements (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBStatements)) return (_currn);
return(NULLNODEPTR);
}/* MkStatements */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBuiltin_instruction (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBuiltin_instruction (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBuiltin_instruction)) return (_currn);
if (IsSymb (_currn, SYMBClass_specifier)) return (MkBUILTIN_INST_TYPE(_coordref, _currn));
if (IsSymb (_currn, SYMBType_specifier)) return (MkBUILTIN_INST_TYPE(_coordref, _currn));
return(NULLNODEPTR);
}/* MkBuiltin_instruction */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLinker_symbol (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkLinker_symbol (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBLinker_symbol)) return (_currn);
return(NULLNODEPTR);
}/* MkLinker_symbol */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkForeign_language (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkForeign_language (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBForeign_language)) return (_currn);
return(NULLNODEPTR);
}/* MkForeign_language */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBlock (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBlock (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBlock)) return (_currn);
return(NULLNODEPTR);
}/* MkBlock */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkStringconstant (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkStringconstant (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBStringconstant)) return (_currn);
return(NULLNODEPTR);
}/* MkStringconstant */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkStringconstants (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkStringconstants (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBStringconstants)) return (_currn);
if (IsSymb (_currn, SYMBStringconstant)) return (MkSTR_CONSTANTS(_coordref, _currn));
return(NULLNODEPTR);
}/* MkStringconstants */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNamed_expression (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkNamed_expression (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBNamed_expression)) return (_currn);
return(NULLNODEPTR);
}/* MkNamed_expression */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAgg_id_def (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkAgg_id_def (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBAgg_id_def)) return (_currn);
return(NULLNODEPTR);
}/* MkAgg_id_def */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNamed_expressions (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkNamed_expressions (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBNamed_expressions)) return (_currn);
return(NULLNODEPTR);
}/* MkNamed_expressions */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAggregate (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkAggregate (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBAggregate)) return (_currn);
if (IsSymb (_currn, SYMBNamed_expressions)) return (MkAGGREGATE(_coordref, _currn));
return(NULLNODEPTR);
}/* MkAggregate */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkQual_feature_id_use (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkQual_feature_id_use (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBQual_feature_id_use)) return (_currn);
return(NULLNODEPTR);
}/* MkQual_feature_id_use */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkObj_id_use (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkObj_id_use (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBObj_id_use)) return (_currn);
return(NULLNODEPTR);
}/* MkObj_id_use */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDirect_stream_call (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkDirect_stream_call (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBDirect_stream_call)) return (_currn);
return(NULLNODEPTR);
}/* MkDirect_stream_call */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCoercion (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkCoercion (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBCoercion)) return (_currn);
return(NULLNODEPTR);
}/* MkCoercion */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkValue (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkValue (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBValue)) return (_currn);
if (IsSymb (_currn, SYMBStringconstant)) return (MkVALUE_STR(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstants)) return (MkVALUE_STR(_coordref, _currn));
return(NULLNODEPTR);
}/* MkValue */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBound_method (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBound_method (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBound_method)) return (_currn);
return(NULLNODEPTR);
}/* MkBound_method */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkQualification (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkQualification (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBQualification)) return (_currn);
return(NULLNODEPTR);
}/* MkQualification */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkStd_method_call (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkStd_method_call (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBStd_method_call)) return (_currn);
return(NULLNODEPTR);
}/* MkStd_method_call */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkName (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkName (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBName)) return (_currn);
if (IsSymb (_currn, SYMBObj_id_use)) return (MkNAME_OBJ(_coordref, _currn));
return(NULLNODEPTR);
}/* MkName */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDesignator (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkDesignator (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBDesignator)) return (_currn);
if (IsSymb (_currn, SYMBQualification)) return (MkDESIGNATOR_QUAL(_coordref, _currn));
if (IsSymb (_currn, SYMBStd_method_call)) return (MkDESIGNATOR_METH(_coordref, _currn));
if (IsSymb (_currn, SYMBObj_id_use)) return (MkDESIGNATOR_NAME(_coordref, _currn));
if (IsSymb (_currn, SYMBName)) return (MkDESIGNATOR_NAME(_coordref, _currn));
return(NULLNODEPTR);
}/* MkDesignator */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkArgument (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkArgument (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBArgument)) return (_currn);
if (IsSymb (_currn, SYMBBound_method)) return (MkARGUMENT_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBCoercion)) return (MkARGUMENT_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBStd_method_call)) return (MkARGUMENT_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBDirect_stream_call)) return (MkARGUMENT_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBType_constructor)) return (MkARGUMENT_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBNamed_expressions)) return (MkARGUMENT_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBAggregate)) return (MkARGUMENT_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstant)) return (MkARGUMENT_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstants)) return (MkARGUMENT_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBValue)) return (MkARGUMENT_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBExpression)) return (MkARGUMENT_EXP(_coordref, _currn));
return(NULLNODEPTR);
}/* MkArgument */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkArguments (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkArguments (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBArguments)) return (_currn);
return(NULLNODEPTR);
}/* MkArguments */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkParameter_type (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkParameter_type (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBParameter_type)) return (_currn);
return(NULLNODEPTR);
}/* MkParameter_type */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkParameter_types (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkParameter_types (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBParameter_types)) return (_currn);
return(NULLNODEPTR);
}/* MkParameter_types */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkParameter_type_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkParameter_type_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBParameter_type_2)) return (_currn);
return(NULLNODEPTR);
}/* MkParameter_type_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkParameter_types_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkParameter_types_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBParameter_types_2)) return (_currn);
return(NULLNODEPTR);
}/* MkParameter_types_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBounds (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBounds (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBounds)) return (_currn);
return(NULLNODEPTR);
}/* MkBounds */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_argument (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_argument (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_argument)) return (_currn);
if (IsSymb (_currn, SYMBClass_specifier)) return (MkCLASS_ARGUMENT(_coordref, _currn));
return(NULLNODEPTR);
}/* MkClass_argument */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkType_specifiers (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkType_specifiers (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBType_specifiers)) return (_currn);
return(NULLNODEPTR);
}/* MkType_specifiers */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_parameter (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_parameter (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_parameter)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_parameter */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMethod_specification (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkMethod_specification (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBMethod_specification)) return (_currn);
return(NULLNODEPTR);
}/* MkMethod_specification */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFeature_specification (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkFeature_specification (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBFeature_specification)) return (_currn);
return(NULLNODEPTR);
}/* MkFeature_specification */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFeature_id_use (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkFeature_id_use (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBFeature_id_use)) return (_currn);
return(NULLNODEPTR);
}/* MkFeature_id_use */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkIdent_mod (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkIdent_mod (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBIdent_mod)) return (_currn);
return(NULLNODEPTR);
}/* MkIdent_mod */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkModification (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkModification (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBModification)) return (_currn);
if (IsSymb (_currn, SYMBFeature_specification)) return (MkMODIFICATION_ONLY(_coordref, _currn));
return(NULLNODEPTR);
}/* MkModification */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkstatements (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkstatements (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBstatements)) return (_currn);
return(NULLNODEPTR);
}/* Mkstatements */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkbuiltin_instruction (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkbuiltin_instruction (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBbuiltin_instruction)) return (_currn);
if (IsSymb (_currn, SYMBclass_specifier)) return (MkBUILTIN_INST_TYPE_O(_coordref, _currn));
if (IsSymb (_currn, SYMBtype_specifier)) return (MkBUILTIN_INST_TYPE_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkbuiltin_instruction */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkbuiltin_instructions (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkbuiltin_instructions (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBbuiltin_instructions)) return (_currn);
return(NULLNODEPTR);
}/* Mkbuiltin_instructions */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mklinker_symbol (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mklinker_symbol (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBlinker_symbol)) return (_currn);
return(NULLNODEPTR);
}/* Mklinker_symbol */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkforeign_language (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkforeign_language (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBforeign_language)) return (_currn);
return(NULLNODEPTR);
}/* Mkforeign_language */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkparameter_specification (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkparameter_specification (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBparameter_specification)) return (_currn);
return(NULLNODEPTR);
}/* Mkparameter_specification */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkmethod_body (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkmethod_body (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBmethod_body)) return (_currn);
if (IsSymb (_currn, SYMBbuiltin_instructions)) return (MkMETHOD_BODY_BUILTIN_O(_coordref, _currn));
if (IsSymb (_currn, SYMBblock)) return (MkMETHOD_BODY_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkmethod_body */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkparameters (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkparameters (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBparameters)) return (_currn);
return(NULLNODEPTR);
}/* Mkparameters */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkmethod_ident_def (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkmethod_ident_def (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBmethod_ident_def)) return (_currn);
return(NULLNODEPTR);
}/* Mkmethod_ident_def */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkmethod_decl (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkmethod_decl (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBmethod_decl)) return (_currn);
return(NULLNODEPTR);
}/* Mkmethod_decl */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkreturn_statement (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkreturn_statement (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBreturn_statement)) return (_currn);
return(NULLNODEPTR);
}/* Mkreturn_statement */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkresume_statement (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkresume_statement (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBresume_statement)) return (_currn);
return(NULLNODEPTR);
}/* Mkresume_statement */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkbreak_statement (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkbreak_statement (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBbreak_statement)) return (_currn);
return(NULLNODEPTR);
}/* Mkbreak_statement */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkloop (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkloop (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBloop)) return (_currn);
if (IsSymb (_currn, SYMBblock)) return (MkLOOP_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkloop */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLocal_declarations (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkLocal_declarations (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBLocal_declarations)) return (_currn);
return(NULLNODEPTR);
}/* MkLocal_declarations */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWhen_types_blocks (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkWhen_types_blocks (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBWhen_types_blocks)) return (_currn);
return(NULLNODEPTR);
}/* MkWhen_types_blocks */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkType_case_statement (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkType_case_statement (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBType_case_statement)) return (_currn);
return(NULLNODEPTR);
}/* MkType_case_statement */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkParameter_kind (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkParameter_kind (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBParameter_kind)) return (_currn);
return(NULLNODEPTR);
}/* MkParameter_kind */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkParameter_specification (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkParameter_specification (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBParameter_specification)) return (_currn);
return(NULLNODEPTR);
}/* MkParameter_specification */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkType_constructor (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkType_constructor (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBType_constructor)) return (_currn);
if (IsSymb (_currn, SYMBNamed_expressions)) return (MkTYPE_CONSTRUCTOR_AGG(_coordref, _currn));
if (IsSymb (_currn, SYMBAggregate)) return (MkTYPE_CONSTRUCTOR_AGG(_coordref, _currn));
return(NULLNODEPTR);
}/* MkType_constructor */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBuiltin_instructions (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBuiltin_instructions (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBuiltin_instructions)) return (_currn);
return(NULLNODEPTR);
}/* MkBuiltin_instructions */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkType_specifier (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkType_specifier (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBType_specifier)) return (_currn);
if (IsSymb (_currn, SYMBClass_specifier)) return (MkTYPE_SPECIFIER_CL(_coordref, _currn));
return(NULLNODEPTR);
}/* MkType_specifier */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkParameters (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkParameters (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBParameters)) return (_currn);
return(NULLNODEPTR);
}/* MkParameters */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMethod_ident_def (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkMethod_ident_def (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBMethod_ident_def)) return (_currn);
return(NULLNODEPTR);
}/* MkMethod_ident_def */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFeature_declaration (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkFeature_declaration (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBFeature_declaration)) return (_currn);
if (IsSymb (_currn, SYMBMethod_decl)) return (MkFEATURE_DECL(_coordref, _currn));
if (IsSymb (_currn, SYMBFeature)) return (MkFEATURE_DECL(_coordref, _currn));
if (IsSymb (_currn, SYMBAttribute_specification)) return (MkFEATURE_DECL(_coordref, _currn));
if (IsSymb (_currn, SYMBAttribute_declaration)) return (MkFEATURE_DECL(_coordref, _currn));
return(NULLNODEPTR);
}/* MkFeature_declaration */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMethod_body (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkMethod_body (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBMethod_body)) return (_currn);
if (IsSymb (_currn, SYMBBuiltin_instructions)) return (MkMETHOD_BODY_BUILTIN(_coordref, _currn));
if (IsSymb (_currn, SYMBBlock)) return (MkMETHOD_BODY(_coordref, _currn));
return(NULLNODEPTR);
}/* MkMethod_body */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAttribute_specification (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkAttribute_specification (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBAttribute_specification)) return (_currn);
return(NULLNODEPTR);
}/* MkAttribute_specification */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAttribute_declaration (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkAttribute_declaration (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBAttribute_declaration)) return (_currn);
if (IsSymb (_currn, SYMBAttribute_specification)) return (MkATTR_DECL(_coordref, _currn));
return(NULLNODEPTR);
}/* MkAttribute_declaration */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAttribute_access_type (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkAttribute_access_type (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBAttribute_access_type)) return (_currn);
return(NULLNODEPTR);
}/* MkAttribute_access_type */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkIdentifiers (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkIdentifiers (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBIdentifiers)) return (_currn);
if (IsSymb (_currn, SYMBIdent_def)) return (MkIDENTIFIERS(_coordref, _currn));
return(NULLNODEPTR);
}/* MkIdentifiers */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMethod_decl (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkMethod_decl (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBMethod_decl)) return (_currn);
return(NULLNODEPTR);
}/* MkMethod_decl */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFeature (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkFeature (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBFeature)) return (_currn);
if (IsSymb (_currn, SYMBMethod_decl)) return (MkFEATURE_METH(_coordref, _currn));
if (IsSymb (_currn, SYMBAttribute_specification)) return (MkFEATURE_ATT(_coordref, _currn));
if (IsSymb (_currn, SYMBAttribute_declaration)) return (MkFEATURE_ATT(_coordref, _currn));
return(NULLNODEPTR);
}/* MkFeature */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_id_use (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_id_use (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_id_use)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_id_use */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_specifier (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_specifier (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_specifier)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_specifier */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFeature_declarations (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkFeature_declarations (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBFeature_declarations)) return (_currn);
return(NULLNODEPTR);
}/* MkFeature_declarations */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBuiltin_option (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBuiltin_option (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBuiltin_option)) return (_currn);
if (IsSymb (_currn, SYMBClass_specifier)) return (MkBUILTIN_OPT_CL(_coordref, _currn));
return(NULLNODEPTR);
}/* MkBuiltin_option */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_body (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_body (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_body)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_body */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_attribute (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_attribute (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_attribute)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_attribute */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkIdent_def (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkIdent_def (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBIdent_def)) return (_currn);
return(NULLNODEPTR);
}/* MkIdent_def */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBound_identifier (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBound_identifier (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBound_identifier)) return (_currn);
if (IsSymb (_currn, SYMBIdent_def)) return (MkBOUND_IDENTIFIER(_coordref, _currn));
return(NULLNODEPTR);
}/* MkBound_identifier */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_parameters (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_parameters (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_parameters)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_parameters */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_bounds (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_bounds (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_bounds)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_bounds */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_id_def (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_id_def (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_id_def)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_id_def */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_declaration (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_declaration (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_declaration)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_declaration */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_head (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_head (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_head)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_head */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkModifications (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkModifications (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBModifications)) return (_currn);
return(NULLNODEPTR);
}/* MkModifications */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_arguments (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_arguments (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_arguments)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_arguments */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkInheritances (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkInheritances (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBInheritances)) return (_currn);
return(NULLNODEPTR);
}/* MkInheritances */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkInheritance (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkInheritance (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBInheritance)) return (_currn);
return(NULLNODEPTR);
}/* MkInheritance */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkExpression (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkExpression (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBExpression)) return (_currn);
if (IsSymb (_currn, SYMBBound_method)) return (MkEXPRESSION_BOUND(_coordref, _currn));
if (IsSymb (_currn, SYMBCoercion)) return (MkEXPRESSION_COERCION(_coordref, _currn));
if (IsSymb (_currn, SYMBStd_method_call)) return (MkEXPRESSION_METH(_coordref, _currn));
if (IsSymb (_currn, SYMBDirect_stream_call)) return (MkEXPRESSION_STREAM(_coordref, _currn));
if (IsSymb (_currn, SYMBType_constructor)) return (MkEXPRESSION_CONS(_coordref, _currn));
if (IsSymb (_currn, SYMBNamed_expressions)) return (MkEXPRESSION_CONS(_coordref, _currn));
if (IsSymb (_currn, SYMBAggregate)) return (MkEXPRESSION_CONS(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstant)) return (MkEXPRESSION_VALUE(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstants)) return (MkEXPRESSION_VALUE(_coordref, _currn));
if (IsSymb (_currn, SYMBValue)) return (MkEXPRESSION_VALUE(_coordref, _currn));
return(NULLNODEPTR);
}/* MkExpression */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBound (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBound (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBound)) return (_currn);
if (IsSymb (_currn, SYMBBound_method)) return (MkBOUND_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBCoercion)) return (MkBOUND_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBStd_method_call)) return (MkBOUND_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBDirect_stream_call)) return (MkBOUND_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBType_constructor)) return (MkBOUND_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBNamed_expressions)) return (MkBOUND_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBAggregate)) return (MkBOUND_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstant)) return (MkBOUND_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstants)) return (MkBOUND_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBValue)) return (MkBOUND_EXP(_coordref, _currn));
if (IsSymb (_currn, SYMBExpression)) return (MkBOUND_EXP(_coordref, _currn));
return(NULLNODEPTR);
}/* MkBound */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mklocal_stream_declaration (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mklocal_stream_declaration (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBlocal_stream_declaration)) return (_currn);
return(NULLNODEPTR);
}/* Mklocal_stream_declaration */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mklocal_declarations (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mklocal_declarations (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBlocal_declarations)) return (_currn);
return(NULLNODEPTR);
}/* Mklocal_declarations */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkfeature_declaration (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkfeature_declaration (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBfeature_declaration)) return (_currn);
if (IsSymb (_currn, SYMBmethod_decl)) return (MkFEATURE_DECL_O(_coordref, _currn));
if (IsSymb (_currn, SYMBfeature)) return (MkFEATURE_DECL_O(_coordref, _currn));
if (IsSymb (_currn, SYMBattribute_specification)) return (MkFEATURE_DECL_O(_coordref, _currn));
if (IsSymb (_currn, SYMBattribute_declaration)) return (MkFEATURE_DECL_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkfeature_declaration */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkqual_feature_id_use (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkqual_feature_id_use (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBqual_feature_id_use)) return (_currn);
return(NULLNODEPTR);
}/* Mkqual_feature_id_use */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkobj_id_use (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkobj_id_use (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBobj_id_use)) return (_currn);
return(NULLNODEPTR);
}/* Mkobj_id_use */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkqualification (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkqualification (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBqualification)) return (_currn);
return(NULLNODEPTR);
}/* Mkqualification */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkdirect_stream_call (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkdirect_stream_call (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBdirect_stream_call)) return (_currn);
return(NULLNODEPTR);
}/* Mkdirect_stream_call */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkstd_method_call (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkstd_method_call (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBstd_method_call)) return (_currn);
return(NULLNODEPTR);
}/* Mkstd_method_call */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkcoercion (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkcoercion (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBcoercion)) return (_currn);
return(NULLNODEPTR);
}/* Mkcoercion */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkargument (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkargument (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBargument)) return (_currn);
if (IsSymb (_currn, SYMBbound_method)) return (MkARGUMENT_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBcoercion)) return (MkARGUMENT_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstd_method_call)) return (MkARGUMENT_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBdirect_stream_call)) return (MkARGUMENT_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBtype_constructor)) return (MkARGUMENT_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBnamed_expressions)) return (MkARGUMENT_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBaggregate)) return (MkARGUMENT_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstringconstant)) return (MkARGUMENT_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstringconstants)) return (MkARGUMENT_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBvalue)) return (MkARGUMENT_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBexpression)) return (MkARGUMENT_EXP_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkargument */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkbound_method (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkbound_method (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBbound_method)) return (_currn);
return(NULLNODEPTR);
}/* Mkbound_method */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkarguments (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkarguments (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBarguments)) return (_currn);
return(NULLNODEPTR);
}/* Mkarguments */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkstringconstant (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkstringconstant (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBstringconstant)) return (_currn);
return(NULLNODEPTR);
}/* Mkstringconstant */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkstringconstants (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkstringconstants (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBstringconstants)) return (_currn);
if (IsSymb (_currn, SYMBstringconstant)) return (MkSTR_CONSTANTS_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkstringconstants */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkconditional_statement (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkconditional_statement (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBconditional_statement)) return (_currn);
if (IsSymb (_currn, SYMBblock)) return (MkCOND_STATEMENT_ELSE_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkconditional_statement */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkStringconstant_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkStringconstant_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBStringconstant_2)) return (_currn);
return(NULLNODEPTR);
}/* MkStringconstant_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkStringconstants_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkStringconstants_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBStringconstants_2)) return (_currn);
if (IsSymb (_currn, SYMBStringconstant_2)) return (MkSTR_CONSTANTS_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkStringconstants_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_arguments_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_arguments_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_arguments_2)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_arguments_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_id_use_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_id_use_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_id_use_2)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_id_use_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBound_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBound_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBound_2)) return (_currn);
if (IsSymb (_currn, SYMBBound_method_2)) return (MkBOUND_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBCoercion_2)) return (MkBOUND_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStd_method_call_2)) return (MkBOUND_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBDirect_stream_call_2)) return (MkBOUND_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBType_constructor_2)) return (MkBOUND_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBNamed_expressions_2)) return (MkBOUND_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBAggregate_2)) return (MkBOUND_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstant_2)) return (MkBOUND_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstants_2)) return (MkBOUND_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBValue_2)) return (MkBOUND_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBExpression_2)) return (MkBOUND_EXP_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkBound_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBounds_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBounds_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBounds_2)) return (_currn);
return(NULLNODEPTR);
}/* MkBounds_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWhen_types_blocks_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkWhen_types_blocks_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBWhen_types_blocks_2)) return (_currn);
return(NULLNODEPTR);
}/* MkWhen_types_blocks_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkResume_statement_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkResume_statement_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBResume_statement_2)) return (_currn);
return(NULLNODEPTR);
}/* MkResume_statement_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkType_case_statement_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkType_case_statement_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBType_case_statement_2)) return (_currn);
return(NULLNODEPTR);
}/* MkType_case_statement_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkObj_id_use_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkObj_id_use_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBObj_id_use_2)) return (_currn);
return(NULLNODEPTR);
}/* MkObj_id_use_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWhen_types_block_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkWhen_types_block_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBWhen_types_block_2)) return (_currn);
if (IsSymb (_currn, SYMBBlock_2)) return (MkWHEN_TYPES_BLOCK_ELSE_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkWhen_types_block_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkReturn_statement_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkReturn_statement_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBReturn_statement_2)) return (_currn);
return(NULLNODEPTR);
}/* MkReturn_statement_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkQual_feature_id_use_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkQual_feature_id_use_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBQual_feature_id_use_2)) return (_currn);
return(NULLNODEPTR);
}/* MkQual_feature_id_use_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkParameter_kind_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkParameter_kind_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBParameter_kind_2)) return (_currn);
return(NULLNODEPTR);
}/* MkParameter_kind_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkParameter_specification_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkParameter_specification_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBParameter_specification_2)) return (_currn);
return(NULLNODEPTR);
}/* MkParameter_specification_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLinker_symbol_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkLinker_symbol_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBLinker_symbol_2)) return (_currn);
return(NULLNODEPTR);
}/* MkLinker_symbol_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkForeign_language_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkForeign_language_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBForeign_language_2)) return (_currn);
return(NULLNODEPTR);
}/* MkForeign_language_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkInheritances_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkInheritances_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBInheritances_2)) return (_currn);
return(NULLNODEPTR);
}/* MkInheritances_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBreak_statement_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBreak_statement_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBreak_statement_2)) return (_currn);
return(NULLNODEPTR);
}/* MkBreak_statement_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLoop_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkLoop_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBLoop_2)) return (_currn);
if (IsSymb (_currn, SYMBBlock_2)) return (MkLOOP_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkLoop_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMethod_body_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkMethod_body_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBMethod_body_2)) return (_currn);
if (IsSymb (_currn, SYMBBuiltin_instructions_2)) return (MkMETHOD_BODY_BUILTIN_2(_coordref, _currn));
if (IsSymb (_currn, SYMBBlock_2)) return (MkMETHOD_BODY_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkMethod_body_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkParameters_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkParameters_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBParameters_2)) return (_currn);
return(NULLNODEPTR);
}/* MkParameters_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMethod_ident_def_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkMethod_ident_def_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBMethod_ident_def_2)) return (_currn);
return(NULLNODEPTR);
}/* MkMethod_ident_def_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMethod_decl_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkMethod_decl_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBMethod_decl_2)) return (_currn);
return(NULLNODEPTR);
}/* MkMethod_decl_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFeature_declarations_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkFeature_declarations_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBFeature_declarations_2)) return (_currn);
return(NULLNODEPTR);
}/* MkFeature_declarations_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDirect_stream_call_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkDirect_stream_call_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBDirect_stream_call_2)) return (_currn);
return(NULLNODEPTR);
}/* MkDirect_stream_call_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkValue_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkValue_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBValue_2)) return (_currn);
if (IsSymb (_currn, SYMBStringconstant_2)) return (MkVALUE_STR_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstants_2)) return (MkVALUE_STR_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkValue_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkRaise_statement_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkRaise_statement_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBRaise_statement_2)) return (_currn);
return(NULLNODEPTR);
}/* MkRaise_statement_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWhen_exception_stmt_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkWhen_exception_stmt_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBWhen_exception_stmt_2)) return (_currn);
if (IsSymb (_currn, SYMBBlock_2)) return (MkWHEN_EXCEPTION_STMT_ELSE_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkWhen_exception_stmt_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWhen_exception_stmts_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkWhen_exception_stmts_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBWhen_exception_stmts_2)) return (_currn);
return(NULLNODEPTR);
}/* MkWhen_exception_stmts_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBegin_block_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBegin_block_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBegin_block_2)) return (_currn);
return(NULLNODEPTR);
}/* MkBegin_block_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkExceptions_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkExceptions_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBExceptions_2)) return (_currn);
return(NULLNODEPTR);
}/* MkExceptions_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkQualification_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkQualification_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBQualification_2)) return (_currn);
return(NULLNODEPTR);
}/* MkQualification_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkStd_method_call_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkStd_method_call_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBStd_method_call_2)) return (_currn);
return(NULLNODEPTR);
}/* MkStd_method_call_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkConditional_statement_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkConditional_statement_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBConditional_statement_2)) return (_currn);
if (IsSymb (_currn, SYMBBlock_2)) return (MkCOND_STATEMENT_ELSE_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkConditional_statement_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCoercion_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkCoercion_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBCoercion_2)) return (_currn);
return(NULLNODEPTR);
}/* MkCoercion_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_parameters_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_parameters_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_parameters_2)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_parameters_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_id_def_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_id_def_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_id_def_2)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_id_def_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_body_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_body_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_body_2)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_body_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_head_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_head_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_head_2)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_head_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_attribute_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_attribute_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_attribute_2)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_attribute_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCase_label_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkCase_label_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBCase_label_2)) return (_currn);
if (IsSymb (_currn, SYMBQualification_2)) return (MkCASE_LABEL_DES_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStd_method_call_2)) return (MkCASE_LABEL_DES_2(_coordref, _currn));
if (IsSymb (_currn, SYMBObj_id_use_2)) return (MkCASE_LABEL_DES_2(_coordref, _currn));
if (IsSymb (_currn, SYMBName_2)) return (MkCASE_LABEL_DES_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstant_2)) return (MkCASE_LABEL_VALUE_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstants_2)) return (MkCASE_LABEL_VALUE_2(_coordref, _currn));
if (IsSymb (_currn, SYMBValue_2)) return (MkCASE_LABEL_VALUE_2(_coordref, _currn));
if (IsSymb (_currn, SYMBDesignator_2)) return (MkCASE_LABEL_DES_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkCase_label_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLabel_range_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkLabel_range_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBLabel_range_2)) return (_currn);
if (IsSymb (_currn, SYMBQualification_2)) return (MkLABEL_RANGE_SINGLE_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStd_method_call_2)) return (MkLABEL_RANGE_SINGLE_2(_coordref, _currn));
if (IsSymb (_currn, SYMBObj_id_use_2)) return (MkLABEL_RANGE_SINGLE_2(_coordref, _currn));
if (IsSymb (_currn, SYMBName_2)) return (MkLABEL_RANGE_SINGLE_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstant_2)) return (MkLABEL_RANGE_SINGLE_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstants_2)) return (MkLABEL_RANGE_SINGLE_2(_coordref, _currn));
if (IsSymb (_currn, SYMBValue_2)) return (MkLABEL_RANGE_SINGLE_2(_coordref, _currn));
if (IsSymb (_currn, SYMBDesignator_2)) return (MkLABEL_RANGE_SINGLE_2(_coordref, _currn));
if (IsSymb (_currn, SYMBCase_label_2)) return (MkLABEL_RANGE_SINGLE_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkLabel_range_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLabel_list_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkLabel_list_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBLabel_list_2)) return (_currn);
return(NULLNODEPTR);
}/* MkLabel_list_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWhen_label_stmts_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkWhen_label_stmts_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBWhen_label_stmts_2)) return (_currn);
return(NULLNODEPTR);
}/* MkWhen_label_stmts_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWhen_label_stmt_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkWhen_label_stmt_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBWhen_label_stmt_2)) return (_currn);
return(NULLNODEPTR);
}/* MkWhen_label_stmt_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCase_statement_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkCase_statement_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBCase_statement_2)) return (_currn);
return(NULLNODEPTR);
}/* MkCase_statement_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBuiltin_instruction_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBuiltin_instruction_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBuiltin_instruction_2)) return (_currn);
if (IsSymb (_currn, SYMBClass_specifier_2)) return (MkBUILTIN_INST_TYPE_2(_coordref, _currn));
if (IsSymb (_currn, SYMBType_specifier_2)) return (MkBUILTIN_INST_TYPE_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkBuiltin_instruction_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBuiltin_instructions_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBuiltin_instructions_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBuiltin_instructions_2)) return (_currn);
return(NULLNODEPTR);
}/* MkBuiltin_instructions_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMethod_specification_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkMethod_specification_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBMethod_specification_2)) return (_currn);
return(NULLNODEPTR);
}/* MkMethod_specification_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBound_method_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBound_method_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBound_method_2)) return (_currn);
return(NULLNODEPTR);
}/* MkBound_method_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLocal_stream_declaration_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkLocal_stream_declaration_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBLocal_stream_declaration_2)) return (_currn);
return(NULLNODEPTR);
}/* MkLocal_stream_declaration_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkStatements_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkStatements_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBStatements_2)) return (_currn);
return(NULLNODEPTR);
}/* MkStatements_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLocal_declarations_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkLocal_declarations_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBLocal_declarations_2)) return (_currn);
return(NULLNODEPTR);
}/* MkLocal_declarations_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBlock_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBlock_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBlock_2)) return (_currn);
return(NULLNODEPTR);
}/* MkBlock_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBound_identifier_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBound_identifier_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBound_identifier_2)) return (_currn);
if (IsSymb (_currn, SYMBIdent_def_2)) return (MkBOUND_IDENTIFIER_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkBound_identifier_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_bounds_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_bounds_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_bounds_2)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_bounds_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFeature_declaration_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkFeature_declaration_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBFeature_declaration_2)) return (_currn);
if (IsSymb (_currn, SYMBMethod_decl_2)) return (MkFEATURE_DECL_2(_coordref, _currn));
if (IsSymb (_currn, SYMBFeature_2)) return (MkFEATURE_DECL_2(_coordref, _currn));
if (IsSymb (_currn, SYMBAttribute_specification_2)) return (MkFEATURE_DECL_2(_coordref, _currn));
if (IsSymb (_currn, SYMBAttribute_declaration_2)) return (MkFEATURE_DECL_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkFeature_declaration_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAttribute_specification_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkAttribute_specification_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBAttribute_specification_2)) return (_currn);
return(NULLNODEPTR);
}/* MkAttribute_specification_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkIdent_def_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkIdent_def_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBIdent_def_2)) return (_currn);
return(NULLNODEPTR);
}/* MkIdent_def_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAttribute_declaration_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkAttribute_declaration_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBAttribute_declaration_2)) return (_currn);
if (IsSymb (_currn, SYMBAttribute_specification_2)) return (MkATTR_DECL_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkAttribute_declaration_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAttribute_access_type_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkAttribute_access_type_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBAttribute_access_type_2)) return (_currn);
return(NULLNODEPTR);
}/* MkAttribute_access_type_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkType_specifier_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkType_specifier_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBType_specifier_2)) return (_currn);
if (IsSymb (_currn, SYMBClass_specifier_2)) return (MkTYPE_SPECIFIER_CL_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkType_specifier_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkIdentifiers_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkIdentifiers_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBIdentifiers_2)) return (_currn);
if (IsSymb (_currn, SYMBIdent_def_2)) return (MkIDENTIFIERS_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkIdentifiers_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFeature_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkFeature_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBFeature_2)) return (_currn);
if (IsSymb (_currn, SYMBMethod_decl_2)) return (MkFEATURE_METH_2(_coordref, _currn));
if (IsSymb (_currn, SYMBAttribute_specification_2)) return (MkFEATURE_ATT_2(_coordref, _currn));
if (IsSymb (_currn, SYMBAttribute_declaration_2)) return (MkFEATURE_ATT_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkFeature_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAssignment_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkAssignment_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBAssignment_2)) return (_currn);
return(NULLNODEPTR);
}/* MkAssignment_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAssertion_statement_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkAssertion_statement_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBAssertion_statement_2)) return (_currn);
if (IsSymb (_currn, SYMBBound_method_2)) return (MkASSERTION_STATEMENT_2(_coordref, _currn));
if (IsSymb (_currn, SYMBCoercion_2)) return (MkASSERTION_STATEMENT_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStd_method_call_2)) return (MkASSERTION_STATEMENT_2(_coordref, _currn));
if (IsSymb (_currn, SYMBDirect_stream_call_2)) return (MkASSERTION_STATEMENT_2(_coordref, _currn));
if (IsSymb (_currn, SYMBType_constructor_2)) return (MkASSERTION_STATEMENT_2(_coordref, _currn));
if (IsSymb (_currn, SYMBNamed_expressions_2)) return (MkASSERTION_STATEMENT_2(_coordref, _currn));
if (IsSymb (_currn, SYMBAggregate_2)) return (MkASSERTION_STATEMENT_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstant_2)) return (MkASSERTION_STATEMENT_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstants_2)) return (MkASSERTION_STATEMENT_2(_coordref, _currn));
if (IsSymb (_currn, SYMBValue_2)) return (MkASSERTION_STATEMENT_2(_coordref, _currn));
if (IsSymb (_currn, SYMBExpression_2)) return (MkASSERTION_STATEMENT_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkAssertion_statement_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDesignator_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkDesignator_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBDesignator_2)) return (_currn);
if (IsSymb (_currn, SYMBQualification_2)) return (MkDESIGNATOR_QUAL_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStd_method_call_2)) return (MkDESIGNATOR_METH_2(_coordref, _currn));
if (IsSymb (_currn, SYMBObj_id_use_2)) return (MkDESIGNATOR_NAME_2(_coordref, _currn));
if (IsSymb (_currn, SYMBName_2)) return (MkDESIGNATOR_NAME_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkDesignator_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkArgument_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkArgument_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBArgument_2)) return (_currn);
if (IsSymb (_currn, SYMBBound_method_2)) return (MkARGUMENT_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBCoercion_2)) return (MkARGUMENT_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStd_method_call_2)) return (MkARGUMENT_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBDirect_stream_call_2)) return (MkARGUMENT_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBType_constructor_2)) return (MkARGUMENT_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBNamed_expressions_2)) return (MkARGUMENT_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBAggregate_2)) return (MkARGUMENT_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstant_2)) return (MkARGUMENT_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstants_2)) return (MkARGUMENT_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBValue_2)) return (MkARGUMENT_EXP_2(_coordref, _currn));
if (IsSymb (_currn, SYMBExpression_2)) return (MkARGUMENT_EXP_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkArgument_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkArguments_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkArguments_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBArguments_2)) return (_currn);
return(NULLNODEPTR);
}/* MkArguments_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkExpression_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkExpression_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBExpression_2)) return (_currn);
if (IsSymb (_currn, SYMBBound_method_2)) return (MkEXPRESSION_BOUND_2(_coordref, _currn));
if (IsSymb (_currn, SYMBCoercion_2)) return (MkEXPRESSION_COERCION_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStd_method_call_2)) return (MkEXPRESSION_METH_2(_coordref, _currn));
if (IsSymb (_currn, SYMBDirect_stream_call_2)) return (MkEXPRESSION_STREAM_2(_coordref, _currn));
if (IsSymb (_currn, SYMBType_constructor_2)) return (MkEXPRESSION_CONS_2(_coordref, _currn));
if (IsSymb (_currn, SYMBNamed_expressions_2)) return (MkEXPRESSION_CONS_2(_coordref, _currn));
if (IsSymb (_currn, SYMBAggregate_2)) return (MkEXPRESSION_CONS_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstant_2)) return (MkEXPRESSION_VALUE_2(_coordref, _currn));
if (IsSymb (_currn, SYMBStringconstants_2)) return (MkEXPRESSION_VALUE_2(_coordref, _currn));
if (IsSymb (_currn, SYMBValue_2)) return (MkEXPRESSION_VALUE_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkExpression_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkName_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkName_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBName_2)) return (_currn);
if (IsSymb (_currn, SYMBObj_id_use_2)) return (MkNAME_OBJ_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkName_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNamed_expression_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkNamed_expression_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBNamed_expression_2)) return (_currn);
return(NULLNODEPTR);
}/* MkNamed_expression_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAgg_id_def_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkAgg_id_def_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBAgg_id_def_2)) return (_currn);
return(NULLNODEPTR);
}/* MkAgg_id_def_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNamed_expressions_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkNamed_expressions_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBNamed_expressions_2)) return (_currn);
return(NULLNODEPTR);
}/* MkNamed_expressions_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAggregate_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkAggregate_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBAggregate_2)) return (_currn);
if (IsSymb (_currn, SYMBNamed_expressions_2)) return (MkAGGREGATE_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkAggregate_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkType_constructor_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkType_constructor_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBType_constructor_2)) return (_currn);
if (IsSymb (_currn, SYMBNamed_expressions_2)) return (MkTYPE_CONSTRUCTOR_AGG_2(_coordref, _currn));
if (IsSymb (_currn, SYMBAggregate_2)) return (MkTYPE_CONSTRUCTOR_AGG_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkType_constructor_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_specifier_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_specifier_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_specifier_2)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_specifier_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_declaration_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_declaration_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_declaration_2)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_declaration_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBuiltin_option_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkBuiltin_option_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBBuiltin_option_2)) return (_currn);
if (IsSymb (_currn, SYMBClass_specifier_2)) return (MkBUILTIN_OPT_CL_2(_coordref, _currn));
return(NULLNODEPTR);
}/* MkBuiltin_option_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkparameter_kind (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkparameter_kind (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBparameter_kind)) return (_currn);
return(NULLNODEPTR);
}/* Mkparameter_kind */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkparameter_type (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkparameter_type (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBparameter_type)) return (_currn);
return(NULLNODEPTR);
}/* Mkparameter_type */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkparameter_types (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkparameter_types (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBparameter_types)) return (_currn);
return(NULLNODEPTR);
}/* Mkparameter_types */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkfeature_id_use (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkfeature_id_use (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBfeature_id_use)) return (_currn);
return(NULLNODEPTR);
}/* Mkfeature_id_use */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkident_mod (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkident_mod (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBident_mod)) return (_currn);
return(NULLNODEPTR);
}/* Mkident_mod */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkfeature_specification (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkfeature_specification (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBfeature_specification)) return (_currn);
return(NULLNODEPTR);
}/* Mkfeature_specification */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkmodification (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkmodification (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBmodification)) return (_currn);
if (IsSymb (_currn, SYMBfeature_specification)) return (MkMODIFICATION_ONLY_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkmodification */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkmodifications (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkmodifications (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBmodifications)) return (_currn);
return(NULLNODEPTR);
}/* Mkmodifications */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkinheritance (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkinheritance (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBinheritance)) return (_currn);
return(NULLNODEPTR);
}/* Mkinheritance */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkfeature_declarations (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkfeature_declarations (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBfeature_declarations)) return (_currn);
return(NULLNODEPTR);
}/* Mkfeature_declarations */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkinheritances (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkinheritances (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBinheritances)) return (_currn);
return(NULLNODEPTR);
}/* Mkinheritances */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkbuiltin_option (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkbuiltin_option (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBbuiltin_option)) return (_currn);
if (IsSymb (_currn, SYMBclass_specifier)) return (MkBUILTIN_OPT_CL_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkbuiltin_option */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkclass_argument (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkclass_argument (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBclass_argument)) return (_currn);
if (IsSymb (_currn, SYMBclass_specifier)) return (MkCLASS_ARGUMENT_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkclass_argument */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkclass_arguments (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkclass_arguments (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBclass_arguments)) return (_currn);
return(NULLNODEPTR);
}/* Mkclass_arguments */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkmethod_specification (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkmethod_specification (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBmethod_specification)) return (_currn);
return(NULLNODEPTR);
}/* Mkmethod_specification */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkclass_specifier (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkclass_specifier (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBclass_specifier)) return (_currn);
return(NULLNODEPTR);
}/* Mkclass_specifier */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mktype_specifiers (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mktype_specifiers (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBtype_specifiers)) return (_currn);
return(NULLNODEPTR);
}/* Mktype_specifiers */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkclass_parameter (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkclass_parameter (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBclass_parameter)) return (_currn);
return(NULLNODEPTR);
}/* Mkclass_parameter */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkbound_identifier (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkbound_identifier (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBbound_identifier)) return (_currn);
if (IsSymb (_currn, SYMBident_def)) return (MkBOUND_IDENTIFIER_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkbound_identifier */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkclass_id_use (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkclass_id_use (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBclass_id_use)) return (_currn);
return(NULLNODEPTR);
}/* Mkclass_id_use */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkclass_param_id_def (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkclass_param_id_def (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBclass_param_id_def)) return (_currn);
return(NULLNODEPTR);
}/* Mkclass_param_id_def */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkclass_parameters (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkclass_parameters (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBclass_parameters)) return (_currn);
return(NULLNODEPTR);
}/* Mkclass_parameters */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkclass_bounds (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkclass_bounds (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBclass_bounds)) return (_currn);
return(NULLNODEPTR);
}/* Mkclass_bounds */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkclass_id_def (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkclass_id_def (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBclass_id_def)) return (_currn);
return(NULLNODEPTR);
}/* Mkclass_id_def */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkclass_body (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkclass_body (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBclass_body)) return (_currn);
return(NULLNODEPTR);
}/* Mkclass_body */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkclass_head (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkclass_head (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBclass_head)) return (_currn);
return(NULLNODEPTR);
}/* Mkclass_head */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkclass_attribute (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkclass_attribute (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBclass_attribute)) return (_currn);
return(NULLNODEPTR);
}/* Mkclass_attribute */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkclass_declaration (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkclass_declaration (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBclass_declaration)) return (_currn);
return(NULLNODEPTR);
}/* Mkclass_declaration */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_declarations_2 (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_declarations_2 (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_declarations_2)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_declarations_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkClass_declarations (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR MkClass_declarations (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBClass_declarations)) return (_currn);
return(NULLNODEPTR);
}/* MkClass_declarations */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkclass_declarations (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkclass_declarations (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBclass_declarations)) return (_currn);
return(NULLNODEPTR);
}/* Mkclass_declarations */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkprogram (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkprogram (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBprogram)) return (_currn);
return(NULLNODEPTR);
}/* Mkprogram */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkdesignator (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkdesignator (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBdesignator)) return (_currn);
if (IsSymb (_currn, SYMBqualification)) return (MkDESIGNATOR_QUAL_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstd_method_call)) return (MkDESIGNATOR_METH_O(_coordref, _currn));
if (IsSymb (_currn, SYMBobj_id_use)) return (MkDESIGNATOR_NAME_O(_coordref, _currn));
if (IsSymb (_currn, SYMBname)) return (MkDESIGNATOR_NAME_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkdesignator */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkvalue (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkvalue (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBvalue)) return (_currn);
if (IsSymb (_currn, SYMBstringconstant)) return (MkVALUE_STR_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstringconstants)) return (MkVALUE_STR_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkvalue */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkcase_label (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkcase_label (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBcase_label)) return (_currn);
if (IsSymb (_currn, SYMBqualification)) return (MkCASE_LABEL_DES_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstd_method_call)) return (MkCASE_LABEL_DES_O(_coordref, _currn));
if (IsSymb (_currn, SYMBobj_id_use)) return (MkCASE_LABEL_DES_O(_coordref, _currn));
if (IsSymb (_currn, SYMBname)) return (MkCASE_LABEL_DES_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstringconstant)) return (MkCASE_LABEL_VALUE_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstringconstants)) return (MkCASE_LABEL_VALUE_O(_coordref, _currn));
if (IsSymb (_currn, SYMBvalue)) return (MkCASE_LABEL_VALUE_O(_coordref, _currn));
if (IsSymb (_currn, SYMBdesignator)) return (MkCASE_LABEL_DES_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkcase_label */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mklabel_range (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mklabel_range (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBlabel_range)) return (_currn);
if (IsSymb (_currn, SYMBqualification)) return (MkLABEL_RANGE_SINGLE_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstd_method_call)) return (MkLABEL_RANGE_SINGLE_O(_coordref, _currn));
if (IsSymb (_currn, SYMBobj_id_use)) return (MkLABEL_RANGE_SINGLE_O(_coordref, _currn));
if (IsSymb (_currn, SYMBname)) return (MkLABEL_RANGE_SINGLE_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstringconstant)) return (MkLABEL_RANGE_SINGLE_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstringconstants)) return (MkLABEL_RANGE_SINGLE_O(_coordref, _currn));
if (IsSymb (_currn, SYMBvalue)) return (MkLABEL_RANGE_SINGLE_O(_coordref, _currn));
if (IsSymb (_currn, SYMBdesignator)) return (MkLABEL_RANGE_SINGLE_O(_coordref, _currn));
if (IsSymb (_currn, SYMBcase_label)) return (MkLABEL_RANGE_SINGLE_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mklabel_range */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mklabel_list (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mklabel_list (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBlabel_list)) return (_currn);
return(NULLNODEPTR);
}/* Mklabel_list */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkwhen_label_stmt (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkwhen_label_stmt (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBwhen_label_stmt)) return (_currn);
return(NULLNODEPTR);
}/* Mkwhen_label_stmt */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkwhen_label_stmts (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkwhen_label_stmts (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBwhen_label_stmts)) return (_currn);
return(NULLNODEPTR);
}/* Mkwhen_label_stmts */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkcase_statement (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkcase_statement (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBcase_statement)) return (_currn);
return(NULLNODEPTR);
}/* Mkcase_statement */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkbound (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkbound (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBbound)) return (_currn);
if (IsSymb (_currn, SYMBbound_method)) return (MkBOUND_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBcoercion)) return (MkBOUND_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstd_method_call)) return (MkBOUND_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBdirect_stream_call)) return (MkBOUND_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBtype_constructor)) return (MkBOUND_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBnamed_expressions)) return (MkBOUND_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBaggregate)) return (MkBOUND_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstringconstant)) return (MkBOUND_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstringconstants)) return (MkBOUND_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBvalue)) return (MkBOUND_EXP_O(_coordref, _currn));
if (IsSymb (_currn, SYMBexpression)) return (MkBOUND_EXP_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkbound */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkbounds (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkbounds (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBbounds)) return (_currn);
return(NULLNODEPTR);
}/* Mkbounds */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkassertion_statement (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkassertion_statement (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBassertion_statement)) return (_currn);
if (IsSymb (_currn, SYMBbound_method)) return (MkASSERTION_STATEMENT_O(_coordref, _currn));
if (IsSymb (_currn, SYMBcoercion)) return (MkASSERTION_STATEMENT_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstd_method_call)) return (MkASSERTION_STATEMENT_O(_coordref, _currn));
if (IsSymb (_currn, SYMBdirect_stream_call)) return (MkASSERTION_STATEMENT_O(_coordref, _currn));
if (IsSymb (_currn, SYMBtype_constructor)) return (MkASSERTION_STATEMENT_O(_coordref, _currn));
if (IsSymb (_currn, SYMBnamed_expressions)) return (MkASSERTION_STATEMENT_O(_coordref, _currn));
if (IsSymb (_currn, SYMBaggregate)) return (MkASSERTION_STATEMENT_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstringconstant)) return (MkASSERTION_STATEMENT_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstringconstants)) return (MkASSERTION_STATEMENT_O(_coordref, _currn));
if (IsSymb (_currn, SYMBvalue)) return (MkASSERTION_STATEMENT_O(_coordref, _currn));
if (IsSymb (_currn, SYMBexpression)) return (MkASSERTION_STATEMENT_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkassertion_statement */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkraise_statement (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkraise_statement (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBraise_statement)) return (_currn);
return(NULLNODEPTR);
}/* Mkraise_statement */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkexception_types (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkexception_types (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBexception_types)) return (_currn);
return(NULLNODEPTR);
}/* Mkexception_types */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkwhen_exception_stmt (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkwhen_exception_stmt (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBwhen_exception_stmt)) return (_currn);
return(NULLNODEPTR);
}/* Mkwhen_exception_stmt */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkwhen_exception_stmts (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkwhen_exception_stmts (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBwhen_exception_stmts)) return (_currn);
return(NULLNODEPTR);
}/* Mkwhen_exception_stmts */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkexceptions (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkexceptions (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBexceptions)) return (_currn);
return(NULLNODEPTR);
}/* Mkexceptions */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkblock (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkblock (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBblock)) return (_currn);
return(NULLNODEPTR);
}/* Mkblock */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkbegin_block (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkbegin_block (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBbegin_block)) return (_currn);
return(NULLNODEPTR);
}/* Mkbegin_block */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkident_def (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkident_def (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBident_def)) return (_currn);
return(NULLNODEPTR);
}/* Mkident_def */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mktype_specifier (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mktype_specifier (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBtype_specifier)) return (_currn);
if (IsSymb (_currn, SYMBclass_specifier)) return (MkTYPE_SPECIFIER_CL_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mktype_specifier */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mktype_constructor (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mktype_constructor (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBtype_constructor)) return (_currn);
if (IsSymb (_currn, SYMBnamed_expressions)) return (MkTYPE_CONSTRUCTOR_AGG_O(_coordref, _currn));
if (IsSymb (_currn, SYMBaggregate)) return (MkTYPE_CONSTRUCTOR_AGG_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mktype_constructor */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkidentifiers (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkidentifiers (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBidentifiers)) return (_currn);
if (IsSymb (_currn, SYMBident_def)) return (MkIDENTIFIERS_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkidentifiers */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkattribute_specification (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkattribute_specification (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBattribute_specification)) return (_currn);
return(NULLNODEPTR);
}/* Mkattribute_specification */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkattribute_declaration (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkattribute_declaration (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBattribute_declaration)) return (_currn);
if (IsSymb (_currn, SYMBattribute_specification)) return (MkATTR_DECL_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkattribute_declaration */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkfeature (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkfeature (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBfeature)) return (_currn);
if (IsSymb (_currn, SYMBmethod_decl)) return (MkFEATURE_METH_O(_coordref, _currn));
if (IsSymb (_currn, SYMBattribute_specification)) return (MkFEATURE_ATT_O(_coordref, _currn));
if (IsSymb (_currn, SYMBattribute_declaration)) return (MkFEATURE_ATT_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkfeature */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkattribute_access_type (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkattribute_access_type (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBattribute_access_type)) return (_currn);
return(NULLNODEPTR);
}/* Mkattribute_access_type */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkassignment (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkassignment (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBassignment)) return (_currn);
return(NULLNODEPTR);
}/* Mkassignment */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkexpression (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkexpression (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBexpression)) return (_currn);
if (IsSymb (_currn, SYMBbound_method)) return (MkEXPRESSION_BOUND_O(_coordref, _currn));
if (IsSymb (_currn, SYMBcoercion)) return (MkEXPRESSION_COERCION_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstd_method_call)) return (MkEXPRESSION_METH_O(_coordref, _currn));
if (IsSymb (_currn, SYMBdirect_stream_call)) return (MkEXPRESSION_STREAM_O(_coordref, _currn));
if (IsSymb (_currn, SYMBtype_constructor)) return (MkEXPRESSION_CONS_O(_coordref, _currn));
if (IsSymb (_currn, SYMBnamed_expressions)) return (MkEXPRESSION_CONS_O(_coordref, _currn));
if (IsSymb (_currn, SYMBaggregate)) return (MkEXPRESSION_CONS_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstringconstant)) return (MkEXPRESSION_VALUE_O(_coordref, _currn));
if (IsSymb (_currn, SYMBstringconstants)) return (MkEXPRESSION_VALUE_O(_coordref, _currn));
if (IsSymb (_currn, SYMBvalue)) return (MkEXPRESSION_VALUE_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkexpression */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkname (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkname (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBname)) return (_currn);
if (IsSymb (_currn, SYMBobj_id_use)) return (MkNAME_OBJ_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkname */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mknamed_expression (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mknamed_expression (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBnamed_expression)) return (_currn);
return(NULLNODEPTR);
}/* Mknamed_expression */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkagg_id_def (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkagg_id_def (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBagg_id_def)) return (_currn);
return(NULLNODEPTR);
}/* Mkagg_id_def */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mknamed_expressions (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mknamed_expressions (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBnamed_expressions)) return (_currn);
return(NULLNODEPTR);
}/* Mknamed_expressions */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkaggregate (POSITION *_coordref, NODEPTR _currn)
#else
NODEPTR Mkaggregate (_coordref, _currn)
	POSITION *_coordref; NODEPTR _currn;
#endif
{
if (_currn == NULLNODEPTR) return NULLNODEPTR;
if (IsSymb (_currn, SYMBaggregate)) return (_currn);
if (IsSymb (_currn, SYMBnamed_expressions)) return (MkAGGREGATE_O(_coordref, _currn));
return(NULLNODEPTR);
}/* Mkaggregate */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkrule_1 (POSITION *_coordref)
#else
NODEPTR Mkrule_1 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPrule_1 _currn;
#ifdef __cplusplus
_currn = new _TPrule_1;
#else
_currn = (_TPPrule_1) TreeNodeAlloc (sizeof (struct _TPrule_1));
#endif
_currn->_prod = RULErule_1;
_SETCOORD(_currn)
_TERMACT_rule_1;
return ( (NODEPTR) _currn);
}/* Mkrule_1 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mkrule_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR Mkrule_2 (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPrule_2 _currn;
#ifdef __cplusplus
_currn = new _TPrule_2;
#else
_currn = (_TPPrule_2) TreeNodeAlloc (sizeof (struct _TPrule_2));
#endif
_currn->_prod = RULErule_2;
_currn->_desc1 = (_TSPclass_declarations) Mkclass_declarations (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE rule_2: root of subtree no. 1 can not be made a class_declarations node ", 0, _coordref);
if (_desc2 == NULLNODEPTR)
	_currn->_desc2 = (_TSPClass_declarations) NULLNODEPTR;
else	_currn->_desc2 = (_TSPClass_declarations) MkClass_declarations (_coordref, _desc2);
if (_desc3 == NULLNODEPTR)
	_currn->_desc3 = (_TSPClass_declarations_2) NULLNODEPTR;
else	_currn->_desc3 = (_TSPClass_declarations_2) MkClass_declarations_2 (_coordref, _desc3);
_SETCOORD(_currn)
_TERMACT_rule_2;
return ( (NODEPTR) _currn);
}/* Mkrule_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkASSERTION_STATEMENT_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkASSERTION_STATEMENT_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPASSERTION_STATEMENT_O _currn;
#ifdef __cplusplus
_currn = new _TPASSERTION_STATEMENT_O;
#else
_currn = (_TPPASSERTION_STATEMENT_O) TreeNodeAlloc (sizeof (struct _TPASSERTION_STATEMENT_O));
#endif
_currn->_prod = RULEASSERTION_STATEMENT_O;
_currn->_desc1 = (_TSPexpression) Mkexpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ASSERTION_STATEMENT_O: root of subtree no. 1 can not be made a expression node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_ASSERTION_STATEMENT_O;
return ( (NODEPTR) _currn);
}/* MkASSERTION_STATEMENT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkRAISE_STATEMENT_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkRAISE_STATEMENT_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPRAISE_STATEMENT_O _currn;
#ifdef __cplusplus
_currn = new _TPRAISE_STATEMENT_O;
#else
_currn = (_TPPRAISE_STATEMENT_O) TreeNodeAlloc (sizeof (struct _TPRAISE_STATEMENT_O));
#endif
_currn->_prod = RULERAISE_STATEMENT_O;
_currn->_desc1 = (_TSPtype_specifier) Mktype_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE RAISE_STATEMENT_O: root of subtree no. 1 can not be made a type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_RAISE_STATEMENT_O;
return ( (NODEPTR) _currn);
}/* MkRAISE_STATEMENT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkRETURN_STATEMENT_O (POSITION *_coordref)
#else
NODEPTR MkRETURN_STATEMENT_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPRETURN_STATEMENT_O _currn;
#ifdef __cplusplus
_currn = new _TPRETURN_STATEMENT_O;
#else
_currn = (_TPPRETURN_STATEMENT_O) TreeNodeAlloc (sizeof (struct _TPRETURN_STATEMENT_O));
#endif
_currn->_prod = RULERETURN_STATEMENT_O;
_SETCOORD(_currn)
_TERMACT_RETURN_STATEMENT_O;
return ( (NODEPTR) _currn);
}/* MkRETURN_STATEMENT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkRESUME_STATEMENT_O (POSITION *_coordref)
#else
NODEPTR MkRESUME_STATEMENT_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPRESUME_STATEMENT_O _currn;
#ifdef __cplusplus
_currn = new _TPRESUME_STATEMENT_O;
#else
_currn = (_TPPRESUME_STATEMENT_O) TreeNodeAlloc (sizeof (struct _TPRESUME_STATEMENT_O));
#endif
_currn->_prod = RULERESUME_STATEMENT_O;
_SETCOORD(_currn)
_TERMACT_RESUME_STATEMENT_O;
return ( (NODEPTR) _currn);
}/* MkRESUME_STATEMENT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBREAK_STATEMENT_O (POSITION *_coordref)
#else
NODEPTR MkBREAK_STATEMENT_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPBREAK_STATEMENT_O _currn;
#ifdef __cplusplus
_currn = new _TPBREAK_STATEMENT_O;
#else
_currn = (_TPPBREAK_STATEMENT_O) TreeNodeAlloc (sizeof (struct _TPBREAK_STATEMENT_O));
#endif
_currn->_prod = RULEBREAK_STATEMENT_O;
_SETCOORD(_currn)
_TERMACT_BREAK_STATEMENT_O;
return ( (NODEPTR) _currn);
}/* MkBREAK_STATEMENT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOOP_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkLOOP_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPLOOP_O _currn;
#ifdef __cplusplus
_currn = new _TPLOOP_O;
#else
_currn = (_TPPLOOP_O) TreeNodeAlloc (sizeof (struct _TPLOOP_O));
#endif
_currn->_prod = RULELOOP_O;
_currn->_desc1 = (_TSPblock) Mkblock (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LOOP_O: root of subtree no. 1 can not be made a block node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_LOOP_O;
return ( (NODEPTR) _currn);
}/* MkLOOP_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOOP_EXP_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkLOOP_EXP_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPLOOP_EXP_O _currn;
#ifdef __cplusplus
_currn = new _TPLOOP_EXP_O;
#else
_currn = (_TPPLOOP_EXP_O) TreeNodeAlloc (sizeof (struct _TPLOOP_EXP_O));
#endif
_currn->_prod = RULELOOP_EXP_O;
_currn->_desc1 = (_TSPexpression) Mkexpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LOOP_EXP_O: root of subtree no. 1 can not be made a expression node ", 0, _coordref);
_currn->_desc2 = (_TSPblock) Mkblock (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE LOOP_EXP_O: root of subtree no. 2 can not be made a block node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_LOOP_EXP_O;
return ( (NODEPTR) _currn);
}/* MkLOOP_EXP_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPES_LST_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPES_LST_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPES_LST_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPES_LST_O;
#else
_currn = (_TPPTYPES_LST_O) TreeNodeAlloc (sizeof (struct _TPTYPES_LST_O));
#endif
_currn->_prod = RULETYPES_LST_O;
_currn->_desc1 = (_TSPtypes) Mktypes (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPES_LST_O: root of subtree no. 1 can not be made a types node ", 0, _coordref);
_currn->_desc2 = (_TSPtype_specifier) Mktype_specifier (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPES_LST_O: root of subtree no. 2 can not be made a type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPES_LST_O;
return ( (NODEPTR) _currn);
}/* MkTYPES_LST_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPES_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkTYPES_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPTYPES_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPES_EMPTY_O;
#else
_currn = (_TPPTYPES_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPTYPES_EMPTY_O));
#endif
_currn->_prod = RULETYPES_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_TYPES_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkTYPES_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_TYPES_BLOCK_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_TYPES_BLOCK_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_TYPES_BLOCK_O _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_TYPES_BLOCK_O;
#else
_currn = (_TPPWHEN_TYPES_BLOCK_O) TreeNodeAlloc (sizeof (struct _TPWHEN_TYPES_BLOCK_O));
#endif
_currn->_prod = RULEWHEN_TYPES_BLOCK_O;
_currn->_desc1 = (_TSPtypes) Mktypes (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_TYPES_BLOCK_O: root of subtree no. 1 can not be made a types node ", 0, _coordref);
_currn->_desc2 = (_TSPblock) Mkblock (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_TYPES_BLOCK_O: root of subtree no. 2 can not be made a block node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_TYPES_BLOCK_O;
return ( (NODEPTR) _currn);
}/* MkWHEN_TYPES_BLOCK_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_TYPES_BLOCKS_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkWHEN_TYPES_BLOCKS_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPWHEN_TYPES_BLOCKS_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_TYPES_BLOCKS_EMPTY_O;
#else
_currn = (_TPPWHEN_TYPES_BLOCKS_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPWHEN_TYPES_BLOCKS_EMPTY_O));
#endif
_currn->_prod = RULEWHEN_TYPES_BLOCKS_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_WHEN_TYPES_BLOCKS_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkWHEN_TYPES_BLOCKS_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_TYPES_BLOCKS_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_TYPES_BLOCKS_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_TYPES_BLOCKS_O _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_TYPES_BLOCKS_O;
#else
_currn = (_TPPWHEN_TYPES_BLOCKS_O) TreeNodeAlloc (sizeof (struct _TPWHEN_TYPES_BLOCKS_O));
#endif
_currn->_prod = RULEWHEN_TYPES_BLOCKS_O;
_currn->_desc1 = (_TSPwhen_types_blocks) Mkwhen_types_blocks (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_TYPES_BLOCKS_O: root of subtree no. 1 can not be made a when_types_blocks node ", 0, _coordref);
_currn->_desc2 = (_TSPwhen_types_block) Mkwhen_types_block (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_TYPES_BLOCKS_O: root of subtree no. 2 can not be made a when_types_block node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_TYPES_BLOCKS_O;
return ( (NODEPTR) _currn);
}/* MkWHEN_TYPES_BLOCKS_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CASE_STATEMENT_ATT_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPE_CASE_STATEMENT_ATT_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPE_CASE_STATEMENT_ATT_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CASE_STATEMENT_ATT_O;
#else
_currn = (_TPPTYPE_CASE_STATEMENT_ATT_O) TreeNodeAlloc (sizeof (struct _TPTYPE_CASE_STATEMENT_ATT_O));
#endif
_currn->_prod = RULETYPE_CASE_STATEMENT_ATT_O;
_currn->_desc1 = (_TSPattribute_declaration) Mkattribute_declaration (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CASE_STATEMENT_ATT_O: root of subtree no. 1 can not be made a attribute_declaration node ", 0, _coordref);
_currn->_desc2 = (_TSPwhen_types_blocks) Mkwhen_types_blocks (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CASE_STATEMENT_ATT_O: root of subtree no. 2 can not be made a when_types_blocks node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CASE_STATEMENT_ATT_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_CASE_STATEMENT_ATT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CASE_STATEMENT_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPE_CASE_STATEMENT_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPE_CASE_STATEMENT_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CASE_STATEMENT_O;
#else
_currn = (_TPPTYPE_CASE_STATEMENT_O) TreeNodeAlloc (sizeof (struct _TPTYPE_CASE_STATEMENT_O));
#endif
_currn->_prod = RULETYPE_CASE_STATEMENT_O;
_currn->_desc1 = (_TSPname) Mkname (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CASE_STATEMENT_O: root of subtree no. 1 can not be made a name node ", 0, _coordref);
_currn->_desc2 = (_TSPwhen_types_blocks) Mkwhen_types_blocks (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CASE_STATEMENT_O: root of subtree no. 2 can not be made a when_types_blocks node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CASE_STATEMENT_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_CASE_STATEMENT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCASE_LABEL_DES_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkCASE_LABEL_DES_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPCASE_LABEL_DES_O _currn;
#ifdef __cplusplus
_currn = new _TPCASE_LABEL_DES_O;
#else
_currn = (_TPPCASE_LABEL_DES_O) TreeNodeAlloc (sizeof (struct _TPCASE_LABEL_DES_O));
#endif
_currn->_prod = RULECASE_LABEL_DES_O;
_currn->_desc1 = (_TSPdesignator) Mkdesignator (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CASE_LABEL_DES_O: root of subtree no. 1 can not be made a designator node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_CASE_LABEL_DES_O;
return ( (NODEPTR) _currn);
}/* MkCASE_LABEL_DES_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCASE_LABEL_VALUE_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkCASE_LABEL_VALUE_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPCASE_LABEL_VALUE_O _currn;
#ifdef __cplusplus
_currn = new _TPCASE_LABEL_VALUE_O;
#else
_currn = (_TPPCASE_LABEL_VALUE_O) TreeNodeAlloc (sizeof (struct _TPCASE_LABEL_VALUE_O));
#endif
_currn->_prod = RULECASE_LABEL_VALUE_O;
_currn->_desc1 = (_TSPvalue) Mkvalue (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CASE_LABEL_VALUE_O: root of subtree no. 1 can not be made a value node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_CASE_LABEL_VALUE_O;
return ( (NODEPTR) _currn);
}/* MkCASE_LABEL_VALUE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLABEL_RANGE_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkLABEL_RANGE_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPLABEL_RANGE_O _currn;
#ifdef __cplusplus
_currn = new _TPLABEL_RANGE_O;
#else
_currn = (_TPPLABEL_RANGE_O) TreeNodeAlloc (sizeof (struct _TPLABEL_RANGE_O));
#endif
_currn->_prod = RULELABEL_RANGE_O;
_currn->_desc1 = (_TSPcase_label) Mkcase_label (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LABEL_RANGE_O: root of subtree no. 1 can not be made a case_label node ", 0, _coordref);
_currn->_desc2 = (_TSPcase_label) Mkcase_label (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE LABEL_RANGE_O: root of subtree no. 2 can not be made a case_label node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_LABEL_RANGE_O;
return ( (NODEPTR) _currn);
}/* MkLABEL_RANGE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLABEL_RANGE_SINGLE_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkLABEL_RANGE_SINGLE_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPLABEL_RANGE_SINGLE_O _currn;
#ifdef __cplusplus
_currn = new _TPLABEL_RANGE_SINGLE_O;
#else
_currn = (_TPPLABEL_RANGE_SINGLE_O) TreeNodeAlloc (sizeof (struct _TPLABEL_RANGE_SINGLE_O));
#endif
_currn->_prod = RULELABEL_RANGE_SINGLE_O;
_currn->_desc1 = (_TSPcase_label) Mkcase_label (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LABEL_RANGE_SINGLE_O: root of subtree no. 1 can not be made a case_label node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_LABEL_RANGE_SINGLE_O;
return ( (NODEPTR) _currn);
}/* MkLABEL_RANGE_SINGLE_O */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _Mklabel_rangeLABEL_LIST_O (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _Mklabel_rangeLABEL_LIST_O (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_label_rangeLABEL_LIST_O _new;
#ifdef __cplusplus
	_new = new _TPLST_label_rangeLABEL_LIST_O;
#else
	_new = (_TPPLST_label_rangeLABEL_LIST_O) TreeNodeAlloc (sizeof (struct _TPLST_label_rangeLABEL_LIST_O));
#endif
	_new->_prod = RULELST_label_rangeLABEL_LIST_O;
	_new->_desc1 = (_TSPlabel_range)elem;
	_new->_desc2 = (_TSPLST_label_list)_new;
	{_TPPLST_label_rangeLABEL_LIST_O _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_label_rangeLABEL_LIST_O;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemLABEL_LIST_O (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemLABEL_LIST_O (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBqualification)) 
		return _Mklabel_rangeLABEL_LIST_O (_coordref, Mklabel_range (_coordref, t));
	if (IsSymb (t, SYMBstd_method_call)) 
		return _Mklabel_rangeLABEL_LIST_O (_coordref, Mklabel_range (_coordref, t));
	if (IsSymb (t, SYMBobj_id_use)) 
		return _Mklabel_rangeLABEL_LIST_O (_coordref, Mklabel_range (_coordref, t));
	if (IsSymb (t, SYMBname)) 
		return _Mklabel_rangeLABEL_LIST_O (_coordref, Mklabel_range (_coordref, t));
	if (IsSymb (t, SYMBstringconstant)) 
		return _Mklabel_rangeLABEL_LIST_O (_coordref, Mklabel_range (_coordref, t));
	if (IsSymb (t, SYMBstringconstants)) 
		return _Mklabel_rangeLABEL_LIST_O (_coordref, Mklabel_range (_coordref, t));
	if (IsSymb (t, SYMBvalue)) 
		return _Mklabel_rangeLABEL_LIST_O (_coordref, Mklabel_range (_coordref, t));
	if (IsSymb (t, SYMBdesignator)) 
		return _Mklabel_rangeLABEL_LIST_O (_coordref, Mklabel_range (_coordref, t));
	if (IsSymb (t, SYMBcase_label)) 
		return _Mklabel_rangeLABEL_LIST_O (_coordref, Mklabel_range (_coordref, t));
	if (IsSymb (t, SYMBlabel_range)) 
		return _Mklabel_rangeLABEL_LIST_O (_coordref, Mklabel_range (_coordref, t));
	message (DEADLY, "a LABEL_LIST_O list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2LABEL_LIST_O (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2LABEL_LIST_O (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_label_list)
	l =_ElemLABEL_LIST_O (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_label_list)
	r = _ElemLABEL_LIST_O (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0LABEL_LIST_O)r)->_desc2);
((_TPPLST_0LABEL_LIST_O)r)->_desc2 = ((_TPPLST_0LABEL_LIST_O)l)->_desc2;
((_TPPLST_0LABEL_LIST_O)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLABEL_LIST_O (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkLABEL_LIST_O (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPLABEL_LIST_O root;
	_TPPLST_0LABEL_LIST_O list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0LABEL_LIST_O)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_label_list)
		t = _ElemLABEL_LIST_O (_coordref, t);
	remain = (_TPPLST_0LABEL_LIST_O)(((_TPPLST_0LABEL_LIST_O) t)->_desc2);
	((_TPPLST_0LABEL_LIST_O) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0LABEL_LIST_O;
#else
list = (_TPPLST_0LABEL_LIST_O) TreeNodeAlloc (sizeof (struct _TPLST_0LABEL_LIST_O));
#endif
list->_prod = RULELST_0LABEL_LIST_O;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0LABEL_LIST_O)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_label_rangeLABEL_LIST_O)
	{_TPPLST_label_rangeLABEL_LIST_O _currn = _currn;
	 _TERMACT_LST_label_rangeLABEL_LIST_O;
	} this code has been moved to _ElemLABEL_LIST_O*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPLABEL_LIST_O;
#else
root = (_TPPLABEL_LIST_O) TreeNodeAlloc (sizeof (struct _TPLABEL_LIST_O));
#endif
root->_prod = RULELABEL_LIST_O;
root->_desc1 = (_TSPLST_label_list)list;
{ _TPPLABEL_LIST_O _currn = root;
  _SETCOORD(_currn)
  _TERMACT_LABEL_LIST_O;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_LABEL_STMT_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_LABEL_STMT_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_LABEL_STMT_O _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_LABEL_STMT_O;
#else
_currn = (_TPPWHEN_LABEL_STMT_O) TreeNodeAlloc (sizeof (struct _TPWHEN_LABEL_STMT_O));
#endif
_currn->_prod = RULEWHEN_LABEL_STMT_O;
_currn->_desc1 = (_TSPlabel_list) Mklabel_list (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_LABEL_STMT_O: root of subtree no. 1 can not be made a label_list node ", 0, _coordref);
_currn->_desc2 = (_TSPblock) Mkblock (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_LABEL_STMT_O: root of subtree no. 2 can not be made a block node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_LABEL_STMT_O;
return ( (NODEPTR) _currn);
}/* MkWHEN_LABEL_STMT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_LABEL_STMTS_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkWHEN_LABEL_STMTS_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPWHEN_LABEL_STMTS_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_LABEL_STMTS_EMPTY_O;
#else
_currn = (_TPPWHEN_LABEL_STMTS_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPWHEN_LABEL_STMTS_EMPTY_O));
#endif
_currn->_prod = RULEWHEN_LABEL_STMTS_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_WHEN_LABEL_STMTS_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkWHEN_LABEL_STMTS_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_LABEL_STMTS_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_LABEL_STMTS_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_LABEL_STMTS_O _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_LABEL_STMTS_O;
#else
_currn = (_TPPWHEN_LABEL_STMTS_O) TreeNodeAlloc (sizeof (struct _TPWHEN_LABEL_STMTS_O));
#endif
_currn->_prod = RULEWHEN_LABEL_STMTS_O;
_currn->_desc1 = (_TSPwhen_label_stmts) Mkwhen_label_stmts (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_LABEL_STMTS_O: root of subtree no. 1 can not be made a when_label_stmts node ", 0, _coordref);
_currn->_desc2 = (_TSPwhen_label_stmt) Mkwhen_label_stmt (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_LABEL_STMTS_O: root of subtree no. 2 can not be made a when_label_stmt node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_LABEL_STMTS_O;
return ( (NODEPTR) _currn);
}/* MkWHEN_LABEL_STMTS_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCASE_STATEMENT_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCASE_STATEMENT_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCASE_STATEMENT_O _currn;
#ifdef __cplusplus
_currn = new _TPCASE_STATEMENT_O;
#else
_currn = (_TPPCASE_STATEMENT_O) TreeNodeAlloc (sizeof (struct _TPCASE_STATEMENT_O));
#endif
_currn->_prod = RULECASE_STATEMENT_O;
_currn->_desc1 = (_TSPexpression) Mkexpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CASE_STATEMENT_O: root of subtree no. 1 can not be made a expression node ", 0, _coordref);
_currn->_desc2 = (_TSPwhen_label_stmts) Mkwhen_label_stmts (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CASE_STATEMENT_O: root of subtree no. 2 can not be made a when_label_stmts node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CASE_STATEMENT_O;
return ( (NODEPTR) _currn);
}/* MkCASE_STATEMENT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCOND_STATEMENT_ELSE_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkCOND_STATEMENT_ELSE_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPCOND_STATEMENT_ELSE_O _currn;
#ifdef __cplusplus
_currn = new _TPCOND_STATEMENT_ELSE_O;
#else
_currn = (_TPPCOND_STATEMENT_ELSE_O) TreeNodeAlloc (sizeof (struct _TPCOND_STATEMENT_ELSE_O));
#endif
_currn->_prod = RULECOND_STATEMENT_ELSE_O;
_currn->_desc1 = (_TSPblock) Mkblock (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE COND_STATEMENT_ELSE_O: root of subtree no. 1 can not be made a block node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_COND_STATEMENT_ELSE_O;
return ( (NODEPTR) _currn);
}/* MkCOND_STATEMENT_ELSE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCOND_STATEMENT_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkCOND_STATEMENT_O (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPCOND_STATEMENT_O _currn;
#ifdef __cplusplus
_currn = new _TPCOND_STATEMENT_O;
#else
_currn = (_TPPCOND_STATEMENT_O) TreeNodeAlloc (sizeof (struct _TPCOND_STATEMENT_O));
#endif
_currn->_prod = RULECOND_STATEMENT_O;
_currn->_desc1 = (_TSPexpression) Mkexpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE COND_STATEMENT_O: root of subtree no. 1 can not be made a expression node ", 0, _coordref);
_currn->_desc2 = (_TSPblock) Mkblock (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE COND_STATEMENT_O: root of subtree no. 2 can not be made a block node ", 0, _coordref);
_currn->_desc3 = (_TSPconditional_statement) Mkconditional_statement (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE COND_STATEMENT_O: root of subtree no. 3 can not be made a conditional_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_COND_STATEMENT_O;
return ( (NODEPTR) _currn);
}/* MkCOND_STATEMENT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXCEPTION_TYPES_LST_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkEXCEPTION_TYPES_LST_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPEXCEPTION_TYPES_LST_O _currn;
#ifdef __cplusplus
_currn = new _TPEXCEPTION_TYPES_LST_O;
#else
_currn = (_TPPEXCEPTION_TYPES_LST_O) TreeNodeAlloc (sizeof (struct _TPEXCEPTION_TYPES_LST_O));
#endif
_currn->_prod = RULEEXCEPTION_TYPES_LST_O;
_currn->_desc1 = (_TSPexception_types) Mkexception_types (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXCEPTION_TYPES_LST_O: root of subtree no. 1 can not be made a exception_types node ", 0, _coordref);
_currn->_desc2 = (_TSPtype_specifier) Mktype_specifier (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE EXCEPTION_TYPES_LST_O: root of subtree no. 2 can not be made a type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_EXCEPTION_TYPES_LST_O;
return ( (NODEPTR) _currn);
}/* MkEXCEPTION_TYPES_LST_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXCEPTION_TYPES_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkEXCEPTION_TYPES_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPEXCEPTION_TYPES_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPEXCEPTION_TYPES_EMPTY_O;
#else
_currn = (_TPPEXCEPTION_TYPES_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPEXCEPTION_TYPES_EMPTY_O));
#endif
_currn->_prod = RULEEXCEPTION_TYPES_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_EXCEPTION_TYPES_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkEXCEPTION_TYPES_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_EXCEPTION_STMT_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_EXCEPTION_STMT_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_EXCEPTION_STMT_O _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_EXCEPTION_STMT_O;
#else
_currn = (_TPPWHEN_EXCEPTION_STMT_O) TreeNodeAlloc (sizeof (struct _TPWHEN_EXCEPTION_STMT_O));
#endif
_currn->_prod = RULEWHEN_EXCEPTION_STMT_O;
_currn->_desc1 = (_TSPexception_types) Mkexception_types (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_EXCEPTION_STMT_O: root of subtree no. 1 can not be made a exception_types node ", 0, _coordref);
_currn->_desc2 = (_TSPblock) Mkblock (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_EXCEPTION_STMT_O: root of subtree no. 2 can not be made a block node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_EXCEPTION_STMT_O;
return ( (NODEPTR) _currn);
}/* MkWHEN_EXCEPTION_STMT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_EXCEPTION_STMTS_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkWHEN_EXCEPTION_STMTS_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPWHEN_EXCEPTION_STMTS_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_EXCEPTION_STMTS_EMPTY_O;
#else
_currn = (_TPPWHEN_EXCEPTION_STMTS_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPWHEN_EXCEPTION_STMTS_EMPTY_O));
#endif
_currn->_prod = RULEWHEN_EXCEPTION_STMTS_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_WHEN_EXCEPTION_STMTS_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkWHEN_EXCEPTION_STMTS_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_EXCEPTION_STMTS_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_EXCEPTION_STMTS_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_EXCEPTION_STMTS_O _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_EXCEPTION_STMTS_O;
#else
_currn = (_TPPWHEN_EXCEPTION_STMTS_O) TreeNodeAlloc (sizeof (struct _TPWHEN_EXCEPTION_STMTS_O));
#endif
_currn->_prod = RULEWHEN_EXCEPTION_STMTS_O;
_currn->_desc1 = (_TSPwhen_exception_stmts) Mkwhen_exception_stmts (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_EXCEPTION_STMTS_O: root of subtree no. 1 can not be made a when_exception_stmts node ", 0, _coordref);
_currn->_desc2 = (_TSPwhen_exception_stmt) Mkwhen_exception_stmt (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_EXCEPTION_STMTS_O: root of subtree no. 2 can not be made a when_exception_stmt node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_EXCEPTION_STMTS_O;
return ( (NODEPTR) _currn);
}/* MkWHEN_EXCEPTION_STMTS_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXCEPTIONS_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkEXCEPTIONS_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPEXCEPTIONS_O _currn;
#ifdef __cplusplus
_currn = new _TPEXCEPTIONS_O;
#else
_currn = (_TPPEXCEPTIONS_O) TreeNodeAlloc (sizeof (struct _TPEXCEPTIONS_O));
#endif
_currn->_prod = RULEEXCEPTIONS_O;
_currn->_desc1 = (_TSPident_def) Mkident_def (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXCEPTIONS_O: root of subtree no. 1 can not be made a ident_def node ", 0, _coordref);
_currn->_desc2 = (_TSPwhen_exception_stmts) Mkwhen_exception_stmts (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE EXCEPTIONS_O: root of subtree no. 2 can not be made a when_exception_stmts node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_EXCEPTIONS_O;
return ( (NODEPTR) _currn);
}/* MkEXCEPTIONS_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXCEPTIONS_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkEXCEPTIONS_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPEXCEPTIONS_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPEXCEPTIONS_EMPTY_O;
#else
_currn = (_TPPEXCEPTIONS_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPEXCEPTIONS_EMPTY_O));
#endif
_currn->_prod = RULEEXCEPTIONS_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_EXCEPTIONS_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkEXCEPTIONS_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBEGIN_BLOCK_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkBEGIN_BLOCK_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPBEGIN_BLOCK_O _currn;
#ifdef __cplusplus
_currn = new _TPBEGIN_BLOCK_O;
#else
_currn = (_TPPBEGIN_BLOCK_O) TreeNodeAlloc (sizeof (struct _TPBEGIN_BLOCK_O));
#endif
_currn->_prod = RULEBEGIN_BLOCK_O;
_currn->_desc1 = (_TSPblock) Mkblock (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BEGIN_BLOCK_O: root of subtree no. 1 can not be made a block node ", 0, _coordref);
_currn->_desc2 = (_TSPexceptions) Mkexceptions (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE BEGIN_BLOCK_O: root of subtree no. 2 can not be made a exceptions node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_BEGIN_BLOCK_O;
return ( (NODEPTR) _currn);
}/* MkBEGIN_BLOCK_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkASSIGNMENT_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkASSIGNMENT_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPASSIGNMENT_O _currn;
#ifdef __cplusplus
_currn = new _TPASSIGNMENT_O;
#else
_currn = (_TPPASSIGNMENT_O) TreeNodeAlloc (sizeof (struct _TPASSIGNMENT_O));
#endif
_currn->_prod = RULEASSIGNMENT_O;
_currn->_desc1 = (_TSPname) Mkname (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ASSIGNMENT_O: root of subtree no. 1 can not be made a name node ", 0, _coordref);
_currn->_desc2 = (_TSPexpression) Mkexpression (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ASSIGNMENT_O: root of subtree no. 2 can not be made a expression node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ASSIGNMENT_O;
return ( (NODEPTR) _currn);
}/* MkASSIGNMENT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_ASSERT_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_ASSERT_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_ASSERT_O _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_ASSERT_O;
#else
_currn = (_TPPSTATEMENTS_ASSERT_O) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_ASSERT_O));
#endif
_currn->_prod = RULESTATEMENTS_ASSERT_O;
_currn->_desc1 = (_TSPstatements) Mkstatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_ASSERT_O: root of subtree no. 1 can not be made a statements node ", 0, _coordref);
_currn->_desc2 = (_TSPassertion_statement) Mkassertion_statement (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_ASSERT_O: root of subtree no. 2 can not be made a assertion_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_ASSERT_O;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_ASSERT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_RAISE_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_RAISE_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_RAISE_O _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_RAISE_O;
#else
_currn = (_TPPSTATEMENTS_RAISE_O) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_RAISE_O));
#endif
_currn->_prod = RULESTATEMENTS_RAISE_O;
_currn->_desc1 = (_TSPstatements) Mkstatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RAISE_O: root of subtree no. 1 can not be made a statements node ", 0, _coordref);
_currn->_desc2 = (_TSPraise_statement) Mkraise_statement (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RAISE_O: root of subtree no. 2 can not be made a raise_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_RAISE_O;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_RAISE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_RETURN_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_RETURN_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_RETURN_O _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_RETURN_O;
#else
_currn = (_TPPSTATEMENTS_RETURN_O) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_RETURN_O));
#endif
_currn->_prod = RULESTATEMENTS_RETURN_O;
_currn->_desc1 = (_TSPstatements) Mkstatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RETURN_O: root of subtree no. 1 can not be made a statements node ", 0, _coordref);
_currn->_desc2 = (_TSPreturn_statement) Mkreturn_statement (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RETURN_O: root of subtree no. 2 can not be made a return_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_RETURN_O;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_RETURN_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_RESUME_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_RESUME_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_RESUME_O _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_RESUME_O;
#else
_currn = (_TPPSTATEMENTS_RESUME_O) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_RESUME_O));
#endif
_currn->_prod = RULESTATEMENTS_RESUME_O;
_currn->_desc1 = (_TSPstatements) Mkstatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RESUME_O: root of subtree no. 1 can not be made a statements node ", 0, _coordref);
_currn->_desc2 = (_TSPresume_statement) Mkresume_statement (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RESUME_O: root of subtree no. 2 can not be made a resume_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_RESUME_O;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_RESUME_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_EXP_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_EXP_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_EXP_O _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_EXP_O;
#else
_currn = (_TPPSTATEMENTS_EXP_O) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_EXP_O));
#endif
_currn->_prod = RULESTATEMENTS_EXP_O;
_currn->_desc1 = (_TSPstatements) Mkstatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_EXP_O: root of subtree no. 1 can not be made a statements node ", 0, _coordref);
_currn->_desc2 = (_TSPexpression) Mkexpression (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_EXP_O: root of subtree no. 2 can not be made a expression node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_EXP_O;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_EXP_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_BREAK_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_BREAK_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_BREAK_O _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_BREAK_O;
#else
_currn = (_TPPSTATEMENTS_BREAK_O) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_BREAK_O));
#endif
_currn->_prod = RULESTATEMENTS_BREAK_O;
_currn->_desc1 = (_TSPstatements) Mkstatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_BREAK_O: root of subtree no. 1 can not be made a statements node ", 0, _coordref);
_currn->_desc2 = (_TSPbreak_statement) Mkbreak_statement (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_BREAK_O: root of subtree no. 2 can not be made a break_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_BREAK_O;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_BREAK_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_LOOP_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_LOOP_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_LOOP_O _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_LOOP_O;
#else
_currn = (_TPPSTATEMENTS_LOOP_O) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_LOOP_O));
#endif
_currn->_prod = RULESTATEMENTS_LOOP_O;
_currn->_desc1 = (_TSPstatements) Mkstatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_LOOP_O: root of subtree no. 1 can not be made a statements node ", 0, _coordref);
_currn->_desc2 = (_TSPloop) Mkloop (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_LOOP_O: root of subtree no. 2 can not be made a loop node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_LOOP_O;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_LOOP_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_TYPE_CASE_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_TYPE_CASE_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_TYPE_CASE_O _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_TYPE_CASE_O;
#else
_currn = (_TPPSTATEMENTS_TYPE_CASE_O) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_TYPE_CASE_O));
#endif
_currn->_prod = RULESTATEMENTS_TYPE_CASE_O;
_currn->_desc1 = (_TSPstatements) Mkstatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_TYPE_CASE_O: root of subtree no. 1 can not be made a statements node ", 0, _coordref);
_currn->_desc2 = (_TSPtype_case_statement) Mktype_case_statement (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_TYPE_CASE_O: root of subtree no. 2 can not be made a type_case_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_TYPE_CASE_O;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_TYPE_CASE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_CASE_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_CASE_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_CASE_O _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_CASE_O;
#else
_currn = (_TPPSTATEMENTS_CASE_O) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_CASE_O));
#endif
_currn->_prod = RULESTATEMENTS_CASE_O;
_currn->_desc1 = (_TSPstatements) Mkstatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_CASE_O: root of subtree no. 1 can not be made a statements node ", 0, _coordref);
_currn->_desc2 = (_TSPcase_statement) Mkcase_statement (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_CASE_O: root of subtree no. 2 can not be made a case_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_CASE_O;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_CASE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_COND_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_COND_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_COND_O _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_COND_O;
#else
_currn = (_TPPSTATEMENTS_COND_O) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_COND_O));
#endif
_currn->_prod = RULESTATEMENTS_COND_O;
_currn->_desc1 = (_TSPstatements) Mkstatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_COND_O: root of subtree no. 1 can not be made a statements node ", 0, _coordref);
_currn->_desc2 = (_TSPconditional_statement) Mkconditional_statement (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_COND_O: root of subtree no. 2 can not be made a conditional_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_COND_O;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_COND_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_BEGIN_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_BEGIN_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_BEGIN_O _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_BEGIN_O;
#else
_currn = (_TPPSTATEMENTS_BEGIN_O) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_BEGIN_O));
#endif
_currn->_prod = RULESTATEMENTS_BEGIN_O;
_currn->_desc1 = (_TSPstatements) Mkstatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_BEGIN_O: root of subtree no. 1 can not be made a statements node ", 0, _coordref);
_currn->_desc2 = (_TSPbegin_block) Mkbegin_block (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_BEGIN_O: root of subtree no. 2 can not be made a begin_block node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_BEGIN_O;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_BEGIN_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_ASSIGN_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_ASSIGN_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_ASSIGN_O _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_ASSIGN_O;
#else
_currn = (_TPPSTATEMENTS_ASSIGN_O) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_ASSIGN_O));
#endif
_currn->_prod = RULESTATEMENTS_ASSIGN_O;
_currn->_desc1 = (_TSPstatements) Mkstatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_ASSIGN_O: root of subtree no. 1 can not be made a statements node ", 0, _coordref);
_currn->_desc2 = (_TSPassignment) Mkassignment (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_ASSIGN_O: root of subtree no. 2 can not be made a assignment node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_ASSIGN_O;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_ASSIGN_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkSTATEMENTS_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPSTATEMENTS_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_EMPTY_O;
#else
_currn = (_TPPSTATEMENTS_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_EMPTY_O));
#endif
_currn->_prod = RULESTATEMENTS_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_STATEMENTS_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOCAL_STREAM_DECL_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkLOCAL_STREAM_DECL_O (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPLOCAL_STREAM_DECL_O _currn;
#ifdef __cplusplus
_currn = new _TPLOCAL_STREAM_DECL_O;
#else
_currn = (_TPPLOCAL_STREAM_DECL_O) TreeNodeAlloc (sizeof (struct _TPLOCAL_STREAM_DECL_O));
#endif
_currn->_prod = RULELOCAL_STREAM_DECL_O;
_currn->_desc1 = (_TSPident_def) Mkident_def (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_STREAM_DECL_O: root of subtree no. 1 can not be made a ident_def node ", 0, _coordref);
_currn->_desc2 = (_TSPmethod_specification) Mkmethod_specification (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_STREAM_DECL_O: root of subtree no. 2 can not be made a method_specification node ", 0, _coordref);
_currn->_desc3 = (_TSPbound_method) Mkbound_method (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_STREAM_DECL_O: root of subtree no. 3 can not be made a bound_method node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_LOCAL_STREAM_DECL_O;
return ( (NODEPTR) _currn);
}/* MkLOCAL_STREAM_DECL_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOCAL_DECLS_STREAM_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkLOCAL_DECLS_STREAM_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPLOCAL_DECLS_STREAM_O _currn;
#ifdef __cplusplus
_currn = new _TPLOCAL_DECLS_STREAM_O;
#else
_currn = (_TPPLOCAL_DECLS_STREAM_O) TreeNodeAlloc (sizeof (struct _TPLOCAL_DECLS_STREAM_O));
#endif
_currn->_prod = RULELOCAL_DECLS_STREAM_O;
_currn->_desc1 = (_TSPlocal_declarations) Mklocal_declarations (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_DECLS_STREAM_O: root of subtree no. 1 can not be made a local_declarations node ", 0, _coordref);
_currn->_desc2 = (_TSPlocal_stream_declaration) Mklocal_stream_declaration (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_DECLS_STREAM_O: root of subtree no. 2 can not be made a local_stream_declaration node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_LOCAL_DECLS_STREAM_O;
return ( (NODEPTR) _currn);
}/* MkLOCAL_DECLS_STREAM_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOCAL_DECLS_ATT_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkLOCAL_DECLS_ATT_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPLOCAL_DECLS_ATT_O _currn;
#ifdef __cplusplus
_currn = new _TPLOCAL_DECLS_ATT_O;
#else
_currn = (_TPPLOCAL_DECLS_ATT_O) TreeNodeAlloc (sizeof (struct _TPLOCAL_DECLS_ATT_O));
#endif
_currn->_prod = RULELOCAL_DECLS_ATT_O;
_currn->_desc1 = (_TSPlocal_declarations) Mklocal_declarations (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_DECLS_ATT_O: root of subtree no. 1 can not be made a local_declarations node ", 0, _coordref);
_currn->_desc2 = (_TSPattribute_declaration) Mkattribute_declaration (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_DECLS_ATT_O: root of subtree no. 2 can not be made a attribute_declaration node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_LOCAL_DECLS_ATT_O;
return ( (NODEPTR) _currn);
}/* MkLOCAL_DECLS_ATT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOCAL_DECLS_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkLOCAL_DECLS_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPLOCAL_DECLS_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPLOCAL_DECLS_EMPTY_O;
#else
_currn = (_TPPLOCAL_DECLS_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPLOCAL_DECLS_EMPTY_O));
#endif
_currn->_prod = RULELOCAL_DECLS_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_LOCAL_DECLS_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkLOCAL_DECLS_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBLOCK_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkBLOCK_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPBLOCK_O _currn;
#ifdef __cplusplus
_currn = new _TPBLOCK_O;
#else
_currn = (_TPPBLOCK_O) TreeNodeAlloc (sizeof (struct _TPBLOCK_O));
#endif
_currn->_prod = RULEBLOCK_O;
_currn->_desc1 = (_TSPlocal_declarations) Mklocal_declarations (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BLOCK_O: root of subtree no. 1 can not be made a local_declarations node ", 0, _coordref);
_currn->_desc2 = (_TSPstatements) Mkstatements (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE BLOCK_O: root of subtree no. 2 can not be made a statements node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_BLOCK_O;
return ( (NODEPTR) _currn);
}/* MkBLOCK_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_INST_CLRTYPE_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkBUILTIN_INST_CLRTYPE_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPBUILTIN_INST_CLRTYPE_O _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_INST_CLRTYPE_O;
#else
_currn = (_TPPBUILTIN_INST_CLRTYPE_O) TreeNodeAlloc (sizeof (struct _TPBUILTIN_INST_CLRTYPE_O));
#endif
_currn->_prod = RULEBUILTIN_INST_CLRTYPE_O;
_currn->_desc1 = (_TSPtype_specifier) Mktype_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BUILTIN_INST_CLRTYPE_O: root of subtree no. 1 can not be made a type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_BUILTIN_INST_CLRTYPE_O;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_INST_CLRTYPE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_INST_TYPE_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkBUILTIN_INST_TYPE_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPBUILTIN_INST_TYPE_O _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_INST_TYPE_O;
#else
_currn = (_TPPBUILTIN_INST_TYPE_O) TreeNodeAlloc (sizeof (struct _TPBUILTIN_INST_TYPE_O));
#endif
_currn->_prod = RULEBUILTIN_INST_TYPE_O;
_currn->_desc1 = (_TSPtype_specifier) Mktype_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BUILTIN_INST_TYPE_O: root of subtree no. 1 can not be made a type_specifier node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_BUILTIN_INST_TYPE_O;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_INST_TYPE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_INST_STR_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkBUILTIN_INST_STR_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPBUILTIN_INST_STR_O _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_INST_STR_O;
#else
_currn = (_TPPBUILTIN_INST_STR_O) TreeNodeAlloc (sizeof (struct _TPBUILTIN_INST_STR_O));
#endif
_currn->_prod = RULEBUILTIN_INST_STR_O;
_SETCOORD(_currn)
_TERMACT_BUILTIN_INST_STR_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "stringconst", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkBUILTIN_INST_STR_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_INSTS_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkBUILTIN_INSTS_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPBUILTIN_INSTS_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_INSTS_EMPTY_O;
#else
_currn = (_TPPBUILTIN_INSTS_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPBUILTIN_INSTS_EMPTY_O));
#endif
_currn->_prod = RULEBUILTIN_INSTS_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_BUILTIN_INSTS_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_INSTS_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_INSTS_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkBUILTIN_INSTS_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPBUILTIN_INSTS_O _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_INSTS_O;
#else
_currn = (_TPPBUILTIN_INSTS_O) TreeNodeAlloc (sizeof (struct _TPBUILTIN_INSTS_O));
#endif
_currn->_prod = RULEBUILTIN_INSTS_O;
_currn->_desc1 = (_TSPbuiltin_instructions) Mkbuiltin_instructions (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BUILTIN_INSTS_O: root of subtree no. 1 can not be made a builtin_instructions node ", 0, _coordref);
_currn->_desc2 = (_TSPbuiltin_instruction) Mkbuiltin_instruction (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE BUILTIN_INSTS_O: root of subtree no. 2 can not be made a builtin_instruction node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_BUILTIN_INSTS_O;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_INSTS_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_BODY_STATIC_BUILTIN_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkMETHOD_BODY_STATIC_BUILTIN_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPMETHOD_BODY_STATIC_BUILTIN_O _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_BODY_STATIC_BUILTIN_O;
#else
_currn = (_TPPMETHOD_BODY_STATIC_BUILTIN_O) TreeNodeAlloc (sizeof (struct _TPMETHOD_BODY_STATIC_BUILTIN_O));
#endif
_currn->_prod = RULEMETHOD_BODY_STATIC_BUILTIN_O;
_currn->_desc1 = (_TSPbuiltin_instructions) Mkbuiltin_instructions (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_BODY_STATIC_BUILTIN_O: root of subtree no. 1 can not be made a builtin_instructions node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_METHOD_BODY_STATIC_BUILTIN_O;
return ( (NODEPTR) _currn);
}/* MkMETHOD_BODY_STATIC_BUILTIN_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_BODY_BUILTIN_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkMETHOD_BODY_BUILTIN_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPMETHOD_BODY_BUILTIN_O _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_BODY_BUILTIN_O;
#else
_currn = (_TPPMETHOD_BODY_BUILTIN_O) TreeNodeAlloc (sizeof (struct _TPMETHOD_BODY_BUILTIN_O));
#endif
_currn->_prod = RULEMETHOD_BODY_BUILTIN_O;
_currn->_desc1 = (_TSPbuiltin_instructions) Mkbuiltin_instructions (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_BODY_BUILTIN_O: root of subtree no. 1 can not be made a builtin_instructions node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_METHOD_BODY_BUILTIN_O;
return ( (NODEPTR) _currn);
}/* MkMETHOD_BODY_BUILTIN_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLINKER_SYMBOL_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkLINKER_SYMBOL_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPLINKER_SYMBOL_O _currn;
#ifdef __cplusplus
_currn = new _TPLINKER_SYMBOL_O;
#else
_currn = (_TPPLINKER_SYMBOL_O) TreeNodeAlloc (sizeof (struct _TPLINKER_SYMBOL_O));
#endif
_currn->_prod = RULELINKER_SYMBOL_O;
_SETCOORD(_currn)
_TERMACT_LINKER_SYMBOL_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "stringconst", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkLINKER_SYMBOL_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLINKER_SYMBOL_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkLINKER_SYMBOL_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPLINKER_SYMBOL_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPLINKER_SYMBOL_EMPTY_O;
#else
_currn = (_TPPLINKER_SYMBOL_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPLINKER_SYMBOL_EMPTY_O));
#endif
_currn->_prod = RULELINKER_SYMBOL_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_LINKER_SYMBOL_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkLINKER_SYMBOL_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFOREIGN_LANGUAGE_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkFOREIGN_LANGUAGE_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPFOREIGN_LANGUAGE_O _currn;
#ifdef __cplusplus
_currn = new _TPFOREIGN_LANGUAGE_O;
#else
_currn = (_TPPFOREIGN_LANGUAGE_O) TreeNodeAlloc (sizeof (struct _TPFOREIGN_LANGUAGE_O));
#endif
_currn->_prod = RULEFOREIGN_LANGUAGE_O;
_SETCOORD(_currn)
_TERMACT_FOREIGN_LANGUAGE_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkFOREIGN_LANGUAGE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_BODY_FOREIGN_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkMETHOD_BODY_FOREIGN_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPMETHOD_BODY_FOREIGN_O _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_BODY_FOREIGN_O;
#else
_currn = (_TPPMETHOD_BODY_FOREIGN_O) TreeNodeAlloc (sizeof (struct _TPMETHOD_BODY_FOREIGN_O));
#endif
_currn->_prod = RULEMETHOD_BODY_FOREIGN_O;
_currn->_desc1 = (_TSPforeign_language) Mkforeign_language (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_BODY_FOREIGN_O: root of subtree no. 1 can not be made a foreign_language node ", 0, _coordref);
_currn->_desc2 = (_TSPlinker_symbol) Mklinker_symbol (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_BODY_FOREIGN_O: root of subtree no. 2 can not be made a linker_symbol node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_METHOD_BODY_FOREIGN_O;
return ( (NODEPTR) _currn);
}/* MkMETHOD_BODY_FOREIGN_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_BODY_AB_O (POSITION *_coordref)
#else
NODEPTR MkMETHOD_BODY_AB_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPMETHOD_BODY_AB_O _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_BODY_AB_O;
#else
_currn = (_TPPMETHOD_BODY_AB_O) TreeNodeAlloc (sizeof (struct _TPMETHOD_BODY_AB_O));
#endif
_currn->_prod = RULEMETHOD_BODY_AB_O;
_SETCOORD(_currn)
_TERMACT_METHOD_BODY_AB_O;
return ( (NODEPTR) _currn);
}/* MkMETHOD_BODY_AB_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_BODY_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkMETHOD_BODY_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPMETHOD_BODY_O _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_BODY_O;
#else
_currn = (_TPPMETHOD_BODY_O) TreeNodeAlloc (sizeof (struct _TPMETHOD_BODY_O));
#endif
_currn->_prod = RULEMETHOD_BODY_O;
_currn->_desc1 = (_TSPblock) Mkblock (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_BODY_O: root of subtree no. 1 can not be made a block node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_METHOD_BODY_O;
return ( (NODEPTR) _currn);
}/* MkMETHOD_BODY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_SPEC_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkPARAMETER_SPEC_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPPARAMETER_SPEC_O _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_SPEC_O;
#else
_currn = (_TPPPARAMETER_SPEC_O) TreeNodeAlloc (sizeof (struct _TPPARAMETER_SPEC_O));
#endif
_currn->_prod = RULEPARAMETER_SPEC_O;
_currn->_desc1 = (_TSPparameter_kind) Mkparameter_kind (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE PARAMETER_SPEC_O: root of subtree no. 1 can not be made a parameter_kind node ", 0, _coordref);
_currn->_desc2 = (_TSPattribute_specification) Mkattribute_specification (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE PARAMETER_SPEC_O: root of subtree no. 2 can not be made a attribute_specification node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_PARAMETER_SPEC_O;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_SPEC_O */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _Mkparameter_specificationPARAMETERS_O (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _Mkparameter_specificationPARAMETERS_O (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_parameter_specificationPARAMETERS_O _new;
#ifdef __cplusplus
	_new = new _TPLST_parameter_specificationPARAMETERS_O;
#else
	_new = (_TPPLST_parameter_specificationPARAMETERS_O) TreeNodeAlloc (sizeof (struct _TPLST_parameter_specificationPARAMETERS_O));
#endif
	_new->_prod = RULELST_parameter_specificationPARAMETERS_O;
	_new->_desc1 = (_TSPparameter_specification)elem;
	_new->_desc2 = (_TSPLST_parameters)_new;
	{_TPPLST_parameter_specificationPARAMETERS_O _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_parameter_specificationPARAMETERS_O;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemPARAMETERS_O (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemPARAMETERS_O (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBparameter_specification)) 
		return _Mkparameter_specificationPARAMETERS_O (_coordref, Mkparameter_specification (_coordref, t));
	message (DEADLY, "a PARAMETERS_O list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2PARAMETERS_O (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2PARAMETERS_O (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_parameters)
	l =_ElemPARAMETERS_O (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_parameters)
	r = _ElemPARAMETERS_O (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0PARAMETERS_O)r)->_desc2);
((_TPPLST_0PARAMETERS_O)r)->_desc2 = ((_TPPLST_0PARAMETERS_O)l)->_desc2;
((_TPPLST_0PARAMETERS_O)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETERS_O (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkPARAMETERS_O (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPPARAMETERS_O root;
	_TPPLST_0PARAMETERS_O list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0PARAMETERS_O)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_parameters)
		t = _ElemPARAMETERS_O (_coordref, t);
	remain = (_TPPLST_0PARAMETERS_O)(((_TPPLST_0PARAMETERS_O) t)->_desc2);
	((_TPPLST_0PARAMETERS_O) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0PARAMETERS_O;
#else
list = (_TPPLST_0PARAMETERS_O) TreeNodeAlloc (sizeof (struct _TPLST_0PARAMETERS_O));
#endif
list->_prod = RULELST_0PARAMETERS_O;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0PARAMETERS_O)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_parameter_specificationPARAMETERS_O)
	{_TPPLST_parameter_specificationPARAMETERS_O _currn = _currn;
	 _TERMACT_LST_parameter_specificationPARAMETERS_O;
	} this code has been moved to _ElemPARAMETERS_O*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPPARAMETERS_O;
#else
root = (_TPPPARAMETERS_O) TreeNodeAlloc (sizeof (struct _TPPARAMETERS_O));
#endif
root->_prod = RULEPARAMETERS_O;
root->_desc1 = (_TSPLST_parameters)list;
{ _TPPPARAMETERS_O _currn = root;
  _SETCOORD(_currn)
  _TERMACT_PARAMETERS_O;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_IDENT_DEF_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkMETHOD_IDENT_DEF_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPMETHOD_IDENT_DEF_O _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_IDENT_DEF_O;
#else
_currn = (_TPPMETHOD_IDENT_DEF_O) TreeNodeAlloc (sizeof (struct _TPMETHOD_IDENT_DEF_O));
#endif
_currn->_prod = RULEMETHOD_IDENT_DEF_O;
_SETCOORD(_currn)
_TERMACT_METHOD_IDENT_DEF_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkMETHOD_IDENT_DEF_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_DECL_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3, NODEPTR _desc4)
#else
NODEPTR MkMETHOD_DECL_O (_coordref,_desc1,_desc2,_desc3,_desc4)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
	NODEPTR _desc4;
#endif
{	_TPPMETHOD_DECL_O _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_DECL_O;
#else
_currn = (_TPPMETHOD_DECL_O) TreeNodeAlloc (sizeof (struct _TPMETHOD_DECL_O));
#endif
_currn->_prod = RULEMETHOD_DECL_O;
_currn->_desc1 = (_TSPmethod_ident_def) Mkmethod_ident_def (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_DECL_O: root of subtree no. 1 can not be made a method_ident_def node ", 0, _coordref);
_currn->_desc2 = (_TSPparameters) Mkparameters (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_DECL_O: root of subtree no. 2 can not be made a parameters node ", 0, _coordref);
_currn->_desc3 = (_TSPtype_specifier) Mktype_specifier (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_DECL_O: root of subtree no. 3 can not be made a type_specifier node ", 0, _coordref);
_currn->_desc4 = (_TSPmethod_body) Mkmethod_body (_coordref, _desc4);	
if (((NODEPTR)_currn->_desc4) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_DECL_O: root of subtree no. 4 can not be made a method_body node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_METHOD_DECL_O;
return ( (NODEPTR) _currn);
}/* MkMETHOD_DECL_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkIDENTIFIERS_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkIDENTIFIERS_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPIDENTIFIERS_O _currn;
#ifdef __cplusplus
_currn = new _TPIDENTIFIERS_O;
#else
_currn = (_TPPIDENTIFIERS_O) TreeNodeAlloc (sizeof (struct _TPIDENTIFIERS_O));
#endif
_currn->_prod = RULEIDENTIFIERS_O;
_currn->_desc1 = (_TSPident_def) Mkident_def (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE IDENTIFIERS_O: root of subtree no. 1 can not be made a ident_def node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_IDENTIFIERS_O;
return ( (NODEPTR) _currn);
}/* MkIDENTIFIERS_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkIDENTIFIERS_LST_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkIDENTIFIERS_LST_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPIDENTIFIERS_LST_O _currn;
#ifdef __cplusplus
_currn = new _TPIDENTIFIERS_LST_O;
#else
_currn = (_TPPIDENTIFIERS_LST_O) TreeNodeAlloc (sizeof (struct _TPIDENTIFIERS_LST_O));
#endif
_currn->_prod = RULEIDENTIFIERS_LST_O;
_currn->_desc1 = (_TSPidentifiers) Mkidentifiers (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE IDENTIFIERS_LST_O: root of subtree no. 1 can not be made a identifiers node ", 0, _coordref);
_currn->_desc2 = (_TSPident_def) Mkident_def (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE IDENTIFIERS_LST_O: root of subtree no. 2 can not be made a ident_def node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_IDENTIFIERS_LST_O;
return ( (NODEPTR) _currn);
}/* MkIDENTIFIERS_LST_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_SPEC_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkATTR_SPEC_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPATTR_SPEC_O _currn;
#ifdef __cplusplus
_currn = new _TPATTR_SPEC_O;
#else
_currn = (_TPPATTR_SPEC_O) TreeNodeAlloc (sizeof (struct _TPATTR_SPEC_O));
#endif
_currn->_prod = RULEATTR_SPEC_O;
_currn->_desc1 = (_TSPidentifiers) Mkidentifiers (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_SPEC_O: root of subtree no. 1 can not be made a identifiers node ", 0, _coordref);
_currn->_desc2 = (_TSPtype_specifier) Mktype_specifier (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_SPEC_O: root of subtree no. 2 can not be made a type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ATTR_SPEC_O;
return ( (NODEPTR) _currn);
}/* MkATTR_SPEC_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_DECL_CONST_TYPE_CONST_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkATTR_DECL_CONST_TYPE_CONST_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPATTR_DECL_CONST_TYPE_CONST_O _currn;
#ifdef __cplusplus
_currn = new _TPATTR_DECL_CONST_TYPE_CONST_O;
#else
_currn = (_TPPATTR_DECL_CONST_TYPE_CONST_O) TreeNodeAlloc (sizeof (struct _TPATTR_DECL_CONST_TYPE_CONST_O));
#endif
_currn->_prod = RULEATTR_DECL_CONST_TYPE_CONST_O;
_currn->_desc1 = (_TSPidentifiers) Mkidentifiers (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_CONST_TYPE_CONST_O: root of subtree no. 1 can not be made a identifiers node ", 0, _coordref);
_currn->_desc2 = (_TSPtype_constructor) Mktype_constructor (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_CONST_TYPE_CONST_O: root of subtree no. 2 can not be made a type_constructor node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ATTR_DECL_CONST_TYPE_CONST_O;
return ( (NODEPTR) _currn);
}/* MkATTR_DECL_CONST_TYPE_CONST_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_DECL_TYPE_CONST_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkATTR_DECL_TYPE_CONST_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPATTR_DECL_TYPE_CONST_O _currn;
#ifdef __cplusplus
_currn = new _TPATTR_DECL_TYPE_CONST_O;
#else
_currn = (_TPPATTR_DECL_TYPE_CONST_O) TreeNodeAlloc (sizeof (struct _TPATTR_DECL_TYPE_CONST_O));
#endif
_currn->_prod = RULEATTR_DECL_TYPE_CONST_O;
_currn->_desc1 = (_TSPidentifiers) Mkidentifiers (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_TYPE_CONST_O: root of subtree no. 1 can not be made a identifiers node ", 0, _coordref);
_currn->_desc2 = (_TSPtype_constructor) Mktype_constructor (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_TYPE_CONST_O: root of subtree no. 2 can not be made a type_constructor node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ATTR_DECL_TYPE_CONST_O;
return ( (NODEPTR) _currn);
}/* MkATTR_DECL_TYPE_CONST_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_DECL_CONST_EXP_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkATTR_DECL_CONST_EXP_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPATTR_DECL_CONST_EXP_O _currn;
#ifdef __cplusplus
_currn = new _TPATTR_DECL_CONST_EXP_O;
#else
_currn = (_TPPATTR_DECL_CONST_EXP_O) TreeNodeAlloc (sizeof (struct _TPATTR_DECL_CONST_EXP_O));
#endif
_currn->_prod = RULEATTR_DECL_CONST_EXP_O;
_currn->_desc1 = (_TSPattribute_specification) Mkattribute_specification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_CONST_EXP_O: root of subtree no. 1 can not be made a attribute_specification node ", 0, _coordref);
_currn->_desc2 = (_TSPexpression) Mkexpression (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_CONST_EXP_O: root of subtree no. 2 can not be made a expression node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ATTR_DECL_CONST_EXP_O;
return ( (NODEPTR) _currn);
}/* MkATTR_DECL_CONST_EXP_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_DECL_EXP_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkATTR_DECL_EXP_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPATTR_DECL_EXP_O _currn;
#ifdef __cplusplus
_currn = new _TPATTR_DECL_EXP_O;
#else
_currn = (_TPPATTR_DECL_EXP_O) TreeNodeAlloc (sizeof (struct _TPATTR_DECL_EXP_O));
#endif
_currn->_prod = RULEATTR_DECL_EXP_O;
_currn->_desc1 = (_TSPattribute_specification) Mkattribute_specification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_EXP_O: root of subtree no. 1 can not be made a attribute_specification node ", 0, _coordref);
_currn->_desc2 = (_TSPexpression) Mkexpression (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_EXP_O: root of subtree no. 2 can not be made a expression node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ATTR_DECL_EXP_O;
return ( (NODEPTR) _currn);
}/* MkATTR_DECL_EXP_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_DECL_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkATTR_DECL_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPATTR_DECL_O _currn;
#ifdef __cplusplus
_currn = new _TPATTR_DECL_O;
#else
_currn = (_TPPATTR_DECL_O) TreeNodeAlloc (sizeof (struct _TPATTR_DECL_O));
#endif
_currn->_prod = RULEATTR_DECL_O;
_currn->_desc1 = (_TSPattribute_specification) Mkattribute_specification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_O: root of subtree no. 1 can not be made a attribute_specification node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_ATTR_DECL_O;
return ( (NODEPTR) _currn);
}/* MkATTR_DECL_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_ACCESS_SH_RO_O (POSITION *_coordref)
#else
NODEPTR MkATTR_ACCESS_SH_RO_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPATTR_ACCESS_SH_RO_O _currn;
#ifdef __cplusplus
_currn = new _TPATTR_ACCESS_SH_RO_O;
#else
_currn = (_TPPATTR_ACCESS_SH_RO_O) TreeNodeAlloc (sizeof (struct _TPATTR_ACCESS_SH_RO_O));
#endif
_currn->_prod = RULEATTR_ACCESS_SH_RO_O;
_SETCOORD(_currn)
_TERMACT_ATTR_ACCESS_SH_RO_O;
return ( (NODEPTR) _currn);
}/* MkATTR_ACCESS_SH_RO_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_ACCESS_RO_O (POSITION *_coordref)
#else
NODEPTR MkATTR_ACCESS_RO_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPATTR_ACCESS_RO_O _currn;
#ifdef __cplusplus
_currn = new _TPATTR_ACCESS_RO_O;
#else
_currn = (_TPPATTR_ACCESS_RO_O) TreeNodeAlloc (sizeof (struct _TPATTR_ACCESS_RO_O));
#endif
_currn->_prod = RULEATTR_ACCESS_RO_O;
_SETCOORD(_currn)
_TERMACT_ATTR_ACCESS_RO_O;
return ( (NODEPTR) _currn);
}/* MkATTR_ACCESS_RO_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_ACCESS_SH_O (POSITION *_coordref)
#else
NODEPTR MkATTR_ACCESS_SH_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPATTR_ACCESS_SH_O _currn;
#ifdef __cplusplus
_currn = new _TPATTR_ACCESS_SH_O;
#else
_currn = (_TPPATTR_ACCESS_SH_O) TreeNodeAlloc (sizeof (struct _TPATTR_ACCESS_SH_O));
#endif
_currn->_prod = RULEATTR_ACCESS_SH_O;
_SETCOORD(_currn)
_TERMACT_ATTR_ACCESS_SH_O;
return ( (NODEPTR) _currn);
}/* MkATTR_ACCESS_SH_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_STREAM_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkFEATURE_STREAM_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPFEATURE_STREAM_O _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_STREAM_O;
#else
_currn = (_TPPFEATURE_STREAM_O) TreeNodeAlloc (sizeof (struct _TPFEATURE_STREAM_O));
#endif
_currn->_prod = RULEFEATURE_STREAM_O;
_currn->_desc1 = (_TSPmethod_decl) Mkmethod_decl (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_STREAM_O: root of subtree no. 1 can not be made a method_decl node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_FEATURE_STREAM_O;
return ( (NODEPTR) _currn);
}/* MkFEATURE_STREAM_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_METH_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkFEATURE_METH_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPFEATURE_METH_O _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_METH_O;
#else
_currn = (_TPPFEATURE_METH_O) TreeNodeAlloc (sizeof (struct _TPFEATURE_METH_O));
#endif
_currn->_prod = RULEFEATURE_METH_O;
_currn->_desc1 = (_TSPmethod_decl) Mkmethod_decl (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_METH_O: root of subtree no. 1 can not be made a method_decl node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_FEATURE_METH_O;
return ( (NODEPTR) _currn);
}/* MkFEATURE_METH_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_ATT_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkFEATURE_ATT_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPFEATURE_ATT_O _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_ATT_O;
#else
_currn = (_TPPFEATURE_ATT_O) TreeNodeAlloc (sizeof (struct _TPFEATURE_ATT_O));
#endif
_currn->_prod = RULEFEATURE_ATT_O;
_currn->_desc1 = (_TSPattribute_declaration) Mkattribute_declaration (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_ATT_O: root of subtree no. 1 can not be made a attribute_declaration node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_FEATURE_ATT_O;
return ( (NODEPTR) _currn);
}/* MkFEATURE_ATT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_ATT_ACC_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkFEATURE_ATT_ACC_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPFEATURE_ATT_ACC_O _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_ATT_ACC_O;
#else
_currn = (_TPPFEATURE_ATT_ACC_O) TreeNodeAlloc (sizeof (struct _TPFEATURE_ATT_ACC_O));
#endif
_currn->_prod = RULEFEATURE_ATT_ACC_O;
_currn->_desc1 = (_TSPattribute_access_type) Mkattribute_access_type (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_ATT_ACC_O: root of subtree no. 1 can not be made a attribute_access_type node ", 0, _coordref);
_currn->_desc2 = (_TSPattribute_declaration) Mkattribute_declaration (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_ATT_ACC_O: root of subtree no. 2 can not be made a attribute_declaration node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_FEATURE_ATT_ACC_O;
return ( (NODEPTR) _currn);
}/* MkFEATURE_ATT_ACC_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_DECL_PRIV_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkFEATURE_DECL_PRIV_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPFEATURE_DECL_PRIV_O _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_DECL_PRIV_O;
#else
_currn = (_TPPFEATURE_DECL_PRIV_O) TreeNodeAlloc (sizeof (struct _TPFEATURE_DECL_PRIV_O));
#endif
_currn->_prod = RULEFEATURE_DECL_PRIV_O;
_currn->_desc1 = (_TSPfeature) Mkfeature (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_DECL_PRIV_O: root of subtree no. 1 can not be made a feature node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_FEATURE_DECL_PRIV_O;
return ( (NODEPTR) _currn);
}/* MkFEATURE_DECL_PRIV_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_DECL_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkFEATURE_DECL_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPFEATURE_DECL_O _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_DECL_O;
#else
_currn = (_TPPFEATURE_DECL_O) TreeNodeAlloc (sizeof (struct _TPFEATURE_DECL_O));
#endif
_currn->_prod = RULEFEATURE_DECL_O;
_currn->_desc1 = (_TSPfeature) Mkfeature (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_DECL_O: root of subtree no. 1 can not be made a feature node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_FEATURE_DECL_O;
return ( (NODEPTR) _currn);
}/* MkFEATURE_DECL_O */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _Mkfeature_declarationFEATURE_DECLS_O (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _Mkfeature_declarationFEATURE_DECLS_O (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_feature_declarationFEATURE_DECLS_O _new;
#ifdef __cplusplus
	_new = new _TPLST_feature_declarationFEATURE_DECLS_O;
#else
	_new = (_TPPLST_feature_declarationFEATURE_DECLS_O) TreeNodeAlloc (sizeof (struct _TPLST_feature_declarationFEATURE_DECLS_O));
#endif
	_new->_prod = RULELST_feature_declarationFEATURE_DECLS_O;
	_new->_desc1 = (_TSPfeature_declaration)elem;
	_new->_desc2 = (_TSPLST_feature_declarations)_new;
	{_TPPLST_feature_declarationFEATURE_DECLS_O _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_feature_declarationFEATURE_DECLS_O;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemFEATURE_DECLS_O (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemFEATURE_DECLS_O (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBmethod_decl)) 
		return _Mkfeature_declarationFEATURE_DECLS_O (_coordref, Mkfeature_declaration (_coordref, t));
	if (IsSymb (t, SYMBfeature)) 
		return _Mkfeature_declarationFEATURE_DECLS_O (_coordref, Mkfeature_declaration (_coordref, t));
	if (IsSymb (t, SYMBattribute_specification)) 
		return _Mkfeature_declarationFEATURE_DECLS_O (_coordref, Mkfeature_declaration (_coordref, t));
	if (IsSymb (t, SYMBattribute_declaration)) 
		return _Mkfeature_declarationFEATURE_DECLS_O (_coordref, Mkfeature_declaration (_coordref, t));
	if (IsSymb (t, SYMBfeature_declaration)) 
		return _Mkfeature_declarationFEATURE_DECLS_O (_coordref, Mkfeature_declaration (_coordref, t));
	message (DEADLY, "a FEATURE_DECLS_O list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2FEATURE_DECLS_O (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2FEATURE_DECLS_O (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_feature_declarations)
	l =_ElemFEATURE_DECLS_O (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_feature_declarations)
	r = _ElemFEATURE_DECLS_O (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0FEATURE_DECLS_O)r)->_desc2);
((_TPPLST_0FEATURE_DECLS_O)r)->_desc2 = ((_TPPLST_0FEATURE_DECLS_O)l)->_desc2;
((_TPPLST_0FEATURE_DECLS_O)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_DECLS_O (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkFEATURE_DECLS_O (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPFEATURE_DECLS_O root;
	_TPPLST_0FEATURE_DECLS_O list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0FEATURE_DECLS_O)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_feature_declarations)
		t = _ElemFEATURE_DECLS_O (_coordref, t);
	remain = (_TPPLST_0FEATURE_DECLS_O)(((_TPPLST_0FEATURE_DECLS_O) t)->_desc2);
	((_TPPLST_0FEATURE_DECLS_O) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0FEATURE_DECLS_O;
#else
list = (_TPPLST_0FEATURE_DECLS_O) TreeNodeAlloc (sizeof (struct _TPLST_0FEATURE_DECLS_O));
#endif
list->_prod = RULELST_0FEATURE_DECLS_O;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0FEATURE_DECLS_O)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_feature_declarationFEATURE_DECLS_O)
	{_TPPLST_feature_declarationFEATURE_DECLS_O _currn = _currn;
	 _TERMACT_LST_feature_declarationFEATURE_DECLS_O;
	} this code has been moved to _ElemFEATURE_DECLS_O*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPFEATURE_DECLS_O;
#else
root = (_TPPFEATURE_DECLS_O) TreeNodeAlloc (sizeof (struct _TPFEATURE_DECLS_O));
#endif
root->_prod = RULEFEATURE_DECLS_O;
root->_desc1 = (_TSPLST_feature_declarations)list;
{ _TPPFEATURE_DECLS_O _currn = root;
  _SETCOORD(_currn)
  _TERMACT_FEATURE_DECLS_O;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_ID_USE_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkFEATURE_ID_USE_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPFEATURE_ID_USE_O _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_ID_USE_O;
#else
_currn = (_TPPFEATURE_ID_USE_O) TreeNodeAlloc (sizeof (struct _TPFEATURE_ID_USE_O));
#endif
_currn->_prod = RULEFEATURE_ID_USE_O;
_SETCOORD(_currn)
_TERMACT_FEATURE_ID_USE_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkFEATURE_ID_USE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_SPEC_STREAM_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkFEATURE_SPEC_STREAM_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPFEATURE_SPEC_STREAM_O _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_SPEC_STREAM_O;
#else
_currn = (_TPPFEATURE_SPEC_STREAM_O) TreeNodeAlloc (sizeof (struct _TPFEATURE_SPEC_STREAM_O));
#endif
_currn->_prod = RULEFEATURE_SPEC_STREAM_O;
_currn->_desc1 = (_TSPfeature_id_use) Mkfeature_id_use (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_SPEC_STREAM_O: root of subtree no. 1 can not be made a feature_id_use node ", 0, _coordref);
_currn->_desc2 = (_TSPmethod_specification) Mkmethod_specification (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_SPEC_STREAM_O: root of subtree no. 2 can not be made a method_specification node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_FEATURE_SPEC_STREAM_O;
return ( (NODEPTR) _currn);
}/* MkFEATURE_SPEC_STREAM_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_SPEC_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkFEATURE_SPEC_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPFEATURE_SPEC_O _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_SPEC_O;
#else
_currn = (_TPPFEATURE_SPEC_O) TreeNodeAlloc (sizeof (struct _TPFEATURE_SPEC_O));
#endif
_currn->_prod = RULEFEATURE_SPEC_O;
_currn->_desc1 = (_TSPfeature_id_use) Mkfeature_id_use (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_SPEC_O: root of subtree no. 1 can not be made a feature_id_use node ", 0, _coordref);
_currn->_desc2 = (_TSPmethod_specification) Mkmethod_specification (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_SPEC_O: root of subtree no. 2 can not be made a method_specification node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_FEATURE_SPEC_O;
return ( (NODEPTR) _currn);
}/* MkFEATURE_SPEC_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkIDENT_MOD_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkIDENT_MOD_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPIDENT_MOD_O _currn;
#ifdef __cplusplus
_currn = new _TPIDENT_MOD_O;
#else
_currn = (_TPPIDENT_MOD_O) TreeNodeAlloc (sizeof (struct _TPIDENT_MOD_O));
#endif
_currn->_prod = RULEIDENT_MOD_O;
_SETCOORD(_currn)
_TERMACT_IDENT_MOD_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkIDENT_MOD_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMODIFICATION_NAME_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkMODIFICATION_NAME_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPMODIFICATION_NAME_O _currn;
#ifdef __cplusplus
_currn = new _TPMODIFICATION_NAME_O;
#else
_currn = (_TPPMODIFICATION_NAME_O) TreeNodeAlloc (sizeof (struct _TPMODIFICATION_NAME_O));
#endif
_currn->_prod = RULEMODIFICATION_NAME_O;
_currn->_desc1 = (_TSPfeature_specification) Mkfeature_specification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE MODIFICATION_NAME_O: root of subtree no. 1 can not be made a feature_specification node ", 0, _coordref);
_currn->_desc2 = (_TSPident_mod) Mkident_mod (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE MODIFICATION_NAME_O: root of subtree no. 2 can not be made a ident_mod node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_MODIFICATION_NAME_O;
return ( (NODEPTR) _currn);
}/* MkMODIFICATION_NAME_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMODIFICATION_OUT_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkMODIFICATION_OUT_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPMODIFICATION_OUT_O _currn;
#ifdef __cplusplus
_currn = new _TPMODIFICATION_OUT_O;
#else
_currn = (_TPPMODIFICATION_OUT_O) TreeNodeAlloc (sizeof (struct _TPMODIFICATION_OUT_O));
#endif
_currn->_prod = RULEMODIFICATION_OUT_O;
_currn->_desc1 = (_TSPfeature_specification) Mkfeature_specification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE MODIFICATION_OUT_O: root of subtree no. 1 can not be made a feature_specification node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_MODIFICATION_OUT_O;
return ( (NODEPTR) _currn);
}/* MkMODIFICATION_OUT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMODIFICATION_ONLY_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkMODIFICATION_ONLY_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPMODIFICATION_ONLY_O _currn;
#ifdef __cplusplus
_currn = new _TPMODIFICATION_ONLY_O;
#else
_currn = (_TPPMODIFICATION_ONLY_O) TreeNodeAlloc (sizeof (struct _TPMODIFICATION_ONLY_O));
#endif
_currn->_prod = RULEMODIFICATION_ONLY_O;
_currn->_desc1 = (_TSPfeature_specification) Mkfeature_specification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE MODIFICATION_ONLY_O: root of subtree no. 1 can not be made a feature_specification node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_MODIFICATION_ONLY_O;
return ( (NODEPTR) _currn);
}/* MkMODIFICATION_ONLY_O */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _MkmodificationMODIFICATIONS_O (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _MkmodificationMODIFICATIONS_O (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_modificationMODIFICATIONS_O _new;
#ifdef __cplusplus
	_new = new _TPLST_modificationMODIFICATIONS_O;
#else
	_new = (_TPPLST_modificationMODIFICATIONS_O) TreeNodeAlloc (sizeof (struct _TPLST_modificationMODIFICATIONS_O));
#endif
	_new->_prod = RULELST_modificationMODIFICATIONS_O;
	_new->_desc1 = (_TSPmodification)elem;
	_new->_desc2 = (_TSPLST_modifications)_new;
	{_TPPLST_modificationMODIFICATIONS_O _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_modificationMODIFICATIONS_O;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemMODIFICATIONS_O (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemMODIFICATIONS_O (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBfeature_specification)) 
		return _MkmodificationMODIFICATIONS_O (_coordref, Mkmodification (_coordref, t));
	if (IsSymb (t, SYMBmodification)) 
		return _MkmodificationMODIFICATIONS_O (_coordref, Mkmodification (_coordref, t));
	message (DEADLY, "a MODIFICATIONS_O list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2MODIFICATIONS_O (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2MODIFICATIONS_O (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_modifications)
	l =_ElemMODIFICATIONS_O (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_modifications)
	r = _ElemMODIFICATIONS_O (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0MODIFICATIONS_O)r)->_desc2);
((_TPPLST_0MODIFICATIONS_O)r)->_desc2 = ((_TPPLST_0MODIFICATIONS_O)l)->_desc2;
((_TPPLST_0MODIFICATIONS_O)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMODIFICATIONS_O (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkMODIFICATIONS_O (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPMODIFICATIONS_O root;
	_TPPLST_0MODIFICATIONS_O list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0MODIFICATIONS_O)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_modifications)
		t = _ElemMODIFICATIONS_O (_coordref, t);
	remain = (_TPPLST_0MODIFICATIONS_O)(((_TPPLST_0MODIFICATIONS_O) t)->_desc2);
	((_TPPLST_0MODIFICATIONS_O) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0MODIFICATIONS_O;
#else
list = (_TPPLST_0MODIFICATIONS_O) TreeNodeAlloc (sizeof (struct _TPLST_0MODIFICATIONS_O));
#endif
list->_prod = RULELST_0MODIFICATIONS_O;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0MODIFICATIONS_O)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_modificationMODIFICATIONS_O)
	{_TPPLST_modificationMODIFICATIONS_O _currn = _currn;
	 _TERMACT_LST_modificationMODIFICATIONS_O;
	} this code has been moved to _ElemMODIFICATIONS_O*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPMODIFICATIONS_O;
#else
root = (_TPPMODIFICATIONS_O) TreeNodeAlloc (sizeof (struct _TPMODIFICATIONS_O));
#endif
root->_prod = RULEMODIFICATIONS_O;
root->_desc1 = (_TSPLST_modifications)list;
{ _TPPMODIFICATIONS_O _currn = root;
  _SETCOORD(_currn)
  _TERMACT_MODIFICATIONS_O;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkINHERITANCE_INC_ONLY_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkINHERITANCE_INC_ONLY_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPINHERITANCE_INC_ONLY_O _currn;
#ifdef __cplusplus
_currn = new _TPINHERITANCE_INC_ONLY_O;
#else
_currn = (_TPPINHERITANCE_INC_ONLY_O) TreeNodeAlloc (sizeof (struct _TPINHERITANCE_INC_ONLY_O));
#endif
_currn->_prod = RULEINHERITANCE_INC_ONLY_O;
_currn->_desc1 = (_TSPclass_specifier) Mkclass_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCE_INC_ONLY_O: root of subtree no. 1 can not be made a class_specifier node ", 0, _coordref);
_currn->_desc2 = (_TSPmodifications) Mkmodifications (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCE_INC_ONLY_O: root of subtree no. 2 can not be made a modifications node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_INHERITANCE_INC_ONLY_O;
return ( (NODEPTR) _currn);
}/* MkINHERITANCE_INC_ONLY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkINHERITANCE_INCLUDE_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkINHERITANCE_INCLUDE_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPINHERITANCE_INCLUDE_O _currn;
#ifdef __cplusplus
_currn = new _TPINHERITANCE_INCLUDE_O;
#else
_currn = (_TPPINHERITANCE_INCLUDE_O) TreeNodeAlloc (sizeof (struct _TPINHERITANCE_INCLUDE_O));
#endif
_currn->_prod = RULEINHERITANCE_INCLUDE_O;
_currn->_desc1 = (_TSPclass_specifier) Mkclass_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCE_INCLUDE_O: root of subtree no. 1 can not be made a class_specifier node ", 0, _coordref);
_currn->_desc2 = (_TSPmodifications) Mkmodifications (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCE_INCLUDE_O: root of subtree no. 2 can not be made a modifications node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_INHERITANCE_INCLUDE_O;
return ( (NODEPTR) _currn);
}/* MkINHERITANCE_INCLUDE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkINHERITANCE_LIKE_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkINHERITANCE_LIKE_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPINHERITANCE_LIKE_O _currn;
#ifdef __cplusplus
_currn = new _TPINHERITANCE_LIKE_O;
#else
_currn = (_TPPINHERITANCE_LIKE_O) TreeNodeAlloc (sizeof (struct _TPINHERITANCE_LIKE_O));
#endif
_currn->_prod = RULEINHERITANCE_LIKE_O;
_currn->_desc1 = (_TSPclass_specifier) Mkclass_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCE_LIKE_O: root of subtree no. 1 can not be made a class_specifier node ", 0, _coordref);
_currn->_desc2 = (_TSPmodifications) Mkmodifications (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCE_LIKE_O: root of subtree no. 2 can not be made a modifications node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_INHERITANCE_LIKE_O;
return ( (NODEPTR) _currn);
}/* MkINHERITANCE_LIKE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkINHERITANCE_PRIV_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkINHERITANCE_PRIV_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPINHERITANCE_PRIV_O _currn;
#ifdef __cplusplus
_currn = new _TPINHERITANCE_PRIV_O;
#else
_currn = (_TPPINHERITANCE_PRIV_O) TreeNodeAlloc (sizeof (struct _TPINHERITANCE_PRIV_O));
#endif
_currn->_prod = RULEINHERITANCE_PRIV_O;
_currn->_desc1 = (_TSPinheritance) Mkinheritance (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCE_PRIV_O: root of subtree no. 1 can not be made a inheritance node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_INHERITANCE_PRIV_O;
return ( (NODEPTR) _currn);
}/* MkINHERITANCE_PRIV_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkINHERITANCES_LST_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkINHERITANCES_LST_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPINHERITANCES_LST_O _currn;
#ifdef __cplusplus
_currn = new _TPINHERITANCES_LST_O;
#else
_currn = (_TPPINHERITANCES_LST_O) TreeNodeAlloc (sizeof (struct _TPINHERITANCES_LST_O));
#endif
_currn->_prod = RULEINHERITANCES_LST_O;
_currn->_desc1 = (_TSPinheritances) Mkinheritances (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCES_LST_O: root of subtree no. 1 can not be made a inheritances node ", 0, _coordref);
_currn->_desc2 = (_TSPinheritance) Mkinheritance (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCES_LST_O: root of subtree no. 2 can not be made a inheritance node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_INHERITANCES_LST_O;
return ( (NODEPTR) _currn);
}/* MkINHERITANCES_LST_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkINHERITANCES_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkINHERITANCES_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPINHERITANCES_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPINHERITANCES_EMPTY_O;
#else
_currn = (_TPPINHERITANCES_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPINHERITANCES_EMPTY_O));
#endif
_currn->_prod = RULEINHERITANCES_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_INHERITANCES_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkINHERITANCES_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDIRECT_STREAM_CALL_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkDIRECT_STREAM_CALL_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPDIRECT_STREAM_CALL_O _currn;
#ifdef __cplusplus
_currn = new _TPDIRECT_STREAM_CALL_O;
#else
_currn = (_TPPDIRECT_STREAM_CALL_O) TreeNodeAlloc (sizeof (struct _TPDIRECT_STREAM_CALL_O));
#endif
_currn->_prod = RULEDIRECT_STREAM_CALL_O;
_currn->_desc1 = (_TSPdesignator) Mkdesignator (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE DIRECT_STREAM_CALL_O: root of subtree no. 1 can not be made a designator node ", 0, _coordref);
_currn->_desc2 = (_TSParguments) Mkarguments (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE DIRECT_STREAM_CALL_O: root of subtree no. 2 can not be made a arguments node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_DIRECT_STREAM_CALL_O;
return ( (NODEPTR) _currn);
}/* MkDIRECT_STREAM_CALL_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCOERCION_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCOERCION_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCOERCION_O _currn;
#ifdef __cplusplus
_currn = new _TPCOERCION_O;
#else
_currn = (_TPPCOERCION_O) TreeNodeAlloc (sizeof (struct _TPCOERCION_O));
#endif
_currn->_prod = RULECOERCION_O;
_currn->_desc1 = (_TSPexpression) Mkexpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE COERCION_O: root of subtree no. 1 can not be made a expression node ", 0, _coordref);
_currn->_desc2 = (_TSPtype_specifier) Mktype_specifier (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE COERCION_O: root of subtree no. 2 can not be made a type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_COERCION_O;
return ( (NODEPTR) _currn);
}/* MkCOERCION_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTR_CONSTANT_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkSTR_CONSTANT_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPSTR_CONSTANT_O _currn;
#ifdef __cplusplus
_currn = new _TPSTR_CONSTANT_O;
#else
_currn = (_TPPSTR_CONSTANT_O) TreeNodeAlloc (sizeof (struct _TPSTR_CONSTANT_O));
#endif
_currn->_prod = RULESTR_CONSTANT_O;
_SETCOORD(_currn)
_TERMACT_STR_CONSTANT_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "stringconst", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkSTR_CONSTANT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTR_CONSTANTS_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkSTR_CONSTANTS_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPSTR_CONSTANTS_O _currn;
#ifdef __cplusplus
_currn = new _TPSTR_CONSTANTS_O;
#else
_currn = (_TPPSTR_CONSTANTS_O) TreeNodeAlloc (sizeof (struct _TPSTR_CONSTANTS_O));
#endif
_currn->_prod = RULESTR_CONSTANTS_O;
_currn->_desc1 = (_TSPstringconstant) Mkstringconstant (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STR_CONSTANTS_O: root of subtree no. 1 can not be made a stringconstant node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_STR_CONSTANTS_O;
return ( (NODEPTR) _currn);
}/* MkSTR_CONSTANTS_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTR_CONSTANTS_LST_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTR_CONSTANTS_LST_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTR_CONSTANTS_LST_O _currn;
#ifdef __cplusplus
_currn = new _TPSTR_CONSTANTS_LST_O;
#else
_currn = (_TPPSTR_CONSTANTS_LST_O) TreeNodeAlloc (sizeof (struct _TPSTR_CONSTANTS_LST_O));
#endif
_currn->_prod = RULESTR_CONSTANTS_LST_O;
_currn->_desc1 = (_TSPstringconstant) Mkstringconstant (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STR_CONSTANTS_LST_O: root of subtree no. 1 can not be made a stringconstant node ", 0, _coordref);
_currn->_desc2 = (_TSPstringconstants) Mkstringconstants (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STR_CONSTANTS_LST_O: root of subtree no. 2 can not be made a stringconstants node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STR_CONSTANTS_LST_O;
return ( (NODEPTR) _currn);
}/* MkSTR_CONSTANTS_LST_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_VOID_O (POSITION *_coordref)
#else
NODEPTR MkVALUE_VOID_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPVALUE_VOID_O _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_VOID_O;
#else
_currn = (_TPPVALUE_VOID_O) TreeNodeAlloc (sizeof (struct _TPVALUE_VOID_O));
#endif
_currn->_prod = RULEVALUE_VOID_O;
_SETCOORD(_currn)
_TERMACT_VALUE_VOID_O;
return ( (NODEPTR) _currn);
}/* MkVALUE_VOID_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_SED_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_SED_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_SED_O _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_SED_O;
#else
_currn = (_TPPVALUE_SED_O) TreeNodeAlloc (sizeof (struct _TPVALUE_SED_O));
#endif
_currn->_prod = RULEVALUE_SED_O;
_SETCOORD(_currn)
_TERMACT_VALUE_SED_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "sedecimal_number", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_SED_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_OCT_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_OCT_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_OCT_O _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_OCT_O;
#else
_currn = (_TPPVALUE_OCT_O) TreeNodeAlloc (sizeof (struct _TPVALUE_OCT_O));
#endif
_currn->_prod = RULEVALUE_OCT_O;
_SETCOORD(_currn)
_TERMACT_VALUE_OCT_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "octal_number", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_OCT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_STR_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkVALUE_STR_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPVALUE_STR_O _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_STR_O;
#else
_currn = (_TPPVALUE_STR_O) TreeNodeAlloc (sizeof (struct _TPVALUE_STR_O));
#endif
_currn->_prod = RULEVALUE_STR_O;
_currn->_desc1 = (_TSPstringconstants) Mkstringconstants (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE VALUE_STR_O: root of subtree no. 1 can not be made a stringconstants node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_VALUE_STR_O;
return ( (NODEPTR) _currn);
}/* MkVALUE_STR_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_CHAR_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_CHAR_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_CHAR_O _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_CHAR_O;
#else
_currn = (_TPPVALUE_CHAR_O) TreeNodeAlloc (sizeof (struct _TPVALUE_CHAR_O));
#endif
_currn->_prod = RULEVALUE_CHAR_O;
_SETCOORD(_currn)
_TERMACT_VALUE_CHAR_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "characterconst", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_CHAR_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_BOOL_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_BOOL_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_BOOL_O _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_BOOL_O;
#else
_currn = (_TPPVALUE_BOOL_O) TreeNodeAlloc (sizeof (struct _TPVALUE_BOOL_O));
#endif
_currn->_prod = RULEVALUE_BOOL_O;
_SETCOORD(_currn)
_TERMACT_VALUE_BOOL_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "boolean_value", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_BOOL_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_FLOAT_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_FLOAT_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_FLOAT_O _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_FLOAT_O;
#else
_currn = (_TPPVALUE_FLOAT_O) TreeNodeAlloc (sizeof (struct _TPVALUE_FLOAT_O));
#endif
_currn->_prod = RULEVALUE_FLOAT_O;
_SETCOORD(_currn)
_TERMACT_VALUE_FLOAT_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "floating_number", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_FLOAT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_INT_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_INT_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_INT_O _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_INT_O;
#else
_currn = (_TPPVALUE_INT_O) TreeNodeAlloc (sizeof (struct _TPVALUE_INT_O));
#endif
_currn->_prod = RULEVALUE_INT_O;
_SETCOORD(_currn)
_TERMACT_VALUE_INT_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "integer_number", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_INT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBOUND_METHOD_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkBOUND_METHOD_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPBOUND_METHOD_O _currn;
#ifdef __cplusplus
_currn = new _TPBOUND_METHOD_O;
#else
_currn = (_TPPBOUND_METHOD_O) TreeNodeAlloc (sizeof (struct _TPBOUND_METHOD_O));
#endif
_currn->_prod = RULEBOUND_METHOD_O;
_currn->_desc1 = (_TSPdesignator) Mkdesignator (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BOUND_METHOD_O: root of subtree no. 1 can not be made a designator node ", 0, _coordref);
_currn->_desc2 = (_TSParguments) Mkarguments (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE BOUND_METHOD_O: root of subtree no. 2 can not be made a arguments node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_BOUND_METHOD_O;
return ( (NODEPTR) _currn);
}/* MkBOUND_METHOD_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAMED_EXPRESSION_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkNAMED_EXPRESSION_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPNAMED_EXPRESSION_O _currn;
#ifdef __cplusplus
_currn = new _TPNAMED_EXPRESSION_O;
#else
_currn = (_TPPNAMED_EXPRESSION_O) TreeNodeAlloc (sizeof (struct _TPNAMED_EXPRESSION_O));
#endif
_currn->_prod = RULENAMED_EXPRESSION_O;
_currn->_desc1 = (_TSPname) Mkname (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE NAMED_EXPRESSION_O: root of subtree no. 1 can not be made a name node ", 0, _coordref);
_currn->_desc2 = (_TSPexpression) Mkexpression (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE NAMED_EXPRESSION_O: root of subtree no. 2 can not be made a expression node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_NAMED_EXPRESSION_O;
return ( (NODEPTR) _currn);
}/* MkNAMED_EXPRESSION_O */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _Mknamed_expressionNAMED_EXPRESSIONS_O (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _Mknamed_expressionNAMED_EXPRESSIONS_O (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_named_expressionNAMED_EXPRESSIONS_O _new;
#ifdef __cplusplus
	_new = new _TPLST_named_expressionNAMED_EXPRESSIONS_O;
#else
	_new = (_TPPLST_named_expressionNAMED_EXPRESSIONS_O) TreeNodeAlloc (sizeof (struct _TPLST_named_expressionNAMED_EXPRESSIONS_O));
#endif
	_new->_prod = RULELST_named_expressionNAMED_EXPRESSIONS_O;
	_new->_desc1 = (_TSPnamed_expression)elem;
	_new->_desc2 = (_TSPLST_named_expressions)_new;
	{_TPPLST_named_expressionNAMED_EXPRESSIONS_O _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_named_expressionNAMED_EXPRESSIONS_O;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemNAMED_EXPRESSIONS_O (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemNAMED_EXPRESSIONS_O (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBnamed_expression)) 
		return _Mknamed_expressionNAMED_EXPRESSIONS_O (_coordref, Mknamed_expression (_coordref, t));
	message (DEADLY, "a NAMED_EXPRESSIONS_O list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2NAMED_EXPRESSIONS_O (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2NAMED_EXPRESSIONS_O (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_named_expressions)
	l =_ElemNAMED_EXPRESSIONS_O (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_named_expressions)
	r = _ElemNAMED_EXPRESSIONS_O (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0NAMED_EXPRESSIONS_O)r)->_desc2);
((_TPPLST_0NAMED_EXPRESSIONS_O)r)->_desc2 = ((_TPPLST_0NAMED_EXPRESSIONS_O)l)->_desc2;
((_TPPLST_0NAMED_EXPRESSIONS_O)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAMED_EXPRESSIONS_O (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkNAMED_EXPRESSIONS_O (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPNAMED_EXPRESSIONS_O root;
	_TPPLST_0NAMED_EXPRESSIONS_O list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0NAMED_EXPRESSIONS_O)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_named_expressions)
		t = _ElemNAMED_EXPRESSIONS_O (_coordref, t);
	remain = (_TPPLST_0NAMED_EXPRESSIONS_O)(((_TPPLST_0NAMED_EXPRESSIONS_O) t)->_desc2);
	((_TPPLST_0NAMED_EXPRESSIONS_O) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0NAMED_EXPRESSIONS_O;
#else
list = (_TPPLST_0NAMED_EXPRESSIONS_O) TreeNodeAlloc (sizeof (struct _TPLST_0NAMED_EXPRESSIONS_O));
#endif
list->_prod = RULELST_0NAMED_EXPRESSIONS_O;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0NAMED_EXPRESSIONS_O)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_named_expressionNAMED_EXPRESSIONS_O)
	{_TPPLST_named_expressionNAMED_EXPRESSIONS_O _currn = _currn;
	 _TERMACT_LST_named_expressionNAMED_EXPRESSIONS_O;
	} this code has been moved to _ElemNAMED_EXPRESSIONS_O*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPNAMED_EXPRESSIONS_O;
#else
root = (_TPPNAMED_EXPRESSIONS_O) TreeNodeAlloc (sizeof (struct _TPNAMED_EXPRESSIONS_O));
#endif
root->_prod = RULENAMED_EXPRESSIONS_O;
root->_desc1 = (_TSPLST_named_expressions)list;
{ _TPPNAMED_EXPRESSIONS_O _currn = root;
  _SETCOORD(_currn)
  _TERMACT_NAMED_EXPRESSIONS_O;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAGG_ID_DEF_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkAGG_ID_DEF_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPAGG_ID_DEF_O _currn;
#ifdef __cplusplus
_currn = new _TPAGG_ID_DEF_O;
#else
_currn = (_TPPAGG_ID_DEF_O) TreeNodeAlloc (sizeof (struct _TPAGG_ID_DEF_O));
#endif
_currn->_prod = RULEAGG_ID_DEF_O;
_SETCOORD(_currn)
_TERMACT_AGG_ID_DEF_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkAGG_ID_DEF_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAGGREGATE_NAMED_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkAGGREGATE_NAMED_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPAGGREGATE_NAMED_O _currn;
#ifdef __cplusplus
_currn = new _TPAGGREGATE_NAMED_O;
#else
_currn = (_TPPAGGREGATE_NAMED_O) TreeNodeAlloc (sizeof (struct _TPAGGREGATE_NAMED_O));
#endif
_currn->_prod = RULEAGGREGATE_NAMED_O;
_currn->_desc1 = (_TSPagg_id_def) Mkagg_id_def (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE AGGREGATE_NAMED_O: root of subtree no. 1 can not be made a agg_id_def node ", 0, _coordref);
_currn->_desc2 = (_TSPnamed_expressions) Mknamed_expressions (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE AGGREGATE_NAMED_O: root of subtree no. 2 can not be made a named_expressions node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_AGGREGATE_NAMED_O;
return ( (NODEPTR) _currn);
}/* MkAGGREGATE_NAMED_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAGGREGATE_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkAGGREGATE_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPAGGREGATE_O _currn;
#ifdef __cplusplus
_currn = new _TPAGGREGATE_O;
#else
_currn = (_TPPAGGREGATE_O) TreeNodeAlloc (sizeof (struct _TPAGGREGATE_O));
#endif
_currn->_prod = RULEAGGREGATE_O;
_currn->_desc1 = (_TSPnamed_expressions) Mknamed_expressions (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE AGGREGATE_O: root of subtree no. 1 can not be made a named_expressions node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_AGGREGATE_O;
return ( (NODEPTR) _currn);
}/* MkAGGREGATE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_SAME_AGG_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_CONSTRUCTOR_SAME_AGG_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_CONSTRUCTOR_SAME_AGG_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_SAME_AGG_O;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_SAME_AGG_O) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_SAME_AGG_O));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_SAME_AGG_O;
_currn->_desc1 = (_TSPaggregate) Mkaggregate (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_SAME_AGG_O: root of subtree no. 1 can not be made a aggregate node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_SAME_AGG_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_SAME_AGG_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_SAME_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_CONSTRUCTOR_SAME_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_CONSTRUCTOR_SAME_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_SAME_O;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_SAME_O) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_SAME_O));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_SAME_O;
_currn->_desc1 = (_TSParguments) Mkarguments (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_SAME_O: root of subtree no. 1 can not be made a arguments node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_SAME_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_SAME_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_DES_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPE_CONSTRUCTOR_DES_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPE_CONSTRUCTOR_DES_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_DES_O;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_DES_O) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_DES_O));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_DES_O;
_currn->_desc1 = (_TSPdesignator) Mkdesignator (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_DES_O: root of subtree no. 1 can not be made a designator node ", 0, _coordref);
_currn->_desc2 = (_TSParguments) Mkarguments (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_DES_O: root of subtree no. 2 can not be made a arguments node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_DES_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_DES_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_AGG_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_CONSTRUCTOR_AGG_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_CONSTRUCTOR_AGG_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_AGG_O;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_AGG_O) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_AGG_O));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_AGG_O;
_currn->_desc1 = (_TSPaggregate) Mkaggregate (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_AGG_O: root of subtree no. 1 can not be made a aggregate node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_AGG_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_AGG_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_CLASS_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3, NODEPTR _desc4)
#else
NODEPTR MkTYPE_CONSTRUCTOR_CLASS_O (_coordref,_desc1,_desc2,_desc3,_desc4)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
	NODEPTR _desc4;
#endif
{	_TPPTYPE_CONSTRUCTOR_CLASS_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_CLASS_O;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_CLASS_O) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_CLASS_O));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_CLASS_O;
_currn->_desc1 = (_TSPdesignator) Mkdesignator (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_CLASS_O: root of subtree no. 1 can not be made a designator node ", 0, _coordref);
_currn->_desc2 = (_TSParguments) Mkarguments (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_CLASS_O: root of subtree no. 2 can not be made a arguments node ", 0, _coordref);
_currn->_desc3 = (_TSParguments) Mkarguments (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_CLASS_O: root of subtree no. 3 can not be made a arguments node ", 0, _coordref);
if (_desc4 == NULLNODEPTR)
	_currn->_desc4 = (_TSPclass_specifier) NULLNODEPTR;
else	_currn->_desc4 = (_TSPclass_specifier) Mkclass_specifier (_coordref, _desc4);
_SETCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_CLASS_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_CLASS_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_CL_AGG_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3, NODEPTR _desc4)
#else
NODEPTR MkTYPE_CONSTRUCTOR_CL_AGG_O (_coordref,_desc1,_desc2,_desc3,_desc4)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
	NODEPTR _desc4;
#endif
{	_TPPTYPE_CONSTRUCTOR_CL_AGG_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_CL_AGG_O;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_CL_AGG_O) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_CL_AGG_O));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_CL_AGG_O;
_currn->_desc1 = (_TSPdesignator) Mkdesignator (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_CL_AGG_O: root of subtree no. 1 can not be made a designator node ", 0, _coordref);
_currn->_desc2 = (_TSParguments) Mkarguments (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_CL_AGG_O: root of subtree no. 2 can not be made a arguments node ", 0, _coordref);
_currn->_desc3 = (_TSPaggregate) Mkaggregate (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_CL_AGG_O: root of subtree no. 3 can not be made a aggregate node ", 0, _coordref);
if (_desc4 == NULLNODEPTR)
	_currn->_desc4 = (_TSPclass_specifier) NULLNODEPTR;
else	_currn->_desc4 = (_TSPclass_specifier) Mkclass_specifier (_coordref, _desc4);
_SETCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_CL_AGG_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_CL_AGG_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkQUAL_FEATURE_ID_USE_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkQUAL_FEATURE_ID_USE_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPQUAL_FEATURE_ID_USE_O _currn;
#ifdef __cplusplus
_currn = new _TPQUAL_FEATURE_ID_USE_O;
#else
_currn = (_TPPQUAL_FEATURE_ID_USE_O) TreeNodeAlloc (sizeof (struct _TPQUAL_FEATURE_ID_USE_O));
#endif
_currn->_prod = RULEQUAL_FEATURE_ID_USE_O;
_SETCOORD(_currn)
_TERMACT_QUAL_FEATURE_ID_USE_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkQUAL_FEATURE_ID_USE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkQUALIFICATION_TYPE_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkQUALIFICATION_TYPE_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPQUALIFICATION_TYPE_O _currn;
#ifdef __cplusplus
_currn = new _TPQUALIFICATION_TYPE_O;
#else
_currn = (_TPPQUALIFICATION_TYPE_O) TreeNodeAlloc (sizeof (struct _TPQUALIFICATION_TYPE_O));
#endif
_currn->_prod = RULEQUALIFICATION_TYPE_O;
_currn->_desc1 = (_TSPtype_specifier) Mktype_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE QUALIFICATION_TYPE_O: root of subtree no. 1 can not be made a type_specifier node ", 0, _coordref);
_currn->_desc2 = (_TSPqual_feature_id_use) Mkqual_feature_id_use (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE QUALIFICATION_TYPE_O: root of subtree no. 2 can not be made a qual_feature_id_use node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_QUALIFICATION_TYPE_O;
return ( (NODEPTR) _currn);
}/* MkQUALIFICATION_TYPE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkQUALIFICATION_EXP_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkQUALIFICATION_EXP_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPQUALIFICATION_EXP_O _currn;
#ifdef __cplusplus
_currn = new _TPQUALIFICATION_EXP_O;
#else
_currn = (_TPPQUALIFICATION_EXP_O) TreeNodeAlloc (sizeof (struct _TPQUALIFICATION_EXP_O));
#endif
_currn->_prod = RULEQUALIFICATION_EXP_O;
_currn->_desc1 = (_TSPexpression) Mkexpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE QUALIFICATION_EXP_O: root of subtree no. 1 can not be made a expression node ", 0, _coordref);
_currn->_desc2 = (_TSPqual_feature_id_use) Mkqual_feature_id_use (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE QUALIFICATION_EXP_O: root of subtree no. 2 can not be made a qual_feature_id_use node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_QUALIFICATION_EXP_O;
return ( (NODEPTR) _currn);
}/* MkQUALIFICATION_EXP_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTD_METHOD_CALL_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTD_METHOD_CALL_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTD_METHOD_CALL_O _currn;
#ifdef __cplusplus
_currn = new _TPSTD_METHOD_CALL_O;
#else
_currn = (_TPPSTD_METHOD_CALL_O) TreeNodeAlloc (sizeof (struct _TPSTD_METHOD_CALL_O));
#endif
_currn->_prod = RULESTD_METHOD_CALL_O;
_currn->_desc1 = (_TSPdesignator) Mkdesignator (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STD_METHOD_CALL_O: root of subtree no. 1 can not be made a designator node ", 0, _coordref);
_currn->_desc2 = (_TSParguments) Mkarguments (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STD_METHOD_CALL_O: root of subtree no. 2 can not be made a arguments node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STD_METHOD_CALL_O;
return ( (NODEPTR) _currn);
}/* MkSTD_METHOD_CALL_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkOBJ_ID_USE_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkOBJ_ID_USE_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPOBJ_ID_USE_O _currn;
#ifdef __cplusplus
_currn = new _TPOBJ_ID_USE_O;
#else
_currn = (_TPPOBJ_ID_USE_O) TreeNodeAlloc (sizeof (struct _TPOBJ_ID_USE_O));
#endif
_currn->_prod = RULEOBJ_ID_USE_O;
_SETCOORD(_currn)
_TERMACT_OBJ_ID_USE_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkOBJ_ID_USE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_NOT_O (POSITION *_coordref)
#else
NODEPTR MkNAME_NOT_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_NOT_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_NOT_O;
#else
_currn = (_TPPNAME_NOT_O) TreeNodeAlloc (sizeof (struct _TPNAME_NOT_O));
#endif
_currn->_prod = RULENAME_NOT_O;
_SETCOORD(_currn)
_TERMACT_NAME_NOT_O;
return ( (NODEPTR) _currn);
}/* MkNAME_NOT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_POW_O (POSITION *_coordref)
#else
NODEPTR MkNAME_POW_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_POW_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_POW_O;
#else
_currn = (_TPPNAME_POW_O) TreeNodeAlloc (sizeof (struct _TPNAME_POW_O));
#endif
_currn->_prod = RULENAME_POW_O;
_SETCOORD(_currn)
_TERMACT_NAME_POW_O;
return ( (NODEPTR) _currn);
}/* MkNAME_POW_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_MOD_O (POSITION *_coordref)
#else
NODEPTR MkNAME_MOD_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_MOD_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_MOD_O;
#else
_currn = (_TPPNAME_MOD_O) TreeNodeAlloc (sizeof (struct _TPNAME_MOD_O));
#endif
_currn->_prod = RULENAME_MOD_O;
_SETCOORD(_currn)
_TERMACT_NAME_MOD_O;
return ( (NODEPTR) _currn);
}/* MkNAME_MOD_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_DIV_O (POSITION *_coordref)
#else
NODEPTR MkNAME_DIV_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_DIV_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_DIV_O;
#else
_currn = (_TPPNAME_DIV_O) TreeNodeAlloc (sizeof (struct _TPNAME_DIV_O));
#endif
_currn->_prod = RULENAME_DIV_O;
_SETCOORD(_currn)
_TERMACT_NAME_DIV_O;
return ( (NODEPTR) _currn);
}/* MkNAME_DIV_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_QUOTIENT_O (POSITION *_coordref)
#else
NODEPTR MkNAME_QUOTIENT_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_QUOTIENT_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_QUOTIENT_O;
#else
_currn = (_TPPNAME_QUOTIENT_O) TreeNodeAlloc (sizeof (struct _TPNAME_QUOTIENT_O));
#endif
_currn->_prod = RULENAME_QUOTIENT_O;
_SETCOORD(_currn)
_TERMACT_NAME_QUOTIENT_O;
return ( (NODEPTR) _currn);
}/* MkNAME_QUOTIENT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_STAR_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkNAME_STAR_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPNAME_STAR_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_STAR_O;
#else
_currn = (_TPPNAME_STAR_O) TreeNodeAlloc (sizeof (struct _TPNAME_STAR_O));
#endif
_currn->_prod = RULENAME_STAR_O;
_SETCOORD(_currn)
_TERMACT_NAME_STAR_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "star", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkNAME_STAR_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_MINUS_O (POSITION *_coordref)
#else
NODEPTR MkNAME_MINUS_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_MINUS_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_MINUS_O;
#else
_currn = (_TPPNAME_MINUS_O) TreeNodeAlloc (sizeof (struct _TPNAME_MINUS_O));
#endif
_currn->_prod = RULENAME_MINUS_O;
_SETCOORD(_currn)
_TERMACT_NAME_MINUS_O;
return ( (NODEPTR) _currn);
}/* MkNAME_MINUS_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_PLUS_O (POSITION *_coordref)
#else
NODEPTR MkNAME_PLUS_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_PLUS_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_PLUS_O;
#else
_currn = (_TPPNAME_PLUS_O) TreeNodeAlloc (sizeof (struct _TPNAME_PLUS_O));
#endif
_currn->_prod = RULENAME_PLUS_O;
_SETCOORD(_currn)
_TERMACT_NAME_PLUS_O;
return ( (NODEPTR) _currn);
}/* MkNAME_PLUS_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_GT_EQ_O (POSITION *_coordref)
#else
NODEPTR MkNAME_GT_EQ_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_GT_EQ_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_GT_EQ_O;
#else
_currn = (_TPPNAME_GT_EQ_O) TreeNodeAlloc (sizeof (struct _TPNAME_GT_EQ_O));
#endif
_currn->_prod = RULENAME_GT_EQ_O;
_SETCOORD(_currn)
_TERMACT_NAME_GT_EQ_O;
return ( (NODEPTR) _currn);
}/* MkNAME_GT_EQ_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_GT_O (POSITION *_coordref)
#else
NODEPTR MkNAME_GT_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_GT_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_GT_O;
#else
_currn = (_TPPNAME_GT_O) TreeNodeAlloc (sizeof (struct _TPNAME_GT_O));
#endif
_currn->_prod = RULENAME_GT_O;
_SETCOORD(_currn)
_TERMACT_NAME_GT_O;
return ( (NODEPTR) _currn);
}/* MkNAME_GT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_LT_EQ_O (POSITION *_coordref)
#else
NODEPTR MkNAME_LT_EQ_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_LT_EQ_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_LT_EQ_O;
#else
_currn = (_TPPNAME_LT_EQ_O) TreeNodeAlloc (sizeof (struct _TPNAME_LT_EQ_O));
#endif
_currn->_prod = RULENAME_LT_EQ_O;
_SETCOORD(_currn)
_TERMACT_NAME_LT_EQ_O;
return ( (NODEPTR) _currn);
}/* MkNAME_LT_EQ_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_LT_O (POSITION *_coordref)
#else
NODEPTR MkNAME_LT_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_LT_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_LT_O;
#else
_currn = (_TPPNAME_LT_O) TreeNodeAlloc (sizeof (struct _TPNAME_LT_O));
#endif
_currn->_prod = RULENAME_LT_O;
_SETCOORD(_currn)
_TERMACT_NAME_LT_O;
return ( (NODEPTR) _currn);
}/* MkNAME_LT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_NOT_EQ_O (POSITION *_coordref)
#else
NODEPTR MkNAME_NOT_EQ_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_NOT_EQ_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_NOT_EQ_O;
#else
_currn = (_TPPNAME_NOT_EQ_O) TreeNodeAlloc (sizeof (struct _TPNAME_NOT_EQ_O));
#endif
_currn->_prod = RULENAME_NOT_EQ_O;
_SETCOORD(_currn)
_TERMACT_NAME_NOT_EQ_O;
return ( (NODEPTR) _currn);
}/* MkNAME_NOT_EQ_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_EQ_O (POSITION *_coordref)
#else
NODEPTR MkNAME_EQ_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_EQ_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_EQ_O;
#else
_currn = (_TPPNAME_EQ_O) TreeNodeAlloc (sizeof (struct _TPNAME_EQ_O));
#endif
_currn->_prod = RULENAME_EQ_O;
_SETCOORD(_currn)
_TERMACT_NAME_EQ_O;
return ( (NODEPTR) _currn);
}/* MkNAME_EQ_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_QUESTION_O (POSITION *_coordref)
#else
NODEPTR MkNAME_QUESTION_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_QUESTION_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_QUESTION_O;
#else
_currn = (_TPPNAME_QUESTION_O) TreeNodeAlloc (sizeof (struct _TPNAME_QUESTION_O));
#endif
_currn->_prod = RULENAME_QUESTION_O;
_SETCOORD(_currn)
_TERMACT_NAME_QUESTION_O;
return ( (NODEPTR) _currn);
}/* MkNAME_QUESTION_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_GRAVE_O (POSITION *_coordref)
#else
NODEPTR MkNAME_GRAVE_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_GRAVE_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_GRAVE_O;
#else
_currn = (_TPPNAME_GRAVE_O) TreeNodeAlloc (sizeof (struct _TPNAME_GRAVE_O));
#endif
_currn->_prod = RULENAME_GRAVE_O;
_SETCOORD(_currn)
_TERMACT_NAME_GRAVE_O;
return ( (NODEPTR) _currn);
}/* MkNAME_GRAVE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_TILDE_O (POSITION *_coordref)
#else
NODEPTR MkNAME_TILDE_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_TILDE_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_TILDE_O;
#else
_currn = (_TPPNAME_TILDE_O) TreeNodeAlloc (sizeof (struct _TPNAME_TILDE_O));
#endif
_currn->_prod = RULENAME_TILDE_O;
_SETCOORD(_currn)
_TERMACT_NAME_TILDE_O;
return ( (NODEPTR) _currn);
}/* MkNAME_TILDE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_STROKE_O (POSITION *_coordref)
#else
NODEPTR MkNAME_STROKE_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_STROKE_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_STROKE_O;
#else
_currn = (_TPPNAME_STROKE_O) TreeNodeAlloc (sizeof (struct _TPNAME_STROKE_O));
#endif
_currn->_prod = RULENAME_STROKE_O;
_SETCOORD(_currn)
_TERMACT_NAME_STROKE_O;
return ( (NODEPTR) _currn);
}/* MkNAME_STROKE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_BACKSLASH_O (POSITION *_coordref)
#else
NODEPTR MkNAME_BACKSLASH_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_BACKSLASH_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_BACKSLASH_O;
#else
_currn = (_TPPNAME_BACKSLASH_O) TreeNodeAlloc (sizeof (struct _TPNAME_BACKSLASH_O));
#endif
_currn->_prod = RULENAME_BACKSLASH_O;
_SETCOORD(_currn)
_TERMACT_NAME_BACKSLASH_O;
return ( (NODEPTR) _currn);
}/* MkNAME_BACKSLASH_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_STR_IN_O (POSITION *_coordref)
#else
NODEPTR MkNAME_STR_IN_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_STR_IN_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_STR_IN_O;
#else
_currn = (_TPPNAME_STR_IN_O) TreeNodeAlloc (sizeof (struct _TPNAME_STR_IN_O));
#endif
_currn->_prod = RULENAME_STR_IN_O;
_SETCOORD(_currn)
_TERMACT_NAME_STR_IN_O;
return ( (NODEPTR) _currn);
}/* MkNAME_STR_IN_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_STR_OUT_O (POSITION *_coordref)
#else
NODEPTR MkNAME_STR_OUT_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_STR_OUT_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_STR_OUT_O;
#else
_currn = (_TPPNAME_STR_OUT_O) TreeNodeAlloc (sizeof (struct _TPNAME_STR_OUT_O));
#endif
_currn->_prod = RULENAME_STR_OUT_O;
_SETCOORD(_currn)
_TERMACT_NAME_STR_OUT_O;
return ( (NODEPTR) _currn);
}/* MkNAME_STR_OUT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkNAME_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_EMPTY_O;
#else
_currn = (_TPPNAME_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPNAME_EMPTY_O));
#endif
_currn->_prod = RULENAME_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_NAME_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkNAME_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_OBJ_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkNAME_OBJ_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPNAME_OBJ_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_OBJ_O;
#else
_currn = (_TPPNAME_OBJ_O) TreeNodeAlloc (sizeof (struct _TPNAME_OBJ_O));
#endif
_currn->_prod = RULENAME_OBJ_O;
_currn->_desc1 = (_TSPobj_id_use) Mkobj_id_use (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE NAME_OBJ_O: root of subtree no. 1 can not be made a obj_id_use node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_NAME_OBJ_O;
return ( (NODEPTR) _currn);
}/* MkNAME_OBJ_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_LEFT_SQ_BRACKET_O (POSITION *_coordref)
#else
NODEPTR MkNAME_LEFT_SQ_BRACKET_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_LEFT_SQ_BRACKET_O _currn;
#ifdef __cplusplus
_currn = new _TPNAME_LEFT_SQ_BRACKET_O;
#else
_currn = (_TPPNAME_LEFT_SQ_BRACKET_O) TreeNodeAlloc (sizeof (struct _TPNAME_LEFT_SQ_BRACKET_O));
#endif
_currn->_prod = RULENAME_LEFT_SQ_BRACKET_O;
_SETCOORD(_currn)
_TERMACT_NAME_LEFT_SQ_BRACKET_O;
return ( (NODEPTR) _currn);
}/* MkNAME_LEFT_SQ_BRACKET_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkEXPRESSION_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPEXPRESSION_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_EMPTY_O;
#else
_currn = (_TPPEXPRESSION_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_EMPTY_O));
#endif
_currn->_prod = RULEEXPRESSION_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_EXPRESSION_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_AND_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkEXPRESSION_AND_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPEXPRESSION_AND_O _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_AND_O;
#else
_currn = (_TPPEXPRESSION_AND_O) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_AND_O));
#endif
_currn->_prod = RULEEXPRESSION_AND_O;
_currn->_desc1 = (_TSPexpression) Mkexpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_AND_O: root of subtree no. 1 can not be made a expression node ", 0, _coordref);
_currn->_desc2 = (_TSPexpression) Mkexpression (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_AND_O: root of subtree no. 2 can not be made a expression node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_EXPRESSION_AND_O;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_AND_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_OR_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkEXPRESSION_OR_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPEXPRESSION_OR_O _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_OR_O;
#else
_currn = (_TPPEXPRESSION_OR_O) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_OR_O));
#endif
_currn->_prod = RULEEXPRESSION_OR_O;
_currn->_desc1 = (_TSPexpression) Mkexpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_OR_O: root of subtree no. 1 can not be made a expression node ", 0, _coordref);
_currn->_desc2 = (_TSPexpression) Mkexpression (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_OR_O: root of subtree no. 2 can not be made a expression node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_EXPRESSION_OR_O;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_OR_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_STREAM_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_STREAM_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_STREAM_O _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_STREAM_O;
#else
_currn = (_TPPEXPRESSION_STREAM_O) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_STREAM_O));
#endif
_currn->_prod = RULEEXPRESSION_STREAM_O;
_currn->_desc1 = (_TSPdirect_stream_call) Mkdirect_stream_call (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_STREAM_O: root of subtree no. 1 can not be made a direct_stream_call node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_STREAM_O;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_STREAM_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_METH_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_METH_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_METH_O _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_METH_O;
#else
_currn = (_TPPEXPRESSION_METH_O) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_METH_O));
#endif
_currn->_prod = RULEEXPRESSION_METH_O;
_currn->_desc1 = (_TSPstd_method_call) Mkstd_method_call (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_METH_O: root of subtree no. 1 can not be made a std_method_call node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_METH_O;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_METH_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_COERCION_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_COERCION_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_COERCION_O _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_COERCION_O;
#else
_currn = (_TPPEXPRESSION_COERCION_O) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_COERCION_O));
#endif
_currn->_prod = RULEEXPRESSION_COERCION_O;
_currn->_desc1 = (_TSPcoercion) Mkcoercion (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_COERCION_O: root of subtree no. 1 can not be made a coercion node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_COERCION_O;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_COERCION_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_VALUE_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_VALUE_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_VALUE_O _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_VALUE_O;
#else
_currn = (_TPPEXPRESSION_VALUE_O) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_VALUE_O));
#endif
_currn->_prod = RULEEXPRESSION_VALUE_O;
_currn->_desc1 = (_TSPvalue) Mkvalue (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_VALUE_O: root of subtree no. 1 can not be made a value node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_VALUE_O;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_VALUE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_BOUND_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_BOUND_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_BOUND_O _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_BOUND_O;
#else
_currn = (_TPPEXPRESSION_BOUND_O) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_BOUND_O));
#endif
_currn->_prod = RULEEXPRESSION_BOUND_O;
_currn->_desc1 = (_TSPbound_method) Mkbound_method (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_BOUND_O: root of subtree no. 1 can not be made a bound_method node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_BOUND_O;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_BOUND_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_CONS_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_CONS_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_CONS_O _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_CONS_O;
#else
_currn = (_TPPEXPRESSION_CONS_O) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_CONS_O));
#endif
_currn->_prod = RULEEXPRESSION_CONS_O;
_currn->_desc1 = (_TSPtype_constructor) Mktype_constructor (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_CONS_O: root of subtree no. 1 can not be made a type_constructor node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_CONS_O;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_CONS_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_STAR_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkEXPRESSION_STAR_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPEXPRESSION_STAR_O _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_STAR_O;
#else
_currn = (_TPPEXPRESSION_STAR_O) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_STAR_O));
#endif
_currn->_prod = RULEEXPRESSION_STAR_O;
_SETCOORD(_currn)
_TERMACT_EXPRESSION_STAR_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "star", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkEXPRESSION_STAR_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDESIGNATOR_QUAL_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkDESIGNATOR_QUAL_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPDESIGNATOR_QUAL_O _currn;
#ifdef __cplusplus
_currn = new _TPDESIGNATOR_QUAL_O;
#else
_currn = (_TPPDESIGNATOR_QUAL_O) TreeNodeAlloc (sizeof (struct _TPDESIGNATOR_QUAL_O));
#endif
_currn->_prod = RULEDESIGNATOR_QUAL_O;
_currn->_desc1 = (_TSPqualification) Mkqualification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE DESIGNATOR_QUAL_O: root of subtree no. 1 can not be made a qualification node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_DESIGNATOR_QUAL_O;
return ( (NODEPTR) _currn);
}/* MkDESIGNATOR_QUAL_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDESIGNATOR_METH_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkDESIGNATOR_METH_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPDESIGNATOR_METH_O _currn;
#ifdef __cplusplus
_currn = new _TPDESIGNATOR_METH_O;
#else
_currn = (_TPPDESIGNATOR_METH_O) TreeNodeAlloc (sizeof (struct _TPDESIGNATOR_METH_O));
#endif
_currn->_prod = RULEDESIGNATOR_METH_O;
_currn->_desc1 = (_TSPstd_method_call) Mkstd_method_call (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE DESIGNATOR_METH_O: root of subtree no. 1 can not be made a std_method_call node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_DESIGNATOR_METH_O;
return ( (NODEPTR) _currn);
}/* MkDESIGNATOR_METH_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDESIGNATOR_EXP_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkDESIGNATOR_EXP_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPDESIGNATOR_EXP_O _currn;
#ifdef __cplusplus
_currn = new _TPDESIGNATOR_EXP_O;
#else
_currn = (_TPPDESIGNATOR_EXP_O) TreeNodeAlloc (sizeof (struct _TPDESIGNATOR_EXP_O));
#endif
_currn->_prod = RULEDESIGNATOR_EXP_O;
_currn->_desc1 = (_TSPexpression) Mkexpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE DESIGNATOR_EXP_O: root of subtree no. 1 can not be made a expression node ", 0, _coordref);
_currn->_desc2 = (_TSPname) Mkname (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE DESIGNATOR_EXP_O: root of subtree no. 2 can not be made a name node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_DESIGNATOR_EXP_O;
return ( (NODEPTR) _currn);
}/* MkDESIGNATOR_EXP_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDESIGNATOR_NAME_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkDESIGNATOR_NAME_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPDESIGNATOR_NAME_O _currn;
#ifdef __cplusplus
_currn = new _TPDESIGNATOR_NAME_O;
#else
_currn = (_TPPDESIGNATOR_NAME_O) TreeNodeAlloc (sizeof (struct _TPDESIGNATOR_NAME_O));
#endif
_currn->_prod = RULEDESIGNATOR_NAME_O;
_currn->_desc1 = (_TSPname) Mkname (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE DESIGNATOR_NAME_O: root of subtree no. 1 can not be made a name node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_DESIGNATOR_NAME_O;
return ( (NODEPTR) _currn);
}/* MkDESIGNATOR_NAME_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENT_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkARGUMENT_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPARGUMENT_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENT_EMPTY_O;
#else
_currn = (_TPPARGUMENT_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPARGUMENT_EMPTY_O));
#endif
_currn->_prod = RULEARGUMENT_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_ARGUMENT_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkARGUMENT_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENT_INOUT_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkARGUMENT_INOUT_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPARGUMENT_INOUT_O _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENT_INOUT_O;
#else
_currn = (_TPPARGUMENT_INOUT_O) TreeNodeAlloc (sizeof (struct _TPARGUMENT_INOUT_O));
#endif
_currn->_prod = RULEARGUMENT_INOUT_O;
_currn->_desc1 = (_TSPdesignator) Mkdesignator (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ARGUMENT_INOUT_O: root of subtree no. 1 can not be made a designator node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ARGUMENT_INOUT_O;
return ( (NODEPTR) _currn);
}/* MkARGUMENT_INOUT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENT_OUT_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkARGUMENT_OUT_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPARGUMENT_OUT_O _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENT_OUT_O;
#else
_currn = (_TPPARGUMENT_OUT_O) TreeNodeAlloc (sizeof (struct _TPARGUMENT_OUT_O));
#endif
_currn->_prod = RULEARGUMENT_OUT_O;
_currn->_desc1 = (_TSPdesignator) Mkdesignator (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ARGUMENT_OUT_O: root of subtree no. 1 can not be made a designator node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ARGUMENT_OUT_O;
return ( (NODEPTR) _currn);
}/* MkARGUMENT_OUT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENT_EXP_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkARGUMENT_EXP_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPARGUMENT_EXP_O _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENT_EXP_O;
#else
_currn = (_TPPARGUMENT_EXP_O) TreeNodeAlloc (sizeof (struct _TPARGUMENT_EXP_O));
#endif
_currn->_prod = RULEARGUMENT_EXP_O;
_currn->_desc1 = (_TSPexpression) Mkexpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ARGUMENT_EXP_O: root of subtree no. 1 can not be made a expression node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_ARGUMENT_EXP_O;
return ( (NODEPTR) _currn);
}/* MkARGUMENT_EXP_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENTS_LST_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkARGUMENTS_LST_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPARGUMENTS_LST_O _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENTS_LST_O;
#else
_currn = (_TPPARGUMENTS_LST_O) TreeNodeAlloc (sizeof (struct _TPARGUMENTS_LST_O));
#endif
_currn->_prod = RULEARGUMENTS_LST_O;
_currn->_desc1 = (_TSParguments) Mkarguments (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ARGUMENTS_LST_O: root of subtree no. 1 can not be made a arguments node ", 0, _coordref);
_currn->_desc2 = (_TSPargument) Mkargument (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ARGUMENTS_LST_O: root of subtree no. 2 can not be made a argument node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ARGUMENTS_LST_O;
return ( (NODEPTR) _currn);
}/* MkARGUMENTS_LST_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENTS_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkARGUMENTS_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPARGUMENTS_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENTS_EMPTY_O;
#else
_currn = (_TPPARGUMENTS_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPARGUMENTS_EMPTY_O));
#endif
_currn->_prod = RULEARGUMENTS_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_ARGUMENTS_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkARGUMENTS_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBOUND_EXP_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkBOUND_EXP_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPBOUND_EXP_O _currn;
#ifdef __cplusplus
_currn = new _TPBOUND_EXP_O;
#else
_currn = (_TPPBOUND_EXP_O) TreeNodeAlloc (sizeof (struct _TPBOUND_EXP_O));
#endif
_currn->_prod = RULEBOUND_EXP_O;
_currn->_desc1 = (_TSPexpression) Mkexpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BOUND_EXP_O: root of subtree no. 1 can not be made a expression node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_BOUND_EXP_O;
return ( (NODEPTR) _currn);
}/* MkBOUND_EXP_O */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _MkboundBOUNDS_O (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _MkboundBOUNDS_O (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_boundBOUNDS_O _new;
#ifdef __cplusplus
	_new = new _TPLST_boundBOUNDS_O;
#else
	_new = (_TPPLST_boundBOUNDS_O) TreeNodeAlloc (sizeof (struct _TPLST_boundBOUNDS_O));
#endif
	_new->_prod = RULELST_boundBOUNDS_O;
	_new->_desc1 = (_TSPbound)elem;
	_new->_desc2 = (_TSPLST_bounds)_new;
	{_TPPLST_boundBOUNDS_O _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_boundBOUNDS_O;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemBOUNDS_O (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemBOUNDS_O (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBbound_method)) 
		return _MkboundBOUNDS_O (_coordref, Mkbound (_coordref, t));
	if (IsSymb (t, SYMBcoercion)) 
		return _MkboundBOUNDS_O (_coordref, Mkbound (_coordref, t));
	if (IsSymb (t, SYMBstd_method_call)) 
		return _MkboundBOUNDS_O (_coordref, Mkbound (_coordref, t));
	if (IsSymb (t, SYMBdirect_stream_call)) 
		return _MkboundBOUNDS_O (_coordref, Mkbound (_coordref, t));
	if (IsSymb (t, SYMBtype_constructor)) 
		return _MkboundBOUNDS_O (_coordref, Mkbound (_coordref, t));
	if (IsSymb (t, SYMBnamed_expressions)) 
		return _MkboundBOUNDS_O (_coordref, Mkbound (_coordref, t));
	if (IsSymb (t, SYMBaggregate)) 
		return _MkboundBOUNDS_O (_coordref, Mkbound (_coordref, t));
	if (IsSymb (t, SYMBstringconstant)) 
		return _MkboundBOUNDS_O (_coordref, Mkbound (_coordref, t));
	if (IsSymb (t, SYMBstringconstants)) 
		return _MkboundBOUNDS_O (_coordref, Mkbound (_coordref, t));
	if (IsSymb (t, SYMBvalue)) 
		return _MkboundBOUNDS_O (_coordref, Mkbound (_coordref, t));
	if (IsSymb (t, SYMBexpression)) 
		return _MkboundBOUNDS_O (_coordref, Mkbound (_coordref, t));
	if (IsSymb (t, SYMBbound)) 
		return _MkboundBOUNDS_O (_coordref, Mkbound (_coordref, t));
	message (DEADLY, "a BOUNDS_O list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2BOUNDS_O (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2BOUNDS_O (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_bounds)
	l =_ElemBOUNDS_O (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_bounds)
	r = _ElemBOUNDS_O (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0BOUNDS_O)r)->_desc2);
((_TPPLST_0BOUNDS_O)r)->_desc2 = ((_TPPLST_0BOUNDS_O)l)->_desc2;
((_TPPLST_0BOUNDS_O)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBOUNDS_O (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkBOUNDS_O (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPBOUNDS_O root;
	_TPPLST_0BOUNDS_O list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0BOUNDS_O)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_bounds)
		t = _ElemBOUNDS_O (_coordref, t);
	remain = (_TPPLST_0BOUNDS_O)(((_TPPLST_0BOUNDS_O) t)->_desc2);
	((_TPPLST_0BOUNDS_O) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0BOUNDS_O;
#else
list = (_TPPLST_0BOUNDS_O) TreeNodeAlloc (sizeof (struct _TPLST_0BOUNDS_O));
#endif
list->_prod = RULELST_0BOUNDS_O;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0BOUNDS_O)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_boundBOUNDS_O)
	{_TPPLST_boundBOUNDS_O _currn = _currn;
	 _TERMACT_LST_boundBOUNDS_O;
	} this code has been moved to _ElemBOUNDS_O*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPBOUNDS_O;
#else
root = (_TPPBOUNDS_O) TreeNodeAlloc (sizeof (struct _TPBOUNDS_O));
#endif
root->_prod = RULEBOUNDS_O;
root->_desc1 = (_TSPLST_bounds)list;
{ _TPPBOUNDS_O _currn = root;
  _SETCOORD(_currn)
  _TERMACT_BOUNDS_O;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ID_USE_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkCLASS_ID_USE_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPCLASS_ID_USE_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ID_USE_O;
#else
_currn = (_TPPCLASS_ID_USE_O) TreeNodeAlloc (sizeof (struct _TPCLASS_ID_USE_O));
#endif
_currn->_prod = RULECLASS_ID_USE_O;
_SETCOORD(_currn)
_TERMACT_CLASS_ID_USE_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkCLASS_ID_USE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_KIND_INOUT_O (POSITION *_coordref)
#else
NODEPTR MkPARAMETER_KIND_INOUT_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPPARAMETER_KIND_INOUT_O _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_KIND_INOUT_O;
#else
_currn = (_TPPPARAMETER_KIND_INOUT_O) TreeNodeAlloc (sizeof (struct _TPPARAMETER_KIND_INOUT_O));
#endif
_currn->_prod = RULEPARAMETER_KIND_INOUT_O;
_SETCOORD(_currn)
_TERMACT_PARAMETER_KIND_INOUT_O;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_KIND_INOUT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_KIND_OUT_O (POSITION *_coordref)
#else
NODEPTR MkPARAMETER_KIND_OUT_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPPARAMETER_KIND_OUT_O _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_KIND_OUT_O;
#else
_currn = (_TPPPARAMETER_KIND_OUT_O) TreeNodeAlloc (sizeof (struct _TPPARAMETER_KIND_OUT_O));
#endif
_currn->_prod = RULEPARAMETER_KIND_OUT_O;
_SETCOORD(_currn)
_TERMACT_PARAMETER_KIND_OUT_O;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_KIND_OUT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_KIND_ONCE_O (POSITION *_coordref)
#else
NODEPTR MkPARAMETER_KIND_ONCE_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPPARAMETER_KIND_ONCE_O _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_KIND_ONCE_O;
#else
_currn = (_TPPPARAMETER_KIND_ONCE_O) TreeNodeAlloc (sizeof (struct _TPPARAMETER_KIND_ONCE_O));
#endif
_currn->_prod = RULEPARAMETER_KIND_ONCE_O;
_SETCOORD(_currn)
_TERMACT_PARAMETER_KIND_ONCE_O;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_KIND_ONCE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_KIND_IN_O (POSITION *_coordref)
#else
NODEPTR MkPARAMETER_KIND_IN_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPPARAMETER_KIND_IN_O _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_KIND_IN_O;
#else
_currn = (_TPPPARAMETER_KIND_IN_O) TreeNodeAlloc (sizeof (struct _TPPARAMETER_KIND_IN_O));
#endif
_currn->_prod = RULEPARAMETER_KIND_IN_O;
_SETCOORD(_currn)
_TERMACT_PARAMETER_KIND_IN_O;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_KIND_IN_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_TYPE_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkPARAMETER_TYPE_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPPARAMETER_TYPE_O _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_TYPE_O;
#else
_currn = (_TPPPARAMETER_TYPE_O) TreeNodeAlloc (sizeof (struct _TPPARAMETER_TYPE_O));
#endif
_currn->_prod = RULEPARAMETER_TYPE_O;
_currn->_desc1 = (_TSPparameter_kind) Mkparameter_kind (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE PARAMETER_TYPE_O: root of subtree no. 1 can not be made a parameter_kind node ", 0, _coordref);
_currn->_desc2 = (_TSPtype_specifier) Mktype_specifier (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE PARAMETER_TYPE_O: root of subtree no. 2 can not be made a type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_PARAMETER_TYPE_O;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_TYPE_O */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _Mkparameter_typePARAMETER_TYPES_O (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _Mkparameter_typePARAMETER_TYPES_O (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_parameter_typePARAMETER_TYPES_O _new;
#ifdef __cplusplus
	_new = new _TPLST_parameter_typePARAMETER_TYPES_O;
#else
	_new = (_TPPLST_parameter_typePARAMETER_TYPES_O) TreeNodeAlloc (sizeof (struct _TPLST_parameter_typePARAMETER_TYPES_O));
#endif
	_new->_prod = RULELST_parameter_typePARAMETER_TYPES_O;
	_new->_desc1 = (_TSPparameter_type)elem;
	_new->_desc2 = (_TSPLST_parameter_types)_new;
	{_TPPLST_parameter_typePARAMETER_TYPES_O _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_parameter_typePARAMETER_TYPES_O;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemPARAMETER_TYPES_O (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemPARAMETER_TYPES_O (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBparameter_type)) 
		return _Mkparameter_typePARAMETER_TYPES_O (_coordref, Mkparameter_type (_coordref, t));
	message (DEADLY, "a PARAMETER_TYPES_O list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2PARAMETER_TYPES_O (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2PARAMETER_TYPES_O (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_parameter_types)
	l =_ElemPARAMETER_TYPES_O (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_parameter_types)
	r = _ElemPARAMETER_TYPES_O (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0PARAMETER_TYPES_O)r)->_desc2);
((_TPPLST_0PARAMETER_TYPES_O)r)->_desc2 = ((_TPPLST_0PARAMETER_TYPES_O)l)->_desc2;
((_TPPLST_0PARAMETER_TYPES_O)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_TYPES_O (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkPARAMETER_TYPES_O (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPPARAMETER_TYPES_O root;
	_TPPLST_0PARAMETER_TYPES_O list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0PARAMETER_TYPES_O)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_parameter_types)
		t = _ElemPARAMETER_TYPES_O (_coordref, t);
	remain = (_TPPLST_0PARAMETER_TYPES_O)(((_TPPLST_0PARAMETER_TYPES_O) t)->_desc2);
	((_TPPLST_0PARAMETER_TYPES_O) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0PARAMETER_TYPES_O;
#else
list = (_TPPLST_0PARAMETER_TYPES_O) TreeNodeAlloc (sizeof (struct _TPLST_0PARAMETER_TYPES_O));
#endif
list->_prod = RULELST_0PARAMETER_TYPES_O;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0PARAMETER_TYPES_O)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_parameter_typePARAMETER_TYPES_O)
	{_TPPLST_parameter_typePARAMETER_TYPES_O _currn = _currn;
	 _TERMACT_LST_parameter_typePARAMETER_TYPES_O;
	} this code has been moved to _ElemPARAMETER_TYPES_O*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPPARAMETER_TYPES_O;
#else
root = (_TPPPARAMETER_TYPES_O) TreeNodeAlloc (sizeof (struct _TPPARAMETER_TYPES_O));
#endif
root->_prod = RULEPARAMETER_TYPES_O;
root->_desc1 = (_TSPLST_parameter_types)list;
{ _TPPPARAMETER_TYPES_O _currn = root;
  _SETCOORD(_currn)
  _TERMACT_PARAMETER_TYPES_O;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_SPECIFICATION_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkMETHOD_SPECIFICATION_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPMETHOD_SPECIFICATION_O _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_SPECIFICATION_O;
#else
_currn = (_TPPMETHOD_SPECIFICATION_O) TreeNodeAlloc (sizeof (struct _TPMETHOD_SPECIFICATION_O));
#endif
_currn->_prod = RULEMETHOD_SPECIFICATION_O;
_currn->_desc1 = (_TSPparameter_types) Mkparameter_types (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_SPECIFICATION_O: root of subtree no. 1 can not be made a parameter_types node ", 0, _coordref);
_currn->_desc2 = (_TSPtype_specifier) Mktype_specifier (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_SPECIFICATION_O: root of subtree no. 2 can not be made a type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_METHOD_SPECIFICATION_O;
return ( (NODEPTR) _currn);
}/* MkMETHOD_SPECIFICATION_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ARGUMENT_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkCLASS_ARGUMENT_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPCLASS_ARGUMENT_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ARGUMENT_O;
#else
_currn = (_TPPCLASS_ARGUMENT_O) TreeNodeAlloc (sizeof (struct _TPCLASS_ARGUMENT_O));
#endif
_currn->_prod = RULECLASS_ARGUMENT_O;
_currn->_desc1 = (_TSPclass_specifier) Mkclass_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_ARGUMENT_O: root of subtree no. 1 can not be made a class_specifier node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_CLASS_ARGUMENT_O;
return ( (NODEPTR) _currn);
}/* MkCLASS_ARGUMENT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ARGUMENTS_LST_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCLASS_ARGUMENTS_LST_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCLASS_ARGUMENTS_LST_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ARGUMENTS_LST_O;
#else
_currn = (_TPPCLASS_ARGUMENTS_LST_O) TreeNodeAlloc (sizeof (struct _TPCLASS_ARGUMENTS_LST_O));
#endif
_currn->_prod = RULECLASS_ARGUMENTS_LST_O;
_currn->_desc1 = (_TSPclass_arguments) Mkclass_arguments (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_ARGUMENTS_LST_O: root of subtree no. 1 can not be made a class_arguments node ", 0, _coordref);
_currn->_desc2 = (_TSPclass_argument) Mkclass_argument (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_ARGUMENTS_LST_O: root of subtree no. 2 can not be made a class_argument node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_ARGUMENTS_LST_O;
return ( (NODEPTR) _currn);
}/* MkCLASS_ARGUMENTS_LST_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ARGUMENTS_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkCLASS_ARGUMENTS_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ARGUMENTS_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ARGUMENTS_EMPTY_O;
#else
_currn = (_TPPCLASS_ARGUMENTS_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPCLASS_ARGUMENTS_EMPTY_O));
#endif
_currn->_prod = RULECLASS_ARGUMENTS_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_CLASS_ARGUMENTS_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkCLASS_ARGUMENTS_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_SPECIFIER_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkCLASS_SPECIFIER_O (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPCLASS_SPECIFIER_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_SPECIFIER_O;
#else
_currn = (_TPPCLASS_SPECIFIER_O) TreeNodeAlloc (sizeof (struct _TPCLASS_SPECIFIER_O));
#endif
_currn->_prod = RULECLASS_SPECIFIER_O;
_currn->_desc1 = (_TSPclass_id_use) Mkclass_id_use (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_SPECIFIER_O: root of subtree no. 1 can not be made a class_id_use node ", 0, _coordref);
_currn->_desc2 = (_TSPbounds) Mkbounds (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_SPECIFIER_O: root of subtree no. 2 can not be made a bounds node ", 0, _coordref);
_currn->_desc3 = (_TSPclass_arguments) Mkclass_arguments (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_SPECIFIER_O: root of subtree no. 3 can not be made a class_arguments node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_SPECIFIER_O;
return ( (NODEPTR) _currn);
}/* MkCLASS_SPECIFIER_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_STREAM_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_SPECIFIER_STREAM_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_SPECIFIER_STREAM_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_STREAM_O;
#else
_currn = (_TPPTYPE_SPECIFIER_STREAM_O) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_STREAM_O));
#endif
_currn->_prod = RULETYPE_SPECIFIER_STREAM_O;
_currn->_desc1 = (_TSPmethod_specification) Mkmethod_specification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIER_STREAM_O: root of subtree no. 1 can not be made a method_specification node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_STREAM_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_STREAM_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_SAME_O (POSITION *_coordref)
#else
NODEPTR MkTYPE_SPECIFIER_SAME_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPTYPE_SPECIFIER_SAME_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_SAME_O;
#else
_currn = (_TPPTYPE_SPECIFIER_SAME_O) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_SAME_O));
#endif
_currn->_prod = RULETYPE_SPECIFIER_SAME_O;
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_SAME_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_SAME_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_SAME_POLY_O (POSITION *_coordref)
#else
NODEPTR MkTYPE_SPECIFIER_SAME_POLY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPTYPE_SPECIFIER_SAME_POLY_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_SAME_POLY_O;
#else
_currn = (_TPPTYPE_SPECIFIER_SAME_POLY_O) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_SAME_POLY_O));
#endif
_currn->_prod = RULETYPE_SPECIFIER_SAME_POLY_O;
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_SAME_POLY_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_SAME_POLY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_PROC_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_SPECIFIER_PROC_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_SPECIFIER_PROC_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_PROC_O;
#else
_currn = (_TPPTYPE_SPECIFIER_PROC_O) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_PROC_O));
#endif
_currn->_prod = RULETYPE_SPECIFIER_PROC_O;
_currn->_desc1 = (_TSPmethod_specification) Mkmethod_specification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIER_PROC_O: root of subtree no. 1 can not be made a method_specification node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_PROC_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_PROC_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkTYPE_SPECIFIER_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPTYPE_SPECIFIER_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_EMPTY_O;
#else
_currn = (_TPPTYPE_SPECIFIER_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_EMPTY_O));
#endif
_currn->_prod = RULETYPE_SPECIFIER_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_DES_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkTYPE_SPECIFIER_DES_O (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPTYPE_SPECIFIER_DES_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_DES_O;
#else
_currn = (_TPPTYPE_SPECIFIER_DES_O) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_DES_O));
#endif
_currn->_prod = RULETYPE_SPECIFIER_DES_O;
_currn->_desc1 = (_TSPdesignator) Mkdesignator (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIER_DES_O: root of subtree no. 1 can not be made a designator node ", 0, _coordref);
_currn->_desc2 = (_TSParguments) Mkarguments (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIER_DES_O: root of subtree no. 2 can not be made a arguments node ", 0, _coordref);
if (_desc3 == NULLNODEPTR)
	_currn->_desc3 = (_TSPclass_specifier) NULLNODEPTR;
else	_currn->_desc3 = (_TSPclass_specifier) Mkclass_specifier (_coordref, _desc3);
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_DES_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_DES_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_CL_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_SPECIFIER_CL_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_SPECIFIER_CL_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_CL_O;
#else
_currn = (_TPPTYPE_SPECIFIER_CL_O) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_CL_O));
#endif
_currn->_prod = RULETYPE_SPECIFIER_CL_O;
_currn->_desc1 = (_TSPclass_specifier) Mkclass_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIER_CL_O: root of subtree no. 1 can not be made a class_specifier node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_CL_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_CL_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_CL_POLY_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_SPECIFIER_CL_POLY_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_SPECIFIER_CL_POLY_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_CL_POLY_O;
#else
_currn = (_TPPTYPE_SPECIFIER_CL_POLY_O) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_CL_POLY_O));
#endif
_currn->_prod = RULETYPE_SPECIFIER_CL_POLY_O;
_currn->_desc1 = (_TSPclass_specifier) Mkclass_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIER_CL_POLY_O: root of subtree no. 1 can not be made a class_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_CL_POLY_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_CL_POLY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIERS_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkTYPE_SPECIFIERS_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPTYPE_SPECIFIERS_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIERS_EMPTY_O;
#else
_currn = (_TPPTYPE_SPECIFIERS_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIERS_EMPTY_O));
#endif
_currn->_prod = RULETYPE_SPECIFIERS_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIERS_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIERS_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIERS_LST_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPE_SPECIFIERS_LST_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPE_SPECIFIERS_LST_O _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIERS_LST_O;
#else
_currn = (_TPPTYPE_SPECIFIERS_LST_O) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIERS_LST_O));
#endif
_currn->_prod = RULETYPE_SPECIFIERS_LST_O;
_currn->_desc1 = (_TSPtype_specifiers) Mktype_specifiers (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIERS_LST_O: root of subtree no. 1 can not be made a type_specifiers node ", 0, _coordref);
_currn->_desc2 = (_TSPtype_specifier) Mktype_specifier (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIERS_LST_O: root of subtree no. 2 can not be made a type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIERS_LST_O;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIERS_LST_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_PARAM_ID_DEF_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkCLASS_PARAM_ID_DEF_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPCLASS_PARAM_ID_DEF_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_PARAM_ID_DEF_O;
#else
_currn = (_TPPCLASS_PARAM_ID_DEF_O) TreeNodeAlloc (sizeof (struct _TPCLASS_PARAM_ID_DEF_O));
#endif
_currn->_prod = RULECLASS_PARAM_ID_DEF_O;
_SETCOORD(_currn)
_TERMACT_CLASS_PARAM_ID_DEF_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkCLASS_PARAM_ID_DEF_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_PARAMETER_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCLASS_PARAMETER_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCLASS_PARAMETER_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_PARAMETER_O;
#else
_currn = (_TPPCLASS_PARAMETER_O) TreeNodeAlloc (sizeof (struct _TPCLASS_PARAMETER_O));
#endif
_currn->_prod = RULECLASS_PARAMETER_O;
_currn->_desc1 = (_TSPclass_param_id_def) Mkclass_param_id_def (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_PARAMETER_O: root of subtree no. 1 can not be made a class_param_id_def node ", 0, _coordref);
_currn->_desc2 = (_TSPtype_specifiers) Mktype_specifiers (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_PARAMETER_O: root of subtree no. 2 can not be made a type_specifiers node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_PARAMETER_O;
return ( (NODEPTR) _currn);
}/* MkCLASS_PARAMETER_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkIDENT_DEF_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkIDENT_DEF_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPIDENT_DEF_O _currn;
#ifdef __cplusplus
_currn = new _TPIDENT_DEF_O;
#else
_currn = (_TPPIDENT_DEF_O) TreeNodeAlloc (sizeof (struct _TPIDENT_DEF_O));
#endif
_currn->_prod = RULEIDENT_DEF_O;
_SETCOORD(_currn)
_TERMACT_IDENT_DEF_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkIDENT_DEF_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBOUND_IDENTIFIER_STAR_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkBOUND_IDENTIFIER_STAR_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPBOUND_IDENTIFIER_STAR_O _currn;
#ifdef __cplusplus
_currn = new _TPBOUND_IDENTIFIER_STAR_O;
#else
_currn = (_TPPBOUND_IDENTIFIER_STAR_O) TreeNodeAlloc (sizeof (struct _TPBOUND_IDENTIFIER_STAR_O));
#endif
_currn->_prod = RULEBOUND_IDENTIFIER_STAR_O;
_SETCOORD(_currn)
_TERMACT_BOUND_IDENTIFIER_STAR_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "star", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkBOUND_IDENTIFIER_STAR_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBOUND_IDENTIFIER_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkBOUND_IDENTIFIER_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPBOUND_IDENTIFIER_O _currn;
#ifdef __cplusplus
_currn = new _TPBOUND_IDENTIFIER_O;
#else
_currn = (_TPPBOUND_IDENTIFIER_O) TreeNodeAlloc (sizeof (struct _TPBOUND_IDENTIFIER_O));
#endif
_currn->_prod = RULEBOUND_IDENTIFIER_O;
_currn->_desc1 = (_TSPident_def) Mkident_def (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BOUND_IDENTIFIER_O: root of subtree no. 1 can not be made a ident_def node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_BOUND_IDENTIFIER_O;
return ( (NODEPTR) _currn);
}/* MkBOUND_IDENTIFIER_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_PARAMETERS_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkCLASS_PARAMETERS_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_PARAMETERS_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_PARAMETERS_EMPTY_O;
#else
_currn = (_TPPCLASS_PARAMETERS_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPCLASS_PARAMETERS_EMPTY_O));
#endif
_currn->_prod = RULECLASS_PARAMETERS_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_CLASS_PARAMETERS_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkCLASS_PARAMETERS_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_PARAMETERS_LST_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCLASS_PARAMETERS_LST_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCLASS_PARAMETERS_LST_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_PARAMETERS_LST_O;
#else
_currn = (_TPPCLASS_PARAMETERS_LST_O) TreeNodeAlloc (sizeof (struct _TPCLASS_PARAMETERS_LST_O));
#endif
_currn->_prod = RULECLASS_PARAMETERS_LST_O;
_currn->_desc1 = (_TSPclass_parameters) Mkclass_parameters (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_PARAMETERS_LST_O: root of subtree no. 1 can not be made a class_parameters node ", 0, _coordref);
_currn->_desc2 = (_TSPclass_parameter) Mkclass_parameter (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_PARAMETERS_LST_O: root of subtree no. 2 can not be made a class_parameter node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_PARAMETERS_LST_O;
return ( (NODEPTR) _currn);
}/* MkCLASS_PARAMETERS_LST_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_BOUNDS_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkCLASS_BOUNDS_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_BOUNDS_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_BOUNDS_EMPTY_O;
#else
_currn = (_TPPCLASS_BOUNDS_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPCLASS_BOUNDS_EMPTY_O));
#endif
_currn->_prod = RULECLASS_BOUNDS_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_CLASS_BOUNDS_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkCLASS_BOUNDS_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_BOUNDS_LST_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCLASS_BOUNDS_LST_O (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCLASS_BOUNDS_LST_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_BOUNDS_LST_O;
#else
_currn = (_TPPCLASS_BOUNDS_LST_O) TreeNodeAlloc (sizeof (struct _TPCLASS_BOUNDS_LST_O));
#endif
_currn->_prod = RULECLASS_BOUNDS_LST_O;
_currn->_desc1 = (_TSPclass_bounds) Mkclass_bounds (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_BOUNDS_LST_O: root of subtree no. 1 can not be made a class_bounds node ", 0, _coordref);
_currn->_desc2 = (_TSPbound_identifier) Mkbound_identifier (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_BOUNDS_LST_O: root of subtree no. 2 can not be made a bound_identifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_BOUNDS_LST_O;
return ( (NODEPTR) _currn);
}/* MkCLASS_BOUNDS_LST_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ID_DEF_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkCLASS_ID_DEF_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPCLASS_ID_DEF_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ID_DEF_O;
#else
_currn = (_TPPCLASS_ID_DEF_O) TreeNodeAlloc (sizeof (struct _TPCLASS_ID_DEF_O));
#endif
_currn->_prod = RULECLASS_ID_DEF_O;
_SETCOORD(_currn)
_TERMACT_CLASS_ID_DEF_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkCLASS_ID_DEF_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_OPT_CL_O (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkBUILTIN_OPT_CL_O (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPBUILTIN_OPT_CL_O _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_OPT_CL_O;
#else
_currn = (_TPPBUILTIN_OPT_CL_O) TreeNodeAlloc (sizeof (struct _TPBUILTIN_OPT_CL_O));
#endif
_currn->_prod = RULEBUILTIN_OPT_CL_O;
_currn->_desc1 = (_TSPclass_specifier) Mkclass_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BUILTIN_OPT_CL_O: root of subtree no. 1 can not be made a class_specifier node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_BUILTIN_OPT_CL_O;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_OPT_CL_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_OPT_ID_O (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkBUILTIN_OPT_ID_O (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPBUILTIN_OPT_ID_O _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_OPT_ID_O;
#else
_currn = (_TPPBUILTIN_OPT_ID_O) TreeNodeAlloc (sizeof (struct _TPBUILTIN_OPT_ID_O));
#endif
_currn->_prod = RULEBUILTIN_OPT_ID_O;
_SETCOORD(_currn)
_TERMACT_BUILTIN_OPT_ID_O;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "stringconst", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkBUILTIN_OPT_ID_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_OPT_O (POSITION *_coordref)
#else
NODEPTR MkBUILTIN_OPT_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPBUILTIN_OPT_O _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_OPT_O;
#else
_currn = (_TPPBUILTIN_OPT_O) TreeNodeAlloc (sizeof (struct _TPBUILTIN_OPT_O));
#endif
_currn->_prod = RULEBUILTIN_OPT_O;
_SETCOORD(_currn)
_TERMACT_BUILTIN_OPT_O;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_OPT_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_OPT_EMPTY_O (POSITION *_coordref)
#else
NODEPTR MkBUILTIN_OPT_EMPTY_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPBUILTIN_OPT_EMPTY_O _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_OPT_EMPTY_O;
#else
_currn = (_TPPBUILTIN_OPT_EMPTY_O) TreeNodeAlloc (sizeof (struct _TPBUILTIN_OPT_EMPTY_O));
#endif
_currn->_prod = RULEBUILTIN_OPT_EMPTY_O;
_SETCOORD(_currn)
_TERMACT_BUILTIN_OPT_EMPTY_O;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_OPT_EMPTY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_BODY_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkCLASS_BODY_O (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPCLASS_BODY_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_BODY_O;
#else
_currn = (_TPPCLASS_BODY_O) TreeNodeAlloc (sizeof (struct _TPCLASS_BODY_O));
#endif
_currn->_prod = RULECLASS_BODY_O;
_currn->_desc1 = (_TSPbuiltin_option) Mkbuiltin_option (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_BODY_O: root of subtree no. 1 can not be made a builtin_option node ", 0, _coordref);
_currn->_desc2 = (_TSPinheritances) Mkinheritances (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_BODY_O: root of subtree no. 2 can not be made a inheritances node ", 0, _coordref);
_currn->_desc3 = (_TSPfeature_declarations) Mkfeature_declarations (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_BODY_O: root of subtree no. 3 can not be made a feature_declarations node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_BODY_O;
return ( (NODEPTR) _currn);
}/* MkCLASS_BODY_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_HEAD_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkCLASS_HEAD_O (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPCLASS_HEAD_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_HEAD_O;
#else
_currn = (_TPPCLASS_HEAD_O) TreeNodeAlloc (sizeof (struct _TPCLASS_HEAD_O));
#endif
_currn->_prod = RULECLASS_HEAD_O;
_currn->_desc1 = (_TSPclass_id_def) Mkclass_id_def (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_HEAD_O: root of subtree no. 1 can not be made a class_id_def node ", 0, _coordref);
_currn->_desc2 = (_TSPclass_bounds) Mkclass_bounds (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_HEAD_O: root of subtree no. 2 can not be made a class_bounds node ", 0, _coordref);
_currn->_desc3 = (_TSPclass_parameters) Mkclass_parameters (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_HEAD_O: root of subtree no. 3 can not be made a class_parameters node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_HEAD_O;
return ( (NODEPTR) _currn);
}/* MkCLASS_HEAD_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ATTRIBUTE_VA_O (POSITION *_coordref)
#else
NODEPTR MkCLASS_ATTRIBUTE_VA_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ATTRIBUTE_VA_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ATTRIBUTE_VA_O;
#else
_currn = (_TPPCLASS_ATTRIBUTE_VA_O) TreeNodeAlloc (sizeof (struct _TPCLASS_ATTRIBUTE_VA_O));
#endif
_currn->_prod = RULECLASS_ATTRIBUTE_VA_O;
_SETCOORD(_currn)
_TERMACT_CLASS_ATTRIBUTE_VA_O;
return ( (NODEPTR) _currn);
}/* MkCLASS_ATTRIBUTE_VA_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ATTRIBUTE_EX_O (POSITION *_coordref)
#else
NODEPTR MkCLASS_ATTRIBUTE_EX_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ATTRIBUTE_EX_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ATTRIBUTE_EX_O;
#else
_currn = (_TPPCLASS_ATTRIBUTE_EX_O) TreeNodeAlloc (sizeof (struct _TPCLASS_ATTRIBUTE_EX_O));
#endif
_currn->_prod = RULECLASS_ATTRIBUTE_EX_O;
_SETCOORD(_currn)
_TERMACT_CLASS_ATTRIBUTE_EX_O;
return ( (NODEPTR) _currn);
}/* MkCLASS_ATTRIBUTE_EX_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ATTRIBUTE_O (POSITION *_coordref)
#else
NODEPTR MkCLASS_ATTRIBUTE_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ATTRIBUTE_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ATTRIBUTE_O;
#else
_currn = (_TPPCLASS_ATTRIBUTE_O) TreeNodeAlloc (sizeof (struct _TPCLASS_ATTRIBUTE_O));
#endif
_currn->_prod = RULECLASS_ATTRIBUTE_O;
_SETCOORD(_currn)
_TERMACT_CLASS_ATTRIBUTE_O;
return ( (NODEPTR) _currn);
}/* MkCLASS_ATTRIBUTE_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ATTRIBUTE_ABVA_O (POSITION *_coordref)
#else
NODEPTR MkCLASS_ATTRIBUTE_ABVA_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ATTRIBUTE_ABVA_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ATTRIBUTE_ABVA_O;
#else
_currn = (_TPPCLASS_ATTRIBUTE_ABVA_O) TreeNodeAlloc (sizeof (struct _TPCLASS_ATTRIBUTE_ABVA_O));
#endif
_currn->_prod = RULECLASS_ATTRIBUTE_ABVA_O;
_SETCOORD(_currn)
_TERMACT_CLASS_ATTRIBUTE_ABVA_O;
return ( (NODEPTR) _currn);
}/* MkCLASS_ATTRIBUTE_ABVA_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ATTRIBUTE_AB_O (POSITION *_coordref)
#else
NODEPTR MkCLASS_ATTRIBUTE_AB_O (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ATTRIBUTE_AB_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ATTRIBUTE_AB_O;
#else
_currn = (_TPPCLASS_ATTRIBUTE_AB_O) TreeNodeAlloc (sizeof (struct _TPCLASS_ATTRIBUTE_AB_O));
#endif
_currn->_prod = RULECLASS_ATTRIBUTE_AB_O;
_SETCOORD(_currn)
_TERMACT_CLASS_ATTRIBUTE_AB_O;
return ( (NODEPTR) _currn);
}/* MkCLASS_ATTRIBUTE_AB_O */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_DECLARATION_O (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkCLASS_DECLARATION_O (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPCLASS_DECLARATION_O _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_DECLARATION_O;
#else
_currn = (_TPPCLASS_DECLARATION_O) TreeNodeAlloc (sizeof (struct _TPCLASS_DECLARATION_O));
#endif
_currn->_prod = RULECLASS_DECLARATION_O;
_currn->_desc1 = (_TSPclass_attribute) Mkclass_attribute (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_DECLARATION_O: root of subtree no. 1 can not be made a class_attribute node ", 0, _coordref);
_currn->_desc2 = (_TSPclass_head) Mkclass_head (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_DECLARATION_O: root of subtree no. 2 can not be made a class_head node ", 0, _coordref);
_currn->_desc3 = (_TSPclass_body) Mkclass_body (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_DECLARATION_O: root of subtree no. 3 can not be made a class_body node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_DECLARATION_O;
return ( (NODEPTR) _currn);
}/* MkCLASS_DECLARATION_O */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _Mkclass_declarationCLASS_DECLARATIONS_O (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _Mkclass_declarationCLASS_DECLARATIONS_O (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_class_declarationCLASS_DECLARATIONS_O _new;
#ifdef __cplusplus
	_new = new _TPLST_class_declarationCLASS_DECLARATIONS_O;
#else
	_new = (_TPPLST_class_declarationCLASS_DECLARATIONS_O) TreeNodeAlloc (sizeof (struct _TPLST_class_declarationCLASS_DECLARATIONS_O));
#endif
	_new->_prod = RULELST_class_declarationCLASS_DECLARATIONS_O;
	_new->_desc1 = (_TSPclass_declaration)elem;
	_new->_desc2 = (_TSPLST_class_declarations)_new;
	{_TPPLST_class_declarationCLASS_DECLARATIONS_O _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_class_declarationCLASS_DECLARATIONS_O;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemCLASS_DECLARATIONS_O (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemCLASS_DECLARATIONS_O (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBclass_declaration)) 
		return _Mkclass_declarationCLASS_DECLARATIONS_O (_coordref, Mkclass_declaration (_coordref, t));
	message (DEADLY, "a CLASS_DECLARATIONS_O list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2CLASS_DECLARATIONS_O (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2CLASS_DECLARATIONS_O (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_class_declarations)
	l =_ElemCLASS_DECLARATIONS_O (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_class_declarations)
	r = _ElemCLASS_DECLARATIONS_O (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0CLASS_DECLARATIONS_O)r)->_desc2);
((_TPPLST_0CLASS_DECLARATIONS_O)r)->_desc2 = ((_TPPLST_0CLASS_DECLARATIONS_O)l)->_desc2;
((_TPPLST_0CLASS_DECLARATIONS_O)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_DECLARATIONS_O (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkCLASS_DECLARATIONS_O (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPCLASS_DECLARATIONS_O root;
	_TPPLST_0CLASS_DECLARATIONS_O list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0CLASS_DECLARATIONS_O)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_class_declarations)
		t = _ElemCLASS_DECLARATIONS_O (_coordref, t);
	remain = (_TPPLST_0CLASS_DECLARATIONS_O)(((_TPPLST_0CLASS_DECLARATIONS_O) t)->_desc2);
	((_TPPLST_0CLASS_DECLARATIONS_O) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0CLASS_DECLARATIONS_O;
#else
list = (_TPPLST_0CLASS_DECLARATIONS_O) TreeNodeAlloc (sizeof (struct _TPLST_0CLASS_DECLARATIONS_O));
#endif
list->_prod = RULELST_0CLASS_DECLARATIONS_O;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0CLASS_DECLARATIONS_O)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_class_declarationCLASS_DECLARATIONS_O)
	{_TPPLST_class_declarationCLASS_DECLARATIONS_O _currn = _currn;
	 _TERMACT_LST_class_declarationCLASS_DECLARATIONS_O;
	} this code has been moved to _ElemCLASS_DECLARATIONS_O*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPCLASS_DECLARATIONS_O;
#else
root = (_TPPCLASS_DECLARATIONS_O) TreeNodeAlloc (sizeof (struct _TPCLASS_DECLARATIONS_O));
#endif
root->_prod = RULECLASS_DECLARATIONS_O;
root->_desc1 = (_TSPLST_class_declarations)list;
{ _TPPCLASS_DECLARATIONS_O _currn = root;
  _SETCOORD(_currn)
  _TERMACT_CLASS_DECLARATIONS_O;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkASSERTION_STATEMENT_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkASSERTION_STATEMENT_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPASSERTION_STATEMENT_2 _currn;
#ifdef __cplusplus
_currn = new _TPASSERTION_STATEMENT_2;
#else
_currn = (_TPPASSERTION_STATEMENT_2) TreeNodeAlloc (sizeof (struct _TPASSERTION_STATEMENT_2));
#endif
_currn->_prod = RULEASSERTION_STATEMENT_2;
_currn->_desc1 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ASSERTION_STATEMENT_2: root of subtree no. 1 can not be made a Expression_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_ASSERTION_STATEMENT_2;
return ( (NODEPTR) _currn);
}/* MkASSERTION_STATEMENT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkRAISE_STATEMENT_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkRAISE_STATEMENT_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPRAISE_STATEMENT_2 _currn;
#ifdef __cplusplus
_currn = new _TPRAISE_STATEMENT_2;
#else
_currn = (_TPPRAISE_STATEMENT_2) TreeNodeAlloc (sizeof (struct _TPRAISE_STATEMENT_2));
#endif
_currn->_prod = RULERAISE_STATEMENT_2;
_currn->_desc1 = (_TSPType_specifier_2) MkType_specifier_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE RAISE_STATEMENT_2: root of subtree no. 1 can not be made a Type_specifier_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_RAISE_STATEMENT_2;
return ( (NODEPTR) _currn);
}/* MkRAISE_STATEMENT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkRETURN_STATEMENT_2 (POSITION *_coordref)
#else
NODEPTR MkRETURN_STATEMENT_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPRETURN_STATEMENT_2 _currn;
#ifdef __cplusplus
_currn = new _TPRETURN_STATEMENT_2;
#else
_currn = (_TPPRETURN_STATEMENT_2) TreeNodeAlloc (sizeof (struct _TPRETURN_STATEMENT_2));
#endif
_currn->_prod = RULERETURN_STATEMENT_2;
_SETCOORD(_currn)
_TERMACT_RETURN_STATEMENT_2;
return ( (NODEPTR) _currn);
}/* MkRETURN_STATEMENT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkRESUME_STATEMENT_2 (POSITION *_coordref)
#else
NODEPTR MkRESUME_STATEMENT_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPRESUME_STATEMENT_2 _currn;
#ifdef __cplusplus
_currn = new _TPRESUME_STATEMENT_2;
#else
_currn = (_TPPRESUME_STATEMENT_2) TreeNodeAlloc (sizeof (struct _TPRESUME_STATEMENT_2));
#endif
_currn->_prod = RULERESUME_STATEMENT_2;
_SETCOORD(_currn)
_TERMACT_RESUME_STATEMENT_2;
return ( (NODEPTR) _currn);
}/* MkRESUME_STATEMENT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBREAK_STATEMENT_2 (POSITION *_coordref)
#else
NODEPTR MkBREAK_STATEMENT_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPBREAK_STATEMENT_2 _currn;
#ifdef __cplusplus
_currn = new _TPBREAK_STATEMENT_2;
#else
_currn = (_TPPBREAK_STATEMENT_2) TreeNodeAlloc (sizeof (struct _TPBREAK_STATEMENT_2));
#endif
_currn->_prod = RULEBREAK_STATEMENT_2;
_SETCOORD(_currn)
_TERMACT_BREAK_STATEMENT_2;
return ( (NODEPTR) _currn);
}/* MkBREAK_STATEMENT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOOP_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkLOOP_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPLOOP_2 _currn;
#ifdef __cplusplus
_currn = new _TPLOOP_2;
#else
_currn = (_TPPLOOP_2) TreeNodeAlloc (sizeof (struct _TPLOOP_2));
#endif
_currn->_prod = RULELOOP_2;
_currn->_desc1 = (_TSPBlock_2) MkBlock_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LOOP_2: root of subtree no. 1 can not be made a Block_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_LOOP_2;
return ( (NODEPTR) _currn);
}/* MkLOOP_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOOP_EXP_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkLOOP_EXP_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPLOOP_EXP_2 _currn;
#ifdef __cplusplus
_currn = new _TPLOOP_EXP_2;
#else
_currn = (_TPPLOOP_EXP_2) TreeNodeAlloc (sizeof (struct _TPLOOP_EXP_2));
#endif
_currn->_prod = RULELOOP_EXP_2;
_currn->_desc1 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LOOP_EXP_2: root of subtree no. 1 can not be made a Expression_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPBlock_2) MkBlock_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE LOOP_EXP_2: root of subtree no. 2 can not be made a Block_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_LOOP_EXP_2;
return ( (NODEPTR) _currn);
}/* MkLOOP_EXP_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_TYPES_BLOCK_ELSE_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkWHEN_TYPES_BLOCK_ELSE_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPWHEN_TYPES_BLOCK_ELSE_2 _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_TYPES_BLOCK_ELSE_2;
#else
_currn = (_TPPWHEN_TYPES_BLOCK_ELSE_2) TreeNodeAlloc (sizeof (struct _TPWHEN_TYPES_BLOCK_ELSE_2));
#endif
_currn->_prod = RULEWHEN_TYPES_BLOCK_ELSE_2;
_currn->_desc1 = (_TSPBlock_2) MkBlock_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_TYPES_BLOCK_ELSE_2: root of subtree no. 1 can not be made a Block_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_WHEN_TYPES_BLOCK_ELSE_2;
return ( (NODEPTR) _currn);
}/* MkWHEN_TYPES_BLOCK_ELSE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_TYPES_BLOCK_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_TYPES_BLOCK_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_TYPES_BLOCK_2 _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_TYPES_BLOCK_2;
#else
_currn = (_TPPWHEN_TYPES_BLOCK_2) TreeNodeAlloc (sizeof (struct _TPWHEN_TYPES_BLOCK_2));
#endif
_currn->_prod = RULEWHEN_TYPES_BLOCK_2;
_currn->_desc1 = (_TSPType_specifier_2) MkType_specifier_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_TYPES_BLOCK_2: root of subtree no. 1 can not be made a Type_specifier_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPBlock_2) MkBlock_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_TYPES_BLOCK_2: root of subtree no. 2 can not be made a Block_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_TYPES_BLOCK_2;
return ( (NODEPTR) _currn);
}/* MkWHEN_TYPES_BLOCK_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_TYPES_BLOCKS_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkWHEN_TYPES_BLOCKS_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPWHEN_TYPES_BLOCKS_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_TYPES_BLOCKS_EMPTY_2;
#else
_currn = (_TPPWHEN_TYPES_BLOCKS_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPWHEN_TYPES_BLOCKS_EMPTY_2));
#endif
_currn->_prod = RULEWHEN_TYPES_BLOCKS_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_WHEN_TYPES_BLOCKS_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkWHEN_TYPES_BLOCKS_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_TYPES_BLOCKS_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_TYPES_BLOCKS_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_TYPES_BLOCKS_2 _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_TYPES_BLOCKS_2;
#else
_currn = (_TPPWHEN_TYPES_BLOCKS_2) TreeNodeAlloc (sizeof (struct _TPWHEN_TYPES_BLOCKS_2));
#endif
_currn->_prod = RULEWHEN_TYPES_BLOCKS_2;
_currn->_desc1 = (_TSPWhen_types_blocks_2) MkWhen_types_blocks_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_TYPES_BLOCKS_2: root of subtree no. 1 can not be made a When_types_blocks_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPWhen_types_block_2) MkWhen_types_block_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_TYPES_BLOCKS_2: root of subtree no. 2 can not be made a When_types_block_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_TYPES_BLOCKS_2;
return ( (NODEPTR) _currn);
}/* MkWHEN_TYPES_BLOCKS_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CASE_STATEMENT_ATT_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPE_CASE_STATEMENT_ATT_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPE_CASE_STATEMENT_ATT_2 _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CASE_STATEMENT_ATT_2;
#else
_currn = (_TPPTYPE_CASE_STATEMENT_ATT_2) TreeNodeAlloc (sizeof (struct _TPTYPE_CASE_STATEMENT_ATT_2));
#endif
_currn->_prod = RULETYPE_CASE_STATEMENT_ATT_2;
_currn->_desc1 = (_TSPAttribute_declaration_2) MkAttribute_declaration_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CASE_STATEMENT_ATT_2: root of subtree no. 1 can not be made a Attribute_declaration_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPWhen_types_blocks_2) MkWhen_types_blocks_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CASE_STATEMENT_ATT_2: root of subtree no. 2 can not be made a When_types_blocks_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CASE_STATEMENT_ATT_2;
return ( (NODEPTR) _currn);
}/* MkTYPE_CASE_STATEMENT_ATT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CASE_STATEMENT_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPE_CASE_STATEMENT_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPE_CASE_STATEMENT_2 _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CASE_STATEMENT_2;
#else
_currn = (_TPPTYPE_CASE_STATEMENT_2) TreeNodeAlloc (sizeof (struct _TPTYPE_CASE_STATEMENT_2));
#endif
_currn->_prod = RULETYPE_CASE_STATEMENT_2;
_currn->_desc1 = (_TSPName_2) MkName_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CASE_STATEMENT_2: root of subtree no. 1 can not be made a Name_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPWhen_types_blocks_2) MkWhen_types_blocks_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CASE_STATEMENT_2: root of subtree no. 2 can not be made a When_types_blocks_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CASE_STATEMENT_2;
return ( (NODEPTR) _currn);
}/* MkTYPE_CASE_STATEMENT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCASE_LABEL_DES_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkCASE_LABEL_DES_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPCASE_LABEL_DES_2 _currn;
#ifdef __cplusplus
_currn = new _TPCASE_LABEL_DES_2;
#else
_currn = (_TPPCASE_LABEL_DES_2) TreeNodeAlloc (sizeof (struct _TPCASE_LABEL_DES_2));
#endif
_currn->_prod = RULECASE_LABEL_DES_2;
_currn->_desc1 = (_TSPDesignator_2) MkDesignator_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CASE_LABEL_DES_2: root of subtree no. 1 can not be made a Designator_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_CASE_LABEL_DES_2;
return ( (NODEPTR) _currn);
}/* MkCASE_LABEL_DES_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCASE_LABEL_VALUE_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkCASE_LABEL_VALUE_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPCASE_LABEL_VALUE_2 _currn;
#ifdef __cplusplus
_currn = new _TPCASE_LABEL_VALUE_2;
#else
_currn = (_TPPCASE_LABEL_VALUE_2) TreeNodeAlloc (sizeof (struct _TPCASE_LABEL_VALUE_2));
#endif
_currn->_prod = RULECASE_LABEL_VALUE_2;
_currn->_desc1 = (_TSPValue_2) MkValue_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CASE_LABEL_VALUE_2: root of subtree no. 1 can not be made a Value_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_CASE_LABEL_VALUE_2;
return ( (NODEPTR) _currn);
}/* MkCASE_LABEL_VALUE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLABEL_RANGE_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkLABEL_RANGE_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPLABEL_RANGE_2 _currn;
#ifdef __cplusplus
_currn = new _TPLABEL_RANGE_2;
#else
_currn = (_TPPLABEL_RANGE_2) TreeNodeAlloc (sizeof (struct _TPLABEL_RANGE_2));
#endif
_currn->_prod = RULELABEL_RANGE_2;
_currn->_desc1 = (_TSPCase_label_2) MkCase_label_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LABEL_RANGE_2: root of subtree no. 1 can not be made a Case_label_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPCase_label_2) MkCase_label_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE LABEL_RANGE_2: root of subtree no. 2 can not be made a Case_label_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_LABEL_RANGE_2;
return ( (NODEPTR) _currn);
}/* MkLABEL_RANGE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLABEL_RANGE_SINGLE_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkLABEL_RANGE_SINGLE_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPLABEL_RANGE_SINGLE_2 _currn;
#ifdef __cplusplus
_currn = new _TPLABEL_RANGE_SINGLE_2;
#else
_currn = (_TPPLABEL_RANGE_SINGLE_2) TreeNodeAlloc (sizeof (struct _TPLABEL_RANGE_SINGLE_2));
#endif
_currn->_prod = RULELABEL_RANGE_SINGLE_2;
_currn->_desc1 = (_TSPCase_label_2) MkCase_label_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LABEL_RANGE_SINGLE_2: root of subtree no. 1 can not be made a Case_label_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_LABEL_RANGE_SINGLE_2;
return ( (NODEPTR) _currn);
}/* MkLABEL_RANGE_SINGLE_2 */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _MkLabel_range_2LABEL_LIST_2 (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _MkLabel_range_2LABEL_LIST_2 (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_Label_range_2LABEL_LIST_2 _new;
#ifdef __cplusplus
	_new = new _TPLST_Label_range_2LABEL_LIST_2;
#else
	_new = (_TPPLST_Label_range_2LABEL_LIST_2) TreeNodeAlloc (sizeof (struct _TPLST_Label_range_2LABEL_LIST_2));
#endif
	_new->_prod = RULELST_Label_range_2LABEL_LIST_2;
	_new->_desc1 = (_TSPLabel_range_2)elem;
	_new->_desc2 = (_TSPLST_Label_list_2)_new;
	{_TPPLST_Label_range_2LABEL_LIST_2 _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_Label_range_2LABEL_LIST_2;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemLABEL_LIST_2 (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemLABEL_LIST_2 (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBQualification_2)) 
		return _MkLabel_range_2LABEL_LIST_2 (_coordref, MkLabel_range_2 (_coordref, t));
	if (IsSymb (t, SYMBStd_method_call_2)) 
		return _MkLabel_range_2LABEL_LIST_2 (_coordref, MkLabel_range_2 (_coordref, t));
	if (IsSymb (t, SYMBObj_id_use_2)) 
		return _MkLabel_range_2LABEL_LIST_2 (_coordref, MkLabel_range_2 (_coordref, t));
	if (IsSymb (t, SYMBName_2)) 
		return _MkLabel_range_2LABEL_LIST_2 (_coordref, MkLabel_range_2 (_coordref, t));
	if (IsSymb (t, SYMBStringconstant_2)) 
		return _MkLabel_range_2LABEL_LIST_2 (_coordref, MkLabel_range_2 (_coordref, t));
	if (IsSymb (t, SYMBStringconstants_2)) 
		return _MkLabel_range_2LABEL_LIST_2 (_coordref, MkLabel_range_2 (_coordref, t));
	if (IsSymb (t, SYMBValue_2)) 
		return _MkLabel_range_2LABEL_LIST_2 (_coordref, MkLabel_range_2 (_coordref, t));
	if (IsSymb (t, SYMBDesignator_2)) 
		return _MkLabel_range_2LABEL_LIST_2 (_coordref, MkLabel_range_2 (_coordref, t));
	if (IsSymb (t, SYMBCase_label_2)) 
		return _MkLabel_range_2LABEL_LIST_2 (_coordref, MkLabel_range_2 (_coordref, t));
	if (IsSymb (t, SYMBLabel_range_2)) 
		return _MkLabel_range_2LABEL_LIST_2 (_coordref, MkLabel_range_2 (_coordref, t));
	message (DEADLY, "a LABEL_LIST_2 list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2LABEL_LIST_2 (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2LABEL_LIST_2 (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_Label_list_2)
	l =_ElemLABEL_LIST_2 (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_Label_list_2)
	r = _ElemLABEL_LIST_2 (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0LABEL_LIST_2)r)->_desc2);
((_TPPLST_0LABEL_LIST_2)r)->_desc2 = ((_TPPLST_0LABEL_LIST_2)l)->_desc2;
((_TPPLST_0LABEL_LIST_2)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLABEL_LIST_2 (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkLABEL_LIST_2 (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPLABEL_LIST_2 root;
	_TPPLST_0LABEL_LIST_2 list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0LABEL_LIST_2)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_Label_list_2)
		t = _ElemLABEL_LIST_2 (_coordref, t);
	remain = (_TPPLST_0LABEL_LIST_2)(((_TPPLST_0LABEL_LIST_2) t)->_desc2);
	((_TPPLST_0LABEL_LIST_2) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0LABEL_LIST_2;
#else
list = (_TPPLST_0LABEL_LIST_2) TreeNodeAlloc (sizeof (struct _TPLST_0LABEL_LIST_2));
#endif
list->_prod = RULELST_0LABEL_LIST_2;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0LABEL_LIST_2)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_Label_range_2LABEL_LIST_2)
	{_TPPLST_Label_range_2LABEL_LIST_2 _currn = _currn;
	 _TERMACT_LST_Label_range_2LABEL_LIST_2;
	} this code has been moved to _ElemLABEL_LIST_2*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPLABEL_LIST_2;
#else
root = (_TPPLABEL_LIST_2) TreeNodeAlloc (sizeof (struct _TPLABEL_LIST_2));
#endif
root->_prod = RULELABEL_LIST_2;
root->_desc1 = (_TSPLST_Label_list_2)list;
{ _TPPLABEL_LIST_2 _currn = root;
  _SETCOORD(_currn)
  _TERMACT_LABEL_LIST_2;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_LABEL_STMT_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_LABEL_STMT_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_LABEL_STMT_2 _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_LABEL_STMT_2;
#else
_currn = (_TPPWHEN_LABEL_STMT_2) TreeNodeAlloc (sizeof (struct _TPWHEN_LABEL_STMT_2));
#endif
_currn->_prod = RULEWHEN_LABEL_STMT_2;
_currn->_desc1 = (_TSPLabel_list_2) MkLabel_list_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_LABEL_STMT_2: root of subtree no. 1 can not be made a Label_list_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPBlock_2) MkBlock_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_LABEL_STMT_2: root of subtree no. 2 can not be made a Block_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_LABEL_STMT_2;
return ( (NODEPTR) _currn);
}/* MkWHEN_LABEL_STMT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_LABEL_STMTS_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkWHEN_LABEL_STMTS_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPWHEN_LABEL_STMTS_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_LABEL_STMTS_EMPTY_2;
#else
_currn = (_TPPWHEN_LABEL_STMTS_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPWHEN_LABEL_STMTS_EMPTY_2));
#endif
_currn->_prod = RULEWHEN_LABEL_STMTS_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_WHEN_LABEL_STMTS_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkWHEN_LABEL_STMTS_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_LABEL_STMTS_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_LABEL_STMTS_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_LABEL_STMTS_2 _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_LABEL_STMTS_2;
#else
_currn = (_TPPWHEN_LABEL_STMTS_2) TreeNodeAlloc (sizeof (struct _TPWHEN_LABEL_STMTS_2));
#endif
_currn->_prod = RULEWHEN_LABEL_STMTS_2;
_currn->_desc1 = (_TSPWhen_label_stmts_2) MkWhen_label_stmts_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_LABEL_STMTS_2: root of subtree no. 1 can not be made a When_label_stmts_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPWhen_label_stmt_2) MkWhen_label_stmt_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_LABEL_STMTS_2: root of subtree no. 2 can not be made a When_label_stmt_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_LABEL_STMTS_2;
return ( (NODEPTR) _currn);
}/* MkWHEN_LABEL_STMTS_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCASE_STATEMENT_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCASE_STATEMENT_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCASE_STATEMENT_2 _currn;
#ifdef __cplusplus
_currn = new _TPCASE_STATEMENT_2;
#else
_currn = (_TPPCASE_STATEMENT_2) TreeNodeAlloc (sizeof (struct _TPCASE_STATEMENT_2));
#endif
_currn->_prod = RULECASE_STATEMENT_2;
_currn->_desc1 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CASE_STATEMENT_2: root of subtree no. 1 can not be made a Expression_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPWhen_label_stmts_2) MkWhen_label_stmts_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CASE_STATEMENT_2: root of subtree no. 2 can not be made a When_label_stmts_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CASE_STATEMENT_2;
return ( (NODEPTR) _currn);
}/* MkCASE_STATEMENT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCOND_STATEMENT_ELSE_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkCOND_STATEMENT_ELSE_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPCOND_STATEMENT_ELSE_2 _currn;
#ifdef __cplusplus
_currn = new _TPCOND_STATEMENT_ELSE_2;
#else
_currn = (_TPPCOND_STATEMENT_ELSE_2) TreeNodeAlloc (sizeof (struct _TPCOND_STATEMENT_ELSE_2));
#endif
_currn->_prod = RULECOND_STATEMENT_ELSE_2;
_currn->_desc1 = (_TSPBlock_2) MkBlock_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE COND_STATEMENT_ELSE_2: root of subtree no. 1 can not be made a Block_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_COND_STATEMENT_ELSE_2;
return ( (NODEPTR) _currn);
}/* MkCOND_STATEMENT_ELSE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCOND_STATEMENT_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkCOND_STATEMENT_2 (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPCOND_STATEMENT_2 _currn;
#ifdef __cplusplus
_currn = new _TPCOND_STATEMENT_2;
#else
_currn = (_TPPCOND_STATEMENT_2) TreeNodeAlloc (sizeof (struct _TPCOND_STATEMENT_2));
#endif
_currn->_prod = RULECOND_STATEMENT_2;
_currn->_desc1 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE COND_STATEMENT_2: root of subtree no. 1 can not be made a Expression_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPBlock_2) MkBlock_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE COND_STATEMENT_2: root of subtree no. 2 can not be made a Block_2 node ", 0, _coordref);
_currn->_desc3 = (_TSPConditional_statement_2) MkConditional_statement_2 (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE COND_STATEMENT_2: root of subtree no. 3 can not be made a Conditional_statement_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_COND_STATEMENT_2;
return ( (NODEPTR) _currn);
}/* MkCOND_STATEMENT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_EXCEPTION_STMT_ELSE_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkWHEN_EXCEPTION_STMT_ELSE_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPWHEN_EXCEPTION_STMT_ELSE_2 _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_EXCEPTION_STMT_ELSE_2;
#else
_currn = (_TPPWHEN_EXCEPTION_STMT_ELSE_2) TreeNodeAlloc (sizeof (struct _TPWHEN_EXCEPTION_STMT_ELSE_2));
#endif
_currn->_prod = RULEWHEN_EXCEPTION_STMT_ELSE_2;
_currn->_desc1 = (_TSPBlock_2) MkBlock_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_EXCEPTION_STMT_ELSE_2: root of subtree no. 1 can not be made a Block_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_WHEN_EXCEPTION_STMT_ELSE_2;
return ( (NODEPTR) _currn);
}/* MkWHEN_EXCEPTION_STMT_ELSE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_EXCEPTION_STMT_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_EXCEPTION_STMT_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_EXCEPTION_STMT_2 _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_EXCEPTION_STMT_2;
#else
_currn = (_TPPWHEN_EXCEPTION_STMT_2) TreeNodeAlloc (sizeof (struct _TPWHEN_EXCEPTION_STMT_2));
#endif
_currn->_prod = RULEWHEN_EXCEPTION_STMT_2;
_currn->_desc1 = (_TSPType_specifier_2) MkType_specifier_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_EXCEPTION_STMT_2: root of subtree no. 1 can not be made a Type_specifier_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPBlock_2) MkBlock_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_EXCEPTION_STMT_2: root of subtree no. 2 can not be made a Block_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_EXCEPTION_STMT_2;
return ( (NODEPTR) _currn);
}/* MkWHEN_EXCEPTION_STMT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_EXCEPTION_STMTS_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkWHEN_EXCEPTION_STMTS_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPWHEN_EXCEPTION_STMTS_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_EXCEPTION_STMTS_EMPTY_2;
#else
_currn = (_TPPWHEN_EXCEPTION_STMTS_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPWHEN_EXCEPTION_STMTS_EMPTY_2));
#endif
_currn->_prod = RULEWHEN_EXCEPTION_STMTS_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_WHEN_EXCEPTION_STMTS_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkWHEN_EXCEPTION_STMTS_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_EXCEPTION_STMTS_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_EXCEPTION_STMTS_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_EXCEPTION_STMTS_2 _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_EXCEPTION_STMTS_2;
#else
_currn = (_TPPWHEN_EXCEPTION_STMTS_2) TreeNodeAlloc (sizeof (struct _TPWHEN_EXCEPTION_STMTS_2));
#endif
_currn->_prod = RULEWHEN_EXCEPTION_STMTS_2;
_currn->_desc1 = (_TSPWhen_exception_stmts_2) MkWhen_exception_stmts_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_EXCEPTION_STMTS_2: root of subtree no. 1 can not be made a When_exception_stmts_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPWhen_exception_stmt_2) MkWhen_exception_stmt_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_EXCEPTION_STMTS_2: root of subtree no. 2 can not be made a When_exception_stmt_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_EXCEPTION_STMTS_2;
return ( (NODEPTR) _currn);
}/* MkWHEN_EXCEPTION_STMTS_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXCEPTIONS_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkEXCEPTIONS_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPEXCEPTIONS_2 _currn;
#ifdef __cplusplus
_currn = new _TPEXCEPTIONS_2;
#else
_currn = (_TPPEXCEPTIONS_2) TreeNodeAlloc (sizeof (struct _TPEXCEPTIONS_2));
#endif
_currn->_prod = RULEEXCEPTIONS_2;
_currn->_desc1 = (_TSPIdent_def_2) MkIdent_def_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXCEPTIONS_2: root of subtree no. 1 can not be made a Ident_def_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPWhen_exception_stmts_2) MkWhen_exception_stmts_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE EXCEPTIONS_2: root of subtree no. 2 can not be made a When_exception_stmts_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_EXCEPTIONS_2;
return ( (NODEPTR) _currn);
}/* MkEXCEPTIONS_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXCEPTIONS_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkEXCEPTIONS_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPEXCEPTIONS_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPEXCEPTIONS_EMPTY_2;
#else
_currn = (_TPPEXCEPTIONS_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPEXCEPTIONS_EMPTY_2));
#endif
_currn->_prod = RULEEXCEPTIONS_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_EXCEPTIONS_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkEXCEPTIONS_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBEGIN_BLOCK_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkBEGIN_BLOCK_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPBEGIN_BLOCK_2 _currn;
#ifdef __cplusplus
_currn = new _TPBEGIN_BLOCK_2;
#else
_currn = (_TPPBEGIN_BLOCK_2) TreeNodeAlloc (sizeof (struct _TPBEGIN_BLOCK_2));
#endif
_currn->_prod = RULEBEGIN_BLOCK_2;
_currn->_desc1 = (_TSPBlock_2) MkBlock_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BEGIN_BLOCK_2: root of subtree no. 1 can not be made a Block_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPExceptions_2) MkExceptions_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE BEGIN_BLOCK_2: root of subtree no. 2 can not be made a Exceptions_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_BEGIN_BLOCK_2;
return ( (NODEPTR) _currn);
}/* MkBEGIN_BLOCK_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkASSIGNMENT_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkASSIGNMENT_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPASSIGNMENT_2 _currn;
#ifdef __cplusplus
_currn = new _TPASSIGNMENT_2;
#else
_currn = (_TPPASSIGNMENT_2) TreeNodeAlloc (sizeof (struct _TPASSIGNMENT_2));
#endif
_currn->_prod = RULEASSIGNMENT_2;
_currn->_desc1 = (_TSPName_2) MkName_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ASSIGNMENT_2: root of subtree no. 1 can not be made a Name_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ASSIGNMENT_2: root of subtree no. 2 can not be made a Expression_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ASSIGNMENT_2;
return ( (NODEPTR) _currn);
}/* MkASSIGNMENT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_ASSERT_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_ASSERT_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_ASSERT_2 _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_ASSERT_2;
#else
_currn = (_TPPSTATEMENTS_ASSERT_2) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_ASSERT_2));
#endif
_currn->_prod = RULESTATEMENTS_ASSERT_2;
_currn->_desc1 = (_TSPStatements_2) MkStatements_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_ASSERT_2: root of subtree no. 1 can not be made a Statements_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPAssertion_statement_2) MkAssertion_statement_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_ASSERT_2: root of subtree no. 2 can not be made a Assertion_statement_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_ASSERT_2;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_ASSERT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_RAISE_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_RAISE_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_RAISE_2 _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_RAISE_2;
#else
_currn = (_TPPSTATEMENTS_RAISE_2) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_RAISE_2));
#endif
_currn->_prod = RULESTATEMENTS_RAISE_2;
_currn->_desc1 = (_TSPStatements_2) MkStatements_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RAISE_2: root of subtree no. 1 can not be made a Statements_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPRaise_statement_2) MkRaise_statement_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RAISE_2: root of subtree no. 2 can not be made a Raise_statement_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_RAISE_2;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_RAISE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_RETURN_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_RETURN_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_RETURN_2 _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_RETURN_2;
#else
_currn = (_TPPSTATEMENTS_RETURN_2) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_RETURN_2));
#endif
_currn->_prod = RULESTATEMENTS_RETURN_2;
_currn->_desc1 = (_TSPStatements_2) MkStatements_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RETURN_2: root of subtree no. 1 can not be made a Statements_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPReturn_statement_2) MkReturn_statement_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RETURN_2: root of subtree no. 2 can not be made a Return_statement_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_RETURN_2;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_RETURN_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_RESUME_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_RESUME_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_RESUME_2 _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_RESUME_2;
#else
_currn = (_TPPSTATEMENTS_RESUME_2) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_RESUME_2));
#endif
_currn->_prod = RULESTATEMENTS_RESUME_2;
_currn->_desc1 = (_TSPStatements_2) MkStatements_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RESUME_2: root of subtree no. 1 can not be made a Statements_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPResume_statement_2) MkResume_statement_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RESUME_2: root of subtree no. 2 can not be made a Resume_statement_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_RESUME_2;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_RESUME_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_EXP_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_EXP_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_EXP_2 _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_EXP_2;
#else
_currn = (_TPPSTATEMENTS_EXP_2) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_EXP_2));
#endif
_currn->_prod = RULESTATEMENTS_EXP_2;
_currn->_desc1 = (_TSPStatements_2) MkStatements_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_EXP_2: root of subtree no. 1 can not be made a Statements_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_EXP_2: root of subtree no. 2 can not be made a Expression_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_EXP_2;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_EXP_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_BREAK_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_BREAK_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_BREAK_2 _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_BREAK_2;
#else
_currn = (_TPPSTATEMENTS_BREAK_2) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_BREAK_2));
#endif
_currn->_prod = RULESTATEMENTS_BREAK_2;
_currn->_desc1 = (_TSPStatements_2) MkStatements_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_BREAK_2: root of subtree no. 1 can not be made a Statements_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPBreak_statement_2) MkBreak_statement_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_BREAK_2: root of subtree no. 2 can not be made a Break_statement_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_BREAK_2;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_BREAK_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_LOOP_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_LOOP_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_LOOP_2 _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_LOOP_2;
#else
_currn = (_TPPSTATEMENTS_LOOP_2) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_LOOP_2));
#endif
_currn->_prod = RULESTATEMENTS_LOOP_2;
_currn->_desc1 = (_TSPStatements_2) MkStatements_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_LOOP_2: root of subtree no. 1 can not be made a Statements_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPLoop_2) MkLoop_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_LOOP_2: root of subtree no. 2 can not be made a Loop_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_LOOP_2;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_LOOP_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_TYPE_CASE_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_TYPE_CASE_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_TYPE_CASE_2 _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_TYPE_CASE_2;
#else
_currn = (_TPPSTATEMENTS_TYPE_CASE_2) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_TYPE_CASE_2));
#endif
_currn->_prod = RULESTATEMENTS_TYPE_CASE_2;
_currn->_desc1 = (_TSPStatements_2) MkStatements_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_TYPE_CASE_2: root of subtree no. 1 can not be made a Statements_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPType_case_statement_2) MkType_case_statement_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_TYPE_CASE_2: root of subtree no. 2 can not be made a Type_case_statement_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_TYPE_CASE_2;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_TYPE_CASE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_CASE_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_CASE_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_CASE_2 _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_CASE_2;
#else
_currn = (_TPPSTATEMENTS_CASE_2) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_CASE_2));
#endif
_currn->_prod = RULESTATEMENTS_CASE_2;
_currn->_desc1 = (_TSPStatements_2) MkStatements_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_CASE_2: root of subtree no. 1 can not be made a Statements_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPCase_statement_2) MkCase_statement_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_CASE_2: root of subtree no. 2 can not be made a Case_statement_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_CASE_2;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_CASE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_COND_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_COND_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_COND_2 _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_COND_2;
#else
_currn = (_TPPSTATEMENTS_COND_2) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_COND_2));
#endif
_currn->_prod = RULESTATEMENTS_COND_2;
_currn->_desc1 = (_TSPStatements_2) MkStatements_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_COND_2: root of subtree no. 1 can not be made a Statements_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPConditional_statement_2) MkConditional_statement_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_COND_2: root of subtree no. 2 can not be made a Conditional_statement_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_COND_2;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_COND_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_BEGIN_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_BEGIN_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_BEGIN_2 _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_BEGIN_2;
#else
_currn = (_TPPSTATEMENTS_BEGIN_2) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_BEGIN_2));
#endif
_currn->_prod = RULESTATEMENTS_BEGIN_2;
_currn->_desc1 = (_TSPStatements_2) MkStatements_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_BEGIN_2: root of subtree no. 1 can not be made a Statements_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPBegin_block_2) MkBegin_block_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_BEGIN_2: root of subtree no. 2 can not be made a Begin_block_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_BEGIN_2;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_BEGIN_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_ASSIGN_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_ASSIGN_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_ASSIGN_2 _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_ASSIGN_2;
#else
_currn = (_TPPSTATEMENTS_ASSIGN_2) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_ASSIGN_2));
#endif
_currn->_prod = RULESTATEMENTS_ASSIGN_2;
_currn->_desc1 = (_TSPStatements_2) MkStatements_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_ASSIGN_2: root of subtree no. 1 can not be made a Statements_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPAssignment_2) MkAssignment_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_ASSIGN_2: root of subtree no. 2 can not be made a Assignment_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_ASSIGN_2;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_ASSIGN_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkSTATEMENTS_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPSTATEMENTS_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_EMPTY_2;
#else
_currn = (_TPPSTATEMENTS_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_EMPTY_2));
#endif
_currn->_prod = RULESTATEMENTS_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_STATEMENTS_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOCAL_STREAM_DECL_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkLOCAL_STREAM_DECL_2 (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPLOCAL_STREAM_DECL_2 _currn;
#ifdef __cplusplus
_currn = new _TPLOCAL_STREAM_DECL_2;
#else
_currn = (_TPPLOCAL_STREAM_DECL_2) TreeNodeAlloc (sizeof (struct _TPLOCAL_STREAM_DECL_2));
#endif
_currn->_prod = RULELOCAL_STREAM_DECL_2;
_currn->_desc1 = (_TSPIdent_def_2) MkIdent_def_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_STREAM_DECL_2: root of subtree no. 1 can not be made a Ident_def_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPMethod_specification_2) MkMethod_specification_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_STREAM_DECL_2: root of subtree no. 2 can not be made a Method_specification_2 node ", 0, _coordref);
_currn->_desc3 = (_TSPBound_method_2) MkBound_method_2 (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_STREAM_DECL_2: root of subtree no. 3 can not be made a Bound_method_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_LOCAL_STREAM_DECL_2;
return ( (NODEPTR) _currn);
}/* MkLOCAL_STREAM_DECL_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOCAL_DECLS_STREAM_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkLOCAL_DECLS_STREAM_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPLOCAL_DECLS_STREAM_2 _currn;
#ifdef __cplusplus
_currn = new _TPLOCAL_DECLS_STREAM_2;
#else
_currn = (_TPPLOCAL_DECLS_STREAM_2) TreeNodeAlloc (sizeof (struct _TPLOCAL_DECLS_STREAM_2));
#endif
_currn->_prod = RULELOCAL_DECLS_STREAM_2;
_currn->_desc1 = (_TSPLocal_declarations_2) MkLocal_declarations_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_DECLS_STREAM_2: root of subtree no. 1 can not be made a Local_declarations_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPLocal_stream_declaration_2) MkLocal_stream_declaration_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_DECLS_STREAM_2: root of subtree no. 2 can not be made a Local_stream_declaration_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_LOCAL_DECLS_STREAM_2;
return ( (NODEPTR) _currn);
}/* MkLOCAL_DECLS_STREAM_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOCAL_DECLS_ATT_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkLOCAL_DECLS_ATT_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPLOCAL_DECLS_ATT_2 _currn;
#ifdef __cplusplus
_currn = new _TPLOCAL_DECLS_ATT_2;
#else
_currn = (_TPPLOCAL_DECLS_ATT_2) TreeNodeAlloc (sizeof (struct _TPLOCAL_DECLS_ATT_2));
#endif
_currn->_prod = RULELOCAL_DECLS_ATT_2;
_currn->_desc1 = (_TSPLocal_declarations_2) MkLocal_declarations_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_DECLS_ATT_2: root of subtree no. 1 can not be made a Local_declarations_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPAttribute_declaration_2) MkAttribute_declaration_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_DECLS_ATT_2: root of subtree no. 2 can not be made a Attribute_declaration_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_LOCAL_DECLS_ATT_2;
return ( (NODEPTR) _currn);
}/* MkLOCAL_DECLS_ATT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOCAL_DECLS_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkLOCAL_DECLS_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPLOCAL_DECLS_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPLOCAL_DECLS_EMPTY_2;
#else
_currn = (_TPPLOCAL_DECLS_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPLOCAL_DECLS_EMPTY_2));
#endif
_currn->_prod = RULELOCAL_DECLS_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_LOCAL_DECLS_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkLOCAL_DECLS_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBLOCK_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkBLOCK_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPBLOCK_2 _currn;
#ifdef __cplusplus
_currn = new _TPBLOCK_2;
#else
_currn = (_TPPBLOCK_2) TreeNodeAlloc (sizeof (struct _TPBLOCK_2));
#endif
_currn->_prod = RULEBLOCK_2;
_currn->_desc1 = (_TSPLocal_declarations_2) MkLocal_declarations_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BLOCK_2: root of subtree no. 1 can not be made a Local_declarations_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPStatements_2) MkStatements_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE BLOCK_2: root of subtree no. 2 can not be made a Statements_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_BLOCK_2;
return ( (NODEPTR) _currn);
}/* MkBLOCK_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_INST_CLRTYPE_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkBUILTIN_INST_CLRTYPE_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPBUILTIN_INST_CLRTYPE_2 _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_INST_CLRTYPE_2;
#else
_currn = (_TPPBUILTIN_INST_CLRTYPE_2) TreeNodeAlloc (sizeof (struct _TPBUILTIN_INST_CLRTYPE_2));
#endif
_currn->_prod = RULEBUILTIN_INST_CLRTYPE_2;
_currn->_desc1 = (_TSPType_specifier_2) MkType_specifier_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BUILTIN_INST_CLRTYPE_2: root of subtree no. 1 can not be made a Type_specifier_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_BUILTIN_INST_CLRTYPE_2;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_INST_CLRTYPE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_INST_TYPE_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkBUILTIN_INST_TYPE_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPBUILTIN_INST_TYPE_2 _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_INST_TYPE_2;
#else
_currn = (_TPPBUILTIN_INST_TYPE_2) TreeNodeAlloc (sizeof (struct _TPBUILTIN_INST_TYPE_2));
#endif
_currn->_prod = RULEBUILTIN_INST_TYPE_2;
_currn->_desc1 = (_TSPType_specifier_2) MkType_specifier_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BUILTIN_INST_TYPE_2: root of subtree no. 1 can not be made a Type_specifier_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_BUILTIN_INST_TYPE_2;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_INST_TYPE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_INST_STR_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkBUILTIN_INST_STR_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPBUILTIN_INST_STR_2 _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_INST_STR_2;
#else
_currn = (_TPPBUILTIN_INST_STR_2) TreeNodeAlloc (sizeof (struct _TPBUILTIN_INST_STR_2));
#endif
_currn->_prod = RULEBUILTIN_INST_STR_2;
_SETCOORD(_currn)
_TERMACT_BUILTIN_INST_STR_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "stringconst", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkBUILTIN_INST_STR_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_INSTS_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkBUILTIN_INSTS_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPBUILTIN_INSTS_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_INSTS_EMPTY_2;
#else
_currn = (_TPPBUILTIN_INSTS_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPBUILTIN_INSTS_EMPTY_2));
#endif
_currn->_prod = RULEBUILTIN_INSTS_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_BUILTIN_INSTS_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_INSTS_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_INSTS_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkBUILTIN_INSTS_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPBUILTIN_INSTS_2 _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_INSTS_2;
#else
_currn = (_TPPBUILTIN_INSTS_2) TreeNodeAlloc (sizeof (struct _TPBUILTIN_INSTS_2));
#endif
_currn->_prod = RULEBUILTIN_INSTS_2;
_currn->_desc1 = (_TSPBuiltin_instructions_2) MkBuiltin_instructions_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BUILTIN_INSTS_2: root of subtree no. 1 can not be made a Builtin_instructions_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPBuiltin_instruction_2) MkBuiltin_instruction_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE BUILTIN_INSTS_2: root of subtree no. 2 can not be made a Builtin_instruction_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_BUILTIN_INSTS_2;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_INSTS_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_BODY_STATIC_BUILTIN_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkMETHOD_BODY_STATIC_BUILTIN_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPMETHOD_BODY_STATIC_BUILTIN_2 _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_BODY_STATIC_BUILTIN_2;
#else
_currn = (_TPPMETHOD_BODY_STATIC_BUILTIN_2) TreeNodeAlloc (sizeof (struct _TPMETHOD_BODY_STATIC_BUILTIN_2));
#endif
_currn->_prod = RULEMETHOD_BODY_STATIC_BUILTIN_2;
_currn->_desc1 = (_TSPBuiltin_instructions_2) MkBuiltin_instructions_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_BODY_STATIC_BUILTIN_2: root of subtree no. 1 can not be made a Builtin_instructions_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_METHOD_BODY_STATIC_BUILTIN_2;
return ( (NODEPTR) _currn);
}/* MkMETHOD_BODY_STATIC_BUILTIN_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_BODY_BUILTIN_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkMETHOD_BODY_BUILTIN_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPMETHOD_BODY_BUILTIN_2 _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_BODY_BUILTIN_2;
#else
_currn = (_TPPMETHOD_BODY_BUILTIN_2) TreeNodeAlloc (sizeof (struct _TPMETHOD_BODY_BUILTIN_2));
#endif
_currn->_prod = RULEMETHOD_BODY_BUILTIN_2;
_currn->_desc1 = (_TSPBuiltin_instructions_2) MkBuiltin_instructions_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_BODY_BUILTIN_2: root of subtree no. 1 can not be made a Builtin_instructions_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_METHOD_BODY_BUILTIN_2;
return ( (NODEPTR) _currn);
}/* MkMETHOD_BODY_BUILTIN_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLINKER_SYMBOL_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkLINKER_SYMBOL_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPLINKER_SYMBOL_2 _currn;
#ifdef __cplusplus
_currn = new _TPLINKER_SYMBOL_2;
#else
_currn = (_TPPLINKER_SYMBOL_2) TreeNodeAlloc (sizeof (struct _TPLINKER_SYMBOL_2));
#endif
_currn->_prod = RULELINKER_SYMBOL_2;
_SETCOORD(_currn)
_TERMACT_LINKER_SYMBOL_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "stringconst", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkLINKER_SYMBOL_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLINKER_SYMBOL_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkLINKER_SYMBOL_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPLINKER_SYMBOL_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPLINKER_SYMBOL_EMPTY_2;
#else
_currn = (_TPPLINKER_SYMBOL_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPLINKER_SYMBOL_EMPTY_2));
#endif
_currn->_prod = RULELINKER_SYMBOL_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_LINKER_SYMBOL_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkLINKER_SYMBOL_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFOREIGN_LANGUAGE_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkFOREIGN_LANGUAGE_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPFOREIGN_LANGUAGE_2 _currn;
#ifdef __cplusplus
_currn = new _TPFOREIGN_LANGUAGE_2;
#else
_currn = (_TPPFOREIGN_LANGUAGE_2) TreeNodeAlloc (sizeof (struct _TPFOREIGN_LANGUAGE_2));
#endif
_currn->_prod = RULEFOREIGN_LANGUAGE_2;
_SETCOORD(_currn)
_TERMACT_FOREIGN_LANGUAGE_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkFOREIGN_LANGUAGE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_BODY_FOREIGN_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkMETHOD_BODY_FOREIGN_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPMETHOD_BODY_FOREIGN_2 _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_BODY_FOREIGN_2;
#else
_currn = (_TPPMETHOD_BODY_FOREIGN_2) TreeNodeAlloc (sizeof (struct _TPMETHOD_BODY_FOREIGN_2));
#endif
_currn->_prod = RULEMETHOD_BODY_FOREIGN_2;
_currn->_desc1 = (_TSPForeign_language_2) MkForeign_language_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_BODY_FOREIGN_2: root of subtree no. 1 can not be made a Foreign_language_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPLinker_symbol_2) MkLinker_symbol_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_BODY_FOREIGN_2: root of subtree no. 2 can not be made a Linker_symbol_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_METHOD_BODY_FOREIGN_2;
return ( (NODEPTR) _currn);
}/* MkMETHOD_BODY_FOREIGN_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_BODY_AB_2 (POSITION *_coordref)
#else
NODEPTR MkMETHOD_BODY_AB_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPMETHOD_BODY_AB_2 _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_BODY_AB_2;
#else
_currn = (_TPPMETHOD_BODY_AB_2) TreeNodeAlloc (sizeof (struct _TPMETHOD_BODY_AB_2));
#endif
_currn->_prod = RULEMETHOD_BODY_AB_2;
_SETCOORD(_currn)
_TERMACT_METHOD_BODY_AB_2;
return ( (NODEPTR) _currn);
}/* MkMETHOD_BODY_AB_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_BODY_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkMETHOD_BODY_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPMETHOD_BODY_2 _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_BODY_2;
#else
_currn = (_TPPMETHOD_BODY_2) TreeNodeAlloc (sizeof (struct _TPMETHOD_BODY_2));
#endif
_currn->_prod = RULEMETHOD_BODY_2;
_currn->_desc1 = (_TSPBlock_2) MkBlock_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_BODY_2: root of subtree no. 1 can not be made a Block_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_METHOD_BODY_2;
return ( (NODEPTR) _currn);
}/* MkMETHOD_BODY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_SPEC_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkPARAMETER_SPEC_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPPARAMETER_SPEC_2 _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_SPEC_2;
#else
_currn = (_TPPPARAMETER_SPEC_2) TreeNodeAlloc (sizeof (struct _TPPARAMETER_SPEC_2));
#endif
_currn->_prod = RULEPARAMETER_SPEC_2;
_currn->_desc1 = (_TSPParameter_kind_2) MkParameter_kind_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE PARAMETER_SPEC_2: root of subtree no. 1 can not be made a Parameter_kind_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPAttribute_specification_2) MkAttribute_specification_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE PARAMETER_SPEC_2: root of subtree no. 2 can not be made a Attribute_specification_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_PARAMETER_SPEC_2;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_SPEC_2 */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _MkParameter_specification_2PARAMETERS_2 (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _MkParameter_specification_2PARAMETERS_2 (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_Parameter_specification_2PARAMETERS_2 _new;
#ifdef __cplusplus
	_new = new _TPLST_Parameter_specification_2PARAMETERS_2;
#else
	_new = (_TPPLST_Parameter_specification_2PARAMETERS_2) TreeNodeAlloc (sizeof (struct _TPLST_Parameter_specification_2PARAMETERS_2));
#endif
	_new->_prod = RULELST_Parameter_specification_2PARAMETERS_2;
	_new->_desc1 = (_TSPParameter_specification_2)elem;
	_new->_desc2 = (_TSPLST_Parameters_2)_new;
	{_TPPLST_Parameter_specification_2PARAMETERS_2 _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_Parameter_specification_2PARAMETERS_2;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemPARAMETERS_2 (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemPARAMETERS_2 (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBParameter_specification_2)) 
		return _MkParameter_specification_2PARAMETERS_2 (_coordref, MkParameter_specification_2 (_coordref, t));
	message (DEADLY, "a PARAMETERS_2 list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2PARAMETERS_2 (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2PARAMETERS_2 (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_Parameters_2)
	l =_ElemPARAMETERS_2 (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_Parameters_2)
	r = _ElemPARAMETERS_2 (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0PARAMETERS_2)r)->_desc2);
((_TPPLST_0PARAMETERS_2)r)->_desc2 = ((_TPPLST_0PARAMETERS_2)l)->_desc2;
((_TPPLST_0PARAMETERS_2)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETERS_2 (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkPARAMETERS_2 (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPPARAMETERS_2 root;
	_TPPLST_0PARAMETERS_2 list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0PARAMETERS_2)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_Parameters_2)
		t = _ElemPARAMETERS_2 (_coordref, t);
	remain = (_TPPLST_0PARAMETERS_2)(((_TPPLST_0PARAMETERS_2) t)->_desc2);
	((_TPPLST_0PARAMETERS_2) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0PARAMETERS_2;
#else
list = (_TPPLST_0PARAMETERS_2) TreeNodeAlloc (sizeof (struct _TPLST_0PARAMETERS_2));
#endif
list->_prod = RULELST_0PARAMETERS_2;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0PARAMETERS_2)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_Parameter_specification_2PARAMETERS_2)
	{_TPPLST_Parameter_specification_2PARAMETERS_2 _currn = _currn;
	 _TERMACT_LST_Parameter_specification_2PARAMETERS_2;
	} this code has been moved to _ElemPARAMETERS_2*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPPARAMETERS_2;
#else
root = (_TPPPARAMETERS_2) TreeNodeAlloc (sizeof (struct _TPPARAMETERS_2));
#endif
root->_prod = RULEPARAMETERS_2;
root->_desc1 = (_TSPLST_Parameters_2)list;
{ _TPPPARAMETERS_2 _currn = root;
  _SETCOORD(_currn)
  _TERMACT_PARAMETERS_2;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_IDENT_DEF_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkMETHOD_IDENT_DEF_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPMETHOD_IDENT_DEF_2 _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_IDENT_DEF_2;
#else
_currn = (_TPPMETHOD_IDENT_DEF_2) TreeNodeAlloc (sizeof (struct _TPMETHOD_IDENT_DEF_2));
#endif
_currn->_prod = RULEMETHOD_IDENT_DEF_2;
_SETCOORD(_currn)
_TERMACT_METHOD_IDENT_DEF_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkMETHOD_IDENT_DEF_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_DECL_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3, NODEPTR _desc4)
#else
NODEPTR MkMETHOD_DECL_2 (_coordref,_desc1,_desc2,_desc3,_desc4)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
	NODEPTR _desc4;
#endif
{	_TPPMETHOD_DECL_2 _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_DECL_2;
#else
_currn = (_TPPMETHOD_DECL_2) TreeNodeAlloc (sizeof (struct _TPMETHOD_DECL_2));
#endif
_currn->_prod = RULEMETHOD_DECL_2;
_currn->_desc1 = (_TSPMethod_ident_def_2) MkMethod_ident_def_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_DECL_2: root of subtree no. 1 can not be made a Method_ident_def_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPParameters_2) MkParameters_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_DECL_2: root of subtree no. 2 can not be made a Parameters_2 node ", 0, _coordref);
_currn->_desc3 = (_TSPType_specifier_2) MkType_specifier_2 (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_DECL_2: root of subtree no. 3 can not be made a Type_specifier_2 node ", 0, _coordref);
_currn->_desc4 = (_TSPMethod_body_2) MkMethod_body_2 (_coordref, _desc4);	
if (((NODEPTR)_currn->_desc4) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_DECL_2: root of subtree no. 4 can not be made a Method_body_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_METHOD_DECL_2;
return ( (NODEPTR) _currn);
}/* MkMETHOD_DECL_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkIDENTIFIERS_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkIDENTIFIERS_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPIDENTIFIERS_2 _currn;
#ifdef __cplusplus
_currn = new _TPIDENTIFIERS_2;
#else
_currn = (_TPPIDENTIFIERS_2) TreeNodeAlloc (sizeof (struct _TPIDENTIFIERS_2));
#endif
_currn->_prod = RULEIDENTIFIERS_2;
_currn->_desc1 = (_TSPIdent_def_2) MkIdent_def_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE IDENTIFIERS_2: root of subtree no. 1 can not be made a Ident_def_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_IDENTIFIERS_2;
return ( (NODEPTR) _currn);
}/* MkIDENTIFIERS_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkIDENTIFIERS_LST_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkIDENTIFIERS_LST_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPIDENTIFIERS_LST_2 _currn;
#ifdef __cplusplus
_currn = new _TPIDENTIFIERS_LST_2;
#else
_currn = (_TPPIDENTIFIERS_LST_2) TreeNodeAlloc (sizeof (struct _TPIDENTIFIERS_LST_2));
#endif
_currn->_prod = RULEIDENTIFIERS_LST_2;
_currn->_desc1 = (_TSPIdentifiers_2) MkIdentifiers_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE IDENTIFIERS_LST_2: root of subtree no. 1 can not be made a Identifiers_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPIdent_def_2) MkIdent_def_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE IDENTIFIERS_LST_2: root of subtree no. 2 can not be made a Ident_def_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_IDENTIFIERS_LST_2;
return ( (NODEPTR) _currn);
}/* MkIDENTIFIERS_LST_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_SPEC_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkATTR_SPEC_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPATTR_SPEC_2 _currn;
#ifdef __cplusplus
_currn = new _TPATTR_SPEC_2;
#else
_currn = (_TPPATTR_SPEC_2) TreeNodeAlloc (sizeof (struct _TPATTR_SPEC_2));
#endif
_currn->_prod = RULEATTR_SPEC_2;
_currn->_desc1 = (_TSPIdentifiers_2) MkIdentifiers_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_SPEC_2: root of subtree no. 1 can not be made a Identifiers_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPType_specifier_2) MkType_specifier_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_SPEC_2: root of subtree no. 2 can not be made a Type_specifier_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ATTR_SPEC_2;
return ( (NODEPTR) _currn);
}/* MkATTR_SPEC_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_DECL_CONST_TYPE_CONST_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkATTR_DECL_CONST_TYPE_CONST_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPATTR_DECL_CONST_TYPE_CONST_2 _currn;
#ifdef __cplusplus
_currn = new _TPATTR_DECL_CONST_TYPE_CONST_2;
#else
_currn = (_TPPATTR_DECL_CONST_TYPE_CONST_2) TreeNodeAlloc (sizeof (struct _TPATTR_DECL_CONST_TYPE_CONST_2));
#endif
_currn->_prod = RULEATTR_DECL_CONST_TYPE_CONST_2;
_currn->_desc1 = (_TSPIdentifiers_2) MkIdentifiers_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_CONST_TYPE_CONST_2: root of subtree no. 1 can not be made a Identifiers_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPType_constructor_2) MkType_constructor_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_CONST_TYPE_CONST_2: root of subtree no. 2 can not be made a Type_constructor_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ATTR_DECL_CONST_TYPE_CONST_2;
return ( (NODEPTR) _currn);
}/* MkATTR_DECL_CONST_TYPE_CONST_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_DECL_TYPE_CONST_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkATTR_DECL_TYPE_CONST_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPATTR_DECL_TYPE_CONST_2 _currn;
#ifdef __cplusplus
_currn = new _TPATTR_DECL_TYPE_CONST_2;
#else
_currn = (_TPPATTR_DECL_TYPE_CONST_2) TreeNodeAlloc (sizeof (struct _TPATTR_DECL_TYPE_CONST_2));
#endif
_currn->_prod = RULEATTR_DECL_TYPE_CONST_2;
_currn->_desc1 = (_TSPIdentifiers_2) MkIdentifiers_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_TYPE_CONST_2: root of subtree no. 1 can not be made a Identifiers_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPType_constructor_2) MkType_constructor_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_TYPE_CONST_2: root of subtree no. 2 can not be made a Type_constructor_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ATTR_DECL_TYPE_CONST_2;
return ( (NODEPTR) _currn);
}/* MkATTR_DECL_TYPE_CONST_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_DECL_CONST_EXP_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkATTR_DECL_CONST_EXP_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPATTR_DECL_CONST_EXP_2 _currn;
#ifdef __cplusplus
_currn = new _TPATTR_DECL_CONST_EXP_2;
#else
_currn = (_TPPATTR_DECL_CONST_EXP_2) TreeNodeAlloc (sizeof (struct _TPATTR_DECL_CONST_EXP_2));
#endif
_currn->_prod = RULEATTR_DECL_CONST_EXP_2;
_currn->_desc1 = (_TSPAttribute_specification_2) MkAttribute_specification_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_CONST_EXP_2: root of subtree no. 1 can not be made a Attribute_specification_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_CONST_EXP_2: root of subtree no. 2 can not be made a Expression_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ATTR_DECL_CONST_EXP_2;
return ( (NODEPTR) _currn);
}/* MkATTR_DECL_CONST_EXP_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_DECL_EXP_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkATTR_DECL_EXP_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPATTR_DECL_EXP_2 _currn;
#ifdef __cplusplus
_currn = new _TPATTR_DECL_EXP_2;
#else
_currn = (_TPPATTR_DECL_EXP_2) TreeNodeAlloc (sizeof (struct _TPATTR_DECL_EXP_2));
#endif
_currn->_prod = RULEATTR_DECL_EXP_2;
_currn->_desc1 = (_TSPAttribute_specification_2) MkAttribute_specification_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_EXP_2: root of subtree no. 1 can not be made a Attribute_specification_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_EXP_2: root of subtree no. 2 can not be made a Expression_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ATTR_DECL_EXP_2;
return ( (NODEPTR) _currn);
}/* MkATTR_DECL_EXP_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_DECL_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkATTR_DECL_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPATTR_DECL_2 _currn;
#ifdef __cplusplus
_currn = new _TPATTR_DECL_2;
#else
_currn = (_TPPATTR_DECL_2) TreeNodeAlloc (sizeof (struct _TPATTR_DECL_2));
#endif
_currn->_prod = RULEATTR_DECL_2;
_currn->_desc1 = (_TSPAttribute_specification_2) MkAttribute_specification_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_2: root of subtree no. 1 can not be made a Attribute_specification_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_ATTR_DECL_2;
return ( (NODEPTR) _currn);
}/* MkATTR_DECL_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_ACCESS_SH_RO_2 (POSITION *_coordref)
#else
NODEPTR MkATTR_ACCESS_SH_RO_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPATTR_ACCESS_SH_RO_2 _currn;
#ifdef __cplusplus
_currn = new _TPATTR_ACCESS_SH_RO_2;
#else
_currn = (_TPPATTR_ACCESS_SH_RO_2) TreeNodeAlloc (sizeof (struct _TPATTR_ACCESS_SH_RO_2));
#endif
_currn->_prod = RULEATTR_ACCESS_SH_RO_2;
_SETCOORD(_currn)
_TERMACT_ATTR_ACCESS_SH_RO_2;
return ( (NODEPTR) _currn);
}/* MkATTR_ACCESS_SH_RO_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_ACCESS_RO_2 (POSITION *_coordref)
#else
NODEPTR MkATTR_ACCESS_RO_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPATTR_ACCESS_RO_2 _currn;
#ifdef __cplusplus
_currn = new _TPATTR_ACCESS_RO_2;
#else
_currn = (_TPPATTR_ACCESS_RO_2) TreeNodeAlloc (sizeof (struct _TPATTR_ACCESS_RO_2));
#endif
_currn->_prod = RULEATTR_ACCESS_RO_2;
_SETCOORD(_currn)
_TERMACT_ATTR_ACCESS_RO_2;
return ( (NODEPTR) _currn);
}/* MkATTR_ACCESS_RO_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_ACCESS_SH_2 (POSITION *_coordref)
#else
NODEPTR MkATTR_ACCESS_SH_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPATTR_ACCESS_SH_2 _currn;
#ifdef __cplusplus
_currn = new _TPATTR_ACCESS_SH_2;
#else
_currn = (_TPPATTR_ACCESS_SH_2) TreeNodeAlloc (sizeof (struct _TPATTR_ACCESS_SH_2));
#endif
_currn->_prod = RULEATTR_ACCESS_SH_2;
_SETCOORD(_currn)
_TERMACT_ATTR_ACCESS_SH_2;
return ( (NODEPTR) _currn);
}/* MkATTR_ACCESS_SH_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_STREAM_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkFEATURE_STREAM_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPFEATURE_STREAM_2 _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_STREAM_2;
#else
_currn = (_TPPFEATURE_STREAM_2) TreeNodeAlloc (sizeof (struct _TPFEATURE_STREAM_2));
#endif
_currn->_prod = RULEFEATURE_STREAM_2;
_currn->_desc1 = (_TSPMethod_decl_2) MkMethod_decl_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_STREAM_2: root of subtree no. 1 can not be made a Method_decl_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_FEATURE_STREAM_2;
return ( (NODEPTR) _currn);
}/* MkFEATURE_STREAM_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_METH_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkFEATURE_METH_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPFEATURE_METH_2 _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_METH_2;
#else
_currn = (_TPPFEATURE_METH_2) TreeNodeAlloc (sizeof (struct _TPFEATURE_METH_2));
#endif
_currn->_prod = RULEFEATURE_METH_2;
_currn->_desc1 = (_TSPMethod_decl_2) MkMethod_decl_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_METH_2: root of subtree no. 1 can not be made a Method_decl_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_FEATURE_METH_2;
return ( (NODEPTR) _currn);
}/* MkFEATURE_METH_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_ATT_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkFEATURE_ATT_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPFEATURE_ATT_2 _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_ATT_2;
#else
_currn = (_TPPFEATURE_ATT_2) TreeNodeAlloc (sizeof (struct _TPFEATURE_ATT_2));
#endif
_currn->_prod = RULEFEATURE_ATT_2;
_currn->_desc1 = (_TSPAttribute_declaration_2) MkAttribute_declaration_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_ATT_2: root of subtree no. 1 can not be made a Attribute_declaration_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_FEATURE_ATT_2;
return ( (NODEPTR) _currn);
}/* MkFEATURE_ATT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_ATT_ACC_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkFEATURE_ATT_ACC_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPFEATURE_ATT_ACC_2 _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_ATT_ACC_2;
#else
_currn = (_TPPFEATURE_ATT_ACC_2) TreeNodeAlloc (sizeof (struct _TPFEATURE_ATT_ACC_2));
#endif
_currn->_prod = RULEFEATURE_ATT_ACC_2;
_currn->_desc1 = (_TSPAttribute_access_type_2) MkAttribute_access_type_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_ATT_ACC_2: root of subtree no. 1 can not be made a Attribute_access_type_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPAttribute_declaration_2) MkAttribute_declaration_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_ATT_ACC_2: root of subtree no. 2 can not be made a Attribute_declaration_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_FEATURE_ATT_ACC_2;
return ( (NODEPTR) _currn);
}/* MkFEATURE_ATT_ACC_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_DECL_PRIV_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkFEATURE_DECL_PRIV_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPFEATURE_DECL_PRIV_2 _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_DECL_PRIV_2;
#else
_currn = (_TPPFEATURE_DECL_PRIV_2) TreeNodeAlloc (sizeof (struct _TPFEATURE_DECL_PRIV_2));
#endif
_currn->_prod = RULEFEATURE_DECL_PRIV_2;
_currn->_desc1 = (_TSPFeature_2) MkFeature_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_DECL_PRIV_2: root of subtree no. 1 can not be made a Feature_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_FEATURE_DECL_PRIV_2;
return ( (NODEPTR) _currn);
}/* MkFEATURE_DECL_PRIV_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_DECL_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkFEATURE_DECL_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPFEATURE_DECL_2 _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_DECL_2;
#else
_currn = (_TPPFEATURE_DECL_2) TreeNodeAlloc (sizeof (struct _TPFEATURE_DECL_2));
#endif
_currn->_prod = RULEFEATURE_DECL_2;
_currn->_desc1 = (_TSPFeature_2) MkFeature_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_DECL_2: root of subtree no. 1 can not be made a Feature_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_FEATURE_DECL_2;
return ( (NODEPTR) _currn);
}/* MkFEATURE_DECL_2 */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _MkFeature_declaration_2FEATURE_DECLS_2 (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _MkFeature_declaration_2FEATURE_DECLS_2 (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_Feature_declaration_2FEATURE_DECLS_2 _new;
#ifdef __cplusplus
	_new = new _TPLST_Feature_declaration_2FEATURE_DECLS_2;
#else
	_new = (_TPPLST_Feature_declaration_2FEATURE_DECLS_2) TreeNodeAlloc (sizeof (struct _TPLST_Feature_declaration_2FEATURE_DECLS_2));
#endif
	_new->_prod = RULELST_Feature_declaration_2FEATURE_DECLS_2;
	_new->_desc1 = (_TSPFeature_declaration_2)elem;
	_new->_desc2 = (_TSPLST_Feature_declarations_2)_new;
	{_TPPLST_Feature_declaration_2FEATURE_DECLS_2 _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_Feature_declaration_2FEATURE_DECLS_2;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemFEATURE_DECLS_2 (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemFEATURE_DECLS_2 (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBMethod_decl_2)) 
		return _MkFeature_declaration_2FEATURE_DECLS_2 (_coordref, MkFeature_declaration_2 (_coordref, t));
	if (IsSymb (t, SYMBFeature_2)) 
		return _MkFeature_declaration_2FEATURE_DECLS_2 (_coordref, MkFeature_declaration_2 (_coordref, t));
	if (IsSymb (t, SYMBAttribute_specification_2)) 
		return _MkFeature_declaration_2FEATURE_DECLS_2 (_coordref, MkFeature_declaration_2 (_coordref, t));
	if (IsSymb (t, SYMBAttribute_declaration_2)) 
		return _MkFeature_declaration_2FEATURE_DECLS_2 (_coordref, MkFeature_declaration_2 (_coordref, t));
	if (IsSymb (t, SYMBFeature_declaration_2)) 
		return _MkFeature_declaration_2FEATURE_DECLS_2 (_coordref, MkFeature_declaration_2 (_coordref, t));
	message (DEADLY, "a FEATURE_DECLS_2 list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2FEATURE_DECLS_2 (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2FEATURE_DECLS_2 (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_Feature_declarations_2)
	l =_ElemFEATURE_DECLS_2 (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_Feature_declarations_2)
	r = _ElemFEATURE_DECLS_2 (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0FEATURE_DECLS_2)r)->_desc2);
((_TPPLST_0FEATURE_DECLS_2)r)->_desc2 = ((_TPPLST_0FEATURE_DECLS_2)l)->_desc2;
((_TPPLST_0FEATURE_DECLS_2)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_DECLS_2 (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkFEATURE_DECLS_2 (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPFEATURE_DECLS_2 root;
	_TPPLST_0FEATURE_DECLS_2 list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0FEATURE_DECLS_2)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_Feature_declarations_2)
		t = _ElemFEATURE_DECLS_2 (_coordref, t);
	remain = (_TPPLST_0FEATURE_DECLS_2)(((_TPPLST_0FEATURE_DECLS_2) t)->_desc2);
	((_TPPLST_0FEATURE_DECLS_2) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0FEATURE_DECLS_2;
#else
list = (_TPPLST_0FEATURE_DECLS_2) TreeNodeAlloc (sizeof (struct _TPLST_0FEATURE_DECLS_2));
#endif
list->_prod = RULELST_0FEATURE_DECLS_2;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0FEATURE_DECLS_2)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_Feature_declaration_2FEATURE_DECLS_2)
	{_TPPLST_Feature_declaration_2FEATURE_DECLS_2 _currn = _currn;
	 _TERMACT_LST_Feature_declaration_2FEATURE_DECLS_2;
	} this code has been moved to _ElemFEATURE_DECLS_2*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPFEATURE_DECLS_2;
#else
root = (_TPPFEATURE_DECLS_2) TreeNodeAlloc (sizeof (struct _TPFEATURE_DECLS_2));
#endif
root->_prod = RULEFEATURE_DECLS_2;
root->_desc1 = (_TSPLST_Feature_declarations_2)list;
{ _TPPFEATURE_DECLS_2 _currn = root;
  _SETCOORD(_currn)
  _TERMACT_FEATURE_DECLS_2;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkINHERITANCE_LIKE_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkINHERITANCE_LIKE_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPINHERITANCE_LIKE_2 _currn;
#ifdef __cplusplus
_currn = new _TPINHERITANCE_LIKE_2;
#else
_currn = (_TPPINHERITANCE_LIKE_2) TreeNodeAlloc (sizeof (struct _TPINHERITANCE_LIKE_2));
#endif
_currn->_prod = RULEINHERITANCE_LIKE_2;
_currn->_desc1 = (_TSPClass_specifier_2) MkClass_specifier_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCE_LIKE_2: root of subtree no. 1 can not be made a Class_specifier_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_INHERITANCE_LIKE_2;
return ( (NODEPTR) _currn);
}/* MkINHERITANCE_LIKE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkINHERITANCES_LST_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkINHERITANCES_LST_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPINHERITANCES_LST_2 _currn;
#ifdef __cplusplus
_currn = new _TPINHERITANCES_LST_2;
#else
_currn = (_TPPINHERITANCES_LST_2) TreeNodeAlloc (sizeof (struct _TPINHERITANCES_LST_2));
#endif
_currn->_prod = RULEINHERITANCES_LST_2;
_currn->_desc1 = (_TSPInheritances_2) MkInheritances_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCES_LST_2: root of subtree no. 1 can not be made a Inheritances_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPInheritance_2) MkInheritance_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCES_LST_2: root of subtree no. 2 can not be made a Inheritance_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_INHERITANCES_LST_2;
return ( (NODEPTR) _currn);
}/* MkINHERITANCES_LST_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkINHERITANCES_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkINHERITANCES_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPINHERITANCES_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPINHERITANCES_EMPTY_2;
#else
_currn = (_TPPINHERITANCES_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPINHERITANCES_EMPTY_2));
#endif
_currn->_prod = RULEINHERITANCES_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_INHERITANCES_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkINHERITANCES_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDIRECT_STREAM_CALL_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkDIRECT_STREAM_CALL_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPDIRECT_STREAM_CALL_2 _currn;
#ifdef __cplusplus
_currn = new _TPDIRECT_STREAM_CALL_2;
#else
_currn = (_TPPDIRECT_STREAM_CALL_2) TreeNodeAlloc (sizeof (struct _TPDIRECT_STREAM_CALL_2));
#endif
_currn->_prod = RULEDIRECT_STREAM_CALL_2;
_currn->_desc1 = (_TSPDesignator_2) MkDesignator_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE DIRECT_STREAM_CALL_2: root of subtree no. 1 can not be made a Designator_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPArguments_2) MkArguments_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE DIRECT_STREAM_CALL_2: root of subtree no. 2 can not be made a Arguments_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_DIRECT_STREAM_CALL_2;
return ( (NODEPTR) _currn);
}/* MkDIRECT_STREAM_CALL_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCOERCION_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCOERCION_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCOERCION_2 _currn;
#ifdef __cplusplus
_currn = new _TPCOERCION_2;
#else
_currn = (_TPPCOERCION_2) TreeNodeAlloc (sizeof (struct _TPCOERCION_2));
#endif
_currn->_prod = RULECOERCION_2;
_currn->_desc1 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE COERCION_2: root of subtree no. 1 can not be made a Expression_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPType_specifier_2) MkType_specifier_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE COERCION_2: root of subtree no. 2 can not be made a Type_specifier_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_COERCION_2;
return ( (NODEPTR) _currn);
}/* MkCOERCION_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTR_CONSTANT_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkSTR_CONSTANT_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPSTR_CONSTANT_2 _currn;
#ifdef __cplusplus
_currn = new _TPSTR_CONSTANT_2;
#else
_currn = (_TPPSTR_CONSTANT_2) TreeNodeAlloc (sizeof (struct _TPSTR_CONSTANT_2));
#endif
_currn->_prod = RULESTR_CONSTANT_2;
_SETCOORD(_currn)
_TERMACT_STR_CONSTANT_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "stringconst", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkSTR_CONSTANT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTR_CONSTANTS_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkSTR_CONSTANTS_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPSTR_CONSTANTS_2 _currn;
#ifdef __cplusplus
_currn = new _TPSTR_CONSTANTS_2;
#else
_currn = (_TPPSTR_CONSTANTS_2) TreeNodeAlloc (sizeof (struct _TPSTR_CONSTANTS_2));
#endif
_currn->_prod = RULESTR_CONSTANTS_2;
_currn->_desc1 = (_TSPStringconstant_2) MkStringconstant_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STR_CONSTANTS_2: root of subtree no. 1 can not be made a Stringconstant_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_STR_CONSTANTS_2;
return ( (NODEPTR) _currn);
}/* MkSTR_CONSTANTS_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTR_CONSTANTS_LST_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTR_CONSTANTS_LST_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTR_CONSTANTS_LST_2 _currn;
#ifdef __cplusplus
_currn = new _TPSTR_CONSTANTS_LST_2;
#else
_currn = (_TPPSTR_CONSTANTS_LST_2) TreeNodeAlloc (sizeof (struct _TPSTR_CONSTANTS_LST_2));
#endif
_currn->_prod = RULESTR_CONSTANTS_LST_2;
_currn->_desc1 = (_TSPStringconstant_2) MkStringconstant_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STR_CONSTANTS_LST_2: root of subtree no. 1 can not be made a Stringconstant_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPStringconstants_2) MkStringconstants_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STR_CONSTANTS_LST_2: root of subtree no. 2 can not be made a Stringconstants_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STR_CONSTANTS_LST_2;
return ( (NODEPTR) _currn);
}/* MkSTR_CONSTANTS_LST_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_VOID_2 (POSITION *_coordref)
#else
NODEPTR MkVALUE_VOID_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPVALUE_VOID_2 _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_VOID_2;
#else
_currn = (_TPPVALUE_VOID_2) TreeNodeAlloc (sizeof (struct _TPVALUE_VOID_2));
#endif
_currn->_prod = RULEVALUE_VOID_2;
_SETCOORD(_currn)
_TERMACT_VALUE_VOID_2;
return ( (NODEPTR) _currn);
}/* MkVALUE_VOID_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_SED_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_SED_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_SED_2 _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_SED_2;
#else
_currn = (_TPPVALUE_SED_2) TreeNodeAlloc (sizeof (struct _TPVALUE_SED_2));
#endif
_currn->_prod = RULEVALUE_SED_2;
_SETCOORD(_currn)
_TERMACT_VALUE_SED_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "sedecimal_number", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_SED_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_OCT_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_OCT_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_OCT_2 _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_OCT_2;
#else
_currn = (_TPPVALUE_OCT_2) TreeNodeAlloc (sizeof (struct _TPVALUE_OCT_2));
#endif
_currn->_prod = RULEVALUE_OCT_2;
_SETCOORD(_currn)
_TERMACT_VALUE_OCT_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "octal_number", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_OCT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_STR_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkVALUE_STR_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPVALUE_STR_2 _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_STR_2;
#else
_currn = (_TPPVALUE_STR_2) TreeNodeAlloc (sizeof (struct _TPVALUE_STR_2));
#endif
_currn->_prod = RULEVALUE_STR_2;
_currn->_desc1 = (_TSPStringconstants_2) MkStringconstants_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE VALUE_STR_2: root of subtree no. 1 can not be made a Stringconstants_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_VALUE_STR_2;
return ( (NODEPTR) _currn);
}/* MkVALUE_STR_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_CHAR_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_CHAR_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_CHAR_2 _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_CHAR_2;
#else
_currn = (_TPPVALUE_CHAR_2) TreeNodeAlloc (sizeof (struct _TPVALUE_CHAR_2));
#endif
_currn->_prod = RULEVALUE_CHAR_2;
_SETCOORD(_currn)
_TERMACT_VALUE_CHAR_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "characterconst", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_CHAR_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_BOOL_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_BOOL_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_BOOL_2 _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_BOOL_2;
#else
_currn = (_TPPVALUE_BOOL_2) TreeNodeAlloc (sizeof (struct _TPVALUE_BOOL_2));
#endif
_currn->_prod = RULEVALUE_BOOL_2;
_SETCOORD(_currn)
_TERMACT_VALUE_BOOL_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "boolean_value", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_BOOL_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_FLOAT_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_FLOAT_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_FLOAT_2 _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_FLOAT_2;
#else
_currn = (_TPPVALUE_FLOAT_2) TreeNodeAlloc (sizeof (struct _TPVALUE_FLOAT_2));
#endif
_currn->_prod = RULEVALUE_FLOAT_2;
_SETCOORD(_currn)
_TERMACT_VALUE_FLOAT_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "floating_number", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_FLOAT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_INT_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_INT_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_INT_2 _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_INT_2;
#else
_currn = (_TPPVALUE_INT_2) TreeNodeAlloc (sizeof (struct _TPVALUE_INT_2));
#endif
_currn->_prod = RULEVALUE_INT_2;
_SETCOORD(_currn)
_TERMACT_VALUE_INT_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "integer_number", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_INT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBOUND_METHOD_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkBOUND_METHOD_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPBOUND_METHOD_2 _currn;
#ifdef __cplusplus
_currn = new _TPBOUND_METHOD_2;
#else
_currn = (_TPPBOUND_METHOD_2) TreeNodeAlloc (sizeof (struct _TPBOUND_METHOD_2));
#endif
_currn->_prod = RULEBOUND_METHOD_2;
_currn->_desc1 = (_TSPDesignator_2) MkDesignator_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BOUND_METHOD_2: root of subtree no. 1 can not be made a Designator_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPArguments_2) MkArguments_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE BOUND_METHOD_2: root of subtree no. 2 can not be made a Arguments_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_BOUND_METHOD_2;
return ( (NODEPTR) _currn);
}/* MkBOUND_METHOD_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAMED_EXPRESSION_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkNAMED_EXPRESSION_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPNAMED_EXPRESSION_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAMED_EXPRESSION_2;
#else
_currn = (_TPPNAMED_EXPRESSION_2) TreeNodeAlloc (sizeof (struct _TPNAMED_EXPRESSION_2));
#endif
_currn->_prod = RULENAMED_EXPRESSION_2;
_currn->_desc1 = (_TSPName_2) MkName_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE NAMED_EXPRESSION_2: root of subtree no. 1 can not be made a Name_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE NAMED_EXPRESSION_2: root of subtree no. 2 can not be made a Expression_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_NAMED_EXPRESSION_2;
return ( (NODEPTR) _currn);
}/* MkNAMED_EXPRESSION_2 */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _MkNamed_expression_2NAMED_EXPRESSIONS_2 (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _MkNamed_expression_2NAMED_EXPRESSIONS_2 (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_Named_expression_2NAMED_EXPRESSIONS_2 _new;
#ifdef __cplusplus
	_new = new _TPLST_Named_expression_2NAMED_EXPRESSIONS_2;
#else
	_new = (_TPPLST_Named_expression_2NAMED_EXPRESSIONS_2) TreeNodeAlloc (sizeof (struct _TPLST_Named_expression_2NAMED_EXPRESSIONS_2));
#endif
	_new->_prod = RULELST_Named_expression_2NAMED_EXPRESSIONS_2;
	_new->_desc1 = (_TSPNamed_expression_2)elem;
	_new->_desc2 = (_TSPLST_Named_expressions_2)_new;
	{_TPPLST_Named_expression_2NAMED_EXPRESSIONS_2 _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_Named_expression_2NAMED_EXPRESSIONS_2;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemNAMED_EXPRESSIONS_2 (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemNAMED_EXPRESSIONS_2 (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBNamed_expression_2)) 
		return _MkNamed_expression_2NAMED_EXPRESSIONS_2 (_coordref, MkNamed_expression_2 (_coordref, t));
	message (DEADLY, "a NAMED_EXPRESSIONS_2 list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2NAMED_EXPRESSIONS_2 (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2NAMED_EXPRESSIONS_2 (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_Named_expressions_2)
	l =_ElemNAMED_EXPRESSIONS_2 (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_Named_expressions_2)
	r = _ElemNAMED_EXPRESSIONS_2 (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0NAMED_EXPRESSIONS_2)r)->_desc2);
((_TPPLST_0NAMED_EXPRESSIONS_2)r)->_desc2 = ((_TPPLST_0NAMED_EXPRESSIONS_2)l)->_desc2;
((_TPPLST_0NAMED_EXPRESSIONS_2)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAMED_EXPRESSIONS_2 (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkNAMED_EXPRESSIONS_2 (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPNAMED_EXPRESSIONS_2 root;
	_TPPLST_0NAMED_EXPRESSIONS_2 list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0NAMED_EXPRESSIONS_2)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_Named_expressions_2)
		t = _ElemNAMED_EXPRESSIONS_2 (_coordref, t);
	remain = (_TPPLST_0NAMED_EXPRESSIONS_2)(((_TPPLST_0NAMED_EXPRESSIONS_2) t)->_desc2);
	((_TPPLST_0NAMED_EXPRESSIONS_2) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0NAMED_EXPRESSIONS_2;
#else
list = (_TPPLST_0NAMED_EXPRESSIONS_2) TreeNodeAlloc (sizeof (struct _TPLST_0NAMED_EXPRESSIONS_2));
#endif
list->_prod = RULELST_0NAMED_EXPRESSIONS_2;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0NAMED_EXPRESSIONS_2)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_Named_expression_2NAMED_EXPRESSIONS_2)
	{_TPPLST_Named_expression_2NAMED_EXPRESSIONS_2 _currn = _currn;
	 _TERMACT_LST_Named_expression_2NAMED_EXPRESSIONS_2;
	} this code has been moved to _ElemNAMED_EXPRESSIONS_2*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPNAMED_EXPRESSIONS_2;
#else
root = (_TPPNAMED_EXPRESSIONS_2) TreeNodeAlloc (sizeof (struct _TPNAMED_EXPRESSIONS_2));
#endif
root->_prod = RULENAMED_EXPRESSIONS_2;
root->_desc1 = (_TSPLST_Named_expressions_2)list;
{ _TPPNAMED_EXPRESSIONS_2 _currn = root;
  _SETCOORD(_currn)
  _TERMACT_NAMED_EXPRESSIONS_2;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAGG_ID_DEF_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkAGG_ID_DEF_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPAGG_ID_DEF_2 _currn;
#ifdef __cplusplus
_currn = new _TPAGG_ID_DEF_2;
#else
_currn = (_TPPAGG_ID_DEF_2) TreeNodeAlloc (sizeof (struct _TPAGG_ID_DEF_2));
#endif
_currn->_prod = RULEAGG_ID_DEF_2;
_SETCOORD(_currn)
_TERMACT_AGG_ID_DEF_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkAGG_ID_DEF_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAGGREGATE_NAMED_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkAGGREGATE_NAMED_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPAGGREGATE_NAMED_2 _currn;
#ifdef __cplusplus
_currn = new _TPAGGREGATE_NAMED_2;
#else
_currn = (_TPPAGGREGATE_NAMED_2) TreeNodeAlloc (sizeof (struct _TPAGGREGATE_NAMED_2));
#endif
_currn->_prod = RULEAGGREGATE_NAMED_2;
_currn->_desc1 = (_TSPAgg_id_def_2) MkAgg_id_def_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE AGGREGATE_NAMED_2: root of subtree no. 1 can not be made a Agg_id_def_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPNamed_expressions_2) MkNamed_expressions_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE AGGREGATE_NAMED_2: root of subtree no. 2 can not be made a Named_expressions_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_AGGREGATE_NAMED_2;
return ( (NODEPTR) _currn);
}/* MkAGGREGATE_NAMED_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAGGREGATE_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkAGGREGATE_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPAGGREGATE_2 _currn;
#ifdef __cplusplus
_currn = new _TPAGGREGATE_2;
#else
_currn = (_TPPAGGREGATE_2) TreeNodeAlloc (sizeof (struct _TPAGGREGATE_2));
#endif
_currn->_prod = RULEAGGREGATE_2;
_currn->_desc1 = (_TSPNamed_expressions_2) MkNamed_expressions_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE AGGREGATE_2: root of subtree no. 1 can not be made a Named_expressions_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_AGGREGATE_2;
return ( (NODEPTR) _currn);
}/* MkAGGREGATE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_SAME_AGG_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_CONSTRUCTOR_SAME_AGG_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_CONSTRUCTOR_SAME_AGG_2 _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_SAME_AGG_2;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_SAME_AGG_2) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_SAME_AGG_2));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_SAME_AGG_2;
_currn->_desc1 = (_TSPAggregate_2) MkAggregate_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_SAME_AGG_2: root of subtree no. 1 can not be made a Aggregate_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_SAME_AGG_2;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_SAME_AGG_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_SAME_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_CONSTRUCTOR_SAME_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_CONSTRUCTOR_SAME_2 _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_SAME_2;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_SAME_2) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_SAME_2));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_SAME_2;
_currn->_desc1 = (_TSPArguments_2) MkArguments_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_SAME_2: root of subtree no. 1 can not be made a Arguments_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_SAME_2;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_SAME_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_DES_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPE_CONSTRUCTOR_DES_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPE_CONSTRUCTOR_DES_2 _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_DES_2;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_DES_2) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_DES_2));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_DES_2;
_currn->_desc1 = (_TSPDesignator_2) MkDesignator_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_DES_2: root of subtree no. 1 can not be made a Designator_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPArguments_2) MkArguments_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_DES_2: root of subtree no. 2 can not be made a Arguments_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_DES_2;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_DES_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_AGG_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_CONSTRUCTOR_AGG_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_CONSTRUCTOR_AGG_2 _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_AGG_2;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_AGG_2) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_AGG_2));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_AGG_2;
_currn->_desc1 = (_TSPAggregate_2) MkAggregate_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_AGG_2: root of subtree no. 1 can not be made a Aggregate_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_AGG_2;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_AGG_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_CLASS_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPE_CONSTRUCTOR_CLASS_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPE_CONSTRUCTOR_CLASS_2 _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_CLASS_2;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_CLASS_2) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_CLASS_2));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_CLASS_2;
_currn->_desc1 = (_TSPClass_specifier_2) MkClass_specifier_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_CLASS_2: root of subtree no. 1 can not be made a Class_specifier_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPArguments_2) MkArguments_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_CLASS_2: root of subtree no. 2 can not be made a Arguments_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_CLASS_2;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_CLASS_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_CL_AGG_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPE_CONSTRUCTOR_CL_AGG_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPE_CONSTRUCTOR_CL_AGG_2 _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_CL_AGG_2;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_CL_AGG_2) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_CL_AGG_2));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_CL_AGG_2;
_currn->_desc1 = (_TSPClass_specifier_2) MkClass_specifier_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_CL_AGG_2: root of subtree no. 1 can not be made a Class_specifier_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPAggregate_2) MkAggregate_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_CL_AGG_2: root of subtree no. 2 can not be made a Aggregate_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_CL_AGG_2;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_CL_AGG_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkQUAL_FEATURE_ID_USE_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkQUAL_FEATURE_ID_USE_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPQUAL_FEATURE_ID_USE_2 _currn;
#ifdef __cplusplus
_currn = new _TPQUAL_FEATURE_ID_USE_2;
#else
_currn = (_TPPQUAL_FEATURE_ID_USE_2) TreeNodeAlloc (sizeof (struct _TPQUAL_FEATURE_ID_USE_2));
#endif
_currn->_prod = RULEQUAL_FEATURE_ID_USE_2;
_SETCOORD(_currn)
_TERMACT_QUAL_FEATURE_ID_USE_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkQUAL_FEATURE_ID_USE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkQUALIFICATION_TYPE_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkQUALIFICATION_TYPE_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPQUALIFICATION_TYPE_2 _currn;
#ifdef __cplusplus
_currn = new _TPQUALIFICATION_TYPE_2;
#else
_currn = (_TPPQUALIFICATION_TYPE_2) TreeNodeAlloc (sizeof (struct _TPQUALIFICATION_TYPE_2));
#endif
_currn->_prod = RULEQUALIFICATION_TYPE_2;
_currn->_desc1 = (_TSPType_specifier_2) MkType_specifier_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE QUALIFICATION_TYPE_2: root of subtree no. 1 can not be made a Type_specifier_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPQual_feature_id_use_2) MkQual_feature_id_use_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE QUALIFICATION_TYPE_2: root of subtree no. 2 can not be made a Qual_feature_id_use_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_QUALIFICATION_TYPE_2;
return ( (NODEPTR) _currn);
}/* MkQUALIFICATION_TYPE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkQUALIFICATION_EXP_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkQUALIFICATION_EXP_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPQUALIFICATION_EXP_2 _currn;
#ifdef __cplusplus
_currn = new _TPQUALIFICATION_EXP_2;
#else
_currn = (_TPPQUALIFICATION_EXP_2) TreeNodeAlloc (sizeof (struct _TPQUALIFICATION_EXP_2));
#endif
_currn->_prod = RULEQUALIFICATION_EXP_2;
_currn->_desc1 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE QUALIFICATION_EXP_2: root of subtree no. 1 can not be made a Expression_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPQual_feature_id_use_2) MkQual_feature_id_use_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE QUALIFICATION_EXP_2: root of subtree no. 2 can not be made a Qual_feature_id_use_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_QUALIFICATION_EXP_2;
return ( (NODEPTR) _currn);
}/* MkQUALIFICATION_EXP_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTD_METHOD_CALL_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTD_METHOD_CALL_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTD_METHOD_CALL_2 _currn;
#ifdef __cplusplus
_currn = new _TPSTD_METHOD_CALL_2;
#else
_currn = (_TPPSTD_METHOD_CALL_2) TreeNodeAlloc (sizeof (struct _TPSTD_METHOD_CALL_2));
#endif
_currn->_prod = RULESTD_METHOD_CALL_2;
_currn->_desc1 = (_TSPDesignator_2) MkDesignator_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STD_METHOD_CALL_2: root of subtree no. 1 can not be made a Designator_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPArguments_2) MkArguments_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STD_METHOD_CALL_2: root of subtree no. 2 can not be made a Arguments_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STD_METHOD_CALL_2;
return ( (NODEPTR) _currn);
}/* MkSTD_METHOD_CALL_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkOBJ_ID_USE_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkOBJ_ID_USE_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPOBJ_ID_USE_2 _currn;
#ifdef __cplusplus
_currn = new _TPOBJ_ID_USE_2;
#else
_currn = (_TPPOBJ_ID_USE_2) TreeNodeAlloc (sizeof (struct _TPOBJ_ID_USE_2));
#endif
_currn->_prod = RULEOBJ_ID_USE_2;
_SETCOORD(_currn)
_TERMACT_OBJ_ID_USE_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkOBJ_ID_USE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_NOT_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_NOT_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_NOT_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_NOT_2;
#else
_currn = (_TPPNAME_NOT_2) TreeNodeAlloc (sizeof (struct _TPNAME_NOT_2));
#endif
_currn->_prod = RULENAME_NOT_2;
_SETCOORD(_currn)
_TERMACT_NAME_NOT_2;
return ( (NODEPTR) _currn);
}/* MkNAME_NOT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_POW_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_POW_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_POW_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_POW_2;
#else
_currn = (_TPPNAME_POW_2) TreeNodeAlloc (sizeof (struct _TPNAME_POW_2));
#endif
_currn->_prod = RULENAME_POW_2;
_SETCOORD(_currn)
_TERMACT_NAME_POW_2;
return ( (NODEPTR) _currn);
}/* MkNAME_POW_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_MOD_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_MOD_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_MOD_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_MOD_2;
#else
_currn = (_TPPNAME_MOD_2) TreeNodeAlloc (sizeof (struct _TPNAME_MOD_2));
#endif
_currn->_prod = RULENAME_MOD_2;
_SETCOORD(_currn)
_TERMACT_NAME_MOD_2;
return ( (NODEPTR) _currn);
}/* MkNAME_MOD_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_DIV_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_DIV_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_DIV_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_DIV_2;
#else
_currn = (_TPPNAME_DIV_2) TreeNodeAlloc (sizeof (struct _TPNAME_DIV_2));
#endif
_currn->_prod = RULENAME_DIV_2;
_SETCOORD(_currn)
_TERMACT_NAME_DIV_2;
return ( (NODEPTR) _currn);
}/* MkNAME_DIV_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_QUOTIENT_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_QUOTIENT_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_QUOTIENT_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_QUOTIENT_2;
#else
_currn = (_TPPNAME_QUOTIENT_2) TreeNodeAlloc (sizeof (struct _TPNAME_QUOTIENT_2));
#endif
_currn->_prod = RULENAME_QUOTIENT_2;
_SETCOORD(_currn)
_TERMACT_NAME_QUOTIENT_2;
return ( (NODEPTR) _currn);
}/* MkNAME_QUOTIENT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_STAR_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkNAME_STAR_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPNAME_STAR_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_STAR_2;
#else
_currn = (_TPPNAME_STAR_2) TreeNodeAlloc (sizeof (struct _TPNAME_STAR_2));
#endif
_currn->_prod = RULENAME_STAR_2;
_SETCOORD(_currn)
_TERMACT_NAME_STAR_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "star", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkNAME_STAR_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_MINUS_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_MINUS_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_MINUS_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_MINUS_2;
#else
_currn = (_TPPNAME_MINUS_2) TreeNodeAlloc (sizeof (struct _TPNAME_MINUS_2));
#endif
_currn->_prod = RULENAME_MINUS_2;
_SETCOORD(_currn)
_TERMACT_NAME_MINUS_2;
return ( (NODEPTR) _currn);
}/* MkNAME_MINUS_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_PLUS_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_PLUS_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_PLUS_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_PLUS_2;
#else
_currn = (_TPPNAME_PLUS_2) TreeNodeAlloc (sizeof (struct _TPNAME_PLUS_2));
#endif
_currn->_prod = RULENAME_PLUS_2;
_SETCOORD(_currn)
_TERMACT_NAME_PLUS_2;
return ( (NODEPTR) _currn);
}/* MkNAME_PLUS_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_GT_EQ_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_GT_EQ_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_GT_EQ_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_GT_EQ_2;
#else
_currn = (_TPPNAME_GT_EQ_2) TreeNodeAlloc (sizeof (struct _TPNAME_GT_EQ_2));
#endif
_currn->_prod = RULENAME_GT_EQ_2;
_SETCOORD(_currn)
_TERMACT_NAME_GT_EQ_2;
return ( (NODEPTR) _currn);
}/* MkNAME_GT_EQ_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_GT_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_GT_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_GT_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_GT_2;
#else
_currn = (_TPPNAME_GT_2) TreeNodeAlloc (sizeof (struct _TPNAME_GT_2));
#endif
_currn->_prod = RULENAME_GT_2;
_SETCOORD(_currn)
_TERMACT_NAME_GT_2;
return ( (NODEPTR) _currn);
}/* MkNAME_GT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_LT_EQ_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_LT_EQ_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_LT_EQ_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_LT_EQ_2;
#else
_currn = (_TPPNAME_LT_EQ_2) TreeNodeAlloc (sizeof (struct _TPNAME_LT_EQ_2));
#endif
_currn->_prod = RULENAME_LT_EQ_2;
_SETCOORD(_currn)
_TERMACT_NAME_LT_EQ_2;
return ( (NODEPTR) _currn);
}/* MkNAME_LT_EQ_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_LT_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_LT_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_LT_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_LT_2;
#else
_currn = (_TPPNAME_LT_2) TreeNodeAlloc (sizeof (struct _TPNAME_LT_2));
#endif
_currn->_prod = RULENAME_LT_2;
_SETCOORD(_currn)
_TERMACT_NAME_LT_2;
return ( (NODEPTR) _currn);
}/* MkNAME_LT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_EQ_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_EQ_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_EQ_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_EQ_2;
#else
_currn = (_TPPNAME_EQ_2) TreeNodeAlloc (sizeof (struct _TPNAME_EQ_2));
#endif
_currn->_prod = RULENAME_EQ_2;
_SETCOORD(_currn)
_TERMACT_NAME_EQ_2;
return ( (NODEPTR) _currn);
}/* MkNAME_EQ_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_QUESTION_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_QUESTION_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_QUESTION_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_QUESTION_2;
#else
_currn = (_TPPNAME_QUESTION_2) TreeNodeAlloc (sizeof (struct _TPNAME_QUESTION_2));
#endif
_currn->_prod = RULENAME_QUESTION_2;
_SETCOORD(_currn)
_TERMACT_NAME_QUESTION_2;
return ( (NODEPTR) _currn);
}/* MkNAME_QUESTION_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_GRAVE_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_GRAVE_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_GRAVE_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_GRAVE_2;
#else
_currn = (_TPPNAME_GRAVE_2) TreeNodeAlloc (sizeof (struct _TPNAME_GRAVE_2));
#endif
_currn->_prod = RULENAME_GRAVE_2;
_SETCOORD(_currn)
_TERMACT_NAME_GRAVE_2;
return ( (NODEPTR) _currn);
}/* MkNAME_GRAVE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_TILDE_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_TILDE_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_TILDE_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_TILDE_2;
#else
_currn = (_TPPNAME_TILDE_2) TreeNodeAlloc (sizeof (struct _TPNAME_TILDE_2));
#endif
_currn->_prod = RULENAME_TILDE_2;
_SETCOORD(_currn)
_TERMACT_NAME_TILDE_2;
return ( (NODEPTR) _currn);
}/* MkNAME_TILDE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_STROKE_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_STROKE_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_STROKE_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_STROKE_2;
#else
_currn = (_TPPNAME_STROKE_2) TreeNodeAlloc (sizeof (struct _TPNAME_STROKE_2));
#endif
_currn->_prod = RULENAME_STROKE_2;
_SETCOORD(_currn)
_TERMACT_NAME_STROKE_2;
return ( (NODEPTR) _currn);
}/* MkNAME_STROKE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_BACKSLASH_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_BACKSLASH_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_BACKSLASH_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_BACKSLASH_2;
#else
_currn = (_TPPNAME_BACKSLASH_2) TreeNodeAlloc (sizeof (struct _TPNAME_BACKSLASH_2));
#endif
_currn->_prod = RULENAME_BACKSLASH_2;
_SETCOORD(_currn)
_TERMACT_NAME_BACKSLASH_2;
return ( (NODEPTR) _currn);
}/* MkNAME_BACKSLASH_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_STR_IN_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_STR_IN_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_STR_IN_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_STR_IN_2;
#else
_currn = (_TPPNAME_STR_IN_2) TreeNodeAlloc (sizeof (struct _TPNAME_STR_IN_2));
#endif
_currn->_prod = RULENAME_STR_IN_2;
_SETCOORD(_currn)
_TERMACT_NAME_STR_IN_2;
return ( (NODEPTR) _currn);
}/* MkNAME_STR_IN_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_STR_OUT_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_STR_OUT_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_STR_OUT_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_STR_OUT_2;
#else
_currn = (_TPPNAME_STR_OUT_2) TreeNodeAlloc (sizeof (struct _TPNAME_STR_OUT_2));
#endif
_currn->_prod = RULENAME_STR_OUT_2;
_SETCOORD(_currn)
_TERMACT_NAME_STR_OUT_2;
return ( (NODEPTR) _currn);
}/* MkNAME_STR_OUT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_EMPTY_2;
#else
_currn = (_TPPNAME_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPNAME_EMPTY_2));
#endif
_currn->_prod = RULENAME_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_NAME_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkNAME_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_OBJ_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkNAME_OBJ_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPNAME_OBJ_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_OBJ_2;
#else
_currn = (_TPPNAME_OBJ_2) TreeNodeAlloc (sizeof (struct _TPNAME_OBJ_2));
#endif
_currn->_prod = RULENAME_OBJ_2;
_currn->_desc1 = (_TSPObj_id_use_2) MkObj_id_use_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE NAME_OBJ_2: root of subtree no. 1 can not be made a Obj_id_use_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_NAME_OBJ_2;
return ( (NODEPTR) _currn);
}/* MkNAME_OBJ_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_LEFT_SQ_BRACKET_2 (POSITION *_coordref)
#else
NODEPTR MkNAME_LEFT_SQ_BRACKET_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_LEFT_SQ_BRACKET_2 _currn;
#ifdef __cplusplus
_currn = new _TPNAME_LEFT_SQ_BRACKET_2;
#else
_currn = (_TPPNAME_LEFT_SQ_BRACKET_2) TreeNodeAlloc (sizeof (struct _TPNAME_LEFT_SQ_BRACKET_2));
#endif
_currn->_prod = RULENAME_LEFT_SQ_BRACKET_2;
_SETCOORD(_currn)
_TERMACT_NAME_LEFT_SQ_BRACKET_2;
return ( (NODEPTR) _currn);
}/* MkNAME_LEFT_SQ_BRACKET_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_AND_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkEXPRESSION_AND_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPEXPRESSION_AND_2 _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_AND_2;
#else
_currn = (_TPPEXPRESSION_AND_2) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_AND_2));
#endif
_currn->_prod = RULEEXPRESSION_AND_2;
_currn->_desc1 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_AND_2: root of subtree no. 1 can not be made a Expression_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_AND_2: root of subtree no. 2 can not be made a Expression_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_EXPRESSION_AND_2;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_AND_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_OR_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkEXPRESSION_OR_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPEXPRESSION_OR_2 _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_OR_2;
#else
_currn = (_TPPEXPRESSION_OR_2) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_OR_2));
#endif
_currn->_prod = RULEEXPRESSION_OR_2;
_currn->_desc1 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_OR_2: root of subtree no. 1 can not be made a Expression_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_OR_2: root of subtree no. 2 can not be made a Expression_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_EXPRESSION_OR_2;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_OR_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_STREAM_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_STREAM_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_STREAM_2 _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_STREAM_2;
#else
_currn = (_TPPEXPRESSION_STREAM_2) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_STREAM_2));
#endif
_currn->_prod = RULEEXPRESSION_STREAM_2;
_currn->_desc1 = (_TSPDirect_stream_call_2) MkDirect_stream_call_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_STREAM_2: root of subtree no. 1 can not be made a Direct_stream_call_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_STREAM_2;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_STREAM_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_METH_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_METH_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_METH_2 _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_METH_2;
#else
_currn = (_TPPEXPRESSION_METH_2) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_METH_2));
#endif
_currn->_prod = RULEEXPRESSION_METH_2;
_currn->_desc1 = (_TSPStd_method_call_2) MkStd_method_call_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_METH_2: root of subtree no. 1 can not be made a Std_method_call_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_METH_2;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_METH_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_COERCION_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_COERCION_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_COERCION_2 _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_COERCION_2;
#else
_currn = (_TPPEXPRESSION_COERCION_2) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_COERCION_2));
#endif
_currn->_prod = RULEEXPRESSION_COERCION_2;
_currn->_desc1 = (_TSPCoercion_2) MkCoercion_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_COERCION_2: root of subtree no. 1 can not be made a Coercion_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_COERCION_2;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_COERCION_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_VALUE_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_VALUE_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_VALUE_2 _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_VALUE_2;
#else
_currn = (_TPPEXPRESSION_VALUE_2) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_VALUE_2));
#endif
_currn->_prod = RULEEXPRESSION_VALUE_2;
_currn->_desc1 = (_TSPValue_2) MkValue_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_VALUE_2: root of subtree no. 1 can not be made a Value_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_VALUE_2;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_VALUE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_BOUND_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_BOUND_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_BOUND_2 _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_BOUND_2;
#else
_currn = (_TPPEXPRESSION_BOUND_2) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_BOUND_2));
#endif
_currn->_prod = RULEEXPRESSION_BOUND_2;
_currn->_desc1 = (_TSPBound_method_2) MkBound_method_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_BOUND_2: root of subtree no. 1 can not be made a Bound_method_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_BOUND_2;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_BOUND_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_CONS_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_CONS_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_CONS_2 _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_CONS_2;
#else
_currn = (_TPPEXPRESSION_CONS_2) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_CONS_2));
#endif
_currn->_prod = RULEEXPRESSION_CONS_2;
_currn->_desc1 = (_TSPType_constructor_2) MkType_constructor_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_CONS_2: root of subtree no. 1 can not be made a Type_constructor_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_CONS_2;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_CONS_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_STAR_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkEXPRESSION_STAR_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPEXPRESSION_STAR_2 _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_STAR_2;
#else
_currn = (_TPPEXPRESSION_STAR_2) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_STAR_2));
#endif
_currn->_prod = RULEEXPRESSION_STAR_2;
_SETCOORD(_currn)
_TERMACT_EXPRESSION_STAR_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "star", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkEXPRESSION_STAR_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDESIGNATOR_QUAL_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkDESIGNATOR_QUAL_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPDESIGNATOR_QUAL_2 _currn;
#ifdef __cplusplus
_currn = new _TPDESIGNATOR_QUAL_2;
#else
_currn = (_TPPDESIGNATOR_QUAL_2) TreeNodeAlloc (sizeof (struct _TPDESIGNATOR_QUAL_2));
#endif
_currn->_prod = RULEDESIGNATOR_QUAL_2;
_currn->_desc1 = (_TSPQualification_2) MkQualification_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE DESIGNATOR_QUAL_2: root of subtree no. 1 can not be made a Qualification_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_DESIGNATOR_QUAL_2;
return ( (NODEPTR) _currn);
}/* MkDESIGNATOR_QUAL_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDESIGNATOR_METH_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkDESIGNATOR_METH_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPDESIGNATOR_METH_2 _currn;
#ifdef __cplusplus
_currn = new _TPDESIGNATOR_METH_2;
#else
_currn = (_TPPDESIGNATOR_METH_2) TreeNodeAlloc (sizeof (struct _TPDESIGNATOR_METH_2));
#endif
_currn->_prod = RULEDESIGNATOR_METH_2;
_currn->_desc1 = (_TSPStd_method_call_2) MkStd_method_call_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE DESIGNATOR_METH_2: root of subtree no. 1 can not be made a Std_method_call_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_DESIGNATOR_METH_2;
return ( (NODEPTR) _currn);
}/* MkDESIGNATOR_METH_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDESIGNATOR_EXP_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkDESIGNATOR_EXP_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPDESIGNATOR_EXP_2 _currn;
#ifdef __cplusplus
_currn = new _TPDESIGNATOR_EXP_2;
#else
_currn = (_TPPDESIGNATOR_EXP_2) TreeNodeAlloc (sizeof (struct _TPDESIGNATOR_EXP_2));
#endif
_currn->_prod = RULEDESIGNATOR_EXP_2;
_currn->_desc1 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE DESIGNATOR_EXP_2: root of subtree no. 1 can not be made a Expression_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPName_2) MkName_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE DESIGNATOR_EXP_2: root of subtree no. 2 can not be made a Name_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_DESIGNATOR_EXP_2;
return ( (NODEPTR) _currn);
}/* MkDESIGNATOR_EXP_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDESIGNATOR_NAME_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkDESIGNATOR_NAME_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPDESIGNATOR_NAME_2 _currn;
#ifdef __cplusplus
_currn = new _TPDESIGNATOR_NAME_2;
#else
_currn = (_TPPDESIGNATOR_NAME_2) TreeNodeAlloc (sizeof (struct _TPDESIGNATOR_NAME_2));
#endif
_currn->_prod = RULEDESIGNATOR_NAME_2;
_currn->_desc1 = (_TSPName_2) MkName_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE DESIGNATOR_NAME_2: root of subtree no. 1 can not be made a Name_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_DESIGNATOR_NAME_2;
return ( (NODEPTR) _currn);
}/* MkDESIGNATOR_NAME_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENT_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkARGUMENT_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPARGUMENT_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENT_EMPTY_2;
#else
_currn = (_TPPARGUMENT_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPARGUMENT_EMPTY_2));
#endif
_currn->_prod = RULEARGUMENT_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_ARGUMENT_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkARGUMENT_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENT_INOUT_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkARGUMENT_INOUT_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPARGUMENT_INOUT_2 _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENT_INOUT_2;
#else
_currn = (_TPPARGUMENT_INOUT_2) TreeNodeAlloc (sizeof (struct _TPARGUMENT_INOUT_2));
#endif
_currn->_prod = RULEARGUMENT_INOUT_2;
_currn->_desc1 = (_TSPDesignator_2) MkDesignator_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ARGUMENT_INOUT_2: root of subtree no. 1 can not be made a Designator_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ARGUMENT_INOUT_2;
return ( (NODEPTR) _currn);
}/* MkARGUMENT_INOUT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENT_OUT_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkARGUMENT_OUT_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPARGUMENT_OUT_2 _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENT_OUT_2;
#else
_currn = (_TPPARGUMENT_OUT_2) TreeNodeAlloc (sizeof (struct _TPARGUMENT_OUT_2));
#endif
_currn->_prod = RULEARGUMENT_OUT_2;
_currn->_desc1 = (_TSPDesignator_2) MkDesignator_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ARGUMENT_OUT_2: root of subtree no. 1 can not be made a Designator_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ARGUMENT_OUT_2;
return ( (NODEPTR) _currn);
}/* MkARGUMENT_OUT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENT_EXP_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkARGUMENT_EXP_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPARGUMENT_EXP_2 _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENT_EXP_2;
#else
_currn = (_TPPARGUMENT_EXP_2) TreeNodeAlloc (sizeof (struct _TPARGUMENT_EXP_2));
#endif
_currn->_prod = RULEARGUMENT_EXP_2;
_currn->_desc1 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ARGUMENT_EXP_2: root of subtree no. 1 can not be made a Expression_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_ARGUMENT_EXP_2;
return ( (NODEPTR) _currn);
}/* MkARGUMENT_EXP_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENTS_LST_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkARGUMENTS_LST_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPARGUMENTS_LST_2 _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENTS_LST_2;
#else
_currn = (_TPPARGUMENTS_LST_2) TreeNodeAlloc (sizeof (struct _TPARGUMENTS_LST_2));
#endif
_currn->_prod = RULEARGUMENTS_LST_2;
_currn->_desc1 = (_TSPArguments_2) MkArguments_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ARGUMENTS_LST_2: root of subtree no. 1 can not be made a Arguments_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPArgument_2) MkArgument_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ARGUMENTS_LST_2: root of subtree no. 2 can not be made a Argument_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ARGUMENTS_LST_2;
return ( (NODEPTR) _currn);
}/* MkARGUMENTS_LST_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENTS_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkARGUMENTS_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPARGUMENTS_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENTS_EMPTY_2;
#else
_currn = (_TPPARGUMENTS_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPARGUMENTS_EMPTY_2));
#endif
_currn->_prod = RULEARGUMENTS_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_ARGUMENTS_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkARGUMENTS_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBOUND_EXP_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkBOUND_EXP_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPBOUND_EXP_2 _currn;
#ifdef __cplusplus
_currn = new _TPBOUND_EXP_2;
#else
_currn = (_TPPBOUND_EXP_2) TreeNodeAlloc (sizeof (struct _TPBOUND_EXP_2));
#endif
_currn->_prod = RULEBOUND_EXP_2;
_currn->_desc1 = (_TSPExpression_2) MkExpression_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BOUND_EXP_2: root of subtree no. 1 can not be made a Expression_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_BOUND_EXP_2;
return ( (NODEPTR) _currn);
}/* MkBOUND_EXP_2 */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _MkBound_2BOUNDS_2 (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _MkBound_2BOUNDS_2 (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_Bound_2BOUNDS_2 _new;
#ifdef __cplusplus
	_new = new _TPLST_Bound_2BOUNDS_2;
#else
	_new = (_TPPLST_Bound_2BOUNDS_2) TreeNodeAlloc (sizeof (struct _TPLST_Bound_2BOUNDS_2));
#endif
	_new->_prod = RULELST_Bound_2BOUNDS_2;
	_new->_desc1 = (_TSPBound_2)elem;
	_new->_desc2 = (_TSPLST_Bounds_2)_new;
	{_TPPLST_Bound_2BOUNDS_2 _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_Bound_2BOUNDS_2;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemBOUNDS_2 (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemBOUNDS_2 (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBBound_method_2)) 
		return _MkBound_2BOUNDS_2 (_coordref, MkBound_2 (_coordref, t));
	if (IsSymb (t, SYMBCoercion_2)) 
		return _MkBound_2BOUNDS_2 (_coordref, MkBound_2 (_coordref, t));
	if (IsSymb (t, SYMBStd_method_call_2)) 
		return _MkBound_2BOUNDS_2 (_coordref, MkBound_2 (_coordref, t));
	if (IsSymb (t, SYMBDirect_stream_call_2)) 
		return _MkBound_2BOUNDS_2 (_coordref, MkBound_2 (_coordref, t));
	if (IsSymb (t, SYMBType_constructor_2)) 
		return _MkBound_2BOUNDS_2 (_coordref, MkBound_2 (_coordref, t));
	if (IsSymb (t, SYMBNamed_expressions_2)) 
		return _MkBound_2BOUNDS_2 (_coordref, MkBound_2 (_coordref, t));
	if (IsSymb (t, SYMBAggregate_2)) 
		return _MkBound_2BOUNDS_2 (_coordref, MkBound_2 (_coordref, t));
	if (IsSymb (t, SYMBStringconstant_2)) 
		return _MkBound_2BOUNDS_2 (_coordref, MkBound_2 (_coordref, t));
	if (IsSymb (t, SYMBStringconstants_2)) 
		return _MkBound_2BOUNDS_2 (_coordref, MkBound_2 (_coordref, t));
	if (IsSymb (t, SYMBValue_2)) 
		return _MkBound_2BOUNDS_2 (_coordref, MkBound_2 (_coordref, t));
	if (IsSymb (t, SYMBExpression_2)) 
		return _MkBound_2BOUNDS_2 (_coordref, MkBound_2 (_coordref, t));
	if (IsSymb (t, SYMBBound_2)) 
		return _MkBound_2BOUNDS_2 (_coordref, MkBound_2 (_coordref, t));
	message (DEADLY, "a BOUNDS_2 list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2BOUNDS_2 (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2BOUNDS_2 (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_Bounds_2)
	l =_ElemBOUNDS_2 (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_Bounds_2)
	r = _ElemBOUNDS_2 (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0BOUNDS_2)r)->_desc2);
((_TPPLST_0BOUNDS_2)r)->_desc2 = ((_TPPLST_0BOUNDS_2)l)->_desc2;
((_TPPLST_0BOUNDS_2)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBOUNDS_2 (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkBOUNDS_2 (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPBOUNDS_2 root;
	_TPPLST_0BOUNDS_2 list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0BOUNDS_2)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_Bounds_2)
		t = _ElemBOUNDS_2 (_coordref, t);
	remain = (_TPPLST_0BOUNDS_2)(((_TPPLST_0BOUNDS_2) t)->_desc2);
	((_TPPLST_0BOUNDS_2) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0BOUNDS_2;
#else
list = (_TPPLST_0BOUNDS_2) TreeNodeAlloc (sizeof (struct _TPLST_0BOUNDS_2));
#endif
list->_prod = RULELST_0BOUNDS_2;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0BOUNDS_2)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_Bound_2BOUNDS_2)
	{_TPPLST_Bound_2BOUNDS_2 _currn = _currn;
	 _TERMACT_LST_Bound_2BOUNDS_2;
	} this code has been moved to _ElemBOUNDS_2*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPBOUNDS_2;
#else
root = (_TPPBOUNDS_2) TreeNodeAlloc (sizeof (struct _TPBOUNDS_2));
#endif
root->_prod = RULEBOUNDS_2;
root->_desc1 = (_TSPLST_Bounds_2)list;
{ _TPPBOUNDS_2 _currn = root;
  _SETCOORD(_currn)
  _TERMACT_BOUNDS_2;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ID_USE_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkCLASS_ID_USE_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPCLASS_ID_USE_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ID_USE_2;
#else
_currn = (_TPPCLASS_ID_USE_2) TreeNodeAlloc (sizeof (struct _TPCLASS_ID_USE_2));
#endif
_currn->_prod = RULECLASS_ID_USE_2;
_SETCOORD(_currn)
_TERMACT_CLASS_ID_USE_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkCLASS_ID_USE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_KIND_INOUT_2 (POSITION *_coordref)
#else
NODEPTR MkPARAMETER_KIND_INOUT_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPPARAMETER_KIND_INOUT_2 _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_KIND_INOUT_2;
#else
_currn = (_TPPPARAMETER_KIND_INOUT_2) TreeNodeAlloc (sizeof (struct _TPPARAMETER_KIND_INOUT_2));
#endif
_currn->_prod = RULEPARAMETER_KIND_INOUT_2;
_SETCOORD(_currn)
_TERMACT_PARAMETER_KIND_INOUT_2;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_KIND_INOUT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_KIND_OUT_2 (POSITION *_coordref)
#else
NODEPTR MkPARAMETER_KIND_OUT_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPPARAMETER_KIND_OUT_2 _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_KIND_OUT_2;
#else
_currn = (_TPPPARAMETER_KIND_OUT_2) TreeNodeAlloc (sizeof (struct _TPPARAMETER_KIND_OUT_2));
#endif
_currn->_prod = RULEPARAMETER_KIND_OUT_2;
_SETCOORD(_currn)
_TERMACT_PARAMETER_KIND_OUT_2;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_KIND_OUT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_KIND_ONCE_2 (POSITION *_coordref)
#else
NODEPTR MkPARAMETER_KIND_ONCE_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPPARAMETER_KIND_ONCE_2 _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_KIND_ONCE_2;
#else
_currn = (_TPPPARAMETER_KIND_ONCE_2) TreeNodeAlloc (sizeof (struct _TPPARAMETER_KIND_ONCE_2));
#endif
_currn->_prod = RULEPARAMETER_KIND_ONCE_2;
_SETCOORD(_currn)
_TERMACT_PARAMETER_KIND_ONCE_2;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_KIND_ONCE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_KIND_IN_2 (POSITION *_coordref)
#else
NODEPTR MkPARAMETER_KIND_IN_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPPARAMETER_KIND_IN_2 _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_KIND_IN_2;
#else
_currn = (_TPPPARAMETER_KIND_IN_2) TreeNodeAlloc (sizeof (struct _TPPARAMETER_KIND_IN_2));
#endif
_currn->_prod = RULEPARAMETER_KIND_IN_2;
_SETCOORD(_currn)
_TERMACT_PARAMETER_KIND_IN_2;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_KIND_IN_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_TYPE_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkPARAMETER_TYPE_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPPARAMETER_TYPE_2 _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_TYPE_2;
#else
_currn = (_TPPPARAMETER_TYPE_2) TreeNodeAlloc (sizeof (struct _TPPARAMETER_TYPE_2));
#endif
_currn->_prod = RULEPARAMETER_TYPE_2;
_currn->_desc1 = (_TSPParameter_kind_2) MkParameter_kind_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE PARAMETER_TYPE_2: root of subtree no. 1 can not be made a Parameter_kind_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPType_specifier_2) MkType_specifier_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE PARAMETER_TYPE_2: root of subtree no. 2 can not be made a Type_specifier_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_PARAMETER_TYPE_2;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_TYPE_2 */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _MkParameter_type_2PARAMETER_TYPES_2 (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _MkParameter_type_2PARAMETER_TYPES_2 (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_Parameter_type_2PARAMETER_TYPES_2 _new;
#ifdef __cplusplus
	_new = new _TPLST_Parameter_type_2PARAMETER_TYPES_2;
#else
	_new = (_TPPLST_Parameter_type_2PARAMETER_TYPES_2) TreeNodeAlloc (sizeof (struct _TPLST_Parameter_type_2PARAMETER_TYPES_2));
#endif
	_new->_prod = RULELST_Parameter_type_2PARAMETER_TYPES_2;
	_new->_desc1 = (_TSPParameter_type_2)elem;
	_new->_desc2 = (_TSPLST_Parameter_types_2)_new;
	{_TPPLST_Parameter_type_2PARAMETER_TYPES_2 _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_Parameter_type_2PARAMETER_TYPES_2;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemPARAMETER_TYPES_2 (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemPARAMETER_TYPES_2 (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBParameter_type_2)) 
		return _MkParameter_type_2PARAMETER_TYPES_2 (_coordref, MkParameter_type_2 (_coordref, t));
	message (DEADLY, "a PARAMETER_TYPES_2 list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2PARAMETER_TYPES_2 (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2PARAMETER_TYPES_2 (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_Parameter_types_2)
	l =_ElemPARAMETER_TYPES_2 (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_Parameter_types_2)
	r = _ElemPARAMETER_TYPES_2 (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0PARAMETER_TYPES_2)r)->_desc2);
((_TPPLST_0PARAMETER_TYPES_2)r)->_desc2 = ((_TPPLST_0PARAMETER_TYPES_2)l)->_desc2;
((_TPPLST_0PARAMETER_TYPES_2)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_TYPES_2 (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkPARAMETER_TYPES_2 (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPPARAMETER_TYPES_2 root;
	_TPPLST_0PARAMETER_TYPES_2 list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0PARAMETER_TYPES_2)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_Parameter_types_2)
		t = _ElemPARAMETER_TYPES_2 (_coordref, t);
	remain = (_TPPLST_0PARAMETER_TYPES_2)(((_TPPLST_0PARAMETER_TYPES_2) t)->_desc2);
	((_TPPLST_0PARAMETER_TYPES_2) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0PARAMETER_TYPES_2;
#else
list = (_TPPLST_0PARAMETER_TYPES_2) TreeNodeAlloc (sizeof (struct _TPLST_0PARAMETER_TYPES_2));
#endif
list->_prod = RULELST_0PARAMETER_TYPES_2;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0PARAMETER_TYPES_2)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_Parameter_type_2PARAMETER_TYPES_2)
	{_TPPLST_Parameter_type_2PARAMETER_TYPES_2 _currn = _currn;
	 _TERMACT_LST_Parameter_type_2PARAMETER_TYPES_2;
	} this code has been moved to _ElemPARAMETER_TYPES_2*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPPARAMETER_TYPES_2;
#else
root = (_TPPPARAMETER_TYPES_2) TreeNodeAlloc (sizeof (struct _TPPARAMETER_TYPES_2));
#endif
root->_prod = RULEPARAMETER_TYPES_2;
root->_desc1 = (_TSPLST_Parameter_types_2)list;
{ _TPPPARAMETER_TYPES_2 _currn = root;
  _SETCOORD(_currn)
  _TERMACT_PARAMETER_TYPES_2;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_SPECIFICATION_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkMETHOD_SPECIFICATION_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPMETHOD_SPECIFICATION_2 _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_SPECIFICATION_2;
#else
_currn = (_TPPMETHOD_SPECIFICATION_2) TreeNodeAlloc (sizeof (struct _TPMETHOD_SPECIFICATION_2));
#endif
_currn->_prod = RULEMETHOD_SPECIFICATION_2;
_currn->_desc1 = (_TSPParameter_types_2) MkParameter_types_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_SPECIFICATION_2: root of subtree no. 1 can not be made a Parameter_types_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPType_specifier_2) MkType_specifier_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_SPECIFICATION_2: root of subtree no. 2 can not be made a Type_specifier_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_METHOD_SPECIFICATION_2;
return ( (NODEPTR) _currn);
}/* MkMETHOD_SPECIFICATION_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ARGUMENT_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkCLASS_ARGUMENT_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPCLASS_ARGUMENT_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ARGUMENT_2;
#else
_currn = (_TPPCLASS_ARGUMENT_2) TreeNodeAlloc (sizeof (struct _TPCLASS_ARGUMENT_2));
#endif
_currn->_prod = RULECLASS_ARGUMENT_2;
_currn->_desc1 = (_TSPClass_specifier_2) MkClass_specifier_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_ARGUMENT_2: root of subtree no. 1 can not be made a Class_specifier_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_CLASS_ARGUMENT_2;
return ( (NODEPTR) _currn);
}/* MkCLASS_ARGUMENT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ARGUMENTS_LST_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCLASS_ARGUMENTS_LST_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCLASS_ARGUMENTS_LST_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ARGUMENTS_LST_2;
#else
_currn = (_TPPCLASS_ARGUMENTS_LST_2) TreeNodeAlloc (sizeof (struct _TPCLASS_ARGUMENTS_LST_2));
#endif
_currn->_prod = RULECLASS_ARGUMENTS_LST_2;
_currn->_desc1 = (_TSPClass_arguments_2) MkClass_arguments_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_ARGUMENTS_LST_2: root of subtree no. 1 can not be made a Class_arguments_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPClass_argument_2) MkClass_argument_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_ARGUMENTS_LST_2: root of subtree no. 2 can not be made a Class_argument_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_ARGUMENTS_LST_2;
return ( (NODEPTR) _currn);
}/* MkCLASS_ARGUMENTS_LST_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ARGUMENTS_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkCLASS_ARGUMENTS_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ARGUMENTS_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ARGUMENTS_EMPTY_2;
#else
_currn = (_TPPCLASS_ARGUMENTS_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPCLASS_ARGUMENTS_EMPTY_2));
#endif
_currn->_prod = RULECLASS_ARGUMENTS_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_CLASS_ARGUMENTS_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkCLASS_ARGUMENTS_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_SPECIFIER_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkCLASS_SPECIFIER_2 (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPCLASS_SPECIFIER_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_SPECIFIER_2;
#else
_currn = (_TPPCLASS_SPECIFIER_2) TreeNodeAlloc (sizeof (struct _TPCLASS_SPECIFIER_2));
#endif
_currn->_prod = RULECLASS_SPECIFIER_2;
_currn->_desc1 = (_TSPClass_id_use_2) MkClass_id_use_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_SPECIFIER_2: root of subtree no. 1 can not be made a Class_id_use_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPBounds_2) MkBounds_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_SPECIFIER_2: root of subtree no. 2 can not be made a Bounds_2 node ", 0, _coordref);
_currn->_desc3 = (_TSPClass_arguments_2) MkClass_arguments_2 (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_SPECIFIER_2: root of subtree no. 3 can not be made a Class_arguments_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_SPECIFIER_2;
return ( (NODEPTR) _currn);
}/* MkCLASS_SPECIFIER_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_STREAM_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_SPECIFIER_STREAM_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_SPECIFIER_STREAM_2 _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_STREAM_2;
#else
_currn = (_TPPTYPE_SPECIFIER_STREAM_2) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_STREAM_2));
#endif
_currn->_prod = RULETYPE_SPECIFIER_STREAM_2;
_currn->_desc1 = (_TSPMethod_specification_2) MkMethod_specification_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIER_STREAM_2: root of subtree no. 1 can not be made a Method_specification_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_STREAM_2;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_STREAM_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_SAME_2 (POSITION *_coordref)
#else
NODEPTR MkTYPE_SPECIFIER_SAME_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPTYPE_SPECIFIER_SAME_2 _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_SAME_2;
#else
_currn = (_TPPTYPE_SPECIFIER_SAME_2) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_SAME_2));
#endif
_currn->_prod = RULETYPE_SPECIFIER_SAME_2;
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_SAME_2;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_SAME_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_SAME_POLY_2 (POSITION *_coordref)
#else
NODEPTR MkTYPE_SPECIFIER_SAME_POLY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPTYPE_SPECIFIER_SAME_POLY_2 _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_SAME_POLY_2;
#else
_currn = (_TPPTYPE_SPECIFIER_SAME_POLY_2) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_SAME_POLY_2));
#endif
_currn->_prod = RULETYPE_SPECIFIER_SAME_POLY_2;
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_SAME_POLY_2;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_SAME_POLY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_PROC_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_SPECIFIER_PROC_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_SPECIFIER_PROC_2 _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_PROC_2;
#else
_currn = (_TPPTYPE_SPECIFIER_PROC_2) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_PROC_2));
#endif
_currn->_prod = RULETYPE_SPECIFIER_PROC_2;
_currn->_desc1 = (_TSPMethod_specification_2) MkMethod_specification_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIER_PROC_2: root of subtree no. 1 can not be made a Method_specification_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_PROC_2;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_PROC_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkTYPE_SPECIFIER_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPTYPE_SPECIFIER_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_EMPTY_2;
#else
_currn = (_TPPTYPE_SPECIFIER_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_EMPTY_2));
#endif
_currn->_prod = RULETYPE_SPECIFIER_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_CL_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_SPECIFIER_CL_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_SPECIFIER_CL_2 _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_CL_2;
#else
_currn = (_TPPTYPE_SPECIFIER_CL_2) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_CL_2));
#endif
_currn->_prod = RULETYPE_SPECIFIER_CL_2;
_currn->_desc1 = (_TSPClass_specifier_2) MkClass_specifier_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIER_CL_2: root of subtree no. 1 can not be made a Class_specifier_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_CL_2;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_CL_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_CL_POLY_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_SPECIFIER_CL_POLY_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_SPECIFIER_CL_POLY_2 _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_CL_POLY_2;
#else
_currn = (_TPPTYPE_SPECIFIER_CL_POLY_2) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_CL_POLY_2));
#endif
_currn->_prod = RULETYPE_SPECIFIER_CL_POLY_2;
_currn->_desc1 = (_TSPClass_specifier_2) MkClass_specifier_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIER_CL_POLY_2: root of subtree no. 1 can not be made a Class_specifier_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_CL_POLY_2;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_CL_POLY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIERS_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkTYPE_SPECIFIERS_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPTYPE_SPECIFIERS_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIERS_EMPTY_2;
#else
_currn = (_TPPTYPE_SPECIFIERS_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIERS_EMPTY_2));
#endif
_currn->_prod = RULETYPE_SPECIFIERS_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIERS_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIERS_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIERS_LST_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPE_SPECIFIERS_LST_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPE_SPECIFIERS_LST_2 _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIERS_LST_2;
#else
_currn = (_TPPTYPE_SPECIFIERS_LST_2) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIERS_LST_2));
#endif
_currn->_prod = RULETYPE_SPECIFIERS_LST_2;
_currn->_desc1 = (_TSPType_specifiers_2) MkType_specifiers_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIERS_LST_2: root of subtree no. 1 can not be made a Type_specifiers_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPType_specifier_2) MkType_specifier_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIERS_LST_2: root of subtree no. 2 can not be made a Type_specifier_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIERS_LST_2;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIERS_LST_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_PARAMETER_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCLASS_PARAMETER_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCLASS_PARAMETER_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_PARAMETER_2;
#else
_currn = (_TPPCLASS_PARAMETER_2) TreeNodeAlloc (sizeof (struct _TPCLASS_PARAMETER_2));
#endif
_currn->_prod = RULECLASS_PARAMETER_2;
_currn->_desc1 = (_TSPClass_specifier_2) MkClass_specifier_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_PARAMETER_2: root of subtree no. 1 can not be made a Class_specifier_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPType_specifiers_2) MkType_specifiers_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_PARAMETER_2: root of subtree no. 2 can not be made a Type_specifiers_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_PARAMETER_2;
return ( (NODEPTR) _currn);
}/* MkCLASS_PARAMETER_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkIDENT_DEF_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkIDENT_DEF_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPIDENT_DEF_2 _currn;
#ifdef __cplusplus
_currn = new _TPIDENT_DEF_2;
#else
_currn = (_TPPIDENT_DEF_2) TreeNodeAlloc (sizeof (struct _TPIDENT_DEF_2));
#endif
_currn->_prod = RULEIDENT_DEF_2;
_SETCOORD(_currn)
_TERMACT_IDENT_DEF_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkIDENT_DEF_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBOUND_IDENTIFIER_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkBOUND_IDENTIFIER_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPBOUND_IDENTIFIER_2 _currn;
#ifdef __cplusplus
_currn = new _TPBOUND_IDENTIFIER_2;
#else
_currn = (_TPPBOUND_IDENTIFIER_2) TreeNodeAlloc (sizeof (struct _TPBOUND_IDENTIFIER_2));
#endif
_currn->_prod = RULEBOUND_IDENTIFIER_2;
_currn->_desc1 = (_TSPIdent_def_2) MkIdent_def_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BOUND_IDENTIFIER_2: root of subtree no. 1 can not be made a Ident_def_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_BOUND_IDENTIFIER_2;
return ( (NODEPTR) _currn);
}/* MkBOUND_IDENTIFIER_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_PARAMETERS_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkCLASS_PARAMETERS_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_PARAMETERS_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_PARAMETERS_EMPTY_2;
#else
_currn = (_TPPCLASS_PARAMETERS_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPCLASS_PARAMETERS_EMPTY_2));
#endif
_currn->_prod = RULECLASS_PARAMETERS_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_CLASS_PARAMETERS_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkCLASS_PARAMETERS_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_PARAMETERS_LST_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCLASS_PARAMETERS_LST_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCLASS_PARAMETERS_LST_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_PARAMETERS_LST_2;
#else
_currn = (_TPPCLASS_PARAMETERS_LST_2) TreeNodeAlloc (sizeof (struct _TPCLASS_PARAMETERS_LST_2));
#endif
_currn->_prod = RULECLASS_PARAMETERS_LST_2;
_currn->_desc1 = (_TSPClass_parameters_2) MkClass_parameters_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_PARAMETERS_LST_2: root of subtree no. 1 can not be made a Class_parameters_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPClass_parameter_2) MkClass_parameter_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_PARAMETERS_LST_2: root of subtree no. 2 can not be made a Class_parameter_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_PARAMETERS_LST_2;
return ( (NODEPTR) _currn);
}/* MkCLASS_PARAMETERS_LST_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_BOUNDS_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkCLASS_BOUNDS_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_BOUNDS_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_BOUNDS_EMPTY_2;
#else
_currn = (_TPPCLASS_BOUNDS_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPCLASS_BOUNDS_EMPTY_2));
#endif
_currn->_prod = RULECLASS_BOUNDS_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_CLASS_BOUNDS_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkCLASS_BOUNDS_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_BOUNDS_LST_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCLASS_BOUNDS_LST_2 (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCLASS_BOUNDS_LST_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_BOUNDS_LST_2;
#else
_currn = (_TPPCLASS_BOUNDS_LST_2) TreeNodeAlloc (sizeof (struct _TPCLASS_BOUNDS_LST_2));
#endif
_currn->_prod = RULECLASS_BOUNDS_LST_2;
_currn->_desc1 = (_TSPClass_bounds_2) MkClass_bounds_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_BOUNDS_LST_2: root of subtree no. 1 can not be made a Class_bounds_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPBound_identifier_2) MkBound_identifier_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_BOUNDS_LST_2: root of subtree no. 2 can not be made a Bound_identifier_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_BOUNDS_LST_2;
return ( (NODEPTR) _currn);
}/* MkCLASS_BOUNDS_LST_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ID_DEF_POLY_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkCLASS_ID_DEF_POLY_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPCLASS_ID_DEF_POLY_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ID_DEF_POLY_2;
#else
_currn = (_TPPCLASS_ID_DEF_POLY_2) TreeNodeAlloc (sizeof (struct _TPCLASS_ID_DEF_POLY_2));
#endif
_currn->_prod = RULECLASS_ID_DEF_POLY_2;
_SETCOORD(_currn)
_TERMACT_CLASS_ID_DEF_POLY_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkCLASS_ID_DEF_POLY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ID_DEF_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkCLASS_ID_DEF_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPCLASS_ID_DEF_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ID_DEF_2;
#else
_currn = (_TPPCLASS_ID_DEF_2) TreeNodeAlloc (sizeof (struct _TPCLASS_ID_DEF_2));
#endif
_currn->_prod = RULECLASS_ID_DEF_2;
_SETCOORD(_currn)
_TERMACT_CLASS_ID_DEF_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkCLASS_ID_DEF_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_OPT_CL_2 (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkBUILTIN_OPT_CL_2 (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPBUILTIN_OPT_CL_2 _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_OPT_CL_2;
#else
_currn = (_TPPBUILTIN_OPT_CL_2) TreeNodeAlloc (sizeof (struct _TPBUILTIN_OPT_CL_2));
#endif
_currn->_prod = RULEBUILTIN_OPT_CL_2;
_currn->_desc1 = (_TSPClass_specifier_2) MkClass_specifier_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BUILTIN_OPT_CL_2: root of subtree no. 1 can not be made a Class_specifier_2 node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_BUILTIN_OPT_CL_2;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_OPT_CL_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_OPT_ID_2 (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkBUILTIN_OPT_ID_2 (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPBUILTIN_OPT_ID_2 _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_OPT_ID_2;
#else
_currn = (_TPPBUILTIN_OPT_ID_2) TreeNodeAlloc (sizeof (struct _TPBUILTIN_OPT_ID_2));
#endif
_currn->_prod = RULEBUILTIN_OPT_ID_2;
_SETCOORD(_currn)
_TERMACT_BUILTIN_OPT_ID_2;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "stringconst", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkBUILTIN_OPT_ID_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_OPT_2 (POSITION *_coordref)
#else
NODEPTR MkBUILTIN_OPT_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPBUILTIN_OPT_2 _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_OPT_2;
#else
_currn = (_TPPBUILTIN_OPT_2) TreeNodeAlloc (sizeof (struct _TPBUILTIN_OPT_2));
#endif
_currn->_prod = RULEBUILTIN_OPT_2;
_SETCOORD(_currn)
_TERMACT_BUILTIN_OPT_2;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_OPT_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_OPT_EMPTY_2 (POSITION *_coordref)
#else
NODEPTR MkBUILTIN_OPT_EMPTY_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPBUILTIN_OPT_EMPTY_2 _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_OPT_EMPTY_2;
#else
_currn = (_TPPBUILTIN_OPT_EMPTY_2) TreeNodeAlloc (sizeof (struct _TPBUILTIN_OPT_EMPTY_2));
#endif
_currn->_prod = RULEBUILTIN_OPT_EMPTY_2;
_SETCOORD(_currn)
_TERMACT_BUILTIN_OPT_EMPTY_2;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_OPT_EMPTY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_BODY_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkCLASS_BODY_2 (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPCLASS_BODY_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_BODY_2;
#else
_currn = (_TPPCLASS_BODY_2) TreeNodeAlloc (sizeof (struct _TPCLASS_BODY_2));
#endif
_currn->_prod = RULECLASS_BODY_2;
_currn->_desc1 = (_TSPBuiltin_option_2) MkBuiltin_option_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_BODY_2: root of subtree no. 1 can not be made a Builtin_option_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPInheritances_2) MkInheritances_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_BODY_2: root of subtree no. 2 can not be made a Inheritances_2 node ", 0, _coordref);
_currn->_desc3 = (_TSPFeature_declarations_2) MkFeature_declarations_2 (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_BODY_2: root of subtree no. 3 can not be made a Feature_declarations_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_BODY_2;
return ( (NODEPTR) _currn);
}/* MkCLASS_BODY_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_HEAD_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkCLASS_HEAD_2 (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPCLASS_HEAD_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_HEAD_2;
#else
_currn = (_TPPCLASS_HEAD_2) TreeNodeAlloc (sizeof (struct _TPCLASS_HEAD_2));
#endif
_currn->_prod = RULECLASS_HEAD_2;
_currn->_desc1 = (_TSPClass_id_def_2) MkClass_id_def_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_HEAD_2: root of subtree no. 1 can not be made a Class_id_def_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPClass_bounds_2) MkClass_bounds_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_HEAD_2: root of subtree no. 2 can not be made a Class_bounds_2 node ", 0, _coordref);
_currn->_desc3 = (_TSPClass_parameters_2) MkClass_parameters_2 (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_HEAD_2: root of subtree no. 3 can not be made a Class_parameters_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_HEAD_2;
return ( (NODEPTR) _currn);
}/* MkCLASS_HEAD_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ATTRIBUTE_VA_2 (POSITION *_coordref)
#else
NODEPTR MkCLASS_ATTRIBUTE_VA_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ATTRIBUTE_VA_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ATTRIBUTE_VA_2;
#else
_currn = (_TPPCLASS_ATTRIBUTE_VA_2) TreeNodeAlloc (sizeof (struct _TPCLASS_ATTRIBUTE_VA_2));
#endif
_currn->_prod = RULECLASS_ATTRIBUTE_VA_2;
_SETCOORD(_currn)
_TERMACT_CLASS_ATTRIBUTE_VA_2;
return ( (NODEPTR) _currn);
}/* MkCLASS_ATTRIBUTE_VA_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ATTRIBUTE_EX_2 (POSITION *_coordref)
#else
NODEPTR MkCLASS_ATTRIBUTE_EX_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ATTRIBUTE_EX_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ATTRIBUTE_EX_2;
#else
_currn = (_TPPCLASS_ATTRIBUTE_EX_2) TreeNodeAlloc (sizeof (struct _TPCLASS_ATTRIBUTE_EX_2));
#endif
_currn->_prod = RULECLASS_ATTRIBUTE_EX_2;
_SETCOORD(_currn)
_TERMACT_CLASS_ATTRIBUTE_EX_2;
return ( (NODEPTR) _currn);
}/* MkCLASS_ATTRIBUTE_EX_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ATTRIBUTE_2 (POSITION *_coordref)
#else
NODEPTR MkCLASS_ATTRIBUTE_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ATTRIBUTE_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ATTRIBUTE_2;
#else
_currn = (_TPPCLASS_ATTRIBUTE_2) TreeNodeAlloc (sizeof (struct _TPCLASS_ATTRIBUTE_2));
#endif
_currn->_prod = RULECLASS_ATTRIBUTE_2;
_SETCOORD(_currn)
_TERMACT_CLASS_ATTRIBUTE_2;
return ( (NODEPTR) _currn);
}/* MkCLASS_ATTRIBUTE_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ATTRIBUTE_ABVA_2 (POSITION *_coordref)
#else
NODEPTR MkCLASS_ATTRIBUTE_ABVA_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ATTRIBUTE_ABVA_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ATTRIBUTE_ABVA_2;
#else
_currn = (_TPPCLASS_ATTRIBUTE_ABVA_2) TreeNodeAlloc (sizeof (struct _TPCLASS_ATTRIBUTE_ABVA_2));
#endif
_currn->_prod = RULECLASS_ATTRIBUTE_ABVA_2;
_SETCOORD(_currn)
_TERMACT_CLASS_ATTRIBUTE_ABVA_2;
return ( (NODEPTR) _currn);
}/* MkCLASS_ATTRIBUTE_ABVA_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ATTRIBUTE_AB_2 (POSITION *_coordref)
#else
NODEPTR MkCLASS_ATTRIBUTE_AB_2 (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ATTRIBUTE_AB_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ATTRIBUTE_AB_2;
#else
_currn = (_TPPCLASS_ATTRIBUTE_AB_2) TreeNodeAlloc (sizeof (struct _TPCLASS_ATTRIBUTE_AB_2));
#endif
_currn->_prod = RULECLASS_ATTRIBUTE_AB_2;
_SETCOORD(_currn)
_TERMACT_CLASS_ATTRIBUTE_AB_2;
return ( (NODEPTR) _currn);
}/* MkCLASS_ATTRIBUTE_AB_2 */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_DECLARATION_2 (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkCLASS_DECLARATION_2 (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPCLASS_DECLARATION_2 _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_DECLARATION_2;
#else
_currn = (_TPPCLASS_DECLARATION_2) TreeNodeAlloc (sizeof (struct _TPCLASS_DECLARATION_2));
#endif
_currn->_prod = RULECLASS_DECLARATION_2;
_currn->_desc1 = (_TSPClass_attribute_2) MkClass_attribute_2 (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_DECLARATION_2: root of subtree no. 1 can not be made a Class_attribute_2 node ", 0, _coordref);
_currn->_desc2 = (_TSPClass_head_2) MkClass_head_2 (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_DECLARATION_2: root of subtree no. 2 can not be made a Class_head_2 node ", 0, _coordref);
_currn->_desc3 = (_TSPClass_body_2) MkClass_body_2 (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_DECLARATION_2: root of subtree no. 3 can not be made a Class_body_2 node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_DECLARATION_2;
return ( (NODEPTR) _currn);
}/* MkCLASS_DECLARATION_2 */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _MkClass_declaration_2CLASS_DECLARATIONS_2 (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _MkClass_declaration_2CLASS_DECLARATIONS_2 (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_Class_declaration_2CLASS_DECLARATIONS_2 _new;
#ifdef __cplusplus
	_new = new _TPLST_Class_declaration_2CLASS_DECLARATIONS_2;
#else
	_new = (_TPPLST_Class_declaration_2CLASS_DECLARATIONS_2) TreeNodeAlloc (sizeof (struct _TPLST_Class_declaration_2CLASS_DECLARATIONS_2));
#endif
	_new->_prod = RULELST_Class_declaration_2CLASS_DECLARATIONS_2;
	_new->_desc1 = (_TSPClass_declaration_2)elem;
	_new->_desc2 = (_TSPLST_Class_declarations_2)_new;
	{_TPPLST_Class_declaration_2CLASS_DECLARATIONS_2 _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_Class_declaration_2CLASS_DECLARATIONS_2;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemCLASS_DECLARATIONS_2 (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemCLASS_DECLARATIONS_2 (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBClass_declaration_2)) 
		return _MkClass_declaration_2CLASS_DECLARATIONS_2 (_coordref, MkClass_declaration_2 (_coordref, t));
	message (DEADLY, "a CLASS_DECLARATIONS_2 list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2CLASS_DECLARATIONS_2 (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2CLASS_DECLARATIONS_2 (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_Class_declarations_2)
	l =_ElemCLASS_DECLARATIONS_2 (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_Class_declarations_2)
	r = _ElemCLASS_DECLARATIONS_2 (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0CLASS_DECLARATIONS_2)r)->_desc2);
((_TPPLST_0CLASS_DECLARATIONS_2)r)->_desc2 = ((_TPPLST_0CLASS_DECLARATIONS_2)l)->_desc2;
((_TPPLST_0CLASS_DECLARATIONS_2)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_DECLARATIONS_2 (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkCLASS_DECLARATIONS_2 (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPCLASS_DECLARATIONS_2 root;
	_TPPLST_0CLASS_DECLARATIONS_2 list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0CLASS_DECLARATIONS_2)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_Class_declarations_2)
		t = _ElemCLASS_DECLARATIONS_2 (_coordref, t);
	remain = (_TPPLST_0CLASS_DECLARATIONS_2)(((_TPPLST_0CLASS_DECLARATIONS_2) t)->_desc2);
	((_TPPLST_0CLASS_DECLARATIONS_2) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0CLASS_DECLARATIONS_2;
#else
list = (_TPPLST_0CLASS_DECLARATIONS_2) TreeNodeAlloc (sizeof (struct _TPLST_0CLASS_DECLARATIONS_2));
#endif
list->_prod = RULELST_0CLASS_DECLARATIONS_2;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0CLASS_DECLARATIONS_2)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_Class_declaration_2CLASS_DECLARATIONS_2)
	{_TPPLST_Class_declaration_2CLASS_DECLARATIONS_2 _currn = _currn;
	 _TERMACT_LST_Class_declaration_2CLASS_DECLARATIONS_2;
	} this code has been moved to _ElemCLASS_DECLARATIONS_2*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPCLASS_DECLARATIONS_2;
#else
root = (_TPPCLASS_DECLARATIONS_2) TreeNodeAlloc (sizeof (struct _TPCLASS_DECLARATIONS_2));
#endif
root->_prod = RULECLASS_DECLARATIONS_2;
root->_desc1 = (_TSPLST_Class_declarations_2)list;
{ _TPPCLASS_DECLARATIONS_2 _currn = root;
  _SETCOORD(_currn)
  _TERMACT_CLASS_DECLARATIONS_2;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkASSERTION_STATEMENT (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkASSERTION_STATEMENT (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPASSERTION_STATEMENT _currn;
#ifdef __cplusplus
_currn = new _TPASSERTION_STATEMENT;
#else
_currn = (_TPPASSERTION_STATEMENT) TreeNodeAlloc (sizeof (struct _TPASSERTION_STATEMENT));
#endif
_currn->_prod = RULEASSERTION_STATEMENT;
_currn->_desc1 = (_TSPExpression) MkExpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ASSERTION_STATEMENT: root of subtree no. 1 can not be made a Expression node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_ASSERTION_STATEMENT;
return ( (NODEPTR) _currn);
}/* MkASSERTION_STATEMENT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkRAISE_STATEMENT (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkRAISE_STATEMENT (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPRAISE_STATEMENT _currn;
#ifdef __cplusplus
_currn = new _TPRAISE_STATEMENT;
#else
_currn = (_TPPRAISE_STATEMENT) TreeNodeAlloc (sizeof (struct _TPRAISE_STATEMENT));
#endif
_currn->_prod = RULERAISE_STATEMENT;
_currn->_desc1 = (_TSPType_specifier) MkType_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE RAISE_STATEMENT: root of subtree no. 1 can not be made a Type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_RAISE_STATEMENT;
return ( (NODEPTR) _currn);
}/* MkRAISE_STATEMENT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkRETURN_STATEMENT (POSITION *_coordref)
#else
NODEPTR MkRETURN_STATEMENT (_coordref)
	POSITION *_coordref;
#endif
{	_TPPRETURN_STATEMENT _currn;
#ifdef __cplusplus
_currn = new _TPRETURN_STATEMENT;
#else
_currn = (_TPPRETURN_STATEMENT) TreeNodeAlloc (sizeof (struct _TPRETURN_STATEMENT));
#endif
_currn->_prod = RULERETURN_STATEMENT;
_SETCOORD(_currn)
_TERMACT_RETURN_STATEMENT;
return ( (NODEPTR) _currn);
}/* MkRETURN_STATEMENT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkRESUME_STATEMENT (POSITION *_coordref)
#else
NODEPTR MkRESUME_STATEMENT (_coordref)
	POSITION *_coordref;
#endif
{	_TPPRESUME_STATEMENT _currn;
#ifdef __cplusplus
_currn = new _TPRESUME_STATEMENT;
#else
_currn = (_TPPRESUME_STATEMENT) TreeNodeAlloc (sizeof (struct _TPRESUME_STATEMENT));
#endif
_currn->_prod = RULERESUME_STATEMENT;
_SETCOORD(_currn)
_TERMACT_RESUME_STATEMENT;
return ( (NODEPTR) _currn);
}/* MkRESUME_STATEMENT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBREAK_STATEMENT (POSITION *_coordref)
#else
NODEPTR MkBREAK_STATEMENT (_coordref)
	POSITION *_coordref;
#endif
{	_TPPBREAK_STATEMENT _currn;
#ifdef __cplusplus
_currn = new _TPBREAK_STATEMENT;
#else
_currn = (_TPPBREAK_STATEMENT) TreeNodeAlloc (sizeof (struct _TPBREAK_STATEMENT));
#endif
_currn->_prod = RULEBREAK_STATEMENT;
_SETCOORD(_currn)
_TERMACT_BREAK_STATEMENT;
return ( (NODEPTR) _currn);
}/* MkBREAK_STATEMENT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOOP (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkLOOP (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPLOOP _currn;
#ifdef __cplusplus
_currn = new _TPLOOP;
#else
_currn = (_TPPLOOP) TreeNodeAlloc (sizeof (struct _TPLOOP));
#endif
_currn->_prod = RULELOOP;
_currn->_desc1 = (_TSPBlock) MkBlock (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LOOP: root of subtree no. 1 can not be made a Block node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_LOOP;
return ( (NODEPTR) _currn);
}/* MkLOOP */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOOP_EXP (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkLOOP_EXP (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPLOOP_EXP _currn;
#ifdef __cplusplus
_currn = new _TPLOOP_EXP;
#else
_currn = (_TPPLOOP_EXP) TreeNodeAlloc (sizeof (struct _TPLOOP_EXP));
#endif
_currn->_prod = RULELOOP_EXP;
_currn->_desc1 = (_TSPExpression) MkExpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LOOP_EXP: root of subtree no. 1 can not be made a Expression node ", 0, _coordref);
_currn->_desc2 = (_TSPBlock) MkBlock (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE LOOP_EXP: root of subtree no. 2 can not be made a Block node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_LOOP_EXP;
return ( (NODEPTR) _currn);
}/* MkLOOP_EXP */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPES_LST (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPES_LST (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPES_LST _currn;
#ifdef __cplusplus
_currn = new _TPTYPES_LST;
#else
_currn = (_TPPTYPES_LST) TreeNodeAlloc (sizeof (struct _TPTYPES_LST));
#endif
_currn->_prod = RULETYPES_LST;
_currn->_desc1 = (_TSPTypes) MkTypes (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPES_LST: root of subtree no. 1 can not be made a Types node ", 0, _coordref);
_currn->_desc2 = (_TSPType_specifier) MkType_specifier (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPES_LST: root of subtree no. 2 can not be made a Type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPES_LST;
return ( (NODEPTR) _currn);
}/* MkTYPES_LST */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPES_EMPTY (POSITION *_coordref)
#else
NODEPTR MkTYPES_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPTYPES_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPTYPES_EMPTY;
#else
_currn = (_TPPTYPES_EMPTY) TreeNodeAlloc (sizeof (struct _TPTYPES_EMPTY));
#endif
_currn->_prod = RULETYPES_EMPTY;
_SETCOORD(_currn)
_TERMACT_TYPES_EMPTY;
return ( (NODEPTR) _currn);
}/* MkTYPES_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_TYPES_BLOCK (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_TYPES_BLOCK (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_TYPES_BLOCK _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_TYPES_BLOCK;
#else
_currn = (_TPPWHEN_TYPES_BLOCK) TreeNodeAlloc (sizeof (struct _TPWHEN_TYPES_BLOCK));
#endif
_currn->_prod = RULEWHEN_TYPES_BLOCK;
_currn->_desc1 = (_TSPTypes) MkTypes (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_TYPES_BLOCK: root of subtree no. 1 can not be made a Types node ", 0, _coordref);
_currn->_desc2 = (_TSPBlock) MkBlock (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_TYPES_BLOCK: root of subtree no. 2 can not be made a Block node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_TYPES_BLOCK;
return ( (NODEPTR) _currn);
}/* MkWHEN_TYPES_BLOCK */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_TYPES_BLOCKS_EMPTY (POSITION *_coordref)
#else
NODEPTR MkWHEN_TYPES_BLOCKS_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPWHEN_TYPES_BLOCKS_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_TYPES_BLOCKS_EMPTY;
#else
_currn = (_TPPWHEN_TYPES_BLOCKS_EMPTY) TreeNodeAlloc (sizeof (struct _TPWHEN_TYPES_BLOCKS_EMPTY));
#endif
_currn->_prod = RULEWHEN_TYPES_BLOCKS_EMPTY;
_SETCOORD(_currn)
_TERMACT_WHEN_TYPES_BLOCKS_EMPTY;
return ( (NODEPTR) _currn);
}/* MkWHEN_TYPES_BLOCKS_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_TYPES_BLOCKS (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_TYPES_BLOCKS (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_TYPES_BLOCKS _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_TYPES_BLOCKS;
#else
_currn = (_TPPWHEN_TYPES_BLOCKS) TreeNodeAlloc (sizeof (struct _TPWHEN_TYPES_BLOCKS));
#endif
_currn->_prod = RULEWHEN_TYPES_BLOCKS;
_currn->_desc1 = (_TSPWhen_types_blocks) MkWhen_types_blocks (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_TYPES_BLOCKS: root of subtree no. 1 can not be made a When_types_blocks node ", 0, _coordref);
_currn->_desc2 = (_TSPWhen_types_block) MkWhen_types_block (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_TYPES_BLOCKS: root of subtree no. 2 can not be made a When_types_block node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_TYPES_BLOCKS;
return ( (NODEPTR) _currn);
}/* MkWHEN_TYPES_BLOCKS */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CASE_STATEMENT_ATT (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPE_CASE_STATEMENT_ATT (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPE_CASE_STATEMENT_ATT _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CASE_STATEMENT_ATT;
#else
_currn = (_TPPTYPE_CASE_STATEMENT_ATT) TreeNodeAlloc (sizeof (struct _TPTYPE_CASE_STATEMENT_ATT));
#endif
_currn->_prod = RULETYPE_CASE_STATEMENT_ATT;
_currn->_desc1 = (_TSPAttribute_declaration) MkAttribute_declaration (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CASE_STATEMENT_ATT: root of subtree no. 1 can not be made a Attribute_declaration node ", 0, _coordref);
_currn->_desc2 = (_TSPWhen_types_blocks) MkWhen_types_blocks (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CASE_STATEMENT_ATT: root of subtree no. 2 can not be made a When_types_blocks node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CASE_STATEMENT_ATT;
return ( (NODEPTR) _currn);
}/* MkTYPE_CASE_STATEMENT_ATT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CASE_STATEMENT (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPE_CASE_STATEMENT (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPE_CASE_STATEMENT _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CASE_STATEMENT;
#else
_currn = (_TPPTYPE_CASE_STATEMENT) TreeNodeAlloc (sizeof (struct _TPTYPE_CASE_STATEMENT));
#endif
_currn->_prod = RULETYPE_CASE_STATEMENT;
_currn->_desc1 = (_TSPName) MkName (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CASE_STATEMENT: root of subtree no. 1 can not be made a Name node ", 0, _coordref);
_currn->_desc2 = (_TSPWhen_types_blocks) MkWhen_types_blocks (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CASE_STATEMENT: root of subtree no. 2 can not be made a When_types_blocks node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CASE_STATEMENT;
return ( (NODEPTR) _currn);
}/* MkTYPE_CASE_STATEMENT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCASE_LABEL_DES (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkCASE_LABEL_DES (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPCASE_LABEL_DES _currn;
#ifdef __cplusplus
_currn = new _TPCASE_LABEL_DES;
#else
_currn = (_TPPCASE_LABEL_DES) TreeNodeAlloc (sizeof (struct _TPCASE_LABEL_DES));
#endif
_currn->_prod = RULECASE_LABEL_DES;
_currn->_desc1 = (_TSPDesignator) MkDesignator (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CASE_LABEL_DES: root of subtree no. 1 can not be made a Designator node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_CASE_LABEL_DES;
return ( (NODEPTR) _currn);
}/* MkCASE_LABEL_DES */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCASE_LABEL_VALUE (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkCASE_LABEL_VALUE (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPCASE_LABEL_VALUE _currn;
#ifdef __cplusplus
_currn = new _TPCASE_LABEL_VALUE;
#else
_currn = (_TPPCASE_LABEL_VALUE) TreeNodeAlloc (sizeof (struct _TPCASE_LABEL_VALUE));
#endif
_currn->_prod = RULECASE_LABEL_VALUE;
_currn->_desc1 = (_TSPValue) MkValue (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CASE_LABEL_VALUE: root of subtree no. 1 can not be made a Value node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_CASE_LABEL_VALUE;
return ( (NODEPTR) _currn);
}/* MkCASE_LABEL_VALUE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLABEL_RANGE (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkLABEL_RANGE (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPLABEL_RANGE _currn;
#ifdef __cplusplus
_currn = new _TPLABEL_RANGE;
#else
_currn = (_TPPLABEL_RANGE) TreeNodeAlloc (sizeof (struct _TPLABEL_RANGE));
#endif
_currn->_prod = RULELABEL_RANGE;
_currn->_desc1 = (_TSPCase_label) MkCase_label (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LABEL_RANGE: root of subtree no. 1 can not be made a Case_label node ", 0, _coordref);
_currn->_desc2 = (_TSPCase_label) MkCase_label (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE LABEL_RANGE: root of subtree no. 2 can not be made a Case_label node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_LABEL_RANGE;
return ( (NODEPTR) _currn);
}/* MkLABEL_RANGE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLABEL_RANGE_SINGLE (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkLABEL_RANGE_SINGLE (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPLABEL_RANGE_SINGLE _currn;
#ifdef __cplusplus
_currn = new _TPLABEL_RANGE_SINGLE;
#else
_currn = (_TPPLABEL_RANGE_SINGLE) TreeNodeAlloc (sizeof (struct _TPLABEL_RANGE_SINGLE));
#endif
_currn->_prod = RULELABEL_RANGE_SINGLE;
_currn->_desc1 = (_TSPCase_label) MkCase_label (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LABEL_RANGE_SINGLE: root of subtree no. 1 can not be made a Case_label node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_LABEL_RANGE_SINGLE;
return ( (NODEPTR) _currn);
}/* MkLABEL_RANGE_SINGLE */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _MkLabel_rangeLABEL_LIST (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _MkLabel_rangeLABEL_LIST (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_Label_rangeLABEL_LIST _new;
#ifdef __cplusplus
	_new = new _TPLST_Label_rangeLABEL_LIST;
#else
	_new = (_TPPLST_Label_rangeLABEL_LIST) TreeNodeAlloc (sizeof (struct _TPLST_Label_rangeLABEL_LIST));
#endif
	_new->_prod = RULELST_Label_rangeLABEL_LIST;
	_new->_desc1 = (_TSPLabel_range)elem;
	_new->_desc2 = (_TSPLST_Label_list)_new;
	{_TPPLST_Label_rangeLABEL_LIST _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_Label_rangeLABEL_LIST;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemLABEL_LIST (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemLABEL_LIST (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBQualification)) 
		return _MkLabel_rangeLABEL_LIST (_coordref, MkLabel_range (_coordref, t));
	if (IsSymb (t, SYMBStd_method_call)) 
		return _MkLabel_rangeLABEL_LIST (_coordref, MkLabel_range (_coordref, t));
	if (IsSymb (t, SYMBObj_id_use)) 
		return _MkLabel_rangeLABEL_LIST (_coordref, MkLabel_range (_coordref, t));
	if (IsSymb (t, SYMBName)) 
		return _MkLabel_rangeLABEL_LIST (_coordref, MkLabel_range (_coordref, t));
	if (IsSymb (t, SYMBStringconstant)) 
		return _MkLabel_rangeLABEL_LIST (_coordref, MkLabel_range (_coordref, t));
	if (IsSymb (t, SYMBStringconstants)) 
		return _MkLabel_rangeLABEL_LIST (_coordref, MkLabel_range (_coordref, t));
	if (IsSymb (t, SYMBValue)) 
		return _MkLabel_rangeLABEL_LIST (_coordref, MkLabel_range (_coordref, t));
	if (IsSymb (t, SYMBDesignator)) 
		return _MkLabel_rangeLABEL_LIST (_coordref, MkLabel_range (_coordref, t));
	if (IsSymb (t, SYMBCase_label)) 
		return _MkLabel_rangeLABEL_LIST (_coordref, MkLabel_range (_coordref, t));
	if (IsSymb (t, SYMBLabel_range)) 
		return _MkLabel_rangeLABEL_LIST (_coordref, MkLabel_range (_coordref, t));
	message (DEADLY, "a LABEL_LIST list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2LABEL_LIST (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2LABEL_LIST (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_Label_list)
	l =_ElemLABEL_LIST (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_Label_list)
	r = _ElemLABEL_LIST (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0LABEL_LIST)r)->_desc2);
((_TPPLST_0LABEL_LIST)r)->_desc2 = ((_TPPLST_0LABEL_LIST)l)->_desc2;
((_TPPLST_0LABEL_LIST)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLABEL_LIST (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkLABEL_LIST (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPLABEL_LIST root;
	_TPPLST_0LABEL_LIST list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0LABEL_LIST)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_Label_list)
		t = _ElemLABEL_LIST (_coordref, t);
	remain = (_TPPLST_0LABEL_LIST)(((_TPPLST_0LABEL_LIST) t)->_desc2);
	((_TPPLST_0LABEL_LIST) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0LABEL_LIST;
#else
list = (_TPPLST_0LABEL_LIST) TreeNodeAlloc (sizeof (struct _TPLST_0LABEL_LIST));
#endif
list->_prod = RULELST_0LABEL_LIST;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0LABEL_LIST)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_Label_rangeLABEL_LIST)
	{_TPPLST_Label_rangeLABEL_LIST _currn = _currn;
	 _TERMACT_LST_Label_rangeLABEL_LIST;
	} this code has been moved to _ElemLABEL_LIST*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPLABEL_LIST;
#else
root = (_TPPLABEL_LIST) TreeNodeAlloc (sizeof (struct _TPLABEL_LIST));
#endif
root->_prod = RULELABEL_LIST;
root->_desc1 = (_TSPLST_Label_list)list;
{ _TPPLABEL_LIST _currn = root;
  _SETCOORD(_currn)
  _TERMACT_LABEL_LIST;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_LABEL_STMT (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_LABEL_STMT (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_LABEL_STMT _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_LABEL_STMT;
#else
_currn = (_TPPWHEN_LABEL_STMT) TreeNodeAlloc (sizeof (struct _TPWHEN_LABEL_STMT));
#endif
_currn->_prod = RULEWHEN_LABEL_STMT;
_currn->_desc1 = (_TSPLabel_list) MkLabel_list (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_LABEL_STMT: root of subtree no. 1 can not be made a Label_list node ", 0, _coordref);
_currn->_desc2 = (_TSPBlock) MkBlock (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_LABEL_STMT: root of subtree no. 2 can not be made a Block node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_LABEL_STMT;
return ( (NODEPTR) _currn);
}/* MkWHEN_LABEL_STMT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_LABEL_STMTS_EMPTY (POSITION *_coordref)
#else
NODEPTR MkWHEN_LABEL_STMTS_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPWHEN_LABEL_STMTS_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_LABEL_STMTS_EMPTY;
#else
_currn = (_TPPWHEN_LABEL_STMTS_EMPTY) TreeNodeAlloc (sizeof (struct _TPWHEN_LABEL_STMTS_EMPTY));
#endif
_currn->_prod = RULEWHEN_LABEL_STMTS_EMPTY;
_SETCOORD(_currn)
_TERMACT_WHEN_LABEL_STMTS_EMPTY;
return ( (NODEPTR) _currn);
}/* MkWHEN_LABEL_STMTS_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_LABEL_STMTS (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_LABEL_STMTS (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_LABEL_STMTS _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_LABEL_STMTS;
#else
_currn = (_TPPWHEN_LABEL_STMTS) TreeNodeAlloc (sizeof (struct _TPWHEN_LABEL_STMTS));
#endif
_currn->_prod = RULEWHEN_LABEL_STMTS;
_currn->_desc1 = (_TSPWhen_label_stmts) MkWhen_label_stmts (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_LABEL_STMTS: root of subtree no. 1 can not be made a When_label_stmts node ", 0, _coordref);
_currn->_desc2 = (_TSPWhen_label_stmt) MkWhen_label_stmt (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_LABEL_STMTS: root of subtree no. 2 can not be made a When_label_stmt node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_LABEL_STMTS;
return ( (NODEPTR) _currn);
}/* MkWHEN_LABEL_STMTS */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCASE_STATEMENT (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCASE_STATEMENT (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCASE_STATEMENT _currn;
#ifdef __cplusplus
_currn = new _TPCASE_STATEMENT;
#else
_currn = (_TPPCASE_STATEMENT) TreeNodeAlloc (sizeof (struct _TPCASE_STATEMENT));
#endif
_currn->_prod = RULECASE_STATEMENT;
_currn->_desc1 = (_TSPExpression) MkExpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CASE_STATEMENT: root of subtree no. 1 can not be made a Expression node ", 0, _coordref);
_currn->_desc2 = (_TSPWhen_label_stmts) MkWhen_label_stmts (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CASE_STATEMENT: root of subtree no. 2 can not be made a When_label_stmts node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CASE_STATEMENT;
return ( (NODEPTR) _currn);
}/* MkCASE_STATEMENT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCOND_STATEMENT_ELSE (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkCOND_STATEMENT_ELSE (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPCOND_STATEMENT_ELSE _currn;
#ifdef __cplusplus
_currn = new _TPCOND_STATEMENT_ELSE;
#else
_currn = (_TPPCOND_STATEMENT_ELSE) TreeNodeAlloc (sizeof (struct _TPCOND_STATEMENT_ELSE));
#endif
_currn->_prod = RULECOND_STATEMENT_ELSE;
_currn->_desc1 = (_TSPBlock) MkBlock (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE COND_STATEMENT_ELSE: root of subtree no. 1 can not be made a Block node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_COND_STATEMENT_ELSE;
return ( (NODEPTR) _currn);
}/* MkCOND_STATEMENT_ELSE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCOND_STATEMENT (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkCOND_STATEMENT (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPCOND_STATEMENT _currn;
#ifdef __cplusplus
_currn = new _TPCOND_STATEMENT;
#else
_currn = (_TPPCOND_STATEMENT) TreeNodeAlloc (sizeof (struct _TPCOND_STATEMENT));
#endif
_currn->_prod = RULECOND_STATEMENT;
_currn->_desc1 = (_TSPExpression) MkExpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE COND_STATEMENT: root of subtree no. 1 can not be made a Expression node ", 0, _coordref);
_currn->_desc2 = (_TSPBlock) MkBlock (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE COND_STATEMENT: root of subtree no. 2 can not be made a Block node ", 0, _coordref);
_currn->_desc3 = (_TSPConditional_statement) MkConditional_statement (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE COND_STATEMENT: root of subtree no. 3 can not be made a Conditional_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_COND_STATEMENT;
return ( (NODEPTR) _currn);
}/* MkCOND_STATEMENT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXCEPTION_TYPES_LST (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkEXCEPTION_TYPES_LST (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPEXCEPTION_TYPES_LST _currn;
#ifdef __cplusplus
_currn = new _TPEXCEPTION_TYPES_LST;
#else
_currn = (_TPPEXCEPTION_TYPES_LST) TreeNodeAlloc (sizeof (struct _TPEXCEPTION_TYPES_LST));
#endif
_currn->_prod = RULEEXCEPTION_TYPES_LST;
_currn->_desc1 = (_TSPException_types) MkException_types (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXCEPTION_TYPES_LST: root of subtree no. 1 can not be made a Exception_types node ", 0, _coordref);
_currn->_desc2 = (_TSPType_specifier) MkType_specifier (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE EXCEPTION_TYPES_LST: root of subtree no. 2 can not be made a Type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_EXCEPTION_TYPES_LST;
return ( (NODEPTR) _currn);
}/* MkEXCEPTION_TYPES_LST */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXCEPTION_TYPES_EMPTY (POSITION *_coordref)
#else
NODEPTR MkEXCEPTION_TYPES_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPEXCEPTION_TYPES_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPEXCEPTION_TYPES_EMPTY;
#else
_currn = (_TPPEXCEPTION_TYPES_EMPTY) TreeNodeAlloc (sizeof (struct _TPEXCEPTION_TYPES_EMPTY));
#endif
_currn->_prod = RULEEXCEPTION_TYPES_EMPTY;
_SETCOORD(_currn)
_TERMACT_EXCEPTION_TYPES_EMPTY;
return ( (NODEPTR) _currn);
}/* MkEXCEPTION_TYPES_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_EXCEPTION_STMT (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_EXCEPTION_STMT (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_EXCEPTION_STMT _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_EXCEPTION_STMT;
#else
_currn = (_TPPWHEN_EXCEPTION_STMT) TreeNodeAlloc (sizeof (struct _TPWHEN_EXCEPTION_STMT));
#endif
_currn->_prod = RULEWHEN_EXCEPTION_STMT;
_currn->_desc1 = (_TSPException_types) MkException_types (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_EXCEPTION_STMT: root of subtree no. 1 can not be made a Exception_types node ", 0, _coordref);
_currn->_desc2 = (_TSPBlock) MkBlock (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_EXCEPTION_STMT: root of subtree no. 2 can not be made a Block node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_EXCEPTION_STMT;
return ( (NODEPTR) _currn);
}/* MkWHEN_EXCEPTION_STMT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_EXCEPTION_STMTS_EMPTY (POSITION *_coordref)
#else
NODEPTR MkWHEN_EXCEPTION_STMTS_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPWHEN_EXCEPTION_STMTS_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_EXCEPTION_STMTS_EMPTY;
#else
_currn = (_TPPWHEN_EXCEPTION_STMTS_EMPTY) TreeNodeAlloc (sizeof (struct _TPWHEN_EXCEPTION_STMTS_EMPTY));
#endif
_currn->_prod = RULEWHEN_EXCEPTION_STMTS_EMPTY;
_SETCOORD(_currn)
_TERMACT_WHEN_EXCEPTION_STMTS_EMPTY;
return ( (NODEPTR) _currn);
}/* MkWHEN_EXCEPTION_STMTS_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkWHEN_EXCEPTION_STMTS (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkWHEN_EXCEPTION_STMTS (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPWHEN_EXCEPTION_STMTS _currn;
#ifdef __cplusplus
_currn = new _TPWHEN_EXCEPTION_STMTS;
#else
_currn = (_TPPWHEN_EXCEPTION_STMTS) TreeNodeAlloc (sizeof (struct _TPWHEN_EXCEPTION_STMTS));
#endif
_currn->_prod = RULEWHEN_EXCEPTION_STMTS;
_currn->_desc1 = (_TSPWhen_exception_stmts) MkWhen_exception_stmts (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_EXCEPTION_STMTS: root of subtree no. 1 can not be made a When_exception_stmts node ", 0, _coordref);
_currn->_desc2 = (_TSPWhen_exception_stmt) MkWhen_exception_stmt (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE WHEN_EXCEPTION_STMTS: root of subtree no. 2 can not be made a When_exception_stmt node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_WHEN_EXCEPTION_STMTS;
return ( (NODEPTR) _currn);
}/* MkWHEN_EXCEPTION_STMTS */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXCEPTIONS (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkEXCEPTIONS (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPEXCEPTIONS _currn;
#ifdef __cplusplus
_currn = new _TPEXCEPTIONS;
#else
_currn = (_TPPEXCEPTIONS) TreeNodeAlloc (sizeof (struct _TPEXCEPTIONS));
#endif
_currn->_prod = RULEEXCEPTIONS;
_currn->_desc1 = (_TSPIdent_def) MkIdent_def (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXCEPTIONS: root of subtree no. 1 can not be made a Ident_def node ", 0, _coordref);
_currn->_desc2 = (_TSPWhen_exception_stmts) MkWhen_exception_stmts (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE EXCEPTIONS: root of subtree no. 2 can not be made a When_exception_stmts node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_EXCEPTIONS;
return ( (NODEPTR) _currn);
}/* MkEXCEPTIONS */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXCEPTIONS_EMPTY (POSITION *_coordref)
#else
NODEPTR MkEXCEPTIONS_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPEXCEPTIONS_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPEXCEPTIONS_EMPTY;
#else
_currn = (_TPPEXCEPTIONS_EMPTY) TreeNodeAlloc (sizeof (struct _TPEXCEPTIONS_EMPTY));
#endif
_currn->_prod = RULEEXCEPTIONS_EMPTY;
_SETCOORD(_currn)
_TERMACT_EXCEPTIONS_EMPTY;
return ( (NODEPTR) _currn);
}/* MkEXCEPTIONS_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBEGIN_BLOCK (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkBEGIN_BLOCK (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPBEGIN_BLOCK _currn;
#ifdef __cplusplus
_currn = new _TPBEGIN_BLOCK;
#else
_currn = (_TPPBEGIN_BLOCK) TreeNodeAlloc (sizeof (struct _TPBEGIN_BLOCK));
#endif
_currn->_prod = RULEBEGIN_BLOCK;
_currn->_desc1 = (_TSPBlock) MkBlock (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BEGIN_BLOCK: root of subtree no. 1 can not be made a Block node ", 0, _coordref);
_currn->_desc2 = (_TSPExceptions) MkExceptions (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE BEGIN_BLOCK: root of subtree no. 2 can not be made a Exceptions node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_BEGIN_BLOCK;
return ( (NODEPTR) _currn);
}/* MkBEGIN_BLOCK */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkASSIGNMENT (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkASSIGNMENT (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPASSIGNMENT _currn;
#ifdef __cplusplus
_currn = new _TPASSIGNMENT;
#else
_currn = (_TPPASSIGNMENT) TreeNodeAlloc (sizeof (struct _TPASSIGNMENT));
#endif
_currn->_prod = RULEASSIGNMENT;
_currn->_desc1 = (_TSPName) MkName (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ASSIGNMENT: root of subtree no. 1 can not be made a Name node ", 0, _coordref);
_currn->_desc2 = (_TSPExpression) MkExpression (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ASSIGNMENT: root of subtree no. 2 can not be made a Expression node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ASSIGNMENT;
return ( (NODEPTR) _currn);
}/* MkASSIGNMENT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_ASSERT (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_ASSERT (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_ASSERT _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_ASSERT;
#else
_currn = (_TPPSTATEMENTS_ASSERT) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_ASSERT));
#endif
_currn->_prod = RULESTATEMENTS_ASSERT;
_currn->_desc1 = (_TSPStatements) MkStatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_ASSERT: root of subtree no. 1 can not be made a Statements node ", 0, _coordref);
_currn->_desc2 = (_TSPAssertion_statement) MkAssertion_statement (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_ASSERT: root of subtree no. 2 can not be made a Assertion_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_ASSERT;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_ASSERT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_RAISE (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_RAISE (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_RAISE _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_RAISE;
#else
_currn = (_TPPSTATEMENTS_RAISE) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_RAISE));
#endif
_currn->_prod = RULESTATEMENTS_RAISE;
_currn->_desc1 = (_TSPStatements) MkStatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RAISE: root of subtree no. 1 can not be made a Statements node ", 0, _coordref);
_currn->_desc2 = (_TSPRaise_statement) MkRaise_statement (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RAISE: root of subtree no. 2 can not be made a Raise_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_RAISE;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_RAISE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_RETURN (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_RETURN (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_RETURN _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_RETURN;
#else
_currn = (_TPPSTATEMENTS_RETURN) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_RETURN));
#endif
_currn->_prod = RULESTATEMENTS_RETURN;
_currn->_desc1 = (_TSPStatements) MkStatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RETURN: root of subtree no. 1 can not be made a Statements node ", 0, _coordref);
_currn->_desc2 = (_TSPReturn_statement) MkReturn_statement (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RETURN: root of subtree no. 2 can not be made a Return_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_RETURN;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_RETURN */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_RESUME (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_RESUME (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_RESUME _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_RESUME;
#else
_currn = (_TPPSTATEMENTS_RESUME) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_RESUME));
#endif
_currn->_prod = RULESTATEMENTS_RESUME;
_currn->_desc1 = (_TSPStatements) MkStatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RESUME: root of subtree no. 1 can not be made a Statements node ", 0, _coordref);
_currn->_desc2 = (_TSPResume_statement) MkResume_statement (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_RESUME: root of subtree no. 2 can not be made a Resume_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_RESUME;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_RESUME */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_EXP (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_EXP (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_EXP _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_EXP;
#else
_currn = (_TPPSTATEMENTS_EXP) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_EXP));
#endif
_currn->_prod = RULESTATEMENTS_EXP;
_currn->_desc1 = (_TSPStatements) MkStatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_EXP: root of subtree no. 1 can not be made a Statements node ", 0, _coordref);
_currn->_desc2 = (_TSPExpression) MkExpression (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_EXP: root of subtree no. 2 can not be made a Expression node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_EXP;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_EXP */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_BREAK (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_BREAK (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_BREAK _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_BREAK;
#else
_currn = (_TPPSTATEMENTS_BREAK) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_BREAK));
#endif
_currn->_prod = RULESTATEMENTS_BREAK;
_currn->_desc1 = (_TSPStatements) MkStatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_BREAK: root of subtree no. 1 can not be made a Statements node ", 0, _coordref);
_currn->_desc2 = (_TSPBreak_statement) MkBreak_statement (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_BREAK: root of subtree no. 2 can not be made a Break_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_BREAK;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_BREAK */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_LOOP (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_LOOP (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_LOOP _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_LOOP;
#else
_currn = (_TPPSTATEMENTS_LOOP) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_LOOP));
#endif
_currn->_prod = RULESTATEMENTS_LOOP;
_currn->_desc1 = (_TSPStatements) MkStatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_LOOP: root of subtree no. 1 can not be made a Statements node ", 0, _coordref);
_currn->_desc2 = (_TSPLoop) MkLoop (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_LOOP: root of subtree no. 2 can not be made a Loop node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_LOOP;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_LOOP */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_TYPE_CASE (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_TYPE_CASE (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_TYPE_CASE _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_TYPE_CASE;
#else
_currn = (_TPPSTATEMENTS_TYPE_CASE) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_TYPE_CASE));
#endif
_currn->_prod = RULESTATEMENTS_TYPE_CASE;
_currn->_desc1 = (_TSPStatements) MkStatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_TYPE_CASE: root of subtree no. 1 can not be made a Statements node ", 0, _coordref);
_currn->_desc2 = (_TSPType_case_statement) MkType_case_statement (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_TYPE_CASE: root of subtree no. 2 can not be made a Type_case_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_TYPE_CASE;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_TYPE_CASE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_CASE (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_CASE (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_CASE _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_CASE;
#else
_currn = (_TPPSTATEMENTS_CASE) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_CASE));
#endif
_currn->_prod = RULESTATEMENTS_CASE;
_currn->_desc1 = (_TSPStatements) MkStatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_CASE: root of subtree no. 1 can not be made a Statements node ", 0, _coordref);
_currn->_desc2 = (_TSPCase_statement) MkCase_statement (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_CASE: root of subtree no. 2 can not be made a Case_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_CASE;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_CASE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_COND (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_COND (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_COND _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_COND;
#else
_currn = (_TPPSTATEMENTS_COND) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_COND));
#endif
_currn->_prod = RULESTATEMENTS_COND;
_currn->_desc1 = (_TSPStatements) MkStatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_COND: root of subtree no. 1 can not be made a Statements node ", 0, _coordref);
_currn->_desc2 = (_TSPConditional_statement) MkConditional_statement (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_COND: root of subtree no. 2 can not be made a Conditional_statement node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_COND;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_COND */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_BEGIN (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_BEGIN (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_BEGIN _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_BEGIN;
#else
_currn = (_TPPSTATEMENTS_BEGIN) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_BEGIN));
#endif
_currn->_prod = RULESTATEMENTS_BEGIN;
_currn->_desc1 = (_TSPStatements) MkStatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_BEGIN: root of subtree no. 1 can not be made a Statements node ", 0, _coordref);
_currn->_desc2 = (_TSPBegin_block) MkBegin_block (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_BEGIN: root of subtree no. 2 can not be made a Begin_block node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_BEGIN;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_BEGIN */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_ASSIGN (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTATEMENTS_ASSIGN (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTATEMENTS_ASSIGN _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_ASSIGN;
#else
_currn = (_TPPSTATEMENTS_ASSIGN) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_ASSIGN));
#endif
_currn->_prod = RULESTATEMENTS_ASSIGN;
_currn->_desc1 = (_TSPStatements) MkStatements (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_ASSIGN: root of subtree no. 1 can not be made a Statements node ", 0, _coordref);
_currn->_desc2 = (_TSPAssignment) MkAssignment (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STATEMENTS_ASSIGN: root of subtree no. 2 can not be made a Assignment node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STATEMENTS_ASSIGN;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_ASSIGN */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTATEMENTS_EMPTY (POSITION *_coordref)
#else
NODEPTR MkSTATEMENTS_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPSTATEMENTS_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPSTATEMENTS_EMPTY;
#else
_currn = (_TPPSTATEMENTS_EMPTY) TreeNodeAlloc (sizeof (struct _TPSTATEMENTS_EMPTY));
#endif
_currn->_prod = RULESTATEMENTS_EMPTY;
_SETCOORD(_currn)
_TERMACT_STATEMENTS_EMPTY;
return ( (NODEPTR) _currn);
}/* MkSTATEMENTS_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOCAL_STREAM_DECL (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkLOCAL_STREAM_DECL (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPLOCAL_STREAM_DECL _currn;
#ifdef __cplusplus
_currn = new _TPLOCAL_STREAM_DECL;
#else
_currn = (_TPPLOCAL_STREAM_DECL) TreeNodeAlloc (sizeof (struct _TPLOCAL_STREAM_DECL));
#endif
_currn->_prod = RULELOCAL_STREAM_DECL;
_currn->_desc1 = (_TSPIdent_def) MkIdent_def (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_STREAM_DECL: root of subtree no. 1 can not be made a Ident_def node ", 0, _coordref);
_currn->_desc2 = (_TSPMethod_specification) MkMethod_specification (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_STREAM_DECL: root of subtree no. 2 can not be made a Method_specification node ", 0, _coordref);
_currn->_desc3 = (_TSPBound_method) MkBound_method (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_STREAM_DECL: root of subtree no. 3 can not be made a Bound_method node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_LOCAL_STREAM_DECL;
return ( (NODEPTR) _currn);
}/* MkLOCAL_STREAM_DECL */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOCAL_DECLS_STREAM (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkLOCAL_DECLS_STREAM (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPLOCAL_DECLS_STREAM _currn;
#ifdef __cplusplus
_currn = new _TPLOCAL_DECLS_STREAM;
#else
_currn = (_TPPLOCAL_DECLS_STREAM) TreeNodeAlloc (sizeof (struct _TPLOCAL_DECLS_STREAM));
#endif
_currn->_prod = RULELOCAL_DECLS_STREAM;
_currn->_desc1 = (_TSPLocal_declarations) MkLocal_declarations (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_DECLS_STREAM: root of subtree no. 1 can not be made a Local_declarations node ", 0, _coordref);
_currn->_desc2 = (_TSPLocal_stream_declaration) MkLocal_stream_declaration (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_DECLS_STREAM: root of subtree no. 2 can not be made a Local_stream_declaration node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_LOCAL_DECLS_STREAM;
return ( (NODEPTR) _currn);
}/* MkLOCAL_DECLS_STREAM */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOCAL_DECLS_ATT (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkLOCAL_DECLS_ATT (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPLOCAL_DECLS_ATT _currn;
#ifdef __cplusplus
_currn = new _TPLOCAL_DECLS_ATT;
#else
_currn = (_TPPLOCAL_DECLS_ATT) TreeNodeAlloc (sizeof (struct _TPLOCAL_DECLS_ATT));
#endif
_currn->_prod = RULELOCAL_DECLS_ATT;
_currn->_desc1 = (_TSPLocal_declarations) MkLocal_declarations (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_DECLS_ATT: root of subtree no. 1 can not be made a Local_declarations node ", 0, _coordref);
_currn->_desc2 = (_TSPAttribute_declaration) MkAttribute_declaration (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE LOCAL_DECLS_ATT: root of subtree no. 2 can not be made a Attribute_declaration node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_LOCAL_DECLS_ATT;
return ( (NODEPTR) _currn);
}/* MkLOCAL_DECLS_ATT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLOCAL_DECLS_EMPTY (POSITION *_coordref)
#else
NODEPTR MkLOCAL_DECLS_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPLOCAL_DECLS_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPLOCAL_DECLS_EMPTY;
#else
_currn = (_TPPLOCAL_DECLS_EMPTY) TreeNodeAlloc (sizeof (struct _TPLOCAL_DECLS_EMPTY));
#endif
_currn->_prod = RULELOCAL_DECLS_EMPTY;
_SETCOORD(_currn)
_TERMACT_LOCAL_DECLS_EMPTY;
return ( (NODEPTR) _currn);
}/* MkLOCAL_DECLS_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBLOCK (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkBLOCK (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPBLOCK _currn;
#ifdef __cplusplus
_currn = new _TPBLOCK;
#else
_currn = (_TPPBLOCK) TreeNodeAlloc (sizeof (struct _TPBLOCK));
#endif
_currn->_prod = RULEBLOCK;
_currn->_desc1 = (_TSPLocal_declarations) MkLocal_declarations (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BLOCK: root of subtree no. 1 can not be made a Local_declarations node ", 0, _coordref);
_currn->_desc2 = (_TSPStatements) MkStatements (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE BLOCK: root of subtree no. 2 can not be made a Statements node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_BLOCK;
return ( (NODEPTR) _currn);
}/* MkBLOCK */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_INST_CLRTYPE (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkBUILTIN_INST_CLRTYPE (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPBUILTIN_INST_CLRTYPE _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_INST_CLRTYPE;
#else
_currn = (_TPPBUILTIN_INST_CLRTYPE) TreeNodeAlloc (sizeof (struct _TPBUILTIN_INST_CLRTYPE));
#endif
_currn->_prod = RULEBUILTIN_INST_CLRTYPE;
_currn->_desc1 = (_TSPType_specifier) MkType_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BUILTIN_INST_CLRTYPE: root of subtree no. 1 can not be made a Type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_BUILTIN_INST_CLRTYPE;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_INST_CLRTYPE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_INST_TYPE (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkBUILTIN_INST_TYPE (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPBUILTIN_INST_TYPE _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_INST_TYPE;
#else
_currn = (_TPPBUILTIN_INST_TYPE) TreeNodeAlloc (sizeof (struct _TPBUILTIN_INST_TYPE));
#endif
_currn->_prod = RULEBUILTIN_INST_TYPE;
_currn->_desc1 = (_TSPType_specifier) MkType_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BUILTIN_INST_TYPE: root of subtree no. 1 can not be made a Type_specifier node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_BUILTIN_INST_TYPE;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_INST_TYPE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_INST_STR (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkBUILTIN_INST_STR (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPBUILTIN_INST_STR _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_INST_STR;
#else
_currn = (_TPPBUILTIN_INST_STR) TreeNodeAlloc (sizeof (struct _TPBUILTIN_INST_STR));
#endif
_currn->_prod = RULEBUILTIN_INST_STR;
_SETCOORD(_currn)
_TERMACT_BUILTIN_INST_STR;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "stringconst", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkBUILTIN_INST_STR */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_INSTS_EMPTY (POSITION *_coordref)
#else
NODEPTR MkBUILTIN_INSTS_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPBUILTIN_INSTS_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_INSTS_EMPTY;
#else
_currn = (_TPPBUILTIN_INSTS_EMPTY) TreeNodeAlloc (sizeof (struct _TPBUILTIN_INSTS_EMPTY));
#endif
_currn->_prod = RULEBUILTIN_INSTS_EMPTY;
_SETCOORD(_currn)
_TERMACT_BUILTIN_INSTS_EMPTY;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_INSTS_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_INSTS (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkBUILTIN_INSTS (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPBUILTIN_INSTS _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_INSTS;
#else
_currn = (_TPPBUILTIN_INSTS) TreeNodeAlloc (sizeof (struct _TPBUILTIN_INSTS));
#endif
_currn->_prod = RULEBUILTIN_INSTS;
_currn->_desc1 = (_TSPBuiltin_instructions) MkBuiltin_instructions (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BUILTIN_INSTS: root of subtree no. 1 can not be made a Builtin_instructions node ", 0, _coordref);
_currn->_desc2 = (_TSPBuiltin_instruction) MkBuiltin_instruction (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE BUILTIN_INSTS: root of subtree no. 2 can not be made a Builtin_instruction node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_BUILTIN_INSTS;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_INSTS */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_BODY_STATIC_BUILTIN (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkMETHOD_BODY_STATIC_BUILTIN (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPMETHOD_BODY_STATIC_BUILTIN _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_BODY_STATIC_BUILTIN;
#else
_currn = (_TPPMETHOD_BODY_STATIC_BUILTIN) TreeNodeAlloc (sizeof (struct _TPMETHOD_BODY_STATIC_BUILTIN));
#endif
_currn->_prod = RULEMETHOD_BODY_STATIC_BUILTIN;
_currn->_desc1 = (_TSPBuiltin_instructions) MkBuiltin_instructions (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_BODY_STATIC_BUILTIN: root of subtree no. 1 can not be made a Builtin_instructions node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_METHOD_BODY_STATIC_BUILTIN;
return ( (NODEPTR) _currn);
}/* MkMETHOD_BODY_STATIC_BUILTIN */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_BODY_BUILTIN (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkMETHOD_BODY_BUILTIN (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPMETHOD_BODY_BUILTIN _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_BODY_BUILTIN;
#else
_currn = (_TPPMETHOD_BODY_BUILTIN) TreeNodeAlloc (sizeof (struct _TPMETHOD_BODY_BUILTIN));
#endif
_currn->_prod = RULEMETHOD_BODY_BUILTIN;
_currn->_desc1 = (_TSPBuiltin_instructions) MkBuiltin_instructions (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_BODY_BUILTIN: root of subtree no. 1 can not be made a Builtin_instructions node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_METHOD_BODY_BUILTIN;
return ( (NODEPTR) _currn);
}/* MkMETHOD_BODY_BUILTIN */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLINKER_SYMBOL (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkLINKER_SYMBOL (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPLINKER_SYMBOL _currn;
#ifdef __cplusplus
_currn = new _TPLINKER_SYMBOL;
#else
_currn = (_TPPLINKER_SYMBOL) TreeNodeAlloc (sizeof (struct _TPLINKER_SYMBOL));
#endif
_currn->_prod = RULELINKER_SYMBOL;
_SETCOORD(_currn)
_TERMACT_LINKER_SYMBOL;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "stringconst", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkLINKER_SYMBOL */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkLINKER_SYMBOL_EMPTY (POSITION *_coordref)
#else
NODEPTR MkLINKER_SYMBOL_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPLINKER_SYMBOL_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPLINKER_SYMBOL_EMPTY;
#else
_currn = (_TPPLINKER_SYMBOL_EMPTY) TreeNodeAlloc (sizeof (struct _TPLINKER_SYMBOL_EMPTY));
#endif
_currn->_prod = RULELINKER_SYMBOL_EMPTY;
_SETCOORD(_currn)
_TERMACT_LINKER_SYMBOL_EMPTY;
return ( (NODEPTR) _currn);
}/* MkLINKER_SYMBOL_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFOREIGN_LANGUAGE (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkFOREIGN_LANGUAGE (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPFOREIGN_LANGUAGE _currn;
#ifdef __cplusplus
_currn = new _TPFOREIGN_LANGUAGE;
#else
_currn = (_TPPFOREIGN_LANGUAGE) TreeNodeAlloc (sizeof (struct _TPFOREIGN_LANGUAGE));
#endif
_currn->_prod = RULEFOREIGN_LANGUAGE;
_SETCOORD(_currn)
_TERMACT_FOREIGN_LANGUAGE;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkFOREIGN_LANGUAGE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_BODY_FOREIGN (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkMETHOD_BODY_FOREIGN (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPMETHOD_BODY_FOREIGN _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_BODY_FOREIGN;
#else
_currn = (_TPPMETHOD_BODY_FOREIGN) TreeNodeAlloc (sizeof (struct _TPMETHOD_BODY_FOREIGN));
#endif
_currn->_prod = RULEMETHOD_BODY_FOREIGN;
_currn->_desc1 = (_TSPForeign_language) MkForeign_language (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_BODY_FOREIGN: root of subtree no. 1 can not be made a Foreign_language node ", 0, _coordref);
_currn->_desc2 = (_TSPLinker_symbol) MkLinker_symbol (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_BODY_FOREIGN: root of subtree no. 2 can not be made a Linker_symbol node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_METHOD_BODY_FOREIGN;
return ( (NODEPTR) _currn);
}/* MkMETHOD_BODY_FOREIGN */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_BODY_AB (POSITION *_coordref)
#else
NODEPTR MkMETHOD_BODY_AB (_coordref)
	POSITION *_coordref;
#endif
{	_TPPMETHOD_BODY_AB _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_BODY_AB;
#else
_currn = (_TPPMETHOD_BODY_AB) TreeNodeAlloc (sizeof (struct _TPMETHOD_BODY_AB));
#endif
_currn->_prod = RULEMETHOD_BODY_AB;
_SETCOORD(_currn)
_TERMACT_METHOD_BODY_AB;
return ( (NODEPTR) _currn);
}/* MkMETHOD_BODY_AB */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_BODY (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkMETHOD_BODY (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPMETHOD_BODY _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_BODY;
#else
_currn = (_TPPMETHOD_BODY) TreeNodeAlloc (sizeof (struct _TPMETHOD_BODY));
#endif
_currn->_prod = RULEMETHOD_BODY;
_currn->_desc1 = (_TSPBlock) MkBlock (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_BODY: root of subtree no. 1 can not be made a Block node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_METHOD_BODY;
return ( (NODEPTR) _currn);
}/* MkMETHOD_BODY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_SPEC (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkPARAMETER_SPEC (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPPARAMETER_SPEC _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_SPEC;
#else
_currn = (_TPPPARAMETER_SPEC) TreeNodeAlloc (sizeof (struct _TPPARAMETER_SPEC));
#endif
_currn->_prod = RULEPARAMETER_SPEC;
_currn->_desc1 = (_TSPParameter_kind) MkParameter_kind (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE PARAMETER_SPEC: root of subtree no. 1 can not be made a Parameter_kind node ", 0, _coordref);
_currn->_desc2 = (_TSPAttribute_specification) MkAttribute_specification (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE PARAMETER_SPEC: root of subtree no. 2 can not be made a Attribute_specification node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_PARAMETER_SPEC;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_SPEC */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _MkParameter_specificationPARAMETERS (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _MkParameter_specificationPARAMETERS (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_Parameter_specificationPARAMETERS _new;
#ifdef __cplusplus
	_new = new _TPLST_Parameter_specificationPARAMETERS;
#else
	_new = (_TPPLST_Parameter_specificationPARAMETERS) TreeNodeAlloc (sizeof (struct _TPLST_Parameter_specificationPARAMETERS));
#endif
	_new->_prod = RULELST_Parameter_specificationPARAMETERS;
	_new->_desc1 = (_TSPParameter_specification)elem;
	_new->_desc2 = (_TSPLST_Parameters)_new;
	{_TPPLST_Parameter_specificationPARAMETERS _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_Parameter_specificationPARAMETERS;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemPARAMETERS (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemPARAMETERS (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBParameter_specification)) 
		return _MkParameter_specificationPARAMETERS (_coordref, MkParameter_specification (_coordref, t));
	message (DEADLY, "a PARAMETERS list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2PARAMETERS (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2PARAMETERS (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_Parameters)
	l =_ElemPARAMETERS (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_Parameters)
	r = _ElemPARAMETERS (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0PARAMETERS)r)->_desc2);
((_TPPLST_0PARAMETERS)r)->_desc2 = ((_TPPLST_0PARAMETERS)l)->_desc2;
((_TPPLST_0PARAMETERS)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETERS (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkPARAMETERS (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPPARAMETERS root;
	_TPPLST_0PARAMETERS list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0PARAMETERS)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_Parameters)
		t = _ElemPARAMETERS (_coordref, t);
	remain = (_TPPLST_0PARAMETERS)(((_TPPLST_0PARAMETERS) t)->_desc2);
	((_TPPLST_0PARAMETERS) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0PARAMETERS;
#else
list = (_TPPLST_0PARAMETERS) TreeNodeAlloc (sizeof (struct _TPLST_0PARAMETERS));
#endif
list->_prod = RULELST_0PARAMETERS;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0PARAMETERS)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_Parameter_specificationPARAMETERS)
	{_TPPLST_Parameter_specificationPARAMETERS _currn = _currn;
	 _TERMACT_LST_Parameter_specificationPARAMETERS;
	} this code has been moved to _ElemPARAMETERS*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPPARAMETERS;
#else
root = (_TPPPARAMETERS) TreeNodeAlloc (sizeof (struct _TPPARAMETERS));
#endif
root->_prod = RULEPARAMETERS;
root->_desc1 = (_TSPLST_Parameters)list;
{ _TPPPARAMETERS _currn = root;
  _SETCOORD(_currn)
  _TERMACT_PARAMETERS;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_IDENT_DEF (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkMETHOD_IDENT_DEF (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPMETHOD_IDENT_DEF _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_IDENT_DEF;
#else
_currn = (_TPPMETHOD_IDENT_DEF) TreeNodeAlloc (sizeof (struct _TPMETHOD_IDENT_DEF));
#endif
_currn->_prod = RULEMETHOD_IDENT_DEF;
_SETCOORD(_currn)
_TERMACT_METHOD_IDENT_DEF;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkMETHOD_IDENT_DEF */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_DECL (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3, NODEPTR _desc4)
#else
NODEPTR MkMETHOD_DECL (_coordref,_desc1,_desc2,_desc3,_desc4)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
	NODEPTR _desc4;
#endif
{	_TPPMETHOD_DECL _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_DECL;
#else
_currn = (_TPPMETHOD_DECL) TreeNodeAlloc (sizeof (struct _TPMETHOD_DECL));
#endif
_currn->_prod = RULEMETHOD_DECL;
_currn->_desc1 = (_TSPMethod_ident_def) MkMethod_ident_def (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_DECL: root of subtree no. 1 can not be made a Method_ident_def node ", 0, _coordref);
_currn->_desc2 = (_TSPParameters) MkParameters (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_DECL: root of subtree no. 2 can not be made a Parameters node ", 0, _coordref);
_currn->_desc3 = (_TSPType_specifier) MkType_specifier (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_DECL: root of subtree no. 3 can not be made a Type_specifier node ", 0, _coordref);
_currn->_desc4 = (_TSPMethod_body) MkMethod_body (_coordref, _desc4);	
if (((NODEPTR)_currn->_desc4) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_DECL: root of subtree no. 4 can not be made a Method_body node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_METHOD_DECL;
return ( (NODEPTR) _currn);
}/* MkMETHOD_DECL */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkIDENTIFIERS (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkIDENTIFIERS (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPIDENTIFIERS _currn;
#ifdef __cplusplus
_currn = new _TPIDENTIFIERS;
#else
_currn = (_TPPIDENTIFIERS) TreeNodeAlloc (sizeof (struct _TPIDENTIFIERS));
#endif
_currn->_prod = RULEIDENTIFIERS;
_currn->_desc1 = (_TSPIdent_def) MkIdent_def (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE IDENTIFIERS: root of subtree no. 1 can not be made a Ident_def node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_IDENTIFIERS;
return ( (NODEPTR) _currn);
}/* MkIDENTIFIERS */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkIDENTIFIERS_LST (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkIDENTIFIERS_LST (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPIDENTIFIERS_LST _currn;
#ifdef __cplusplus
_currn = new _TPIDENTIFIERS_LST;
#else
_currn = (_TPPIDENTIFIERS_LST) TreeNodeAlloc (sizeof (struct _TPIDENTIFIERS_LST));
#endif
_currn->_prod = RULEIDENTIFIERS_LST;
_currn->_desc1 = (_TSPIdentifiers) MkIdentifiers (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE IDENTIFIERS_LST: root of subtree no. 1 can not be made a Identifiers node ", 0, _coordref);
_currn->_desc2 = (_TSPIdent_def) MkIdent_def (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE IDENTIFIERS_LST: root of subtree no. 2 can not be made a Ident_def node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_IDENTIFIERS_LST;
return ( (NODEPTR) _currn);
}/* MkIDENTIFIERS_LST */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_SPEC (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkATTR_SPEC (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPATTR_SPEC _currn;
#ifdef __cplusplus
_currn = new _TPATTR_SPEC;
#else
_currn = (_TPPATTR_SPEC) TreeNodeAlloc (sizeof (struct _TPATTR_SPEC));
#endif
_currn->_prod = RULEATTR_SPEC;
_currn->_desc1 = (_TSPIdentifiers) MkIdentifiers (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_SPEC: root of subtree no. 1 can not be made a Identifiers node ", 0, _coordref);
_currn->_desc2 = (_TSPType_specifier) MkType_specifier (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_SPEC: root of subtree no. 2 can not be made a Type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ATTR_SPEC;
return ( (NODEPTR) _currn);
}/* MkATTR_SPEC */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_DECL_CONST_TYPE_CONST (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkATTR_DECL_CONST_TYPE_CONST (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPATTR_DECL_CONST_TYPE_CONST _currn;
#ifdef __cplusplus
_currn = new _TPATTR_DECL_CONST_TYPE_CONST;
#else
_currn = (_TPPATTR_DECL_CONST_TYPE_CONST) TreeNodeAlloc (sizeof (struct _TPATTR_DECL_CONST_TYPE_CONST));
#endif
_currn->_prod = RULEATTR_DECL_CONST_TYPE_CONST;
_currn->_desc1 = (_TSPIdentifiers) MkIdentifiers (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_CONST_TYPE_CONST: root of subtree no. 1 can not be made a Identifiers node ", 0, _coordref);
_currn->_desc2 = (_TSPType_constructor) MkType_constructor (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_CONST_TYPE_CONST: root of subtree no. 2 can not be made a Type_constructor node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ATTR_DECL_CONST_TYPE_CONST;
return ( (NODEPTR) _currn);
}/* MkATTR_DECL_CONST_TYPE_CONST */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_DECL_TYPE_CONST (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkATTR_DECL_TYPE_CONST (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPATTR_DECL_TYPE_CONST _currn;
#ifdef __cplusplus
_currn = new _TPATTR_DECL_TYPE_CONST;
#else
_currn = (_TPPATTR_DECL_TYPE_CONST) TreeNodeAlloc (sizeof (struct _TPATTR_DECL_TYPE_CONST));
#endif
_currn->_prod = RULEATTR_DECL_TYPE_CONST;
_currn->_desc1 = (_TSPIdentifiers) MkIdentifiers (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_TYPE_CONST: root of subtree no. 1 can not be made a Identifiers node ", 0, _coordref);
_currn->_desc2 = (_TSPType_constructor) MkType_constructor (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_TYPE_CONST: root of subtree no. 2 can not be made a Type_constructor node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ATTR_DECL_TYPE_CONST;
return ( (NODEPTR) _currn);
}/* MkATTR_DECL_TYPE_CONST */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_DECL_CONST_EXP (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkATTR_DECL_CONST_EXP (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPATTR_DECL_CONST_EXP _currn;
#ifdef __cplusplus
_currn = new _TPATTR_DECL_CONST_EXP;
#else
_currn = (_TPPATTR_DECL_CONST_EXP) TreeNodeAlloc (sizeof (struct _TPATTR_DECL_CONST_EXP));
#endif
_currn->_prod = RULEATTR_DECL_CONST_EXP;
_currn->_desc1 = (_TSPAttribute_specification) MkAttribute_specification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_CONST_EXP: root of subtree no. 1 can not be made a Attribute_specification node ", 0, _coordref);
_currn->_desc2 = (_TSPExpression) MkExpression (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_CONST_EXP: root of subtree no. 2 can not be made a Expression node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ATTR_DECL_CONST_EXP;
return ( (NODEPTR) _currn);
}/* MkATTR_DECL_CONST_EXP */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_DECL_EXP (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkATTR_DECL_EXP (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPATTR_DECL_EXP _currn;
#ifdef __cplusplus
_currn = new _TPATTR_DECL_EXP;
#else
_currn = (_TPPATTR_DECL_EXP) TreeNodeAlloc (sizeof (struct _TPATTR_DECL_EXP));
#endif
_currn->_prod = RULEATTR_DECL_EXP;
_currn->_desc1 = (_TSPAttribute_specification) MkAttribute_specification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_EXP: root of subtree no. 1 can not be made a Attribute_specification node ", 0, _coordref);
_currn->_desc2 = (_TSPExpression) MkExpression (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL_EXP: root of subtree no. 2 can not be made a Expression node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ATTR_DECL_EXP;
return ( (NODEPTR) _currn);
}/* MkATTR_DECL_EXP */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_DECL (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkATTR_DECL (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPATTR_DECL _currn;
#ifdef __cplusplus
_currn = new _TPATTR_DECL;
#else
_currn = (_TPPATTR_DECL) TreeNodeAlloc (sizeof (struct _TPATTR_DECL));
#endif
_currn->_prod = RULEATTR_DECL;
_currn->_desc1 = (_TSPAttribute_specification) MkAttribute_specification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ATTR_DECL: root of subtree no. 1 can not be made a Attribute_specification node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_ATTR_DECL;
return ( (NODEPTR) _currn);
}/* MkATTR_DECL */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_ACCESS_SH_RO (POSITION *_coordref)
#else
NODEPTR MkATTR_ACCESS_SH_RO (_coordref)
	POSITION *_coordref;
#endif
{	_TPPATTR_ACCESS_SH_RO _currn;
#ifdef __cplusplus
_currn = new _TPATTR_ACCESS_SH_RO;
#else
_currn = (_TPPATTR_ACCESS_SH_RO) TreeNodeAlloc (sizeof (struct _TPATTR_ACCESS_SH_RO));
#endif
_currn->_prod = RULEATTR_ACCESS_SH_RO;
_SETCOORD(_currn)
_TERMACT_ATTR_ACCESS_SH_RO;
return ( (NODEPTR) _currn);
}/* MkATTR_ACCESS_SH_RO */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_ACCESS_RO (POSITION *_coordref)
#else
NODEPTR MkATTR_ACCESS_RO (_coordref)
	POSITION *_coordref;
#endif
{	_TPPATTR_ACCESS_RO _currn;
#ifdef __cplusplus
_currn = new _TPATTR_ACCESS_RO;
#else
_currn = (_TPPATTR_ACCESS_RO) TreeNodeAlloc (sizeof (struct _TPATTR_ACCESS_RO));
#endif
_currn->_prod = RULEATTR_ACCESS_RO;
_SETCOORD(_currn)
_TERMACT_ATTR_ACCESS_RO;
return ( (NODEPTR) _currn);
}/* MkATTR_ACCESS_RO */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkATTR_ACCESS_SH (POSITION *_coordref)
#else
NODEPTR MkATTR_ACCESS_SH (_coordref)
	POSITION *_coordref;
#endif
{	_TPPATTR_ACCESS_SH _currn;
#ifdef __cplusplus
_currn = new _TPATTR_ACCESS_SH;
#else
_currn = (_TPPATTR_ACCESS_SH) TreeNodeAlloc (sizeof (struct _TPATTR_ACCESS_SH));
#endif
_currn->_prod = RULEATTR_ACCESS_SH;
_SETCOORD(_currn)
_TERMACT_ATTR_ACCESS_SH;
return ( (NODEPTR) _currn);
}/* MkATTR_ACCESS_SH */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_STREAM (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkFEATURE_STREAM (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPFEATURE_STREAM _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_STREAM;
#else
_currn = (_TPPFEATURE_STREAM) TreeNodeAlloc (sizeof (struct _TPFEATURE_STREAM));
#endif
_currn->_prod = RULEFEATURE_STREAM;
_currn->_desc1 = (_TSPMethod_decl) MkMethod_decl (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_STREAM: root of subtree no. 1 can not be made a Method_decl node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_FEATURE_STREAM;
return ( (NODEPTR) _currn);
}/* MkFEATURE_STREAM */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_METH (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkFEATURE_METH (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPFEATURE_METH _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_METH;
#else
_currn = (_TPPFEATURE_METH) TreeNodeAlloc (sizeof (struct _TPFEATURE_METH));
#endif
_currn->_prod = RULEFEATURE_METH;
_currn->_desc1 = (_TSPMethod_decl) MkMethod_decl (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_METH: root of subtree no. 1 can not be made a Method_decl node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_FEATURE_METH;
return ( (NODEPTR) _currn);
}/* MkFEATURE_METH */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_ATT (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkFEATURE_ATT (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPFEATURE_ATT _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_ATT;
#else
_currn = (_TPPFEATURE_ATT) TreeNodeAlloc (sizeof (struct _TPFEATURE_ATT));
#endif
_currn->_prod = RULEFEATURE_ATT;
_currn->_desc1 = (_TSPAttribute_declaration) MkAttribute_declaration (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_ATT: root of subtree no. 1 can not be made a Attribute_declaration node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_FEATURE_ATT;
return ( (NODEPTR) _currn);
}/* MkFEATURE_ATT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_ATT_ACC (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkFEATURE_ATT_ACC (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPFEATURE_ATT_ACC _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_ATT_ACC;
#else
_currn = (_TPPFEATURE_ATT_ACC) TreeNodeAlloc (sizeof (struct _TPFEATURE_ATT_ACC));
#endif
_currn->_prod = RULEFEATURE_ATT_ACC;
_currn->_desc1 = (_TSPAttribute_access_type) MkAttribute_access_type (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_ATT_ACC: root of subtree no. 1 can not be made a Attribute_access_type node ", 0, _coordref);
_currn->_desc2 = (_TSPAttribute_declaration) MkAttribute_declaration (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_ATT_ACC: root of subtree no. 2 can not be made a Attribute_declaration node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_FEATURE_ATT_ACC;
return ( (NODEPTR) _currn);
}/* MkFEATURE_ATT_ACC */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_DECL_PRIV (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkFEATURE_DECL_PRIV (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPFEATURE_DECL_PRIV _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_DECL_PRIV;
#else
_currn = (_TPPFEATURE_DECL_PRIV) TreeNodeAlloc (sizeof (struct _TPFEATURE_DECL_PRIV));
#endif
_currn->_prod = RULEFEATURE_DECL_PRIV;
_currn->_desc1 = (_TSPFeature) MkFeature (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_DECL_PRIV: root of subtree no. 1 can not be made a Feature node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_FEATURE_DECL_PRIV;
return ( (NODEPTR) _currn);
}/* MkFEATURE_DECL_PRIV */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_DECL (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkFEATURE_DECL (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPFEATURE_DECL _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_DECL;
#else
_currn = (_TPPFEATURE_DECL) TreeNodeAlloc (sizeof (struct _TPFEATURE_DECL));
#endif
_currn->_prod = RULEFEATURE_DECL;
_currn->_desc1 = (_TSPFeature) MkFeature (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_DECL: root of subtree no. 1 can not be made a Feature node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_FEATURE_DECL;
return ( (NODEPTR) _currn);
}/* MkFEATURE_DECL */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _MkFeature_declarationFEATURE_DECLS (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _MkFeature_declarationFEATURE_DECLS (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_Feature_declarationFEATURE_DECLS _new;
#ifdef __cplusplus
	_new = new _TPLST_Feature_declarationFEATURE_DECLS;
#else
	_new = (_TPPLST_Feature_declarationFEATURE_DECLS) TreeNodeAlloc (sizeof (struct _TPLST_Feature_declarationFEATURE_DECLS));
#endif
	_new->_prod = RULELST_Feature_declarationFEATURE_DECLS;
	_new->_desc1 = (_TSPFeature_declaration)elem;
	_new->_desc2 = (_TSPLST_Feature_declarations)_new;
	{_TPPLST_Feature_declarationFEATURE_DECLS _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_Feature_declarationFEATURE_DECLS;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemFEATURE_DECLS (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemFEATURE_DECLS (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBMethod_decl)) 
		return _MkFeature_declarationFEATURE_DECLS (_coordref, MkFeature_declaration (_coordref, t));
	if (IsSymb (t, SYMBFeature)) 
		return _MkFeature_declarationFEATURE_DECLS (_coordref, MkFeature_declaration (_coordref, t));
	if (IsSymb (t, SYMBAttribute_specification)) 
		return _MkFeature_declarationFEATURE_DECLS (_coordref, MkFeature_declaration (_coordref, t));
	if (IsSymb (t, SYMBAttribute_declaration)) 
		return _MkFeature_declarationFEATURE_DECLS (_coordref, MkFeature_declaration (_coordref, t));
	if (IsSymb (t, SYMBFeature_declaration)) 
		return _MkFeature_declarationFEATURE_DECLS (_coordref, MkFeature_declaration (_coordref, t));
	message (DEADLY, "a FEATURE_DECLS list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2FEATURE_DECLS (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2FEATURE_DECLS (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_Feature_declarations)
	l =_ElemFEATURE_DECLS (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_Feature_declarations)
	r = _ElemFEATURE_DECLS (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0FEATURE_DECLS)r)->_desc2);
((_TPPLST_0FEATURE_DECLS)r)->_desc2 = ((_TPPLST_0FEATURE_DECLS)l)->_desc2;
((_TPPLST_0FEATURE_DECLS)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_DECLS (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkFEATURE_DECLS (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPFEATURE_DECLS root;
	_TPPLST_0FEATURE_DECLS list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0FEATURE_DECLS)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_Feature_declarations)
		t = _ElemFEATURE_DECLS (_coordref, t);
	remain = (_TPPLST_0FEATURE_DECLS)(((_TPPLST_0FEATURE_DECLS) t)->_desc2);
	((_TPPLST_0FEATURE_DECLS) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0FEATURE_DECLS;
#else
list = (_TPPLST_0FEATURE_DECLS) TreeNodeAlloc (sizeof (struct _TPLST_0FEATURE_DECLS));
#endif
list->_prod = RULELST_0FEATURE_DECLS;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0FEATURE_DECLS)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_Feature_declarationFEATURE_DECLS)
	{_TPPLST_Feature_declarationFEATURE_DECLS _currn = _currn;
	 _TERMACT_LST_Feature_declarationFEATURE_DECLS;
	} this code has been moved to _ElemFEATURE_DECLS*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPFEATURE_DECLS;
#else
root = (_TPPFEATURE_DECLS) TreeNodeAlloc (sizeof (struct _TPFEATURE_DECLS));
#endif
root->_prod = RULEFEATURE_DECLS;
root->_desc1 = (_TSPLST_Feature_declarations)list;
{ _TPPFEATURE_DECLS _currn = root;
  _SETCOORD(_currn)
  _TERMACT_FEATURE_DECLS;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_ID_USE (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkFEATURE_ID_USE (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPFEATURE_ID_USE _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_ID_USE;
#else
_currn = (_TPPFEATURE_ID_USE) TreeNodeAlloc (sizeof (struct _TPFEATURE_ID_USE));
#endif
_currn->_prod = RULEFEATURE_ID_USE;
_SETCOORD(_currn)
_TERMACT_FEATURE_ID_USE;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkFEATURE_ID_USE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_SPEC_STREAM (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkFEATURE_SPEC_STREAM (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPFEATURE_SPEC_STREAM _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_SPEC_STREAM;
#else
_currn = (_TPPFEATURE_SPEC_STREAM) TreeNodeAlloc (sizeof (struct _TPFEATURE_SPEC_STREAM));
#endif
_currn->_prod = RULEFEATURE_SPEC_STREAM;
_currn->_desc1 = (_TSPFeature_id_use) MkFeature_id_use (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_SPEC_STREAM: root of subtree no. 1 can not be made a Feature_id_use node ", 0, _coordref);
_currn->_desc2 = (_TSPMethod_specification) MkMethod_specification (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_SPEC_STREAM: root of subtree no. 2 can not be made a Method_specification node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_FEATURE_SPEC_STREAM;
return ( (NODEPTR) _currn);
}/* MkFEATURE_SPEC_STREAM */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkFEATURE_SPEC (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkFEATURE_SPEC (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPFEATURE_SPEC _currn;
#ifdef __cplusplus
_currn = new _TPFEATURE_SPEC;
#else
_currn = (_TPPFEATURE_SPEC) TreeNodeAlloc (sizeof (struct _TPFEATURE_SPEC));
#endif
_currn->_prod = RULEFEATURE_SPEC;
_currn->_desc1 = (_TSPFeature_id_use) MkFeature_id_use (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_SPEC: root of subtree no. 1 can not be made a Feature_id_use node ", 0, _coordref);
_currn->_desc2 = (_TSPMethod_specification) MkMethod_specification (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE FEATURE_SPEC: root of subtree no. 2 can not be made a Method_specification node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_FEATURE_SPEC;
return ( (NODEPTR) _currn);
}/* MkFEATURE_SPEC */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkIDENT_MOD (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkIDENT_MOD (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPIDENT_MOD _currn;
#ifdef __cplusplus
_currn = new _TPIDENT_MOD;
#else
_currn = (_TPPIDENT_MOD) TreeNodeAlloc (sizeof (struct _TPIDENT_MOD));
#endif
_currn->_prod = RULEIDENT_MOD;
_SETCOORD(_currn)
_TERMACT_IDENT_MOD;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkIDENT_MOD */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMODIFICATION_NAME (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkMODIFICATION_NAME (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPMODIFICATION_NAME _currn;
#ifdef __cplusplus
_currn = new _TPMODIFICATION_NAME;
#else
_currn = (_TPPMODIFICATION_NAME) TreeNodeAlloc (sizeof (struct _TPMODIFICATION_NAME));
#endif
_currn->_prod = RULEMODIFICATION_NAME;
_currn->_desc1 = (_TSPFeature_specification) MkFeature_specification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE MODIFICATION_NAME: root of subtree no. 1 can not be made a Feature_specification node ", 0, _coordref);
_currn->_desc2 = (_TSPIdent_mod) MkIdent_mod (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE MODIFICATION_NAME: root of subtree no. 2 can not be made a Ident_mod node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_MODIFICATION_NAME;
return ( (NODEPTR) _currn);
}/* MkMODIFICATION_NAME */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMODIFICATION_OUT (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkMODIFICATION_OUT (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPMODIFICATION_OUT _currn;
#ifdef __cplusplus
_currn = new _TPMODIFICATION_OUT;
#else
_currn = (_TPPMODIFICATION_OUT) TreeNodeAlloc (sizeof (struct _TPMODIFICATION_OUT));
#endif
_currn->_prod = RULEMODIFICATION_OUT;
_currn->_desc1 = (_TSPFeature_specification) MkFeature_specification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE MODIFICATION_OUT: root of subtree no. 1 can not be made a Feature_specification node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_MODIFICATION_OUT;
return ( (NODEPTR) _currn);
}/* MkMODIFICATION_OUT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMODIFICATION_ONLY (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkMODIFICATION_ONLY (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPMODIFICATION_ONLY _currn;
#ifdef __cplusplus
_currn = new _TPMODIFICATION_ONLY;
#else
_currn = (_TPPMODIFICATION_ONLY) TreeNodeAlloc (sizeof (struct _TPMODIFICATION_ONLY));
#endif
_currn->_prod = RULEMODIFICATION_ONLY;
_currn->_desc1 = (_TSPFeature_specification) MkFeature_specification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE MODIFICATION_ONLY: root of subtree no. 1 can not be made a Feature_specification node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_MODIFICATION_ONLY;
return ( (NODEPTR) _currn);
}/* MkMODIFICATION_ONLY */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _MkModificationMODIFICATIONS (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _MkModificationMODIFICATIONS (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_ModificationMODIFICATIONS _new;
#ifdef __cplusplus
	_new = new _TPLST_ModificationMODIFICATIONS;
#else
	_new = (_TPPLST_ModificationMODIFICATIONS) TreeNodeAlloc (sizeof (struct _TPLST_ModificationMODIFICATIONS));
#endif
	_new->_prod = RULELST_ModificationMODIFICATIONS;
	_new->_desc1 = (_TSPModification)elem;
	_new->_desc2 = (_TSPLST_Modifications)_new;
	{_TPPLST_ModificationMODIFICATIONS _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_ModificationMODIFICATIONS;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemMODIFICATIONS (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemMODIFICATIONS (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBFeature_specification)) 
		return _MkModificationMODIFICATIONS (_coordref, MkModification (_coordref, t));
	if (IsSymb (t, SYMBModification)) 
		return _MkModificationMODIFICATIONS (_coordref, MkModification (_coordref, t));
	message (DEADLY, "a MODIFICATIONS list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2MODIFICATIONS (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2MODIFICATIONS (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_Modifications)
	l =_ElemMODIFICATIONS (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_Modifications)
	r = _ElemMODIFICATIONS (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0MODIFICATIONS)r)->_desc2);
((_TPPLST_0MODIFICATIONS)r)->_desc2 = ((_TPPLST_0MODIFICATIONS)l)->_desc2;
((_TPPLST_0MODIFICATIONS)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMODIFICATIONS (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkMODIFICATIONS (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPMODIFICATIONS root;
	_TPPLST_0MODIFICATIONS list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0MODIFICATIONS)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_Modifications)
		t = _ElemMODIFICATIONS (_coordref, t);
	remain = (_TPPLST_0MODIFICATIONS)(((_TPPLST_0MODIFICATIONS) t)->_desc2);
	((_TPPLST_0MODIFICATIONS) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0MODIFICATIONS;
#else
list = (_TPPLST_0MODIFICATIONS) TreeNodeAlloc (sizeof (struct _TPLST_0MODIFICATIONS));
#endif
list->_prod = RULELST_0MODIFICATIONS;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0MODIFICATIONS)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_ModificationMODIFICATIONS)
	{_TPPLST_ModificationMODIFICATIONS _currn = _currn;
	 _TERMACT_LST_ModificationMODIFICATIONS;
	} this code has been moved to _ElemMODIFICATIONS*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPMODIFICATIONS;
#else
root = (_TPPMODIFICATIONS) TreeNodeAlloc (sizeof (struct _TPMODIFICATIONS));
#endif
root->_prod = RULEMODIFICATIONS;
root->_desc1 = (_TSPLST_Modifications)list;
{ _TPPMODIFICATIONS _currn = root;
  _SETCOORD(_currn)
  _TERMACT_MODIFICATIONS;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkINHERITANCE_INC_ONLY (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkINHERITANCE_INC_ONLY (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPINHERITANCE_INC_ONLY _currn;
#ifdef __cplusplus
_currn = new _TPINHERITANCE_INC_ONLY;
#else
_currn = (_TPPINHERITANCE_INC_ONLY) TreeNodeAlloc (sizeof (struct _TPINHERITANCE_INC_ONLY));
#endif
_currn->_prod = RULEINHERITANCE_INC_ONLY;
_currn->_desc1 = (_TSPClass_specifier) MkClass_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCE_INC_ONLY: root of subtree no. 1 can not be made a Class_specifier node ", 0, _coordref);
_currn->_desc2 = (_TSPModifications) MkModifications (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCE_INC_ONLY: root of subtree no. 2 can not be made a Modifications node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_INHERITANCE_INC_ONLY;
return ( (NODEPTR) _currn);
}/* MkINHERITANCE_INC_ONLY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkINHERITANCE_INCLUDE (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkINHERITANCE_INCLUDE (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPINHERITANCE_INCLUDE _currn;
#ifdef __cplusplus
_currn = new _TPINHERITANCE_INCLUDE;
#else
_currn = (_TPPINHERITANCE_INCLUDE) TreeNodeAlloc (sizeof (struct _TPINHERITANCE_INCLUDE));
#endif
_currn->_prod = RULEINHERITANCE_INCLUDE;
_currn->_desc1 = (_TSPClass_specifier) MkClass_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCE_INCLUDE: root of subtree no. 1 can not be made a Class_specifier node ", 0, _coordref);
_currn->_desc2 = (_TSPModifications) MkModifications (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCE_INCLUDE: root of subtree no. 2 can not be made a Modifications node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_INHERITANCE_INCLUDE;
return ( (NODEPTR) _currn);
}/* MkINHERITANCE_INCLUDE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkINHERITANCE_LIKE (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkINHERITANCE_LIKE (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPINHERITANCE_LIKE _currn;
#ifdef __cplusplus
_currn = new _TPINHERITANCE_LIKE;
#else
_currn = (_TPPINHERITANCE_LIKE) TreeNodeAlloc (sizeof (struct _TPINHERITANCE_LIKE));
#endif
_currn->_prod = RULEINHERITANCE_LIKE;
_currn->_desc1 = (_TSPClass_specifier) MkClass_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCE_LIKE: root of subtree no. 1 can not be made a Class_specifier node ", 0, _coordref);
_currn->_desc2 = (_TSPModifications) MkModifications (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCE_LIKE: root of subtree no. 2 can not be made a Modifications node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_INHERITANCE_LIKE;
return ( (NODEPTR) _currn);
}/* MkINHERITANCE_LIKE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkINHERITANCE_PRIV (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkINHERITANCE_PRIV (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPINHERITANCE_PRIV _currn;
#ifdef __cplusplus
_currn = new _TPINHERITANCE_PRIV;
#else
_currn = (_TPPINHERITANCE_PRIV) TreeNodeAlloc (sizeof (struct _TPINHERITANCE_PRIV));
#endif
_currn->_prod = RULEINHERITANCE_PRIV;
_currn->_desc1 = (_TSPInheritance) MkInheritance (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCE_PRIV: root of subtree no. 1 can not be made a Inheritance node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_INHERITANCE_PRIV;
return ( (NODEPTR) _currn);
}/* MkINHERITANCE_PRIV */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkINHERITANCES_LST (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkINHERITANCES_LST (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPINHERITANCES_LST _currn;
#ifdef __cplusplus
_currn = new _TPINHERITANCES_LST;
#else
_currn = (_TPPINHERITANCES_LST) TreeNodeAlloc (sizeof (struct _TPINHERITANCES_LST));
#endif
_currn->_prod = RULEINHERITANCES_LST;
_currn->_desc1 = (_TSPInheritances) MkInheritances (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCES_LST: root of subtree no. 1 can not be made a Inheritances node ", 0, _coordref);
_currn->_desc2 = (_TSPInheritance) MkInheritance (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE INHERITANCES_LST: root of subtree no. 2 can not be made a Inheritance node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_INHERITANCES_LST;
return ( (NODEPTR) _currn);
}/* MkINHERITANCES_LST */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkINHERITANCES_EMPTY (POSITION *_coordref)
#else
NODEPTR MkINHERITANCES_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPINHERITANCES_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPINHERITANCES_EMPTY;
#else
_currn = (_TPPINHERITANCES_EMPTY) TreeNodeAlloc (sizeof (struct _TPINHERITANCES_EMPTY));
#endif
_currn->_prod = RULEINHERITANCES_EMPTY;
_SETCOORD(_currn)
_TERMACT_INHERITANCES_EMPTY;
return ( (NODEPTR) _currn);
}/* MkINHERITANCES_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDIRECT_STREAM_CALL (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkDIRECT_STREAM_CALL (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPDIRECT_STREAM_CALL _currn;
#ifdef __cplusplus
_currn = new _TPDIRECT_STREAM_CALL;
#else
_currn = (_TPPDIRECT_STREAM_CALL) TreeNodeAlloc (sizeof (struct _TPDIRECT_STREAM_CALL));
#endif
_currn->_prod = RULEDIRECT_STREAM_CALL;
_currn->_desc1 = (_TSPDesignator) MkDesignator (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE DIRECT_STREAM_CALL: root of subtree no. 1 can not be made a Designator node ", 0, _coordref);
_currn->_desc2 = (_TSPArguments) MkArguments (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE DIRECT_STREAM_CALL: root of subtree no. 2 can not be made a Arguments node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_DIRECT_STREAM_CALL;
return ( (NODEPTR) _currn);
}/* MkDIRECT_STREAM_CALL */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCOERCION (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCOERCION (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCOERCION _currn;
#ifdef __cplusplus
_currn = new _TPCOERCION;
#else
_currn = (_TPPCOERCION) TreeNodeAlloc (sizeof (struct _TPCOERCION));
#endif
_currn->_prod = RULECOERCION;
_currn->_desc1 = (_TSPExpression) MkExpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE COERCION: root of subtree no. 1 can not be made a Expression node ", 0, _coordref);
_currn->_desc2 = (_TSPType_specifier) MkType_specifier (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE COERCION: root of subtree no. 2 can not be made a Type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_COERCION;
return ( (NODEPTR) _currn);
}/* MkCOERCION */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTR_CONSTANT (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkSTR_CONSTANT (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPSTR_CONSTANT _currn;
#ifdef __cplusplus
_currn = new _TPSTR_CONSTANT;
#else
_currn = (_TPPSTR_CONSTANT) TreeNodeAlloc (sizeof (struct _TPSTR_CONSTANT));
#endif
_currn->_prod = RULESTR_CONSTANT;
_SETCOORD(_currn)
_TERMACT_STR_CONSTANT;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "stringconst", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkSTR_CONSTANT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTR_CONSTANTS (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkSTR_CONSTANTS (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPSTR_CONSTANTS _currn;
#ifdef __cplusplus
_currn = new _TPSTR_CONSTANTS;
#else
_currn = (_TPPSTR_CONSTANTS) TreeNodeAlloc (sizeof (struct _TPSTR_CONSTANTS));
#endif
_currn->_prod = RULESTR_CONSTANTS;
_currn->_desc1 = (_TSPStringconstant) MkStringconstant (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STR_CONSTANTS: root of subtree no. 1 can not be made a Stringconstant node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_STR_CONSTANTS;
return ( (NODEPTR) _currn);
}/* MkSTR_CONSTANTS */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTR_CONSTANTS_LST (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTR_CONSTANTS_LST (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTR_CONSTANTS_LST _currn;
#ifdef __cplusplus
_currn = new _TPSTR_CONSTANTS_LST;
#else
_currn = (_TPPSTR_CONSTANTS_LST) TreeNodeAlloc (sizeof (struct _TPSTR_CONSTANTS_LST));
#endif
_currn->_prod = RULESTR_CONSTANTS_LST;
_currn->_desc1 = (_TSPStringconstant) MkStringconstant (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STR_CONSTANTS_LST: root of subtree no. 1 can not be made a Stringconstant node ", 0, _coordref);
_currn->_desc2 = (_TSPStringconstants) MkStringconstants (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STR_CONSTANTS_LST: root of subtree no. 2 can not be made a Stringconstants node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STR_CONSTANTS_LST;
return ( (NODEPTR) _currn);
}/* MkSTR_CONSTANTS_LST */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_VOID (POSITION *_coordref)
#else
NODEPTR MkVALUE_VOID (_coordref)
	POSITION *_coordref;
#endif
{	_TPPVALUE_VOID _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_VOID;
#else
_currn = (_TPPVALUE_VOID) TreeNodeAlloc (sizeof (struct _TPVALUE_VOID));
#endif
_currn->_prod = RULEVALUE_VOID;
_SETCOORD(_currn)
_TERMACT_VALUE_VOID;
return ( (NODEPTR) _currn);
}/* MkVALUE_VOID */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_SED (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_SED (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_SED _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_SED;
#else
_currn = (_TPPVALUE_SED) TreeNodeAlloc (sizeof (struct _TPVALUE_SED));
#endif
_currn->_prod = RULEVALUE_SED;
_SETCOORD(_currn)
_TERMACT_VALUE_SED;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "sedecimal_number", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_SED */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_OCT (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_OCT (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_OCT _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_OCT;
#else
_currn = (_TPPVALUE_OCT) TreeNodeAlloc (sizeof (struct _TPVALUE_OCT));
#endif
_currn->_prod = RULEVALUE_OCT;
_SETCOORD(_currn)
_TERMACT_VALUE_OCT;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "octal_number", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_OCT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_STR (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkVALUE_STR (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPVALUE_STR _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_STR;
#else
_currn = (_TPPVALUE_STR) TreeNodeAlloc (sizeof (struct _TPVALUE_STR));
#endif
_currn->_prod = RULEVALUE_STR;
_currn->_desc1 = (_TSPStringconstants) MkStringconstants (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE VALUE_STR: root of subtree no. 1 can not be made a Stringconstants node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_VALUE_STR;
return ( (NODEPTR) _currn);
}/* MkVALUE_STR */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_CHAR (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_CHAR (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_CHAR _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_CHAR;
#else
_currn = (_TPPVALUE_CHAR) TreeNodeAlloc (sizeof (struct _TPVALUE_CHAR));
#endif
_currn->_prod = RULEVALUE_CHAR;
_SETCOORD(_currn)
_TERMACT_VALUE_CHAR;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "characterconst", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_CHAR */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_BOOL (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_BOOL (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_BOOL _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_BOOL;
#else
_currn = (_TPPVALUE_BOOL) TreeNodeAlloc (sizeof (struct _TPVALUE_BOOL));
#endif
_currn->_prod = RULEVALUE_BOOL;
_SETCOORD(_currn)
_TERMACT_VALUE_BOOL;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "boolean_value", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_BOOL */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_FLOAT (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_FLOAT (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_FLOAT _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_FLOAT;
#else
_currn = (_TPPVALUE_FLOAT) TreeNodeAlloc (sizeof (struct _TPVALUE_FLOAT));
#endif
_currn->_prod = RULEVALUE_FLOAT;
_SETCOORD(_currn)
_TERMACT_VALUE_FLOAT;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "floating_number", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_FLOAT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkVALUE_INT (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkVALUE_INT (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPVALUE_INT _currn;
#ifdef __cplusplus
_currn = new _TPVALUE_INT;
#else
_currn = (_TPPVALUE_INT) TreeNodeAlloc (sizeof (struct _TPVALUE_INT));
#endif
_currn->_prod = RULEVALUE_INT;
_SETCOORD(_currn)
_TERMACT_VALUE_INT;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "integer_number", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkVALUE_INT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBOUND_METHOD (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkBOUND_METHOD (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPBOUND_METHOD _currn;
#ifdef __cplusplus
_currn = new _TPBOUND_METHOD;
#else
_currn = (_TPPBOUND_METHOD) TreeNodeAlloc (sizeof (struct _TPBOUND_METHOD));
#endif
_currn->_prod = RULEBOUND_METHOD;
_currn->_desc1 = (_TSPDesignator) MkDesignator (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BOUND_METHOD: root of subtree no. 1 can not be made a Designator node ", 0, _coordref);
_currn->_desc2 = (_TSPArguments) MkArguments (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE BOUND_METHOD: root of subtree no. 2 can not be made a Arguments node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_BOUND_METHOD;
return ( (NODEPTR) _currn);
}/* MkBOUND_METHOD */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAMED_EXPRESSION (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkNAMED_EXPRESSION (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPNAMED_EXPRESSION _currn;
#ifdef __cplusplus
_currn = new _TPNAMED_EXPRESSION;
#else
_currn = (_TPPNAMED_EXPRESSION) TreeNodeAlloc (sizeof (struct _TPNAMED_EXPRESSION));
#endif
_currn->_prod = RULENAMED_EXPRESSION;
_currn->_desc1 = (_TSPName) MkName (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE NAMED_EXPRESSION: root of subtree no. 1 can not be made a Name node ", 0, _coordref);
_currn->_desc2 = (_TSPExpression) MkExpression (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE NAMED_EXPRESSION: root of subtree no. 2 can not be made a Expression node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_NAMED_EXPRESSION;
return ( (NODEPTR) _currn);
}/* MkNAMED_EXPRESSION */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _MkNamed_expressionNAMED_EXPRESSIONS (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _MkNamed_expressionNAMED_EXPRESSIONS (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_Named_expressionNAMED_EXPRESSIONS _new;
#ifdef __cplusplus
	_new = new _TPLST_Named_expressionNAMED_EXPRESSIONS;
#else
	_new = (_TPPLST_Named_expressionNAMED_EXPRESSIONS) TreeNodeAlloc (sizeof (struct _TPLST_Named_expressionNAMED_EXPRESSIONS));
#endif
	_new->_prod = RULELST_Named_expressionNAMED_EXPRESSIONS;
	_new->_desc1 = (_TSPNamed_expression)elem;
	_new->_desc2 = (_TSPLST_Named_expressions)_new;
	{_TPPLST_Named_expressionNAMED_EXPRESSIONS _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_Named_expressionNAMED_EXPRESSIONS;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemNAMED_EXPRESSIONS (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemNAMED_EXPRESSIONS (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBNamed_expression)) 
		return _MkNamed_expressionNAMED_EXPRESSIONS (_coordref, MkNamed_expression (_coordref, t));
	message (DEADLY, "a NAMED_EXPRESSIONS list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2NAMED_EXPRESSIONS (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2NAMED_EXPRESSIONS (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_Named_expressions)
	l =_ElemNAMED_EXPRESSIONS (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_Named_expressions)
	r = _ElemNAMED_EXPRESSIONS (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0NAMED_EXPRESSIONS)r)->_desc2);
((_TPPLST_0NAMED_EXPRESSIONS)r)->_desc2 = ((_TPPLST_0NAMED_EXPRESSIONS)l)->_desc2;
((_TPPLST_0NAMED_EXPRESSIONS)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAMED_EXPRESSIONS (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkNAMED_EXPRESSIONS (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPNAMED_EXPRESSIONS root;
	_TPPLST_0NAMED_EXPRESSIONS list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0NAMED_EXPRESSIONS)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_Named_expressions)
		t = _ElemNAMED_EXPRESSIONS (_coordref, t);
	remain = (_TPPLST_0NAMED_EXPRESSIONS)(((_TPPLST_0NAMED_EXPRESSIONS) t)->_desc2);
	((_TPPLST_0NAMED_EXPRESSIONS) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0NAMED_EXPRESSIONS;
#else
list = (_TPPLST_0NAMED_EXPRESSIONS) TreeNodeAlloc (sizeof (struct _TPLST_0NAMED_EXPRESSIONS));
#endif
list->_prod = RULELST_0NAMED_EXPRESSIONS;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0NAMED_EXPRESSIONS)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_Named_expressionNAMED_EXPRESSIONS)
	{_TPPLST_Named_expressionNAMED_EXPRESSIONS _currn = _currn;
	 _TERMACT_LST_Named_expressionNAMED_EXPRESSIONS;
	} this code has been moved to _ElemNAMED_EXPRESSIONS*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPNAMED_EXPRESSIONS;
#else
root = (_TPPNAMED_EXPRESSIONS) TreeNodeAlloc (sizeof (struct _TPNAMED_EXPRESSIONS));
#endif
root->_prod = RULENAMED_EXPRESSIONS;
root->_desc1 = (_TSPLST_Named_expressions)list;
{ _TPPNAMED_EXPRESSIONS _currn = root;
  _SETCOORD(_currn)
  _TERMACT_NAMED_EXPRESSIONS;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAGG_ID_DEF (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkAGG_ID_DEF (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPAGG_ID_DEF _currn;
#ifdef __cplusplus
_currn = new _TPAGG_ID_DEF;
#else
_currn = (_TPPAGG_ID_DEF) TreeNodeAlloc (sizeof (struct _TPAGG_ID_DEF));
#endif
_currn->_prod = RULEAGG_ID_DEF;
_SETCOORD(_currn)
_TERMACT_AGG_ID_DEF;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkAGG_ID_DEF */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAGGREGATE_NAMED (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkAGGREGATE_NAMED (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPAGGREGATE_NAMED _currn;
#ifdef __cplusplus
_currn = new _TPAGGREGATE_NAMED;
#else
_currn = (_TPPAGGREGATE_NAMED) TreeNodeAlloc (sizeof (struct _TPAGGREGATE_NAMED));
#endif
_currn->_prod = RULEAGGREGATE_NAMED;
_currn->_desc1 = (_TSPAgg_id_def) MkAgg_id_def (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE AGGREGATE_NAMED: root of subtree no. 1 can not be made a Agg_id_def node ", 0, _coordref);
_currn->_desc2 = (_TSPNamed_expressions) MkNamed_expressions (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE AGGREGATE_NAMED: root of subtree no. 2 can not be made a Named_expressions node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_AGGREGATE_NAMED;
return ( (NODEPTR) _currn);
}/* MkAGGREGATE_NAMED */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkAGGREGATE (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkAGGREGATE (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPAGGREGATE _currn;
#ifdef __cplusplus
_currn = new _TPAGGREGATE;
#else
_currn = (_TPPAGGREGATE) TreeNodeAlloc (sizeof (struct _TPAGGREGATE));
#endif
_currn->_prod = RULEAGGREGATE;
_currn->_desc1 = (_TSPNamed_expressions) MkNamed_expressions (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE AGGREGATE: root of subtree no. 1 can not be made a Named_expressions node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_AGGREGATE;
return ( (NODEPTR) _currn);
}/* MkAGGREGATE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_SAME_AGG (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_CONSTRUCTOR_SAME_AGG (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_CONSTRUCTOR_SAME_AGG _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_SAME_AGG;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_SAME_AGG) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_SAME_AGG));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_SAME_AGG;
_currn->_desc1 = (_TSPAggregate) MkAggregate (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_SAME_AGG: root of subtree no. 1 can not be made a Aggregate node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_SAME_AGG;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_SAME_AGG */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_SAME (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_CONSTRUCTOR_SAME (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_CONSTRUCTOR_SAME _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_SAME;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_SAME) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_SAME));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_SAME;
_currn->_desc1 = (_TSPArguments) MkArguments (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_SAME: root of subtree no. 1 can not be made a Arguments node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_SAME;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_SAME */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_DES (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPE_CONSTRUCTOR_DES (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPE_CONSTRUCTOR_DES _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_DES;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_DES) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_DES));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_DES;
_currn->_desc1 = (_TSPDesignator) MkDesignator (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_DES: root of subtree no. 1 can not be made a Designator node ", 0, _coordref);
_currn->_desc2 = (_TSPArguments) MkArguments (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_DES: root of subtree no. 2 can not be made a Arguments node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_DES;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_DES */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_AGG (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_CONSTRUCTOR_AGG (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_CONSTRUCTOR_AGG _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_AGG;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_AGG) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_AGG));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_AGG;
_currn->_desc1 = (_TSPAggregate) MkAggregate (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_AGG: root of subtree no. 1 can not be made a Aggregate node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_AGG;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_AGG */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_CLASS (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPE_CONSTRUCTOR_CLASS (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPE_CONSTRUCTOR_CLASS _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_CLASS;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_CLASS) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_CLASS));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_CLASS;
_currn->_desc1 = (_TSPClass_specifier) MkClass_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_CLASS: root of subtree no. 1 can not be made a Class_specifier node ", 0, _coordref);
_currn->_desc2 = (_TSPArguments) MkArguments (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_CLASS: root of subtree no. 2 can not be made a Arguments node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_CLASS;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_CLASS */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_CONSTRUCTOR_CL_AGG (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPE_CONSTRUCTOR_CL_AGG (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPE_CONSTRUCTOR_CL_AGG _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_CONSTRUCTOR_CL_AGG;
#else
_currn = (_TPPTYPE_CONSTRUCTOR_CL_AGG) TreeNodeAlloc (sizeof (struct _TPTYPE_CONSTRUCTOR_CL_AGG));
#endif
_currn->_prod = RULETYPE_CONSTRUCTOR_CL_AGG;
_currn->_desc1 = (_TSPClass_specifier) MkClass_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_CL_AGG: root of subtree no. 1 can not be made a Class_specifier node ", 0, _coordref);
_currn->_desc2 = (_TSPAggregate) MkAggregate (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_CONSTRUCTOR_CL_AGG: root of subtree no. 2 can not be made a Aggregate node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_CONSTRUCTOR_CL_AGG;
return ( (NODEPTR) _currn);
}/* MkTYPE_CONSTRUCTOR_CL_AGG */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkQUAL_FEATURE_ID_USE (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkQUAL_FEATURE_ID_USE (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPQUAL_FEATURE_ID_USE _currn;
#ifdef __cplusplus
_currn = new _TPQUAL_FEATURE_ID_USE;
#else
_currn = (_TPPQUAL_FEATURE_ID_USE) TreeNodeAlloc (sizeof (struct _TPQUAL_FEATURE_ID_USE));
#endif
_currn->_prod = RULEQUAL_FEATURE_ID_USE;
_SETCOORD(_currn)
_TERMACT_QUAL_FEATURE_ID_USE;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkQUAL_FEATURE_ID_USE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkQUALIFICATION_TYPE (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkQUALIFICATION_TYPE (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPQUALIFICATION_TYPE _currn;
#ifdef __cplusplus
_currn = new _TPQUALIFICATION_TYPE;
#else
_currn = (_TPPQUALIFICATION_TYPE) TreeNodeAlloc (sizeof (struct _TPQUALIFICATION_TYPE));
#endif
_currn->_prod = RULEQUALIFICATION_TYPE;
_currn->_desc1 = (_TSPType_specifier) MkType_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE QUALIFICATION_TYPE: root of subtree no. 1 can not be made a Type_specifier node ", 0, _coordref);
_currn->_desc2 = (_TSPQual_feature_id_use) MkQual_feature_id_use (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE QUALIFICATION_TYPE: root of subtree no. 2 can not be made a Qual_feature_id_use node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_QUALIFICATION_TYPE;
return ( (NODEPTR) _currn);
}/* MkQUALIFICATION_TYPE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkQUALIFICATION_EXP (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkQUALIFICATION_EXP (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPQUALIFICATION_EXP _currn;
#ifdef __cplusplus
_currn = new _TPQUALIFICATION_EXP;
#else
_currn = (_TPPQUALIFICATION_EXP) TreeNodeAlloc (sizeof (struct _TPQUALIFICATION_EXP));
#endif
_currn->_prod = RULEQUALIFICATION_EXP;
_currn->_desc1 = (_TSPExpression) MkExpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE QUALIFICATION_EXP: root of subtree no. 1 can not be made a Expression node ", 0, _coordref);
_currn->_desc2 = (_TSPQual_feature_id_use) MkQual_feature_id_use (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE QUALIFICATION_EXP: root of subtree no. 2 can not be made a Qual_feature_id_use node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_QUALIFICATION_EXP;
return ( (NODEPTR) _currn);
}/* MkQUALIFICATION_EXP */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkSTD_METHOD_CALL (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkSTD_METHOD_CALL (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPSTD_METHOD_CALL _currn;
#ifdef __cplusplus
_currn = new _TPSTD_METHOD_CALL;
#else
_currn = (_TPPSTD_METHOD_CALL) TreeNodeAlloc (sizeof (struct _TPSTD_METHOD_CALL));
#endif
_currn->_prod = RULESTD_METHOD_CALL;
_currn->_desc1 = (_TSPDesignator) MkDesignator (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE STD_METHOD_CALL: root of subtree no. 1 can not be made a Designator node ", 0, _coordref);
_currn->_desc2 = (_TSPArguments) MkArguments (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE STD_METHOD_CALL: root of subtree no. 2 can not be made a Arguments node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_STD_METHOD_CALL;
return ( (NODEPTR) _currn);
}/* MkSTD_METHOD_CALL */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkOBJ_ID_USE (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkOBJ_ID_USE (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPOBJ_ID_USE _currn;
#ifdef __cplusplus
_currn = new _TPOBJ_ID_USE;
#else
_currn = (_TPPOBJ_ID_USE) TreeNodeAlloc (sizeof (struct _TPOBJ_ID_USE));
#endif
_currn->_prod = RULEOBJ_ID_USE;
_SETCOORD(_currn)
_TERMACT_OBJ_ID_USE;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkOBJ_ID_USE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_NOT (POSITION *_coordref)
#else
NODEPTR MkNAME_NOT (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_NOT _currn;
#ifdef __cplusplus
_currn = new _TPNAME_NOT;
#else
_currn = (_TPPNAME_NOT) TreeNodeAlloc (sizeof (struct _TPNAME_NOT));
#endif
_currn->_prod = RULENAME_NOT;
_SETCOORD(_currn)
_TERMACT_NAME_NOT;
return ( (NODEPTR) _currn);
}/* MkNAME_NOT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_POW (POSITION *_coordref)
#else
NODEPTR MkNAME_POW (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_POW _currn;
#ifdef __cplusplus
_currn = new _TPNAME_POW;
#else
_currn = (_TPPNAME_POW) TreeNodeAlloc (sizeof (struct _TPNAME_POW));
#endif
_currn->_prod = RULENAME_POW;
_SETCOORD(_currn)
_TERMACT_NAME_POW;
return ( (NODEPTR) _currn);
}/* MkNAME_POW */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_MOD (POSITION *_coordref)
#else
NODEPTR MkNAME_MOD (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_MOD _currn;
#ifdef __cplusplus
_currn = new _TPNAME_MOD;
#else
_currn = (_TPPNAME_MOD) TreeNodeAlloc (sizeof (struct _TPNAME_MOD));
#endif
_currn->_prod = RULENAME_MOD;
_SETCOORD(_currn)
_TERMACT_NAME_MOD;
return ( (NODEPTR) _currn);
}/* MkNAME_MOD */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_DIV (POSITION *_coordref)
#else
NODEPTR MkNAME_DIV (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_DIV _currn;
#ifdef __cplusplus
_currn = new _TPNAME_DIV;
#else
_currn = (_TPPNAME_DIV) TreeNodeAlloc (sizeof (struct _TPNAME_DIV));
#endif
_currn->_prod = RULENAME_DIV;
_SETCOORD(_currn)
_TERMACT_NAME_DIV;
return ( (NODEPTR) _currn);
}/* MkNAME_DIV */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_QUOTIENT (POSITION *_coordref)
#else
NODEPTR MkNAME_QUOTIENT (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_QUOTIENT _currn;
#ifdef __cplusplus
_currn = new _TPNAME_QUOTIENT;
#else
_currn = (_TPPNAME_QUOTIENT) TreeNodeAlloc (sizeof (struct _TPNAME_QUOTIENT));
#endif
_currn->_prod = RULENAME_QUOTIENT;
_SETCOORD(_currn)
_TERMACT_NAME_QUOTIENT;
return ( (NODEPTR) _currn);
}/* MkNAME_QUOTIENT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_STAR (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkNAME_STAR (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPNAME_STAR _currn;
#ifdef __cplusplus
_currn = new _TPNAME_STAR;
#else
_currn = (_TPPNAME_STAR) TreeNodeAlloc (sizeof (struct _TPNAME_STAR));
#endif
_currn->_prod = RULENAME_STAR;
_SETCOORD(_currn)
_TERMACT_NAME_STAR;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "star", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkNAME_STAR */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_MINUS (POSITION *_coordref)
#else
NODEPTR MkNAME_MINUS (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_MINUS _currn;
#ifdef __cplusplus
_currn = new _TPNAME_MINUS;
#else
_currn = (_TPPNAME_MINUS) TreeNodeAlloc (sizeof (struct _TPNAME_MINUS));
#endif
_currn->_prod = RULENAME_MINUS;
_SETCOORD(_currn)
_TERMACT_NAME_MINUS;
return ( (NODEPTR) _currn);
}/* MkNAME_MINUS */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_PLUS (POSITION *_coordref)
#else
NODEPTR MkNAME_PLUS (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_PLUS _currn;
#ifdef __cplusplus
_currn = new _TPNAME_PLUS;
#else
_currn = (_TPPNAME_PLUS) TreeNodeAlloc (sizeof (struct _TPNAME_PLUS));
#endif
_currn->_prod = RULENAME_PLUS;
_SETCOORD(_currn)
_TERMACT_NAME_PLUS;
return ( (NODEPTR) _currn);
}/* MkNAME_PLUS */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_GT_EQ (POSITION *_coordref)
#else
NODEPTR MkNAME_GT_EQ (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_GT_EQ _currn;
#ifdef __cplusplus
_currn = new _TPNAME_GT_EQ;
#else
_currn = (_TPPNAME_GT_EQ) TreeNodeAlloc (sizeof (struct _TPNAME_GT_EQ));
#endif
_currn->_prod = RULENAME_GT_EQ;
_SETCOORD(_currn)
_TERMACT_NAME_GT_EQ;
return ( (NODEPTR) _currn);
}/* MkNAME_GT_EQ */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_GT (POSITION *_coordref)
#else
NODEPTR MkNAME_GT (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_GT _currn;
#ifdef __cplusplus
_currn = new _TPNAME_GT;
#else
_currn = (_TPPNAME_GT) TreeNodeAlloc (sizeof (struct _TPNAME_GT));
#endif
_currn->_prod = RULENAME_GT;
_SETCOORD(_currn)
_TERMACT_NAME_GT;
return ( (NODEPTR) _currn);
}/* MkNAME_GT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_LT_EQ (POSITION *_coordref)
#else
NODEPTR MkNAME_LT_EQ (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_LT_EQ _currn;
#ifdef __cplusplus
_currn = new _TPNAME_LT_EQ;
#else
_currn = (_TPPNAME_LT_EQ) TreeNodeAlloc (sizeof (struct _TPNAME_LT_EQ));
#endif
_currn->_prod = RULENAME_LT_EQ;
_SETCOORD(_currn)
_TERMACT_NAME_LT_EQ;
return ( (NODEPTR) _currn);
}/* MkNAME_LT_EQ */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_LT (POSITION *_coordref)
#else
NODEPTR MkNAME_LT (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_LT _currn;
#ifdef __cplusplus
_currn = new _TPNAME_LT;
#else
_currn = (_TPPNAME_LT) TreeNodeAlloc (sizeof (struct _TPNAME_LT));
#endif
_currn->_prod = RULENAME_LT;
_SETCOORD(_currn)
_TERMACT_NAME_LT;
return ( (NODEPTR) _currn);
}/* MkNAME_LT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_EQ (POSITION *_coordref)
#else
NODEPTR MkNAME_EQ (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_EQ _currn;
#ifdef __cplusplus
_currn = new _TPNAME_EQ;
#else
_currn = (_TPPNAME_EQ) TreeNodeAlloc (sizeof (struct _TPNAME_EQ));
#endif
_currn->_prod = RULENAME_EQ;
_SETCOORD(_currn)
_TERMACT_NAME_EQ;
return ( (NODEPTR) _currn);
}/* MkNAME_EQ */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_QUESTION (POSITION *_coordref)
#else
NODEPTR MkNAME_QUESTION (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_QUESTION _currn;
#ifdef __cplusplus
_currn = new _TPNAME_QUESTION;
#else
_currn = (_TPPNAME_QUESTION) TreeNodeAlloc (sizeof (struct _TPNAME_QUESTION));
#endif
_currn->_prod = RULENAME_QUESTION;
_SETCOORD(_currn)
_TERMACT_NAME_QUESTION;
return ( (NODEPTR) _currn);
}/* MkNAME_QUESTION */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_GRAVE (POSITION *_coordref)
#else
NODEPTR MkNAME_GRAVE (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_GRAVE _currn;
#ifdef __cplusplus
_currn = new _TPNAME_GRAVE;
#else
_currn = (_TPPNAME_GRAVE) TreeNodeAlloc (sizeof (struct _TPNAME_GRAVE));
#endif
_currn->_prod = RULENAME_GRAVE;
_SETCOORD(_currn)
_TERMACT_NAME_GRAVE;
return ( (NODEPTR) _currn);
}/* MkNAME_GRAVE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_TILDE (POSITION *_coordref)
#else
NODEPTR MkNAME_TILDE (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_TILDE _currn;
#ifdef __cplusplus
_currn = new _TPNAME_TILDE;
#else
_currn = (_TPPNAME_TILDE) TreeNodeAlloc (sizeof (struct _TPNAME_TILDE));
#endif
_currn->_prod = RULENAME_TILDE;
_SETCOORD(_currn)
_TERMACT_NAME_TILDE;
return ( (NODEPTR) _currn);
}/* MkNAME_TILDE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_STROKE (POSITION *_coordref)
#else
NODEPTR MkNAME_STROKE (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_STROKE _currn;
#ifdef __cplusplus
_currn = new _TPNAME_STROKE;
#else
_currn = (_TPPNAME_STROKE) TreeNodeAlloc (sizeof (struct _TPNAME_STROKE));
#endif
_currn->_prod = RULENAME_STROKE;
_SETCOORD(_currn)
_TERMACT_NAME_STROKE;
return ( (NODEPTR) _currn);
}/* MkNAME_STROKE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_BACKSLASH (POSITION *_coordref)
#else
NODEPTR MkNAME_BACKSLASH (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_BACKSLASH _currn;
#ifdef __cplusplus
_currn = new _TPNAME_BACKSLASH;
#else
_currn = (_TPPNAME_BACKSLASH) TreeNodeAlloc (sizeof (struct _TPNAME_BACKSLASH));
#endif
_currn->_prod = RULENAME_BACKSLASH;
_SETCOORD(_currn)
_TERMACT_NAME_BACKSLASH;
return ( (NODEPTR) _currn);
}/* MkNAME_BACKSLASH */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_STR_IN (POSITION *_coordref)
#else
NODEPTR MkNAME_STR_IN (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_STR_IN _currn;
#ifdef __cplusplus
_currn = new _TPNAME_STR_IN;
#else
_currn = (_TPPNAME_STR_IN) TreeNodeAlloc (sizeof (struct _TPNAME_STR_IN));
#endif
_currn->_prod = RULENAME_STR_IN;
_SETCOORD(_currn)
_TERMACT_NAME_STR_IN;
return ( (NODEPTR) _currn);
}/* MkNAME_STR_IN */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_STR_OUT (POSITION *_coordref)
#else
NODEPTR MkNAME_STR_OUT (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_STR_OUT _currn;
#ifdef __cplusplus
_currn = new _TPNAME_STR_OUT;
#else
_currn = (_TPPNAME_STR_OUT) TreeNodeAlloc (sizeof (struct _TPNAME_STR_OUT));
#endif
_currn->_prod = RULENAME_STR_OUT;
_SETCOORD(_currn)
_TERMACT_NAME_STR_OUT;
return ( (NODEPTR) _currn);
}/* MkNAME_STR_OUT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_EMPTY (POSITION *_coordref)
#else
NODEPTR MkNAME_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPNAME_EMPTY;
#else
_currn = (_TPPNAME_EMPTY) TreeNodeAlloc (sizeof (struct _TPNAME_EMPTY));
#endif
_currn->_prod = RULENAME_EMPTY;
_SETCOORD(_currn)
_TERMACT_NAME_EMPTY;
return ( (NODEPTR) _currn);
}/* MkNAME_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_OBJ (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkNAME_OBJ (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPNAME_OBJ _currn;
#ifdef __cplusplus
_currn = new _TPNAME_OBJ;
#else
_currn = (_TPPNAME_OBJ) TreeNodeAlloc (sizeof (struct _TPNAME_OBJ));
#endif
_currn->_prod = RULENAME_OBJ;
_currn->_desc1 = (_TSPObj_id_use) MkObj_id_use (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE NAME_OBJ: root of subtree no. 1 can not be made a Obj_id_use node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_NAME_OBJ;
return ( (NODEPTR) _currn);
}/* MkNAME_OBJ */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkNAME_LEFT_SQ_BRACKET (POSITION *_coordref)
#else
NODEPTR MkNAME_LEFT_SQ_BRACKET (_coordref)
	POSITION *_coordref;
#endif
{	_TPPNAME_LEFT_SQ_BRACKET _currn;
#ifdef __cplusplus
_currn = new _TPNAME_LEFT_SQ_BRACKET;
#else
_currn = (_TPPNAME_LEFT_SQ_BRACKET) TreeNodeAlloc (sizeof (struct _TPNAME_LEFT_SQ_BRACKET));
#endif
_currn->_prod = RULENAME_LEFT_SQ_BRACKET;
_SETCOORD(_currn)
_TERMACT_NAME_LEFT_SQ_BRACKET;
return ( (NODEPTR) _currn);
}/* MkNAME_LEFT_SQ_BRACKET */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_AND (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkEXPRESSION_AND (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPEXPRESSION_AND _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_AND;
#else
_currn = (_TPPEXPRESSION_AND) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_AND));
#endif
_currn->_prod = RULEEXPRESSION_AND;
_currn->_desc1 = (_TSPExpression) MkExpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_AND: root of subtree no. 1 can not be made a Expression node ", 0, _coordref);
_currn->_desc2 = (_TSPExpression) MkExpression (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_AND: root of subtree no. 2 can not be made a Expression node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_EXPRESSION_AND;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_AND */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_OR (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkEXPRESSION_OR (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPEXPRESSION_OR _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_OR;
#else
_currn = (_TPPEXPRESSION_OR) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_OR));
#endif
_currn->_prod = RULEEXPRESSION_OR;
_currn->_desc1 = (_TSPExpression) MkExpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_OR: root of subtree no. 1 can not be made a Expression node ", 0, _coordref);
_currn->_desc2 = (_TSPExpression) MkExpression (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_OR: root of subtree no. 2 can not be made a Expression node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_EXPRESSION_OR;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_OR */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_STREAM (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_STREAM (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_STREAM _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_STREAM;
#else
_currn = (_TPPEXPRESSION_STREAM) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_STREAM));
#endif
_currn->_prod = RULEEXPRESSION_STREAM;
_currn->_desc1 = (_TSPDirect_stream_call) MkDirect_stream_call (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_STREAM: root of subtree no. 1 can not be made a Direct_stream_call node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_STREAM;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_STREAM */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_METH (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_METH (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_METH _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_METH;
#else
_currn = (_TPPEXPRESSION_METH) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_METH));
#endif
_currn->_prod = RULEEXPRESSION_METH;
_currn->_desc1 = (_TSPStd_method_call) MkStd_method_call (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_METH: root of subtree no. 1 can not be made a Std_method_call node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_METH;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_METH */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_COERCION (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_COERCION (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_COERCION _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_COERCION;
#else
_currn = (_TPPEXPRESSION_COERCION) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_COERCION));
#endif
_currn->_prod = RULEEXPRESSION_COERCION;
_currn->_desc1 = (_TSPCoercion) MkCoercion (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_COERCION: root of subtree no. 1 can not be made a Coercion node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_COERCION;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_COERCION */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_VALUE (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_VALUE (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_VALUE _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_VALUE;
#else
_currn = (_TPPEXPRESSION_VALUE) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_VALUE));
#endif
_currn->_prod = RULEEXPRESSION_VALUE;
_currn->_desc1 = (_TSPValue) MkValue (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_VALUE: root of subtree no. 1 can not be made a Value node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_VALUE;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_VALUE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_BOUND (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_BOUND (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_BOUND _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_BOUND;
#else
_currn = (_TPPEXPRESSION_BOUND) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_BOUND));
#endif
_currn->_prod = RULEEXPRESSION_BOUND;
_currn->_desc1 = (_TSPBound_method) MkBound_method (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_BOUND: root of subtree no. 1 can not be made a Bound_method node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_BOUND;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_BOUND */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_CONS (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkEXPRESSION_CONS (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPEXPRESSION_CONS _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_CONS;
#else
_currn = (_TPPEXPRESSION_CONS) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_CONS));
#endif
_currn->_prod = RULEEXPRESSION_CONS;
_currn->_desc1 = (_TSPType_constructor) MkType_constructor (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE EXPRESSION_CONS: root of subtree no. 1 can not be made a Type_constructor node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_EXPRESSION_CONS;
return ( (NODEPTR) _currn);
}/* MkEXPRESSION_CONS */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkEXPRESSION_STAR (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkEXPRESSION_STAR (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPEXPRESSION_STAR _currn;
#ifdef __cplusplus
_currn = new _TPEXPRESSION_STAR;
#else
_currn = (_TPPEXPRESSION_STAR) TreeNodeAlloc (sizeof (struct _TPEXPRESSION_STAR));
#endif
_currn->_prod = RULEEXPRESSION_STAR;
_SETCOORD(_currn)
_TERMACT_EXPRESSION_STAR;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "star", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkEXPRESSION_STAR */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDESIGNATOR_QUAL (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkDESIGNATOR_QUAL (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPDESIGNATOR_QUAL _currn;
#ifdef __cplusplus
_currn = new _TPDESIGNATOR_QUAL;
#else
_currn = (_TPPDESIGNATOR_QUAL) TreeNodeAlloc (sizeof (struct _TPDESIGNATOR_QUAL));
#endif
_currn->_prod = RULEDESIGNATOR_QUAL;
_currn->_desc1 = (_TSPQualification) MkQualification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE DESIGNATOR_QUAL: root of subtree no. 1 can not be made a Qualification node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_DESIGNATOR_QUAL;
return ( (NODEPTR) _currn);
}/* MkDESIGNATOR_QUAL */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDESIGNATOR_METH (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkDESIGNATOR_METH (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPDESIGNATOR_METH _currn;
#ifdef __cplusplus
_currn = new _TPDESIGNATOR_METH;
#else
_currn = (_TPPDESIGNATOR_METH) TreeNodeAlloc (sizeof (struct _TPDESIGNATOR_METH));
#endif
_currn->_prod = RULEDESIGNATOR_METH;
_currn->_desc1 = (_TSPStd_method_call) MkStd_method_call (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE DESIGNATOR_METH: root of subtree no. 1 can not be made a Std_method_call node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_DESIGNATOR_METH;
return ( (NODEPTR) _currn);
}/* MkDESIGNATOR_METH */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDESIGNATOR_EXP (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkDESIGNATOR_EXP (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPDESIGNATOR_EXP _currn;
#ifdef __cplusplus
_currn = new _TPDESIGNATOR_EXP;
#else
_currn = (_TPPDESIGNATOR_EXP) TreeNodeAlloc (sizeof (struct _TPDESIGNATOR_EXP));
#endif
_currn->_prod = RULEDESIGNATOR_EXP;
_currn->_desc1 = (_TSPExpression) MkExpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE DESIGNATOR_EXP: root of subtree no. 1 can not be made a Expression node ", 0, _coordref);
_currn->_desc2 = (_TSPName) MkName (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE DESIGNATOR_EXP: root of subtree no. 2 can not be made a Name node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_DESIGNATOR_EXP;
return ( (NODEPTR) _currn);
}/* MkDESIGNATOR_EXP */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkDESIGNATOR_NAME (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkDESIGNATOR_NAME (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPDESIGNATOR_NAME _currn;
#ifdef __cplusplus
_currn = new _TPDESIGNATOR_NAME;
#else
_currn = (_TPPDESIGNATOR_NAME) TreeNodeAlloc (sizeof (struct _TPDESIGNATOR_NAME));
#endif
_currn->_prod = RULEDESIGNATOR_NAME;
_currn->_desc1 = (_TSPName) MkName (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE DESIGNATOR_NAME: root of subtree no. 1 can not be made a Name node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_DESIGNATOR_NAME;
return ( (NODEPTR) _currn);
}/* MkDESIGNATOR_NAME */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENT_EMPTY (POSITION *_coordref)
#else
NODEPTR MkARGUMENT_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPARGUMENT_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENT_EMPTY;
#else
_currn = (_TPPARGUMENT_EMPTY) TreeNodeAlloc (sizeof (struct _TPARGUMENT_EMPTY));
#endif
_currn->_prod = RULEARGUMENT_EMPTY;
_SETCOORD(_currn)
_TERMACT_ARGUMENT_EMPTY;
return ( (NODEPTR) _currn);
}/* MkARGUMENT_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENT_INOUT (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkARGUMENT_INOUT (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPARGUMENT_INOUT _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENT_INOUT;
#else
_currn = (_TPPARGUMENT_INOUT) TreeNodeAlloc (sizeof (struct _TPARGUMENT_INOUT));
#endif
_currn->_prod = RULEARGUMENT_INOUT;
_currn->_desc1 = (_TSPDesignator) MkDesignator (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ARGUMENT_INOUT: root of subtree no. 1 can not be made a Designator node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ARGUMENT_INOUT;
return ( (NODEPTR) _currn);
}/* MkARGUMENT_INOUT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENT_OUT (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkARGUMENT_OUT (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPARGUMENT_OUT _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENT_OUT;
#else
_currn = (_TPPARGUMENT_OUT) TreeNodeAlloc (sizeof (struct _TPARGUMENT_OUT));
#endif
_currn->_prod = RULEARGUMENT_OUT;
_currn->_desc1 = (_TSPDesignator) MkDesignator (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ARGUMENT_OUT: root of subtree no. 1 can not be made a Designator node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ARGUMENT_OUT;
return ( (NODEPTR) _currn);
}/* MkARGUMENT_OUT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENT_EXP (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkARGUMENT_EXP (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPARGUMENT_EXP _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENT_EXP;
#else
_currn = (_TPPARGUMENT_EXP) TreeNodeAlloc (sizeof (struct _TPARGUMENT_EXP));
#endif
_currn->_prod = RULEARGUMENT_EXP;
_currn->_desc1 = (_TSPExpression) MkExpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ARGUMENT_EXP: root of subtree no. 1 can not be made a Expression node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_ARGUMENT_EXP;
return ( (NODEPTR) _currn);
}/* MkARGUMENT_EXP */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENTS_LST (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkARGUMENTS_LST (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPARGUMENTS_LST _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENTS_LST;
#else
_currn = (_TPPARGUMENTS_LST) TreeNodeAlloc (sizeof (struct _TPARGUMENTS_LST));
#endif
_currn->_prod = RULEARGUMENTS_LST;
_currn->_desc1 = (_TSPArguments) MkArguments (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE ARGUMENTS_LST: root of subtree no. 1 can not be made a Arguments node ", 0, _coordref);
_currn->_desc2 = (_TSPArgument) MkArgument (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE ARGUMENTS_LST: root of subtree no. 2 can not be made a Argument node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_ARGUMENTS_LST;
return ( (NODEPTR) _currn);
}/* MkARGUMENTS_LST */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkARGUMENTS_EMPTY (POSITION *_coordref)
#else
NODEPTR MkARGUMENTS_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPARGUMENTS_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPARGUMENTS_EMPTY;
#else
_currn = (_TPPARGUMENTS_EMPTY) TreeNodeAlloc (sizeof (struct _TPARGUMENTS_EMPTY));
#endif
_currn->_prod = RULEARGUMENTS_EMPTY;
_SETCOORD(_currn)
_TERMACT_ARGUMENTS_EMPTY;
return ( (NODEPTR) _currn);
}/* MkARGUMENTS_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBOUND_EXP (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkBOUND_EXP (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPBOUND_EXP _currn;
#ifdef __cplusplus
_currn = new _TPBOUND_EXP;
#else
_currn = (_TPPBOUND_EXP) TreeNodeAlloc (sizeof (struct _TPBOUND_EXP));
#endif
_currn->_prod = RULEBOUND_EXP;
_currn->_desc1 = (_TSPExpression) MkExpression (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BOUND_EXP: root of subtree no. 1 can not be made a Expression node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_BOUND_EXP;
return ( (NODEPTR) _currn);
}/* MkBOUND_EXP */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _MkBoundBOUNDS (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _MkBoundBOUNDS (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_BoundBOUNDS _new;
#ifdef __cplusplus
	_new = new _TPLST_BoundBOUNDS;
#else
	_new = (_TPPLST_BoundBOUNDS) TreeNodeAlloc (sizeof (struct _TPLST_BoundBOUNDS));
#endif
	_new->_prod = RULELST_BoundBOUNDS;
	_new->_desc1 = (_TSPBound)elem;
	_new->_desc2 = (_TSPLST_Bounds)_new;
	{_TPPLST_BoundBOUNDS _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_BoundBOUNDS;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemBOUNDS (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemBOUNDS (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBBound_method)) 
		return _MkBoundBOUNDS (_coordref, MkBound (_coordref, t));
	if (IsSymb (t, SYMBCoercion)) 
		return _MkBoundBOUNDS (_coordref, MkBound (_coordref, t));
	if (IsSymb (t, SYMBStd_method_call)) 
		return _MkBoundBOUNDS (_coordref, MkBound (_coordref, t));
	if (IsSymb (t, SYMBDirect_stream_call)) 
		return _MkBoundBOUNDS (_coordref, MkBound (_coordref, t));
	if (IsSymb (t, SYMBType_constructor)) 
		return _MkBoundBOUNDS (_coordref, MkBound (_coordref, t));
	if (IsSymb (t, SYMBNamed_expressions)) 
		return _MkBoundBOUNDS (_coordref, MkBound (_coordref, t));
	if (IsSymb (t, SYMBAggregate)) 
		return _MkBoundBOUNDS (_coordref, MkBound (_coordref, t));
	if (IsSymb (t, SYMBStringconstant)) 
		return _MkBoundBOUNDS (_coordref, MkBound (_coordref, t));
	if (IsSymb (t, SYMBStringconstants)) 
		return _MkBoundBOUNDS (_coordref, MkBound (_coordref, t));
	if (IsSymb (t, SYMBValue)) 
		return _MkBoundBOUNDS (_coordref, MkBound (_coordref, t));
	if (IsSymb (t, SYMBExpression)) 
		return _MkBoundBOUNDS (_coordref, MkBound (_coordref, t));
	if (IsSymb (t, SYMBBound)) 
		return _MkBoundBOUNDS (_coordref, MkBound (_coordref, t));
	message (DEADLY, "a BOUNDS list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2BOUNDS (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2BOUNDS (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_Bounds)
	l =_ElemBOUNDS (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_Bounds)
	r = _ElemBOUNDS (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0BOUNDS)r)->_desc2);
((_TPPLST_0BOUNDS)r)->_desc2 = ((_TPPLST_0BOUNDS)l)->_desc2;
((_TPPLST_0BOUNDS)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBOUNDS (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkBOUNDS (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPBOUNDS root;
	_TPPLST_0BOUNDS list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0BOUNDS)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_Bounds)
		t = _ElemBOUNDS (_coordref, t);
	remain = (_TPPLST_0BOUNDS)(((_TPPLST_0BOUNDS) t)->_desc2);
	((_TPPLST_0BOUNDS) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0BOUNDS;
#else
list = (_TPPLST_0BOUNDS) TreeNodeAlloc (sizeof (struct _TPLST_0BOUNDS));
#endif
list->_prod = RULELST_0BOUNDS;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0BOUNDS)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_BoundBOUNDS)
	{_TPPLST_BoundBOUNDS _currn = _currn;
	 _TERMACT_LST_BoundBOUNDS;
	} this code has been moved to _ElemBOUNDS*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPBOUNDS;
#else
root = (_TPPBOUNDS) TreeNodeAlloc (sizeof (struct _TPBOUNDS));
#endif
root->_prod = RULEBOUNDS;
root->_desc1 = (_TSPLST_Bounds)list;
{ _TPPBOUNDS _currn = root;
  _SETCOORD(_currn)
  _TERMACT_BOUNDS;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ID_USE (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkCLASS_ID_USE (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPCLASS_ID_USE _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ID_USE;
#else
_currn = (_TPPCLASS_ID_USE) TreeNodeAlloc (sizeof (struct _TPCLASS_ID_USE));
#endif
_currn->_prod = RULECLASS_ID_USE;
_SETCOORD(_currn)
_TERMACT_CLASS_ID_USE;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkCLASS_ID_USE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_KIND_INOUT (POSITION *_coordref)
#else
NODEPTR MkPARAMETER_KIND_INOUT (_coordref)
	POSITION *_coordref;
#endif
{	_TPPPARAMETER_KIND_INOUT _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_KIND_INOUT;
#else
_currn = (_TPPPARAMETER_KIND_INOUT) TreeNodeAlloc (sizeof (struct _TPPARAMETER_KIND_INOUT));
#endif
_currn->_prod = RULEPARAMETER_KIND_INOUT;
_SETCOORD(_currn)
_TERMACT_PARAMETER_KIND_INOUT;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_KIND_INOUT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_KIND_OUT (POSITION *_coordref)
#else
NODEPTR MkPARAMETER_KIND_OUT (_coordref)
	POSITION *_coordref;
#endif
{	_TPPPARAMETER_KIND_OUT _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_KIND_OUT;
#else
_currn = (_TPPPARAMETER_KIND_OUT) TreeNodeAlloc (sizeof (struct _TPPARAMETER_KIND_OUT));
#endif
_currn->_prod = RULEPARAMETER_KIND_OUT;
_SETCOORD(_currn)
_TERMACT_PARAMETER_KIND_OUT;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_KIND_OUT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_KIND_ONCE (POSITION *_coordref)
#else
NODEPTR MkPARAMETER_KIND_ONCE (_coordref)
	POSITION *_coordref;
#endif
{	_TPPPARAMETER_KIND_ONCE _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_KIND_ONCE;
#else
_currn = (_TPPPARAMETER_KIND_ONCE) TreeNodeAlloc (sizeof (struct _TPPARAMETER_KIND_ONCE));
#endif
_currn->_prod = RULEPARAMETER_KIND_ONCE;
_SETCOORD(_currn)
_TERMACT_PARAMETER_KIND_ONCE;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_KIND_ONCE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_KIND_IN (POSITION *_coordref)
#else
NODEPTR MkPARAMETER_KIND_IN (_coordref)
	POSITION *_coordref;
#endif
{	_TPPPARAMETER_KIND_IN _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_KIND_IN;
#else
_currn = (_TPPPARAMETER_KIND_IN) TreeNodeAlloc (sizeof (struct _TPPARAMETER_KIND_IN));
#endif
_currn->_prod = RULEPARAMETER_KIND_IN;
_SETCOORD(_currn)
_TERMACT_PARAMETER_KIND_IN;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_KIND_IN */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_TYPE (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkPARAMETER_TYPE (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPPARAMETER_TYPE _currn;
#ifdef __cplusplus
_currn = new _TPPARAMETER_TYPE;
#else
_currn = (_TPPPARAMETER_TYPE) TreeNodeAlloc (sizeof (struct _TPPARAMETER_TYPE));
#endif
_currn->_prod = RULEPARAMETER_TYPE;
_currn->_desc1 = (_TSPParameter_kind) MkParameter_kind (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE PARAMETER_TYPE: root of subtree no. 1 can not be made a Parameter_kind node ", 0, _coordref);
_currn->_desc2 = (_TSPType_specifier) MkType_specifier (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE PARAMETER_TYPE: root of subtree no. 2 can not be made a Type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_PARAMETER_TYPE;
return ( (NODEPTR) _currn);
}/* MkPARAMETER_TYPE */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _MkParameter_typePARAMETER_TYPES (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _MkParameter_typePARAMETER_TYPES (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_Parameter_typePARAMETER_TYPES _new;
#ifdef __cplusplus
	_new = new _TPLST_Parameter_typePARAMETER_TYPES;
#else
	_new = (_TPPLST_Parameter_typePARAMETER_TYPES) TreeNodeAlloc (sizeof (struct _TPLST_Parameter_typePARAMETER_TYPES));
#endif
	_new->_prod = RULELST_Parameter_typePARAMETER_TYPES;
	_new->_desc1 = (_TSPParameter_type)elem;
	_new->_desc2 = (_TSPLST_Parameter_types)_new;
	{_TPPLST_Parameter_typePARAMETER_TYPES _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_Parameter_typePARAMETER_TYPES;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemPARAMETER_TYPES (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemPARAMETER_TYPES (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBParameter_type)) 
		return _MkParameter_typePARAMETER_TYPES (_coordref, MkParameter_type (_coordref, t));
	message (DEADLY, "a PARAMETER_TYPES list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2PARAMETER_TYPES (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2PARAMETER_TYPES (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_Parameter_types)
	l =_ElemPARAMETER_TYPES (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_Parameter_types)
	r = _ElemPARAMETER_TYPES (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0PARAMETER_TYPES)r)->_desc2);
((_TPPLST_0PARAMETER_TYPES)r)->_desc2 = ((_TPPLST_0PARAMETER_TYPES)l)->_desc2;
((_TPPLST_0PARAMETER_TYPES)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkPARAMETER_TYPES (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkPARAMETER_TYPES (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPPARAMETER_TYPES root;
	_TPPLST_0PARAMETER_TYPES list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0PARAMETER_TYPES)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_Parameter_types)
		t = _ElemPARAMETER_TYPES (_coordref, t);
	remain = (_TPPLST_0PARAMETER_TYPES)(((_TPPLST_0PARAMETER_TYPES) t)->_desc2);
	((_TPPLST_0PARAMETER_TYPES) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0PARAMETER_TYPES;
#else
list = (_TPPLST_0PARAMETER_TYPES) TreeNodeAlloc (sizeof (struct _TPLST_0PARAMETER_TYPES));
#endif
list->_prod = RULELST_0PARAMETER_TYPES;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0PARAMETER_TYPES)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_Parameter_typePARAMETER_TYPES)
	{_TPPLST_Parameter_typePARAMETER_TYPES _currn = _currn;
	 _TERMACT_LST_Parameter_typePARAMETER_TYPES;
	} this code has been moved to _ElemPARAMETER_TYPES*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPPARAMETER_TYPES;
#else
root = (_TPPPARAMETER_TYPES) TreeNodeAlloc (sizeof (struct _TPPARAMETER_TYPES));
#endif
root->_prod = RULEPARAMETER_TYPES;
root->_desc1 = (_TSPLST_Parameter_types)list;
{ _TPPPARAMETER_TYPES _currn = root;
  _SETCOORD(_currn)
  _TERMACT_PARAMETER_TYPES;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkMETHOD_SPECIFICATION (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkMETHOD_SPECIFICATION (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPMETHOD_SPECIFICATION _currn;
#ifdef __cplusplus
_currn = new _TPMETHOD_SPECIFICATION;
#else
_currn = (_TPPMETHOD_SPECIFICATION) TreeNodeAlloc (sizeof (struct _TPMETHOD_SPECIFICATION));
#endif
_currn->_prod = RULEMETHOD_SPECIFICATION;
_currn->_desc1 = (_TSPParameter_types) MkParameter_types (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_SPECIFICATION: root of subtree no. 1 can not be made a Parameter_types node ", 0, _coordref);
_currn->_desc2 = (_TSPType_specifier) MkType_specifier (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE METHOD_SPECIFICATION: root of subtree no. 2 can not be made a Type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_METHOD_SPECIFICATION;
return ( (NODEPTR) _currn);
}/* MkMETHOD_SPECIFICATION */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ARGUMENT (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkCLASS_ARGUMENT (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPCLASS_ARGUMENT _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ARGUMENT;
#else
_currn = (_TPPCLASS_ARGUMENT) TreeNodeAlloc (sizeof (struct _TPCLASS_ARGUMENT));
#endif
_currn->_prod = RULECLASS_ARGUMENT;
_currn->_desc1 = (_TSPClass_specifier) MkClass_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_ARGUMENT: root of subtree no. 1 can not be made a Class_specifier node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_CLASS_ARGUMENT;
return ( (NODEPTR) _currn);
}/* MkCLASS_ARGUMENT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ARGUMENTS_LST (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCLASS_ARGUMENTS_LST (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCLASS_ARGUMENTS_LST _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ARGUMENTS_LST;
#else
_currn = (_TPPCLASS_ARGUMENTS_LST) TreeNodeAlloc (sizeof (struct _TPCLASS_ARGUMENTS_LST));
#endif
_currn->_prod = RULECLASS_ARGUMENTS_LST;
_currn->_desc1 = (_TSPClass_arguments) MkClass_arguments (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_ARGUMENTS_LST: root of subtree no. 1 can not be made a Class_arguments node ", 0, _coordref);
_currn->_desc2 = (_TSPClass_argument) MkClass_argument (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_ARGUMENTS_LST: root of subtree no. 2 can not be made a Class_argument node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_ARGUMENTS_LST;
return ( (NODEPTR) _currn);
}/* MkCLASS_ARGUMENTS_LST */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ARGUMENTS_EMPTY (POSITION *_coordref)
#else
NODEPTR MkCLASS_ARGUMENTS_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ARGUMENTS_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ARGUMENTS_EMPTY;
#else
_currn = (_TPPCLASS_ARGUMENTS_EMPTY) TreeNodeAlloc (sizeof (struct _TPCLASS_ARGUMENTS_EMPTY));
#endif
_currn->_prod = RULECLASS_ARGUMENTS_EMPTY;
_SETCOORD(_currn)
_TERMACT_CLASS_ARGUMENTS_EMPTY;
return ( (NODEPTR) _currn);
}/* MkCLASS_ARGUMENTS_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_SPECIFIER (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkCLASS_SPECIFIER (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPCLASS_SPECIFIER _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_SPECIFIER;
#else
_currn = (_TPPCLASS_SPECIFIER) TreeNodeAlloc (sizeof (struct _TPCLASS_SPECIFIER));
#endif
_currn->_prod = RULECLASS_SPECIFIER;
_currn->_desc1 = (_TSPClass_id_use) MkClass_id_use (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_SPECIFIER: root of subtree no. 1 can not be made a Class_id_use node ", 0, _coordref);
_currn->_desc2 = (_TSPBounds) MkBounds (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_SPECIFIER: root of subtree no. 2 can not be made a Bounds node ", 0, _coordref);
_currn->_desc3 = (_TSPClass_arguments) MkClass_arguments (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_SPECIFIER: root of subtree no. 3 can not be made a Class_arguments node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_SPECIFIER;
return ( (NODEPTR) _currn);
}/* MkCLASS_SPECIFIER */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_STREAM (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_SPECIFIER_STREAM (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_SPECIFIER_STREAM _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_STREAM;
#else
_currn = (_TPPTYPE_SPECIFIER_STREAM) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_STREAM));
#endif
_currn->_prod = RULETYPE_SPECIFIER_STREAM;
_currn->_desc1 = (_TSPMethod_specification) MkMethod_specification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIER_STREAM: root of subtree no. 1 can not be made a Method_specification node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_STREAM;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_STREAM */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_SAME (POSITION *_coordref)
#else
NODEPTR MkTYPE_SPECIFIER_SAME (_coordref)
	POSITION *_coordref;
#endif
{	_TPPTYPE_SPECIFIER_SAME _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_SAME;
#else
_currn = (_TPPTYPE_SPECIFIER_SAME) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_SAME));
#endif
_currn->_prod = RULETYPE_SPECIFIER_SAME;
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_SAME;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_SAME */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_SAME_POLY (POSITION *_coordref)
#else
NODEPTR MkTYPE_SPECIFIER_SAME_POLY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPTYPE_SPECIFIER_SAME_POLY _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_SAME_POLY;
#else
_currn = (_TPPTYPE_SPECIFIER_SAME_POLY) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_SAME_POLY));
#endif
_currn->_prod = RULETYPE_SPECIFIER_SAME_POLY;
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_SAME_POLY;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_SAME_POLY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_PROC (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_SPECIFIER_PROC (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_SPECIFIER_PROC _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_PROC;
#else
_currn = (_TPPTYPE_SPECIFIER_PROC) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_PROC));
#endif
_currn->_prod = RULETYPE_SPECIFIER_PROC;
_currn->_desc1 = (_TSPMethod_specification) MkMethod_specification (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIER_PROC: root of subtree no. 1 can not be made a Method_specification node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_PROC;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_PROC */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_EMPTY (POSITION *_coordref)
#else
NODEPTR MkTYPE_SPECIFIER_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPTYPE_SPECIFIER_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_EMPTY;
#else
_currn = (_TPPTYPE_SPECIFIER_EMPTY) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_EMPTY));
#endif
_currn->_prod = RULETYPE_SPECIFIER_EMPTY;
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_EMPTY;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_CL (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_SPECIFIER_CL (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_SPECIFIER_CL _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_CL;
#else
_currn = (_TPPTYPE_SPECIFIER_CL) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_CL));
#endif
_currn->_prod = RULETYPE_SPECIFIER_CL;
_currn->_desc1 = (_TSPClass_specifier) MkClass_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIER_CL: root of subtree no. 1 can not be made a Class_specifier node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_CL;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_CL */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIER_CL_POLY (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkTYPE_SPECIFIER_CL_POLY (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPTYPE_SPECIFIER_CL_POLY _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIER_CL_POLY;
#else
_currn = (_TPPTYPE_SPECIFIER_CL_POLY) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIER_CL_POLY));
#endif
_currn->_prod = RULETYPE_SPECIFIER_CL_POLY;
_currn->_desc1 = (_TSPClass_specifier) MkClass_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIER_CL_POLY: root of subtree no. 1 can not be made a Class_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIER_CL_POLY;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIER_CL_POLY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIERS_EMPTY (POSITION *_coordref)
#else
NODEPTR MkTYPE_SPECIFIERS_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPTYPE_SPECIFIERS_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIERS_EMPTY;
#else
_currn = (_TPPTYPE_SPECIFIERS_EMPTY) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIERS_EMPTY));
#endif
_currn->_prod = RULETYPE_SPECIFIERS_EMPTY;
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIERS_EMPTY;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIERS_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkTYPE_SPECIFIERS_LST (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkTYPE_SPECIFIERS_LST (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPTYPE_SPECIFIERS_LST _currn;
#ifdef __cplusplus
_currn = new _TPTYPE_SPECIFIERS_LST;
#else
_currn = (_TPPTYPE_SPECIFIERS_LST) TreeNodeAlloc (sizeof (struct _TPTYPE_SPECIFIERS_LST));
#endif
_currn->_prod = RULETYPE_SPECIFIERS_LST;
_currn->_desc1 = (_TSPType_specifiers) MkType_specifiers (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIERS_LST: root of subtree no. 1 can not be made a Type_specifiers node ", 0, _coordref);
_currn->_desc2 = (_TSPType_specifier) MkType_specifier (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE TYPE_SPECIFIERS_LST: root of subtree no. 2 can not be made a Type_specifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_TYPE_SPECIFIERS_LST;
return ( (NODEPTR) _currn);
}/* MkTYPE_SPECIFIERS_LST */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_PARAMETER (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCLASS_PARAMETER (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCLASS_PARAMETER _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_PARAMETER;
#else
_currn = (_TPPCLASS_PARAMETER) TreeNodeAlloc (sizeof (struct _TPCLASS_PARAMETER));
#endif
_currn->_prod = RULECLASS_PARAMETER;
_currn->_desc1 = (_TSPClass_specifier) MkClass_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_PARAMETER: root of subtree no. 1 can not be made a Class_specifier node ", 0, _coordref);
_currn->_desc2 = (_TSPType_specifiers) MkType_specifiers (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_PARAMETER: root of subtree no. 2 can not be made a Type_specifiers node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_PARAMETER;
return ( (NODEPTR) _currn);
}/* MkCLASS_PARAMETER */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkIDENT_DEF (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkIDENT_DEF (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPIDENT_DEF _currn;
#ifdef __cplusplus
_currn = new _TPIDENT_DEF;
#else
_currn = (_TPPIDENT_DEF) TreeNodeAlloc (sizeof (struct _TPIDENT_DEF));
#endif
_currn->_prod = RULEIDENT_DEF;
_SETCOORD(_currn)
_TERMACT_IDENT_DEF;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkIDENT_DEF */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBOUND_IDENTIFIER_STAR (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkBOUND_IDENTIFIER_STAR (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPBOUND_IDENTIFIER_STAR _currn;
#ifdef __cplusplus
_currn = new _TPBOUND_IDENTIFIER_STAR;
#else
_currn = (_TPPBOUND_IDENTIFIER_STAR) TreeNodeAlloc (sizeof (struct _TPBOUND_IDENTIFIER_STAR));
#endif
_currn->_prod = RULEBOUND_IDENTIFIER_STAR;
_SETCOORD(_currn)
_TERMACT_BOUND_IDENTIFIER_STAR;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "star", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkBOUND_IDENTIFIER_STAR */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBOUND_IDENTIFIER (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkBOUND_IDENTIFIER (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPBOUND_IDENTIFIER _currn;
#ifdef __cplusplus
_currn = new _TPBOUND_IDENTIFIER;
#else
_currn = (_TPPBOUND_IDENTIFIER) TreeNodeAlloc (sizeof (struct _TPBOUND_IDENTIFIER));
#endif
_currn->_prod = RULEBOUND_IDENTIFIER;
_currn->_desc1 = (_TSPIdent_def) MkIdent_def (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BOUND_IDENTIFIER: root of subtree no. 1 can not be made a Ident_def node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_BOUND_IDENTIFIER;
return ( (NODEPTR) _currn);
}/* MkBOUND_IDENTIFIER */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_PARAMETERS_EMPTY (POSITION *_coordref)
#else
NODEPTR MkCLASS_PARAMETERS_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_PARAMETERS_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_PARAMETERS_EMPTY;
#else
_currn = (_TPPCLASS_PARAMETERS_EMPTY) TreeNodeAlloc (sizeof (struct _TPCLASS_PARAMETERS_EMPTY));
#endif
_currn->_prod = RULECLASS_PARAMETERS_EMPTY;
_SETCOORD(_currn)
_TERMACT_CLASS_PARAMETERS_EMPTY;
return ( (NODEPTR) _currn);
}/* MkCLASS_PARAMETERS_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_PARAMETERS_LST (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCLASS_PARAMETERS_LST (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCLASS_PARAMETERS_LST _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_PARAMETERS_LST;
#else
_currn = (_TPPCLASS_PARAMETERS_LST) TreeNodeAlloc (sizeof (struct _TPCLASS_PARAMETERS_LST));
#endif
_currn->_prod = RULECLASS_PARAMETERS_LST;
_currn->_desc1 = (_TSPClass_parameters) MkClass_parameters (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_PARAMETERS_LST: root of subtree no. 1 can not be made a Class_parameters node ", 0, _coordref);
_currn->_desc2 = (_TSPClass_parameter) MkClass_parameter (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_PARAMETERS_LST: root of subtree no. 2 can not be made a Class_parameter node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_PARAMETERS_LST;
return ( (NODEPTR) _currn);
}/* MkCLASS_PARAMETERS_LST */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_BOUNDS_EMPTY (POSITION *_coordref)
#else
NODEPTR MkCLASS_BOUNDS_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_BOUNDS_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_BOUNDS_EMPTY;
#else
_currn = (_TPPCLASS_BOUNDS_EMPTY) TreeNodeAlloc (sizeof (struct _TPCLASS_BOUNDS_EMPTY));
#endif
_currn->_prod = RULECLASS_BOUNDS_EMPTY;
_SETCOORD(_currn)
_TERMACT_CLASS_BOUNDS_EMPTY;
return ( (NODEPTR) _currn);
}/* MkCLASS_BOUNDS_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_BOUNDS_LST (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2)
#else
NODEPTR MkCLASS_BOUNDS_LST (_coordref,_desc1,_desc2)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
#endif
{	_TPPCLASS_BOUNDS_LST _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_BOUNDS_LST;
#else
_currn = (_TPPCLASS_BOUNDS_LST) TreeNodeAlloc (sizeof (struct _TPCLASS_BOUNDS_LST));
#endif
_currn->_prod = RULECLASS_BOUNDS_LST;
_currn->_desc1 = (_TSPClass_bounds) MkClass_bounds (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_BOUNDS_LST: root of subtree no. 1 can not be made a Class_bounds node ", 0, _coordref);
_currn->_desc2 = (_TSPBound_identifier) MkBound_identifier (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_BOUNDS_LST: root of subtree no. 2 can not be made a Bound_identifier node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_BOUNDS_LST;
return ( (NODEPTR) _currn);
}/* MkCLASS_BOUNDS_LST */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ID_DEF (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkCLASS_ID_DEF (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPCLASS_ID_DEF _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ID_DEF;
#else
_currn = (_TPPCLASS_ID_DEF) TreeNodeAlloc (sizeof (struct _TPCLASS_ID_DEF));
#endif
_currn->_prod = RULECLASS_ID_DEF;
_SETCOORD(_currn)
_TERMACT_CLASS_ID_DEF;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "identifier", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkCLASS_ID_DEF */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_OPT_CL (POSITION *_coordref, NODEPTR _desc1)
#else
NODEPTR MkBUILTIN_OPT_CL (_coordref,_desc1)
	POSITION *_coordref;
	NODEPTR _desc1;
#endif
{	_TPPBUILTIN_OPT_CL _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_OPT_CL;
#else
_currn = (_TPPBUILTIN_OPT_CL) TreeNodeAlloc (sizeof (struct _TPBUILTIN_OPT_CL));
#endif
_currn->_prod = RULEBUILTIN_OPT_CL;
_currn->_desc1 = (_TSPClass_specifier) MkClass_specifier (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE BUILTIN_OPT_CL: root of subtree no. 1 can not be made a Class_specifier node ", 0, _coordref);
_COPYCOORD(_currn)
_TERMACT_BUILTIN_OPT_CL;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_OPT_CL */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_OPT_ID (POSITION *_coordref, int _TERM1)
#else
NODEPTR MkBUILTIN_OPT_ID (_coordref, _TERM1)
	POSITION *_coordref;
	int _TERM1;
#endif
{	_TPPBUILTIN_OPT_ID _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_OPT_ID;
#else
_currn = (_TPPBUILTIN_OPT_ID) TreeNodeAlloc (sizeof (struct _TPBUILTIN_OPT_ID));
#endif
_currn->_prod = RULEBUILTIN_OPT_ID;
_SETCOORD(_currn)
_TERMACT_BUILTIN_OPT_ID;
#ifdef MONITOR
_dapto_term_int(((NODEPTR)_currn), "stringconst", _TERM1);
#endif

return ( (NODEPTR) _currn);
}/* MkBUILTIN_OPT_ID */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_OPT (POSITION *_coordref)
#else
NODEPTR MkBUILTIN_OPT (_coordref)
	POSITION *_coordref;
#endif
{	_TPPBUILTIN_OPT _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_OPT;
#else
_currn = (_TPPBUILTIN_OPT) TreeNodeAlloc (sizeof (struct _TPBUILTIN_OPT));
#endif
_currn->_prod = RULEBUILTIN_OPT;
_SETCOORD(_currn)
_TERMACT_BUILTIN_OPT;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_OPT */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkBUILTIN_OPT_EMPTY (POSITION *_coordref)
#else
NODEPTR MkBUILTIN_OPT_EMPTY (_coordref)
	POSITION *_coordref;
#endif
{	_TPPBUILTIN_OPT_EMPTY _currn;
#ifdef __cplusplus
_currn = new _TPBUILTIN_OPT_EMPTY;
#else
_currn = (_TPPBUILTIN_OPT_EMPTY) TreeNodeAlloc (sizeof (struct _TPBUILTIN_OPT_EMPTY));
#endif
_currn->_prod = RULEBUILTIN_OPT_EMPTY;
_SETCOORD(_currn)
_TERMACT_BUILTIN_OPT_EMPTY;
return ( (NODEPTR) _currn);
}/* MkBUILTIN_OPT_EMPTY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_BODY (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkCLASS_BODY (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPCLASS_BODY _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_BODY;
#else
_currn = (_TPPCLASS_BODY) TreeNodeAlloc (sizeof (struct _TPCLASS_BODY));
#endif
_currn->_prod = RULECLASS_BODY;
_currn->_desc1 = (_TSPBuiltin_option) MkBuiltin_option (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_BODY: root of subtree no. 1 can not be made a Builtin_option node ", 0, _coordref);
_currn->_desc2 = (_TSPInheritances) MkInheritances (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_BODY: root of subtree no. 2 can not be made a Inheritances node ", 0, _coordref);
_currn->_desc3 = (_TSPFeature_declarations) MkFeature_declarations (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_BODY: root of subtree no. 3 can not be made a Feature_declarations node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_BODY;
return ( (NODEPTR) _currn);
}/* MkCLASS_BODY */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_HEAD (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkCLASS_HEAD (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPCLASS_HEAD _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_HEAD;
#else
_currn = (_TPPCLASS_HEAD) TreeNodeAlloc (sizeof (struct _TPCLASS_HEAD));
#endif
_currn->_prod = RULECLASS_HEAD;
_currn->_desc1 = (_TSPClass_id_def) MkClass_id_def (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_HEAD: root of subtree no. 1 can not be made a Class_id_def node ", 0, _coordref);
_currn->_desc2 = (_TSPClass_bounds) MkClass_bounds (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_HEAD: root of subtree no. 2 can not be made a Class_bounds node ", 0, _coordref);
_currn->_desc3 = (_TSPClass_parameters) MkClass_parameters (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_HEAD: root of subtree no. 3 can not be made a Class_parameters node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_HEAD;
return ( (NODEPTR) _currn);
}/* MkCLASS_HEAD */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ATTRIBUTE_VA (POSITION *_coordref)
#else
NODEPTR MkCLASS_ATTRIBUTE_VA (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ATTRIBUTE_VA _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ATTRIBUTE_VA;
#else
_currn = (_TPPCLASS_ATTRIBUTE_VA) TreeNodeAlloc (sizeof (struct _TPCLASS_ATTRIBUTE_VA));
#endif
_currn->_prod = RULECLASS_ATTRIBUTE_VA;
_SETCOORD(_currn)
_TERMACT_CLASS_ATTRIBUTE_VA;
return ( (NODEPTR) _currn);
}/* MkCLASS_ATTRIBUTE_VA */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ATTRIBUTE_EX (POSITION *_coordref)
#else
NODEPTR MkCLASS_ATTRIBUTE_EX (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ATTRIBUTE_EX _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ATTRIBUTE_EX;
#else
_currn = (_TPPCLASS_ATTRIBUTE_EX) TreeNodeAlloc (sizeof (struct _TPCLASS_ATTRIBUTE_EX));
#endif
_currn->_prod = RULECLASS_ATTRIBUTE_EX;
_SETCOORD(_currn)
_TERMACT_CLASS_ATTRIBUTE_EX;
return ( (NODEPTR) _currn);
}/* MkCLASS_ATTRIBUTE_EX */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ATTRIBUTE (POSITION *_coordref)
#else
NODEPTR MkCLASS_ATTRIBUTE (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ATTRIBUTE _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ATTRIBUTE;
#else
_currn = (_TPPCLASS_ATTRIBUTE) TreeNodeAlloc (sizeof (struct _TPCLASS_ATTRIBUTE));
#endif
_currn->_prod = RULECLASS_ATTRIBUTE;
_SETCOORD(_currn)
_TERMACT_CLASS_ATTRIBUTE;
return ( (NODEPTR) _currn);
}/* MkCLASS_ATTRIBUTE */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ATTRIBUTE_ABVA (POSITION *_coordref)
#else
NODEPTR MkCLASS_ATTRIBUTE_ABVA (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ATTRIBUTE_ABVA _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ATTRIBUTE_ABVA;
#else
_currn = (_TPPCLASS_ATTRIBUTE_ABVA) TreeNodeAlloc (sizeof (struct _TPCLASS_ATTRIBUTE_ABVA));
#endif
_currn->_prod = RULECLASS_ATTRIBUTE_ABVA;
_SETCOORD(_currn)
_TERMACT_CLASS_ATTRIBUTE_ABVA;
return ( (NODEPTR) _currn);
}/* MkCLASS_ATTRIBUTE_ABVA */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_ATTRIBUTE_AB (POSITION *_coordref)
#else
NODEPTR MkCLASS_ATTRIBUTE_AB (_coordref)
	POSITION *_coordref;
#endif
{	_TPPCLASS_ATTRIBUTE_AB _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_ATTRIBUTE_AB;
#else
_currn = (_TPPCLASS_ATTRIBUTE_AB) TreeNodeAlloc (sizeof (struct _TPCLASS_ATTRIBUTE_AB));
#endif
_currn->_prod = RULECLASS_ATTRIBUTE_AB;
_SETCOORD(_currn)
_TERMACT_CLASS_ATTRIBUTE_AB;
return ( (NODEPTR) _currn);
}/* MkCLASS_ATTRIBUTE_AB */

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_DECLARATION (POSITION *_coordref, NODEPTR _desc1, NODEPTR _desc2, NODEPTR _desc3)
#else
NODEPTR MkCLASS_DECLARATION (_coordref,_desc1,_desc2,_desc3)
	POSITION *_coordref;
	NODEPTR _desc1;
	NODEPTR _desc2;
	NODEPTR _desc3;
#endif
{	_TPPCLASS_DECLARATION _currn;
#ifdef __cplusplus
_currn = new _TPCLASS_DECLARATION;
#else
_currn = (_TPPCLASS_DECLARATION) TreeNodeAlloc (sizeof (struct _TPCLASS_DECLARATION));
#endif
_currn->_prod = RULECLASS_DECLARATION;
_currn->_desc1 = (_TSPClass_attribute) MkClass_attribute (_coordref, _desc1);	
if (((NODEPTR)_currn->_desc1) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_DECLARATION: root of subtree no. 1 can not be made a Class_attribute node ", 0, _coordref);
_currn->_desc2 = (_TSPClass_head) MkClass_head (_coordref, _desc2);	
if (((NODEPTR)_currn->_desc2) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_DECLARATION: root of subtree no. 2 can not be made a Class_head node ", 0, _coordref);
_currn->_desc3 = (_TSPClass_body) MkClass_body (_coordref, _desc3);	
if (((NODEPTR)_currn->_desc3) == NULLNODEPTR)	
	message (DEADLY, "RULE CLASS_DECLARATION: root of subtree no. 3 can not be made a Class_body node ", 0, _coordref);
_SETCOORD(_currn)
_TERMACT_CLASS_DECLARATION;
return ( (NODEPTR) _currn);
}/* MkCLASS_DECLARATION */

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _MkClass_declarationCLASS_DECLARATIONS (POSITION *_coordref, NODEPTR elem)
#else
static NODEPTR _MkClass_declarationCLASS_DECLARATIONS (_coordref, elem)
	POSITION *_coordref; NODEPTR elem;
#endif
{
	_TPPLST_Class_declarationCLASS_DECLARATIONS _new;
#ifdef __cplusplus
	_new = new _TPLST_Class_declarationCLASS_DECLARATIONS;
#else
	_new = (_TPPLST_Class_declarationCLASS_DECLARATIONS) TreeNodeAlloc (sizeof (struct _TPLST_Class_declarationCLASS_DECLARATIONS));
#endif
	_new->_prod = RULELST_Class_declarationCLASS_DECLARATIONS;
	_new->_desc1 = (_TSPClass_declaration)elem;
	_new->_desc2 = (_TSPLST_Class_declarations)_new;
	{_TPPLST_Class_declarationCLASS_DECLARATIONS _currn = _new;
	 _SETCOORD(_currn)
	 _TERMACT_LST_Class_declarationCLASS_DECLARATIONS;
	}
	return (NODEPTR)_new;
}

#if defined(__STDC__) || defined(__cplusplus)
static NODEPTR _ElemCLASS_DECLARATIONS (POSITION *_coordref, NODEPTR t)
#else
static NODEPTR _ElemCLASS_DECLARATIONS (_coordref, t)
	POSITION *_coordref; NODEPTR t;
#endif
/* coerces t to a list element and returns a single circular list */
{	NODEPTR elem;
	/* check first without then with coercion: */
	if (IsSymb (t, SYMBClass_declaration)) 
		return _MkClass_declarationCLASS_DECLARATIONS (_coordref, MkClass_declaration (_coordref, t));
	message (DEADLY, "a CLASS_DECLARATIONS list element node can not be generated ",
		0, _coordref);
	return t; /* never reached */
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR Mk2CLASS_DECLARATIONS (POSITION *_coordref, NODEPTR l, NODEPTR r)
#else
NODEPTR Mk2CLASS_DECLARATIONS (_coordref, l, r) POSITION *_coordref; NODEPTR l, r;
#endif
/* make a list of l and r, which may be null, elements, or lists */
{	NODEPTR last;
if (l == NULLNODEPTR) return r;
if (r == NULLNODEPTR) return l;
/* ensure l and r to be lists: */
if (LHSMAP[l->_prod] != SYMBLST_Class_declarations)
	l =_ElemCLASS_DECLARATIONS (_coordref, l);
if (LHSMAP[r->_prod] != SYMBLST_Class_declarations)
	r = _ElemCLASS_DECLARATIONS (_coordref, r);
/* concatenate two lists: */
last = ((NODEPTR)((_TPPLST_0CLASS_DECLARATIONS)r)->_desc2);
((_TPPLST_0CLASS_DECLARATIONS)r)->_desc2 = ((_TPPLST_0CLASS_DECLARATIONS)l)->_desc2;
((_TPPLST_0CLASS_DECLARATIONS)l)->_desc2 = last;
return l;
}

#if defined(__STDC__) || defined(__cplusplus)
NODEPTR MkCLASS_DECLARATIONS (POSITION *_coordref, NODEPTR t)
#else
NODEPTR MkCLASS_DECLARATIONS (_coordref, t) POSITION *_coordref; NODEPTR t;
#endif
{	NODEPTR _currn; _TPPCLASS_DECLARATIONS root;
	_TPPLST_0CLASS_DECLARATIONS list, remain, p;
/* argument t may be empty, a list element, or a list: */
if (t == NULLNODEPTR)
	remain = (_TPPLST_0CLASS_DECLARATIONS)NULLNODEPTR;
else {	if (LHSMAP[t->_prod] != SYMBLST_Class_declarations)
		t = _ElemCLASS_DECLARATIONS (_coordref, t);
	remain = (_TPPLST_0CLASS_DECLARATIONS)(((_TPPLST_0CLASS_DECLARATIONS) t)->_desc2);
	((_TPPLST_0CLASS_DECLARATIONS) t)->_desc2 = NULLNODEPTR;
}
/* remain is a possibly empty list in reverse order */
/* finalize the list by an empty context: */
#ifdef __cplusplus
list = new _TPLST_0CLASS_DECLARATIONS;
#else
list = (_TPPLST_0CLASS_DECLARATIONS) TreeNodeAlloc (sizeof (struct _TPLST_0CLASS_DECLARATIONS));
#endif
list->_prod = RULELST_0CLASS_DECLARATIONS;
list->_desc1 = NULLNODEPTR;
list->_desc2 = NULLNODEPTR;
_SETCOORD(list)
_currn = (NODEPTR)list;
/* reverse the list and visit its nodes: */
while (remain) {
	p = (_TPPLST_0CLASS_DECLARATIONS)(remain->_desc2);
	remain->_desc2 = (NODEPTR)list;
	list = remain;
	remain = p;
	_currn = (NODEPTR)list;
	/*if (_currn->_prod == RULELST_Class_declarationCLASS_DECLARATIONS)
	{_TPPLST_Class_declarationCLASS_DECLARATIONS _currn = _currn;
	 _TERMACT_LST_Class_declarationCLASS_DECLARATIONS;
	} this code has been moved to _ElemCLASS_DECLARATIONS*/
}
/* make root node and visit it: */
#ifdef __cplusplus
root = new _TPCLASS_DECLARATIONS;
#else
root = (_TPPCLASS_DECLARATIONS) TreeNodeAlloc (sizeof (struct _TPCLASS_DECLARATIONS));
#endif
root->_prod = RULECLASS_DECLARATIONS;
root->_desc1 = (_TSPLST_Class_declarations)list;
{ _TPPCLASS_DECLARATIONS _currn = root;
  _SETCOORD(_currn)
  _TERMACT_CLASS_DECLARATIONS;
}
_currn = (NODEPTR)root;
return (NODEPTR)_currn;
}
