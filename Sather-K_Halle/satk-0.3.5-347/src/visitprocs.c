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
    

#include "HEAD.h"
#include "err.h"
#include "node.h"
#include "visitprocs.h"
#include "attrpredef.h"

#include "visitmap.h"

#ifdef MONITOR
#include "attr_mon_dapto.h"
#include "liga_dapto.h"
#endif

#ifndef _VisitVarDecl
#define _VisitVarDecl()
#endif

#ifndef _VisitEntry
#define _VisitEntry()
#endif

#ifndef _VisitExit
#define _VisitExit()
#endif


#if defined(__STDC__) || defined(__cplusplus)
#define _CALL_VS_(args) (void (*)args)
#else
#define _CALL_VS_(args) 
#endif
TreeNodePtr* _IG_incl141;
TreeNodePtr* _IG_incl140;
STPtr* _IG_incl135;
int* _IG_incl138;
int* _IG_incl137;
Environment* _IG_incl132;
int* _IG_incl131;
IntSet* _IG_incl128;
int* _IG_incl125;
DefTableKey* _IG_incl123;
DefTableKey* _IG_incl122;
DefTableKey* _IG_incl118;
TreeNodePtr* _IG_incl117;
TreeNodePtr* _IG_incl116;
TreeNodePtr* _IG_incl115;
TreeNodePtr* _IG_incl114;
int* _IG_incl104;
CTValuePtr* _IG_incl105;
STPtr* _IG_incl107;
int* _IG_incl102;
int* _IG_incl103;
int* _IG_incl101;
DefTableKey* _IG_incl100;
STPtr* _IG_incl99;
STPtr* _IG_incl97;
int* _IG_incl94;
int* _IG_incl90;
int* _IG_incl92;
DefTableKey* _IG_incl91;
int* _IG_incl87;
STPtr* _IG_incl85;
STPtr* _IG_incl84;
int* _IG_incl83;
int* _IG_incl81;
int* _IG_incl78;
PTGNode* _IG_incl71;
int* _IG_incl70;
DefTableKeyList* _IG_incl75;
DefTableKeyList* _IG_incl76;
PTGNode* _IG_incl77;
int* _IG_incl67;
DefTableKey* _IG_incl66;
PTGNode* _IG_incl65;
PTGNode* _IG_incl64;
PTGNode* _IG_incl63;
PTGNode* _IG_incl62;
int* _IG_incl61;
Environment* _IG_incl59;
IntSet* _IG_incl58;
DefTableKeyList* _IG_incl57;
int* _IG_incl56;
DefTableKey* _IG_incl55;
DefTableKey* _IG_incl52;
int* _IG_incl47;
int* _IG_incl48;
int* _IG_incl46;
int* _IG_incl45;
STPtr* _IG_incl44;
STPtr* _IG_incl42;
int* _IG_incl41;
STPtr* _IG_incl35;
int* _IG_incl33;
PTGNode* _IG_incl32;
int* _IG_incl34;
int* _IG_incl31;
int* _IG_incl30;
int* _IG_incl29;
int* _IG_incl28;
IntSet* _IG_incl27;
Environment* _IG_incl23;
int* _IG_incl22;
Environment* _IG_incl19;
DefTableKeyList* _IG_incl11;
Environment* _IG_incl13;
int* _IG_incl10;
int* _IG_incl9;
DefTableKey* _IG_incl6;
Environment* _IG_incl5;
Environment* _IG_incl2;
Environment* _IG_incl0;
TreeNodePtr _AVclass_declarationclass_decls_tree_post;
TreeNodePtr _AVparameter_typeparameter_types_tree_post;
DefTableKeyList _AVParameter_specification_2Params_post;
int _AVLST_Bounds__const117;
int _AVLST_Bounds__const118;
TreeNodePtr _AVboundbounds_tree_post;
TreeNodePtr _AVnamed_expressionnamed_expressions_tree_post;
DefTableKeyList _AVModificationModInfos_post;
TreeNodePtr _AVfeature_declarationfeature_decls_tree_post;
TreeNodePtr _AVparameter_specificationparameters_tree_post;
TreeNodePtr _AVlabel_rangelabel_list_tree_post;
PTGNode _AVLST_Class_declarations_2__const0;
PTGNode _AVClass_declaration_2class_decls_out_post;
DefTableKeyList _AVLST_Parameter_types_2__const81;
PTGNode _AVLST_Parameter_types_2__const82;
int _AVLST_Parameter_types_2__const83;
PTGNode _AVLST_Parameter_types_2__const101;
DefTableKeyList _AVBuiltin_option_2MethCallsLoc_post;
DefTableKeyList _AVBuiltin_option_2AttrAccLoc_post;
PTGNode _AVParameter_specification_2NameListPtg_post;
DefTableKeyList _AVLST_Bounds_2__const81;
PTGNode _AVLST_Bounds_2__const82;
int _AVLST_Bounds_2__const83;
PTGNode _AVLST_Bounds_2__const101;
int _AVLST_Bounds_2__const105;
PTGNode _AVBound_2bounds_out_post;
int _AVboundBoundCount_post;
DefTableKeyList _AVLST_Named_expressions_2__const81;
PTGNode _AVLST_Named_expressions_2__const82;
int _AVLST_Named_expressions_2__const83;
PTGNode _AVLST_Named_expressions_2__const101;
int _AVNamed_expression_2UnnamedIndex_post;
int _AVNamed_expression_2Index_post;
PTGNode _AVNamed_expression_2named_exp_out_post;
PTGNode _AVLST_Feature_declarations_2__const101;
int _AVLST_Feature_declarations_2__const112;
int _AVLST_Feature_declarations_2__const114;
DefTableKeyList _AVClass_head_2PubAttr_post;
PTGNode _AVFeature_declaration_2shared_init_code_post;
PTGNode _AVFeature_declaration_2attr_preinit_initialization_post;
PTGNode _AVFeature_declaration_2attr_postinit_initialization_post;
PTGNode _AVFeature_declaration_2feature_decls_out_post;
PTGNode _AVLST_Parameters_2__const87;
PTGNode _AVLST_Parameters_2__const88;
PTGNode _AVLST_Parameters_2__const89;
PTGNode _AVParameter_specification_2params_out_post;
DefTableKeyList _AVLST_Label_list_2__const81;
PTGNode _AVLST_Label_list_2__const82;
int _AVLST_Label_list_2__const83;
ValueRangePtrList _AVWhen_label_stmt_2LabelRanges_post;
PTGNode _AVLabel_range_2LabelOut_post;
int _AVLST_class_declarations__const40;
DefTableKeyList _AVLST_class_declarations__const45;
DefTableKeyList _AVLST_parameter_types__const67;
TreeNodePtr _AVparameter_typeparameter_types_orig_tree_post;
DefTableKeyList _AVbuiltin_optionRefClasses_post;
DefTableKeyList _AVLST_bounds__const67;
TreeNodePtr _AVboundbounds_orig_tree_post;
TreeNodePtr _AVboundstarbounds_tree_post;
PTGNode _AVboundBoundPtg_post;
int _AVboundClassBoundCount_post;
DefTableKeyList _AVLST_named_expressions__const67;
TreeNodePtr _AVnamed_expressionnamed_expressions_orig_tree_post;
TreeNodePtr _AVmodificationmod_tree_post;
TreeNodePtr _AVwhen_types_block_tree;
TreeNodePtr _AVtype_case_statement_tree;
DefTableKeyList _AVInheritance_2__const110;
DefTableKeyList _AVClass_argument_2__const81;
PTGNode _AVClass_argument_2__const82;
int _AVClass_argument_2__const83;
PTGNode _AVClass_argument_2__const101;
DefTableKeyList _AVType_specifiers_2TypeBounds_post;
DefTableKey _AVClass_parameter_2_ErrorBound;
TreeNodePtr _AVTypes_tree;
TreeNodePtr _AVWhen_types_block_tree;
TreeNodePtr _AVLabel_range_tree;
TreeNodePtr _AVWhen_label_stmt_tree;
TreeNodePtr _AVException_types_tree;
TreeNodePtr _AVWhen_exception_stmt_tree;
TreeNodePtr _AVWhen_exception_stmts_tree;
TreeNodePtr _AVExceptions_tree;
TreeNodePtr _AVLoop_tree;
TreeNodePtr _AVCase_statement_tree;
TreeNodePtr _AVConditional_statement_tree;
TreeNodePtr _AVBegin_block_tree;
TreeNodePtr _AVLocal_stream_declaration_tree;
TreeNodePtr _AVBuiltin_instruction_tree;
TreeNodePtr _AVStringconstants_tree;
TreeNodePtr _AVNamed_expression_tree;
TreeNodePtr _AVNamed_expressions_tree;
TreeNodePtr _AVAggregate_tree;
TreeNodePtr _AVQual_feature_id_use_tree;
TreeNodePtr _AVObj_id_use_tree;
TreeNodePtr _AVDirect_stream_call_tree;
TreeNodePtr _AVCoercion_tree;
TreeNodePtr _AVValue_tree;
TreeNodePtr _AVBound_method_tree;
TreeNodePtr _AVQualification_tree;
TreeNodePtr _AVStd_method_call_tree;
TreeNodePtr _AVArgument_tree;
DefTableKey _AVParameter_type_Key;
TreeNodePtr _AVParameter_type_tree;
PTGNode _AVParameter_type_2_NamePtg;
DefTableKey _AVParameter_type_2_Key;
TreeNodePtr _AVClass_argument_tree;
PTGNode _AVClass_argument_ClassArgsPtg;
TreeNodePtr _AVType_specifiers_tree;
TreeNodePtr _AVClass_parameter_tree;
PTGNode _AVClass_parameter_ClassArgsPtg;
DefTableKey _AVMethod_specification_Key;
DefTableKey _AVFeature_specification_ModKey;
int _AVFeature_id_use_Sym;
int _AVIdent_mod_Sym;
DefTableKey _AVModification_ModKey;
TreeNodePtr _AVbuiltin_instruction_tree;
TreeNodePtr _AVbuiltin_instructions_tree;
TreeNodePtr _AVparameter_specification_tree;
TreeNodePtr _AVmethod_decl_tree;
DefTableKey _AVmethod_decl_ArrayMark;
TreeNodePtr _AVloop_tree;
TreeNodePtr _AVWhen_types_blocks_tree;
TreeNodePtr _AVType_case_statement_tree;
TreeNodePtr _AVParameter_specification_tree;
STPtr _AVType_constructor_Type;
DefTableKeyList _AVParameters_ParamList;
int _AVMethod_ident_def_Sym;
Binding _AVMethod_ident_def_Bind;
IntSet _AVMethod_ident_def_KindSet;
TreeNodePtr _AVFeature_declaration_tree;
TreeNodePtr _AVMethod_body_tree;
IntSet _AVMethod_body_KindSet;
TreeNodePtr _AVAttribute_specification_tree;
DefTableKeyList _AVAttribute_specification_IdList;
IntSet _AVAttribute_specification_KindSet;
IntSet _AVAttribute_declaration_KindSet;
IntSet _AVAttribute_access_type_KindSet;
DefTableKeyList _AVIdentifiers_2IdKeys_post;
TreeNodePtr _AVIdentifiers_tree;
TreeNodePtr _AVMethod_decl_tree;
TreeNodePtr _AVFeature_tree;
IntSet _AVFeature_KindSet;
Binding _AVClass_id_use_Bind;
int _AVClass_id_use_Sym;
int _AVClass_specifier__const119;
InheritanceInfoList _AVInheritancesInhers_post;
TreeNodePtr _AVFeature_declarations_org_tree;
TreeNodePtr _AVFeature_declarations_tree;
int _AVBuiltin_option_is_builtin;
int _AVBuiltin_option_is_empty;
TreeNodePtr _AVClass_body__const121;
TreeNodePtr _AVClass_body__const124;
int _AVClass_body__const126;
TreeNodePtr _AVClass_body_poly_decl_tree;
int _AVClass_body_is_builtin;
InheritanceInfoList _AVClass_body_InheritanceList;
TreeNodePtr _AVClass_body_tree;
int _AVIdent_def_Cnt;
int _AVIdent_def_TotalCnt;
int _AVIdent_def_IsParamDecl;
Binding _AVIdent_def_Bind;
IntSet _AVIdent_def_KindSet;
TreeNodePtr _AVBound_identifier_tree;
int _AVBound_identifier_IsStar;
PTGNode _AVClass_parameters_ClassArgsPtg;
int _AVClass_bounds_is_array_class;
int _AVClass_bounds_NumStars;
Binding _AVClass_id_def_Bind;
TreeNodePtr _AVClass_id_def_poly_decl_tree;
TreeNodePtr _AVClass_id_def_tree;
PTGNode _AVClass_id_def_ClassArgsPtg;
TreeNodePtr _AVClass_declaration_poly_decl_tree;
TreeNodePtr _AVClass_declaration_tree;
DefTableKey _AVClass_declaration_InhScopeKey;
DefTableKey _AVClass_head__const122;
TreeNodePtr _AVClass_head_poly_decl_tree;
TreeNodePtr _AVClass_head_class_bounds_tree;
TreeNodePtr _AVClass_head_tree;
int _AVClass_head_is_array_class;
DefTableKeyList _AVModifications_ModInfoList;
TreeNodePtr _AVInheritances_tree;
TreeNodePtr _AVInheritances_BoundsTree;
DefTableKey _AVInheritances_BoundsFrom;
int _AVInheritances_NumStars;
TreeNodePtr _AVInheritance_tree;
TreeNodePtr _AVInheritance_BoundsTree;
DefTableKey _AVInheritance_BoundsFromFix;
int _AVInheritance_NumStars;
int _AVExpression_IsStar;
TreeNodePtr _AVBound_tree;
TreeNodePtr _AVlocal_stream_declaration_tree;
TreeNodePtr _AVfeature_declaration_tree;
TreeNodePtr _AVqual_feature_id_use_orig_tree;
Binding _AVobj_id_use_Bind;
int _AVobj_id_use_Sym;
TreeNodePtr _AVobj_id_use_class_id_tree;
TreeNodePtr _AVobj_id_use_orig_tree;
TreeNodePtr _AVobj_id_use_tree;
int _AVobj_id_use_IsClassIdUse;
DefTableKey _AVobj_id_use_Key;
DefTableKeyList _AVqualification__const67;
TreeNodePtr _AVqualification_orig_tree;
TreeNodePtr _AVqualification_tree;
DefTableKeyList _AVdirect_stream_call__const67;
TreeNodePtr _AVdirect_stream_call_orig_tree;
TreeNodePtr _AVdirect_stream_call_tree;
DefTableKeyList _AVstd_method_call__const67;
TreeNodePtr _AVstd_method_call_class_spec_tree;
TreeNodePtr _AVstd_method_call_arr_bounds_tree;
TreeNodePtr _AVstd_method_call_class_id_tree;
TreeNodePtr _AVstd_method_call_orig_tree;
int _AVstd_method_call_is_notequal;
TreeNodePtr _AVstd_method_call_tree;
int _AVstd_method_call_ResolvesToClassSpecifier;
int _AVstd_method_call_ResolvesToSingleId;
int _AVstd_method_call_IsClassIdUse;
int _AVstd_method_call_ResolvesToArrayAccess;
DefTableKey _AVstd_method_call_Key;
DefTableKeyList _AVcoercion__const67;
TreeNodePtr _AVcoercion_orig_tree;
TreeNodePtr _AVcoercion_tree;
DefTableKeyList _AVargument__const67;
TreeNodePtr _AVargument_class_spec_tree;
TreeNodePtr _AVargument_arr_bound_tree;
TreeNodePtr _AVargument_orig_tree;
TreeNodePtr _AVargument_tree;
int _AVargument_ResolvesToClassSpecifier;
int _AVargument_IsJustExpression;
int _AVargument_IsBound;
DefTableKeyList _AVbound_method__const67;
TreeNodePtr _AVbound_method_orig_tree;
TreeNodePtr _AVbound_method_tree;
int _AVarguments_IsEmpty;
int _AVarguments_IsEmptyArguments;
int _AVarguments_IsBounds;
TreeNodePtr _AVstringconstants_orig_tree;
TreeNodePtr _AVstringconstants_tree;
TreeNodePtr _AVconditional_statement_tree;
int _AVBound_2_CoercionType;
PTGNode _AVBound_2_out;
int _AVBounds_2_BoundCnt;
int _AVMethod_body_2LabelNum_post;
PTGNode _AVBegin_block_2ResumeLabels_post;
int _AVResume_statement_2LabelNum_pre;
int _AVResume_statement_2_Label;
PTGNode _AVResume_statement_2_out;
DefTableKeyList _AVType_case_statement_2__const81;
PTGNode _AVType_case_statement_2__const82;
int _AVType_case_statement_2__const83;
PTGNode _AVType_case_statement_2__const84;
int _AVType_case_statement_2__const85;
int _AVType_case_statement_2_HaveElse;
PTGNode _AVType_case_statement_2_out;
DefTableKeyList _AVWhen_types_block_2__const81;
PTGNode _AVWhen_types_block_2__const82;
int _AVWhen_types_block_2__const83;
PTGNode _AVWhen_types_block_2__const84;
int _AVWhen_types_block_2__const85;
Binding _AVWhen_types_block_2_Bind;
IntSet _AVWhen_types_block_2_SemKindSet;
int _AVWhen_types_block_2_NextLabel;
PTGNode _AVWhen_types_block_2_out;
int _AVWhen_types_block_2_IsElse;
int _AVWhen_types_block_2_UniqueSym;
PTGNode _AVReturn_statement_2_out;
Environment _AVQual_feature_id_use_2_SemScope;
Binding _AVQual_feature_id_use_2_Bind;
int _AVQual_feature_id_use_2_Sym;
CTValuePtr _AVQual_feature_id_use_2_Val;
DefTableKey _AVQual_feature_id_use_2_SemScopeKey;
PTGNode _AVParameter_specification_2_NamePtg;
PTGNode _AVParameter_specification_2_out;
PTGNode _AVBreak_statement_2_out;
int _AVBreak_statement_2_JumpLabel;
DefTableKeyList _AVLoop_2__const81;
PTGNode _AVLoop_2__const82;
int _AVLoop_2__const83;
PTGNode _AVLoop_2__const84;
int _AVLoop_2__const85;
PTGNode _AVLoop_2_out;
int _AVLoop_2_ExpLabel;
int _AVMethod_body_2LabelNum_pre;
PTGNode _AVMethod_body_2_out;
PTGNode _AVMethod_body_2_exit_code;
PTGNode _AVMethod_body_2_entry_code;
PTGNode _AVMethod_body_2_param_locals;
PTGNode _AVMethod_body_2_value_locals;
int _AVMethod_body_2_is_static;
int _AVMethod_body_2_is_abstract;
PTGNode _AVParameters_2__const87;
PTGNode _AVParameters_2__const88;
PTGNode _AVParameters_2__const89;
PTGNode _AVParameters_2_NamePtg;
PTGNode _AVParameters_2_out;
int _AVMethod_ident_def_2_IsMainMethod;
int _AVMethod_ident_def_2_IsInvariant;
Binding _AVMethod_ident_def_2_Bind;
PTGNode _AVMethod_ident_def_2_out;
int _AVMethod_decl_2__const95;
int _AVMethod_decl_2__const111;
int _AVMethod_decl_2_MainGetArguments;
int _AVMethod_decl_2_MainReturnsInt;
Binding _AVMethod_decl_2_self_bind;
Binding _AVMethod_decl_2_res_bind;
PTGNode _AVMethod_decl_2_NamePtg;
PTGNode _AVMethod_decl_2_stream_out;
int _AVMethod_decl_2_StartLabel;
PTGNode _AVMethod_decl_2_resume_labels;
PTGNode _AVMethod_decl_2_out;
int _AVMethod_decl_2_IsParamlessInitMethod;
PTGNode _AVFeature_declarations_2__const0;
int _AVFeature_declarations_2__const106;
int _AVFeature_declarations_2__const107;
int _AVFeature_declarations_2__const111;
int _AVFeature_declarations_2__const112;
int _AVFeature_declarations_2__const114;
PTGNode _AVFeature_declarations_2_out;
DefTableKeyList _AVDirect_stream_call_2__const81;
PTGNode _AVDirect_stream_call_2__const82;
int _AVDirect_stream_call_2__const83;
PTGNode _AVDirect_stream_call_2__const101;
DefTableKey _AVDirect_stream_call_2_CreatedKey;
int _AVDirect_stream_call_2_LoopEndLabel;
PTGNode _AVDirect_stream_call_2_stream_ob;
DefTableKey _AVDirect_stream_call_2_Key;
PTGNode _AVDirect_stream_call_2_ValHomeNode;
PTGNode _AVDirect_stream_call_2_out;
DefTableKeyList _AVRaise_statement_2__const81;
PTGNode _AVRaise_statement_2__const82;
int _AVRaise_statement_2__const83;
PTGNode _AVRaise_statement_2_out;
DefTableKeyList _AVWhen_exception_stmt_2__const81;
PTGNode _AVWhen_exception_stmt_2__const82;
int _AVWhen_exception_stmt_2__const83;
PTGNode _AVWhen_exception_stmt_2__const84;
int _AVWhen_exception_stmt_2__const85;
Binding _AVWhen_exception_stmt_2_Bind;
IntSet _AVWhen_exception_stmt_2_SemKindSet;
int _AVWhen_exception_stmt_2_UniqueSym;
PTGNode _AVWhen_exception_stmt_2_out;
DefTableKeyList _AVBegin_block_2__const81;
PTGNode _AVBegin_block_2__const82;
int _AVBegin_block_2__const83;
PTGNode _AVBegin_block_2__const84;
int _AVBegin_block_2__const85;
PTGNode _AVBegin_block_2_out;
int _AVBegin_block_2_ForeignLabel;
int _AVBegin_block_2_EndLabel;
DefTableKeyList _AVExceptions_2__const81;
PTGNode _AVExceptions_2__const82;
int _AVExceptions_2__const83;
PTGNode _AVExceptions_2__const84;
int _AVExceptions_2__const85;
PTGNode _AVExceptions_2_out;
int _AVExceptions_2_is_empty;
DefTableKeyList _AVQualification_2__const81;
PTGNode _AVQualification_2__const82;
int _AVQualification_2__const83;
PTGNode _AVQualification_2__const101;
int _AVQualification_2_IsQualifiedPolymorph;
int _AVQualification_2_IsSharedQualified;
CTValuePtr _AVQualification_2_LabelVal;
DefTableKey _AVQualification_2_Key;
int _AVQualification_2_StackBefore;
PTGNode _AVQualification_2_qualifier_out;
PTGNode _AVQualification_2_out;
DefTableKeyList _AVStd_method_call_2__const81;
PTGNode _AVStd_method_call_2__const82;
int _AVStd_method_call_2__const83;
PTGNode _AVStd_method_call_2__const101;
int _AVStd_method_call_2_Is_aget;
PTGNode _AVStd_method_call_2_out;
STPtr _AVStd_method_call_2_RealType;
DefTableKeyList _AVConditional_statement_2__const81;
PTGNode _AVConditional_statement_2__const82;
int _AVConditional_statement_2__const83;
PTGNode _AVConditional_statement_2__const84;
int _AVConditional_statement_2__const85;
PTGNode _AVConditional_statement_2_out;
int _AVConditional_statement_2_MergeLabel;
int _AVConditional_statement_2_BranchLabel;
DefTableKeyList _AVCoercion_2__const81;
PTGNode _AVCoercion_2__const82;
int _AVCoercion_2__const83;
PTGNode _AVCoercion_2__const101;
int _AVCoercion_2_CoercionType;
PTGNode _AVCoercion_2_out;
Binding _AVClass_id_def_2_Bind;
int _AVClass_id_def_2_is_poly_class;
PTGNode _AVClass_body_2__const0;
DefTableKeyList _AVClass_body_2__const110;
int _AVClass_body_2__const111;
int _AVClass_body_2__const112;
int _AVClass_body_2__const114;
int _AVClass_body_2_MainGetArguments;
int _AVClass_body_2_MainReturnsInt;
int _AVClass_body_2_ForeignLabel;
int _AVClass_body_2_EndLabel;
PTGNode _AVClass_body_2_out;
PTGNode _AVClass_head_2__const108;
int _AVClass_head_2__const113;
DefTableKeyList _AVClass_head_2__const115;
PTGNode _AVClass_head_2_out;
STPtr _AVCase_label_2_Type;
int _AVLabel_range_2_check;
int _AVLabel_range_2_FalseLabel;
DefTableKeyList _AVWhen_label_stmt_2__const81;
PTGNode _AVWhen_label_stmt_2__const82;
int _AVWhen_label_stmt_2__const83;
PTGNode _AVWhen_label_stmt_2__const84;
int _AVWhen_label_stmt_2__const85;
int _AVWhen_label_stmt_2_NextLabel;
PTGNode _AVWhen_label_stmt_2_out;
int _AVWhen_label_stmt_2_IsElse;
DefTableKeyList _AVCase_statement_2__const81;
PTGNode _AVCase_statement_2__const82;
int _AVCase_statement_2__const83;
PTGNode _AVCase_statement_2__const84;
int _AVCase_statement_2__const85;
PTGNode _AVCase_statement_2_out;
int _AVCase_statement_2_HaveElse;
DefTableKeyList _AVBuiltin_instruction_2__const81;
PTGNode _AVBuiltin_instruction_2_out;
DefTableKeyList _AVBuiltin_instructions_2__const81;
PTGNode _AVBuiltin_instructions_2_out;
PTGNode _AVMethod_specification_2__const101;
PTGNode _AVMethod_specification_2_NamePtg;
DefTableKey _AVMethod_specification_2_Key;
DefTableKeyList _AVBound_method_2__const81;
PTGNode _AVBound_method_2__const82;
int _AVBound_method_2__const83;
PTGNode _AVBound_method_2__const101;
PTGNode _AVBound_method_2_out;
PTGNode _AVBound_method_2_stream_out;
int _AVBound_method_2_stream_object;
PTGNode _AVBound_method_2_base_out;
BMPtr _AVBound_method_2_BoundMethod;
DefTableKeyList _AVLocal_stream_declaration_2__const81;
PTGNode _AVLocal_stream_declaration_2__const82;
int _AVLocal_stream_declaration_2__const83;
PTGNode _AVBlock_2_post_out;
PTGNode _AVBlock_2_pre_out;
PTGNode _AVBlock_2_inh_locals;
DefTableKey _AVBound_identifier_2_Key;
PTGNode _AVBound_identifier_2_out;
DefTableKeyList _AVClass_bounds_2_BoundKeyList;
int _AVClass_bounds_2_is_array_class;
PTGNode _AVClass_bounds_2_out;
PTGNode _AVFeature_declaration_2_out;
int _AVFeature_declaration_2_IsImplicitValueTypeInit;
PTGNode _AVFeature_declaration_2_shared_init;
PTGNode _AVFeature_declaration_2_attribute_init;
int _AVAttribute_specification_2__const72;
STPtr _AVAttribute_specification_2__const73;
PTGNode _AVAttribute_specification_2__const79;
PTGNode _AVAttribute_specification_2__const80;
DefTableKeyList _AVAttribute_specification_2__const81;
PTGNode _AVAttribute_specification_2__const82;
int _AVAttribute_specification_2__const83;
PTGNode _AVAttribute_specification_2__const86;
PTGNode _AVAttribute_specification_2__const87;
PTGNode _AVAttribute_specification_2__const88;
PTGNode _AVAttribute_specification_2__const89;
STPtr _AVAttribute_specification_2__const93;
PTGNode _AVAttribute_specification_2__const94;
PTGNode _AVAttribute_specification_2__const96;
PTGNode _AVAttribute_specification_2__const97;
PTGNode _AVAttribute_specification_2__const98;
PTGNode _AVAttribute_specification_2__const100;
PTGNode _AVAttribute_specification_2__const101;
DefTableKeyList _AVAttribute_specification_2_IdList;
PTGNode _AVAttribute_specification_2_NamePtg;
int _AVIdent_def_2_Cnt;
int _AVIdent_def_2_TotalCnt;
Binding _AVIdent_def_2_Bind;
int _AVIdent_def_2_IsExceptionOrTypecase;
PTGNode _AVIdent_def_2_exit_out;
PTGNode _AVIdent_def_2_entry_out;
PTGNode _AVIdent_def_2_readwrite_out;
PTGNode _AVIdent_def_2_shared_init_out;
int _AVAttribute_declaration_2__const72;
STPtr _AVAttribute_declaration_2__const73;
PTGNode _AVAttribute_declaration_2__const79;
PTGNode _AVAttribute_declaration_2__const80;
PTGNode _AVAttribute_declaration_2__const96;
PTGNode _AVAttribute_declaration_2__const97;
PTGNode _AVAttribute_declaration_2__const98;
PTGNode _AVAttribute_declaration_2__const100;
PTGNode _AVAttribute_declaration_2__const101;
DefTableKey _AVAttribute_declaration_2_Called;
int _AVAttribute_declaration_2_IsImplicitValueTypeInit;
int _AVAttribute_declaration_2_CoercionType;
PTGNode _AVAttribute_declaration_2_acc_out;
PTGNode _AVType_specifier_2__const94;
DefTableKey _AVType_specifier_2_TermKey;
Binding _AVType_specifier_2_TermBind;
int _AVType_specifier_2_IsTypeBound;
int _AVType_specifier_2_IsConstructor;
int _AVType_specifier_2_is_empty;
PTGNode _AVIdentifiers_2__const79;
PTGNode _AVIdentifiers_2__const80;
DefTableKeyList _AVIdentifiers_2__const81;
PTGNode _AVIdentifiers_2__const86;
PTGNode _AVIdentifiers_2__const87;
PTGNode _AVIdentifiers_2__const88;
PTGNode _AVIdentifiers_2__const89;
PTGNode _AVIdentifiers_2__const96;
PTGNode _AVIdentifiers_2__const97;
PTGNode _AVIdentifiers_2__const98;
PTGNode _AVIdentifiers_2__const100;
int _AVIdentifiers_2_Sym;
PTGNode _AVIdentifiers_2_param_out;
PTGNode _AVIdentifiers_2_out;
PTGNode _AVFeature_2__const0;
PTGNode _AVFeature_2__const100;
PTGNode _AVFeature_2__const101;
int _AVFeature_2__const106;
int _AVFeature_2__const107;
int _AVFeature_2__const111;
int _AVFeature_2__const112;
int _AVFeature_2__const114;
IntSet _AVFeature_2_KindSet;
int _AVFeature_2_IsImplicitValueTypeInit;
PTGNode _AVFeature_2_out;
PTGNode _AVFeature_2_shared_init;
PTGNode _AVFeature_2_attribute_init;
PTGNode _AVFeature_2_ValHomeNode;
DefTableKeyList _AVAssignment_2__const81;
PTGNode _AVAssignment_2__const82;
int _AVAssignment_2__const83;
int _AVAssignment_2_IsResAssign;
int _AVAssignment_2_CoercionType;
PTGNode _AVAssignment_2_out;
DefTableKeyList _AVAssertion_statement_2__const81;
PTGNode _AVAssertion_statement_2__const82;
int _AVAssertion_statement_2__const83;
STPtr _AVDesignator_2_TypeEst;
int _AVDesignator_2_IsCall;
CTValuePtr _AVDesignator_2_LabelVal;
DefTableKey _AVDesignator_2_CreatedKey;
int _AVDesignator_2_ValHome;
DefTableKeyList _AVArgument_2__const81;
PTGNode _AVArgument_2__const82;
int _AVArgument_2__const83;
PTGNode _AVArgument_2__const101;
MethArgInfo _AVArgument_2_ArgInfo;
CTValuePtr _AVArgument_2_Val;
PTGNode _AVArgument_2_write_back;
PTGNode _AVArgument_2_ValHomeNode;
int _AVArgument_2_ValHome;
PTGNode _AVArgument_2_out;
PTGNode _AVArgument_2_once_out;
CTValuePtr _AVArguments_2_Val;
int _AVExpression_2_is_array_aggregate;
int _AVExpression_2_IsStar;
PTGNode _AVExpression_2_qualifier_out;
STPtr _AVExpression_2_RealType;
int _AVExpression_2_MergeLabel;
int _AVExpression_2_BranchLabel;
CTValuePtr _AVName_2_Val;
Environment _AVName_2_SemScope;
Binding _AVName_2_Bind;
int _AVName_2_AttributeIndex;
DefTableKey _AVName_2_SemScopeKey;
int _AVName_2_Is_aget;
PTGNode _AVName_2_out;
int _AVName_2_IsAggregate;
int _AVNamed_expression_2_IsUnnamed;
int _AVNamed_expression_2_CoercionType;
PTGNode _AVNamed_expression_2_out;
Binding _AVAgg_id_def_2_Bind;
int _AVAgg_id_def_2_Sym;
IntSet _AVAgg_id_def_2_SemKindSet;
DefTableKeyList _AVNamed_expressions_2__const81;
PTGNode _AVNamed_expressions_2__const82;
int _AVNamed_expressions_2__const83;
PTGNode _AVNamed_expressions_2__const101;
PTGNode _AVNamed_expressions_2_out;
DefTableKeyList _AVAggregate_2__const81;
PTGNode _AVAggregate_2__const82;
int _AVAggregate_2__const83;
PTGNode _AVAggregate_2__const101;
PTGNode _AVAggregate_2_out;
DefTableKeyList _AVType_constructor_2__const81;
int _AVType_constructor_2_is_array_aggregate;
STPtr _AVType_constructor_2_TypeEst;
PTGNode _AVType_constructor_2_out;
PTGNode _AVType_constructor_2_init_code;
Binding _AVClass_specifier_2_Bind;
int _AVClass_specifier_2_BoundsDefined;
int _AVClass_specifier_2_Sym;
DefTableKey _AVClass_declaration_2_NotLike;
DefTableKeyList _AVClass_declaration_2_Likes;
int _AVClass_declaration_2_HasInitMethod;
DefTableKey _AVClass_declaration_2_SemScopeKey;
PTGNode _AVClass_declaration_2_out;
PTGNode _AVClass_declaration_2_bridge_out;
int _AVBuiltin_option_2_is_builtin_array;
int _AVBuiltin_option_2_is_builtin;
TreeNodePtr _AVparameter_type_orig_tree;
TreeNodePtr _AVparameter_type_tree;
TreeNodePtr _AVfeature_specification_tree;
TreeNodePtr _AVmodification_tree;
TreeNodePtr _AVmodifications_tree;
TreeNodePtr _AVinheritance_tree;
TreeNodePtr _AVfeature_declarations_tree;
ArgumentInfoList _AVclass_argumentArgInfos_post;
int _AVclass_argumentClassArgCount_post;
TreeNodePtr _AVclass_argument_orig_tree;
TreeNodePtr _AVclass_argument_starbound_tree;
TreeNodePtr _AVclass_argument_tree;
DefTableKeyList _AVclass_argument_usedParams;
ArgumentInfo _AVclass_argument_ArgInfo;
DefTableKeyList _AVmethod_specification__const67;
TreeNodePtr _AVmethod_specification_orig_tree;
DefTableKeyList _AVclass_specifier__const67;
TreeNodePtr _AVclass_specifier_orig_tree;
int _AVclass_specifier_ArraySym;
DefTableKey _AVclass_specifier_ArrayKey;
TreeNodePtr _AVclass_specifier_starbound_tree;
DefTableKeyList _AVclass_specifier_usedParamList;
DefTableKeyList _AVclass_headClassParams_post;
TreeNodePtr _AVclass_parameter_tree;
int _AVclass_id_use_IsFirstOcc;
Binding _AVclass_id_use_Bind;
int _AVclass_id_use_Sym;
int _AVclass_id_use_ArraySym;
int _AVclass_id_use_OrigSym;
int _AVclass_param_id_def_Cnt;
int _AVclass_param_id_def_IsFirstOcc;
int _AVclass_param_id_def_TotalCnt;
Binding _AVclass_param_id_def_Bind;
TreeNodePtr _AVclass_param_id_def_tree;
TreeNodePtr _AVclass_parameters_tree;
int _AVclass_parameters_ClassParCount;
DefTableKey _AVclass_bounds_BoundsMark;
PTGNode _AVclass_bounds_ClassBoundsPtg;
int _AVclass_id_def_Cnt;
int _AVclass_id_def_TotalCnt;
Binding _AVclass_id_def_Bind;
TreeNodePtr _AVclass_id_def_tree;
PTGNode _AVclass_id_def_ClassBoundsPtg;
DefTableKey _AVclass_head__const68;
TreeNodePtr _AVclass_head_tree;
TreeNodePtr _AVclass_declaration_tree;
PTGNode _AVClass_declarations_2__const0;
PTGNode _AVClass_declarations_2_out;
TreeNodePtr _AVClass_declarations_tree;
int _AVclass_declarations__const40;
DefTableKeyList _AVclass_declarations__const45;
TreeNodePtr _AVclass_declarations_tree;
DefTableKey _AVprogram_UnivKey;
PTGNode _AVprogram_PTGNull;
TreeNodePtr _AVprogram_TreeNodePtrNull;
PTGNode _AVprogram_out;
int _AVdesignator_ResolvesToArrayAccess;
int _AVdesignator_IsClassIdUse;
int _AVdesignator_IsArrayAccess;
TreeNodePtr _AVvalue_orig_tree;
TreeNodePtr _AVlabel_range_tree;
TreeNodePtr _AVwhen_label_stmt_tree;
TreeNodePtr _AVcase_statement_tree;
TreeNodePtr _AVbound_orig_tree;
TreeNodePtr _AVbound_starbound_tree;
TreeNodePtr _AVbound_tree;
TreeNodePtr _AVassertion_statement_tree;
TreeNodePtr _AVraise_statement_tree;
TreeNodePtr _AVwhen_exception_stmt_tree;
TreeNodePtr _AVexceptions_tree;
TreeNodePtr _AVbegin_block_tree;
DefTableKeyList _AVtype_specifier__const67;
TreeNodePtr _AVtype_specifier_orig_tree;
DefTableKeyList _AVtype_constructor__const67;
TreeNodePtr _AVtype_constructor_orig_tree;
TreeNodePtr _AVtype_constructor_tree;
TreeNodePtr _AVattribute_specification_tree;
TreeNodePtr _AVfeature_tree;
TreeNodePtr _AVassignment_tree;
TreeNodePtr _AVexpression_class_spec_tree;
TreeNodePtr _AVexpression_class_id_tree;
int _AVexpression_str_in_or_out;
int _AVexpression_IsBound;
int _AVexpression_IsClassSpecifier;
int _AVexpression_ResolvesToClassSpecifier;
int _AVexpression_ResolvesToSingleId;
int _AVexpression_IsClassIdUse;
DefTableKey _AVexpression_Key;
TreeNodePtr _AVname_class_id_tree;
int _AVname_IsClassIdUse;
int _AVname_IsLeftBracket;
int _AVname_ResolvesToSingleId;
DefTableKey _AVname_Key;
TreeNodePtr _AVnamed_expression_orig_tree;
TreeNodePtr _AVnamed_expression_tree;
DefTableKeyList _AVnamed_expressions__const67;
TreeNodePtr _AVnamed_expressions_orig_tree;
TreeNodePtr _AVnamed_expressions_tree;

#if defined(__STDC__) || defined(__cplusplus)
void LIGA_ATTREVAL (NODEPTR _currn)
#else
void LIGA_ATTREVAL (_currn) NODEPTR _currn;
#endif
{(*(VS1MAP[_currn->_prod])) ((NODEPTR)_currn);}
/*SPC(0)*/

#if defined(__STDC__) || defined(__cplusplus)
void _VS0Empty(NODEPTR _currn)
#else
void _VS0Empty(_currn) NODEPTR _currn;
#endif
{ _VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LST_Class_declarationCLASS_DECLARATIONS(_TPPLST_Class_declarationCLASS_DECLARATIONS _currn)
#else
void _VS1LST_Class_declarationCLASS_DECLARATIONS(_currn )
_TPPLST_Class_declarationCLASS_DECLARATIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LST_Class_declarationCLASS_DECLARATIONS(_TPPLST_Class_declarationCLASS_DECLARATIONS _currn)
#else
void _VS2LST_Class_declarationCLASS_DECLARATIONS(_currn )
_TPPLST_Class_declarationCLASS_DECLARATIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_desc1->_ATInhEnv=NewScope((* _IG_incl0));
/*SPC(12185)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LST_Class_declarationCLASS_DECLARATIONS(_TPPLST_Class_declarationCLASS_DECLARATIONS _currn)
#else
void _VS3LST_Class_declarationCLASS_DECLARATIONS(_currn )
_TPPLST_Class_declarationCLASS_DECLARATIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVClass_declaration_InhScopeKey=_currn->_desc1->_ATKey;
/*SPC(3987)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LST_Class_declarationCLASS_DECLARATIONS(_TPPLST_Class_declarationCLASS_DECLARATIONS _currn)
#else
void _VS4LST_Class_declarationCLASS_DECLARATIONS(_currn )
_TPPLST_Class_declarationCLASS_DECLARATIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5LST_Class_declarationCLASS_DECLARATIONS(_TPPLST_Class_declarationCLASS_DECLARATIONS _currn)
#else
void _VS5LST_Class_declarationCLASS_DECLARATIONS(_currn )
_TPPLST_Class_declarationCLASS_DECLARATIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6LST_Class_declarationCLASS_DECLARATIONS(_TPPLST_Class_declarationCLASS_DECLARATIONS _currn)
#else
void _VS6LST_Class_declarationCLASS_DECLARATIONS(_currn )
_TPPLST_Class_declarationCLASS_DECLARATIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7LST_Class_declarationCLASS_DECLARATIONS(_TPPLST_Class_declarationCLASS_DECLARATIONS _currn)
#else
void _VS7LST_Class_declarationCLASS_DECLARATIONS(_currn )
_TPPLST_Class_declarationCLASS_DECLARATIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LST_Parameter_typePARAMETER_TYPES(_TPPLST_Parameter_typePARAMETER_TYPES _currn)
#else
void _VS1LST_Parameter_typePARAMETER_TYPES(_currn )
_TPPLST_Parameter_typePARAMETER_TYPES _currn;

#endif
{
TreeNodePtr _AS1parameter_types_tree_pre;
DefTableKeyList _AS1Params_pre;

_VisitVarDecl()
_VisitEntry();
_AS1parameter_types_tree_pre=_AVparameter_typeparameter_types_tree_post;
/*SPC(0)*/
_AS1Params_pre=_AVParameter_specification_2Params_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Params_pre)),(&( _AS1parameter_types_tree_pre)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LST_Parameter_typePARAMETER_TYPES(_TPPLST_Parameter_typePARAMETER_TYPES _currn)
#else
void _VS2LST_Parameter_typePARAMETER_TYPES(_currn )
_TPPLST_Parameter_typePARAMETER_TYPES _currn;

#endif
{
TreeNodePtr _AS1parameter_types_tree_pre;
DefTableKeyList _AS1Params_pre;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Params_pre)),(&( _AS1parameter_types_tree_pre)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LST_BoundBOUNDS(_TPPLST_BoundBOUNDS _currn)
#else
void _VS1LST_BoundBOUNDS(_currn )
_TPPLST_BoundBOUNDS _currn;

#endif
{
int _AS1_const117;
TreeNodePtr _AS1bounds_tree_pre;
int _AS1One;

_VisitVarDecl()
_VisitEntry();
_AS1bounds_tree_pre=_AVboundbounds_tree_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,int*,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1One)),(&( _AS1bounds_tree_pre)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_Bounds__const118=ADD(IDENTICAL(_AS1One), _AVLST_Bounds__const118);
/*SPC(5127)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LST_BoundBOUNDS(_TPPLST_BoundBOUNDS _currn)
#else
void _VS2LST_BoundBOUNDS(_currn )
_TPPLST_BoundBOUNDS _currn;

#endif
{
int _AS1_const117;
TreeNodePtr _AS1bounds_tree_pre;
int _AS1One;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*,TreeNodePtr*,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1One)),(&( _AS1bounds_tree_pre)),(&( _AS1_const117)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_Bounds__const117=ADD(_AS1_const117, _AVLST_Bounds__const117);
/*SPC(5127)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LST_0BOUNDS(_TPPLST_0BOUNDS _currn)
#else
void _VS1LST_0BOUNDS(_currn )
_TPPLST_0BOUNDS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_Bounds__const118=ZERO();
/*SPC(5127)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LST_0BOUNDS(_TPPLST_0BOUNDS _currn)
#else
void _VS2LST_0BOUNDS(_currn )
_TPPLST_0BOUNDS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_Bounds__const117=ZERO();
/*SPC(5127)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LST_Named_expressionNAMED_EXPRESSIONS(_TPPLST_Named_expressionNAMED_EXPRESSIONS _currn)
#else
void _VS1LST_Named_expressionNAMED_EXPRESSIONS(_currn )
_TPPLST_Named_expressionNAMED_EXPRESSIONS _currn;

#endif
{
TreeNodePtr _AS1named_expressions_tree_pre;

_VisitVarDecl()
_VisitEntry();
_AS1named_expressions_tree_pre=_AVnamed_expressionnamed_expressions_tree_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1named_expressions_tree_pre)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LST_Named_expressionNAMED_EXPRESSIONS(_TPPLST_Named_expressionNAMED_EXPRESSIONS _currn)
#else
void _VS2LST_Named_expressionNAMED_EXPRESSIONS(_currn )
_TPPLST_Named_expressionNAMED_EXPRESSIONS _currn;

#endif
{
TreeNodePtr _AS1named_expressions_tree_pre;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1named_expressions_tree_pre)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LST_ModificationMODIFICATIONS(_TPPLST_ModificationMODIFICATIONS _currn)
#else
void _VS2LST_ModificationMODIFICATIONS(_currn )
_TPPLST_ModificationMODIFICATIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LST_Feature_declarationFEATURE_DECLS(_TPPLST_Feature_declarationFEATURE_DECLS _currn)
#else
void _VS3LST_Feature_declarationFEATURE_DECLS(_currn )
_TPPLST_Feature_declarationFEATURE_DECLS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LST_Class_declaration_2CLASS_DECLARATIONS_2(_TPPLST_Class_declaration_2CLASS_DECLARATIONS_2 _currn)
#else
void _VS4LST_Class_declaration_2CLASS_DECLARATIONS_2(_currn )
_TPPLST_Class_declaration_2CLASS_DECLARATIONS_2 _currn;

#endif
{
PTGNode _AS1_const0;

_VisitVarDecl()
_VisitEntry();
_currn->_desc1->_ATSemEnv=NewScope((* _IG_incl2));
/*SPC(12774)*/
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5LST_Class_declaration_2CLASS_DECLARATIONS_2(_TPPLST_Class_declaration_2CLASS_DECLARATIONS_2 _currn)
#else
void _VS5LST_Class_declaration_2CLASS_DECLARATIONS_2(_currn )
_TPPLST_Class_declaration_2CLASS_DECLARATIONS_2 _currn;

#endif
{
PTGNode _AS1_const0;

_VisitVarDecl()
_VisitEntry();
_AVClass_declaration_2_SemScopeKey=_currn->_desc1->_ATKey;
/*SPC(4309)*/
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS8LST_Class_declaration_2CLASS_DECLARATIONS_2(_TPPLST_Class_declaration_2CLASS_DECLARATIONS_2 _currn)
#else
void _VS8LST_Class_declaration_2CLASS_DECLARATIONS_2(_currn )
_TPPLST_Class_declaration_2CLASS_DECLARATIONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS8MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS8MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS9LST_Class_declaration_2CLASS_DECLARATIONS_2(_TPPLST_Class_declaration_2CLASS_DECLARATIONS_2 _currn)
#else
void _VS9LST_Class_declaration_2CLASS_DECLARATIONS_2(_currn )
_TPPLST_Class_declaration_2CLASS_DECLARATIONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS9MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS9MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS10LST_Class_declaration_2CLASS_DECLARATIONS_2(_TPPLST_Class_declaration_2CLASS_DECLARATIONS_2 _currn)
#else
void _VS10LST_Class_declaration_2CLASS_DECLARATIONS_2(_currn )
_TPPLST_Class_declaration_2CLASS_DECLARATIONS_2 _currn;

#endif
{
PTGNode _AS1_const0;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,PTGNode*)) (VS10MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const0)));
(*(_CALL_VS_((NODEPTR )) (VS10MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_Class_declarations_2__const0=PTGNewLineSeq(_AS1_const0, _AVLST_Class_declarations_2__const0);
/*SPC(5319)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS10LST_0CLASS_DECLARATIONS_2(_TPPLST_0CLASS_DECLARATIONS_2 _currn)
#else
void _VS10LST_0CLASS_DECLARATIONS_2(_currn )
_TPPLST_0CLASS_DECLARATIONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_Class_declarations_2__const0=PTGNull();
/*SPC(5319)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LST_Parameter_type_2PARAMETER_TYPES_2(_TPPLST_Parameter_type_2PARAMETER_TYPES_2 _currn)
#else
void _VS1LST_Parameter_type_2PARAMETER_TYPES_2(_currn )
_TPPLST_Parameter_type_2PARAMETER_TYPES_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
DefTableKeyList _AS1Params_pre;
PTGNode _AS1NameListPtg_pre;

_VisitVarDecl()
_VisitEntry();
_AS1Params_pre=_AVParameter_specification_2Params_post;
/*SPC(0)*/
_AS1NameListPtg_pre=_AVParameter_specification_2NameListPtg_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,DefTableKeyList*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1NameListPtg_pre)),(&( _AS1Params_pre)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LST_Parameter_type_2PARAMETER_TYPES_2(_TPPLST_Parameter_type_2PARAMETER_TYPES_2 _currn)
#else
void _VS2LST_Parameter_type_2PARAMETER_TYPES_2(_currn )
_TPPLST_Parameter_type_2PARAMETER_TYPES_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
DefTableKeyList _AS1Params_pre;
PTGNode _AS1NameListPtg_pre;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,PTGNode*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1NameListPtg_pre)),(&( _AS1Params_pre)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LST_Parameter_type_2PARAMETER_TYPES_2(_TPPLST_Parameter_type_2PARAMETER_TYPES_2 _currn)
#else
void _VS3LST_Parameter_type_2PARAMETER_TYPES_2(_currn )
_TPPLST_Parameter_type_2PARAMETER_TYPES_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
DefTableKeyList _AS1Params_pre;
PTGNode _AS1NameListPtg_pre;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,PTGNode*,DefTableKeyList*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1NameListPtg_pre)),(&( _AS1Params_pre)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_Parameter_types_2__const81=AppDefTableKeyList(_AS1_const81, _AVLST_Parameter_types_2__const81);
/*SPC(5355)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LST_Parameter_type_2PARAMETER_TYPES_2(_TPPLST_Parameter_type_2PARAMETER_TYPES_2 _currn)
#else
void _VS4LST_Parameter_type_2PARAMETER_TYPES_2(_currn )
_TPPLST_Parameter_type_2PARAMETER_TYPES_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
DefTableKeyList _AS1Params_pre;
PTGNode _AS1NameListPtg_pre;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,PTGNode*,DefTableKeyList*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1NameListPtg_pre)),(&( _AS1Params_pre)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_Parameter_types_2__const82=PTGCommaSeq(_AS1_const82, _AVLST_Parameter_types_2__const82);
/*SPC(5355)*/
_AVLST_Parameter_types_2__const83=MAX(_AS1_const83, _AVLST_Parameter_types_2__const83);
/*SPC(5355)*/
_AVLST_Parameter_types_2__const101=PTGCommaSeq(_AS1_const101, _AVLST_Parameter_types_2__const101);
/*SPC(5355)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LST_0PARAMETER_TYPES_2(_TPPLST_0PARAMETER_TYPES_2 _currn)
#else
void _VS3LST_0PARAMETER_TYPES_2(_currn )
_TPPLST_0PARAMETER_TYPES_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_Parameter_types_2__const81=NullDefTableKeyList();
/*SPC(5355)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LST_0PARAMETER_TYPES_2(_TPPLST_0PARAMETER_TYPES_2 _currn)
#else
void _VS4LST_0PARAMETER_TYPES_2(_currn )
_TPPLST_0PARAMETER_TYPES_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_Parameter_types_2__const82=PTGNull();
/*SPC(5355)*/
_AVLST_Parameter_types_2__const83=ONE();
/*SPC(5355)*/
_AVLST_Parameter_types_2__const101=PTGNull();
/*SPC(5355)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LST_Bound_2BOUNDS_2(_TPPLST_Bound_2BOUNDS_2 _currn)
#else
void _VS3LST_Bound_2BOUNDS_2(_currn )
_TPPLST_Bound_2BOUNDS_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
PTGNode _AS1bounds_out_pre;
int _AS1BoundCount_pre;
int _AS1IsDefined;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_Bounds_2__const81=AppDefTableKeyList(_AS1_const81, _AVLST_Bounds_2__const81);
/*SPC(5362)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LST_Bound_2BOUNDS_2(_TPPLST_Bound_2BOUNDS_2 _currn)
#else
void _VS4LST_Bound_2BOUNDS_2(_currn )
_TPPLST_Bound_2BOUNDS_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
PTGNode _AS1bounds_out_pre;
int _AS1BoundCount_pre;
int _AS1IsDefined;

_VisitVarDecl()
_VisitEntry();
_AS1bounds_out_pre=_AVBound_2bounds_out_post;
/*SPC(0)*/
_AS1BoundCount_pre=_AVboundBoundCount_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,PTGNode*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsDefined)),(&( _AS1BoundCount_pre)),(&( _AS1bounds_out_pre)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_Bounds_2__const82=PTGCommaSeq(_AS1_const82, _AVLST_Bounds_2__const82);
/*SPC(5362)*/
_AVLST_Bounds_2__const83=MAX(_AS1_const83, _AVLST_Bounds_2__const83);
/*SPC(5362)*/
_AVLST_Bounds_2__const101=PTGCommaSeq(_AS1_const101, _AVLST_Bounds_2__const101);
/*SPC(5362)*/
_AVLST_Bounds_2__const105=AND(IDENTICAL(_AS1IsDefined), _AVLST_Bounds_2__const105);
/*SPC(5362)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LST_0BOUNDS_2(_TPPLST_0BOUNDS_2 _currn)
#else
void _VS3LST_0BOUNDS_2(_currn )
_TPPLST_0BOUNDS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_Bounds_2__const81=NullDefTableKeyList();
/*SPC(5362)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LST_0BOUNDS_2(_TPPLST_0BOUNDS_2 _currn)
#else
void _VS4LST_0BOUNDS_2(_currn )
_TPPLST_0BOUNDS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_Bounds_2__const82=PTGNull();
/*SPC(5362)*/
_AVLST_Bounds_2__const83=ONE();
/*SPC(5362)*/
_AVLST_Bounds_2__const101=PTGNull();
/*SPC(5362)*/
_AVLST_Bounds_2__const105=ONE();
/*SPC(5362)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LST_Named_expression_2NAMED_EXPRESSIONS_2(_TPPLST_Named_expression_2NAMED_EXPRESSIONS_2 _currn)
#else
void _VS1LST_Named_expression_2NAMED_EXPRESSIONS_2(_currn )
_TPPLST_Named_expression_2NAMED_EXPRESSIONS_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1UnnamedIndex_pre;
int _AS1Index_pre;
PTGNode _AS1named_exp_out_pre;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LST_Named_expression_2NAMED_EXPRESSIONS_2(_TPPLST_Named_expression_2NAMED_EXPRESSIONS_2 _currn)
#else
void _VS2LST_Named_expression_2NAMED_EXPRESSIONS_2(_currn )
_TPPLST_Named_expression_2NAMED_EXPRESSIONS_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1UnnamedIndex_pre;
int _AS1Index_pre;
PTGNode _AS1named_exp_out_pre;

_VisitVarDecl()
_VisitEntry();
_AS1UnnamedIndex_pre=_currn->_ATUnnamedIndex_pre;
/*SPC(0)*/
_AS1Index_pre=_currn->_ATIndex_pre;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,int*,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Index_pre)),(&( _AS1UnnamedIndex_pre)));
_currn->_desc2->_ATUnnamedIndex_pre=_AVNamed_expression_2UnnamedIndex_post;
/*SPC(0)*/
_currn->_desc2->_ATIndex_pre=_AVNamed_expression_2Index_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LST_Named_expression_2NAMED_EXPRESSIONS_2(_TPPLST_Named_expression_2NAMED_EXPRESSIONS_2 _currn)
#else
void _VS3LST_Named_expression_2NAMED_EXPRESSIONS_2(_currn )
_TPPLST_Named_expression_2NAMED_EXPRESSIONS_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1UnnamedIndex_pre;
int _AS1Index_pre;
PTGNode _AS1named_exp_out_pre;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*,int*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Index_pre)),(&( _AS1UnnamedIndex_pre)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_Named_expressions_2__const81=AppDefTableKeyList(_AS1_const81, _AVLST_Named_expressions_2__const81);
/*SPC(5420)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LST_Named_expression_2NAMED_EXPRESSIONS_2(_TPPLST_Named_expression_2NAMED_EXPRESSIONS_2 _currn)
#else
void _VS4LST_Named_expression_2NAMED_EXPRESSIONS_2(_currn )
_TPPLST_Named_expression_2NAMED_EXPRESSIONS_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1UnnamedIndex_pre;
int _AS1Index_pre;
PTGNode _AS1named_exp_out_pre;

_VisitVarDecl()
_VisitEntry();
_AS1named_exp_out_pre=_AVNamed_expression_2named_exp_out_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1named_exp_out_pre)),(&( _AS1Index_pre)),(&( _AS1UnnamedIndex_pre)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_Named_expressions_2__const82=PTGCommaSeq(_AS1_const82, _AVLST_Named_expressions_2__const82);
/*SPC(5420)*/
_AVLST_Named_expressions_2__const83=MAX(_AS1_const83, _AVLST_Named_expressions_2__const83);
/*SPC(5420)*/
_AVLST_Named_expressions_2__const101=PTGCommaSeq(_AS1_const101, _AVLST_Named_expressions_2__const101);
/*SPC(5420)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LST_0NAMED_EXPRESSIONS_2(_TPPLST_0NAMED_EXPRESSIONS_2 _currn)
#else
void _VS3LST_0NAMED_EXPRESSIONS_2(_currn )
_TPPLST_0NAMED_EXPRESSIONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_Named_expressions_2__const81=NullDefTableKeyList();
/*SPC(5420)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LST_0NAMED_EXPRESSIONS_2(_TPPLST_0NAMED_EXPRESSIONS_2 _currn)
#else
void _VS4LST_0NAMED_EXPRESSIONS_2(_currn )
_TPPLST_0NAMED_EXPRESSIONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_Named_expressions_2__const82=PTGNull();
/*SPC(5420)*/
_AVLST_Named_expressions_2__const83=ONE();
/*SPC(5420)*/
_AVLST_Named_expressions_2__const101=PTGNull();
/*SPC(5420)*/
_AVNamed_expression_2UnnamedIndex_post=_currn->_ATUnnamedIndex_pre;
/*SPC(0)*/
_AVNamed_expression_2Index_post=_currn->_ATIndex_pre;
/*SPC(0)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LST_Feature_declaration_2FEATURE_DECLS_2(_TPPLST_Feature_declaration_2FEATURE_DECLS_2 _currn)
#else
void _VS1LST_Feature_declaration_2FEATURE_DECLS_2(_currn )
_TPPLST_Feature_declaration_2FEATURE_DECLS_2 _currn;

#endif
{
PTGNode _AS1_const0;
PTGNode _AS1_const101;
int _AS1_const106;
int _AS1_const107;
int _AS1_const111;
int _AS1_const112;
int _AS1_const114;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LST_Feature_declaration_2FEATURE_DECLS_2(_TPPLST_Feature_declaration_2FEATURE_DECLS_2 _currn)
#else
void _VS2LST_Feature_declaration_2FEATURE_DECLS_2(_currn )
_TPPLST_Feature_declaration_2FEATURE_DECLS_2 _currn;

#endif
{
PTGNode _AS1_const0;
PTGNode _AS1_const101;
int _AS1_const106;
int _AS1_const107;
int _AS1_const111;
int _AS1_const112;
int _AS1_const114;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LST_Feature_declaration_2FEATURE_DECLS_2(_TPPLST_Feature_declaration_2FEATURE_DECLS_2 _currn)
#else
void _VS3LST_Feature_declaration_2FEATURE_DECLS_2(_currn )
_TPPLST_Feature_declaration_2FEATURE_DECLS_2 _currn;

#endif
{
PTGNode _AS1_const0;
PTGNode _AS1_const101;
int _AS1_const106;
int _AS1_const107;
int _AS1_const111;
int _AS1_const112;
int _AS1_const114;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LST_Feature_declaration_2FEATURE_DECLS_2(_TPPLST_Feature_declaration_2FEATURE_DECLS_2 _currn)
#else
void _VS4LST_Feature_declaration_2FEATURE_DECLS_2(_currn )
_TPPLST_Feature_declaration_2FEATURE_DECLS_2 _currn;

#endif
{
PTGNode _AS1_const0;
PTGNode _AS1_const101;
int _AS1_const106;
int _AS1_const107;
int _AS1_const111;
int _AS1_const112;
int _AS1_const114;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5LST_Feature_declaration_2FEATURE_DECLS_2(_TPPLST_Feature_declaration_2FEATURE_DECLS_2 _currn)
#else
void _VS5LST_Feature_declaration_2FEATURE_DECLS_2(_currn )
_TPPLST_Feature_declaration_2FEATURE_DECLS_2 _currn;

#endif
{
PTGNode _AS1_const0;
PTGNode _AS1_const101;
int _AS1_const106;
int _AS1_const107;
int _AS1_const111;
int _AS1_const112;
int _AS1_const114;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const112)));
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_Feature_declarations_2__const112=OR(_AS1_const112, _AVLST_Feature_declarations_2__const112);
/*SPC(5439)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6LST_Feature_declaration_2FEATURE_DECLS_2(_TPPLST_Feature_declaration_2FEATURE_DECLS_2 _currn)
#else
void _VS6LST_Feature_declaration_2FEATURE_DECLS_2(_currn )
_TPPLST_Feature_declaration_2FEATURE_DECLS_2 _currn;

#endif
{
PTGNode _AS1_const0;
PTGNode _AS1_const101;
int _AS1_const106;
int _AS1_const107;
int _AS1_const111;
int _AS1_const112;
int _AS1_const114;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*,PTGNode*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const112)),(&( _AS1_const101)));
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_Feature_declarations_2__const101=PTGCommaSeq(_AS1_const101, _AVLST_Feature_declarations_2__const101);
/*SPC(5439)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7LST_Feature_declaration_2FEATURE_DECLS_2(_TPPLST_Feature_declaration_2FEATURE_DECLS_2 _currn)
#else
void _VS7LST_Feature_declaration_2FEATURE_DECLS_2(_currn )
_TPPLST_Feature_declaration_2FEATURE_DECLS_2 _currn;

#endif
{
PTGNode _AS1_const0;
PTGNode _AS1_const101;
int _AS1_const106;
int _AS1_const107;
int _AS1_const111;
int _AS1_const112;
int _AS1_const114;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,int*,int*,PTGNode*,PTGNode*)) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const114)),(&( _AS1_const112)),(&( _AS1_const111)),(&( _AS1_const107)),(&( _AS1_const106)),(&( _AS1_const101)),(&( _AS1_const0)));
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_AT_const0=PTGNewLineSeq(_AS1_const0, _currn->_desc2->_AT_const0);
/*SPC(5439)*/
_currn->_AT_const106=ADD(_AS1_const106, _currn->_desc2->_AT_const106);
/*SPC(5439)*/
_currn->_AT_const107=ADD(_AS1_const107, _currn->_desc2->_AT_const107);
/*SPC(5439)*/
_currn->_AT_const111=ADD(_AS1_const111, _currn->_desc2->_AT_const111);
/*SPC(5439)*/
_AVLST_Feature_declarations_2__const114=OR(_AS1_const114, _AVLST_Feature_declarations_2__const114);
/*SPC(5439)*/
_currn->_ATshared_init_code_post=_currn->_desc2->_ATshared_init_code_post;
/*SPC(0)*/
_currn->_ATfeature_decls_out_post=_currn->_desc2->_ATfeature_decls_out_post;
/*SPC(0)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5LST_0FEATURE_DECLS_2(_TPPLST_0FEATURE_DECLS_2 _currn)
#else
void _VS5LST_0FEATURE_DECLS_2(_currn )
_TPPLST_0FEATURE_DECLS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_Feature_declarations_2__const112=ZERO();
/*SPC(5439)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6LST_0FEATURE_DECLS_2(_TPPLST_0FEATURE_DECLS_2 _currn)
#else
void _VS6LST_0FEATURE_DECLS_2(_currn )
_TPPLST_0FEATURE_DECLS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_Feature_declarations_2__const101=PTGNull();
/*SPC(5439)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7LST_0FEATURE_DECLS_2(_TPPLST_0FEATURE_DECLS_2 _currn)
#else
void _VS7LST_0FEATURE_DECLS_2(_currn )
_TPPLST_0FEATURE_DECLS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_AT_const0=PTGNull();
/*SPC(5439)*/
_currn->_AT_const106=ZERO();
/*SPC(5439)*/
_currn->_AT_const107=ZERO();
/*SPC(5439)*/
_currn->_AT_const111=ZERO();
/*SPC(5439)*/
_AVLST_Feature_declarations_2__const114=ZERO();
/*SPC(5439)*/
_currn->_ATshared_init_code_post=_AVFeature_declaration_2shared_init_code_post;
/*SPC(0)*/
_currn->_ATfeature_decls_out_post=_AVFeature_declaration_2feature_decls_out_post;
/*SPC(0)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6LST_Parameter_specification_2PARAMETERS_2(_TPPLST_Parameter_specification_2PARAMETERS_2 _currn)
#else
void _VS6LST_Parameter_specification_2PARAMETERS_2(_currn )
_TPPLST_Parameter_specification_2PARAMETERS_2 _currn;

#endif
{
PTGNode _AS1_const87;
PTGNode _AS1_const88;
PTGNode _AS1_const89;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,PTGNode*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const89)),(&( _AS1_const88)),(&( _AS1_const87)));
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_Parameters_2__const87=PTGCommaSeq(_AS1_const87, _AVLST_Parameters_2__const87);
/*SPC(7243)*/
_AVLST_Parameters_2__const88=PTGNewLineSeq(_AS1_const88, _AVLST_Parameters_2__const88);
/*SPC(7243)*/
_AVLST_Parameters_2__const89=PTGNewLineSeq(_AS1_const89, _AVLST_Parameters_2__const89);
/*SPC(7243)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6LST_0PARAMETERS_2(_TPPLST_0PARAMETERS_2 _currn)
#else
void _VS6LST_0PARAMETERS_2(_currn )
_TPPLST_0PARAMETERS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_Parameters_2__const87=PTGNull();
/*SPC(7243)*/
_AVLST_Parameters_2__const88=PTGNull();
/*SPC(7243)*/
_AVLST_Parameters_2__const89=PTGNull();
/*SPC(7243)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LST_Label_range_2LABEL_LIST_2(_TPPLST_Label_range_2LABEL_LIST_2 _currn)
#else
void _VS3LST_Label_range_2LABEL_LIST_2(_currn )
_TPPLST_Label_range_2LABEL_LIST_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_Label_list_2__const81=AppDefTableKeyList(_AS1_const81, _AVLST_Label_list_2__const81);
/*SPC(5516)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LST_Label_range_2LABEL_LIST_2(_TPPLST_Label_range_2LABEL_LIST_2 _currn)
#else
void _VS4LST_Label_range_2LABEL_LIST_2(_currn )
_TPPLST_Label_range_2LABEL_LIST_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_Label_list_2__const82=PTGCommaSeq(_AS1_const82, _AVLST_Label_list_2__const82);
/*SPC(5516)*/
_AVLST_Label_list_2__const83=MAX(_AS1_const83, _AVLST_Label_list_2__const83);
/*SPC(5516)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LST_0LABEL_LIST_2(_TPPLST_0LABEL_LIST_2 _currn)
#else
void _VS3LST_0LABEL_LIST_2(_currn )
_TPPLST_0LABEL_LIST_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_Label_list_2__const81=NullDefTableKeyList();
/*SPC(5516)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LST_0LABEL_LIST_2(_TPPLST_0LABEL_LIST_2 _currn)
#else
void _VS4LST_0LABEL_LIST_2(_currn )
_TPPLST_0LABEL_LIST_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_Label_list_2__const82=PTGNull();
/*SPC(5516)*/
_AVLST_Label_list_2__const83=ONE();
/*SPC(5516)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LST_class_declarationCLASS_DECLARATIONS_O(_TPPLST_class_declarationCLASS_DECLARATIONS_O _currn)
#else
void _VS1LST_class_declarationCLASS_DECLARATIONS_O(_currn )
_TPPLST_class_declarationCLASS_DECLARATIONS_O _currn;

#endif
{
DefTableKeyList _AS1ReachableClasses;

_VisitVarDecl()
_VisitEntry();
_currn->_desc1->_ATTypeGenEnv=NewScope((* _IG_incl5));
/*SPC(12522)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LST_class_declarationCLASS_DECLARATIONS_O(_TPPLST_class_declarationCLASS_DECLARATIONS_O _currn)
#else
void _VS3LST_class_declarationCLASS_DECLARATIONS_O(_currn )
_TPPLST_class_declarationCLASS_DECLARATIONS_O _currn;

#endif
{
DefTableKeyList _AS1ReachableClasses;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1ReachableClasses)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_class_declarations__const45=AppDefTableKeyList(IDENTICAL(_AS1ReachableClasses), _AVLST_class_declarations__const45);
/*SPC(70)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LST_class_declarationCLASS_DECLARATIONS_O(_TPPLST_class_declarationCLASS_DECLARATIONS_O _currn)
#else
void _VS4LST_class_declarationCLASS_DECLARATIONS_O(_currn )
_TPPLST_class_declarationCLASS_DECLARATIONS_O _currn;

#endif
{
DefTableKeyList _AS1ReachableClasses;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1ReachableClasses)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5LST_class_declarationCLASS_DECLARATIONS_O(_TPPLST_class_declarationCLASS_DECLARATIONS_O _currn)
#else
void _VS5LST_class_declarationCLASS_DECLARATIONS_O(_currn )
_TPPLST_class_declarationCLASS_DECLARATIONS_O _currn;

#endif
{
DefTableKeyList _AS1ReachableClasses;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1ReachableClasses)));
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6LST_class_declarationCLASS_DECLARATIONS_O(_TPPLST_class_declarationCLASS_DECLARATIONS_O _currn)
#else
void _VS6LST_class_declarationCLASS_DECLARATIONS_O(_currn )
_TPPLST_class_declarationCLASS_DECLARATIONS_O _currn;

#endif
{
DefTableKeyList _AS1ReachableClasses;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1ReachableClasses)));
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_class_declarations__const40=ADD(IDENTICAL(_currn->_desc1->_ATIsMainClass), _AVLST_class_declarations__const40);
/*SPC(70)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7LST_class_declarationCLASS_DECLARATIONS_O(_TPPLST_class_declarationCLASS_DECLARATIONS_O _currn)
#else
void _VS7LST_class_declarationCLASS_DECLARATIONS_O(_currn )
_TPPLST_class_declarationCLASS_DECLARATIONS_O _currn;

#endif
{
DefTableKeyList _AS1ReachableClasses;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1ReachableClasses)));
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LST_0CLASS_DECLARATIONS_O(_TPPLST_0CLASS_DECLARATIONS_O _currn)
#else
void _VS3LST_0CLASS_DECLARATIONS_O(_currn )
_TPPLST_0CLASS_DECLARATIONS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_class_declarations__const45=NullDefTableKeyList();
/*SPC(70)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6LST_0CLASS_DECLARATIONS_O(_TPPLST_0CLASS_DECLARATIONS_O _currn)
#else
void _VS6LST_0CLASS_DECLARATIONS_O(_currn )
_TPPLST_0CLASS_DECLARATIONS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_class_declarations__const40=ZERO();
/*SPC(70)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LST_parameter_typePARAMETER_TYPES_O(_TPPLST_parameter_typePARAMETER_TYPES_O _currn)
#else
void _VS1LST_parameter_typePARAMETER_TYPES_O(_currn )
_TPPLST_parameter_typePARAMETER_TYPES_O _currn;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1parameter_types_orig_tree_pre;
TreeNodePtr _AS1parameter_types_tree_pre;

_VisitVarDecl()
_VisitEntry();
_AS1parameter_types_orig_tree_pre=_AVparameter_typeparameter_types_orig_tree_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1parameter_types_orig_tree_pre)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LST_parameter_typePARAMETER_TYPES_O(_TPPLST_parameter_typePARAMETER_TYPES_O _currn)
#else
void _VS2LST_parameter_typePARAMETER_TYPES_O(_currn )
_TPPLST_parameter_typePARAMETER_TYPES_O _currn;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1parameter_types_orig_tree_pre;
TreeNodePtr _AS1parameter_types_tree_pre;

_VisitVarDecl()
_VisitEntry();
_AS1parameter_types_tree_pre=_AVparameter_typeparameter_types_tree_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1parameter_types_tree_pre)),(&( _AS1parameter_types_orig_tree_pre)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_parameter_types__const67=AppDefTableKeyList(_AS1_const67, _AVLST_parameter_types__const67);
/*SPC(133)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LST_parameter_typePARAMETER_TYPES_O(_TPPLST_parameter_typePARAMETER_TYPES_O _currn)
#else
void _VS3LST_parameter_typePARAMETER_TYPES_O(_currn )
_TPPLST_parameter_typePARAMETER_TYPES_O _currn;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1parameter_types_orig_tree_pre;
TreeNodePtr _AS1parameter_types_tree_pre;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1parameter_types_tree_pre)),(&( _AS1parameter_types_orig_tree_pre)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LST_0PARAMETER_TYPES_O(_TPPLST_0PARAMETER_TYPES_O _currn)
#else
void _VS2LST_0PARAMETER_TYPES_O(_currn )
_TPPLST_0PARAMETER_TYPES_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_parameter_types__const67=NullDefTableKeyList();
/*SPC(133)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LST_boundBOUNDS_O(_TPPLST_boundBOUNDS_O _currn)
#else
void _VS2LST_boundBOUNDS_O(_currn )
_TPPLST_boundBOUNDS_O _currn;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1bounds_orig_tree_pre;
TreeNodePtr _AS1starbounds_tree_pre;
TreeNodePtr _AS1bounds_tree_pre;
int _AS1ClassBoundCount_pre;
int _AS1BoundCount_pre;

_VisitVarDecl()
_VisitEntry();
_AS1bounds_orig_tree_pre=_AVboundbounds_orig_tree_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1bounds_orig_tree_pre)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LST_boundBOUNDS_O(_TPPLST_boundBOUNDS_O _currn)
#else
void _VS3LST_boundBOUNDS_O(_currn )
_TPPLST_boundBOUNDS_O _currn;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1bounds_orig_tree_pre;
TreeNodePtr _AS1starbounds_tree_pre;
TreeNodePtr _AS1bounds_tree_pre;
int _AS1ClassBoundCount_pre;
int _AS1BoundCount_pre;

_VisitVarDecl()
_VisitEntry();
_AS1starbounds_tree_pre=_AVboundstarbounds_tree_post;
/*SPC(0)*/
_AS1bounds_tree_pre=_AVboundbounds_tree_post;
/*SPC(0)*/
_AS1BoundCount_pre=_AVboundBoundCount_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1BoundCount_pre)),(&( _AS1bounds_tree_pre)),(&( _AS1starbounds_tree_pre)),(&( _AS1bounds_orig_tree_pre)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_bounds__const67=AppDefTableKeyList(_AS1_const67, _AVLST_bounds__const67);
/*SPC(108)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LST_boundBOUNDS_O(_TPPLST_boundBOUNDS_O _currn)
#else
void _VS4LST_boundBOUNDS_O(_currn )
_TPPLST_boundBOUNDS_O _currn;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1bounds_orig_tree_pre;
TreeNodePtr _AS1starbounds_tree_pre;
TreeNodePtr _AS1bounds_tree_pre;
int _AS1ClassBoundCount_pre;
int _AS1BoundCount_pre;

_VisitVarDecl()
_VisitEntry();
_AS1ClassBoundCount_pre=_AVboundClassBoundCount_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1BoundCount_pre)),(&( _AS1ClassBoundCount_pre)),(&( _AS1bounds_tree_pre)),(&( _AS1starbounds_tree_pre)),(&( _AS1bounds_orig_tree_pre)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LST_0BOUNDS_O(_TPPLST_0BOUNDS_O _currn)
#else
void _VS3LST_0BOUNDS_O(_currn )
_TPPLST_0BOUNDS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_bounds__const67=NullDefTableKeyList();
/*SPC(108)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LST_named_expressionNAMED_EXPRESSIONS_O(_TPPLST_named_expressionNAMED_EXPRESSIONS_O _currn)
#else
void _VS1LST_named_expressionNAMED_EXPRESSIONS_O(_currn )
_TPPLST_named_expressionNAMED_EXPRESSIONS_O _currn;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1named_expressions_orig_tree_pre;
TreeNodePtr _AS1named_expressions_tree_pre;

_VisitVarDecl()
_VisitEntry();
_AS1named_expressions_orig_tree_pre=_AVnamed_expressionnamed_expressions_orig_tree_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1named_expressions_orig_tree_pre)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LST_named_expressionNAMED_EXPRESSIONS_O(_TPPLST_named_expressionNAMED_EXPRESSIONS_O _currn)
#else
void _VS2LST_named_expressionNAMED_EXPRESSIONS_O(_currn )
_TPPLST_named_expressionNAMED_EXPRESSIONS_O _currn;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1named_expressions_orig_tree_pre;
TreeNodePtr _AS1named_expressions_tree_pre;

_VisitVarDecl()
_VisitEntry();
_AS1named_expressions_tree_pre=_AVnamed_expressionnamed_expressions_tree_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1named_expressions_tree_pre)),(&( _AS1named_expressions_orig_tree_pre)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLST_named_expressions__const67=AppDefTableKeyList(_AS1_const67, _AVLST_named_expressions__const67);
/*SPC(6)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LST_named_expressionNAMED_EXPRESSIONS_O(_TPPLST_named_expressionNAMED_EXPRESSIONS_O _currn)
#else
void _VS3LST_named_expressionNAMED_EXPRESSIONS_O(_currn )
_TPPLST_named_expressionNAMED_EXPRESSIONS_O _currn;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1named_expressions_orig_tree_pre;
TreeNodePtr _AS1named_expressions_tree_pre;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1named_expressions_tree_pre)),(&( _AS1named_expressions_orig_tree_pre)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LST_0NAMED_EXPRESSIONS_O(_TPPLST_0NAMED_EXPRESSIONS_O _currn)
#else
void _VS2LST_0NAMED_EXPRESSIONS_O(_currn )
_TPPLST_0NAMED_EXPRESSIONS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLST_named_expressions__const67=NullDefTableKeyList();
/*SPC(6)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1rule_1(_TPPrule_1 _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1rule_1(_currn ,_AS0orig_tree)
_TPPrule_1 _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_MOD_O, NoKey);
/*SPC(10025)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_MOD, NoKey);
/*SPC(8963)*/
_currn->_ATstr_in_or_out=0;
/*SPC(7338)*/
_AVname_IsLeftBracket=0;
/*SPC(4909)*/
_AVname_ResolvesToSingleId=0;
/*SPC(4908)*/
_AVname_Key=NoKey;
/*SPC(4062)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1rule_2(_TPPrule_2 _currn)
#else
void _VS1rule_2(_currn )
_TPPrule_2 _currn;

#endif
{
STPtr* _IL_incl135;
int* _IL_incl138;
int* _IL_incl137;
Environment* _IL_incl132;
int* _IL_incl131;
DefTableKey* _IL_incl122;
DefTableKey* _IL_incl118;
int* _IL_incl104;
CTValuePtr* _IL_incl105;
STPtr* _IL_incl99;
STPtr* _IL_incl97;
int* _IL_incl94;
int* _IL_incl90;
int* _IL_incl92;
DefTableKey* _IL_incl91;
int* _IL_incl87;
STPtr* _IL_incl84;
STPtr* _IL_incl44;
int* _IL_incl41;
int* _IL_incl31;
int* _IL_incl30;
Environment* _IL_incl23;
int* _IL_incl22;
DefTableKeyList* _IL_incl11;
Environment* _IL_incl13;
Environment* _IL_incl5;
Environment* _IL_incl2;
Environment* _IL_incl0;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATintNull);
_IL_incl137=_IG_incl137;_IG_incl137= &(_currn->_ATintNull);
_IL_incl132=_IG_incl132;_IG_incl132= &(_currn->_ATTypeInhEnv);
_IL_incl131=_IG_incl131;_IG_incl131= &(_currn->_ATintNull);
_IL_incl122=_IG_incl122;_IG_incl122= &(_currn->_ATAttributeDeclKey);
_IL_incl118=_IG_incl118;_IG_incl118= &(_currn->_ATMethodBodyKey);
_IL_incl104=_IG_incl104;_IG_incl104= &(_currn->_ATintNull);
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATCTValueNull);
_IL_incl99=_IG_incl99;_IG_incl99= &(_currn->_ATSTPtrNull);
_IL_incl97=_IG_incl97;_IG_incl97= &(_currn->_ATBoolPolyTypeSem);
_IL_incl94=_IG_incl94;_IG_incl94= &(_currn->_ATintNull);
_IL_incl90=_IG_incl90;_IG_incl90= &(_currn->_ATintNull);
_IL_incl92=_IG_incl92;_IG_incl92= &(_currn->_ATintNull);
_IL_incl91=_IG_incl91;_IG_incl91= &(_currn->_ATDefTableKeyNull);
_IL_incl87=_IG_incl87;_IG_incl87= &(_currn->_ATintNull);
_IL_incl84=_IG_incl84;_IG_incl84= &(_currn->_ATBoolTypeSem);
_IL_incl44=_IG_incl44;_IG_incl44= &(_currn->_ATUnivType);
_IL_incl41=_IG_incl41;_IG_incl41= &(_currn->_ATintNull);
_IL_incl31=_IG_incl31;_IG_incl31= &(_currn->_ATintNull);
_IL_incl30=_IG_incl30;_IG_incl30= &(_currn->_ATintNull);
_IL_incl23=_IG_incl23;_IG_incl23= &(_currn->_ATTypeSemEnv);
_IL_incl22=_IG_incl22;_IG_incl22= &(_currn->_ATintNull);
_IL_incl11=_IG_incl11;_IG_incl11= &(_currn->_ATReachableClasses);
_IL_incl13=_IG_incl13;_IG_incl13= &(_currn->_ATTypeGenEnv);
_IL_incl5=_IG_incl5;_IG_incl5= &(_currn->_ATTypeGenEnv);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_IL_incl0=_IG_incl0;_IG_incl0= &(_currn->_ATInhEnv);
_currn->_ATTypeGenEnv=TypeGenRootEnv;
/*SPC(12428)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATReachableClasses=_AVclass_declarations__const45;
/*SPC(2944)*/
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATTypeInhEnv=TypeInhRootEnv;
/*SPC(12994)*/
{ _currn->_desc2 = (_TSPClass_declarations) MkClass_declarations(NoPosition, BuildTree(_AVclass_declarations_tree));
  if ((NODEPTR)_currn->_desc2 == NULLNODEPTR)
    message (DEADLY, "generated tree is not of type Class_declarations", 0, NoPosition);
};
/*SPC(8516)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATInhEnv=InhRootEnv;
/*SPC(12171)*/
_currn->_ATType=NoType;
/*SPC(10548)*/
CreateSpecialTypes();
/*SPC(7260)*/
_currn->_ATintNull=0;
/*SPC(2671)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATMethodBodyKey=NewKey();
/*SPC(8416)*/
_currn->_ATAttributeDeclKey=NewKey();
/*SPC(8421)*/

if (NOT(_AVclass_declarations__const40)) {
message(DEADLY, CatStrStr(CatStrInd("main class ", GetMainClassName()), " not found"), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(2921)*/
ResetUsedPolymorph(GetPreDefKey(MakeName("OB"), _currn->_ATTypeInhEnv, (&( _currn->_AT_pos))), 1);
ResetUsedPolymorph(GetPreDefKey(MakeName("VALUE"), _currn->_ATTypeInhEnv, (&( _currn->_AT_pos))), 1);
ResetUsedPolymorph(GetPreDefKey(MakeName("REFERENCE"), _currn->_ATTypeInhEnv, (&( _currn->_AT_pos))), 1);
ResetUsedPolymorph(GetPreDefKey(MakeName("EXCEPTION"), _currn->_ATTypeInhEnv, (&( _currn->_AT_pos))), 1);
ResetUsedPolymorph(GetPreDefKey(MakeName("BOOL"), _currn->_ATTypeInhEnv, (&( _currn->_AT_pos))), 1);
ResetUsedPolymorph(GetPreDefKey(MakeName("BYTE"), _currn->_ATTypeInhEnv, (&( _currn->_AT_pos))), 1);
ResetUsedPolymorph(GetPreDefKey(MakeName("CHAR"), _currn->_ATTypeInhEnv, (&( _currn->_AT_pos))), 1);
ResetUsedPolymorph(GetPreDefKey(MakeName("TYPE"), _currn->_ATTypeInhEnv, (&( _currn->_AT_pos))), 1);
ResetUsedPolymorph(GetPreDefKey(MakeName("SHORT_INT"), _currn->_ATTypeInhEnv, (&( _currn->_AT_pos))), 1);
ResetUsedPolymorph(GetPreDefKey(MakeName("INT"), _currn->_ATTypeInhEnv, (&( _currn->_AT_pos))), 1);
ResetUsedPolymorph(GetPreDefKey(MakeName("LONG_INT"), _currn->_ATTypeInhEnv, (&( _currn->_AT_pos))), 1);
ResetUsedPolymorph(GetPreDefKey(MakeName("INTINF"), _currn->_ATTypeInhEnv, (&( _currn->_AT_pos))), 1);
ResetUsedPolymorph(GetPreDefKey(MakeName("SHORT_UNSIGNED"), _currn->_ATTypeInhEnv, (&( _currn->_AT_pos))), 1);
ResetUsedPolymorph(GetPreDefKey(MakeName("UNSIGNED"), _currn->_ATTypeInhEnv, (&( _currn->_AT_pos))), 1);
ResetUsedPolymorph(GetPreDefKey(MakeName("LONG_UNSIGNED"), _currn->_ATTypeInhEnv, (&( _currn->_AT_pos))), 1);
ResetUsedPolymorph(GetPreDefKey(MakeName("FLT"), _currn->_ATTypeInhEnv, (&( _currn->_AT_pos))), 1);
ResetUsedPolymorph(GetPreDefKey(MakeName("FLTD"), _currn->_ATTypeInhEnv, (&( _currn->_AT_pos))), 1);
;
;
/*SPC(11325)*/
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATTypeSemEnv=TypeSemRootEnv;
/*SPC(12664)*/
{ _currn->_desc3 = (_TSPClass_declarations_2) MkClass_declarations_2(NoPosition, BuildTree(_AVClass_declarations_tree));
  if ((NODEPTR)_currn->_desc3 == NULLNODEPTR)
    message (DEADLY, "generated tree is not of type Class_declarations_2", 0, NoPosition);
};
/*SPC(7432)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_currn->_ATSemEnv=SemRootEnv;
/*SPC(12760)*/
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVprogram_UnivKey=NewKey();
/*SPC(11182)*/
_currn->_ATUnivType=
(ResetSemScope(_AVprogram_UnivKey, EnvOf(BindKey(EnvOf(BindKey(EnvOf(BindKey(EnvOf(BindKey(EnvOf(BindKey(EnvOf(BindKey(EnvOf(BindKey(NewScope(_currn->_ATTypeSemEnv), MakeName("plus"), NewKey())), MakeName("minus"), NewKey())), MakeName("times"), NewKey())), MakeName("modulo"), NewKey())), MakeName("divide"), NewKey())), MakeName("pow"), NewKey())), MakeName("quotient"), NewKey()))), NewType(_AVprogram_UnivKey, NULLIS, MakeName("UNIVERSAL")))
;
/*SPC(11183)*/
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
(*(_CALL_VS_((NODEPTR )) (VS8MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_currn->_ATBoolTypeSem=GetType(GetPreDefKey(MakeName("BOOL"), _currn->_ATTypeSemEnv, (&( _currn->_AT_pos))), NoType);
/*SPC(10853)*/
_currn->_ATCTValueNull=NULLValue;
/*SPC(2673)*/
_currn->_ATDefTableKeyNull=NoKey;
/*SPC(2672)*/
(*(_CALL_VS_((NODEPTR )) (VS9MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATBoolPolyTypeSem=GetType(GetPreDefKey(MakeName("$BOOL"), _currn->_ATTypeSemEnv, (&( _currn->_AT_pos))), NoType);
/*SPC(10858)*/
_currn->_ATSTPtrNull=NoType;
/*SPC(2675)*/
(*(_CALL_VS_((NODEPTR )) (VS10MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVprogram_PTGNull=PTGNULL;
/*SPC(2676)*/
_AVprogram_TreeNodePtrNull=NULL;
/*SPC(2674)*/
_AVprogram_out=PTGcilAssembly("extern mscorlib", PTGcilAssembly(StringTable(GetMainClassName()), PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(CreateStreamBase(), _AVClass_declarations_2__const0), CreateMethodTypes()), _AVClass_declarations_2_out)));
/*SPC(1749)*/
PTGOutFile(CatStrStr(StringTable(GetOutputFile()), ".il"), _AVprogram_out);

if (LongErrorReporting) {
lisedit(MapFile(PTRSELECT((&( _currn->_AT_pos)), line)), stderr, 0, 1);

} else {
}
;

if (NOT(OutputCIL)) {
system(CatStrStr(CatStrStr(GetIlasm(), StringTable(GetOutputFile())), ".il"));
remove(CatStrStr(StringTable(GetOutputFile()), ".il"));
;

} else {
}
;
;
/*SPC(1769)*/
_IG_incl135=_IL_incl135;
_IG_incl138=_IL_incl138;
_IG_incl137=_IL_incl137;
_IG_incl132=_IL_incl132;
_IG_incl131=_IL_incl131;
_IG_incl122=_IL_incl122;
_IG_incl118=_IL_incl118;
_IG_incl104=_IL_incl104;
_IG_incl105=_IL_incl105;
_IG_incl99=_IL_incl99;
_IG_incl97=_IL_incl97;
_IG_incl94=_IL_incl94;
_IG_incl90=_IL_incl90;
_IG_incl92=_IL_incl92;
_IG_incl91=_IL_incl91;
_IG_incl87=_IL_incl87;
_IG_incl84=_IL_incl84;
_IG_incl44=_IL_incl44;
_IG_incl41=_IL_incl41;
_IG_incl31=_IL_incl31;
_IG_incl30=_IL_incl30;
_IG_incl23=_IL_incl23;
_IG_incl22=_IL_incl22;
_IG_incl11=_IL_incl11;
_IG_incl13=_IL_incl13;
_IG_incl5=_IL_incl5;
_IG_incl2=_IL_incl2;
_IG_incl0=_IL_incl0;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ASSERTION_STATEMENT_O(_TPPASSERTION_STATEMENT_O _currn)
#else
void _VS1ASSERTION_STATEMENT_O(_currn )
_TPPASSERTION_STATEMENT_O _currn;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_IsClassSpecifier=0;
/*SPC(4918)*/
_AVexpression_IsClassIdUse=0;
/*SPC(4916)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ASSERTION_STATEMENT_O(_TPPASSERTION_STATEMENT_O _currn)
#else
void _VS2ASSERTION_STATEMENT_O(_currn )
_TPPASSERTION_STATEMENT_O _currn;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_str_in_or_out=0;
/*SPC(7334)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
_AVassertion_statement_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkASSERTION_STATEMENT, _AS1tree, NoKey);
/*SPC(9671)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ASSERTION_STATEMENT_O(_TPPASSERTION_STATEMENT_O _currn)
#else
void _VS3ASSERTION_STATEMENT_O(_currn )
_TPPASSERTION_STATEMENT_O _currn;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_IsBound=0;
/*SPC(11350)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1RAISE_STATEMENT_O(_TPPRAISE_STATEMENT_O _currn)
#else
void _VS1RAISE_STATEMENT_O(_currn )
_TPPRAISE_STATEMENT_O _currn;

#endif
{
TreeNodePtr _AS1class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2RAISE_STATEMENT_O(_TPPRAISE_STATEMENT_O _currn)
#else
void _VS2RAISE_STATEMENT_O(_currn )
_TPPRAISE_STATEMENT_O _currn;

#endif
{
TreeNodePtr _AS1class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1class_spec_tree)));
_AVraise_statement_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkRAISE_STATEMENT, _currn->_desc1->_ATtree, NoKey);
/*SPC(9666)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3RAISE_STATEMENT_O(_TPPRAISE_STATEMENT_O _currn)
#else
void _VS3RAISE_STATEMENT_O(_currn )
_TPPRAISE_STATEMENT_O _currn;

#endif
{
TreeNodePtr _AS1class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1RETURN_STATEMENT_O(_TPPRETURN_STATEMENT_O _currn)
#else
void _VS1RETURN_STATEMENT_O(_currn )
_TPPRETURN_STATEMENT_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkRETURN_STATEMENT, NoKey);
/*SPC(9662)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1RESUME_STATEMENT_O(_TPPRESUME_STATEMENT_O _currn)
#else
void _VS1RESUME_STATEMENT_O(_currn )
_TPPRESUME_STATEMENT_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkRESUME_STATEMENT, NoKey);
/*SPC(9658)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BREAK_STATEMENT_O(_TPPBREAK_STATEMENT_O _currn)
#else
void _VS1BREAK_STATEMENT_O(_currn )
_TPPBREAK_STATEMENT_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkBREAK_STATEMENT, NoKey);
/*SPC(9654)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LOOP_O(_TPPLOOP_O _currn)
#else
void _VS1LOOP_O(_currn )
_TPPLOOP_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LOOP_O(_TPPLOOP_O _currn)
#else
void _VS2LOOP_O(_currn )
_TPPLOOP_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVloop_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkLOOP, _AS1tree, NoKey);
/*SPC(9650)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LOOP_O(_TPPLOOP_O _currn)
#else
void _VS3LOOP_O(_currn )
_TPPLOOP_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LOOP_EXP_O(_TPPLOOP_EXP_O _currn)
#else
void _VS1LOOP_EXP_O(_currn )
_TPPLOOP_EXP_O _currn;

#endif
{
TreeNodePtr _AS2tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_IsClassSpecifier=0;
/*SPC(4918)*/
_AVexpression_IsClassIdUse=0;
/*SPC(4916)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LOOP_EXP_O(_TPPLOOP_EXP_O _currn)
#else
void _VS2LOOP_EXP_O(_currn )
_TPPLOOP_EXP_O _currn;

#endif
{
TreeNodePtr _AS2tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_str_in_or_out=0;
/*SPC(7334)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVloop_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkLOOP_EXP, _AS1tree, _AS2tree, NoKey);
/*SPC(9645)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LOOP_EXP_O(_TPPLOOP_EXP_O _currn)
#else
void _VS3LOOP_EXP_O(_currn )
_TPPLOOP_EXP_O _currn;

#endif
{
TreeNodePtr _AS2tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_IsBound=0;
/*SPC(11350)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPES_LST_O(_TPPTYPES_LST_O _currn)
#else
void _VS1TYPES_LST_O(_currn )
_TPPTYPES_LST_O _currn;

#endif
{
TreeNodePtr _AS2class_spec_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPES_LST_O(_TPPTYPES_LST_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2TYPES_LST_O(_currn ,_AS0tree)
_TPPTYPES_LST_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS2class_spec_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkTYPES_LST, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(9640)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPES_LST_O(_TPPTYPES_LST_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3TYPES_LST_O(_currn ,_AS0tree)
_TPPTYPES_LST_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS2class_spec_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPES_EMPTY_O(_TPPTYPES_EMPTY_O _currn)
#else
void _VS1TYPES_EMPTY_O(_currn )
_TPPTYPES_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPES_EMPTY_O(_TPPTYPES_EMPTY_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2TYPES_EMPTY_O(_currn ,_AS0tree)
_TPPTYPES_EMPTY_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkTYPES_EMPTY, NoKey);
/*SPC(9636)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPES_EMPTY_O(_TPPTYPES_EMPTY_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3TYPES_EMPTY_O(_currn ,_AS0tree)
_TPPTYPES_EMPTY_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_TYPES_BLOCK_O(_TPPWHEN_TYPES_BLOCK_O _currn)
#else
void _VS1WHEN_TYPES_BLOCK_O(_currn )
_TPPWHEN_TYPES_BLOCK_O _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_TYPES_BLOCK_O(_TPPWHEN_TYPES_BLOCK_O _currn)
#else
void _VS2WHEN_TYPES_BLOCK_O(_currn )
_TPPWHEN_TYPES_BLOCK_O _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVwhen_types_block_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_TYPES_BLOCK, _AS1tree, _AS2tree, NoKey);
/*SPC(9631)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_TYPES_BLOCK_O(_TPPWHEN_TYPES_BLOCK_O _currn)
#else
void _VS3WHEN_TYPES_BLOCK_O(_currn )
_TPPWHEN_TYPES_BLOCK_O _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_TYPES_BLOCKS_EMPTY_O(_TPPWHEN_TYPES_BLOCKS_EMPTY_O _currn)
#else
void _VS1WHEN_TYPES_BLOCKS_EMPTY_O(_currn )
_TPPWHEN_TYPES_BLOCKS_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_TYPES_BLOCKS_EMPTY_O(_TPPWHEN_TYPES_BLOCKS_EMPTY_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2WHEN_TYPES_BLOCKS_EMPTY_O(_currn ,_AS0tree)
_TPPWHEN_TYPES_BLOCKS_EMPTY_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkWHEN_TYPES_BLOCKS_EMPTY, NoKey);
/*SPC(9626)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_TYPES_BLOCKS_EMPTY_O(_TPPWHEN_TYPES_BLOCKS_EMPTY_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3WHEN_TYPES_BLOCKS_EMPTY_O(_currn ,_AS0tree)
_TPPWHEN_TYPES_BLOCKS_EMPTY_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_TYPES_BLOCKS_O(_TPPWHEN_TYPES_BLOCKS_O _currn)
#else
void _VS1WHEN_TYPES_BLOCKS_O(_currn )
_TPPWHEN_TYPES_BLOCKS_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_TYPES_BLOCKS_O(_TPPWHEN_TYPES_BLOCKS_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2WHEN_TYPES_BLOCKS_O(_currn ,_AS0tree)
_TPPWHEN_TYPES_BLOCKS_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_TYPES_BLOCKS, _AS1tree, _AVwhen_types_block_tree, NoKey);
/*SPC(9621)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_TYPES_BLOCKS_O(_TPPWHEN_TYPES_BLOCKS_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3WHEN_TYPES_BLOCKS_O(_currn ,_AS0tree)
_TPPWHEN_TYPES_BLOCKS_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CASE_STATEMENT_ATT_O(_TPPTYPE_CASE_STATEMENT_ATT_O _currn)
#else
void _VS1TYPE_CASE_STATEMENT_ATT_O(_currn )
_TPPTYPE_CASE_STATEMENT_ATT_O _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CASE_STATEMENT_ATT_O(_TPPTYPE_CASE_STATEMENT_ATT_O _currn)
#else
void _VS2TYPE_CASE_STATEMENT_ATT_O(_currn )
_TPPTYPE_CASE_STATEMENT_ATT_O _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVtype_case_statement_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkTYPE_CASE_STATEMENT_ATT, _currn->_desc1->_ATtree, _AS2tree, NoKey);
/*SPC(9616)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CASE_STATEMENT_ATT_O(_TPPTYPE_CASE_STATEMENT_ATT_O _currn)
#else
void _VS3TYPE_CASE_STATEMENT_ATT_O(_currn )
_TPPTYPE_CASE_STATEMENT_ATT_O _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CASE_STATEMENT_O(_TPPTYPE_CASE_STATEMENT_O _currn)
#else
void _VS1TYPE_CASE_STATEMENT_O(_currn )
_TPPTYPE_CASE_STATEMENT_O _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1orig_tree;

_VisitVarDecl()
_VisitEntry();
_AVname_IsClassIdUse=0;
/*SPC(4910)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CASE_STATEMENT_O(_TPPTYPE_CASE_STATEMENT_O _currn)
#else
void _VS2TYPE_CASE_STATEMENT_O(_currn )
_TPPTYPE_CASE_STATEMENT_O _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVtype_case_statement_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkTYPE_CASE_STATEMENT, _currn->_desc1->_ATtree, _AS2tree, NoKey);
/*SPC(9611)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CASE_STATEMENT_O(_TPPTYPE_CASE_STATEMENT_O _currn)
#else
void _VS3TYPE_CASE_STATEMENT_O(_currn )
_TPPTYPE_CASE_STATEMENT_O _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CASE_LABEL_DES_O(_TPPCASE_LABEL_DES_O _currn)
#else
void _VS1CASE_LABEL_DES_O(_currn )
_TPPCASE_LABEL_DES_O _currn;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1arr_bounds_tree;
TreeNodePtr _AS1class_id_tree;
TreeNodePtr _AS1orig_tree;
int _AS1is_notequal;
TreeNodePtr _AS1tree;
int _AS1ResolvesToArrayAccessOrSingleId;
int _AS1ResolvesToSingleId;
int _AS1IsClassIdUse2;
int _AS1IsArrayAccessOrSingleId;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
_AS1IsClassIdUse2=0;
/*SPC(4883)*/
_AVdesignator_IsClassIdUse=0;
/*SPC(4882)*/
_AS1IsArrayAccessOrSingleId=0;
/*SPC(4880)*/
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1IsArrayAccessOrSingleId)),(&( _AS1IsClassIdUse2)),(&( _AS1ResolvesToSingleId)),(&( _AS1ResolvesToArrayAccessOrSingleId)),(&( _AS1orig_tree)),(&( _AS1class_id_tree)),(&( _AS1arr_bounds_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CASE_LABEL_DES_O(_TPPCASE_LABEL_DES_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2CASE_LABEL_DES_O(_currn ,_AS0tree)
_TPPCASE_LABEL_DES_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1arr_bounds_tree;
TreeNodePtr _AS1class_id_tree;
TreeNodePtr _AS1orig_tree;
int _AS1is_notequal;
TreeNodePtr _AS1tree;
int _AS1ResolvesToArrayAccessOrSingleId;
int _AS1ResolvesToSingleId;
int _AS1IsClassIdUse2;
int _AS1IsArrayAccessOrSingleId;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*,int*,int*,TreeNodePtr*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1IsArrayAccessOrSingleId)),(&( _AS1IsClassIdUse2)),(&( _AS1ResolvesToSingleId)),(&( _AS1ResolvesToArrayAccessOrSingleId)),(&( _AS1tree)),(&( _AS1is_notequal)),(&( _AS1orig_tree)),(&( _AS1class_id_tree)),(&( _AS1arr_bounds_tree)),(&( _AS1_const67)));
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkCASE_LABEL_DES, _AS1tree, NoKey);
/*SPC(9606)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CASE_LABEL_DES_O(_TPPCASE_LABEL_DES_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3CASE_LABEL_DES_O(_currn ,_AS0tree)
_TPPCASE_LABEL_DES_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1arr_bounds_tree;
TreeNodePtr _AS1class_id_tree;
TreeNodePtr _AS1orig_tree;
int _AS1is_notequal;
TreeNodePtr _AS1tree;
int _AS1ResolvesToArrayAccessOrSingleId;
int _AS1ResolvesToSingleId;
int _AS1IsClassIdUse2;
int _AS1IsArrayAccessOrSingleId;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
_AVdesignator_IsArrayAccess=0;
/*SPC(4881)*/
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*,int*,int*,TreeNodePtr*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1IsArrayAccessOrSingleId)),(&( _AS1IsClassIdUse2)),(&( _AS1ResolvesToSingleId)),(&( _AS1ResolvesToArrayAccessOrSingleId)),(&( _AS1tree)),(&( _AS1is_notequal)),(&( _AS1orig_tree)),(&( _AS1class_id_tree)),(&( _AS1arr_bounds_tree)),(&( _AS1_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CASE_LABEL_VALUE_O(_TPPCASE_LABEL_VALUE_O _currn)
#else
void _VS1CASE_LABEL_VALUE_O(_currn )
_TPPCASE_LABEL_VALUE_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CASE_LABEL_VALUE_O(_TPPCASE_LABEL_VALUE_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2CASE_LABEL_VALUE_O(_currn ,_AS0tree)
_TPPCASE_LABEL_VALUE_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkCASE_LABEL_VALUE, _currn->_desc1->_ATtree, NoKey);
/*SPC(9601)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CASE_LABEL_VALUE_O(_TPPCASE_LABEL_VALUE_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3CASE_LABEL_VALUE_O(_currn ,_AS0tree)
_TPPCASE_LABEL_VALUE_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LABEL_RANGE_O(_TPPLABEL_RANGE_O _currn)
#else
void _VS1LABEL_RANGE_O(_currn )
_TPPLABEL_RANGE_O _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LABEL_RANGE_O(_TPPLABEL_RANGE_O _currn)
#else
void _VS2LABEL_RANGE_O(_currn )
_TPPLABEL_RANGE_O _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVlabel_range_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkLABEL_RANGE, _AS1tree, _AS2tree, NoKey);
/*SPC(9595)*/
_AVlabel_rangelabel_list_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2LABEL_LIST, _AVlabel_rangelabel_list_tree_post, _AVlabel_range_tree, NoKey);
/*SPC(9585)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LABEL_RANGE_O(_TPPLABEL_RANGE_O _currn)
#else
void _VS3LABEL_RANGE_O(_currn )
_TPPLABEL_RANGE_O _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LABEL_RANGE_SINGLE_O(_TPPLABEL_RANGE_SINGLE_O _currn)
#else
void _VS1LABEL_RANGE_SINGLE_O(_currn )
_TPPLABEL_RANGE_SINGLE_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LABEL_RANGE_SINGLE_O(_TPPLABEL_RANGE_SINGLE_O _currn)
#else
void _VS2LABEL_RANGE_SINGLE_O(_currn )
_TPPLABEL_RANGE_SINGLE_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVlabel_range_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkLABEL_RANGE_SINGLE, _AS1tree, NoKey);
/*SPC(9590)*/
_AVlabel_rangelabel_list_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2LABEL_LIST, _AVlabel_rangelabel_list_tree_post, _AVlabel_range_tree, NoKey);
/*SPC(9585)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LABEL_RANGE_SINGLE_O(_TPPLABEL_RANGE_SINGLE_O _currn)
#else
void _VS3LABEL_RANGE_SINGLE_O(_currn )
_TPPLABEL_RANGE_SINGLE_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LABEL_LIST_O(_TPPLABEL_LIST_O _currn)
#else
void _VS1LABEL_LIST_O(_currn )
_TPPLABEL_LIST_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LABEL_LIST_O(_TPPLABEL_LIST_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2LABEL_LIST_O(_currn ,_AS0tree)
_TPPLABEL_LIST_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVlabel_rangelabel_list_tree_post=NULL;
/*SPC(9580)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkLABEL_LIST, _AVlabel_rangelabel_list_tree_post, NoKey);
/*SPC(9581)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LABEL_LIST_O(_TPPLABEL_LIST_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3LABEL_LIST_O(_currn ,_AS0tree)
_TPPLABEL_LIST_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_LABEL_STMT_O(_TPPWHEN_LABEL_STMT_O _currn)
#else
void _VS1WHEN_LABEL_STMT_O(_currn )
_TPPWHEN_LABEL_STMT_O _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_LABEL_STMT_O(_TPPWHEN_LABEL_STMT_O _currn)
#else
void _VS2WHEN_LABEL_STMT_O(_currn )
_TPPWHEN_LABEL_STMT_O _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVwhen_label_stmt_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_LABEL_STMT, _AS1tree, _AS2tree, NoKey);
/*SPC(9573)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_LABEL_STMT_O(_TPPWHEN_LABEL_STMT_O _currn)
#else
void _VS3WHEN_LABEL_STMT_O(_currn )
_TPPWHEN_LABEL_STMT_O _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_LABEL_STMTS_EMPTY_O(_TPPWHEN_LABEL_STMTS_EMPTY_O _currn)
#else
void _VS1WHEN_LABEL_STMTS_EMPTY_O(_currn )
_TPPWHEN_LABEL_STMTS_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_LABEL_STMTS_EMPTY_O(_TPPWHEN_LABEL_STMTS_EMPTY_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2WHEN_LABEL_STMTS_EMPTY_O(_currn ,_AS0tree)
_TPPWHEN_LABEL_STMTS_EMPTY_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkWHEN_LABEL_STMTS_EMPTY, NoKey);
/*SPC(9568)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_LABEL_STMTS_EMPTY_O(_TPPWHEN_LABEL_STMTS_EMPTY_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3WHEN_LABEL_STMTS_EMPTY_O(_currn ,_AS0tree)
_TPPWHEN_LABEL_STMTS_EMPTY_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_LABEL_STMTS_O(_TPPWHEN_LABEL_STMTS_O _currn)
#else
void _VS1WHEN_LABEL_STMTS_O(_currn )
_TPPWHEN_LABEL_STMTS_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_LABEL_STMTS_O(_TPPWHEN_LABEL_STMTS_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2WHEN_LABEL_STMTS_O(_currn ,_AS0tree)
_TPPWHEN_LABEL_STMTS_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_LABEL_STMTS, _AS1tree, _AVwhen_label_stmt_tree, NoKey);
/*SPC(9562)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_LABEL_STMTS_O(_TPPWHEN_LABEL_STMTS_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3WHEN_LABEL_STMTS_O(_currn ,_AS0tree)
_TPPWHEN_LABEL_STMTS_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CASE_STATEMENT_O(_TPPCASE_STATEMENT_O _currn)
#else
void _VS1CASE_STATEMENT_O(_currn )
_TPPCASE_STATEMENT_O _currn;

#endif
{
TreeNodePtr _AS2tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_IsClassSpecifier=0;
/*SPC(4918)*/
_AVexpression_IsClassIdUse=0;
/*SPC(4916)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CASE_STATEMENT_O(_TPPCASE_STATEMENT_O _currn)
#else
void _VS2CASE_STATEMENT_O(_currn )
_TPPCASE_STATEMENT_O _currn;

#endif
{
TreeNodePtr _AS2tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_str_in_or_out=0;
/*SPC(7334)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVcase_statement_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkCASE_STATEMENT, _AS1tree, _AS2tree, NoKey);
/*SPC(9556)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CASE_STATEMENT_O(_TPPCASE_STATEMENT_O _currn)
#else
void _VS3CASE_STATEMENT_O(_currn )
_TPPCASE_STATEMENT_O _currn;

#endif
{
TreeNodePtr _AS2tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_IsBound=0;
/*SPC(11350)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1COND_STATEMENT_ELSE_O(_TPPCOND_STATEMENT_ELSE_O _currn)
#else
void _VS1COND_STATEMENT_ELSE_O(_currn )
_TPPCOND_STATEMENT_ELSE_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2COND_STATEMENT_ELSE_O(_TPPCOND_STATEMENT_ELSE_O _currn)
#else
void _VS2COND_STATEMENT_ELSE_O(_currn )
_TPPCOND_STATEMENT_ELSE_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVconditional_statement_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkCOND_STATEMENT_ELSE, _AS1tree, NoKey);
/*SPC(9551)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3COND_STATEMENT_ELSE_O(_TPPCOND_STATEMENT_ELSE_O _currn)
#else
void _VS3COND_STATEMENT_ELSE_O(_currn )
_TPPCOND_STATEMENT_ELSE_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1COND_STATEMENT_O(_TPPCOND_STATEMENT_O _currn)
#else
void _VS1COND_STATEMENT_O(_currn )
_TPPCOND_STATEMENT_O _currn;

#endif
{
TreeNodePtr _AS2tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_IsClassSpecifier=0;
/*SPC(4918)*/
_AVexpression_IsClassIdUse=0;
/*SPC(4916)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2COND_STATEMENT_O(_TPPCOND_STATEMENT_O _currn)
#else
void _VS2COND_STATEMENT_O(_currn )
_TPPCOND_STATEMENT_O _currn;

#endif
{
TreeNodePtr _AS2tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_str_in_or_out=0;
/*SPC(7334)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVconditional_statement_tree=NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCOND_STATEMENT, _AS1tree, _AS2tree, _AVconditional_statement_tree, NoKey);
/*SPC(9546)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3COND_STATEMENT_O(_TPPCOND_STATEMENT_O _currn)
#else
void _VS3COND_STATEMENT_O(_currn )
_TPPCOND_STATEMENT_O _currn;

#endif
{
TreeNodePtr _AS2tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_IsBound=0;
/*SPC(11350)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXCEPTION_TYPES_LST_O(_TPPEXCEPTION_TYPES_LST_O _currn)
#else
void _VS1EXCEPTION_TYPES_LST_O(_currn )
_TPPEXCEPTION_TYPES_LST_O _currn;

#endif
{
TreeNodePtr _AS2class_spec_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXCEPTION_TYPES_LST_O(_TPPEXCEPTION_TYPES_LST_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2EXCEPTION_TYPES_LST_O(_currn ,_AS0tree)
_TPPEXCEPTION_TYPES_LST_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS2class_spec_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkEXCEPTION_TYPES_LST, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(9541)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3EXCEPTION_TYPES_LST_O(_TPPEXCEPTION_TYPES_LST_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3EXCEPTION_TYPES_LST_O(_currn ,_AS0tree)
_TPPEXCEPTION_TYPES_LST_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS2class_spec_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXCEPTION_TYPES_EMPTY_O(_TPPEXCEPTION_TYPES_EMPTY_O _currn)
#else
void _VS1EXCEPTION_TYPES_EMPTY_O(_currn )
_TPPEXCEPTION_TYPES_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXCEPTION_TYPES_EMPTY_O(_TPPEXCEPTION_TYPES_EMPTY_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2EXCEPTION_TYPES_EMPTY_O(_currn ,_AS0tree)
_TPPEXCEPTION_TYPES_EMPTY_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkEXCEPTION_TYPES_EMPTY, NoKey);
/*SPC(9537)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3EXCEPTION_TYPES_EMPTY_O(_TPPEXCEPTION_TYPES_EMPTY_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3EXCEPTION_TYPES_EMPTY_O(_currn ,_AS0tree)
_TPPEXCEPTION_TYPES_EMPTY_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_EXCEPTION_STMT_O(_TPPWHEN_EXCEPTION_STMT_O _currn)
#else
void _VS1WHEN_EXCEPTION_STMT_O(_currn )
_TPPWHEN_EXCEPTION_STMT_O _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_EXCEPTION_STMT_O(_TPPWHEN_EXCEPTION_STMT_O _currn)
#else
void _VS2WHEN_EXCEPTION_STMT_O(_currn )
_TPPWHEN_EXCEPTION_STMT_O _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVwhen_exception_stmt_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_EXCEPTION_STMT, _AS1tree, _AS2tree, NoKey);
/*SPC(9532)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_EXCEPTION_STMT_O(_TPPWHEN_EXCEPTION_STMT_O _currn)
#else
void _VS3WHEN_EXCEPTION_STMT_O(_currn )
_TPPWHEN_EXCEPTION_STMT_O _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_EXCEPTION_STMTS_EMPTY_O(_TPPWHEN_EXCEPTION_STMTS_EMPTY_O _currn)
#else
void _VS1WHEN_EXCEPTION_STMTS_EMPTY_O(_currn )
_TPPWHEN_EXCEPTION_STMTS_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_EXCEPTION_STMTS_EMPTY_O(_TPPWHEN_EXCEPTION_STMTS_EMPTY_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2WHEN_EXCEPTION_STMTS_EMPTY_O(_currn ,_AS0tree)
_TPPWHEN_EXCEPTION_STMTS_EMPTY_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkWHEN_EXCEPTION_STMTS_EMPTY, NoKey);
/*SPC(9527)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_EXCEPTION_STMTS_EMPTY_O(_TPPWHEN_EXCEPTION_STMTS_EMPTY_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3WHEN_EXCEPTION_STMTS_EMPTY_O(_currn ,_AS0tree)
_TPPWHEN_EXCEPTION_STMTS_EMPTY_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_EXCEPTION_STMTS_O(_TPPWHEN_EXCEPTION_STMTS_O _currn)
#else
void _VS1WHEN_EXCEPTION_STMTS_O(_currn )
_TPPWHEN_EXCEPTION_STMTS_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_EXCEPTION_STMTS_O(_TPPWHEN_EXCEPTION_STMTS_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2WHEN_EXCEPTION_STMTS_O(_currn ,_AS0tree)
_TPPWHEN_EXCEPTION_STMTS_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_EXCEPTION_STMTS, _AS1tree, _AVwhen_exception_stmt_tree, NoKey);
/*SPC(9522)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_EXCEPTION_STMTS_O(_TPPWHEN_EXCEPTION_STMTS_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3WHEN_EXCEPTION_STMTS_O(_currn ,_AS0tree)
_TPPWHEN_EXCEPTION_STMTS_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXCEPTIONS_O(_TPPEXCEPTIONS_O _currn)
#else
void _VS1EXCEPTIONS_O(_currn )
_TPPEXCEPTIONS_O _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXCEPTIONS_O(_TPPEXCEPTIONS_O _currn)
#else
void _VS2EXCEPTIONS_O(_currn )
_TPPEXCEPTIONS_O _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVexceptions_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkEXCEPTIONS, _currn->_desc1->_ATtree, _AS2tree, NoKey);
/*SPC(9516)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3EXCEPTIONS_O(_TPPEXCEPTIONS_O _currn)
#else
void _VS3EXCEPTIONS_O(_currn )
_TPPEXCEPTIONS_O _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXCEPTIONS_EMPTY_O(_TPPEXCEPTIONS_EMPTY_O _currn)
#else
void _VS1EXCEPTIONS_EMPTY_O(_currn )
_TPPEXCEPTIONS_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXCEPTIONS_EMPTY_O(_TPPEXCEPTIONS_EMPTY_O _currn)
#else
void _VS2EXCEPTIONS_EMPTY_O(_currn )
_TPPEXCEPTIONS_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVexceptions_tree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkEXCEPTIONS_EMPTY, NoKey);
/*SPC(9512)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BEGIN_BLOCK_O(_TPPBEGIN_BLOCK_O _currn)
#else
void _VS1BEGIN_BLOCK_O(_currn )
_TPPBEGIN_BLOCK_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BEGIN_BLOCK_O(_TPPBEGIN_BLOCK_O _currn)
#else
void _VS2BEGIN_BLOCK_O(_currn )
_TPPBEGIN_BLOCK_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVbegin_block_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkBEGIN_BLOCK, _AS1tree, _AVexceptions_tree, NoKey);
/*SPC(9507)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BEGIN_BLOCK_O(_TPPBEGIN_BLOCK_O _currn)
#else
void _VS3BEGIN_BLOCK_O(_currn )
_TPPBEGIN_BLOCK_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ASSIGNMENT_O(_TPPASSIGNMENT_O _currn)
#else
void _VS1ASSIGNMENT_O(_currn )
_TPPASSIGNMENT_O _currn;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;
TreeNodePtr _AS1orig_tree;

_VisitVarDecl()
_VisitEntry();
_AVname_IsClassIdUse=0;
/*SPC(4910)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
_AVexpression_IsClassSpecifier=0;
/*SPC(4918)*/
_AVexpression_IsClassIdUse=0;
/*SPC(4916)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2orig_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ASSIGNMENT_O(_TPPASSIGNMENT_O _currn)
#else
void _VS2ASSIGNMENT_O(_currn )
_TPPASSIGNMENT_O _currn;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_str_in_or_out=0;
/*SPC(7334)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2_const67)));
_AVassignment_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkASSIGNMENT, _currn->_desc1->_ATtree, _AS2tree, NoKey);
/*SPC(9502)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ASSIGNMENT_O(_TPPASSIGNMENT_O _currn)
#else
void _VS3ASSIGNMENT_O(_currn )
_TPPASSIGNMENT_O _currn;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_IsBound=0;
/*SPC(11350)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_ASSERT_O(_TPPSTATEMENTS_ASSERT_O _currn)
#else
void _VS1STATEMENTS_ASSERT_O(_currn )
_TPPSTATEMENTS_ASSERT_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_ASSERT_O(_TPPSTATEMENTS_ASSERT_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_ASSERT_O(_currn ,_AS0tree)
_TPPSTATEMENTS_ASSERT_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_ASSERT, _AS1tree, _AVassertion_statement_tree, NoKey);
/*SPC(9496)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_ASSERT_O(_TPPSTATEMENTS_ASSERT_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_ASSERT_O(_currn ,_AS0tree)
_TPPSTATEMENTS_ASSERT_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_RAISE_O(_TPPSTATEMENTS_RAISE_O _currn)
#else
void _VS1STATEMENTS_RAISE_O(_currn )
_TPPSTATEMENTS_RAISE_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_RAISE_O(_TPPSTATEMENTS_RAISE_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_RAISE_O(_currn ,_AS0tree)
_TPPSTATEMENTS_RAISE_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_RAISE, _AS1tree, _AVraise_statement_tree, NoKey);
/*SPC(9490)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_RAISE_O(_TPPSTATEMENTS_RAISE_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_RAISE_O(_currn ,_AS0tree)
_TPPSTATEMENTS_RAISE_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_RETURN_O(_TPPSTATEMENTS_RETURN_O _currn)
#else
void _VS1STATEMENTS_RETURN_O(_currn )
_TPPSTATEMENTS_RETURN_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_RETURN_O(_TPPSTATEMENTS_RETURN_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_RETURN_O(_currn ,_AS0tree)
_TPPSTATEMENTS_RETURN_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_RETURN, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(9484)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_RETURN_O(_TPPSTATEMENTS_RETURN_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_RETURN_O(_currn ,_AS0tree)
_TPPSTATEMENTS_RETURN_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_RESUME_O(_TPPSTATEMENTS_RESUME_O _currn)
#else
void _VS1STATEMENTS_RESUME_O(_currn )
_TPPSTATEMENTS_RESUME_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_RESUME_O(_TPPSTATEMENTS_RESUME_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_RESUME_O(_currn ,_AS0tree)
_TPPSTATEMENTS_RESUME_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_RESUME, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(9478)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_RESUME_O(_TPPSTATEMENTS_RESUME_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_RESUME_O(_currn ,_AS0tree)
_TPPSTATEMENTS_RESUME_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_EXP_O(_TPPSTATEMENTS_EXP_O _currn)
#else
void _VS1STATEMENTS_EXP_O(_currn )
_TPPSTATEMENTS_EXP_O _currn;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVexpression_IsClassSpecifier=0;
/*SPC(4918)*/
_AVexpression_IsClassIdUse=0;
/*SPC(4916)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2orig_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_EXP_O(_TPPSTATEMENTS_EXP_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_EXP_O(_currn ,_AS0tree)
_TPPSTATEMENTS_EXP_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVexpression_str_in_or_out=0;
/*SPC(7334)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2_const67)));
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_EXP, _AS1tree, _AS2tree, NoKey);
/*SPC(9472)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_EXP_O(_TPPSTATEMENTS_EXP_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_EXP_O(_currn ,_AS0tree)
_TPPSTATEMENTS_EXP_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVexpression_IsBound=0;
/*SPC(11350)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_BREAK_O(_TPPSTATEMENTS_BREAK_O _currn)
#else
void _VS1STATEMENTS_BREAK_O(_currn )
_TPPSTATEMENTS_BREAK_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_BREAK_O(_TPPSTATEMENTS_BREAK_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_BREAK_O(_currn ,_AS0tree)
_TPPSTATEMENTS_BREAK_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_BREAK, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(9466)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_BREAK_O(_TPPSTATEMENTS_BREAK_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_BREAK_O(_currn ,_AS0tree)
_TPPSTATEMENTS_BREAK_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_LOOP_O(_TPPSTATEMENTS_LOOP_O _currn)
#else
void _VS1STATEMENTS_LOOP_O(_currn )
_TPPSTATEMENTS_LOOP_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_LOOP_O(_TPPSTATEMENTS_LOOP_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_LOOP_O(_currn ,_AS0tree)
_TPPSTATEMENTS_LOOP_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_LOOP, _AS1tree, _AVloop_tree, NoKey);
/*SPC(9461)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_LOOP_O(_TPPSTATEMENTS_LOOP_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_LOOP_O(_currn ,_AS0tree)
_TPPSTATEMENTS_LOOP_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_TYPE_CASE_O(_TPPSTATEMENTS_TYPE_CASE_O _currn)
#else
void _VS1STATEMENTS_TYPE_CASE_O(_currn )
_TPPSTATEMENTS_TYPE_CASE_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_TYPE_CASE_O(_TPPSTATEMENTS_TYPE_CASE_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_TYPE_CASE_O(_currn ,_AS0tree)
_TPPSTATEMENTS_TYPE_CASE_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_TYPE_CASE, _AS1tree, _AVtype_case_statement_tree, NoKey);
/*SPC(9456)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_TYPE_CASE_O(_TPPSTATEMENTS_TYPE_CASE_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_TYPE_CASE_O(_currn ,_AS0tree)
_TPPSTATEMENTS_TYPE_CASE_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_CASE_O(_TPPSTATEMENTS_CASE_O _currn)
#else
void _VS1STATEMENTS_CASE_O(_currn )
_TPPSTATEMENTS_CASE_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_CASE_O(_TPPSTATEMENTS_CASE_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_CASE_O(_currn ,_AS0tree)
_TPPSTATEMENTS_CASE_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_CASE, _AS1tree, _AVcase_statement_tree, NoKey);
/*SPC(9450)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_CASE_O(_TPPSTATEMENTS_CASE_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_CASE_O(_currn ,_AS0tree)
_TPPSTATEMENTS_CASE_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_COND_O(_TPPSTATEMENTS_COND_O _currn)
#else
void _VS1STATEMENTS_COND_O(_currn )
_TPPSTATEMENTS_COND_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_COND_O(_TPPSTATEMENTS_COND_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_COND_O(_currn ,_AS0tree)
_TPPSTATEMENTS_COND_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_COND, _AS1tree, _AVconditional_statement_tree, NoKey);
/*SPC(9444)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_COND_O(_TPPSTATEMENTS_COND_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_COND_O(_currn ,_AS0tree)
_TPPSTATEMENTS_COND_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_BEGIN_O(_TPPSTATEMENTS_BEGIN_O _currn)
#else
void _VS1STATEMENTS_BEGIN_O(_currn )
_TPPSTATEMENTS_BEGIN_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_BEGIN_O(_TPPSTATEMENTS_BEGIN_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_BEGIN_O(_currn ,_AS0tree)
_TPPSTATEMENTS_BEGIN_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_BEGIN, _AS1tree, _AVbegin_block_tree, NoKey);
/*SPC(9438)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_BEGIN_O(_TPPSTATEMENTS_BEGIN_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_BEGIN_O(_currn ,_AS0tree)
_TPPSTATEMENTS_BEGIN_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_ASSIGN_O(_TPPSTATEMENTS_ASSIGN_O _currn)
#else
void _VS1STATEMENTS_ASSIGN_O(_currn )
_TPPSTATEMENTS_ASSIGN_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_ASSIGN_O(_TPPSTATEMENTS_ASSIGN_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_ASSIGN_O(_currn ,_AS0tree)
_TPPSTATEMENTS_ASSIGN_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_ASSIGN, _AS1tree, _AVassignment_tree, NoKey);
/*SPC(9432)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_ASSIGN_O(_TPPSTATEMENTS_ASSIGN_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_ASSIGN_O(_currn ,_AS0tree)
_TPPSTATEMENTS_ASSIGN_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_EMPTY_O(_TPPSTATEMENTS_EMPTY_O _currn)
#else
void _VS1STATEMENTS_EMPTY_O(_currn )
_TPPSTATEMENTS_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_EMPTY_O(_TPPSTATEMENTS_EMPTY_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_EMPTY_O(_currn ,_AS0tree)
_TPPSTATEMENTS_EMPTY_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkSTATEMENTS_EMPTY, NoKey);
/*SPC(9428)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_EMPTY_O(_TPPSTATEMENTS_EMPTY_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_EMPTY_O(_currn ,_AS0tree)
_TPPSTATEMENTS_EMPTY_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LOCAL_STREAM_DECL_O(_TPPLOCAL_STREAM_DECL_O _currn)
#else
void _VS1LOCAL_STREAM_DECL_O(_currn )
_TPPLOCAL_STREAM_DECL_O _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LOCAL_STREAM_DECL_O(_TPPLOCAL_STREAM_DECL_O _currn)
#else
void _VS2LOCAL_STREAM_DECL_O(_currn )
_TPPLOCAL_STREAM_DECL_O _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVlocal_stream_declaration_tree=NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkLOCAL_STREAM_DECL, _currn->_desc1->_ATtree, _AS2tree, _AVbound_method_tree, NoKey);
/*SPC(9423)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LOCAL_STREAM_DECL_O(_TPPLOCAL_STREAM_DECL_O _currn)
#else
void _VS3LOCAL_STREAM_DECL_O(_currn )
_TPPLOCAL_STREAM_DECL_O _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LOCAL_DECLS_STREAM_O(_TPPLOCAL_DECLS_STREAM_O _currn)
#else
void _VS1LOCAL_DECLS_STREAM_O(_currn )
_TPPLOCAL_DECLS_STREAM_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LOCAL_DECLS_STREAM_O(_TPPLOCAL_DECLS_STREAM_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2LOCAL_DECLS_STREAM_O(_currn ,_AS0tree)
_TPPLOCAL_DECLS_STREAM_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkLOCAL_DECLS_STREAM, _AS1tree, _AVlocal_stream_declaration_tree, NoKey);
/*SPC(9418)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LOCAL_DECLS_STREAM_O(_TPPLOCAL_DECLS_STREAM_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3LOCAL_DECLS_STREAM_O(_currn ,_AS0tree)
_TPPLOCAL_DECLS_STREAM_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LOCAL_DECLS_ATT_O(_TPPLOCAL_DECLS_ATT_O _currn)
#else
void _VS1LOCAL_DECLS_ATT_O(_currn )
_TPPLOCAL_DECLS_ATT_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LOCAL_DECLS_ATT_O(_TPPLOCAL_DECLS_ATT_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2LOCAL_DECLS_ATT_O(_currn ,_AS0tree)
_TPPLOCAL_DECLS_ATT_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkLOCAL_DECLS_ATT, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(9412)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LOCAL_DECLS_ATT_O(_TPPLOCAL_DECLS_ATT_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3LOCAL_DECLS_ATT_O(_currn ,_AS0tree)
_TPPLOCAL_DECLS_ATT_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LOCAL_DECLS_EMPTY_O(_TPPLOCAL_DECLS_EMPTY_O _currn)
#else
void _VS1LOCAL_DECLS_EMPTY_O(_currn )
_TPPLOCAL_DECLS_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LOCAL_DECLS_EMPTY_O(_TPPLOCAL_DECLS_EMPTY_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2LOCAL_DECLS_EMPTY_O(_currn ,_AS0tree)
_TPPLOCAL_DECLS_EMPTY_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkLOCAL_DECLS_EMPTY, NoKey);
/*SPC(9408)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LOCAL_DECLS_EMPTY_O(_TPPLOCAL_DECLS_EMPTY_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3LOCAL_DECLS_EMPTY_O(_currn ,_AS0tree)
_TPPLOCAL_DECLS_EMPTY_O _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BLOCK_O(_TPPBLOCK_O _currn)
#else
void _VS1BLOCK_O(_currn )
_TPPBLOCK_O _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BLOCK_O(_TPPBLOCK_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2BLOCK_O(_currn ,_AS0tree)
_TPPBLOCK_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkBLOCK, _AS1tree, _AS2tree, NoKey);
/*SPC(9402)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BLOCK_O(_TPPBLOCK_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3BLOCK_O(_currn ,_AS0tree)
_TPPBLOCK_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_INST_CLRTYPE_O(_TPPBUILTIN_INST_CLRTYPE_O _currn)
#else
void _VS1BUILTIN_INST_CLRTYPE_O(_currn )
_TPPBUILTIN_INST_CLRTYPE_O _currn;

#endif
{
TreeNodePtr _AS1class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BUILTIN_INST_CLRTYPE_O(_TPPBUILTIN_INST_CLRTYPE_O _currn)
#else
void _VS2BUILTIN_INST_CLRTYPE_O(_currn )
_TPPBUILTIN_INST_CLRTYPE_O _currn;

#endif
{
TreeNodePtr _AS1class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1class_spec_tree)));
_AVbuiltin_instruction_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBUILTIN_INST_CLRTYPE, _currn->_desc1->_ATtree, NoKey);
/*SPC(9397)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BUILTIN_INST_CLRTYPE_O(_TPPBUILTIN_INST_CLRTYPE_O _currn)
#else
void _VS3BUILTIN_INST_CLRTYPE_O(_currn )
_TPPBUILTIN_INST_CLRTYPE_O _currn;

#endif
{
TreeNodePtr _AS1class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_INST_TYPE_O(_TPPBUILTIN_INST_TYPE_O _currn)
#else
void _VS1BUILTIN_INST_TYPE_O(_currn )
_TPPBUILTIN_INST_TYPE_O _currn;

#endif
{
TreeNodePtr _AS1class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BUILTIN_INST_TYPE_O(_TPPBUILTIN_INST_TYPE_O _currn)
#else
void _VS2BUILTIN_INST_TYPE_O(_currn )
_TPPBUILTIN_INST_TYPE_O _currn;

#endif
{
TreeNodePtr _AS1class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1class_spec_tree)));
_AVbuiltin_instruction_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBUILTIN_INST_TYPE, _currn->_desc1->_ATtree, NoKey);
/*SPC(9392)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BUILTIN_INST_TYPE_O(_TPPBUILTIN_INST_TYPE_O _currn)
#else
void _VS3BUILTIN_INST_TYPE_O(_currn )
_TPPBUILTIN_INST_TYPE_O _currn;

#endif
{
TreeNodePtr _AS1class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_INST_STR_O(_TPPBUILTIN_INST_STR_O _currn)
#else
void _VS1BUILTIN_INST_STR_O(_currn )
_TPPBUILTIN_INST_STR_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BUILTIN_INST_STR_O(_TPPBUILTIN_INST_STR_O _currn)
#else
void _VS2BUILTIN_INST_STR_O(_currn )
_TPPBUILTIN_INST_STR_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVbuiltin_instruction_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkBUILTIN_INST_STR, _currn->_ATTERM_1, NoKey);
/*SPC(9387)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_INSTS_EMPTY_O(_TPPBUILTIN_INSTS_EMPTY_O _currn)
#else
void _VS1BUILTIN_INSTS_EMPTY_O(_currn )
_TPPBUILTIN_INSTS_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BUILTIN_INSTS_EMPTY_O(_TPPBUILTIN_INSTS_EMPTY_O _currn)
#else
void _VS2BUILTIN_INSTS_EMPTY_O(_currn )
_TPPBUILTIN_INSTS_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVbuiltin_instructions_tree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkBUILTIN_INSTS_EMPTY, NoKey);
/*SPC(9382)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_INSTS_O(_TPPBUILTIN_INSTS_O _currn)
#else
void _VS1BUILTIN_INSTS_O(_currn )
_TPPBUILTIN_INSTS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BUILTIN_INSTS_O(_TPPBUILTIN_INSTS_O _currn)
#else
void _VS2BUILTIN_INSTS_O(_currn )
_TPPBUILTIN_INSTS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVbuiltin_instructions_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkBUILTIN_INSTS, _AVbuiltin_instructions_tree, _AVbuiltin_instruction_tree, NoKey);
/*SPC(9377)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BUILTIN_INSTS_O(_TPPBUILTIN_INSTS_O _currn)
#else
void _VS3BUILTIN_INSTS_O(_currn )
_TPPBUILTIN_INSTS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_BODY_STATIC_BUILTIN_O(_TPPMETHOD_BODY_STATIC_BUILTIN_O _currn)
#else
void _VS1METHOD_BODY_STATIC_BUILTIN_O(_currn )
_TPPMETHOD_BODY_STATIC_BUILTIN_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2METHOD_BODY_STATIC_BUILTIN_O(_TPPMETHOD_BODY_STATIC_BUILTIN_O _currn)
#else
void _VS2METHOD_BODY_STATIC_BUILTIN_O(_currn )
_TPPMETHOD_BODY_STATIC_BUILTIN_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkMETHOD_BODY_STATIC_BUILTIN, _AVbuiltin_instructions_tree, NoKey);
/*SPC(9372)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3METHOD_BODY_STATIC_BUILTIN_O(_TPPMETHOD_BODY_STATIC_BUILTIN_O _currn)
#else
void _VS3METHOD_BODY_STATIC_BUILTIN_O(_currn )
_TPPMETHOD_BODY_STATIC_BUILTIN_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_BODY_BUILTIN_O(_TPPMETHOD_BODY_BUILTIN_O _currn)
#else
void _VS1METHOD_BODY_BUILTIN_O(_currn )
_TPPMETHOD_BODY_BUILTIN_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2METHOD_BODY_BUILTIN_O(_TPPMETHOD_BODY_BUILTIN_O _currn)
#else
void _VS2METHOD_BODY_BUILTIN_O(_currn )
_TPPMETHOD_BODY_BUILTIN_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkMETHOD_BODY_BUILTIN, _AVbuiltin_instructions_tree, NoKey);
/*SPC(9367)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3METHOD_BODY_BUILTIN_O(_TPPMETHOD_BODY_BUILTIN_O _currn)
#else
void _VS3METHOD_BODY_BUILTIN_O(_currn )
_TPPMETHOD_BODY_BUILTIN_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LINKER_SYMBOL_O(_TPPLINKER_SYMBOL_O _currn)
#else
void _VS1LINKER_SYMBOL_O(_currn )
_TPPLINKER_SYMBOL_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkLINKER_SYMBOL, _currn->_ATTERM_1, NoKey);
/*SPC(9362)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LINKER_SYMBOL_EMPTY_O(_TPPLINKER_SYMBOL_EMPTY_O _currn)
#else
void _VS1LINKER_SYMBOL_EMPTY_O(_currn )
_TPPLINKER_SYMBOL_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkLINKER_SYMBOL_EMPTY, NoKey);
/*SPC(9358)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FOREIGN_LANGUAGE_O(_TPPFOREIGN_LANGUAGE_O _currn)
#else
void _VS1FOREIGN_LANGUAGE_O(_currn )
_TPPFOREIGN_LANGUAGE_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkFOREIGN_LANGUAGE, _currn->_ATTERM_1, NoKey);
/*SPC(9353)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_BODY_FOREIGN_O(_TPPMETHOD_BODY_FOREIGN_O _currn)
#else
void _VS1METHOD_BODY_FOREIGN_O(_currn )
_TPPMETHOD_BODY_FOREIGN_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2METHOD_BODY_FOREIGN_O(_TPPMETHOD_BODY_FOREIGN_O _currn)
#else
void _VS2METHOD_BODY_FOREIGN_O(_currn )
_TPPMETHOD_BODY_FOREIGN_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkMETHOD_BODY_FOREIGN, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(9348)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_BODY_AB_O(_TPPMETHOD_BODY_AB_O _currn)
#else
void _VS1METHOD_BODY_AB_O(_currn )
_TPPMETHOD_BODY_AB_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2METHOD_BODY_AB_O(_TPPMETHOD_BODY_AB_O _currn)
#else
void _VS2METHOD_BODY_AB_O(_currn )
_TPPMETHOD_BODY_AB_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkMETHOD_BODY_AB, NoKey);
/*SPC(9344)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_BODY_O(_TPPMETHOD_BODY_O _currn)
#else
void _VS1METHOD_BODY_O(_currn )
_TPPMETHOD_BODY_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2METHOD_BODY_O(_TPPMETHOD_BODY_O _currn)
#else
void _VS2METHOD_BODY_O(_currn )
_TPPMETHOD_BODY_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkMETHOD_BODY, _AS1tree, NoKey);
/*SPC(9340)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3METHOD_BODY_O(_TPPMETHOD_BODY_O _currn)
#else
void _VS3METHOD_BODY_O(_currn )
_TPPMETHOD_BODY_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_SPEC_O(_TPPPARAMETER_SPEC_O _currn)
#else
void _VS1PARAMETER_SPEC_O(_currn )
_TPPPARAMETER_SPEC_O _currn;

#endif
{
TreeNodePtr _AS1orig_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2PARAMETER_SPEC_O(_TPPPARAMETER_SPEC_O _currn)
#else
void _VS2PARAMETER_SPEC_O(_currn )
_TPPPARAMETER_SPEC_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVparameter_specification_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkPARAMETER_SPEC, _currn->_desc1->_ATtree, _AVattribute_specification_tree, NoKey);
/*SPC(9335)*/
_AVparameter_specificationparameters_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2PARAMETERS, _AVparameter_specificationparameters_tree_post, _AVparameter_specification_tree, NoKey);
/*SPC(9331)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3PARAMETER_SPEC_O(_TPPPARAMETER_SPEC_O _currn)
#else
void _VS3PARAMETER_SPEC_O(_currn )
_TPPPARAMETER_SPEC_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETERS_O(_TPPPARAMETERS_O _currn)
#else
void _VS1PARAMETERS_O(_currn )
_TPPPARAMETERS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2PARAMETERS_O(_TPPPARAMETERS_O _currn)
#else
void _VS2PARAMETERS_O(_currn )
_TPPPARAMETERS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVparameter_specificationparameters_tree_post=NULL;
/*SPC(9326)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkPARAMETERS, _AVparameter_specificationparameters_tree_post, NoKey);
/*SPC(9327)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3PARAMETERS_O(_TPPPARAMETERS_O _currn)
#else
void _VS3PARAMETERS_O(_currn )
_TPPPARAMETERS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_IDENT_DEF_O(_TPPMETHOD_IDENT_DEF_O _currn)
#else
void _VS1METHOD_IDENT_DEF_O(_currn )
_TPPMETHOD_IDENT_DEF_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkMETHOD_IDENT_DEF, _currn->_ATTERM_1, NoKey);
/*SPC(9319)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_DECL_O(_TPPMETHOD_DECL_O _currn)
#else
void _VS1METHOD_DECL_O(_currn )
_TPPMETHOD_DECL_O _currn;

#endif
{
TreeNodePtr _AS3class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3class_spec_tree)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2METHOD_DECL_O(_TPPMETHOD_DECL_O _currn)
#else
void _VS2METHOD_DECL_O(_currn )
_TPPMETHOD_DECL_O _currn;

#endif
{
TreeNodePtr _AS3class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3class_spec_tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3METHOD_DECL_O(_TPPMETHOD_DECL_O _currn)
#else
void _VS3METHOD_DECL_O(_currn )
_TPPMETHOD_DECL_O _currn;

#endif
{
TreeNodePtr _AS3class_spec_tree;

_VisitVarDecl()
_VisitEntry();
_AVmethod_decl_ArrayMark=
((OR(EQ(GetSym((* _IG_incl6), 0), MakeName("ARRAY")), EQ(GetSym((* _IG_incl6), 0), MakeName("ARR")))
) ? (
((EQ(_currn->_desc1->_ATSym, MakeName("aget"))
) ? (
(ResetAgetMark((* _IG_incl6), NewKey()), GetAgetMark((* _IG_incl6), NoKey))

) : (
((EQ(_currn->_desc1->_ATSym, MakeName("aset"))
) ? (
(ResetAsetMark((* _IG_incl6), NewKey()), GetAsetMark((* _IG_incl6), NoKey))

) : (NoKey))
))

) : (NoKey))
;
/*SPC(4219)*/
_AVmethod_decl_tree=NewTreeNodeRhs_4_0((&( _currn->_AT_pos)), MkMETHOD_DECL, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, _currn->_desc3->_ATtree, _currn->_desc4->_ATtree, _AVmethod_decl_ArrayMark);
/*SPC(9313)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4METHOD_DECL_O(_TPPMETHOD_DECL_O _currn)
#else
void _VS4METHOD_DECL_O(_currn )
_TPPMETHOD_DECL_O _currn;

#endif
{
TreeNodePtr _AS3class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3class_spec_tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1IDENTIFIERS_O(_TPPIDENTIFIERS_O _currn)
#else
void _VS1IDENTIFIERS_O(_currn )
_TPPIDENTIFIERS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkIDENTIFIERS, _currn->_desc1->_ATtree, NoKey);
/*SPC(9308)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1IDENTIFIERS_LST_O(_TPPIDENTIFIERS_LST_O _currn)
#else
void _VS1IDENTIFIERS_LST_O(_currn )
_TPPIDENTIFIERS_LST_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkIDENTIFIERS_LST, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(9302)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_SPEC_O(_TPPATTR_SPEC_O _currn)
#else
void _VS1ATTR_SPEC_O(_currn )
_TPPATTR_SPEC_O _currn;

#endif
{
TreeNodePtr _AS2class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_SPEC_O(_TPPATTR_SPEC_O _currn)
#else
void _VS2ATTR_SPEC_O(_currn )
_TPPATTR_SPEC_O _currn;

#endif
{
TreeNodePtr _AS2class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));
_AVattribute_specification_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkATTR_SPEC, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(9296)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_SPEC_O(_TPPATTR_SPEC_O _currn)
#else
void _VS3ATTR_SPEC_O(_currn )
_TPPATTR_SPEC_O _currn;

#endif
{
TreeNodePtr _AS2class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_DECL_CONST_TYPE_CONST_O(_TPPATTR_DECL_CONST_TYPE_CONST_O _currn)
#else
void _VS1ATTR_DECL_CONST_TYPE_CONST_O(_currn )
_TPPATTR_DECL_CONST_TYPE_CONST_O _currn;

#endif
{
TreeNodePtr _AS2class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_DECL_CONST_TYPE_CONST_O(_TPPATTR_DECL_CONST_TYPE_CONST_O _currn)
#else
void _VS2ATTR_DECL_CONST_TYPE_CONST_O(_currn )
_TPPATTR_DECL_CONST_TYPE_CONST_O _currn;

#endif
{
TreeNodePtr _AS2class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkATTR_DECL_CONST_TYPE_CONST, _currn->_desc1->_ATtree, _AVtype_constructor_tree, NoKey);
/*SPC(9290)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_DECL_CONST_TYPE_CONST_O(_TPPATTR_DECL_CONST_TYPE_CONST_O _currn)
#else
void _VS3ATTR_DECL_CONST_TYPE_CONST_O(_currn )
_TPPATTR_DECL_CONST_TYPE_CONST_O _currn;

#endif
{
TreeNodePtr _AS2class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_DECL_TYPE_CONST_O(_TPPATTR_DECL_TYPE_CONST_O _currn)
#else
void _VS1ATTR_DECL_TYPE_CONST_O(_currn )
_TPPATTR_DECL_TYPE_CONST_O _currn;

#endif
{
TreeNodePtr _AS2class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_DECL_TYPE_CONST_O(_TPPATTR_DECL_TYPE_CONST_O _currn)
#else
void _VS2ATTR_DECL_TYPE_CONST_O(_currn )
_TPPATTR_DECL_TYPE_CONST_O _currn;

#endif
{
TreeNodePtr _AS2class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkATTR_DECL_TYPE_CONST, _currn->_desc1->_ATtree, _AVtype_constructor_tree, NoKey);
/*SPC(9285)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_DECL_TYPE_CONST_O(_TPPATTR_DECL_TYPE_CONST_O _currn)
#else
void _VS3ATTR_DECL_TYPE_CONST_O(_currn )
_TPPATTR_DECL_TYPE_CONST_O _currn;

#endif
{
TreeNodePtr _AS2class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_DECL_CONST_EXP_O(_TPPATTR_DECL_CONST_EXP_O _currn)
#else
void _VS1ATTR_DECL_CONST_EXP_O(_currn )
_TPPATTR_DECL_CONST_EXP_O _currn;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVexpression_IsClassSpecifier=0;
/*SPC(4918)*/
_AVexpression_IsClassIdUse=0;
/*SPC(4916)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2orig_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_DECL_CONST_EXP_O(_TPPATTR_DECL_CONST_EXP_O _currn)
#else
void _VS2ATTR_DECL_CONST_EXP_O(_currn )
_TPPATTR_DECL_CONST_EXP_O _currn;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVexpression_str_in_or_out=0;
/*SPC(7334)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2_const67)));
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkATTR_DECL_CONST_EXP, _AVattribute_specification_tree, _AS2tree, NoKey);
/*SPC(9280)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_DECL_CONST_EXP_O(_TPPATTR_DECL_CONST_EXP_O _currn)
#else
void _VS3ATTR_DECL_CONST_EXP_O(_currn )
_TPPATTR_DECL_CONST_EXP_O _currn;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVexpression_IsBound=0;
/*SPC(11350)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_DECL_EXP_O(_TPPATTR_DECL_EXP_O _currn)
#else
void _VS1ATTR_DECL_EXP_O(_currn )
_TPPATTR_DECL_EXP_O _currn;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVexpression_IsClassSpecifier=0;
/*SPC(4918)*/
_AVexpression_IsClassIdUse=0;
/*SPC(4916)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2orig_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_DECL_EXP_O(_TPPATTR_DECL_EXP_O _currn)
#else
void _VS2ATTR_DECL_EXP_O(_currn )
_TPPATTR_DECL_EXP_O _currn;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVexpression_str_in_or_out=0;
/*SPC(7334)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2_const67)));
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkATTR_DECL_EXP, _AVattribute_specification_tree, _AS2tree, NoKey);
/*SPC(9274)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_DECL_EXP_O(_TPPATTR_DECL_EXP_O _currn)
#else
void _VS3ATTR_DECL_EXP_O(_currn )
_TPPATTR_DECL_EXP_O _currn;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVexpression_IsBound=0;
/*SPC(11350)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_DECL_O(_TPPATTR_DECL_O _currn)
#else
void _VS1ATTR_DECL_O(_currn )
_TPPATTR_DECL_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_DECL_O(_TPPATTR_DECL_O _currn)
#else
void _VS2ATTR_DECL_O(_currn )
_TPPATTR_DECL_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkATTR_DECL, _AVattribute_specification_tree, NoKey);
/*SPC(9269)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_DECL_O(_TPPATTR_DECL_O _currn)
#else
void _VS3ATTR_DECL_O(_currn )
_TPPATTR_DECL_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_ACCESS_SH_RO_O(_TPPATTR_ACCESS_SH_RO_O _currn)
#else
void _VS1ATTR_ACCESS_SH_RO_O(_currn )
_TPPATTR_ACCESS_SH_RO_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkATTR_ACCESS_SH_RO, NoKey);
/*SPC(9264)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_ACCESS_RO_O(_TPPATTR_ACCESS_RO_O _currn)
#else
void _VS1ATTR_ACCESS_RO_O(_currn )
_TPPATTR_ACCESS_RO_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkATTR_ACCESS_RO, NoKey);
/*SPC(9260)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_ACCESS_SH_O(_TPPATTR_ACCESS_SH_O _currn)
#else
void _VS1ATTR_ACCESS_SH_O(_currn )
_TPPATTR_ACCESS_SH_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkATTR_ACCESS_SH, NoKey);
/*SPC(9256)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_STREAM_O(_TPPFEATURE_STREAM_O _currn)
#else
void _VS1FEATURE_STREAM_O(_currn )
_TPPFEATURE_STREAM_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_STREAM_O(_TPPFEATURE_STREAM_O _currn)
#else
void _VS2FEATURE_STREAM_O(_currn )
_TPPFEATURE_STREAM_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_STREAM_O(_TPPFEATURE_STREAM_O _currn)
#else
void _VS3FEATURE_STREAM_O(_currn )
_TPPFEATURE_STREAM_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVfeature_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkFEATURE_STREAM, _AVmethod_decl_tree, NoKey);
/*SPC(9251)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_STREAM_O(_TPPFEATURE_STREAM_O _currn)
#else
void _VS4FEATURE_STREAM_O(_currn )
_TPPFEATURE_STREAM_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_METH_O(_TPPFEATURE_METH_O _currn)
#else
void _VS1FEATURE_METH_O(_currn )
_TPPFEATURE_METH_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_METH_O(_TPPFEATURE_METH_O _currn)
#else
void _VS2FEATURE_METH_O(_currn )
_TPPFEATURE_METH_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_METH_O(_TPPFEATURE_METH_O _currn)
#else
void _VS3FEATURE_METH_O(_currn )
_TPPFEATURE_METH_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVfeature_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkFEATURE_METH, _AVmethod_decl_tree, NoKey);
/*SPC(9246)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_METH_O(_TPPFEATURE_METH_O _currn)
#else
void _VS4FEATURE_METH_O(_currn )
_TPPFEATURE_METH_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_ATT_O(_TPPFEATURE_ATT_O _currn)
#else
void _VS1FEATURE_ATT_O(_currn )
_TPPFEATURE_ATT_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_ATT_O(_TPPFEATURE_ATT_O _currn)
#else
void _VS2FEATURE_ATT_O(_currn )
_TPPFEATURE_ATT_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_ATT_O(_TPPFEATURE_ATT_O _currn)
#else
void _VS3FEATURE_ATT_O(_currn )
_TPPFEATURE_ATT_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVfeature_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkFEATURE_ATT, _currn->_desc1->_ATtree, NoKey);
/*SPC(9241)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_ATT_O(_TPPFEATURE_ATT_O _currn)
#else
void _VS4FEATURE_ATT_O(_currn )
_TPPFEATURE_ATT_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_ATT_ACC_O(_TPPFEATURE_ATT_ACC_O _currn)
#else
void _VS1FEATURE_ATT_ACC_O(_currn )
_TPPFEATURE_ATT_ACC_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_ATT_ACC_O(_TPPFEATURE_ATT_ACC_O _currn)
#else
void _VS2FEATURE_ATT_ACC_O(_currn )
_TPPFEATURE_ATT_ACC_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_ATT_ACC_O(_TPPFEATURE_ATT_ACC_O _currn)
#else
void _VS3FEATURE_ATT_ACC_O(_currn )
_TPPFEATURE_ATT_ACC_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVfeature_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkFEATURE_ATT_ACC, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(9236)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_ATT_ACC_O(_TPPFEATURE_ATT_ACC_O _currn)
#else
void _VS4FEATURE_ATT_ACC_O(_currn )
_TPPFEATURE_ATT_ACC_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_DECL_PRIV_O(_TPPFEATURE_DECL_PRIV_O _currn)
#else
void _VS1FEATURE_DECL_PRIV_O(_currn )
_TPPFEATURE_DECL_PRIV_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_DECL_PRIV_O(_TPPFEATURE_DECL_PRIV_O _currn)
#else
void _VS2FEATURE_DECL_PRIV_O(_currn )
_TPPFEATURE_DECL_PRIV_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_DECL_PRIV_O(_TPPFEATURE_DECL_PRIV_O _currn)
#else
void _VS3FEATURE_DECL_PRIV_O(_currn )
_TPPFEATURE_DECL_PRIV_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVfeature_declaration_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkFEATURE_DECL_PRIV, _AVfeature_tree, NoKey);
/*SPC(9231)*/
_AVfeature_declarationfeature_decls_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2FEATURE_DECLS, _AVfeature_declarationfeature_decls_tree_post, _AVfeature_declaration_tree, NoKey);
/*SPC(9220)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_DECL_PRIV_O(_TPPFEATURE_DECL_PRIV_O _currn)
#else
void _VS4FEATURE_DECL_PRIV_O(_currn )
_TPPFEATURE_DECL_PRIV_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_DECL_O(_TPPFEATURE_DECL_O _currn)
#else
void _VS1FEATURE_DECL_O(_currn )
_TPPFEATURE_DECL_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_DECL_O(_TPPFEATURE_DECL_O _currn)
#else
void _VS2FEATURE_DECL_O(_currn )
_TPPFEATURE_DECL_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_DECL_O(_TPPFEATURE_DECL_O _currn)
#else
void _VS3FEATURE_DECL_O(_currn )
_TPPFEATURE_DECL_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVfeature_declaration_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkFEATURE_DECL, _AVfeature_tree, NoKey);
/*SPC(9226)*/
_AVfeature_declarationfeature_decls_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2FEATURE_DECLS, _AVfeature_declarationfeature_decls_tree_post, _AVfeature_declaration_tree, NoKey);
/*SPC(9220)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_DECL_O(_TPPFEATURE_DECL_O _currn)
#else
void _VS4FEATURE_DECL_O(_currn )
_TPPFEATURE_DECL_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_DECLS_O(_TPPFEATURE_DECLS_O _currn)
#else
void _VS1FEATURE_DECLS_O(_currn )
_TPPFEATURE_DECLS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_DECLS_O(_TPPFEATURE_DECLS_O _currn)
#else
void _VS2FEATURE_DECLS_O(_currn )
_TPPFEATURE_DECLS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_DECLS_O(_TPPFEATURE_DECLS_O _currn)
#else
void _VS3FEATURE_DECLS_O(_currn )
_TPPFEATURE_DECLS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVfeature_declarationfeature_decls_tree_post=NULL;
/*SPC(9214)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVfeature_declarations_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkFEATURE_DECLS, _AVfeature_declarationfeature_decls_tree_post, NoKey);
/*SPC(9215)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_DECLS_O(_TPPFEATURE_DECLS_O _currn)
#else
void _VS4FEATURE_DECLS_O(_currn )
_TPPFEATURE_DECLS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_ID_USE_O(_TPPFEATURE_ID_USE_O _currn)
#else
void _VS1FEATURE_ID_USE_O(_currn )
_TPPFEATURE_ID_USE_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkFEATURE_ID_USE, _currn->_ATTERM_1, NoKey);
/*SPC(9203)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_SPEC_STREAM_O(_TPPFEATURE_SPEC_STREAM_O _currn)
#else
void _VS1FEATURE_SPEC_STREAM_O(_currn )
_TPPFEATURE_SPEC_STREAM_O _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_SPEC_STREAM_O(_TPPFEATURE_SPEC_STREAM_O _currn)
#else
void _VS2FEATURE_SPEC_STREAM_O(_currn )
_TPPFEATURE_SPEC_STREAM_O _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVfeature_specification_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkFEATURE_SPEC_STREAM, _currn->_desc1->_ATtree, _AS2tree, NoKey);
/*SPC(9198)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_SPEC_STREAM_O(_TPPFEATURE_SPEC_STREAM_O _currn)
#else
void _VS3FEATURE_SPEC_STREAM_O(_currn )
_TPPFEATURE_SPEC_STREAM_O _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_SPEC_O(_TPPFEATURE_SPEC_O _currn)
#else
void _VS1FEATURE_SPEC_O(_currn )
_TPPFEATURE_SPEC_O _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_SPEC_O(_TPPFEATURE_SPEC_O _currn)
#else
void _VS2FEATURE_SPEC_O(_currn )
_TPPFEATURE_SPEC_O _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVfeature_specification_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkFEATURE_SPEC, _currn->_desc1->_ATtree, _AS2tree, NoKey);
/*SPC(9193)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_SPEC_O(_TPPFEATURE_SPEC_O _currn)
#else
void _VS3FEATURE_SPEC_O(_currn )
_TPPFEATURE_SPEC_O _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1IDENT_MOD_O(_TPPIDENT_MOD_O _currn)
#else
void _VS1IDENT_MOD_O(_currn )
_TPPIDENT_MOD_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkIDENT_MOD, _currn->_ATTERM_1, NoKey);
/*SPC(9208)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1MODIFICATION_NAME_O(_TPPMODIFICATION_NAME_O _currn)
#else
void _VS1MODIFICATION_NAME_O(_currn )
_TPPMODIFICATION_NAME_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2MODIFICATION_NAME_O(_TPPMODIFICATION_NAME_O _currn)
#else
void _VS2MODIFICATION_NAME_O(_currn )
_TPPMODIFICATION_NAME_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVmodification_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkMODIFICATION_NAME, _AVfeature_specification_tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(9188)*/
_AVmodificationmod_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2MODIFICATIONS, _AVmodificationmod_tree_post, _AVmodification_tree, NoKey);
/*SPC(9173)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3MODIFICATION_NAME_O(_TPPMODIFICATION_NAME_O _currn)
#else
void _VS3MODIFICATION_NAME_O(_currn )
_TPPMODIFICATION_NAME_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1MODIFICATION_OUT_O(_TPPMODIFICATION_OUT_O _currn)
#else
void _VS1MODIFICATION_OUT_O(_currn )
_TPPMODIFICATION_OUT_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2MODIFICATION_OUT_O(_TPPMODIFICATION_OUT_O _currn)
#else
void _VS2MODIFICATION_OUT_O(_currn )
_TPPMODIFICATION_OUT_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVmodification_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkMODIFICATION_OUT, _AVfeature_specification_tree, NoKey);
/*SPC(9183)*/
_AVmodificationmod_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2MODIFICATIONS, _AVmodificationmod_tree_post, _AVmodification_tree, NoKey);
/*SPC(9173)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3MODIFICATION_OUT_O(_TPPMODIFICATION_OUT_O _currn)
#else
void _VS3MODIFICATION_OUT_O(_currn )
_TPPMODIFICATION_OUT_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1MODIFICATION_ONLY_O(_TPPMODIFICATION_ONLY_O _currn)
#else
void _VS1MODIFICATION_ONLY_O(_currn )
_TPPMODIFICATION_ONLY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2MODIFICATION_ONLY_O(_TPPMODIFICATION_ONLY_O _currn)
#else
void _VS2MODIFICATION_ONLY_O(_currn )
_TPPMODIFICATION_ONLY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVmodification_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkMODIFICATION_ONLY, _AVfeature_specification_tree, NoKey);
/*SPC(9178)*/
_AVmodificationmod_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2MODIFICATIONS, _AVmodificationmod_tree_post, _AVmodification_tree, NoKey);
/*SPC(9173)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3MODIFICATION_ONLY_O(_TPPMODIFICATION_ONLY_O _currn)
#else
void _VS3MODIFICATION_ONLY_O(_currn )
_TPPMODIFICATION_ONLY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1MODIFICATIONS_O(_TPPMODIFICATIONS_O _currn)
#else
void _VS1MODIFICATIONS_O(_currn )
_TPPMODIFICATIONS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2MODIFICATIONS_O(_TPPMODIFICATIONS_O _currn)
#else
void _VS2MODIFICATIONS_O(_currn )
_TPPMODIFICATIONS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVmodificationmod_tree_post=NULL;
/*SPC(9168)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVmodifications_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkMODIFICATIONS, _AVmodificationmod_tree_post, NoKey);
/*SPC(9169)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3MODIFICATIONS_O(_TPPMODIFICATIONS_O _currn)
#else
void _VS3MODIFICATIONS_O(_currn )
_TPPMODIFICATIONS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1INHERITANCE_INC_ONLY_O(_TPPINHERITANCE_INC_ONLY_O _currn)
#else
void _VS1INHERITANCE_INC_ONLY_O(_currn )
_TPPINHERITANCE_INC_ONLY_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2INHERITANCE_INC_ONLY_O(_TPPINHERITANCE_INC_ONLY_O _currn)
#else
void _VS2INHERITANCE_INC_ONLY_O(_currn )
_TPPINHERITANCE_INC_ONLY_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVinheritance_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkINHERITANCE_INC_ONLY, _AS1tree, _AVmodifications_tree, NoKey);
/*SPC(9161)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3INHERITANCE_INC_ONLY_O(_TPPINHERITANCE_INC_ONLY_O _currn)
#else
void _VS3INHERITANCE_INC_ONLY_O(_currn )
_TPPINHERITANCE_INC_ONLY_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1INHERITANCE_INCLUDE_O(_TPPINHERITANCE_INCLUDE_O _currn)
#else
void _VS1INHERITANCE_INCLUDE_O(_currn )
_TPPINHERITANCE_INCLUDE_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2INHERITANCE_INCLUDE_O(_TPPINHERITANCE_INCLUDE_O _currn)
#else
void _VS2INHERITANCE_INCLUDE_O(_currn )
_TPPINHERITANCE_INCLUDE_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVinheritance_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkINHERITANCE_INCLUDE, _AS1tree, _AVmodifications_tree, NoKey);
/*SPC(9156)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3INHERITANCE_INCLUDE_O(_TPPINHERITANCE_INCLUDE_O _currn)
#else
void _VS3INHERITANCE_INCLUDE_O(_currn )
_TPPINHERITANCE_INCLUDE_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1INHERITANCE_LIKE_O(_TPPINHERITANCE_LIKE_O _currn)
#else
void _VS1INHERITANCE_LIKE_O(_currn )
_TPPINHERITANCE_LIKE_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2INHERITANCE_LIKE_O(_TPPINHERITANCE_LIKE_O _currn)
#else
void _VS2INHERITANCE_LIKE_O(_currn )
_TPPINHERITANCE_LIKE_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVinheritance_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkINHERITANCE_LIKE, _AS1tree, _AVmodifications_tree, NoKey);
/*SPC(9150)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3INHERITANCE_LIKE_O(_TPPINHERITANCE_LIKE_O _currn)
#else
void _VS3INHERITANCE_LIKE_O(_currn )
_TPPINHERITANCE_LIKE_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1INHERITANCE_PRIV_O(_TPPINHERITANCE_PRIV_O _currn)
#else
void _VS1INHERITANCE_PRIV_O(_currn )
_TPPINHERITANCE_PRIV_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2INHERITANCE_PRIV_O(_TPPINHERITANCE_PRIV_O _currn)
#else
void _VS2INHERITANCE_PRIV_O(_currn )
_TPPINHERITANCE_PRIV_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVinheritance_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkINHERITANCE_PRIV, _AVinheritance_tree, NoKey);
/*SPC(9145)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3INHERITANCE_PRIV_O(_TPPINHERITANCE_PRIV_O _currn)
#else
void _VS3INHERITANCE_PRIV_O(_currn )
_TPPINHERITANCE_PRIV_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1INHERITANCES_LST_O(_TPPINHERITANCES_LST_O _currn)
#else
void _VS1INHERITANCES_LST_O(_currn )
_TPPINHERITANCES_LST_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2INHERITANCES_LST_O(_TPPINHERITANCES_LST_O _currn)
#else
void _VS2INHERITANCES_LST_O(_currn )
_TPPINHERITANCES_LST_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkINHERITANCES_LST, _currn->_desc1->_ATtree, _AVinheritance_tree, NoKey);
/*SPC(9140)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3INHERITANCES_LST_O(_TPPINHERITANCES_LST_O _currn)
#else
void _VS3INHERITANCES_LST_O(_currn )
_TPPINHERITANCES_LST_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1INHERITANCES_EMPTY_O(_TPPINHERITANCES_EMPTY_O _currn)
#else
void _VS1INHERITANCES_EMPTY_O(_currn )
_TPPINHERITANCES_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2INHERITANCES_EMPTY_O(_TPPINHERITANCES_EMPTY_O _currn)
#else
void _VS2INHERITANCES_EMPTY_O(_currn )
_TPPINHERITANCES_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkINHERITANCES_EMPTY, NoKey);
/*SPC(9136)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1DIRECT_STREAM_CALL_O(_TPPDIRECT_STREAM_CALL_O _currn)
#else
void _VS1DIRECT_STREAM_CALL_O(_currn )
_TPPDIRECT_STREAM_CALL_O _currn;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2arr_bounds_tree;
TreeNodePtr _AS2class_args_tree;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;
int _AS2ResolvesToClassSpecifiers;
int _AS2ResolvesToExpressions;
int _AS2IsJustExpressions;
int _AS2IsClassSpecifiers;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1arr_bounds_tree;
TreeNodePtr _AS1class_id_tree;
TreeNodePtr _AS1orig_tree;
int _AS1is_notequal;
TreeNodePtr _AS1tree;
int _AS1ResolvesToArrayAccessOrSingleId;
int _AS1ResolvesToSingleId;
int _AS1IsClassIdUse2;
int _AS1IsArrayAccessOrSingleId;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
_AS1IsClassIdUse2=0;
/*SPC(4883)*/
_AVdesignator_IsClassIdUse=0;
/*SPC(4882)*/
_AS1IsArrayAccessOrSingleId=0;
/*SPC(4880)*/
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1IsArrayAccessOrSingleId)),(&( _AS1IsClassIdUse2)),(&( _AS1ResolvesToSingleId)),(&( _AS1ResolvesToArrayAccessOrSingleId)),(&( _AS1orig_tree)),(&( _AS1class_id_tree)),(&( _AS1arr_bounds_tree)));
_AS2IsClassSpecifiers=0;
/*SPC(4890)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsClassSpecifiers)),(&( _AS2ResolvesToExpressions)),(&( _AS2ResolvesToClassSpecifiers)),(&( _AS2orig_tree)),(&( _AS2class_args_tree)),(&( _AS2arr_bounds_tree)));
_AVdirect_stream_call_orig_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkDIRECT_STREAM_CALL_O, _AS1orig_tree, _AS2orig_tree, NoKey);
/*SPC(10206)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2DIRECT_STREAM_CALL_O(_TPPDIRECT_STREAM_CALL_O _currn)
#else
void _VS2DIRECT_STREAM_CALL_O(_currn )
_TPPDIRECT_STREAM_CALL_O _currn;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2arr_bounds_tree;
TreeNodePtr _AS2class_args_tree;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;
int _AS2ResolvesToClassSpecifiers;
int _AS2ResolvesToExpressions;
int _AS2IsJustExpressions;
int _AS2IsClassSpecifiers;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1arr_bounds_tree;
TreeNodePtr _AS1class_id_tree;
TreeNodePtr _AS1orig_tree;
int _AS1is_notequal;
TreeNodePtr _AS1tree;
int _AS1ResolvesToArrayAccessOrSingleId;
int _AS1ResolvesToSingleId;
int _AS1IsClassIdUse2;
int _AS1IsArrayAccessOrSingleId;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*,int*,int*,TreeNodePtr*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1IsArrayAccessOrSingleId)),(&( _AS1IsClassIdUse2)),(&( _AS1ResolvesToSingleId)),(&( _AS1ResolvesToArrayAccessOrSingleId)),(&( _AS1tree)),(&( _AS1is_notequal)),(&( _AS1orig_tree)),(&( _AS1class_id_tree)),(&( _AS1arr_bounds_tree)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsClassSpecifiers)),(&( _AS2ResolvesToExpressions)),(&( _AS2ResolvesToClassSpecifiers)),(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2class_args_tree)),(&( _AS2arr_bounds_tree)),(&( _AS2_const67)));
_AVdirect_stream_call__const67=AppDefTableKeyList(_AS1_const67, _AS2_const67);
/*SPC(3772)*/
_AVdirect_stream_call_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkDIRECT_STREAM_CALL, _AS1tree, _AS2tree, NoKey);
/*SPC(9130)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3DIRECT_STREAM_CALL_O(_TPPDIRECT_STREAM_CALL_O _currn)
#else
void _VS3DIRECT_STREAM_CALL_O(_currn )
_TPPDIRECT_STREAM_CALL_O _currn;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2arr_bounds_tree;
TreeNodePtr _AS2class_args_tree;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;
int _AS2ResolvesToClassSpecifiers;
int _AS2ResolvesToExpressions;
int _AS2IsJustExpressions;
int _AS2IsClassSpecifiers;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1arr_bounds_tree;
TreeNodePtr _AS1class_id_tree;
TreeNodePtr _AS1orig_tree;
int _AS1is_notequal;
TreeNodePtr _AS1tree;
int _AS1ResolvesToArrayAccessOrSingleId;
int _AS1ResolvesToSingleId;
int _AS1IsClassIdUse2;
int _AS1IsArrayAccessOrSingleId;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
_AVdesignator_IsArrayAccess=0;
/*SPC(4881)*/
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*,int*,int*,TreeNodePtr*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1IsArrayAccessOrSingleId)),(&( _AS1IsClassIdUse2)),(&( _AS1ResolvesToSingleId)),(&( _AS1ResolvesToArrayAccessOrSingleId)),(&( _AS1tree)),(&( _AS1is_notequal)),(&( _AS1orig_tree)),(&( _AS1class_id_tree)),(&( _AS1arr_bounds_tree)),(&( _AS1_const67)));
_AS2IsJustExpressions=0;
/*SPC(4893)*/
_AVarguments_IsBounds=0;
/*SPC(4891)*/
_currn->_desc2->_ATis_partial_call=0;
/*SPC(2698)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsClassSpecifiers)),(&( _AS2IsJustExpressions)),(&( _AS2ResolvesToExpressions)),(&( _AS2ResolvesToClassSpecifiers)),(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2class_args_tree)),(&( _AS2arr_bounds_tree)),(&( _AS2_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1COERCION_O(_TPPCOERCION_O _currn)
#else
void _VS1COERCION_O(_currn )
_TPPCOERCION_O _currn;

#endif
{
TreeNodePtr _AS2class_spec_tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_IsClassSpecifier=0;
/*SPC(4918)*/
_AVexpression_IsClassIdUse=0;
/*SPC(4916)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));
_AVcoercion_orig_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkCOERCION_O, _AS1orig_tree, _AVtype_specifier_orig_tree, NoKey);
/*SPC(10201)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2COERCION_O(_TPPCOERCION_O _currn)
#else
void _VS2COERCION_O(_currn )
_TPPCOERCION_O _currn;

#endif
{
TreeNodePtr _AS2class_spec_tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_str_in_or_out=0;
/*SPC(7334)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));
_AVcoercion__const67=AppDefTableKeyList(_AS1_const67, _AVtype_specifier__const67);
/*SPC(2724)*/
_AVcoercion_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkCOERCION, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(9125)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3COERCION_O(_TPPCOERCION_O _currn)
#else
void _VS3COERCION_O(_currn )
_TPPCOERCION_O _currn;

#endif
{
TreeNodePtr _AS2class_spec_tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_IsBound=0;
/*SPC(11350)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STR_CONSTANT_O(_TPPSTR_CONSTANT_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree)
#else
void _VS1STR_CONSTANT_O(_currn ,_AS0tree,_AS0orig_tree)
_TPPSTR_CONSTANT_O _currn;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0orig_tree)=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkSTR_CONSTANT_O, _currn->_ATTERM_1, NoKey);
/*SPC(10196)*/
(* _AS0tree)=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkSTR_CONSTANT, _currn->_ATTERM_1, NoKey);
/*SPC(9120)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STR_CONSTANTS_O(_TPPSTR_CONSTANTS_O _currn)
#else
void _VS1STR_CONSTANTS_O(_currn )
_TPPSTR_CONSTANTS_O _currn;

#endif
{
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)));
_AVstringconstants_orig_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkSTR_CONSTANTS_O, _AS1orig_tree, NoKey);
/*SPC(10191)*/
_AVstringconstants_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkSTR_CONSTANTS, _AS1tree, NoKey);
/*SPC(9115)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STR_CONSTANTS_LST_O(_TPPSTR_CONSTANTS_LST_O _currn)
#else
void _VS1STR_CONSTANTS_LST_O(_currn )
_TPPSTR_CONSTANTS_LST_O _currn;

#endif
{
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVstringconstants_orig_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTR_CONSTANTS_LST_O, _AS1orig_tree, _AVstringconstants_orig_tree, NoKey);
/*SPC(10186)*/
_AVstringconstants_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTR_CONSTANTS_LST, _AS1tree, _AVstringconstants_tree, NoKey);
/*SPC(9110)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_VOID_O(_TPPVALUE_VOID_O _currn)
#else
void _VS1VALUE_VOID_O(_currn )
_TPPVALUE_VOID_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVvalue_orig_tree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkVALUE_VOID_O, NoKey);
/*SPC(10182)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkVALUE_VOID, NoKey);
/*SPC(9106)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_SED_O(_TPPVALUE_SED_O _currn)
#else
void _VS1VALUE_SED_O(_currn )
_TPPVALUE_SED_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVvalue_orig_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_SED_O, _currn->_ATTERM_1, NoKey);
/*SPC(10177)*/
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_SED, _currn->_ATTERM_1, NoKey);
/*SPC(9102)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_OCT_O(_TPPVALUE_OCT_O _currn)
#else
void _VS1VALUE_OCT_O(_currn )
_TPPVALUE_OCT_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVvalue_orig_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_OCT_O, _currn->_ATTERM_1, NoKey);
/*SPC(10173)*/
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_OCT, _currn->_ATTERM_1, NoKey);
/*SPC(9098)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_STR_O(_TPPVALUE_STR_O _currn)
#else
void _VS1VALUE_STR_O(_currn )
_TPPVALUE_STR_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVvalue_orig_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkVALUE_STR_O, _AVstringconstants_orig_tree, NoKey);
/*SPC(10168)*/
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkVALUE_STR, _AVstringconstants_tree, NoKey);
/*SPC(9094)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_CHAR_O(_TPPVALUE_CHAR_O _currn)
#else
void _VS1VALUE_CHAR_O(_currn )
_TPPVALUE_CHAR_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVvalue_orig_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_CHAR_O, _currn->_ATTERM_1, NoKey);
/*SPC(10163)*/
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_CHAR, _currn->_ATTERM_1, NoKey);
/*SPC(9090)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_BOOL_O(_TPPVALUE_BOOL_O _currn)
#else
void _VS1VALUE_BOOL_O(_currn )
_TPPVALUE_BOOL_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVvalue_orig_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_BOOL_O, _currn->_ATTERM_1, NoKey);
/*SPC(10158)*/
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_BOOL, _currn->_ATTERM_1, NoKey);
/*SPC(9086)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_FLOAT_O(_TPPVALUE_FLOAT_O _currn)
#else
void _VS1VALUE_FLOAT_O(_currn )
_TPPVALUE_FLOAT_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVvalue_orig_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_FLOAT_O, _currn->_ATTERM_1, NoKey);
/*SPC(10153)*/
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_FLOAT, _currn->_ATTERM_1, NoKey);
/*SPC(9082)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_INT_O(_TPPVALUE_INT_O _currn)
#else
void _VS1VALUE_INT_O(_currn )
_TPPVALUE_INT_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVvalue_orig_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_INT_O, _currn->_ATTERM_1, NoKey);
/*SPC(10148)*/
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_INT, _currn->_ATTERM_1, NoKey);
/*SPC(9078)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BOUND_METHOD_O(_TPPBOUND_METHOD_O _currn)
#else
void _VS1BOUND_METHOD_O(_currn )
_TPPBOUND_METHOD_O _currn;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2arr_bounds_tree;
TreeNodePtr _AS2class_args_tree;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;
int _AS2ResolvesToClassSpecifiers;
int _AS2ResolvesToExpressions;
int _AS2IsJustExpressions;
int _AS2IsClassSpecifiers;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1arr_bounds_tree;
TreeNodePtr _AS1class_id_tree;
TreeNodePtr _AS1orig_tree;
int _AS1is_notequal;
TreeNodePtr _AS1tree;
int _AS1ResolvesToArrayAccessOrSingleId;
int _AS1ResolvesToSingleId;
int _AS1IsClassIdUse2;
int _AS1IsArrayAccessOrSingleId;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
_AS1IsClassIdUse2=0;
/*SPC(4883)*/
_AVdesignator_IsClassIdUse=0;
/*SPC(4882)*/
_AS1IsArrayAccessOrSingleId=0;
/*SPC(4880)*/
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1IsArrayAccessOrSingleId)),(&( _AS1IsClassIdUse2)),(&( _AS1ResolvesToSingleId)),(&( _AS1ResolvesToArrayAccessOrSingleId)),(&( _AS1orig_tree)),(&( _AS1class_id_tree)),(&( _AS1arr_bounds_tree)));
_AS2IsClassSpecifiers=0;
/*SPC(4890)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsClassSpecifiers)),(&( _AS2ResolvesToExpressions)),(&( _AS2ResolvesToClassSpecifiers)),(&( _AS2orig_tree)),(&( _AS2class_args_tree)),(&( _AS2arr_bounds_tree)));
_AVbound_method_orig_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkBOUND_METHOD_O, _AS1orig_tree, _AS2orig_tree, NoKey);
/*SPC(10143)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BOUND_METHOD_O(_TPPBOUND_METHOD_O _currn)
#else
void _VS2BOUND_METHOD_O(_currn )
_TPPBOUND_METHOD_O _currn;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2arr_bounds_tree;
TreeNodePtr _AS2class_args_tree;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;
int _AS2ResolvesToClassSpecifiers;
int _AS2ResolvesToExpressions;
int _AS2IsJustExpressions;
int _AS2IsClassSpecifiers;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1arr_bounds_tree;
TreeNodePtr _AS1class_id_tree;
TreeNodePtr _AS1orig_tree;
int _AS1is_notequal;
TreeNodePtr _AS1tree;
int _AS1ResolvesToArrayAccessOrSingleId;
int _AS1ResolvesToSingleId;
int _AS1IsClassIdUse2;
int _AS1IsArrayAccessOrSingleId;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*,int*,int*,TreeNodePtr*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1IsArrayAccessOrSingleId)),(&( _AS1IsClassIdUse2)),(&( _AS1ResolvesToSingleId)),(&( _AS1ResolvesToArrayAccessOrSingleId)),(&( _AS1tree)),(&( _AS1is_notequal)),(&( _AS1orig_tree)),(&( _AS1class_id_tree)),(&( _AS1arr_bounds_tree)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsClassSpecifiers)),(&( _AS2ResolvesToExpressions)),(&( _AS2ResolvesToClassSpecifiers)),(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2class_args_tree)),(&( _AS2arr_bounds_tree)),(&( _AS2_const67)));
_AVbound_method__const67=AppDefTableKeyList(_AS1_const67, _AS2_const67);
/*SPC(2693)*/
_AVbound_method_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkBOUND_METHOD, _AS1tree, _AS2tree, NoKey);
/*SPC(9073)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BOUND_METHOD_O(_TPPBOUND_METHOD_O _currn)
#else
void _VS3BOUND_METHOD_O(_currn )
_TPPBOUND_METHOD_O _currn;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2arr_bounds_tree;
TreeNodePtr _AS2class_args_tree;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;
int _AS2ResolvesToClassSpecifiers;
int _AS2ResolvesToExpressions;
int _AS2IsJustExpressions;
int _AS2IsClassSpecifiers;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1arr_bounds_tree;
TreeNodePtr _AS1class_id_tree;
TreeNodePtr _AS1orig_tree;
int _AS1is_notequal;
TreeNodePtr _AS1tree;
int _AS1ResolvesToArrayAccessOrSingleId;
int _AS1ResolvesToSingleId;
int _AS1IsClassIdUse2;
int _AS1IsArrayAccessOrSingleId;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
_AVdesignator_IsArrayAccess=0;
/*SPC(4881)*/
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*,int*,int*,TreeNodePtr*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1IsArrayAccessOrSingleId)),(&( _AS1IsClassIdUse2)),(&( _AS1ResolvesToSingleId)),(&( _AS1ResolvesToArrayAccessOrSingleId)),(&( _AS1tree)),(&( _AS1is_notequal)),(&( _AS1orig_tree)),(&( _AS1class_id_tree)),(&( _AS1arr_bounds_tree)),(&( _AS1_const67)));
_AS2IsJustExpressions=0;
/*SPC(4893)*/
_AVarguments_IsBounds=0;
/*SPC(4891)*/
_currn->_desc2->_ATis_partial_call=1;
/*SPC(2694)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsClassSpecifiers)),(&( _AS2IsJustExpressions)),(&( _AS2ResolvesToExpressions)),(&( _AS2ResolvesToClassSpecifiers)),(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2class_args_tree)),(&( _AS2arr_bounds_tree)),(&( _AS2_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAMED_EXPRESSION_O(_TPPNAMED_EXPRESSION_O _currn,TreeNodePtr* _AS0named_expressions_orig_tree_pre)
#else
void _VS1NAMED_EXPRESSION_O(_currn ,_AS0named_expressions_orig_tree_pre)
_TPPNAMED_EXPRESSION_O _currn;
TreeNodePtr* _AS0named_expressions_orig_tree_pre;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;
TreeNodePtr _AS1orig_tree;

_VisitVarDecl()
_VisitEntry();
_AVname_IsClassIdUse=0;
/*SPC(4910)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
_AVexpression_IsClassSpecifier=0;
/*SPC(4918)*/
_AVexpression_IsClassIdUse=0;
/*SPC(4916)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2orig_tree)));
_AVnamed_expression_orig_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkNAMED_EXPRESSION_O, _AS1orig_tree, _AS2orig_tree, NoKey);
/*SPC(10137)*/
_AVnamed_expressionnamed_expressions_orig_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2NAMED_EXPRESSIONS_O, (* _AS0named_expressions_orig_tree_pre), _AVnamed_expression_orig_tree, NoKey);
/*SPC(10133)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAMED_EXPRESSION_O(_TPPNAMED_EXPRESSION_O _currn,TreeNodePtr* _AS0named_expressions_tree_pre,TreeNodePtr* _AS0named_expressions_orig_tree_pre,DefTableKeyList* _AS0_const67)
#else
void _VS2NAMED_EXPRESSION_O(_currn ,_AS0named_expressions_tree_pre,_AS0named_expressions_orig_tree_pre,_AS0_const67)
_TPPNAMED_EXPRESSION_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0named_expressions_orig_tree_pre;
TreeNodePtr* _AS0named_expressions_tree_pre;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_str_in_or_out=0;
/*SPC(7334)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2_const67)));
(* _AS0_const67)=_AS2_const67;
/*SPC(4)*/
_AVnamed_expression_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkNAMED_EXPRESSION, _currn->_desc1->_ATtree, _AS2tree, NoKey);
/*SPC(9068)*/
_AVnamed_expressionnamed_expressions_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2NAMED_EXPRESSIONS, (* _AS0named_expressions_tree_pre), _AVnamed_expression_tree, NoKey);
/*SPC(9064)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAMED_EXPRESSION_O(_TPPNAMED_EXPRESSION_O _currn,TreeNodePtr* _AS0named_expressions_tree_pre,TreeNodePtr* _AS0named_expressions_orig_tree_pre,DefTableKeyList* _AS0_const67)
#else
void _VS3NAMED_EXPRESSION_O(_currn ,_AS0named_expressions_tree_pre,_AS0named_expressions_orig_tree_pre,_AS0_const67)
_TPPNAMED_EXPRESSION_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0named_expressions_orig_tree_pre;
TreeNodePtr* _AS0named_expressions_tree_pre;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_IsBound=0;
/*SPC(11350)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAMED_EXPRESSIONS_O(_TPPNAMED_EXPRESSIONS_O _currn)
#else
void _VS1NAMED_EXPRESSIONS_O(_currn )
_TPPNAMED_EXPRESSIONS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVnamed_expressionnamed_expressions_orig_tree_post=NULL;
/*SPC(10126)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVnamed_expressions_orig_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkNAMED_EXPRESSIONS_O, _AVnamed_expressionnamed_expressions_orig_tree_post, NoKey);
/*SPC(10127)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAMED_EXPRESSIONS_O(_TPPNAMED_EXPRESSIONS_O _currn)
#else
void _VS2NAMED_EXPRESSIONS_O(_currn )
_TPPNAMED_EXPRESSIONS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVnamed_expressionnamed_expressions_tree_post=NULL;
/*SPC(9058)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVnamed_expressions__const67=_AVLST_named_expressions__const67;
/*SPC(6)*/
_AVnamed_expressions_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkNAMED_EXPRESSIONS, _AVnamed_expressionnamed_expressions_tree_post, NoKey);
/*SPC(9059)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAMED_EXPRESSIONS_O(_TPPNAMED_EXPRESSIONS_O _currn)
#else
void _VS3NAMED_EXPRESSIONS_O(_currn )
_TPPNAMED_EXPRESSIONS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

