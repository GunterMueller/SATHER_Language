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
extern TreeNodePtr* _IG_incl141;
extern TreeNodePtr* _IG_incl140;
extern STPtr* _IG_incl135;
extern int* _IG_incl138;
extern int* _IG_incl137;
extern Environment* _IG_incl132;
extern int* _IG_incl131;
extern IntSet* _IG_incl128;
extern int* _IG_incl125;
extern DefTableKey* _IG_incl123;
extern DefTableKey* _IG_incl122;
extern DefTableKey* _IG_incl118;
extern TreeNodePtr* _IG_incl117;
extern TreeNodePtr* _IG_incl116;
extern TreeNodePtr* _IG_incl115;
extern TreeNodePtr* _IG_incl114;
extern int* _IG_incl104;
extern CTValuePtr* _IG_incl105;
extern STPtr* _IG_incl107;
extern int* _IG_incl102;
extern int* _IG_incl103;
extern int* _IG_incl101;
extern DefTableKey* _IG_incl100;
extern STPtr* _IG_incl99;
extern STPtr* _IG_incl97;
extern int* _IG_incl94;
extern int* _IG_incl90;
extern int* _IG_incl92;
extern DefTableKey* _IG_incl91;
extern int* _IG_incl87;
extern STPtr* _IG_incl85;
extern STPtr* _IG_incl84;
extern int* _IG_incl83;
extern int* _IG_incl81;
extern int* _IG_incl78;
extern PTGNode* _IG_incl71;
extern int* _IG_incl70;
extern DefTableKeyList* _IG_incl75;
extern DefTableKeyList* _IG_incl76;
extern PTGNode* _IG_incl77;
extern int* _IG_incl67;
extern DefTableKey* _IG_incl66;
extern PTGNode* _IG_incl65;
extern PTGNode* _IG_incl64;
extern PTGNode* _IG_incl63;
extern PTGNode* _IG_incl62;
extern int* _IG_incl61;
extern Environment* _IG_incl59;
extern IntSet* _IG_incl58;
extern DefTableKeyList* _IG_incl57;
extern int* _IG_incl56;
extern DefTableKey* _IG_incl55;
extern DefTableKey* _IG_incl52;
extern int* _IG_incl47;
extern int* _IG_incl48;
extern int* _IG_incl46;
extern int* _IG_incl45;
extern STPtr* _IG_incl44;
extern STPtr* _IG_incl42;
extern int* _IG_incl41;
extern STPtr* _IG_incl35;
extern int* _IG_incl33;
extern PTGNode* _IG_incl32;
extern int* _IG_incl34;
extern int* _IG_incl31;
extern int* _IG_incl30;
extern int* _IG_incl29;
extern int* _IG_incl28;
extern IntSet* _IG_incl27;
extern Environment* _IG_incl23;
extern int* _IG_incl22;
extern Environment* _IG_incl19;
extern DefTableKeyList* _IG_incl11;
extern Environment* _IG_incl13;
extern int* _IG_incl10;
extern int* _IG_incl9;
extern DefTableKey* _IG_incl6;
extern Environment* _IG_incl5;
extern Environment* _IG_incl2;
extern Environment* _IG_incl0;
extern TreeNodePtr _AVclass_declarationclass_decls_tree_post;
extern TreeNodePtr _AVparameter_typeparameter_types_tree_post;
extern DefTableKeyList _AVParameter_specification_2Params_post;
extern int _AVLST_Bounds__const117;
extern int _AVLST_Bounds__const118;
extern TreeNodePtr _AVboundbounds_tree_post;
extern TreeNodePtr _AVnamed_expressionnamed_expressions_tree_post;
extern DefTableKeyList _AVModificationModInfos_post;
extern TreeNodePtr _AVfeature_declarationfeature_decls_tree_post;
extern TreeNodePtr _AVparameter_specificationparameters_tree_post;
extern TreeNodePtr _AVlabel_rangelabel_list_tree_post;
extern PTGNode _AVLST_Class_declarations_2__const0;
extern PTGNode _AVClass_declaration_2class_decls_out_post;
extern DefTableKeyList _AVLST_Parameter_types_2__const81;
extern PTGNode _AVLST_Parameter_types_2__const82;
extern int _AVLST_Parameter_types_2__const83;
extern PTGNode _AVLST_Parameter_types_2__const101;
extern DefTableKeyList _AVBuiltin_option_2MethCallsLoc_post;
extern DefTableKeyList _AVBuiltin_option_2AttrAccLoc_post;
extern PTGNode _AVParameter_specification_2NameListPtg_post;
extern DefTableKeyList _AVLST_Bounds_2__const81;
extern PTGNode _AVLST_Bounds_2__const82;
extern int _AVLST_Bounds_2__const83;
extern PTGNode _AVLST_Bounds_2__const101;
extern int _AVLST_Bounds_2__const105;
extern PTGNode _AVBound_2bounds_out_post;
extern int _AVboundBoundCount_post;
extern DefTableKeyList _AVLST_Named_expressions_2__const81;
extern PTGNode _AVLST_Named_expressions_2__const82;
extern int _AVLST_Named_expressions_2__const83;
extern PTGNode _AVLST_Named_expressions_2__const101;
extern int _AVNamed_expression_2UnnamedIndex_post;
extern int _AVNamed_expression_2Index_post;
extern PTGNode _AVNamed_expression_2named_exp_out_post;
extern PTGNode _AVLST_Feature_declarations_2__const101;
extern int _AVLST_Feature_declarations_2__const112;
extern int _AVLST_Feature_declarations_2__const114;
extern DefTableKeyList _AVClass_head_2PubAttr_post;
extern PTGNode _AVFeature_declaration_2shared_init_code_post;
extern PTGNode _AVFeature_declaration_2attr_preinit_initialization_post;
extern PTGNode _AVFeature_declaration_2attr_postinit_initialization_post;
extern PTGNode _AVFeature_declaration_2feature_decls_out_post;
extern PTGNode _AVLST_Parameters_2__const87;
extern PTGNode _AVLST_Parameters_2__const88;
extern PTGNode _AVLST_Parameters_2__const89;
extern PTGNode _AVParameter_specification_2params_out_post;
extern DefTableKeyList _AVLST_Label_list_2__const81;
extern PTGNode _AVLST_Label_list_2__const82;
extern int _AVLST_Label_list_2__const83;
extern ValueRangePtrList _AVWhen_label_stmt_2LabelRanges_post;
extern PTGNode _AVLabel_range_2LabelOut_post;
extern int _AVLST_class_declarations__const40;
extern DefTableKeyList _AVLST_class_declarations__const45;
extern DefTableKeyList _AVLST_parameter_types__const67;
extern TreeNodePtr _AVparameter_typeparameter_types_orig_tree_post;
extern DefTableKeyList _AVbuiltin_optionRefClasses_post;
extern DefTableKeyList _AVLST_bounds__const67;
extern TreeNodePtr _AVboundbounds_orig_tree_post;
extern TreeNodePtr _AVboundstarbounds_tree_post;
extern PTGNode _AVboundBoundPtg_post;
extern int _AVboundClassBoundCount_post;
extern DefTableKeyList _AVLST_named_expressions__const67;
extern TreeNodePtr _AVnamed_expressionnamed_expressions_orig_tree_post;
extern TreeNodePtr _AVmodificationmod_tree_post;
extern TreeNodePtr _AVwhen_types_block_tree;
extern TreeNodePtr _AVtype_case_statement_tree;
extern DefTableKeyList _AVInheritance_2__const110;
extern DefTableKeyList _AVClass_argument_2__const81;
extern PTGNode _AVClass_argument_2__const82;
extern int _AVClass_argument_2__const83;
extern PTGNode _AVClass_argument_2__const101;
extern DefTableKeyList _AVType_specifiers_2TypeBounds_post;
extern DefTableKey _AVClass_parameter_2_ErrorBound;
extern TreeNodePtr _AVTypes_tree;
extern TreeNodePtr _AVWhen_types_block_tree;
extern TreeNodePtr _AVLabel_range_tree;
extern TreeNodePtr _AVWhen_label_stmt_tree;
extern TreeNodePtr _AVException_types_tree;
extern TreeNodePtr _AVWhen_exception_stmt_tree;
extern TreeNodePtr _AVWhen_exception_stmts_tree;
extern TreeNodePtr _AVExceptions_tree;
extern TreeNodePtr _AVLoop_tree;
extern TreeNodePtr _AVCase_statement_tree;
extern TreeNodePtr _AVConditional_statement_tree;
extern TreeNodePtr _AVBegin_block_tree;
extern TreeNodePtr _AVLocal_stream_declaration_tree;
extern TreeNodePtr _AVBuiltin_instruction_tree;
extern TreeNodePtr _AVStringconstants_tree;
extern TreeNodePtr _AVNamed_expression_tree;
extern TreeNodePtr _AVNamed_expressions_tree;
extern TreeNodePtr _AVAggregate_tree;
extern TreeNodePtr _AVQual_feature_id_use_tree;
extern TreeNodePtr _AVObj_id_use_tree;
extern TreeNodePtr _AVDirect_stream_call_tree;
extern TreeNodePtr _AVCoercion_tree;
extern TreeNodePtr _AVValue_tree;
extern TreeNodePtr _AVBound_method_tree;
extern TreeNodePtr _AVQualification_tree;
extern TreeNodePtr _AVStd_method_call_tree;
extern TreeNodePtr _AVArgument_tree;
extern DefTableKey _AVParameter_type_Key;
extern TreeNodePtr _AVParameter_type_tree;
extern PTGNode _AVParameter_type_2_NamePtg;
extern DefTableKey _AVParameter_type_2_Key;
extern TreeNodePtr _AVClass_argument_tree;
extern PTGNode _AVClass_argument_ClassArgsPtg;
extern TreeNodePtr _AVType_specifiers_tree;
extern TreeNodePtr _AVClass_parameter_tree;
extern PTGNode _AVClass_parameter_ClassArgsPtg;
extern DefTableKey _AVMethod_specification_Key;
extern DefTableKey _AVFeature_specification_ModKey;
extern int _AVFeature_id_use_Sym;
extern int _AVIdent_mod_Sym;
extern DefTableKey _AVModification_ModKey;
extern TreeNodePtr _AVbuiltin_instruction_tree;
extern TreeNodePtr _AVbuiltin_instructions_tree;
extern TreeNodePtr _AVparameter_specification_tree;
extern TreeNodePtr _AVmethod_decl_tree;
extern DefTableKey _AVmethod_decl_ArrayMark;
extern TreeNodePtr _AVloop_tree;
extern TreeNodePtr _AVWhen_types_blocks_tree;
extern TreeNodePtr _AVType_case_statement_tree;
extern TreeNodePtr _AVParameter_specification_tree;
extern STPtr _AVType_constructor_Type;
extern DefTableKeyList _AVParameters_ParamList;
extern int _AVMethod_ident_def_Sym;
extern Binding _AVMethod_ident_def_Bind;
extern IntSet _AVMethod_ident_def_KindSet;
extern TreeNodePtr _AVFeature_declaration_tree;
extern TreeNodePtr _AVMethod_body_tree;
extern IntSet _AVMethod_body_KindSet;
extern TreeNodePtr _AVAttribute_specification_tree;
extern DefTableKeyList _AVAttribute_specification_IdList;
extern IntSet _AVAttribute_specification_KindSet;
extern IntSet _AVAttribute_declaration_KindSet;
extern IntSet _AVAttribute_access_type_KindSet;
extern DefTableKeyList _AVIdentifiers_2IdKeys_post;
extern TreeNodePtr _AVIdentifiers_tree;
extern TreeNodePtr _AVMethod_decl_tree;
extern TreeNodePtr _AVFeature_tree;
extern IntSet _AVFeature_KindSet;
extern Binding _AVClass_id_use_Bind;
extern int _AVClass_id_use_Sym;
extern int _AVClass_specifier__const119;
extern InheritanceInfoList _AVInheritancesInhers_post;
extern TreeNodePtr _AVFeature_declarations_org_tree;
extern TreeNodePtr _AVFeature_declarations_tree;
extern int _AVBuiltin_option_is_builtin;
extern int _AVBuiltin_option_is_empty;
extern TreeNodePtr _AVClass_body__const121;
extern TreeNodePtr _AVClass_body__const124;
extern int _AVClass_body__const126;
extern TreeNodePtr _AVClass_body_poly_decl_tree;
extern int _AVClass_body_is_builtin;
extern InheritanceInfoList _AVClass_body_InheritanceList;
extern TreeNodePtr _AVClass_body_tree;
extern int _AVIdent_def_Cnt;
extern int _AVIdent_def_TotalCnt;
extern int _AVIdent_def_IsParamDecl;
extern Binding _AVIdent_def_Bind;
extern IntSet _AVIdent_def_KindSet;
extern TreeNodePtr _AVBound_identifier_tree;
extern int _AVBound_identifier_IsStar;
extern PTGNode _AVClass_parameters_ClassArgsPtg;
extern int _AVClass_bounds_is_array_class;
extern int _AVClass_bounds_NumStars;
extern Binding _AVClass_id_def_Bind;
extern TreeNodePtr _AVClass_id_def_poly_decl_tree;
extern TreeNodePtr _AVClass_id_def_tree;
extern PTGNode _AVClass_id_def_ClassArgsPtg;
extern TreeNodePtr _AVClass_declaration_poly_decl_tree;
extern TreeNodePtr _AVClass_declaration_tree;
extern DefTableKey _AVClass_declaration_InhScopeKey;
extern DefTableKey _AVClass_head__const122;
extern TreeNodePtr _AVClass_head_poly_decl_tree;
extern TreeNodePtr _AVClass_head_class_bounds_tree;
extern TreeNodePtr _AVClass_head_tree;
extern int _AVClass_head_is_array_class;
extern DefTableKeyList _AVModifications_ModInfoList;
extern TreeNodePtr _AVInheritances_tree;
extern TreeNodePtr _AVInheritances_BoundsTree;
extern DefTableKey _AVInheritances_BoundsFrom;
extern int _AVInheritances_NumStars;
extern TreeNodePtr _AVInheritance_tree;
extern TreeNodePtr _AVInheritance_BoundsTree;
extern DefTableKey _AVInheritance_BoundsFromFix;
extern int _AVInheritance_NumStars;
extern int _AVExpression_IsStar;
extern TreeNodePtr _AVBound_tree;
extern TreeNodePtr _AVlocal_stream_declaration_tree;
extern TreeNodePtr _AVfeature_declaration_tree;
extern TreeNodePtr _AVqual_feature_id_use_orig_tree;
extern Binding _AVobj_id_use_Bind;
extern int _AVobj_id_use_Sym;
extern TreeNodePtr _AVobj_id_use_class_id_tree;
extern TreeNodePtr _AVobj_id_use_orig_tree;
extern TreeNodePtr _AVobj_id_use_tree;
extern int _AVobj_id_use_IsClassIdUse;
extern DefTableKey _AVobj_id_use_Key;
extern DefTableKeyList _AVqualification__const67;
extern TreeNodePtr _AVqualification_orig_tree;
extern TreeNodePtr _AVqualification_tree;
extern DefTableKeyList _AVdirect_stream_call__const67;
extern TreeNodePtr _AVdirect_stream_call_orig_tree;
extern TreeNodePtr _AVdirect_stream_call_tree;
extern DefTableKeyList _AVstd_method_call__const67;
extern TreeNodePtr _AVstd_method_call_class_spec_tree;
extern TreeNodePtr _AVstd_method_call_arr_bounds_tree;
extern TreeNodePtr _AVstd_method_call_class_id_tree;
extern TreeNodePtr _AVstd_method_call_orig_tree;
extern int _AVstd_method_call_is_notequal;
extern TreeNodePtr _AVstd_method_call_tree;
extern int _AVstd_method_call_ResolvesToClassSpecifier;
extern int _AVstd_method_call_ResolvesToSingleId;
extern int _AVstd_method_call_IsClassIdUse;
extern int _AVstd_method_call_ResolvesToArrayAccess;
extern DefTableKey _AVstd_method_call_Key;
extern DefTableKeyList _AVcoercion__const67;
extern TreeNodePtr _AVcoercion_orig_tree;
extern TreeNodePtr _AVcoercion_tree;
extern DefTableKeyList _AVargument__const67;
extern TreeNodePtr _AVargument_class_spec_tree;
extern TreeNodePtr _AVargument_arr_bound_tree;
extern TreeNodePtr _AVargument_orig_tree;
extern TreeNodePtr _AVargument_tree;
extern int _AVargument_ResolvesToClassSpecifier;
extern int _AVargument_IsJustExpression;
extern int _AVargument_IsBound;
extern DefTableKeyList _AVbound_method__const67;
extern TreeNodePtr _AVbound_method_orig_tree;
extern TreeNodePtr _AVbound_method_tree;
extern int _AVarguments_IsEmpty;
extern int _AVarguments_IsEmptyArguments;
extern int _AVarguments_IsBounds;
extern TreeNodePtr _AVstringconstants_orig_tree;
extern TreeNodePtr _AVstringconstants_tree;
extern TreeNodePtr _AVconditional_statement_tree;
extern int _AVBound_2_CoercionType;
extern PTGNode _AVBound_2_out;
extern int _AVBounds_2_BoundCnt;
extern int _AVMethod_body_2LabelNum_post;
extern PTGNode _AVBegin_block_2ResumeLabels_post;
extern int _AVResume_statement_2LabelNum_pre;
extern int _AVResume_statement_2_Label;
extern PTGNode _AVResume_statement_2_out;
extern DefTableKeyList _AVType_case_statement_2__const81;
extern PTGNode _AVType_case_statement_2__const82;
extern int _AVType_case_statement_2__const83;
extern PTGNode _AVType_case_statement_2__const84;
extern int _AVType_case_statement_2__const85;
extern int _AVType_case_statement_2_HaveElse;
extern PTGNode _AVType_case_statement_2_out;
extern DefTableKeyList _AVWhen_types_block_2__const81;
extern PTGNode _AVWhen_types_block_2__const82;
extern int _AVWhen_types_block_2__const83;
extern PTGNode _AVWhen_types_block_2__const84;
extern int _AVWhen_types_block_2__const85;
extern Binding _AVWhen_types_block_2_Bind;
extern IntSet _AVWhen_types_block_2_SemKindSet;
extern int _AVWhen_types_block_2_NextLabel;
extern PTGNode _AVWhen_types_block_2_out;
extern int _AVWhen_types_block_2_IsElse;
extern int _AVWhen_types_block_2_UniqueSym;
extern PTGNode _AVReturn_statement_2_out;
extern Environment _AVQual_feature_id_use_2_SemScope;
extern Binding _AVQual_feature_id_use_2_Bind;
extern int _AVQual_feature_id_use_2_Sym;
extern CTValuePtr _AVQual_feature_id_use_2_Val;
extern DefTableKey _AVQual_feature_id_use_2_SemScopeKey;
extern PTGNode _AVParameter_specification_2_NamePtg;
extern PTGNode _AVParameter_specification_2_out;
extern PTGNode _AVBreak_statement_2_out;
extern int _AVBreak_statement_2_JumpLabel;
extern DefTableKeyList _AVLoop_2__const81;
extern PTGNode _AVLoop_2__const82;
extern int _AVLoop_2__const83;
extern PTGNode _AVLoop_2__const84;
extern int _AVLoop_2__const85;
extern PTGNode _AVLoop_2_out;
extern int _AVLoop_2_ExpLabel;
extern int _AVMethod_body_2LabelNum_pre;
extern PTGNode _AVMethod_body_2_out;
extern PTGNode _AVMethod_body_2_exit_code;
extern PTGNode _AVMethod_body_2_entry_code;
extern PTGNode _AVMethod_body_2_param_locals;
extern PTGNode _AVMethod_body_2_value_locals;
extern int _AVMethod_body_2_is_static;
extern int _AVMethod_body_2_is_abstract;
extern PTGNode _AVParameters_2__const87;
extern PTGNode _AVParameters_2__const88;
extern PTGNode _AVParameters_2__const89;
extern PTGNode _AVParameters_2_NamePtg;
extern PTGNode _AVParameters_2_out;
extern int _AVMethod_ident_def_2_IsMainMethod;
extern int _AVMethod_ident_def_2_IsInvariant;
extern Binding _AVMethod_ident_def_2_Bind;
extern PTGNode _AVMethod_ident_def_2_out;
extern int _AVMethod_decl_2__const95;
extern int _AVMethod_decl_2__const111;
extern int _AVMethod_decl_2_MainGetArguments;
extern int _AVMethod_decl_2_MainReturnsInt;
extern Binding _AVMethod_decl_2_self_bind;
extern Binding _AVMethod_decl_2_res_bind;
extern PTGNode _AVMethod_decl_2_NamePtg;
extern PTGNode _AVMethod_decl_2_stream_out;
extern int _AVMethod_decl_2_StartLabel;
extern PTGNode _AVMethod_decl_2_resume_labels;
extern PTGNode _AVMethod_decl_2_out;
extern int _AVMethod_decl_2_IsParamlessInitMethod;
extern PTGNode _AVFeature_declarations_2__const0;
extern int _AVFeature_declarations_2__const106;
extern int _AVFeature_declarations_2__const107;
extern int _AVFeature_declarations_2__const111;
extern int _AVFeature_declarations_2__const112;
extern int _AVFeature_declarations_2__const114;
extern PTGNode _AVFeature_declarations_2_out;
extern DefTableKeyList _AVDirect_stream_call_2__const81;
extern PTGNode _AVDirect_stream_call_2__const82;
extern int _AVDirect_stream_call_2__const83;
extern PTGNode _AVDirect_stream_call_2__const101;
extern DefTableKey _AVDirect_stream_call_2_CreatedKey;
extern int _AVDirect_stream_call_2_LoopEndLabel;
extern PTGNode _AVDirect_stream_call_2_stream_ob;
extern DefTableKey _AVDirect_stream_call_2_Key;
extern PTGNode _AVDirect_stream_call_2_ValHomeNode;
extern PTGNode _AVDirect_stream_call_2_out;
extern DefTableKeyList _AVRaise_statement_2__const81;
extern PTGNode _AVRaise_statement_2__const82;
extern int _AVRaise_statement_2__const83;
extern PTGNode _AVRaise_statement_2_out;
extern DefTableKeyList _AVWhen_exception_stmt_2__const81;
extern PTGNode _AVWhen_exception_stmt_2__const82;
extern int _AVWhen_exception_stmt_2__const83;
extern PTGNode _AVWhen_exception_stmt_2__const84;
extern int _AVWhen_exception_stmt_2__const85;
extern Binding _AVWhen_exception_stmt_2_Bind;
extern IntSet _AVWhen_exception_stmt_2_SemKindSet;
extern int _AVWhen_exception_stmt_2_UniqueSym;
extern PTGNode _AVWhen_exception_stmt_2_out;
extern DefTableKeyList _AVBegin_block_2__const81;
extern PTGNode _AVBegin_block_2__const82;
extern int _AVBegin_block_2__const83;
extern PTGNode _AVBegin_block_2__const84;
extern int _AVBegin_block_2__const85;
extern PTGNode _AVBegin_block_2_out;
extern int _AVBegin_block_2_ForeignLabel;
extern int _AVBegin_block_2_EndLabel;
extern DefTableKeyList _AVExceptions_2__const81;
extern PTGNode _AVExceptions_2__const82;
extern int _AVExceptions_2__const83;
extern PTGNode _AVExceptions_2__const84;
extern int _AVExceptions_2__const85;
extern PTGNode _AVExceptions_2_out;
extern int _AVExceptions_2_is_empty;
extern DefTableKeyList _AVQualification_2__const81;
extern PTGNode _AVQualification_2__const82;
extern int _AVQualification_2__const83;
extern PTGNode _AVQualification_2__const101;
extern int _AVQualification_2_IsQualifiedPolymorph;
extern int _AVQualification_2_IsSharedQualified;
extern CTValuePtr _AVQualification_2_LabelVal;
extern DefTableKey _AVQualification_2_Key;
extern int _AVQualification_2_StackBefore;
extern PTGNode _AVQualification_2_qualifier_out;
extern PTGNode _AVQualification_2_out;
extern DefTableKeyList _AVStd_method_call_2__const81;
extern PTGNode _AVStd_method_call_2__const82;
extern int _AVStd_method_call_2__const83;
extern PTGNode _AVStd_method_call_2__const101;
extern int _AVStd_method_call_2_Is_aget;
extern PTGNode _AVStd_method_call_2_out;
extern STPtr _AVStd_method_call_2_RealType;
extern DefTableKeyList _AVConditional_statement_2__const81;
extern PTGNode _AVConditional_statement_2__const82;
extern int _AVConditional_statement_2__const83;
extern PTGNode _AVConditional_statement_2__const84;
extern int _AVConditional_statement_2__const85;
extern PTGNode _AVConditional_statement_2_out;
extern int _AVConditional_statement_2_MergeLabel;
extern int _AVConditional_statement_2_BranchLabel;
extern DefTableKeyList _AVCoercion_2__const81;
extern PTGNode _AVCoercion_2__const82;
extern int _AVCoercion_2__const83;
extern PTGNode _AVCoercion_2__const101;
extern int _AVCoercion_2_CoercionType;
extern PTGNode _AVCoercion_2_out;
extern Binding _AVClass_id_def_2_Bind;
extern int _AVClass_id_def_2_is_poly_class;
extern PTGNode _AVClass_body_2__const0;
extern DefTableKeyList _AVClass_body_2__const110;
extern int _AVClass_body_2__const111;
extern int _AVClass_body_2__const112;
extern int _AVClass_body_2__const114;
extern int _AVClass_body_2_MainGetArguments;
extern int _AVClass_body_2_MainReturnsInt;
extern int _AVClass_body_2_ForeignLabel;
extern int _AVClass_body_2_EndLabel;
extern PTGNode _AVClass_body_2_out;
extern PTGNode _AVClass_head_2__const108;
extern int _AVClass_head_2__const113;
extern DefTableKeyList _AVClass_head_2__const115;
extern PTGNode _AVClass_head_2_out;
extern STPtr _AVCase_label_2_Type;
extern int _AVLabel_range_2_check;
extern int _AVLabel_range_2_FalseLabel;
extern DefTableKeyList _AVWhen_label_stmt_2__const81;
extern PTGNode _AVWhen_label_stmt_2__const82;
extern int _AVWhen_label_stmt_2__const83;
extern PTGNode _AVWhen_label_stmt_2__const84;
extern int _AVWhen_label_stmt_2__const85;
extern int _AVWhen_label_stmt_2_NextLabel;
extern PTGNode _AVWhen_label_stmt_2_out;
extern int _AVWhen_label_stmt_2_IsElse;
extern DefTableKeyList _AVCase_statement_2__const81;
extern PTGNode _AVCase_statement_2__const82;
extern int _AVCase_statement_2__const83;
extern PTGNode _AVCase_statement_2__const84;
extern int _AVCase_statement_2__const85;
extern PTGNode _AVCase_statement_2_out;
extern int _AVCase_statement_2_HaveElse;
extern DefTableKeyList _AVBuiltin_instruction_2__const81;
extern PTGNode _AVBuiltin_instruction_2_out;
extern DefTableKeyList _AVBuiltin_instructions_2__const81;
extern PTGNode _AVBuiltin_instructions_2_out;
extern PTGNode _AVMethod_specification_2__const101;
extern PTGNode _AVMethod_specification_2_NamePtg;
extern DefTableKey _AVMethod_specification_2_Key;
extern DefTableKeyList _AVBound_method_2__const81;
extern PTGNode _AVBound_method_2__const82;
extern int _AVBound_method_2__const83;
extern PTGNode _AVBound_method_2__const101;
extern PTGNode _AVBound_method_2_out;
extern PTGNode _AVBound_method_2_stream_out;
extern int _AVBound_method_2_stream_object;
extern PTGNode _AVBound_method_2_base_out;
extern BMPtr _AVBound_method_2_BoundMethod;
extern DefTableKeyList _AVLocal_stream_declaration_2__const81;
extern PTGNode _AVLocal_stream_declaration_2__const82;
extern int _AVLocal_stream_declaration_2__const83;
extern PTGNode _AVBlock_2_post_out;
extern PTGNode _AVBlock_2_pre_out;
extern PTGNode _AVBlock_2_inh_locals;
extern DefTableKey _AVBound_identifier_2_Key;
extern PTGNode _AVBound_identifier_2_out;
extern DefTableKeyList _AVClass_bounds_2_BoundKeyList;
extern int _AVClass_bounds_2_is_array_class;
extern PTGNode _AVClass_bounds_2_out;
extern PTGNode _AVFeature_declaration_2_out;
extern int _AVFeature_declaration_2_IsImplicitValueTypeInit;
extern PTGNode _AVFeature_declaration_2_shared_init;
extern PTGNode _AVFeature_declaration_2_attribute_init;
extern int _AVAttribute_specification_2__const72;
extern STPtr _AVAttribute_specification_2__const73;
extern PTGNode _AVAttribute_specification_2__const79;
extern PTGNode _AVAttribute_specification_2__const80;
extern DefTableKeyList _AVAttribute_specification_2__const81;
extern PTGNode _AVAttribute_specification_2__const82;
extern int _AVAttribute_specification_2__const83;
extern PTGNode _AVAttribute_specification_2__const86;
extern PTGNode _AVAttribute_specification_2__const87;
extern PTGNode _AVAttribute_specification_2__const88;
extern PTGNode _AVAttribute_specification_2__const89;
extern STPtr _AVAttribute_specification_2__const93;
extern PTGNode _AVAttribute_specification_2__const94;
extern PTGNode _AVAttribute_specification_2__const96;
extern PTGNode _AVAttribute_specification_2__const97;
extern PTGNode _AVAttribute_specification_2__const98;
extern PTGNode _AVAttribute_specification_2__const100;
extern PTGNode _AVAttribute_specification_2__const101;
extern DefTableKeyList _AVAttribute_specification_2_IdList;
extern PTGNode _AVAttribute_specification_2_NamePtg;
extern int _AVIdent_def_2_Cnt;
extern int _AVIdent_def_2_TotalCnt;
extern Binding _AVIdent_def_2_Bind;
extern int _AVIdent_def_2_IsExceptionOrTypecase;
extern PTGNode _AVIdent_def_2_exit_out;
extern PTGNode _AVIdent_def_2_entry_out;
extern PTGNode _AVIdent_def_2_readwrite_out;
extern PTGNode _AVIdent_def_2_shared_init_out;
extern int _AVAttribute_declaration_2__const72;
extern STPtr _AVAttribute_declaration_2__const73;
extern PTGNode _AVAttribute_declaration_2__const79;
extern PTGNode _AVAttribute_declaration_2__const80;
extern PTGNode _AVAttribute_declaration_2__const96;
extern PTGNode _AVAttribute_declaration_2__const97;
extern PTGNode _AVAttribute_declaration_2__const98;
extern PTGNode _AVAttribute_declaration_2__const100;
extern PTGNode _AVAttribute_declaration_2__const101;
extern DefTableKey _AVAttribute_declaration_2_Called;
extern int _AVAttribute_declaration_2_IsImplicitValueTypeInit;
extern int _AVAttribute_declaration_2_CoercionType;
extern PTGNode _AVAttribute_declaration_2_acc_out;
extern PTGNode _AVType_specifier_2__const94;
extern DefTableKey _AVType_specifier_2_TermKey;
extern Binding _AVType_specifier_2_TermBind;
extern int _AVType_specifier_2_IsTypeBound;
extern int _AVType_specifier_2_IsConstructor;
extern int _AVType_specifier_2_is_empty;
extern PTGNode _AVIdentifiers_2__const79;
extern PTGNode _AVIdentifiers_2__const80;
extern DefTableKeyList _AVIdentifiers_2__const81;
extern PTGNode _AVIdentifiers_2__const86;
extern PTGNode _AVIdentifiers_2__const87;
extern PTGNode _AVIdentifiers_2__const88;
extern PTGNode _AVIdentifiers_2__const89;
extern PTGNode _AVIdentifiers_2__const96;
extern PTGNode _AVIdentifiers_2__const97;
extern PTGNode _AVIdentifiers_2__const98;
extern PTGNode _AVIdentifiers_2__const100;
extern int _AVIdentifiers_2_Sym;
extern PTGNode _AVIdentifiers_2_param_out;
extern PTGNode _AVIdentifiers_2_out;
extern PTGNode _AVFeature_2__const0;
extern PTGNode _AVFeature_2__const100;
extern PTGNode _AVFeature_2__const101;
extern int _AVFeature_2__const106;
extern int _AVFeature_2__const107;
extern int _AVFeature_2__const111;
extern int _AVFeature_2__const112;
extern int _AVFeature_2__const114;
extern IntSet _AVFeature_2_KindSet;
extern int _AVFeature_2_IsImplicitValueTypeInit;
extern PTGNode _AVFeature_2_out;
extern PTGNode _AVFeature_2_shared_init;
extern PTGNode _AVFeature_2_attribute_init;
extern PTGNode _AVFeature_2_ValHomeNode;
extern DefTableKeyList _AVAssignment_2__const81;
extern PTGNode _AVAssignment_2__const82;
extern int _AVAssignment_2__const83;
extern int _AVAssignment_2_IsResAssign;
extern int _AVAssignment_2_CoercionType;
extern PTGNode _AVAssignment_2_out;
extern DefTableKeyList _AVAssertion_statement_2__const81;
extern PTGNode _AVAssertion_statement_2__const82;
extern int _AVAssertion_statement_2__const83;
extern STPtr _AVDesignator_2_TypeEst;
extern int _AVDesignator_2_IsCall;
extern CTValuePtr _AVDesignator_2_LabelVal;
extern DefTableKey _AVDesignator_2_CreatedKey;
extern int _AVDesignator_2_ValHome;
extern DefTableKeyList _AVArgument_2__const81;
extern PTGNode _AVArgument_2__const82;
extern int _AVArgument_2__const83;
extern PTGNode _AVArgument_2__const101;
extern MethArgInfo _AVArgument_2_ArgInfo;
extern CTValuePtr _AVArgument_2_Val;
extern PTGNode _AVArgument_2_write_back;
extern PTGNode _AVArgument_2_ValHomeNode;
extern int _AVArgument_2_ValHome;
extern PTGNode _AVArgument_2_out;
extern PTGNode _AVArgument_2_once_out;
extern CTValuePtr _AVArguments_2_Val;
extern int _AVExpression_2_is_array_aggregate;
extern int _AVExpression_2_IsStar;
extern PTGNode _AVExpression_2_qualifier_out;
extern STPtr _AVExpression_2_RealType;
extern int _AVExpression_2_MergeLabel;
extern int _AVExpression_2_BranchLabel;
extern CTValuePtr _AVName_2_Val;
extern Environment _AVName_2_SemScope;
extern Binding _AVName_2_Bind;
extern int _AVName_2_AttributeIndex;
extern DefTableKey _AVName_2_SemScopeKey;
extern int _AVName_2_Is_aget;
extern PTGNode _AVName_2_out;
extern int _AVName_2_IsAggregate;
extern int _AVNamed_expression_2_IsUnnamed;
extern int _AVNamed_expression_2_CoercionType;
extern PTGNode _AVNamed_expression_2_out;
extern Binding _AVAgg_id_def_2_Bind;
extern int _AVAgg_id_def_2_Sym;
extern IntSet _AVAgg_id_def_2_SemKindSet;
extern DefTableKeyList _AVNamed_expressions_2__const81;
extern PTGNode _AVNamed_expressions_2__const82;
extern int _AVNamed_expressions_2__const83;
extern PTGNode _AVNamed_expressions_2__const101;
extern PTGNode _AVNamed_expressions_2_out;
extern DefTableKeyList _AVAggregate_2__const81;
extern PTGNode _AVAggregate_2__const82;
extern int _AVAggregate_2__const83;
extern PTGNode _AVAggregate_2__const101;
extern PTGNode _AVAggregate_2_out;
extern DefTableKeyList _AVType_constructor_2__const81;
extern int _AVType_constructor_2_is_array_aggregate;
extern STPtr _AVType_constructor_2_TypeEst;
extern PTGNode _AVType_constructor_2_out;
extern PTGNode _AVType_constructor_2_init_code;
extern Binding _AVClass_specifier_2_Bind;
extern int _AVClass_specifier_2_BoundsDefined;
extern int _AVClass_specifier_2_Sym;
extern DefTableKey _AVClass_declaration_2_NotLike;
extern DefTableKeyList _AVClass_declaration_2_Likes;
extern int _AVClass_declaration_2_HasInitMethod;
extern DefTableKey _AVClass_declaration_2_SemScopeKey;
extern PTGNode _AVClass_declaration_2_out;
extern PTGNode _AVClass_declaration_2_bridge_out;
extern int _AVBuiltin_option_2_is_builtin_array;
extern int _AVBuiltin_option_2_is_builtin;
extern TreeNodePtr _AVparameter_type_orig_tree;
extern TreeNodePtr _AVparameter_type_tree;
extern TreeNodePtr _AVfeature_specification_tree;
extern TreeNodePtr _AVmodification_tree;
extern TreeNodePtr _AVmodifications_tree;
extern TreeNodePtr _AVinheritance_tree;
extern TreeNodePtr _AVfeature_declarations_tree;
extern ArgumentInfoList _AVclass_argumentArgInfos_post;
extern int _AVclass_argumentClassArgCount_post;
extern TreeNodePtr _AVclass_argument_orig_tree;
extern TreeNodePtr _AVclass_argument_starbound_tree;
extern TreeNodePtr _AVclass_argument_tree;
extern DefTableKeyList _AVclass_argument_usedParams;
extern ArgumentInfo _AVclass_argument_ArgInfo;
extern DefTableKeyList _AVmethod_specification__const67;
extern TreeNodePtr _AVmethod_specification_orig_tree;
extern DefTableKeyList _AVclass_specifier__const67;
extern TreeNodePtr _AVclass_specifier_orig_tree;
extern int _AVclass_specifier_ArraySym;
extern DefTableKey _AVclass_specifier_ArrayKey;
extern TreeNodePtr _AVclass_specifier_starbound_tree;
extern DefTableKeyList _AVclass_specifier_usedParamList;
extern DefTableKeyList _AVclass_headClassParams_post;
extern TreeNodePtr _AVclass_parameter_tree;
extern int _AVclass_id_use_IsFirstOcc;
extern Binding _AVclass_id_use_Bind;
extern int _AVclass_id_use_Sym;
extern int _AVclass_id_use_ArraySym;
extern int _AVclass_id_use_OrigSym;
extern int _AVclass_param_id_def_Cnt;
extern int _AVclass_param_id_def_IsFirstOcc;
extern int _AVclass_param_id_def_TotalCnt;
extern Binding _AVclass_param_id_def_Bind;
extern TreeNodePtr _AVclass_param_id_def_tree;
extern TreeNodePtr _AVclass_parameters_tree;
extern int _AVclass_parameters_ClassParCount;
extern DefTableKey _AVclass_bounds_BoundsMark;
extern PTGNode _AVclass_bounds_ClassBoundsPtg;
extern int _AVclass_id_def_Cnt;
extern int _AVclass_id_def_TotalCnt;
extern Binding _AVclass_id_def_Bind;
extern TreeNodePtr _AVclass_id_def_tree;
extern PTGNode _AVclass_id_def_ClassBoundsPtg;
extern DefTableKey _AVclass_head__const68;
extern TreeNodePtr _AVclass_head_tree;
extern TreeNodePtr _AVclass_declaration_tree;
extern PTGNode _AVClass_declarations_2__const0;
extern PTGNode _AVClass_declarations_2_out;
extern TreeNodePtr _AVClass_declarations_tree;
extern int _AVclass_declarations__const40;
extern DefTableKeyList _AVclass_declarations__const45;
extern TreeNodePtr _AVclass_declarations_tree;
extern DefTableKey _AVprogram_UnivKey;
extern PTGNode _AVprogram_PTGNull;
extern TreeNodePtr _AVprogram_TreeNodePtrNull;
extern PTGNode _AVprogram_out;
extern int _AVdesignator_ResolvesToArrayAccess;
extern int _AVdesignator_IsClassIdUse;
extern int _AVdesignator_IsArrayAccess;
extern TreeNodePtr _AVvalue_orig_tree;
extern TreeNodePtr _AVlabel_range_tree;
extern TreeNodePtr _AVwhen_label_stmt_tree;
extern TreeNodePtr _AVcase_statement_tree;
extern TreeNodePtr _AVbound_orig_tree;
extern TreeNodePtr _AVbound_starbound_tree;
extern TreeNodePtr _AVbound_tree;
extern TreeNodePtr _AVassertion_statement_tree;
extern TreeNodePtr _AVraise_statement_tree;
extern TreeNodePtr _AVwhen_exception_stmt_tree;
extern TreeNodePtr _AVexceptions_tree;
extern TreeNodePtr _AVbegin_block_tree;
extern DefTableKeyList _AVtype_specifier__const67;
extern TreeNodePtr _AVtype_specifier_orig_tree;
extern DefTableKeyList _AVtype_constructor__const67;
extern TreeNodePtr _AVtype_constructor_orig_tree;
extern TreeNodePtr _AVtype_constructor_tree;
extern TreeNodePtr _AVattribute_specification_tree;
extern TreeNodePtr _AVfeature_tree;
extern TreeNodePtr _AVassignment_tree;
extern TreeNodePtr _AVexpression_class_spec_tree;
extern TreeNodePtr _AVexpression_class_id_tree;
extern int _AVexpression_str_in_or_out;
extern int _AVexpression_IsBound;
extern int _AVexpression_IsClassSpecifier;
extern int _AVexpression_ResolvesToClassSpecifier;
extern int _AVexpression_ResolvesToSingleId;
extern int _AVexpression_IsClassIdUse;
extern DefTableKey _AVexpression_Key;
extern TreeNodePtr _AVname_class_id_tree;
extern int _AVname_IsClassIdUse;
extern int _AVname_IsLeftBracket;
extern int _AVname_ResolvesToSingleId;
extern DefTableKey _AVname_Key;
extern TreeNodePtr _AVnamed_expression_orig_tree;
extern TreeNodePtr _AVnamed_expression_tree;
extern DefTableKeyList _AVnamed_expressions__const67;
extern TreeNodePtr _AVnamed_expressions_orig_tree;
extern TreeNodePtr _AVnamed_expressions_tree;

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LOCAL_DECLS_STREAM_2(_TPPLOCAL_DECLS_STREAM_2 _currn)
#else
void _VS1LOCAL_DECLS_STREAM_2(_currn )
_TPPLOCAL_DECLS_STREAM_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LOCAL_DECLS_STREAM_2(_TPPLOCAL_DECLS_STREAM_2 _currn)
#else
void _VS2LOCAL_DECLS_STREAM_2(_currn )
_TPPLOCAL_DECLS_STREAM_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LOCAL_DECLS_STREAM_2(_TPPLOCAL_DECLS_STREAM_2 _currn)
#else
void _VS3LOCAL_DECLS_STREAM_2(_currn )
_TPPLOCAL_DECLS_STREAM_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LOCAL_DECLS_STREAM_2(_TPPLOCAL_DECLS_STREAM_2 _currn)
#else
void _VS4LOCAL_DECLS_STREAM_2(_currn )
_TPPLOCAL_DECLS_STREAM_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5LOCAL_DECLS_STREAM_2(_TPPLOCAL_DECLS_STREAM_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5LOCAL_DECLS_STREAM_2(_currn ,_AS0_const81)
_TPPLOCAL_DECLS_STREAM_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AVLocal_stream_declaration_2__const81);
/*SPC(577)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6LOCAL_DECLS_STREAM_2(_TPPLOCAL_DECLS_STREAM_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6LOCAL_DECLS_STREAM_2(_currn ,_AS0_const81)
_TPPLOCAL_DECLS_STREAM_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_AT_const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _AVLocal_stream_declaration_2__const82);
/*SPC(577)*/
_currn->_AT_const83=MAX(_currn->_desc1->_AT_const83, _AVLocal_stream_declaration_2__const83);
/*SPC(577)*/
_currn->_ATinit_code=_currn->_desc1->_ATinit_code;
/*SPC(579)*/
_currn->_ATcil_locals=_currn->_desc1->_ATcil_locals;
/*SPC(578)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LOCAL_DECLS_ATT_2(_TPPLOCAL_DECLS_ATT_2 _currn)
#else
void _VS1LOCAL_DECLS_ATT_2(_currn )
_TPPLOCAL_DECLS_ATT_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
int _AS2StackHeight;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc2->_ATKindSet=SingleIS(locVarK);
/*SPC(3729)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LOCAL_DECLS_ATT_2(_TPPLOCAL_DECLS_ATT_2 _currn)
#else
void _VS2LOCAL_DECLS_ATT_2(_currn )
_TPPLOCAL_DECLS_ATT_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
int _AS2StackHeight;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LOCAL_DECLS_ATT_2(_TPPLOCAL_DECLS_ATT_2 _currn)
#else
void _VS3LOCAL_DECLS_ATT_2(_currn )
_TPPLOCAL_DECLS_ATT_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
int _AS2StackHeight;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LOCAL_DECLS_ATT_2(_TPPLOCAL_DECLS_ATT_2 _currn)
#else
void _VS4LOCAL_DECLS_ATT_2(_currn )
_TPPLOCAL_DECLS_ATT_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
int _AS2StackHeight;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5LOCAL_DECLS_ATT_2(_TPPLOCAL_DECLS_ATT_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5LOCAL_DECLS_ATT_2(_currn ,_AS0_const81)
_TPPLOCAL_DECLS_ATT_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
int _AS2StackHeight;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(560)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6LOCAL_DECLS_ATT_2(_TPPLOCAL_DECLS_ATT_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6LOCAL_DECLS_ATT_2(_currn ,_AS0_const81)
_TPPLOCAL_DECLS_ATT_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
int _AS2StackHeight;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS7MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_currn->_desc2->_ATIsTypeCase=0;
/*SPC(6989)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,PTGNode*,DefTableKeyList*)) (VS8MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2StackHeight)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)));
_currn->_AT_const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _AS2_const82);
/*SPC(560)*/
_currn->_AT_const83=MAX(_currn->_desc1->_AT_const83, MAX(_AS2_const83, IDENTICAL(_AS2StackHeight)));
/*SPC(560)*/
_currn->_ATinit_code=PTGNewLineSeq(_currn->_desc1->_ATinit_code, PTGNewLineSeq(_currn->_desc2->_ATinit_code, 
((EQ(_currn->_desc2->_ATinit_code, PTGNULL)
) ? (PTGNULL
) : (PTGNewLineSeq(_AVAttribute_declaration_2__const80, PTGcilPop())))
));
/*SPC(566)*/
_currn->_ATcil_locals=PTGCommaSeq(_currn->_desc1->_ATcil_locals, _AVAttribute_declaration_2__const79);
/*SPC(561)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5LOCAL_DECLS_EMPTY_2(_TPPLOCAL_DECLS_EMPTY_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5LOCAL_DECLS_EMPTY_2(_currn ,_AS0_const81)
_TPPLOCAL_DECLS_EMPTY_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const81)=NullDefTableKeyList();
/*SPC(555)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6LOCAL_DECLS_EMPTY_2(_TPPLOCAL_DECLS_EMPTY_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6LOCAL_DECLS_EMPTY_2(_currn ,_AS0_const81)
_TPPLOCAL_DECLS_EMPTY_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_AT_const82=PTGNull();
/*SPC(555)*/
_currn->_AT_const83=ONE();
/*SPC(555)*/
_currn->_ATinit_code=PTGNULL;
/*SPC(557)*/
_currn->_ATcil_locals=PTGNULL;
/*SPC(556)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BLOCK_2(_TPPBLOCK_2 _currn)
#else
void _VS1BLOCK_2(_currn )
_TPPBLOCK_2 _currn;

#endif
{
Environment* _IL_incl2;
DefTableKeyList _AS2_const81;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BLOCK_2(_TPPBLOCK_2 _currn)
#else
void _VS2BLOCK_2(_currn )
_TPPBLOCK_2 _currn;

#endif
{
Environment* _IL_incl2;
DefTableKeyList _AS2_const81;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BLOCK_2(_TPPBLOCK_2 _currn)
#else
void _VS3BLOCK_2(_currn )
_TPPBLOCK_2 _currn;

#endif
{
Environment* _IL_incl2;
DefTableKeyList _AS2_const81;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4BLOCK_2(_TPPBLOCK_2 _currn)
#else
void _VS4BLOCK_2(_currn )
_TPPBLOCK_2 _currn;

#endif
{
Environment* _IL_incl2;
DefTableKeyList _AS2_const81;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5BLOCK_2(_TPPBLOCK_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5BLOCK_2(_currn ,_AS0_const81)
_TPPBLOCK_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
Environment* _IL_incl2;
DefTableKeyList _AS2_const81;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(545)*/
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6BLOCK_2(_TPPBLOCK_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6BLOCK_2(_currn ,_AS0_const81)
_TPPBLOCK_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
Environment* _IL_incl2;
DefTableKeyList _AS2_const81;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_currn->_ATLabelNum_post=_AVMethod_body_2LabelNum_post;
/*SPC(0)*/
_currn->_ATResumeLabels_post=_AVBegin_block_2ResumeLabels_post;
/*SPC(0)*/
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7BLOCK_2(_TPPBLOCK_2 _currn,PTGNode* _AS0locals,PTGNode* _AS0out,int* _AS0_const85,PTGNode* _AS0_const84,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS7BLOCK_2(_currn ,_AS0locals,_AS0out,_AS0_const85,_AS0_const84,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPBLOCK_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const84;
int* _AS0_const85;
PTGNode* _AS0out;
PTGNode* _AS0locals;

#endif
{
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(* _AS0_const82)=PTGCommaSeq(_currn->_desc1->_AT_const82, _currn->_desc2->_AT_const82);
/*SPC(545)*/
(* _AS0_const83)=MAX(_currn->_desc1->_AT_const83, _currn->_desc2->_AT_const83);
/*SPC(545)*/
(* _AS0_const84)=_currn->_desc2->_AT_const84;
/*SPC(545)*/
(* _AS0_const85)=_currn->_desc2->_AT_const85;
/*SPC(545)*/
(* _AS0out)=PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(_AVBlock_2_pre_out, _currn->_desc1->_ATinit_code), _currn->_desc2->_ATout), _AVBlock_2_post_out);
/*SPC(548)*/
(* _AS0locals)=PTGCommaSeq(_currn->_desc1->_ATcil_locals, _AVBlock_2_inh_locals);
/*SPC(546)*/
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_INST_CLRTYPE_2(_TPPBUILTIN_INST_CLRTYPE_2 _currn)
#else
void _VS1BUILTIN_INST_CLRTYPE_2(_currn )
_TPPBUILTIN_INST_CLRTYPE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BUILTIN_INST_CLRTYPE_2(_TPPBUILTIN_INST_CLRTYPE_2 _currn)
#else
void _VS2BUILTIN_INST_CLRTYPE_2(_currn )
_TPPBUILTIN_INST_CLRTYPE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BUILTIN_INST_CLRTYPE_2(_TPPBUILTIN_INST_CLRTYPE_2 _currn)
#else
void _VS3BUILTIN_INST_CLRTYPE_2(_currn )
_TPPBUILTIN_INST_CLRTYPE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AVBuiltin_instruction_2__const81=_AS1_const81;
/*SPC(745)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4BUILTIN_INST_CLRTYPE_2(_TPPBUILTIN_INST_CLRTYPE_2 _currn)
#else
void _VS4BUILTIN_INST_CLRTYPE_2(_currn )
_TPPBUILTIN_INST_CLRTYPE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_AS1IsMethodParameterType=0;
/*SPC(5941)*/
_AVType_specifier_2_IsTypeBound=0;
/*SPC(5788)*/
_AVType_specifier_2_IsConstructor=0;
/*SPC(2456)*/
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsMethodParameterType)),(&( _AS1_const81)));
_AVBuiltin_instruction_2_out=GetCLRNative(KeyOfType(_currn->_desc1->_ATType), PTGIdent("object"));
/*SPC(746)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_INST_TYPE_2(_TPPBUILTIN_INST_TYPE_2 _currn)
#else
void _VS1BUILTIN_INST_TYPE_2(_currn )
_TPPBUILTIN_INST_TYPE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BUILTIN_INST_TYPE_2(_TPPBUILTIN_INST_TYPE_2 _currn)
#else
void _VS2BUILTIN_INST_TYPE_2(_currn )
_TPPBUILTIN_INST_TYPE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BUILTIN_INST_TYPE_2(_TPPBUILTIN_INST_TYPE_2 _currn)
#else
void _VS3BUILTIN_INST_TYPE_2(_currn )
_TPPBUILTIN_INST_TYPE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AVBuiltin_instruction_2__const81=_AS1_const81;
/*SPC(741)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4BUILTIN_INST_TYPE_2(_TPPBUILTIN_INST_TYPE_2 _currn)
#else
void _VS4BUILTIN_INST_TYPE_2(_currn )
_TPPBUILTIN_INST_TYPE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_AS1IsMethodParameterType=0;
/*SPC(5941)*/
_AVType_specifier_2_IsTypeBound=0;
/*SPC(5788)*/
_AVType_specifier_2_IsConstructor=0;
/*SPC(2456)*/
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsMethodParameterType)),(&( _AS1_const81)));
_AVBuiltin_instruction_2_out=GetCLRType(_currn->_desc1->_ATType);
/*SPC(742)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_INST_STR_2(_TPPBUILTIN_INST_STR_2 _currn)
#else
void _VS1BUILTIN_INST_STR_2(_currn )
_TPPBUILTIN_INST_STR_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BUILTIN_INST_STR_2(_TPPBUILTIN_INST_STR_2 _currn)
#else
void _VS3BUILTIN_INST_STR_2(_currn )
_TPPBUILTIN_INST_STR_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVBuiltin_instruction_2__const81=NullDefTableKeyList();
/*SPC(737)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4BUILTIN_INST_STR_2(_TPPBUILTIN_INST_STR_2 _currn)
#else
void _VS4BUILTIN_INST_STR_2(_currn )
_TPPBUILTIN_INST_STR_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVBuiltin_instruction_2_out=PTGIdent(StringTable(_currn->_ATTERM_1));
/*SPC(738)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BUILTIN_INSTS_EMPTY_2(_TPPBUILTIN_INSTS_EMPTY_2 _currn)
#else
void _VS3BUILTIN_INSTS_EMPTY_2(_currn )
_TPPBUILTIN_INSTS_EMPTY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVBuiltin_instructions_2__const81=NullDefTableKeyList();
/*SPC(733)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4BUILTIN_INSTS_EMPTY_2(_TPPBUILTIN_INSTS_EMPTY_2 _currn)
#else
void _VS4BUILTIN_INSTS_EMPTY_2(_currn )
_TPPBUILTIN_INSTS_EMPTY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVBuiltin_instructions_2_out=PTGNULL;
/*SPC(734)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BUILTIN_INSTS_2(_TPPBUILTIN_INSTS_2 _currn)
#else
void _VS3BUILTIN_INSTS_2(_currn )
_TPPBUILTIN_INSTS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVBuiltin_instructions_2__const81=AppDefTableKeyList(_AVBuiltin_instructions_2__const81, _AVBuiltin_instruction_2__const81);
/*SPC(728)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4BUILTIN_INSTS_2(_TPPBUILTIN_INSTS_2 _currn)
#else
void _VS4BUILTIN_INSTS_2(_currn )
_TPPBUILTIN_INSTS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVBuiltin_instructions_2_out=PTGNewLineSeq(_AVBuiltin_instructions_2_out, _AVBuiltin_instruction_2_out);
/*SPC(729)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_BODY_STATIC_BUILTIN_2(_TPPMETHOD_BODY_STATIC_BUILTIN_2 _currn)
#else
void _VS1METHOD_BODY_STATIC_BUILTIN_2(_currn )
_TPPMETHOD_BODY_STATIC_BUILTIN_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3METHOD_BODY_STATIC_BUILTIN_2(_TPPMETHOD_BODY_STATIC_BUILTIN_2 _currn)
#else
void _VS3METHOD_BODY_STATIC_BUILTIN_2(_currn )
_TPPMETHOD_BODY_STATIC_BUILTIN_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5METHOD_BODY_STATIC_BUILTIN_2(_TPPMETHOD_BODY_STATIC_BUILTIN_2 _currn)
#else
void _VS5METHOD_BODY_STATIC_BUILTIN_2(_currn )
_TPPMETHOD_BODY_STATIC_BUILTIN_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
ResetLocals((* _IG_incl55), 
((InIS(streamK, (* _IG_incl27))
) ? (AppDefTableKeyList(AppDefTableKeyList(_AVBuiltin_instructions_2__const81, 
(((* _IG_incl56)
) ? (SingleDefTableKeyList((* _IG_incl52))
) : (NULLDefTableKeyList))
), (* _IG_incl57))
) : (NULLDefTableKeyList))
);
/*SPC(2145)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7METHOD_BODY_STATIC_BUILTIN_2(_TPPMETHOD_BODY_STATIC_BUILTIN_2 _currn)
#else
void _VS7METHOD_BODY_STATIC_BUILTIN_2(_currn )
_TPPMETHOD_BODY_STATIC_BUILTIN_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVMethod_body_2LabelNum_post=_AVMethod_body_2LabelNum_pre;
/*SPC(0)*/
_AVMethod_body_2_value_locals=PTGNULL;
/*SPC(1536)*/
_AVMethod_body_2_is_static=1;
/*SPC(1596)*/
_AVMethod_body_2_is_abstract=0;
/*SPC(1534)*/
_AVMethod_body_2_out=_AVBuiltin_instructions_2_out;
/*SPC(1597)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_BODY_BUILTIN_2(_TPPMETHOD_BODY_BUILTIN_2 _currn)
#else
void _VS1METHOD_BODY_BUILTIN_2(_currn )
_TPPMETHOD_BODY_BUILTIN_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3METHOD_BODY_BUILTIN_2(_TPPMETHOD_BODY_BUILTIN_2 _currn)
#else
void _VS3METHOD_BODY_BUILTIN_2(_currn )
_TPPMETHOD_BODY_BUILTIN_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5METHOD_BODY_BUILTIN_2(_TPPMETHOD_BODY_BUILTIN_2 _currn)
#else
void _VS5METHOD_BODY_BUILTIN_2(_currn )
_TPPMETHOD_BODY_BUILTIN_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
ResetLocals((* _IG_incl55), 
((InIS(streamK, (* _IG_incl27))
) ? (AppDefTableKeyList(AppDefTableKeyList(_AVBuiltin_instructions_2__const81, 
(((* _IG_incl56)
) ? (SingleDefTableKeyList((* _IG_incl52))
) : (NULLDefTableKeyList))
), (* _IG_incl57))
) : (NULLDefTableKeyList))
);
/*SPC(2145)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7METHOD_BODY_BUILTIN_2(_TPPMETHOD_BODY_BUILTIN_2 _currn)
#else
void _VS7METHOD_BODY_BUILTIN_2(_currn )
_TPPMETHOD_BODY_BUILTIN_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVMethod_body_2LabelNum_post=_AVMethod_body_2LabelNum_pre;
/*SPC(0)*/
_AVMethod_body_2_value_locals=PTGNULL;
/*SPC(1536)*/
_AVMethod_body_2_is_static=0;
/*SPC(1535)*/
_AVMethod_body_2_is_abstract=0;
/*SPC(1534)*/
_AVMethod_body_2_out=_AVBuiltin_instructions_2_out;
/*SPC(1592)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_BODY_FOREIGN_2(_TPPMETHOD_BODY_FOREIGN_2 _currn)
#else
void _VS1METHOD_BODY_FOREIGN_2(_currn )
_TPPMETHOD_BODY_FOREIGN_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5METHOD_BODY_FOREIGN_2(_TPPMETHOD_BODY_FOREIGN_2 _currn)
#else
void _VS5METHOD_BODY_FOREIGN_2(_currn )
_TPPMETHOD_BODY_FOREIGN_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
ResetLocals((* _IG_incl55), 
((InIS(streamK, (* _IG_incl27))
) ? (AppDefTableKeyList(AppDefTableKeyList(NullDefTableKeyList(), 
(((* _IG_incl56)
) ? (SingleDefTableKeyList((* _IG_incl52))
) : (NULLDefTableKeyList))
), (* _IG_incl57))
) : (NULLDefTableKeyList))
);
/*SPC(2145)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6METHOD_BODY_FOREIGN_2(_TPPMETHOD_BODY_FOREIGN_2 _currn)
#else
void _VS6METHOD_BODY_FOREIGN_2(_currn )
_TPPMETHOD_BODY_FOREIGN_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

if (NOT(InIS(externalK, (* _IG_incl58)))) {
message(ERROR, "foreign methods only allowed in external classes", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6596)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7METHOD_BODY_FOREIGN_2(_TPPMETHOD_BODY_FOREIGN_2 _currn)
#else
void _VS7METHOD_BODY_FOREIGN_2(_currn )
_TPPMETHOD_BODY_FOREIGN_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVMethod_body_2LabelNum_post=_AVMethod_body_2LabelNum_pre;
/*SPC(0)*/
_AVMethod_body_2_value_locals=PTGNULL;
/*SPC(1536)*/
_AVMethod_body_2_is_static=0;
/*SPC(1535)*/
_AVMethod_body_2_is_abstract=0;
/*SPC(1534)*/
_AVMethod_body_2_out=PTGNULL;
/*SPC(1588)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_BODY_AB_2(_TPPMETHOD_BODY_AB_2 _currn)
#else
void _VS1METHOD_BODY_AB_2(_currn )
_TPPMETHOD_BODY_AB_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5METHOD_BODY_AB_2(_TPPMETHOD_BODY_AB_2 _currn)
#else
void _VS5METHOD_BODY_AB_2(_currn )
_TPPMETHOD_BODY_AB_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
ResetLocals((* _IG_incl55), 
((InIS(streamK, (* _IG_incl27))
) ? (AppDefTableKeyList(AppDefTableKeyList(NullDefTableKeyList(), 
(((* _IG_incl56)
) ? (SingleDefTableKeyList((* _IG_incl52))
) : (NULLDefTableKeyList))
), (* _IG_incl57))
) : (NULLDefTableKeyList))
);
/*SPC(2145)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6METHOD_BODY_AB_2(_TPPMETHOD_BODY_AB_2 _currn)
#else
void _VS6METHOD_BODY_AB_2(_currn )
_TPPMETHOD_BODY_AB_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

if (NOT(OR(OR(InIS(abstractK, (* _IG_incl58)), InIS(polymorphK, (* _IG_incl58))), InIS(externalK, (* _IG_incl58))))) {
message(ERROR, "abstract methods only allowed in abstract or external classes", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6589)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7METHOD_BODY_AB_2(_TPPMETHOD_BODY_AB_2 _currn)
#else
void _VS7METHOD_BODY_AB_2(_currn )
_TPPMETHOD_BODY_AB_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVMethod_body_2LabelNum_post=_AVMethod_body_2LabelNum_pre;
/*SPC(0)*/
_AVMethod_body_2_value_locals=PTGNULL;
/*SPC(1536)*/
_AVMethod_body_2_is_static=0;
/*SPC(1535)*/
_AVMethod_body_2_is_abstract=1;
/*SPC(1583)*/
_AVMethod_body_2_out=PTGNULL;
/*SPC(1584)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_BODY_2(_TPPMETHOD_BODY_2 _currn)
#else
void _VS1METHOD_BODY_2(_currn )
_TPPMETHOD_BODY_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_currn->_desc1->_ATSemEnv=(* _IG_incl59);
/*SPC(12975)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2METHOD_BODY_2(_TPPMETHOD_BODY_2 _currn)
#else
void _VS2METHOD_BODY_2(_currn )
_TPPMETHOD_BODY_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3METHOD_BODY_2(_TPPMETHOD_BODY_2 _currn)
#else
void _VS3METHOD_BODY_2(_currn )
_TPPMETHOD_BODY_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4METHOD_BODY_2(_TPPMETHOD_BODY_2 _currn)
#else
void _VS4METHOD_BODY_2(_currn )
_TPPMETHOD_BODY_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5METHOD_BODY_2(_TPPMETHOD_BODY_2 _currn)
#else
void _VS5METHOD_BODY_2(_currn )
_TPPMETHOD_BODY_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
ResetLocals((* _IG_incl55), 
((InIS(streamK, (* _IG_incl27))
) ? (AppDefTableKeyList(AppDefTableKeyList(_AS1_const81, 
(((* _IG_incl56)
) ? (SingleDefTableKeyList((* _IG_incl52))
) : (NULLDefTableKeyList))
), (* _IG_incl57))
) : (NULLDefTableKeyList))
);
/*SPC(2145)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6METHOD_BODY_2(_TPPMETHOD_BODY_2 _currn)
#else
void _VS6METHOD_BODY_2(_currn )
_TPPMETHOD_BODY_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_AVMethod_body_2LabelNum_post=_AVMethod_body_2LabelNum_pre;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AVBegin_block_2ResumeLabels_post=_currn->_desc1->_ATResumeLabels_post;
/*SPC(0)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7METHOD_BODY_2(_TPPMETHOD_BODY_2 _currn)
#else
void _VS7METHOD_BODY_2(_currn )
_TPPMETHOD_BODY_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_AVBlock_2_post_out=PTGNULL;
/*SPC(542)*/
_AVBlock_2_pre_out=PTGNULL;
/*SPC(541)*/
_AVBlock_2_inh_locals=PTGNULL;
/*SPC(540)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1locals)),(&( _AS1out)),(&( _AS1_const85)),(&( _AS1_const84)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));

if (NOT(EQ((* _IG_incl56), 0))) {

if (AND(NOT(_AS1_const85), NOT(IsValueType(GetType((* _IG_incl52), NoType))))) {
message(ERROR, "method body must contain at least one assignment to res", 0, (&( _currn->_AT_pos)));

} else {
}
;

} else {
}
;
/*SPC(6638)*/
_AVMethod_body_2LabelNum_post=_currn->_desc1->_ATLabelNum_post;
/*SPC(0)*/
_AVMethod_body_2_value_locals=_AS1_const82;
/*SPC(1540)*/
_AVMethod_body_2_is_static=0;
/*SPC(1535)*/
_AVMethod_body_2_is_abstract=0;
/*SPC(1534)*/
_AVMethod_body_2_out=PTGcilMethodBody(MAX(8, _AS1_const83), PTGcilLocals(PTGCommaSeq(PTGCommaSeq(PTGCommaSeq(PTGCommaSeq(
(((* _IG_incl61)
) ? ((* _IG_incl62)
) : (PTGNULL))
, _AVMethod_body_2_param_locals), _AVMethod_body_2_value_locals), 
((EQ((* _IG_incl56), 0)
) ? (PTGNULL
) : (PTGSpaceSeq(GetCLRType(GetType((* _IG_incl52), NoType)), PTGIdent("res"))))
), PTGCommaSeq(_AS1_const84, IDENTICAL(_AS1locals)))), PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(_AVMethod_body_2_entry_code, 
(((* _IG_incl61)
) ? (PTGNewLineSeq((* _IG_incl63), (* _IG_incl64))
) : (PTGNULL))
), _AS1out), 
(((* _IG_incl61)
) ? ((* _IG_incl65)
) : (PTGNULL))
), _AVMethod_body_2_exit_code));
/*SPC(1545)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_SPEC_2(_TPPPARAMETER_SPEC_2 _currn)
#else
void _VS1PARAMETER_SPEC_2(_currn )
_TPPPARAMETER_SPEC_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc2->_ATKindSet=AddElIS(locVarK, AddElIS(parameterK, _currn->_desc1->_ATKindSet));
/*SPC(3701)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2PARAMETER_SPEC_2(_TPPPARAMETER_SPEC_2 _currn)
#else
void _VS2PARAMETER_SPEC_2(_currn )
_TPPPARAMETER_SPEC_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVParameter_specification_2Params_post=AppDefTableKeyList(_AVParameter_specification_2Params_post, _AVAttribute_specification_2_IdList);
/*SPC(7249)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3PARAMETER_SPEC_2(_TPPPARAMETER_SPEC_2 _currn)
#else
void _VS3PARAMETER_SPEC_2(_currn )
_TPPPARAMETER_SPEC_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVParameter_specification_2_NamePtg=PTGTuple(_currn->_desc1->_ATNamePtg, _AVAttribute_specification_2_NamePtg);
/*SPC(4776)*/
_AVParameter_specification_2NameListPtg_post=PTGCommaSeq(_AVParameter_specification_2NameListPtg_post, _AVParameter_specification_2_NamePtg);
/*SPC(4773)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4PARAMETER_SPEC_2(_TPPPARAMETER_SPEC_2 _currn)
#else
void _VS4PARAMETER_SPEC_2(_currn )
_TPPPARAMETER_SPEC_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5PARAMETER_SPEC_2(_TPPPARAMETER_SPEC_2 _currn)
#else
void _VS5PARAMETER_SPEC_2(_currn )
_TPPPARAMETER_SPEC_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6PARAMETER_SPEC_2(_TPPPARAMETER_SPEC_2 _currn,PTGNode* _AS0_const89,PTGNode* _AS0_const88,PTGNode* _AS0_const87)
#else
void _VS6PARAMETER_SPEC_2(_currn ,_AS0_const89,_AS0_const88,_AS0_const87)
_TPPPARAMETER_SPEC_2 _currn;
PTGNode* _AS0_const87;
PTGNode* _AS0_const88;
PTGNode* _AS0_const89;

#endif
{

_VisitVarDecl()
_VisitEntry();

if (AND(InIS(onceK, _currn->_desc1->_ATKindSet), NOT(InIS(streamK, (* _IG_incl27))))) {
message(ERROR, "once parameters only allowed with streams", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6622)*/
_currn->_desc2->_ATIsConstructor=0;
/*SPC(2452)*/
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_desc2->_ATIsTypeCase=0;
/*SPC(6993)*/
(*(_CALL_VS_((NODEPTR )) (VS8MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const87)=_AVAttribute_specification_2__const87;
/*SPC(1736)*/
(* _AS0_const88)=_AVAttribute_specification_2__const88;
/*SPC(1736)*/
(* _AS0_const89)=_AVAttribute_specification_2__const89;
/*SPC(1736)*/
_AVParameter_specification_2_out=_AVAttribute_specification_2__const86;
/*SPC(1740)*/
_AVParameter_specification_2params_out_post=PTGCommaSeq(_AVParameter_specification_2params_out_post, _AVParameter_specification_2_out);
/*SPC(1737)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETERS_2(_TPPPARAMETERS_2 _currn)
#else
void _VS1PARAMETERS_2(_currn )
_TPPPARAMETERS_2 _currn;

#endif
{
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2PARAMETERS_2(_TPPPARAMETERS_2 _currn)
#else
void _VS2PARAMETERS_2(_currn )
_TPPPARAMETERS_2 _currn;

#endif
{
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_AVParameter_specification_2Params_post=NULLDefTableKeyList;
/*SPC(7244)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATParamList=_AVParameter_specification_2Params_post;
/*SPC(7245)*/
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3PARAMETERS_2(_TPPPARAMETERS_2 _currn)
#else
void _VS3PARAMETERS_2(_currn )
_TPPPARAMETERS_2 _currn;

#endif
{
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_AVParameter_specification_2NameListPtg_post=PTGNULL;
/*SPC(4768)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVParameters_2_NamePtg=_AVParameter_specification_2NameListPtg_post;
/*SPC(4769)*/
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4PARAMETERS_2(_TPPPARAMETERS_2 _currn)
#else
void _VS4PARAMETERS_2(_currn )
_TPPPARAMETERS_2 _currn;

#endif
{
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5PARAMETERS_2(_TPPPARAMETERS_2 _currn)
#else
void _VS5PARAMETERS_2(_currn )
_TPPPARAMETERS_2 _currn;

#endif
{
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6PARAMETERS_2(_TPPPARAMETERS_2 _currn)
#else
void _VS6PARAMETERS_2(_currn )
_TPPPARAMETERS_2 _currn;

#endif
{
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_AVParameter_specification_2params_out_post=PTGNULL;
/*SPC(1732)*/
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVParameters_2__const87=_AVLST_Parameters_2__const87;
/*SPC(7243)*/
_AVParameters_2__const88=_AVLST_Parameters_2__const88;
/*SPC(7243)*/
_AVParameters_2__const89=_AVLST_Parameters_2__const89;
/*SPC(7243)*/
_AVParameters_2_out=_AVParameter_specification_2params_out_post;
/*SPC(1733)*/
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_IDENT_DEF_2(_TPPMETHOD_IDENT_DEF_2 _currn)
#else
void _VS1METHOD_IDENT_DEF_2(_currn )
_TPPMETHOD_IDENT_DEF_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

if (OR(EQ(_currn->_ATSym, MakeName("self")), EQ(_currn->_ATSym, MakeName("res")))) {
message(ERROR, "this identifier has special meaning and cannot be redefined", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2METHOD_IDENT_DEF_2(_TPPMETHOD_IDENT_DEF_2 _currn)
#else
void _VS2METHOD_IDENT_DEF_2(_currn )
_TPPMETHOD_IDENT_DEF_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVMethod_ident_def_2_Bind=BindIdn((* _IG_incl2), _currn->_ATSym);
/*SPC(12795)*/
_currn->_ATKey=AddMethodBinding((&( _currn->_AT_pos)), KeyOf(_AVMethod_ident_def_2_Bind));
/*SPC(4364)*/
UnionSemKindSet(_currn->_ATKey, _currn->_ATSemKindSet);
/*SPC(12105)*/
ResetFeatureOf(_currn->_ATKey, (* _IG_incl66));
/*SPC(6653)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3METHOD_IDENT_DEF_2(_TPPMETHOD_IDENT_DEF_2 _currn)
#else
void _VS3METHOD_IDENT_DEF_2(_currn )
_TPPMETHOD_IDENT_DEF_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVMethod_ident_def_2_IsMainMethod=AND((* _IG_incl67), EQ(_currn->_ATSym, MakeName("main")));
/*SPC(6512)*/
_AVMethod_ident_def_2_IsInvariant=EQ(_currn->_ATSym, MakeName("invariant"));
/*SPC(6445)*/
_AVMethod_ident_def_2_out=PTGcilIdent(StringTable(_currn->_ATTERM_1));
/*SPC(1698)*/

if (AND((* _IG_incl67), _AVMethod_ident_def_2_IsMainMethod)) {

if (IsGlobalUnshared(_currn->_ATKey)) {
message(ERROR, "access to non-shared attributes and/or methods in main method", 0, (&( _currn->_AT_pos)));

} else {
}
;

} else {
}
;
/*SPC(6572)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_DECL_2(_TPPMETHOD_DECL_2 _currn)
#else
void _VS1METHOD_DECL_2(_currn )
_TPPMETHOD_DECL_2 _currn;

#endif
{
DefTableKeyList _AS3_const81;
int _AS3IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVMethod_decl_2__const95=_currn->_desc1->_ATSym;
/*SPC(1185)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2METHOD_DECL_2(_TPPMETHOD_DECL_2 _currn)
#else
void _VS2METHOD_DECL_2(_currn )
_TPPMETHOD_DECL_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKey* _IL_incl52;
IntSet* _IL_incl27;
DefTableKeyList _AS3_const81;
int _AS3IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_IL_incl52=_IG_incl52;_IG_incl52= &(_currn->_ATres_key);
_IL_incl27=_IG_incl27;_IG_incl27= &(_currn->_ATKindSet);
_currn->_ATself_key=NewKey();
/*SPC(4825)*/
_currn->_ATres_key=NewKey();
/*SPC(4821)*/
_currn->_desc1->_ATSemKindSet=
(ResetSemKindSet(_currn->_ATres_key, SingleIS(locVarK)), ResetSemKindSet(_currn->_ATself_key, AddElIS(constantK, AddElIS(locVarK, AddElIS(inK, SingleIS(parameterK))))), _currn->_ATKindSet)
;
/*SPC(3632)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc2->_ATSemEnv=_currn->_ATSemEnv;
/*SPC(12975)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4);
_IG_incl59=_IL_incl59;
_IG_incl52=_IL_incl52;
_IG_incl27=_IL_incl27;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3METHOD_DECL_2(_TPPMETHOD_DECL_2 _currn)
#else
void _VS3METHOD_DECL_2(_currn )
_TPPMETHOD_DECL_2 _currn;

#endif
{
Environment* _IL_incl59;
int* _IL_incl56;
DefTableKey* _IL_incl55;
DefTableKey* _IL_incl52;
IntSet* _IL_incl27;
DefTableKeyList _AS3_const81;
int _AS3IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_IL_incl56=_IG_incl56;_IG_incl56= &(_currn->_ATres_sym);
_IL_incl55=_IG_incl55;_IG_incl55= &(_currn->_ATKey);
_IL_incl52=_IG_incl52;_IG_incl52= &(_currn->_ATres_key);
_IL_incl27=_IG_incl27;_IG_incl27= &(_currn->_ATKindSet);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

if (AND(InIS(finalizeK, _currn->_ATKindSet), OR(NOT(EQ(_currn->_desc2->_ATParamList, NULLDefTableKeyList)), NOT(EQ(_currn->_desc3->_ATType, NoType))))) {
message(ERROR, "finalize method should neither declare parameters nor a return type", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6344)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4);
_AVMethod_decl_2_self_bind=NoBinding;
/*SPC(4826)*/
_AVMethod_decl_2_res_bind=NoBinding;
/*SPC(4822)*/
_currn->_ATself_sym=0;
/*SPC(4824)*/
_currn->_ATKey=_currn->_desc1->_ATKey;
/*SPC(6749)*/
_currn->_ATres_sym=0;
/*SPC(4820)*/

if (AND(EQ(_currn->_desc1->_ATSym, MakeName("aget")), InIS(arrayclassK, (* _IG_incl58)))) {

if (IsAget(_currn->_desc2->_ATParamList, GetType(GetPreDefKey(MakeName("INT"), (* _IG_incl23), (&( _currn->_AT_pos))), NoType), LengthDefTableKeyList(GetBoundKeys((* _IG_incl66), NULLDefTableKeyList)))) {
ResetAgetKey((* _IG_incl66), _currn->_ATKey);
ResetElementType((* _IG_incl66), _currn->_desc3->_ATType);
;

} else {
}
;

} else {
}
;
/*SPC(6042)*/

if (NOT(EQ(_currn->_desc3->_ATType, NoType))) {
PreDefine("res", MakeName("res"), ADDRESS(_currn->_ATres_sym), _currn->_ATSemEnv, _currn->_ATres_key, ADDRESS(_AVMethod_decl_2_res_bind));
ResetType(_currn->_ATres_key, _currn->_desc3->_ATType);
;

} else {
}
;
PreDefine("self", MakeName("self"), ADDRESS(_currn->_ATself_sym), _currn->_ATSemEnv, _currn->_ATself_key, ADDRESS(_AVMethod_decl_2_self_bind));
ResetType(_currn->_ATself_key, GetType((* _IG_incl66), NoType));
;
;
/*SPC(4828)*/
_IG_incl59=_IL_incl59;
_IG_incl56=_IL_incl56;
_IG_incl55=_IL_incl55;
_IG_incl52=_IL_incl52;
_IG_incl27=_IL_incl27;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4METHOD_DECL_2(_TPPMETHOD_DECL_2 _currn)
#else
void _VS4METHOD_DECL_2(_currn )
_TPPMETHOD_DECL_2 _currn;

#endif
{
Environment* _IL_incl59;
int* _IL_incl56;
DefTableKey* _IL_incl55;
DefTableKey* _IL_incl52;
IntSet* _IL_incl27;
DefTableKeyList _AS3_const81;
int _AS3IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_IL_incl56=_IG_incl56;_IG_incl56= &(_currn->_ATres_sym);
_IL_incl55=_IG_incl55;_IG_incl55= &(_currn->_ATKey);
_IL_incl52=_IG_incl52;_IG_incl52= &(_currn->_ATres_key);
_IL_incl27=_IG_incl27;_IG_incl27= &(_currn->_ATKindSet);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVMethod_decl_2_NamePtg=PTGTriple(PTGIdent(StringTable(_currn->_desc1->_ATSym)), PTGParenthesis(_AVParameters_2_NamePtg), PTGResultType(_currn->_desc3->_ATNamePtg));
/*SPC(4763)*/
_IG_incl59=_IL_incl59;
_IG_incl56=_IL_incl56;
_IG_incl55=_IL_incl55;
_IG_incl52=_IL_incl52;
_IG_incl27=_IL_incl27;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5METHOD_DECL_2(_TPPMETHOD_DECL_2 _currn)
#else
void _VS5METHOD_DECL_2(_currn )
_TPPMETHOD_DECL_2 _currn;

#endif
{
Environment* _IL_incl59;
int* _IL_incl56;
DefTableKey* _IL_incl55;
DefTableKey* _IL_incl52;
IntSet* _IL_incl27;
DefTableKeyList _AS3_const81;
int _AS3IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_IL_incl56=_IG_incl56;_IG_incl56= &(_currn->_ATres_sym);
_IL_incl55=_IG_incl55;_IG_incl55= &(_currn->_ATKey);
_IL_incl52=_IG_incl52;_IG_incl52= &(_currn->_ATres_key);
_IL_incl27=_IG_incl27;_IG_incl27= &(_currn->_ATKindSet);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4);
KResetType(KResetParams(KResetResultType(_currn->_desc1->_ATKey, _currn->_desc3->_ATType), _currn->_desc2->_ATParamList), NewType(_currn->_desc1->_ATKey, _currn->_desc1->_ATSemKindSet, MakeName(PTG_StringOut((* _IG_incl77)))));
/*SPC(7212)*/
ResetSym(_currn->_ATres_key, _currn->_ATres_sym);
ResetUniqueName(_currn->_ATres_key, _currn->_ATres_sym);
ResetSym(_currn->_ATself_key, _currn->_ATself_sym);
ResetSym(_currn->_desc1->_ATKey, _currn->_desc1->_ATSym);
;
/*SPC(4578)*/
_IG_incl59=_IL_incl59;
_IG_incl56=_IL_incl56;
_IG_incl55=_IL_incl55;
_IG_incl52=_IL_incl52;
_IG_incl27=_IL_incl27;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6METHOD_DECL_2(_TPPMETHOD_DECL_2 _currn)
#else
void _VS6METHOD_DECL_2(_currn )
_TPPMETHOD_DECL_2 _currn;

#endif
{
Environment* _IL_incl59;
int* _IL_incl56;
DefTableKey* _IL_incl55;
DefTableKey* _IL_incl52;
IntSet* _IL_incl27;
DefTableKeyList _AS3_const81;
int _AS3IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_IL_incl56=_IG_incl56;_IG_incl56= &(_currn->_ATres_sym);
_IL_incl55=_IG_incl55;_IG_incl55= &(_currn->_ATKey);
_IL_incl52=_IG_incl52;_IG_incl52= &(_currn->_ATres_key);
_IL_incl27=_IG_incl27;_IG_incl27= &(_currn->_ATKindSet);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4);
_IG_incl59=_IL_incl59;
_IG_incl56=_IL_incl56;
_IG_incl55=_IL_incl55;
_IG_incl52=_IL_incl52;
_IG_incl27=_IL_incl27;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7METHOD_DECL_2(_TPPMETHOD_DECL_2 _currn)
#else
void _VS7METHOD_DECL_2(_currn )
_TPPMETHOD_DECL_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList* _IL_incl57;
int* _IL_incl56;
DefTableKey* _IL_incl55;
DefTableKey* _IL_incl52;
IntSet* _IL_incl27;
DefTableKeyList _AS3_const81;
int _AS3IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_IL_incl57=_IG_incl57;_IG_incl57= &(_currn->_ATParamList);
_IL_incl56=_IG_incl56;_IG_incl56= &(_currn->_ATres_sym);
_IL_incl55=_IG_incl55;_IG_incl55= &(_currn->_ATKey);
_IL_incl52=_IG_incl52;_IG_incl52= &(_currn->_ATres_key);
_IL_incl27=_IG_incl27;_IG_incl27= &(_currn->_ATKindSet);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3_const81)));
_currn->_ATParamList=_currn->_desc2->_ATParamList;
/*SPC(7219)*/
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4);
_IG_incl59=_IL_incl59;
_IG_incl57=_IL_incl57;
_IG_incl56=_IL_incl56;
_IG_incl55=_IL_incl55;
_IG_incl52=_IL_incl52;
_IG_incl27=_IL_incl27;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS8METHOD_DECL_2(_TPPMETHOD_DECL_2 _currn)
#else
void _VS8METHOD_DECL_2(_currn )
_TPPMETHOD_DECL_2 _currn;

#endif
{
int* _IL_incl61;
Environment* _IL_incl59;
DefTableKeyList* _IL_incl57;
int* _IL_incl56;
DefTableKey* _IL_incl55;
DefTableKey* _IL_incl52;
int* _IL_incl28;
IntSet* _IL_incl27;
DefTableKeyList _AS3_const81;
int _AS3IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl61=_IG_incl61;_IG_incl61= &(_currn->_ATIsInitMethod);
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_IL_incl57=_IG_incl57;_IG_incl57= &(_currn->_ATParamList);
_IL_incl56=_IG_incl56;_IG_incl56= &(_currn->_ATres_sym);
_IL_incl55=_IG_incl55;_IG_incl55= &(_currn->_ATKey);
_IL_incl52=_IG_incl52;_IG_incl52= &(_currn->_ATres_key);
_IL_incl28=_IG_incl28;_IG_incl28= &(_currn->_ATCLRStreamName);
_IL_incl27=_IG_incl27;_IG_incl27= &(_currn->_ATKindSet);
ResetLocalCalled(_currn->_desc1->_ATKey, (* _IG_incl76));
/*SPC(6868)*/

if (InIS(unsharedK, GetSemKindSet(SumDefTableKeyList((* _IG_incl75), IsNotShared, NewKey()), NULLIS))) {
ResetSemKindSet(_currn->_desc1->_ATKey, AddElIS(unsharedK, GetSemKindSet(_currn->_desc1->_ATKey, NULLIS)));
ResetSharedStatus(_currn->_desc1->_ATKey, FINISHED);
;

} else {
}
;
/*SPC(6855)*/

if (AND(EQ(_currn->_desc1->_ATSym, MakeName("aset")), InIS(arrayclassK, (* _IG_incl58)))) {

if (IsAset(_currn->_desc2->_ATParamList, GetType(GetPreDefKey(MakeName("INT"), (* _IG_incl23), (&( _currn->_AT_pos))), NoType), GetElementType((* _IG_incl66), NoType), LengthDefTableKeyList(GetBoundKeys((* _IG_incl66), NULLDefTableKeyList)))) {
ResetAsetKey((* _IG_incl66), _currn->_ATKey);

} else {
}
;

} else {
}
;
/*SPC(6056)*/
_currn->_ATCLRStreamName=
((InIS(streamK, _currn->_ATKindSet)
) ? (GetCLRStreamName(KResetCLRStreamName(_currn->_ATKey, GenerateName("StreamObject")), 0)
) : (0))
;
/*SPC(2136)*/
_currn->_ATIsInitMethod=EQ(_currn->_desc1->_ATSym, MakeName("init"));
/*SPC(6413)*/

if (AND(_currn->_ATIsInitMethod, NOT(EQ(_currn->_desc3->_ATType, NoType)))) {
message(ERROR, "init method must not have a return value", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6415)*/
_IG_incl61=_IL_incl61;
_IG_incl59=_IL_incl59;
_IG_incl57=_IL_incl57;
_IG_incl56=_IL_incl56;
_IG_incl55=_IL_incl55;
_IG_incl52=_IL_incl52;
_IG_incl28=_IL_incl28;
_IG_incl27=_IL_incl27;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS9METHOD_DECL_2(_TPPMETHOD_DECL_2 _currn)
#else
void _VS9METHOD_DECL_2(_currn )
_TPPMETHOD_DECL_2 _currn;

#endif
{
int* _IL_incl61;
Environment* _IL_incl59;
DefTableKeyList* _IL_incl57;
int* _IL_incl56;
DefTableKey* _IL_incl55;
DefTableKey* _IL_incl52;
int* _IL_incl29;
int* _IL_incl28;
IntSet* _IL_incl27;
DefTableKeyList _AS3_const81;
int _AS3IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl61=_IG_incl61;_IG_incl61= &(_currn->_ATIsInitMethod);
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_IL_incl57=_IG_incl57;_IG_incl57= &(_currn->_ATParamList);
_IL_incl56=_IG_incl56;_IG_incl56= &(_currn->_ATres_sym);
_IL_incl55=_IG_incl55;_IG_incl55= &(_currn->_ATKey);
_IL_incl52=_IG_incl52;_IG_incl52= &(_currn->_ATres_key);
_IL_incl29=_IG_incl29;_IG_incl29= &(_currn->_ATEndLabel);
_IL_incl28=_IG_incl28;_IG_incl28= &(_currn->_ATCLRStreamName);
_IL_incl27=_IG_incl27;_IG_incl27= &(_currn->_ATKindSet);
_AVMethod_decl_2_StartLabel=
((InIS(streamK, _currn->_ATKindSet)
) ? (NewUniqueLabel()
) : (0))
;
/*SPC(2128)*/
_AVMethod_body_2LabelNum_post=1;
/*SPC(2134)*/
_AVBegin_block_2ResumeLabels_post=PTGIdent(StringTable(_AVMethod_decl_2_StartLabel));
/*SPC(2131)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

if (_AVMethod_ident_def_2_IsInvariant) {

if (NOT(EqualsType(_currn->_desc3->_ATType, GetType(GetPreDefKey(MakeName("BOOL"), (* _IG_incl23), (&( _currn->_AT_pos))), NoType)))) {
message(ERROR, "invariant must return BOOL", 0, (&( _currn->_AT_pos)));

} else {
}
;

} else {
}
;
/*SPC(6455)*/

if (_AVMethod_ident_def_2_IsInvariant) {

if (NOT(EQ(_currn->_desc2->_ATParamList, NULLDefTableKeyList))) {
message(ERROR, "invariant must not define parameters", 0, (&( _currn->_AT_pos)));

} else {
}
;

} else {
}
;
/*SPC(6459)*/

if (_AVMethod_ident_def_2_IsInvariant) {
message(WARNING, "class invariants not implemented yet!", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6465)*/
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AS3IsMethodParameterType=1;
/*SPC(5945)*/
_AVType_specifier_2_IsTypeBound=0;
/*SPC(5788)*/
_AVType_specifier_2_IsConstructor=0;
/*SPC(2456)*/
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS4MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3IsMethodParameterType)),(&( _AS3_const81)));
_currn->_ATEndLabel=NewUniqueLabel();
/*SPC(1613)*/
_AVMethod_body_2LabelNum_pre=_AVMethod_body_2LabelNum_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4);
_AVMethod_decl_2_resume_labels=_AVBegin_block_2ResumeLabels_post;
/*SPC(2132)*/
_AVMethod_body_2_exit_code=PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(
((InIS(streamK, _currn->_ATKindSet)
) ? (PTGcilStreamTerminate(PTGIdent(StringTable(_currn->_ATCLRStreamName)))
) : (PTGNULL))
, PTGcilLabel(StringTable(_currn->_ATEndLabel))), 
((InIS(streamK, _currn->_ATKindSet)
) ? (BackupLocals(_currn->_ATKey, _currn->_ATCLRStreamName)
) : (PTGNULL))
), _AVParameters_2__const89), PTGNewLineSeq(
((EQ(_currn->_ATres_sym, 0)
) ? (PTGNULL
) : (PTGIdent("ldloc res")))
, PTGcilReturn()));
/*SPC(1675)*/
_AVMethod_body_2_entry_code=PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(_AVParameters_2__const88, 
((InIS(streamK, _currn->_ATKindSet)
) ? (RecoverLocals(_currn->_ATKey, _currn->_ATCLRStreamName)
) : (PTGNULL))
), 
((InIS(streamK, _currn->_ATKindSet)
) ? (PTGNewLineSeq(PTGcilResumeStream(PTGIdent(StringTable(_currn->_ATCLRStreamName)), _AVMethod_decl_2_resume_labels), PTGcilRaiseException(PTGcilIdent("STREAM_TERMINATION"), MapFile(PTRSELECT((&( _currn->_AT_pos)), line)), MapLine(PTRSELECT((&( _currn->_AT_pos)), line))))
) : (PTGNULL))
), 
((_AVMethod_decl_2_StartLabel
) ? (PTGcilLabel(StringTable(_AVMethod_decl_2_StartLabel))
) : (PTGNULL))
);
/*SPC(1650)*/
_AVMethod_body_2_param_locals=_AVParameters_2__const87;
/*SPC(1615)*/
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4);
_AVMethod_decl_2__const111=IDENTICAL(_AVMethod_ident_def_2_IsMainMethod);
/*SPC(1185)*/
_AVMethod_decl_2_MainGetArguments=
((_AVMethod_ident_def_2_IsMainMethod
) ? (
((NOT(EQ(_currn->_desc2->_ATParamList, NULLDefTableKeyList))
) ? (
((AND(EQ(MakeName(NameOfType(GetType(HeadDefTableKeyList(_currn->_desc2->_ATParamList), NoType))), MakeName("ARRAY[*](STRING[*])")), EQ(LengthDefTableKeyList(_currn->_desc2->_ATParamList), 1))
) ? (1
) : (
(message(ERROR, "main method may only have one argument ARRAY[*](STRING)", 0, (&( _currn->_AT_pos))), 0)
))

) : (0))

) : (0))
;
/*SPC(6530)*/
_AVMethod_decl_2_MainReturnsInt=
((_AVMethod_ident_def_2_IsMainMethod
) ? (
((NOT(EQ(_currn->_desc3->_ATType, NoType))
) ? (
((EqualsType(_currn->_desc3->_ATType, GetType(GetPreDefKey(MakeName("INT"), (* _IG_incl23), (&( _currn->_AT_pos))), NoType))
) ? (1
) : (
(message(ERROR, "main method may only return an INT", 0, (&( _currn->_AT_pos))), 0)
))

) : (0))

) : (0))
;
/*SPC(6518)*/
_AVMethod_decl_2_stream_out=CreateStreamObject(_currn->_ATCLRStreamName, _currn->_ATKey);
/*SPC(2166)*/
_AVMethod_decl_2_out=
((_currn->_ATIsInitMethod
) ? (
(((* _IG_incl70)
) ? (PTGNULL
) : (PTGcilConstructor(PTGCommaSeq(GenerateCommaSepTypeList(GetBoundKeys((* _IG_incl66), NULLDefTableKeyList), 0), _AVParameters_2_out), _AVMethod_body_2_out)))

) : (PTGcilMethod(
((InIS(finalizeK, _currn->_ATKindSet)
) ? (PTGIdent("Finalize")
) : (_AVMethod_ident_def_2_out))
, PTGCommaSeq(
((InIS(streamK, _currn->_ATKindSet)
) ? (PTGSpaceSeq(PTGTuple(PTGIdent("class "), PTGIdent(STREAM_BASE_NAME)), PTGIdent("?streamo"))
) : (PTGNULL))
, _AVParameters_2_out), GetCLRType(_currn->_desc3->_ATType), _AVMethod_body_2_out, PTGTuple((* _IG_incl71), 
((_AVMethod_body_2_is_static
) ? (PTGIdent("static ")
) : (
((_AVMethod_body_2_is_abstract
) ? (PTGIdent("virtual abstract ")
) : (PTGIdent("virtual ")))
))
))))
;
/*SPC(1619)*/
_AVMethod_decl_2_IsParamlessInitMethod=AND(EQ(_currn->_desc1->_ATSym, MakeName("init")), EQ(_currn->_desc2->_ATParamList, NULLDefTableKeyList));
/*SPC(1186)*/
_IG_incl61=_IL_incl61;
_IG_incl59=_IL_incl59;
_IG_incl57=_IL_incl57;
_IG_incl56=_IL_incl56;
_IG_incl55=_IL_incl55;
_IG_incl52=_IL_incl52;
_IG_incl29=_IL_incl29;
_IG_incl28=_IL_incl28;
_IG_incl27=_IL_incl27;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1IDENTIFIERS_2(_TPPIDENTIFIERS_2 _currn,IntSet* _AS0KindSet)
#else
void _VS1IDENTIFIERS_2(_currn ,_AS0KindSet)
_TPPIDENTIFIERS_2 _currn;
IntSet* _AS0KindSet;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_desc1->_ATSemKindSet=(* _AS0KindSet);
/*SPC(3648)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVIdentifiers_2_Sym=_currn->_desc1->_ATSym;
/*SPC(4608)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2IDENTIFIERS_2(_TPPIDENTIFIERS_2 _currn,IntSet* _AS0KindSet)
#else
void _VS2IDENTIFIERS_2(_currn ,_AS0KindSet)
_TPPIDENTIFIERS_2 _currn;
IntSet* _AS0KindSet;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVIdentifiers_2IdKeys_post=AppElDefTableKeyList(_AVIdentifiers_2IdKeys_post, _currn->_desc1->_ATKey);
/*SPC(7240)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3IDENTIFIERS_2(_TPPIDENTIFIERS_2 _currn,IntSet* _AS0KindSet)
#else
void _VS3IDENTIFIERS_2(_currn ,_AS0KindSet)
_TPPIDENTIFIERS_2 _currn;
IntSet* _AS0KindSet;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4IDENTIFIERS_2(_TPPIDENTIFIERS_2 _currn,IntSet* _AS0KindSet)
#else
void _VS4IDENTIFIERS_2(_currn ,_AS0KindSet)
_TPPIDENTIFIERS_2 _currn;
IntSet* _AS0KindSet;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVIdent_def_2_IsExceptionOrTypecase=0;
/*SPC(1840)*/
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVIdentifiers_2__const81=SingleDefTableKeyList(_currn->_desc1->_ATKey);
/*SPC(501)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5IDENTIFIERS_2(_TPPIDENTIFIERS_2 _currn,IntSet* _AS0KindSet)
#else
void _VS5IDENTIFIERS_2(_currn ,_AS0KindSet)
_TPPIDENTIFIERS_2 _currn;
IntSet* _AS0KindSet;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVIdentifiers_2__const96=IDENTICAL(_currn->_desc1->_ATinit_out);
/*SPC(501)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6IDENTIFIERS_2(_TPPIDENTIFIERS_2 _currn,IntSet* _AS0KindSet)
#else
void _VS6IDENTIFIERS_2(_currn ,_AS0KindSet)
_TPPIDENTIFIERS_2 _currn;
IntSet* _AS0KindSet;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVIdentifiers_2__const79=PTGNull();
/*SPC(501)*/
_AVIdentifiers_2__const80=IDENTICAL(_currn->_desc1->_ATinit_out);
/*SPC(501)*/
_AVIdentifiers_2__const86=PTGNull();
/*SPC(501)*/
_AVIdentifiers_2__const87=PTGNull();
/*SPC(501)*/
_AVIdentifiers_2__const88=IDENTICAL(_AVIdent_def_2_entry_out);
/*SPC(501)*/
_AVIdentifiers_2__const89=IDENTICAL(_AVIdent_def_2_exit_out);
/*SPC(501)*/
_AVIdentifiers_2__const97=PTGNull();
/*SPC(501)*/
_AVIdentifiers_2__const98=IDENTICAL(_AVIdent_def_2_shared_init_out);
/*SPC(501)*/
_AVIdentifiers_2__const100=IDENTICAL(_AVIdent_def_2_readwrite_out);
/*SPC(501)*/
_AVIdentifiers_2_param_out=
((InIS(onceK, _currn->_desc1->_ATSemKindSet)
) ? (PTGNULL
) : (PTGSpaceSeq(GetCLRType(GetType(_currn->_desc1->_ATKey, NoType)), 
((OR(InIS(outK, _currn->_desc1->_ATSemKindSet), InIS(inoutK, _currn->_desc1->_ATSemKindSet))
) ? (PTGTuple(PTGIdent("& "), PTGcilIdent(CatStrStr("_", StringTable(_currn->_desc1->_ATUniqueId))))
) : (_currn->_desc1->_ATout))
)))
;
/*SPC(1717)*/
_AVIdentifiers_2_out=
((InIS(inK, _currn->_desc1->_ATSemKindSet)
) ? (PTGNULL
) : (PTGTuple(
((InIS(attributeK, _currn->_desc1->_ATSemKindSet)
) ? ((* _IG_incl71)
) : (PTGNULL))
, PTGSpaceSeq(GetCLRType(GetType(_currn->_desc1->_ATKey, NoType)), _currn->_desc1->_ATout))))
;
/*SPC(502)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1IDENTIFIERS_LST_2(_TPPIDENTIFIERS_LST_2 _currn,IntSet* _AS0KindSet)
#else
void _VS1IDENTIFIERS_LST_2(_currn ,_AS0KindSet)
_TPPIDENTIFIERS_LST_2 _currn;
IntSet* _AS0KindSet;

#endif
{
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_AS1KindSet=(* _AS0KindSet);
/*SPC(3645)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_currn->_desc2->_ATSemKindSet=(* _AS0KindSet);
/*SPC(3644)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVIdentifiers_2_Sym=_currn->_desc2->_ATSym;
/*SPC(4604)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2IDENTIFIERS_LST_2(_TPPIDENTIFIERS_LST_2 _currn,IntSet* _AS0KindSet)
#else
void _VS2IDENTIFIERS_LST_2(_currn ,_AS0KindSet)
_TPPIDENTIFIERS_LST_2 _currn;
IntSet* _AS0KindSet;

#endif
{
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVIdentifiers_2IdKeys_post=AppElDefTableKeyList(_AVIdentifiers_2IdKeys_post, _currn->_desc2->_ATKey);
/*SPC(7236)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3IDENTIFIERS_LST_2(_TPPIDENTIFIERS_LST_2 _currn,IntSet* _AS0KindSet)
#else
void _VS3IDENTIFIERS_LST_2(_currn ,_AS0KindSet)
_TPPIDENTIFIERS_LST_2 _currn;
IntSet* _AS0KindSet;

#endif
{
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4IDENTIFIERS_LST_2(_TPPIDENTIFIERS_LST_2 _currn,IntSet* _AS0KindSet)
#else
void _VS4IDENTIFIERS_LST_2(_currn ,_AS0KindSet)
_TPPIDENTIFIERS_LST_2 _currn;
IntSet* _AS0KindSet;

#endif
{
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_AVIdent_def_2_IsExceptionOrTypecase=0;
/*SPC(1840)*/
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVIdentifiers_2__const81=AppDefTableKeyList(_AVIdentifiers_2__const81, SingleDefTableKeyList(_currn->_desc2->_ATKey));
/*SPC(491)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5IDENTIFIERS_LST_2(_TPPIDENTIFIERS_LST_2 _currn,IntSet* _AS0KindSet)
#else
void _VS5IDENTIFIERS_LST_2(_currn ,_AS0KindSet)
_TPPIDENTIFIERS_LST_2 _currn;
IntSet* _AS0KindSet;

#endif
{
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVIdentifiers_2__const96=PTGNewLineSeq(_AVIdentifiers_2__const96, IDENTICAL(_currn->_desc2->_ATinit_out));
/*SPC(491)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6IDENTIFIERS_LST_2(_TPPIDENTIFIERS_LST_2 _currn,IntSet* _AS0KindSet)
#else
void _VS6IDENTIFIERS_LST_2(_currn ,_AS0KindSet)
_TPPIDENTIFIERS_LST_2 _currn;
IntSet* _AS0KindSet;

#endif
{
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();

if ((* _IG_incl78)) {
message(ERROR, "declaration of a single variable required", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(7010)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVIdentifiers_2__const79=PTGCommaSeq(_AVIdentifiers_2__const79, IDENTICAL(_AVIdentifiers_2_out));
/*SPC(491)*/
_AVIdentifiers_2__const80=PTGNewLineSeq(_AVIdentifiers_2__const80, IDENTICAL(_currn->_desc2->_ATinit_out));
/*SPC(491)*/
_AVIdentifiers_2__const86=PTGCommaSeq(_AVIdentifiers_2__const86, IDENTICAL(_AVIdentifiers_2_param_out));
/*SPC(491)*/
_AVIdentifiers_2__const87=PTGCommaSeq(_AVIdentifiers_2__const87, IDENTICAL(_AVIdentifiers_2_out));
/*SPC(491)*/
_AVIdentifiers_2__const88=PTGNewLineSeq(_AVIdentifiers_2__const88, IDENTICAL(_AVIdent_def_2_entry_out));
/*SPC(491)*/
_AVIdentifiers_2__const89=PTGNewLineSeq(_AVIdentifiers_2__const89, IDENTICAL(_AVIdent_def_2_exit_out));
/*SPC(491)*/
_AVIdentifiers_2__const97=PTGNewLineSeq(_AVIdentifiers_2__const97, PTGcilField(_AVIdentifiers_2_out));
/*SPC(491)*/
_AVIdentifiers_2__const98=PTGNewLineSeq(_AVIdentifiers_2__const98, IDENTICAL(_AVIdent_def_2_shared_init_out));
/*SPC(491)*/
_AVIdentifiers_2__const100=PTGNewLineSeq(_AVIdentifiers_2__const100, IDENTICAL(_AVIdent_def_2_readwrite_out));
/*SPC(491)*/
_AVIdentifiers_2_param_out=
((InIS(onceK, _currn->_desc2->_ATSemKindSet)
) ? (PTGNULL
) : (PTGSpaceSeq(GetCLRType(GetType(_currn->_desc2->_ATKey, NoType)), 
((OR(InIS(outK, _currn->_desc2->_ATSemKindSet), InIS(inoutK, _currn->_desc2->_ATSemKindSet))
) ? (PTGTuple(PTGIdent("& "), PTGcilIdent(CatStrStr("_", StringTable(_currn->_desc2->_ATUniqueId))))
) : (_currn->_desc2->_ATout))
)))
;
/*SPC(1704)*/
_AVIdentifiers_2_out=PTGTuple(
((InIS(attributeK, _currn->_desc2->_ATSemKindSet)
) ? ((* _IG_incl71)
) : (PTGNULL))
, PTGSpaceSeq(GetCLRType(GetType(_currn->_desc2->_ATKey, NoType)), _currn->_desc2->_ATout));
/*SPC(492)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_SPEC_2(_TPPATTR_SPEC_2 _currn)
#else
void _VS1ATTR_SPEC_2(_currn )
_TPPATTR_SPEC_2 _currn;

#endif
{
STPtr* _IL_incl107;
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATType=_currn->_desc2->_ATType;
/*SPC(10878)*/
_AS1KindSet=_currn->_ATKindSet;
/*SPC(3692)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_AVAttribute_specification_2__const72=_AVIdentifiers_2_Sym;
/*SPC(2464)*/
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_SPEC_2(_TPPATTR_SPEC_2 _currn)
#else
void _VS2ATTR_SPEC_2(_currn )
_TPPATTR_SPEC_2 _currn;

#endif
{
STPtr* _IL_incl107;
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_AVIdentifiers_2IdKeys_post=NULLDefTableKeyList;
/*SPC(7231)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_AVAttribute_specification_2_IdList=_AVIdentifiers_2IdKeys_post;
/*SPC(7232)*/
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_SPEC_2(_TPPATTR_SPEC_2 _currn)
#else
void _VS3ATTR_SPEC_2(_currn )
_TPPATTR_SPEC_2 _currn;

#endif
{
STPtr* _IL_incl107;
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVAttribute_specification_2__const93=_currn->_desc2->_ATType;
/*SPC(2464)*/
_AVAttribute_specification_2_NamePtg=_currn->_desc2->_ATNamePtg;
/*SPC(4781)*/
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ATTR_SPEC_2(_TPPATTR_SPEC_2 _currn)
#else
void _VS4ATTR_SPEC_2(_currn )
_TPPATTR_SPEC_2 _currn;

#endif
{
STPtr* _IL_incl107;
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5ATTR_SPEC_2(_TPPATTR_SPEC_2 _currn)
#else
void _VS5ATTR_SPEC_2(_currn )
_TPPATTR_SPEC_2 _currn;

#endif
{
STPtr* _IL_incl107;
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVAttribute_specification_2__const81=AppDefTableKeyList(_AVIdentifiers_2__const81, _AS2_const81);
/*SPC(2464)*/
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6ATTR_SPEC_2(_TPPATTR_SPEC_2 _currn)
#else
void _VS6ATTR_SPEC_2(_currn )
_TPPATTR_SPEC_2 _currn;

#endif
{
STPtr* _IL_incl107;
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_AS2IsMethodParameterType=InIS(parameterK, _currn->_ATKindSet);
/*SPC(5957)*/
_AVType_specifier_2_IsTypeBound=0;
/*SPC(5788)*/
_AVType_specifier_2_IsConstructor=_currn->_ATIsConstructor;
/*SPC(2465)*/
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsMethodParameterType)),(&( _AS2_const81)));
_AVAttribute_specification_2__const94=_AVType_specifier_2__const94;
/*SPC(2464)*/
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7ATTR_SPEC_2(_TPPATTR_SPEC_2 _currn)
#else
void _VS7ATTR_SPEC_2(_currn )
_TPPATTR_SPEC_2 _currn;

#endif
{
STPtr* _IL_incl107;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_AVAttribute_specification_2__const96=_AVIdentifiers_2__const96;
/*SPC(2464)*/
_AVAttribute_specification_2__const101=_currn->_desc2->_AT_const101;
/*SPC(2464)*/
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS8ATTR_SPEC_2(_TPPATTR_SPEC_2 _currn)
#else
void _VS8ATTR_SPEC_2(_currn )
_TPPATTR_SPEC_2 _currn;

#endif
{
STPtr* _IL_incl107;
int* _IL_incl78;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl78=_IG_incl78;_IG_incl78= &(_currn->_ATIsTypeCase);
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_AVAttribute_specification_2__const73=_currn->_desc2->_ATType;
/*SPC(2464)*/
_AVAttribute_specification_2__const79=PTGCommaSeq(_AVIdentifiers_2__const79, IDENTICAL(_AVIdentifiers_2_out));
/*SPC(2464)*/
_AVAttribute_specification_2__const80=_AVIdentifiers_2__const80;
/*SPC(2464)*/
_AVAttribute_specification_2__const82=_currn->_desc2->_AT_const82;
/*SPC(2464)*/
_AVAttribute_specification_2__const83=_currn->_desc2->_AT_const83;
/*SPC(2464)*/
_AVAttribute_specification_2__const86=PTGCommaSeq(_AVIdentifiers_2__const86, IDENTICAL(_AVIdentifiers_2_param_out));
/*SPC(2464)*/
_AVAttribute_specification_2__const87=PTGCommaSeq(_AVIdentifiers_2__const87, IDENTICAL(_AVIdentifiers_2_out));
/*SPC(2464)*/
_AVAttribute_specification_2__const88=_AVIdentifiers_2__const88;
/*SPC(2464)*/
_AVAttribute_specification_2__const89=_AVIdentifiers_2__const89;
/*SPC(2464)*/
_AVAttribute_specification_2__const97=PTGNewLineSeq(_AVIdentifiers_2__const97, PTGcilField(_AVIdentifiers_2_out));
/*SPC(2464)*/
_AVAttribute_specification_2__const98=_AVIdentifiers_2__const98;
/*SPC(2464)*/
_AVAttribute_specification_2__const100=_AVIdentifiers_2__const100;
/*SPC(2464)*/
_IG_incl107=_IL_incl107;
_IG_incl78=_IL_incl78;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_DECL_CONST_TYPE_CONST_2(_TPPATTR_DECL_CONST_TYPE_CONST_2 _currn)
#else
void _VS1ATTR_DECL_CONST_TYPE_CONST_2(_currn )
_TPPATTR_DECL_CONST_TYPE_CONST_2 _currn;

#endif
{
STPtr* _IL_incl107;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVType_constructor_2_TypeEst=NoType;
/*SPC(11124)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATType=_currn->_desc2->_ATType;
/*SPC(10898)*/
_AS1KindSet=AddElIS(constantK, _currn->_ATKindSet);
/*SPC(3688)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_AVAttribute_declaration_2__const72=_AVIdentifiers_2_Sym;
/*SPC(486)*/
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_DECL_CONST_TYPE_CONST_2(_TPPATTR_DECL_CONST_TYPE_CONST_2 _currn)
#else
void _VS2ATTR_DECL_CONST_TYPE_CONST_2(_currn )
_TPPATTR_DECL_CONST_TYPE_CONST_2 _currn;

#endif
{
STPtr* _IL_incl107;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_AVIdentifiers_2IdKeys_post=NULLDefTableKeyList;
/*SPC(7227)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_DECL_CONST_TYPE_CONST_2(_TPPATTR_DECL_CONST_TYPE_CONST_2 _currn)
#else
void _VS3ATTR_DECL_CONST_TYPE_CONST_2(_currn )
_TPPATTR_DECL_CONST_TYPE_CONST_2 _currn;

#endif
{
STPtr* _IL_incl107;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_AVType_constructor_2_is_array_aggregate=0;
/*SPC(11087)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ATTR_DECL_CONST_TYPE_CONST_2(_TPPATTR_DECL_CONST_TYPE_CONST_2 _currn)
#else
void _VS4ATTR_DECL_CONST_TYPE_CONST_2(_currn )
_TPPATTR_DECL_CONST_TYPE_CONST_2 _currn;

#endif
{
STPtr* _IL_incl107;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5ATTR_DECL_CONST_TYPE_CONST_2(_TPPATTR_DECL_CONST_TYPE_CONST_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5ATTR_DECL_CONST_TYPE_CONST_2(_currn ,_AS0_const81)
_TPPATTR_DECL_CONST_TYPE_CONST_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_currn->_ATVal=NULLValue;
/*SPC(7055)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const81)=AppDefTableKeyList(_AVIdentifiers_2__const81, _AVType_constructor_2__const81);
/*SPC(486)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6ATTR_DECL_CONST_TYPE_CONST_2(_TPPATTR_DECL_CONST_TYPE_CONST_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6ATTR_DECL_CONST_TYPE_CONST_2(_currn ,_AS0_const81)
_TPPATTR_DECL_CONST_TYPE_CONST_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
int* _IL_incl90;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl90=_IG_incl90;_IG_incl90= &(_currn->_ATIsShared);
_currn->_ATIsShared=InIS(sharedK, _currn->_ATKindSet);
/*SPC(6918)*/
_currn->_desc2->_ATStackBefore=1;
/*SPC(1972)*/
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVAttribute_declaration_2_CoercionType=NOT_COERCIBLE;
/*SPC(6113)*/
_currn->_ATinit_code=_AVType_constructor_2_init_code;
/*SPC(487)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;
_IG_incl90=_IL_incl90;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7ATTR_DECL_CONST_TYPE_CONST_2(_TPPATTR_DECL_CONST_TYPE_CONST_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS7ATTR_DECL_CONST_TYPE_CONST_2(_currn ,_AS0_const81)
_TPPATTR_DECL_CONST_TYPE_CONST_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
int* _IL_incl90;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl90=_IG_incl90;_IG_incl90= &(_currn->_ATIsShared);
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_AVAttribute_declaration_2__const96=_AVIdentifiers_2__const96;
/*SPC(486)*/
_AVAttribute_declaration_2__const101=_currn->_desc2->_AT_const101;
/*SPC(486)*/
_AVAttribute_declaration_2_IsImplicitValueTypeInit=0;
/*SPC(1253)*/
_AVAttribute_declaration_2_acc_out=PTGIdent("initonly ");
/*SPC(488)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;
_IG_incl90=_IL_incl90;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS8ATTR_DECL_CONST_TYPE_CONST_2(_TPPATTR_DECL_CONST_TYPE_CONST_2 _currn,int* _AS0StackHeight,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS8ATTR_DECL_CONST_TYPE_CONST_2(_currn ,_AS0StackHeight,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPATTR_DECL_CONST_TYPE_CONST_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
int* _AS0StackHeight;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
int* _IL_incl90;
int* _IL_incl78;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl90=_IG_incl90;_IG_incl90= &(_currn->_ATIsShared);
_IL_incl78=_IG_incl78;_IG_incl78= &(_currn->_ATIsTypeCase);

if (_currn->_ATIsShared) {

if (InIS(unsharedK, GetSemKindSet(SumDefTableKeyList((* _IG_incl75), IsNotShared, NewKey()), NULLIS))) {
message(ERROR, "initialization of shared attribute refers to non shared attribute", 0, (&( _currn->_AT_pos)));

} else {
}
;

} else {
}
;
/*SPC(6932)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_AVAttribute_declaration_2__const73=_currn->_desc2->_ATType;
/*SPC(486)*/
_AVAttribute_declaration_2__const79=PTGCommaSeq(_AVIdentifiers_2__const79, IDENTICAL(_AVIdentifiers_2_out));
/*SPC(486)*/
_AVAttribute_declaration_2__const80=_AVIdentifiers_2__const80;
/*SPC(486)*/
(* _AS0_const82)=_currn->_desc2->_AT_const82;
/*SPC(486)*/
(* _AS0_const83)=_currn->_desc2->_AT_const83;
/*SPC(486)*/
_AVAttribute_declaration_2__const97=PTGNewLineSeq(_AVIdentifiers_2__const97, PTGcilField(_AVIdentifiers_2_out));
/*SPC(486)*/
_AVAttribute_declaration_2__const98=_AVIdentifiers_2__const98;
/*SPC(486)*/
_AVAttribute_declaration_2__const100=_AVIdentifiers_2__const100;
/*SPC(486)*/
_AVAttribute_declaration_2_Called=NoKey;
/*SPC(6358)*/
(* _AS0StackHeight)=2;
/*SPC(1921)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;
_IG_incl90=_IL_incl90;
_IG_incl78=_IL_incl78;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_DECL_TYPE_CONST_2(_TPPATTR_DECL_TYPE_CONST_2 _currn)
#else
void _VS1ATTR_DECL_TYPE_CONST_2(_currn )
_TPPATTR_DECL_TYPE_CONST_2 _currn;

#endif
{
STPtr* _IL_incl107;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVType_constructor_2_TypeEst=NoType;
/*SPC(11124)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATType=_currn->_desc2->_ATType;
/*SPC(10894)*/
_AS1KindSet=_currn->_ATKindSet;
/*SPC(3684)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_AVAttribute_declaration_2__const72=_AVIdentifiers_2_Sym;
/*SPC(482)*/
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_DECL_TYPE_CONST_2(_TPPATTR_DECL_TYPE_CONST_2 _currn)
#else
void _VS2ATTR_DECL_TYPE_CONST_2(_currn )
_TPPATTR_DECL_TYPE_CONST_2 _currn;

#endif
{
STPtr* _IL_incl107;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_AVIdentifiers_2IdKeys_post=NULLDefTableKeyList;
/*SPC(7223)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_DECL_TYPE_CONST_2(_TPPATTR_DECL_TYPE_CONST_2 _currn)
#else
void _VS3ATTR_DECL_TYPE_CONST_2(_currn )
_TPPATTR_DECL_TYPE_CONST_2 _currn;

#endif
{
STPtr* _IL_incl107;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_AVType_constructor_2_is_array_aggregate=0;
/*SPC(11087)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ATTR_DECL_TYPE_CONST_2(_TPPATTR_DECL_TYPE_CONST_2 _currn)
#else
void _VS4ATTR_DECL_TYPE_CONST_2(_currn )
_TPPATTR_DECL_TYPE_CONST_2 _currn;

#endif
{
STPtr* _IL_incl107;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5ATTR_DECL_TYPE_CONST_2(_TPPATTR_DECL_TYPE_CONST_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5ATTR_DECL_TYPE_CONST_2(_currn ,_AS0_const81)
_TPPATTR_DECL_TYPE_CONST_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_currn->_ATVal=NULLValue;
/*SPC(7055)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const81)=AppDefTableKeyList(_AVIdentifiers_2__const81, _AVType_constructor_2__const81);
/*SPC(482)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6ATTR_DECL_TYPE_CONST_2(_TPPATTR_DECL_TYPE_CONST_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6ATTR_DECL_TYPE_CONST_2(_currn ,_AS0_const81)
_TPPATTR_DECL_TYPE_CONST_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
int* _IL_incl90;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl90=_IG_incl90;_IG_incl90= &(_currn->_ATIsShared);
_currn->_ATIsShared=InIS(sharedK, _currn->_ATKindSet);
/*SPC(6918)*/
_currn->_desc2->_ATStackBefore=1;
/*SPC(1972)*/
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVAttribute_declaration_2_CoercionType=NOT_COERCIBLE;
/*SPC(6113)*/
_currn->_ATinit_code=_AVType_constructor_2_init_code;
/*SPC(483)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;
_IG_incl90=_IL_incl90;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7ATTR_DECL_TYPE_CONST_2(_TPPATTR_DECL_TYPE_CONST_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS7ATTR_DECL_TYPE_CONST_2(_currn ,_AS0_const81)
_TPPATTR_DECL_TYPE_CONST_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
int* _IL_incl90;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl90=_IG_incl90;_IG_incl90= &(_currn->_ATIsShared);
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_AVAttribute_declaration_2__const96=_AVIdentifiers_2__const96;
/*SPC(482)*/
_AVAttribute_declaration_2__const101=_currn->_desc2->_AT_const101;
/*SPC(482)*/
_AVAttribute_declaration_2_IsImplicitValueTypeInit=0;
/*SPC(1253)*/
_AVAttribute_declaration_2_acc_out=PTGNULL;
/*SPC(453)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;
_IG_incl90=_IL_incl90;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS8ATTR_DECL_TYPE_CONST_2(_TPPATTR_DECL_TYPE_CONST_2 _currn,int* _AS0StackHeight,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS8ATTR_DECL_TYPE_CONST_2(_currn ,_AS0StackHeight,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPATTR_DECL_TYPE_CONST_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
int* _AS0StackHeight;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
int* _IL_incl90;
int* _IL_incl78;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl90=_IG_incl90;_IG_incl90= &(_currn->_ATIsShared);
_IL_incl78=_IG_incl78;_IG_incl78= &(_currn->_ATIsTypeCase);

if (_currn->_ATIsShared) {

if (InIS(unsharedK, GetSemKindSet(SumDefTableKeyList((* _IG_incl75), IsNotShared, NewKey()), NULLIS))) {
message(ERROR, "initialization of shared attribute refers to non shared attribute", 0, (&( _currn->_AT_pos)));

} else {
}
;

} else {
}
;
/*SPC(6932)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_AVAttribute_declaration_2__const73=_currn->_desc2->_ATType;
/*SPC(482)*/
_AVAttribute_declaration_2__const79=PTGCommaSeq(_AVIdentifiers_2__const79, IDENTICAL(_AVIdentifiers_2_out));
/*SPC(482)*/
_AVAttribute_declaration_2__const80=_AVIdentifiers_2__const80;
/*SPC(482)*/
(* _AS0_const82)=_currn->_desc2->_AT_const82;
/*SPC(482)*/
(* _AS0_const83)=_currn->_desc2->_AT_const83;
/*SPC(482)*/
_AVAttribute_declaration_2__const97=PTGNewLineSeq(_AVIdentifiers_2__const97, PTGcilField(_AVIdentifiers_2_out));
/*SPC(482)*/
_AVAttribute_declaration_2__const98=_AVIdentifiers_2__const98;
/*SPC(482)*/
_AVAttribute_declaration_2__const100=_AVIdentifiers_2__const100;
/*SPC(482)*/
_AVAttribute_declaration_2_Called=NoKey;
/*SPC(6358)*/
(* _AS0StackHeight)=2;
/*SPC(1921)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;
_IG_incl90=_IL_incl90;
_IG_incl78=_IL_incl78;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_DECL_CONST_EXP_2(_TPPATTR_DECL_CONST_EXP_2 _currn)
#else
void _VS1ATTR_DECL_CONST_EXP_2(_currn )
_TPPATTR_DECL_CONST_EXP_2 _currn;

#endif
{
STPtr* _IL_incl107;
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_currn->_desc1->_ATKindSet=AddElIS(constantK, _currn->_ATKindSet);
/*SPC(3680)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATType=_currn->_desc1->_ATType;
/*SPC(10890)*/
_AVAttribute_declaration_2__const72=_AVAttribute_specification_2__const72;
/*SPC(468)*/
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_DECL_CONST_EXP_2(_TPPATTR_DECL_CONST_EXP_2 _currn)
#else
void _VS2ATTR_DECL_CONST_EXP_2(_currn )
_TPPATTR_DECL_CONST_EXP_2 _currn;

#endif
{
STPtr* _IL_incl107;
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_DECL_CONST_EXP_2(_TPPATTR_DECL_CONST_EXP_2 _currn)
#else
void _VS3ATTR_DECL_CONST_EXP_2(_currn )
_TPPATTR_DECL_CONST_EXP_2 _currn;

#endif
{
STPtr* _IL_incl107;
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVExpression_2_is_array_aggregate=0;
/*SPC(11085)*/
_currn->_desc2->_ATTypeEst=_AVAttribute_specification_2__const93;
/*SPC(11106)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ATTR_DECL_CONST_EXP_2(_TPPATTR_DECL_CONST_EXP_2 _currn)
#else
void _VS4ATTR_DECL_CONST_EXP_2(_currn )
_TPPATTR_DECL_CONST_EXP_2 _currn;

#endif
{
STPtr* _IL_incl107;
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5ATTR_DECL_CONST_EXP_2(_TPPATTR_DECL_CONST_EXP_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5ATTR_DECL_CONST_EXP_2(_currn ,_AS0_const81)
_TPPATTR_DECL_CONST_EXP_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_currn->_ATVal=_currn->_desc2->_ATVal;
/*SPC(7143)*/
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AS2IsExplicitCoercion=0;
/*SPC(10797)*/
_currn->_desc2->_ATIsArg=0;
/*SPC(10994)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsExplicitCoercion)));
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsExplicitCoercion)),(&( _AS2_const81)));
(* _AS0_const81)=AppDefTableKeyList(_AVAttribute_specification_2__const81, _AS2_const81);
/*SPC(468)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6ATTR_DECL_CONST_EXP_2(_TPPATTR_DECL_CONST_EXP_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6ATTR_DECL_CONST_EXP_2(_currn ,_AS0_const81)
_TPPATTR_DECL_CONST_EXP_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
int* _IL_incl90;
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl90=_IG_incl90;_IG_incl90= &(_currn->_ATIsShared);
_currn->_ATIsShared=InIS(sharedK, _currn->_ATKindSet);
/*SPC(6918)*/
_currn->_desc1->_ATIsConstructor=0;
/*SPC(2452)*/
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AS2StackBefore=0;
/*SPC(1901)*/
_AS2UsedAsQualifier=0;
/*SPC(1779)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,int*,DefTableKeyList*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2out)),(&( _AS2UsedAsQualifier)),(&( _AS2StackBefore)),(&( _AS2IsExplicitCoercion)),(&( _AS2_const81)));
_AVAttribute_declaration_2_CoercionType=IsCoercible(_currn->_desc2->_ATType, _currn->_desc1->_ATType, (&( _currn->_AT_pos)), (* _IG_incl23), 1);
/*SPC(6133)*/
_currn->_ATinit_code=
(((* _IG_incl70)
) ? (PTGNULL
) : (PTGNewLineSeq(_AS2out, GetConvCode(_currn->_desc2->_ATType, _currn->_desc1->_ATType, _AVAttribute_declaration_2_CoercionType, (&( _currn->_AT_pos)), (* _IG_incl23)))))
;
/*SPC(469)*/

if (EQ(_AVAttribute_declaration_2_CoercionType, NOT_COERCIBLE)) {
message(ERROR, CatStrStr(CatStrStr(NameOfType(_currn->_desc2->_ATType), " not automatically coercible to "), NameOfType(_currn->_desc1->_ATType)), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6144)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;
_IG_incl90=_IL_incl90;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7ATTR_DECL_CONST_EXP_2(_TPPATTR_DECL_CONST_EXP_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS7ATTR_DECL_CONST_EXP_2(_currn ,_AS0_const81)
_TPPATTR_DECL_CONST_EXP_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
int* _IL_incl90;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl90=_IG_incl90;_IG_incl90= &(_currn->_ATIsShared);
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVAttribute_declaration_2__const96=_AVAttribute_specification_2__const96;
/*SPC(468)*/
_AVAttribute_declaration_2__const101=PTGCommaSeq(_AVAttribute_specification_2__const101, _currn->_desc2->_AT_const101);
/*SPC(468)*/
_AVAttribute_declaration_2_IsImplicitValueTypeInit=0;
/*SPC(1253)*/
_AVAttribute_declaration_2_acc_out=PTGIdent("initonly ");
/*SPC(479)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;
_IG_incl90=_IL_incl90;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS8ATTR_DECL_CONST_EXP_2(_TPPATTR_DECL_CONST_EXP_2 _currn,int* _AS0StackHeight,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS8ATTR_DECL_CONST_EXP_2(_currn ,_AS0StackHeight,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPATTR_DECL_CONST_EXP_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
int* _AS0StackHeight;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
int* _IL_incl90;
int* _IL_incl78;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl90=_IG_incl90;_IG_incl90= &(_currn->_ATIsShared);
_IL_incl78=_IG_incl78;_IG_incl78= &(_currn->_ATIsTypeCase);

if (_currn->_ATIsShared) {

if (InIS(unsharedK, GetSemKindSet(SumDefTableKeyList((* _IG_incl75), IsNotShared, NewKey()), NULLIS))) {
message(ERROR, "initialization of shared attribute refers to non shared attribute", 0, (&( _currn->_AT_pos)));

} else {
}
;

} else {
}
;
/*SPC(6932)*/
_currn->_desc1->_ATIsTypeCase=_currn->_ATIsTypeCase;
/*SPC(7005)*/
(*(_CALL_VS_((NODEPTR )) (VS8MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVAttribute_declaration_2__const73=_AVAttribute_specification_2__const73;
/*SPC(468)*/
_AVAttribute_declaration_2__const79=_AVAttribute_specification_2__const79;
/*SPC(468)*/
_AVAttribute_declaration_2__const80=_AVAttribute_specification_2__const80;
/*SPC(468)*/
(* _AS0_const82)=PTGCommaSeq(_AVAttribute_specification_2__const82, _currn->_desc2->_AT_const82);
/*SPC(468)*/
(* _AS0_const83)=MAX(_AVAttribute_specification_2__const83, MAX(_currn->_desc2->_AT_const83, IDENTICAL(_currn->_desc2->_ATStackHeight)));
/*SPC(468)*/
_AVAttribute_declaration_2__const97=_AVAttribute_specification_2__const97;
/*SPC(468)*/
_AVAttribute_declaration_2__const98=_AVAttribute_specification_2__const98;
/*SPC(468)*/
_AVAttribute_declaration_2__const100=_AVAttribute_specification_2__const100;
/*SPC(468)*/
_AVAttribute_declaration_2_Called=NoKey;
/*SPC(6358)*/
(* _AS0StackHeight)=2;
/*SPC(1921)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;
_IG_incl90=_IL_incl90;
_IG_incl78=_IL_incl78;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_DECL_EXP_2(_TPPATTR_DECL_EXP_2 _currn)
#else
void _VS1ATTR_DECL_EXP_2(_currn )
_TPPATTR_DECL_EXP_2 _currn;

#endif
{
STPtr* _IL_incl107;
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_currn->_desc1->_ATKindSet=_currn->_ATKindSet;
/*SPC(3676)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATType=_currn->_desc1->_ATType;
/*SPC(10886)*/
_AVAttribute_declaration_2__const72=_AVAttribute_specification_2__const72;
/*SPC(456)*/
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_DECL_EXP_2(_TPPATTR_DECL_EXP_2 _currn)
#else
void _VS2ATTR_DECL_EXP_2(_currn )
_TPPATTR_DECL_EXP_2 _currn;

#endif
{
STPtr* _IL_incl107;
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_DECL_EXP_2(_TPPATTR_DECL_EXP_2 _currn)
#else
void _VS3ATTR_DECL_EXP_2(_currn )
_TPPATTR_DECL_EXP_2 _currn;

#endif
{
STPtr* _IL_incl107;
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVExpression_2_is_array_aggregate=0;
/*SPC(11085)*/
_currn->_desc2->_ATTypeEst=_AVAttribute_specification_2__const93;
/*SPC(11101)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ATTR_DECL_EXP_2(_TPPATTR_DECL_EXP_2 _currn)
#else
void _VS4ATTR_DECL_EXP_2(_currn )
_TPPATTR_DECL_EXP_2 _currn;

#endif
{
STPtr* _IL_incl107;
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5ATTR_DECL_EXP_2(_TPPATTR_DECL_EXP_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5ATTR_DECL_EXP_2(_currn ,_AS0_const81)
_TPPATTR_DECL_EXP_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_currn->_ATVal=NULLValue;
/*SPC(7055)*/
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AS2IsExplicitCoercion=0;
/*SPC(10797)*/
_currn->_desc2->_ATIsArg=0;
/*SPC(10994)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsExplicitCoercion)));
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsExplicitCoercion)),(&( _AS2_const81)));
(* _AS0_const81)=AppDefTableKeyList(_AVAttribute_specification_2__const81, _AS2_const81);
/*SPC(456)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6ATTR_DECL_EXP_2(_TPPATTR_DECL_EXP_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6ATTR_DECL_EXP_2(_currn ,_AS0_const81)
_TPPATTR_DECL_EXP_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
int* _IL_incl90;
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl90=_IG_incl90;_IG_incl90= &(_currn->_ATIsShared);
_currn->_ATIsShared=InIS(sharedK, _currn->_ATKindSet);
/*SPC(6918)*/
_currn->_desc1->_ATIsConstructor=0;
/*SPC(2452)*/
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AS2StackBefore=0;
/*SPC(1901)*/
_AS2UsedAsQualifier=0;
/*SPC(1779)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,int*,DefTableKeyList*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2out)),(&( _AS2UsedAsQualifier)),(&( _AS2StackBefore)),(&( _AS2IsExplicitCoercion)),(&( _AS2_const81)));
_AVAttribute_declaration_2_CoercionType=IsCoercible(_currn->_desc2->_ATType, _currn->_desc1->_ATType, (&( _currn->_AT_pos)), (* _IG_incl23), 1);
/*SPC(6117)*/
_currn->_ATinit_code=
(((* _IG_incl70)
) ? (PTGNULL
) : (PTGNewLineSeq(_AS2out, GetConvCode(_currn->_desc2->_ATType, _currn->_desc1->_ATType, _AVAttribute_declaration_2_CoercionType, (&( _currn->_AT_pos)), (* _IG_incl23)))))
;
/*SPC(457)*/

if (EQ(_AVAttribute_declaration_2_CoercionType, NOT_COERCIBLE)) {
message(ERROR, CatStrStr(CatStrStr(NameOfType(_currn->_desc2->_ATType), " not automatically coercible to "), NameOfType(_currn->_desc1->_ATType)), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6129)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;
_IG_incl90=_IL_incl90;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7ATTR_DECL_EXP_2(_TPPATTR_DECL_EXP_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS7ATTR_DECL_EXP_2(_currn ,_AS0_const81)
_TPPATTR_DECL_EXP_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
int* _IL_incl90;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl90=_IG_incl90;_IG_incl90= &(_currn->_ATIsShared);
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVAttribute_declaration_2__const96=_AVAttribute_specification_2__const96;
/*SPC(456)*/
_AVAttribute_declaration_2__const101=PTGCommaSeq(_AVAttribute_specification_2__const101, _currn->_desc2->_AT_const101);
/*SPC(456)*/
_AVAttribute_declaration_2_IsImplicitValueTypeInit=0;
/*SPC(1253)*/
_AVAttribute_declaration_2_acc_out=PTGNULL;
/*SPC(453)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;
_IG_incl90=_IL_incl90;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS8ATTR_DECL_EXP_2(_TPPATTR_DECL_EXP_2 _currn,int* _AS0StackHeight,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS8ATTR_DECL_EXP_2(_currn ,_AS0StackHeight,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPATTR_DECL_EXP_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
int* _AS0StackHeight;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
int* _IL_incl90;
int* _IL_incl78;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl90=_IG_incl90;_IG_incl90= &(_currn->_ATIsShared);
_IL_incl78=_IG_incl78;_IG_incl78= &(_currn->_ATIsTypeCase);

if (_currn->_ATIsShared) {

if (InIS(unsharedK, GetSemKindSet(SumDefTableKeyList((* _IG_incl75), IsNotShared, NewKey()), NULLIS))) {
message(ERROR, "initialization of shared attribute refers to non shared attribute", 0, (&( _currn->_AT_pos)));

} else {
}
;

} else {
}
;
/*SPC(6932)*/
_currn->_desc1->_ATIsTypeCase=_currn->_ATIsTypeCase;
/*SPC(7001)*/
(*(_CALL_VS_((NODEPTR )) (VS8MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVAttribute_declaration_2__const73=_AVAttribute_specification_2__const73;
/*SPC(456)*/
_AVAttribute_declaration_2__const79=_AVAttribute_specification_2__const79;
/*SPC(456)*/
_AVAttribute_declaration_2__const80=_AVAttribute_specification_2__const80;
/*SPC(456)*/
(* _AS0_const82)=PTGCommaSeq(_AVAttribute_specification_2__const82, _currn->_desc2->_AT_const82);
/*SPC(456)*/
(* _AS0_const83)=MAX(_AVAttribute_specification_2__const83, MAX(_currn->_desc2->_AT_const83, IDENTICAL(_currn->_desc2->_ATStackHeight)));
/*SPC(456)*/
_AVAttribute_declaration_2__const97=_AVAttribute_specification_2__const97;
/*SPC(456)*/
_AVAttribute_declaration_2__const98=_AVAttribute_specification_2__const98;
/*SPC(456)*/
_AVAttribute_declaration_2__const100=_AVAttribute_specification_2__const100;
/*SPC(456)*/
_AVAttribute_declaration_2_Called=NoKey;
/*SPC(6358)*/
(* _AS0StackHeight)=2;
/*SPC(1921)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;
_IG_incl90=_IL_incl90;
_IG_incl78=_IL_incl78;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_DECL_2(_TPPATTR_DECL_2 _currn)
#else
void _VS1ATTR_DECL_2(_currn )
_TPPATTR_DECL_2 _currn;

#endif
{
STPtr* _IL_incl107;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_currn->_desc1->_ATKindSet=_currn->_ATKindSet;
/*SPC(3672)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATType=_currn->_desc1->_ATType;
/*SPC(10882)*/
_AVAttribute_declaration_2__const72=_AVAttribute_specification_2__const72;
/*SPC(1264)*/
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_DECL_2(_TPPATTR_DECL_2 _currn)
#else
void _VS2ATTR_DECL_2(_currn )
_TPPATTR_DECL_2 _currn;

#endif
{
STPtr* _IL_incl107;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_DECL_2(_TPPATTR_DECL_2 _currn)
#else
void _VS3ATTR_DECL_2(_currn )
_TPPATTR_DECL_2 _currn;

#endif
{
STPtr* _IL_incl107;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ATTR_DECL_2(_TPPATTR_DECL_2 _currn)
#else
void _VS4ATTR_DECL_2(_currn )
_TPPATTR_DECL_2 _currn;

#endif
{
STPtr* _IL_incl107;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5ATTR_DECL_2(_TPPATTR_DECL_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5ATTR_DECL_2(_currn ,_AS0_const81)
_TPPATTR_DECL_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_currn->_ATVal=NULLValue;
/*SPC(7055)*/
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const81)=_AVAttribute_specification_2__const81;
/*SPC(1264)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6ATTR_DECL_2(_TPPATTR_DECL_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6ATTR_DECL_2(_currn ,_AS0_const81)
_TPPATTR_DECL_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
int* _IL_incl90;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl90=_IG_incl90;_IG_incl90= &(_currn->_ATIsShared);
_currn->_ATIsShared=InIS(sharedK, _currn->_ATKindSet);
/*SPC(6918)*/
_currn->_desc1->_ATIsConstructor=IsMonoValueType(_currn->_ATType);
/*SPC(2460)*/
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVAttribute_declaration_2_CoercionType=NOT_COERCIBLE;
/*SPC(6113)*/
_currn->_ATinit_code=
((IsMonoValueType(_currn->_ATType)
) ? (PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(_AVAttribute_specification_2__const94, PTGcilNewObjectArgs(GetCLRType(_currn->_ATType), GenerateCommaSepTypeList(GetBoundKeys(KeyOfType(_currn->_ATType), NULLDefTableKeyList), 0))), PTGcilValueToAddress(GetCLRType(_currn->_ATType))), PTGcilPushObject(GetCLRType(_currn->_ATType)))
) : (PTGNULL))
;
/*SPC(2563)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;
_IG_incl90=_IL_incl90;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7ATTR_DECL_2(_TPPATTR_DECL_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS7ATTR_DECL_2(_currn ,_AS0_const81)
_TPPATTR_DECL_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
int* _IL_incl90;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl90=_IG_incl90;_IG_incl90= &(_currn->_ATIsShared);
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVAttribute_declaration_2__const96=_AVAttribute_specification_2__const96;
/*SPC(1264)*/
_AVAttribute_declaration_2__const101=_AVAttribute_specification_2__const101;
/*SPC(1264)*/
_AVAttribute_declaration_2_IsImplicitValueTypeInit=_currn->_desc1->_ATIsConstructor;
/*SPC(1265)*/
_AVAttribute_declaration_2_acc_out=PTGNULL;
/*SPC(453)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;
_IG_incl90=_IL_incl90;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS8ATTR_DECL_2(_TPPATTR_DECL_2 _currn,int* _AS0StackHeight,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS8ATTR_DECL_2(_currn ,_AS0StackHeight,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPATTR_DECL_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
int* _AS0StackHeight;

#endif
{
CTValuePtr* _IL_incl105;
STPtr* _IL_incl107;
int* _IL_incl90;
int* _IL_incl78;

_VisitVarDecl()
_VisitEntry();
_IL_incl105=_IG_incl105;_IG_incl105= &(_currn->_ATVal);
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl90=_IG_incl90;_IG_incl90= &(_currn->_ATIsShared);
_IL_incl78=_IG_incl78;_IG_incl78= &(_currn->_ATIsTypeCase);

if (_currn->_ATIsShared) {

if (InIS(unsharedK, GetSemKindSet(SumDefTableKeyList((* _IG_incl75), IsNotShared, NewKey()), NULLIS))) {
message(ERROR, "initialization of shared attribute refers to non shared attribute", 0, (&( _currn->_AT_pos)));

} else {
}
;

} else {
}
;
/*SPC(6932)*/
_currn->_desc1->_ATIsTypeCase=0;
/*SPC(6993)*/
(*(_CALL_VS_((NODEPTR )) (VS8MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVAttribute_declaration_2__const73=_AVAttribute_specification_2__const73;
/*SPC(1264)*/
_AVAttribute_declaration_2__const79=_AVAttribute_specification_2__const79;
/*SPC(1264)*/
_AVAttribute_declaration_2__const80=_AVAttribute_specification_2__const80;
/*SPC(1264)*/
(* _AS0_const82)=_AVAttribute_specification_2__const82;
/*SPC(1264)*/
(* _AS0_const83)=_AVAttribute_specification_2__const83;
/*SPC(1264)*/
_AVAttribute_declaration_2__const97=_AVAttribute_specification_2__const97;
/*SPC(1264)*/
_AVAttribute_declaration_2__const98=_AVAttribute_specification_2__const98;
/*SPC(1264)*/
_AVAttribute_declaration_2__const100=_AVAttribute_specification_2__const100;
/*SPC(1264)*/
_AVAttribute_declaration_2_Called=NoKey;
/*SPC(6358)*/
(* _AS0StackHeight)=2;
/*SPC(1921)*/

if (IsMonoValueType(_currn->_ATType)) {
GetMethodCallDestination(KeyOf(BindingInScope(GetSemScope(KeyOfType(_currn->_ATType), NoEnv), MakeName("init"))), NULLMethArgInfoList, (&( _currn->_AT_pos)), procedureK, 0, ADDRESS(_AVAttribute_declaration_2_Called), 1, (* _IG_incl23));

} else {
;
}
;
/*SPC(6394)*/
_IG_incl105=_IL_incl105;
_IG_incl107=_IL_incl107;
_IG_incl90=_IL_incl90;
_IG_incl78=_IL_incl78;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_ACCESS_SH_RO_2(_TPPATTR_ACCESS_SH_RO_2 _currn)
#else
void _VS1ATTR_ACCESS_SH_RO_2(_currn )
_TPPATTR_ACCESS_SH_RO_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATKindSet=AddElIS(readonlyK, AddElIS(sharedK, NULLIS));
/*SPC(3659)*/
_currn->_ATout=PTGIdent("static ");
/*SPC(446)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_ACCESS_RO_2(_TPPATTR_ACCESS_RO_2 _currn)
#else
void _VS1ATTR_ACCESS_RO_2(_currn )
_TPPATTR_ACCESS_RO_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATKindSet=SingleIS(readonlyK);
/*SPC(3655)*/
_currn->_ATout=PTGNULL;
/*SPC(442)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_ACCESS_SH_2(_TPPATTR_ACCESS_SH_2 _currn)
#else
void _VS1ATTR_ACCESS_SH_2(_currn )
_TPPATTR_ACCESS_SH_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATKindSet=SingleIS(sharedK);
/*SPC(3652)*/
_currn->_ATout=PTGIdent("static ");
/*SPC(438)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_STREAM_2(_TPPFEATURE_STREAM_2 _currn)
#else
void _VS1FEATURE_STREAM_2(_currn )
_TPPFEATURE_STREAM_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc1->_ATSemEnv=NewScope((* _IG_incl2));
/*SPC(12953)*/
_currn->_desc1->_ATKindSet=AddElIS(methodK, AddElIS(streamK, _AVFeature_2_KindSet));
/*SPC(3628)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_STREAM_2(_TPPFEATURE_STREAM_2 _currn)
#else
void _VS2FEATURE_STREAM_2(_currn )
_TPPFEATURE_STREAM_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_STREAM_2(_TPPFEATURE_STREAM_2 _currn)
#else
void _VS3FEATURE_STREAM_2(_currn )
_TPPFEATURE_STREAM_2 _currn;

#endif
{
PTGNode* _IL_incl77;

_VisitVarDecl()
_VisitEntry();
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATNamePtg=PTGTuple(PTGIdent("stream "), _AVMethod_decl_2_NamePtg);
/*SPC(4759)*/
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_STREAM_2(_TPPFEATURE_STREAM_2 _currn)
#else
void _VS4FEATURE_STREAM_2(_currn )
_TPPFEATURE_STREAM_2 _currn;

#endif
{
PTGNode* _IL_incl77;

_VisitVarDecl()
_VisitEntry();
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5FEATURE_STREAM_2(_TPPFEATURE_STREAM_2 _currn)
#else
void _VS5FEATURE_STREAM_2(_currn )
_TPPFEATURE_STREAM_2 _currn;

#endif
{
PTGNode* _IL_incl77;

_VisitVarDecl()
_VisitEntry();
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6FEATURE_STREAM_2(_TPPFEATURE_STREAM_2 _currn)
#else
void _VS6FEATURE_STREAM_2(_currn )
_TPPFEATURE_STREAM_2 _currn;

#endif
{
PTGNode* _IL_incl77;

_VisitVarDecl()
_VisitEntry();
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR )) (VS8MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVFeature_2__const112=IDENTICAL(_currn->_desc1->_ATIsInitMethod);
/*SPC(1606)*/
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7FEATURE_STREAM_2(_TPPFEATURE_STREAM_2 _currn)
#else
void _VS7FEATURE_STREAM_2(_currn )
_TPPFEATURE_STREAM_2 _currn;

#endif
{
int* _IL_incl104;
PTGNode* _IL_incl77;

_VisitVarDecl()
_VisitEntry();
_IL_incl104=_IG_incl104;_IG_incl104= &(_currn->_ATValHome);
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
_currn->_ATValHome=0;
/*SPC(363)*/
_currn->_ATacc_out=PTGNULL;
/*SPC(361)*/
_AVFeature_2__const101=PTGNull();
/*SPC(1606)*/
_AVFeature_2_IsImplicitValueTypeInit=0;
/*SPC(1249)*/
_AVFeature_2_attribute_init=PTGNULL;
/*SPC(362)*/
_AVFeature_2_ValHomeNode=PTGNULL;
/*SPC(364)*/
_IG_incl104=_IL_incl104;
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS8FEATURE_STREAM_2(_TPPFEATURE_STREAM_2 _currn)
#else
void _VS8FEATURE_STREAM_2(_currn )
_TPPFEATURE_STREAM_2 _currn;

#endif
{
int* _IL_incl104;
PTGNode* _IL_incl77;

_VisitVarDecl()
_VisitEntry();
_IL_incl104=_IG_incl104;_IG_incl104= &(_currn->_ATValHome);
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR )) (VS9MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVFeature_2__const0=IDENTICAL(_AVMethod_decl_2_stream_out);
/*SPC(1606)*/
_AVFeature_2__const100=PTGNull();
/*SPC(1606)*/
_AVFeature_2__const106=IDENTICAL(_AVMethod_decl_2_MainGetArguments);
/*SPC(1606)*/
_AVFeature_2__const107=IDENTICAL(_AVMethod_decl_2_MainReturnsInt);
/*SPC(1606)*/
_AVFeature_2__const111=_AVMethod_decl_2__const111;
/*SPC(1606)*/
_AVFeature_2__const114=IDENTICAL(_AVMethod_decl_2_IsParamlessInitMethod);
/*SPC(1606)*/
_AVFeature_2_out=_AVMethod_decl_2_out;
/*SPC(1607)*/
_AVFeature_2_shared_init=PTGNULL;
/*SPC(365)*/
_IG_incl104=_IL_incl104;
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_METH_2(_TPPFEATURE_METH_2 _currn)
#else
void _VS1FEATURE_METH_2(_currn )
_TPPFEATURE_METH_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc1->_ATSemEnv=NewScope((* _IG_incl2));
/*SPC(12953)*/
_currn->_desc1->_ATKindSet=UniteIS(UniteIS(AddElIS(methodK, AddElIS(procedureK, _AVFeature_2_KindSet)), 
((EQ(_AVMethod_decl_2__const95, MakeName("init"))
) ? (SingleIS(initK)
) : (NULLIS))
), 
((EQ(_AVMethod_decl_2__const95, MakeName("finalize"))
) ? (SingleIS(finalizeK)
) : (NULLIS))
);
/*SPC(3621)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_METH_2(_TPPFEATURE_METH_2 _currn)
#else
void _VS2FEATURE_METH_2(_currn )
_TPPFEATURE_METH_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_METH_2(_TPPFEATURE_METH_2 _currn)
#else
void _VS3FEATURE_METH_2(_currn )
_TPPFEATURE_METH_2 _currn;

#endif
{
PTGNode* _IL_incl77;

_VisitVarDecl()
_VisitEntry();
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATNamePtg=PTGTuple(PTGIdent("procedure "), _AVMethod_decl_2_NamePtg);
/*SPC(4755)*/
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_METH_2(_TPPFEATURE_METH_2 _currn)
#else
void _VS4FEATURE_METH_2(_currn )
_TPPFEATURE_METH_2 _currn;

#endif
{
PTGNode* _IL_incl77;

_VisitVarDecl()
_VisitEntry();
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5FEATURE_METH_2(_TPPFEATURE_METH_2 _currn)
#else
void _VS5FEATURE_METH_2(_currn )
_TPPFEATURE_METH_2 _currn;

#endif
{
PTGNode* _IL_incl77;

_VisitVarDecl()
_VisitEntry();
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6FEATURE_METH_2(_TPPFEATURE_METH_2 _currn)
#else
void _VS6FEATURE_METH_2(_currn )
_TPPFEATURE_METH_2 _currn;

#endif
{
PTGNode* _IL_incl77;

_VisitVarDecl()
_VisitEntry();
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR )) (VS8MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVFeature_2__const112=IDENTICAL(_currn->_desc1->_ATIsInitMethod);
/*SPC(1602)*/
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7FEATURE_METH_2(_TPPFEATURE_METH_2 _currn)
#else
void _VS7FEATURE_METH_2(_currn )
_TPPFEATURE_METH_2 _currn;

#endif
{
int* _IL_incl104;
PTGNode* _IL_incl77;

_VisitVarDecl()
_VisitEntry();
_IL_incl104=_IG_incl104;_IG_incl104= &(_currn->_ATValHome);
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
_currn->_ATValHome=0;
/*SPC(363)*/
_currn->_ATacc_out=PTGNULL;
/*SPC(361)*/
_AVFeature_2__const101=PTGNull();
/*SPC(1602)*/
_AVFeature_2_IsImplicitValueTypeInit=0;
/*SPC(1249)*/
_AVFeature_2_attribute_init=PTGNULL;
/*SPC(362)*/
_AVFeature_2_ValHomeNode=PTGNULL;
/*SPC(364)*/
_IG_incl104=_IL_incl104;
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS8FEATURE_METH_2(_TPPFEATURE_METH_2 _currn)
#else
void _VS8FEATURE_METH_2(_currn )
_TPPFEATURE_METH_2 _currn;

#endif
{
int* _IL_incl104;
PTGNode* _IL_incl77;

_VisitVarDecl()
_VisitEntry();
_IL_incl104=_IG_incl104;_IG_incl104= &(_currn->_ATValHome);
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR )) (VS9MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVFeature_2__const0=IDENTICAL(_AVMethod_decl_2_stream_out);
/*SPC(1602)*/
_AVFeature_2__const100=PTGNull();
/*SPC(1602)*/
_AVFeature_2__const106=IDENTICAL(_AVMethod_decl_2_MainGetArguments);
/*SPC(1602)*/
_AVFeature_2__const107=IDENTICAL(_AVMethod_decl_2_MainReturnsInt);
/*SPC(1602)*/
_AVFeature_2__const111=_AVMethod_decl_2__const111;
/*SPC(1602)*/
_AVFeature_2__const114=IDENTICAL(_AVMethod_decl_2_IsParamlessInitMethod);
/*SPC(1602)*/
_AVFeature_2_out=_AVMethod_decl_2_out;
/*SPC(1603)*/
_AVFeature_2_shared_init=PTGNULL;
/*SPC(365)*/
_IG_incl104=_IL_incl104;
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_ATT_2(_TPPFEATURE_ATT_2 _currn)
#else
void _VS1FEATURE_ATT_2(_currn )
_TPPFEATURE_ATT_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
int _AS1StackHeight;

_VisitVarDecl()
_VisitEntry();
_currn->_desc1->_ATKindSet=AddElIS(attributeK, _AVFeature_2_KindSet);
/*SPC(3668)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_ATT_2(_TPPFEATURE_ATT_2 _currn)
#else
void _VS2FEATURE_ATT_2(_currn )
_TPPFEATURE_ATT_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
int _AS1StackHeight;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_ATT_2(_TPPFEATURE_ATT_2 _currn)
#else
void _VS3FEATURE_ATT_2(_currn )
_TPPFEATURE_ATT_2 _currn;

#endif
{
PTGNode* _IL_incl77;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
int _AS1StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATNamePtg=PTGNULL;
/*SPC(4751)*/
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_ATT_2(_TPPFEATURE_ATT_2 _currn)
#else
void _VS4FEATURE_ATT_2(_currn )
_TPPFEATURE_ATT_2 _currn;

#endif
{
PTGNode* _IL_incl77;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
int _AS1StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5FEATURE_ATT_2(_TPPFEATURE_ATT_2 _currn)
#else
void _VS5FEATURE_ATT_2(_currn )
_TPPFEATURE_ATT_2 _currn;

#endif
{
PTGNode* _IL_incl77;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
int _AS1StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6FEATURE_ATT_2(_TPPFEATURE_ATT_2 _currn)
#else
void _VS6FEATURE_ATT_2(_currn )
_TPPFEATURE_ATT_2 _currn;

#endif
{
PTGNode* _IL_incl77;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
int _AS1StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
_AVFeature_2__const112=ZERO();
/*SPC(412)*/
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7FEATURE_ATT_2(_TPPFEATURE_ATT_2 _currn)
#else
void _VS7FEATURE_ATT_2(_currn )
_TPPFEATURE_ATT_2 _currn;

#endif
{
int* _IL_incl104;
PTGNode* _IL_incl77;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
int _AS1StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl104=_IG_incl104;_IG_incl104= &(_currn->_ATValHome);
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_currn->_ATValHome=
((EQ(_currn->_desc1->_ATinit_code, PTGNULL)
) ? (0
) : (NewUniqueLocal()))
;
/*SPC(415)*/
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AVFeature_2__const101=_AVAttribute_declaration_2__const101;
/*SPC(412)*/
_AVFeature_2_IsImplicitValueTypeInit=_AVAttribute_declaration_2_IsImplicitValueTypeInit;
/*SPC(1261)*/
_AVFeature_2_attribute_init=PTGNewLineSeq(_currn->_desc1->_ATinit_code, 
((EQ(_currn->_desc1->_ATinit_code, PTGNULL)
) ? (PTGNULL
) : (PTGNewLineSeq(PTGcilStoreLocal(PTGIdent(StringTable(_currn->_ATValHome))), _AVAttribute_declaration_2__const96)))
);
/*SPC(427)*/
_AVFeature_2_ValHomeNode=
((EQ(_currn->_desc1->_ATinit_code, PTGNULL)
) ? (PTGNULL
) : (PTGSpaceSeq(GetCLRType(_currn->_desc1->_ATType), PTGIdent(StringTable(_currn->_ATValHome)))))
;
/*SPC(418)*/
_currn->_ATacc_out=_AVAttribute_declaration_2_acc_out;
/*SPC(413)*/
_IG_incl104=_IL_incl104;
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS8FEATURE_ATT_2(_TPPFEATURE_ATT_2 _currn)
#else
void _VS8FEATURE_ATT_2(_currn )
_TPPFEATURE_ATT_2 _currn;

#endif
{
int* _IL_incl104;
PTGNode* _IL_incl77;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
int _AS1StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl104=_IG_incl104;_IG_incl104= &(_currn->_ATValHome);
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
_currn->_desc1->_ATIsTypeCase=0;
/*SPC(6989)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,PTGNode*,DefTableKeyList*)) (VS8MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1StackHeight)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_AVFeature_2__const0=PTGNull();
/*SPC(412)*/
_AVFeature_2__const100=_AVAttribute_declaration_2__const100;
/*SPC(412)*/
_AVFeature_2__const106=ZERO();
/*SPC(412)*/
_AVFeature_2__const107=ZERO();
/*SPC(412)*/
_AVFeature_2__const111=ZERO();
/*SPC(412)*/
_AVFeature_2__const114=ZERO();
/*SPC(412)*/
_AVFeature_2_out=
(((* _IG_incl70)
) ? (PTGNULL
) : (_AVAttribute_declaration_2__const97))
;
/*SPC(369)*/
_AVFeature_2_shared_init=PTGNULL;
/*SPC(365)*/
_IG_incl104=_IL_incl104;
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_ATT_ACC_2(_TPPFEATURE_ATT_ACC_2 _currn)
#else
void _VS1FEATURE_ATT_ACC_2(_currn )
_TPPFEATURE_ATT_ACC_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
int _AS2StackHeight;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc2->_ATKindSet=UniteIS(_AVFeature_2_KindSet, AddElIS(attributeK, _currn->_desc1->_ATKindSet));
/*SPC(3663)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_ATT_ACC_2(_TPPFEATURE_ATT_ACC_2 _currn)
#else
void _VS2FEATURE_ATT_ACC_2(_currn )
_TPPFEATURE_ATT_ACC_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
int _AS2StackHeight;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_ATT_ACC_2(_TPPFEATURE_ATT_ACC_2 _currn)
#else
void _VS3FEATURE_ATT_ACC_2(_currn )
_TPPFEATURE_ATT_ACC_2 _currn;

#endif
{
PTGNode* _IL_incl77;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
int _AS2StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATNamePtg=PTGNULL;
/*SPC(4751)*/
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_ATT_ACC_2(_TPPFEATURE_ATT_ACC_2 _currn)
#else
void _VS4FEATURE_ATT_ACC_2(_currn )
_TPPFEATURE_ATT_ACC_2 _currn;

#endif
{
PTGNode* _IL_incl77;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
int _AS2StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5FEATURE_ATT_ACC_2(_TPPFEATURE_ATT_ACC_2 _currn)
#else
void _VS5FEATURE_ATT_ACC_2(_currn )
_TPPFEATURE_ATT_ACC_2 _currn;

#endif
{
PTGNode* _IL_incl77;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
int _AS2StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6FEATURE_ATT_ACC_2(_TPPFEATURE_ATT_ACC_2 _currn)
#else
void _VS6FEATURE_ATT_ACC_2(_currn )
_TPPFEATURE_ATT_ACC_2 _currn;

#endif
{
PTGNode* _IL_incl77;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
int _AS2StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
_AVFeature_2__const112=ZERO();
/*SPC(376)*/
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7FEATURE_ATT_ACC_2(_TPPFEATURE_ATT_ACC_2 _currn)
#else
void _VS7FEATURE_ATT_ACC_2(_currn )
_TPPFEATURE_ATT_ACC_2 _currn;

#endif
{
int* _IL_incl104;
PTGNode* _IL_incl77;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
int _AS2StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl104=_IG_incl104;_IG_incl104= &(_currn->_ATValHome);
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_currn->_ATValHome=
((OR(EQ(_currn->_desc2->_ATinit_code, PTGNULL), InIS(sharedK, _currn->_desc1->_ATKindSet))
) ? (0
) : (NewUniqueLocal()))
;
/*SPC(379)*/
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS7MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVFeature_2__const101=_AVAttribute_declaration_2__const101;
/*SPC(376)*/
_AVFeature_2_IsImplicitValueTypeInit=_AVAttribute_declaration_2_IsImplicitValueTypeInit;
/*SPC(1257)*/
_AVFeature_2_attribute_init=
((_currn->_ATValHome
) ? (PTGNewLineSeq(PTGNewLineSeq(_currn->_desc2->_ATinit_code, PTGcilStoreLocal(PTGIdent(StringTable(_currn->_ATValHome)))), _AVAttribute_declaration_2__const96)
) : (PTGNULL))
;
/*SPC(392)*/
_AVFeature_2_ValHomeNode=
((_currn->_ATValHome
) ? (PTGSpaceSeq(GetCLRType(_currn->_desc2->_ATType), PTGIdent(StringTable(_currn->_ATValHome)))
) : (PTGNULL))
;
/*SPC(383)*/
_currn->_ATacc_out=PTGTuple(_currn->_desc1->_ATout, _AVAttribute_declaration_2_acc_out);
/*SPC(377)*/
_IG_incl104=_IL_incl104;
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS8FEATURE_ATT_ACC_2(_TPPFEATURE_ATT_ACC_2 _currn)
#else
void _VS8FEATURE_ATT_ACC_2(_currn )
_TPPFEATURE_ATT_ACC_2 _currn;

#endif
{
int* _IL_incl104;
PTGNode* _IL_incl77;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
int _AS2StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl104=_IG_incl104;_IG_incl104= &(_currn->_ATValHome);
_IL_incl77=_IG_incl77;_IG_incl77= &(_currn->_ATNamePtg);
_currn->_desc2->_ATIsTypeCase=0;
/*SPC(6989)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,PTGNode*,DefTableKeyList*)) (VS8MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2StackHeight)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)));
_AVFeature_2__const0=PTGNull();
/*SPC(376)*/
_AVFeature_2__const100=_AVAttribute_declaration_2__const100;
/*SPC(376)*/
_AVFeature_2__const106=ZERO();
/*SPC(376)*/
_AVFeature_2__const107=ZERO();
/*SPC(376)*/
_AVFeature_2__const111=ZERO();
/*SPC(376)*/
_AVFeature_2__const114=ZERO();
/*SPC(376)*/
_AVFeature_2_out=
(((* _IG_incl70)
) ? (PTGNULL
) : (_AVAttribute_declaration_2__const97))
;
/*SPC(369)*/
_AVFeature_2_shared_init=
((AND(InIS(sharedK, _currn->_desc1->_ATKindSet), NOT(EQ(_currn->_desc2->_ATinit_code, PTGNULL)))
) ? (PTGNewLineSeq(PTGNewLineSeq(_currn->_desc2->_ATinit_code, _AVAttribute_declaration_2__const98), PTGcilPop())
) : (PTGNULL))
;
/*SPC(401)*/
_IG_incl104=_IL_incl104;
_IG_incl77=_IL_incl77;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_DECL_PRIV_2(_TPPFEATURE_DECL_PRIV_2 _currn)
#else
void _VS1FEATURE_DECL_PRIV_2(_currn )
_TPPFEATURE_DECL_PRIV_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVFeature_2_KindSet=AddElIS(featureK, SingleIS(privateK));
/*SPC(3616)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_DECL_PRIV_2(_TPPFEATURE_DECL_PRIV_2 _currn)
#else
void _VS2FEATURE_DECL_PRIV_2(_currn )
_TPPFEATURE_DECL_PRIV_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_DECL_PRIV_2(_TPPFEATURE_DECL_PRIV_2 _currn)
#else
void _VS3FEATURE_DECL_PRIV_2(_currn )
_TPPFEATURE_DECL_PRIV_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_DECL_PRIV_2(_TPPFEATURE_DECL_PRIV_2 _currn)
#else
void _VS4FEATURE_DECL_PRIV_2(_currn )
_TPPFEATURE_DECL_PRIV_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5FEATURE_DECL_PRIV_2(_TPPFEATURE_DECL_PRIV_2 _currn,int* _AS0_const112)
#else
void _VS5FEATURE_DECL_PRIV_2(_currn ,_AS0_const112)
_TPPFEATURE_DECL_PRIV_2 _currn;
int* _AS0_const112;

#endif
{
DefTableKeyList* _IL_incl75;
DefTableKeyList* _IL_incl76;

_VisitVarDecl()
_VisitEntry();
_IL_incl75=_IG_incl75;_IG_incl75= &(_currn->_ATAttributeAccessLocal);
_IL_incl76=_IG_incl76;_IG_incl76= &(_currn->_ATMethodCallsLocal);
_AVBuiltin_option_2MethCallsLoc_post=NULLDefTableKeyList;
/*SPC(6815)*/
_AVBuiltin_option_2AttrAccLoc_post=NULLDefTableKeyList;
/*SPC(6764)*/
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATMethodCallsLocal=_AVBuiltin_option_2MethCallsLoc_post;
/*SPC(6816)*/
_currn->_ATAttributeAccessLocal=_AVBuiltin_option_2AttrAccLoc_post;
/*SPC(6765)*/
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const112)=_AVFeature_2__const112;
/*SPC(1296)*/
_IG_incl75=_IL_incl75;
_IG_incl76=_IL_incl76;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6FEATURE_DECL_PRIV_2(_TPPFEATURE_DECL_PRIV_2 _currn,int* _AS0_const112,PTGNode* _AS0_const101)
#else
void _VS6FEATURE_DECL_PRIV_2(_currn ,_AS0_const112,_AS0_const101)
_TPPFEATURE_DECL_PRIV_2 _currn;
PTGNode* _AS0_const101;
int* _AS0_const112;

#endif
{
DefTableKeyList* _IL_incl75;
DefTableKeyList* _IL_incl76;

_VisitVarDecl()
_VisitEntry();
_IL_incl75=_IG_incl75;_IG_incl75= &(_currn->_ATAttributeAccessLocal);
_IL_incl76=_IG_incl76;_IG_incl76= &(_currn->_ATMethodCallsLocal);
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const101)=PTGCommaSeq(_AVFeature_2__const101, IDENTICAL(_AVFeature_2_ValHomeNode));
/*SPC(1296)*/
_AVFeature_declaration_2_IsImplicitValueTypeInit=_AVFeature_2_IsImplicitValueTypeInit;
/*SPC(1269)*/
_AVFeature_declaration_2_attribute_init=_AVFeature_2_attribute_init;
/*SPC(1305)*/
_AVFeature_declaration_2attr_preinit_initialization_post=
((_AVFeature_declaration_2_IsImplicitValueTypeInit
) ? (PTGNewLineSeq(_AVFeature_declaration_2attr_preinit_initialization_post, _AVFeature_declaration_2_attribute_init)
) : (_AVFeature_declaration_2attr_preinit_initialization_post))
;
/*SPC(1281)*/
_AVFeature_declaration_2attr_postinit_initialization_post=
((_AVFeature_declaration_2_IsImplicitValueTypeInit
) ? (_AVFeature_declaration_2attr_postinit_initialization_post
) : (PTGNewLineSeq(_AVFeature_declaration_2attr_postinit_initialization_post, _AVFeature_declaration_2_attribute_init)))
;
/*SPC(1277)*/
_IG_incl75=_IL_incl75;
_IG_incl76=_IL_incl76;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7FEATURE_DECL_PRIV_2(_TPPFEATURE_DECL_PRIV_2 _currn,int* _AS0_const114,int* _AS0_const112,int* _AS0_const111,int* _AS0_const107,int* _AS0_const106,PTGNode* _AS0_const101,PTGNode* _AS0_const0)
#else
void _VS7FEATURE_DECL_PRIV_2(_currn ,_AS0_const114,_AS0_const112,_AS0_const111,_AS0_const107,_AS0_const106,_AS0_const101,_AS0_const0)
_TPPFEATURE_DECL_PRIV_2 _currn;
PTGNode* _AS0_const0;
PTGNode* _AS0_const101;
int* _AS0_const106;
int* _AS0_const107;
int* _AS0_const111;
int* _AS0_const112;
int* _AS0_const114;

#endif
{
PTGNode* _IL_incl71;
DefTableKeyList* _IL_incl75;
DefTableKeyList* _IL_incl76;

_VisitVarDecl()
_VisitEntry();
_IL_incl71=_IG_incl71;_IG_incl71= &(_currn->_ATacc_out);
_IL_incl75=_IG_incl75;_IG_incl75= &(_currn->_ATAttributeAccessLocal);
_IL_incl76=_IG_incl76;_IG_incl76= &(_currn->_ATMethodCallsLocal);
_currn->_ATacc_out=
(((* _IG_incl70)
) ? (PTGNULL
) : (PTGTuple(PTGIdent("private "), _currn->_desc1->_ATacc_out)))
;
/*SPC(1297)*/
(*(_CALL_VS_((NODEPTR )) (VS8MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const0)=_AVFeature_2__const0;
/*SPC(1296)*/
(* _AS0_const106)=_AVFeature_2__const106;
/*SPC(1296)*/
(* _AS0_const107)=_AVFeature_2__const107;
/*SPC(1296)*/
(* _AS0_const111)=_AVFeature_2__const111;
/*SPC(1296)*/
(* _AS0_const114)=_AVFeature_2__const114;
/*SPC(1296)*/
_AVFeature_declaration_2_out=
(((* _IG_incl70)
) ? (PTGNULL
) : (_AVFeature_2_out))
;
/*SPC(1301)*/
_AVFeature_declaration_2_shared_init=_AVFeature_2_shared_init;
/*SPC(1306)*/
_AVFeature_declaration_2shared_init_code_post=PTGNewLineSeq(_AVFeature_declaration_2shared_init_code_post, _AVFeature_declaration_2_shared_init);
/*SPC(1285)*/
_AVFeature_declaration_2feature_decls_out_post=PTGNewLineSeq(_AVFeature_declaration_2feature_decls_out_post, PTGNewLineSeq(_AVFeature_declaration_2_out, _AVFeature_2__const100));
/*SPC(1271)*/
_IG_incl71=_IL_incl71;
_IG_incl75=_IL_incl75;
_IG_incl76=_IL_incl76;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_DECL_2(_TPPFEATURE_DECL_2 _currn)
#else
void _VS1FEATURE_DECL_2(_currn )
_TPPFEATURE_DECL_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVFeature_2_KindSet=SingleIS(featureK);
/*SPC(3612)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_DECL_2(_TPPFEATURE_DECL_2 _currn)
#else
void _VS2FEATURE_DECL_2(_currn )
_TPPFEATURE_DECL_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_DECL_2(_TPPFEATURE_DECL_2 _currn)
#else
void _VS3FEATURE_DECL_2(_currn )
_TPPFEATURE_DECL_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_DECL_2(_TPPFEATURE_DECL_2 _currn)
#else
void _VS4FEATURE_DECL_2(_currn )
_TPPFEATURE_DECL_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5FEATURE_DECL_2(_TPPFEATURE_DECL_2 _currn,int* _AS0_const112)
#else
void _VS5FEATURE_DECL_2(_currn ,_AS0_const112)
_TPPFEATURE_DECL_2 _currn;
int* _AS0_const112;

#endif
{
DefTableKeyList* _IL_incl75;
DefTableKeyList* _IL_incl76;

_VisitVarDecl()
_VisitEntry();
_IL_incl75=_IG_incl75;_IG_incl75= &(_currn->_ATAttributeAccessLocal);
_IL_incl76=_IG_incl76;_IG_incl76= &(_currn->_ATMethodCallsLocal);
_AVBuiltin_option_2MethCallsLoc_post=NULLDefTableKeyList;
/*SPC(6815)*/
_AVBuiltin_option_2AttrAccLoc_post=NULLDefTableKeyList;
/*SPC(6764)*/
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATMethodCallsLocal=_AVBuiltin_option_2MethCallsLoc_post;
/*SPC(6816)*/
_currn->_ATAttributeAccessLocal=_AVBuiltin_option_2AttrAccLoc_post;
/*SPC(6765)*/
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const112)=_AVFeature_2__const112;
/*SPC(1289)*/
_IG_incl75=_IL_incl75;
_IG_incl76=_IL_incl76;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6FEATURE_DECL_2(_TPPFEATURE_DECL_2 _currn,int* _AS0_const112,PTGNode* _AS0_const101)
#else
void _VS6FEATURE_DECL_2(_currn ,_AS0_const112,_AS0_const101)
_TPPFEATURE_DECL_2 _currn;
PTGNode* _AS0_const101;
int* _AS0_const112;

#endif
{
DefTableKeyList* _IL_incl75;
DefTableKeyList* _IL_incl76;

_VisitVarDecl()
_VisitEntry();
_IL_incl75=_IG_incl75;_IG_incl75= &(_currn->_ATAttributeAccessLocal);
_IL_incl76=_IG_incl76;_IG_incl76= &(_currn->_ATMethodCallsLocal);
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const101)=PTGCommaSeq(_AVFeature_2__const101, IDENTICAL(_AVFeature_2_ValHomeNode));
/*SPC(1289)*/
_AVFeature_declaration_2_IsImplicitValueTypeInit=_AVFeature_2_IsImplicitValueTypeInit;
/*SPC(1269)*/
_AVFeature_declaration_2_attribute_init=_AVFeature_2_attribute_init;
/*SPC(1292)*/
_AVFeature_declaration_2attr_preinit_initialization_post=
((_AVFeature_declaration_2_IsImplicitValueTypeInit
) ? (PTGNewLineSeq(_AVFeature_declaration_2attr_preinit_initialization_post, _AVFeature_declaration_2_attribute_init)
) : (_AVFeature_declaration_2attr_preinit_initialization_post))
;
/*SPC(1281)*/
_AVFeature_declaration_2attr_postinit_initialization_post=
((_AVFeature_declaration_2_IsImplicitValueTypeInit
) ? (_AVFeature_declaration_2attr_postinit_initialization_post
) : (PTGNewLineSeq(_AVFeature_declaration_2attr_postinit_initialization_post, _AVFeature_declaration_2_attribute_init)))
;
/*SPC(1277)*/
_IG_incl75=_IL_incl75;
_IG_incl76=_IL_incl76;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7FEATURE_DECL_2(_TPPFEATURE_DECL_2 _currn,int* _AS0_const114,int* _AS0_const112,int* _AS0_const111,int* _AS0_const107,int* _AS0_const106,PTGNode* _AS0_const101,PTGNode* _AS0_const0)
#else
void _VS7FEATURE_DECL_2(_currn ,_AS0_const114,_AS0_const112,_AS0_const111,_AS0_const107,_AS0_const106,_AS0_const101,_AS0_const0)
_TPPFEATURE_DECL_2 _currn;
PTGNode* _AS0_const0;
PTGNode* _AS0_const101;
int* _AS0_const106;
int* _AS0_const107;
int* _AS0_const111;
int* _AS0_const112;
int* _AS0_const114;

#endif
{
PTGNode* _IL_incl71;
DefTableKeyList* _IL_incl75;
DefTableKeyList* _IL_incl76;

_VisitVarDecl()
_VisitEntry();
_IL_incl71=_IG_incl71;_IG_incl71= &(_currn->_ATacc_out);
_IL_incl75=_IG_incl75;_IG_incl75= &(_currn->_ATAttributeAccessLocal);
_IL_incl76=_IG_incl76;_IG_incl76= &(_currn->_ATMethodCallsLocal);
_currn->_ATacc_out=PTGTuple(PTGIdent("public "), _currn->_desc1->_ATacc_out);
/*SPC(1291)*/
(*(_CALL_VS_((NODEPTR )) (VS8MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const0)=_AVFeature_2__const0;
/*SPC(1289)*/
(* _AS0_const106)=_AVFeature_2__const106;
/*SPC(1289)*/
(* _AS0_const107)=_AVFeature_2__const107;
/*SPC(1289)*/
(* _AS0_const111)=_AVFeature_2__const111;
/*SPC(1289)*/
(* _AS0_const114)=_AVFeature_2__const114;
/*SPC(1289)*/
_AVFeature_declaration_2_out=_AVFeature_2_out;
/*SPC(1290)*/
_AVFeature_declaration_2_shared_init=_AVFeature_2_shared_init;
/*SPC(1293)*/
_AVFeature_declaration_2shared_init_code_post=PTGNewLineSeq(_AVFeature_declaration_2shared_init_code_post, _AVFeature_declaration_2_shared_init);
/*SPC(1285)*/
_AVFeature_declaration_2feature_decls_out_post=PTGNewLineSeq(_AVFeature_declaration_2feature_decls_out_post, PTGNewLineSeq(_AVFeature_declaration_2_out, _AVFeature_2__const100));
/*SPC(1271)*/
_IG_incl71=_IL_incl71;
_IG_incl75=_IL_incl75;
_IG_incl76=_IL_incl76;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_DECLS_2(_TPPFEATURE_DECLS_2 _currn)
#else
void _VS1FEATURE_DECLS_2(_currn )
_TPPFEATURE_DECLS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_DECLS_2(_TPPFEATURE_DECLS_2 _currn)
#else
void _VS2FEATURE_DECLS_2(_currn )
_TPPFEATURE_DECLS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_DECLS_2(_TPPFEATURE_DECLS_2 _currn)
#else
void _VS3FEATURE_DECLS_2(_currn )
_TPPFEATURE_DECLS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_DECLS_2(_TPPFEATURE_DECLS_2 _currn)
#else
void _VS4FEATURE_DECLS_2(_currn )
_TPPFEATURE_DECLS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5FEATURE_DECLS_2(_TPPFEATURE_DECLS_2 _currn)
#else
void _VS5FEATURE_DECLS_2(_currn )
_TPPFEATURE_DECLS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVFeature_declarations_2__const112=_AVLST_Feature_declarations_2__const112;
/*SPC(5439)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6FEATURE_DECLS_2(_TPPFEATURE_DECLS_2 _currn)
#else
void _VS6FEATURE_DECLS_2(_currn )
_TPPFEATURE_DECLS_2 _currn;

#endif
{
PTGNode* _IL_incl65;
PTGNode* _IL_incl64;
PTGNode* _IL_incl63;
PTGNode* _IL_incl62;

_VisitVarDecl()
_VisitEntry();
_IL_incl65=_IG_incl65;_IG_incl65= &(_currn->_ATattr_postinit_initcode);
_IL_incl64=_IG_incl64;_IG_incl64= &(_currn->_ATattr_preinit_initcode);
_IL_incl63=_IG_incl63;_IG_incl63= &(_currn->_ATarray_init);
_IL_incl62=_IG_incl62;_IG_incl62= &(_currn->_ATattribute_init_locals);
_AVFeature_declaration_2attr_preinit_initialization_post=PTGNULL;
/*SPC(1239)*/
_AVFeature_declaration_2attr_postinit_initialization_post=PTGNULL;
/*SPC(1238)*/
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATattr_preinit_initcode=_AVFeature_declaration_2attr_preinit_initialization_post;
/*SPC(1213)*/
_currn->_ATattr_postinit_initcode=_AVFeature_declaration_2attr_postinit_initialization_post;
/*SPC(1212)*/
_currn->_ATattribute_init_locals=_AVLST_Feature_declarations_2__const101;
/*SPC(1206)*/
_currn->_ATarray_init=CreateArray(GetType((* _IG_incl66), NoType), GetElementType((* _IG_incl66), NoType), GetBoundKeys((* _IG_incl66), NULLDefTableKeyList), IsBuiltinArray(GetType((* _IG_incl66), NoType)));
/*SPC(1198)*/
_AVFeature_declaration_2shared_init_code_post=PTGNULL;
/*SPC(1240)*/
_AVFeature_declaration_2feature_decls_out_post=PTGNULL;
/*SPC(1215)*/
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVFeature_declarations_2__const114=_AVLST_Feature_declarations_2__const114;
/*SPC(5439)*/
_IG_incl65=_IL_incl65;
_IG_incl64=_IL_incl64;
_IG_incl63=_IL_incl63;
_IG_incl62=_IL_incl62;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7FEATURE_DECLS_2(_TPPFEATURE_DECLS_2 _currn)
#else
void _VS7FEATURE_DECLS_2(_currn )
_TPPFEATURE_DECLS_2 _currn;

#endif
{
PTGNode* _IL_incl65;
PTGNode* _IL_incl64;
PTGNode* _IL_incl63;
PTGNode* _IL_incl62;

_VisitVarDecl()
_VisitEntry();
_IL_incl65=_IG_incl65;_IG_incl65= &(_currn->_ATattr_postinit_initcode);
_IL_incl64=_IG_incl64;_IG_incl64= &(_currn->_ATattr_preinit_initcode);
_IL_incl63=_IG_incl63;_IG_incl63= &(_currn->_ATarray_init);
_IL_incl62=_IG_incl62;_IG_incl62= &(_currn->_ATattribute_init_locals);
_AVFeature_declarations_2__const0=_currn->_desc1->_AT_const0;
/*SPC(5439)*/
_AVFeature_declarations_2__const106=_currn->_desc1->_AT_const106;
/*SPC(5439)*/
_AVFeature_declarations_2__const107=_currn->_desc1->_AT_const107;
/*SPC(5439)*/
_AVFeature_declarations_2__const111=_currn->_desc1->_AT_const111;
/*SPC(5439)*/
_AVFeature_declarations_2_out=PTGNewLineSeq(
(((* _IG_incl70)
) ? (PTGNULL
) : (PTGNewLineSeq(
((NOT((* _IG_incl81))
) ? (PTGcilConstructor(GenerateCommaSepTypeList(GetBoundKeys((* _IG_incl66), NULLDefTableKeyList), 0), PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGcilLocals(_currn->_ATattribute_init_locals), _currn->_ATarray_init), _currn->_ATattr_preinit_initcode), _currn->_ATattr_postinit_initcode), PTGcilReturn()))
) : (PTGNULL))
, PTGcilClassConstructor(_currn->_desc1->_ATshared_init_code_post))))
, _currn->_desc1->_ATfeature_decls_out_post);
/*SPC(1216)*/
_IG_incl65=_IL_incl65;
_IG_incl64=_IL_incl64;
_IG_incl63=_IL_incl63;
_IG_incl62=_IL_incl62;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1INHERITANCE_LIKE_2(_TPPINHERITANCE_LIKE_2 _currn)
#else
void _VS1INHERITANCE_LIKE_2(_currn )
_TPPINHERITANCE_LIKE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1IsPoly;
PTGNode _AS1init_code;

_VisitVarDecl()
_VisitEntry();
_AS1IsPoly=0;
/*SPC(4656)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsPoly)));
_AVInheritance_2__const110=SingleDefTableKeyList(_currn->_desc1->_ATKey);
/*SPC(5438)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2INHERITANCE_LIKE_2(_TPPINHERITANCE_LIKE_2 _currn)
#else
void _VS2INHERITANCE_LIKE_2(_currn )
_TPPINHERITANCE_LIKE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1IsPoly;
PTGNode _AS1init_code;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsPoly)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3INHERITANCE_LIKE_2(_TPPINHERITANCE_LIKE_2 _currn)
#else
void _VS3INHERITANCE_LIKE_2(_currn )
_TPPINHERITANCE_LIKE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1IsPoly;
PTGNode _AS1init_code;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsPoly)),(&( _AS1_const81)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4INHERITANCE_LIKE_2(_TPPINHERITANCE_LIKE_2 _currn)
#else
void _VS4INHERITANCE_LIKE_2(_currn )
_TPPINHERITANCE_LIKE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1IsPoly;
PTGNode _AS1init_code;

_VisitVarDecl()
_VisitEntry();
_currn->_desc1->_ATIsConstructor=0;
/*SPC(2414)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1init_code)),(&( _AS1IsPoly)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1INHERITANCES_LST_2(_TPPINHERITANCES_LST_2 _currn)
#else
void _VS1INHERITANCES_LST_2(_currn )
_TPPINHERITANCES_LST_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_AT_const110=AppDefTableKeyList(_currn->_desc1->_AT_const110, _AVInheritance_2__const110);
/*SPC(5437)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2INHERITANCES_LST_2(_TPPINHERITANCES_LST_2 _currn)
#else
void _VS2INHERITANCES_LST_2(_currn )
_TPPINHERITANCES_LST_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3INHERITANCES_LST_2(_TPPINHERITANCES_LST_2 _currn)
#else
void _VS3INHERITANCES_LST_2(_currn )
_TPPINHERITANCES_LST_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVBuiltin_option_2MethCallsLoc_post=_currn->_desc1->_ATMethCallsLoc_post;
/*SPC(0)*/
_AVBuiltin_option_2AttrAccLoc_post=_currn->_desc1->_ATAttrAccLoc_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATMethCallsLoc_post=_AVBuiltin_option_2MethCallsLoc_post;
/*SPC(0)*/
_currn->_ATAttrAccLoc_post=_AVBuiltin_option_2AttrAccLoc_post;
/*SPC(0)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4INHERITANCES_LST_2(_TPPINHERITANCES_LST_2 _currn)
#else
void _VS4INHERITANCES_LST_2(_currn )
_TPPINHERITANCES_LST_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1INHERITANCES_EMPTY_2(_TPPINHERITANCES_EMPTY_2 _currn)
#else
void _VS1INHERITANCES_EMPTY_2(_currn )
_TPPINHERITANCES_EMPTY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_AT_const110=NullDefTableKeyList();
/*SPC(5436)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3INHERITANCES_EMPTY_2(_TPPINHERITANCES_EMPTY_2 _currn)
#else
void _VS3INHERITANCES_EMPTY_2(_currn )
_TPPINHERITANCES_EMPTY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATMethCallsLoc_post=_AVBuiltin_option_2MethCallsLoc_post;
/*SPC(0)*/
_currn->_ATAttrAccLoc_post=_AVBuiltin_option_2AttrAccLoc_post;
/*SPC(0)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1DIRECT_STREAM_CALL_2(_TPPDIRECT_STREAM_CALL_2 _currn)
#else
void _VS1DIRECT_STREAM_CALL_2(_currn )
_TPPDIRECT_STREAM_CALL_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2DIRECT_STREAM_CALL_2(_TPPDIRECT_STREAM_CALL_2 _currn)
#else
void _VS2DIRECT_STREAM_CALL_2(_currn )
_TPPDIRECT_STREAM_CALL_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_AS1Is_aget=0;
/*SPC(4410)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));
_AVDesignator_2_TypeEst=NoType;
/*SPC(11088)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3DIRECT_STREAM_CALL_2(_TPPDIRECT_STREAM_CALL_2 _currn)
#else
void _VS3DIRECT_STREAM_CALL_2(_currn )
_TPPDIRECT_STREAM_CALL_2 _currn;

#endif
{
DefTableKey* _IL_incl100;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATCalled=NoKey;
/*SPC(10780)*/
_currn->_ATType=GetMethodCallDestination(_currn->_desc1->_ATKey, _currn->_desc2->_ATArgList, (&( _currn->_AT_pos)), streamK, 0, ADDRESS(_currn->_ATCalled), 0, (* _IG_incl23));
/*SPC(10782)*/
_IG_incl100=_IL_incl100;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4DIRECT_STREAM_CALL_2(_TPPDIRECT_STREAM_CALL_2 _currn)
#else
void _VS4DIRECT_STREAM_CALL_2(_currn )
_TPPDIRECT_STREAM_CALL_2 _currn;

#endif
{
DefTableKey* _IL_incl100;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVDirect_stream_call_2__const81=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(2202)*/
_AVBuiltin_option_2MethCallsLoc_post=
((AND(NOT(_currn->_desc1->_ATIsQualified), NOT(EQ(_currn->_ATCalled, NoKey)))
) ? (
((InIS(featureK, GetSemKindSet(_currn->_ATCalled, NULLIS))
) ? (AddToSetDefTableKeyList(_currn->_ATCalled, _AVBuiltin_option_2MethCallsLoc_post, CmpDefTableKey)
) : (_AVBuiltin_option_2MethCallsLoc_post))

) : (_AVBuiltin_option_2MethCallsLoc_post))
;
/*SPC(6837)*/
_currn->_ATStreamValHome=
((InIS(methodK, GetSemKindSet(_currn->_ATCalled, NULLIS))
) ? (NewUniqueLocal()
) : (0))
;
/*SPC(2205)*/
_AVDirect_stream_call_2_CreatedKey=
((_currn->_ATStreamValHome
) ? (KResetType(KResetUniqueName(NewKey(), _currn->_ATStreamValHome), GetType(_currn->_ATCalled, NoType))
) : (NoKey))
;
/*SPC(2222)*/
_AVDirect_stream_call_2_Key=
((_AVDirect_stream_call_2_CreatedKey
) ? (
(ResetSemKindSet(_AVDirect_stream_call_2_CreatedKey, SingleIS(implicitstreamK)), _AVDirect_stream_call_2_CreatedKey)

) : (NoKey))
;
/*SPC(2228)*/
_IG_incl100=_IL_incl100;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5DIRECT_STREAM_CALL_2(_TPPDIRECT_STREAM_CALL_2 _currn)
#else
void _VS5DIRECT_STREAM_CALL_2(_currn )
_TPPDIRECT_STREAM_CALL_2 _currn;

#endif
{
DefTableKey* _IL_incl100;
int* _IL_incl41;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
_IL_incl41=_IG_incl41;_IG_incl41= &(_currn->_ATStackBefore);

if (AND(EQ((* _IG_incl31), 0), NOT(EQ(_currn->_ATCalled, NoKey)))) {

if (AND(InIS(methodK, GetSemKindSet(_currn->_ATCalled, NULLIS)), InIS(featureK, GetSemKindSet(_currn->_ATCalled, NULLIS)))) {
message(ERROR, "direct stream calls must be syntactically contained within a loop", 0, (&( _currn->_AT_pos)));

} else {
}
;

} else {
}
;
/*SPC(6615)*/
_AVDesignator_2_IsCall=
((EQ(_currn->_ATCalled, NoKey)
) ? (0
) : (
(
((AND(InIS(privateK, GetSemKindSet(_currn->_ATCalled, NULLIS)), NOT(EQ((* _IG_incl66), GetFeatureOf(_currn->_ATCalled, NoKey))))
) ? ((message(ERROR, "access to private method outside of class", 0, (&( _currn->_AT_pos))), 0)
) : ((0)))
, 1)
))
;
/*SPC(6682)*/
_AS1StackBefore=_currn->_ATStackBefore;
/*SPC(1954)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,PTGNode*,int*,int*,int*,int*,int*,CTValuePtr*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1qualifier_out)),(&( _AS1ValHomeNode)),(&( _AS1StackHeight)),(&( _AS1StackBefore)),(&( _AS1Is_aget)),(&( _AS1IsSharedQualified)),(&( _AS1Op)),(&( _AS1Val)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_AS2StackBefore=ADD(1, _currn->_ATStackBefore);
/*SPC(1929)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,PTGNode*,STPtrList*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2once_out)),(&( _AS2out)),(&( _AS2write_back)),(&( _AS2BoundArgs)),(&( _AS2StackBefore)),(&( _AS2_const101)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)));
_AVDirect_stream_call_2__const82=PTGCommaSeq(PTGCommaSeq(_AS1_const82, IDENTICAL(_AS1ValHomeNode)), _AS2_const82);
/*SPC(2202)*/
_AVDirect_stream_call_2__const83=MAX(MAX(_AS1_const83, IDENTICAL(_AS1StackHeight)), _AS2_const83);
/*SPC(2202)*/
_AVDirect_stream_call_2__const101=PTGCommaSeq(PTGCommaSeq(_AS1_const101, IDENTICAL(_AS1ValHomeNode)), _AS2_const101);
/*SPC(2202)*/
_AVDirect_stream_call_2_LoopEndLabel=(* _IG_incl30);
/*SPC(2203)*/
_AVDirect_stream_call_2_stream_ob=
((_currn->_ATStreamValHome
) ? (PTGTuple(PTGIdent("class "), PTGIdent(StringTable(GetCLRStreamName(_currn->_ATCalled, 0))))
) : (PTGNULL))
;
/*SPC(2209)*/
_AVDirect_stream_call_2_ValHomeNode=
((_currn->_ATStreamValHome
) ? (PTGSpaceSeq(_AVDirect_stream_call_2_stream_ob, PTGIdent(StringTable(_currn->_ATStreamValHome)))
) : (PTGNULL))
;
/*SPC(2216)*/
_AVDirect_stream_call_2_out=
((InIS(methodK, GetSemKindSet(_currn->_ATCalled, NULLIS))
) ? (PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(_AS1qualifier_out, PTGcilGetStreamObject(PTGIdent(StringTable(_currn->_ATStreamValHome)), _AVDirect_stream_call_2_stream_ob, _AS2once_out, GenerateCommaSepTypeList(GetParams(KeyOfType(GetType(_currn->_ATCalled, NoType)), NULLDefTableKeyList), 1), PTGIdent(StringTable(NewUniqueLabel())))), _AS2out), PTGcilMethodCall(
((EQ(_currn->_ATType, NoType)
) ? (PTGIdent("void")
) : (GetCLRType(_currn->_ATType)))
, GetCLRType(GetType(GetFeatureOf(_currn->_ATCalled, NoKey), NoType)), PTGcilIdent(StringTable(GetSym(_currn->_ATCalled, 0))), PTGCommaSeq(PTGTuple(PTGIdent("class "), PTGIdent(STREAM_BASE_NAME)), GenerateCommaSepTypeList(GetParams(KeyOfType(GetType(_currn->_ATCalled, NoType)), NULLDefTableKeyList), 0)))), 
((IsMonoValueType(_currn->_ATType)
) ? (PTGcilValueToAddress(GetCLRType(_currn->_ATType))
) : (PTGNULL))
), _AS2write_back), PTGcilImplStreamCheckEnd(PTGIdent(StringTable(_currn->_ATStreamValHome)), _AVDirect_stream_call_2_stream_ob, PTGIdent(StringTable(NewUniqueLabel())), PTGIdent(StringTable(_AVDirect_stream_call_2_LoopEndLabel)), EmptyStack((* _IG_incl83))))
) : (PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(_AS1out, PTGcilPushObject(GetCLRType(GetType(_currn->_ATCalled, NoType)))), _AS2out), PTGcilMethodCall(
((EQ(_currn->_ATType, NoType)
) ? (PTGIdent("void")
) : (GetCLRType(_currn->_ATType)))
, GetCLRType(GetType(_currn->_ATCalled, NoType)), PTGcilIdent("Call"), GenerateCommaSepTypeList(GetParams(KeyOfType(GetType(_currn->_ATCalled, NoType)), NULLDefTableKeyList), 0))), 
((IsMonoValueType(_currn->_ATType)
) ? (PTGcilValueToAddress(GetCLRType(_currn->_ATType))
) : (PTGNULL))
), _AS2write_back), 
((_AVDirect_stream_call_2_LoopEndLabel
) ? (PTGcilExplStreamCheckEnd(PTGNewLineSeq(_AS1out, PTGcilPushObject(GetCLRType(GetType(_currn->_ATCalled, NoType)))), GetCLRType(GetType(_currn->_ATCalled, NoType)), PTGIdent(StringTable(NewUniqueLabel())), PTGIdent(StringTable(_AVDirect_stream_call_2_LoopEndLabel)), EmptyStack((* _IG_incl83)))
) : (PTGNULL))
)))
;
/*SPC(2234)*/
_IG_incl100=_IL_incl100;
_IG_incl41=_IL_incl41;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1COERCION_2(_TPPCOERCION_2 _currn)
#else
void _VS1COERCION_2(_currn )
_TPPCOERCION_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2COERCION_2(_TPPCOERCION_2 _currn)
#else
void _VS2COERCION_2(_currn )
_TPPCOERCION_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVExpression_2_is_array_aggregate=0;
/*SPC(11085)*/
_currn->_desc1->_ATTypeEst=_currn->_desc2->_ATType;
/*SPC(11097)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATType=_currn->_desc2->_ATType;
/*SPC(10874)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3COERCION_2(_TPPCOERCION_2 _currn)
#else
void _VS3COERCION_2(_currn )
_TPPCOERCION_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_AS1IsExplicitCoercion=1;
/*SPC(10801)*/
_currn->_desc1->_ATIsArg=0;
/*SPC(10994)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)));
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVCoercion_2__const81=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(908)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4COERCION_2(_TPPCOERCION_2 _currn)
#else
void _VS4COERCION_2(_currn )
_TPPCOERCION_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_AS1StackBefore=0;
/*SPC(1901)*/
_AS1UsedAsQualifier=0;
/*SPC(1779)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,int*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1UsedAsQualifier)),(&( _AS1StackBefore)),(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
_AS2IsMethodParameterType=0;
/*SPC(5941)*/
_AVType_specifier_2_IsTypeBound=0;
/*SPC(5788)*/
_AVType_specifier_2_IsConstructor=0;
/*SPC(2456)*/
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsMethodParameterType)),(&( _AS2_const81)));
_AVCoercion_2__const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _currn->_desc2->_AT_const82);
/*SPC(908)*/
_AVCoercion_2__const83=MAX(MAX(_currn->_desc1->_AT_const83, IDENTICAL(_currn->_desc1->_ATStackHeight)), _currn->_desc2->_AT_const83);
/*SPC(908)*/
_AVCoercion_2__const101=PTGCommaSeq(_currn->_desc1->_AT_const101, _currn->_desc2->_AT_const101);
/*SPC(908)*/
_AVCoercion_2_CoercionType=IsCoercible(_currn->_desc1->_ATType, _currn->_desc2->_ATType, (&( _currn->_AT_pos)), (* _IG_incl23), 0);
/*SPC(6278)*/
_AVCoercion_2_out=PTGNewLineSeq(_AS1out, GetConvCode(_currn->_desc1->_ATType, _currn->_desc2->_ATType, _AVCoercion_2_CoercionType, (&( _currn->_AT_pos)), (* _IG_incl23)));
/*SPC(909)*/

if (EQ(_AVCoercion_2_CoercionType, NOT_COERCIBLE)) {
message(ERROR, CatStrStr(CatStrStr(NameOfType(_currn->_desc1->_ATType), " not coercible to "), NameOfType(_currn->_desc2->_ATType)), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6287)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STR_CONSTANT_2(_TPPSTR_CONSTANT_2 _currn,PTGNode* _AS0str_val)
#else
void _VS1STR_CONSTANT_2(_currn ,_AS0str_val)
_TPPSTR_CONSTANT_2 _currn;
PTGNode* _AS0str_val;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0str_val)=PTGIdent(StringTable(_currn->_ATTERM_1));
/*SPC(2627)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STR_CONSTANTS_2(_TPPSTR_CONSTANTS_2 _currn)
#else
void _VS1STR_CONSTANTS_2(_currn )
_TPPSTR_CONSTANTS_2 _currn;

#endif
{
PTGNode _AS1str_val;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,PTGNode*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1str_val)));
_currn->_ATstr_val=_AS1str_val;
/*SPC(2623)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STR_CONSTANTS_LST_2(_TPPSTR_CONSTANTS_LST_2 _currn)
#else
void _VS1STR_CONSTANTS_LST_2(_currn )
_TPPSTR_CONSTANTS_LST_2 _currn;

#endif
{
PTGNode _AS1str_val;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,PTGNode*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1str_val)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATstr_val=PTGTuple(_AS1str_val, _currn->_desc2->_ATstr_val);
/*SPC(2618)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_VOID_2(_TPPVALUE_VOID_2 _currn)
#else
void _VS1VALUE_VOID_2(_currn )
_TPPVALUE_VOID_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATVal=NULLValue;
/*SPC(7049)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2VALUE_VOID_2(_TPPVALUE_VOID_2 _currn)
#else
void _VS2VALUE_VOID_2(_currn )
_TPPVALUE_VOID_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATout=PTGcilPushNull();
/*SPC(2611)*/
_currn->_ATType=GetVoidType();
/*SPC(11236)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_SED_2(_TPPVALUE_SED_2 _currn)
#else
void _VS1VALUE_SED_2(_currn )
_TPPVALUE_SED_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATVal=NewValue(_currn->_ATTERM_1, UNI_BITS_HEX);
/*SPC(7070)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2VALUE_SED_2(_TPPVALUE_SED_2 _currn)
#else
void _VS2VALUE_SED_2(_currn )
_TPPVALUE_SED_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATout=PTGNULL;
/*SPC(2593)*/
_currn->_ATType=(* _IG_incl44);
/*SPC(11232)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_OCT_2(_TPPVALUE_OCT_2 _currn)
#else
void _VS1VALUE_OCT_2(_currn )
_TPPVALUE_OCT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATVal=NewValue(_currn->_ATTERM_1, UNI_BITS_OCT);
/*SPC(7066)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2VALUE_OCT_2(_TPPVALUE_OCT_2 _currn)
#else
void _VS2VALUE_OCT_2(_currn )
_TPPVALUE_OCT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATout=PTGNULL;
/*SPC(2593)*/
_currn->_ATType=(* _IG_incl44);
/*SPC(11228)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_STR_2(_TPPVALUE_STR_2 _currn)
#else
void _VS1VALUE_STR_2(_currn )
_TPPVALUE_STR_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATVal=NULLValue;
/*SPC(7049)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2VALUE_STR_2(_TPPVALUE_STR_2 _currn)
#else
void _VS2VALUE_STR_2(_currn )
_TPPVALUE_STR_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATout=PTGcilStrConstant(_currn->_desc1->_ATstr_val);
/*SPC(2607)*/
_currn->_ATType=GetType(GetPreDefKey(MakeName("STR[*]"), (* _IG_incl23), (&( _currn->_AT_pos))), NoType);
/*SPC(11221)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_CHAR_2(_TPPVALUE_CHAR_2 _currn)
#else
void _VS1VALUE_CHAR_2(_currn )
_TPPVALUE_CHAR_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATVal=NewValue(_currn->_ATTERM_1, UNI_CHAR);
/*SPC(7078)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2VALUE_CHAR_2(_TPPVALUE_CHAR_2 _currn)
#else
void _VS2VALUE_CHAR_2(_currn )
_TPPVALUE_CHAR_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATout=PTGcilCharConstant(_currn->_ATTERM_1);
/*SPC(2603)*/
_currn->_ATType=GetType(GetPreDefKey(MakeName("CHAR"), (* _IG_incl23), (&( _currn->_AT_pos))), NoType);
/*SPC(11214)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_BOOL_2(_TPPVALUE_BOOL_2 _currn)
#else
void _VS1VALUE_BOOL_2(_currn )
_TPPVALUE_BOOL_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATVal=NewValue(_currn->_ATTERM_1, UNI_BOOL);
/*SPC(7074)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2VALUE_BOOL_2(_TPPVALUE_BOOL_2 _currn)
#else
void _VS2VALUE_BOOL_2(_currn )
_TPPVALUE_BOOL_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATout=
((EQ(_currn->_ATTERM_1, MakeName("true"))
) ? (PTGcilBoolConstant("1")
) : (PTGcilBoolConstant("0")))
;
/*SPC(2597)*/
_currn->_ATType=(* _IG_incl84);
/*SPC(11210)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_FLOAT_2(_TPPVALUE_FLOAT_2 _currn)
#else
void _VS1VALUE_FLOAT_2(_currn )
_TPPVALUE_FLOAT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATVal=NewValue(_currn->_ATTERM_1, UNI_REAL);
/*SPC(7062)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2VALUE_FLOAT_2(_TPPVALUE_FLOAT_2 _currn)
#else
void _VS2VALUE_FLOAT_2(_currn )
_TPPVALUE_FLOAT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATout=PTGNULL;
/*SPC(2593)*/
_currn->_ATType=(* _IG_incl44);
/*SPC(11206)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_INT_2(_TPPVALUE_INT_2 _currn)
#else
void _VS1VALUE_INT_2(_currn )
_TPPVALUE_INT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATVal=NewValue(_currn->_ATTERM_1, UNI_INT);
/*SPC(7058)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2VALUE_INT_2(_TPPVALUE_INT_2 _currn)
#else
void _VS2VALUE_INT_2(_currn )
_TPPVALUE_INT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATout=PTGNULL;
/*SPC(2593)*/
_currn->_ATType=(* _IG_incl44);
/*SPC(11202)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BOUND_METHOD_2(_TPPBOUND_METHOD_2 _currn)
#else
void _VS1BOUND_METHOD_2(_currn )
_TPPBOUND_METHOD_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BOUND_METHOD_2(_TPPBOUND_METHOD_2 _currn)
#else
void _VS2BOUND_METHOD_2(_currn )
_TPPBOUND_METHOD_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_AS1Is_aget=0;
/*SPC(4410)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));
_AVDesignator_2_TypeEst=NoType;
/*SPC(11088)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BOUND_METHOD_2(_TPPBOUND_METHOD_2 _currn,STPtr* _AS0TypeEst)
#else
void _VS3BOUND_METHOD_2(_currn ,_AS0TypeEst)
_TPPBOUND_METHOD_2 _currn;
STPtr* _AS0TypeEst;

#endif
{
DefTableKey* _IL_incl100;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATCalled=NoKey;
/*SPC(10653)*/
_currn->_ATType=GetMethodCallDestination(_currn->_desc1->_ATKey, _currn->_desc2->_ATArgList, (&( _currn->_AT_pos)), 
((IsStreamType((* _AS0TypeEst))
) ? (streamK
) : (
((IsProcedureType((* _AS0TypeEst))
) ? (procedureK
) : (methodK))
))
, _currn->_desc1->_ATIsQualifiedPolymorph, ADDRESS(_currn->_ATCalled), 0, (* _IG_incl23));
/*SPC(10655)*/
_IG_incl100=_IL_incl100;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4BOUND_METHOD_2(_TPPBOUND_METHOD_2 _currn,STPtr* _AS0TypeEst)
#else
void _VS4BOUND_METHOD_2(_currn ,_AS0TypeEst)
_TPPBOUND_METHOD_2 _currn;
STPtr* _AS0TypeEst;

#endif
{
DefTableKey* _IL_incl100;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVBound_method_2__const81=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(639)*/
_IG_incl100=_IL_incl100;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5BOUND_METHOD_2(_TPPBOUND_METHOD_2 _currn,STPtr* _AS0TypeEst)
#else
void _VS5BOUND_METHOD_2(_currn ,_AS0TypeEst)
_TPPBOUND_METHOD_2 _currn;
STPtr* _AS0TypeEst;

#endif
{
DefTableKey* _IL_incl100;
int* _IL_incl41;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
_IL_incl41=_IG_incl41;_IG_incl41= &(_currn->_ATStackBefore);
_AVDesignator_2_IsCall=
((EQ(_currn->_ATCalled, NoKey)
) ? (0
) : (
(
((AND(InIS(privateK, GetSemKindSet(_currn->_ATCalled, NULLIS)), NOT(EQ((* _IG_incl66), GetFeatureOf(_currn->_ATCalled, NoKey))))
) ? ((message(ERROR, "access to private method outside of class", 0, (&( _currn->_AT_pos))), 0)
) : ((0)))
, 1)
))
;
/*SPC(6698)*/
_AS1StackBefore=_currn->_ATStackBefore;
/*SPC(1954)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,PTGNode*,int*,int*,int*,int*,int*,CTValuePtr*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1qualifier_out)),(&( _AS1ValHomeNode)),(&( _AS1StackHeight)),(&( _AS1StackBefore)),(&( _AS1Is_aget)),(&( _AS1IsSharedQualified)),(&( _AS1Op)),(&( _AS1Val)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_AS2StackBefore=ADD(1, _currn->_ATStackBefore);
/*SPC(1929)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,PTGNode*,STPtrList*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2once_out)),(&( _AS2out)),(&( _AS2write_back)),(&( _AS2BoundArgs)),(&( _AS2StackBefore)),(&( _AS2_const101)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)));
_AVBound_method_2__const82=PTGCommaSeq(PTGCommaSeq(_AS1_const82, IDENTICAL(_AS1ValHomeNode)), _AS2_const82);
/*SPC(639)*/
_AVBound_method_2__const83=MAX(MAX(_AS1_const83, IDENTICAL(_AS1StackHeight)), _AS2_const83);
/*SPC(639)*/
_AVBound_method_2__const101=PTGCommaSeq(PTGCommaSeq(_AS1_const101, IDENTICAL(_AS1ValHomeNode)), _AS2_const101);
/*SPC(639)*/
_AVBound_method_2_stream_object=GetCLRStreamName(_currn->_ATCalled, 0);
/*SPC(640)*/
_AVBound_method_2_base_out=
((EQ(_currn->_desc1->_ATIsQualifiedPolymorph, 2)
) ? (PTGNULL
) : (
((InIS(methodK, GetSemKindSet(_currn->_ATCalled, NULLIS))
) ? (PTGNewLineSeq(_AS1qualifier_out, 
((IsMonoValueType(GetBoundMethodBaseType(_currn->_ATCalled))
) ? (PTGcilPushObject(GetCLRType(GetBoundMethodBaseType(_currn->_ATCalled)))
) : (PTGNULL))
)
) : (PTGNewLineSeq(_AS1out, PTGcilPushObject(GetCLRType(GetType(_currn->_ATCalled, NoType))))))
))
;
/*SPC(651)*/
_AVBound_method_2_BoundMethod=NewBoundMethod(_currn->_ATType, _currn->_ATCalled, _AS2BoundArgs, _currn->_desc1->_ATIsQualifiedPolymorph);
/*SPC(643)*/
_AVBound_method_2_stream_out=
((_AVBound_method_2_stream_object
) ? (PTGNewLineSeq(_AS2once_out, PTGcilNewObjectArgs(PTGIdent(StringTable(_AVBound_method_2_stream_object)), GenerateCommaSepTypeList(GetParams(_currn->_ATCalled, NULLDefTableKeyList), 1)))
) : (PTGNULL))
;
/*SPC(663)*/
_AVBound_method_2_out=PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(_AS2out, _AVBound_method_2_base_out), _AVBound_method_2_stream_out), PTGcilNewObjectArgs(GetCLRBoundMethodType(_AVBound_method_2_BoundMethod), PTGCommaSeq(PTGCommaSeq(GetCLRBoundedArgs(_AVBound_method_2_BoundMethod), 
((EQ(_currn->_desc1->_ATIsQualifiedPolymorph, 2)
) ? (PTGNULL
) : (GetCLRType(GetBoundMethodBaseType(_currn->_ATCalled))))
), 
((_AVBound_method_2_stream_object
) ? (PTGIdent(StringTable(_AVBound_method_2_stream_object))
) : (PTGNULL))
))), PTGcilBox(GetCLRBoundMethodType(_AVBound_method_2_BoundMethod)));
/*SPC(670)*/
_IG_incl100=_IL_incl100;
_IG_incl41=_IL_incl41;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAMED_EXPRESSION_2(_TPPNAMED_EXPRESSION_2 _currn)
#else
void _VS1NAMED_EXPRESSION_2(_currn )
_TPPNAMED_EXPRESSION_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
int _AS1IsUnnamed;
PTGNode _AS1des_out;

_VisitVarDecl()
_VisitEntry();
_AVName_2_Is_aget=0;
/*SPC(4418)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAMED_EXPRESSION_2(_TPPNAMED_EXPRESSION_2 _currn,int* _AS0Index_pre,int* _AS0UnnamedIndex_pre)
#else
void _VS2NAMED_EXPRESSION_2(_currn ,_AS0Index_pre,_AS0UnnamedIndex_pre)
_TPPNAMED_EXPRESSION_2 _currn;
int* _AS0UnnamedIndex_pre;
int* _AS0Index_pre;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
int _AS1IsUnnamed;
PTGNode _AS1des_out;

_VisitVarDecl()
_VisitEntry();
_AVName_2_AttributeIndex=(* _AS0UnnamedIndex_pre);
/*SPC(5870)*/
_AVName_2_SemScopeKey=KeyOfType((* _IG_incl85));
/*SPC(4431)*/
_AVName_2_SemScope=GetSemScope(_AVName_2_SemScopeKey, NoEnv);
/*SPC(12922)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsUnnamed)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVExpression_2_is_array_aggregate=
((_currn->_desc1->_ATKey
) ? (0
) : (1))
;
/*SPC(11138)*/
_currn->_desc2->_ATTypeEst=
((_currn->_desc1->_ATKey
) ? (GetType(_currn->_desc1->_ATKey, NoType)
) : (GetElementType(KeyOfType((* _IG_incl85)), NoType)))
;
/*SPC(11132)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVNamed_expression_2Index_post=ADD((* _AS0Index_pre), 1);
/*SPC(5855)*/
_AVNamed_expression_2_IsUnnamed=_AS1IsUnnamed;
/*SPC(5832)*/
_AVNamed_expression_2UnnamedIndex_post=
((_AVNamed_expression_2_IsUnnamed
) ? (ADD((* _AS0UnnamedIndex_pre), 1)
) : ((* _AS0Index_pre)))
;
/*SPC(5856)*/

if (AND(_AVNamed_expression_2_IsUnnamed, GT((* _AS0Index_pre), (* _AS0UnnamedIndex_pre)))) {
message(ERROR, "unnamed expression must not follow named expression in aggregate", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5862)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAMED_EXPRESSION_2(_TPPNAMED_EXPRESSION_2 _currn,int* _AS0Index_pre,int* _AS0UnnamedIndex_pre,DefTableKeyList* _AS0_const81)
#else
void _VS3NAMED_EXPRESSION_2(_currn ,_AS0Index_pre,_AS0UnnamedIndex_pre,_AS0_const81)
_TPPNAMED_EXPRESSION_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0UnnamedIndex_pre;
int* _AS0Index_pre;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
int _AS1IsUnnamed;
PTGNode _AS1des_out;

_VisitVarDecl()
_VisitEntry();
_AS2IsExplicitCoercion=0;
/*SPC(10797)*/
_currn->_desc2->_ATIsArg=0;
/*SPC(10994)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsExplicitCoercion)));
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsExplicitCoercion)),(&( _AS2_const81)));
(* _AS0_const81)=_AS2_const81;
/*SPC(219)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4NAMED_EXPRESSION_2(_TPPNAMED_EXPRESSION_2 _currn,PTGNode* _AS0named_exp_out_pre,int* _AS0Index_pre,int* _AS0UnnamedIndex_pre,PTGNode* _AS0_const101,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS4NAMED_EXPRESSION_2(_currn ,_AS0named_exp_out_pre,_AS0Index_pre,_AS0UnnamedIndex_pre,_AS0_const101,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPNAMED_EXPRESSION_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const101;
int* _AS0UnnamedIndex_pre;
int* _AS0Index_pre;
PTGNode* _AS0named_exp_out_pre;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
int _AS1IsUnnamed;
PTGNode _AS1des_out;

_VisitVarDecl()
_VisitEntry();
_AVName_2_IsAggregate=1;
/*SPC(948)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1des_out)),(&( _AS1IsUnnamed)));
_AS2StackBefore=1;
/*SPC(1917)*/
_AS2UsedAsQualifier=0;
/*SPC(1779)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,int*,DefTableKeyList*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2out)),(&( _AS2UsedAsQualifier)),(&( _AS2StackBefore)),(&( _AS2IsExplicitCoercion)),(&( _AS2_const81)));
(* _AS0_const82)=_currn->_desc2->_AT_const82;
/*SPC(219)*/
(* _AS0_const83)=MAX(_currn->_desc2->_AT_const83, IDENTICAL(_currn->_desc2->_ATStackHeight));
/*SPC(219)*/
(* _AS0_const101)=_currn->_desc2->_AT_const101;
/*SPC(219)*/
_AVNamed_expression_2_CoercionType=IsCoercible(_currn->_desc2->_ATType, GetType(_currn->_desc1->_ATKey, NoType), (&( _currn->_AT_pos)), (* _IG_incl23), 1);
/*SPC(5883)*/
_AVNamed_expression_2_out=PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(_AS1des_out, _AS2out), GetConvCode(_currn->_desc2->_ATType, GetType(_currn->_desc1->_ATKey, NoType), _AVNamed_expression_2_CoercionType, (&( _currn->_AT_pos)), (* _IG_incl23))), 
((AND(IsMonoValueType(_currn->_desc2->_ATType), IsBuiltinArray(_currn->_desc2->_ATType))
) ? (PTGcilArrayCopy(GetCLRType(_currn->_desc2->_ATType))
) : (PTGNULL))
), PTGcilStoreObject(GetCLRType(GetType(_currn->_desc1->_ATKey, NoType))));
/*SPC(223)*/
_AVNamed_expression_2named_exp_out_post=PTGNewLineSeq((* _AS0named_exp_out_pre), _AVNamed_expression_2_out);
/*SPC(220)*/

if (EQ(_AVNamed_expression_2_CoercionType, NOT_COERCIBLE)) {
message(ERROR, CatStrStr(CatStrStr(CatStrStr("type ", NameOfType(_currn->_desc2->_ATType)), " not automatically coercible to type "), NameOfType(GetType(_currn->_desc1->_ATKey, NoType))), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5893)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAMED_EXPRESSIONS_2(_TPPNAMED_EXPRESSIONS_2 _currn)
#else
void _VS2NAMED_EXPRESSIONS_2(_currn )
_TPPNAMED_EXPRESSIONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_desc1->_ATUnnamedIndex_pre=
((IsArrayType((* _IG_incl85))
) ? (0
) : (1))
;
/*SPC(5849)*/
_currn->_desc1->_ATIndex_pre=1;
/*SPC(5848)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAMED_EXPRESSIONS_2(_TPPNAMED_EXPRESSIONS_2 _currn)
#else
void _VS3NAMED_EXPRESSIONS_2(_currn )
_TPPNAMED_EXPRESSIONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVNamed_expressions_2__const81=_AVLST_Named_expressions_2__const81;
/*SPC(5420)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4NAMED_EXPRESSIONS_2(_TPPNAMED_EXPRESSIONS_2 _currn)
#else
void _VS4NAMED_EXPRESSIONS_2(_currn )
_TPPNAMED_EXPRESSIONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVNamed_expression_2named_exp_out_post=PTGNULL;
/*SPC(215)*/
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVNamed_expressions_2__const82=_AVLST_Named_expressions_2__const82;
/*SPC(5420)*/
_AVNamed_expressions_2__const83=_AVLST_Named_expressions_2__const83;
/*SPC(5420)*/
_AVNamed_expressions_2__const101=_AVLST_Named_expressions_2__const101;
/*SPC(5420)*/
_AVNamed_expressions_2_out=_AVNamed_expression_2named_exp_out_post;
/*SPC(216)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1AGG_ID_DEF_2(_TPPAGG_ID_DEF_2 _currn)
#else
void _VS1AGG_ID_DEF_2(_currn )
_TPPAGG_ID_DEF_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVAgg_id_def_2_Sym=_currn->_ATTERM_1;
/*SPC(4239)*/
_AVAgg_id_def_2_SemKindSet=AddElIS(locVarK, SingleIS(aggregateK));
/*SPC(3734)*/
_AVAgg_id_def_2_Bind=BindIdn((* _IG_incl2), _AVAgg_id_def_2_Sym);
/*SPC(12795)*/
_currn->_ATKey=KeyOf(_AVAgg_id_def_2_Bind);
/*SPC(12797)*/
UnionSemKindSet(_currn->_ATKey, _AVAgg_id_def_2_SemKindSet);
/*SPC(12105)*/
message(WARNING, "aggregate identifiers not implemented yet!", 0, (&( _currn->_AT_pos)));
/*SPC(5897)*/

if (OR(EQ(_AVAgg_id_def_2_Sym, MakeName("self")), EQ(_AVAgg_id_def_2_Sym, MakeName("res")))) {
message(ERROR, "this identifier has special meaning and cannot be redefined", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2AGG_ID_DEF_2(_TPPAGG_ID_DEF_2 _currn)
#else
void _VS2AGG_ID_DEF_2(_currn )
_TPPAGG_ID_DEF_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
ResetType(_currn->_ATKey, (* _IG_incl85));
/*SPC(10952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1AGGREGATE_NAMED_2(_TPPAGGREGATE_NAMED_2 _currn)
#else
void _VS1AGGREGATE_NAMED_2(_currn )
_TPPAGGREGATE_NAMED_2 _currn;

#endif
{
int* _IL_incl87;

_VisitVarDecl()
_VisitEntry();
_IL_incl87=_IG_incl87;_IG_incl87= &(_currn->_ATAggregateDepth);
_currn->_ATAggregateDepth=ADD((* _IL_incl87), 1);
/*SPC(4263)*/
_IG_incl87=_IL_incl87;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2AGGREGATE_NAMED_2(_TPPAGGREGATE_NAMED_2 _currn)
#else
void _VS2AGGREGATE_NAMED_2(_currn )
_TPPAGGREGATE_NAMED_2 _currn;

#endif
{
int* _IL_incl87;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl87=_IG_incl87;_IG_incl87= &(_currn->_ATAggregateDepth);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl87=_IL_incl87;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3AGGREGATE_NAMED_2(_TPPAGGREGATE_NAMED_2 _currn)
#else
void _VS3AGGREGATE_NAMED_2(_currn )
_TPPAGGREGATE_NAMED_2 _currn;

#endif
{
int* _IL_incl94;
int* _IL_incl87;
STPtr* _IL_incl85;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl94=_IG_incl94;_IG_incl94= &(_currn->_ATis_array_aggregate);
_IL_incl87=_IG_incl87;_IG_incl87= &(_currn->_ATAggregateDepth);
_IL_incl85=_IG_incl85;_IG_incl85= &(_currn->_ATTypeEst);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl94=_IL_incl94;
_IG_incl87=_IL_incl87;
_IG_incl85=_IL_incl85;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4AGGREGATE_NAMED_2(_TPPAGGREGATE_NAMED_2 _currn)
#else
void _VS4AGGREGATE_NAMED_2(_currn )
_TPPAGGREGATE_NAMED_2 _currn;

#endif
{
int* _IL_incl94;
int* _IL_incl87;
STPtr* _IL_incl85;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl94=_IG_incl94;_IG_incl94= &(_currn->_ATis_array_aggregate);
_IL_incl87=_IG_incl87;_IG_incl87= &(_currn->_ATAggregateDepth);
_IL_incl85=_IG_incl85;_IG_incl85= &(_currn->_ATTypeEst);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVAggregate_2__const81=_AVNamed_expressions_2__const81;
/*SPC(208)*/
_IG_incl94=_IL_incl94;
_IG_incl87=_IL_incl87;
_IG_incl85=_IL_incl85;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5AGGREGATE_NAMED_2(_TPPAGGREGATE_NAMED_2 _currn)
#else
void _VS5AGGREGATE_NAMED_2(_currn )
_TPPAGGREGATE_NAMED_2 _currn;

#endif
{
int* _IL_incl94;
int* _IL_incl87;
STPtr* _IL_incl85;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl94=_IG_incl94;_IG_incl94= &(_currn->_ATis_array_aggregate);
_IL_incl87=_IG_incl87;_IG_incl87= &(_currn->_ATAggregateDepth);
_IL_incl85=_IG_incl85;_IG_incl85= &(_currn->_ATTypeEst);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);

if (GetHasInitMethod(KeyOfType(_currn->_ATTypeEst), 0)) {
message(ERROR, "aggregates for types with init-method not allowed (mututal exclusive)", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6439)*/
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVAggregate_2__const82=_AVNamed_expressions_2__const82;
/*SPC(208)*/
_AVAggregate_2__const83=_AVNamed_expressions_2__const83;
/*SPC(208)*/
_AVAggregate_2__const101=_AVNamed_expressions_2__const101;
/*SPC(208)*/
_AVAggregate_2_out=PTGNULL;
/*SPC(209)*/
_IG_incl94=_IL_incl94;
_IG_incl87=_IL_incl87;
_IG_incl85=_IL_incl85;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1AGGREGATE_2(_TPPAGGREGATE_2 _currn)
#else
void _VS1AGGREGATE_2(_currn )
_TPPAGGREGATE_2 _currn;

#endif
{
int* _IL_incl87;

_VisitVarDecl()
_VisitEntry();
_IL_incl87=_IG_incl87;_IG_incl87= &(_currn->_ATAggregateDepth);
_currn->_ATAggregateDepth=ADD((* _IL_incl87), 1);
/*SPC(4263)*/
_IG_incl87=_IL_incl87;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2AGGREGATE_2(_TPPAGGREGATE_2 _currn)
#else
void _VS2AGGREGATE_2(_currn )
_TPPAGGREGATE_2 _currn;

#endif
{
int* _IL_incl87;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl87=_IG_incl87;_IG_incl87= &(_currn->_ATAggregateDepth);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl87=_IL_incl87;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3AGGREGATE_2(_TPPAGGREGATE_2 _currn)
#else
void _VS3AGGREGATE_2(_currn )
_TPPAGGREGATE_2 _currn;

#endif
{
int* _IL_incl94;
int* _IL_incl87;
STPtr* _IL_incl85;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl94=_IG_incl94;_IG_incl94= &(_currn->_ATis_array_aggregate);
_IL_incl87=_IG_incl87;_IG_incl87= &(_currn->_ATAggregateDepth);
_IL_incl85=_IG_incl85;_IG_incl85= &(_currn->_ATTypeEst);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl94=_IL_incl94;
_IG_incl87=_IL_incl87;
_IG_incl85=_IL_incl85;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4AGGREGATE_2(_TPPAGGREGATE_2 _currn)
#else
void _VS4AGGREGATE_2(_currn )
_TPPAGGREGATE_2 _currn;

#endif
{
int* _IL_incl94;
int* _IL_incl87;
STPtr* _IL_incl85;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl94=_IG_incl94;_IG_incl94= &(_currn->_ATis_array_aggregate);
_IL_incl87=_IG_incl87;_IG_incl87= &(_currn->_ATAggregateDepth);
_IL_incl85=_IG_incl85;_IG_incl85= &(_currn->_ATTypeEst);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVAggregate_2__const81=_AVNamed_expressions_2__const81;
/*SPC(204)*/
_IG_incl94=_IL_incl94;
_IG_incl87=_IL_incl87;
_IG_incl85=_IL_incl85;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5AGGREGATE_2(_TPPAGGREGATE_2 _currn)
#else
void _VS5AGGREGATE_2(_currn )
_TPPAGGREGATE_2 _currn;

#endif
{
int* _IL_incl94;
int* _IL_incl87;
STPtr* _IL_incl85;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl94=_IG_incl94;_IG_incl94= &(_currn->_ATis_array_aggregate);
_IL_incl87=_IG_incl87;_IG_incl87= &(_currn->_ATAggregateDepth);
_IL_incl85=_IG_incl85;_IG_incl85= &(_currn->_ATTypeEst);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);

if (GetHasInitMethod(KeyOfType(_currn->_ATTypeEst), 0)) {
message(ERROR, "aggregates for types with init-method not allowed (mututal exclusive)", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6439)*/
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVAggregate_2__const82=_AVNamed_expressions_2__const82;
/*SPC(204)*/
_AVAggregate_2__const83=_AVNamed_expressions_2__const83;
/*SPC(204)*/
_AVAggregate_2__const101=_AVNamed_expressions_2__const101;
/*SPC(204)*/
_AVAggregate_2_out=_AVNamed_expressions_2_out;
/*SPC(205)*/
_IG_incl94=_IL_incl94;
_IG_incl87=_IL_incl87;
_IG_incl85=_IL_incl85;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CONSTRUCTOR_SAME_AGG_2(_TPPTYPE_CONSTRUCTOR_SAME_AGG_2 _currn)
#else
void _VS1TYPE_CONSTRUCTOR_SAME_AGG_2(_currn )
_TPPTYPE_CONSTRUCTOR_SAME_AGG_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc1->_ATSemEnv=
((EQ(_currn->_desc1->_ATAggregateDepth, 1)
) ? (NewScope((* _IG_incl2))
) : ((* _IG_incl2)))
;
/*SPC(4266)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_SAME_AGG_2(_TPPTYPE_CONSTRUCTOR_SAME_AGG_2 _currn)
#else
void _VS2TYPE_CONSTRUCTOR_SAME_AGG_2(_currn )
_TPPTYPE_CONSTRUCTOR_SAME_AGG_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATType=GetMonoType((* _IG_incl66), NoType);
/*SPC(10773)*/

if (IsAbstractType(_currn->_ATType)) {
message(ERROR, "type constructor for abstract types not allowed", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6421)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CONSTRUCTOR_SAME_AGG_2(_TPPTYPE_CONSTRUCTOR_SAME_AGG_2 _currn)
#else
void _VS3TYPE_CONSTRUCTOR_SAME_AGG_2(_currn )
_TPPTYPE_CONSTRUCTOR_SAME_AGG_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_desc1->_ATTypeEst=_currn->_ATType;
/*SPC(11163)*/
_currn->_desc1->_ATis_array_aggregate=0;
/*SPC(11089)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_CONSTRUCTOR_SAME_AGG_2(_TPPTYPE_CONSTRUCTOR_SAME_AGG_2 _currn)
#else
void _VS4TYPE_CONSTRUCTOR_SAME_AGG_2(_currn )
_TPPTYPE_CONSTRUCTOR_SAME_AGG_2 _currn;

#endif
{
DefTableKey* _IL_incl100;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVType_constructor_2__const81=_AVAggregate_2__const81;
/*SPC(180)*/
_currn->_ATCalled=NoKey;
/*SPC(6353)*/
_IG_incl100=_IL_incl100;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5TYPE_CONSTRUCTOR_SAME_AGG_2(_TPPTYPE_CONSTRUCTOR_SAME_AGG_2 _currn)
#else
void _VS5TYPE_CONSTRUCTOR_SAME_AGG_2(_currn )
_TPPTYPE_CONSTRUCTOR_SAME_AGG_2 _currn;

#endif
{
DefTableKey* _IL_incl100;
int* _IL_incl41;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
_IL_incl41=_IG_incl41;_IG_incl41= &(_currn->_ATStackBefore);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_AT_const82=_AVAggregate_2__const82;
/*SPC(180)*/
_currn->_AT_const83=_AVAggregate_2__const83;
/*SPC(180)*/
_currn->_AT_const101=_AVAggregate_2__const101;
/*SPC(180)*/
_AVType_constructor_2_out=GetCLRType(_currn->_ATType);
/*SPC(2473)*/
_AVType_constructor_2_init_code=PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGcilNewObject(GetCLRType(_currn->_ATType)), 
((IsMonoValueType(_currn->_ATType)
) ? (PTGcilValueToAddress(_AVType_constructor_2_out)
) : (PTGNULL))
), _AVAggregate_2_out), 
((IsMonoValueType(_currn->_ATType)
) ? (PTGcilPushObject(_AVType_constructor_2_out)
) : (PTGNULL))
);
/*SPC(181)*/
_IG_incl100=_IL_incl100;
_IG_incl41=_IL_incl41;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CONSTRUCTOR_SAME_2(_TPPTYPE_CONSTRUCTOR_SAME_2 _currn)
#else
void _VS1TYPE_CONSTRUCTOR_SAME_2(_currn )
_TPPTYPE_CONSTRUCTOR_SAME_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1StackBefore;
STPtrList _AS1BoundArgs;
PTGNode _AS1write_back;
PTGNode _AS1out;
PTGNode _AS1once_out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_SAME_2(_TPPTYPE_CONSTRUCTOR_SAME_2 _currn)
#else
void _VS2TYPE_CONSTRUCTOR_SAME_2(_currn )
_TPPTYPE_CONSTRUCTOR_SAME_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1StackBefore;
STPtrList _AS1BoundArgs;
PTGNode _AS1write_back;
PTGNode _AS1out;
PTGNode _AS1once_out;

_VisitVarDecl()
_VisitEntry();
_currn->_ATType=GetMonoType((* _IG_incl66), NoType);
/*SPC(10768)*/

if (IsAbstractType(_currn->_ATType)) {
message(ERROR, "type constructor for abstract types not allowed", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6421)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CONSTRUCTOR_SAME_2(_TPPTYPE_CONSTRUCTOR_SAME_2 _currn)
#else
void _VS3TYPE_CONSTRUCTOR_SAME_2(_currn )
_TPPTYPE_CONSTRUCTOR_SAME_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1StackBefore;
STPtrList _AS1BoundArgs;
PTGNode _AS1write_back;
PTGNode _AS1out;
PTGNode _AS1once_out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_CONSTRUCTOR_SAME_2(_TPPTYPE_CONSTRUCTOR_SAME_2 _currn)
#else
void _VS4TYPE_CONSTRUCTOR_SAME_2(_currn )
_TPPTYPE_CONSTRUCTOR_SAME_2 _currn;

#endif
{
DefTableKey* _IL_incl100;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1StackBefore;
STPtrList _AS1BoundArgs;
PTGNode _AS1write_back;
PTGNode _AS1out;
PTGNode _AS1once_out;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AVType_constructor_2__const81=_AS1_const81;
/*SPC(2522)*/
_currn->_ATCalled=NoKey;
/*SPC(6353)*/
GetMethodCallDestination(KeyOf(BindingInScope(GetSemScope((* _IG_incl66), NoEnv), MakeName("init"))), _currn->_desc1->_ATArgList, (&( _currn->_AT_pos)), procedureK, 0, ADDRESS(_currn->_ATCalled), 1, (* _IG_incl23));
/*SPC(6378)*/
_IG_incl100=_IL_incl100;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5TYPE_CONSTRUCTOR_SAME_2(_TPPTYPE_CONSTRUCTOR_SAME_2 _currn)
#else
void _VS5TYPE_CONSTRUCTOR_SAME_2(_currn )
_TPPTYPE_CONSTRUCTOR_SAME_2 _currn;

#endif
{
DefTableKey* _IL_incl100;
int* _IL_incl41;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1StackBefore;
STPtrList _AS1BoundArgs;
PTGNode _AS1write_back;
PTGNode _AS1out;
PTGNode _AS1once_out;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
_IL_incl41=_IG_incl41;_IG_incl41= &(_currn->_ATStackBefore);
_AS1StackBefore=ADD(1, _currn->_ATStackBefore);
/*SPC(1929)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,PTGNode*,STPtrList*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1once_out)),(&( _AS1out)),(&( _AS1write_back)),(&( _AS1BoundArgs)),(&( _AS1StackBefore)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_currn->_AT_const82=_AS1_const82;
/*SPC(2522)*/
_currn->_AT_const83=_AS1_const83;
/*SPC(2522)*/
_currn->_AT_const101=_AS1_const101;
/*SPC(2522)*/
_AVType_constructor_2_out=GetCLRType(_currn->_ATType);
/*SPC(2473)*/
_AVType_constructor_2_init_code=PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(_AS1out, PTGcilNewObjectArgs(GetCLRType(_currn->_ATType), GenerateCommaSepTypeList(GetParams(_currn->_ATCalled, NULLDefTableKeyList), 0))), _AS1write_back), 
((IsMonoValueType(_currn->_ATType)
) ? (PTGcilValueToAddress(_AVType_constructor_2_out)
) : (PTGNULL))
), 
((IsMonoValueType(_currn->_ATType)
) ? (PTGcilPushObject(_AVType_constructor_2_out)
) : (PTGNULL))
);
/*SPC(2523)*/
_IG_incl100=_IL_incl100;
_IG_incl41=_IL_incl41;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CONSTRUCTOR_DES_2(_TPPTYPE_CONSTRUCTOR_DES_2 _currn)
#else
void _VS1TYPE_CONSTRUCTOR_DES_2(_currn )
_TPPTYPE_CONSTRUCTOR_DES_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_DES_2(_TPPTYPE_CONSTRUCTOR_DES_2 _currn)
#else
void _VS2TYPE_CONSTRUCTOR_DES_2(_currn )
_TPPTYPE_CONSTRUCTOR_DES_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_currn->_ATType=NoType;
/*SPC(10764)*/

if (IsAbstractType(_currn->_ATType)) {
message(ERROR, "type constructor for abstract types not allowed", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6421)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CONSTRUCTOR_DES_2(_TPPTYPE_CONSTRUCTOR_DES_2 _currn)
#else
void _VS3TYPE_CONSTRUCTOR_DES_2(_currn )
_TPPTYPE_CONSTRUCTOR_DES_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_AS1Is_aget=0;
/*SPC(4410)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));
_AVDesignator_2_TypeEst=NoType;
/*SPC(11088)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_CONSTRUCTOR_DES_2(_TPPTYPE_CONSTRUCTOR_DES_2 _currn)
#else
void _VS4TYPE_CONSTRUCTOR_DES_2(_currn )
_TPPTYPE_CONSTRUCTOR_DES_2 _currn;

#endif
{
DefTableKey* _IL_incl100;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVType_constructor_2__const81=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(10763)*/
_currn->_ATCalled=NoKey;
/*SPC(6353)*/
_IG_incl100=_IL_incl100;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5TYPE_CONSTRUCTOR_DES_2(_TPPTYPE_CONSTRUCTOR_DES_2 _currn)
#else
void _VS5TYPE_CONSTRUCTOR_DES_2(_currn )
_TPPTYPE_CONSTRUCTOR_DES_2 _currn;

#endif
{
DefTableKey* _IL_incl100;
int* _IL_incl41;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
_IL_incl41=_IG_incl41;_IG_incl41= &(_currn->_ATStackBefore);
_AVDesignator_2_IsCall=0;
/*SPC(6662)*/
_AS1StackBefore=_currn->_ATStackBefore;
/*SPC(1954)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,PTGNode*,int*,int*,int*,int*,int*,CTValuePtr*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1qualifier_out)),(&( _AS1ValHomeNode)),(&( _AS1StackHeight)),(&( _AS1StackBefore)),(&( _AS1Is_aget)),(&( _AS1IsSharedQualified)),(&( _AS1Op)),(&( _AS1Val)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_AS2StackBefore=ADD(1, _currn->_ATStackBefore);
/*SPC(1929)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,PTGNode*,STPtrList*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2once_out)),(&( _AS2out)),(&( _AS2write_back)),(&( _AS2BoundArgs)),(&( _AS2StackBefore)),(&( _AS2_const101)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)));
_currn->_AT_const82=PTGCommaSeq(PTGCommaSeq(_AS1_const82, IDENTICAL(_AS1ValHomeNode)), _AS2_const82);
/*SPC(10763)*/
_currn->_AT_const83=MAX(MAX(_AS1_const83, IDENTICAL(_AS1StackHeight)), _AS2_const83);
/*SPC(10763)*/
_currn->_AT_const101=PTGCommaSeq(PTGCommaSeq(_AS1_const101, IDENTICAL(_AS1ValHomeNode)), _AS2_const101);
/*SPC(10763)*/
_AVType_constructor_2_out=GetCLRType(_currn->_ATType);
/*SPC(2473)*/
_AVType_constructor_2_init_code=PTGNULL;
/*SPC(2410)*/
_IG_incl100=_IL_incl100;
_IG_incl41=_IL_incl41;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CONSTRUCTOR_AGG_2(_TPPTYPE_CONSTRUCTOR_AGG_2 _currn)
#else
void _VS1TYPE_CONSTRUCTOR_AGG_2(_currn )
_TPPTYPE_CONSTRUCTOR_AGG_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc1->_ATSemEnv=
((EQ(_currn->_desc1->_ATAggregateDepth, 1)
) ? (NewScope((* _IG_incl2))
) : ((* _IG_incl2)))
;
/*SPC(4266)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_AGG_2(_TPPTYPE_CONSTRUCTOR_AGG_2 _currn)
#else
void _VS2TYPE_CONSTRUCTOR_AGG_2(_currn )
_TPPTYPE_CONSTRUCTOR_AGG_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

if (IsPolymorph(_AVType_constructor_2_TypeEst)) {
message(FATAL, CatStrStr("aggregate cannot define values for polymorphic type: ", NameOfType(_AVType_constructor_2_TypeEst)), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5877)*/
_currn->_desc1->_ATTypeEst=_AVType_constructor_2_TypeEst;
/*SPC(11159)*/
_currn->_ATType=_currn->_desc1->_ATTypeEst;
/*SPC(10758)*/

if (IsAbstractType(_currn->_ATType)) {
message(ERROR, "type constructor for abstract types not allowed", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6421)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CONSTRUCTOR_AGG_2(_TPPTYPE_CONSTRUCTOR_AGG_2 _currn)
#else
void _VS3TYPE_CONSTRUCTOR_AGG_2(_currn )
_TPPTYPE_CONSTRUCTOR_AGG_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_desc1->_ATis_array_aggregate=_AVType_constructor_2_is_array_aggregate;
/*SPC(11147)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_CONSTRUCTOR_AGG_2(_TPPTYPE_CONSTRUCTOR_AGG_2 _currn)
#else
void _VS4TYPE_CONSTRUCTOR_AGG_2(_currn )
_TPPTYPE_CONSTRUCTOR_AGG_2 _currn;

#endif
{
DefTableKey* _IL_incl100;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVType_constructor_2__const81=_AVAggregate_2__const81;
/*SPC(192)*/
_currn->_ATCalled=NoKey;
/*SPC(6353)*/
_IG_incl100=_IL_incl100;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5TYPE_CONSTRUCTOR_AGG_2(_TPPTYPE_CONSTRUCTOR_AGG_2 _currn)
#else
void _VS5TYPE_CONSTRUCTOR_AGG_2(_currn )
_TPPTYPE_CONSTRUCTOR_AGG_2 _currn;

#endif
{
DefTableKey* _IL_incl100;
int* _IL_incl41;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
_IL_incl41=_IG_incl41;_IG_incl41= &(_currn->_ATStackBefore);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_AT_const82=_AVAggregate_2__const82;
/*SPC(192)*/
_currn->_AT_const83=_AVAggregate_2__const83;
/*SPC(192)*/
_currn->_AT_const101=_AVAggregate_2__const101;
/*SPC(192)*/
_AVType_constructor_2_out=GetCLRType(_currn->_ATType);
/*SPC(2473)*/
_AVType_constructor_2_init_code=PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGcilNewObject(GetCLRType(_currn->_ATType)), 
((IsMonoValueType(_currn->_ATType)
) ? (PTGcilValueToAddress(_AVType_constructor_2_out)
) : (PTGNULL))
), _AVAggregate_2_out), 
((IsMonoValueType(_currn->_ATType)
) ? (PTGcilPushObject(_AVType_constructor_2_out)
) : (PTGNULL))
);
/*SPC(193)*/
_IG_incl100=_IL_incl100;
_IG_incl41=_IL_incl41;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CONSTRUCTOR_CLASS_2(_TPPTYPE_CONSTRUCTOR_CLASS_2 _currn)
#else
void _VS1TYPE_CONSTRUCTOR_CLASS_2(_currn )
_TPPTYPE_CONSTRUCTOR_CLASS_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1IsPoly;
PTGNode _AS1init_code;

_VisitVarDecl()
_VisitEntry();
_AS1IsPoly=0;
/*SPC(4656)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsPoly)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_CLASS_2(_TPPTYPE_CONSTRUCTOR_CLASS_2 _currn)
#else
void _VS2TYPE_CONSTRUCTOR_CLASS_2(_currn )
_TPPTYPE_CONSTRUCTOR_CLASS_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1IsPoly;
PTGNode _AS1init_code;

_VisitVarDecl()
_VisitEntry();
_currn->_ATType=GetType(_currn->_desc1->_ATKey, NoType);
/*SPC(10752)*/

if (IsAbstractType(_currn->_ATType)) {
message(ERROR, "type constructor for abstract types not allowed", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6421)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CONSTRUCTOR_CLASS_2(_TPPTYPE_CONSTRUCTOR_CLASS_2 _currn)
#else
void _VS3TYPE_CONSTRUCTOR_CLASS_2(_currn )
_TPPTYPE_CONSTRUCTOR_CLASS_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1IsPoly;
PTGNode _AS1init_code;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsPoly)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_CONSTRUCTOR_CLASS_2(_TPPTYPE_CONSTRUCTOR_CLASS_2 _currn)
#else
void _VS4TYPE_CONSTRUCTOR_CLASS_2(_currn )
_TPPTYPE_CONSTRUCTOR_CLASS_2 _currn;

#endif
{
DefTableKey* _IL_incl100;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1IsPoly;
PTGNode _AS1init_code;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsPoly)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVType_constructor_2__const81=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(2480)*/
_currn->_ATCalled=NoKey;
/*SPC(6353)*/
GetMethodCallDestination(KeyOf(BindingInScope(GetSemScope(_currn->_desc1->_ATKey, NoEnv), MakeName("init"))), _currn->_desc2->_ATArgList, (&( _currn->_AT_pos)), procedureK, 0, ADDRESS(_currn->_ATCalled), 1, (* _IG_incl23));
/*SPC(6363)*/
_IG_incl100=_IL_incl100;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5TYPE_CONSTRUCTOR_CLASS_2(_TPPTYPE_CONSTRUCTOR_CLASS_2 _currn)
#else
void _VS5TYPE_CONSTRUCTOR_CLASS_2(_currn )
_TPPTYPE_CONSTRUCTOR_CLASS_2 _currn;

#endif
{
DefTableKey* _IL_incl100;
int* _IL_incl41;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1IsPoly;
PTGNode _AS1init_code;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
_IL_incl41=_IG_incl41;_IG_incl41= &(_currn->_ATStackBefore);
_currn->_desc1->_ATIsConstructor=1;
/*SPC(2481)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1init_code)),(&( _AS1IsPoly)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));

if (NOT(_AVClass_specifier_2_BoundsDefined)) {
message(ERROR, "class_specifier must give values to all its bounds when used as a type constructor", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5934)*/
_AS2StackBefore=ADD(1, _currn->_ATStackBefore);
/*SPC(1929)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,PTGNode*,STPtrList*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2once_out)),(&( _AS2out)),(&( _AS2write_back)),(&( _AS2BoundArgs)),(&( _AS2StackBefore)),(&( _AS2_const101)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)));
_currn->_AT_const82=PTGCommaSeq(_AS1_const82, _AS2_const82);
/*SPC(2480)*/
_currn->_AT_const83=MAX(_AS1_const83, _AS2_const83);
/*SPC(2480)*/
_currn->_AT_const101=PTGCommaSeq(_AS1_const101, _AS2_const101);
/*SPC(2480)*/
_AVType_constructor_2_out=GetCLRType(_currn->_ATType);
/*SPC(2473)*/
_AVType_constructor_2_init_code=PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(_AS1init_code, _AS2out), PTGcilNewObjectArgs(GetCLRType(_currn->_ATType), PTGCommaSeq(GenerateCommaSepTypeList(GetBoundKeys(_currn->_desc1->_ATKey, NULLDefTableKeyList), 0), GenerateCommaSepTypeList(GetParams(_currn->_ATCalled, NULLDefTableKeyList), 0)))), _AS2write_back), 
((IsMonoValueType(_currn->_ATType)
) ? (PTGcilValueToAddress(_AVType_constructor_2_out)
) : (PTGNULL))
), 
((IsMonoValueType(_currn->_ATType)
) ? (PTGcilPushObject(_AVType_constructor_2_out)
) : (PTGNULL))
);
/*SPC(2483)*/
_IG_incl100=_IL_incl100;
_IG_incl41=_IL_incl41;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CONSTRUCTOR_CL_AGG_2(_TPPTYPE_CONSTRUCTOR_CL_AGG_2 _currn)
#else
void _VS1TYPE_CONSTRUCTOR_CL_AGG_2(_currn )
_TPPTYPE_CONSTRUCTOR_CL_AGG_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1IsPoly;
PTGNode _AS1init_code;

_VisitVarDecl()
_VisitEntry();
_AS1IsPoly=0;
/*SPC(4656)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsPoly)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_desc2->_ATSemEnv=
((EQ(_currn->_desc2->_ATAggregateDepth, 1)
) ? (NewScope((* _IG_incl2))
) : ((* _IG_incl2)))
;
/*SPC(4266)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_CL_AGG_2(_TPPTYPE_CONSTRUCTOR_CL_AGG_2 _currn)
#else
void _VS2TYPE_CONSTRUCTOR_CL_AGG_2(_currn )
_TPPTYPE_CONSTRUCTOR_CL_AGG_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1IsPoly;
PTGNode _AS1init_code;

_VisitVarDecl()
_VisitEntry();
_currn->_ATType=GetType(_currn->_desc1->_ATKey, NoType);
/*SPC(10747)*/

if (IsAbstractType(_currn->_ATType)) {
message(ERROR, "type constructor for abstract types not allowed", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6421)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CONSTRUCTOR_CL_AGG_2(_TPPTYPE_CONSTRUCTOR_CL_AGG_2 _currn)
#else
void _VS3TYPE_CONSTRUCTOR_CL_AGG_2(_currn )
_TPPTYPE_CONSTRUCTOR_CL_AGG_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1IsPoly;
PTGNode _AS1init_code;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsPoly)));
_currn->_desc2->_ATTypeEst=_currn->_ATType;
/*SPC(11155)*/
_currn->_desc2->_ATis_array_aggregate=0;
/*SPC(11089)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_CONSTRUCTOR_CL_AGG_2(_TPPTYPE_CONSTRUCTOR_CL_AGG_2 _currn)
#else
void _VS4TYPE_CONSTRUCTOR_CL_AGG_2(_currn )
_TPPTYPE_CONSTRUCTOR_CL_AGG_2 _currn;

#endif
{
DefTableKey* _IL_incl100;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1IsPoly;
PTGNode _AS1init_code;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsPoly)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVType_constructor_2__const81=AppDefTableKeyList(_AS1_const81, _AVAggregate_2__const81);
/*SPC(168)*/
_currn->_ATCalled=NoKey;
/*SPC(6353)*/
_IG_incl100=_IL_incl100;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5TYPE_CONSTRUCTOR_CL_AGG_2(_TPPTYPE_CONSTRUCTOR_CL_AGG_2 _currn)
#else
void _VS5TYPE_CONSTRUCTOR_CL_AGG_2(_currn )
_TPPTYPE_CONSTRUCTOR_CL_AGG_2 _currn;

#endif
{
DefTableKey* _IL_incl100;
int* _IL_incl41;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
int _AS1IsPoly;
PTGNode _AS1init_code;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
_IL_incl41=_IG_incl41;_IG_incl41= &(_currn->_ATStackBefore);
_currn->_desc1->_ATIsConstructor=1;
/*SPC(2477)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1init_code)),(&( _AS1IsPoly)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));

if (NOT(_AVClass_specifier_2_BoundsDefined)) {
message(ERROR, "class_specifier must give values to all its bounds when used as a type constructor", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5927)*/
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_AT_const82=PTGCommaSeq(_AS1_const82, _AVAggregate_2__const82);
/*SPC(168)*/
_currn->_AT_const83=MAX(_AS1_const83, _AVAggregate_2__const83);
/*SPC(168)*/
_currn->_AT_const101=PTGCommaSeq(_AS1_const101, _AVAggregate_2__const101);
/*SPC(168)*/
_AVType_constructor_2_out=GetCLRType(_currn->_ATType);
/*SPC(2473)*/
_AVType_constructor_2_init_code=PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGcilNewObject(GetCLRType(_currn->_ATType)), 
((IsMonoValueType(_currn->_ATType)
) ? (PTGcilValueToAddress(_AVType_constructor_2_out)
) : (PTGNULL))
), _AVAggregate_2_out), 
((IsMonoValueType(_currn->_ATType)
) ? (PTGcilPushObject(_AVType_constructor_2_out)
) : (PTGNULL))
);
/*SPC(169)*/
_IG_incl100=_IL_incl100;
_IG_incl41=_IL_incl41;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1QUAL_FEATURE_ID_USE_2(_TPPQUAL_FEATURE_ID_USE_2 _currn)
#else
void _VS1QUAL_FEATURE_ID_USE_2(_currn )
_TPPQUAL_FEATURE_ID_USE_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVQual_feature_id_use_2_Sym=_currn->_ATTERM_1;
/*SPC(4239)*/
_AVQual_feature_id_use_2_Bind=BindingInScope(_AVQual_feature_id_use_2_SemScope, _AVQual_feature_id_use_2_Sym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVQual_feature_id_use_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _AVQual_feature_id_use_2_Sym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2QUAL_FEATURE_ID_USE_2(_TPPQUAL_FEATURE_ID_USE_2 _currn)
#else
void _VS2QUAL_FEATURE_ID_USE_2(_currn )
_TPPQUAL_FEATURE_ID_USE_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVQual_feature_id_use_2_Val=GetConstValue(_currn->_ATKey, NULLValue);
/*SPC(7100)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2QUALIFICATION_TYPE_2(_TPPQUALIFICATION_TYPE_2 _currn)
#else
void _VS2QUALIFICATION_TYPE_2(_currn )
_TPPQUALIFICATION_TYPE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVQual_feature_id_use_2_SemScopeKey=KeyOfType(_currn->_desc1->_ATType);
/*SPC(4562)*/
_AVQual_feature_id_use_2_SemScope=GetSemScope(_AVQual_feature_id_use_2_SemScopeKey, NoEnv);
/*SPC(12922)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3QUALIFICATION_TYPE_2(_TPPQUALIFICATION_TYPE_2 _currn)
#else
void _VS3QUALIFICATION_TYPE_2(_currn )
_TPPQUALIFICATION_TYPE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_AVQualification_2_IsQualifiedPolymorph=
((IsPolymorph(_currn->_desc1->_ATType)
) ? (2
) : (1))
;
/*SPC(10647)*/
_AVQualification_2_Key=_currn->_desc2->_ATKey;
/*SPC(4566)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4QUALIFICATION_TYPE_2(_TPPQUALIFICATION_TYPE_2 _currn)
#else
void _VS4QUALIFICATION_TYPE_2(_currn )
_TPPQUALIFICATION_TYPE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AVQualification_2__const81=_AS1_const81;
/*SPC(1812)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5QUALIFICATION_TYPE_2(_TPPQUALIFICATION_TYPE_2 _currn)
#else
void _VS5QUALIFICATION_TYPE_2(_currn )
_TPPQUALIFICATION_TYPE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_AS1IsMethodParameterType=0;
/*SPC(5941)*/
_AVType_specifier_2_IsTypeBound=0;
/*SPC(5788)*/
_AVType_specifier_2_IsConstructor=0;
/*SPC(2456)*/
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsMethodParameterType)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVQualification_2__const82=_currn->_desc1->_AT_const82;
/*SPC(1812)*/
_AVQualification_2__const83=_currn->_desc1->_AT_const83;
/*SPC(1812)*/
_AVQualification_2__const101=_currn->_desc1->_AT_const101;
/*SPC(1812)*/
_AVQualification_2_IsSharedQualified=1;
/*SPC(6896)*/
_AVQualification_2_LabelVal=_AVQual_feature_id_use_2_Val;
/*SPC(6180)*/
_AVQualification_2_qualifier_out=PTGcilPushNull();
/*SPC(1821)*/
_AVQualification_2_out=
((InIS(attributeK, GetSemKindSet(_currn->_desc2->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_desc2->_ATKey))
) : (PTGIdent("//Typqualifizierte Methode")))
;
/*SPC(1813)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2QUALIFICATION_EXP_2(_TPPQUALIFICATION_EXP_2 _currn)
#else
void _VS2QUALIFICATION_EXP_2(_currn )
_TPPQUALIFICATION_EXP_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVExpression_2_is_array_aggregate=0;
/*SPC(11085)*/
_currn->_desc1->_ATTypeEst=NoType;
/*SPC(11084)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3QUALIFICATION_EXP_2(_TPPQUALIFICATION_EXP_2 _currn)
#else
void _VS3QUALIFICATION_EXP_2(_currn )
_TPPQUALIFICATION_EXP_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_AS1IsExplicitCoercion=0;
/*SPC(10797)*/
_currn->_desc1->_ATIsArg=0;
/*SPC(10994)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)));
_AVQual_feature_id_use_2_SemScopeKey=KeyOfType(_currn->_desc1->_ATType);
/*SPC(4558)*/
_AVQual_feature_id_use_2_SemScope=GetSemScope(_AVQual_feature_id_use_2_SemScopeKey, NoEnv);
/*SPC(12922)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVQualification_2_IsQualifiedPolymorph=1;
/*SPC(10640)*/
_AVQualification_2_Key=_currn->_desc2->_ATKey;
/*SPC(4566)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4QUALIFICATION_EXP_2(_TPPQUALIFICATION_EXP_2 _currn)
#else
void _VS4QUALIFICATION_EXP_2(_currn )
_TPPQUALIFICATION_EXP_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
_AVQualification_2__const81=_AS1_const81;
/*SPC(1800)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5QUALIFICATION_EXP_2(_TPPQUALIFICATION_EXP_2 _currn)
#else
void _VS5QUALIFICATION_EXP_2(_currn )
_TPPQUALIFICATION_EXP_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_AS1StackBefore=_AVQualification_2_StackBefore;
/*SPC(1950)*/
_AS1UsedAsQualifier=1;
/*SPC(1801)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,int*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1UsedAsQualifier)),(&( _AS1StackBefore)),(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVQualification_2__const82=_currn->_desc1->_AT_const82;
/*SPC(1800)*/
_AVQualification_2__const83=MAX(_currn->_desc1->_AT_const83, IDENTICAL(_currn->_desc1->_ATStackHeight));
/*SPC(1800)*/
_AVQualification_2__const101=_currn->_desc1->_AT_const101;
/*SPC(1800)*/
_AVQualification_2_IsSharedQualified=0;
/*SPC(6888)*/
_AVQualification_2_LabelVal=_AVQual_feature_id_use_2_Val;
/*SPC(6176)*/
_AVQualification_2_qualifier_out=_AVExpression_2_qualifier_out;
/*SPC(1809)*/
_AVQualification_2_out=
((InIS(attributeK, GetSemKindSet(_currn->_desc2->_ATKey, NULLIS))
) ? (PTGNewLineSeq(_AVExpression_2_qualifier_out, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_desc2->_ATKey)))
) : (PTGIdent("//Qualifizierte Methode")))
;
/*SPC(1803)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STD_METHOD_CALL_2(_TPPSTD_METHOD_CALL_2 _currn)
#else
void _VS1STD_METHOD_CALL_2(_currn )
_TPPSTD_METHOD_CALL_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STD_METHOD_CALL_2(_TPPSTD_METHOD_CALL_2 _currn)
#else
void _VS2STD_METHOD_CALL_2(_currn )
_TPPSTD_METHOD_CALL_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_AS1Is_aget=_AVStd_method_call_2_Is_aget;
/*SPC(4427)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATVal=CalcCTValue(_AS1Val, _AVArguments_2_Val, _AS1Op, _currn->_desc2->_ATNumArgs, (&( _currn->_AT_pos)));
/*SPC(7132)*/
_AVDesignator_2_TypeEst=
((EQ(_currn->_ATVal, NULLValue)
) ? (NoType
) : ((* _IG_incl44)))
;
/*SPC(11168)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STD_METHOD_CALL_2(_TPPSTD_METHOD_CALL_2 _currn,STPtr* _AS0TypeEst)
#else
void _VS3STD_METHOD_CALL_2(_currn ,_AS0TypeEst)
_TPPSTD_METHOD_CALL_2 _currn;
STPtr* _AS0TypeEst;

#endif
{
DefTableKey* _IL_incl100;
DefTableKey* _IL_incl91;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
_IL_incl91=_IG_incl91;_IG_incl91= &(_currn->_ATCalled);
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATKey=
((AND(EQ(_currn->_desc2->_ATArgList, NULLMethArgInfoList), AND(NOT(_currn->_desc1->_ATIsQualified), AND(OR(InIS(attributeK, GetSemKindSet(_currn->_desc1->_ATKey, NULLIS)), InIS(locVarK, GetSemKindSet(_currn->_desc1->_ATKey, NULLIS))), OR(NOT(IsProcedureType(GetType(_currn->_desc1->_ATKey, NoType))), OR(_currn->_ATIsArg, IsConform(GetType(_currn->_desc1->_ATKey, NoType), (* _AS0TypeEst)))))))
) ? (_currn->_desc1->_ATKey
) : (NoKey))
;
/*SPC(11036)*/
_currn->_ATCalled=NoKey;
/*SPC(11056)*/
_currn->_ATType=
((NOT(EQ(_currn->_ATVal, NULLValue))
) ? ((* _IG_incl44)
) : (
((EQ(_currn->_ATKey, NoKey)
) ? (GetMethodCallDestination(_currn->_desc1->_ATKey, _currn->_desc2->_ATArgList, (&( _currn->_AT_pos)), procedureK, 0, ADDRESS(_currn->_ATCalled), 0, (* _IG_incl23))
) : (GetType(_currn->_desc1->_ATKey, NoType)))
))
;
/*SPC(11058)*/
_IG_incl100=_IL_incl100;
_IG_incl91=_IL_incl91;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4STD_METHOD_CALL_2(_TPPSTD_METHOD_CALL_2 _currn,STPtr* _AS0TypeEst)
#else
void _VS4STD_METHOD_CALL_2(_currn ,_AS0TypeEst)
_TPPSTD_METHOD_CALL_2 _currn;
STPtr* _AS0TypeEst;

#endif
{
DefTableKey* _IL_incl100;
DefTableKey* _IL_incl91;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
_IL_incl91=_IG_incl91;_IG_incl91= &(_currn->_ATCalled);
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVStd_method_call_2__const81=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(2087)*/
_AVBuiltin_option_2AttrAccLoc_post=
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (AddToSetDefTableKeyList(_currn->_ATKey, _AVBuiltin_option_2AttrAccLoc_post, CmpDefTableKey)
) : (_AVBuiltin_option_2AttrAccLoc_post))
;
/*SPC(6804)*/

if (AND(IsProcedureType(GetType(_currn->_ATKey, NoType)), _currn->_ATIsArg)) {
GetParameterlessArgumentCall((* _IL_incl91), ADDRESS(_currn->_ATCalled), _currn->_ATKey, (* _IG_incl92), (* _IG_incl23), (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(10615)*/
_AVBuiltin_option_2MethCallsLoc_post=
((AND(NOT(_currn->_desc1->_ATIsQualified), NOT(EQ(_currn->_ATCalled, NoKey)))
) ? (
((InIS(featureK, GetSemKindSet(_currn->_ATCalled, NULLIS))
) ? (AddToSetDefTableKeyList(_currn->_ATCalled, _AVBuiltin_option_2MethCallsLoc_post, CmpDefTableKey)
) : (_AVBuiltin_option_2MethCallsLoc_post))

) : (_AVBuiltin_option_2MethCallsLoc_post))
;
/*SPC(6824)*/
_IG_incl100=_IL_incl100;
_IG_incl91=_IL_incl91;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5STD_METHOD_CALL_2(_TPPSTD_METHOD_CALL_2 _currn,STPtr* _AS0TypeEst)
#else
void _VS5STD_METHOD_CALL_2(_currn ,_AS0TypeEst)
_TPPSTD_METHOD_CALL_2 _currn;
STPtr* _AS0TypeEst;

#endif
{
DefTableKey* _IL_incl100;
DefTableKey* _IL_incl91;
int* _IL_incl41;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2StackBefore;
STPtrList _AS2BoundArgs;
PTGNode _AS2write_back;
PTGNode _AS2out;
PTGNode _AS2once_out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl100=_IG_incl100;_IG_incl100= &(_currn->_ATCalled);
_IL_incl91=_IG_incl91;_IG_incl91= &(_currn->_ATCalled);
_IL_incl41=_IG_incl41;_IG_incl41= &(_currn->_ATStackBefore);
_AVDesignator_2_IsCall=
((EQ(_currn->_ATCalled, NoKey)
) ? (0
) : (
(
((AND(InIS(privateK, GetSemKindSet(_currn->_ATCalled, NULLIS)), NOT(EQ((* _IG_incl66), GetFeatureOf(_currn->_ATCalled, NoKey))))
) ? ((message(ERROR, "access to private method outside of class", 0, (&( _currn->_AT_pos))), 0)
) : ((0)))
, 1)
))
;
/*SPC(6666)*/
_AS1StackBefore=_currn->_ATStackBefore;
/*SPC(1954)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,PTGNode*,int*,int*,int*,int*,int*,CTValuePtr*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1qualifier_out)),(&( _AS1ValHomeNode)),(&( _AS1StackHeight)),(&( _AS1StackBefore)),(&( _AS1Is_aget)),(&( _AS1IsSharedQualified)),(&( _AS1Op)),(&( _AS1Val)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_AS2StackBefore=ADD(1, _currn->_ATStackBefore);
/*SPC(1929)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,PTGNode*,STPtrList*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2once_out)),(&( _AS2out)),(&( _AS2write_back)),(&( _AS2BoundArgs)),(&( _AS2StackBefore)),(&( _AS2_const101)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)));
_AVStd_method_call_2__const82=PTGCommaSeq(PTGCommaSeq(_AS1_const82, IDENTICAL(_AS1ValHomeNode)), _AS2_const82);
/*SPC(2087)*/
_AVStd_method_call_2__const83=MAX(MAX(_AS1_const83, IDENTICAL(_AS1StackHeight)), _AS2_const83);
/*SPC(2087)*/
_AVStd_method_call_2__const101=PTGCommaSeq(PTGCommaSeq(_AS1_const101, IDENTICAL(_AS1ValHomeNode)), _AS2_const101);
/*SPC(2087)*/

if (NOT(EQ(_currn->_ATCalled, NoKey))) {

if (AND((* _IG_incl90), IsGlobalUnshared(_currn->_ATCalled))) {
message(ERROR, CatStrStr(CatStrStr("initialization of shared attribute uses method - ", NameOfType(GetType(_currn->_ATCalled, NoType))), " - that accesses non shared attributes"), 0, (&( _currn->_AT_pos)));

} else {
}
;

} else {
}
;
/*SPC(6936)*/

if (NOT(EQ(_currn->_ATCalled, NoKey))) {

if (AND(_AS1IsSharedQualified, IsGlobalUnshared(_currn->_ATCalled))) {
message(ERROR, CatStrStr(CatStrStr("type qualified method call designates method - ", NameOfType(GetType(_currn->_ATCalled, NoType))), " - that accesses non shared attributes"), 0, (&( _currn->_AT_pos)));

} else {
}
;

} else {
}
;
/*SPC(6903)*/
_AVStd_method_call_2_RealType=
((EQ(_currn->_ATCalled, NoKey)
) ? (_currn->_ATType
) : (GetResultType(KeyOfType(GetType(_currn->_ATCalled, NoType)), NoType)))
;
/*SPC(10623)*/
_AVStd_method_call_2_out=
((EQ(_currn->_ATCalled, NoKey)
) ? (_AS1out
) : (PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(
((InIS(methodK, GetSemKindSet(_currn->_ATCalled, NULLIS))
) ? (_AS1qualifier_out
) : (PTGNewLineSeq(_AS1out, PTGcilPushObject(GetCLRType(GetType(_currn->_ATCalled, NoType))))))
, _AS2out), PTGcilMethodCall(GetCLRType(_AVStd_method_call_2_RealType), GetCLRType(
((InIS(methodK, GetSemKindSet(_currn->_ATCalled, NULLIS))
) ? (GetType(GetFeatureOf(_currn->_ATCalled, NoKey), NoType)
) : (GetType(_currn->_ATCalled, NoType)))
), PTGcilIdent(
((InIS(methodK, GetSemKindSet(_currn->_ATCalled, NULLIS))
) ? (StringTable(GetSym(_currn->_ATCalled, 0))
) : ("Call"))
), GenerateCommaSepTypeList(GetParams(KeyOfType(GetType(_currn->_ATCalled, NoType)), NULLDefTableKeyList), 0))), 
((IsMonoValueType(_AVStd_method_call_2_RealType)
) ? (PTGcilValueToAddress(GetCLRType(_AVStd_method_call_2_RealType))
) : (PTGNULL))
), _AS2write_back)))
;
/*SPC(2088)*/
_IG_incl100=_IL_incl100;
_IG_incl91=_IL_incl91;
_IG_incl41=_IL_incl41;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1OBJ_ID_USE_2(_TPPOBJ_ID_USE_2 _currn)
#else
void _VS1OBJ_ID_USE_2(_currn )
_TPPOBJ_ID_USE_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_NOT_2(_TPPNAME_NOT_2 _currn)
#else
void _VS1NAME_NOT_2(_currn )
_TPPNAME_NOT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("negate");
/*SPC(4550)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_NOT_2(_TPPNAME_NOT_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_NOT_2(_currn ,_AS0IsUnnamed)
_TPPNAME_NOT_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_NOT_2(_TPPNAME_NOT_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_NOT_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_NOT_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_POW_2(_TPPNAME_POW_2 _currn)
#else
void _VS1NAME_POW_2(_currn )
_TPPNAME_POW_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("pow");
/*SPC(4546)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_POW_2(_TPPNAME_POW_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_POW_2(_currn ,_AS0IsUnnamed)
_TPPNAME_POW_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_POW_2(_TPPNAME_POW_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_POW_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_POW_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_MOD_2(_TPPNAME_MOD_2 _currn)
#else
void _VS1NAME_MOD_2(_currn )
_TPPNAME_MOD_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("modulo");
/*SPC(4542)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_MOD_2(_TPPNAME_MOD_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_MOD_2(_currn ,_AS0IsUnnamed)
_TPPNAME_MOD_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_MOD_2(_TPPNAME_MOD_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_MOD_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_MOD_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_DIV_2(_TPPNAME_DIV_2 _currn)
#else
void _VS1NAME_DIV_2(_currn )
_TPPNAME_DIV_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("divide");
/*SPC(4538)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_DIV_2(_TPPNAME_DIV_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_DIV_2(_currn ,_AS0IsUnnamed)
_TPPNAME_DIV_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_DIV_2(_TPPNAME_DIV_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_DIV_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_DIV_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_QUOTIENT_2(_TPPNAME_QUOTIENT_2 _currn)
#else
void _VS1NAME_QUOTIENT_2(_currn )
_TPPNAME_QUOTIENT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("quotient");
/*SPC(4534)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_QUOTIENT_2(_TPPNAME_QUOTIENT_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_QUOTIENT_2(_currn ,_AS0IsUnnamed)
_TPPNAME_QUOTIENT_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_QUOTIENT_2(_TPPNAME_QUOTIENT_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_QUOTIENT_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_QUOTIENT_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_STAR_2(_TPPNAME_STAR_2 _currn)
#else
void _VS1NAME_STAR_2(_currn )
_TPPNAME_STAR_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("times");
/*SPC(4530)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_STAR_2(_TPPNAME_STAR_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_STAR_2(_currn ,_AS0IsUnnamed)
_TPPNAME_STAR_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_STAR_2(_TPPNAME_STAR_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_STAR_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_STAR_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_MINUS_2(_TPPNAME_MINUS_2 _currn)
#else
void _VS1NAME_MINUS_2(_currn )
_TPPNAME_MINUS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("minus");
/*SPC(4526)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_MINUS_2(_TPPNAME_MINUS_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_MINUS_2(_currn ,_AS0IsUnnamed)
_TPPNAME_MINUS_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_MINUS_2(_TPPNAME_MINUS_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_MINUS_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_MINUS_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_PLUS_2(_TPPNAME_PLUS_2 _currn)
#else
void _VS1NAME_PLUS_2(_currn )
_TPPNAME_PLUS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("plus");
/*SPC(4522)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_PLUS_2(_TPPNAME_PLUS_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_PLUS_2(_currn ,_AS0IsUnnamed)
_TPPNAME_PLUS_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_PLUS_2(_TPPNAME_PLUS_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_PLUS_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_PLUS_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_GT_EQ_2(_TPPNAME_GT_EQ_2 _currn)
#else
void _VS1NAME_GT_EQ_2(_currn )
_TPPNAME_GT_EQ_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("is_geq");
/*SPC(4518)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_GT_EQ_2(_TPPNAME_GT_EQ_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_GT_EQ_2(_currn ,_AS0IsUnnamed)
_TPPNAME_GT_EQ_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_GT_EQ_2(_TPPNAME_GT_EQ_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_GT_EQ_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_GT_EQ_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_GT_2(_TPPNAME_GT_2 _currn)
#else
void _VS1NAME_GT_2(_currn )
_TPPNAME_GT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("is_gt");
/*SPC(4514)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_GT_2(_TPPNAME_GT_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_GT_2(_currn ,_AS0IsUnnamed)
_TPPNAME_GT_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_GT_2(_TPPNAME_GT_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_GT_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_GT_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_LT_EQ_2(_TPPNAME_LT_EQ_2 _currn)
#else
void _VS1NAME_LT_EQ_2(_currn )
_TPPNAME_LT_EQ_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("is_leq");
/*SPC(4510)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_LT_EQ_2(_TPPNAME_LT_EQ_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_LT_EQ_2(_currn ,_AS0IsUnnamed)
_TPPNAME_LT_EQ_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_LT_EQ_2(_TPPNAME_LT_EQ_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_LT_EQ_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_LT_EQ_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_LT_2(_TPPNAME_LT_2 _currn)
#else
void _VS1NAME_LT_2(_currn )
_TPPNAME_LT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("is_lt");
/*SPC(4506)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_LT_2(_TPPNAME_LT_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_LT_2(_currn ,_AS0IsUnnamed)
_TPPNAME_LT_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_LT_2(_TPPNAME_LT_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_LT_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_LT_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_EQ_2(_TPPNAME_EQ_2 _currn)
#else
void _VS1NAME_EQ_2(_currn )
_TPPNAME_EQ_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("is_equal");
/*SPC(4502)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_EQ_2(_TPPNAME_EQ_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_EQ_2(_currn ,_AS0IsUnnamed)
_TPPNAME_EQ_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_EQ_2(_TPPNAME_EQ_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_EQ_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_EQ_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_QUESTION_2(_TPPNAME_QUESTION_2 _currn)
#else
void _VS1NAME_QUESTION_2(_currn )
_TPPNAME_QUESTION_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("question");
/*SPC(4498)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_QUESTION_2(_TPPNAME_QUESTION_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_QUESTION_2(_currn ,_AS0IsUnnamed)
_TPPNAME_QUESTION_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_QUESTION_2(_TPPNAME_QUESTION_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_QUESTION_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_QUESTION_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_GRAVE_2(_TPPNAME_GRAVE_2 _currn)
#else
void _VS1NAME_GRAVE_2(_currn )
_TPPNAME_GRAVE_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("grave");
/*SPC(4494)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_GRAVE_2(_TPPNAME_GRAVE_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_GRAVE_2(_currn ,_AS0IsUnnamed)
_TPPNAME_GRAVE_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_GRAVE_2(_TPPNAME_GRAVE_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_GRAVE_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_GRAVE_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_TILDE_2(_TPPNAME_TILDE_2 _currn)
#else
void _VS1NAME_TILDE_2(_currn )
_TPPNAME_TILDE_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("tilde");
/*SPC(4490)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_TILDE_2(_TPPNAME_TILDE_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_TILDE_2(_currn ,_AS0IsUnnamed)
_TPPNAME_TILDE_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_TILDE_2(_TPPNAME_TILDE_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_TILDE_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_TILDE_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_STROKE_2(_TPPNAME_STROKE_2 _currn)
#else
void _VS1NAME_STROKE_2(_currn )
_TPPNAME_STROKE_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("stroke");
/*SPC(4486)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_STROKE_2(_TPPNAME_STROKE_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_STROKE_2(_currn ,_AS0IsUnnamed)
_TPPNAME_STROKE_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_STROKE_2(_TPPNAME_STROKE_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_STROKE_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_STROKE_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_BACKSLASH_2(_TPPNAME_BACKSLASH_2 _currn)
#else
void _VS1NAME_BACKSLASH_2(_currn )
_TPPNAME_BACKSLASH_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("backslash");
/*SPC(4482)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_BACKSLASH_2(_TPPNAME_BACKSLASH_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_BACKSLASH_2(_currn ,_AS0IsUnnamed)
_TPPNAME_BACKSLASH_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_BACKSLASH_2(_TPPNAME_BACKSLASH_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_BACKSLASH_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_BACKSLASH_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_STR_IN_2(_TPPNAME_STR_IN_2 _currn)
#else
void _VS1NAME_STR_IN_2(_currn )
_TPPNAME_STR_IN_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("str_in");
/*SPC(4478)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_STR_IN_2(_TPPNAME_STR_IN_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_STR_IN_2(_currn ,_AS0IsUnnamed)
_TPPNAME_STR_IN_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_STR_IN_2(_TPPNAME_STR_IN_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_STR_IN_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_STR_IN_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_STR_OUT_2(_TPPNAME_STR_OUT_2 _currn)
#else
void _VS1NAME_STR_OUT_2(_currn )
_TPPNAME_STR_OUT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=MakeName("str_out");
/*SPC(4474)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_STR_OUT_2(_TPPNAME_STR_OUT_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_STR_OUT_2(_currn ,_AS0IsUnnamed)
_TPPNAME_STR_OUT_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_STR_OUT_2(_TPPNAME_STR_OUT_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_STR_OUT_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_STR_OUT_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_EMPTY_2(_TPPNAME_EMPTY_2 _currn)
#else
void _VS1NAME_EMPTY_2(_currn )
_TPPNAME_EMPTY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=0;
/*SPC(4419)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_EMPTY_2(_TPPNAME_EMPTY_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_EMPTY_2(_currn ,_AS0IsUnnamed)
_TPPNAME_EMPTY_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=1;
/*SPC(5840)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=
(((* _IG_incl94)
) ? (NoKey
) : (
((GT(_AVName_2_AttributeIndex, LengthDefTableKeyList(GetPublicAttrList(_AVName_2_SemScopeKey, NULLDefTableKeyList)))
) ? (
(message(ERROR, CatStrStr("no corresponding attribute found in type: ", NameOfType(GetType(_AVName_2_SemScopeKey, NoType))), 0, (&( _currn->_AT_pos))), NoKey)

) : (
((GT(_AVName_2_AttributeIndex, 0)
) ? (IthElemDefTableKeyList(GetPublicAttrList(_AVName_2_SemScopeKey, NULLDefTableKeyList), _AVName_2_AttributeIndex)
) : (NoKey))
))
))
;
/*SPC(4436)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_EMPTY_2(_TPPNAME_EMPTY_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_EMPTY_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_EMPTY_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_OBJ_2(_TPPNAME_OBJ_2 _currn)
#else
void _VS1NAME_OBJ_2(_currn )
_TPPNAME_OBJ_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATSym=_currn->_desc1->_ATSym;
/*SPC(4456)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_OBJ_2(_TPPNAME_OBJ_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_OBJ_2(_currn ,_AS0IsUnnamed)
_TPPNAME_OBJ_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=
((EQ(_AVName_2_SemScopeKey, NoKey)
) ? (BindingInEnv((* _IG_incl2), _currn->_desc1->_ATSym)
) : (BindingInScope(_AVName_2_SemScope, _currn->_desc1->_ATSym)))
;
/*SPC(4457)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_OBJ_2(_TPPNAME_OBJ_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_OBJ_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_OBJ_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=GetConstValue(_currn->_ATKey, NULLValue);
/*SPC(7095)*/
_AVName_2_out=
((EQ(_currn->_ATSym, MakeName("self"))
) ? (PTGIdent("0")
) : (PTGcilIdent(StringTable(GetUniqueName(_currn->_ATKey, _currn->_ATSym)))))
;
/*SPC(1885)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_LEFT_SQ_BRACKET_2(_TPPNAME_LEFT_SQ_BRACKET_2 _currn)
#else
void _VS1NAME_LEFT_SQ_BRACKET_2(_currn )
_TPPNAME_LEFT_SQ_BRACKET_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATSym=
((_AVName_2_Is_aget
) ? (MakeName("aget")
) : (MakeName("aset")))
;
/*SPC(4467)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAME_LEFT_SQ_BRACKET_2(_TPPNAME_LEFT_SQ_BRACKET_2 _currn,int* _AS0IsUnnamed)
#else
void _VS2NAME_LEFT_SQ_BRACKET_2(_currn ,_AS0IsUnnamed)
_TPPNAME_LEFT_SQ_BRACKET_2 _currn;
int* _AS0IsUnnamed;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0IsUnnamed)=0;
/*SPC(5836)*/
_AVName_2_Bind=BindingInScope(_AVName_2_SemScope, _currn->_ATSym);
/*SPC(12925)*/
_currn->_ATKey=KeyOf(_AVName_2_Bind);
/*SPC(12929)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3NAME_LEFT_SQ_BRACKET_2(_TPPNAME_LEFT_SQ_BRACKET_2 _currn,PTGNode* _AS0des_out,int* _AS0IsUnnamed)
#else
void _VS3NAME_LEFT_SQ_BRACKET_2(_currn ,_AS0des_out,_AS0IsUnnamed)
_TPPNAME_LEFT_SQ_BRACKET_2 _currn;
int* _AS0IsUnnamed;
PTGNode* _AS0des_out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVName_2_Val=NULLValue;
/*SPC(7054)*/
_AVName_2_out=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(1892)*/
(* _AS0des_out)=
((NOT(_currn->_ATKey)
) ? (PTGNULL
) : (
((InIS(inK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((AND(EQ(_currn->_ATSym, MakeName("self")), IsMonoValueType(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilPushSelf()
) : (PTGcilPushArgumentAddress(_AVName_2_out)))

) : (
((InIS(locVarK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushLocalAddress(_AVName_2_out)
) : (
((InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (
((InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS))
) ? (PTGcilPushStaticFieldAddress(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(
((_AVName_2_IsAggregate
) ? (PTGcilDup()
) : (PTGcilPushSelf()))
, PTGcilPushFieldAddress(GetCLRFieldRef(_currn->_ATKey)))))

) : (PTGNULL))
))
))
))
;
/*SPC(952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_AND_2(_TPPEXPRESSION_AND_2 _currn)
#else
void _VS1EXPRESSION_AND_2(_currn )
_TPPEXPRESSION_AND_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_AND_2(_TPPEXPRESSION_AND_2 _currn)
#else
void _VS2EXPRESSION_AND_2(_currn )
_TPPEXPRESSION_AND_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVExpression_2_is_array_aggregate=0;
/*SPC(11085)*/
_currn->_desc1->_ATTypeEst=NoType;
/*SPC(11084)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVExpression_2_is_array_aggregate=0;
/*SPC(11085)*/
_currn->_desc2->_ATTypeEst=NoType;
/*SPC(11084)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATVal=NULLValue;
/*SPC(7050)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4EXPRESSION_AND_2(_TPPEXPRESSION_AND_2 _currn,int* _AS0IsExplicitCoercion)
#else
void _VS4EXPRESSION_AND_2(_currn ,_AS0IsExplicitCoercion)
_TPPEXPRESSION_AND_2 _currn;
int* _AS0IsExplicitCoercion;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_AS1IsExplicitCoercion=0;
/*SPC(10797)*/
_currn->_desc1->_ATIsArg=0;
/*SPC(10994)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)));
_AS2IsExplicitCoercion=0;
/*SPC(10797)*/
_currn->_desc2->_ATIsArg=0;
/*SPC(10994)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsExplicitCoercion)));
_currn->_ATType=(* _IG_incl84);
/*SPC(10870)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5EXPRESSION_AND_2(_TPPEXPRESSION_AND_2 _currn,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS5EXPRESSION_AND_2(_currn ,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_AND_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsExplicitCoercion)),(&( _AS2_const81)));
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(605)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6EXPRESSION_AND_2(_TPPEXPRESSION_AND_2 _currn,PTGNode* _AS0out,int* _AS0UsedAsQualifier,int* _AS0StackBefore,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS6EXPRESSION_AND_2(_currn ,_AS0out,_AS0UsedAsQualifier,_AS0StackBefore,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_AND_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;
int* _AS0StackBefore;
int* _AS0UsedAsQualifier;
PTGNode* _AS0out;

#endif
{
int* _IL_incl83;
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl83=_IG_incl83;_IG_incl83= &(_currn->_ATStackHeight);

if (NOT(IsConform(_currn->_desc1->_ATType, (* _IG_incl97)))) {
message(ERROR, CatStrStr(NameOfType(_currn->_desc1->_ATType), " is not subtype of BOOL in 'and' expression"), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6162)*/

if (NOT(IsConform(_currn->_desc2->_ATType, (* _IG_incl97)))) {
message(ERROR, CatStrStr(NameOfType(_currn->_desc2->_ATType), " is not subtype of BOOL in 'and' expression"), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6166)*/
_AS1StackBefore=0;
/*SPC(1901)*/
_AS1UsedAsQualifier=0;
/*SPC(1779)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,int*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1UsedAsQualifier)),(&( _AS1StackBefore)),(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
_AS2StackBefore=1;
/*SPC(1913)*/
_AS2UsedAsQualifier=0;
/*SPC(1779)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,int*,DefTableKeyList*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2out)),(&( _AS2UsedAsQualifier)),(&( _AS2StackBefore)),(&( _AS2IsExplicitCoercion)),(&( _AS2_const81)));
_AVExpression_2_IsStar=0;
/*SPC(5906)*/
_currn->_ATStackHeight=ADD((* _AS0StackBefore), 1);
/*SPC(2021)*/
_AVExpression_2_RealType=_currn->_ATType;
/*SPC(10589)*/
_AVExpression_2_MergeLabel=NewUniqueLabel();
/*SPC(607)*/
_AVExpression_2_BranchLabel=NewUniqueLabel();
/*SPC(606)*/
(* _AS0out)=PTGNewLineSeq(PTGNewLineSeq(_AS1out, PTGcilSatk2CLR(PTGIdent("valuetype 'BOOL'"), PTGIdent("bool"))), PTGcilFallTrue(StringTable(_AVExpression_2_BranchLabel), _AS2out, StringTable(_AVExpression_2_MergeLabel), PTGcilBoolConstant("0")));
/*SPC(608)*/
_currn->_AT_const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _currn->_desc2->_AT_const82);
/*SPC(605)*/
_currn->_AT_const83=MAX(MAX(_currn->_desc1->_AT_const83, IDENTICAL(_currn->_desc1->_ATStackHeight)), MAX(_currn->_desc2->_AT_const83, IDENTICAL(_currn->_desc2->_ATStackHeight)));
/*SPC(605)*/
_currn->_AT_const101=PTGCommaSeq(_currn->_desc1->_AT_const101, _currn->_desc2->_AT_const101);
/*SPC(605)*/
_AVExpression_2_qualifier_out=
(((* _AS0UsedAsQualifier)
) ? (PTGNewLineSeq((* _AS0out), 
((IsMonoValueType(_AVExpression_2_RealType)
) ? (PTGcilValueToAddress(GetCLRType(_AVExpression_2_RealType))
) : (PTGNULL))
)
) : (PTGNULL))
;
/*SPC(1781)*/
_IG_incl83=_IL_incl83;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_OR_2(_TPPEXPRESSION_OR_2 _currn)
#else
void _VS1EXPRESSION_OR_2(_currn )
_TPPEXPRESSION_OR_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_OR_2(_TPPEXPRESSION_OR_2 _currn)
#else
void _VS2EXPRESSION_OR_2(_currn )
_TPPEXPRESSION_OR_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVExpression_2_is_array_aggregate=0;
/*SPC(11085)*/
_currn->_desc1->_ATTypeEst=NoType;
/*SPC(11084)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVExpression_2_is_array_aggregate=0;
/*SPC(11085)*/
_currn->_desc2->_ATTypeEst=NoType;
/*SPC(11084)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATVal=NULLValue;
/*SPC(7050)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4EXPRESSION_OR_2(_TPPEXPRESSION_OR_2 _currn,int* _AS0IsExplicitCoercion)
#else
void _VS4EXPRESSION_OR_2(_currn ,_AS0IsExplicitCoercion)
_TPPEXPRESSION_OR_2 _currn;
int* _AS0IsExplicitCoercion;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_AS1IsExplicitCoercion=0;
/*SPC(10797)*/
_currn->_desc1->_ATIsArg=0;
/*SPC(10994)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)));
_AS2IsExplicitCoercion=0;
/*SPC(10797)*/
_currn->_desc2->_ATIsArg=0;
/*SPC(10994)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsExplicitCoercion)));
_currn->_ATType=(* _IG_incl84);
/*SPC(10866)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5EXPRESSION_OR_2(_TPPEXPRESSION_OR_2 _currn,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS5EXPRESSION_OR_2(_currn ,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_OR_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsExplicitCoercion)),(&( _AS2_const81)));
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(591)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6EXPRESSION_OR_2(_TPPEXPRESSION_OR_2 _currn,PTGNode* _AS0out,int* _AS0UsedAsQualifier,int* _AS0StackBefore,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS6EXPRESSION_OR_2(_currn ,_AS0out,_AS0UsedAsQualifier,_AS0StackBefore,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_OR_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;
int* _AS0StackBefore;
int* _AS0UsedAsQualifier;
PTGNode* _AS0out;

#endif
{
int* _IL_incl83;
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl83=_IG_incl83;_IG_incl83= &(_currn->_ATStackHeight);

if (NOT(IsConform(_currn->_desc1->_ATType, (* _IG_incl97)))) {
message(ERROR, CatStrStr(NameOfType(_currn->_desc1->_ATType), " is not subtype of BOOL in 'or' expression"), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6151)*/

if (NOT(IsConform(_currn->_desc2->_ATType, (* _IG_incl97)))) {
message(ERROR, CatStrStr(NameOfType(_currn->_desc2->_ATType), " is not subtype of BOOL in 'or' expression"), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6155)*/
_AS1StackBefore=0;
/*SPC(1901)*/
_AS1UsedAsQualifier=0;
/*SPC(1779)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,int*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1UsedAsQualifier)),(&( _AS1StackBefore)),(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
_AS2StackBefore=1;
/*SPC(1909)*/
_AS2UsedAsQualifier=0;
/*SPC(1779)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,int*,DefTableKeyList*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2out)),(&( _AS2UsedAsQualifier)),(&( _AS2StackBefore)),(&( _AS2IsExplicitCoercion)),(&( _AS2_const81)));
_AVExpression_2_IsStar=0;
/*SPC(5906)*/
_currn->_ATStackHeight=ADD((* _AS0StackBefore), 1);
/*SPC(2017)*/
_AVExpression_2_RealType=_currn->_ATType;
/*SPC(10589)*/
_AVExpression_2_MergeLabel=NewUniqueLabel();
/*SPC(593)*/
_AVExpression_2_BranchLabel=NewUniqueLabel();
/*SPC(592)*/
(* _AS0out)=PTGNewLineSeq(PTGNewLineSeq(_AS1out, PTGcilSatk2CLR(PTGIdent("valuetype 'BOOL'"), PTGIdent("bool"))), PTGcilFallFalse(StringTable(_AVExpression_2_BranchLabel), _AS2out, StringTable(_AVExpression_2_MergeLabel), PTGcilBoolConstant("1")));
/*SPC(594)*/
_currn->_AT_const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _currn->_desc2->_AT_const82);
/*SPC(591)*/
_currn->_AT_const83=MAX(MAX(_currn->_desc1->_AT_const83, IDENTICAL(_currn->_desc1->_ATStackHeight)), MAX(_currn->_desc2->_AT_const83, IDENTICAL(_currn->_desc2->_ATStackHeight)));
/*SPC(591)*/
_currn->_AT_const101=PTGCommaSeq(_currn->_desc1->_AT_const101, _currn->_desc2->_AT_const101);
/*SPC(591)*/
_AVExpression_2_qualifier_out=
(((* _AS0UsedAsQualifier)
) ? (PTGNewLineSeq((* _AS0out), 
((IsMonoValueType(_AVExpression_2_RealType)
) ? (PTGcilValueToAddress(GetCLRType(_AVExpression_2_RealType))
) : (PTGNULL))
)
) : (PTGNULL))
;
/*SPC(1781)*/
_IG_incl83=_IL_incl83;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_STREAM_2(_TPPEXPRESSION_STREAM_2 _currn)
#else
void _VS1EXPRESSION_STREAM_2(_currn )
_TPPEXPRESSION_STREAM_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_STREAM_2(_TPPEXPRESSION_STREAM_2 _currn)
#else
void _VS2EXPRESSION_STREAM_2(_currn )
_TPPEXPRESSION_STREAM_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATVal=NULLValue;
/*SPC(7050)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4EXPRESSION_STREAM_2(_TPPEXPRESSION_STREAM_2 _currn,int* _AS0IsExplicitCoercion)
#else
void _VS4EXPRESSION_STREAM_2(_currn ,_AS0IsExplicitCoercion)
_TPPEXPRESSION_STREAM_2 _currn;
int* _AS0IsExplicitCoercion;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATType=_currn->_desc1->_ATType;
/*SPC(10847)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5EXPRESSION_STREAM_2(_TPPEXPRESSION_STREAM_2 _currn,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS5EXPRESSION_STREAM_2(_currn ,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_STREAM_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const81)=AppDefTableKeyList(_AVDirect_stream_call_2__const81, SingleDefTableKeyList(_AVDirect_stream_call_2_Key));
/*SPC(1162)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6EXPRESSION_STREAM_2(_TPPEXPRESSION_STREAM_2 _currn,PTGNode* _AS0out,int* _AS0UsedAsQualifier,int* _AS0StackBefore,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS6EXPRESSION_STREAM_2(_currn ,_AS0out,_AS0UsedAsQualifier,_AS0StackBefore,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_STREAM_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;
int* _AS0StackBefore;
int* _AS0UsedAsQualifier;
PTGNode* _AS0out;

#endif
{
int* _IL_incl83;

_VisitVarDecl()
_VisitEntry();
_IL_incl83=_IG_incl83;_IG_incl83= &(_currn->_ATStackHeight);
_currn->_ATStackHeight=ADD((* _AS0StackBefore), 
((EQ(_currn->_desc1->_ATType, NoType)
) ? (0
) : (1))
);
/*SPC(2012)*/
_currn->_desc1->_ATStackBefore=(* _AS0StackBefore);
/*SPC(1968)*/
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_AT_const82=PTGCommaSeq(_AVDirect_stream_call_2__const82, IDENTICAL(_AVDirect_stream_call_2_ValHomeNode));
/*SPC(1162)*/
_currn->_AT_const83=_AVDirect_stream_call_2__const83;
/*SPC(1162)*/
_currn->_AT_const101=PTGCommaSeq(_AVDirect_stream_call_2__const101, IDENTICAL(_AVDirect_stream_call_2_ValHomeNode));
/*SPC(1162)*/
_AVExpression_2_IsStar=0;
/*SPC(5906)*/
_AVExpression_2_RealType=_currn->_ATType;
/*SPC(10589)*/
_AVExpression_2_MergeLabel=0;
/*SPC(588)*/
_AVExpression_2_BranchLabel=0;
/*SPC(587)*/
(* _AS0out)=PTGNewLineSeq(_AVDirect_stream_call_2_out, 
((IsMonoValueType(_currn->_desc1->_ATType)
) ? (PTGcilPushObject(GetCLRType(_currn->_desc1->_ATType))
) : (PTGNULL))
);
/*SPC(1163)*/
_AVExpression_2_qualifier_out=
(((* _AS0UsedAsQualifier)
) ? (PTGNewLineSeq((* _AS0out), 
((IsMonoValueType(_AVExpression_2_RealType)
) ? (PTGcilValueToAddress(GetCLRType(_AVExpression_2_RealType))
) : (PTGNULL))
)
) : (PTGNULL))
;
/*SPC(1781)*/
_IG_incl83=_IL_incl83;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_METH_2(_TPPEXPRESSION_METH_2 _currn)
#else
void _VS1EXPRESSION_METH_2(_currn )
_TPPEXPRESSION_METH_2 _currn;

#endif
{
STPtr _AS1TypeEst;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_METH_2(_TPPEXPRESSION_METH_2 _currn)
#else
void _VS2EXPRESSION_METH_2(_currn )
_TPPEXPRESSION_METH_2 _currn;

#endif
{
STPtr _AS1TypeEst;

_VisitVarDecl()
_VisitEntry();
_AVStd_method_call_2_Is_aget=0;
/*SPC(4414)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATVal=_currn->_desc1->_ATVal;
/*SPC(7086)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4EXPRESSION_METH_2(_TPPEXPRESSION_METH_2 _currn,int* _AS0IsExplicitCoercion)
#else
void _VS4EXPRESSION_METH_2(_currn ,_AS0IsExplicitCoercion)
_TPPEXPRESSION_METH_2 _currn;
int* _AS0IsExplicitCoercion;

#endif
{
STPtr _AS1TypeEst;

_VisitVarDecl()
_VisitEntry();
_AS1TypeEst=_currn->_ATTypeEst;
/*SPC(11086)*/
_currn->_desc1->_ATIsArg=_currn->_ATIsArg;
/*SPC(11002)*/
(*(_CALL_VS_((NODEPTR ,STPtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1TypeEst)));
_currn->_ATType=
((AND(EQ(_currn->_desc1->_ATType, (* _IG_incl44)), NOT(OR(EQ(_currn->_ATTypeEst, (* _IG_incl44)), _currn->_ATIsArg)))
) ? (CoerceValue(_currn->_desc1->_ATVal, _currn->_ATTypeEst, (* _AS0IsExplicitCoercion), (&( _currn->_AT_pos)), (* _IG_incl23))
) : (_currn->_desc1->_ATType))
;
/*SPC(10834)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5EXPRESSION_METH_2(_TPPEXPRESSION_METH_2 _currn,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS5EXPRESSION_METH_2(_currn ,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_METH_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;

#endif
{
STPtr _AS1TypeEst;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,STPtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1TypeEst)));
(* _AS0_const81)=_AVStd_method_call_2__const81;
/*SPC(1147)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6EXPRESSION_METH_2(_TPPEXPRESSION_METH_2 _currn,PTGNode* _AS0out,int* _AS0UsedAsQualifier,int* _AS0StackBefore,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS6EXPRESSION_METH_2(_currn ,_AS0out,_AS0UsedAsQualifier,_AS0StackBefore,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_METH_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;
int* _AS0StackBefore;
int* _AS0UsedAsQualifier;
PTGNode* _AS0out;

#endif
{
int* _IL_incl83;
STPtr _AS1TypeEst;

_VisitVarDecl()
_VisitEntry();
_IL_incl83=_IG_incl83;_IG_incl83= &(_currn->_ATStackHeight);
_currn->_desc1->_ATStackBefore=(* _AS0StackBefore);
/*SPC(1964)*/
(*(_CALL_VS_((NODEPTR ,STPtr*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1TypeEst)));
_AVExpression_2_IsStar=0;
/*SPC(5906)*/
_currn->_ATStackHeight=ADD((* _AS0StackBefore), 
((EQ(_currn->_desc1->_ATCalled, NoKey)
) ? (1
) : (
((EQ(_AVStd_method_call_2_RealType, NoType)
) ? (0
) : (1))
))
);
/*SPC(2002)*/
_AVExpression_2_RealType=
((AND(AND(EQ(_currn->_desc1->_ATType, (* _IG_incl44)), _currn->_ATIsArg), NOT(EQ((* _IG_incl99), NoType)))
) ? ((* _IG_incl99)
) : (_currn->_ATType))
;
/*SPC(10602)*/
_AVExpression_2_MergeLabel=0;
/*SPC(588)*/
_AVExpression_2_BranchLabel=0;
/*SPC(587)*/
(* _AS0out)=
((AND(EQ(_currn->_desc1->_ATType, (* _IG_incl44)), NOT(EQ(_AVExpression_2_RealType, (* _IG_incl44))))
) ? (GetValueCode(_AVExpression_2_RealType, _currn->_desc1->_ATVal, (&( _currn->_AT_pos)), (* _IG_incl23))
) : (PTGNewLineSeq(_AVStd_method_call_2_out, 
((OR(IsMonoValueType(_AVStd_method_call_2_RealType), NOT(_currn->_desc1->_ATCalled))
) ? (PTGcilPushObject(GetCLRType(_AVExpression_2_RealType))
) : (PTGNULL))
)))
;
/*SPC(1148)*/
_currn->_AT_const82=_AVStd_method_call_2__const82;
/*SPC(1147)*/
_currn->_AT_const83=_AVStd_method_call_2__const83;
/*SPC(1147)*/
_currn->_AT_const101=_AVStd_method_call_2__const101;
/*SPC(1147)*/
_AVExpression_2_qualifier_out=
(((* _AS0UsedAsQualifier)
) ? (PTGNewLineSeq(_AVStd_method_call_2_out, 
((AND(EQ(_currn->_desc1->_ATCalled, NoKey), NOT(IsMonoValueType(_AVStd_method_call_2_RealType)))
) ? (PTGcilPushObject(GetCLRType(_AVStd_method_call_2_RealType))
) : (PTGNULL))
)
) : (PTGNULL))
;
/*SPC(1791)*/
_IG_incl83=_IL_incl83;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_COERCION_2(_TPPEXPRESSION_COERCION_2 _currn)
#else
void _VS1EXPRESSION_COERCION_2(_currn )
_TPPEXPRESSION_COERCION_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_COERCION_2(_TPPEXPRESSION_COERCION_2 _currn)
#else
void _VS2EXPRESSION_COERCION_2(_currn )
_TPPEXPRESSION_COERCION_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATVal=NULLValue;
/*SPC(7050)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4EXPRESSION_COERCION_2(_TPPEXPRESSION_COERCION_2 _currn,int* _AS0IsExplicitCoercion)
#else
void _VS4EXPRESSION_COERCION_2(_currn ,_AS0IsExplicitCoercion)
_TPPEXPRESSION_COERCION_2 _currn;
int* _AS0IsExplicitCoercion;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATType=_currn->_desc1->_ATType;
/*SPC(10830)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5EXPRESSION_COERCION_2(_TPPEXPRESSION_COERCION_2 _currn,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS5EXPRESSION_COERCION_2(_currn ,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_COERCION_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const81)=_AVCoercion_2__const81;
/*SPC(1126)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6EXPRESSION_COERCION_2(_TPPEXPRESSION_COERCION_2 _currn,PTGNode* _AS0out,int* _AS0UsedAsQualifier,int* _AS0StackBefore,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS6EXPRESSION_COERCION_2(_currn ,_AS0out,_AS0UsedAsQualifier,_AS0StackBefore,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_COERCION_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;
int* _AS0StackBefore;
int* _AS0UsedAsQualifier;
PTGNode* _AS0out;

#endif
{
int* _IL_incl83;

_VisitVarDecl()
_VisitEntry();
_IL_incl83=_IG_incl83;_IG_incl83= &(_currn->_ATStackHeight);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVExpression_2_IsStar=0;
/*SPC(5906)*/
_currn->_ATStackHeight=ADD((* _AS0StackBefore), 1);
/*SPC(1998)*/
_AVExpression_2_RealType=_currn->_ATType;
/*SPC(10589)*/
_AVExpression_2_MergeLabel=0;
/*SPC(588)*/
_AVExpression_2_BranchLabel=0;
/*SPC(587)*/
(* _AS0out)=_AVCoercion_2_out;
/*SPC(1127)*/
_currn->_AT_const82=_AVCoercion_2__const82;
/*SPC(1126)*/
_currn->_AT_const83=_AVCoercion_2__const83;
/*SPC(1126)*/
_currn->_AT_const101=_AVCoercion_2__const101;
/*SPC(1126)*/
_AVExpression_2_qualifier_out=
(((* _AS0UsedAsQualifier)
) ? (PTGNewLineSeq((* _AS0out), 
((IsMonoValueType(_AVExpression_2_RealType)
) ? (PTGcilValueToAddress(GetCLRType(_AVExpression_2_RealType))
) : (PTGNULL))
)
) : (PTGNULL))
;
/*SPC(1781)*/
_IG_incl83=_IL_incl83;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_VALUE_2(_TPPEXPRESSION_VALUE_2 _currn)
#else
void _VS1EXPRESSION_VALUE_2(_currn )
_TPPEXPRESSION_VALUE_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_VALUE_2(_TPPEXPRESSION_VALUE_2 _currn)
#else
void _VS2EXPRESSION_VALUE_2(_currn )
_TPPEXPRESSION_VALUE_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATVal=_currn->_desc1->_ATVal;
/*SPC(7082)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4EXPRESSION_VALUE_2(_TPPEXPRESSION_VALUE_2 _currn,int* _AS0IsExplicitCoercion)
#else
void _VS4EXPRESSION_VALUE_2(_currn ,_AS0IsExplicitCoercion)
_TPPEXPRESSION_VALUE_2 _currn;
int* _AS0IsExplicitCoercion;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATType=
((AND(EQ(_currn->_desc1->_ATType, (* _IG_incl44)), NOT(OR(EQ(_currn->_ATTypeEst, (* _IG_incl44)), _currn->_ATIsArg)))
) ? (CoerceValue(_currn->_desc1->_ATVal, _currn->_ATTypeEst, (* _AS0IsExplicitCoercion), (&( _currn->_AT_pos)), (* _IG_incl23))
) : (_currn->_desc1->_ATType))
;
/*SPC(10817)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5EXPRESSION_VALUE_2(_TPPEXPRESSION_VALUE_2 _currn,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS5EXPRESSION_VALUE_2(_currn ,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_VALUE_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const81)=NullDefTableKeyList();
/*SPC(1138)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6EXPRESSION_VALUE_2(_TPPEXPRESSION_VALUE_2 _currn,PTGNode* _AS0out,int* _AS0UsedAsQualifier,int* _AS0StackBefore,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS6EXPRESSION_VALUE_2(_currn ,_AS0out,_AS0UsedAsQualifier,_AS0StackBefore,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_VALUE_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;
int* _AS0StackBefore;
int* _AS0UsedAsQualifier;
PTGNode* _AS0out;

#endif
{
int* _IL_incl83;

_VisitVarDecl()
_VisitEntry();
_IL_incl83=_IG_incl83;_IG_incl83= &(_currn->_ATStackHeight);
_AVExpression_2_IsStar=0;
/*SPC(5906)*/
_currn->_ATStackHeight=ADD((* _AS0StackBefore), 1);
/*SPC(1994)*/
_AVExpression_2_RealType=
((AND(AND(EQ(_currn->_desc1->_ATType, (* _IG_incl44)), _currn->_ATIsArg), NOT(EQ((* _IG_incl99), NoType)))
) ? ((* _IG_incl99)
) : (_currn->_ATType))
;
/*SPC(10593)*/
_AVExpression_2_MergeLabel=0;
/*SPC(588)*/
_AVExpression_2_BranchLabel=0;
/*SPC(587)*/
(* _AS0out)=
((AND(EQ(_currn->_desc1->_ATType, (* _IG_incl44)), NOT(EQ(_AVExpression_2_RealType, (* _IG_incl44))))
) ? (GetValueCode(_AVExpression_2_RealType, _currn->_desc1->_ATVal, (&( _currn->_AT_pos)), (* _IG_incl23))
) : (_currn->_desc1->_ATout))
;
/*SPC(1139)*/
_currn->_AT_const82=PTGNull();
/*SPC(1138)*/
_currn->_AT_const83=ONE();
/*SPC(1138)*/
_currn->_AT_const101=PTGNull();
/*SPC(1138)*/
_AVExpression_2_qualifier_out=
(((* _AS0UsedAsQualifier)
) ? (PTGNewLineSeq((* _AS0out), 
((IsMonoValueType(_AVExpression_2_RealType)
) ? (PTGcilValueToAddress(GetCLRType(_AVExpression_2_RealType))
) : (PTGNULL))
)
) : (PTGNULL))
;
/*SPC(1781)*/
_IG_incl83=_IL_incl83;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_BOUND_2(_TPPEXPRESSION_BOUND_2 _currn)
#else
void _VS1EXPRESSION_BOUND_2(_currn )
_TPPEXPRESSION_BOUND_2 _currn;

#endif
{
STPtr _AS1TypeEst;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_BOUND_2(_TPPEXPRESSION_BOUND_2 _currn)
#else
void _VS2EXPRESSION_BOUND_2(_currn )
_TPPEXPRESSION_BOUND_2 _currn;

#endif
{
STPtr _AS1TypeEst;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATVal=NULLValue;
/*SPC(7050)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4EXPRESSION_BOUND_2(_TPPEXPRESSION_BOUND_2 _currn,int* _AS0IsExplicitCoercion)
#else
void _VS4EXPRESSION_BOUND_2(_currn ,_AS0IsExplicitCoercion)
_TPPEXPRESSION_BOUND_2 _currn;
int* _AS0IsExplicitCoercion;

#endif
{
STPtr _AS1TypeEst;

_VisitVarDecl()
_VisitEntry();
_AS1TypeEst=_currn->_ATTypeEst;
/*SPC(11120)*/
(*(_CALL_VS_((NODEPTR ,STPtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1TypeEst)));
_currn->_ATType=_currn->_desc1->_ATType;
/*SPC(10813)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5EXPRESSION_BOUND_2(_TPPEXPRESSION_BOUND_2 _currn,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS5EXPRESSION_BOUND_2(_currn ,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_BOUND_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;

#endif
{
STPtr _AS1TypeEst;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,STPtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1TypeEst)));
(* _AS0_const81)=_AVBound_method_2__const81;
/*SPC(1122)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6EXPRESSION_BOUND_2(_TPPEXPRESSION_BOUND_2 _currn,PTGNode* _AS0out,int* _AS0UsedAsQualifier,int* _AS0StackBefore,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS6EXPRESSION_BOUND_2(_currn ,_AS0out,_AS0UsedAsQualifier,_AS0StackBefore,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_BOUND_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;
int* _AS0StackBefore;
int* _AS0UsedAsQualifier;
PTGNode* _AS0out;

#endif
{
int* _IL_incl83;
STPtr _AS1TypeEst;

_VisitVarDecl()
_VisitEntry();
_IL_incl83=_IG_incl83;_IG_incl83= &(_currn->_ATStackHeight);
_currn->_desc1->_ATStackBefore=(* _AS0StackBefore);
/*SPC(1980)*/
(*(_CALL_VS_((NODEPTR ,STPtr*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1TypeEst)));
_AVExpression_2_IsStar=0;
/*SPC(5906)*/
_currn->_ATStackHeight=0;
/*SPC(1900)*/
_AVExpression_2_RealType=_currn->_ATType;
/*SPC(10589)*/
_AVExpression_2_MergeLabel=0;
/*SPC(588)*/
_AVExpression_2_BranchLabel=0;
/*SPC(587)*/
(* _AS0out)=_AVBound_method_2_out;
/*SPC(1123)*/
_currn->_AT_const82=_AVBound_method_2__const82;
/*SPC(1122)*/
_currn->_AT_const83=_AVBound_method_2__const83;
/*SPC(1122)*/
_currn->_AT_const101=_AVBound_method_2__const101;
/*SPC(1122)*/
_AVExpression_2_qualifier_out=
(((* _AS0UsedAsQualifier)
) ? (PTGNewLineSeq((* _AS0out), 
((IsMonoValueType(_AVExpression_2_RealType)
) ? (PTGcilValueToAddress(GetCLRType(_AVExpression_2_RealType))
) : (PTGNULL))
)
) : (PTGNULL))
;
/*SPC(1781)*/
_IG_incl83=_IL_incl83;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_CONS_2(_TPPEXPRESSION_CONS_2 _currn)
#else
void _VS1EXPRESSION_CONS_2(_currn )
_TPPEXPRESSION_CONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_CONS_2(_TPPEXPRESSION_CONS_2 _currn)
#else
void _VS2EXPRESSION_CONS_2(_currn )
_TPPEXPRESSION_CONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATVal=NULLValue;
/*SPC(7050)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3EXPRESSION_CONS_2(_TPPEXPRESSION_CONS_2 _currn)
#else
void _VS3EXPRESSION_CONS_2(_currn )
_TPPEXPRESSION_CONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVType_constructor_2_TypeEst=_currn->_ATTypeEst;
/*SPC(11151)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVType_constructor_2_is_array_aggregate=_AVExpression_2_is_array_aggregate;
/*SPC(11143)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4EXPRESSION_CONS_2(_TPPEXPRESSION_CONS_2 _currn,int* _AS0IsExplicitCoercion)
#else
void _VS4EXPRESSION_CONS_2(_currn ,_AS0IsExplicitCoercion)
_TPPEXPRESSION_CONS_2 _currn;
int* _AS0IsExplicitCoercion;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATType=_currn->_desc1->_ATType;
/*SPC(10809)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5EXPRESSION_CONS_2(_TPPEXPRESSION_CONS_2 _currn,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS5EXPRESSION_CONS_2(_currn ,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_CONS_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const81)=_AVType_constructor_2__const81;
/*SPC(1130)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6EXPRESSION_CONS_2(_TPPEXPRESSION_CONS_2 _currn,PTGNode* _AS0out,int* _AS0UsedAsQualifier,int* _AS0StackBefore,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS6EXPRESSION_CONS_2(_currn ,_AS0out,_AS0UsedAsQualifier,_AS0StackBefore,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_CONS_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;
int* _AS0StackBefore;
int* _AS0UsedAsQualifier;
PTGNode* _AS0out;

#endif
{
int* _IL_incl83;

_VisitVarDecl()
_VisitEntry();
_IL_incl83=_IG_incl83;_IG_incl83= &(_currn->_ATStackHeight);
_currn->_desc1->_ATStackBefore=(* _AS0StackBefore);
/*SPC(1976)*/
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVExpression_2_IsStar=0;
/*SPC(5906)*/
_currn->_ATStackHeight=0;
/*SPC(1900)*/
_AVExpression_2_RealType=_currn->_ATType;
/*SPC(10589)*/
_AVExpression_2_MergeLabel=0;
/*SPC(588)*/
_AVExpression_2_BranchLabel=0;
/*SPC(587)*/
(* _AS0out)=PTGNewLineSeq(_AVType_constructor_2_init_code, 
((IsMonoValueType(_currn->_desc1->_ATType)
) ? (PTGcilPushObject(GetCLRType(_currn->_desc1->_ATType))
) : (PTGNULL))
);
/*SPC(1131)*/
_currn->_AT_const82=_currn->_desc1->_AT_const82;
/*SPC(1130)*/
_currn->_AT_const83=_currn->_desc1->_AT_const83;
/*SPC(1130)*/
_currn->_AT_const101=_currn->_desc1->_AT_const101;
/*SPC(1130)*/
_AVExpression_2_qualifier_out=
(((* _AS0UsedAsQualifier)
) ? (PTGNewLineSeq((* _AS0out), 
((IsMonoValueType(_AVExpression_2_RealType)
) ? (PTGcilValueToAddress(GetCLRType(_AVExpression_2_RealType))
) : (PTGNULL))
)
) : (PTGNULL))
;
/*SPC(1781)*/
_IG_incl83=_IL_incl83;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_STAR_2(_TPPEXPRESSION_STAR_2 _currn)
#else
void _VS2EXPRESSION_STAR_2(_currn )
_TPPEXPRESSION_STAR_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATVal=NULLValue;
/*SPC(7050)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4EXPRESSION_STAR_2(_TPPEXPRESSION_STAR_2 _currn,int* _AS0IsExplicitCoercion)
#else
void _VS4EXPRESSION_STAR_2(_currn ,_AS0IsExplicitCoercion)
_TPPEXPRESSION_STAR_2 _currn;
int* _AS0IsExplicitCoercion;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATType=NoType;
/*SPC(10805)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5EXPRESSION_STAR_2(_TPPEXPRESSION_STAR_2 _currn,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS5EXPRESSION_STAR_2(_currn ,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_STAR_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const81)=NullDefTableKeyList();
/*SPC(5909)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6EXPRESSION_STAR_2(_TPPEXPRESSION_STAR_2 _currn,PTGNode* _AS0out,int* _AS0UsedAsQualifier,int* _AS0StackBefore,int* _AS0IsExplicitCoercion,DefTableKeyList* _AS0_const81)
#else
void _VS6EXPRESSION_STAR_2(_currn ,_AS0out,_AS0UsedAsQualifier,_AS0StackBefore,_AS0IsExplicitCoercion,_AS0_const81)
_TPPEXPRESSION_STAR_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsExplicitCoercion;
int* _AS0StackBefore;
int* _AS0UsedAsQualifier;
PTGNode* _AS0out;

#endif
{
int* _IL_incl83;

_VisitVarDecl()
_VisitEntry();
_IL_incl83=_IG_incl83;_IG_incl83= &(_currn->_ATStackHeight);
_AVExpression_2_IsStar=1;
/*SPC(5910)*/
_currn->_ATStackHeight=0;
/*SPC(1900)*/
_AVExpression_2_RealType=_currn->_ATType;
/*SPC(10589)*/
_AVExpression_2_MergeLabel=0;
/*SPC(588)*/
_AVExpression_2_BranchLabel=0;
/*SPC(587)*/
(* _AS0out)=PTGNULL;
/*SPC(1119)*/
_currn->_AT_const82=PTGNull();
/*SPC(5909)*/
_currn->_AT_const83=ONE();
/*SPC(5909)*/
_currn->_AT_const101=PTGNull();
/*SPC(5909)*/
_AVExpression_2_qualifier_out=
(((* _AS0UsedAsQualifier)
) ? (PTGNewLineSeq((* _AS0out), 
((IsMonoValueType(_AVExpression_2_RealType)
) ? (PTGcilValueToAddress(GetCLRType(_AVExpression_2_RealType))
) : (PTGNULL))
)
) : (PTGNULL))
;
/*SPC(1781)*/
_IG_incl83=_IL_incl83;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1DESIGNATOR_QUAL_2(_TPPDESIGNATOR_QUAL_2 _currn)
#else
void _VS1DESIGNATOR_QUAL_2(_currn )
_TPPDESIGNATOR_QUAL_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2DESIGNATOR_QUAL_2(_TPPDESIGNATOR_QUAL_2 _currn,int* _AS0Is_aget,int* _AS0Op,CTValuePtr* _AS0Val)
#else
void _VS2DESIGNATOR_QUAL_2(_currn ,_AS0Is_aget,_AS0Op,_AS0Val)
_TPPDESIGNATOR_QUAL_2 _currn;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0Is_aget;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0Val)=NULLValue;
/*SPC(7051)*/
(* _AS0Op)=0;
/*SPC(7052)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3DESIGNATOR_QUAL_2(_TPPDESIGNATOR_QUAL_2 _currn,int* _AS0Is_aget,int* _AS0Op,CTValuePtr* _AS0Val)
#else
void _VS3DESIGNATOR_QUAL_2(_currn ,_AS0Is_aget,_AS0Op,_AS0Val)
_TPPDESIGNATOR_QUAL_2 _currn;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0Is_aget;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4DESIGNATOR_QUAL_2(_TPPDESIGNATOR_QUAL_2 _currn,int* _AS0Is_aget,int* _AS0Op,CTValuePtr* _AS0Val)
#else
void _VS4DESIGNATOR_QUAL_2(_currn ,_AS0Is_aget,_AS0Op,_AS0Val)
_TPPDESIGNATOR_QUAL_2 _currn;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0Is_aget;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATIsQualified=1;
/*SPC(10987)*/
_AVDesignator_2_CreatedKey=NoKey;
/*SPC(4291)*/
_currn->_ATIsQualifiedPolymorph=_AVQualification_2_IsQualifiedPolymorph;
/*SPC(10643)*/
_currn->_ATKey=_AVQualification_2_Key;
/*SPC(4277)*/

if (DEBUG_DESIGNATOR) {
PrintKey(_currn->_ATKey, (&( _currn->_AT_pos)), 1);

} else {
}
;
/*SPC(3874)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5DESIGNATOR_QUAL_2(_TPPDESIGNATOR_QUAL_2 _currn,int* _AS0Is_aget,int* _AS0Op,CTValuePtr* _AS0Val,DefTableKeyList* _AS0_const81)
#else
void _VS5DESIGNATOR_QUAL_2(_currn ,_AS0Is_aget,_AS0Op,_AS0Val,_AS0_const81)
_TPPDESIGNATOR_QUAL_2 _currn;
DefTableKeyList* _AS0_const81;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0Is_aget;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const81)=_AVQualification_2__const81;
/*SPC(1027)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6DESIGNATOR_QUAL_2(_TPPDESIGNATOR_QUAL_2 _currn,PTGNode* _AS0out,PTGNode* _AS0qualifier_out,PTGNode* _AS0ValHomeNode,int* _AS0StackHeight,int* _AS0StackBefore,int* _AS0Is_aget,int* _AS0IsSharedQualified,int* _AS0Op,CTValuePtr* _AS0Val,PTGNode* _AS0_const101,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS6DESIGNATOR_QUAL_2(_currn ,_AS0out,_AS0qualifier_out,_AS0ValHomeNode,_AS0StackHeight,_AS0StackBefore,_AS0Is_aget,_AS0IsSharedQualified,_AS0Op,_AS0Val,_AS0_const101,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPDESIGNATOR_QUAL_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const101;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0IsSharedQualified;
int* _AS0Is_aget;
int* _AS0StackBefore;
int* _AS0StackHeight;
PTGNode* _AS0ValHomeNode;
PTGNode* _AS0qualifier_out;
PTGNode* _AS0out;

#endif
{

_VisitVarDecl()
_VisitEntry();

if (AND(NOT(_AVDesignator_2_IsCall), AND(InIS(privateK, GetSemKindSet(_currn->_ATKey, NULLIS)), NOT(EQ((* _IG_incl66), GetFeatureOf(_currn->_ATKey, NoKey)))))) {
message(ERROR, "access to private feature outside of class", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6718)*/
_AVQualification_2_StackBefore=(* _AS0StackBefore);
/*SPC(1946)*/
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const82)=_AVQualification_2__const82;
/*SPC(1027)*/
(* _AS0_const83)=_AVQualification_2__const83;
/*SPC(1027)*/
(* _AS0_const101)=_AVQualification_2__const101;
/*SPC(1027)*/
(* _AS0IsSharedQualified)=_AVQualification_2_IsSharedQualified;
/*SPC(6892)*/
_AVDesignator_2_LabelVal=_AVQualification_2_LabelVal;
/*SPC(6188)*/
(* _AS0StackHeight)=ADD((* _AS0StackBefore), 1);
/*SPC(2025)*/
_AVDesignator_2_ValHome=0;
/*SPC(983)*/
(* _AS0qualifier_out)=_AVQualification_2_qualifier_out;
/*SPC(1029)*/
(* _AS0out)=_AVQualification_2_out;
/*SPC(1028)*/
(* _AS0ValHomeNode)=PTGNULL;
/*SPC(984)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1DESIGNATOR_METH_2(_TPPDESIGNATOR_METH_2 _currn)
#else
void _VS1DESIGNATOR_METH_2(_currn )
_TPPDESIGNATOR_METH_2 _currn;

#endif
{
STPtr _AS1TypeEst;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2DESIGNATOR_METH_2(_TPPDESIGNATOR_METH_2 _currn,int* _AS0Is_aget,int* _AS0Op,CTValuePtr* _AS0Val)
#else
void _VS2DESIGNATOR_METH_2(_currn ,_AS0Is_aget,_AS0Op,_AS0Val)
_TPPDESIGNATOR_METH_2 _currn;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0Is_aget;

#endif
{
STPtr _AS1TypeEst;

_VisitVarDecl()
_VisitEntry();
_AVStd_method_call_2_Is_aget=1;
/*SPC(4423)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0Val)=NULLValue;
/*SPC(7051)*/
(* _AS0Op)=0;
/*SPC(7052)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3DESIGNATOR_METH_2(_TPPDESIGNATOR_METH_2 _currn,int* _AS0Is_aget,int* _AS0Op,CTValuePtr* _AS0Val)
#else
void _VS3DESIGNATOR_METH_2(_currn ,_AS0Is_aget,_AS0Op,_AS0Val)
_TPPDESIGNATOR_METH_2 _currn;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0Is_aget;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4DESIGNATOR_METH_2(_TPPDESIGNATOR_METH_2 _currn,int* _AS0Is_aget,int* _AS0Op,CTValuePtr* _AS0Val)
#else
void _VS4DESIGNATOR_METH_2(_currn ,_AS0Is_aget,_AS0Op,_AS0Val)
_TPPDESIGNATOR_METH_2 _currn;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0Is_aget;

#endif
{
STPtr _AS1TypeEst;

_VisitVarDecl()
_VisitEntry();
_AS1TypeEst=NoType;
/*SPC(11093)*/
_currn->_desc1->_ATIsArg=0;
/*SPC(10995)*/
(*(_CALL_VS_((NODEPTR ,STPtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1TypeEst)));
_currn->_ATIsQualified=0;
/*SPC(10984)*/
_AVDesignator_2_CreatedKey=
((EQ(_currn->_desc1->_ATKey, NoKey)
) ? (KResetType(NewKey(), _currn->_desc1->_ATType)
) : (_currn->_desc1->_ATKey))
;
/*SPC(4296)*/
_currn->_ATIsQualifiedPolymorph=1;
/*SPC(10639)*/
_currn->_ATKey=
(ResetSemKindSet(_AVDesignator_2_CreatedKey, SingleIS(locVarK)), _AVDesignator_2_CreatedKey)
;
/*SPC(4300)*/

if (DEBUG_DESIGNATOR) {
PrintKey(_currn->_ATKey, (&( _currn->_AT_pos)), 1);

} else {
}
;
/*SPC(3874)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5DESIGNATOR_METH_2(_TPPDESIGNATOR_METH_2 _currn,int* _AS0Is_aget,int* _AS0Op,CTValuePtr* _AS0Val,DefTableKeyList* _AS0_const81)
#else
void _VS5DESIGNATOR_METH_2(_currn ,_AS0Is_aget,_AS0Op,_AS0Val,_AS0_const81)
_TPPDESIGNATOR_METH_2 _currn;
DefTableKeyList* _AS0_const81;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0Is_aget;

#endif
{
STPtr _AS1TypeEst;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,STPtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1TypeEst)));
(* _AS0_const81)=_AVStd_method_call_2__const81;
/*SPC(1001)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6DESIGNATOR_METH_2(_TPPDESIGNATOR_METH_2 _currn,PTGNode* _AS0out,PTGNode* _AS0qualifier_out,PTGNode* _AS0ValHomeNode,int* _AS0StackHeight,int* _AS0StackBefore,int* _AS0Is_aget,int* _AS0IsSharedQualified,int* _AS0Op,CTValuePtr* _AS0Val,PTGNode* _AS0_const101,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS6DESIGNATOR_METH_2(_currn ,_AS0out,_AS0qualifier_out,_AS0ValHomeNode,_AS0StackHeight,_AS0StackBefore,_AS0Is_aget,_AS0IsSharedQualified,_AS0Op,_AS0Val,_AS0_const101,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPDESIGNATOR_METH_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const101;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0IsSharedQualified;
int* _AS0Is_aget;
int* _AS0StackBefore;
int* _AS0StackHeight;
PTGNode* _AS0ValHomeNode;
PTGNode* _AS0qualifier_out;
PTGNode* _AS0out;

#endif
{
STPtr _AS1TypeEst;

_VisitVarDecl()
_VisitEntry();

if (AND(NOT(_AVDesignator_2_IsCall), AND(InIS(privateK, GetSemKindSet(_currn->_ATKey, NULLIS)), NOT(EQ((* _IG_incl66), GetFeatureOf(_currn->_ATKey, NoKey)))))) {
message(ERROR, "access to private feature outside of class", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6718)*/
_currn->_desc1->_ATStackBefore=(* _AS0StackBefore);
/*SPC(1942)*/
(*(_CALL_VS_((NODEPTR ,STPtr*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1TypeEst)));
(* _AS0_const82)=_AVStd_method_call_2__const82;
/*SPC(1001)*/
(* _AS0_const83)=_AVStd_method_call_2__const83;
/*SPC(1001)*/
(* _AS0_const101)=_AVStd_method_call_2__const101;
/*SPC(1001)*/
(* _AS0IsSharedQualified)=0;
/*SPC(6884)*/
_AVDesignator_2_LabelVal=NULLValue;
/*SPC(6173)*/
(* _AS0StackHeight)=ADD((* _AS0StackBefore), 1);
/*SPC(2025)*/
_AVDesignator_2_ValHome=
((NOT(IsMonoValueType(_AVStd_method_call_2_RealType))
) ? (NewUniqueLocal()
) : (0))
;
/*SPC(1002)*/
(* _AS0qualifier_out)=
((IsMonoValueType(_AVStd_method_call_2_RealType)
) ? (_AVStd_method_call_2_out
) : (PTGNewLineSeq(PTGNewLineSeq(_AVStd_method_call_2_out, PTGcilStoreLocal(PTGIdent(StringTable(_AVDesignator_2_ValHome)))), PTGcilPushLocalAddress(PTGIdent(StringTable(_AVDesignator_2_ValHome))))))
;
/*SPC(1015)*/
(* _AS0out)=(* _AS0qualifier_out);
/*SPC(1024)*/
(* _AS0ValHomeNode)=
((_AVDesignator_2_ValHome
) ? (PTGSpaceSeq(GetCLRType(_AVStd_method_call_2_RealType), PTGIdent(StringTable(_AVDesignator_2_ValHome)))
) : (PTGNULL))
;
/*SPC(1006)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1DESIGNATOR_EXP_2(_TPPDESIGNATOR_EXP_2 _currn)
#else
void _VS1DESIGNATOR_EXP_2(_currn )
_TPPDESIGNATOR_EXP_2 _currn;

#endif
{
int _AS2IsUnnamed;
PTGNode _AS2des_out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2DESIGNATOR_EXP_2(_TPPDESIGNATOR_EXP_2 _currn,int* _AS0Is_aget,int* _AS0Op,CTValuePtr* _AS0Val)
#else
void _VS2DESIGNATOR_EXP_2(_currn ,_AS0Is_aget,_AS0Op,_AS0Val)
_TPPDESIGNATOR_EXP_2 _currn;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0Is_aget;

#endif
{
int _AS2IsUnnamed;
PTGNode _AS2des_out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVName_2_Is_aget=(* _AS0Is_aget);
/*SPC(4405)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0Val)=_currn->_desc1->_ATVal;
/*SPC(7090)*/
(* _AS0Op)=_currn->_desc2->_ATSym;
/*SPC(7091)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3DESIGNATOR_EXP_2(_TPPDESIGNATOR_EXP_2 _currn,int* _AS0Is_aget,int* _AS0Op,CTValuePtr* _AS0Val)
#else
void _VS3DESIGNATOR_EXP_2(_currn ,_AS0Is_aget,_AS0Op,_AS0Val)
_TPPDESIGNATOR_EXP_2 _currn;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0Is_aget;

#endif
{
int _AS2IsUnnamed;
PTGNode _AS2des_out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_AVExpression_2_is_array_aggregate=0;
/*SPC(11085)*/
_currn->_desc1->_ATTypeEst=_AVDesignator_2_TypeEst;
/*SPC(11175)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4DESIGNATOR_EXP_2(_TPPDESIGNATOR_EXP_2 _currn,int* _AS0Is_aget,int* _AS0Op,CTValuePtr* _AS0Val)
#else
void _VS4DESIGNATOR_EXP_2(_currn ,_AS0Is_aget,_AS0Op,_AS0Val)
_TPPDESIGNATOR_EXP_2 _currn;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0Is_aget;

#endif
{
int _AS2IsUnnamed;
PTGNode _AS2des_out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_AS1IsExplicitCoercion=0;
/*SPC(10797)*/
_currn->_desc1->_ATIsArg=0;
/*SPC(10994)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)));
_AVName_2_AttributeIndex=1;
/*SPC(5866)*/
_AVName_2_SemScopeKey=KeyOfType(_currn->_desc1->_ATType);
/*SPC(4406)*/
_AVName_2_SemScope=GetSemScope(_AVName_2_SemScopeKey, NoEnv);
/*SPC(12922)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsUnnamed)));
_currn->_ATIsQualified=1;
/*SPC(10991)*/
_AVDesignator_2_CreatedKey=NoKey;
/*SPC(4291)*/
_currn->_ATIsQualifiedPolymorph=1;
/*SPC(10639)*/
_currn->_ATKey=_currn->_desc2->_ATKey;
/*SPC(4285)*/

if (DEBUG_DESIGNATOR) {
PrintKey(_currn->_ATKey, (&( _currn->_AT_pos)), 1);

} else {
}
;
/*SPC(3874)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5DESIGNATOR_EXP_2(_TPPDESIGNATOR_EXP_2 _currn,int* _AS0Is_aget,int* _AS0Op,CTValuePtr* _AS0Val,DefTableKeyList* _AS0_const81)
#else
void _VS5DESIGNATOR_EXP_2(_currn ,_AS0Is_aget,_AS0Op,_AS0Val,_AS0_const81)
_TPPDESIGNATOR_EXP_2 _currn;
DefTableKeyList* _AS0_const81;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0Is_aget;

#endif
{
int _AS2IsUnnamed;
PTGNode _AS2des_out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
(* _AS0_const81)=_AS1_const81;
/*SPC(991)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6DESIGNATOR_EXP_2(_TPPDESIGNATOR_EXP_2 _currn,PTGNode* _AS0out,PTGNode* _AS0qualifier_out,PTGNode* _AS0ValHomeNode,int* _AS0StackHeight,int* _AS0StackBefore,int* _AS0Is_aget,int* _AS0IsSharedQualified,int* _AS0Op,CTValuePtr* _AS0Val,PTGNode* _AS0_const101,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS6DESIGNATOR_EXP_2(_currn ,_AS0out,_AS0qualifier_out,_AS0ValHomeNode,_AS0StackHeight,_AS0StackBefore,_AS0Is_aget,_AS0IsSharedQualified,_AS0Op,_AS0Val,_AS0_const101,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPDESIGNATOR_EXP_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const101;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0IsSharedQualified;
int* _AS0Is_aget;
int* _AS0StackBefore;
int* _AS0StackHeight;
PTGNode* _AS0ValHomeNode;
PTGNode* _AS0qualifier_out;
PTGNode* _AS0out;

#endif
{
int _AS2IsUnnamed;
PTGNode _AS2des_out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();

if (AND(NOT(_AVDesignator_2_IsCall), AND(InIS(privateK, GetSemKindSet(_currn->_ATKey, NULLIS)), NOT(EQ((* _IG_incl66), GetFeatureOf(_currn->_ATKey, NoKey)))))) {
message(ERROR, "access to private feature outside of class", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6718)*/
_AS1StackBefore=0;
/*SPC(1901)*/
_AS1UsedAsQualifier=0;
/*SPC(1779)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,int*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1UsedAsQualifier)),(&( _AS1StackBefore)),(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
_AVName_2_IsAggregate=0;
/*SPC(944)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2des_out)),(&( _AS2IsUnnamed)));
(* _AS0_const82)=_currn->_desc1->_AT_const82;
/*SPC(991)*/
(* _AS0_const83)=MAX(_currn->_desc1->_AT_const83, IDENTICAL(_currn->_desc1->_ATStackHeight));
/*SPC(991)*/
(* _AS0_const101)=_currn->_desc1->_AT_const101;
/*SPC(991)*/
(* _AS0IsSharedQualified)=0;
/*SPC(6884)*/
_AVDesignator_2_LabelVal=NULLValue;
/*SPC(6173)*/
(* _AS0StackHeight)=ADD((* _AS0StackBefore), 1);
/*SPC(2025)*/
_AVDesignator_2_ValHome=0;
/*SPC(983)*/
(* _AS0qualifier_out)=
((IsMonoValueType(_AVExpression_2_RealType)
) ? (PTGNewLineSeq(_AS1out, PTGcilValueToAddress(GetCLRType(_AVExpression_2_RealType)))
) : (_AS1out))
;
/*SPC(992)*/
(* _AS0out)=_AS1out;
/*SPC(998)*/
(* _AS0ValHomeNode)=PTGNULL;
/*SPC(984)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1DESIGNATOR_NAME_2(_TPPDESIGNATOR_NAME_2 _currn)
#else
void _VS1DESIGNATOR_NAME_2(_currn )
_TPPDESIGNATOR_NAME_2 _currn;

#endif
{
int _AS1IsUnnamed;
PTGNode _AS1des_out;

_VisitVarDecl()
_VisitEntry();
_AVName_2_Is_aget=0;
/*SPC(4418)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2DESIGNATOR_NAME_2(_TPPDESIGNATOR_NAME_2 _currn,int* _AS0Is_aget,int* _AS0Op,CTValuePtr* _AS0Val)
#else
void _VS2DESIGNATOR_NAME_2(_currn ,_AS0Is_aget,_AS0Op,_AS0Val)
_TPPDESIGNATOR_NAME_2 _currn;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0Is_aget;

#endif
{
int _AS1IsUnnamed;
PTGNode _AS1des_out;

_VisitVarDecl()
_VisitEntry();
(* _AS0Val)=NULLValue;
/*SPC(7051)*/
(* _AS0Op)=0;
/*SPC(7052)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3DESIGNATOR_NAME_2(_TPPDESIGNATOR_NAME_2 _currn,int* _AS0Is_aget,int* _AS0Op,CTValuePtr* _AS0Val)
#else
void _VS3DESIGNATOR_NAME_2(_currn ,_AS0Is_aget,_AS0Op,_AS0Val)
_TPPDESIGNATOR_NAME_2 _currn;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0Is_aget;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4DESIGNATOR_NAME_2(_TPPDESIGNATOR_NAME_2 _currn,int* _AS0Is_aget,int* _AS0Op,CTValuePtr* _AS0Val)
#else
void _VS4DESIGNATOR_NAME_2(_currn ,_AS0Is_aget,_AS0Op,_AS0Val)
_TPPDESIGNATOR_NAME_2 _currn;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0Is_aget;

#endif
{
int _AS1IsUnnamed;
PTGNode _AS1des_out;

_VisitVarDecl()
_VisitEntry();
_AVName_2_AttributeIndex=1;
/*SPC(5866)*/
_AVName_2_SemScopeKey=NoKey;
/*SPC(12921)*/
_AVName_2_SemScope=GetSemScope(_AVName_2_SemScopeKey, NoEnv);
/*SPC(12922)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsUnnamed)));
_currn->_ATIsQualified=0;
/*SPC(10984)*/
_AVDesignator_2_CreatedKey=NoKey;
/*SPC(4291)*/
_currn->_ATIsQualifiedPolymorph=1;
/*SPC(10639)*/
_currn->_ATKey=_currn->_desc1->_ATKey;
/*SPC(4281)*/

if (DEBUG_DESIGNATOR) {
PrintKey(_currn->_ATKey, (&( _currn->_AT_pos)), 1);

} else {
}
;
/*SPC(3874)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5DESIGNATOR_NAME_2(_TPPDESIGNATOR_NAME_2 _currn,int* _AS0Is_aget,int* _AS0Op,CTValuePtr* _AS0Val,DefTableKeyList* _AS0_const81)
#else
void _VS5DESIGNATOR_NAME_2(_currn ,_AS0Is_aget,_AS0Op,_AS0Val,_AS0_const81)
_TPPDESIGNATOR_NAME_2 _currn;
DefTableKeyList* _AS0_const81;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0Is_aget;

#endif
{
int _AS1IsUnnamed;
PTGNode _AS1des_out;

_VisitVarDecl()
_VisitEntry();
(* _AS0_const81)=NullDefTableKeyList();
/*SPC(987)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6DESIGNATOR_NAME_2(_TPPDESIGNATOR_NAME_2 _currn,PTGNode* _AS0out,PTGNode* _AS0qualifier_out,PTGNode* _AS0ValHomeNode,int* _AS0StackHeight,int* _AS0StackBefore,int* _AS0Is_aget,int* _AS0IsSharedQualified,int* _AS0Op,CTValuePtr* _AS0Val,PTGNode* _AS0_const101,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS6DESIGNATOR_NAME_2(_currn ,_AS0out,_AS0qualifier_out,_AS0ValHomeNode,_AS0StackHeight,_AS0StackBefore,_AS0Is_aget,_AS0IsSharedQualified,_AS0Op,_AS0Val,_AS0_const101,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPDESIGNATOR_NAME_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const101;
CTValuePtr* _AS0Val;
int* _AS0Op;
int* _AS0IsSharedQualified;
int* _AS0Is_aget;
int* _AS0StackBefore;
int* _AS0StackHeight;
PTGNode* _AS0ValHomeNode;
PTGNode* _AS0qualifier_out;
PTGNode* _AS0out;

#endif
{
int _AS1IsUnnamed;
PTGNode _AS1des_out;

_VisitVarDecl()
_VisitEntry();

if (AND(NOT(_AVDesignator_2_IsCall), AND(InIS(privateK, GetSemKindSet(_currn->_ATKey, NULLIS)), NOT(EQ((* _IG_incl66), GetFeatureOf(_currn->_ATKey, NoKey)))))) {
message(ERROR, "access to private feature outside of class", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6718)*/
_AVName_2_IsAggregate=0;
/*SPC(944)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1des_out)),(&( _AS1IsUnnamed)));
(* _AS0_const82)=PTGNull();
/*SPC(987)*/
(* _AS0_const83)=ONE();
/*SPC(987)*/
(* _AS0_const101)=PTGNull();
/*SPC(987)*/
(* _AS0IsSharedQualified)=0;
/*SPC(6884)*/
_AVDesignator_2_LabelVal=_AVName_2_Val;
/*SPC(6184)*/
(* _AS0StackHeight)=ADD((* _AS0StackBefore), 1);
/*SPC(2025)*/
_AVDesignator_2_ValHome=0;
/*SPC(983)*/
(* _AS0qualifier_out)=PTGcilPushSelf();
/*SPC(982)*/
(* _AS0out)=_AS1des_out;
/*SPC(988)*/
(* _AS0ValHomeNode)=PTGNULL;
/*SPC(984)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ARGUMENT_EMPTY_2(_TPPARGUMENT_EMPTY_2 _currn)
#else
void _VS2ARGUMENT_EMPTY_2(_currn )
_TPPARGUMENT_EMPTY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVArgument_2_Val=NULLValue;
/*SPC(7128)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ARGUMENT_EMPTY_2(_TPPARGUMENT_EMPTY_2 _currn)
#else
void _VS3ARGUMENT_EMPTY_2(_currn )
_TPPARGUMENT_EMPTY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVArgument_2_ArgInfo=NoMethArg;
/*SPC(11031)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ARGUMENT_EMPTY_2(_TPPARGUMENT_EMPTY_2 _currn)
#else
void _VS4ARGUMENT_EMPTY_2(_currn )
_TPPARGUMENT_EMPTY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVArgument_2__const81=NullDefTableKeyList();
/*SPC(329)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5ARGUMENT_EMPTY_2(_TPPARGUMENT_EMPTY_2 _currn,DefTableKey* _AS0FormalParam,DefTableKeyList* _AS0FormalParams)
#else
void _VS5ARGUMENT_EMPTY_2(_currn ,_AS0FormalParam,_AS0FormalParams)
_TPPARGUMENT_EMPTY_2 _currn;
DefTableKeyList* _AS0FormalParams;
DefTableKey* _AS0FormalParam;

#endif
{
STPtr* _IL_incl99;
int* _IL_incl41;

_VisitVarDecl()
_VisitEntry();
_IL_incl99=_IG_incl99;_IG_incl99= &(_currn->_ATTypeEst);
_IL_incl41=_IG_incl41;_IG_incl41= &(_currn->_ATStackBefore);
(* _AS0FormalParams)=GetParams(KeyOfType(GetType((* _IG_incl100), NoType)), NULLDefTableKeyList);
/*SPC(10572)*/
(* _AS0FormalParam)=
((EQ((* _AS0FormalParams), NULLDefTableKeyList)
) ? (NoKey
) : (IthElemDefTableKeyList((* _AS0FormalParams), (* _IG_incl101))))
;
/*SPC(10577)*/
_currn->_ATTypeEst=NoType;
/*SPC(10585)*/
_AVArgument_2_ValHome=0;
/*SPC(261)*/
_AVArgument_2_out=PTGNULL;
/*SPC(330)*/
_AVArgument_2_once_out=PTGNULL;
/*SPC(264)*/
_AVArgument_2__const82=PTGNull();
/*SPC(329)*/
_AVArgument_2__const83=ONE();
/*SPC(329)*/
_AVArgument_2__const101=PTGNull();
/*SPC(329)*/
_AVArgument_2_write_back=PTGNULL;
/*SPC(263)*/
_AVArgument_2_ValHomeNode=PTGNULL;
/*SPC(262)*/
_IG_incl99=_IL_incl99;
_IG_incl41=_IL_incl41;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ARGUMENT_INOUT_2(_TPPARGUMENT_INOUT_2 _currn)
#else
void _VS1ARGUMENT_INOUT_2(_currn )
_TPPARGUMENT_INOUT_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ARGUMENT_INOUT_2(_TPPARGUMENT_INOUT_2 _currn)
#else
void _VS2ARGUMENT_INOUT_2(_currn )
_TPPARGUMENT_INOUT_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_AS1Is_aget=0;
/*SPC(4410)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));
_AVDesignator_2_TypeEst=NoType;
/*SPC(11088)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));
_AVArgument_2_Val=_AS1Val;
/*SPC(7124)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ARGUMENT_INOUT_2(_TPPARGUMENT_INOUT_2 _currn)
#else
void _VS3ARGUMENT_INOUT_2(_currn )
_TPPARGUMENT_INOUT_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));
_AVArgument_2_ArgInfo=NewMethArgInfo(GetType(_currn->_desc1->_ATKey, NoType), NULLValue, inoutK);
/*SPC(11026)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ARGUMENT_INOUT_2(_TPPARGUMENT_INOUT_2 _currn)
#else
void _VS4ARGUMENT_INOUT_2(_currn )
_TPPARGUMENT_INOUT_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)),(&( _AS1_const81)));
_AVArgument_2__const81=_AS1_const81;
/*SPC(325)*/
_AVBuiltin_option_2AttrAccLoc_post=
((AND(InIS(attributeK, GetSemKindSet(_currn->_desc1->_ATKey, NULLIS)), NOT(_currn->_desc1->_ATIsQualified))
) ? (AddToSetDefTableKeyList(_currn->_desc1->_ATKey, _AVBuiltin_option_2AttrAccLoc_post, CmpDefTableKey)
) : (_AVBuiltin_option_2AttrAccLoc_post))
;
/*SPC(6781)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5ARGUMENT_INOUT_2(_TPPARGUMENT_INOUT_2 _currn,DefTableKey* _AS0FormalParam,DefTableKeyList* _AS0FormalParams)
#else
void _VS5ARGUMENT_INOUT_2(_currn ,_AS0FormalParam,_AS0FormalParams)
_TPPARGUMENT_INOUT_2 _currn;
DefTableKeyList* _AS0FormalParams;
DefTableKey* _AS0FormalParam;

#endif
{
STPtr* _IL_incl99;
int* _IL_incl41;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl99=_IG_incl99;_IG_incl99= &(_currn->_ATTypeEst);
_IL_incl41=_IG_incl41;_IG_incl41= &(_currn->_ATStackBefore);
(* _AS0FormalParams)=GetParams(KeyOfType(GetType((* _IG_incl100), NoType)), NULLDefTableKeyList);
/*SPC(10572)*/
(* _AS0FormalParam)=
((EQ((* _AS0FormalParams), NULLDefTableKeyList)
) ? (NoKey
) : (IthElemDefTableKeyList((* _AS0FormalParams), (* _IG_incl101))))
;
/*SPC(10577)*/
_AVDesignator_2_IsCall=0;
/*SPC(6662)*/
_AS1StackBefore=_currn->_ATStackBefore;
/*SPC(1954)*/
_currn->_ATTypeEst=GetType((* _AS0FormalParam), NoType);
/*SPC(10581)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,PTGNode*,int*,int*,int*,int*,int*,CTValuePtr*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1qualifier_out)),(&( _AS1ValHomeNode)),(&( _AS1StackHeight)),(&( _AS1StackBefore)),(&( _AS1Is_aget)),(&( _AS1IsSharedQualified)),(&( _AS1Op)),(&( _AS1Val)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_AVArgument_2__const82=PTGCommaSeq(_AS1_const82, IDENTICAL(_AS1ValHomeNode));
/*SPC(325)*/
_AVArgument_2__const83=MAX(_AS1_const83, IDENTICAL(_AS1StackHeight));
/*SPC(325)*/
_AVArgument_2__const101=PTGCommaSeq(_AS1_const101, IDENTICAL(_AS1ValHomeNode));
/*SPC(325)*/
_AVArgument_2_ValHome=0;
/*SPC(261)*/
_AVArgument_2_out=_AS1out;
/*SPC(326)*/
_AVArgument_2_once_out=PTGNULL;
/*SPC(264)*/
_AVArgument_2_write_back=PTGNULL;
/*SPC(263)*/
_AVArgument_2_ValHomeNode=PTGNULL;
/*SPC(262)*/
_IG_incl99=_IL_incl99;
_IG_incl41=_IL_incl41;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ARGUMENT_OUT_2(_TPPARGUMENT_OUT_2 _currn)
#else
void _VS1ARGUMENT_OUT_2(_currn )
_TPPARGUMENT_OUT_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ARGUMENT_OUT_2(_TPPARGUMENT_OUT_2 _currn)
#else
void _VS2ARGUMENT_OUT_2(_currn )
_TPPARGUMENT_OUT_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_AS1Is_aget=0;
/*SPC(4410)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));
_AVDesignator_2_TypeEst=NoType;
/*SPC(11088)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));
_AVArgument_2_Val=_AS1Val;
/*SPC(7120)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ARGUMENT_OUT_2(_TPPARGUMENT_OUT_2 _currn)
#else
void _VS3ARGUMENT_OUT_2(_currn )
_TPPARGUMENT_OUT_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)));
_AVArgument_2_ArgInfo=NewMethArgInfo(GetType(_currn->_desc1->_ATKey, NoType), NULLValue, outK);
/*SPC(11021)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ARGUMENT_OUT_2(_TPPARGUMENT_OUT_2 _currn)
#else
void _VS4ARGUMENT_OUT_2(_currn )
_TPPARGUMENT_OUT_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)),(&( _AS1_const81)));
_AVArgument_2__const81=_AS1_const81;
/*SPC(289)*/
_AVBuiltin_option_2AttrAccLoc_post=
((AND(InIS(attributeK, GetSemKindSet(_currn->_desc1->_ATKey, NULLIS)), NOT(_currn->_desc1->_ATIsQualified))
) ? (AddToSetDefTableKeyList(_currn->_desc1->_ATKey, _AVBuiltin_option_2AttrAccLoc_post, CmpDefTableKey)
) : (_AVBuiltin_option_2AttrAccLoc_post))
;
/*SPC(6773)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5ARGUMENT_OUT_2(_TPPARGUMENT_OUT_2 _currn,DefTableKey* _AS0FormalParam,DefTableKeyList* _AS0FormalParams)
#else
void _VS5ARGUMENT_OUT_2(_currn ,_AS0FormalParam,_AS0FormalParams)
_TPPARGUMENT_OUT_2 _currn;
DefTableKeyList* _AS0FormalParams;
DefTableKey* _AS0FormalParam;

#endif
{
STPtr* _IL_incl99;
int* _IL_incl41;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
CTValuePtr _AS1Val;
int _AS1Op;
int _AS1IsSharedQualified;
int _AS1Is_aget;
int _AS1StackBefore;
int _AS1StackHeight;
PTGNode _AS1ValHomeNode;
PTGNode _AS1qualifier_out;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl99=_IG_incl99;_IG_incl99= &(_currn->_ATTypeEst);
_IL_incl41=_IG_incl41;_IG_incl41= &(_currn->_ATStackBefore);
(* _AS0FormalParams)=GetParams(KeyOfType(GetType((* _IG_incl100), NoType)), NULLDefTableKeyList);
/*SPC(10572)*/
(* _AS0FormalParam)=
((EQ((* _AS0FormalParams), NULLDefTableKeyList)
) ? (NoKey
) : (IthElemDefTableKeyList((* _AS0FormalParams), (* _IG_incl101))))
;
/*SPC(10577)*/
_AVDesignator_2_IsCall=0;
/*SPC(6662)*/
_AS1StackBefore=_currn->_ATStackBefore;
/*SPC(1954)*/
_currn->_ATTypeEst=GetType((* _AS0FormalParam), NoType);
/*SPC(10581)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,PTGNode*,int*,int*,int*,int*,int*,CTValuePtr*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1qualifier_out)),(&( _AS1ValHomeNode)),(&( _AS1StackHeight)),(&( _AS1StackBefore)),(&( _AS1Is_aget)),(&( _AS1IsSharedQualified)),(&( _AS1Op)),(&( _AS1Val)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_AVArgument_2__const82=PTGCommaSeq(_AS1_const82, IDENTICAL(_AS1ValHomeNode));
/*SPC(289)*/
_AVArgument_2__const83=MAX(_AS1_const83, IDENTICAL(_AS1StackHeight));
/*SPC(289)*/
_AVArgument_2__const101=PTGCommaSeq(_AS1_const101, IDENTICAL(_AS1ValHomeNode));
/*SPC(289)*/
_AVArgument_2_ValHome=
((AND(IsMonoValueType(_currn->_ATTypeEst), IsPolymorph(GetType(_currn->_desc1->_ATKey, NoType)))
) ? (NewUniqueLocal()
) : (0))
;
/*SPC(290)*/
_AVArgument_2_out=
((_AVArgument_2_ValHome
) ? (PTGcilPushLocalAddress(PTGIdent(StringTable(_AVArgument_2_ValHome)))
) : (_AS1out))
;
/*SPC(304)*/
_AVArgument_2_once_out=PTGNULL;
/*SPC(264)*/
_AVArgument_2_write_back=
((_AVArgument_2_ValHome
) ? (PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(_AS1out, PTGcilPushLocal(PTGIdent(StringTable(_AVArgument_2_ValHome)))), PTGcilBox(GetCLRType(_currn->_ATTypeEst))), PTGIdent("stind.ref"))
) : (PTGNULL))
;
/*SPC(308)*/
_AVArgument_2_ValHomeNode=
((_AVArgument_2_ValHome
) ? (PTGSpaceSeq(GetCLRType(_currn->_ATTypeEst), PTGIdent(StringTable(_AVArgument_2_ValHome)))
) : (PTGNULL))
;
/*SPC(295)*/
_IG_incl99=_IL_incl99;
_IG_incl41=_IL_incl41;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ARGUMENT_EXP_2(_TPPARGUMENT_EXP_2 _currn)
#else
void _VS1ARGUMENT_EXP_2(_currn )
_TPPARGUMENT_EXP_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ARGUMENT_EXP_2(_TPPARGUMENT_EXP_2 _currn)
#else
void _VS2ARGUMENT_EXP_2(_currn )
_TPPARGUMENT_EXP_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVExpression_2_is_array_aggregate=0;
/*SPC(11085)*/
_currn->_desc1->_ATTypeEst=NoType;
/*SPC(11084)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVArgument_2_Val=_currn->_desc1->_ATVal;
/*SPC(7116)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ARGUMENT_EXP_2(_TPPARGUMENT_EXP_2 _currn)
#else
void _VS3ARGUMENT_EXP_2(_currn )
_TPPARGUMENT_EXP_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_AS1IsExplicitCoercion=0;
/*SPC(10797)*/
_currn->_desc1->_ATIsArg=1;
/*SPC(10998)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)));
_AVArgument_2_ArgInfo=NewMethArgInfo(_currn->_desc1->_ATType, 
((EQ(_currn->_desc1->_ATType, (* _IG_incl44))
) ? (_currn->_desc1->_ATVal
) : (NULLValue))
, inK);
/*SPC(11015)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ARGUMENT_EXP_2(_TPPARGUMENT_EXP_2 _currn)
#else
void _VS4ARGUMENT_EXP_2(_currn )
_TPPARGUMENT_EXP_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
_AVArgument_2__const81=_AS1_const81;
/*SPC(267)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5ARGUMENT_EXP_2(_TPPARGUMENT_EXP_2 _currn,DefTableKey* _AS0FormalParam,DefTableKeyList* _AS0FormalParams)
#else
void _VS5ARGUMENT_EXP_2(_currn ,_AS0FormalParam,_AS0FormalParams)
_TPPARGUMENT_EXP_2 _currn;
DefTableKeyList* _AS0FormalParams;
DefTableKey* _AS0FormalParam;

#endif
{
STPtr* _IL_incl99;
int* _IL_incl41;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl99=_IG_incl99;_IG_incl99= &(_currn->_ATTypeEst);
_IL_incl41=_IG_incl41;_IG_incl41= &(_currn->_ATStackBefore);
(* _AS0FormalParams)=GetParams(KeyOfType(GetType((* _IG_incl100), NoType)), NULLDefTableKeyList);
/*SPC(10572)*/
(* _AS0FormalParam)=
((EQ((* _AS0FormalParams), NULLDefTableKeyList)
) ? (NoKey
) : (IthElemDefTableKeyList((* _AS0FormalParams), (* _IG_incl101))))
;
/*SPC(10577)*/
_AS1StackBefore=_currn->_ATStackBefore;
/*SPC(1905)*/
_AS1UsedAsQualifier=0;
/*SPC(1779)*/
_currn->_ATTypeEst=GetType((* _AS0FormalParam), NoType);
/*SPC(10581)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,int*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1UsedAsQualifier)),(&( _AS1StackBefore)),(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
_AVArgument_2__const82=_currn->_desc1->_AT_const82;
/*SPC(267)*/
_AVArgument_2__const83=MAX(_currn->_desc1->_AT_const83, IDENTICAL(_currn->_desc1->_ATStackHeight));
/*SPC(267)*/
_AVArgument_2__const101=_currn->_desc1->_AT_const101;
/*SPC(267)*/
_AVArgument_2_ValHome=0;
/*SPC(261)*/
_AVArgument_2_out=
((NOT(InIS(onceK, GetSemKindSet((* _AS0FormalParam), NULLIS)))
) ? (PTGNewLineSeq(_AS1out, GetConvCode(_currn->_desc1->_ATType, _currn->_ATTypeEst, IsCoercible(_currn->_desc1->_ATType, _currn->_ATTypeEst, (&( _currn->_AT_pos)), (* _IG_incl23), 1), (&( _currn->_AT_pos)), (* _IG_incl23)))
) : (PTGNULL))
;
/*SPC(268)*/
_AVArgument_2_once_out=
((InIS(onceK, GetSemKindSet((* _AS0FormalParam), NULLIS))
) ? (PTGNewLineSeq(_AS1out, GetConvCode(_currn->_desc1->_ATType, _currn->_ATTypeEst, IsCoercible(_currn->_desc1->_ATType, _currn->_ATTypeEst, (&( _currn->_AT_pos)), (* _IG_incl23), 1), (&( _currn->_AT_pos)), (* _IG_incl23)))
) : (PTGNULL))
;
/*SPC(278)*/
_AVArgument_2_write_back=PTGNULL;
/*SPC(263)*/
_AVArgument_2_ValHomeNode=PTGNULL;
/*SPC(262)*/
_IG_incl99=_IL_incl99;
_IG_incl41=_IL_incl41;

_VisitExit();
}

