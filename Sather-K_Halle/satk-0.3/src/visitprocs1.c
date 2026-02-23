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
void _VS1AGG_ID_DEF_O(_TPPAGG_ID_DEF_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1AGG_ID_DEF_O(_currn ,_AS0orig_tree)
_TPPAGG_ID_DEF_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0orig_tree)=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkAGG_ID_DEF_O, _currn->_ATTERM_1, NoKey);
/*SPC(10119)*/
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkAGG_ID_DEF, _currn->_ATTERM_1, NoKey);
/*SPC(9052)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1AGGREGATE_NAMED_O(_TPPAGGREGATE_NAMED_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1AGGREGATE_NAMED_O(_currn ,_AS0orig_tree)
_TPPAGGREGATE_NAMED_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{
TreeNodePtr _AS1orig_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0orig_tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkAGGREGATE_NAMED_O, _AS1orig_tree, _AVnamed_expressions_orig_tree, NoKey);
/*SPC(10113)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2AGGREGATE_NAMED_O(_TPPAGGREGATE_NAMED_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2AGGREGATE_NAMED_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPAGGREGATE_NAMED_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const67)=_AVnamed_expressions__const67;
/*SPC(3)*/
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkAGGREGATE_NAMED, _currn->_desc1->_ATtree, _AVnamed_expressions_tree, NoKey);
/*SPC(9046)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3AGGREGATE_NAMED_O(_TPPAGGREGATE_NAMED_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3AGGREGATE_NAMED_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPAGGREGATE_NAMED_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1AGGREGATE_O(_TPPAGGREGATE_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1AGGREGATE_O(_currn ,_AS0orig_tree)
_TPPAGGREGATE_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0orig_tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkAGGREGATE_O, _AVnamed_expressions_orig_tree, NoKey);
/*SPC(10108)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2AGGREGATE_O(_TPPAGGREGATE_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2AGGREGATE_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPAGGREGATE_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const67)=_AVnamed_expressions__const67;
/*SPC(2)*/
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkAGGREGATE, _AVnamed_expressions_tree, NoKey);
/*SPC(9041)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3AGGREGATE_O(_TPPAGGREGATE_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3AGGREGATE_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPAGGREGATE_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CONSTRUCTOR_SAME_AGG_O(_TPPTYPE_CONSTRUCTOR_SAME_AGG_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS1TYPE_CONSTRUCTOR_SAME_AGG_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_SAME_AGG_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
_currn->_ATWithClassArgs=0;
/*SPC(11283)*/
(* _AS0class_spec_tree)=NULL;
/*SPC(10214)*/
_AVtype_constructor_orig_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_SAME_AGG_O, _AS1orig_tree, NoKey);
/*SPC(10103)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_SAME_AGG_O(_TPPTYPE_CONSTRUCTOR_SAME_AGG_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS2TYPE_CONSTRUCTOR_SAME_AGG_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_SAME_AGG_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
_AVtype_constructor__const67=_AS1_const67;
/*SPC(2730)*/
_AVtype_constructor_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_SAME_AGG, _AS1tree, NoKey);
/*SPC(9024)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CONSTRUCTOR_SAME_AGG_O(_TPPTYPE_CONSTRUCTOR_SAME_AGG_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS3TYPE_CONSTRUCTOR_SAME_AGG_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_SAME_AGG_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CONSTRUCTOR_SAME_O(_TPPTYPE_CONSTRUCTOR_SAME_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS1TYPE_CONSTRUCTOR_SAME_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_SAME_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1arr_bounds_tree;
TreeNodePtr _AS1class_args_tree;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;
int _AS1ResolvesToClassSpecifiers;
int _AS1ResolvesToExpressions;
int _AS1IsJustExpressions;
int _AS1IsClassSpecifiers;

_VisitVarDecl()
_VisitEntry();
_AS1IsClassSpecifiers=0;
/*SPC(4890)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsClassSpecifiers)),(&( _AS1ResolvesToExpressions)),(&( _AS1ResolvesToClassSpecifiers)),(&( _AS1orig_tree)),(&( _AS1class_args_tree)),(&( _AS1arr_bounds_tree)));
_currn->_ATWithClassArgs=0;
/*SPC(11283)*/
(* _AS0class_spec_tree)=NULL;
/*SPC(10214)*/
_AVtype_constructor_orig_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_SAME_O, _AS1orig_tree, NoKey);
/*SPC(10098)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_SAME_O(_TPPTYPE_CONSTRUCTOR_SAME_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS2TYPE_CONSTRUCTOR_SAME_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_SAME_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1arr_bounds_tree;
TreeNodePtr _AS1class_args_tree;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;
int _AS1ResolvesToClassSpecifiers;
int _AS1ResolvesToExpressions;
int _AS1IsJustExpressions;
int _AS1IsClassSpecifiers;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsClassSpecifiers)),(&( _AS1ResolvesToExpressions)),(&( _AS1ResolvesToClassSpecifiers)),(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1class_args_tree)),(&( _AS1arr_bounds_tree)),(&( _AS1_const67)));
_AVtype_constructor__const67=_AS1_const67;
/*SPC(2729)*/
_AVtype_constructor_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_SAME, _AS1tree, NoKey);
/*SPC(9019)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CONSTRUCTOR_SAME_O(_TPPTYPE_CONSTRUCTOR_SAME_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS3TYPE_CONSTRUCTOR_SAME_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_SAME_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1arr_bounds_tree;
TreeNodePtr _AS1class_args_tree;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;
int _AS1ResolvesToClassSpecifiers;
int _AS1ResolvesToExpressions;
int _AS1IsJustExpressions;
int _AS1IsClassSpecifiers;

_VisitVarDecl()
_VisitEntry();
_AS1IsJustExpressions=0;
/*SPC(4893)*/
_AVarguments_IsBounds=0;
/*SPC(4891)*/
_currn->_desc1->_ATis_partial_call=0;
/*SPC(2698)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsClassSpecifiers)),(&( _AS1IsJustExpressions)),(&( _AS1ResolvesToExpressions)),(&( _AS1ResolvesToClassSpecifiers)),(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1class_args_tree)),(&( _AS1arr_bounds_tree)),(&( _AS1_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CONSTRUCTOR_DES_O(_TPPTYPE_CONSTRUCTOR_DES_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS1TYPE_CONSTRUCTOR_DES_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_DES_O _currn;
TreeNodePtr* _AS0class_spec_tree;

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
_currn->_ATWithClassArgs=0;
/*SPC(11283)*/
(* _AS0class_spec_tree)=NULL;
/*SPC(10214)*/
_AVtype_constructor_orig_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_DES_O, _AS1orig_tree, _AS2orig_tree, NoKey);
/*SPC(10080)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_DES_O(_TPPTYPE_CONSTRUCTOR_DES_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS2TYPE_CONSTRUCTOR_DES_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_DES_O _currn;
TreeNodePtr* _AS0class_spec_tree;

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
_AVtype_constructor__const67=AppDefTableKeyList(_AS1_const67, _AS2_const67);
/*SPC(2728)*/
_AVtype_constructor_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_DES, _AS1tree, _AS2tree, NoKey);
/*SPC(9013)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CONSTRUCTOR_DES_O(_TPPTYPE_CONSTRUCTOR_DES_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS3TYPE_CONSTRUCTOR_DES_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_DES_O _currn;
TreeNodePtr* _AS0class_spec_tree;

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
void _VS1TYPE_CONSTRUCTOR_AGG_O(_TPPTYPE_CONSTRUCTOR_AGG_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS1TYPE_CONSTRUCTOR_AGG_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_AGG_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
_currn->_ATWithClassArgs=0;
/*SPC(11283)*/
(* _AS0class_spec_tree)=NULL;
/*SPC(10214)*/
_AVtype_constructor_orig_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_AGG_O, _AS1orig_tree, NoKey);
/*SPC(10075)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_AGG_O(_TPPTYPE_CONSTRUCTOR_AGG_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS2TYPE_CONSTRUCTOR_AGG_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_AGG_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
_AVtype_constructor__const67=_AS1_const67;
/*SPC(2727)*/
_AVtype_constructor_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_AGG, _AS1tree, NoKey);
/*SPC(9008)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CONSTRUCTOR_AGG_O(_TPPTYPE_CONSTRUCTOR_AGG_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS3TYPE_CONSTRUCTOR_AGG_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_AGG_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CONSTRUCTOR_CLASS_O(_TPPTYPE_CONSTRUCTOR_CLASS_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS1TYPE_CONSTRUCTOR_CLASS_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_CLASS_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS4tree;
DefTableKeyList _AS3_const67;
TreeNodePtr _AS3arr_bounds_tree;
TreeNodePtr _AS3class_args_tree;
TreeNodePtr _AS3orig_tree;
TreeNodePtr _AS3tree;
int _AS3ResolvesToClassSpecifiers;
int _AS3ResolvesToExpressions;
int _AS3IsJustExpressions;
int _AS3IsClassSpecifiers;
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
_AS1IsArrayAccessOrSingleId=1;
/*SPC(11304)*/
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1IsArrayAccessOrSingleId)),(&( _AS1IsClassIdUse2)),(&( _AS1ResolvesToSingleId)),(&( _AS1ResolvesToArrayAccessOrSingleId)),(&( _AS1orig_tree)),(&( _AS1class_id_tree)),(&( _AS1arr_bounds_tree)));
_currn->_ATWithClassArgs=NOT(EQ(GetClassParCount(_AS1Key, 0), 0));
/*SPC(11296)*/
_AS2IsClassSpecifiers=_currn->_ATWithClassArgs;
/*SPC(11305)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsClassSpecifiers)),(&( _AS2ResolvesToExpressions)),(&( _AS2ResolvesToClassSpecifiers)),(&( _AS2orig_tree)),(&( _AS2class_args_tree)),(&( _AS2arr_bounds_tree)));
_AS3IsClassSpecifiers=NOT(_currn->_ATWithClassArgs);
/*SPC(11306)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3IsClassSpecifiers)),(&( _AS3ResolvesToExpressions)),(&( _AS3ResolvesToClassSpecifiers)),(&( _AS3orig_tree)),(&( _AS3class_args_tree)),(&( _AS3arr_bounds_tree)));
(* _AS0class_spec_tree)=
((EQ(_AS1ResolvesToArrayAccessOrSingleId, 1)
) ? (
((AND(EQ(_AS2IsClassSpecifiers, 1), EQ(_AS2ResolvesToClassSpecifiers, 1))
) ? (NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_SPECIFIER_O, _AS1class_id_tree, _AS1arr_bounds_tree, _AS2class_args_tree, NoKey)
) : (NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_SPECIFIER_O, _AS1class_id_tree, _AS1arr_bounds_tree, NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENTS_EMPTY_O, NoKey), NoKey)))

) : (NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_SPECIFIER_O, NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkCLASS_ID_USE_O, MakeName("SYNTAX_ERROR_CLASS"), NoKey), NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUNDS_O, NULL, NoKey), NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENTS_EMPTY_O, NoKey), NoKey)))
;
/*SPC(10232)*/
{ _currn->_desc4 = (_TSPclass_specifier) Mkclass_specifier(NoPosition, BuildTree((* _AS0class_spec_tree)));
  if ((NODEPTR)_currn->_desc4 == NULLNODEPTR)
    message (DEADLY, "generated tree is not of type class_specifier", 0, NoPosition);
};
/*SPC(10246)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4);
_AVtype_constructor_orig_tree=NewTreeNodeRhs_4_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_CLASS_O, _AS1orig_tree, _AS2orig_tree, _AS3orig_tree, (* _AS0class_spec_tree), NoKey);
/*SPC(10092)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_CLASS_O(_TPPTYPE_CONSTRUCTOR_CLASS_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS2TYPE_CONSTRUCTOR_CLASS_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_CLASS_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS4tree;
DefTableKeyList _AS3_const67;
TreeNodePtr _AS3arr_bounds_tree;
TreeNodePtr _AS3class_args_tree;
TreeNodePtr _AS3orig_tree;
TreeNodePtr _AS3tree;
int _AS3ResolvesToClassSpecifiers;
int _AS3ResolvesToExpressions;
int _AS3IsJustExpressions;
int _AS3IsClassSpecifiers;
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
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3IsClassSpecifiers)),(&( _AS3ResolvesToExpressions)),(&( _AS3ResolvesToClassSpecifiers)),(&( _AS3tree)),(&( _AS3orig_tree)),(&( _AS3class_args_tree)),(&( _AS3arr_bounds_tree)),(&( _AS3_const67)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4,(&( _AS4tree)));
_AVtype_constructor__const67=AppDefTableKeyList(AppDefTableKeyList(AppDefTableKeyList(_AS1_const67, _AS2_const67), _AS3_const67), AppDefTableKeyList(_AVclass_specifier__const67, IDENTICAL(_AVclass_specifier_usedParamList)));
/*SPC(2726)*/
_AVtype_constructor_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_CLASS, _AS4tree, 
((_currn->_ATWithClassArgs
) ? (_AS3tree
) : (_AS2tree))
, NoKey);
/*SPC(9034)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CONSTRUCTOR_CLASS_O(_TPPTYPE_CONSTRUCTOR_CLASS_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS3TYPE_CONSTRUCTOR_CLASS_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_CLASS_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS4tree;
DefTableKeyList _AS3_const67;
TreeNodePtr _AS3arr_bounds_tree;
TreeNodePtr _AS3class_args_tree;
TreeNodePtr _AS3orig_tree;
TreeNodePtr _AS3tree;
int _AS3ResolvesToClassSpecifiers;
int _AS3ResolvesToExpressions;
int _AS3IsJustExpressions;
int _AS3IsClassSpecifiers;
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
_AS3IsJustExpressions=0;
/*SPC(4893)*/
_AVarguments_IsBounds=0;
/*SPC(4891)*/
_currn->_desc3->_ATis_partial_call=0;
/*SPC(2698)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3IsClassSpecifiers)),(&( _AS3IsJustExpressions)),(&( _AS3ResolvesToExpressions)),(&( _AS3ResolvesToClassSpecifiers)),(&( _AS3tree)),(&( _AS3orig_tree)),(&( _AS3class_args_tree)),(&( _AS3arr_bounds_tree)),(&( _AS3_const67)));

if (AND(NOT(_currn->_ATWithClassArgs), NOT(_AVarguments_IsEmpty))) {
message(ERROR, "class has no class parameters and init method could only be called once", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(11302)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4,(&( _AS4tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CONSTRUCTOR_CL_AGG_O(_TPPTYPE_CONSTRUCTOR_CL_AGG_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS1TYPE_CONSTRUCTOR_CL_AGG_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_CL_AGG_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS4tree;
DefTableKeyList _AS3_const67;
TreeNodePtr _AS3orig_tree;
TreeNodePtr _AS3tree;
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
_AS1IsArrayAccessOrSingleId=1;
/*SPC(11287)*/
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1IsArrayAccessOrSingleId)),(&( _AS1IsClassIdUse2)),(&( _AS1ResolvesToSingleId)),(&( _AS1ResolvesToArrayAccessOrSingleId)),(&( _AS1orig_tree)),(&( _AS1class_id_tree)),(&( _AS1arr_bounds_tree)));
_AS2IsClassSpecifiers=1;
/*SPC(11288)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsClassSpecifiers)),(&( _AS2ResolvesToExpressions)),(&( _AS2ResolvesToClassSpecifiers)),(&( _AS2orig_tree)),(&( _AS2class_args_tree)),(&( _AS2arr_bounds_tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3orig_tree)));
_currn->_ATWithClassArgs=0;
/*SPC(11283)*/
(* _AS0class_spec_tree)=
((AND(_AS1ResolvesToArrayAccessOrSingleId, _AS2ResolvesToClassSpecifiers)
) ? (NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_SPECIFIER_O, _AS1class_id_tree, _AS1arr_bounds_tree, _AS2class_args_tree, NoKey)
) : (NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_SPECIFIER_O, NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkCLASS_ID_USE_O, MakeName("SYNTAX_ERROR_CLASS"), NoKey), NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUNDS_O, NULL, NoKey), NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENTS_EMPTY_O, NoKey), NoKey)))
;
/*SPC(10218)*/
{ _currn->_desc4 = (_TSPclass_specifier) Mkclass_specifier(NoPosition, BuildTree((* _AS0class_spec_tree)));
  if ((NODEPTR)_currn->_desc4 == NULLNODEPTR)
    message (DEADLY, "generated tree is not of type class_specifier", 0, NoPosition);
};
/*SPC(10228)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4);
_AVtype_constructor_orig_tree=NewTreeNodeRhs_4_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_CL_AGG_O, _AS1orig_tree, _AS2orig_tree, _AS3orig_tree, (* _AS0class_spec_tree), NoKey);
/*SPC(10086)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_CL_AGG_O(_TPPTYPE_CONSTRUCTOR_CL_AGG_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS2TYPE_CONSTRUCTOR_CL_AGG_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_CL_AGG_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS4tree;
DefTableKeyList _AS3_const67;
TreeNodePtr _AS3orig_tree;
TreeNodePtr _AS3tree;
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
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3tree)),(&( _AS3orig_tree)),(&( _AS3_const67)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4,(&( _AS4tree)));
_AVtype_constructor__const67=AppDefTableKeyList(AppDefTableKeyList(AppDefTableKeyList(_AS1_const67, _AS2_const67), _AS3_const67), AppDefTableKeyList(_AVclass_specifier__const67, IDENTICAL(_AVclass_specifier_usedParamList)));
/*SPC(2725)*/
_AVtype_constructor_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_CL_AGG, _AS4tree, _AS3tree, NoKey);
/*SPC(9029)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CONSTRUCTOR_CL_AGG_O(_TPPTYPE_CONSTRUCTOR_CL_AGG_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS3TYPE_CONSTRUCTOR_CL_AGG_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_CONSTRUCTOR_CL_AGG_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS4tree;
DefTableKeyList _AS3_const67;
TreeNodePtr _AS3orig_tree;
TreeNodePtr _AS3tree;
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
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3tree)),(&( _AS3orig_tree)),(&( _AS3_const67)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4,(&( _AS4tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1QUAL_FEATURE_ID_USE_O(_TPPQUAL_FEATURE_ID_USE_O _currn)
#else
void _VS1QUAL_FEATURE_ID_USE_O(_currn )
_TPPQUAL_FEATURE_ID_USE_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVqual_feature_id_use_orig_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkQUAL_FEATURE_ID_USE_O, _currn->_ATTERM_1, NoKey);
/*SPC(10070)*/
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkQUAL_FEATURE_ID_USE, _currn->_ATTERM_1, NoKey);
/*SPC(9003)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1QUALIFICATION_TYPE_O(_TPPQUALIFICATION_TYPE_O _currn)
#else
void _VS1QUALIFICATION_TYPE_O(_currn )
_TPPQUALIFICATION_TYPE_O _currn;

#endif
{
TreeNodePtr _AS1class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1class_spec_tree)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVqualification_orig_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkQUALIFICATION_TYPE_O, _AVtype_specifier_orig_tree, _AVqual_feature_id_use_orig_tree, NoKey);
/*SPC(10065)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2QUALIFICATION_TYPE_O(_TPPQUALIFICATION_TYPE_O _currn)
#else
void _VS2QUALIFICATION_TYPE_O(_currn )
_TPPQUALIFICATION_TYPE_O _currn;

#endif
{
TreeNodePtr _AS1class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1class_spec_tree)));
_AVqualification__const67=_AVtype_specifier__const67;
/*SPC(2736)*/
_AVqualification_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkQUALIFICATION_TYPE, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8998)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3QUALIFICATION_TYPE_O(_TPPQUALIFICATION_TYPE_O _currn)
#else
void _VS3QUALIFICATION_TYPE_O(_currn )
_TPPQUALIFICATION_TYPE_O _currn;

#endif
{
TreeNodePtr _AS1class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1QUALIFICATION_EXP_O(_TPPQUALIFICATION_EXP_O _currn)
#else
void _VS1QUALIFICATION_EXP_O(_currn )
_TPPQUALIFICATION_EXP_O _currn;

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
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVqualification_orig_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkQUALIFICATION_EXP_O, _AS1orig_tree, _AVqual_feature_id_use_orig_tree, NoKey);
/*SPC(10060)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2QUALIFICATION_EXP_O(_TPPQUALIFICATION_EXP_O _currn)
#else
void _VS2QUALIFICATION_EXP_O(_currn )
_TPPQUALIFICATION_EXP_O _currn;

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
_AVqualification__const67=_AS1_const67;
/*SPC(2735)*/
_AVqualification_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkQUALIFICATION_EXP, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8993)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3QUALIFICATION_EXP_O(_TPPQUALIFICATION_EXP_O _currn)
#else
void _VS3QUALIFICATION_EXP_O(_currn )
_TPPQUALIFICATION_EXP_O _currn;

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
void _VS1STD_METHOD_CALL_O(_TPPSTD_METHOD_CALL_O _currn,int* _AS0IsClassSpecifier)
#else
void _VS1STD_METHOD_CALL_O(_currn ,_AS0IsClassSpecifier)
_TPPSTD_METHOD_CALL_O _currn;
int* _AS0IsClassSpecifier;

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
_AS1IsClassIdUse2=_AVstd_method_call_IsClassIdUse;
/*SPC(4999)*/
_AVdesignator_IsClassIdUse=_currn->_ATIsArrayAccess;
/*SPC(4962)*/
_AS1IsArrayAccessOrSingleId=(* _AS0IsClassSpecifier);
/*SPC(5053)*/
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1IsArrayAccessOrSingleId)),(&( _AS1IsClassIdUse2)),(&( _AS1ResolvesToSingleId)),(&( _AS1ResolvesToArrayAccessOrSingleId)),(&( _AS1orig_tree)),(&( _AS1class_id_tree)),(&( _AS1arr_bounds_tree)));
_AS2IsClassSpecifiers=(* _AS0IsClassSpecifier);
/*SPC(5054)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsClassSpecifiers)),(&( _AS2ResolvesToExpressions)),(&( _AS2ResolvesToClassSpecifiers)),(&( _AS2orig_tree)),(&( _AS2class_args_tree)),(&( _AS2arr_bounds_tree)));
_AVstd_method_call_class_spec_tree=
((AND(EQ(_AS1ResolvesToArrayAccessOrSingleId, 1), EQ(_AS2ResolvesToClassSpecifiers, 1))
) ? (NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_SPECIFIER_O, _AS1class_id_tree, _AS1arr_bounds_tree, _AS2class_args_tree, NoKey)
) : (NULL))
;
/*SPC(10379)*/
_AVstd_method_call_arr_bounds_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUNDS_O, _AS2arr_bounds_tree, NoKey);
/*SPC(10324)*/
_AVstd_method_call_class_id_tree=_AS1class_id_tree;
/*SPC(10323)*/
_AVstd_method_call_orig_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTD_METHOD_CALL_O, _AS1orig_tree, _AS2orig_tree, NoKey);
/*SPC(10054)*/
_AVstd_method_call_ResolvesToClassSpecifier=AND(_AS1ResolvesToArrayAccessOrSingleId, _AS2ResolvesToClassSpecifiers);
/*SPC(5055)*/
_AVstd_method_call_ResolvesToSingleId=AND(EQ(_AS1ResolvesToSingleId, 1), _AVarguments_IsEmptyArguments);
/*SPC(5000)*/
_AVstd_method_call_ResolvesToArrayAccess=AND(EQ(_AS1ResolvesToSingleId, 1), _AS2ResolvesToExpressions);
/*SPC(4964)*/
_AVstd_method_call_Key=_AS1Key;
/*SPC(4086)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STD_METHOD_CALL_O(_TPPSTD_METHOD_CALL_O _currn,int* _AS0IsClassSpecifier)
#else
void _VS2STD_METHOD_CALL_O(_currn ,_AS0IsClassSpecifier)
_TPPSTD_METHOD_CALL_O _currn;
int* _AS0IsClassSpecifier;

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
_AVstd_method_call__const67=AppDefTableKeyList(_AS1_const67, _AS2_const67);
/*SPC(3773)*/
_AVstd_method_call_is_notequal=_AS1is_notequal;
/*SPC(9697)*/
_AVstd_method_call_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTD_METHOD_CALL, _AS1tree, _AS2tree, NoKey);
/*SPC(8987)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STD_METHOD_CALL_O(_TPPSTD_METHOD_CALL_O _currn,int* _AS0IsClassSpecifier)
#else
void _VS3STD_METHOD_CALL_O(_currn ,_AS0IsClassSpecifier)
_TPPSTD_METHOD_CALL_O _currn;
int* _AS0IsClassSpecifier;

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
_AS2IsJustExpressions=_currn->_ATIsArrayAccess;
/*SPC(4963)*/
_AVarguments_IsBounds=0;
/*SPC(4891)*/
_currn->_desc2->_ATis_partial_call=0;
/*SPC(2698)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsClassSpecifiers)),(&( _AS2IsJustExpressions)),(&( _AS2ResolvesToExpressions)),(&( _AS2ResolvesToClassSpecifiers)),(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2class_args_tree)),(&( _AS2arr_bounds_tree)),(&( _AS2_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1OBJ_ID_USE_O(_TPPOBJ_ID_USE_O _currn)
#else
void _VS1OBJ_ID_USE_O(_currn )
_TPPOBJ_ID_USE_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVobj_id_use_Sym=_currn->_ATTERM_1;
/*SPC(4239)*/
_AVobj_id_use_class_id_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkCLASS_ID_USE_O, _currn->_ATTERM_1, NoKey);
/*SPC(10313)*/
_AVobj_id_use_orig_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkOBJ_ID_USE_O, _currn->_ATTERM_1, NoKey);
/*SPC(10049)*/
_AVobj_id_use_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkOBJ_ID_USE, _currn->_ATTERM_1, NoKey);
/*SPC(8983)*/
_AVobj_id_use_Bind=BindingInEnv((* _IG_incl5), _AVobj_id_use_Sym);
/*SPC(12475)*/
_AVobj_id_use_Key=KeyOf(_AVobj_id_use_Bind);
/*SPC(12479)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_NOT_O(_TPPNAME_NOT_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_NOT_O(_currn ,_AS0orig_tree)
_TPPNAME_NOT_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_NOT_O, NoKey);
/*SPC(10041)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_NOT, NoKey);
/*SPC(8979)*/
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
void _VS1NAME_POW_O(_TPPNAME_POW_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_POW_O(_currn ,_AS0orig_tree)
_TPPNAME_POW_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_POW_O, NoKey);
/*SPC(10037)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_POW, NoKey);
/*SPC(8975)*/
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
void _VS1NAME_MOD_O(_TPPNAME_MOD_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_MOD_O(_currn ,_AS0orig_tree)
_TPPNAME_MOD_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_MOD_O, NoKey);
/*SPC(10033)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_MOD, NoKey);
/*SPC(8971)*/
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
void _VS1NAME_DIV_O(_TPPNAME_DIV_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_DIV_O(_currn ,_AS0orig_tree)
_TPPNAME_DIV_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_DIV_O, NoKey);
/*SPC(10029)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_DIV, NoKey);
/*SPC(8967)*/
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
void _VS1NAME_QUOTIENT_O(_TPPNAME_QUOTIENT_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_QUOTIENT_O(_currn ,_AS0orig_tree)
_TPPNAME_QUOTIENT_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_QUOTIENT_O, NoKey);
/*SPC(10021)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_QUOTIENT, NoKey);
/*SPC(8959)*/
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
void _VS1NAME_STAR_O(_TPPNAME_STAR_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_STAR_O(_currn ,_AS0orig_tree)
_TPPNAME_STAR_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkNAME_STAR_O, _currn->_ATTERM_1, NoKey);
/*SPC(10017)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkNAME_STAR, _currn->_ATTERM_1, NoKey);
/*SPC(8955)*/
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
void _VS1NAME_MINUS_O(_TPPNAME_MINUS_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_MINUS_O(_currn ,_AS0orig_tree)
_TPPNAME_MINUS_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_MINUS_O, NoKey);
/*SPC(10013)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_MINUS, NoKey);
/*SPC(8951)*/
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
void _VS1NAME_PLUS_O(_TPPNAME_PLUS_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_PLUS_O(_currn ,_AS0orig_tree)
_TPPNAME_PLUS_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_PLUS_O, NoKey);
/*SPC(10009)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_PLUS, NoKey);
/*SPC(8947)*/
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
void _VS1NAME_GT_EQ_O(_TPPNAME_GT_EQ_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_GT_EQ_O(_currn ,_AS0orig_tree)
_TPPNAME_GT_EQ_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_GT_EQ_O, NoKey);
/*SPC(10005)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_GT_EQ, NoKey);
/*SPC(8943)*/
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
void _VS1NAME_GT_O(_TPPNAME_GT_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_GT_O(_currn ,_AS0orig_tree)
_TPPNAME_GT_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_GT_O, NoKey);
/*SPC(10001)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_GT, NoKey);
/*SPC(8939)*/
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
void _VS1NAME_LT_EQ_O(_TPPNAME_LT_EQ_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_LT_EQ_O(_currn ,_AS0orig_tree)
_TPPNAME_LT_EQ_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_LT_EQ_O, NoKey);
/*SPC(9997)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_LT_EQ, NoKey);
/*SPC(8935)*/
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
void _VS1NAME_LT_O(_TPPNAME_LT_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_LT_O(_currn ,_AS0orig_tree)
_TPPNAME_LT_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_LT_O, NoKey);
/*SPC(9993)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_LT, NoKey);
/*SPC(8931)*/
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
void _VS1NAME_NOT_EQ_O(_TPPNAME_NOT_EQ_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_NOT_EQ_O(_currn ,_AS0orig_tree)
_TPPNAME_NOT_EQ_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_NOT_EQ_O, NoKey);
/*SPC(10045)*/
_currn->_ATis_notequal=1;
/*SPC(9689)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_EQ, NoKey);
/*SPC(9688)*/
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
void _VS1NAME_EQ_O(_TPPNAME_EQ_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_EQ_O(_currn ,_AS0orig_tree)
_TPPNAME_EQ_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_EQ_O, NoKey);
/*SPC(9989)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_EQ, NoKey);
/*SPC(8927)*/
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
void _VS1NAME_QUESTION_O(_TPPNAME_QUESTION_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_QUESTION_O(_currn ,_AS0orig_tree)
_TPPNAME_QUESTION_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_QUESTION_O, NoKey);
/*SPC(9985)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_QUESTION, NoKey);
/*SPC(8923)*/
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
void _VS1NAME_GRAVE_O(_TPPNAME_GRAVE_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_GRAVE_O(_currn ,_AS0orig_tree)
_TPPNAME_GRAVE_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_GRAVE_O, NoKey);
/*SPC(9981)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_GRAVE, NoKey);
/*SPC(8919)*/
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
void _VS1NAME_TILDE_O(_TPPNAME_TILDE_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_TILDE_O(_currn ,_AS0orig_tree)
_TPPNAME_TILDE_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_TILDE_O, NoKey);
/*SPC(9977)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_TILDE, NoKey);
/*SPC(8915)*/
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
void _VS1NAME_STROKE_O(_TPPNAME_STROKE_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_STROKE_O(_currn ,_AS0orig_tree)
_TPPNAME_STROKE_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_STROKE_O, NoKey);
/*SPC(9973)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_STROKE, NoKey);
/*SPC(8911)*/
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
void _VS1NAME_BACKSLASH_O(_TPPNAME_BACKSLASH_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_BACKSLASH_O(_currn ,_AS0orig_tree)
_TPPNAME_BACKSLASH_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_BACKSLASH_O, NoKey);
/*SPC(9969)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_BACKSLASH, NoKey);
/*SPC(8907)*/
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
void _VS1NAME_STR_IN_O(_TPPNAME_STR_IN_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_STR_IN_O(_currn ,_AS0orig_tree)
_TPPNAME_STR_IN_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_STR_IN_O, NoKey);
/*SPC(9965)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_STR_IN, NoKey);
/*SPC(8903)*/
_currn->_ATstr_in_or_out=1;
/*SPC(7345)*/
_AVname_IsLeftBracket=0;
/*SPC(4909)*/
_AVname_ResolvesToSingleId=0;
/*SPC(4908)*/
_AVname_Key=NoKey;
/*SPC(4062)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_STR_OUT_O(_TPPNAME_STR_OUT_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_STR_OUT_O(_currn ,_AS0orig_tree)
_TPPNAME_STR_OUT_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_STR_OUT_O, NoKey);
/*SPC(9961)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_STR_OUT, NoKey);
/*SPC(8899)*/
_currn->_ATstr_in_or_out=2;
/*SPC(7342)*/
_AVname_IsLeftBracket=0;
/*SPC(4909)*/
_AVname_ResolvesToSingleId=0;
/*SPC(4908)*/
_AVname_Key=NoKey;
/*SPC(4062)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_EMPTY_O(_TPPNAME_EMPTY_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_EMPTY_O(_currn ,_AS0orig_tree)
_TPPNAME_EMPTY_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_EMPTY_O, NoKey);
/*SPC(9957)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_EMPTY, NoKey);
/*SPC(8895)*/
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
void _VS1NAME_OBJ_O(_TPPNAME_OBJ_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_OBJ_O(_currn ,_AS0orig_tree)
_TPPNAME_OBJ_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVobj_id_use_IsClassIdUse=_AVname_IsClassIdUse;
/*SPC(4952)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVname_class_id_tree=_AVobj_id_use_class_id_tree;
/*SPC(10309)*/
(* _AS0orig_tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkNAME_OBJ_O, _AVobj_id_use_orig_tree, NoKey);
/*SPC(9952)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkNAME_OBJ, _AVobj_id_use_tree, NoKey);
/*SPC(8891)*/
_currn->_ATstr_in_or_out=0;
/*SPC(7338)*/
_AVname_IsLeftBracket=0;
/*SPC(4909)*/
_AVname_ResolvesToSingleId=1;
/*SPC(4951)*/
_AVname_Key=_AVobj_id_use_Key;
/*SPC(4082)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_LEFT_SQ_BRACKET_O(_TPPNAME_LEFT_SQ_BRACKET_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1NAME_LEFT_SQ_BRACKET_O(_currn ,_AS0orig_tree)
_TPPNAME_LEFT_SQ_BRACKET_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVname_class_id_tree=NULL;
/*SPC(10274)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_LEFT_SQ_BRACKET_O, NoKey);
/*SPC(9948)*/
_currn->_ATis_notequal=0;
/*SPC(9680)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_LEFT_SQ_BRACKET, NoKey);
/*SPC(8887)*/
_currn->_ATstr_in_or_out=0;
/*SPC(7338)*/
_AVname_IsLeftBracket=1;
/*SPC(4990)*/
_AVname_ResolvesToSingleId=0;
/*SPC(4908)*/
_AVname_Key=NoKey;
/*SPC(4062)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_EMPTY_O(_TPPEXPRESSION_EMPTY_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1EXPRESSION_EMPTY_O(_currn ,_AS0orig_tree)
_TPPEXPRESSION_EMPTY_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVexpression_class_spec_tree=NULL;
/*SPC(10279)*/
_AVexpression_class_id_tree=NULL;
/*SPC(10278)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkEXPRESSION_EMPTY_O, NoKey);
/*SPC(9922)*/
_AVexpression_ResolvesToClassSpecifier=0;
/*SPC(4917)*/
_AVexpression_ResolvesToSingleId=0;
/*SPC(4914)*/
_AVexpression_Key=NoKey;
/*SPC(4066)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_EMPTY_O(_TPPEXPRESSION_EMPTY_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2EXPRESSION_EMPTY_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_EMPTY_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

if (EQ(_AVexpression_str_in_or_out, 1)) {
message(WARNING, "this syntax is deprecated, use TEXT::sin", 0, (&( _currn->_AT_pos)));

} else {

if (EQ(_AVexpression_str_in_or_out, 2)) {
message(WARNING, "this syntax is deprecated, use TEXT::sout", 0, (&( _currn->_AT_pos)));

} else {
}
;
}
;
/*SPC(7356)*/
(* _AS0_const67)=NullDefTableKeyList();
/*SPC(4787)*/
(* _AS0tree)=
((NOT(_AVexpression_str_in_or_out)
) ? (NULL
) : (NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_METH, NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTD_METHOD_CALL, NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkDESIGNATOR_QUAL, NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkQUALIFICATION_TYPE, NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_CL, NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_SPECIFIER, NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkCLASS_ID_USE, MakeName("TEXT"), NoKey), NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUNDS, NULL, NoKey), NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENTS_EMPTY, NoKey), NoKey), NoKey), NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkQUAL_FEATURE_ID_USE, 
((EQ(_AVexpression_str_in_or_out, 1)
) ? (MakeName("sin")
) : (MakeName("sout")))
, NoKey), NoKey), NoKey), NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkARGUMENTS_EMPTY, NoKey), NoKey), NoKey)))
;
/*SPC(7360)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3EXPRESSION_EMPTY_O(_TPPEXPRESSION_EMPTY_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3EXPRESSION_EMPTY_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_EMPTY_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_AND_O(_TPPEXPRESSION_AND_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1EXPRESSION_AND_O(_currn ,_AS0orig_tree)
_TPPEXPRESSION_AND_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
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
_AVexpression_IsClassSpecifier=0;
/*SPC(4918)*/
_AVexpression_IsClassIdUse=0;
/*SPC(4916)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2orig_tree)));
_AVexpression_class_spec_tree=NULL;
/*SPC(10279)*/
_AVexpression_class_id_tree=NULL;
/*SPC(10278)*/
(* _AS0orig_tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkEXPRESSION_AND_O, _AS1orig_tree, _AS2orig_tree, NoKey);
/*SPC(9942)*/
_AVexpression_ResolvesToClassSpecifier=0;
/*SPC(4917)*/
_AVexpression_ResolvesToSingleId=0;
/*SPC(4914)*/
_AVexpression_Key=NoKey;
/*SPC(4066)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_AND_O(_TPPEXPRESSION_AND_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2EXPRESSION_AND_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_AND_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_str_in_or_out=0;
/*SPC(7334)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
_AVexpression_str_in_or_out=0;
/*SPC(7334)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2_const67)));
(* _AS0_const67)=AppDefTableKeyList(_AS1_const67, _AS2_const67);
/*SPC(4786)*/
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkEXPRESSION_AND, _AS1tree, _AS2tree, NoKey);
/*SPC(8881)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3EXPRESSION_AND_O(_TPPEXPRESSION_AND_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3EXPRESSION_AND_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_AND_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_IsBound=0;
/*SPC(11350)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
_AVexpression_IsBound=0;
/*SPC(11350)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_OR_O(_TPPEXPRESSION_OR_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1EXPRESSION_OR_O(_currn ,_AS0orig_tree)
_TPPEXPRESSION_OR_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
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
_AVexpression_IsClassSpecifier=0;
/*SPC(4918)*/
_AVexpression_IsClassIdUse=0;
/*SPC(4916)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2orig_tree)));
_AVexpression_class_spec_tree=NULL;
/*SPC(10279)*/
_AVexpression_class_id_tree=NULL;
/*SPC(10278)*/
(* _AS0orig_tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkEXPRESSION_OR_O, _AS1orig_tree, _AS2orig_tree, NoKey);
/*SPC(9936)*/
_AVexpression_ResolvesToClassSpecifier=0;
/*SPC(4917)*/
_AVexpression_ResolvesToSingleId=0;
/*SPC(4914)*/
_AVexpression_Key=NoKey;
/*SPC(4066)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_OR_O(_TPPEXPRESSION_OR_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2EXPRESSION_OR_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_OR_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_str_in_or_out=0;
/*SPC(7334)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
_AVexpression_str_in_or_out=0;
/*SPC(7334)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2_const67)));
(* _AS0_const67)=AppDefTableKeyList(_AS1_const67, _AS2_const67);
/*SPC(4785)*/
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkEXPRESSION_OR, _AS1tree, _AS2tree, NoKey);
/*SPC(8875)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3EXPRESSION_OR_O(_TPPEXPRESSION_OR_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3EXPRESSION_OR_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_OR_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_IsBound=0;
/*SPC(11350)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
_AVexpression_IsBound=0;
/*SPC(11350)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)),(&( _AS2orig_tree)),(&( _AS2_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_STREAM_O(_TPPEXPRESSION_STREAM_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1EXPRESSION_STREAM_O(_currn ,_AS0orig_tree)
_TPPEXPRESSION_STREAM_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVexpression_class_spec_tree=NULL;
/*SPC(10279)*/
_AVexpression_class_id_tree=NULL;
/*SPC(10278)*/
(* _AS0orig_tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_STREAM_O, _AVdirect_stream_call_orig_tree, NoKey);
/*SPC(9930)*/
_AVexpression_ResolvesToClassSpecifier=0;
/*SPC(4917)*/
_AVexpression_ResolvesToSingleId=0;
/*SPC(4914)*/
_AVexpression_Key=NoKey;
/*SPC(4066)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_STREAM_O(_TPPEXPRESSION_STREAM_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2EXPRESSION_STREAM_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_STREAM_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const67)=_AVdirect_stream_call__const67;
/*SPC(2716)*/
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_STREAM, _AVdirect_stream_call_tree, NoKey);
/*SPC(8870)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3EXPRESSION_STREAM_O(_TPPEXPRESSION_STREAM_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3EXPRESSION_STREAM_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_STREAM_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_METH_O(_TPPEXPRESSION_METH_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1EXPRESSION_METH_O(_currn ,_AS0orig_tree)
_TPPEXPRESSION_METH_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{
int _AS1IsClassSpecifier;

_VisitVarDecl()
_VisitEntry();
_AS1IsClassSpecifier=_AVexpression_IsClassSpecifier;
/*SPC(5049)*/
_AVstd_method_call_IsClassIdUse=_AVexpression_IsClassIdUse;
/*SPC(4995)*/
_currn->_desc1->_ATIsArrayAccess=0;
/*SPC(4899)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsClassSpecifier)));
_AVexpression_class_spec_tree=_AVstd_method_call_class_spec_tree;
/*SPC(10375)*/
_AVexpression_class_id_tree=_AVstd_method_call_class_id_tree;
/*SPC(10333)*/
(* _AS0orig_tree)=_AVstd_method_call_orig_tree;
/*SPC(9926)*/
_AVexpression_ResolvesToClassSpecifier=_AVstd_method_call_ResolvesToClassSpecifier;
/*SPC(5047)*/
_AVexpression_ResolvesToSingleId=_AVstd_method_call_ResolvesToSingleId;
/*SPC(4994)*/
_AVexpression_Key=_AVstd_method_call_Key;
/*SPC(4090)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_METH_O(_TPPEXPRESSION_METH_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2EXPRESSION_METH_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_METH_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{
int _AS1IsClassSpecifier;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsClassSpecifier)));
(* _AS0_const67)=_AVstd_method_call__const67;
/*SPC(2715)*/
(* _AS0tree)=
((NOT(_AVstd_method_call_is_notequal)
) ? (NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_METH, _AVstd_method_call_tree, NoKey)
) : (NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_METH, NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTD_METHOD_CALL, NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkDESIGNATOR_EXP, NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_METH, _AVstd_method_call_tree, NoKey), NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_NOT, NoKey), NoKey), NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkARGUMENTS_EMPTY, NoKey), NoKey), NoKey)))
;
/*SPC(9701)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3EXPRESSION_METH_O(_TPPEXPRESSION_METH_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3EXPRESSION_METH_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_METH_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{
int _AS1IsClassSpecifier;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsClassSpecifier)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_COERCION_O(_TPPEXPRESSION_COERCION_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1EXPRESSION_COERCION_O(_currn ,_AS0orig_tree)
_TPPEXPRESSION_COERCION_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVexpression_class_spec_tree=NULL;
/*SPC(10279)*/
_AVexpression_class_id_tree=NULL;
/*SPC(10278)*/
(* _AS0orig_tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_COERCION_O, _AVcoercion_orig_tree, NoKey);
/*SPC(9917)*/
_AVexpression_ResolvesToClassSpecifier=0;
/*SPC(4917)*/
_AVexpression_ResolvesToSingleId=0;
/*SPC(4914)*/
_AVexpression_Key=NoKey;
/*SPC(4066)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_COERCION_O(_TPPEXPRESSION_COERCION_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2EXPRESSION_COERCION_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_COERCION_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const67)=_AVcoercion__const67;
/*SPC(2714)*/
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_COERCION, _AVcoercion_tree, NoKey);
/*SPC(8865)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3EXPRESSION_COERCION_O(_TPPEXPRESSION_COERCION_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3EXPRESSION_COERCION_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_COERCION_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_VALUE_O(_TPPEXPRESSION_VALUE_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1EXPRESSION_VALUE_O(_currn ,_AS0orig_tree)
_TPPEXPRESSION_VALUE_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVexpression_class_spec_tree=NULL;
/*SPC(10279)*/
_AVexpression_class_id_tree=NULL;
/*SPC(10278)*/
(* _AS0orig_tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_VALUE_O, _AVvalue_orig_tree, NoKey);
/*SPC(9912)*/
_AVexpression_ResolvesToClassSpecifier=0;
/*SPC(4917)*/
_AVexpression_ResolvesToSingleId=0;
/*SPC(4914)*/
_AVexpression_Key=NoKey;
/*SPC(4066)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_VALUE_O(_TPPEXPRESSION_VALUE_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2EXPRESSION_VALUE_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_VALUE_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const67)=NullDefTableKeyList();
/*SPC(2712)*/
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_VALUE, _currn->_desc1->_ATtree, NoKey);
/*SPC(8860)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3EXPRESSION_VALUE_O(_TPPEXPRESSION_VALUE_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3EXPRESSION_VALUE_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_VALUE_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_BOUND_O(_TPPEXPRESSION_BOUND_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1EXPRESSION_BOUND_O(_currn ,_AS0orig_tree)
_TPPEXPRESSION_BOUND_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVexpression_class_spec_tree=NULL;
/*SPC(10279)*/
_AVexpression_class_id_tree=NULL;
/*SPC(10278)*/
(* _AS0orig_tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_BOUND_O, _AVbound_method_orig_tree, NoKey);
/*SPC(9907)*/
_AVexpression_ResolvesToClassSpecifier=0;
/*SPC(4917)*/
_AVexpression_ResolvesToSingleId=0;
/*SPC(4914)*/
_AVexpression_Key=NoKey;
/*SPC(4066)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_BOUND_O(_TPPEXPRESSION_BOUND_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2EXPRESSION_BOUND_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_BOUND_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const67)=_AVbound_method__const67;
/*SPC(2711)*/
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_BOUND, _AVbound_method_tree, NoKey);
/*SPC(8855)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3EXPRESSION_BOUND_O(_TPPEXPRESSION_BOUND_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3EXPRESSION_BOUND_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_BOUND_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_CONS_O(_TPPEXPRESSION_CONS_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1EXPRESSION_CONS_O(_currn ,_AS0orig_tree)
_TPPEXPRESSION_CONS_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{
TreeNodePtr _AS1class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1class_spec_tree)));
_AVexpression_class_spec_tree=NULL;
/*SPC(10279)*/
_AVexpression_class_id_tree=NULL;
/*SPC(10278)*/
(* _AS0orig_tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_CONS_O, _AVtype_constructor_orig_tree, NoKey);
/*SPC(9902)*/
_AVexpression_ResolvesToClassSpecifier=0;
/*SPC(4917)*/
_AVexpression_ResolvesToSingleId=0;
/*SPC(4914)*/
_AVexpression_Key=NoKey;
/*SPC(4066)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_CONS_O(_TPPEXPRESSION_CONS_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2EXPRESSION_CONS_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_CONS_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1class_spec_tree)));
(* _AS0_const67)=_AVtype_constructor__const67;
/*SPC(2710)*/
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_CONS, _AVtype_constructor_tree, NoKey);
/*SPC(8850)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3EXPRESSION_CONS_O(_TPPEXPRESSION_CONS_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3EXPRESSION_CONS_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_CONS_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_STAR_O(_TPPEXPRESSION_STAR_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1EXPRESSION_STAR_O(_currn ,_AS0orig_tree)
_TPPEXPRESSION_STAR_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVexpression_class_spec_tree=NULL;
/*SPC(10279)*/
_AVexpression_class_id_tree=NULL;
/*SPC(10278)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkEXPRESSION_STAR_O, _currn->_ATTERM_1, NoKey);
/*SPC(9898)*/
_AVexpression_ResolvesToClassSpecifier=0;
/*SPC(4917)*/
_AVexpression_ResolvesToSingleId=0;
/*SPC(4914)*/
_AVexpression_Key=NoKey;
/*SPC(4066)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_STAR_O(_TPPEXPRESSION_STAR_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2EXPRESSION_STAR_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_STAR_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const67)=NullDefTableKeyList();
/*SPC(2713)*/
(* _AS0tree)=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkEXPRESSION_STAR, _currn->_ATTERM_1, NoKey);
/*SPC(8846)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3EXPRESSION_STAR_O(_TPPEXPRESSION_STAR_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3EXPRESSION_STAR_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPEXPRESSION_STAR_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

if (EQ(_AVexpression_IsBound, 0)) {
message(ERROR, "syntax error, * only allowed as class bound", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(11359)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1DESIGNATOR_QUAL_O(_TPPDESIGNATOR_QUAL_O _currn,DefTableKey* _AS0Key,int* _AS0IsArrayAccessOrSingleId,int* _AS0IsClassIdUse2,int* _AS0ResolvesToSingleId,int* _AS0ResolvesToArrayAccessOrSingleId,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_id_tree,TreeNodePtr* _AS0arr_bounds_tree)
#else
void _VS1DESIGNATOR_QUAL_O(_currn ,_AS0Key,_AS0IsArrayAccessOrSingleId,_AS0IsClassIdUse2,_AS0ResolvesToSingleId,_AS0ResolvesToArrayAccessOrSingleId,_AS0orig_tree,_AS0class_id_tree,_AS0arr_bounds_tree)
_TPPDESIGNATOR_QUAL_O _currn;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_id_tree;
TreeNodePtr* _AS0orig_tree;
int* _AS0ResolvesToArrayAccessOrSingleId;
int* _AS0ResolvesToSingleId;
int* _AS0IsClassIdUse2;
int* _AS0IsArrayAccessOrSingleId;
DefTableKey* _AS0Key;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0arr_bounds_tree)=NULL;
/*SPC(10270)*/
(* _AS0class_id_tree)=NULL;
/*SPC(10269)*/
(* _AS0orig_tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkDESIGNATOR_QUAL_O, _AVqualification_orig_tree, NoKey);
/*SPC(9893)*/
(* _AS0ResolvesToArrayAccessOrSingleId)=0;
/*SPC(4886)*/
(* _AS0ResolvesToSingleId)=0;
/*SPC(4884)*/
(* _AS0Key)=NoKey;
/*SPC(4058)*/

if (AND(EQ((* _AS0IsArrayAccessOrSingleId), 1), EQ((* _AS0ResolvesToArrayAccessOrSingleId), 0))) {
message(ERROR, "syntax error, class identifier with or without bounds expected", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(4940)*/

if (AND(EQ((* _AS0IsClassIdUse2), 1), EQ((* _AS0ResolvesToSingleId), 0))) {
message(ERROR, "syntax error, class identifier expected", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5019)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2DESIGNATOR_QUAL_O(_TPPDESIGNATOR_QUAL_O _currn,DefTableKey* _AS0Key,int* _AS0IsArrayAccessOrSingleId,int* _AS0IsClassIdUse2,int* _AS0ResolvesToSingleId,int* _AS0ResolvesToArrayAccessOrSingleId,TreeNodePtr* _AS0tree,int* _AS0is_notequal,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_id_tree,TreeNodePtr* _AS0arr_bounds_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2DESIGNATOR_QUAL_O(_currn ,_AS0Key,_AS0IsArrayAccessOrSingleId,_AS0IsClassIdUse2,_AS0ResolvesToSingleId,_AS0ResolvesToArrayAccessOrSingleId,_AS0tree,_AS0is_notequal,_AS0orig_tree,_AS0class_id_tree,_AS0arr_bounds_tree,_AS0_const67)
_TPPDESIGNATOR_QUAL_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_id_tree;
TreeNodePtr* _AS0orig_tree;
int* _AS0is_notequal;
TreeNodePtr* _AS0tree;
int* _AS0ResolvesToArrayAccessOrSingleId;
int* _AS0ResolvesToSingleId;
int* _AS0IsClassIdUse2;
int* _AS0IsArrayAccessOrSingleId;
DefTableKey* _AS0Key;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const67)=_AVqualification__const67;
/*SPC(2717)*/
(* _AS0is_notequal)=0;
/*SPC(9684)*/
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkDESIGNATOR_QUAL, _AVqualification_tree, NoKey);
/*SPC(8841)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3DESIGNATOR_QUAL_O(_TPPDESIGNATOR_QUAL_O _currn,DefTableKey* _AS0Key,int* _AS0IsArrayAccessOrSingleId,int* _AS0IsClassIdUse2,int* _AS0ResolvesToSingleId,int* _AS0ResolvesToArrayAccessOrSingleId,TreeNodePtr* _AS0tree,int* _AS0is_notequal,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_id_tree,TreeNodePtr* _AS0arr_bounds_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3DESIGNATOR_QUAL_O(_currn ,_AS0Key,_AS0IsArrayAccessOrSingleId,_AS0IsClassIdUse2,_AS0ResolvesToSingleId,_AS0ResolvesToArrayAccessOrSingleId,_AS0tree,_AS0is_notequal,_AS0orig_tree,_AS0class_id_tree,_AS0arr_bounds_tree,_AS0_const67)
_TPPDESIGNATOR_QUAL_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_id_tree;
TreeNodePtr* _AS0orig_tree;
int* _AS0is_notequal;
TreeNodePtr* _AS0tree;
int* _AS0ResolvesToArrayAccessOrSingleId;
int* _AS0ResolvesToSingleId;
int* _AS0IsClassIdUse2;
int* _AS0IsArrayAccessOrSingleId;
DefTableKey* _AS0Key;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVdesignator_ResolvesToArrayAccess=0;
/*SPC(4885)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1DESIGNATOR_METH_O(_TPPDESIGNATOR_METH_O _currn,DefTableKey* _AS0Key,int* _AS0IsArrayAccessOrSingleId,int* _AS0IsClassIdUse2,int* _AS0ResolvesToSingleId,int* _AS0ResolvesToArrayAccessOrSingleId,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_id_tree,TreeNodePtr* _AS0arr_bounds_tree)
#else
void _VS1DESIGNATOR_METH_O(_currn ,_AS0Key,_AS0IsArrayAccessOrSingleId,_AS0IsClassIdUse2,_AS0ResolvesToSingleId,_AS0ResolvesToArrayAccessOrSingleId,_AS0orig_tree,_AS0class_id_tree,_AS0arr_bounds_tree)
_TPPDESIGNATOR_METH_O _currn;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_id_tree;
TreeNodePtr* _AS0orig_tree;
int* _AS0ResolvesToArrayAccessOrSingleId;
int* _AS0ResolvesToSingleId;
int* _AS0IsClassIdUse2;
int* _AS0IsArrayAccessOrSingleId;
DefTableKey* _AS0Key;

#endif
{
int _AS1IsClassSpecifier;

_VisitVarDecl()
_VisitEntry();
_AS1IsClassSpecifier=0;
/*SPC(4904)*/
_AVstd_method_call_IsClassIdUse=0;
/*SPC(4901)*/
_currn->_desc1->_ATIsArrayAccess=(* _AS0IsArrayAccessOrSingleId);
/*SPC(4956)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsClassSpecifier)));
(* _AS0arr_bounds_tree)=_AVstd_method_call_arr_bounds_tree;
/*SPC(10319)*/
(* _AS0class_id_tree)=_AVstd_method_call_class_id_tree;
/*SPC(10318)*/
(* _AS0orig_tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkDESIGNATOR_METH_O, _AVstd_method_call_orig_tree, NoKey);
/*SPC(9888)*/
(* _AS0ResolvesToArrayAccessOrSingleId)=_AVstd_method_call_ResolvesToArrayAccess;
/*SPC(4957)*/
(* _AS0ResolvesToSingleId)=0;
/*SPC(4884)*/
(* _AS0Key)=_AVstd_method_call_Key;
/*SPC(4074)*/

if (AND(EQ((* _AS0IsArrayAccessOrSingleId), 1), EQ((* _AS0ResolvesToArrayAccessOrSingleId), 0))) {
message(ERROR, "syntax error, class identifier with or without bounds expected", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(4940)*/

if (AND(EQ((* _AS0IsClassIdUse2), 1), EQ((* _AS0ResolvesToSingleId), 0))) {
message(ERROR, "syntax error, class identifier expected", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5019)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2DESIGNATOR_METH_O(_TPPDESIGNATOR_METH_O _currn,DefTableKey* _AS0Key,int* _AS0IsArrayAccessOrSingleId,int* _AS0IsClassIdUse2,int* _AS0ResolvesToSingleId,int* _AS0ResolvesToArrayAccessOrSingleId,TreeNodePtr* _AS0tree,int* _AS0is_notequal,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_id_tree,TreeNodePtr* _AS0arr_bounds_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2DESIGNATOR_METH_O(_currn ,_AS0Key,_AS0IsArrayAccessOrSingleId,_AS0IsClassIdUse2,_AS0ResolvesToSingleId,_AS0ResolvesToArrayAccessOrSingleId,_AS0tree,_AS0is_notequal,_AS0orig_tree,_AS0class_id_tree,_AS0arr_bounds_tree,_AS0_const67)
_TPPDESIGNATOR_METH_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_id_tree;
TreeNodePtr* _AS0orig_tree;
int* _AS0is_notequal;
TreeNodePtr* _AS0tree;
int* _AS0ResolvesToArrayAccessOrSingleId;
int* _AS0ResolvesToSingleId;
int* _AS0IsClassIdUse2;
int* _AS0IsArrayAccessOrSingleId;
DefTableKey* _AS0Key;

#endif
{
int _AS1IsClassSpecifier;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsClassSpecifier)));
(* _AS0_const67)=_AVstd_method_call__const67;
/*SPC(2721)*/
(* _AS0is_notequal)=0;
/*SPC(9684)*/
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkDESIGNATOR_METH, _AVstd_method_call_tree, NoKey);
/*SPC(8836)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3DESIGNATOR_METH_O(_TPPDESIGNATOR_METH_O _currn,DefTableKey* _AS0Key,int* _AS0IsArrayAccessOrSingleId,int* _AS0IsClassIdUse2,int* _AS0ResolvesToSingleId,int* _AS0ResolvesToArrayAccessOrSingleId,TreeNodePtr* _AS0tree,int* _AS0is_notequal,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_id_tree,TreeNodePtr* _AS0arr_bounds_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3DESIGNATOR_METH_O(_currn ,_AS0Key,_AS0IsArrayAccessOrSingleId,_AS0IsClassIdUse2,_AS0ResolvesToSingleId,_AS0ResolvesToArrayAccessOrSingleId,_AS0tree,_AS0is_notequal,_AS0orig_tree,_AS0class_id_tree,_AS0arr_bounds_tree,_AS0_const67)
_TPPDESIGNATOR_METH_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_id_tree;
TreeNodePtr* _AS0orig_tree;
int* _AS0is_notequal;
TreeNodePtr* _AS0tree;
int* _AS0ResolvesToArrayAccessOrSingleId;
int* _AS0ResolvesToSingleId;
int* _AS0IsClassIdUse2;
int* _AS0IsArrayAccessOrSingleId;
DefTableKey* _AS0Key;

#endif
{
int _AS1IsClassSpecifier;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsClassSpecifier)));
_AVdesignator_ResolvesToArrayAccess=0;
/*SPC(4885)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1DESIGNATOR_EXP_O(_TPPDESIGNATOR_EXP_O _currn,DefTableKey* _AS0Key,int* _AS0IsArrayAccessOrSingleId,int* _AS0IsClassIdUse2,int* _AS0ResolvesToSingleId,int* _AS0ResolvesToArrayAccessOrSingleId,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_id_tree,TreeNodePtr* _AS0arr_bounds_tree)
#else
void _VS1DESIGNATOR_EXP_O(_currn ,_AS0Key,_AS0IsArrayAccessOrSingleId,_AS0IsClassIdUse2,_AS0ResolvesToSingleId,_AS0ResolvesToArrayAccessOrSingleId,_AS0orig_tree,_AS0class_id_tree,_AS0arr_bounds_tree)
_TPPDESIGNATOR_EXP_O _currn;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_id_tree;
TreeNodePtr* _AS0orig_tree;
int* _AS0ResolvesToArrayAccessOrSingleId;
int* _AS0ResolvesToSingleId;
int* _AS0IsClassIdUse2;
int* _AS0IsArrayAccessOrSingleId;
DefTableKey* _AS0Key;

#endif
{
TreeNodePtr _AS2orig_tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_IsClassSpecifier=0;
/*SPC(4918)*/
_AVexpression_IsClassIdUse=_AVdesignator_IsClassIdUse;
/*SPC(4986)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
_AVname_IsClassIdUse=0;
/*SPC(4910)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2orig_tree)));
(* _AS0arr_bounds_tree)=NULL;
/*SPC(10270)*/
(* _AS0class_id_tree)=_AVexpression_class_id_tree;
/*SPC(10329)*/
(* _AS0orig_tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkDESIGNATOR_EXP_O, _AS1orig_tree, _AS2orig_tree, NoKey);
/*SPC(9882)*/
(* _AS0ResolvesToArrayAccessOrSingleId)=0;
/*SPC(4886)*/
(* _AS0ResolvesToSingleId)=AND(EQ(_AVexpression_ResolvesToSingleId, 1), EQ(_AVname_IsLeftBracket, 1));
/*SPC(4982)*/
(* _AS0Key)=_AVexpression_Key;
/*SPC(4078)*/

if (AND(EQ((* _AS0IsArrayAccessOrSingleId), 1), EQ((* _AS0ResolvesToArrayAccessOrSingleId), 0))) {
message(ERROR, "syntax error, class identifier with or without bounds expected", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(4940)*/

if (AND(EQ((* _AS0IsClassIdUse2), 1), EQ((* _AS0ResolvesToSingleId), 0))) {
message(ERROR, "syntax error, class identifier expected", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5019)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2DESIGNATOR_EXP_O(_TPPDESIGNATOR_EXP_O _currn,DefTableKey* _AS0Key,int* _AS0IsArrayAccessOrSingleId,int* _AS0IsClassIdUse2,int* _AS0ResolvesToSingleId,int* _AS0ResolvesToArrayAccessOrSingleId,TreeNodePtr* _AS0tree,int* _AS0is_notequal,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_id_tree,TreeNodePtr* _AS0arr_bounds_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2DESIGNATOR_EXP_O(_currn ,_AS0Key,_AS0IsArrayAccessOrSingleId,_AS0IsClassIdUse2,_AS0ResolvesToSingleId,_AS0ResolvesToArrayAccessOrSingleId,_AS0tree,_AS0is_notequal,_AS0orig_tree,_AS0class_id_tree,_AS0arr_bounds_tree,_AS0_const67)
_TPPDESIGNATOR_EXP_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_id_tree;
TreeNodePtr* _AS0orig_tree;
int* _AS0is_notequal;
TreeNodePtr* _AS0tree;
int* _AS0ResolvesToArrayAccessOrSingleId;
int* _AS0ResolvesToSingleId;
int* _AS0IsClassIdUse2;
int* _AS0IsArrayAccessOrSingleId;
DefTableKey* _AS0Key;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_str_in_or_out=_currn->_desc2->_ATstr_in_or_out;
/*SPC(7349)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
(* _AS0_const67)=_AS1_const67;
/*SPC(2720)*/
(* _AS0is_notequal)=_currn->_desc2->_ATis_notequal;
/*SPC(9693)*/
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkDESIGNATOR_EXP, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8831)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3DESIGNATOR_EXP_O(_TPPDESIGNATOR_EXP_O _currn,DefTableKey* _AS0Key,int* _AS0IsArrayAccessOrSingleId,int* _AS0IsClassIdUse2,int* _AS0ResolvesToSingleId,int* _AS0ResolvesToArrayAccessOrSingleId,TreeNodePtr* _AS0tree,int* _AS0is_notequal,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_id_tree,TreeNodePtr* _AS0arr_bounds_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3DESIGNATOR_EXP_O(_currn ,_AS0Key,_AS0IsArrayAccessOrSingleId,_AS0IsClassIdUse2,_AS0ResolvesToSingleId,_AS0ResolvesToArrayAccessOrSingleId,_AS0tree,_AS0is_notequal,_AS0orig_tree,_AS0class_id_tree,_AS0arr_bounds_tree,_AS0_const67)
_TPPDESIGNATOR_EXP_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_id_tree;
TreeNodePtr* _AS0orig_tree;
int* _AS0is_notequal;
TreeNodePtr* _AS0tree;
int* _AS0ResolvesToArrayAccessOrSingleId;
int* _AS0ResolvesToSingleId;
int* _AS0IsClassIdUse2;
int* _AS0IsArrayAccessOrSingleId;
DefTableKey* _AS0Key;

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
_AVdesignator_ResolvesToArrayAccess=0;
/*SPC(4885)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1DESIGNATOR_NAME_O(_TPPDESIGNATOR_NAME_O _currn,DefTableKey* _AS0Key,int* _AS0IsArrayAccessOrSingleId,int* _AS0IsClassIdUse2,int* _AS0ResolvesToSingleId,int* _AS0ResolvesToArrayAccessOrSingleId,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_id_tree,TreeNodePtr* _AS0arr_bounds_tree)
#else
void _VS1DESIGNATOR_NAME_O(_currn ,_AS0Key,_AS0IsArrayAccessOrSingleId,_AS0IsClassIdUse2,_AS0ResolvesToSingleId,_AS0ResolvesToArrayAccessOrSingleId,_AS0orig_tree,_AS0class_id_tree,_AS0arr_bounds_tree)
_TPPDESIGNATOR_NAME_O _currn;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_id_tree;
TreeNodePtr* _AS0orig_tree;
int* _AS0ResolvesToArrayAccessOrSingleId;
int* _AS0ResolvesToSingleId;
int* _AS0IsClassIdUse2;
int* _AS0IsArrayAccessOrSingleId;
DefTableKey* _AS0Key;

#endif
{
TreeNodePtr _AS1orig_tree;

_VisitVarDecl()
_VisitEntry();
_AVname_IsClassIdUse=OR(EQ((* _AS0IsArrayAccessOrSingleId), 1), EQ((* _AS0IsClassIdUse2), 1));
/*SPC(4945)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
(* _AS0arr_bounds_tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUNDS_O, NULL, NoKey);
/*SPC(10304)*/
(* _AS0class_id_tree)=_AVname_class_id_tree;
/*SPC(10303)*/
(* _AS0orig_tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkDESIGNATOR_NAME_O, _AS1orig_tree, NoKey);
/*SPC(9877)*/
(* _AS0ResolvesToArrayAccessOrSingleId)=_AVname_ResolvesToSingleId;
/*SPC(4944)*/
(* _AS0ResolvesToSingleId)=_AVname_ResolvesToSingleId;
/*SPC(5012)*/
(* _AS0Key)=_AVname_Key;
/*SPC(4070)*/

if (AND(EQ((* _AS0IsArrayAccessOrSingleId), 1), EQ((* _AS0ResolvesToArrayAccessOrSingleId), 0))) {
message(ERROR, "syntax error, class identifier with or without bounds expected", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(4940)*/

if (AND(EQ((* _AS0IsClassIdUse2), 1), EQ((* _AS0ResolvesToSingleId), 0))) {
message(ERROR, "syntax error, class identifier expected", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5019)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2DESIGNATOR_NAME_O(_TPPDESIGNATOR_NAME_O _currn,DefTableKey* _AS0Key,int* _AS0IsArrayAccessOrSingleId,int* _AS0IsClassIdUse2,int* _AS0ResolvesToSingleId,int* _AS0ResolvesToArrayAccessOrSingleId,TreeNodePtr* _AS0tree,int* _AS0is_notequal,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_id_tree,TreeNodePtr* _AS0arr_bounds_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2DESIGNATOR_NAME_O(_currn ,_AS0Key,_AS0IsArrayAccessOrSingleId,_AS0IsClassIdUse2,_AS0ResolvesToSingleId,_AS0ResolvesToArrayAccessOrSingleId,_AS0tree,_AS0is_notequal,_AS0orig_tree,_AS0class_id_tree,_AS0arr_bounds_tree,_AS0_const67)
_TPPDESIGNATOR_NAME_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_id_tree;
TreeNodePtr* _AS0orig_tree;
int* _AS0is_notequal;
TreeNodePtr* _AS0tree;
int* _AS0ResolvesToArrayAccessOrSingleId;
int* _AS0ResolvesToSingleId;
int* _AS0IsClassIdUse2;
int* _AS0IsArrayAccessOrSingleId;
DefTableKey* _AS0Key;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const67)=NullDefTableKeyList();
/*SPC(2719)*/
(* _AS0is_notequal)=0;
/*SPC(9684)*/
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkDESIGNATOR_NAME, _currn->_desc1->_ATtree, NoKey);
/*SPC(8827)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3DESIGNATOR_NAME_O(_TPPDESIGNATOR_NAME_O _currn,DefTableKey* _AS0Key,int* _AS0IsArrayAccessOrSingleId,int* _AS0IsClassIdUse2,int* _AS0ResolvesToSingleId,int* _AS0ResolvesToArrayAccessOrSingleId,TreeNodePtr* _AS0tree,int* _AS0is_notequal,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_id_tree,TreeNodePtr* _AS0arr_bounds_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3DESIGNATOR_NAME_O(_currn ,_AS0Key,_AS0IsArrayAccessOrSingleId,_AS0IsClassIdUse2,_AS0ResolvesToSingleId,_AS0ResolvesToArrayAccessOrSingleId,_AS0tree,_AS0is_notequal,_AS0orig_tree,_AS0class_id_tree,_AS0arr_bounds_tree,_AS0_const67)
_TPPDESIGNATOR_NAME_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_id_tree;
TreeNodePtr* _AS0orig_tree;
int* _AS0is_notequal;
TreeNodePtr* _AS0tree;
int* _AS0ResolvesToArrayAccessOrSingleId;
int* _AS0ResolvesToSingleId;
int* _AS0IsClassIdUse2;
int* _AS0IsArrayAccessOrSingleId;
DefTableKey* _AS0Key;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVdesignator_ResolvesToArrayAccess=0;
/*SPC(4885)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ARGUMENT_EMPTY_O(_TPPARGUMENT_EMPTY_O _currn,int* _AS0IsClassSpecifier)
#else
void _VS1ARGUMENT_EMPTY_O(_currn ,_AS0IsClassSpecifier)
_TPPARGUMENT_EMPTY_O _currn;
int* _AS0IsClassSpecifier;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVargument_class_spec_tree=NULL;
/*SPC(10284)*/
_AVargument_arr_bound_tree=NULL;
/*SPC(10283)*/
_AVargument_orig_tree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkARGUMENT_EMPTY_O, NoKey);
/*SPC(9873)*/
_AVargument_ResolvesToClassSpecifier=0;
/*SPC(4926)*/
_currn->_ATResolvesToExpression=0;
/*SPC(4923)*/

if (AND(EQ((* _AS0IsClassSpecifier), 1), EQ(_AVargument_ResolvesToClassSpecifier, 0))) {
message(ERROR, "syntax error, class specifier expected", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5064)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ARGUMENT_EMPTY_O(_TPPARGUMENT_EMPTY_O _currn,int* _AS0IsClassSpecifier)
#else
void _VS2ARGUMENT_EMPTY_O(_currn ,_AS0IsClassSpecifier)
_TPPARGUMENT_EMPTY_O _currn;
int* _AS0IsClassSpecifier;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVargument__const67=NullDefTableKeyList();
/*SPC(2705)*/
_AVargument_tree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkARGUMENT_EMPTY, NoKey);
/*SPC(8823)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ARGUMENT_EMPTY_O(_TPPARGUMENT_EMPTY_O _currn,int* _AS0IsClassSpecifier)
#else
void _VS3ARGUMENT_EMPTY_O(_currn ,_AS0IsClassSpecifier)
_TPPARGUMENT_EMPTY_O _currn;
int* _AS0IsClassSpecifier;

#endif
{

_VisitVarDecl()
_VisitEntry();

if (AND(EQ(_AVargument_IsJustExpression, 1), EQ(_currn->_ATResolvesToExpression, 0))) {
message(ERROR, "syntax error, expression expected", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5026)*/

if (EQ((* _IG_incl9), 0)) {
message(FATAL, "syntax error, empty argument only allowed in partial calls", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(2707)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ARGUMENT_INOUT_O(_TPPARGUMENT_INOUT_O _currn,int* _AS0IsClassSpecifier)
#else
void _VS1ARGUMENT_INOUT_O(_currn ,_AS0IsClassSpecifier)
_TPPARGUMENT_INOUT_O _currn;
int* _AS0IsClassSpecifier;

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
_AVargument_class_spec_tree=NULL;
/*SPC(10284)*/
_AVargument_arr_bound_tree=NULL;
/*SPC(10283)*/
_AVargument_orig_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkARGUMENT_INOUT_O, _AS1orig_tree, NoKey);
/*SPC(9868)*/
_AVargument_ResolvesToClassSpecifier=0;
/*SPC(4926)*/
_currn->_ATResolvesToExpression=0;
/*SPC(4923)*/

if (AND(EQ((* _AS0IsClassSpecifier), 1), EQ(_AVargument_ResolvesToClassSpecifier, 0))) {
message(ERROR, "syntax error, class specifier expected", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5064)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ARGUMENT_INOUT_O(_TPPARGUMENT_INOUT_O _currn,int* _AS0IsClassSpecifier)
#else
void _VS2ARGUMENT_INOUT_O(_currn ,_AS0IsClassSpecifier)
_TPPARGUMENT_INOUT_O _currn;
int* _AS0IsClassSpecifier;

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
_AVargument__const67=_AS1_const67;
/*SPC(3778)*/
_AVargument_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkARGUMENT_INOUT, _AS1tree, NoKey);
/*SPC(8818)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ARGUMENT_INOUT_O(_TPPARGUMENT_INOUT_O _currn,int* _AS0IsClassSpecifier)
#else
void _VS3ARGUMENT_INOUT_O(_currn ,_AS0IsClassSpecifier)
_TPPARGUMENT_INOUT_O _currn;
int* _AS0IsClassSpecifier;

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

if (AND(EQ(_AVargument_IsJustExpression, 1), EQ(_currn->_ATResolvesToExpression, 0))) {
message(ERROR, "syntax error, expression expected", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5026)*/
_AVdesignator_IsArrayAccess=0;
/*SPC(4881)*/
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*,int*,int*,TreeNodePtr*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1IsArrayAccessOrSingleId)),(&( _AS1IsClassIdUse2)),(&( _AS1ResolvesToSingleId)),(&( _AS1ResolvesToArrayAccessOrSingleId)),(&( _AS1tree)),(&( _AS1is_notequal)),(&( _AS1orig_tree)),(&( _AS1class_id_tree)),(&( _AS1arr_bounds_tree)),(&( _AS1_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ARGUMENT_OUT_O(_TPPARGUMENT_OUT_O _currn,int* _AS0IsClassSpecifier)
#else
void _VS1ARGUMENT_OUT_O(_currn ,_AS0IsClassSpecifier)
_TPPARGUMENT_OUT_O _currn;
int* _AS0IsClassSpecifier;

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
_AVargument_class_spec_tree=NULL;
/*SPC(10284)*/
_AVargument_arr_bound_tree=NULL;
/*SPC(10283)*/
_AVargument_orig_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkARGUMENT_OUT_O, _AS1orig_tree, NoKey);
/*SPC(9863)*/
_AVargument_ResolvesToClassSpecifier=0;
/*SPC(4926)*/
_currn->_ATResolvesToExpression=0;
/*SPC(4923)*/

if (AND(EQ((* _AS0IsClassSpecifier), 1), EQ(_AVargument_ResolvesToClassSpecifier, 0))) {
message(ERROR, "syntax error, class specifier expected", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5064)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ARGUMENT_OUT_O(_TPPARGUMENT_OUT_O _currn,int* _AS0IsClassSpecifier)
#else
void _VS2ARGUMENT_OUT_O(_currn ,_AS0IsClassSpecifier)
_TPPARGUMENT_OUT_O _currn;
int* _AS0IsClassSpecifier;

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
_AVargument__const67=_AS1_const67;
/*SPC(3777)*/
_AVargument_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkARGUMENT_OUT, _AS1tree, NoKey);
/*SPC(8813)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ARGUMENT_OUT_O(_TPPARGUMENT_OUT_O _currn,int* _AS0IsClassSpecifier)
#else
void _VS3ARGUMENT_OUT_O(_currn ,_AS0IsClassSpecifier)
_TPPARGUMENT_OUT_O _currn;
int* _AS0IsClassSpecifier;

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

if (AND(EQ(_AVargument_IsJustExpression, 1), EQ(_currn->_ATResolvesToExpression, 0))) {
message(ERROR, "syntax error, expression expected", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5026)*/
_AVdesignator_IsArrayAccess=0;
/*SPC(4881)*/
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*,int*,int*,TreeNodePtr*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1IsArrayAccessOrSingleId)),(&( _AS1IsClassIdUse2)),(&( _AS1ResolvesToSingleId)),(&( _AS1ResolvesToArrayAccessOrSingleId)),(&( _AS1tree)),(&( _AS1is_notequal)),(&( _AS1orig_tree)),(&( _AS1class_id_tree)),(&( _AS1arr_bounds_tree)),(&( _AS1_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ARGUMENT_EXP_O(_TPPARGUMENT_EXP_O _currn,int* _AS0IsClassSpecifier)
#else
void _VS1ARGUMENT_EXP_O(_currn ,_AS0IsClassSpecifier)
_TPPARGUMENT_EXP_O _currn;
int* _AS0IsClassSpecifier;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_IsClassSpecifier=(* _AS0IsClassSpecifier);
/*SPC(5043)*/
_AVexpression_IsClassIdUse=0;
/*SPC(4916)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
_AVargument_class_spec_tree=
((EQ(_AVexpression_class_spec_tree, NULL)
) ? (NULL
) : (NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENT_O, _AVexpression_class_spec_tree, NoKey)))
;
/*SPC(10369)*/
_AVargument_arr_bound_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUND_EXP_O, _AS1orig_tree, NoKey);
/*SPC(10349)*/
_AVargument_orig_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkARGUMENT_EXP_O, _AS1orig_tree, NoKey);
/*SPC(9858)*/
_AVargument_ResolvesToClassSpecifier=_AVexpression_ResolvesToClassSpecifier;
/*SPC(5042)*/
_currn->_ATResolvesToExpression=1;
/*SPC(4977)*/

if (AND(EQ((* _AS0IsClassSpecifier), 1), EQ(_AVargument_ResolvesToClassSpecifier, 0))) {
message(ERROR, "syntax error, class specifier expected", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5064)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ARGUMENT_EXP_O(_TPPARGUMENT_EXP_O _currn,int* _AS0IsClassSpecifier)
#else
void _VS2ARGUMENT_EXP_O(_currn ,_AS0IsClassSpecifier)
_TPPARGUMENT_EXP_O _currn;
int* _AS0IsClassSpecifier;

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
_AVargument__const67=_AS1_const67;
/*SPC(3776)*/
_AVargument_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkARGUMENT_EXP, _AS1tree, NoKey);
/*SPC(8808)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ARGUMENT_EXP_O(_TPPARGUMENT_EXP_O _currn,int* _AS0IsClassSpecifier)
#else
void _VS3ARGUMENT_EXP_O(_currn ,_AS0IsClassSpecifier)
_TPPARGUMENT_EXP_O _currn;
int* _AS0IsClassSpecifier;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();

if (AND(EQ(_AVargument_IsJustExpression, 1), EQ(_currn->_ATResolvesToExpression, 0))) {
message(ERROR, "syntax error, expression expected", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5026)*/
_AVexpression_IsBound=_AVargument_IsJustExpression;
/*SPC(4978)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ARGUMENTS_LST_O(_TPPARGUMENTS_LST_O _currn,int* _AS0IsClassSpecifiers,int* _AS0ResolvesToExpressions,int* _AS0ResolvesToClassSpecifiers,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_args_tree,TreeNodePtr* _AS0arr_bounds_tree)
#else
void _VS1ARGUMENTS_LST_O(_currn ,_AS0IsClassSpecifiers,_AS0ResolvesToExpressions,_AS0ResolvesToClassSpecifiers,_AS0orig_tree,_AS0class_args_tree,_AS0arr_bounds_tree)
_TPPARGUMENTS_LST_O _currn;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_args_tree;
TreeNodePtr* _AS0orig_tree;
int* _AS0ResolvesToClassSpecifiers;
int* _AS0ResolvesToExpressions;
int* _AS0IsClassSpecifiers;

#endif
{
int _AS2IsClassSpecifier;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1arr_bounds_tree;
TreeNodePtr _AS1class_args_tree;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;
int _AS1ResolvesToClassSpecifiers;
int _AS1ResolvesToExpressions;
int _AS1IsJustExpressions;
int _AS1IsClassSpecifiers;

_VisitVarDecl()
_VisitEntry();
_AS1IsClassSpecifiers=(* _AS0IsClassSpecifiers);
/*SPC(5031)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsClassSpecifiers)),(&( _AS1ResolvesToExpressions)),(&( _AS1ResolvesToClassSpecifiers)),(&( _AS1orig_tree)),(&( _AS1class_args_tree)),(&( _AS1arr_bounds_tree)));
_AS2IsClassSpecifier=(* _AS0IsClassSpecifiers);
/*SPC(5030)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsClassSpecifier)));
(* _AS0arr_bounds_tree)=
((EQ(_AVargument_arr_bound_tree, NULL)
) ? (_AS1arr_bounds_tree
) : (NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2BOUNDS_O, _AS1arr_bounds_tree, _AVargument_arr_bound_tree, NoKey)))
;
/*SPC(10337)*/
(* _AS0class_args_tree)=
((EQ(_AVargument_class_spec_tree, NULL)
) ? (_AS1class_args_tree
) : (NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENTS_LST_O, _AS1class_args_tree, _AVargument_class_spec_tree, NoKey)))
;
/*SPC(10356)*/
(* _AS0orig_tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkARGUMENTS_LST_O, _AS1orig_tree, _AVargument_orig_tree, NoKey);
/*SPC(9852)*/
(* _AS0ResolvesToClassSpecifiers)=AND(_AS1ResolvesToClassSpecifiers, _AVargument_ResolvesToClassSpecifier);
/*SPC(5032)*/
(* _AS0ResolvesToExpressions)=AND(_AS1ResolvesToExpressions, _currn->_desc2->_ATResolvesToExpression);
/*SPC(4972)*/
_AVarguments_IsEmptyArguments=0;
/*SPC(4892)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ARGUMENTS_LST_O(_TPPARGUMENTS_LST_O _currn,int* _AS0IsClassSpecifiers,int* _AS0ResolvesToExpressions,int* _AS0ResolvesToClassSpecifiers,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_args_tree,TreeNodePtr* _AS0arr_bounds_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2ARGUMENTS_LST_O(_currn ,_AS0IsClassSpecifiers,_AS0ResolvesToExpressions,_AS0ResolvesToClassSpecifiers,_AS0tree,_AS0orig_tree,_AS0class_args_tree,_AS0arr_bounds_tree,_AS0_const67)
_TPPARGUMENTS_LST_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_args_tree;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;
int* _AS0ResolvesToClassSpecifiers;
int* _AS0ResolvesToExpressions;
int* _AS0IsClassSpecifiers;

#endif
{
int _AS2IsClassSpecifier;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1arr_bounds_tree;
TreeNodePtr _AS1class_args_tree;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;
int _AS1ResolvesToClassSpecifiers;
int _AS1ResolvesToExpressions;
int _AS1IsJustExpressions;
int _AS1IsClassSpecifiers;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsClassSpecifiers)),(&( _AS1ResolvesToExpressions)),(&( _AS1ResolvesToClassSpecifiers)),(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1class_args_tree)),(&( _AS1arr_bounds_tree)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR ,int*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsClassSpecifier)));
(* _AS0_const67)=AppDefTableKeyList(_AS1_const67, _AVargument__const67);
/*SPC(2701)*/
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkARGUMENTS_LST, _AS1tree, _AVargument_tree, NoKey);
/*SPC(8802)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ARGUMENTS_LST_O(_TPPARGUMENTS_LST_O _currn,int* _AS0IsClassSpecifiers,int* _AS0IsJustExpressions,int* _AS0ResolvesToExpressions,int* _AS0ResolvesToClassSpecifiers,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_args_tree,TreeNodePtr* _AS0arr_bounds_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3ARGUMENTS_LST_O(_currn ,_AS0IsClassSpecifiers,_AS0IsJustExpressions,_AS0ResolvesToExpressions,_AS0ResolvesToClassSpecifiers,_AS0tree,_AS0orig_tree,_AS0class_args_tree,_AS0arr_bounds_tree,_AS0_const67)
_TPPARGUMENTS_LST_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_args_tree;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;
int* _AS0ResolvesToClassSpecifiers;
int* _AS0ResolvesToExpressions;
int* _AS0IsJustExpressions;
int* _AS0IsClassSpecifiers;

#endif
{
int* _IL_incl9;
int _AS2IsClassSpecifier;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1arr_bounds_tree;
TreeNodePtr _AS1class_args_tree;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;
int _AS1ResolvesToClassSpecifiers;
int _AS1ResolvesToExpressions;
int _AS1IsJustExpressions;
int _AS1IsClassSpecifiers;

_VisitVarDecl()
_VisitEntry();
_IL_incl9=_IG_incl9;_IG_incl9= &(_currn->_ATis_partial_call);
_AS1IsJustExpressions=(* _AS0IsJustExpressions);
/*SPC(4970)*/
_AVarguments_IsBounds=0;
/*SPC(4891)*/
_currn->_desc1->_ATis_partial_call=_currn->_ATis_partial_call;
/*SPC(2702)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsClassSpecifiers)),(&( _AS1IsJustExpressions)),(&( _AS1ResolvesToExpressions)),(&( _AS1ResolvesToClassSpecifiers)),(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1class_args_tree)),(&( _AS1arr_bounds_tree)),(&( _AS1_const67)));
_AVargument_IsJustExpression=(* _AS0IsJustExpressions);
/*SPC(4971)*/
_AVargument_IsBound=0;
/*SPC(4924)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsClassSpecifier)));
_AVarguments_IsEmpty=0;
/*SPC(11284)*/
_IG_incl9=_IL_incl9;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ARGUMENTS_EMPTY_O(_TPPARGUMENTS_EMPTY_O _currn,int* _AS0IsClassSpecifiers,int* _AS0ResolvesToExpressions,int* _AS0ResolvesToClassSpecifiers,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_args_tree,TreeNodePtr* _AS0arr_bounds_tree)
#else
void _VS1ARGUMENTS_EMPTY_O(_currn ,_AS0IsClassSpecifiers,_AS0ResolvesToExpressions,_AS0ResolvesToClassSpecifiers,_AS0orig_tree,_AS0class_args_tree,_AS0arr_bounds_tree)
_TPPARGUMENTS_EMPTY_O _currn;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_args_tree;
TreeNodePtr* _AS0orig_tree;
int* _AS0ResolvesToClassSpecifiers;
int* _AS0ResolvesToExpressions;
int* _AS0IsClassSpecifiers;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0arr_bounds_tree)=NULL;
/*SPC(10345)*/
(* _AS0class_args_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENTS_EMPTY_O, NoKey);
/*SPC(10364)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkARGUMENTS_EMPTY_O, NoKey);
/*SPC(9848)*/
(* _AS0ResolvesToClassSpecifiers)=1;
/*SPC(5038)*/
(* _AS0ResolvesToExpressions)=1;
/*SPC(5008)*/
_AVarguments_IsEmptyArguments=1;
/*SPC(5007)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ARGUMENTS_EMPTY_O(_TPPARGUMENTS_EMPTY_O _currn,int* _AS0IsClassSpecifiers,int* _AS0ResolvesToExpressions,int* _AS0ResolvesToClassSpecifiers,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_args_tree,TreeNodePtr* _AS0arr_bounds_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2ARGUMENTS_EMPTY_O(_currn ,_AS0IsClassSpecifiers,_AS0ResolvesToExpressions,_AS0ResolvesToClassSpecifiers,_AS0tree,_AS0orig_tree,_AS0class_args_tree,_AS0arr_bounds_tree,_AS0_const67)
_TPPARGUMENTS_EMPTY_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_args_tree;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;
int* _AS0ResolvesToClassSpecifiers;
int* _AS0ResolvesToExpressions;
int* _AS0IsClassSpecifiers;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const67)=NullDefTableKeyList();
/*SPC(3774)*/
(* _AS0tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkARGUMENTS_EMPTY, NoKey);
/*SPC(8798)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ARGUMENTS_EMPTY_O(_TPPARGUMENTS_EMPTY_O _currn,int* _AS0IsClassSpecifiers,int* _AS0IsJustExpressions,int* _AS0ResolvesToExpressions,int* _AS0ResolvesToClassSpecifiers,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,TreeNodePtr* _AS0class_args_tree,TreeNodePtr* _AS0arr_bounds_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3ARGUMENTS_EMPTY_O(_currn ,_AS0IsClassSpecifiers,_AS0IsJustExpressions,_AS0ResolvesToExpressions,_AS0ResolvesToClassSpecifiers,_AS0tree,_AS0orig_tree,_AS0class_args_tree,_AS0arr_bounds_tree,_AS0_const67)
_TPPARGUMENTS_EMPTY_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0arr_bounds_tree;
TreeNodePtr* _AS0class_args_tree;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;
int* _AS0ResolvesToClassSpecifiers;
int* _AS0ResolvesToExpressions;
int* _AS0IsJustExpressions;
int* _AS0IsClassSpecifiers;

#endif
{
int* _IL_incl9;

_VisitVarDecl()
_VisitEntry();
_IL_incl9=_IG_incl9;_IG_incl9= &(_currn->_ATis_partial_call);
_AVarguments_IsEmpty=1;
/*SPC(11292)*/
_IG_incl9=_IL_incl9;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BOUND_EXP_O(_TPPBOUND_EXP_O _currn)
#else
void _VS1BOUND_EXP_O(_currn )
_TPPBOUND_EXP_O _currn;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVboundBoundPtg_post=PTGCommaSeq(_AVboundBoundPtg_post, PTGIdent("*"));
/*SPC(3954)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BOUND_EXP_O(_TPPBOUND_EXP_O _currn,TreeNodePtr* _AS0bounds_orig_tree_pre)
#else
void _VS2BOUND_EXP_O(_currn ,_AS0bounds_orig_tree_pre)
_TPPBOUND_EXP_O _currn;
TreeNodePtr* _AS0bounds_orig_tree_pre;

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
_AVbound_orig_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUND_EXP_O, _AS1orig_tree, NoKey);
/*SPC(9843)*/
_AVboundbounds_orig_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2BOUNDS_O, (* _AS0bounds_orig_tree_pre), _AVbound_orig_tree, NoKey);
/*SPC(9838)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BOUND_EXP_O(_TPPBOUND_EXP_O _currn,int* _AS0BoundCount_pre,TreeNodePtr* _AS0bounds_tree_pre,TreeNodePtr* _AS0starbounds_tree_pre,TreeNodePtr* _AS0bounds_orig_tree_pre,DefTableKeyList* _AS0_const67)
#else
void _VS3BOUND_EXP_O(_currn ,_AS0BoundCount_pre,_AS0bounds_tree_pre,_AS0starbounds_tree_pre,_AS0bounds_orig_tree_pre,_AS0_const67)
_TPPBOUND_EXP_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0bounds_orig_tree_pre;
TreeNodePtr* _AS0starbounds_tree_pre;
TreeNodePtr* _AS0bounds_tree_pre;
int* _AS0BoundCount_pre;

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
(* _AS0_const67)=_AS1_const67;
/*SPC(109)*/
_AVboundBoundCount_post=ADD(1, (* _AS0BoundCount_pre));
/*SPC(49)*/
_AVbound_starbound_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUND_EXP, NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkEXPRESSION_STAR, MakeName("*"), NoKey), NoKey);
/*SPC(8793)*/
_AVbound_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUND_EXP, _AS1tree, NoKey);
/*SPC(8792)*/
_AVboundstarbounds_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2BOUNDS, (* _AS0starbounds_tree_pre), _AVbound_starbound_tree, NoKey);
/*SPC(8787)*/
_AVboundbounds_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2BOUNDS, (* _AS0bounds_tree_pre), _AVbound_tree, NoKey);
/*SPC(8785)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4BOUND_EXP_O(_TPPBOUND_EXP_O _currn,int* _AS0BoundCount_pre,int* _AS0ClassBoundCount_pre,TreeNodePtr* _AS0bounds_tree_pre,TreeNodePtr* _AS0starbounds_tree_pre,TreeNodePtr* _AS0bounds_orig_tree_pre,DefTableKeyList* _AS0_const67)
#else
void _VS4BOUND_EXP_O(_currn ,_AS0BoundCount_pre,_AS0ClassBoundCount_pre,_AS0bounds_tree_pre,_AS0starbounds_tree_pre,_AS0bounds_orig_tree_pre,_AS0_const67)
_TPPBOUND_EXP_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0bounds_orig_tree_pre;
TreeNodePtr* _AS0starbounds_tree_pre;
TreeNodePtr* _AS0bounds_tree_pre;
int* _AS0ClassBoundCount_pre;
int* _AS0BoundCount_pre;

#endif
{
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVexpression_IsBound=1;
/*SPC(11354)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
_AVboundClassBoundCount_post=ADD((* _AS0ClassBoundCount_pre), 1);
/*SPC(2876)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BOUNDS_O(_TPPBOUNDS_O _currn)
#else
void _VS1BOUNDS_O(_currn )
_TPPBOUNDS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVboundBoundPtg_post=PTGNULL;
/*SPC(3949)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATClassBoundsPtg=_AVboundBoundPtg_post;
/*SPC(3950)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BOUNDS_O(_TPPBOUNDS_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS2BOUNDS_O(_currn ,_AS0orig_tree)
_TPPBOUNDS_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVboundbounds_orig_tree_post=NULL;
/*SPC(9832)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0orig_tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUNDS_O, _AVboundbounds_orig_tree_post, NoKey);
/*SPC(9833)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BOUNDS_O(_TPPBOUNDS_O _currn,int* _AS0BoundCnt,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0starbound_tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3BOUNDS_O(_currn ,_AS0BoundCnt,_AS0tree,_AS0starbound_tree,_AS0orig_tree,_AS0_const67)
_TPPBOUNDS_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0starbound_tree;
TreeNodePtr* _AS0tree;
int* _AS0BoundCnt;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVboundstarbounds_tree_post=NULL;
/*SPC(8770)*/
_AVboundbounds_tree_post=NULL;
/*SPC(8769)*/
_AVboundBoundCount_post=0;
/*SPC(44)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const67)=_AVLST_bounds__const67;
/*SPC(108)*/
(* _AS0starbound_tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUNDS, 
((AND((* _IG_incl10), EQ(_AVboundstarbounds_tree_post, NULL))
) ? (NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2BOUNDS, NULL, NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkEXPRESSION_STAR, MakeName("*"), NoKey), NoKey)
) : (_AVboundstarbounds_tree_post))
, NoKey);
/*SPC(8777)*/
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUNDS, 
((AND((* _IG_incl10), EQ(_AVboundbounds_tree_post, NULL))
) ? (NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2BOUNDS, NULL, NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkEXPRESSION_STAR, MakeName("*"), NoKey), NoKey)
) : (_AVboundbounds_tree_post))
, NoKey);
/*SPC(8771)*/
(* _AS0BoundCnt)=_AVboundBoundCount_post;
/*SPC(45)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4BOUNDS_O(_TPPBOUNDS_O _currn,int* _AS0BoundCnt,int* _AS0ClassBoundCnt,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0starbound_tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS4BOUNDS_O(_currn ,_AS0BoundCnt,_AS0ClassBoundCnt,_AS0tree,_AS0starbound_tree,_AS0orig_tree,_AS0_const67)
_TPPBOUNDS_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0starbound_tree;
TreeNodePtr* _AS0tree;
int* _AS0ClassBoundCnt;
int* _AS0BoundCnt;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVboundClassBoundCount_post=0;
/*SPC(2871)*/
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0ClassBoundCnt)=_AVboundClassBoundCount_post;
/*SPC(2872)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ID_USE_O(_TPPCLASS_ID_USE_O _currn)
#else
void _VS1CLASS_ID_USE_O(_currn )
_TPPCLASS_ID_USE_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATClassBoundsPtg=PTGIdent(StringTable(_currn->_ATTERM_1));
/*SPC(3959)*/
_AVclass_id_use_OrigSym=_currn->_ATTERM_1;
/*SPC(3958)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_ID_USE_O(_TPPCLASS_ID_USE_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS2CLASS_ID_USE_O(_currn ,_AS0orig_tree)
_TPPCLASS_ID_USE_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVclass_id_use_Bind=BindingInEnv((* _IG_incl5), _AVclass_id_use_Sym);
/*SPC(12475)*/
(* _AS0orig_tree)=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkCLASS_ID_USE_O, _currn->_ATTERM_1, NoKey);
/*SPC(9825)*/
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkCLASS_ID_USE, _AVclass_id_use_ArraySym, NoKey);
/*SPC(8761)*/
_currn->_ATKey=KeyOf(_AVclass_id_use_Bind);
/*SPC(12479)*/
_AVbuiltin_optionRefClasses_post=AddToSetDefTableKeyList(_currn->_ATKey, _AVbuiltin_optionRefClasses_post, CmpDefTableKey);
/*SPC(2903)*/

if (EQ(_currn->_ATKey, NoKey)) {
message(FATAL, CatStrInd("identifier is not defined: ", _AVclass_id_use_Sym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(12510)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_ID_USE_O(_TPPCLASS_ID_USE_O _currn,TreeNodePtr* _AS0orig_tree,int* _AS0ClassArgCount_post)
#else
void _VS3CLASS_ID_USE_O(_currn ,_AS0orig_tree,_AS0ClassArgCount_post)
_TPPCLASS_ID_USE_O _currn;
int* _AS0ClassArgCount_post;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0ClassArgCount_post)=_AVclass_argumentClassArgCount_post;
/*SPC(0)*/
_AVclass_id_use_IsFirstOcc=SetGetFirstOcc(_currn->_ATKey, 1, 0);
/*SPC(12412)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_KIND_INOUT_O(_TPPPARAMETER_KIND_INOUT_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1PARAMETER_KIND_INOUT_O(_currn ,_AS0orig_tree)
_TPPPARAMETER_KIND_INOUT_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkPARAMETER_KIND_INOUT_O, NoKey);
/*SPC(9820)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkPARAMETER_KIND_INOUT, NoKey);
/*SPC(8757)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_KIND_OUT_O(_TPPPARAMETER_KIND_OUT_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1PARAMETER_KIND_OUT_O(_currn ,_AS0orig_tree)
_TPPPARAMETER_KIND_OUT_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkPARAMETER_KIND_OUT_O, NoKey);
/*SPC(9815)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkPARAMETER_KIND_OUT, NoKey);
/*SPC(8753)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_KIND_ONCE_O(_TPPPARAMETER_KIND_ONCE_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1PARAMETER_KIND_ONCE_O(_currn ,_AS0orig_tree)
_TPPPARAMETER_KIND_ONCE_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkPARAMETER_KIND_ONCE_O, NoKey);
/*SPC(9810)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkPARAMETER_KIND_ONCE, NoKey);
/*SPC(8749)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_KIND_IN_O(_TPPPARAMETER_KIND_IN_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1PARAMETER_KIND_IN_O(_currn ,_AS0orig_tree)
_TPPPARAMETER_KIND_IN_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkPARAMETER_KIND_IN_O, NoKey);
/*SPC(9805)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkPARAMETER_KIND_IN, NoKey);
/*SPC(8745)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_TYPE_O(_TPPPARAMETER_TYPE_O _currn,TreeNodePtr* _AS0parameter_types_orig_tree_pre)
#else
void _VS1PARAMETER_TYPE_O(_currn ,_AS0parameter_types_orig_tree_pre)
_TPPPARAMETER_TYPE_O _currn;
TreeNodePtr* _AS0parameter_types_orig_tree_pre;

#endif
{
TreeNodePtr _AS2class_spec_tree;
TreeNodePtr _AS1orig_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));
_AVparameter_type_orig_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkPARAMETER_TYPE_O, _AS1orig_tree, _AVtype_specifier_orig_tree, NoKey);
/*SPC(9799)*/
_AVparameter_typeparameter_types_orig_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2PARAMETER_TYPES_O, (* _AS0parameter_types_orig_tree_pre), _AVparameter_type_orig_tree, NoKey);
/*SPC(9795)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2PARAMETER_TYPE_O(_TPPPARAMETER_TYPE_O _currn,TreeNodePtr* _AS0parameter_types_tree_pre,TreeNodePtr* _AS0parameter_types_orig_tree_pre,DefTableKeyList* _AS0_const67)
#else
void _VS2PARAMETER_TYPE_O(_currn ,_AS0parameter_types_tree_pre,_AS0parameter_types_orig_tree_pre,_AS0_const67)
_TPPPARAMETER_TYPE_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0parameter_types_orig_tree_pre;
TreeNodePtr* _AS0parameter_types_tree_pre;

#endif
{
TreeNodePtr _AS2class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));
(* _AS0_const67)=_AVtype_specifier__const67;
/*SPC(134)*/
_AVparameter_type_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkPARAMETER_TYPE, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8739)*/
_AVparameter_typeparameter_types_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2PARAMETER_TYPES, (* _AS0parameter_types_tree_pre), _AVparameter_type_tree, NoKey);
/*SPC(8735)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3PARAMETER_TYPE_O(_TPPPARAMETER_TYPE_O _currn,TreeNodePtr* _AS0parameter_types_tree_pre,TreeNodePtr* _AS0parameter_types_orig_tree_pre,DefTableKeyList* _AS0_const67)
#else
void _VS3PARAMETER_TYPE_O(_currn ,_AS0parameter_types_tree_pre,_AS0parameter_types_orig_tree_pre,_AS0_const67)
_TPPPARAMETER_TYPE_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0parameter_types_orig_tree_pre;
TreeNodePtr* _AS0parameter_types_tree_pre;

#endif
{
TreeNodePtr _AS2class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_TYPES_O(_TPPPARAMETER_TYPES_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1PARAMETER_TYPES_O(_currn ,_AS0orig_tree)
_TPPPARAMETER_TYPES_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVparameter_typeparameter_types_orig_tree_post=NULL;
/*SPC(9789)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0orig_tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkPARAMETER_TYPES_O, _AVparameter_typeparameter_types_orig_tree_post, NoKey);
/*SPC(9790)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2PARAMETER_TYPES_O(_TPPPARAMETER_TYPES_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2PARAMETER_TYPES_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPPARAMETER_TYPES_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVparameter_typeparameter_types_tree_post=NULL;
/*SPC(8729)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const67)=_AVLST_parameter_types__const67;
/*SPC(133)*/
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkPARAMETER_TYPES, _AVparameter_typeparameter_types_tree_post, NoKey);
/*SPC(8730)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3PARAMETER_TYPES_O(_TPPPARAMETER_TYPES_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3PARAMETER_TYPES_O(_currn ,_AS0tree,_AS0orig_tree,_AS0_const67)
_TPPPARAMETER_TYPES_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_SPECIFICATION_O(_TPPMETHOD_SPECIFICATION_O _currn)
#else
void _VS1METHOD_SPECIFICATION_O(_currn )
_TPPMETHOD_SPECIFICATION_O _currn;

#endif
{
TreeNodePtr _AS2class_spec_tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));
_AVmethod_specification_orig_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkMETHOD_SPECIFICATION_O, _AS1orig_tree, _AVtype_specifier_orig_tree, NoKey);
/*SPC(9781)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2METHOD_SPECIFICATION_O(_TPPMETHOD_SPECIFICATION_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2METHOD_SPECIFICATION_O(_currn ,_AS0tree)
_TPPMETHOD_SPECIFICATION_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS2class_spec_tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));
_AVmethod_specification__const67=AppDefTableKeyList(_AS1_const67, _AVtype_specifier__const67);
/*SPC(132)*/
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkMETHOD_SPECIFICATION, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8722)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3METHOD_SPECIFICATION_O(_TPPMETHOD_SPECIFICATION_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3METHOD_SPECIFICATION_O(_currn ,_AS0tree)
_TPPMETHOD_SPECIFICATION_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS2class_spec_tree;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ARGUMENT_O(_TPPCLASS_ARGUMENT_O _currn)
#else
void _VS1CLASS_ARGUMENT_O(_currn )
_TPPCLASS_ARGUMENT_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVclass_argument_orig_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENT_O, _AVclass_specifier_orig_tree, NoKey);
/*SPC(9776)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_ARGUMENT_O(_TPPCLASS_ARGUMENT_O _currn,ArgumentInfoList* _AS0ArgInfos_pre)
#else
void _VS2CLASS_ARGUMENT_O(_currn ,_AS0ArgInfos_pre)
_TPPCLASS_ARGUMENT_O _currn;
ArgumentInfoList* _AS0ArgInfos_pre;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVclass_argument_starbound_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENT, _AVclass_specifier_starbound_tree, NoKey);
/*SPC(8716)*/
_AVclass_argument_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENT, _AS1tree, NoKey);
/*SPC(8714)*/
_AVclass_argument_usedParams=AppDefTableKeyList(_AVclass_specifier__const67, IDENTICAL(_AVclass_specifier_usedParamList));
/*SPC(2796)*/
_AVclass_argument_ArgInfo=NewArgumentInfo(_AVclass_specifier_starbound_tree, _AVclass_argument_usedParams);
/*SPC(2809)*/
_AVclass_argumentArgInfos_post=AppElArgumentInfoList((* _AS0ArgInfos_pre), _AVclass_argument_ArgInfo);
/*SPC(2842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_ARGUMENT_O(_TPPCLASS_ARGUMENT_O _currn,int* _AS0ClassArgCount_pre,ArgumentInfoList* _AS0ArgInfos_pre)
#else
void _VS3CLASS_ARGUMENT_O(_currn ,_AS0ClassArgCount_pre,_AS0ArgInfos_pre)
_TPPCLASS_ARGUMENT_O _currn;
ArgumentInfoList* _AS0ArgInfos_pre;
int* _AS0ClassArgCount_pre;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVclass_argumentClassArgCount_post=ADD((* _AS0ClassArgCount_pre), 1);
/*SPC(2788)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ARGUMENTS_LST_O(_TPPCLASS_ARGUMENTS_LST_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1CLASS_ARGUMENTS_LST_O(_currn ,_AS0orig_tree)
_TPPCLASS_ARGUMENTS_LST_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{
ArgumentInfoList _AS2ArgInfos_pre;
int _AS2ClassArgCount_pre;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1starbound_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0orig_tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENTS_LST_O, _AS1orig_tree, _AVclass_argument_orig_tree, NoKey);
/*SPC(9765)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_ARGUMENTS_LST_O(_TPPCLASS_ARGUMENTS_LST_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0starbound_tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2CLASS_ARGUMENTS_LST_O(_currn ,_AS0tree,_AS0starbound_tree,_AS0orig_tree,_AS0_const67)
_TPPCLASS_ARGUMENTS_LST_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0starbound_tree;
TreeNodePtr* _AS0tree;

#endif
{
ArgumentInfoList _AS2ArgInfos_pre;
int _AS2ClassArgCount_pre;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1starbound_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1starbound_tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
_AS2ArgInfos_pre=_AVclass_argumentArgInfos_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,ArgumentInfoList*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2ArgInfos_pre)));
(* _AS0_const67)=AppDefTableKeyList(_AS1_const67, IDENTICAL(_AVclass_argument_usedParams));
/*SPC(105)*/
(* _AS0starbound_tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENTS_LST, _AS1starbound_tree, _AVclass_argument_starbound_tree, NoKey);
/*SPC(8702)*/
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENTS_LST, _AS1tree, _AVclass_argument_tree, NoKey);
/*SPC(8699)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_ARGUMENTS_LST_O(_TPPCLASS_ARGUMENTS_LST_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0starbound_tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3CLASS_ARGUMENTS_LST_O(_currn ,_AS0tree,_AS0starbound_tree,_AS0orig_tree,_AS0_const67)
_TPPCLASS_ARGUMENTS_LST_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0starbound_tree;
TreeNodePtr* _AS0tree;

#endif
{
ArgumentInfoList _AS2ArgInfos_pre;
int _AS2ClassArgCount_pre;
DefTableKeyList _AS1_const67;
TreeNodePtr _AS1orig_tree;
TreeNodePtr _AS1starbound_tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1starbound_tree)),(&( _AS1orig_tree)),(&( _AS1_const67)));
_AS2ClassArgCount_pre=_AVclass_argumentClassArgCount_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,int*,ArgumentInfoList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2ClassArgCount_pre)),(&( _AS2ArgInfos_pre)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ARGUMENTS_EMPTY_O(_TPPCLASS_ARGUMENTS_EMPTY_O _currn,TreeNodePtr* _AS0orig_tree)
#else
void _VS1CLASS_ARGUMENTS_EMPTY_O(_currn ,_AS0orig_tree)
_TPPCLASS_ARGUMENTS_EMPTY_O _currn;
TreeNodePtr* _AS0orig_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0orig_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENTS_EMPTY_O, NoKey);
/*SPC(9771)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_ARGUMENTS_EMPTY_O(_TPPCLASS_ARGUMENTS_EMPTY_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0starbound_tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS2CLASS_ARGUMENTS_EMPTY_O(_currn ,_AS0tree,_AS0starbound_tree,_AS0orig_tree,_AS0_const67)
_TPPCLASS_ARGUMENTS_EMPTY_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0starbound_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const67)=NullDefTableKeyList();
/*SPC(104)*/
(* _AS0starbound_tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENTS_EMPTY, NoKey);
/*SPC(8709)*/
(* _AS0tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENTS_EMPTY, NoKey);
/*SPC(8708)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_ARGUMENTS_EMPTY_O(_TPPCLASS_ARGUMENTS_EMPTY_O _currn,TreeNodePtr* _AS0tree,TreeNodePtr* _AS0starbound_tree,TreeNodePtr* _AS0orig_tree,DefTableKeyList* _AS0_const67)
#else
void _VS3CLASS_ARGUMENTS_EMPTY_O(_currn ,_AS0tree,_AS0starbound_tree,_AS0orig_tree,_AS0_const67)
_TPPCLASS_ARGUMENTS_EMPTY_O _currn;
DefTableKeyList* _AS0_const67;
TreeNodePtr* _AS0orig_tree;
TreeNodePtr* _AS0starbound_tree;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_SPECIFIER_O(_TPPCLASS_SPECIFIER_O _currn)
#else
void _VS1CLASS_SPECIFIER_O(_currn )
_TPPCLASS_SPECIFIER_O _currn;

#endif
{
int* _IL_incl10;
DefTableKeyList _AS3_const67;
TreeNodePtr _AS3orig_tree;
TreeNodePtr _AS3starbound_tree;
TreeNodePtr _AS3tree;
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2starbound_tree;
TreeNodePtr _AS2tree;
int _AS2ClassBoundCnt;
int _AS2BoundCnt;
int _AS1ClassArgCount_post;
TreeNodePtr _AS1orig_tree;

_VisitVarDecl()
_VisitEntry();
_IL_incl10=_IG_incl10;_IG_incl10= &(_currn->_ATis_string_abbrev);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATis_predef_array=OR(EQ(_AVclass_id_use_OrigSym, MakeName("ARRAY")), EQ(_AVclass_id_use_OrigSym, MakeName("ARR")));
/*SPC(3966)*/
_currn->_ATis_string_abbrev=OR(EQ(_AVclass_id_use_OrigSym, MakeName("STR")), EQ(_AVclass_id_use_OrigSym, MakeName("STRING")));
/*SPC(3963)*/
_AVclass_id_use_Sym=MakeName(PTG_StringOut(PTGTuple(_currn->_desc1->_ATClassBoundsPtg, PTGBracket(
((AND(_currn->_ATis_string_abbrev, EQ(_currn->_desc2->_ATClassBoundsPtg, PTGNULL))
) ? (PTGIdent("*")
) : (
((_currn->_ATis_predef_array
) ? (PTGNULL
) : (_currn->_desc2->_ATClassBoundsPtg))
))
))));
/*SPC(3969)*/
_AVclass_id_use_ArraySym=MakeName(PTG_StringOut(PTGTuple(_currn->_desc1->_ATClassBoundsPtg, PTGBracket(
((AND(_currn->_ATis_string_abbrev, EQ(_currn->_desc2->_ATClassBoundsPtg, PTGNULL))
) ? (PTGIdent("*")
) : (_currn->_desc2->_ATClassBoundsPtg))
))));
/*SPC(3977)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2orig_tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3orig_tree)));
_AVclass_specifier_orig_tree=NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_SPECIFIER_O, _AS1orig_tree, _AS2orig_tree, _AS3orig_tree, NoKey);
/*SPC(9760)*/
_IG_incl10=_IL_incl10;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_SPECIFIER_O(_TPPCLASS_SPECIFIER_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS2CLASS_SPECIFIER_O(_currn ,_AS0tree)
_TPPCLASS_SPECIFIER_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
int* _IL_incl10;
DefTableKeyList _AS3_const67;
TreeNodePtr _AS3orig_tree;
TreeNodePtr _AS3starbound_tree;
TreeNodePtr _AS3tree;
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2starbound_tree;
TreeNodePtr _AS2tree;
int _AS2ClassBoundCnt;
int _AS2BoundCnt;
int _AS1ClassArgCount_post;
TreeNodePtr _AS1orig_tree;

_VisitVarDecl()
_VisitEntry();
_IL_incl10=_IG_incl10;_IG_incl10= &(_currn->_ATis_string_abbrev);
(*(_CALL_VS_((NODEPTR ,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2BoundCnt)),(&( _AS2tree)),(&( _AS2starbound_tree)),(&( _AS2orig_tree)),(&( _AS2_const67)));
_AVclass_argumentArgInfos_post=NULLArgumentInfoList;
/*SPC(2828)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3tree)),(&( _AS3starbound_tree)),(&( _AS3orig_tree)),(&( _AS3_const67)));
_AVclass_specifier__const67=AppDefTableKeyList(_AS2_const67, _AS3_const67);
/*SPC(103)*/
_AVclass_specifier_ArraySym=
((_currn->_ATis_predef_array
) ? (MakeName(PTG_StringOut(PTGTuple(_currn->_desc1->_ATClassBoundsPtg, PTGBracket(_currn->_desc2->_ATClassBoundsPtg))))
) : (0))
;
/*SPC(4029)*/
_AVclass_specifier_ArrayKey=
((_currn->_ATis_predef_array
) ? (DefineIdn((* _IG_incl13), _AVclass_specifier_ArraySym)
) : (NoKey))
;
/*SPC(4034)*/
_currn->_ATKey=
((_currn->_ATis_predef_array
) ? (
(ResetArrayDefs(_currn->_desc1->_ATKey, AddToSetDefTableKeyList(_AVclass_specifier_ArrayKey, GetArrayDefs(_currn->_desc1->_ATKey, NULLDefTableKeyList), CmpDefTableKey)), ResetSym(_AVclass_specifier_ArrayKey, _AVclass_specifier_ArraySym), ResetClassParCount(_AVclass_specifier_ArrayKey, 1), ResetClassParams(_AVclass_specifier_ArrayKey, GetClassParams(_currn->_desc1->_ATKey, NULLDefTableKeyList)), ResetBoundCnt(_AVclass_specifier_ArrayKey, _AS2BoundCnt), _AVclass_specifier_ArrayKey)

) : (_currn->_desc1->_ATKey))
;
/*SPC(4038)*/
(* _AS0tree)=NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_SPECIFIER, _currn->_desc1->_ATtree, _AS2tree, _AS3tree, _currn->_ATKey);
/*SPC(8689)*/

if (AND(NOT(EQ(_AVclass_argumentArgInfos_post, NULLArgumentInfoList)), ElemInDefTableKeyList((* _IG_incl6), (* _IG_incl11), CmpDefTableKey))) {
ResetGenInfos(_currn->_ATKey, AppElGenericInfoList(GetGenInfos(_currn->_ATKey, NULLGenericInfoList), NewGenericInfo(_AVclass_argumentArgInfos_post, (* _IG_incl6))));

} else {
}
;
/*SPC(2829)*/
_AVclass_specifier_starbound_tree=NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_SPECIFIER, _currn->_desc1->_ATtree, _AS2starbound_tree, _AS3starbound_tree, _currn->_ATKey);
/*SPC(8693)*/
_currn->_ATIsClassParam=GetIsClassParam(_currn->_ATKey, 0);
/*SPC(2880)*/
_AVclass_specifier_usedParamList=
((EQ(_currn->_ATIsClassParam, 1)
) ? (SingleDefTableKeyList(_currn->_ATKey)
) : (NULLDefTableKeyList))
;
/*SPC(2802)*/
_IG_incl10=_IL_incl10;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_SPECIFIER_O(_TPPCLASS_SPECIFIER_O _currn,TreeNodePtr* _AS0tree)
#else
void _VS3CLASS_SPECIFIER_O(_currn ,_AS0tree)
_TPPCLASS_SPECIFIER_O _currn;
TreeNodePtr* _AS0tree;

#endif
{
int* _IL_incl10;
DefTableKeyList _AS3_const67;
TreeNodePtr _AS3orig_tree;
TreeNodePtr _AS3starbound_tree;
TreeNodePtr _AS3tree;
DefTableKeyList _AS2_const67;
TreeNodePtr _AS2orig_tree;
TreeNodePtr _AS2starbound_tree;
TreeNodePtr _AS2tree;
int _AS2ClassBoundCnt;
int _AS2BoundCnt;
int _AS1ClassArgCount_post;
TreeNodePtr _AS1orig_tree;

_VisitVarDecl()
_VisitEntry();
_IL_incl10=_IG_incl10;_IG_incl10= &(_currn->_ATis_string_abbrev);
_AVclass_argumentClassArgCount_post=0;
/*SPC(2774)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1orig_tree)),(&( _AS1ClassArgCount_post)));
(*(_CALL_VS_((NODEPTR ,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2BoundCnt)),(&( _AS2ClassBoundCnt)),(&( _AS2tree)),(&( _AS2starbound_tree)),(&( _AS2orig_tree)),(&( _AS2_const67)));
_AVclass_argumentClassArgCount_post=_AS1ClassArgCount_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*,DefTableKeyList*)) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3tree)),(&( _AS3starbound_tree)),(&( _AS3orig_tree)),(&( _AS3_const67)));

if (NOT(EQ(_AVclass_argumentClassArgCount_post, GetClassParCount(_currn->_ATKey, 0)))) {
sprintf(error_message, "wrong number of class arguments (%d), class arguments expected: %d", _AVclass_argumentClassArgCount_post, GetClassParCount(_currn->_ATKey, 0));
message(ERROR, error_message, 0, (&( _currn->_AT_pos)));
;

} else {
}
;
/*SPC(2783)*/

if (AND(EQ(_currn->_ATIsClassParam, 1), OR(NOT(EQ(_AS2ClassBoundCnt, 0)), NOT(EQ(_AVclass_argumentClassArgCount_post, 0))))) {
message(ERROR, "class parameter must not have bounds or class arguments", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(2889)*/
_IG_incl10=_IL_incl10;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_STREAM_O(_TPPTYPE_SPECIFIER_STREAM_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS1TYPE_SPECIFIER_STREAM_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_STREAM_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0class_spec_tree)=NULL;
/*SPC(10265)*/
_AVtype_specifier_orig_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_STREAM_O, _AVmethod_specification_orig_tree, NoKey);
/*SPC(9744)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIER_STREAM_O(_TPPTYPE_SPECIFIER_STREAM_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS2TYPE_SPECIFIER_STREAM_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_STREAM_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVtype_specifier__const67=_AVmethod_specification__const67;
/*SPC(101)*/
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_STREAM, _AS1tree, NoKey);
/*SPC(8674)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_SPECIFIER_STREAM_O(_TPPTYPE_SPECIFIER_STREAM_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS3TYPE_SPECIFIER_STREAM_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_STREAM_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_SAME_O(_TPPTYPE_SPECIFIER_SAME_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS1TYPE_SPECIFIER_SAME_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_SAME_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0class_spec_tree)=NULL;
/*SPC(10265)*/
_AVtype_specifier_orig_tree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_SAME_O, NoKey);
/*SPC(9755)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIER_SAME_O(_TPPTYPE_SPECIFIER_SAME_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS2TYPE_SPECIFIER_SAME_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_SAME_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVtype_specifier__const67=NullDefTableKeyList();
/*SPC(97)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_SAME, NoKey);
/*SPC(8685)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_SPECIFIER_SAME_O(_TPPTYPE_SPECIFIER_SAME_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS3TYPE_SPECIFIER_SAME_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_SAME_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_SAME_POLY_O(_TPPTYPE_SPECIFIER_SAME_POLY_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS1TYPE_SPECIFIER_SAME_POLY_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_SAME_POLY_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0class_spec_tree)=NULL;
/*SPC(10265)*/
_AVtype_specifier_orig_tree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_SAME_POLY_O, NoKey);
/*SPC(9750)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIER_SAME_POLY_O(_TPPTYPE_SPECIFIER_SAME_POLY_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS2TYPE_SPECIFIER_SAME_POLY_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_SAME_POLY_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVtype_specifier__const67=NullDefTableKeyList();
/*SPC(98)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_SAME_POLY, NoKey);
/*SPC(8680)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_SPECIFIER_SAME_POLY_O(_TPPTYPE_SPECIFIER_SAME_POLY_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS3TYPE_SPECIFIER_SAME_POLY_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_SAME_POLY_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_PROC_O(_TPPTYPE_SPECIFIER_PROC_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS1TYPE_SPECIFIER_PROC_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_PROC_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0class_spec_tree)=NULL;
/*SPC(10265)*/
_AVtype_specifier_orig_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_PROC_O, _AVmethod_specification_orig_tree, NoKey);
/*SPC(9739)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIER_PROC_O(_TPPTYPE_SPECIFIER_PROC_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS2TYPE_SPECIFIER_PROC_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_PROC_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVtype_specifier__const67=_AVmethod_specification__const67;
/*SPC(102)*/
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_PROC, _AS1tree, NoKey);
/*SPC(8669)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_SPECIFIER_PROC_O(_TPPTYPE_SPECIFIER_PROC_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS3TYPE_SPECIFIER_PROC_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_PROC_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_EMPTY_O(_TPPTYPE_SPECIFIER_EMPTY_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS1TYPE_SPECIFIER_EMPTY_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_EMPTY_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0class_spec_tree)=NULL;
/*SPC(10265)*/
_AVtype_specifier_orig_tree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_EMPTY_O, NoKey);
/*SPC(9734)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIER_EMPTY_O(_TPPTYPE_SPECIFIER_EMPTY_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS2TYPE_SPECIFIER_EMPTY_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_EMPTY_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVtype_specifier__const67=NullDefTableKeyList();
/*SPC(100)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_EMPTY, NoKey);
/*SPC(8665)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_SPECIFIER_EMPTY_O(_TPPTYPE_SPECIFIER_EMPTY_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS3TYPE_SPECIFIER_EMPTY_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_EMPTY_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_DES_O(_TPPTYPE_SPECIFIER_DES_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS1TYPE_SPECIFIER_DES_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_DES_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS3tree;
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
_AS1IsArrayAccessOrSingleId=1;
/*SPC(4930)*/
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1IsArrayAccessOrSingleId)),(&( _AS1IsClassIdUse2)),(&( _AS1ResolvesToSingleId)),(&( _AS1ResolvesToArrayAccessOrSingleId)),(&( _AS1orig_tree)),(&( _AS1class_id_tree)),(&( _AS1arr_bounds_tree)));
_AS2IsClassSpecifiers=1;
/*SPC(4931)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,int*,TreeNodePtr*,TreeNodePtr*,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsClassSpecifiers)),(&( _AS2ResolvesToExpressions)),(&( _AS2ResolvesToClassSpecifiers)),(&( _AS2orig_tree)),(&( _AS2class_args_tree)),(&( _AS2arr_bounds_tree)));
(* _AS0class_spec_tree)=
((AND(EQ(_AS1ResolvesToArrayAccessOrSingleId, 1), EQ(_AS2ResolvesToClassSpecifiers, 1))
) ? (NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_SPECIFIER_O, _AS1class_id_tree, _AS1arr_bounds_tree, _AS2class_args_tree, NoKey)
) : (NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_SPECIFIER_O, NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkCLASS_ID_USE_O, MakeName("SYNTAX_ERROR_CLASS"), NoKey), NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUNDS_O, NULL, NoKey), NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENTS_EMPTY_O, NoKey), NoKey)))
;
/*SPC(10288)*/
{ _currn->_desc3 = (_TSPclass_specifier) Mkclass_specifier(NoPosition, BuildTree((* _AS0class_spec_tree)));
  if ((NODEPTR)_currn->_desc3 == NULLNODEPTR)
    message (DEADLY, "generated tree is not of type class_specifier", 0, NoPosition);
};
/*SPC(10298)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVtype_specifier_orig_tree=NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_DES_O, _AS1orig_tree, _AS2orig_tree, (* _AS0class_spec_tree), NoKey);
/*SPC(9728)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIER_DES_O(_TPPTYPE_SPECIFIER_DES_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS2TYPE_SPECIFIER_DES_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_DES_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS3tree;
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
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3tree)));
_AVtype_specifier__const67=AppDefTableKeyList(AppDefTableKeyList(_AS1_const67, _AS2_const67), AppDefTableKeyList(_AVclass_specifier__const67, IDENTICAL(_AVclass_specifier_usedParamList)));
/*SPC(2747)*/
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_CL, _AS3tree, NoKey);
/*SPC(8660)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_SPECIFIER_DES_O(_TPPTYPE_SPECIFIER_DES_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS3TYPE_SPECIFIER_DES_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_DES_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS3tree;
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
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_CL_O(_TPPTYPE_SPECIFIER_CL_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS1TYPE_SPECIFIER_CL_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_CL_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0class_spec_tree)=NULL;
/*SPC(10265)*/
_AVtype_specifier_orig_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_CL_O, _AVclass_specifier_orig_tree, NoKey);
/*SPC(9723)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIER_CL_O(_TPPTYPE_SPECIFIER_CL_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS2TYPE_SPECIFIER_CL_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_CL_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVtype_specifier__const67=AppDefTableKeyList(_AVclass_specifier__const67, IDENTICAL(_AVclass_specifier_usedParamList));
/*SPC(96)*/
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_CL, _AS1tree, NoKey);
/*SPC(8655)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_SPECIFIER_CL_O(_TPPTYPE_SPECIFIER_CL_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS3TYPE_SPECIFIER_CL_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_CL_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_CL_POLY_O(_TPPTYPE_SPECIFIER_CL_POLY_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS1TYPE_SPECIFIER_CL_POLY_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_CL_POLY_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0class_spec_tree)=NULL;
/*SPC(10265)*/
_AVtype_specifier_orig_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_CL_POLY_O, _AVclass_specifier_orig_tree, NoKey);
/*SPC(9718)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIER_CL_POLY_O(_TPPTYPE_SPECIFIER_CL_POLY_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS2TYPE_SPECIFIER_CL_POLY_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_CL_POLY_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVtype_specifier__const67=AppDefTableKeyList(_AVclass_specifier__const67, IDENTICAL(_AVclass_specifier_usedParamList));
/*SPC(99)*/
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_CL_POLY, _AS1tree, NoKey);
/*SPC(8650)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_SPECIFIER_CL_POLY_O(_TPPTYPE_SPECIFIER_CL_POLY_O _currn,TreeNodePtr* _AS0class_spec_tree)
#else
void _VS3TYPE_SPECIFIER_CL_POLY_O(_currn ,_AS0class_spec_tree)
_TPPTYPE_SPECIFIER_CL_POLY_O _currn;
TreeNodePtr* _AS0class_spec_tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIERS_EMPTY_O(_TPPTYPE_SPECIFIERS_EMPTY_O _currn)
#else
void _VS1TYPE_SPECIFIERS_EMPTY_O(_currn )
_TPPTYPE_SPECIFIERS_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIERS_EMPTY_O(_TPPTYPE_SPECIFIERS_EMPTY_O _currn)
#else
void _VS2TYPE_SPECIFIERS_EMPTY_O(_currn )
_TPPTYPE_SPECIFIERS_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIERS_EMPTY, NoKey);
/*SPC(8646)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIERS_LST_O(_TPPTYPE_SPECIFIERS_LST_O _currn)
#else
void _VS1TYPE_SPECIFIERS_LST_O(_currn )
_TPPTYPE_SPECIFIERS_LST_O _currn;

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
void _VS2TYPE_SPECIFIERS_LST_O(_TPPTYPE_SPECIFIERS_LST_O _currn)
#else
void _VS2TYPE_SPECIFIERS_LST_O(_currn )
_TPPTYPE_SPECIFIERS_LST_O _currn;

#endif
{
TreeNodePtr _AS2class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIERS_LST, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8641)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_SPECIFIERS_LST_O(_TPPTYPE_SPECIFIERS_LST_O _currn)
#else
void _VS3TYPE_SPECIFIERS_LST_O(_currn )
_TPPTYPE_SPECIFIERS_LST_O _currn;

#endif
{
TreeNodePtr _AS2class_spec_tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2class_spec_tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_PARAM_ID_DEF_O(_TPPCLASS_PARAM_ID_DEF_O _currn)
#else
void _VS1CLASS_PARAM_ID_DEF_O(_currn )
_TPPCLASS_PARAM_ID_DEF_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVclass_param_id_def_Bind=BindIdn((* _IG_incl5), _currn->_ATSym);
/*SPC(12463)*/
_currn->_ATKey=KeyOf(_AVclass_param_id_def_Bind);
/*SPC(12465)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_PARAM_ID_DEF_O(_TPPCLASS_PARAM_ID_DEF_O _currn)
#else
void _VS2CLASS_PARAM_ID_DEF_O(_currn )
_TPPCLASS_PARAM_ID_DEF_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVclass_headClassParams_post=AppElDefTableKeyList(_AVclass_headClassParams_post, _currn->_ATKey);
/*SPC(4180)*/
ResetIsClassParam(_currn->_ATKey, 1);
/*SPC(4159)*/
ResetSym(_currn->_ATKey, _currn->_ATSym);
/*SPC(2814)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_PARAM_ID_DEF_O(_TPPCLASS_PARAM_ID_DEF_O _currn)
#else
void _VS3CLASS_PARAM_ID_DEF_O(_currn )
_TPPCLASS_PARAM_ID_DEF_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVclass_param_id_def_Cnt=ADD(1, GetCnt(_currn->_ATKey, 0));
/*SPC(12382)*/
_AVclass_param_id_def_tree=NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_SPECIFIER, NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkCLASS_ID_USE, _currn->_ATTERM_1, NoKey), NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUNDS, NULL, NoKey), NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENTS_EMPTY, NoKey), _currn->_ATKey);
/*SPC(8630)*/
ResetCnt(_currn->_ATKey, _AVclass_param_id_def_Cnt);
/*SPC(12385)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_PARAM_ID_DEF_O(_TPPCLASS_PARAM_ID_DEF_O _currn)
#else
void _VS4CLASS_PARAM_ID_DEF_O(_currn )
_TPPCLASS_PARAM_ID_DEF_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVclass_param_id_def_IsFirstOcc=SetGetFirstOcc(_currn->_ATKey, 1, 0);
/*SPC(12412)*/
_AVclass_param_id_def_TotalCnt=GetCnt(_currn->_ATKey, 0);
/*SPC(12389)*/

if (GT(_AVclass_param_id_def_TotalCnt, 1)) {
message(ERROR, CatStrInd("identifier is multiply defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(4248)*/

if (EQ(_AVclass_param_id_def_IsFirstOcc, 0)) {
message(ERROR, CatStrInd("identifier used before defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(4254)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_PARAMETER_O(_TPPCLASS_PARAMETER_O _currn)
#else
void _VS1CLASS_PARAMETER_O(_currn )
_TPPCLASS_PARAMETER_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_PARAMETER_O(_TPPCLASS_PARAMETER_O _currn)
#else
void _VS2CLASS_PARAMETER_O(_currn )
_TPPCLASS_PARAMETER_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_PARAMETER_O(_TPPCLASS_PARAMETER_O _currn)
#else
void _VS3CLASS_PARAMETER_O(_currn )
_TPPCLASS_PARAMETER_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_PARAMETER_O(_TPPCLASS_PARAMETER_O _currn)
#else
void _VS4CLASS_PARAMETER_O(_currn )
_TPPCLASS_PARAMETER_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVclass_parameter_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkCLASS_PARAMETER, _AVclass_param_id_def_tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8625)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5CLASS_PARAMETER_O(_TPPCLASS_PARAMETER_O _currn)
#else
void _VS5CLASS_PARAMETER_O(_currn )
_TPPCLASS_PARAMETER_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1IDENT_DEF_O(_TPPIDENT_DEF_O _currn)
#else
void _VS1IDENT_DEF_O(_currn )
_TPPIDENT_DEF_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkIDENT_DEF, _currn->_ATTERM_1, NoKey);
/*SPC(8637)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BOUND_IDENTIFIER_STAR_O(_TPPBOUND_IDENTIFIER_STAR_O _currn)
#else
void _VS1BOUND_IDENTIFIER_STAR_O(_currn )
_TPPBOUND_IDENTIFIER_STAR_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkBOUND_IDENTIFIER_STAR, _currn->_ATTERM_1, NoKey);
/*SPC(8620)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BOUND_IDENTIFIER_O(_TPPBOUND_IDENTIFIER_O _currn)
#else
void _VS1BOUND_IDENTIFIER_O(_currn )
_TPPBOUND_IDENTIFIER_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUND_IDENTIFIER, _currn->_desc1->_ATtree, NoKey);
/*SPC(8615)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_PARAMETERS_EMPTY_O(_TPPCLASS_PARAMETERS_EMPTY_O _currn)
#else
void _VS1CLASS_PARAMETERS_EMPTY_O(_currn )
_TPPCLASS_PARAMETERS_EMPTY_O _currn;

#endif
{
Environment* _IL_incl5;

_VisitVarDecl()
_VisitEntry();
_IL_incl5=_IG_incl5;_IG_incl5= &(_currn->_ATTypeGenEnv);
_AVclass_parameters_ClassParCount=0;
/*SPC(2759)*/
_IG_incl5=_IL_incl5;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_PARAMETERS_EMPTY_O(_TPPCLASS_PARAMETERS_EMPTY_O _currn)
#else
void _VS2CLASS_PARAMETERS_EMPTY_O(_currn )
_TPPCLASS_PARAMETERS_EMPTY_O _currn;

#endif
{
Environment* _IL_incl5;

_VisitVarDecl()
_VisitEntry();
_IL_incl5=_IG_incl5;_IG_incl5= &(_currn->_ATTypeGenEnv);
_IG_incl5=_IL_incl5;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_PARAMETERS_EMPTY_O(_TPPCLASS_PARAMETERS_EMPTY_O _currn)
#else
void _VS3CLASS_PARAMETERS_EMPTY_O(_currn )
_TPPCLASS_PARAMETERS_EMPTY_O _currn;

#endif
{
Environment* _IL_incl5;

_VisitVarDecl()
_VisitEntry();
_IL_incl5=_IG_incl5;_IG_incl5= &(_currn->_ATTypeGenEnv);
_IG_incl5=_IL_incl5;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_PARAMETERS_EMPTY_O(_TPPCLASS_PARAMETERS_EMPTY_O _currn)
#else
void _VS4CLASS_PARAMETERS_EMPTY_O(_currn )
_TPPCLASS_PARAMETERS_EMPTY_O _currn;

#endif
{
Environment* _IL_incl5;

_VisitVarDecl()
_VisitEntry();
_IL_incl5=_IG_incl5;_IG_incl5= &(_currn->_ATTypeGenEnv);
_AVclass_parameters_tree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_PARAMETERS_EMPTY, NoKey);
/*SPC(8610)*/
_IG_incl5=_IL_incl5;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5CLASS_PARAMETERS_EMPTY_O(_TPPCLASS_PARAMETERS_EMPTY_O _currn)
#else
void _VS5CLASS_PARAMETERS_EMPTY_O(_currn )
_TPPCLASS_PARAMETERS_EMPTY_O _currn;

#endif
{
Environment* _IL_incl5;

_VisitVarDecl()
_VisitEntry();
_IL_incl5=_IG_incl5;_IG_incl5= &(_currn->_ATTypeGenEnv);
_IG_incl5=_IL_incl5;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_PARAMETERS_LST_O(_TPPCLASS_PARAMETERS_LST_O _currn)
#else
void _VS1CLASS_PARAMETERS_LST_O(_currn )
_TPPCLASS_PARAMETERS_LST_O _currn;

#endif
{
Environment* _IL_incl5;

_VisitVarDecl()
_VisitEntry();
_IL_incl5=_IG_incl5;_IG_incl5= &(_currn->_ATTypeGenEnv);
_currn->_desc1->_ATTypeGenEnv=(* _IG_incl19);
/*SPC(12544)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVclass_parameters_ClassParCount=ADD(_AVclass_parameters_ClassParCount, 1);
/*SPC(2763)*/
_IG_incl5=_IL_incl5;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_PARAMETERS_LST_O(_TPPCLASS_PARAMETERS_LST_O _currn)
#else
void _VS2CLASS_PARAMETERS_LST_O(_currn )
_TPPCLASS_PARAMETERS_LST_O _currn;

#endif
{
Environment* _IL_incl5;

_VisitVarDecl()
_VisitEntry();
_IL_incl5=_IG_incl5;_IG_incl5= &(_currn->_ATTypeGenEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl5=_IL_incl5;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_PARAMETERS_LST_O(_TPPCLASS_PARAMETERS_LST_O _currn)
#else
void _VS3CLASS_PARAMETERS_LST_O(_currn )
_TPPCLASS_PARAMETERS_LST_O _currn;

#endif
{
Environment* _IL_incl5;

_VisitVarDecl()
_VisitEntry();
_IL_incl5=_IG_incl5;_IG_incl5= &(_currn->_ATTypeGenEnv);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl5=_IL_incl5;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_PARAMETERS_LST_O(_TPPCLASS_PARAMETERS_LST_O _currn)
#else
void _VS4CLASS_PARAMETERS_LST_O(_currn )
_TPPCLASS_PARAMETERS_LST_O _currn;

#endif
{
Environment* _IL_incl5;

_VisitVarDecl()
_VisitEntry();
_IL_incl5=_IG_incl5;_IG_incl5= &(_currn->_ATTypeGenEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVclass_parameters_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkCLASS_PARAMETERS_LST, _AVclass_parameters_tree, _AVclass_parameter_tree, NoKey);
/*SPC(8605)*/
_IG_incl5=_IL_incl5;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5CLASS_PARAMETERS_LST_O(_TPPCLASS_PARAMETERS_LST_O _currn)
#else
void _VS5CLASS_PARAMETERS_LST_O(_currn )
_TPPCLASS_PARAMETERS_LST_O _currn;

#endif
{
Environment* _IL_incl5;

_VisitVarDecl()
_VisitEntry();
_IL_incl5=_IG_incl5;_IG_incl5= &(_currn->_ATTypeGenEnv);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl5=_IL_incl5;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_BOUNDS_EMPTY_O(_TPPCLASS_BOUNDS_EMPTY_O _currn)
#else
void _VS1CLASS_BOUNDS_EMPTY_O(_currn )
_TPPCLASS_BOUNDS_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVclass_bounds_ClassBoundsPtg=PTGNULL;
/*SPC(3939)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_BOUNDS_EMPTY_O(_TPPCLASS_BOUNDS_EMPTY_O _currn)
#else
void _VS2CLASS_BOUNDS_EMPTY_O(_currn )
_TPPCLASS_BOUNDS_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_BOUNDS_EMPTY, _AVclass_bounds_BoundsMark);
/*SPC(8600)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_BOUNDS_LST_O(_TPPCLASS_BOUNDS_LST_O _currn)
#else
void _VS1CLASS_BOUNDS_LST_O(_currn )
_TPPCLASS_BOUNDS_LST_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVclass_bounds_BoundsMark=NoKey;
/*SPC(4205)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVclass_bounds_ClassBoundsPtg=PTGCommaSeq(_AVclass_bounds_ClassBoundsPtg, PTGIdent("*"));
/*SPC(3943)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_BOUNDS_LST_O(_TPPCLASS_BOUNDS_LST_O _currn)
#else
void _VS2CLASS_BOUNDS_LST_O(_currn )
_TPPCLASS_BOUNDS_LST_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkCLASS_BOUNDS_LST, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8595)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ID_DEF_O(_TPPCLASS_ID_DEF_O _currn)
#else
void _VS1CLASS_ID_DEF_O(_currn )
_TPPCLASS_ID_DEF_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVclass_id_def_ClassBoundsPtg=PTGIdent(StringTable(_currn->_ATTERM_1));
/*SPC(3935)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_ID_DEF_O(_TPPCLASS_ID_DEF_O _currn)
#else
void _VS2CLASS_ID_DEF_O(_currn )
_TPPCLASS_ID_DEF_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVclass_id_def_Bind=BindIdn((* _IG_incl5), _currn->_ATSym);
/*SPC(12463)*/
_currn->_ATKey=KeyOf(_AVclass_id_def_Bind);
/*SPC(12465)*/
ResetSym(_currn->_ATKey, _currn->_ATSym);
/*SPC(2818)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_ID_DEF_O(_TPPCLASS_ID_DEF_O _currn)
#else
void _VS3CLASS_ID_DEF_O(_currn )
_TPPCLASS_ID_DEF_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVclass_id_def_Cnt=ADD(1, GetCnt(_currn->_ATKey, 0));
/*SPC(12382)*/
_AVclass_id_def_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkCLASS_ID_DEF, _currn->_ATSym, _currn->_ATKey);
/*SPC(8590)*/
ResetCnt(_currn->_ATKey, _AVclass_id_def_Cnt);
/*SPC(12385)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_ID_DEF_O(_TPPCLASS_ID_DEF_O _currn)
#else
void _VS4CLASS_ID_DEF_O(_currn )
_TPPCLASS_ID_DEF_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVclass_id_def_TotalCnt=GetCnt(_currn->_ATKey, 0);
/*SPC(12389)*/

if (GT(_AVclass_id_def_TotalCnt, 1)) {
message(ERROR, CatStrInd("identifier is multiply defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(4248)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_OPT_CL_O(_TPPBUILTIN_OPT_CL_O _currn)
#else
void _VS1BUILTIN_OPT_CL_O(_currn )
_TPPBUILTIN_OPT_CL_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BUILTIN_OPT_CL_O(_TPPBUILTIN_OPT_CL_O _currn)
#else
void _VS2BUILTIN_OPT_CL_O(_currn )
_TPPBUILTIN_OPT_CL_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBUILTIN_OPT_CL, _AS1tree, NoKey);
/*SPC(8585)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BUILTIN_OPT_CL_O(_TPPBUILTIN_OPT_CL_O _currn)
#else
void _VS3BUILTIN_OPT_CL_O(_currn )
_TPPBUILTIN_OPT_CL_O _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_OPT_ID_O(_TPPBUILTIN_OPT_ID_O _currn)
#else
void _VS1BUILTIN_OPT_ID_O(_currn )
_TPPBUILTIN_OPT_ID_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BUILTIN_OPT_ID_O(_TPPBUILTIN_OPT_ID_O _currn)
#else
void _VS2BUILTIN_OPT_ID_O(_currn )
_TPPBUILTIN_OPT_ID_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkBUILTIN_OPT_ID, _currn->_ATTERM_1, NoKey);
/*SPC(8580)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_OPT_O(_TPPBUILTIN_OPT_O _currn)
#else
void _VS1BUILTIN_OPT_O(_currn )
_TPPBUILTIN_OPT_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BUILTIN_OPT_O(_TPPBUILTIN_OPT_O _currn)
#else
void _VS2BUILTIN_OPT_O(_currn )
_TPPBUILTIN_OPT_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkBUILTIN_OPT, NoKey);
/*SPC(8576)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_OPT_EMPTY_O(_TPPBUILTIN_OPT_EMPTY_O _currn)
#else
void _VS1BUILTIN_OPT_EMPTY_O(_currn )
_TPPBUILTIN_OPT_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BUILTIN_OPT_EMPTY_O(_TPPBUILTIN_OPT_EMPTY_O _currn)
#else
void _VS2BUILTIN_OPT_EMPTY_O(_currn )
_TPPBUILTIN_OPT_EMPTY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkBUILTIN_OPT_EMPTY, NoKey);
/*SPC(8572)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_BODY_O(_TPPCLASS_BODY_O _currn)
#else
void _VS1CLASS_BODY_O(_currn )
_TPPCLASS_BODY_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_BODY_O(_TPPCLASS_BODY_O _currn)
#else
void _VS2CLASS_BODY_O(_currn )
_TPPCLASS_BODY_O _currn;

#endif
{
Environment* _IL_incl5;

_VisitVarDecl()
_VisitEntry();
_IL_incl5=_IG_incl5;_IG_incl5= &(_currn->_ATTypeGenEnv);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_currn->_ATClassParams_post=_AVclass_headClassParams_post;
/*SPC(0)*/
_IG_incl5=_IL_incl5;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_BODY_O(_TPPCLASS_BODY_O _currn)
#else
void _VS3CLASS_BODY_O(_currn )
_TPPCLASS_BODY_O _currn;

#endif
{
Environment* _IL_incl5;

_VisitVarDecl()
_VisitEntry();
_IL_incl5=_IG_incl5;_IG_incl5= &(_currn->_ATTypeGenEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_IG_incl5=_IL_incl5;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_BODY_O(_TPPCLASS_BODY_O _currn)
#else
void _VS4CLASS_BODY_O(_currn )
_TPPCLASS_BODY_O _currn;

#endif
{
Environment* _IL_incl5;

_VisitVarDecl()
_VisitEntry();
_IL_incl5=_IG_incl5;_IG_incl5= &(_currn->_ATTypeGenEnv);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_currn->_ATtree=NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_BODY, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, _AVfeature_declarations_tree, NoKey);
/*SPC(8567)*/
_IG_incl5=_IL_incl5;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5CLASS_BODY_O(_TPPCLASS_BODY_O _currn)
#else
void _VS5CLASS_BODY_O(_currn )
_TPPCLASS_BODY_O _currn;

#endif
{
Environment* _IL_incl5;

_VisitVarDecl()
_VisitEntry();
_IL_incl5=_IG_incl5;_IG_incl5= &(_currn->_ATTypeGenEnv);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_IG_incl5=_IL_incl5;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_HEAD_O(_TPPCLASS_HEAD_O _currn)
#else
void _VS1CLASS_HEAD_O(_currn )
_TPPCLASS_HEAD_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_desc1->_ATSym=MakeName(PTG_StringOut(PTGTuple(_AVclass_id_def_ClassBoundsPtg, PTGBracket(_AVclass_bounds_ClassBoundsPtg))));
/*SPC(3929)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVclass_bounds_BoundsMark=
((OR(EQ(_currn->_desc1->_ATSym, MakeName("ARRAY")), EQ(_currn->_desc1->_ATSym, MakeName("ARR")))
) ? (
(ResetBoundsMark(_currn->_desc1->_ATKey, NewKey()), GetBoundsMark(_currn->_desc1->_ATKey, NoKey))

) : (NoKey))
;
/*SPC(4209)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVclass_head__const68=_currn->_desc1->_ATKey;
/*SPC(79)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_HEAD_O(_TPPCLASS_HEAD_O _currn)
#else
void _VS2CLASS_HEAD_O(_currn )
_TPPCLASS_HEAD_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_desc3->_ATTypeGenEnv=(* _IG_incl19);
/*SPC(12544)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
ResetClassParCount((* _IG_incl6), _AVclass_parameters_ClassParCount);
/*SPC(2754)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_HEAD_O(_TPPCLASS_HEAD_O _currn)
#else
void _VS3CLASS_HEAD_O(_currn )
_TPPCLASS_HEAD_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_currn->_AT_const70=_currn->_desc1->_ATSym;
/*SPC(79)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_HEAD_O(_TPPCLASS_HEAD_O _currn)
#else
void _VS4CLASS_HEAD_O(_currn )
_TPPCLASS_HEAD_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5CLASS_HEAD_O(_TPPCLASS_HEAD_O _currn)
#else
void _VS5CLASS_HEAD_O(_currn )
_TPPCLASS_HEAD_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVclass_head_tree=NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_HEAD, _AVclass_id_def_tree, _currn->_desc2->_ATtree, _AVclass_parameters_tree, NoKey);
/*SPC(8562)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6CLASS_HEAD_O(_TPPCLASS_HEAD_O _currn)
#else
void _VS6CLASS_HEAD_O(_currn )
_TPPCLASS_HEAD_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ATTRIBUTE_VA_O(_TPPCLASS_ATTRIBUTE_VA_O _currn)
#else
void _VS1CLASS_ATTRIBUTE_VA_O(_currn )
_TPPCLASS_ATTRIBUTE_VA_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATClassParams_post=_AVclass_headClassParams_post;
/*SPC(0)*/
_currn->_ATRefClasses_post=_AVbuiltin_optionRefClasses_post;
/*SPC(0)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ATTRIBUTE_VA, NoKey);
/*SPC(8558)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ATTRIBUTE_EX_O(_TPPCLASS_ATTRIBUTE_EX_O _currn)
#else
void _VS1CLASS_ATTRIBUTE_EX_O(_currn )
_TPPCLASS_ATTRIBUTE_EX_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATClassParams_post=_AVclass_headClassParams_post;
/*SPC(0)*/
_currn->_ATRefClasses_post=_AVbuiltin_optionRefClasses_post;
/*SPC(0)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ATTRIBUTE_EX, NoKey);
/*SPC(8554)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ATTRIBUTE_O(_TPPCLASS_ATTRIBUTE_O _currn)
#else
void _VS1CLASS_ATTRIBUTE_O(_currn )
_TPPCLASS_ATTRIBUTE_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATClassParams_post=_AVclass_headClassParams_post;
/*SPC(0)*/
_currn->_ATRefClasses_post=_AVbuiltin_optionRefClasses_post;
/*SPC(0)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ATTRIBUTE, NoKey);
/*SPC(8550)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ATTRIBUTE_ABVA_O(_TPPCLASS_ATTRIBUTE_ABVA_O _currn)
#else
void _VS1CLASS_ATTRIBUTE_ABVA_O(_currn )
_TPPCLASS_ATTRIBUTE_ABVA_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATClassParams_post=_AVclass_headClassParams_post;
/*SPC(0)*/
_currn->_ATRefClasses_post=_AVbuiltin_optionRefClasses_post;
/*SPC(0)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ATTRIBUTE_ABVA, NoKey);
/*SPC(8546)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ATTRIBUTE_AB_O(_TPPCLASS_ATTRIBUTE_AB_O _currn)
#else
void _VS1CLASS_ATTRIBUTE_AB_O(_currn )
_TPPCLASS_ATTRIBUTE_AB_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATClassParams_post=_AVclass_headClassParams_post;
/*SPC(0)*/
_currn->_ATRefClasses_post=_AVbuiltin_optionRefClasses_post;
/*SPC(0)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ATTRIBUTE_AB, NoKey);
/*SPC(8542)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_DECLARATION_O(_TPPCLASS_DECLARATION_O _currn)
#else
void _VS1CLASS_DECLARATION_O(_currn )
_TPPCLASS_DECLARATION_O _currn;

#endif
{
Environment* _IL_incl19;
DefTableKey* _IL_incl6;

_VisitVarDecl()
_VisitEntry();
_IL_incl19=_IG_incl19;_IG_incl19= &(_currn->_ATTypeGenEnv);
_IL_incl6=_IG_incl6;_IG_incl6= &(_currn->_ATKey);
_AVclass_headClassParams_post=NULLDefTableKeyList;
/*SPC(4175)*/
_AVbuiltin_optionRefClasses_post=NULLDefTableKeyList;
/*SPC(2897)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATKey=_AVclass_head__const68;
/*SPC(4169)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_IG_incl19=_IL_incl19;
_IG_incl6=_IL_incl6;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_DECLARATION_O(_TPPCLASS_DECLARATION_O _currn)
#else
void _VS2CLASS_DECLARATION_O(_currn )
_TPPCLASS_DECLARATION_O _currn;

#endif
{
Environment* _IL_incl19;
DefTableKey* _IL_incl6;

_VisitVarDecl()
_VisitEntry();
_IL_incl19=_IG_incl19;_IG_incl19= &(_currn->_ATTypeGenEnv);
_IL_incl6=_IG_incl6;_IG_incl6= &(_currn->_ATKey);
_AVclass_headClassParams_post=_currn->_desc1->_ATClassParams_post;
/*SPC(0)*/
_AVbuiltin_optionRefClasses_post=_currn->_desc1->_ATRefClasses_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_desc3->_ATTypeGenEnv=_currn->_ATTypeGenEnv;
/*SPC(12544)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
ResetReferencedClasses(_currn->_ATKey, _AVbuiltin_optionRefClasses_post);
/*SPC(2898)*/
_IG_incl19=_IL_incl19;
_IG_incl6=_IL_incl6;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_DECLARATION_O(_TPPCLASS_DECLARATION_O _currn,DefTableKeyList* _AS0ReachableClasses)
#else
void _VS3CLASS_DECLARATION_O(_currn ,_AS0ReachableClasses)
_TPPCLASS_DECLARATION_O _currn;
DefTableKeyList* _AS0ReachableClasses;

#endif
{
Environment* _IL_incl19;
DefTableKey* _IL_incl6;

_VisitVarDecl()
_VisitEntry();
_IL_incl19=_IG_incl19;_IG_incl19= &(_currn->_ATTypeGenEnv);
_IL_incl6=_IG_incl6;_IG_incl6= &(_currn->_ATKey);
ResetClassParams(_currn->_ATKey, _currn->_desc3->_ATClassParams_post);
/*SPC(4176)*/
_currn->_ATIsMainClass=EQ(_currn->_desc2->_AT_const70, GetMainClassName());
/*SPC(2915)*/
(* _AS0ReachableClasses)=
((EQ(_currn->_ATIsMainClass, 1)
) ? (AddToSetDefTableKeyList(_currn->_ATKey, AddImportantPredefined(FromMainReachable(_currn->_ATKey), (* _IG_incl13)), CmpDefTableKey)
) : (NULLDefTableKeyList))
;
/*SPC(2935)*/
_IG_incl19=_IL_incl19;
_IG_incl6=_IL_incl6;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_DECLARATION_O(_TPPCLASS_DECLARATION_O _currn,DefTableKeyList* _AS0ReachableClasses)
#else
void _VS4CLASS_DECLARATION_O(_currn ,_AS0ReachableClasses)
_TPPCLASS_DECLARATION_O _currn;
DefTableKeyList* _AS0ReachableClasses;

#endif
{
Environment* _IL_incl19;
DefTableKey* _IL_incl6;

_VisitVarDecl()
_VisitEntry();
_IL_incl19=_IG_incl19;_IG_incl19= &(_currn->_ATTypeGenEnv);
_IL_incl6=_IG_incl6;_IG_incl6= &(_currn->_ATKey);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_IG_incl19=_IL_incl19;
_IG_incl6=_IL_incl6;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5CLASS_DECLARATION_O(_TPPCLASS_DECLARATION_O _currn,DefTableKeyList* _AS0ReachableClasses)
#else
void _VS5CLASS_DECLARATION_O(_currn ,_AS0ReachableClasses)
_TPPCLASS_DECLARATION_O _currn;
DefTableKeyList* _AS0ReachableClasses;

#endif
{
Environment* _IL_incl19;
DefTableKey* _IL_incl6;

_VisitVarDecl()
_VisitEntry();
_IL_incl19=_IG_incl19;_IG_incl19= &(_currn->_ATTypeGenEnv);
_IL_incl6=_IG_incl6;_IG_incl6= &(_currn->_ATKey);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

if (NOT(EQ(GetGenStatus(_currn->_ATKey, 0), GEN_FINISHED))) {

if (EQ(DoGenericInstantiation(_currn->_ATKey), 0)) {
message(DEADLY, "cyclic dependency of class parameters", 0, (&( _currn->_AT_pos)));

} else {
}
;

} else {
}
;
/*SPC(2851)*/
_IG_incl19=_IL_incl19;
_IG_incl6=_IL_incl6;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6CLASS_DECLARATION_O(_TPPCLASS_DECLARATION_O _currn,DefTableKeyList* _AS0ReachableClasses)
#else
void _VS6CLASS_DECLARATION_O(_currn ,_AS0ReachableClasses)
_TPPCLASS_DECLARATION_O _currn;
DefTableKeyList* _AS0ReachableClasses;

#endif
{
Environment* _IL_incl19;
DefTableKey* _IL_incl6;

_VisitVarDecl()
_VisitEntry();
_IL_incl19=_IG_incl19;_IG_incl19= &(_currn->_ATTypeGenEnv);
_IL_incl6=_IG_incl6;_IG_incl6= &(_currn->_ATKey);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVclass_declaration_tree=NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_DECLARATION, _currn->_desc1->_ATtree, _AVclass_head_tree, _currn->_desc3->_ATtree, NoKey);
/*SPC(8536)*/
_AVclass_declarationclass_decls_tree_post=
((ElemInDefTableKeyList(_currn->_ATKey, (* _IG_incl11), CmpDefTableKey)
) ? (ReplaceClassParams(_currn->_ATKey, _AVclass_declaration_tree, _AVclass_declarationclass_decls_tree_post, GetInstances(_currn->_ATKey, NULLTreeNodePtrListList), _currn->_desc3->_ATClassParams_post, (&( _currn->_AT_pos)))
) : (_AVclass_declarationclass_decls_tree_post))
;
/*SPC(8526)*/
_IG_incl19=_IL_incl19;
_IG_incl6=_IL_incl6;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7CLASS_DECLARATION_O(_TPPCLASS_DECLARATION_O _currn,DefTableKeyList* _AS0ReachableClasses)
#else
void _VS7CLASS_DECLARATION_O(_currn ,_AS0ReachableClasses)
_TPPCLASS_DECLARATION_O _currn;
DefTableKeyList* _AS0ReachableClasses;

#endif
{
Environment* _IL_incl19;
DefTableKey* _IL_incl6;

_VisitVarDecl()
_VisitEntry();
_IL_incl19=_IG_incl19;_IG_incl19= &(_currn->_ATTypeGenEnv);
_IL_incl6=_IG_incl6;_IG_incl6= &(_currn->_ATKey);
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_IG_incl19=_IL_incl19;
_IG_incl6=_IL_incl6;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_DECLARATIONS_O(_TPPCLASS_DECLARATIONS_O _currn)
#else
void _VS1CLASS_DECLARATIONS_O(_currn )
_TPPCLASS_DECLARATIONS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_DECLARATIONS_O(_TPPCLASS_DECLARATIONS_O _currn)
#else
void _VS2CLASS_DECLARATIONS_O(_currn )
_TPPCLASS_DECLARATIONS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_DECLARATIONS_O(_TPPCLASS_DECLARATIONS_O _currn)
#else
void _VS3CLASS_DECLARATIONS_O(_currn )
_TPPCLASS_DECLARATIONS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVclass_declarations__const45=_AVLST_class_declarations__const45;
/*SPC(70)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_DECLARATIONS_O(_TPPCLASS_DECLARATIONS_O _currn)
#else
void _VS4CLASS_DECLARATIONS_O(_currn )
_TPPCLASS_DECLARATIONS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5CLASS_DECLARATIONS_O(_TPPCLASS_DECLARATIONS_O _currn)
#else
void _VS5CLASS_DECLARATIONS_O(_currn )
_TPPCLASS_DECLARATIONS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6CLASS_DECLARATIONS_O(_TPPCLASS_DECLARATIONS_O _currn)
#else
void _VS6CLASS_DECLARATIONS_O(_currn )
_TPPCLASS_DECLARATIONS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVclass_declarationclass_decls_tree_post=NULL;
/*SPC(8520)*/
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVclass_declarations__const40=_AVLST_class_declarations__const40;
/*SPC(70)*/
_AVclass_declarations_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkCLASS_DECLARATIONS, _AVclass_declarationclass_decls_tree_post, NoKey);
/*SPC(8521)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7CLASS_DECLARATIONS_O(_TPPCLASS_DECLARATIONS_O _currn)
#else
void _VS7CLASS_DECLARATIONS_O(_currn )
_TPPCLASS_DECLARATIONS_O _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ASSERTION_STATEMENT_2(_TPPASSERTION_STATEMENT_2 _currn)
#else
void _VS1ASSERTION_STATEMENT_2(_currn )
_TPPASSERTION_STATEMENT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ASSERTION_STATEMENT_2(_TPPASSERTION_STATEMENT_2 _currn)
#else
void _VS2ASSERTION_STATEMENT_2(_currn )
_TPPASSERTION_STATEMENT_2 _currn;

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
void _VS3ASSERTION_STATEMENT_2(_TPPASSERTION_STATEMENT_2 _currn)
#else
void _VS3ASSERTION_STATEMENT_2(_currn )
_TPPASSERTION_STATEMENT_2 _currn;

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
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
_AVAssertion_statement_2__const81=_AS1_const81;
/*SPC(334)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ASSERTION_STATEMENT_2(_TPPASSERTION_STATEMENT_2 _currn)
#else
void _VS4ASSERTION_STATEMENT_2(_currn )
_TPPASSERTION_STATEMENT_2 _currn;

#endif
{
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
_AVAssertion_statement_2__const82=_currn->_desc1->_AT_const82;
/*SPC(334)*/
_AVAssertion_statement_2__const83=MAX(_currn->_desc1->_AT_const83, IDENTICAL(_currn->_desc1->_ATStackHeight));
/*SPC(334)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1RAISE_STATEMENT_2(_TPPRAISE_STATEMENT_2 _currn)
#else
void _VS1RAISE_STATEMENT_2(_currn )
_TPPRAISE_STATEMENT_2 _currn;

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
void _VS2RAISE_STATEMENT_2(_TPPRAISE_STATEMENT_2 _currn)
#else
void _VS2RAISE_STATEMENT_2(_currn )
_TPPRAISE_STATEMENT_2 _currn;

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
void _VS3RAISE_STATEMENT_2(_TPPRAISE_STATEMENT_2 _currn)
#else
void _VS3RAISE_STATEMENT_2(_currn )
_TPPRAISE_STATEMENT_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AVRaise_statement_2__const81=_AS1_const81;
/*SPC(1108)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4RAISE_STATEMENT_2(_TPPRAISE_STATEMENT_2 _currn)
#else
void _VS4RAISE_STATEMENT_2(_currn )
_TPPRAISE_STATEMENT_2 _currn;

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

if (_AVType_specifier_2_is_empty) {

if (EQ((* _IG_incl22), 0)) {
message(ERROR, "raise statement without type specifier only allowed inside exception clause", 0, (&( _currn->_AT_pos)));

} else {
}
;

} else {

if (NOT(IsConform(_currn->_desc1->_ATType, GetType(GetPreDefKey(MakeName("$EXCEPTION"), (* _IG_incl23), (&( _currn->_AT_pos))), NoType)))) {
message(ERROR, CatStrStr(NameOfType(_currn->_desc1->_ATType), " must conform to $EXCEPTION in raise statement"), 0, (&( _currn->_AT_pos)));

} else {

if (IsPolymorph(_currn->_desc1->_ATType)) {
message(ERROR, CatStrStr(NameOfType(_currn->_desc1->_ATType), " not monomorph in raise statement"), 0, (&( _currn->_AT_pos)));

} else {
}
;
}
;
}
;
/*SPC(6336)*/
_AVRaise_statement_2__const82=_currn->_desc1->_AT_const82;
/*SPC(1108)*/
_AVRaise_statement_2__const83=_currn->_desc1->_AT_const83;
/*SPC(1108)*/
_AVRaise_statement_2_out=
((_AVType_specifier_2_is_empty
) ? (PTGcilRethrow()
) : (PTGcilRaiseException(GetCLRType(_currn->_desc1->_ATType), MapFile(PTRSELECT((&( _currn->_AT_pos)), line)), MapLine(PTRSELECT((&( _currn->_AT_pos)), line)))))
;
/*SPC(1109)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1RETURN_STATEMENT_2(_TPPRETURN_STATEMENT_2 _currn)
#else
void _VS1RETURN_STATEMENT_2(_currn )
_TPPRETURN_STATEMENT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVReturn_statement_2_out=PTGNewLineSeq(
((InIS(streamK, (* _IG_incl27))
) ? (PTGcilStreamTerminate(PTGIdent(StringTable((* _IG_incl28))))
) : (PTGNULL))
, PTGcilJump(StringTable((* _IG_incl29))));
/*SPC(1826)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1RESUME_STATEMENT_2(_TPPRESUME_STATEMENT_2 _currn)
#else
void _VS1RESUME_STATEMENT_2(_currn )
_TPPRESUME_STATEMENT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVMethod_body_2LabelNum_post=ADD(_AVResume_statement_2LabelNum_pre, 1);
/*SPC(2183)*/
_AVResume_statement_2_Label=NewUniqueLabel();
/*SPC(2181)*/
_AVResume_statement_2_out=PTGNewLineSeq(PTGNewLineSeq(PTGcilSetStreamStatus(PTGIdent(StringTable((* _IG_incl28))), _AVResume_statement_2LabelNum_pre), PTGcilJump(StringTable((* _IG_incl29)))), PTGcilLabel(StringTable(_AVResume_statement_2_Label)));
/*SPC(2188)*/
_AVBegin_block_2ResumeLabels_post=PTGCommaSeq(_AVBegin_block_2ResumeLabels_post, PTGIdent(StringTable(_AVResume_statement_2_Label)));
/*SPC(2185)*/

if (NOT(InIS(streamK, (* _IG_incl27)))) {
message(ERROR, "resume statement only allowed in streams", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6602)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BREAK_STATEMENT_2(_TPPBREAK_STATEMENT_2 _currn)
#else
void _VS1BREAK_STATEMENT_2(_currn )
_TPPBREAK_STATEMENT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVBreak_statement_2_JumpLabel=(* _IG_incl30);
/*SPC(1483)*/
_AVBreak_statement_2_out=
((EQ(_AVBreak_statement_2_JumpLabel, 0)
) ? (PTGNULL
) : (PTGcilJump(StringTable(_AVBreak_statement_2_JumpLabel))))
;
/*SPC(1485)*/

if (EQ((* _IG_incl31), 0)) {
message(ERROR, "break statement must be syntactically contained within a loop", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6490)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LOOP_2(_TPPLOOP_2 _currn)
#else
void _VS1LOOP_2(_currn )
_TPPLOOP_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_currn->_desc1->_ATSemEnv=_currn->_ATSemEnv;
/*SPC(12975)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LOOP_2(_TPPLOOP_2 _currn)
#else
void _VS2LOOP_2(_currn )
_TPPLOOP_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LOOP_2(_TPPLOOP_2 _currn)
#else
void _VS3LOOP_2(_currn )
_TPPLOOP_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LOOP_2(_TPPLOOP_2 _currn)
#else
void _VS4LOOP_2(_currn )
_TPPLOOP_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5LOOP_2(_TPPLOOP_2 _currn)
#else
void _VS5LOOP_2(_currn )
_TPPLOOP_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AVLoop_2__const81=_AS1_const81;
/*SPC(1469)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6LOOP_2(_TPPLOOP_2 _currn)
#else
void _VS6LOOP_2(_currn )
_TPPLOOP_2 _currn;

#endif
{
Environment* _IL_incl59;
int* _IL_incl31;
int* _IL_incl30;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_IL_incl31=_IG_incl31;_IG_incl31= &(_currn->_ATIsLoop);
_IL_incl30=_IG_incl30;_IG_incl30= &(_currn->_ATEndLabel);
_currn->_ATIsLoop=1;
/*SPC(6471)*/
_currn->_ATEndLabel=NewUniqueLabel();
/*SPC(1471)*/
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AVBlock_2_post_out=PTGNULL;
/*SPC(542)*/
_AVBlock_2_pre_out=PTGNULL;
/*SPC(541)*/
_AVBlock_2_inh_locals=PTGNULL;
/*SPC(540)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1locals)),(&( _AS1out)),(&( _AS1_const85)),(&( _AS1_const84)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_AVLoop_2__const82=_AS1_const82;
/*SPC(1469)*/
_AVLoop_2__const83=_AS1_const83;
/*SPC(1469)*/
_AVLoop_2__const84=PTGCommaSeq(_AS1_const84, IDENTICAL(_AS1locals));
/*SPC(1469)*/
_AVLoop_2__const85=_AS1_const85;
/*SPC(1469)*/
_AVMethod_body_2LabelNum_post=_currn->_desc1->_ATLabelNum_post;
/*SPC(0)*/
_AVBegin_block_2ResumeLabels_post=_currn->_desc1->_ATResumeLabels_post;
/*SPC(0)*/
_AVLoop_2_ExpLabel=NewUniqueLabel();
/*SPC(1470)*/
_AVLoop_2_out=PTGcilWhile(StringTable(_AVLoop_2_ExpLabel), PTGIdent("ldc.i4.s 1"), _AS1out, StringTable(_currn->_ATEndLabel));
/*SPC(1472)*/
_IG_incl59=_IL_incl59;
_IG_incl31=_IL_incl31;
_IG_incl30=_IL_incl30;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LOOP_EXP_2(_TPPLOOP_EXP_2 _currn)
#else
void _VS1LOOP_EXP_2(_currn )
_TPPLOOP_EXP_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc2->_ATSemEnv=_currn->_ATSemEnv;
/*SPC(12975)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LOOP_EXP_2(_TPPLOOP_EXP_2 _currn)
#else
void _VS2LOOP_EXP_2(_currn )
_TPPLOOP_EXP_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LOOP_EXP_2(_TPPLOOP_EXP_2 _currn)
#else
void _VS3LOOP_EXP_2(_currn )
_TPPLOOP_EXP_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVExpression_2_is_array_aggregate=0;
/*SPC(11085)*/
_currn->_desc1->_ATTypeEst=NoType;
/*SPC(11084)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LOOP_EXP_2(_TPPLOOP_EXP_2 _currn)
#else
void _VS4LOOP_EXP_2(_currn )
_TPPLOOP_EXP_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5LOOP_EXP_2(_TPPLOOP_EXP_2 _currn)
#else
void _VS5LOOP_EXP_2(_currn )
_TPPLOOP_EXP_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_AS1IsExplicitCoercion=0;
/*SPC(10797)*/
_currn->_desc1->_ATIsArg=0;
/*SPC(10994)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)));

if (NOT(IsConform(_currn->_desc1->_ATType, GetType(GetPreDefKey(MakeName("$BOOL"), (* _IG_incl23), (&( _currn->_AT_pos))), NoType)))) {
message(ERROR, CatStrStr(CatStrStr("loop expression type ", NameOfType(_currn->_desc1->_ATType)), " is not conform to $BOOL"), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6483)*/
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVLoop_2__const81=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(1456)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6LOOP_EXP_2(_TPPLOOP_EXP_2 _currn)
#else
void _VS6LOOP_EXP_2(_currn )
_TPPLOOP_EXP_2 _currn;

#endif
{
Environment* _IL_incl59;
int* _IL_incl31;
int* _IL_incl30;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_IL_incl31=_IG_incl31;_IG_incl31= &(_currn->_ATIsLoop);
_IL_incl30=_IG_incl30;_IG_incl30= &(_currn->_ATEndLabel);
_currn->_ATIsLoop=1;
/*SPC(6471)*/
_currn->_ATEndLabel=NewUniqueLabel();
/*SPC(1458)*/
_AS1StackBefore=0;
/*SPC(1901)*/
_AS1UsedAsQualifier=0;
/*SPC(1779)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,int*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1UsedAsQualifier)),(&( _AS1StackBefore)),(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVBlock_2_post_out=PTGNULL;
/*SPC(542)*/
_AVBlock_2_pre_out=PTGNULL;
/*SPC(541)*/
_AVBlock_2_inh_locals=PTGNULL;
/*SPC(540)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS7MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2locals)),(&( _AS2out)),(&( _AS2_const85)),(&( _AS2_const84)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)));
_AVLoop_2__const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _AS2_const82);
/*SPC(1456)*/
_AVLoop_2__const83=MAX(MAX(_currn->_desc1->_AT_const83, IDENTICAL(_currn->_desc1->_ATStackHeight)), _AS2_const83);
/*SPC(1456)*/
_AVLoop_2__const84=PTGCommaSeq(_AS2_const84, IDENTICAL(_AS2locals));
/*SPC(1456)*/
_AVLoop_2__const85=_AS2_const85;
/*SPC(1456)*/
_AVMethod_body_2LabelNum_post=_currn->_desc2->_ATLabelNum_post;
/*SPC(0)*/
_AVBegin_block_2ResumeLabels_post=_currn->_desc2->_ATResumeLabels_post;
/*SPC(0)*/
_AVLoop_2_ExpLabel=NewUniqueLabel();
/*SPC(1457)*/
_AVLoop_2_out=PTGcilWhile(StringTable(_AVLoop_2_ExpLabel), PTGNewLineSeq(_AS1out, PTGcilSatk2CLR(PTGIdent("valuetype 'BOOL'"), PTGIdent("bool"))), _AS2out, StringTable(_currn->_ATEndLabel));
/*SPC(1459)*/
_IG_incl59=_IL_incl59;
_IG_incl31=_IL_incl31;
_IG_incl30=_IL_incl30;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_TYPES_BLOCK_ELSE_2(_TPPWHEN_TYPES_BLOCK_ELSE_2 _currn)
#else
void _VS1WHEN_TYPES_BLOCK_ELSE_2(_currn )
_TPPWHEN_TYPES_BLOCK_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_currn->_desc1->_ATSemEnv=_currn->_ATSemEnv;
/*SPC(12975)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVWhen_types_block_2_SemKindSet=SingleIS(locVarK);
/*SPC(3725)*/
_currn->_ATSym=(* _IG_incl34);
/*SPC(4622)*/
_AVWhen_types_block_2_Bind=NoBinding;
/*SPC(4631)*/
_currn->_ATKey=NoKey;
/*SPC(4632)*/
UnionSemKindSet(_currn->_ATKey, _AVWhen_types_block_2_SemKindSet);
/*SPC(12105)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_TYPES_BLOCK_ELSE_2(_TPPWHEN_TYPES_BLOCK_ELSE_2 _currn)
#else
void _VS2WHEN_TYPES_BLOCK_ELSE_2(_currn )
_TPPWHEN_TYPES_BLOCK_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_TYPES_BLOCK_ELSE_2(_TPPWHEN_TYPES_BLOCK_ELSE_2 _currn)
#else
void _VS3WHEN_TYPES_BLOCK_ELSE_2(_currn )
_TPPWHEN_TYPES_BLOCK_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
ResetSym(_currn->_ATKey, _currn->_ATSym);
/*SPC(4586)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4WHEN_TYPES_BLOCK_ELSE_2(_TPPWHEN_TYPES_BLOCK_ELSE_2 _currn)
#else
void _VS4WHEN_TYPES_BLOCK_ELSE_2(_currn )
_TPPWHEN_TYPES_BLOCK_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5WHEN_TYPES_BLOCK_ELSE_2(_TPPWHEN_TYPES_BLOCK_ELSE_2 _currn)
#else
void _VS5WHEN_TYPES_BLOCK_ELSE_2(_currn )
_TPPWHEN_TYPES_BLOCK_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AVWhen_types_block_2__const81=_AS1_const81;
/*SPC(2386)*/
ResetUniqueName(_currn->_ATKey, GenerateName(StringTable(_currn->_ATSym)));
/*SPC(1859)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6WHEN_TYPES_BLOCK_ELSE_2(_TPPWHEN_TYPES_BLOCK_ELSE_2 _currn)
#else
void _VS6WHEN_TYPES_BLOCK_ELSE_2(_currn )
_TPPWHEN_TYPES_BLOCK_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AVWhen_types_block_2_UniqueSym=GetUniqueName(_currn->_ATKey, _currn->_ATSym);
/*SPC(1861)*/
_AVBlock_2_post_out=PTGNULL;
/*SPC(542)*/
_AVBlock_2_pre_out=
((EQ((* _IG_incl32), PTGNULL)
) ? (PTGcilPop()
) : (PTGcilStoreLocal(PTGcilIdent(StringTable(_AVWhen_types_block_2_UniqueSym)))))
;
/*SPC(2393)*/
_AVBlock_2_inh_locals=
((EQ((* _IG_incl32), PTGNULL)
) ? (PTGNULL
) : (PTGSpaceSeq((* _IG_incl32), PTGcilIdent(StringTable(_AVWhen_types_block_2_UniqueSym)))))
;
/*SPC(2388)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1locals)),(&( _AS1out)),(&( _AS1_const85)),(&( _AS1_const84)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_AVWhen_types_block_2__const82=_AS1_const82;
/*SPC(2386)*/
_AVWhen_types_block_2__const83=_AS1_const83;
/*SPC(2386)*/
_AVWhen_types_block_2__const84=PTGCommaSeq(_AS1_const84, IDENTICAL(_AS1locals));
/*SPC(2386)*/
_AVWhen_types_block_2__const85=_AS1_const85;
/*SPC(2386)*/
_AVMethod_body_2LabelNum_post=_currn->_desc1->_ATLabelNum_post;
/*SPC(0)*/
_AVBegin_block_2ResumeLabels_post=_currn->_desc1->_ATResumeLabels_post;
/*SPC(0)*/
_AVWhen_types_block_2_NextLabel=0;
/*SPC(2352)*/
_AVWhen_types_block_2_out=PTGNewLineSeq(_AS1out, PTGcilJump(StringTable((* _IG_incl33))));
/*SPC(2397)*/
_AVWhen_types_block_2_IsElse=1;
/*SPC(2387)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_TYPES_BLOCK_2(_TPPWHEN_TYPES_BLOCK_2 _currn)
#else
void _VS1WHEN_TYPES_BLOCK_2(_currn )
_TPPWHEN_TYPES_BLOCK_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc2->_ATSemEnv=_currn->_ATSemEnv;
/*SPC(12975)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVWhen_types_block_2_SemKindSet=SingleIS(locVarK);
/*SPC(3725)*/
_currn->_ATSym=(* _IG_incl34);
/*SPC(4622)*/
_AVWhen_types_block_2_Bind=BindIdn(_currn->_ATSemEnv, _currn->_ATSym);
/*SPC(4626)*/
_currn->_ATKey=KeyOf(_AVWhen_types_block_2_Bind);
/*SPC(12797)*/
UnionSemKindSet(_currn->_ATKey, _AVWhen_types_block_2_SemKindSet);
/*SPC(12105)*/
ResetType(_currn->_ATKey, _currn->_desc1->_ATType);
/*SPC(10958)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_TYPES_BLOCK_2(_TPPWHEN_TYPES_BLOCK_2 _currn)
#else
void _VS2WHEN_TYPES_BLOCK_2(_currn )
_TPPWHEN_TYPES_BLOCK_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_TYPES_BLOCK_2(_TPPWHEN_TYPES_BLOCK_2 _currn)
#else
void _VS3WHEN_TYPES_BLOCK_2(_currn )
_TPPWHEN_TYPES_BLOCK_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
ResetSym(_currn->_ATKey, _currn->_ATSym);
/*SPC(4586)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4WHEN_TYPES_BLOCK_2(_TPPWHEN_TYPES_BLOCK_2 _currn)
#else
void _VS4WHEN_TYPES_BLOCK_2(_currn )
_TPPWHEN_TYPES_BLOCK_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5WHEN_TYPES_BLOCK_2(_TPPWHEN_TYPES_BLOCK_2 _currn)
#else
void _VS5WHEN_TYPES_BLOCK_2(_currn )
_TPPWHEN_TYPES_BLOCK_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVWhen_types_block_2__const81=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(2356)*/
ResetUniqueName(_currn->_ATKey, GenerateName(StringTable(_currn->_ATSym)));
/*SPC(1859)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6WHEN_TYPES_BLOCK_2(_TPPWHEN_TYPES_BLOCK_2 _currn)
#else
void _VS6WHEN_TYPES_BLOCK_2(_currn )
_TPPWHEN_TYPES_BLOCK_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);

if (NOT(IsConform(_currn->_desc1->_ATType, (* _IG_incl35)))) {
message(ERROR, CatStrStr(CatStrStr(CatStrStr(CatStrStr("in type case statement type '", NameOfType(_currn->_desc1->_ATType)), "' is not conform to type '"), NameOfType((* _IG_incl35))), "'"), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(7041)*/
_AS1IsMethodParameterType=0;
/*SPC(5941)*/
_AVType_specifier_2_IsTypeBound=0;
/*SPC(5788)*/
_AVType_specifier_2_IsConstructor=0;
/*SPC(2456)*/
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsMethodParameterType)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVWhen_types_block_2_UniqueSym=GetUniqueName(_currn->_ATKey, _currn->_ATSym);
/*SPC(1861)*/
_AVBlock_2_post_out=PTGNULL;
/*SPC(542)*/
_AVBlock_2_pre_out=PTGNewLineSeq(
((AND(IsMonoValueType(_currn->_desc1->_ATType), IsPolymorph((* _IG_incl35)))
) ? (PTGNewLineSeq(PTGcilUnbox(GetCLRType(_currn->_desc1->_ATType)), PTGcilPushObject(GetCLRType(_currn->_desc1->_ATType)))
) : (PTGNULL))
, PTGcilStoreLocal(PTGcilIdent(StringTable(_AVWhen_types_block_2_UniqueSym))));
/*SPC(2360)*/
_AVBlock_2_inh_locals=PTGSpaceSeq(GetCLRType(_currn->_desc1->_ATType), PTGcilIdent(StringTable(_AVWhen_types_block_2_UniqueSym)));
/*SPC(2357)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS7MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2locals)),(&( _AS2out)),(&( _AS2_const85)),(&( _AS2_const84)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)));
_AVWhen_types_block_2__const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _AS2_const82);
/*SPC(2356)*/
_AVWhen_types_block_2__const83=MAX(_currn->_desc1->_AT_const83, _AS2_const83);
/*SPC(2356)*/
_AVWhen_types_block_2__const84=PTGCommaSeq(_AS2_const84, IDENTICAL(_AS2locals));
/*SPC(2356)*/
_AVWhen_types_block_2__const85=_AS2_const85;
/*SPC(2356)*/
_AVMethod_body_2LabelNum_post=_currn->_desc2->_ATLabelNum_post;
/*SPC(0)*/
_AVBegin_block_2ResumeLabels_post=_currn->_desc2->_ATResumeLabels_post;
/*SPC(0)*/
_AVWhen_types_block_2_NextLabel=NewUniqueLabel();
/*SPC(2370)*/
_AVWhen_types_block_2_out=PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGcilDup(), 
((IsMonoValueType((* _IG_incl35))
) ? (PTGcilBox(GetCLRType((* _IG_incl35)))
) : (PTGNULL))
), PTGcilIsinst(GetCLRType(_currn->_desc1->_ATType))), PTGcilJumpNull(StringTable(_AVWhen_types_block_2_NextLabel))), _AS2out), PTGcilJump(StringTable((* _IG_incl33)))), PTGcilLabel(StringTable(_AVWhen_types_block_2_NextLabel)));
/*SPC(2372)*/
_AVWhen_types_block_2_IsElse=0;
/*SPC(2353)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5WHEN_TYPES_BLOCKS_EMPTY_2(_TPPWHEN_TYPES_BLOCKS_EMPTY_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5WHEN_TYPES_BLOCKS_EMPTY_2(_currn ,_AS0_const81)
_TPPWHEN_TYPES_BLOCKS_EMPTY_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const81)=NullDefTableKeyList();
/*SPC(2344)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6WHEN_TYPES_BLOCKS_EMPTY_2(_TPPWHEN_TYPES_BLOCKS_EMPTY_2 _currn,PTGNode* _AS0out,int* _AS0_const85,PTGNode* _AS0_const84,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81,int* _AS0_const74)
#else
void _VS6WHEN_TYPES_BLOCKS_EMPTY_2(_currn ,_AS0out,_AS0_const85,_AS0_const84,_AS0_const83,_AS0_const82,_AS0_const81,_AS0_const74)
_TPPWHEN_TYPES_BLOCKS_EMPTY_2 _currn;
int* _AS0_const74;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const84;
int* _AS0_const85;
PTGNode* _AS0out;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const74)=ZERO();
/*SPC(2344)*/
(* _AS0_const82)=PTGNull();
/*SPC(2344)*/
(* _AS0_const83)=ONE();
/*SPC(2344)*/
(* _AS0_const84)=PTGNull();
/*SPC(2344)*/
(* _AS0_const85)=ZERO();
/*SPC(2344)*/
(* _AS0out)=PTGNULL;
/*SPC(2345)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_TYPES_BLOCKS_2(_TPPWHEN_TYPES_BLOCKS_2 _currn)
#else
void _VS1WHEN_TYPES_BLOCKS_2(_currn )
_TPPWHEN_TYPES_BLOCKS_2 _currn;

#endif
{
int _AS1_const74;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc2->_ATSemEnv=NewScope((* _IG_incl2));
/*SPC(12953)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5WHEN_TYPES_BLOCKS_2(_TPPWHEN_TYPES_BLOCKS_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5WHEN_TYPES_BLOCKS_2(_currn ,_AS0_const81)
_TPPWHEN_TYPES_BLOCKS_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
int _AS1_const74;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, AppDefTableKeyList(_AVWhen_types_block_2__const81, SingleDefTableKeyList(_currn->_desc2->_ATKey)));
/*SPC(2339)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6WHEN_TYPES_BLOCKS_2(_TPPWHEN_TYPES_BLOCKS_2 _currn,PTGNode* _AS0out,int* _AS0_const85,PTGNode* _AS0_const84,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81,int* _AS0_const74)
#else
void _VS6WHEN_TYPES_BLOCKS_2(_currn ,_AS0out,_AS0_const85,_AS0_const84,_AS0_const83,_AS0_const82,_AS0_const81,_AS0_const74)
_TPPWHEN_TYPES_BLOCKS_2 _currn;
int* _AS0_const74;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const84;
int* _AS0_const85;
PTGNode* _AS0out;

#endif
{
int _AS1_const74;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*,int*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1_const85)),(&( _AS1_const84)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)),(&( _AS1_const74)));
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const74)=ADD(_AS1_const74, IDENTICAL(_AVWhen_types_block_2_IsElse));
/*SPC(2339)*/
(* _AS0_const82)=PTGCommaSeq(_AS1_const82, _AVWhen_types_block_2__const82);
/*SPC(2339)*/
(* _AS0_const83)=MAX(_AS1_const83, _AVWhen_types_block_2__const83);
/*SPC(2339)*/
(* _AS0_const84)=PTGCommaSeq(_AS1_const84, _AVWhen_types_block_2__const84);
/*SPC(2339)*/
(* _AS0_const85)=ADD(_AS1_const85, _AVWhen_types_block_2__const85);
/*SPC(2339)*/
(* _AS0out)=PTGNewLineSeq(_AS1out, _AVWhen_types_block_2_out);
/*SPC(2340)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CASE_STATEMENT_ATT_2(_TPPTYPE_CASE_STATEMENT_ATT_2 _currn)
#else
void _VS1TYPE_CASE_STATEMENT_ATT_2(_currn )
_TPPTYPE_CASE_STATEMENT_ATT_2 _currn;

#endif
{
int* _IL_incl34;
Environment* _IL_incl2;
int _AS2_const74;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
int _AS1StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl34=_IG_incl34;_IG_incl34= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_currn->_desc1->_ATKindSet=SingleIS(locVarK);
/*SPC(3720)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATSym=_AVAttribute_declaration_2__const72;
/*SPC(4616)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl34=_IL_incl34;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CASE_STATEMENT_ATT_2(_TPPTYPE_CASE_STATEMENT_ATT_2 _currn)
#else
void _VS2TYPE_CASE_STATEMENT_ATT_2(_currn )
_TPPTYPE_CASE_STATEMENT_ATT_2 _currn;

#endif
{
int* _IL_incl34;
Environment* _IL_incl2;
int _AS2_const74;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
int _AS1StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl34=_IG_incl34;_IG_incl34= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl34=_IL_incl34;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CASE_STATEMENT_ATT_2(_TPPTYPE_CASE_STATEMENT_ATT_2 _currn)
#else
void _VS3TYPE_CASE_STATEMENT_ATT_2(_currn )
_TPPTYPE_CASE_STATEMENT_ATT_2 _currn;

#endif
{
int* _IL_incl34;
Environment* _IL_incl2;
int _AS2_const74;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
int _AS1StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl34=_IG_incl34;_IG_incl34= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl34=_IL_incl34;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_CASE_STATEMENT_ATT_2(_TPPTYPE_CASE_STATEMENT_ATT_2 _currn)
#else
void _VS4TYPE_CASE_STATEMENT_ATT_2(_currn )
_TPPTYPE_CASE_STATEMENT_ATT_2 _currn;

#endif
{
int* _IL_incl34;
Environment* _IL_incl2;
int _AS2_const74;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
int _AS1StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl34=_IG_incl34;_IG_incl34= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl34=_IL_incl34;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5TYPE_CASE_STATEMENT_ATT_2(_TPPTYPE_CASE_STATEMENT_ATT_2 _currn)
#else
void _VS5TYPE_CASE_STATEMENT_ATT_2(_currn )
_TPPTYPE_CASE_STATEMENT_ATT_2 _currn;

#endif
{
int* _IL_incl34;
Environment* _IL_incl2;
int _AS2_const74;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
int _AS1StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl34=_IG_incl34;_IG_incl34= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVType_case_statement_2__const81=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(2327)*/
_IG_incl34=_IL_incl34;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6TYPE_CASE_STATEMENT_ATT_2(_TPPTYPE_CASE_STATEMENT_ATT_2 _currn)
#else
void _VS6TYPE_CASE_STATEMENT_ATT_2(_currn )
_TPPTYPE_CASE_STATEMENT_ATT_2 _currn;

#endif
{
STPtr* _IL_incl35;
int* _IL_incl33;
PTGNode* _IL_incl32;
int* _IL_incl34;
Environment* _IL_incl2;
int _AS2_const74;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
int _AS1StackHeight;

_VisitVarDecl()
_VisitEntry();
_IL_incl35=_IG_incl35;_IG_incl35= &(_currn->_ATType);
_IL_incl33=_IG_incl33;_IG_incl33= &(_currn->_ATEndLabel);
_IL_incl32=_IG_incl32;_IG_incl32= &(_currn->_ATtype_out);
_IL_incl34=_IG_incl34;_IG_incl34= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_currn->_desc1->_ATIsTypeCase=1;
/*SPC(6997)*/
(*(_CALL_VS_((NODEPTR ,int*,int*,PTGNode*,DefTableKeyList*)) (VS8MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1StackHeight)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_currn->_ATType=_AVAttribute_declaration_2__const73;
/*SPC(7029)*/
_currn->_ATEndLabel=NewUniqueLabel();
/*SPC(2309)*/
_currn->_ATtype_out=GetCLRType(_currn->_ATType);
/*SPC(2336)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*,int*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2out)),(&( _AS2_const85)),(&( _AS2_const84)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)),(&( _AS2_const74)));
_AVType_case_statement_2__const82=PTGCommaSeq(_AS1_const82, _AS2_const82);
/*SPC(2327)*/
_AVType_case_statement_2__const83=MAX(MAX(_AS1_const83, IDENTICAL(_AS1StackHeight)), _AS2_const83);
/*SPC(2327)*/
_AVType_case_statement_2__const84=_AS2_const84;
/*SPC(2327)*/
_AVType_case_statement_2__const85=_AS2_const85;
/*SPC(2327)*/
_AVType_case_statement_2_HaveElse=_AS2_const74;
/*SPC(2310)*/
_AVType_case_statement_2_out=PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(_currn->_desc1->_ATinit_code, _AS2out), 
((_AVType_case_statement_2_HaveElse
) ? (PTGNULL
) : (PTGcilPop()))
), PTGcilLabel(StringTable(_currn->_ATEndLabel)));
/*SPC(2328)*/
_IG_incl35=_IL_incl35;
_IG_incl33=_IL_incl33;
_IG_incl32=_IL_incl32;
_IG_incl34=_IL_incl34;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CASE_STATEMENT_2(_TPPTYPE_CASE_STATEMENT_2 _currn)
#else
void _VS1TYPE_CASE_STATEMENT_2(_currn )
_TPPTYPE_CASE_STATEMENT_2 _currn;

#endif
{
int* _IL_incl34;
Environment* _IL_incl2;
int _AS2_const74;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
int _AS1IsUnnamed;
PTGNode _AS1des_out;

_VisitVarDecl()
_VisitEntry();
_IL_incl34=_IG_incl34;_IG_incl34= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_AVName_2_Is_aget=0;
/*SPC(4418)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATSym=_currn->_desc1->_ATSym;
/*SPC(4612)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl34=_IL_incl34;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CASE_STATEMENT_2(_TPPTYPE_CASE_STATEMENT_2 _currn)
#else
void _VS2TYPE_CASE_STATEMENT_2(_currn )
_TPPTYPE_CASE_STATEMENT_2 _currn;

#endif
{
int* _IL_incl34;
Environment* _IL_incl2;
int _AS2_const74;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
int _AS1IsUnnamed;
PTGNode _AS1des_out;

_VisitVarDecl()
_VisitEntry();
_IL_incl34=_IG_incl34;_IG_incl34= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl34=_IL_incl34;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CASE_STATEMENT_2(_TPPTYPE_CASE_STATEMENT_2 _currn)
#else
void _VS3TYPE_CASE_STATEMENT_2(_currn )
_TPPTYPE_CASE_STATEMENT_2 _currn;

#endif
{
int* _IL_incl34;
Environment* _IL_incl2;
int _AS2_const74;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
int _AS1IsUnnamed;
PTGNode _AS1des_out;

_VisitVarDecl()
_VisitEntry();
_IL_incl34=_IG_incl34;_IG_incl34= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_AVName_2_AttributeIndex=1;
/*SPC(5866)*/
_AVName_2_SemScopeKey=NoKey;
/*SPC(12921)*/
_AVName_2_SemScope=GetSemScope(_AVName_2_SemScopeKey, NoEnv);
/*SPC(12922)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsUnnamed)));

if (NOT(InIS(locVarK, GetSemKindSet(_currn->_desc1->_ATKey, NULLIS)))) {
message(ERROR, "type case variable must be a local variable or method parameter", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(7019)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl34=_IL_incl34;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_CASE_STATEMENT_2(_TPPTYPE_CASE_STATEMENT_2 _currn)
#else
void _VS4TYPE_CASE_STATEMENT_2(_currn )
_TPPTYPE_CASE_STATEMENT_2 _currn;

#endif
{
int* _IL_incl34;
Environment* _IL_incl2;
int _AS2_const74;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
int _AS1IsUnnamed;
PTGNode _AS1des_out;

_VisitVarDecl()
_VisitEntry();
_IL_incl34=_IG_incl34;_IG_incl34= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl34=_IL_incl34;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5TYPE_CASE_STATEMENT_2(_TPPTYPE_CASE_STATEMENT_2 _currn)
#else
void _VS5TYPE_CASE_STATEMENT_2(_currn )
_TPPTYPE_CASE_STATEMENT_2 _currn;

#endif
{
int* _IL_incl34;
Environment* _IL_incl2;
int _AS2_const74;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
int _AS1IsUnnamed;
PTGNode _AS1des_out;

_VisitVarDecl()
_VisitEntry();
_IL_incl34=_IG_incl34;_IG_incl34= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVType_case_statement_2__const81=_AS2_const81;
/*SPC(2315)*/
_IG_incl34=_IL_incl34;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6TYPE_CASE_STATEMENT_2(_TPPTYPE_CASE_STATEMENT_2 _currn)
#else
void _VS6TYPE_CASE_STATEMENT_2(_currn )
_TPPTYPE_CASE_STATEMENT_2 _currn;

#endif
{
STPtr* _IL_incl35;
int* _IL_incl33;
PTGNode* _IL_incl32;
int* _IL_incl34;
Environment* _IL_incl2;
int _AS2_const74;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
int _AS1IsUnnamed;
PTGNode _AS1des_out;

_VisitVarDecl()
_VisitEntry();
_IL_incl35=_IG_incl35;_IG_incl35= &(_currn->_ATType);
_IL_incl33=_IG_incl33;_IG_incl33= &(_currn->_ATEndLabel);
_IL_incl32=_IG_incl32;_IG_incl32= &(_currn->_ATtype_out);
_IL_incl34=_IG_incl34;_IG_incl34= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_AVName_2_IsAggregate=0;
/*SPC(944)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1des_out)),(&( _AS1IsUnnamed)));
_currn->_ATType=GetType(_currn->_desc1->_ATKey, NoType);
/*SPC(7024)*/
_currn->_ATEndLabel=NewUniqueLabel();
/*SPC(2309)*/
_currn->_ATtype_out=PTGNULL;
/*SPC(2308)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*,int*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2out)),(&( _AS2_const85)),(&( _AS2_const84)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)),(&( _AS2_const74)));
_AVType_case_statement_2__const82=_AS2_const82;
/*SPC(2315)*/
_AVType_case_statement_2__const83=_AS2_const83;
/*SPC(2315)*/
_AVType_case_statement_2__const84=_AS2_const84;
/*SPC(2315)*/
_AVType_case_statement_2__const85=_AS2_const85;
/*SPC(2315)*/
_AVType_case_statement_2_HaveElse=_AS2_const74;
/*SPC(2310)*/
_AVType_case_statement_2_out=PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(_AS1des_out, PTGcilPushObject(GetCLRType(GetType(_currn->_desc1->_ATKey, NoType)))), _AS2out), 
((_AVType_case_statement_2_HaveElse
) ? (PTGNULL
) : (PTGcilPop()))
), PTGcilLabel(StringTable(_currn->_ATEndLabel)));
/*SPC(2316)*/
_IG_incl35=_IL_incl35;
_IG_incl33=_IL_incl33;
_IG_incl32=_IL_incl32;
_IG_incl34=_IL_incl34;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CASE_LABEL_DES_2(_TPPCASE_LABEL_DES_2 _currn)
#else
void _VS1CASE_LABEL_DES_2(_currn )
_TPPCASE_LABEL_DES_2 _currn;

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
void _VS2CASE_LABEL_DES_2(_TPPCASE_LABEL_DES_2 _currn)
#else
void _VS2CASE_LABEL_DES_2(_currn )
_TPPCASE_LABEL_DES_2 _currn;

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

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CASE_LABEL_DES_2(_TPPCASE_LABEL_DES_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS3CASE_LABEL_DES_2(_currn ,_AS0_const81)
_TPPCASE_LABEL_DES_2 _currn;
DefTableKeyList* _AS0_const81;

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
(*(_CALL_VS_((NODEPTR ,int*,int*,CTValuePtr*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Is_aget)),(&( _AS1Op)),(&( _AS1Val)),(&( _AS1_const81)));
(* _AS0_const81)=_AS1_const81;
/*SPC(6195)*/
_AVBuiltin_option_2AttrAccLoc_post=
((AND(InIS(attributeK, GetSemKindSet(_currn->_desc1->_ATKey, NULLIS)), NOT(_currn->_desc1->_ATIsQualified))
) ? (AddToSetDefTableKeyList(_currn->_desc1->_ATKey, _AVBuiltin_option_2AttrAccLoc_post, CmpDefTableKey)
) : (_AVBuiltin_option_2AttrAccLoc_post))
;
/*SPC(6789)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CASE_LABEL_DES_2(_TPPCASE_LABEL_DES_2 _currn,CTValuePtr* _AS0LabelVal,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS4CASE_LABEL_DES_2(_currn ,_AS0LabelVal,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPCASE_LABEL_DES_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
CTValuePtr* _AS0LabelVal;

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
_AVDesignator_2_IsCall=0;
/*SPC(6662)*/
_AS1StackBefore=(* _IG_incl41);
/*SPC(1954)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,PTGNode*,int*,int*,int*,int*,int*,CTValuePtr*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1qualifier_out)),(&( _AS1ValHomeNode)),(&( _AS1StackHeight)),(&( _AS1StackBefore)),(&( _AS1Is_aget)),(&( _AS1IsSharedQualified)),(&( _AS1Op)),(&( _AS1Val)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
(* _AS0_const82)=PTGCommaSeq(_AS1_const82, IDENTICAL(_AS1ValHomeNode));
/*SPC(6195)*/
(* _AS0_const83)=MAX(_AS1_const83, IDENTICAL(_AS1StackHeight));
/*SPC(6195)*/
_AVCase_label_2_Type=GetType(_currn->_desc1->_ATKey, NoType);
/*SPC(6239)*/
(* _AS0LabelVal)=_AVDesignator_2_LabelVal;
/*SPC(6196)*/

if (NOT(IsLabelValue((* _AS0LabelVal)))) {
message(ERROR, "case label must be compile time integer, boolean or character constant", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6204)*/

if (NOT(IsCoercible(_AVCase_label_2_Type, (* _IG_incl42), (&( _currn->_AT_pos)), (* _IG_incl23), 1))) {
message(ERROR, CatStrStr(CatStrStr(CatStrStr("the type of the case label - ", NameOfType(_AVCase_label_2_Type)), " - must conform to the type of the case expression - "), NameOfType((* _IG_incl42))), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6251)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CASE_LABEL_VALUE_2(_TPPCASE_LABEL_VALUE_2 _currn)
#else
void _VS1CASE_LABEL_VALUE_2(_currn )
_TPPCASE_LABEL_VALUE_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CASE_LABEL_VALUE_2(_TPPCASE_LABEL_VALUE_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS3CASE_LABEL_VALUE_2(_currn ,_AS0_const81)
_TPPCASE_LABEL_VALUE_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const81)=NullDefTableKeyList();
/*SPC(6191)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CASE_LABEL_VALUE_2(_TPPCASE_LABEL_VALUE_2 _currn,CTValuePtr* _AS0LabelVal,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS4CASE_LABEL_VALUE_2(_currn ,_AS0LabelVal,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPCASE_LABEL_VALUE_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
CTValuePtr* _AS0LabelVal;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const82)=PTGNull();
/*SPC(6191)*/
(* _AS0_const83)=ONE();
/*SPC(6191)*/
_AVCase_label_2_Type=
((EQ(_currn->_desc1->_ATType, (* _IG_incl44))
) ? (CoerceValue(_currn->_desc1->_ATVal, (* _IG_incl42), 0, (&( _currn->_AT_pos)), (* _IG_incl23))
) : (_currn->_desc1->_ATType))
;
/*SPC(6231)*/
(* _AS0LabelVal)=_currn->_desc1->_ATVal;
/*SPC(6192)*/

if (NOT(IsLabelValue((* _AS0LabelVal)))) {
message(ERROR, "case label must be compile time integer, boolean or character constant", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6204)*/

if (NOT(IsCoercible(_AVCase_label_2_Type, (* _IG_incl42), (&( _currn->_AT_pos)), (* _IG_incl23), 1))) {
message(ERROR, CatStrStr(CatStrStr(CatStrStr("the type of the case label - ", NameOfType(_AVCase_label_2_Type)), " - must conform to the type of the case expression - "), NameOfType((* _IG_incl42))), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6251)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LABEL_RANGE_2(_TPPLABEL_RANGE_2 _currn)
#else
void _VS1LABEL_RANGE_2(_currn )
_TPPLABEL_RANGE_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
CTValuePtr _AS2LabelVal;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
CTValuePtr _AS1LabelVal;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LABEL_RANGE_2(_TPPLABEL_RANGE_2 _currn)
#else
void _VS2LABEL_RANGE_2(_currn )
_TPPLABEL_RANGE_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
CTValuePtr _AS2LabelVal;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
CTValuePtr _AS1LabelVal;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LABEL_RANGE_2(_TPPLABEL_RANGE_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS3LABEL_RANGE_2(_currn ,_AS0_const81)
_TPPLABEL_RANGE_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
CTValuePtr _AS2LabelVal;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
CTValuePtr _AS1LabelVal;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(834)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LABEL_RANGE_2(_TPPLABEL_RANGE_2 _currn,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS4LABEL_RANGE_2(_currn ,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPLABEL_RANGE_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;

#endif
{
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
CTValuePtr _AS2LabelVal;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
CTValuePtr _AS1LabelVal;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,CTValuePtr*,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1LabelVal)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,CTValuePtr*,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2LabelVal)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)));
(* _AS0_const82)=PTGCommaSeq(_AS1_const82, _AS2_const82);
/*SPC(834)*/
(* _AS0_const83)=MAX(_AS1_const83, _AS2_const83);
/*SPC(834)*/
_AVWhen_label_stmt_2LabelRanges_post=OrderedInsertValueRangePtrList(_AVWhen_label_stmt_2LabelRanges_post, NewValueRange(_AS1LabelVal, _AS2LabelVal), CompareLabelRange);
/*SPC(6270)*/
_AVLabel_range_2_check=IsLabelRange(_AS1LabelVal, _AS2LabelVal);
/*SPC(6216)*/
_AVLabel_range_2_FalseLabel=NewUniqueLabel();
/*SPC(835)*/
_AVLabel_range_2LabelOut_post=PTGNewLineSeq(_AVLabel_range_2LabelOut_post, PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGcilDup(), GetValueCode((* _IG_incl42), _AS1LabelVal, (&( _currn->_AT_pos)), (* _IG_incl23))), PTGcilGreaterEqual(GetCLRType((* _IG_incl42)))), PTGcilSatk2CLR(PTGIdent("valuetype 'BOOL'"), PTGIdent("bool"))), PTGcilBranchFalse(StringTable(_AVLabel_range_2_FalseLabel))), PTGcilDup()), GetValueCode((* _IG_incl42), _AS2LabelVal, (&( _currn->_AT_pos)), (* _IG_incl23))), PTGcilLowerEqual(GetCLRType((* _IG_incl42)))), PTGcilSatk2CLR(PTGIdent("valuetype 'BOOL'"), PTGIdent("bool"))), PTGcilBranchTrue(StringTable((* _IG_incl45)))), PTGcilLabel(StringTable(_AVLabel_range_2_FalseLabel))));
/*SPC(837)*/

if (EQ(_AVLabel_range_2_check, 2)) {
message(ERROR, "second label must be greater or equal to first", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6222)*/

if (EQ(_AVLabel_range_2_check, 1)) {
message(ERROR, "case labels must be of the same type", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6219)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LABEL_RANGE_SINGLE_2(_TPPLABEL_RANGE_SINGLE_2 _currn)
#else
void _VS1LABEL_RANGE_SINGLE_2(_currn )
_TPPLABEL_RANGE_SINGLE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
CTValuePtr _AS1LabelVal;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LABEL_RANGE_SINGLE_2(_TPPLABEL_RANGE_SINGLE_2 _currn)
#else
void _VS2LABEL_RANGE_SINGLE_2(_currn )
_TPPLABEL_RANGE_SINGLE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
CTValuePtr _AS1LabelVal;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LABEL_RANGE_SINGLE_2(_TPPLABEL_RANGE_SINGLE_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS3LABEL_RANGE_SINGLE_2(_currn ,_AS0_const81)
_TPPLABEL_RANGE_SINGLE_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
CTValuePtr _AS1LabelVal;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(* _AS0_const81)=_AS1_const81;
/*SPC(820)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LABEL_RANGE_SINGLE_2(_TPPLABEL_RANGE_SINGLE_2 _currn,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS4LABEL_RANGE_SINGLE_2(_currn ,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPLABEL_RANGE_SINGLE_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
CTValuePtr _AS1LabelVal;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,CTValuePtr*,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1LabelVal)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
(* _AS0_const82)=_AS1_const82;
/*SPC(820)*/
(* _AS0_const83)=_AS1_const83;
/*SPC(820)*/
_AVWhen_label_stmt_2LabelRanges_post=OrderedInsertValueRangePtrList(_AVWhen_label_stmt_2LabelRanges_post, NewValueRange(_AS1LabelVal, _AS1LabelVal), CompareLabelRange);
/*SPC(6264)*/
_AVLabel_range_2_check=3;
/*SPC(6210)*/
_AVLabel_range_2_FalseLabel=0;
/*SPC(817)*/
_AVLabel_range_2LabelOut_post=PTGNewLineSeq(_AVLabel_range_2LabelOut_post, PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGcilDup(), GetValueCode((* _IG_incl42), _AS1LabelVal, (&( _currn->_AT_pos)), (* _IG_incl23))), PTGcilBox(GetCLRType((* _IG_incl42)))), PTGcilEqual(GetCLRType((* _IG_incl42)))), PTGcilSatk2CLR(PTGIdent("valuetype 'BOOL'"), PTGIdent("bool"))), PTGcilBranchTrue(StringTable((* _IG_incl45)))));
/*SPC(821)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LABEL_LIST_2(_TPPLABEL_LIST_2 _currn)
#else
void _VS2LABEL_LIST_2(_currn )
_TPPLABEL_LIST_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LABEL_LIST_2(_TPPLABEL_LIST_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS3LABEL_LIST_2(_currn ,_AS0_const81)
_TPPLABEL_LIST_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const81)=_AVLST_Label_list_2__const81;
/*SPC(5516)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LABEL_LIST_2(_TPPLABEL_LIST_2 _currn,int* _AS0IsEmpty,PTGNode* _AS0out,ValueRangePtrList* _AS0LabelRanges_post,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS4LABEL_LIST_2(_currn ,_AS0IsEmpty,_AS0out,_AS0LabelRanges_post,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPLABEL_LIST_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
ValueRangePtrList* _AS0LabelRanges_post;
PTGNode* _AS0out;
int* _AS0IsEmpty;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVLabel_range_2LabelOut_post=PTGNULL;
/*SPC(805)*/
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const82)=_AVLST_Label_list_2__const82;
/*SPC(5516)*/
(* _AS0_const83)=_AVLST_Label_list_2__const83;
/*SPC(5516)*/
(* _AS0LabelRanges_post)=_AVWhen_label_stmt_2LabelRanges_post;
/*SPC(0)*/
(* _AS0out)=
((EQ(_AVLabel_range_2LabelOut_post, PTGNULL)
) ? (PTGcilJump(StringTable((* _IG_incl45)))
) : (_AVLabel_range_2LabelOut_post))
;
/*SPC(807)*/
(* _AS0IsEmpty)=EQ(_AVLabel_range_2LabelOut_post, PTGNULL);
/*SPC(811)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_LABEL_STMT_2(_TPPWHEN_LABEL_STMT_2 _currn)
#else
void _VS1WHEN_LABEL_STMT_2(_currn )
_TPPWHEN_LABEL_STMT_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
ValueRangePtrList _AS1LabelRanges_post;
PTGNode _AS1out;
int _AS1IsEmpty;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc2->_ATSemEnv=_currn->_ATSemEnv;
/*SPC(12975)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_LABEL_STMT_2(_TPPWHEN_LABEL_STMT_2 _currn)
#else
void _VS2WHEN_LABEL_STMT_2(_currn )
_TPPWHEN_LABEL_STMT_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
ValueRangePtrList _AS1LabelRanges_post;
PTGNode _AS1out;
int _AS1IsEmpty;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_LABEL_STMT_2(_TPPWHEN_LABEL_STMT_2 _currn)
#else
void _VS3WHEN_LABEL_STMT_2(_currn )
_TPPWHEN_LABEL_STMT_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
ValueRangePtrList _AS1LabelRanges_post;
PTGNode _AS1out;
int _AS1IsEmpty;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4WHEN_LABEL_STMT_2(_TPPWHEN_LABEL_STMT_2 _currn)
#else
void _VS4WHEN_LABEL_STMT_2(_currn )
_TPPWHEN_LABEL_STMT_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
ValueRangePtrList _AS1LabelRanges_post;
PTGNode _AS1out;
int _AS1IsEmpty;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5WHEN_LABEL_STMT_2(_TPPWHEN_LABEL_STMT_2 _currn)
#else
void _VS5WHEN_LABEL_STMT_2(_currn )
_TPPWHEN_LABEL_STMT_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
ValueRangePtrList _AS1LabelRanges_post;
PTGNode _AS1out;
int _AS1IsEmpty;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVWhen_label_stmt_2__const81=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(789)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6WHEN_LABEL_STMT_2(_TPPWHEN_LABEL_STMT_2 _currn)
#else
void _VS6WHEN_LABEL_STMT_2(_currn )
_TPPWHEN_LABEL_STMT_2 _currn;

#endif
{
Environment* _IL_incl59;
int* _IL_incl45;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
ValueRangePtrList _AS1LabelRanges_post;
PTGNode _AS1out;
int _AS1IsEmpty;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_IL_incl45=_IG_incl45;_IG_incl45= &(_currn->_ATBlockLabel);
_currn->_ATBlockLabel=NewUniqueLabel();
/*SPC(791)*/
(*(_CALL_VS_((NODEPTR ,int*,PTGNode*,ValueRangePtrList*,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsEmpty)),(&( _AS1out)),(&( _AS1LabelRanges_post)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVBlock_2_post_out=PTGNULL;
/*SPC(542)*/
_AVBlock_2_pre_out=PTGNULL;
/*SPC(541)*/
_AVBlock_2_inh_locals=PTGNULL;
/*SPC(540)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS7MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2locals)),(&( _AS2out)),(&( _AS2_const85)),(&( _AS2_const84)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)));
_AVWhen_label_stmt_2__const82=PTGCommaSeq(_AS1_const82, _AS2_const82);
/*SPC(789)*/
_AVWhen_label_stmt_2__const83=MAX(_AS1_const83, _AS2_const83);
/*SPC(789)*/
_AVWhen_label_stmt_2__const84=PTGCommaSeq(_AS2_const84, IDENTICAL(_AS2locals));
/*SPC(789)*/
_AVWhen_label_stmt_2__const85=_AS2_const85;
/*SPC(789)*/
_AVWhen_label_stmt_2LabelRanges_post=_AS1LabelRanges_post;
/*SPC(0)*/
_AVMethod_body_2LabelNum_post=_currn->_desc2->_ATLabelNum_post;
/*SPC(0)*/
_AVBegin_block_2ResumeLabels_post=_currn->_desc2->_ATResumeLabels_post;
/*SPC(0)*/
_AVWhen_label_stmt_2_NextLabel=NewUniqueLabel();
/*SPC(790)*/
_AVWhen_label_stmt_2_out=PTGNewLineSeq(_AS1out, PTGcilCase(StringTable(_currn->_ATBlockLabel), _AS2out, StringTable((* _IG_incl46)), StringTable(_AVWhen_label_stmt_2_NextLabel)));
/*SPC(794)*/
_AVWhen_label_stmt_2_IsElse=_AS1IsEmpty;
/*SPC(792)*/
_IG_incl59=_IL_incl59;
_IG_incl45=_IL_incl45;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5WHEN_LABEL_STMTS_EMPTY_2(_TPPWHEN_LABEL_STMTS_EMPTY_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5WHEN_LABEL_STMTS_EMPTY_2(_currn ,_AS0_const81)
_TPPWHEN_LABEL_STMTS_EMPTY_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const81)=NullDefTableKeyList();
/*SPC(781)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6WHEN_LABEL_STMTS_EMPTY_2(_TPPWHEN_LABEL_STMTS_EMPTY_2 _currn,PTGNode* _AS0out,int* _AS0_const85,PTGNode* _AS0_const84,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81,int* _AS0_const77)
#else
void _VS6WHEN_LABEL_STMTS_EMPTY_2(_currn ,_AS0out,_AS0_const85,_AS0_const84,_AS0_const83,_AS0_const82,_AS0_const81,_AS0_const77)
_TPPWHEN_LABEL_STMTS_EMPTY_2 _currn;
int* _AS0_const77;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const84;
int* _AS0_const85;
PTGNode* _AS0out;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const77)=ZERO();
/*SPC(781)*/
(* _AS0_const82)=PTGNull();
/*SPC(781)*/
(* _AS0_const83)=ONE();
/*SPC(781)*/
(* _AS0_const84)=PTGNull();
/*SPC(781)*/
(* _AS0_const85)=ZERO();
/*SPC(781)*/
(* _AS0out)=PTGNULL;
/*SPC(782)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_LABEL_STMTS_2(_TPPWHEN_LABEL_STMTS_2 _currn)
#else
void _VS1WHEN_LABEL_STMTS_2(_currn )
_TPPWHEN_LABEL_STMTS_2 _currn;

#endif
{
int _AS1_const77;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc2->_ATSemEnv=NewScope((* _IG_incl2));
/*SPC(12953)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5WHEN_LABEL_STMTS_2(_TPPWHEN_LABEL_STMTS_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5WHEN_LABEL_STMTS_2(_currn ,_AS0_const81)
_TPPWHEN_LABEL_STMTS_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
int _AS1_const77;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AVWhen_label_stmt_2__const81);
/*SPC(777)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6WHEN_LABEL_STMTS_2(_TPPWHEN_LABEL_STMTS_2 _currn,PTGNode* _AS0out,int* _AS0_const85,PTGNode* _AS0_const84,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81,int* _AS0_const77)
#else
void _VS6WHEN_LABEL_STMTS_2(_currn ,_AS0out,_AS0_const85,_AS0_const84,_AS0_const83,_AS0_const82,_AS0_const81,_AS0_const77)
_TPPWHEN_LABEL_STMTS_2 _currn;
int* _AS0_const77;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const84;
int* _AS0_const85;
PTGNode* _AS0out;

#endif
{
int _AS1_const77;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*,int*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1_const85)),(&( _AS1_const84)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)),(&( _AS1_const77)));
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const77)=ADD(_AS1_const77, IDENTICAL(_AVWhen_label_stmt_2_IsElse));
/*SPC(777)*/
(* _AS0_const82)=PTGCommaSeq(_AS1_const82, _AVWhen_label_stmt_2__const82);
/*SPC(777)*/
(* _AS0_const83)=MAX(_AS1_const83, _AVWhen_label_stmt_2__const83);
/*SPC(777)*/
(* _AS0_const84)=PTGCommaSeq(_AS1_const84, _AVWhen_label_stmt_2__const84);
/*SPC(777)*/
(* _AS0_const85)=ADD(_AS1_const85, _AVWhen_label_stmt_2__const85);
/*SPC(777)*/
(* _AS0out)=PTGNewLineSeq(_AS1out, _AVWhen_label_stmt_2_out);
/*SPC(778)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CASE_STATEMENT_2(_TPPCASE_STATEMENT_2 _currn)
#else
void _VS1CASE_STATEMENT_2(_currn )
_TPPCASE_STATEMENT_2 _currn;

#endif
{
int _AS2_const77;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
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
void _VS2CASE_STATEMENT_2(_TPPCASE_STATEMENT_2 _currn)
#else
void _VS2CASE_STATEMENT_2(_currn )
_TPPCASE_STATEMENT_2 _currn;

#endif
{
int _AS2_const77;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CASE_STATEMENT_2(_TPPCASE_STATEMENT_2 _currn)
#else
void _VS3CASE_STATEMENT_2(_currn )
_TPPCASE_STATEMENT_2 _currn;

#endif
{
int _AS2_const77;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
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
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CASE_STATEMENT_2(_TPPCASE_STATEMENT_2 _currn)
#else
void _VS4CASE_STATEMENT_2(_currn )
_TPPCASE_STATEMENT_2 _currn;

#endif
{
int _AS2_const77;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5CASE_STATEMENT_2(_TPPCASE_STATEMENT_2 _currn)
#else
void _VS5CASE_STATEMENT_2(_currn )
_TPPCASE_STATEMENT_2 _currn;

#endif
{
int _AS2_const77;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
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
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVCase_statement_2__const81=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(6226)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6CASE_STATEMENT_2(_TPPCASE_STATEMENT_2 _currn)
#else
void _VS6CASE_STATEMENT_2(_currn )
_TPPCASE_STATEMENT_2 _currn;

#endif
{
int* _IL_incl46;
STPtr* _IL_incl42;
int _AS2_const77;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl46=_IG_incl46;_IG_incl46= &(_currn->_ATEndLabel);
_IL_incl42=_IG_incl42;_IG_incl42= &(_currn->_ATType);
_AS1StackBefore=0;
/*SPC(1901)*/
_AS1UsedAsQualifier=0;
/*SPC(1779)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,int*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1UsedAsQualifier)),(&( _AS1StackBefore)),(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
_currn->_ATType=_currn->_desc1->_ATType;
/*SPC(6227)*/
_currn->_ATEndLabel=NewUniqueLabel();
/*SPC(760)*/
_AVWhen_label_stmt_2LabelRanges_post=NULLValueRangePtrList;
/*SPC(6258)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*,int*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2out)),(&( _AS2_const85)),(&( _AS2_const84)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)),(&( _AS2_const77)));
CheckOverlappingLabels(_AVWhen_label_stmt_2LabelRanges_post, (&( _currn->_AT_pos)));
/*SPC(6260)*/
_AVCase_statement_2__const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _AS2_const82);
/*SPC(6226)*/
_AVCase_statement_2__const83=MAX(MAX(_currn->_desc1->_AT_const83, IDENTICAL(_currn->_desc1->_ATStackHeight)), _AS2_const83);
/*SPC(6226)*/
_AVCase_statement_2__const84=_AS2_const84;
/*SPC(6226)*/
_AVCase_statement_2__const85=_AS2_const85;
/*SPC(6226)*/
_AVCase_statement_2_HaveElse=_AS2_const77;
/*SPC(756)*/
_AVCase_statement_2_out=PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(_AS1out, 
((IsMonoValueType(_currn->_ATType)
) ? (PTGcilValueToAddress(GetCLRType(_currn->_ATType))
) : (PTGNULL))
), _AS2out), 
((_AVCase_statement_2_HaveElse
) ? (PTGNULL
) : (PTGcilPop()))
), PTGcilLabel(StringTable(_currn->_ATEndLabel)));
/*SPC(762)*/
_IG_incl46=_IL_incl46;
_IG_incl42=_IL_incl42;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1COND_STATEMENT_ELSE_2(_TPPCOND_STATEMENT_ELSE_2 _currn)
#else
void _VS1COND_STATEMENT_ELSE_2(_currn )
_TPPCOND_STATEMENT_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_currn->_desc1->_ATSemEnv=_currn->_ATSemEnv;
/*SPC(12975)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2COND_STATEMENT_ELSE_2(_TPPCOND_STATEMENT_ELSE_2 _currn)
#else
void _VS2COND_STATEMENT_ELSE_2(_currn )
_TPPCOND_STATEMENT_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3COND_STATEMENT_ELSE_2(_TPPCOND_STATEMENT_ELSE_2 _currn)
#else
void _VS3COND_STATEMENT_ELSE_2(_currn )
_TPPCOND_STATEMENT_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4COND_STATEMENT_ELSE_2(_TPPCOND_STATEMENT_ELSE_2 _currn)
#else
void _VS4COND_STATEMENT_ELSE_2(_currn )
_TPPCOND_STATEMENT_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5COND_STATEMENT_ELSE_2(_TPPCOND_STATEMENT_ELSE_2 _currn)
#else
void _VS5COND_STATEMENT_ELSE_2(_currn )
_TPPCOND_STATEMENT_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AVConditional_statement_2__const81=_AS1_const81;
/*SPC(933)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6COND_STATEMENT_ELSE_2(_TPPCOND_STATEMENT_ELSE_2 _currn)
#else
void _VS6COND_STATEMENT_ELSE_2(_currn )
_TPPCOND_STATEMENT_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AVBlock_2_post_out=PTGNULL;
/*SPC(542)*/
_AVBlock_2_pre_out=PTGNULL;
/*SPC(541)*/
_AVBlock_2_inh_locals=PTGNULL;
/*SPC(540)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1locals)),(&( _AS1out)),(&( _AS1_const85)),(&( _AS1_const84)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_AVConditional_statement_2__const82=_AS1_const82;
/*SPC(933)*/
_AVConditional_statement_2__const83=_AS1_const83;
/*SPC(933)*/
_AVConditional_statement_2__const84=PTGCommaSeq(_AS1_const84, IDENTICAL(_AS1locals));
/*SPC(933)*/
_AVConditional_statement_2__const85=_AS1_const85;
/*SPC(933)*/
_AVMethod_body_2LabelNum_post=_currn->_desc1->_ATLabelNum_post;
/*SPC(0)*/
_AVBegin_block_2ResumeLabels_post=_currn->_desc1->_ATResumeLabels_post;
/*SPC(0)*/
_AVConditional_statement_2_MergeLabel=0;
/*SPC(935)*/
_AVConditional_statement_2_BranchLabel=0;
/*SPC(934)*/
_AVConditional_statement_2_out=_AS1out;
/*SPC(936)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1COND_STATEMENT_2(_TPPCOND_STATEMENT_2 _currn)
#else
void _VS1COND_STATEMENT_2(_currn )
_TPPCOND_STATEMENT_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc2->_ATSemEnv=_currn->_ATSemEnv;
/*SPC(12975)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_desc3->_ATSemEnv=NewScope((* _IG_incl2));
/*SPC(12953)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2COND_STATEMENT_2(_TPPCOND_STATEMENT_2 _currn)
#else
void _VS2COND_STATEMENT_2(_currn )
_TPPCOND_STATEMENT_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3COND_STATEMENT_2(_TPPCOND_STATEMENT_2 _currn)
#else
void _VS3COND_STATEMENT_2(_currn )
_TPPCOND_STATEMENT_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVExpression_2_is_array_aggregate=0;
/*SPC(11085)*/
_currn->_desc1->_ATTypeEst=NoType;
/*SPC(11084)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4COND_STATEMENT_2(_TPPCOND_STATEMENT_2 _currn)
#else
void _VS4COND_STATEMENT_2(_currn )
_TPPCOND_STATEMENT_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5COND_STATEMENT_2(_TPPCOND_STATEMENT_2 _currn)
#else
void _VS5COND_STATEMENT_2(_currn )
_TPPCOND_STATEMENT_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_AS1IsExplicitCoercion=0;
/*SPC(10797)*/
_currn->_desc1->_ATIsArg=0;
/*SPC(10994)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)));

if (NOT(IsConform(_currn->_desc1->_ATType, GetType(GetPreDefKey(MakeName("$BOOL"), (* _IG_incl23), (&( _currn->_AT_pos))), NoType)))) {
message(ERROR, CatStrStr(CatStrStr("conditional expression type ", NameOfType(_currn->_desc1->_ATType)), " is not conform to $BOOL"), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6299)*/
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVConditional_statement_2__const81=AppDefTableKeyList(AppDefTableKeyList(_AS1_const81, _AS2_const81), _AVConditional_statement_2__const81);
/*SPC(919)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6COND_STATEMENT_2(_TPPCOND_STATEMENT_2 _currn)
#else
void _VS6COND_STATEMENT_2(_currn )
_TPPCOND_STATEMENT_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_AS1StackBefore=0;
/*SPC(1901)*/
_AS1UsedAsQualifier=0;
/*SPC(1779)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,int*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1UsedAsQualifier)),(&( _AS1StackBefore)),(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVBlock_2_post_out=PTGNULL;
/*SPC(542)*/
_AVBlock_2_pre_out=PTGNULL;
/*SPC(541)*/
_AVBlock_2_inh_locals=PTGNULL;
/*SPC(540)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS7MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2locals)),(&( _AS2out)),(&( _AS2_const85)),(&( _AS2_const84)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)));
_AVMethod_body_2LabelNum_post=_currn->_desc2->_ATLabelNum_post;
/*SPC(0)*/
_AVBegin_block_2ResumeLabels_post=_currn->_desc2->_ATResumeLabels_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVConditional_statement_2__const82=PTGCommaSeq(PTGCommaSeq(_currn->_desc1->_AT_const82, _AS2_const82), _AVConditional_statement_2__const82);
/*SPC(919)*/
_AVConditional_statement_2__const83=MAX(MAX(MAX(_currn->_desc1->_AT_const83, IDENTICAL(_currn->_desc1->_ATStackHeight)), _AS2_const83), _AVConditional_statement_2__const83);
/*SPC(919)*/
_AVConditional_statement_2__const84=PTGCommaSeq(PTGCommaSeq(_AS2_const84, IDENTICAL(_AS2locals)), _AVConditional_statement_2__const84);
/*SPC(919)*/
_AVConditional_statement_2__const85=ADD(_AS2_const85, _AVConditional_statement_2__const85);
/*SPC(919)*/
_AVConditional_statement_2_MergeLabel=NewUniqueLabel();
/*SPC(921)*/
_AVConditional_statement_2_BranchLabel=NewUniqueLabel();
/*SPC(920)*/
_AVConditional_statement_2_out=PTGNewLineSeq(PTGNewLineSeq(_AS1out, PTGcilSatk2CLR(PTGIdent("valuetype 'BOOL'"), PTGIdent("bool"))), PTGcilFallTrue(StringTable(_AVConditional_statement_2_BranchLabel), _AS2out, StringTable(_AVConditional_statement_2_MergeLabel), _AVConditional_statement_2_out));
/*SPC(922)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_EXCEPTION_STMT_ELSE_2(_TPPWHEN_EXCEPTION_STMT_ELSE_2 _currn)
#else
void _VS1WHEN_EXCEPTION_STMT_ELSE_2(_currn )
_TPPWHEN_EXCEPTION_STMT_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_currn->_desc1->_ATSemEnv=_currn->_ATSemEnv;
/*SPC(12975)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVWhen_exception_stmt_2_SemKindSet=SingleIS(locVarK);
/*SPC(3747)*/
_currn->_ATSym=(* _IG_incl48);
/*SPC(4345)*/
_AVWhen_exception_stmt_2_Bind=
((EQ(_currn->_ATSym, 0)
) ? (NoBinding
) : (BindIdn(_currn->_ATSemEnv, _currn->_ATSym)))
;
/*SPC(4349)*/
_currn->_ATKey=KeyOf(_AVWhen_exception_stmt_2_Bind);
/*SPC(12797)*/
UnionSemKindSet(_currn->_ATKey, _AVWhen_exception_stmt_2_SemKindSet);
/*SPC(12105)*/
ResetType(_currn->_ATKey, GetType(GetPreDefKey(MakeName("$EXCEPTION"), (* _IG_incl23), (&( _currn->_AT_pos))), NoType));
/*SPC(10943)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_EXCEPTION_STMT_ELSE_2(_TPPWHEN_EXCEPTION_STMT_ELSE_2 _currn)
#else
void _VS2WHEN_EXCEPTION_STMT_ELSE_2(_currn )
_TPPWHEN_EXCEPTION_STMT_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_EXCEPTION_STMT_ELSE_2(_TPPWHEN_EXCEPTION_STMT_ELSE_2 _currn)
#else
void _VS3WHEN_EXCEPTION_STMT_ELSE_2(_currn )
_TPPWHEN_EXCEPTION_STMT_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
ResetSym(_currn->_ATKey, _currn->_ATSym);
/*SPC(4590)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4WHEN_EXCEPTION_STMT_ELSE_2(_TPPWHEN_EXCEPTION_STMT_ELSE_2 _currn)
#else
void _VS4WHEN_EXCEPTION_STMT_ELSE_2(_currn )
_TPPWHEN_EXCEPTION_STMT_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5WHEN_EXCEPTION_STMT_ELSE_2(_TPPWHEN_EXCEPTION_STMT_ELSE_2 _currn)
#else
void _VS5WHEN_EXCEPTION_STMT_ELSE_2(_currn )
_TPPWHEN_EXCEPTION_STMT_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AVWhen_exception_stmt_2__const81=_AS1_const81;
/*SPC(1101)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6WHEN_EXCEPTION_STMT_ELSE_2(_TPPWHEN_EXCEPTION_STMT_ELSE_2 _currn)
#else
void _VS6WHEN_EXCEPTION_STMT_ELSE_2(_currn )
_TPPWHEN_EXCEPTION_STMT_ELSE_2 _currn;

#endif
{
Environment* _IL_incl59;
int* _IL_incl22;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_IL_incl22=_IG_incl22;_IG_incl22= &(_currn->_ATis_exception);
_currn->_ATis_exception=1;
/*SPC(6314)*/
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AVBlock_2_post_out=PTGcilLeave(StringTable((* _IG_incl47)));
/*SPC(1102)*/
_AVBlock_2_pre_out=PTGNULL;
/*SPC(541)*/
_AVBlock_2_inh_locals=PTGNULL;
/*SPC(540)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1locals)),(&( _AS1out)),(&( _AS1_const85)),(&( _AS1_const84)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_AVMethod_body_2LabelNum_post=_currn->_desc1->_ATLabelNum_post;
/*SPC(0)*/
_AVBegin_block_2ResumeLabels_post=_currn->_desc1->_ATResumeLabels_post;
/*SPC(0)*/
_AVWhen_exception_stmt_2_UniqueSym=0;
/*SPC(1876)*/
_AVWhen_exception_stmt_2_out=PTGcilCatch(PTGcilIdent("$EXCEPTION"), PTGcilBlock(_AS1out));
/*SPC(1104)*/
_AVWhen_exception_stmt_2__const82=_AS1_const82;
/*SPC(1101)*/
_AVWhen_exception_stmt_2__const83=_AS1_const83;
/*SPC(1101)*/
_AVWhen_exception_stmt_2__const84=PTGCommaSeq(_AS1_const84, IDENTICAL(_AS1locals));
/*SPC(1101)*/
_AVWhen_exception_stmt_2__const85=_AS1_const85;
/*SPC(1101)*/
_IG_incl59=_IL_incl59;
_IG_incl22=_IL_incl22;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_EXCEPTION_STMT_2(_TPPWHEN_EXCEPTION_STMT_2 _currn)
#else
void _VS1WHEN_EXCEPTION_STMT_2(_currn )
_TPPWHEN_EXCEPTION_STMT_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc2->_ATSemEnv=_currn->_ATSemEnv;
/*SPC(12975)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVWhen_exception_stmt_2_SemKindSet=SingleIS(locVarK);
/*SPC(3747)*/
_currn->_ATSym=(* _IG_incl48);
/*SPC(4345)*/
_AVWhen_exception_stmt_2_Bind=
((EQ(_currn->_ATSym, 0)
) ? (NoBinding
) : (BindIdn(_currn->_ATSemEnv, _currn->_ATSym)))
;
/*SPC(4349)*/
_currn->_ATKey=KeyOf(_AVWhen_exception_stmt_2_Bind);
/*SPC(12797)*/
UnionSemKindSet(_currn->_ATKey, _AVWhen_exception_stmt_2_SemKindSet);
/*SPC(12105)*/
ResetType(_currn->_ATKey, _currn->_desc1->_ATType);
/*SPC(10938)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_EXCEPTION_STMT_2(_TPPWHEN_EXCEPTION_STMT_2 _currn)
#else
void _VS2WHEN_EXCEPTION_STMT_2(_currn )
_TPPWHEN_EXCEPTION_STMT_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_EXCEPTION_STMT_2(_TPPWHEN_EXCEPTION_STMT_2 _currn)
#else
void _VS3WHEN_EXCEPTION_STMT_2(_currn )
_TPPWHEN_EXCEPTION_STMT_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
ResetSym(_currn->_ATKey, _currn->_ATSym);
/*SPC(4590)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4WHEN_EXCEPTION_STMT_2(_TPPWHEN_EXCEPTION_STMT_2 _currn)
#else
void _VS4WHEN_EXCEPTION_STMT_2(_currn )
_TPPWHEN_EXCEPTION_STMT_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5WHEN_EXCEPTION_STMT_2(_TPPWHEN_EXCEPTION_STMT_2 _currn)
#else
void _VS5WHEN_EXCEPTION_STMT_2(_currn )
_TPPWHEN_EXCEPTION_STMT_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVWhen_exception_stmt_2__const81=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(1089)*/
ResetUniqueName(_currn->_ATKey, GenerateName(StringTable(_currn->_ATSym)));
/*SPC(1868)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6WHEN_EXCEPTION_STMT_2(_TPPWHEN_EXCEPTION_STMT_2 _currn)
#else
void _VS6WHEN_EXCEPTION_STMT_2(_currn )
_TPPWHEN_EXCEPTION_STMT_2 _currn;

#endif
{
Environment* _IL_incl59;
int* _IL_incl22;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;
PTGNode _AS2locals;
DefTableKeyList _AS1_const81;
int _AS1IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_IL_incl22=_IG_incl22;_IG_incl22= &(_currn->_ATis_exception);
_AS1IsMethodParameterType=0;
/*SPC(5941)*/
_AVType_specifier_2_IsTypeBound=0;
/*SPC(5788)*/
_AVType_specifier_2_IsConstructor=0;
/*SPC(2456)*/
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsMethodParameterType)),(&( _AS1_const81)));
_currn->_ATis_exception=1;
/*SPC(6314)*/
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVWhen_exception_stmt_2_UniqueSym=GetUniqueName(_currn->_ATKey, _currn->_ATSym);
/*SPC(1870)*/
_AVBlock_2_post_out=PTGcilLeave(StringTable((* _IG_incl47)));
/*SPC(1095)*/
_AVBlock_2_pre_out=PTGcilStoreLocal(PTGcilIdent(StringTable(_AVWhen_exception_stmt_2_UniqueSym)));
/*SPC(1093)*/
_AVBlock_2_inh_locals=PTGSpaceSeq(GetCLRType(_currn->_desc1->_ATType), PTGcilIdent(StringTable(_AVWhen_exception_stmt_2_UniqueSym)));
/*SPC(1090)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS7MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2locals)),(&( _AS2out)),(&( _AS2_const85)),(&( _AS2_const84)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)));
_AVWhen_exception_stmt_2__const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _AS2_const82);
/*SPC(1089)*/
_AVWhen_exception_stmt_2__const83=MAX(_currn->_desc1->_AT_const83, _AS2_const83);
/*SPC(1089)*/
_AVWhen_exception_stmt_2__const84=PTGCommaSeq(_AS2_const84, IDENTICAL(_AS2locals));
/*SPC(1089)*/
_AVWhen_exception_stmt_2__const85=_AS2_const85;
/*SPC(1089)*/
_AVMethod_body_2LabelNum_post=_currn->_desc2->_ATLabelNum_post;
/*SPC(0)*/
_AVBegin_block_2ResumeLabels_post=_currn->_desc2->_ATResumeLabels_post;
/*SPC(0)*/
_AVWhen_exception_stmt_2_out=PTGcilCatch(PTGcilIdent(NameOfType(_currn->_desc1->_ATType)), PTGcilBlock(_AS2out));
/*SPC(1097)*/
_IG_incl59=_IL_incl59;
_IG_incl22=_IL_incl22;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5WHEN_EXCEPTION_STMTS_EMPTY_2(_TPPWHEN_EXCEPTION_STMTS_EMPTY_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5WHEN_EXCEPTION_STMTS_EMPTY_2(_currn ,_AS0_const81)
_TPPWHEN_EXCEPTION_STMTS_EMPTY_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const81)=NullDefTableKeyList();
/*SPC(1085)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6WHEN_EXCEPTION_STMTS_EMPTY_2(_TPPWHEN_EXCEPTION_STMTS_EMPTY_2 _currn,PTGNode* _AS0out,int* _AS0_const85,PTGNode* _AS0_const84,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS6WHEN_EXCEPTION_STMTS_EMPTY_2(_currn ,_AS0out,_AS0_const85,_AS0_const84,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPWHEN_EXCEPTION_STMTS_EMPTY_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const84;
int* _AS0_const85;
PTGNode* _AS0out;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const82)=PTGNull();
/*SPC(1085)*/
(* _AS0_const83)=ONE();
/*SPC(1085)*/
(* _AS0_const84)=PTGNull();
/*SPC(1085)*/
(* _AS0_const85)=ZERO();
/*SPC(1085)*/
(* _AS0out)=PTGNULL;
/*SPC(1086)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_EXCEPTION_STMTS_2(_TPPWHEN_EXCEPTION_STMTS_2 _currn)
#else
void _VS1WHEN_EXCEPTION_STMTS_2(_currn )
_TPPWHEN_EXCEPTION_STMTS_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc2->_ATSemEnv=NewScope((* _IG_incl2));
/*SPC(12953)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5WHEN_EXCEPTION_STMTS_2(_TPPWHEN_EXCEPTION_STMTS_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5WHEN_EXCEPTION_STMTS_2(_currn ,_AS0_const81)
_TPPWHEN_EXCEPTION_STMTS_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, AppDefTableKeyList(_AVWhen_exception_stmt_2__const81, SingleDefTableKeyList(_currn->_desc2->_ATKey)));
/*SPC(1080)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6WHEN_EXCEPTION_STMTS_2(_TPPWHEN_EXCEPTION_STMTS_2 _currn,PTGNode* _AS0out,int* _AS0_const85,PTGNode* _AS0_const84,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS6WHEN_EXCEPTION_STMTS_2(_currn ,_AS0out,_AS0_const85,_AS0_const84,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPWHEN_EXCEPTION_STMTS_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const84;
int* _AS0_const85;
PTGNode* _AS0out;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1_const85)),(&( _AS1_const84)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const82)=PTGCommaSeq(_AS1_const82, _AVWhen_exception_stmt_2__const82);
/*SPC(1080)*/
(* _AS0_const83)=MAX(_AS1_const83, _AVWhen_exception_stmt_2__const83);
/*SPC(1080)*/
(* _AS0_const84)=PTGCommaSeq(_AS1_const84, _AVWhen_exception_stmt_2__const84);
/*SPC(1080)*/
(* _AS0_const85)=ADD(_AS1_const85, _AVWhen_exception_stmt_2__const85);
/*SPC(1080)*/
(* _AS0out)=PTGNewLineSeq(_AS1out, _AVWhen_exception_stmt_2_out);
/*SPC(1081)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXCEPTIONS_2(_TPPEXCEPTIONS_2 _currn)
#else
void _VS1EXCEPTIONS_2(_currn )
_TPPEXCEPTIONS_2 _currn;

#endif
{
STPtr* _IL_incl107;
int* _IL_incl48;
Environment* _IL_incl2;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl48=_IG_incl48;_IG_incl48= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_currn->_ATType=NoType;
/*SPC(10916)*/
_currn->_desc1->_ATSemKindSet=SingleIS(locVarK);
/*SPC(3742)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATSym=_currn->_desc1->_ATSym;
/*SPC(4337)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl107=_IL_incl107;
_IG_incl48=_IL_incl48;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXCEPTIONS_2(_TPPEXCEPTIONS_2 _currn)
#else
void _VS2EXCEPTIONS_2(_currn )
_TPPEXCEPTIONS_2 _currn;

#endif
{
STPtr* _IL_incl107;
int* _IL_incl48;
Environment* _IL_incl2;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl48=_IG_incl48;_IG_incl48= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl107=_IL_incl107;
_IG_incl48=_IL_incl48;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3EXCEPTIONS_2(_TPPEXCEPTIONS_2 _currn)
#else
void _VS3EXCEPTIONS_2(_currn )
_TPPEXCEPTIONS_2 _currn;

#endif
{
STPtr* _IL_incl107;
int* _IL_incl48;
Environment* _IL_incl2;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl48=_IG_incl48;_IG_incl48= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl107=_IL_incl107;
_IG_incl48=_IL_incl48;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4EXCEPTIONS_2(_TPPEXCEPTIONS_2 _currn)
#else
void _VS4EXCEPTIONS_2(_currn )
_TPPEXCEPTIONS_2 _currn;

#endif
{
STPtr* _IL_incl107;
int* _IL_incl48;
Environment* _IL_incl2;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl48=_IG_incl48;_IG_incl48= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl107=_IL_incl107;
_IG_incl48=_IL_incl48;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5EXCEPTIONS_2(_TPPEXCEPTIONS_2 _currn)
#else
void _VS5EXCEPTIONS_2(_currn )
_TPPEXCEPTIONS_2 _currn;

#endif
{
STPtr* _IL_incl107;
int* _IL_incl48;
Environment* _IL_incl2;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl48=_IG_incl48;_IG_incl48= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_AVIdent_def_2_IsExceptionOrTypecase=1;
/*SPC(1844)*/
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AVExceptions_2__const81=AppDefTableKeyList(SingleDefTableKeyList(_currn->_desc1->_ATKey), _AS2_const81);
/*SPC(1076)*/
_IG_incl107=_IL_incl107;
_IG_incl48=_IL_incl48;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6EXCEPTIONS_2(_TPPEXCEPTIONS_2 _currn)
#else
void _VS6EXCEPTIONS_2(_currn )
_TPPEXCEPTIONS_2 _currn;

#endif
{
STPtr* _IL_incl107;
int* _IL_incl48;
Environment* _IL_incl2;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const84;
int _AS2_const85;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl48=_IG_incl48;_IG_incl48= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2out)),(&( _AS2_const85)),(&( _AS2_const84)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)));
_AVExceptions_2__const82=_AS2_const82;
/*SPC(1076)*/
_AVExceptions_2__const83=_AS2_const83;
/*SPC(1076)*/
_AVExceptions_2__const84=_AS2_const84;
/*SPC(1076)*/
_AVExceptions_2__const85=_AS2_const85;
/*SPC(1076)*/
_AVExceptions_2_out=_AS2out;
/*SPC(1077)*/
_AVExceptions_2_is_empty=0;
/*SPC(1036)*/
_IG_incl107=_IL_incl107;
_IG_incl48=_IL_incl48;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXCEPTIONS_EMPTY_2(_TPPEXCEPTIONS_EMPTY_2 _currn)
#else
void _VS1EXCEPTIONS_EMPTY_2(_currn )
_TPPEXCEPTIONS_EMPTY_2 _currn;

#endif
{
STPtr* _IL_incl107;
int* _IL_incl48;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl48=_IG_incl48;_IG_incl48= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_currn->_ATType=NoType;
/*SPC(10920)*/
_currn->_ATSym=0;
/*SPC(4341)*/
_IG_incl107=_IL_incl107;
_IG_incl48=_IL_incl48;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXCEPTIONS_EMPTY_2(_TPPEXCEPTIONS_EMPTY_2 _currn)
#else
void _VS2EXCEPTIONS_EMPTY_2(_currn )
_TPPEXCEPTIONS_EMPTY_2 _currn;

#endif
{
STPtr* _IL_incl107;
int* _IL_incl48;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl48=_IG_incl48;_IG_incl48= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_IG_incl107=_IL_incl107;
_IG_incl48=_IL_incl48;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3EXCEPTIONS_EMPTY_2(_TPPEXCEPTIONS_EMPTY_2 _currn)
#else
void _VS3EXCEPTIONS_EMPTY_2(_currn )
_TPPEXCEPTIONS_EMPTY_2 _currn;

#endif
{
STPtr* _IL_incl107;
int* _IL_incl48;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl48=_IG_incl48;_IG_incl48= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_IG_incl107=_IL_incl107;
_IG_incl48=_IL_incl48;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4EXCEPTIONS_EMPTY_2(_TPPEXCEPTIONS_EMPTY_2 _currn)
#else
void _VS4EXCEPTIONS_EMPTY_2(_currn )
_TPPEXCEPTIONS_EMPTY_2 _currn;

#endif
{
STPtr* _IL_incl107;
int* _IL_incl48;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl48=_IG_incl48;_IG_incl48= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_IG_incl107=_IL_incl107;
_IG_incl48=_IL_incl48;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5EXCEPTIONS_EMPTY_2(_TPPEXCEPTIONS_EMPTY_2 _currn)
#else
void _VS5EXCEPTIONS_EMPTY_2(_currn )
_TPPEXCEPTIONS_EMPTY_2 _currn;

#endif
{
STPtr* _IL_incl107;
int* _IL_incl48;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl48=_IG_incl48;_IG_incl48= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_AVExceptions_2__const81=NullDefTableKeyList();
/*SPC(1039)*/
_IG_incl107=_IL_incl107;
_IG_incl48=_IL_incl48;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6EXCEPTIONS_EMPTY_2(_TPPEXCEPTIONS_EMPTY_2 _currn)
#else
void _VS6EXCEPTIONS_EMPTY_2(_currn )
_TPPEXCEPTIONS_EMPTY_2 _currn;

#endif
{
STPtr* _IL_incl107;
int* _IL_incl48;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_IL_incl48=_IG_incl48;_IG_incl48= &(_currn->_ATSym);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_AVExceptions_2_out=PTGNULL;
/*SPC(1073)*/
_AVExceptions_2_is_empty=1;
/*SPC(1040)*/
_AVExceptions_2__const82=PTGNull();
/*SPC(1039)*/
_AVExceptions_2__const83=ONE();
/*SPC(1039)*/
_AVExceptions_2__const84=PTGNull();
/*SPC(1039)*/
_AVExceptions_2__const85=ZERO();
/*SPC(1039)*/
_IG_incl107=_IL_incl107;
_IG_incl48=_IL_incl48;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BEGIN_BLOCK_2(_TPPBEGIN_BLOCK_2 _currn)
#else
void _VS1BEGIN_BLOCK_2(_currn )
_TPPBEGIN_BLOCK_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_currn->_desc1->_ATSemEnv=_currn->_ATSemEnv;
/*SPC(12975)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc2->_ATSemEnv=NewScope((* _IG_incl2));
/*SPC(12774)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BEGIN_BLOCK_2(_TPPBEGIN_BLOCK_2 _currn)
#else
void _VS2BEGIN_BLOCK_2(_currn )
_TPPBEGIN_BLOCK_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BEGIN_BLOCK_2(_TPPBEGIN_BLOCK_2 _currn)
#else
void _VS3BEGIN_BLOCK_2(_currn )
_TPPBEGIN_BLOCK_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4BEGIN_BLOCK_2(_TPPBEGIN_BLOCK_2 _currn)
#else
void _VS4BEGIN_BLOCK_2(_currn )
_TPPBEGIN_BLOCK_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5BEGIN_BLOCK_2(_TPPBEGIN_BLOCK_2 _currn)
#else
void _VS5BEGIN_BLOCK_2(_currn )
_TPPBEGIN_BLOCK_2 _currn;

#endif
{
Environment* _IL_incl59;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVBegin_block_2__const81=AppDefTableKeyList(_AS1_const81, _AVExceptions_2__const81);
/*SPC(1047)*/
_IG_incl59=_IL_incl59;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6BEGIN_BLOCK_2(_TPPBEGIN_BLOCK_2 _currn)
#else
void _VS6BEGIN_BLOCK_2(_currn )
_TPPBEGIN_BLOCK_2 _currn;

#endif
{
Environment* _IL_incl59;
int* _IL_incl47;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const84;
int _AS1_const85;
PTGNode _AS1out;
PTGNode _AS1locals;

_VisitVarDecl()
_VisitEntry();
_IL_incl59=_IG_incl59;_IG_incl59= &(_currn->_ATSemEnv);
_IL_incl47=_IG_incl47;_IG_incl47= &(_currn->_ATLeaveLabel);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_currn->_ATLeaveLabel=NewUniqueLabel();
/*SPC(1048)*/
_AVMethod_body_2LabelNum_post=_currn->_desc1->_ATLabelNum_post;
/*SPC(0)*/
_AVBegin_block_2ResumeLabels_post=_currn->_desc1->_ATResumeLabels_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVBlock_2_post_out=
((_AVExceptions_2_is_empty
) ? (PTGNULL
) : (PTGcilLeave(StringTable(_currn->_ATLeaveLabel))))
;
/*SPC(1052)*/
_AVBlock_2_pre_out=PTGNULL;
/*SPC(541)*/
_AVBlock_2_inh_locals=PTGNULL;
/*SPC(540)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1locals)),(&( _AS1out)),(&( _AS1_const85)),(&( _AS1_const84)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_AVBegin_block_2__const82=PTGCommaSeq(_AS1_const82, _AVExceptions_2__const82);
/*SPC(1047)*/
_AVBegin_block_2__const83=MAX(_AS1_const83, _AVExceptions_2__const83);
/*SPC(1047)*/
_AVBegin_block_2__const84=PTGCommaSeq(PTGCommaSeq(_AS1_const84, IDENTICAL(_AS1locals)), _AVExceptions_2__const84);
/*SPC(1047)*/
_AVBegin_block_2__const85=ADD(_AS1_const85, _AVExceptions_2__const85);
/*SPC(1047)*/
_AVBegin_block_2_ForeignLabel=NewUniqueLabel();
/*SPC(1050)*/
_AVBegin_block_2_EndLabel=NewUniqueLabel();
/*SPC(1049)*/
_AVBegin_block_2_out=
((_AVExceptions_2_is_empty
) ? (_AS1out
) : (PTGNewLineSeq(PTGNewLineSeq(PTGcilTry(PTGcilBlock(PTGNewLineSeq(PTGcilTry(PTGcilBlock(_AS1out)), PTGcilMapExceptions(MapFile(PTRSELECT((&( _currn->_AT_pos)), line)), MapLine(PTRSELECT((&( _currn->_AT_pos)), line)), StringTable(_currn->_ATLeaveLabel), StringTable(_AVBegin_block_2_EndLabel), StringTable(_AVBegin_block_2_ForeignLabel))))), _AVExceptions_2_out), PTGcilLabel(StringTable(_currn->_ATLeaveLabel)))))
;
/*SPC(1056)*/
_IG_incl59=_IL_incl59;
_IG_incl47=_IL_incl47;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ASSIGNMENT_2(_TPPASSIGNMENT_2 _currn)
#else
void _VS1ASSIGNMENT_2(_currn )
_TPPASSIGNMENT_2 _currn;

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
void _VS2ASSIGNMENT_2(_TPPASSIGNMENT_2 _currn)
#else
void _VS2ASSIGNMENT_2(_currn )
_TPPASSIGNMENT_2 _currn;

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
_AVName_2_AttributeIndex=1;
/*SPC(5866)*/
_AVName_2_SemScopeKey=NoKey;
/*SPC(12921)*/
_AVName_2_SemScope=GetSemScope(_AVName_2_SemScopeKey, NoEnv);
/*SPC(12922)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsUnnamed)));

if (InIS(constantK, GetSemKindSet(_currn->_desc1->_ATKey, NULLIS))) {
message(ERROR, "assignment to constant variable not allowed", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6107)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVExpression_2_is_array_aggregate=0;
/*SPC(11085)*/
_currn->_desc2->_ATTypeEst=GetType(_currn->_desc1->_ATKey, NoType);
/*SPC(11111)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ASSIGNMENT_2(_TPPASSIGNMENT_2 _currn)
#else
void _VS3ASSIGNMENT_2(_currn )
_TPPASSIGNMENT_2 _currn;

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
_AVAssignment_2__const81=_AS2_const81;
/*SPC(338)*/
_AVBuiltin_option_2AttrAccLoc_post=
((InIS(attributeK, GetSemKindSet(_currn->_desc1->_ATKey, NULLIS))
) ? (AddToSetDefTableKeyList(_currn->_desc1->_ATKey, _AVBuiltin_option_2AttrAccLoc_post, CmpDefTableKey)
) : (_AVBuiltin_option_2AttrAccLoc_post))
;
/*SPC(6797)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ASSIGNMENT_2(_TPPASSIGNMENT_2 _currn)
#else
void _VS4ASSIGNMENT_2(_currn )
_TPPASSIGNMENT_2 _currn;

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
_AVName_2_IsAggregate=0;
/*SPC(944)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1des_out)),(&( _AS1IsUnnamed)));
_AS2StackBefore=1;
/*SPC(1925)*/
_AS2UsedAsQualifier=0;
/*SPC(1779)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,int*,DefTableKeyList*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2out)),(&( _AS2UsedAsQualifier)),(&( _AS2StackBefore)),(&( _AS2IsExplicitCoercion)),(&( _AS2_const81)));
_AVAssignment_2__const82=_currn->_desc2->_AT_const82;
/*SPC(338)*/
_AVAssignment_2__const83=MAX(_currn->_desc2->_AT_const83, IDENTICAL(_currn->_desc2->_ATStackHeight));
/*SPC(338)*/
_AVAssignment_2_IsResAssign=EQ(_currn->_desc1->_ATKey, (* _IG_incl52));
/*SPC(6630)*/
_AVAssignment_2_CoercionType=IsCoercible(_currn->_desc2->_ATType, GetType(_currn->_desc1->_ATKey, NoType), (&( _currn->_AT_pos)), (* _IG_incl23), 1);
/*SPC(6093)*/
_AVAssignment_2_out=PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(_AS1des_out, _AS2out), GetConvCode(_currn->_desc2->_ATType, GetType(_currn->_desc1->_ATKey, NoType), _AVAssignment_2_CoercionType, (&( _currn->_AT_pos)), (* _IG_incl23))), 
((AND(IsMonoValueType(_currn->_desc2->_ATType), IsBuiltinArray(_currn->_desc2->_ATType))
) ? (PTGcilArrayCopy(GetCLRType(_currn->_desc2->_ATType))
) : (PTGNULL))
), PTGcilStoreObject(GetCLRType(GetType(_currn->_desc1->_ATKey, NoType))));
/*SPC(339)*/

if (EQ(_AVAssignment_2_CoercionType, NOT_COERCIBLE)) {
message(ERROR, CatStrStr(CatStrStr(CatStrStr("type ", NameOfType(_currn->_desc2->_ATType)), " not automatically coercible to type "), NameOfType(GetType(_currn->_desc1->_ATKey, NoType))), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6103)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_ASSERT_2(_TPPSTATEMENTS_ASSERT_2 _currn)
#else
void _VS1STATEMENTS_ASSERT_2(_currn )
_TPPSTATEMENTS_ASSERT_2 _currn;

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
void _VS2STATEMENTS_ASSERT_2(_TPPSTATEMENTS_ASSERT_2 _currn)
#else
void _VS2STATEMENTS_ASSERT_2(_currn )
_TPPSTATEMENTS_ASSERT_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_ASSERT_2(_TPPSTATEMENTS_ASSERT_2 _currn)
#else
void _VS3STATEMENTS_ASSERT_2(_currn )
_TPPSTATEMENTS_ASSERT_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4STATEMENTS_ASSERT_2(_TPPSTATEMENTS_ASSERT_2 _currn)
#else
void _VS4STATEMENTS_ASSERT_2(_currn )
_TPPSTATEMENTS_ASSERT_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5STATEMENTS_ASSERT_2(_TPPSTATEMENTS_ASSERT_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5STATEMENTS_ASSERT_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_ASSERT_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AVAssertion_statement_2__const81);
/*SPC(2078)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6STATEMENTS_ASSERT_2(_TPPSTATEMENTS_ASSERT_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6STATEMENTS_ASSERT_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_ASSERT_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_AT_const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _AVAssertion_statement_2__const82);
/*SPC(2078)*/
_currn->_AT_const83=MAX(_currn->_desc1->_AT_const83, _AVAssertion_statement_2__const83);
/*SPC(2078)*/
_currn->_AT_const84=_currn->_desc1->_AT_const84;
/*SPC(2078)*/
_currn->_AT_const85=_currn->_desc1->_AT_const85;
/*SPC(2078)*/
_currn->_ATout=PTGNULL;
/*SPC(2079)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_RAISE_2(_TPPSTATEMENTS_RAISE_2 _currn)
#else
void _VS1STATEMENTS_RAISE_2(_currn )
_TPPSTATEMENTS_RAISE_2 _currn;

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
void _VS2STATEMENTS_RAISE_2(_TPPSTATEMENTS_RAISE_2 _currn)
#else
void _VS2STATEMENTS_RAISE_2(_currn )
_TPPSTATEMENTS_RAISE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_RAISE_2(_TPPSTATEMENTS_RAISE_2 _currn)
#else
void _VS3STATEMENTS_RAISE_2(_currn )
_TPPSTATEMENTS_RAISE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4STATEMENTS_RAISE_2(_TPPSTATEMENTS_RAISE_2 _currn)
#else
void _VS4STATEMENTS_RAISE_2(_currn )
_TPPSTATEMENTS_RAISE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5STATEMENTS_RAISE_2(_TPPSTATEMENTS_RAISE_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5STATEMENTS_RAISE_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_RAISE_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AVRaise_statement_2__const81);
/*SPC(2074)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6STATEMENTS_RAISE_2(_TPPSTATEMENTS_RAISE_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6STATEMENTS_RAISE_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_RAISE_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_AT_const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _AVRaise_statement_2__const82);
/*SPC(2074)*/
_currn->_AT_const83=MAX(_currn->_desc1->_AT_const83, _AVRaise_statement_2__const83);
/*SPC(2074)*/
_currn->_AT_const84=_currn->_desc1->_AT_const84;
/*SPC(2074)*/
_currn->_AT_const85=_currn->_desc1->_AT_const85;
/*SPC(2074)*/
_currn->_ATout=PTGNewLineSeq(_currn->_desc1->_ATout, _AVRaise_statement_2_out);
/*SPC(2075)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_RETURN_2(_TPPSTATEMENTS_RETURN_2 _currn)
#else
void _VS1STATEMENTS_RETURN_2(_currn )
_TPPSTATEMENTS_RETURN_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_RETURN_2(_TPPSTATEMENTS_RETURN_2 _currn)
#else
void _VS2STATEMENTS_RETURN_2(_currn )
_TPPSTATEMENTS_RETURN_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_RETURN_2(_TPPSTATEMENTS_RETURN_2 _currn)
#else
void _VS3STATEMENTS_RETURN_2(_currn )
_TPPSTATEMENTS_RETURN_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4STATEMENTS_RETURN_2(_TPPSTATEMENTS_RETURN_2 _currn)
#else
void _VS4STATEMENTS_RETURN_2(_currn )
_TPPSTATEMENTS_RETURN_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5STATEMENTS_RETURN_2(_TPPSTATEMENTS_RETURN_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5STATEMENTS_RETURN_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_RETURN_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(* _AS0_const81)=_AS1_const81;
/*SPC(2070)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6STATEMENTS_RETURN_2(_TPPSTATEMENTS_RETURN_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6STATEMENTS_RETURN_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_RETURN_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_AT_const82=_currn->_desc1->_AT_const82;
/*SPC(2070)*/
_currn->_AT_const83=_currn->_desc1->_AT_const83;
/*SPC(2070)*/
_currn->_AT_const84=_currn->_desc1->_AT_const84;
/*SPC(2070)*/
_currn->_AT_const85=_currn->_desc1->_AT_const85;
/*SPC(2070)*/
_currn->_ATout=PTGNewLineSeq(_currn->_desc1->_ATout, _AVReturn_statement_2_out);
/*SPC(2071)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_RESUME_2(_TPPSTATEMENTS_RESUME_2 _currn)
#else
void _VS1STATEMENTS_RESUME_2(_currn )
_TPPSTATEMENTS_RESUME_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_RESUME_2(_TPPSTATEMENTS_RESUME_2 _currn)
#else
void _VS2STATEMENTS_RESUME_2(_currn )
_TPPSTATEMENTS_RESUME_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_RESUME_2(_TPPSTATEMENTS_RESUME_2 _currn)
#else
void _VS3STATEMENTS_RESUME_2(_currn )
_TPPSTATEMENTS_RESUME_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4STATEMENTS_RESUME_2(_TPPSTATEMENTS_RESUME_2 _currn)
#else
void _VS4STATEMENTS_RESUME_2(_currn )
_TPPSTATEMENTS_RESUME_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5STATEMENTS_RESUME_2(_TPPSTATEMENTS_RESUME_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5STATEMENTS_RESUME_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_RESUME_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(* _AS0_const81)=_AS1_const81;
/*SPC(2066)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6STATEMENTS_RESUME_2(_TPPSTATEMENTS_RESUME_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6STATEMENTS_RESUME_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_RESUME_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AVResume_statement_2LabelNum_pre=_AVMethod_body_2LabelNum_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_AT_const82=_currn->_desc1->_AT_const82;
/*SPC(2066)*/
_currn->_AT_const83=_currn->_desc1->_AT_const83;
/*SPC(2066)*/
_currn->_AT_const84=_currn->_desc1->_AT_const84;
/*SPC(2066)*/
_currn->_AT_const85=_currn->_desc1->_AT_const85;
/*SPC(2066)*/
_currn->_ATout=PTGNewLineSeq(_currn->_desc1->_ATout, _AVResume_statement_2_out);
/*SPC(2067)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_EXP_2(_TPPSTATEMENTS_EXP_2 _currn)
#else
void _VS1STATEMENTS_EXP_2(_currn )
_TPPSTATEMENTS_EXP_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_EXP_2(_TPPSTATEMENTS_EXP_2 _currn)
#else
void _VS2STATEMENTS_EXP_2(_currn )
_TPPSTATEMENTS_EXP_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_EXP_2(_TPPSTATEMENTS_EXP_2 _currn)
#else
void _VS3STATEMENTS_EXP_2(_currn )
_TPPSTATEMENTS_EXP_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVExpression_2_is_array_aggregate=0;
/*SPC(11085)*/
_currn->_desc2->_ATTypeEst=NoType;
/*SPC(11084)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4STATEMENTS_EXP_2(_TPPSTATEMENTS_EXP_2 _currn)
#else
void _VS4STATEMENTS_EXP_2(_currn )
_TPPSTATEMENTS_EXP_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5STATEMENTS_EXP_2(_TPPSTATEMENTS_EXP_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5STATEMENTS_EXP_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_EXP_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AS2IsExplicitCoercion=0;
/*SPC(10797)*/
_currn->_desc2->_ATIsArg=0;
/*SPC(10994)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsExplicitCoercion)));
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsExplicitCoercion)),(&( _AS2_const81)));
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(2029)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6STATEMENTS_EXP_2(_TPPSTATEMENTS_EXP_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6STATEMENTS_EXP_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_EXP_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsExplicitCoercion;
int _AS2StackBefore;
int _AS2UsedAsQualifier;
PTGNode _AS2out;
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
_AS2StackBefore=0;
/*SPC(1901)*/
_AS2UsedAsQualifier=0;
/*SPC(1779)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,int*,DefTableKeyList*)) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2out)),(&( _AS2UsedAsQualifier)),(&( _AS2StackBefore)),(&( _AS2IsExplicitCoercion)),(&( _AS2_const81)));
_currn->_AT_const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _currn->_desc2->_AT_const82);
/*SPC(2029)*/
_currn->_AT_const83=MAX(_currn->_desc1->_AT_const83, MAX(_currn->_desc2->_AT_const83, IDENTICAL(_currn->_desc2->_ATStackHeight)));
/*SPC(2029)*/
_currn->_AT_const84=_currn->_desc1->_AT_const84;
/*SPC(2029)*/
_currn->_AT_const85=_currn->_desc1->_AT_const85;
/*SPC(2029)*/
_currn->_ATout=PTGNewLineSeq(PTGNewLineSeq(_currn->_desc1->_ATout, _AS2out), 
((NOT(EQ(_currn->_desc2->_ATStackHeight, 0))
) ? (PTGcilPop()
) : (PTGNULL))
);
/*SPC(2030)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_BREAK_2(_TPPSTATEMENTS_BREAK_2 _currn)
#else
void _VS1STATEMENTS_BREAK_2(_currn )
_TPPSTATEMENTS_BREAK_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_BREAK_2(_TPPSTATEMENTS_BREAK_2 _currn)
#else
void _VS2STATEMENTS_BREAK_2(_currn )
_TPPSTATEMENTS_BREAK_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_BREAK_2(_TPPSTATEMENTS_BREAK_2 _currn)
#else
void _VS3STATEMENTS_BREAK_2(_currn )
_TPPSTATEMENTS_BREAK_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4STATEMENTS_BREAK_2(_TPPSTATEMENTS_BREAK_2 _currn)
#else
void _VS4STATEMENTS_BREAK_2(_currn )
_TPPSTATEMENTS_BREAK_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5STATEMENTS_BREAK_2(_TPPSTATEMENTS_BREAK_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5STATEMENTS_BREAK_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_BREAK_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(* _AS0_const81)=_AS1_const81;
/*SPC(2062)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6STATEMENTS_BREAK_2(_TPPSTATEMENTS_BREAK_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6STATEMENTS_BREAK_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_BREAK_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_AT_const82=_currn->_desc1->_AT_const82;
/*SPC(2062)*/
_currn->_AT_const83=_currn->_desc1->_AT_const83;
/*SPC(2062)*/
_currn->_AT_const84=_currn->_desc1->_AT_const84;
/*SPC(2062)*/
_currn->_AT_const85=_currn->_desc1->_AT_const85;
/*SPC(2062)*/
_currn->_ATout=PTGNewLineSeq(_currn->_desc1->_ATout, _AVBreak_statement_2_out);
/*SPC(2063)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_LOOP_2(_TPPSTATEMENTS_LOOP_2 _currn)
#else
void _VS1STATEMENTS_LOOP_2(_currn )
_TPPSTATEMENTS_LOOP_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc2->_ATSemEnv=NewScope((* _IG_incl2));
/*SPC(12953)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_LOOP_2(_TPPSTATEMENTS_LOOP_2 _currn)
#else
void _VS2STATEMENTS_LOOP_2(_currn )
_TPPSTATEMENTS_LOOP_2 _currn;

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
void _VS3STATEMENTS_LOOP_2(_TPPSTATEMENTS_LOOP_2 _currn)
#else
void _VS3STATEMENTS_LOOP_2(_currn )
_TPPSTATEMENTS_LOOP_2 _currn;

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
void _VS4STATEMENTS_LOOP_2(_TPPSTATEMENTS_LOOP_2 _currn)
#else
void _VS4STATEMENTS_LOOP_2(_currn )
_TPPSTATEMENTS_LOOP_2 _currn;

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
void _VS5STATEMENTS_LOOP_2(_TPPSTATEMENTS_LOOP_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5STATEMENTS_LOOP_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_LOOP_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AVLoop_2__const81);
/*SPC(2058)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6STATEMENTS_LOOP_2(_TPPSTATEMENTS_LOOP_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6STATEMENTS_LOOP_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_LOOP_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_AT_const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _AVLoop_2__const82);
/*SPC(2058)*/
_currn->_AT_const83=MAX(_currn->_desc1->_AT_const83, _AVLoop_2__const83);
/*SPC(2058)*/
_currn->_AT_const84=PTGCommaSeq(_currn->_desc1->_AT_const84, _AVLoop_2__const84);
/*SPC(2058)*/
_currn->_AT_const85=ADD(_currn->_desc1->_AT_const85, _AVLoop_2__const85);
/*SPC(2058)*/
_currn->_ATout=PTGNewLineSeq(_currn->_desc1->_ATout, _AVLoop_2_out);
/*SPC(2059)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_TYPE_CASE_2(_TPPSTATEMENTS_TYPE_CASE_2 _currn)
#else
void _VS1STATEMENTS_TYPE_CASE_2(_currn )
_TPPSTATEMENTS_TYPE_CASE_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc2->_ATSemEnv=NewScope((* _IG_incl2));
/*SPC(12774)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_TYPE_CASE_2(_TPPSTATEMENTS_TYPE_CASE_2 _currn)
#else
void _VS2STATEMENTS_TYPE_CASE_2(_currn )
_TPPSTATEMENTS_TYPE_CASE_2 _currn;

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
void _VS3STATEMENTS_TYPE_CASE_2(_TPPSTATEMENTS_TYPE_CASE_2 _currn)
#else
void _VS3STATEMENTS_TYPE_CASE_2(_currn )
_TPPSTATEMENTS_TYPE_CASE_2 _currn;

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
void _VS4STATEMENTS_TYPE_CASE_2(_TPPSTATEMENTS_TYPE_CASE_2 _currn)
#else
void _VS4STATEMENTS_TYPE_CASE_2(_currn )
_TPPSTATEMENTS_TYPE_CASE_2 _currn;

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
void _VS5STATEMENTS_TYPE_CASE_2(_TPPSTATEMENTS_TYPE_CASE_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5STATEMENTS_TYPE_CASE_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_TYPE_CASE_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AVType_case_statement_2__const81);
/*SPC(2054)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6STATEMENTS_TYPE_CASE_2(_TPPSTATEMENTS_TYPE_CASE_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6STATEMENTS_TYPE_CASE_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_TYPE_CASE_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_AT_const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _AVType_case_statement_2__const82);
/*SPC(2054)*/
_currn->_AT_const83=MAX(_currn->_desc1->_AT_const83, _AVType_case_statement_2__const83);
/*SPC(2054)*/
_currn->_AT_const84=PTGCommaSeq(_currn->_desc1->_AT_const84, _AVType_case_statement_2__const84);
/*SPC(2054)*/
_currn->_AT_const85=ADD(_currn->_desc1->_AT_const85, _AVType_case_statement_2__const85);
/*SPC(2054)*/
_currn->_ATout=PTGNewLineSeq(_currn->_desc1->_ATout, _AVType_case_statement_2_out);
/*SPC(2055)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_CASE_2(_TPPSTATEMENTS_CASE_2 _currn)
#else
void _VS1STATEMENTS_CASE_2(_currn )
_TPPSTATEMENTS_CASE_2 _currn;

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
void _VS2STATEMENTS_CASE_2(_TPPSTATEMENTS_CASE_2 _currn)
#else
void _VS2STATEMENTS_CASE_2(_currn )
_TPPSTATEMENTS_CASE_2 _currn;

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
void _VS3STATEMENTS_CASE_2(_TPPSTATEMENTS_CASE_2 _currn)
#else
void _VS3STATEMENTS_CASE_2(_currn )
_TPPSTATEMENTS_CASE_2 _currn;

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
void _VS4STATEMENTS_CASE_2(_TPPSTATEMENTS_CASE_2 _currn)
#else
void _VS4STATEMENTS_CASE_2(_currn )
_TPPSTATEMENTS_CASE_2 _currn;

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
void _VS5STATEMENTS_CASE_2(_TPPSTATEMENTS_CASE_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5STATEMENTS_CASE_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_CASE_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AVCase_statement_2__const81);
/*SPC(2050)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6STATEMENTS_CASE_2(_TPPSTATEMENTS_CASE_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6STATEMENTS_CASE_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_CASE_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_AT_const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _AVCase_statement_2__const82);
/*SPC(2050)*/
_currn->_AT_const83=MAX(_currn->_desc1->_AT_const83, _AVCase_statement_2__const83);
/*SPC(2050)*/
_currn->_AT_const84=PTGCommaSeq(_currn->_desc1->_AT_const84, _AVCase_statement_2__const84);
/*SPC(2050)*/
_currn->_AT_const85=ADD(_currn->_desc1->_AT_const85, _AVCase_statement_2__const85);
/*SPC(2050)*/
_currn->_ATout=PTGNewLineSeq(_currn->_desc1->_ATout, _AVCase_statement_2_out);
/*SPC(2051)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_COND_2(_TPPSTATEMENTS_COND_2 _currn)
#else
void _VS1STATEMENTS_COND_2(_currn )
_TPPSTATEMENTS_COND_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc2->_ATSemEnv=NewScope((* _IG_incl2));
/*SPC(12953)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_COND_2(_TPPSTATEMENTS_COND_2 _currn)
#else
void _VS2STATEMENTS_COND_2(_currn )
_TPPSTATEMENTS_COND_2 _currn;

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
void _VS3STATEMENTS_COND_2(_TPPSTATEMENTS_COND_2 _currn)
#else
void _VS3STATEMENTS_COND_2(_currn )
_TPPSTATEMENTS_COND_2 _currn;

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
void _VS4STATEMENTS_COND_2(_TPPSTATEMENTS_COND_2 _currn)
#else
void _VS4STATEMENTS_COND_2(_currn )
_TPPSTATEMENTS_COND_2 _currn;

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
void _VS5STATEMENTS_COND_2(_TPPSTATEMENTS_COND_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5STATEMENTS_COND_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_COND_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AVConditional_statement_2__const81);
/*SPC(2046)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6STATEMENTS_COND_2(_TPPSTATEMENTS_COND_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6STATEMENTS_COND_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_COND_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_AT_const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _AVConditional_statement_2__const82);
/*SPC(2046)*/
_currn->_AT_const83=MAX(_currn->_desc1->_AT_const83, _AVConditional_statement_2__const83);
/*SPC(2046)*/
_currn->_AT_const84=PTGCommaSeq(_currn->_desc1->_AT_const84, _AVConditional_statement_2__const84);
/*SPC(2046)*/
_currn->_AT_const85=ADD(_currn->_desc1->_AT_const85, _AVConditional_statement_2__const85);
/*SPC(2046)*/
_currn->_ATout=PTGNewLineSeq(_currn->_desc1->_ATout, _AVConditional_statement_2_out);
/*SPC(2047)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_BEGIN_2(_TPPSTATEMENTS_BEGIN_2 _currn)
#else
void _VS1STATEMENTS_BEGIN_2(_currn )
_TPPSTATEMENTS_BEGIN_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_desc2->_ATSemEnv=NewScope((* _IG_incl2));
/*SPC(12953)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_BEGIN_2(_TPPSTATEMENTS_BEGIN_2 _currn)
#else
void _VS2STATEMENTS_BEGIN_2(_currn )
_TPPSTATEMENTS_BEGIN_2 _currn;

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
void _VS3STATEMENTS_BEGIN_2(_TPPSTATEMENTS_BEGIN_2 _currn)
#else
void _VS3STATEMENTS_BEGIN_2(_currn )
_TPPSTATEMENTS_BEGIN_2 _currn;

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
void _VS4STATEMENTS_BEGIN_2(_TPPSTATEMENTS_BEGIN_2 _currn)
#else
void _VS4STATEMENTS_BEGIN_2(_currn )
_TPPSTATEMENTS_BEGIN_2 _currn;

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
void _VS5STATEMENTS_BEGIN_2(_TPPSTATEMENTS_BEGIN_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5STATEMENTS_BEGIN_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_BEGIN_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AVBegin_block_2__const81);
/*SPC(2042)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6STATEMENTS_BEGIN_2(_TPPSTATEMENTS_BEGIN_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6STATEMENTS_BEGIN_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_BEGIN_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_AT_const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _AVBegin_block_2__const82);
/*SPC(2042)*/
_currn->_AT_const83=MAX(_currn->_desc1->_AT_const83, _AVBegin_block_2__const83);
/*SPC(2042)*/
_currn->_AT_const84=PTGCommaSeq(_currn->_desc1->_AT_const84, _AVBegin_block_2__const84);
/*SPC(2042)*/
_currn->_AT_const85=ADD(_currn->_desc1->_AT_const85, _AVBegin_block_2__const85);
/*SPC(2042)*/
_currn->_ATout=PTGNewLineSeq(_currn->_desc1->_ATout, _AVBegin_block_2_out);
/*SPC(2043)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_ASSIGN_2(_TPPSTATEMENTS_ASSIGN_2 _currn)
#else
void _VS1STATEMENTS_ASSIGN_2(_currn )
_TPPSTATEMENTS_ASSIGN_2 _currn;

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
void _VS2STATEMENTS_ASSIGN_2(_TPPSTATEMENTS_ASSIGN_2 _currn)
#else
void _VS2STATEMENTS_ASSIGN_2(_currn )
_TPPSTATEMENTS_ASSIGN_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_ASSIGN_2(_TPPSTATEMENTS_ASSIGN_2 _currn)
#else
void _VS3STATEMENTS_ASSIGN_2(_currn )
_TPPSTATEMENTS_ASSIGN_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4STATEMENTS_ASSIGN_2(_TPPSTATEMENTS_ASSIGN_2 _currn)
#else
void _VS4STATEMENTS_ASSIGN_2(_currn )
_TPPSTATEMENTS_ASSIGN_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5STATEMENTS_ASSIGN_2(_TPPSTATEMENTS_ASSIGN_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5STATEMENTS_ASSIGN_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_ASSIGN_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AVAssignment_2__const81);
/*SPC(2038)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6STATEMENTS_ASSIGN_2(_TPPSTATEMENTS_ASSIGN_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6STATEMENTS_ASSIGN_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_ASSIGN_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_AT_const82=PTGCommaSeq(_currn->_desc1->_AT_const82, _AVAssignment_2__const82);
/*SPC(2038)*/
_currn->_AT_const83=MAX(_currn->_desc1->_AT_const83, _AVAssignment_2__const83);
/*SPC(2038)*/
_currn->_AT_const84=_currn->_desc1->_AT_const84;
/*SPC(2038)*/
_currn->_AT_const85=ADD(_currn->_desc1->_AT_const85, IDENTICAL(_AVAssignment_2_IsResAssign));
/*SPC(2038)*/
_currn->_ATout=PTGNewLineSeq(_currn->_desc1->_ATout, _AVAssignment_2_out);
/*SPC(2039)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5STATEMENTS_EMPTY_2(_TPPSTATEMENTS_EMPTY_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS5STATEMENTS_EMPTY_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_EMPTY_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const81)=NullDefTableKeyList();
/*SPC(2082)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6STATEMENTS_EMPTY_2(_TPPSTATEMENTS_EMPTY_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS6STATEMENTS_EMPTY_2(_currn ,_AS0_const81)
_TPPSTATEMENTS_EMPTY_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_AT_const82=PTGNull();
/*SPC(2082)*/
_currn->_AT_const83=ONE();
/*SPC(2082)*/
_currn->_AT_const84=PTGNull();
/*SPC(2082)*/
_currn->_AT_const85=ZERO();
/*SPC(2082)*/
_currn->_ATout=PTGNULL;
/*SPC(2083)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LOCAL_STREAM_DECL_2(_TPPLOCAL_STREAM_DECL_2 _currn)
#else
void _VS1LOCAL_STREAM_DECL_2(_currn )
_TPPLOCAL_STREAM_DECL_2 _currn;

#endif
{
STPtr* _IL_incl107;
STPtr _AS3TypeEst;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATType=GetType(KResetType(_AVMethod_specification_2_Key, NewType(_AVMethod_specification_2_Key, AddElIS(methodK, SingleIS(streamK)), MakeName(PTG_StringOut(PTGTuple(PTGIdent("stream "), _AVMethod_specification_2_NamePtg))))), NoType);
/*SPC(10908)*/
_currn->_desc1->_ATSemKindSet=SingleIS(locVarK);
/*SPC(3738)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LOCAL_STREAM_DECL_2(_TPPLOCAL_STREAM_DECL_2 _currn)
#else
void _VS2LOCAL_STREAM_DECL_2(_currn )
_TPPLOCAL_STREAM_DECL_2 _currn;

#endif
{
STPtr* _IL_incl107;
STPtr _AS3TypeEst;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LOCAL_STREAM_DECL_2(_TPPLOCAL_STREAM_DECL_2 _currn)
#else
void _VS3LOCAL_STREAM_DECL_2(_currn )
_TPPLOCAL_STREAM_DECL_2 _currn;

#endif
{
STPtr* _IL_incl107;
STPtr _AS3TypeEst;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LOCAL_STREAM_DECL_2(_TPPLOCAL_STREAM_DECL_2 _currn)
#else
void _VS4LOCAL_STREAM_DECL_2(_currn )
_TPPLOCAL_STREAM_DECL_2 _currn;

#endif
{
STPtr* _IL_incl107;
STPtr _AS3TypeEst;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5LOCAL_STREAM_DECL_2(_TPPLOCAL_STREAM_DECL_2 _currn)
#else
void _VS5LOCAL_STREAM_DECL_2(_currn )
_TPPLOCAL_STREAM_DECL_2 _currn;

#endif
{
STPtr* _IL_incl107;
STPtr _AS3TypeEst;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_AVIdent_def_2_IsExceptionOrTypecase=0;
/*SPC(1840)*/
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
_AS3TypeEst=_currn->_ATType;
/*SPC(11116)*/
(*(_CALL_VS_((NODEPTR ,STPtr*)) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3TypeEst)));
(*(_CALL_VS_((NODEPTR ,STPtr*)) (VS4MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3TypeEst)));
_AVLocal_stream_declaration_2__const81=AppDefTableKeyList(AppDefTableKeyList(SingleDefTableKeyList(_currn->_desc1->_ATKey), _AS2_const81), _AVBound_method_2__const81);
/*SPC(686)*/
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6LOCAL_STREAM_DECL_2(_TPPLOCAL_STREAM_DECL_2 _currn)
#else
void _VS6LOCAL_STREAM_DECL_2(_currn )
_TPPLOCAL_STREAM_DECL_2 _currn;

#endif
{
STPtr* _IL_incl107;
STPtr _AS3TypeEst;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)));
_currn->_desc3->_ATStackBefore=0;
/*SPC(1990)*/
(*(_CALL_VS_((NODEPTR ,STPtr*)) (VS5MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3TypeEst)));
_AVLocal_stream_declaration_2__const82=PTGCommaSeq(_AS2_const82, _AVBound_method_2__const82);
/*SPC(686)*/
_AVLocal_stream_declaration_2__const83=MAX(_AS2_const83, _AVBound_method_2__const83);
/*SPC(686)*/
_IG_incl107=_IL_incl107;

_VisitExit();
}

