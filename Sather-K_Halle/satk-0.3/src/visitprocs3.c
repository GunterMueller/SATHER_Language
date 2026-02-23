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
void _VS1ARGUMENTS_LST_2(_TPPARGUMENTS_LST_2 _currn)
#else
void _VS1ARGUMENTS_LST_2(_currn )
_TPPARGUMENTS_LST_2 _currn;

#endif
{
DefTableKeyList _AS2FormalParams;
DefTableKey _AS2FormalParam;
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
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ARGUMENTS_LST_2(_TPPARGUMENTS_LST_2 _currn)
#else
void _VS2ARGUMENTS_LST_2(_currn )
_TPPARGUMENTS_LST_2 _currn;

#endif
{
int* _IL_incl101;
int* _IL_incl92;
DefTableKeyList _AS2FormalParams;
DefTableKey _AS2FormalParam;
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
_IL_incl101=_IG_incl101;_IG_incl101= &(_currn->_ATNumArgs);
_IL_incl92=_IG_incl92;_IG_incl92= &(_currn->_ATNumArgs);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVArguments_2_Val=_AVArgument_2_Val;
/*SPC(7107)*/
_currn->_ATNumArgs=ADD(_currn->_desc1->_ATNumArgs, 1);
/*SPC(7108)*/
_IG_incl101=_IL_incl101;
_IG_incl92=_IL_incl92;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ARGUMENTS_LST_2(_TPPARGUMENTS_LST_2 _currn)
#else
void _VS3ARGUMENTS_LST_2(_currn )
_TPPARGUMENTS_LST_2 _currn;

#endif
{
int* _IL_incl101;
int* _IL_incl92;
DefTableKeyList _AS2FormalParams;
DefTableKey _AS2FormalParam;
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
_IL_incl101=_IG_incl101;_IG_incl101= &(_currn->_ATNumArgs);
_IL_incl92=_IG_incl92;_IG_incl92= &(_currn->_ATNumArgs);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATArgList=AppElMethArgInfoList(_currn->_desc1->_ATArgList, _AVArgument_2_ArgInfo);
/*SPC(11010)*/
_IG_incl101=_IL_incl101;
_IG_incl92=_IL_incl92;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ARGUMENTS_LST_2(_TPPARGUMENTS_LST_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS4ARGUMENTS_LST_2(_currn ,_AS0_const81)
_TPPARGUMENTS_LST_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
int* _IL_incl101;
int* _IL_incl92;
DefTableKeyList _AS2FormalParams;
DefTableKey _AS2FormalParam;
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
_IL_incl101=_IG_incl101;_IG_incl101= &(_currn->_ATNumArgs);
_IL_incl92=_IG_incl92;_IG_incl92= &(_currn->_ATNumArgs);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AVArgument_2__const81);
/*SPC(250)*/
_IG_incl101=_IL_incl101;
_IG_incl92=_IL_incl92;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5ARGUMENTS_LST_2(_TPPARGUMENTS_LST_2 _currn,PTGNode* _AS0once_out,PTGNode* _AS0out,PTGNode* _AS0write_back,STPtrList* _AS0BoundArgs,int* _AS0StackBefore,PTGNode* _AS0_const101,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS5ARGUMENTS_LST_2(_currn ,_AS0once_out,_AS0out,_AS0write_back,_AS0BoundArgs,_AS0StackBefore,_AS0_const101,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPARGUMENTS_LST_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const101;
int* _AS0StackBefore;
STPtrList* _AS0BoundArgs;
PTGNode* _AS0write_back;
PTGNode* _AS0out;
PTGNode* _AS0once_out;

#endif
{
int* _IL_incl101;
int* _IL_incl92;
DefTableKeyList _AS2FormalParams;
DefTableKey _AS2FormalParam;
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
_IL_incl101=_IG_incl101;_IG_incl101= &(_currn->_ATNumArgs);
_IL_incl92=_IG_incl92;_IG_incl92= &(_currn->_ATNumArgs);
_AS1StackBefore=(* _AS0StackBefore);
/*SPC(1938)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,PTGNode*,PTGNode*,STPtrList*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1once_out)),(&( _AS1out)),(&( _AS1write_back)),(&( _AS1BoundArgs)),(&( _AS1StackBefore)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_currn->_desc2->_ATStackBefore=ADD((* _AS0StackBefore), _currn->_desc1->_ATNumArgs);
/*SPC(1937)*/
(*(_CALL_VS_((NODEPTR ,DefTableKey*,DefTableKeyList*)) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2FormalParam)),(&( _AS2FormalParams)));
(* _AS0_const82)=PTGCommaSeq(_AS1_const82, PTGCommaSeq(_AVArgument_2__const82, IDENTICAL(_AVArgument_2_ValHomeNode)));
/*SPC(250)*/
(* _AS0_const83)=MAX(_AS1_const83, _AVArgument_2__const83);
/*SPC(250)*/
(* _AS0_const101)=PTGCommaSeq(_AS1_const101, PTGCommaSeq(_AVArgument_2__const101, IDENTICAL(_AVArgument_2_ValHomeNode)));
/*SPC(250)*/
(* _AS0BoundArgs)=
((InIS(onceK, GetSemKindSet(_AS2FormalParam, NULLIS))
) ? (_AS1BoundArgs
) : (AppElSTPtrList(_AS1BoundArgs, _currn->_desc2->_ATTypeEst)))
;
/*SPC(628)*/
(* _AS0write_back)=PTGNewLineSeq(_AS1write_back, _AVArgument_2_write_back);
/*SPC(322)*/
(* _AS0out)=PTGNewLineSeq(_AS1out, _AVArgument_2_out);
/*SPC(251)*/
(* _AS0once_out)=PTGNewLineSeq(_AS1once_out, _AVArgument_2_once_out);
/*SPC(252)*/
_IG_incl101=_IL_incl101;
_IG_incl92=_IL_incl92;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ARGUMENTS_EMPTY_2(_TPPARGUMENTS_EMPTY_2 _currn)
#else
void _VS2ARGUMENTS_EMPTY_2(_currn )
_TPPARGUMENTS_EMPTY_2 _currn;

#endif
{
int* _IL_incl101;
int* _IL_incl92;

_VisitVarDecl()
_VisitEntry();
_IL_incl101=_IG_incl101;_IG_incl101= &(_currn->_ATNumArgs);
_IL_incl92=_IG_incl92;_IG_incl92= &(_currn->_ATNumArgs);
_AVArguments_2_Val=NULLValue;
/*SPC(7053)*/
_currn->_ATNumArgs=0;
/*SPC(7112)*/
_IG_incl101=_IL_incl101;
_IG_incl92=_IL_incl92;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ARGUMENTS_EMPTY_2(_TPPARGUMENTS_EMPTY_2 _currn)
#else
void _VS3ARGUMENTS_EMPTY_2(_currn )
_TPPARGUMENTS_EMPTY_2 _currn;

#endif
{
int* _IL_incl101;
int* _IL_incl92;

_VisitVarDecl()
_VisitEntry();
_IL_incl101=_IG_incl101;_IG_incl101= &(_currn->_ATNumArgs);
_IL_incl92=_IG_incl92;_IG_incl92= &(_currn->_ATNumArgs);
_currn->_ATArgList=NULLMethArgInfoList;
/*SPC(11006)*/
_IG_incl101=_IL_incl101;
_IG_incl92=_IL_incl92;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ARGUMENTS_EMPTY_2(_TPPARGUMENTS_EMPTY_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS4ARGUMENTS_EMPTY_2(_currn ,_AS0_const81)
_TPPARGUMENTS_EMPTY_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
int* _IL_incl101;
int* _IL_incl92;

_VisitVarDecl()
_VisitEntry();
_IL_incl101=_IG_incl101;_IG_incl101= &(_currn->_ATNumArgs);
_IL_incl92=_IG_incl92;_IG_incl92= &(_currn->_ATNumArgs);
(* _AS0_const81)=NullDefTableKeyList();
/*SPC(245)*/
_IG_incl101=_IL_incl101;
_IG_incl92=_IL_incl92;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5ARGUMENTS_EMPTY_2(_TPPARGUMENTS_EMPTY_2 _currn,PTGNode* _AS0once_out,PTGNode* _AS0out,PTGNode* _AS0write_back,STPtrList* _AS0BoundArgs,int* _AS0StackBefore,PTGNode* _AS0_const101,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS5ARGUMENTS_EMPTY_2(_currn ,_AS0once_out,_AS0out,_AS0write_back,_AS0BoundArgs,_AS0StackBefore,_AS0_const101,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPARGUMENTS_EMPTY_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const101;
int* _AS0StackBefore;
STPtrList* _AS0BoundArgs;
PTGNode* _AS0write_back;
PTGNode* _AS0out;
PTGNode* _AS0once_out;

#endif
{
int* _IL_incl101;
int* _IL_incl92;

_VisitVarDecl()
_VisitEntry();
_IL_incl101=_IG_incl101;_IG_incl101= &(_currn->_ATNumArgs);
_IL_incl92=_IG_incl92;_IG_incl92= &(_currn->_ATNumArgs);
(* _AS0_const82)=PTGNull();
/*SPC(245)*/
(* _AS0_const83)=ONE();
/*SPC(245)*/
(* _AS0_const101)=PTGNull();
/*SPC(245)*/
(* _AS0BoundArgs)=NULLSTPtrList;
/*SPC(636)*/
(* _AS0write_back)=PTGNULL;
/*SPC(318)*/
(* _AS0out)=PTGNULL;
/*SPC(246)*/
(* _AS0once_out)=PTGNULL;
/*SPC(247)*/
_IG_incl101=_IL_incl101;
_IG_incl92=_IL_incl92;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BOUND_EXP_2(_TPPBOUND_EXP_2 _currn)
#else
void _VS1BOUND_EXP_2(_currn )
_TPPBOUND_EXP_2 _currn;

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
void _VS2BOUND_EXP_2(_TPPBOUND_EXP_2 _currn)
#else
void _VS2BOUND_EXP_2(_currn )
_TPPBOUND_EXP_2 _currn;

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
void _VS3BOUND_EXP_2(_TPPBOUND_EXP_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS3BOUND_EXP_2(_currn ,_AS0_const81)
_TPPBOUND_EXP_2 _currn;
DefTableKeyList* _AS0_const81;

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
(* _AS0_const81)=_AS1_const81;
/*SPC(2424)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4BOUND_EXP_2(_TPPBOUND_EXP_2 _currn,int* _AS0IsDefined,int* _AS0BoundCount_pre,PTGNode* _AS0bounds_out_pre,PTGNode* _AS0_const101,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS4BOUND_EXP_2(_currn ,_AS0IsDefined,_AS0BoundCount_pre,_AS0bounds_out_pre,_AS0_const101,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPBOUND_EXP_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const101;
PTGNode* _AS0bounds_out_pre;
int* _AS0BoundCount_pre;
int* _AS0IsDefined;

#endif
{
DefTableKeyList _AS1_const81;
int _AS1IsExplicitCoercion;
int _AS1StackBefore;
int _AS1UsedAsQualifier;
PTGNode _AS1out;

_VisitVarDecl()
_VisitEntry();

if (AND((* _IG_incl103), EQ(_currn->_desc1->_ATVal, NULLValue))) {
message(ERROR, "bounds of class ROW must be integer compile time constants", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6735)*/
_AS1StackBefore=0;
/*SPC(1901)*/
_AS1UsedAsQualifier=0;
/*SPC(1779)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,int*,int*,DefTableKeyList*)) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1out)),(&( _AS1UsedAsQualifier)),(&( _AS1StackBefore)),(&( _AS1IsExplicitCoercion)),(&( _AS1_const81)));
(* _AS0_const82)=_currn->_desc1->_AT_const82;
/*SPC(2424)*/
(* _AS0_const83)=MAX(_currn->_desc1->_AT_const83, IDENTICAL(_currn->_desc1->_ATStackHeight));
/*SPC(2424)*/
(* _AS0_const101)=_currn->_desc1->_AT_const101;
/*SPC(2424)*/
_AVboundBoundCount_post=ADD((* _AS0BoundCount_pre), 1);
/*SPC(6004)*/
(* _AS0IsDefined)=NOT(_AVExpression_2_IsStar);
/*SPC(5914)*/
_AVBound_2_CoercionType=IsCoercible(_currn->_desc1->_ATType, GetType(GetPreDefKey(MakeName("INT"), (* _IG_incl23), (&( _currn->_AT_pos))), NoType), (&( _currn->_AT_pos)), (* _IG_incl23), 1);
/*SPC(6020)*/
_AVBound_2_out=
((OR(_AVExpression_2_IsStar, NOT((* _IG_incl102)))
) ? (PTGNULL
) : (PTGNewLineSeq(_AS1out, GetConvCode(_currn->_desc1->_ATType, GetType(GetPreDefKey(MakeName("INT"), (* _IG_incl23), (&( _currn->_AT_pos))), NoType), _AVBound_2_CoercionType, (&( _currn->_AT_pos)), (* _IG_incl23)))))
;
/*SPC(2425)*/
_AVBound_2bounds_out_post=PTGNewLineSeq((* _AS0bounds_out_pre), _AVBound_2_out);
/*SPC(2441)*/

if (AND(NOT(_AVExpression_2_IsStar), NOT(_AVBound_2_CoercionType))) {
message(ERROR, "bound expression must yield integer value", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6031)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BOUNDS_2(_TPPBOUNDS_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS3BOUNDS_2(_currn ,_AS0_const81)
_TPPBOUNDS_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const81)=_AVLST_Bounds_2__const81;
/*SPC(5362)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4BOUNDS_2(_TPPBOUNDS_2 _currn,PTGNode* _AS0out,int* _AS0_const105,PTGNode* _AS0_const101,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS4BOUNDS_2(_currn ,_AS0out,_AS0_const105,_AS0_const101,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPBOUNDS_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const101;
int* _AS0_const105;
PTGNode* _AS0out;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVBound_2bounds_out_post=PTGNULL;
/*SPC(2420)*/
_AVboundBoundCount_post=0;
/*SPC(5999)*/
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const82)=_AVLST_Bounds_2__const82;
/*SPC(5362)*/
(* _AS0_const83)=_AVLST_Bounds_2__const83;
/*SPC(5362)*/
(* _AS0_const101)=_AVLST_Bounds_2__const101;
/*SPC(5362)*/
(* _AS0_const105)=_AVLST_Bounds_2__const105;
/*SPC(5362)*/
_AVBounds_2_BoundCnt=_AVboundBoundCount_post;
/*SPC(6000)*/
(* _AS0out)=_AVBound_2bounds_out_post;
/*SPC(2421)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ID_USE_2(_TPPCLASS_ID_USE_2 _currn)
#else
void _VS1CLASS_ID_USE_2(_currn )
_TPPCLASS_ID_USE_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_KIND_INOUT_2(_TPPPARAMETER_KIND_INOUT_2 _currn)
#else
void _VS1PARAMETER_KIND_INOUT_2(_currn )
_TPPPARAMETER_KIND_INOUT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATNamePtg=PTGIdent("&&");
/*SPC(4731)*/
_currn->_ATKindSet=SingleIS(inoutK);
/*SPC(3716)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_KIND_OUT_2(_TPPPARAMETER_KIND_OUT_2 _currn)
#else
void _VS1PARAMETER_KIND_OUT_2(_currn )
_TPPPARAMETER_KIND_OUT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATNamePtg=PTGIdent("&");
/*SPC(4727)*/
_currn->_ATKindSet=SingleIS(outK);
/*SPC(3713)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_KIND_ONCE_2(_TPPPARAMETER_KIND_ONCE_2 _currn)
#else
void _VS1PARAMETER_KIND_ONCE_2(_currn )
_TPPPARAMETER_KIND_ONCE_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATNamePtg=PTGIdent("!");
/*SPC(4723)*/
_currn->_ATKindSet=SingleIS(onceK);
/*SPC(3710)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_KIND_IN_2(_TPPPARAMETER_KIND_IN_2 _currn)
#else
void _VS1PARAMETER_KIND_IN_2(_currn )
_TPPPARAMETER_KIND_IN_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATNamePtg=PTGNULL;
/*SPC(4719)*/
_currn->_ATKindSet=SingleIS(inK);
/*SPC(3707)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_TYPE_2(_TPPPARAMETER_TYPE_2 _currn,PTGNode* _AS0NameListPtg_pre,DefTableKeyList* _AS0Params_pre)
#else
void _VS1PARAMETER_TYPE_2(_currn ,_AS0NameListPtg_pre,_AS0Params_pre)
_TPPPARAMETER_TYPE_2 _currn;
DefTableKeyList* _AS0Params_pre;
PTGNode* _AS0NameListPtg_pre;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVParameter_type_2_NamePtg=PTGTuple(_currn->_desc1->_ATNamePtg, _currn->_desc2->_ATNamePtg);
/*SPC(4714)*/
_AVParameter_type_2_Key=NewKey();
/*SPC(4377)*/
_AVParameter_specification_2NameListPtg_post=PTGCommaSeq((* _AS0NameListPtg_pre), _AVParameter_type_2_NamePtg);
/*SPC(4711)*/
ResetSemKindSet(_AVParameter_type_2_Key, AddElIS(parameterK, _currn->_desc1->_ATKindSet));
ResetType(_AVParameter_type_2_Key, _currn->_desc2->_ATType);
;
/*SPC(4379)*/
_AVParameter_specification_2Params_post=AppElDefTableKeyList((* _AS0Params_pre), _AVParameter_type_2_Key);
/*SPC(4385)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2PARAMETER_TYPE_2(_TPPPARAMETER_TYPE_2 _currn,PTGNode* _AS0NameListPtg_pre,DefTableKeyList* _AS0Params_pre)
#else
void _VS2PARAMETER_TYPE_2(_currn ,_AS0NameListPtg_pre,_AS0Params_pre)
_TPPPARAMETER_TYPE_2 _currn;
DefTableKeyList* _AS0Params_pre;
PTGNode* _AS0NameListPtg_pre;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3PARAMETER_TYPE_2(_TPPPARAMETER_TYPE_2 _currn,PTGNode* _AS0NameListPtg_pre,DefTableKeyList* _AS0Params_pre,DefTableKeyList* _AS0_const81)
#else
void _VS3PARAMETER_TYPE_2(_currn ,_AS0NameListPtg_pre,_AS0Params_pre,_AS0_const81)
_TPPPARAMETER_TYPE_2 _currn;
DefTableKeyList* _AS0_const81;
DefTableKeyList* _AS0Params_pre;
PTGNode* _AS0NameListPtg_pre;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
(* _AS0_const81)=_AS2_const81;
/*SPC(4376)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4PARAMETER_TYPE_2(_TPPPARAMETER_TYPE_2 _currn,PTGNode* _AS0NameListPtg_pre,DefTableKeyList* _AS0Params_pre,PTGNode* _AS0_const101,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS4PARAMETER_TYPE_2(_currn ,_AS0NameListPtg_pre,_AS0Params_pre,_AS0_const101,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPPARAMETER_TYPE_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const101;
DefTableKeyList* _AS0Params_pre;
PTGNode* _AS0NameListPtg_pre;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
_AS2IsMethodParameterType=1;
/*SPC(5953)*/
_AVType_specifier_2_IsTypeBound=0;
/*SPC(5788)*/
_AVType_specifier_2_IsConstructor=0;
/*SPC(2456)*/
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsMethodParameterType)),(&( _AS2_const81)));
(* _AS0_const82)=_currn->_desc2->_AT_const82;
/*SPC(4376)*/
(* _AS0_const83)=_currn->_desc2->_AT_const83;
/*SPC(4376)*/
(* _AS0_const101)=_currn->_desc2->_AT_const101;
/*SPC(4376)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_TYPES_2(_TPPPARAMETER_TYPES_2 _currn,DefTableKeyList* _AS0ParamList,PTGNode* _AS0NamePtg)
#else
void _VS1PARAMETER_TYPES_2(_currn ,_AS0ParamList,_AS0NamePtg)
_TPPPARAMETER_TYPES_2 _currn;
PTGNode* _AS0NamePtg;
DefTableKeyList* _AS0ParamList;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVParameter_specification_2Params_post=NULLDefTableKeyList;
/*SPC(4372)*/
_AVParameter_specification_2NameListPtg_post=PTGNULL;
/*SPC(4706)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0NamePtg)=_AVParameter_specification_2NameListPtg_post;
/*SPC(4707)*/
(* _AS0ParamList)=_AVParameter_specification_2Params_post;
/*SPC(4373)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2PARAMETER_TYPES_2(_TPPPARAMETER_TYPES_2 _currn,DefTableKeyList* _AS0ParamList,PTGNode* _AS0NamePtg)
#else
void _VS2PARAMETER_TYPES_2(_currn ,_AS0ParamList,_AS0NamePtg)
_TPPPARAMETER_TYPES_2 _currn;
PTGNode* _AS0NamePtg;
DefTableKeyList* _AS0ParamList;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3PARAMETER_TYPES_2(_TPPPARAMETER_TYPES_2 _currn,DefTableKeyList* _AS0ParamList,PTGNode* _AS0NamePtg,DefTableKeyList* _AS0_const81)
#else
void _VS3PARAMETER_TYPES_2(_currn ,_AS0ParamList,_AS0NamePtg,_AS0_const81)
_TPPPARAMETER_TYPES_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0NamePtg;
DefTableKeyList* _AS0ParamList;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const81)=_AVLST_Parameter_types_2__const81;
/*SPC(5355)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4PARAMETER_TYPES_2(_TPPPARAMETER_TYPES_2 _currn,DefTableKeyList* _AS0ParamList,PTGNode* _AS0NamePtg,PTGNode* _AS0_const101,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS4PARAMETER_TYPES_2(_currn ,_AS0ParamList,_AS0NamePtg,_AS0_const101,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPPARAMETER_TYPES_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const101;
PTGNode* _AS0NamePtg;
DefTableKeyList* _AS0ParamList;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const82)=_AVLST_Parameter_types_2__const82;
/*SPC(5355)*/
(* _AS0_const83)=_AVLST_Parameter_types_2__const83;
/*SPC(5355)*/
(* _AS0_const101)=_AVLST_Parameter_types_2__const101;
/*SPC(5355)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_SPECIFICATION_2(_TPPMETHOD_SPECIFICATION_2 _currn)
#else
void _VS1METHOD_SPECIFICATION_2(_currn )
_TPPMETHOD_SPECIFICATION_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
PTGNode _AS1NamePtg;
DefTableKeyList _AS1ParamList;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*,PTGNode*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1ParamList)),(&( _AS1NamePtg)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVMethod_specification_2_NamePtg=PTGTuple(PTGParenthesis(_AS1NamePtg), PTGResultType(_currn->_desc2->_ATNamePtg));
/*SPC(4699)*/
_AVMethod_specification_2_Key=KResetResultType(KResetParams(NewKey(), _AS1ParamList), _currn->_desc2->_ATType);
/*SPC(4391)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2METHOD_SPECIFICATION_2(_TPPMETHOD_SPECIFICATION_2 _currn)
#else
void _VS2METHOD_SPECIFICATION_2(_currn )
_TPPMETHOD_SPECIFICATION_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
PTGNode _AS1NamePtg;
DefTableKeyList _AS1ParamList;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*,PTGNode*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1ParamList)),(&( _AS1NamePtg)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3METHOD_SPECIFICATION_2(_TPPMETHOD_SPECIFICATION_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS3METHOD_SPECIFICATION_2(_currn ,_AS0_const81)
_TPPMETHOD_SPECIFICATION_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
PTGNode _AS1NamePtg;
DefTableKeyList _AS1ParamList;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*,PTGNode*,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1ParamList)),(&( _AS1NamePtg)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AS2_const81);
/*SPC(4390)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4METHOD_SPECIFICATION_2(_TPPMETHOD_SPECIFICATION_2 _currn,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS4METHOD_SPECIFICATION_2(_currn ,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPMETHOD_SPECIFICATION_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;
PTGNode _AS1NamePtg;
DefTableKeyList _AS1ParamList;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*,PTGNode*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1ParamList)),(&( _AS1NamePtg)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_AS2IsMethodParameterType=1;
/*SPC(5949)*/
_AVType_specifier_2_IsTypeBound=0;
/*SPC(5788)*/
_AVType_specifier_2_IsConstructor=0;
/*SPC(2456)*/
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsMethodParameterType)),(&( _AS2_const81)));
(* _AS0_const82)=PTGCommaSeq(_AS1_const82, _currn->_desc2->_AT_const82);
/*SPC(4390)*/
(* _AS0_const83)=MAX(_AS1_const83, _currn->_desc2->_AT_const83);
/*SPC(4390)*/
_AVMethod_specification_2__const101=PTGCommaSeq(_AS1_const101, _currn->_desc2->_AT_const101);
/*SPC(4390)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ARGUMENT_2(_TPPCLASS_ARGUMENT_2 _currn)
#else
void _VS1CLASS_ARGUMENT_2(_currn )
_TPPCLASS_ARGUMENT_2 _currn;

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

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_ARGUMENT_2(_TPPCLASS_ARGUMENT_2 _currn)
#else
void _VS2CLASS_ARGUMENT_2(_currn )
_TPPCLASS_ARGUMENT_2 _currn;

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
void _VS3CLASS_ARGUMENT_2(_TPPCLASS_ARGUMENT_2 _currn)
#else
void _VS3CLASS_ARGUMENT_2(_currn )
_TPPCLASS_ARGUMENT_2 _currn;

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
_AVClass_argument_2__const81=_AS1_const81;
/*SPC(5353)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_ARGUMENT_2(_TPPCLASS_ARGUMENT_2 _currn)
#else
void _VS4CLASS_ARGUMENT_2(_currn )
_TPPCLASS_ARGUMENT_2 _currn;

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
_AVClass_argument_2__const82=_AS1_const82;
/*SPC(5353)*/
_AVClass_argument_2__const83=_AS1_const83;
/*SPC(5353)*/
_AVClass_argument_2__const101=_AS1_const101;
/*SPC(5353)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_ARGUMENTS_LST_2(_TPPCLASS_ARGUMENTS_LST_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS3CLASS_ARGUMENTS_LST_2(_currn ,_AS0_const81)
_TPPCLASS_ARGUMENTS_LST_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const81)=AppDefTableKeyList(_AS1_const81, _AVClass_argument_2__const81);
/*SPC(5352)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_ARGUMENTS_LST_2(_TPPCLASS_ARGUMENTS_LST_2 _currn,PTGNode* _AS0_const101,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS4CLASS_ARGUMENTS_LST_2(_currn ,_AS0_const101,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPCLASS_ARGUMENTS_LST_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const101;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;
PTGNode _AS1_const101;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const82)=PTGCommaSeq(_AS1_const82, _AVClass_argument_2__const82);
/*SPC(5352)*/
(* _AS0_const83)=MAX(_AS1_const83, _AVClass_argument_2__const83);
/*SPC(5352)*/
(* _AS0_const101)=PTGCommaSeq(_AS1_const101, _AVClass_argument_2__const101);
/*SPC(5352)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_ARGUMENTS_EMPTY_2(_TPPCLASS_ARGUMENTS_EMPTY_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS3CLASS_ARGUMENTS_EMPTY_2(_currn ,_AS0_const81)
_TPPCLASS_ARGUMENTS_EMPTY_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const81)=NullDefTableKeyList();
/*SPC(5351)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_ARGUMENTS_EMPTY_2(_TPPCLASS_ARGUMENTS_EMPTY_2 _currn,PTGNode* _AS0_const101,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS4CLASS_ARGUMENTS_EMPTY_2(_currn ,_AS0_const101,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPCLASS_ARGUMENTS_EMPTY_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const101;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const82)=PTGNull();
/*SPC(5351)*/
(* _AS0_const83)=ONE();
/*SPC(5351)*/
(* _AS0_const101)=PTGNull();
/*SPC(5351)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_SPECIFIER_2(_TPPCLASS_SPECIFIER_2 _currn,int* _AS0IsPoly)
#else
void _VS1CLASS_SPECIFIER_2(_currn ,_AS0IsPoly)
_TPPCLASS_SPECIFIER_2 _currn;
int* _AS0IsPoly;

#endif
{
DefTableKeyList _AS3_const81;
PTGNode _AS3_const82;
int _AS3_const83;
PTGNode _AS3_const101;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2_const105;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVClass_specifier_2_Sym=
((EQ((* _AS0IsPoly), 1)
) ? (MakeName(CatStrInd("$", _currn->_desc1->_ATSym))
) : (_currn->_desc1->_ATSym))
;
/*SPC(4664)*/
_AVClass_specifier_2_Bind=BindingInEnv((* _IG_incl23), _AVClass_specifier_2_Sym);
/*SPC(12711)*/
_currn->_ATKey=KeyOf(_AVClass_specifier_2_Bind);
/*SPC(12715)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_SPECIFIER_2(_TPPCLASS_SPECIFIER_2 _currn,int* _AS0IsPoly)
#else
void _VS2CLASS_SPECIFIER_2(_currn ,_AS0IsPoly)
_TPPCLASS_SPECIFIER_2 _currn;
int* _AS0IsPoly;

#endif
{
DefTableKeyList _AS3_const81;
PTGNode _AS3_const82;
int _AS3_const83;
PTGNode _AS3_const101;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2_const105;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_SPECIFIER_2(_TPPCLASS_SPECIFIER_2 _currn,int* _AS0IsPoly,DefTableKeyList* _AS0_const81)
#else
void _VS3CLASS_SPECIFIER_2(_currn ,_AS0IsPoly,_AS0_const81)
_TPPCLASS_SPECIFIER_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsPoly;

#endif
{
DefTableKeyList _AS3_const81;
PTGNode _AS3_const82;
int _AS3_const83;
PTGNode _AS3_const101;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2_const105;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3_const81)));
(* _AS0_const81)=AppDefTableKeyList(_AS2_const81, _AS3_const81);
/*SPC(2444)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_SPECIFIER_2(_TPPCLASS_SPECIFIER_2 _currn,PTGNode* _AS0init_code,int* _AS0IsPoly,PTGNode* _AS0_const101,int* _AS0_const83,PTGNode* _AS0_const82,DefTableKeyList* _AS0_const81)
#else
void _VS4CLASS_SPECIFIER_2(_currn ,_AS0init_code,_AS0IsPoly,_AS0_const101,_AS0_const83,_AS0_const82,_AS0_const81)
_TPPCLASS_SPECIFIER_2 _currn;
DefTableKeyList* _AS0_const81;
PTGNode* _AS0_const82;
int* _AS0_const83;
PTGNode* _AS0_const101;
int* _AS0IsPoly;
PTGNode* _AS0init_code;

#endif
{
int* _IL_incl102;
int* _IL_incl103;
DefTableKeyList _AS3_const81;
PTGNode _AS3_const82;
int _AS3_const83;
PTGNode _AS3_const101;
DefTableKeyList _AS2_const81;
PTGNode _AS2_const82;
int _AS2_const83;
PTGNode _AS2_const101;
int _AS2_const105;
PTGNode _AS2out;

_VisitVarDecl()
_VisitEntry();
_IL_incl102=_IG_incl102;_IG_incl102= &(_currn->_ATIsConstructor);
_IL_incl103=_IG_incl103;_IG_incl103= &(_currn->_ATIsRow);
_currn->_ATIsRow=IsRowSym(_currn->_desc1->_ATSym);
/*SPC(6724)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2out)),(&( _AS2_const105)),(&( _AS2_const101)),(&( _AS2_const83)),(&( _AS2_const82)),(&( _AS2_const81)));

if (NOT(EQ(LengthDefTableKeyList(GetBoundKeys(_currn->_ATKey, NULLDefTableKeyList)), _AVBounds_2_BoundCnt))) {
message(ERROR, "specified number of class bounds does not match the declaration of the class", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6013)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3_const101)),(&( _AS3_const83)),(&( _AS3_const82)),(&( _AS3_const81)));
(* _AS0_const82)=PTGCommaSeq(_AS2_const82, _AS3_const82);
/*SPC(2444)*/
(* _AS0_const83)=MAX(_AS2_const83, _AS3_const83);
/*SPC(2444)*/
(* _AS0_const101)=PTGCommaSeq(_AS2_const101, _AS3_const101);
/*SPC(2444)*/
_AVClass_specifier_2_BoundsDefined=_AS2_const105;
/*SPC(5918)*/
(* _AS0init_code)=_AS2out;
/*SPC(2445)*/
_IG_incl102=_IL_incl102;
_IG_incl103=_IL_incl103;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_STREAM_2(_TPPTYPE_SPECIFIER_STREAM_2 _currn)
#else
void _VS1TYPE_SPECIFIER_STREAM_2(_currn )
_TPPTYPE_SPECIFIER_STREAM_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVType_specifier_2_TermKey=NewKey();
/*SPC(10713)*/
_AVType_specifier_2_TermBind=BindIdn(NewEnv(), MakeName("terminated"));
/*SPC(10712)*/
_currn->_ATType=
(ResetSemKindSet(_AVType_specifier_2_TermKey, AddElIS(procedureK, SingleIS(methodK))), ResetSym(_AVType_specifier_2_TermKey, MakeName("terminated")), ResetType(_AVType_specifier_2_TermKey, NewType(_AVType_specifier_2_TermKey, GetSemKindSet(_AVType_specifier_2_TermKey, NULLIS), MakeName("procedure terminated"))), ResetResultType(_AVType_specifier_2_TermKey, GetType(GetPreDefKey(MakeName("BOOL"), (* _IG_incl23), (&( _currn->_AT_pos))), NoType)), ResetFeatureOf(_AVType_specifier_2_TermKey, _AVMethod_specification_2_Key), ResetBindings(KeyOf(_AVType_specifier_2_TermBind), SingleDefTableKeyList(_AVType_specifier_2_TermKey)), ResetSemScope(_AVMethod_specification_2_Key, EnvOf(_AVType_specifier_2_TermBind)), GetType(KResetType(_AVMethod_specification_2_Key, SetId(NewType(_AVMethod_specification_2_Key, AddElIS(methodK, SingleIS(streamK)), MakeName(PTG_StringOut(PTGTuple(PTGIdent("stream "), _AVMethod_specification_2_NamePtg)))))), NoType))
;
/*SPC(10715)*/
_currn->_ATNamePtg=PTGTuple(PTGIdent("stream "), _AVMethod_specification_2_NamePtg);
/*SPC(4739)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIER_STREAM_2(_TPPTYPE_SPECIFIER_STREAM_2 _currn)
#else
void _VS2TYPE_SPECIFIER_STREAM_2(_currn )
_TPPTYPE_SPECIFIER_STREAM_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_SPECIFIER_STREAM_2(_TPPTYPE_SPECIFIER_STREAM_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS3TYPE_SPECIFIER_STREAM_2(_currn ,_AS0_const81)
_TPPTYPE_SPECIFIER_STREAM_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(* _AS0_const81)=_AS1_const81;
/*SPC(4738)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_SPECIFIER_STREAM_2(_TPPTYPE_SPECIFIER_STREAM_2 _currn,int* _AS0IsMethodParameterType,DefTableKeyList* _AS0_const81)
#else
void _VS4TYPE_SPECIFIER_STREAM_2(_currn ,_AS0IsMethodParameterType,_AS0_const81)
_TPPTYPE_SPECIFIER_STREAM_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsMethodParameterType;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;

_VisitVarDecl()
_VisitEntry();

if (AND(AND(AND(NOT(IsPolymorph(_currn->_ATType)), NOT(InIS(abstractK, (* _IG_incl58)))), InIS(abstractK, GetSemKindSet(KeyOfType(_currn->_ATType), NULLIS))), NOT(_AVType_specifier_2_IsTypeBound))) {
message(ERROR, "cannot build monomorph type from abstract class", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5797)*/
(*(_CALL_VS_((NODEPTR ,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_currn->_AT_const82=_AS1_const82;
/*SPC(4738)*/
_currn->_AT_const83=_AS1_const83;
/*SPC(4738)*/
_AVType_specifier_2__const94=PTGNull();
/*SPC(4738)*/
_currn->_AT_const101=_AVMethod_specification_2__const101;
/*SPC(4738)*/
_AVType_specifier_2_is_empty=0;
/*SPC(6306)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_SAME_2(_TPPTYPE_SPECIFIER_SAME_2 _currn)
#else
void _VS1TYPE_SPECIFIER_SAME_2(_currn )
_TPPTYPE_SPECIFIER_SAME_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVType_specifier_2_TermKey=NoKey;
/*SPC(10708)*/
_AVType_specifier_2_TermBind=NoBinding;
/*SPC(10707)*/
_currn->_ATType=GetType((* _IG_incl66), NoType);
/*SPC(10690)*/
_currn->_ATNamePtg=PTGIdent(NameOfType(_currn->_ATType));
/*SPC(4735)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_SPECIFIER_SAME_2(_TPPTYPE_SPECIFIER_SAME_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS3TYPE_SPECIFIER_SAME_2(_currn ,_AS0_const81)
_TPPTYPE_SPECIFIER_SAME_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const81)=NullDefTableKeyList();
/*SPC(10689)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_SPECIFIER_SAME_2(_TPPTYPE_SPECIFIER_SAME_2 _currn,int* _AS0IsMethodParameterType,DefTableKeyList* _AS0_const81)
#else
void _VS4TYPE_SPECIFIER_SAME_2(_currn ,_AS0IsMethodParameterType,_AS0_const81)
_TPPTYPE_SPECIFIER_SAME_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsMethodParameterType;

#endif
{

_VisitVarDecl()
_VisitEntry();

if (AND(AND(AND(NOT(IsPolymorph(_currn->_ATType)), NOT(InIS(abstractK, (* _IG_incl58)))), InIS(abstractK, GetSemKindSet(KeyOfType(_currn->_ATType), NULLIS))), NOT(_AVType_specifier_2_IsTypeBound))) {
message(ERROR, "cannot build monomorph type from abstract class", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5797)*/
_currn->_AT_const82=PTGNull();
/*SPC(10689)*/
_currn->_AT_const83=ONE();
/*SPC(10689)*/
_AVType_specifier_2__const94=PTGNull();
/*SPC(10689)*/
_currn->_AT_const101=PTGNull();
/*SPC(10689)*/
_AVType_specifier_2_is_empty=0;
/*SPC(6306)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_SAME_POLY_2(_TPPTYPE_SPECIFIER_SAME_POLY_2 _currn)
#else
void _VS1TYPE_SPECIFIER_SAME_POLY_2(_currn )
_TPPTYPE_SPECIFIER_SAME_POLY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVType_specifier_2_TermKey=NoKey;
/*SPC(10708)*/
_AVType_specifier_2_TermBind=NoBinding;
/*SPC(10707)*/
_currn->_ATType=GetPolyType((* _IG_incl66), NoType);
/*SPC(10695)*/
_currn->_ATNamePtg=PTGIdent(NameOfType(_currn->_ATType));
/*SPC(4735)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_SPECIFIER_SAME_POLY_2(_TPPTYPE_SPECIFIER_SAME_POLY_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS3TYPE_SPECIFIER_SAME_POLY_2(_currn ,_AS0_const81)
_TPPTYPE_SPECIFIER_SAME_POLY_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const81)=NullDefTableKeyList();
/*SPC(10694)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_SPECIFIER_SAME_POLY_2(_TPPTYPE_SPECIFIER_SAME_POLY_2 _currn,int* _AS0IsMethodParameterType,DefTableKeyList* _AS0_const81)
#else
void _VS4TYPE_SPECIFIER_SAME_POLY_2(_currn ,_AS0IsMethodParameterType,_AS0_const81)
_TPPTYPE_SPECIFIER_SAME_POLY_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsMethodParameterType;

#endif
{

_VisitVarDecl()
_VisitEntry();

if (AND(AND(AND(NOT(IsPolymorph(_currn->_ATType)), NOT(InIS(abstractK, (* _IG_incl58)))), InIS(abstractK, GetSemKindSet(KeyOfType(_currn->_ATType), NULLIS))), NOT(_AVType_specifier_2_IsTypeBound))) {
message(ERROR, "cannot build monomorph type from abstract class", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5797)*/
_currn->_AT_const82=PTGNull();
/*SPC(10694)*/
_currn->_AT_const83=ONE();
/*SPC(10694)*/
_AVType_specifier_2__const94=PTGNull();
/*SPC(10694)*/
_currn->_AT_const101=PTGNull();
/*SPC(10694)*/
_AVType_specifier_2_is_empty=0;
/*SPC(6306)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_PROC_2(_TPPTYPE_SPECIFIER_PROC_2 _currn)
#else
void _VS1TYPE_SPECIFIER_PROC_2(_currn )
_TPPTYPE_SPECIFIER_PROC_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVType_specifier_2_TermKey=NoKey;
/*SPC(10708)*/
_AVType_specifier_2_TermBind=NoBinding;
/*SPC(10707)*/
_currn->_ATType=GetType(KResetType(_AVMethod_specification_2_Key, SetId(NewType(_AVMethod_specification_2_Key, AddElIS(methodK, SingleIS(procedureK)), MakeName(PTG_StringOut(PTGTuple(PTGIdent("procedure "), _AVMethod_specification_2_NamePtg)))))), NoType);
/*SPC(10735)*/
_currn->_ATNamePtg=PTGTuple(PTGIdent("procedure "), _AVMethod_specification_2_NamePtg);
/*SPC(4743)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIER_PROC_2(_TPPTYPE_SPECIFIER_PROC_2 _currn)
#else
void _VS2TYPE_SPECIFIER_PROC_2(_currn )
_TPPTYPE_SPECIFIER_PROC_2 _currn;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_SPECIFIER_PROC_2(_TPPTYPE_SPECIFIER_PROC_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS3TYPE_SPECIFIER_PROC_2(_currn ,_AS0_const81)
_TPPTYPE_SPECIFIER_PROC_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const81)));
(* _AS0_const81)=_AS1_const81;
/*SPC(4742)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_SPECIFIER_PROC_2(_TPPTYPE_SPECIFIER_PROC_2 _currn,int* _AS0IsMethodParameterType,DefTableKeyList* _AS0_const81)
#else
void _VS4TYPE_SPECIFIER_PROC_2(_currn ,_AS0IsMethodParameterType,_AS0_const81)
_TPPTYPE_SPECIFIER_PROC_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsMethodParameterType;

#endif
{
DefTableKeyList _AS1_const81;
PTGNode _AS1_const82;
int _AS1_const83;

_VisitVarDecl()
_VisitEntry();

if (AND(AND(AND(NOT(IsPolymorph(_currn->_ATType)), NOT(InIS(abstractK, (* _IG_incl58)))), InIS(abstractK, GetSemKindSet(KeyOfType(_currn->_ATType), NULLIS))), NOT(_AVType_specifier_2_IsTypeBound))) {
message(ERROR, "cannot build monomorph type from abstract class", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5797)*/
(*(_CALL_VS_((NODEPTR ,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_currn->_AT_const82=_AS1_const82;
/*SPC(4742)*/
_currn->_AT_const83=_AS1_const83;
/*SPC(4742)*/
_AVType_specifier_2__const94=PTGNull();
/*SPC(4742)*/
_currn->_AT_const101=_AVMethod_specification_2__const101;
/*SPC(4742)*/
_AVType_specifier_2_is_empty=0;
/*SPC(6306)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_EMPTY_2(_TPPTYPE_SPECIFIER_EMPTY_2 _currn)
#else
void _VS1TYPE_SPECIFIER_EMPTY_2(_currn )
_TPPTYPE_SPECIFIER_EMPTY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVType_specifier_2_TermKey=NoKey;
/*SPC(10708)*/
_AVType_specifier_2_TermBind=NoBinding;
/*SPC(10707)*/
_currn->_ATType=NoType;
/*SPC(10742)*/
_currn->_ATNamePtg=PTGNULL;
/*SPC(4747)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_SPECIFIER_EMPTY_2(_TPPTYPE_SPECIFIER_EMPTY_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS3TYPE_SPECIFIER_EMPTY_2(_currn ,_AS0_const81)
_TPPTYPE_SPECIFIER_EMPTY_2 _currn;
DefTableKeyList* _AS0_const81;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0_const81)=NullDefTableKeyList();
/*SPC(4746)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_SPECIFIER_EMPTY_2(_TPPTYPE_SPECIFIER_EMPTY_2 _currn,int* _AS0IsMethodParameterType,DefTableKeyList* _AS0_const81)
#else
void _VS4TYPE_SPECIFIER_EMPTY_2(_currn ,_AS0IsMethodParameterType,_AS0_const81)
_TPPTYPE_SPECIFIER_EMPTY_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsMethodParameterType;

#endif
{

_VisitVarDecl()
_VisitEntry();

if (AND(AND(AND(NOT(IsPolymorph(_currn->_ATType)), NOT(InIS(abstractK, (* _IG_incl58)))), InIS(abstractK, GetSemKindSet(KeyOfType(_currn->_ATType), NULLIS))), NOT(_AVType_specifier_2_IsTypeBound))) {
message(ERROR, "cannot build monomorph type from abstract class", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5797)*/
_currn->_AT_const82=PTGNull();
/*SPC(4746)*/
_currn->_AT_const83=ONE();
/*SPC(4746)*/
_AVType_specifier_2__const94=PTGNull();
/*SPC(4746)*/
_currn->_AT_const101=PTGNull();
/*SPC(4746)*/
_AVType_specifier_2_is_empty=1;
/*SPC(6310)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_CL_2(_TPPTYPE_SPECIFIER_CL_2 _currn)
#else
void _VS1TYPE_SPECIFIER_CL_2(_currn )
_TPPTYPE_SPECIFIER_CL_2 _currn;

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
_AVType_specifier_2_TermKey=NoKey;
/*SPC(10708)*/
_AVType_specifier_2_TermBind=NoBinding;
/*SPC(10707)*/
_currn->_ATType=GetType(_currn->_desc1->_ATKey, NoType);
/*SPC(10685)*/
_currn->_ATNamePtg=PTGIdent(NameOfType(_currn->_ATType));
/*SPC(4735)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIER_CL_2(_TPPTYPE_SPECIFIER_CL_2 _currn)
#else
void _VS2TYPE_SPECIFIER_CL_2(_currn )
_TPPTYPE_SPECIFIER_CL_2 _currn;

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
void _VS3TYPE_SPECIFIER_CL_2(_TPPTYPE_SPECIFIER_CL_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS3TYPE_SPECIFIER_CL_2(_currn ,_AS0_const81)
_TPPTYPE_SPECIFIER_CL_2 _currn;
DefTableKeyList* _AS0_const81;

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
(* _AS0_const81)=_AS1_const81;
/*SPC(2468)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_SPECIFIER_CL_2(_TPPTYPE_SPECIFIER_CL_2 _currn,int* _AS0IsMethodParameterType,DefTableKeyList* _AS0_const81)
#else
void _VS4TYPE_SPECIFIER_CL_2(_currn ,_AS0IsMethodParameterType,_AS0_const81)
_TPPTYPE_SPECIFIER_CL_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsMethodParameterType;

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

if (AND(AND(AND(NOT(IsPolymorph(_currn->_ATType)), NOT(InIS(abstractK, (* _IG_incl58)))), InIS(abstractK, GetSemKindSet(KeyOfType(_currn->_ATType), NULLIS))), NOT(_AVType_specifier_2_IsTypeBound))) {
message(ERROR, "cannot build monomorph type from abstract class", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5797)*/
_currn->_desc1->_ATIsConstructor=_AVType_specifier_2_IsConstructor;
/*SPC(2469)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1init_code)),(&( _AS1IsPoly)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));

if (AND(AND(IsMonoValueType(_currn->_ATType), NOT(_AVClass_specifier_2_BoundsDefined)), NOT((* _AS0IsMethodParameterType)))) {
message(ERROR, "declaration of monomorph value array type must give values to its bounds", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5964)*/
_currn->_AT_const82=_AS1_const82;
/*SPC(2468)*/
_currn->_AT_const83=_AS1_const83;
/*SPC(2468)*/
_AVType_specifier_2__const94=IDENTICAL(_AS1init_code);
/*SPC(2468)*/
_currn->_AT_const101=_AS1_const101;
/*SPC(2468)*/
_AVType_specifier_2_is_empty=0;
/*SPC(6306)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_CL_POLY_2(_TPPTYPE_SPECIFIER_CL_POLY_2 _currn)
#else
void _VS1TYPE_SPECIFIER_CL_POLY_2(_currn )
_TPPTYPE_SPECIFIER_CL_POLY_2 _currn;

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
_AS1IsPoly=1;
/*SPC(4660)*/
(*(_CALL_VS_((NODEPTR ,int*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1IsPoly)));
_AVType_specifier_2_TermKey=NoKey;
/*SPC(10708)*/
_AVType_specifier_2_TermBind=NoBinding;
/*SPC(10707)*/
_currn->_ATType=GetType(_currn->_desc1->_ATKey, NoType);
/*SPC(10700)*/
_currn->_ATNamePtg=PTGIdent(NameOfType(_currn->_ATType));
/*SPC(4735)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIER_CL_POLY_2(_TPPTYPE_SPECIFIER_CL_POLY_2 _currn)
#else
void _VS2TYPE_SPECIFIER_CL_POLY_2(_currn )
_TPPTYPE_SPECIFIER_CL_POLY_2 _currn;

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
void _VS3TYPE_SPECIFIER_CL_POLY_2(_TPPTYPE_SPECIFIER_CL_POLY_2 _currn,DefTableKeyList* _AS0_const81)
#else
void _VS3TYPE_SPECIFIER_CL_POLY_2(_currn ,_AS0_const81)
_TPPTYPE_SPECIFIER_CL_POLY_2 _currn;
DefTableKeyList* _AS0_const81;

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
(* _AS0_const81)=_AS1_const81;
/*SPC(4659)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_SPECIFIER_CL_POLY_2(_TPPTYPE_SPECIFIER_CL_POLY_2 _currn,int* _AS0IsMethodParameterType,DefTableKeyList* _AS0_const81)
#else
void _VS4TYPE_SPECIFIER_CL_POLY_2(_currn ,_AS0IsMethodParameterType,_AS0_const81)
_TPPTYPE_SPECIFIER_CL_POLY_2 _currn;
DefTableKeyList* _AS0_const81;
int* _AS0IsMethodParameterType;

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

if (AND(AND(AND(NOT(IsPolymorph(_currn->_ATType)), NOT(InIS(abstractK, (* _IG_incl58)))), InIS(abstractK, GetSemKindSet(KeyOfType(_currn->_ATType), NULLIS))), NOT(_AVType_specifier_2_IsTypeBound))) {
message(ERROR, "cannot build monomorph type from abstract class", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(5797)*/
_currn->_desc1->_ATIsConstructor=0;
/*SPC(2414)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,int*,PTGNode*,int*,PTGNode*,DefTableKeyList*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1init_code)),(&( _AS1IsPoly)),(&( _AS1_const101)),(&( _AS1_const83)),(&( _AS1_const82)),(&( _AS1_const81)));
_currn->_AT_const82=_AS1_const82;
/*SPC(4659)*/
_currn->_AT_const83=_AS1_const83;
/*SPC(4659)*/
_AVType_specifier_2__const94=IDENTICAL(_AS1init_code);
/*SPC(4659)*/
_currn->_AT_const101=_AS1_const101;
/*SPC(4659)*/
_AVType_specifier_2_is_empty=0;
/*SPC(6306)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_SPECIFIERS_LST_2(_TPPTYPE_SPECIFIERS_LST_2 _currn)
#else
void _VS3TYPE_SPECIFIERS_LST_2(_currn )
_TPPTYPE_SPECIFIERS_LST_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,DefTableKeyList*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const81)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_SPECIFIERS_LST_2(_TPPTYPE_SPECIFIERS_LST_2 _currn)
#else
void _VS4TYPE_SPECIFIERS_LST_2(_currn )
_TPPTYPE_SPECIFIERS_LST_2 _currn;

#endif
{
DefTableKeyList _AS2_const81;
int _AS2IsMethodParameterType;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AS2IsMethodParameterType=0;
/*SPC(5941)*/
_AVType_specifier_2_IsTypeBound=1;
/*SPC(5784)*/
_AVType_specifier_2_IsConstructor=0;
/*SPC(2456)*/
(*(_CALL_VS_((NODEPTR ,int*,DefTableKeyList*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2IsMethodParameterType)),(&( _AS2_const81)));
_AVType_specifiers_2TypeBounds_post=AppElDefTableKeyList(_AVType_specifiers_2TypeBounds_post, KeyOfType(_currn->_desc2->_ATType));
/*SPC(6980)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_PARAMETER_2(_TPPCLASS_PARAMETER_2 _currn)
#else
void _VS1CLASS_PARAMETER_2(_currn )
_TPPCLASS_PARAMETER_2 _currn;

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

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_PARAMETER_2(_TPPCLASS_PARAMETER_2 _currn)
#else
void _VS2CLASS_PARAMETER_2(_currn )
_TPPCLASS_PARAMETER_2 _currn;

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
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_PARAMETER_2(_TPPCLASS_PARAMETER_2 _currn)
#else
void _VS3CLASS_PARAMETER_2(_currn )
_TPPCLASS_PARAMETER_2 _currn;

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
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_PARAMETER_2(_TPPCLASS_PARAMETER_2 _currn)
#else
void _VS4CLASS_PARAMETER_2(_currn )
_TPPCLASS_PARAMETER_2 _currn;

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
_AVType_specifiers_2TypeBounds_post=NULLDefTableKeyList;
/*SPC(6964)*/
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVClass_parameter_2_ErrorBound=CheckTypeConformance(_currn->_desc1->_ATKey, _AVType_specifiers_2TypeBounds_post, (&( _currn->_AT_pos)), 0);
/*SPC(6966)*/

if (NOT(EQ(_AVClass_parameter_2_ErrorBound, NoKey))) {
message(ERROR, CatStrStr(CatStrStr(NameOfType(GetType(_currn->_desc1->_ATKey, NoType)), " is not structurally conform to its type bound "), NameOfType(GetType(_AVClass_parameter_2_ErrorBound, NoType))), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6976)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1IDENT_DEF_2(_TPPIDENT_DEF_2 _currn)
#else
void _VS1IDENT_DEF_2(_currn )
_TPPIDENT_DEF_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVIdent_def_2_Bind=BindIdn((* _IG_incl2), _currn->_ATSym);
/*SPC(12795)*/
_currn->_ATKey=KeyOf(_AVIdent_def_2_Bind);
/*SPC(12797)*/
UnionSemKindSet(_currn->_ATKey, _currn->_ATSemKindSet);
/*SPC(12105)*/
ResetType(_currn->_ATKey, (* _IG_incl107));
/*SPC(10926)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2IDENT_DEF_2(_TPPIDENT_DEF_2 _currn)
#else
void _VS2IDENT_DEF_2(_currn )
_TPPIDENT_DEF_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVClass_head_2PubAttr_post=
((AND(AND(InIS(attributeK, GetSemKindSet(_currn->_ATKey, NULLIS)), NOT(InIS(sharedK, GetSemKindSet(_currn->_ATKey, NULLIS)))), NOT(InIS(privateK, GetSemKindSet(_currn->_ATKey, NULLIS))))
) ? (AppElDefTableKeyList(_AVClass_head_2PubAttr_post, _currn->_ATKey)
) : (_AVClass_head_2PubAttr_post))
;
/*SPC(5813)*/
ResetSym(_currn->_ATKey, _currn->_ATSym);
/*SPC(4574)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3IDENT_DEF_2(_TPPIDENT_DEF_2 _currn)
#else
void _VS3IDENT_DEF_2(_currn )
_TPPIDENT_DEF_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

if (InIS(featureK, GetSemKindSet(_currn->_ATKey, NULLIS))) {
ResetFeatureOf(_currn->_ATKey, (* _IG_incl66));

} else {
}
;
/*SPC(6647)*/

if (InIS(attributeK, _currn->_ATSemKindSet)) {
CreateReaderWriterMethods(_currn->_ATKey, (* _IG_incl66));

} else {
}
;
/*SPC(5074)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4IDENT_DEF_2(_TPPIDENT_DEF_2 _currn)
#else
void _VS4IDENT_DEF_2(_currn )
_TPPIDENT_DEF_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVIdent_def_2_Cnt=ADD(1, GetCnt(_currn->_ATKey, 0));
/*SPC(12382)*/
ResetConstValue(_currn->_ATKey, (* _IG_incl105));
/*SPC(7147)*/

if (_AVIdent_def_2_IsExceptionOrTypecase) {
ResetUniqueName(_currn->_ATKey, 0);

} else {

if (BindingInEnv(ParentOf((* _IG_incl2)), _currn->_ATSym)) {
ResetUniqueName(_currn->_ATKey, GenerateName(StringTable(_currn->_ATSym)));

} else {
ResetUniqueName(_currn->_ATKey, _currn->_ATSym);
}
;
}
;
/*SPC(1848)*/
ResetCnt(_currn->_ATKey, _AVIdent_def_2_Cnt);
/*SPC(12385)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5IDENT_DEF_2(_TPPIDENT_DEF_2 _currn)
#else
void _VS5IDENT_DEF_2(_currn )
_TPPIDENT_DEF_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATUniqueId=GetUniqueName(_currn->_ATKey, _currn->_ATTERM_1);
/*SPC(1318)*/
_currn->_ATout=PTGcilIdent(StringTable(_currn->_ATUniqueId));
/*SPC(1321)*/
_currn->_ATinit_out=
((OR(OR(InIS(boundK, _currn->_ATSemKindSet), InIS(sharedK, _currn->_ATSemKindSet)), InIS(parameterK, _currn->_ATSemKindSet))
) ? (PTGNULL
) : (
((InIS(attributeK, _currn->_ATSemKindSet)
) ? (PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGcilPushSelf(), PTGcilPushLocal(PTGIdent(StringTable((* _IG_incl104))))), 
((AND(IsMonoValueType(GetType(_currn->_ATKey, NoType)), IsBuiltinArray(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilArrayCopy(GetCLRType(GetType(_currn->_ATKey, NoType)))
) : (PTGNULL))
), PTGcilStoreField(GetCLRFieldRef(_currn->_ATKey)))
) : (PTGNewLineSeq(PTGNewLineSeq(PTGcilDup(), 
((AND(IsMonoValueType(GetType(_currn->_ATKey, NoType)), IsBuiltinArray(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilArrayCopy(GetCLRType(GetType(_currn->_ATKey, NoType)))
) : (PTGNULL))
), PTGcilStoreLocal(_currn->_ATout))))
))
;
/*SPC(1323)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6IDENT_DEF_2(_TPPIDENT_DEF_2 _currn)
#else
void _VS6IDENT_DEF_2(_currn )
_TPPIDENT_DEF_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVIdent_def_2_TotalCnt=GetCnt(_currn->_ATKey, 0);
/*SPC(12389)*/
_AVIdent_def_2_exit_out=
((OR(InIS(inoutK, _currn->_ATSemKindSet), InIS(outK, _currn->_ATSemKindSet))
) ? (
((IsMonoValueType(GetType(_currn->_ATKey, NoType))
) ? (PTGcilStoreValueParam(StringTable(_currn->_ATUniqueId), GetCLRType(GetType(_currn->_ATKey, NoType)))
) : (PTGcilStoreParam(StringTable(_currn->_ATUniqueId))))

) : (PTGNULL))
;
/*SPC(1374)*/
_AVIdent_def_2_entry_out=
((InIS(inoutK, _currn->_ATSemKindSet)
) ? (
((IsMonoValueType(GetType(_currn->_ATKey, NoType))
) ? (PTGcilLoadValueParam(StringTable(_currn->_ATUniqueId), GetCLRType(GetType(_currn->_ATKey, NoType)))
) : (PTGcilLoadParam(StringTable(_currn->_ATUniqueId))))

) : (PTGNULL))
;
/*SPC(1363)*/
_AVIdent_def_2_readwrite_out=
((AND(InIS(attributeK, _currn->_ATSemKindSet), NOT(AND(InIS(privateK, _currn->_ATSemKindSet), (* _IG_incl70))))
) ? (PTGNewLineSeq(
((EQ(GetReaderMethod(_currn->_ATKey, NoKey), NoKey)
) ? (PTGNULL
) : (PTGcilMethod(PTGcilIdent(StringTable(_currn->_ATTERM_1)), PTGNULL, GetCLRType(GetType(_currn->_ATKey, NoType)), 
(((* _IG_incl70)
) ? (PTGNULL
) : (PTGNewLineSeq(
((InIS(sharedK, _currn->_ATSemKindSet)
) ? (PTGcilPushStaticField(GetCLRFieldRef(_currn->_ATKey))
) : (PTGNewLineSeq(PTGcilPushSelf(), PTGcilPushField(GetCLRFieldRef(_currn->_ATKey)))))
, PTGcilReturn())))
, PTGTuple(
((InIS(privateK, _currn->_ATSemKindSet)
) ? (PTGIdent("private ")
) : (PTGIdent("public ")))
, 
(((* _IG_incl70)
) ? (PTGIdent("virtual abstract ")
) : (PTGIdent("virtual ")))
))))
, 
((EQ(GetWriterMethod(_currn->_ATKey, NoKey), NoKey)
) ? (PTGNULL
) : (PTGcilMethod(PTGcilIdent(StringTable(_currn->_ATTERM_1)), PTGSpaceSeq(GetCLRType(GetType(_currn->_ATKey, NoType)), PTGIdent("v")), GetCLRType(NoType), 
(((* _IG_incl70)
) ? (PTGNULL
) : (PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(PTGNewLineSeq(
((NOT(InIS(sharedK, _currn->_ATSemKindSet))
) ? (PTGcilPushSelf()
) : (PTGNULL))
, PTGcilPushArgument(PTGIdent("v"))), 
((AND(IsMonoValueType(GetType(_currn->_ATKey, NoType)), IsBuiltinArray(GetType(_currn->_ATKey, NoType)))
) ? (PTGcilArrayCopy(GetCLRType(GetType(_currn->_ATKey, NoType)))
) : (PTGNULL))
), 
((InIS(sharedK, _currn->_ATSemKindSet)
) ? (PTGcilStoreStaticField(GetCLRFieldRef(_currn->_ATKey))
) : (PTGcilStoreField(GetCLRFieldRef(_currn->_ATKey))))
), PTGcilReturn())))
, PTGTuple(
((InIS(privateK, _currn->_ATSemKindSet)
) ? (PTGIdent("private ")
) : (PTGIdent("public ")))
, 
(((* _IG_incl70)
) ? (PTGIdent("virtual abstract ")
) : (PTGIdent("virtual ")))
))))
)
) : (PTGNULL))
;
/*SPC(1386)*/
_AVIdent_def_2_shared_init_out=
((AND(InIS(attributeK, _currn->_ATSemKindSet), InIS(sharedK, _currn->_ATSemKindSet))
) ? (PTGNewLineSeq(PTGcilDup(), PTGcilStoreStaticField(GetCLRFieldRef(_currn->_ATKey)))
) : (PTGNULL))
;
/*SPC(1352)*/

if (GT(_AVIdent_def_2_TotalCnt, 1)) {
message(ERROR, CatStrInd("identifier is multiply defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(4248)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BOUND_IDENTIFIER_2(_TPPBOUND_IDENTIFIER_2 _currn)
#else
void _VS1BOUND_IDENTIFIER_2(_currn )
_TPPBOUND_IDENTIFIER_2 _currn;

#endif
{
STPtr* _IL_incl107;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_currn->_ATType=GetType(GetPreDefKey(MakeName("INT"), (* _IG_incl23), (&( _currn->_AT_pos))), NoType);
/*SPC(10902)*/
_currn->_desc1->_ATSemKindSet=AddElIS(featureK, AddElIS(readonlyK, AddElIS(attributeK, SingleIS(boundK))));
/*SPC(3696)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVBound_identifier_2_Key=_currn->_desc1->_ATKey;
/*SPC(5974)*/
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BOUND_IDENTIFIER_2(_TPPBOUND_IDENTIFIER_2 _currn)
#else
void _VS2BOUND_IDENTIFIER_2(_currn )
_TPPBOUND_IDENTIFIER_2 _currn;

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
void _VS3BOUND_IDENTIFIER_2(_TPPBOUND_IDENTIFIER_2 _currn)
#else
void _VS3BOUND_IDENTIFIER_2(_currn )
_TPPBOUND_IDENTIFIER_2 _currn;

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
void _VS4BOUND_IDENTIFIER_2(_TPPBOUND_IDENTIFIER_2 _currn)
#else
void _VS4BOUND_IDENTIFIER_2(_currn )
_TPPBOUND_IDENTIFIER_2 _currn;

#endif
{
STPtr* _IL_incl107;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
_AVIdent_def_2_IsExceptionOrTypecase=0;
/*SPC(1840)*/
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5BOUND_IDENTIFIER_2(_TPPBOUND_IDENTIFIER_2 _currn)
#else
void _VS5BOUND_IDENTIFIER_2(_currn )
_TPPBOUND_IDENTIFIER_2 _currn;

#endif
{
STPtr* _IL_incl107;

_VisitVarDecl()
_VisitEntry();
_IL_incl107=_IG_incl107;_IG_incl107= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVBound_identifier_2_out=PTGNewLineSeq(PTGcilField(PTGSpaceSeq(GetCLRType(GetType(GetPreDefKey(MakeName("INT"), (* _IG_incl23), (&( _currn->_AT_pos))), NoType)), _currn->_desc1->_ATout)), _AVIdent_def_2_readwrite_out);
/*SPC(522)*/
_IG_incl107=_IL_incl107;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_BOUNDS_EMPTY_2(_TPPCLASS_BOUNDS_EMPTY_2 _currn)
#else
void _VS1CLASS_BOUNDS_EMPTY_2(_currn )
_TPPCLASS_BOUNDS_EMPTY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVClass_bounds_2_is_array_class=0;
/*SPC(3546)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_BOUNDS_EMPTY_2(_TPPCLASS_BOUNDS_EMPTY_2 _currn)
#else
void _VS2CLASS_BOUNDS_EMPTY_2(_currn )
_TPPCLASS_BOUNDS_EMPTY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVClass_bounds_2_BoundKeyList=NULLDefTableKeyList;
/*SPC(5984)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6CLASS_BOUNDS_EMPTY_2(_TPPCLASS_BOUNDS_EMPTY_2 _currn)
#else
void _VS6CLASS_BOUNDS_EMPTY_2(_currn )
_TPPCLASS_BOUNDS_EMPTY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVClass_bounds_2_out=PTGNULL;
/*SPC(518)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_BOUNDS_LST_2(_TPPCLASS_BOUNDS_LST_2 _currn)
#else
void _VS1CLASS_BOUNDS_LST_2(_currn )
_TPPCLASS_BOUNDS_LST_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVClass_bounds_2_is_array_class=1;
/*SPC(3558)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_BOUNDS_LST_2(_TPPCLASS_BOUNDS_LST_2 _currn)
#else
void _VS2CLASS_BOUNDS_LST_2(_currn )
_TPPCLASS_BOUNDS_LST_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVClass_bounds_2_BoundKeyList=
((EQ(_AVBound_identifier_2_Key, NoKey)
) ? (_AVClass_bounds_2_BoundKeyList
) : (AppElDefTableKeyList(_AVClass_bounds_2_BoundKeyList, _AVBound_identifier_2_Key)))
;
/*SPC(5978)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_BOUNDS_LST_2(_TPPCLASS_BOUNDS_LST_2 _currn)
#else
void _VS3CLASS_BOUNDS_LST_2(_currn )
_TPPCLASS_BOUNDS_LST_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_BOUNDS_LST_2(_TPPCLASS_BOUNDS_LST_2 _currn)
#else
void _VS4CLASS_BOUNDS_LST_2(_currn )
_TPPCLASS_BOUNDS_LST_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5CLASS_BOUNDS_LST_2(_TPPCLASS_BOUNDS_LST_2 _currn)
#else
void _VS5CLASS_BOUNDS_LST_2(_currn )
_TPPCLASS_BOUNDS_LST_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6CLASS_BOUNDS_LST_2(_TPPCLASS_BOUNDS_LST_2 _currn)
#else
void _VS6CLASS_BOUNDS_LST_2(_currn )
_TPPCLASS_BOUNDS_LST_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVClass_bounds_2_out=PTGNewLineSeq(_AVClass_bounds_2_out, _AVBound_identifier_2_out);
/*SPC(514)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ID_DEF_POLY_2(_TPPCLASS_ID_DEF_POLY_2 _currn)
#else
void _VS1CLASS_ID_DEF_POLY_2(_currn )
_TPPCLASS_ID_DEF_POLY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVClass_id_def_2_is_poly_class=1;
/*SPC(3554)*/
_currn->_ATSym=MakeName(CatStrInd("$", _currn->_ATTERM_1));
/*SPC(4652)*/
_AVClass_id_def_2_Bind=BindIdn((* _IG_incl23), _currn->_ATSym);
/*SPC(12699)*/
_currn->_ATKey=KeyOf(_AVClass_id_def_2_Bind);
/*SPC(12701)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_ID_DEF_POLY_2(_TPPCLASS_ID_DEF_POLY_2 _currn)
#else
void _VS2CLASS_ID_DEF_POLY_2(_currn )
_TPPCLASS_ID_DEF_POLY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
ResetType(_currn->_ATKey, NewType(_currn->_ATKey, (* _IG_incl58), _currn->_ATSym));
/*SPC(10674)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_ID_DEF_POLY_2(_TPPCLASS_ID_DEF_POLY_2 _currn)
#else
void _VS3CLASS_ID_DEF_POLY_2(_currn )
_TPPCLASS_ID_DEF_POLY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
ResetSym(_currn->_ATKey, _currn->_ATSym);
/*SPC(4570)*/
ResetPolyType(_currn->_ATKey, GetType(_currn->_ATKey, NoType));
ResetMonoType(_currn->_ATKey, GetType(KeyInEnv((* _IG_incl23), _currn->_ATTERM_1), NoType));
;
/*SPC(2649)*/
_currn->_ATout=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(904)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ID_DEF_2(_TPPCLASS_ID_DEF_2 _currn)
#else
void _VS1CLASS_ID_DEF_2(_currn )
_TPPCLASS_ID_DEF_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVClass_id_def_2_is_poly_class=0;
/*SPC(3550)*/
_AVClass_id_def_2_Bind=BindIdn((* _IG_incl23), _currn->_ATSym);
/*SPC(12699)*/
_currn->_ATKey=KeyOf(_AVClass_id_def_2_Bind);
/*SPC(12701)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_ID_DEF_2(_TPPCLASS_ID_DEF_2 _currn)
#else
void _VS2CLASS_ID_DEF_2(_currn )
_TPPCLASS_ID_DEF_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
ResetType(_currn->_ATKey, NewType(_currn->_ATKey, (* _IG_incl58), _currn->_ATSym));
/*SPC(10674)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_ID_DEF_2(_TPPCLASS_ID_DEF_2 _currn)
#else
void _VS3CLASS_ID_DEF_2(_currn )
_TPPCLASS_ID_DEF_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
ResetSym(_currn->_ATKey, _currn->_ATSym);
/*SPC(4570)*/
ResetMonoType(_currn->_ATKey, GetType(_currn->_ATKey, NoType));
ResetPolyType(_currn->_ATKey, GetType(KeyInEnv((* _IG_incl23), MakeName(CatStrInd("$", _currn->_ATTERM_1))), NoType));
;
/*SPC(2638)*/
_currn->_ATout=PTGcilIdent(StringTable(_currn->_ATSym));
/*SPC(900)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_OPT_CL_2(_TPPBUILTIN_OPT_CL_2 _currn)
#else
void _VS1BUILTIN_OPT_CL_2(_currn )
_TPPBUILTIN_OPT_CL_2 _currn;

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
_AVBuiltin_option_2_is_builtin_array=1;
/*SPC(3580)*/
_AVBuiltin_option_2_is_builtin=1;
/*SPC(3571)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BUILTIN_OPT_CL_2(_TPPBUILTIN_OPT_CL_2 _currn)
#else
void _VS2BUILTIN_OPT_CL_2(_currn )
_TPPBUILTIN_OPT_CL_2 _currn;

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

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BUILTIN_OPT_CL_2(_TPPBUILTIN_OPT_CL_2 _currn)
#else
void _VS3BUILTIN_OPT_CL_2(_currn )
_TPPBUILTIN_OPT_CL_2 _currn;

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
void _VS4BUILTIN_OPT_CL_2(_TPPBUILTIN_OPT_CL_2 _currn)
#else
void _VS4BUILTIN_OPT_CL_2(_currn )
_TPPBUILTIN_OPT_CL_2 _currn;

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
ResetCLRNative((* _IG_incl66), GetNativeArrayName(GetElementType((* _IG_incl66), NoType), LengthDefTableKeyList(GetBoundKeys((* _IG_incl66), NULLDefTableKeyList))));
/*SPC(154)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5BUILTIN_OPT_CL_2(_TPPBUILTIN_OPT_CL_2 _currn)
#else
void _VS5BUILTIN_OPT_CL_2(_currn )
_TPPBUILTIN_OPT_CL_2 _currn;

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
_currn->_ATout=
(((* _IG_incl70)
) ? (PTGNULL
) : (PTGcilBuiltinValue(GetCLRNative((* _IG_incl66), PTGNULL), GetCLRType(GetType((* _IG_incl66), NoType)))))
;
/*SPC(718)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_OPT_ID_2(_TPPBUILTIN_OPT_ID_2 _currn)
#else
void _VS1BUILTIN_OPT_ID_2(_currn )
_TPPBUILTIN_OPT_ID_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVBuiltin_option_2_is_builtin_array=0;
/*SPC(3572)*/
_AVBuiltin_option_2_is_builtin=1;
/*SPC(3571)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4BUILTIN_OPT_ID_2(_TPPBUILTIN_OPT_ID_2 _currn)
#else
void _VS4BUILTIN_OPT_ID_2(_currn )
_TPPBUILTIN_OPT_ID_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
ResetCLRNative((* _IG_incl66), PTGIdent(StringTable(_currn->_ATTERM_1)));
/*SPC(149)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5BUILTIN_OPT_ID_2(_TPPBUILTIN_OPT_ID_2 _currn)
#else
void _VS5BUILTIN_OPT_ID_2(_currn )
_TPPBUILTIN_OPT_ID_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATout=
(((* _IG_incl70)
) ? (PTGNULL
) : (PTGcilBuiltinValue(PTGIdent(StringTable(_currn->_ATTERM_1)), GetCLRType(GetType((* _IG_incl66), NoType)))))
;
/*SPC(709)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_OPT_2(_TPPBUILTIN_OPT_2 _currn)
#else
void _VS1BUILTIN_OPT_2(_currn )
_TPPBUILTIN_OPT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVBuiltin_option_2_is_builtin_array=0;
/*SPC(3572)*/
_AVBuiltin_option_2_is_builtin=1;
/*SPC(3571)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5BUILTIN_OPT_2(_TPPBUILTIN_OPT_2 _currn)
#else
void _VS5BUILTIN_OPT_2(_currn )
_TPPBUILTIN_OPT_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATout=PTGNULL;
/*SPC(705)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_OPT_EMPTY_2(_TPPBUILTIN_OPT_EMPTY_2 _currn)
#else
void _VS1BUILTIN_OPT_EMPTY_2(_currn )
_TPPBUILTIN_OPT_EMPTY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVBuiltin_option_2_is_builtin_array=0;
/*SPC(3572)*/
_AVBuiltin_option_2_is_builtin=0;
/*SPC(3576)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5BUILTIN_OPT_EMPTY_2(_TPPBUILTIN_OPT_EMPTY_2 _currn)
#else
void _VS5BUILTIN_OPT_EMPTY_2(_currn )
_TPPBUILTIN_OPT_EMPTY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATout=PTGNULL;
/*SPC(705)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_BODY_2(_TPPCLASS_BODY_2 _currn)
#else
void _VS1CLASS_BODY_2(_currn )
_TPPCLASS_BODY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATis_builtin_array=_AVBuiltin_option_2_is_builtin_array;
/*SPC(3567)*/
_currn->_ATis_builtin=_AVBuiltin_option_2_is_builtin;
/*SPC(3566)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_BODY_2(_TPPCLASS_BODY_2 _currn)
#else
void _VS2CLASS_BODY_2(_currn )
_TPPCLASS_BODY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_BODY_2(_TPPCLASS_BODY_2 _currn)
#else
void _VS3CLASS_BODY_2(_currn )
_TPPCLASS_BODY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVClass_body_2__const110=_currn->_desc2->_AT_const110;
/*SPC(1496)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_BODY_2(_TPPCLASS_BODY_2 _currn)
#else
void _VS4CLASS_BODY_2(_currn )
_TPPCLASS_BODY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5CLASS_BODY_2(_TPPCLASS_BODY_2 _currn)
#else
void _VS5CLASS_BODY_2(_currn )
_TPPCLASS_BODY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6CLASS_BODY_2(_TPPCLASS_BODY_2 _currn)
#else
void _VS6CLASS_BODY_2(_currn )
_TPPCLASS_BODY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVClass_body_2__const112=_AVFeature_declarations_2__const112;
/*SPC(1496)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7CLASS_BODY_2(_TPPCLASS_BODY_2 _currn)
#else
void _VS7CLASS_BODY_2(_currn )
_TPPCLASS_BODY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVClass_body_2__const114=_AVFeature_declarations_2__const114;
/*SPC(1496)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS8CLASS_BODY_2(_TPPCLASS_BODY_2 _currn)
#else
void _VS8CLASS_BODY_2(_currn )
_TPPCLASS_BODY_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVClass_body_2__const0=_AVFeature_declarations_2__const0;
/*SPC(1496)*/
_AVClass_body_2__const111=_AVFeature_declarations_2__const111;
/*SPC(1496)*/
_AVBuiltin_option_2MethCallsLoc_post=_currn->_desc2->_ATMethCallsLoc_post;
/*SPC(0)*/
_AVBuiltin_option_2AttrAccLoc_post=_currn->_desc2->_ATAttrAccLoc_post;
/*SPC(0)*/
_AVClass_body_2_MainGetArguments=_AVFeature_declarations_2__const106;
/*SPC(6551)*/
_AVClass_body_2_MainReturnsInt=_AVFeature_declarations_2__const107;
/*SPC(6548)*/
_AVClass_body_2_ForeignLabel=NewUniqueLabel();
/*SPC(1498)*/
_AVClass_body_2_EndLabel=NewUniqueLabel();
/*SPC(1497)*/
_AVClass_body_2_out=PTGNewLineSeq(_currn->_desc1->_ATout, PTGNewLineSeq(
(((* _IG_incl67)
) ? (PTGcilMainWrapper(PTGcilIdent(StringTable(GetMainClassName())), 
((_AVClass_body_2_MainReturnsInt
) ? (PTGIdent("int32")
) : (PTGIdent("void")))
, 
((_AVClass_body_2_MainReturnsInt
) ? (PTGIdent("valuetype 'INT'")
) : (PTGIdent("void")))
, 
((_AVClass_body_2_MainReturnsInt
) ? (PTGcilSatk2CLR(PTGIdent("valuetype 'INT'"), PTGIdent("int32"))
) : (PTGNULL))
, 
((_AVClass_body_2_MainGetArguments
) ? (PTGIdent("string[]")
) : (PTGNULL))
, 
((_AVClass_body_2_MainGetArguments
) ? (PTGTuple(PTGIdent("class "), PTGcilIdent("ARRAY[*](STRING[*])"))
) : (PTGNULL))
, 
((_AVClass_body_2_MainGetArguments
) ? (PTGcilConvertMainArguments(StringTable(GetOutputFile()))
) : (PTGNULL))
)
) : (PTGNULL))
, _AVFeature_declarations_2_out));
/*SPC(1499)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_HEAD_2(_TPPCLASS_HEAD_2 _currn)
#else
void _VS1CLASS_HEAD_2(_currn )
_TPPCLASS_HEAD_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_AT_const109=_AVClass_id_def_2_is_poly_class;
/*SPC(876)*/
_currn->_AT_const116=_currn->_desc1->_ATKey;
/*SPC(876)*/
_currn->_ATis_array_class=_AVClass_bounds_2_is_array_class;
/*SPC(3562)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_HEAD_2(_TPPCLASS_HEAD_2 _currn)
#else
void _VS2CLASS_HEAD_2(_currn )
_TPPCLASS_HEAD_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_HEAD_2(_TPPCLASS_HEAD_2 _currn)
#else
void _VS3CLASS_HEAD_2(_currn )
_TPPCLASS_HEAD_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_HEAD_2(_TPPCLASS_HEAD_2 _currn)
#else
void _VS4CLASS_HEAD_2(_currn )
_TPPCLASS_HEAD_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVClass_head_2__const115=_AVClass_bounds_2_BoundKeyList;
/*SPC(876)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5CLASS_HEAD_2(_TPPCLASS_HEAD_2 _currn)
#else
void _VS5CLASS_HEAD_2(_currn )
_TPPCLASS_HEAD_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6CLASS_HEAD_2(_TPPCLASS_HEAD_2 _currn)
#else
void _VS6CLASS_HEAD_2(_currn )
_TPPCLASS_HEAD_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7CLASS_HEAD_2(_TPPCLASS_HEAD_2 _currn)
#else
void _VS7CLASS_HEAD_2(_currn )
_TPPCLASS_HEAD_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS8CLASS_HEAD_2(_TPPCLASS_HEAD_2 _currn)
#else
void _VS8CLASS_HEAD_2(_currn )
_TPPCLASS_HEAD_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS9CLASS_HEAD_2(_TPPCLASS_HEAD_2 _currn)
#else
void _VS9CLASS_HEAD_2(_currn )
_TPPCLASS_HEAD_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVClass_head_2__const108=_AVClass_bounds_2_out;
/*SPC(876)*/
_AVClass_head_2__const113=_currn->_desc1->_ATSym;
/*SPC(876)*/
_AVClass_head_2_out=PTGcilClassHead(PTGcilClassAttributes(
(((* _IG_incl70)
) ? (PTGIdent("interface ")
) : (PTGIdent("sealed ")))
, 
((InIS(abstractK, (* _IG_incl58))
) ? (PTGIdent("abstract ")
) : (PTGNULL))
), _currn->_desc1->_ATout, 
(((* _IG_incl70)
) ? (PTGNULL
) : (PTGcilExtends(
((InIS(referenceK, (* _IG_incl58))
) ? (
((IsConform(GetType((* _IG_incl66), NoType), GetType(GetPreDefKey(MakeName("$EXCEPTION"), (* _IG_incl23), (&( _currn->_AT_pos))), NoType))
) ? (PTGIdent("[mscorlib]System.Exception")
) : (PTGIdent("[mscorlib]System.Object")))

) : (PTGIdent("[mscorlib]System.ValueType")))
)))
, PTGcilImplements(GetImplementsPattern(GetMustConformTo((* _IG_incl66), NULLDefTableKeyList))));
/*SPC(877)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ATTRIBUTE_VA_2(_TPPCLASS_ATTRIBUTE_VA_2 _currn)
#else
void _VS1CLASS_ATTRIBUTE_VA_2(_currn )
_TPPCLASS_ATTRIBUTE_VA_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATMethCallsLoc_post=_AVBuiltin_option_2MethCallsLoc_post;
/*SPC(0)*/
_currn->_ATAttrAccLoc_post=_AVBuiltin_option_2AttrAccLoc_post;
/*SPC(0)*/
_currn->_ATPubAttr_post=_AVClass_head_2PubAttr_post;
/*SPC(0)*/
_currn->_ATKindSet=SingleIS(valueK);
/*SPC(3530)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ATTRIBUTE_EX_2(_TPPCLASS_ATTRIBUTE_EX_2 _currn)
#else
void _VS1CLASS_ATTRIBUTE_EX_2(_currn )
_TPPCLASS_ATTRIBUTE_EX_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATMethCallsLoc_post=_AVBuiltin_option_2MethCallsLoc_post;
/*SPC(0)*/
_currn->_ATAttrAccLoc_post=_AVBuiltin_option_2AttrAccLoc_post;
/*SPC(0)*/
_currn->_ATPubAttr_post=_AVClass_head_2PubAttr_post;
/*SPC(0)*/
_currn->_ATKindSet=SingleIS(externalK);
/*SPC(3522)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ATTRIBUTE_2(_TPPCLASS_ATTRIBUTE_2 _currn)
#else
void _VS1CLASS_ATTRIBUTE_2(_currn )
_TPPCLASS_ATTRIBUTE_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATMethCallsLoc_post=_AVBuiltin_option_2MethCallsLoc_post;
/*SPC(0)*/
_currn->_ATAttrAccLoc_post=_AVBuiltin_option_2AttrAccLoc_post;
/*SPC(0)*/
_currn->_ATPubAttr_post=_AVClass_head_2PubAttr_post;
/*SPC(0)*/
_currn->_ATKindSet=SingleIS(referenceK);
/*SPC(3538)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ATTRIBUTE_ABVA_2(_TPPCLASS_ATTRIBUTE_ABVA_2 _currn)
#else
void _VS1CLASS_ATTRIBUTE_ABVA_2(_currn )
_TPPCLASS_ATTRIBUTE_ABVA_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATMethCallsLoc_post=_AVBuiltin_option_2MethCallsLoc_post;
/*SPC(0)*/
_currn->_ATAttrAccLoc_post=_AVBuiltin_option_2AttrAccLoc_post;
/*SPC(0)*/
_currn->_ATPubAttr_post=_AVClass_head_2PubAttr_post;
/*SPC(0)*/
_currn->_ATKindSet=AddElIS(abstractK, SingleIS(valueK));
/*SPC(3534)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ATTRIBUTE_AB_2(_TPPCLASS_ATTRIBUTE_AB_2 _currn)
#else
void _VS1CLASS_ATTRIBUTE_AB_2(_currn )
_TPPCLASS_ATTRIBUTE_AB_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATMethCallsLoc_post=_AVBuiltin_option_2MethCallsLoc_post;
/*SPC(0)*/
_currn->_ATAttrAccLoc_post=_AVBuiltin_option_2AttrAccLoc_post;
/*SPC(0)*/
_currn->_ATPubAttr_post=_AVClass_head_2PubAttr_post;
/*SPC(0)*/
_currn->_ATKindSet=AddElIS(referenceK, SingleIS(abstractK));
/*SPC(3526)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_DECLARATION_2(_TPPCLASS_DECLARATION_2 _currn)
#else
void _VS1CLASS_DECLARATION_2(_currn )
_TPPCLASS_DECLARATION_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVBuiltin_option_2MethCallsLoc_post=NULLDefTableKeyList;
/*SPC(6820)*/
_AVBuiltin_option_2AttrAccLoc_post=NULLDefTableKeyList;
/*SPC(6769)*/
_AVClass_head_2PubAttr_post=NULLDefTableKeyList;
/*SPC(5808)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_DECLARATION_2(_TPPCLASS_DECLARATION_2 _currn)
#else
void _VS2CLASS_DECLARATION_2(_currn )
_TPPCLASS_DECLARATION_2 _currn;

#endif
{
DefTableKey* _IL_incl66;
IntSet* _IL_incl58;

_VisitVarDecl()
_VisitEntry();
_IL_incl66=_IG_incl66;_IG_incl66= &(_currn->_ATKey);
_IL_incl58=_IG_incl58;_IG_incl58= &(_currn->_ATSemKindSet);
_currn->_ATKey=_currn->_desc2->_AT_const116;
/*SPC(4670)*/
_currn->_ATSemKindSet=UniteIS(_currn->_desc1->_ATKindSet, UniteIS(
((_currn->_desc2->_ATis_array_class
) ? (SingleIS(arrayclassK)
) : (NULLIS))
, UniteIS(
((_currn->_desc2->_AT_const109
) ? (SingleIS(polymorphK)
) : (SingleIS(monomorphK)))
, UniteIS(
((_currn->_desc3->_ATis_builtin_array
) ? (SingleIS(builtinarrayK)
) : (NULLIS))
, UniteIS(
((_currn->_desc3->_ATis_builtin
) ? (SingleIS(builtinK)
) : (NULLIS))
, 
((OR(EQ(_currn->_ATKey, GetPreDefKey(MakeName("OB"), (* _IG_incl23), (&( _currn->_AT_pos)))), EQ(_currn->_ATKey, GetPreDefKey(MakeName("$OB"), (* _IG_incl23), (&( _currn->_AT_pos)))))
) ? (SingleIS(referenceK)
) : (NULLIS))
)))));
/*SPC(3584)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl66=_IL_incl66;
_IG_incl58=_IL_incl58;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_DECLARATION_2(_TPPCLASS_DECLARATION_2 _currn)
#else
void _VS3CLASS_DECLARATION_2(_currn )
_TPPCLASS_DECLARATION_2 _currn;

#endif
{
DefTableKey* _IL_incl66;
IntSet* _IL_incl58;

_VisitVarDecl()
_VisitEntry();
_IL_incl66=_IG_incl66;_IG_incl66= &(_currn->_ATKey);
_IL_incl58=_IG_incl58;_IG_incl58= &(_currn->_ATSemKindSet);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl66=_IL_incl66;
_IG_incl58=_IL_incl58;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_DECLARATION_2(_TPPCLASS_DECLARATION_2 _currn)
#else
void _VS4CLASS_DECLARATION_2(_currn )
_TPPCLASS_DECLARATION_2 _currn;

#endif
{
DefTableKey* _IL_incl66;
IntSet* _IL_incl58;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl66=_IG_incl66;_IG_incl66= &(_currn->_ATKey);
_IL_incl58=_IG_incl58;_IG_incl58= &(_currn->_ATSemKindSet);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
UnionSemKindSet(_currn->_ATKey, _currn->_ATSemKindSet);
/*SPC(12105)*/
ResetBoundKeys(_currn->_ATKey, _AVClass_head_2__const115);
/*SPC(5988)*/
_IG_incl66=_IL_incl66;
_IG_incl58=_IL_incl58;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5CLASS_DECLARATION_2(_TPPCLASS_DECLARATION_2 _currn)
#else
void _VS5CLASS_DECLARATION_2(_currn )
_TPPCLASS_DECLARATION_2 _currn;

#endif
{
DefTableKey* _IL_incl66;
IntSet* _IL_incl58;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl66=_IG_incl66;_IG_incl66= &(_currn->_ATKey);
_IL_incl58=_IG_incl58;_IG_incl58= &(_currn->_ATSemKindSet);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_AVClass_head_2PubAttr_post=_currn->_desc1->_ATPubAttr_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
ResetSemScope(_AVClass_declaration_2_SemScopeKey, _currn->_ATSemEnv);
/*SPC(12857)*/
_AVClass_declaration_2_Likes=
((EQ(_currn->_ATKey, KeyOfType(GetPolyType(_currn->_ATKey, NoType)))
) ? (NULLDefTableKeyList
) : (AppDefTableKeyList(_AVClass_body_2__const110, 
((OR(OR(OR(EQ(_currn->_ATKey, GetPreDefKey(MakeName("OB"), (* _IG_incl23), (&( _currn->_AT_pos)))), EQ(_currn->_ATKey, GetPreDefKey(MakeName("REFERENCE"), (* _IG_incl23), (&( _currn->_AT_pos))))), EQ(_currn->_ATKey, GetPreDefKey(MakeName("VALUE"), (* _IG_incl23), (&( _currn->_AT_pos))))), InIS(externalK, _currn->_ATSemKindSet))
) ? (NULLDefTableKeyList
) : (
((InIS(valueK, _currn->_ATSemKindSet)
) ? (SingleDefTableKeyList(GetPreDefKey(MakeName("VALUE"), (* _IG_incl23), (&( _currn->_AT_pos))))
) : (SingleDefTableKeyList(GetPreDefKey(MakeName("REFERENCE"), (* _IG_incl23), (&( _currn->_AT_pos))))))
))
)))
;
/*SPC(7282)*/
ResetPublicAttrList(_currn->_ATKey, _AVClass_head_2PubAttr_post);
/*SPC(5809)*/
ResetIsLike(_currn->_ATKey, _AVClass_declaration_2_Likes);
/*SPC(7306)*/
_IG_incl66=_IL_incl66;
_IG_incl58=_IL_incl58;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6CLASS_DECLARATION_2(_TPPCLASS_DECLARATION_2 _currn)
#else
void _VS6CLASS_DECLARATION_2(_currn )
_TPPCLASS_DECLARATION_2 _currn;

#endif
{
DefTableKey* _IL_incl66;
IntSet* _IL_incl58;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl66=_IG_incl66;_IG_incl66= &(_currn->_ATKey);
_IL_incl58=_IG_incl58;_IG_incl58= &(_currn->_ATSemKindSet);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
GenerateMustConformTo(_currn->_ATKey, GetPreDefKey(MakeName("$OB"), (* _IG_incl23), (&( _currn->_AT_pos))), (&( _currn->_AT_pos)));
/*SPC(7308)*/
_IG_incl66=_IL_incl66;
_IG_incl58=_IL_incl58;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7CLASS_DECLARATION_2(_TPPCLASS_DECLARATION_2 _currn)
#else
void _VS7CLASS_DECLARATION_2(_currn )
_TPPCLASS_DECLARATION_2 _currn;

#endif
{
DefTableKey* _IL_incl66;
IntSet* _IL_incl58;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl66=_IG_incl66;_IG_incl66= &(_currn->_ATKey);
_IL_incl58=_IG_incl58;_IG_incl58= &(_currn->_ATSemKindSet);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

if (EQ(GetTDGReady(_currn->_ATKey, NOTSTARTED), NOTSTARTED)) {
MakeTDG(_currn->_ATKey, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(7312)*/
_IG_incl66=_IL_incl66;
_IG_incl58=_IL_incl58;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS8CLASS_DECLARATION_2(_TPPCLASS_DECLARATION_2 _currn)
#else
void _VS8CLASS_DECLARATION_2(_currn )
_TPPCLASS_DECLARATION_2 _currn;

#endif
{
DefTableKey* _IL_incl66;
IntSet* _IL_incl58;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl66=_IG_incl66;_IG_incl66= &(_currn->_ATKey);
_IL_incl58=_IG_incl58;_IG_incl58= &(_currn->_ATSemKindSet);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_AVClass_declaration_2_NotLike=CheckTypeConformance(_currn->_ATKey, GetMustConformTo(_currn->_ATKey, NULLDefTableKeyList), (&( _currn->_AT_pos)), 1);
/*SPC(11253)*/

if (AND(NOT(InIS(abstractK, _currn->_ATSemKindSet)), NOT(EQ(_AVClass_declaration_2_NotLike, NoKey)))) {
message(ERROR, CatStrStr(CatStrStr(CatStrStr("type ", NameOfType(GetType(_currn->_ATKey, NoType))), " is not conform to type "), NameOfType(GetType(_AVClass_declaration_2_NotLike, NoType))), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(11268)*/
_IG_incl66=_IL_incl66;
_IG_incl58=_IL_incl58;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS9CLASS_DECLARATION_2(_TPPCLASS_DECLARATION_2 _currn)
#else
void _VS9CLASS_DECLARATION_2(_currn )
_TPPCLASS_DECLARATION_2 _currn;

#endif
{
DefTableKey* _IL_incl66;
IntSet* _IL_incl58;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl66=_IG_incl66;_IG_incl66= &(_currn->_ATKey);
_IL_incl58=_IG_incl58;_IG_incl58= &(_currn->_ATSemKindSet);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);
_AVBuiltin_option_2MethCallsLoc_post=_currn->_desc1->_ATMethCallsLoc_post;
/*SPC(0)*/
_AVBuiltin_option_2AttrAccLoc_post=_currn->_desc1->_ATAttrAccLoc_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR )) (VS8MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

if (EQ(GetOvrReady(_currn->_ATKey, NOTSTARTED), NOTSTARTED)) {
TransitiveClosureOverrides(_currn->_ATKey, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(11270)*/
_AVClass_declaration_2_HasInitMethod=_AVClass_body_2__const112;
/*SPC(6427)*/
ResetHasInitMethod(_currn->_ATKey, _AVClass_declaration_2_HasInitMethod);
/*SPC(6429)*/
_IG_incl66=_IL_incl66;
_IG_incl58=_IL_incl58;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS10CLASS_DECLARATION_2(_TPPCLASS_DECLARATION_2 _currn,PTGNode* _AS0_const0)
#else
void _VS10CLASS_DECLARATION_2(_currn ,_AS0_const0)
_TPPCLASS_DECLARATION_2 _currn;
PTGNode* _AS0_const0;

#endif
{
int* _IL_incl81;
int* _IL_incl70;
int* _IL_incl67;
DefTableKey* _IL_incl66;
IntSet* _IL_incl58;
Environment* _IL_incl2;

_VisitVarDecl()
_VisitEntry();
_IL_incl81=_IG_incl81;_IG_incl81= &(_currn->_ATHasParamlessInitMethod);
_IL_incl70=_IG_incl70;_IG_incl70= &(_currn->_ATis_polymorph);
_IL_incl67=_IG_incl67;_IG_incl67= &(_currn->_ATIsMainClass);
_IL_incl66=_IG_incl66;_IG_incl66= &(_currn->_ATKey);
_IL_incl58=_IG_incl58;_IG_incl58= &(_currn->_ATSemKindSet);
_IL_incl2=_IG_incl2;_IG_incl2= &(_currn->_ATSemEnv);

if (AND(_currn->_desc2->_ATis_array_class, EQ(GetAgetKey(_currn->_ATKey, NoKey), NoKey))) {
message(WARNING, "array class should define an appropriate aget method", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6082)*/

if (AND(_currn->_desc2->_ATis_array_class, EQ(GetAsetKey(_currn->_ATKey, NoKey), NoKey))) {
message(WARNING, "array class should define an appropriate aset method", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6087)*/
_currn->_ATis_polymorph=IsPolymorph(GetType(_currn->_ATKey, NoType));
/*SPC(3314)*/
(*(_CALL_VS_((NODEPTR )) (VS9MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATIsMainClass=EQ(_AVClass_head_2__const113, GetMainClassName());
/*SPC(6497)*/

if (AND(_currn->_ATIsMainClass, OR(InIS(abstractK, _currn->_ATSemKindSet), InIS(externalK, _currn->_ATSemKindSet)))) {
message(ERROR, "main class must be concrete", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6502)*/
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_currn->_ATHasParamlessInitMethod=_AVClass_body_2__const114;
/*SPC(1193)*/
(*(_CALL_VS_((NODEPTR )) (VS8MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

if (AND(_currn->_ATIsMainClass, GT(_AVClass_body_2__const111, 1))) {
message(ERROR, "main method must not be overloaded", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6565)*/

if (AND(_currn->_ATIsMainClass, EQ(_AVClass_body_2__const111, 0))) {
message(ERROR, "no main method in main class found", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6560)*/
(* _AS0_const0)=_AVClass_body_2__const0;
/*SPC(864)*/
_AVClass_declaration_2_bridge_out=
((NOT(_currn->_ATis_polymorph)
) ? (GenerateBridgeMethods(_currn->_ATKey, PTGNULL)
) : (PTGNULL))
;
/*SPC(697)*/
_AVClass_declaration_2_out=
((AND(InIS(abstractK, _currn->_ATSemKindSet), InIS(monomorphK, _currn->_ATSemKindSet))
) ? (PTGNULL
) : (PTGcilClassDecl(_AVClass_head_2_out, PTGNewLineSeq(_AVClass_head_2__const108, PTGNewLineSeq(_AVClass_declaration_2_bridge_out, _AVClass_body_2_out)))))
;
/*SPC(868)*/
_AVClass_declaration_2class_decls_out_post=PTGNewLineSeq(_AVClass_declaration_2class_decls_out_post, _AVClass_declaration_2_out);
/*SPC(865)*/
_IG_incl81=_IL_incl81;
_IG_incl70=_IL_incl70;
_IG_incl67=_IL_incl67;
_IG_incl66=_IL_incl66;
_IG_incl58=_IL_incl58;
_IG_incl2=_IL_incl2;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_DECLARATIONS_2(_TPPCLASS_DECLARATIONS_2 _currn)
#else
void _VS3CLASS_DECLARATIONS_2(_currn )
_TPPCLASS_DECLARATIONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_DECLARATIONS_2(_TPPCLASS_DECLARATIONS_2 _currn)
#else
void _VS4CLASS_DECLARATIONS_2(_currn )
_TPPCLASS_DECLARATIONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5CLASS_DECLARATIONS_2(_TPPCLASS_DECLARATIONS_2 _currn)
#else
void _VS5CLASS_DECLARATIONS_2(_currn )
_TPPCLASS_DECLARATIONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6CLASS_DECLARATIONS_2(_TPPCLASS_DECLARATIONS_2 _currn)
#else
void _VS6CLASS_DECLARATIONS_2(_currn )
_TPPCLASS_DECLARATIONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7CLASS_DECLARATIONS_2(_TPPCLASS_DECLARATIONS_2 _currn)
#else
void _VS7CLASS_DECLARATIONS_2(_currn )
_TPPCLASS_DECLARATIONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS8CLASS_DECLARATIONS_2(_TPPCLASS_DECLARATIONS_2 _currn)
#else
void _VS8CLASS_DECLARATIONS_2(_currn )
_TPPCLASS_DECLARATIONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS8MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS9CLASS_DECLARATIONS_2(_TPPCLASS_DECLARATIONS_2 _currn)
#else
void _VS9CLASS_DECLARATIONS_2(_currn )
_TPPCLASS_DECLARATIONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS9MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS10CLASS_DECLARATIONS_2(_TPPCLASS_DECLARATIONS_2 _currn)
#else
void _VS10CLASS_DECLARATIONS_2(_currn )
_TPPCLASS_DECLARATIONS_2 _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVClass_declaration_2class_decls_out_post=PTGNULL;
/*SPC(860)*/
(*(_CALL_VS_((NODEPTR )) (VS10MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVClass_declarations_2__const0=_AVLST_Class_declarations_2__const0;
/*SPC(5319)*/
_AVClass_declarations_2_out=_AVClass_declaration_2class_decls_out_post;
/*SPC(861)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ASSERTION_STATEMENT(_TPPASSERTION_STATEMENT _currn)
#else
void _VS1ASSERTION_STATEMENT(_currn )
_TPPASSERTION_STATEMENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkASSERTION_STATEMENT_2, _currn->_desc1->_ATtree, NoKey);
/*SPC(8410)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ASSERTION_STATEMENT(_TPPASSERTION_STATEMENT _currn)
#else
void _VS2ASSERTION_STATEMENT(_currn )
_TPPASSERTION_STATEMENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1RAISE_STATEMENT(_TPPRAISE_STATEMENT _currn)
#else
void _VS1RAISE_STATEMENT(_currn )
_TPPRAISE_STATEMENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkRAISE_STATEMENT_2, _currn->_desc1->_ATtree, NoKey);
/*SPC(8405)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2RAISE_STATEMENT(_TPPRAISE_STATEMENT _currn)
#else
void _VS2RAISE_STATEMENT(_currn )
_TPPRAISE_STATEMENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1RETURN_STATEMENT(_TPPRETURN_STATEMENT _currn)
#else
void _VS1RETURN_STATEMENT(_currn )
_TPPRETURN_STATEMENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkRETURN_STATEMENT_2, NoKey);
/*SPC(8401)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1RESUME_STATEMENT(_TPPRESUME_STATEMENT _currn)
#else
void _VS1RESUME_STATEMENT(_currn )
_TPPRESUME_STATEMENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkRESUME_STATEMENT_2, NoKey);
/*SPC(8397)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BREAK_STATEMENT(_TPPBREAK_STATEMENT _currn)
#else
void _VS1BREAK_STATEMENT(_currn )
_TPPBREAK_STATEMENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkBREAK_STATEMENT_2, NoKey);
/*SPC(8393)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LOOP(_TPPLOOP _currn)
#else
void _VS1LOOP(_currn )
_TPPLOOP _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LOOP(_TPPLOOP _currn)
#else
void _VS2LOOP(_currn )
_TPPLOOP _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVLoop_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkLOOP_2, _currn->_desc1->_ATtree, NoKey);
/*SPC(8389)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LOOP(_TPPLOOP _currn)
#else
void _VS3LOOP(_currn )
_TPPLOOP _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LOOP(_TPPLOOP _currn)
#else
void _VS4LOOP(_currn )
_TPPLOOP _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LOOP_EXP(_TPPLOOP_EXP _currn)
#else
void _VS1LOOP_EXP(_currn )
_TPPLOOP_EXP _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LOOP_EXP(_TPPLOOP_EXP _currn)
#else
void _VS2LOOP_EXP(_currn )
_TPPLOOP_EXP _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVLoop_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkLOOP_EXP_2, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8385)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LOOP_EXP(_TPPLOOP_EXP _currn)
#else
void _VS3LOOP_EXP(_currn )
_TPPLOOP_EXP _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LOOP_EXP(_TPPLOOP_EXP _currn)
#else
void _VS4LOOP_EXP(_currn )
_TPPLOOP_EXP _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPES_LST(_TPPTYPES_LST _currn)
#else
void _VS1TYPES_LST(_currn )
_TPPTYPES_LST _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVTypes_tree=
((EQ(_AVTypes_tree, NULL)
) ? (NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_TYPES_BLOCKS_2, (* _IG_incl114), NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_TYPES_BLOCK_2, _currn->_desc2->_ATtree, (* _IG_incl115), NoKey), NoKey)
) : (NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_TYPES_BLOCKS_2, _AVTypes_tree, NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_TYPES_BLOCK_2, _currn->_desc2->_ATtree, CopyTree((* _IG_incl115)), NoKey), NoKey)))
;
/*SPC(8498)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPES_LST(_TPPTYPES_LST _currn)
#else
void _VS2TYPES_LST(_currn )
_TPPTYPES_LST _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPES_EMPTY(_TPPTYPES_EMPTY _currn)
#else
void _VS1TYPES_EMPTY(_currn )
_TPPTYPES_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVTypes_tree=NULL;
/*SPC(8494)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_TYPES_BLOCK(_TPPWHEN_TYPES_BLOCK _currn)
#else
void _VS1WHEN_TYPES_BLOCK(_currn )
_TPPWHEN_TYPES_BLOCK _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_TYPES_BLOCK(_TPPWHEN_TYPES_BLOCK _currn)
#else
void _VS2WHEN_TYPES_BLOCK(_currn )
_TPPWHEN_TYPES_BLOCK _currn;

#endif
{
TreeNodePtr* _IL_incl115;

_VisitVarDecl()
_VisitEntry();
_IL_incl115=_IG_incl115;_IG_incl115= &(_currn->_ATBlockTree);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATBlockTree=_currn->_desc2->_ATtree;
/*SPC(8484)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVWhen_types_block_tree=
((EQ(_AVTypes_tree, NULL)
) ? (NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_TYPES_BLOCKS_2, (* _IG_incl114), NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkWHEN_TYPES_BLOCK_ELSE_2, _currn->_desc2->_ATtree, NoKey), NoKey)
) : (_AVTypes_tree))
;
/*SPC(8485)*/
_IG_incl115=_IL_incl115;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_TYPES_BLOCK(_TPPWHEN_TYPES_BLOCK _currn)
#else
void _VS3WHEN_TYPES_BLOCK(_currn )
_TPPWHEN_TYPES_BLOCK _currn;

#endif
{
TreeNodePtr* _IL_incl115;

_VisitVarDecl()
_VisitEntry();
_IL_incl115=_IG_incl115;_IG_incl115= &(_currn->_ATBlockTree);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl115=_IL_incl115;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4WHEN_TYPES_BLOCK(_TPPWHEN_TYPES_BLOCK _currn)
#else
void _VS4WHEN_TYPES_BLOCK(_currn )
_TPPWHEN_TYPES_BLOCK _currn;

#endif
{
TreeNodePtr* _IL_incl115;

_VisitVarDecl()
_VisitEntry();
_IL_incl115=_IG_incl115;_IG_incl115= &(_currn->_ATBlockTree);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl115=_IL_incl115;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_TYPES_BLOCKS_EMPTY(_TPPWHEN_TYPES_BLOCKS_EMPTY _currn)
#else
void _VS1WHEN_TYPES_BLOCKS_EMPTY(_currn )
_TPPWHEN_TYPES_BLOCKS_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_TYPES_BLOCKS_EMPTY(_TPPWHEN_TYPES_BLOCKS_EMPTY _currn)
#else
void _VS2WHEN_TYPES_BLOCKS_EMPTY(_currn )
_TPPWHEN_TYPES_BLOCKS_EMPTY _currn;

#endif
{
TreeNodePtr* _IL_incl114;

_VisitVarDecl()
_VisitEntry();
_IL_incl114=_IG_incl114;_IG_incl114= &(_currn->_ATLeftTree);
_currn->_ATLeftTree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkWHEN_TYPES_BLOCKS_EMPTY_2, NoKey);
/*SPC(8477)*/
_AVWhen_types_blocks_tree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkWHEN_TYPES_BLOCKS_EMPTY_2, NoKey);
/*SPC(8476)*/
_IG_incl114=_IL_incl114;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_TYPES_BLOCKS_EMPTY(_TPPWHEN_TYPES_BLOCKS_EMPTY _currn)
#else
void _VS3WHEN_TYPES_BLOCKS_EMPTY(_currn )
_TPPWHEN_TYPES_BLOCKS_EMPTY _currn;

#endif
{
TreeNodePtr* _IL_incl114;

_VisitVarDecl()
_VisitEntry();
_IL_incl114=_IG_incl114;_IG_incl114= &(_currn->_ATLeftTree);
_IG_incl114=_IL_incl114;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4WHEN_TYPES_BLOCKS_EMPTY(_TPPWHEN_TYPES_BLOCKS_EMPTY _currn)
#else
void _VS4WHEN_TYPES_BLOCKS_EMPTY(_currn )
_TPPWHEN_TYPES_BLOCKS_EMPTY _currn;

#endif
{
TreeNodePtr* _IL_incl114;

_VisitVarDecl()
_VisitEntry();
_IL_incl114=_IG_incl114;_IG_incl114= &(_currn->_ATLeftTree);
_IG_incl114=_IL_incl114;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_TYPES_BLOCKS(_TPPWHEN_TYPES_BLOCKS _currn)
#else
void _VS1WHEN_TYPES_BLOCKS(_currn )
_TPPWHEN_TYPES_BLOCKS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_TYPES_BLOCKS(_TPPWHEN_TYPES_BLOCKS _currn)
#else
void _VS2WHEN_TYPES_BLOCKS(_currn )
_TPPWHEN_TYPES_BLOCKS _currn;

#endif
{
TreeNodePtr* _IL_incl114;

_VisitVarDecl()
_VisitEntry();
_IL_incl114=_IG_incl114;_IG_incl114= &(_currn->_ATLeftTree);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATLeftTree=_AVWhen_types_blocks_tree;
/*SPC(8471)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVWhen_types_blocks_tree=_AVWhen_types_block_tree;
/*SPC(8472)*/
_IG_incl114=_IL_incl114;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_TYPES_BLOCKS(_TPPWHEN_TYPES_BLOCKS _currn)
#else
void _VS3WHEN_TYPES_BLOCKS(_currn )
_TPPWHEN_TYPES_BLOCKS _currn;

#endif
{
TreeNodePtr* _IL_incl114;

_VisitVarDecl()
_VisitEntry();
_IL_incl114=_IG_incl114;_IG_incl114= &(_currn->_ATLeftTree);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl114=_IL_incl114;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4WHEN_TYPES_BLOCKS(_TPPWHEN_TYPES_BLOCKS _currn)
#else
void _VS4WHEN_TYPES_BLOCKS(_currn )
_TPPWHEN_TYPES_BLOCKS _currn;

#endif
{
TreeNodePtr* _IL_incl114;

_VisitVarDecl()
_VisitEntry();
_IL_incl114=_IG_incl114;_IG_incl114= &(_currn->_ATLeftTree);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl114=_IL_incl114;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CASE_STATEMENT_ATT(_TPPTYPE_CASE_STATEMENT_ATT _currn)
#else
void _VS1TYPE_CASE_STATEMENT_ATT(_currn )
_TPPTYPE_CASE_STATEMENT_ATT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVAttribute_declaration_KindSet=SingleIS(locVarK);
/*SPC(3505)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CASE_STATEMENT_ATT(_TPPTYPE_CASE_STATEMENT_ATT _currn)
#else
void _VS2TYPE_CASE_STATEMENT_ATT(_currn )
_TPPTYPE_CASE_STATEMENT_ATT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVType_case_statement_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkTYPE_CASE_STATEMENT_ATT_2, _currn->_desc1->_ATtree, _AVWhen_types_blocks_tree, NoKey);
/*SPC(8463)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CASE_STATEMENT_ATT(_TPPTYPE_CASE_STATEMENT_ATT _currn)
#else
void _VS3TYPE_CASE_STATEMENT_ATT(_currn )
_TPPTYPE_CASE_STATEMENT_ATT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_CASE_STATEMENT_ATT(_TPPTYPE_CASE_STATEMENT_ATT _currn)
#else
void _VS4TYPE_CASE_STATEMENT_ATT(_currn )
_TPPTYPE_CASE_STATEMENT_ATT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CASE_STATEMENT(_TPPTYPE_CASE_STATEMENT _currn)
#else
void _VS1TYPE_CASE_STATEMENT(_currn )
_TPPTYPE_CASE_STATEMENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CASE_STATEMENT(_TPPTYPE_CASE_STATEMENT _currn)
#else
void _VS2TYPE_CASE_STATEMENT(_currn )
_TPPTYPE_CASE_STATEMENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVType_case_statement_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkTYPE_CASE_STATEMENT_2, _currn->_desc1->_ATtree, _AVWhen_types_blocks_tree, NoKey);
/*SPC(8458)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3TYPE_CASE_STATEMENT(_TPPTYPE_CASE_STATEMENT _currn)
#else
void _VS3TYPE_CASE_STATEMENT(_currn )
_TPPTYPE_CASE_STATEMENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4TYPE_CASE_STATEMENT(_TPPTYPE_CASE_STATEMENT _currn)
#else
void _VS4TYPE_CASE_STATEMENT(_currn )
_TPPTYPE_CASE_STATEMENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CASE_LABEL_DES(_TPPCASE_LABEL_DES _currn,TreeNodePtr* _AS0tree)
#else
void _VS1CASE_LABEL_DES(_currn ,_AS0tree)
_TPPCASE_LABEL_DES _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkCASE_LABEL_DES_2, _AS1tree, NoKey);
/*SPC(8381)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CASE_LABEL_DES(_TPPCASE_LABEL_DES _currn,TreeNodePtr* _AS0tree)
#else
void _VS2CASE_LABEL_DES(_currn ,_AS0tree)
_TPPCASE_LABEL_DES _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CASE_LABEL_VALUE(_TPPCASE_LABEL_VALUE _currn,TreeNodePtr* _AS0tree)
#else
void _VS1CASE_LABEL_VALUE(_currn ,_AS0tree)
_TPPCASE_LABEL_VALUE _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkCASE_LABEL_VALUE_2, _AVValue_tree, NoKey);
/*SPC(8377)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CASE_LABEL_VALUE(_TPPCASE_LABEL_VALUE _currn,TreeNodePtr* _AS0tree)
#else
void _VS2CASE_LABEL_VALUE(_currn ,_AS0tree)
_TPPCASE_LABEL_VALUE _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LABEL_RANGE(_TPPLABEL_RANGE _currn)
#else
void _VS1LABEL_RANGE(_currn )
_TPPLABEL_RANGE _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVLabel_range_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkLABEL_RANGE_2, _AS1tree, _AS2tree, NoKey);
/*SPC(8371)*/
_AVlabel_rangelabel_list_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2LABEL_LIST_2, _AVlabel_rangelabel_list_tree_post, _AVLabel_range_tree, NoKey);
/*SPC(8361)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LABEL_RANGE(_TPPLABEL_RANGE _currn)
#else
void _VS2LABEL_RANGE(_currn )
_TPPLABEL_RANGE _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LABEL_RANGE_SINGLE(_TPPLABEL_RANGE_SINGLE _currn)
#else
void _VS1LABEL_RANGE_SINGLE(_currn )
_TPPLABEL_RANGE_SINGLE _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVLabel_range_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkLABEL_RANGE_SINGLE_2, _AS1tree, NoKey);
/*SPC(8366)*/
_AVlabel_rangelabel_list_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2LABEL_LIST_2, _AVlabel_rangelabel_list_tree_post, _AVLabel_range_tree, NoKey);
/*SPC(8361)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LABEL_RANGE_SINGLE(_TPPLABEL_RANGE_SINGLE _currn)
#else
void _VS2LABEL_RANGE_SINGLE(_currn )
_TPPLABEL_RANGE_SINGLE _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LABEL_LIST(_TPPLABEL_LIST _currn)
#else
void _VS1LABEL_LIST(_currn )
_TPPLABEL_LIST _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVlabel_rangelabel_list_tree_post=NULL;
/*SPC(8356)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkLABEL_LIST_2, _AVlabel_rangelabel_list_tree_post, NoKey);
/*SPC(8357)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LABEL_LIST(_TPPLABEL_LIST _currn)
#else
void _VS2LABEL_LIST(_currn )
_TPPLABEL_LIST _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_LABEL_STMT(_TPPWHEN_LABEL_STMT _currn)
#else
void _VS1WHEN_LABEL_STMT(_currn )
_TPPWHEN_LABEL_STMT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_LABEL_STMT(_TPPWHEN_LABEL_STMT _currn)
#else
void _VS2WHEN_LABEL_STMT(_currn )
_TPPWHEN_LABEL_STMT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVWhen_label_stmt_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_LABEL_STMT_2, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8351)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_LABEL_STMT(_TPPWHEN_LABEL_STMT _currn)
#else
void _VS3WHEN_LABEL_STMT(_currn )
_TPPWHEN_LABEL_STMT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4WHEN_LABEL_STMT(_TPPWHEN_LABEL_STMT _currn)
#else
void _VS4WHEN_LABEL_STMT(_currn )
_TPPWHEN_LABEL_STMT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_LABEL_STMTS_EMPTY(_TPPWHEN_LABEL_STMTS_EMPTY _currn)
#else
void _VS1WHEN_LABEL_STMTS_EMPTY(_currn )
_TPPWHEN_LABEL_STMTS_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_LABEL_STMTS_EMPTY(_TPPWHEN_LABEL_STMTS_EMPTY _currn,TreeNodePtr* _AS0tree)
#else
void _VS2WHEN_LABEL_STMTS_EMPTY(_currn ,_AS0tree)
_TPPWHEN_LABEL_STMTS_EMPTY _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkWHEN_LABEL_STMTS_EMPTY_2, NoKey);
/*SPC(8346)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_LABEL_STMTS_EMPTY(_TPPWHEN_LABEL_STMTS_EMPTY _currn,TreeNodePtr* _AS0tree)
#else
void _VS3WHEN_LABEL_STMTS_EMPTY(_currn ,_AS0tree)
_TPPWHEN_LABEL_STMTS_EMPTY _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4WHEN_LABEL_STMTS_EMPTY(_TPPWHEN_LABEL_STMTS_EMPTY _currn,TreeNodePtr* _AS0tree)
#else
void _VS4WHEN_LABEL_STMTS_EMPTY(_currn ,_AS0tree)
_TPPWHEN_LABEL_STMTS_EMPTY _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_LABEL_STMTS(_TPPWHEN_LABEL_STMTS _currn)
#else
void _VS1WHEN_LABEL_STMTS(_currn )
_TPPWHEN_LABEL_STMTS _currn;

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
void _VS2WHEN_LABEL_STMTS(_TPPWHEN_LABEL_STMTS _currn,TreeNodePtr* _AS0tree)
#else
void _VS2WHEN_LABEL_STMTS(_currn ,_AS0tree)
_TPPWHEN_LABEL_STMTS _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_LABEL_STMTS_2, _AS1tree, _AVWhen_label_stmt_tree, NoKey);
/*SPC(8340)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_LABEL_STMTS(_TPPWHEN_LABEL_STMTS _currn,TreeNodePtr* _AS0tree)
#else
void _VS3WHEN_LABEL_STMTS(_currn ,_AS0tree)
_TPPWHEN_LABEL_STMTS _currn;
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
void _VS4WHEN_LABEL_STMTS(_TPPWHEN_LABEL_STMTS _currn,TreeNodePtr* _AS0tree)
#else
void _VS4WHEN_LABEL_STMTS(_currn ,_AS0tree)
_TPPWHEN_LABEL_STMTS _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CASE_STATEMENT(_TPPCASE_STATEMENT _currn)
#else
void _VS1CASE_STATEMENT(_currn )
_TPPCASE_STATEMENT _currn;

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
void _VS2CASE_STATEMENT(_TPPCASE_STATEMENT _currn)
#else
void _VS2CASE_STATEMENT(_currn )
_TPPCASE_STATEMENT _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVCase_statement_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkCASE_STATEMENT_2, _currn->_desc1->_ATtree, _AS2tree, NoKey);
/*SPC(8334)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CASE_STATEMENT(_TPPCASE_STATEMENT _currn)
#else
void _VS3CASE_STATEMENT(_currn )
_TPPCASE_STATEMENT _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CASE_STATEMENT(_TPPCASE_STATEMENT _currn)
#else
void _VS4CASE_STATEMENT(_currn )
_TPPCASE_STATEMENT _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1COND_STATEMENT_ELSE(_TPPCOND_STATEMENT_ELSE _currn)
#else
void _VS1COND_STATEMENT_ELSE(_currn )
_TPPCOND_STATEMENT_ELSE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2COND_STATEMENT_ELSE(_TPPCOND_STATEMENT_ELSE _currn)
#else
void _VS2COND_STATEMENT_ELSE(_currn )
_TPPCOND_STATEMENT_ELSE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVConditional_statement_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkCOND_STATEMENT_ELSE_2, _currn->_desc1->_ATtree, NoKey);
/*SPC(8329)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3COND_STATEMENT_ELSE(_TPPCOND_STATEMENT_ELSE _currn)
#else
void _VS3COND_STATEMENT_ELSE(_currn )
_TPPCOND_STATEMENT_ELSE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4COND_STATEMENT_ELSE(_TPPCOND_STATEMENT_ELSE _currn)
#else
void _VS4COND_STATEMENT_ELSE(_currn )
_TPPCOND_STATEMENT_ELSE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1COND_STATEMENT(_TPPCOND_STATEMENT _currn)
#else
void _VS1COND_STATEMENT(_currn )
_TPPCOND_STATEMENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2COND_STATEMENT(_TPPCOND_STATEMENT _currn)
#else
void _VS2COND_STATEMENT(_currn )
_TPPCOND_STATEMENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVConditional_statement_tree=NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCOND_STATEMENT_2, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, _AVConditional_statement_tree, NoKey);
/*SPC(8323)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3COND_STATEMENT(_TPPCOND_STATEMENT _currn)
#else
void _VS3COND_STATEMENT(_currn )
_TPPCOND_STATEMENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4COND_STATEMENT(_TPPCOND_STATEMENT _currn)
#else
void _VS4COND_STATEMENT(_currn )
_TPPCOND_STATEMENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXCEPTION_TYPES_LST(_TPPEXCEPTION_TYPES_LST _currn)
#else
void _VS1EXCEPTION_TYPES_LST(_currn )
_TPPEXCEPTION_TYPES_LST _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVException_types_tree=
((EQ(_AVException_types_tree, NULL)
) ? (NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_EXCEPTION_STMTS_2, (* _IG_incl116), NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_EXCEPTION_STMT_2, _currn->_desc2->_ATtree, (* _IG_incl117), NoKey), NoKey)
) : (NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_EXCEPTION_STMTS_2, _AVException_types_tree, NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_EXCEPTION_STMT_2, _currn->_desc2->_ATtree, CopyTree((* _IG_incl117)), NoKey), NoKey)))
;
/*SPC(7419)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXCEPTION_TYPES_LST(_TPPEXCEPTION_TYPES_LST _currn)
#else
void _VS2EXCEPTION_TYPES_LST(_currn )
_TPPEXCEPTION_TYPES_LST _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXCEPTION_TYPES_EMPTY(_TPPEXCEPTION_TYPES_EMPTY _currn)
#else
void _VS1EXCEPTION_TYPES_EMPTY(_currn )
_TPPEXCEPTION_TYPES_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVException_types_tree=NULL;
/*SPC(7415)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_EXCEPTION_STMT(_TPPWHEN_EXCEPTION_STMT _currn)
#else
void _VS1WHEN_EXCEPTION_STMT(_currn )
_TPPWHEN_EXCEPTION_STMT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_EXCEPTION_STMT(_TPPWHEN_EXCEPTION_STMT _currn)
#else
void _VS2WHEN_EXCEPTION_STMT(_currn )
_TPPWHEN_EXCEPTION_STMT _currn;

#endif
{
TreeNodePtr* _IL_incl117;

_VisitVarDecl()
_VisitEntry();
_IL_incl117=_IG_incl117;_IG_incl117= &(_currn->_ATBlockTree);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATBlockTree=_currn->_desc2->_ATtree;
/*SPC(7405)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVWhen_exception_stmt_tree=
((EQ(_AVException_types_tree, NULL)
) ? (NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkWHEN_EXCEPTION_STMTS_2, (* _IG_incl116), NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkWHEN_EXCEPTION_STMT_ELSE_2, _currn->_desc2->_ATtree, NoKey), NoKey)
) : (_AVException_types_tree))
;
/*SPC(7406)*/
_IG_incl117=_IL_incl117;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_EXCEPTION_STMT(_TPPWHEN_EXCEPTION_STMT _currn)
#else
void _VS3WHEN_EXCEPTION_STMT(_currn )
_TPPWHEN_EXCEPTION_STMT _currn;

#endif
{
TreeNodePtr* _IL_incl117;

_VisitVarDecl()
_VisitEntry();
_IL_incl117=_IG_incl117;_IG_incl117= &(_currn->_ATBlockTree);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl117=_IL_incl117;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4WHEN_EXCEPTION_STMT(_TPPWHEN_EXCEPTION_STMT _currn)
#else
void _VS4WHEN_EXCEPTION_STMT(_currn )
_TPPWHEN_EXCEPTION_STMT _currn;

#endif
{
TreeNodePtr* _IL_incl117;

_VisitVarDecl()
_VisitEntry();
_IL_incl117=_IG_incl117;_IG_incl117= &(_currn->_ATBlockTree);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl117=_IL_incl117;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_EXCEPTION_STMTS_EMPTY(_TPPWHEN_EXCEPTION_STMTS_EMPTY _currn)
#else
void _VS1WHEN_EXCEPTION_STMTS_EMPTY(_currn )
_TPPWHEN_EXCEPTION_STMTS_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_EXCEPTION_STMTS_EMPTY(_TPPWHEN_EXCEPTION_STMTS_EMPTY _currn)
#else
void _VS2WHEN_EXCEPTION_STMTS_EMPTY(_currn )
_TPPWHEN_EXCEPTION_STMTS_EMPTY _currn;

#endif
{
TreeNodePtr* _IL_incl116;

_VisitVarDecl()
_VisitEntry();
_IL_incl116=_IG_incl116;_IG_incl116= &(_currn->_ATLeftTree);
_currn->_ATLeftTree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkWHEN_EXCEPTION_STMTS_EMPTY_2, NoKey);
/*SPC(7398)*/
_AVWhen_exception_stmts_tree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkWHEN_EXCEPTION_STMTS_EMPTY_2, NoKey);
/*SPC(7396)*/
_IG_incl116=_IL_incl116;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_EXCEPTION_STMTS_EMPTY(_TPPWHEN_EXCEPTION_STMTS_EMPTY _currn)
#else
void _VS3WHEN_EXCEPTION_STMTS_EMPTY(_currn )
_TPPWHEN_EXCEPTION_STMTS_EMPTY _currn;

#endif
{
TreeNodePtr* _IL_incl116;

_VisitVarDecl()
_VisitEntry();
_IL_incl116=_IG_incl116;_IG_incl116= &(_currn->_ATLeftTree);
_IG_incl116=_IL_incl116;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4WHEN_EXCEPTION_STMTS_EMPTY(_TPPWHEN_EXCEPTION_STMTS_EMPTY _currn)
#else
void _VS4WHEN_EXCEPTION_STMTS_EMPTY(_currn )
_TPPWHEN_EXCEPTION_STMTS_EMPTY _currn;

#endif
{
TreeNodePtr* _IL_incl116;

_VisitVarDecl()
_VisitEntry();
_IL_incl116=_IG_incl116;_IG_incl116= &(_currn->_ATLeftTree);
_IG_incl116=_IL_incl116;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1WHEN_EXCEPTION_STMTS(_TPPWHEN_EXCEPTION_STMTS _currn)
#else
void _VS1WHEN_EXCEPTION_STMTS(_currn )
_TPPWHEN_EXCEPTION_STMTS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2WHEN_EXCEPTION_STMTS(_TPPWHEN_EXCEPTION_STMTS _currn)
#else
void _VS2WHEN_EXCEPTION_STMTS(_currn )
_TPPWHEN_EXCEPTION_STMTS _currn;

#endif
{
TreeNodePtr* _IL_incl116;

_VisitVarDecl()
_VisitEntry();
_IL_incl116=_IG_incl116;_IG_incl116= &(_currn->_ATLeftTree);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATLeftTree=_AVWhen_exception_stmts_tree;
/*SPC(7391)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVWhen_exception_stmts_tree=_AVWhen_exception_stmt_tree;
/*SPC(7392)*/
_IG_incl116=_IL_incl116;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3WHEN_EXCEPTION_STMTS(_TPPWHEN_EXCEPTION_STMTS _currn)
#else
void _VS3WHEN_EXCEPTION_STMTS(_currn )
_TPPWHEN_EXCEPTION_STMTS _currn;

#endif
{
TreeNodePtr* _IL_incl116;

_VisitVarDecl()
_VisitEntry();
_IL_incl116=_IG_incl116;_IG_incl116= &(_currn->_ATLeftTree);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl116=_IL_incl116;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4WHEN_EXCEPTION_STMTS(_TPPWHEN_EXCEPTION_STMTS _currn)
#else
void _VS4WHEN_EXCEPTION_STMTS(_currn )
_TPPWHEN_EXCEPTION_STMTS _currn;

#endif
{
TreeNodePtr* _IL_incl116;

_VisitVarDecl()
_VisitEntry();
_IL_incl116=_IG_incl116;_IG_incl116= &(_currn->_ATLeftTree);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl116=_IL_incl116;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXCEPTIONS(_TPPEXCEPTIONS _currn)
#else
void _VS1EXCEPTIONS(_currn )
_TPPEXCEPTIONS _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVIdent_def_KindSet=NULLIS;
/*SPC(3424)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXCEPTIONS(_TPPEXCEPTIONS _currn)
#else
void _VS2EXCEPTIONS(_currn )
_TPPEXCEPTIONS _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVExceptions_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkEXCEPTIONS_2, _AS1tree, _AVWhen_exception_stmts_tree, NoKey);
/*SPC(7383)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3EXCEPTIONS(_TPPEXCEPTIONS _currn)
#else
void _VS3EXCEPTIONS(_currn )
_TPPEXCEPTIONS _currn;

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
void _VS4EXCEPTIONS(_TPPEXCEPTIONS _currn)
#else
void _VS4EXCEPTIONS(_currn )
_TPPEXCEPTIONS _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXCEPTIONS_EMPTY(_TPPEXCEPTIONS_EMPTY _currn)
#else
void _VS1EXCEPTIONS_EMPTY(_currn )
_TPPEXCEPTIONS_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXCEPTIONS_EMPTY(_TPPEXCEPTIONS_EMPTY _currn)
#else
void _VS2EXCEPTIONS_EMPTY(_currn )
_TPPEXCEPTIONS_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVExceptions_tree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkEXCEPTIONS_EMPTY_2, NoKey);
/*SPC(7379)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BEGIN_BLOCK(_TPPBEGIN_BLOCK _currn)
#else
void _VS1BEGIN_BLOCK(_currn )
_TPPBEGIN_BLOCK _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BEGIN_BLOCK(_TPPBEGIN_BLOCK _currn)
#else
void _VS2BEGIN_BLOCK(_currn )
_TPPBEGIN_BLOCK _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVBegin_block_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkBEGIN_BLOCK_2, _currn->_desc1->_ATtree, _AVExceptions_tree, NoKey);
/*SPC(8318)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BEGIN_BLOCK(_TPPBEGIN_BLOCK _currn)
#else
void _VS3BEGIN_BLOCK(_currn )
_TPPBEGIN_BLOCK _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4BEGIN_BLOCK(_TPPBEGIN_BLOCK _currn)
#else
void _VS4BEGIN_BLOCK(_currn )
_TPPBEGIN_BLOCK _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ASSIGNMENT(_TPPASSIGNMENT _currn)
#else
void _VS1ASSIGNMENT(_currn )
_TPPASSIGNMENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkASSIGNMENT_2, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8313)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ASSIGNMENT(_TPPASSIGNMENT _currn)
#else
void _VS2ASSIGNMENT(_currn )
_TPPASSIGNMENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_ASSERT(_TPPSTATEMENTS_ASSERT _currn)
#else
void _VS1STATEMENTS_ASSERT(_currn )
_TPPSTATEMENTS_ASSERT _currn;

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
void _VS2STATEMENTS_ASSERT(_TPPSTATEMENTS_ASSERT _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_ASSERT(_currn ,_AS0tree)
_TPPSTATEMENTS_ASSERT _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_ASSERT_2, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8307)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_ASSERT(_TPPSTATEMENTS_ASSERT _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_ASSERT(_currn ,_AS0tree)
_TPPSTATEMENTS_ASSERT _currn;
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
void _VS4STATEMENTS_ASSERT(_TPPSTATEMENTS_ASSERT _currn,TreeNodePtr* _AS0tree)
#else
void _VS4STATEMENTS_ASSERT(_currn ,_AS0tree)
_TPPSTATEMENTS_ASSERT _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_RAISE(_TPPSTATEMENTS_RAISE _currn)
#else
void _VS1STATEMENTS_RAISE(_currn )
_TPPSTATEMENTS_RAISE _currn;

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
void _VS2STATEMENTS_RAISE(_TPPSTATEMENTS_RAISE _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_RAISE(_currn ,_AS0tree)
_TPPSTATEMENTS_RAISE _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_RAISE_2, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8301)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_RAISE(_TPPSTATEMENTS_RAISE _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_RAISE(_currn ,_AS0tree)
_TPPSTATEMENTS_RAISE _currn;
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
void _VS4STATEMENTS_RAISE(_TPPSTATEMENTS_RAISE _currn,TreeNodePtr* _AS0tree)
#else
void _VS4STATEMENTS_RAISE(_currn ,_AS0tree)
_TPPSTATEMENTS_RAISE _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_RETURN(_TPPSTATEMENTS_RETURN _currn)
#else
void _VS1STATEMENTS_RETURN(_currn )
_TPPSTATEMENTS_RETURN _currn;

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
void _VS2STATEMENTS_RETURN(_TPPSTATEMENTS_RETURN _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_RETURN(_currn ,_AS0tree)
_TPPSTATEMENTS_RETURN _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_RETURN_2, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8295)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_RETURN(_TPPSTATEMENTS_RETURN _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_RETURN(_currn ,_AS0tree)
_TPPSTATEMENTS_RETURN _currn;
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
void _VS4STATEMENTS_RETURN(_TPPSTATEMENTS_RETURN _currn,TreeNodePtr* _AS0tree)
#else
void _VS4STATEMENTS_RETURN(_currn ,_AS0tree)
_TPPSTATEMENTS_RETURN _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_RESUME(_TPPSTATEMENTS_RESUME _currn)
#else
void _VS1STATEMENTS_RESUME(_currn )
_TPPSTATEMENTS_RESUME _currn;

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
void _VS2STATEMENTS_RESUME(_TPPSTATEMENTS_RESUME _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_RESUME(_currn ,_AS0tree)
_TPPSTATEMENTS_RESUME _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_RESUME_2, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8289)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_RESUME(_TPPSTATEMENTS_RESUME _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_RESUME(_currn ,_AS0tree)
_TPPSTATEMENTS_RESUME _currn;
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
void _VS4STATEMENTS_RESUME(_TPPSTATEMENTS_RESUME _currn,TreeNodePtr* _AS0tree)
#else
void _VS4STATEMENTS_RESUME(_currn ,_AS0tree)
_TPPSTATEMENTS_RESUME _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_EXP(_TPPSTATEMENTS_EXP _currn)
#else
void _VS1STATEMENTS_EXP(_currn )
_TPPSTATEMENTS_EXP _currn;

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
void _VS2STATEMENTS_EXP(_TPPSTATEMENTS_EXP _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_EXP(_currn ,_AS0tree)
_TPPSTATEMENTS_EXP _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_EXP_2, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8283)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_EXP(_TPPSTATEMENTS_EXP _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_EXP(_currn ,_AS0tree)
_TPPSTATEMENTS_EXP _currn;
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
void _VS4STATEMENTS_EXP(_TPPSTATEMENTS_EXP _currn,TreeNodePtr* _AS0tree)
#else
void _VS4STATEMENTS_EXP(_currn ,_AS0tree)
_TPPSTATEMENTS_EXP _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_BREAK(_TPPSTATEMENTS_BREAK _currn)
#else
void _VS1STATEMENTS_BREAK(_currn )
_TPPSTATEMENTS_BREAK _currn;

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
void _VS2STATEMENTS_BREAK(_TPPSTATEMENTS_BREAK _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_BREAK(_currn ,_AS0tree)
_TPPSTATEMENTS_BREAK _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_BREAK_2, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8277)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_BREAK(_TPPSTATEMENTS_BREAK _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_BREAK(_currn ,_AS0tree)
_TPPSTATEMENTS_BREAK _currn;
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
void _VS4STATEMENTS_BREAK(_TPPSTATEMENTS_BREAK _currn,TreeNodePtr* _AS0tree)
#else
void _VS4STATEMENTS_BREAK(_currn ,_AS0tree)
_TPPSTATEMENTS_BREAK _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_LOOP(_TPPSTATEMENTS_LOOP _currn)
#else
void _VS1STATEMENTS_LOOP(_currn )
_TPPSTATEMENTS_LOOP _currn;

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
void _VS2STATEMENTS_LOOP(_TPPSTATEMENTS_LOOP _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_LOOP(_currn ,_AS0tree)
_TPPSTATEMENTS_LOOP _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_LOOP_2, _AS1tree, _AVLoop_tree, NoKey);
/*SPC(8272)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_LOOP(_TPPSTATEMENTS_LOOP _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_LOOP(_currn ,_AS0tree)
_TPPSTATEMENTS_LOOP _currn;
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
void _VS4STATEMENTS_LOOP(_TPPSTATEMENTS_LOOP _currn,TreeNodePtr* _AS0tree)
#else
void _VS4STATEMENTS_LOOP(_currn ,_AS0tree)
_TPPSTATEMENTS_LOOP _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_TYPE_CASE(_TPPSTATEMENTS_TYPE_CASE _currn)
#else
void _VS1STATEMENTS_TYPE_CASE(_currn )
_TPPSTATEMENTS_TYPE_CASE _currn;

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
void _VS2STATEMENTS_TYPE_CASE(_TPPSTATEMENTS_TYPE_CASE _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_TYPE_CASE(_currn ,_AS0tree)
_TPPSTATEMENTS_TYPE_CASE _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_TYPE_CASE_2, _AS1tree, _AVType_case_statement_tree, NoKey);
/*SPC(8266)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_TYPE_CASE(_TPPSTATEMENTS_TYPE_CASE _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_TYPE_CASE(_currn ,_AS0tree)
_TPPSTATEMENTS_TYPE_CASE _currn;
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
void _VS4STATEMENTS_TYPE_CASE(_TPPSTATEMENTS_TYPE_CASE _currn,TreeNodePtr* _AS0tree)
#else
void _VS4STATEMENTS_TYPE_CASE(_currn ,_AS0tree)
_TPPSTATEMENTS_TYPE_CASE _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_CASE(_TPPSTATEMENTS_CASE _currn)
#else
void _VS1STATEMENTS_CASE(_currn )
_TPPSTATEMENTS_CASE _currn;

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
void _VS2STATEMENTS_CASE(_TPPSTATEMENTS_CASE _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_CASE(_currn ,_AS0tree)
_TPPSTATEMENTS_CASE _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_CASE_2, _AS1tree, _AVCase_statement_tree, NoKey);
/*SPC(8260)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_CASE(_TPPSTATEMENTS_CASE _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_CASE(_currn ,_AS0tree)
_TPPSTATEMENTS_CASE _currn;
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
void _VS4STATEMENTS_CASE(_TPPSTATEMENTS_CASE _currn,TreeNodePtr* _AS0tree)
#else
void _VS4STATEMENTS_CASE(_currn ,_AS0tree)
_TPPSTATEMENTS_CASE _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_COND(_TPPSTATEMENTS_COND _currn)
#else
void _VS1STATEMENTS_COND(_currn )
_TPPSTATEMENTS_COND _currn;

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
void _VS2STATEMENTS_COND(_TPPSTATEMENTS_COND _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_COND(_currn ,_AS0tree)
_TPPSTATEMENTS_COND _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_COND_2, _AS1tree, _AVConditional_statement_tree, NoKey);
/*SPC(8254)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_COND(_TPPSTATEMENTS_COND _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_COND(_currn ,_AS0tree)
_TPPSTATEMENTS_COND _currn;
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
void _VS4STATEMENTS_COND(_TPPSTATEMENTS_COND _currn,TreeNodePtr* _AS0tree)
#else
void _VS4STATEMENTS_COND(_currn ,_AS0tree)
_TPPSTATEMENTS_COND _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_BEGIN(_TPPSTATEMENTS_BEGIN _currn)
#else
void _VS1STATEMENTS_BEGIN(_currn )
_TPPSTATEMENTS_BEGIN _currn;

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
void _VS2STATEMENTS_BEGIN(_TPPSTATEMENTS_BEGIN _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_BEGIN(_currn ,_AS0tree)
_TPPSTATEMENTS_BEGIN _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_BEGIN_2, _AS1tree, _AVBegin_block_tree, NoKey);
/*SPC(8248)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_BEGIN(_TPPSTATEMENTS_BEGIN _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_BEGIN(_currn ,_AS0tree)
_TPPSTATEMENTS_BEGIN _currn;
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
void _VS4STATEMENTS_BEGIN(_TPPSTATEMENTS_BEGIN _currn,TreeNodePtr* _AS0tree)
#else
void _VS4STATEMENTS_BEGIN(_currn ,_AS0tree)
_TPPSTATEMENTS_BEGIN _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_ASSIGN(_TPPSTATEMENTS_ASSIGN _currn)
#else
void _VS1STATEMENTS_ASSIGN(_currn )
_TPPSTATEMENTS_ASSIGN _currn;

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
void _VS2STATEMENTS_ASSIGN(_TPPSTATEMENTS_ASSIGN _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_ASSIGN(_currn ,_AS0tree)
_TPPSTATEMENTS_ASSIGN _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTATEMENTS_ASSIGN_2, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8242)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_ASSIGN(_TPPSTATEMENTS_ASSIGN _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_ASSIGN(_currn ,_AS0tree)
_TPPSTATEMENTS_ASSIGN _currn;
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
void _VS4STATEMENTS_ASSIGN(_TPPSTATEMENTS_ASSIGN _currn,TreeNodePtr* _AS0tree)
#else
void _VS4STATEMENTS_ASSIGN(_currn ,_AS0tree)
_TPPSTATEMENTS_ASSIGN _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STATEMENTS_EMPTY(_TPPSTATEMENTS_EMPTY _currn)
#else
void _VS1STATEMENTS_EMPTY(_currn )
_TPPSTATEMENTS_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STATEMENTS_EMPTY(_TPPSTATEMENTS_EMPTY _currn,TreeNodePtr* _AS0tree)
#else
void _VS2STATEMENTS_EMPTY(_currn ,_AS0tree)
_TPPSTATEMENTS_EMPTY _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkSTATEMENTS_EMPTY_2, NoKey);
/*SPC(8238)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3STATEMENTS_EMPTY(_TPPSTATEMENTS_EMPTY _currn,TreeNodePtr* _AS0tree)
#else
void _VS3STATEMENTS_EMPTY(_currn ,_AS0tree)
_TPPSTATEMENTS_EMPTY _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4STATEMENTS_EMPTY(_TPPSTATEMENTS_EMPTY _currn,TreeNodePtr* _AS0tree)
#else
void _VS4STATEMENTS_EMPTY(_currn ,_AS0tree)
_TPPSTATEMENTS_EMPTY _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LOCAL_STREAM_DECL(_TPPLOCAL_STREAM_DECL _currn)
#else
void _VS1LOCAL_STREAM_DECL(_currn )
_TPPLOCAL_STREAM_DECL _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVIdent_def_KindSet=NULLIS;
/*SPC(3424)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LOCAL_STREAM_DECL(_TPPLOCAL_STREAM_DECL _currn)
#else
void _VS2LOCAL_STREAM_DECL(_currn )
_TPPLOCAL_STREAM_DECL _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVLocal_stream_declaration_tree=NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkLOCAL_STREAM_DECL_2, _AS1tree, _AS2tree, _AVBound_method_tree, NoKey);
/*SPC(8232)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LOCAL_STREAM_DECL(_TPPLOCAL_STREAM_DECL _currn)
#else
void _VS3LOCAL_STREAM_DECL(_currn )
_TPPLOCAL_STREAM_DECL _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LOCAL_STREAM_DECL(_TPPLOCAL_STREAM_DECL _currn)
#else
void _VS4LOCAL_STREAM_DECL(_currn )
_TPPLOCAL_STREAM_DECL _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LOCAL_DECLS_STREAM(_TPPLOCAL_DECLS_STREAM _currn)
#else
void _VS1LOCAL_DECLS_STREAM(_currn )
_TPPLOCAL_DECLS_STREAM _currn;

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
void _VS2LOCAL_DECLS_STREAM(_TPPLOCAL_DECLS_STREAM _currn,TreeNodePtr* _AS0tree)
#else
void _VS2LOCAL_DECLS_STREAM(_currn ,_AS0tree)
_TPPLOCAL_DECLS_STREAM _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkLOCAL_DECLS_STREAM_2, _AS1tree, _AVLocal_stream_declaration_tree, NoKey);
/*SPC(8226)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LOCAL_DECLS_STREAM(_TPPLOCAL_DECLS_STREAM _currn,TreeNodePtr* _AS0tree)
#else
void _VS3LOCAL_DECLS_STREAM(_currn ,_AS0tree)
_TPPLOCAL_DECLS_STREAM _currn;
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
void _VS4LOCAL_DECLS_STREAM(_TPPLOCAL_DECLS_STREAM _currn,TreeNodePtr* _AS0tree)
#else
void _VS4LOCAL_DECLS_STREAM(_currn ,_AS0tree)
_TPPLOCAL_DECLS_STREAM _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LOCAL_DECLS_ATT(_TPPLOCAL_DECLS_ATT _currn)
#else
void _VS1LOCAL_DECLS_ATT(_currn )
_TPPLOCAL_DECLS_ATT _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVAttribute_declaration_KindSet=SingleIS(locVarK);
/*SPC(3509)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LOCAL_DECLS_ATT(_TPPLOCAL_DECLS_ATT _currn,TreeNodePtr* _AS0tree)
#else
void _VS2LOCAL_DECLS_ATT(_currn ,_AS0tree)
_TPPLOCAL_DECLS_ATT _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkLOCAL_DECLS_ATT_2, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8220)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LOCAL_DECLS_ATT(_TPPLOCAL_DECLS_ATT _currn,TreeNodePtr* _AS0tree)
#else
void _VS3LOCAL_DECLS_ATT(_currn ,_AS0tree)
_TPPLOCAL_DECLS_ATT _currn;
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
void _VS4LOCAL_DECLS_ATT(_TPPLOCAL_DECLS_ATT _currn,TreeNodePtr* _AS0tree)
#else
void _VS4LOCAL_DECLS_ATT(_currn ,_AS0tree)
_TPPLOCAL_DECLS_ATT _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LOCAL_DECLS_EMPTY(_TPPLOCAL_DECLS_EMPTY _currn)
#else
void _VS1LOCAL_DECLS_EMPTY(_currn )
_TPPLOCAL_DECLS_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2LOCAL_DECLS_EMPTY(_TPPLOCAL_DECLS_EMPTY _currn,TreeNodePtr* _AS0tree)
#else
void _VS2LOCAL_DECLS_EMPTY(_currn ,_AS0tree)
_TPPLOCAL_DECLS_EMPTY _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkLOCAL_DECLS_EMPTY_2, NoKey);
/*SPC(8216)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3LOCAL_DECLS_EMPTY(_TPPLOCAL_DECLS_EMPTY _currn,TreeNodePtr* _AS0tree)
#else
void _VS3LOCAL_DECLS_EMPTY(_currn ,_AS0tree)
_TPPLOCAL_DECLS_EMPTY _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4LOCAL_DECLS_EMPTY(_TPPLOCAL_DECLS_EMPTY _currn,TreeNodePtr* _AS0tree)
#else
void _VS4LOCAL_DECLS_EMPTY(_currn ,_AS0tree)
_TPPLOCAL_DECLS_EMPTY _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BLOCK(_TPPBLOCK _currn)
#else
void _VS1BLOCK(_currn )
_TPPBLOCK _currn;

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
void _VS2BLOCK(_TPPBLOCK _currn)
#else
void _VS2BLOCK(_currn )
_TPPBLOCK _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkBLOCK_2, _AS1tree, _AS2tree, NoKey);
/*SPC(8211)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BLOCK(_TPPBLOCK _currn)
#else
void _VS3BLOCK(_currn )
_TPPBLOCK _currn;

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
void _VS4BLOCK(_TPPBLOCK _currn)
#else
void _VS4BLOCK(_currn )
_TPPBLOCK _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_INST_CLRTYPE(_TPPBUILTIN_INST_CLRTYPE _currn)
#else
void _VS1BUILTIN_INST_CLRTYPE(_currn )
_TPPBUILTIN_INST_CLRTYPE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVBuiltin_instruction_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBUILTIN_INST_CLRTYPE_2, _currn->_desc1->_ATtree, NoKey);
/*SPC(8206)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BUILTIN_INST_CLRTYPE(_TPPBUILTIN_INST_CLRTYPE _currn)
#else
void _VS2BUILTIN_INST_CLRTYPE(_currn )
_TPPBUILTIN_INST_CLRTYPE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_INST_TYPE(_TPPBUILTIN_INST_TYPE _currn)
#else
void _VS1BUILTIN_INST_TYPE(_currn )
_TPPBUILTIN_INST_TYPE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVBuiltin_instruction_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBUILTIN_INST_TYPE_2, _currn->_desc1->_ATtree, NoKey);
/*SPC(8201)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BUILTIN_INST_TYPE(_TPPBUILTIN_INST_TYPE _currn)
#else
void _VS2BUILTIN_INST_TYPE(_currn )
_TPPBUILTIN_INST_TYPE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_INST_STR(_TPPBUILTIN_INST_STR _currn)
#else
void _VS1BUILTIN_INST_STR(_currn )
_TPPBUILTIN_INST_STR _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVBuiltin_instruction_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkBUILTIN_INST_STR_2, _currn->_ATTERM_1, NoKey);
/*SPC(8196)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_INSTS_EMPTY(_TPPBUILTIN_INSTS_EMPTY _currn)
#else
void _VS1BUILTIN_INSTS_EMPTY(_currn )
_TPPBUILTIN_INSTS_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkBUILTIN_INSTS_EMPTY_2, NoKey);
/*SPC(8191)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_INSTS(_TPPBUILTIN_INSTS _currn)
#else
void _VS1BUILTIN_INSTS(_currn )
_TPPBUILTIN_INSTS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkBUILTIN_INSTS_2, _currn->_desc1->_ATtree, _AVBuiltin_instruction_tree, NoKey);
/*SPC(8186)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BUILTIN_INSTS(_TPPBUILTIN_INSTS _currn)
#else
void _VS2BUILTIN_INSTS(_currn )
_TPPBUILTIN_INSTS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_BODY_STATIC_BUILTIN(_TPPMETHOD_BODY_STATIC_BUILTIN _currn)
#else
void _VS1METHOD_BODY_STATIC_BUILTIN(_currn )
_TPPMETHOD_BODY_STATIC_BUILTIN _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVMethod_body_KindSet=SingleIS(builtinstaticK);
/*SPC(3419)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3METHOD_BODY_STATIC_BUILTIN(_TPPMETHOD_BODY_STATIC_BUILTIN _currn)
#else
void _VS3METHOD_BODY_STATIC_BUILTIN(_currn )
_TPPMETHOD_BODY_STATIC_BUILTIN _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVMethod_body_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkMETHOD_BODY_STATIC_BUILTIN_2, _currn->_desc1->_ATtree, (* _IG_incl118));
/*SPC(8181)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5METHOD_BODY_STATIC_BUILTIN(_TPPMETHOD_BODY_STATIC_BUILTIN _currn)
#else
void _VS5METHOD_BODY_STATIC_BUILTIN(_currn )
_TPPMETHOD_BODY_STATIC_BUILTIN _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_BODY_BUILTIN(_TPPMETHOD_BODY_BUILTIN _currn)
#else
void _VS1METHOD_BODY_BUILTIN(_currn )
_TPPMETHOD_BODY_BUILTIN _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVMethod_body_KindSet=NULLIS;
/*SPC(3415)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3METHOD_BODY_BUILTIN(_TPPMETHOD_BODY_BUILTIN _currn)
#else
void _VS3METHOD_BODY_BUILTIN(_currn )
_TPPMETHOD_BODY_BUILTIN _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVMethod_body_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkMETHOD_BODY_BUILTIN_2, _currn->_desc1->_ATtree, (* _IG_incl118));
/*SPC(8176)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5METHOD_BODY_BUILTIN(_TPPMETHOD_BODY_BUILTIN _currn)
#else
void _VS5METHOD_BODY_BUILTIN(_currn )
_TPPMETHOD_BODY_BUILTIN _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LINKER_SYMBOL(_TPPLINKER_SYMBOL _currn)
#else
void _VS1LINKER_SYMBOL(_currn )
_TPPLINKER_SYMBOL _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkLINKER_SYMBOL_2, _currn->_ATTERM_1, NoKey);
/*SPC(8171)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1LINKER_SYMBOL_EMPTY(_TPPLINKER_SYMBOL_EMPTY _currn)
#else
void _VS1LINKER_SYMBOL_EMPTY(_currn )
_TPPLINKER_SYMBOL_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkLINKER_SYMBOL_EMPTY_2, NoKey);
/*SPC(8167)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FOREIGN_LANGUAGE(_TPPFOREIGN_LANGUAGE _currn)
#else
void _VS1FOREIGN_LANGUAGE(_currn )
_TPPFOREIGN_LANGUAGE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkFOREIGN_LANGUAGE_2, _currn->_ATTERM_1, NoKey);
/*SPC(8162)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_BODY_FOREIGN(_TPPMETHOD_BODY_FOREIGN _currn)
#else
void _VS1METHOD_BODY_FOREIGN(_currn )
_TPPMETHOD_BODY_FOREIGN _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVMethod_body_KindSet=NULLIS;
/*SPC(3415)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3METHOD_BODY_FOREIGN(_TPPMETHOD_BODY_FOREIGN _currn)
#else
void _VS3METHOD_BODY_FOREIGN(_currn )
_TPPMETHOD_BODY_FOREIGN _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVMethod_body_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkMETHOD_BODY_FOREIGN_2, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8156)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_BODY_AB(_TPPMETHOD_BODY_AB _currn)
#else
void _VS1METHOD_BODY_AB(_currn )
_TPPMETHOD_BODY_AB _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVMethod_body_KindSet=NULLIS;
/*SPC(3415)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3METHOD_BODY_AB(_TPPMETHOD_BODY_AB _currn)
#else
void _VS3METHOD_BODY_AB(_currn )
_TPPMETHOD_BODY_AB _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVMethod_body_tree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkMETHOD_BODY_AB_2, NoKey);
/*SPC(8152)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_BODY(_TPPMETHOD_BODY _currn)
#else
void _VS1METHOD_BODY(_currn )
_TPPMETHOD_BODY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVMethod_body_KindSet=NULLIS;
/*SPC(3415)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2METHOD_BODY(_TPPMETHOD_BODY _currn)
#else
void _VS2METHOD_BODY(_currn )
_TPPMETHOD_BODY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3METHOD_BODY(_TPPMETHOD_BODY _currn)
#else
void _VS3METHOD_BODY(_currn )
_TPPMETHOD_BODY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVMethod_body_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkMETHOD_BODY_2, _currn->_desc1->_ATtree, (* _IG_incl118));
/*SPC(8147)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4METHOD_BODY(_TPPMETHOD_BODY _currn)
#else
void _VS4METHOD_BODY(_currn )
_TPPMETHOD_BODY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5METHOD_BODY(_TPPMETHOD_BODY _currn)
#else
void _VS5METHOD_BODY(_currn )
_TPPMETHOD_BODY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_SPEC(_TPPPARAMETER_SPEC _currn)
#else
void _VS1PARAMETER_SPEC(_currn )
_TPPPARAMETER_SPEC _currn;

#endif
{
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_AVAttribute_specification_KindSet=AddElIS(parameterK, _AS1KindSet);
/*SPC(3482)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2PARAMETER_SPEC(_TPPPARAMETER_SPEC _currn)
#else
void _VS2PARAMETER_SPEC(_currn )
_TPPPARAMETER_SPEC _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVParameter_specification_2Params_post=AppDefTableKeyList(_AVParameter_specification_2Params_post, _AVAttribute_specification_IdList);
/*SPC(7199)*/
_AVParameter_specification_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkPARAMETER_SPEC_2, _currn->_desc1->_ATtree, _AVAttribute_specification_tree, NoKey);
/*SPC(8141)*/
_AVparameter_specificationparameters_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2PARAMETERS_2, _AVparameter_specificationparameters_tree_post, _AVParameter_specification_tree, NoKey);
/*SPC(8139)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3PARAMETER_SPEC(_TPPPARAMETER_SPEC _currn)
#else
void _VS3PARAMETER_SPEC(_currn )
_TPPPARAMETER_SPEC _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4PARAMETER_SPEC(_TPPPARAMETER_SPEC _currn)
#else
void _VS4PARAMETER_SPEC(_currn )
_TPPPARAMETER_SPEC _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETERS(_TPPPARAMETERS _currn)
#else
void _VS1PARAMETERS(_currn )
_TPPPARAMETERS _currn;

#endif
{
int* _IL_incl137;
Environment* _IL_incl0;

_VisitVarDecl()
_VisitEntry();
_IL_incl137=_IG_incl137;_IG_incl137= &(_currn->_ATIsParamDecl);
_IL_incl0=_IG_incl0;_IG_incl0= &(_currn->_ATInhEnv);
_currn->_ATIsParamDecl=1;
/*SPC(4195)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl137=_IL_incl137;
_IG_incl0=_IL_incl0;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2PARAMETERS(_TPPPARAMETERS _currn)
#else
void _VS2PARAMETERS(_currn )
_TPPPARAMETERS _currn;

#endif
{
int* _IL_incl137;
Environment* _IL_incl0;

_VisitVarDecl()
_VisitEntry();
_IL_incl137=_IG_incl137;_IG_incl137= &(_currn->_ATIsParamDecl);
_IL_incl0=_IG_incl0;_IG_incl0= &(_currn->_ATInhEnv);
_AVparameter_specificationparameters_tree_post=NULL;
/*SPC(8134)*/
_AVParameter_specification_2Params_post=NULLDefTableKeyList;
/*SPC(7194)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkPARAMETERS_2, _AVparameter_specificationparameters_tree_post, NoKey);
/*SPC(8135)*/
_AVParameters_ParamList=_AVParameter_specification_2Params_post;
/*SPC(7195)*/
_IG_incl137=_IL_incl137;
_IG_incl0=_IL_incl0;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3PARAMETERS(_TPPPARAMETERS _currn)
#else
void _VS3PARAMETERS(_currn )
_TPPPARAMETERS _currn;

#endif
{
int* _IL_incl137;
Environment* _IL_incl0;

_VisitVarDecl()
_VisitEntry();
_IL_incl137=_IG_incl137;_IG_incl137= &(_currn->_ATIsParamDecl);
_IL_incl0=_IG_incl0;_IG_incl0= &(_currn->_ATInhEnv);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl137=_IL_incl137;
_IG_incl0=_IL_incl0;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4PARAMETERS(_TPPPARAMETERS _currn)
#else
void _VS4PARAMETERS(_currn )
_TPPPARAMETERS _currn;

#endif
{
int* _IL_incl137;
Environment* _IL_incl0;

_VisitVarDecl()
_VisitEntry();
_IL_incl137=_IG_incl137;_IG_incl137= &(_currn->_ATIsParamDecl);
_IL_incl0=_IG_incl0;_IG_incl0= &(_currn->_ATInhEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl137=_IL_incl137;
_IG_incl0=_IL_incl0;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5PARAMETERS(_TPPPARAMETERS _currn)
#else
void _VS5PARAMETERS(_currn )
_TPPPARAMETERS _currn;

#endif
{
int* _IL_incl137;
Environment* _IL_incl0;

_VisitVarDecl()
_VisitEntry();
_IL_incl137=_IG_incl137;_IG_incl137= &(_currn->_ATIsParamDecl);
_IL_incl0=_IG_incl0;_IG_incl0= &(_currn->_ATInhEnv);
_IG_incl137=_IL_incl137;
_IG_incl0=_IL_incl0;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_IDENT_DEF(_TPPMETHOD_IDENT_DEF _currn)
#else
void _VS1METHOD_IDENT_DEF(_currn )
_TPPMETHOD_IDENT_DEF _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVMethod_ident_def_Sym=_currn->_ATTERM_1;
/*SPC(4239)*/
_AVMethod_ident_def_Bind=BindIdn((* _IG_incl0), _AVMethod_ident_def_Sym);
/*SPC(12206)*/
_currn->_ATKey=AddMethodBinding((&( _currn->_AT_pos)), KeyOf(_AVMethod_ident_def_Bind));
/*SPC(4020)*/
UnionKindSet(_currn->_ATKey, _AVMethod_ident_def_KindSet);
/*SPC(12151)*/
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkMETHOD_IDENT_DEF_2, _currn->_ATTERM_1, _currn->_ATKey);
/*SPC(8129)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_DECL(_TPPMETHOD_DECL _currn)
#else
void _VS1METHOD_DECL(_currn )
_TPPMETHOD_DECL _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_desc2->_ATInhEnv=NewScope((* _IG_incl0));
/*SPC(12185)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4);
_AVMethod_ident_def_KindSet=UniteIS(_currn->_ATKindSet, _AVMethod_body_KindSet);
/*SPC(3411)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2METHOD_DECL(_TPPMETHOD_DECL _currn)
#else
void _VS2METHOD_DECL(_currn )
_TPPMETHOD_DECL _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4);
ResetType(KResetParams(KResetResultType(_currn->_desc1->_ATKey, _currn->_desc3->_ATType), _AVParameters_ParamList), NewType(_currn->_desc1->_ATKey, _currn->_ATKindSet, MakeName("method")));
/*SPC(7163)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3METHOD_DECL(_TPPMETHOD_DECL _currn)
#else
void _VS3METHOD_DECL(_currn )
_TPPMETHOD_DECL _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4);
_AVMethod_decl_tree=NewTreeNodeRhs_4_0((&( _currn->_AT_pos)), MkMETHOD_DECL_2, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, _currn->_desc3->_ATtree, _AVMethod_body_tree, NoKey);
/*SPC(8123)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4METHOD_DECL(_TPPMETHOD_DECL _currn)
#else
void _VS4METHOD_DECL(_currn )
_TPPMETHOD_DECL _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5METHOD_DECL(_TPPMETHOD_DECL _currn)
#else
void _VS5METHOD_DECL(_currn )
_TPPMETHOD_DECL _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc4->_prod])))((NODEPTR) _currn->_desc4);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1IDENTIFIERS(_TPPIDENTIFIERS _currn,IntSet* _AS0KindSet)
#else
void _VS1IDENTIFIERS(_currn ,_AS0KindSet)
_TPPIDENTIFIERS _currn;
IntSet* _AS0KindSet;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_AVIdent_def_KindSet=(* _AS0KindSet);
/*SPC(3434)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2IDENTIFIERS(_TPPIDENTIFIERS _currn,IntSet* _AS0KindSet)
#else
void _VS2IDENTIFIERS(_currn ,_AS0KindSet)
_TPPIDENTIFIERS _currn;
IntSet* _AS0KindSet;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVIdentifiers_2IdKeys_post=AppElDefTableKeyList(_AVIdentifiers_2IdKeys_post, _currn->_desc1->_ATKey);
/*SPC(7190)*/
_AVIdentifiers_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkIDENTIFIERS_2, _AS1tree, NoKey);
/*SPC(8119)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3IDENTIFIERS(_TPPIDENTIFIERS _currn,IntSet* _AS0KindSet)
#else
void _VS3IDENTIFIERS(_currn ,_AS0KindSet)
_TPPIDENTIFIERS _currn;
IntSet* _AS0KindSet;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4IDENTIFIERS(_TPPIDENTIFIERS _currn,IntSet* _AS0KindSet)
#else
void _VS4IDENTIFIERS(_currn ,_AS0KindSet)
_TPPIDENTIFIERS _currn;
IntSet* _AS0KindSet;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1IDENTIFIERS_LST(_TPPIDENTIFIERS_LST _currn,IntSet* _AS0KindSet)
#else
void _VS1IDENTIFIERS_LST(_currn ,_AS0KindSet)
_TPPIDENTIFIERS_LST _currn;
IntSet* _AS0KindSet;

#endif
{
TreeNodePtr _AS2tree;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_AS1KindSet=(* _AS0KindSet);
/*SPC(3431)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_AVIdent_def_KindSet=(* _AS0KindSet);
/*SPC(3430)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2IDENTIFIERS_LST(_TPPIDENTIFIERS_LST _currn,IntSet* _AS0KindSet)
#else
void _VS2IDENTIFIERS_LST(_currn ,_AS0KindSet)
_TPPIDENTIFIERS_LST _currn;
IntSet* _AS0KindSet;

#endif
{
TreeNodePtr _AS2tree;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVIdentifiers_2IdKeys_post=AppElDefTableKeyList(_AVIdentifiers_2IdKeys_post, _currn->_desc2->_ATKey);
/*SPC(7186)*/
_AVIdentifiers_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkIDENTIFIERS_LST_2, _AVIdentifiers_tree, _AS2tree, NoKey);
/*SPC(8113)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3IDENTIFIERS_LST(_TPPIDENTIFIERS_LST _currn,IntSet* _AS0KindSet)
#else
void _VS3IDENTIFIERS_LST(_currn ,_AS0KindSet)
_TPPIDENTIFIERS_LST _currn;
IntSet* _AS0KindSet;

#endif
{
TreeNodePtr _AS2tree;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4IDENTIFIERS_LST(_TPPIDENTIFIERS_LST _currn,IntSet* _AS0KindSet)
#else
void _VS4IDENTIFIERS_LST(_currn ,_AS0KindSet)
_TPPIDENTIFIERS_LST _currn;
IntSet* _AS0KindSet;

#endif
{
TreeNodePtr _AS2tree;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_SPEC(_TPPATTR_SPEC _currn)
#else
void _VS1ATTR_SPEC(_currn )
_TPPATTR_SPEC _currn;

#endif
{
STPtr* _IL_incl135;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATType=_currn->_desc2->_ATType;
/*SPC(10516)*/
_AS1KindSet=_AVAttribute_specification_KindSet;
/*SPC(3478)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_SPEC(_TPPATTR_SPEC _currn)
#else
void _VS2ATTR_SPEC(_currn )
_TPPATTR_SPEC _currn;

#endif
{
STPtr* _IL_incl135;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
_AVIdentifiers_2IdKeys_post=NULLDefTableKeyList;
/*SPC(7181)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_AVAttribute_specification_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkATTR_SPEC_2, _AVIdentifiers_tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8108)*/
_AVAttribute_specification_IdList=_AVIdentifiers_2IdKeys_post;
/*SPC(7182)*/
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_SPEC(_TPPATTR_SPEC _currn)
#else
void _VS3ATTR_SPEC(_currn )
_TPPATTR_SPEC _currn;

#endif
{
STPtr* _IL_incl135;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ATTR_SPEC(_TPPATTR_SPEC _currn)
#else
void _VS4ATTR_SPEC(_currn )
_TPPATTR_SPEC _currn;

#endif
{
STPtr* _IL_incl135;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_DECL_CONST_TYPE_CONST(_TPPATTR_DECL_CONST_TYPE_CONST _currn)
#else
void _VS1ATTR_DECL_CONST_TYPE_CONST(_currn )
_TPPATTR_DECL_CONST_TYPE_CONST _currn;

#endif
{
STPtr* _IL_incl135;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATType=_AVType_constructor_Type;
/*SPC(10536)*/
_AS1KindSet=AddElIS(constantK, _AVAttribute_declaration_KindSet);
/*SPC(3474)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_DECL_CONST_TYPE_CONST(_TPPATTR_DECL_CONST_TYPE_CONST _currn)
#else
void _VS2ATTR_DECL_CONST_TYPE_CONST(_currn )
_TPPATTR_DECL_CONST_TYPE_CONST _currn;

#endif
{
STPtr* _IL_incl135;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
_AVIdentifiers_2IdKeys_post=NULLDefTableKeyList;
/*SPC(7177)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkATTR_DECL_CONST_TYPE_CONST_2, _AVIdentifiers_tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8102)*/
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_DECL_CONST_TYPE_CONST(_TPPATTR_DECL_CONST_TYPE_CONST _currn)
#else
void _VS3ATTR_DECL_CONST_TYPE_CONST(_currn )
_TPPATTR_DECL_CONST_TYPE_CONST _currn;

#endif
{
STPtr* _IL_incl135;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ATTR_DECL_CONST_TYPE_CONST(_TPPATTR_DECL_CONST_TYPE_CONST _currn)
#else
void _VS4ATTR_DECL_CONST_TYPE_CONST(_currn )
_TPPATTR_DECL_CONST_TYPE_CONST _currn;

#endif
{
STPtr* _IL_incl135;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_DECL_TYPE_CONST(_TPPATTR_DECL_TYPE_CONST _currn)
#else
void _VS1ATTR_DECL_TYPE_CONST(_currn )
_TPPATTR_DECL_TYPE_CONST _currn;

#endif
{
STPtr* _IL_incl135;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATType=_AVType_constructor_Type;
/*SPC(10532)*/
_AS1KindSet=_AVAttribute_declaration_KindSet;
/*SPC(3470)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_DECL_TYPE_CONST(_TPPATTR_DECL_TYPE_CONST _currn)
#else
void _VS2ATTR_DECL_TYPE_CONST(_currn )
_TPPATTR_DECL_TYPE_CONST _currn;

#endif
{
STPtr* _IL_incl135;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
_AVIdentifiers_2IdKeys_post=NULLDefTableKeyList;
/*SPC(7173)*/
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkATTR_DECL_TYPE_CONST_2, _AVIdentifiers_tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8096)*/
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_DECL_TYPE_CONST(_TPPATTR_DECL_TYPE_CONST _currn)
#else
void _VS3ATTR_DECL_TYPE_CONST(_currn )
_TPPATTR_DECL_TYPE_CONST _currn;

#endif
{
STPtr* _IL_incl135;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ATTR_DECL_TYPE_CONST(_TPPATTR_DECL_TYPE_CONST _currn)
#else
void _VS4ATTR_DECL_TYPE_CONST(_currn )
_TPPATTR_DECL_TYPE_CONST _currn;

#endif
{
STPtr* _IL_incl135;
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_DECL_CONST_EXP(_TPPATTR_DECL_CONST_EXP _currn)
#else
void _VS1ATTR_DECL_CONST_EXP(_currn )
_TPPATTR_DECL_CONST_EXP _currn;

#endif
{
STPtr* _IL_incl135;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
_AVAttribute_specification_KindSet=AddElIS(constantK, _AVAttribute_declaration_KindSet);
/*SPC(3466)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATType=_currn->_desc1->_ATType;
/*SPC(10528)*/
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_DECL_CONST_EXP(_TPPATTR_DECL_CONST_EXP _currn)
#else
void _VS2ATTR_DECL_CONST_EXP(_currn )
_TPPATTR_DECL_CONST_EXP _currn;

#endif
{
STPtr* _IL_incl135;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkATTR_DECL_CONST_EXP_2, _AVAttribute_specification_tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8090)*/
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_DECL_CONST_EXP(_TPPATTR_DECL_CONST_EXP _currn)
#else
void _VS3ATTR_DECL_CONST_EXP(_currn )
_TPPATTR_DECL_CONST_EXP _currn;

#endif
{
STPtr* _IL_incl135;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ATTR_DECL_CONST_EXP(_TPPATTR_DECL_CONST_EXP _currn)
#else
void _VS4ATTR_DECL_CONST_EXP(_currn )
_TPPATTR_DECL_CONST_EXP _currn;

#endif
{
STPtr* _IL_incl135;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_DECL_EXP(_TPPATTR_DECL_EXP _currn)
#else
void _VS1ATTR_DECL_EXP(_currn )
_TPPATTR_DECL_EXP _currn;

#endif
{
STPtr* _IL_incl135;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
_AVAttribute_specification_KindSet=_AVAttribute_declaration_KindSet;
/*SPC(3462)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATType=_currn->_desc1->_ATType;
/*SPC(10524)*/
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_DECL_EXP(_TPPATTR_DECL_EXP _currn)
#else
void _VS2ATTR_DECL_EXP(_currn )
_TPPATTR_DECL_EXP _currn;

#endif
{
STPtr* _IL_incl135;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkATTR_DECL_EXP_2, _AVAttribute_specification_tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(8084)*/
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_DECL_EXP(_TPPATTR_DECL_EXP _currn)
#else
void _VS3ATTR_DECL_EXP(_currn )
_TPPATTR_DECL_EXP _currn;

#endif
{
STPtr* _IL_incl135;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ATTR_DECL_EXP(_TPPATTR_DECL_EXP _currn)
#else
void _VS4ATTR_DECL_EXP(_currn )
_TPPATTR_DECL_EXP _currn;

#endif
{
STPtr* _IL_incl135;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_DECL(_TPPATTR_DECL _currn)
#else
void _VS1ATTR_DECL(_currn )
_TPPATTR_DECL _currn;

#endif
{
STPtr* _IL_incl135;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
_AVAttribute_specification_KindSet=_AVAttribute_declaration_KindSet;
/*SPC(3458)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATType=_currn->_desc1->_ATType;
/*SPC(10520)*/
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ATTR_DECL(_TPPATTR_DECL _currn)
#else
void _VS2ATTR_DECL(_currn )
_TPPATTR_DECL _currn;

#endif
{
STPtr* _IL_incl135;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkATTR_DECL_2, _AVAttribute_specification_tree, NoKey);
/*SPC(8079)*/
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3ATTR_DECL(_TPPATTR_DECL _currn)
#else
void _VS3ATTR_DECL(_currn )
_TPPATTR_DECL _currn;

#endif
{
STPtr* _IL_incl135;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4ATTR_DECL(_TPPATTR_DECL _currn)
#else
void _VS4ATTR_DECL(_currn )
_TPPATTR_DECL _currn;

#endif
{
STPtr* _IL_incl135;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl135=_IL_incl135;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_ACCESS_SH_RO(_TPPATTR_ACCESS_SH_RO _currn)
#else
void _VS1ATTR_ACCESS_SH_RO(_currn )
_TPPATTR_ACCESS_SH_RO _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkATTR_ACCESS_SH_RO_2, NoKey);
/*SPC(8075)*/
_AVAttribute_access_type_KindSet=AddElIS(readonlyK, AddElIS(sharedK, NULLIS));
/*SPC(3445)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_ACCESS_RO(_TPPATTR_ACCESS_RO _currn)
#else
void _VS1ATTR_ACCESS_RO(_currn )
_TPPATTR_ACCESS_RO _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkATTR_ACCESS_RO_2, NoKey);
/*SPC(8071)*/
_AVAttribute_access_type_KindSet=SingleIS(readonlyK);
/*SPC(3441)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ATTR_ACCESS_SH(_TPPATTR_ACCESS_SH _currn)
#else
void _VS1ATTR_ACCESS_SH(_currn )
_TPPATTR_ACCESS_SH _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkATTR_ACCESS_SH_2, NoKey);
/*SPC(8067)*/
_AVAttribute_access_type_KindSet=SingleIS(sharedK);
/*SPC(3438)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_STREAM(_TPPFEATURE_STREAM _currn)
#else
void _VS1FEATURE_STREAM(_currn )
_TPPFEATURE_STREAM _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
_currn->_ATIsAttributeDecl=0;
/*SPC(3994)*/
_currn->_desc1->_ATKindSet=AddElIS(methodK, AddElIS(streamK, _AVFeature_KindSet));
/*SPC(3407)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_STREAM(_TPPFEATURE_STREAM _currn)
#else
void _VS2FEATURE_STREAM(_currn )
_TPPFEATURE_STREAM _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_STREAM(_TPPFEATURE_STREAM _currn)
#else
void _VS3FEATURE_STREAM(_currn )
_TPPFEATURE_STREAM _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVFeature_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkFEATURE_STREAM_2, _AVMethod_decl_tree, NoKey);
/*SPC(8063)*/
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_STREAM(_TPPFEATURE_STREAM _currn)
#else
void _VS4FEATURE_STREAM(_currn )
_TPPFEATURE_STREAM _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5FEATURE_STREAM(_TPPFEATURE_STREAM _currn)
#else
void _VS5FEATURE_STREAM(_currn )
_TPPFEATURE_STREAM _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_METH(_TPPFEATURE_METH _currn)
#else
void _VS1FEATURE_METH(_currn )
_TPPFEATURE_METH _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
_currn->_ATIsAttributeDecl=0;
/*SPC(3994)*/
_currn->_desc1->_ATKindSet=AddElIS(methodK, AddElIS(procedureK, _AVFeature_KindSet));
/*SPC(3403)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_METH(_TPPFEATURE_METH _currn)
#else
void _VS2FEATURE_METH(_currn )
_TPPFEATURE_METH _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_METH(_TPPFEATURE_METH _currn)
#else
void _VS3FEATURE_METH(_currn )
_TPPFEATURE_METH _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVFeature_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkFEATURE_METH_2, _AVMethod_decl_tree, NoKey);
/*SPC(8059)*/
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_METH(_TPPFEATURE_METH _currn)
#else
void _VS4FEATURE_METH(_currn )
_TPPFEATURE_METH _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5FEATURE_METH(_TPPFEATURE_METH _currn)
#else
void _VS5FEATURE_METH(_currn )
_TPPFEATURE_METH _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_ATT(_TPPFEATURE_ATT _currn)
#else
void _VS1FEATURE_ATT(_currn )
_TPPFEATURE_ATT _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
_currn->_ATIsAttributeDecl=1;
/*SPC(4002)*/
_AVAttribute_declaration_KindSet=AddElIS(attributeK, _AVFeature_KindSet);
/*SPC(3454)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_ATT(_TPPFEATURE_ATT _currn)
#else
void _VS2FEATURE_ATT(_currn )
_TPPFEATURE_ATT _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_ATT(_TPPFEATURE_ATT _currn)
#else
void _VS3FEATURE_ATT(_currn )
_TPPFEATURE_ATT _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
_AVFeature_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkFEATURE_ATT_2, _currn->_desc1->_ATtree, (* _IG_incl122));
/*SPC(8054)*/
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_ATT(_TPPFEATURE_ATT _currn)
#else
void _VS4FEATURE_ATT(_currn )
_TPPFEATURE_ATT _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5FEATURE_ATT(_TPPFEATURE_ATT _currn)
#else
void _VS5FEATURE_ATT(_currn )
_TPPFEATURE_ATT _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_ATT_ACC(_TPPFEATURE_ATT_ACC _currn)
#else
void _VS1FEATURE_ATT_ACC(_currn )
_TPPFEATURE_ATT_ACC _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATIsAttributeDecl=1;
/*SPC(3998)*/
_AVAttribute_declaration_KindSet=UniteIS(_AVFeature_KindSet, AddElIS(attributeK, _AVAttribute_access_type_KindSet));
/*SPC(3449)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_ATT_ACC(_TPPFEATURE_ATT_ACC _currn)
#else
void _VS2FEATURE_ATT_ACC(_currn )
_TPPFEATURE_ATT_ACC _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_ATT_ACC(_TPPFEATURE_ATT_ACC _currn)
#else
void _VS3FEATURE_ATT_ACC(_currn )
_TPPFEATURE_ATT_ACC _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
_AVFeature_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkFEATURE_ATT_ACC_2, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, (* _IG_incl122));
/*SPC(8049)*/
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_ATT_ACC(_TPPFEATURE_ATT_ACC _currn)
#else
void _VS4FEATURE_ATT_ACC(_currn )
_TPPFEATURE_ATT_ACC _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5FEATURE_ATT_ACC(_TPPFEATURE_ATT_ACC _currn)
#else
void _VS5FEATURE_ATT_ACC(_currn )
_TPPFEATURE_ATT_ACC _currn;

#endif
{
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_DECL_PRIV(_TPPFEATURE_DECL_PRIV _currn)
#else
void _VS1FEATURE_DECL_PRIV(_currn )
_TPPFEATURE_DECL_PRIV _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVFeature_KindSet=AddElIS(featureK, SingleIS(privateK));
/*SPC(3399)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_DECL_PRIV(_TPPFEATURE_DECL_PRIV _currn)
#else
void _VS2FEATURE_DECL_PRIV(_currn )
_TPPFEATURE_DECL_PRIV _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_DECL_PRIV(_TPPFEATURE_DECL_PRIV _currn)
#else
void _VS3FEATURE_DECL_PRIV(_currn )
_TPPFEATURE_DECL_PRIV _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVFeature_declaration_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkFEATURE_DECL_PRIV_2, _AVFeature_tree, NoKey);
/*SPC(8044)*/
_AVfeature_declarationfeature_decls_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2FEATURE_DECLS_2, _AVfeature_declarationfeature_decls_tree_post, _AVFeature_declaration_tree, NoKey);
/*SPC(8034)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_DECL_PRIV(_TPPFEATURE_DECL_PRIV _currn)
#else
void _VS4FEATURE_DECL_PRIV(_currn )
_TPPFEATURE_DECL_PRIV _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5FEATURE_DECL_PRIV(_TPPFEATURE_DECL_PRIV _currn)
#else
void _VS5FEATURE_DECL_PRIV(_currn )
_TPPFEATURE_DECL_PRIV _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_DECL(_TPPFEATURE_DECL _currn)
#else
void _VS1FEATURE_DECL(_currn )
_TPPFEATURE_DECL _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVFeature_KindSet=SingleIS(featureK);
/*SPC(3395)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_DECL(_TPPFEATURE_DECL _currn)
#else
void _VS2FEATURE_DECL(_currn )
_TPPFEATURE_DECL _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_DECL(_TPPFEATURE_DECL _currn)
#else
void _VS3FEATURE_DECL(_currn )
_TPPFEATURE_DECL _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVFeature_declaration_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkFEATURE_DECL_2, _AVFeature_tree, NoKey);
/*SPC(8039)*/
_AVfeature_declarationfeature_decls_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2FEATURE_DECLS_2, _AVfeature_declarationfeature_decls_tree_post, _AVFeature_declaration_tree, NoKey);
/*SPC(8034)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_DECL(_TPPFEATURE_DECL _currn)
#else
void _VS4FEATURE_DECL(_currn )
_TPPFEATURE_DECL _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5FEATURE_DECL(_TPPFEATURE_DECL _currn)
#else
void _VS5FEATURE_DECL(_currn )
_TPPFEATURE_DECL _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_DECLS(_TPPFEATURE_DECLS _currn)
#else
void _VS1FEATURE_DECLS(_currn )
_TPPFEATURE_DECLS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_DECLS(_TPPFEATURE_DECLS _currn)
#else
void _VS2FEATURE_DECLS(_currn )
_TPPFEATURE_DECLS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3FEATURE_DECLS(_TPPFEATURE_DECLS _currn)
#else
void _VS3FEATURE_DECLS(_currn )
_TPPFEATURE_DECLS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVfeature_declarationfeature_decls_tree_post=NULL;
/*SPC(8025)*/
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVFeature_declarations_org_tree=_AVfeature_declarationfeature_decls_tree_post;
/*SPC(8030)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4FEATURE_DECLS(_TPPFEATURE_DECLS _currn)
#else
void _VS4FEATURE_DECLS(_currn )
_TPPFEATURE_DECLS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVFeature_declarations_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkFEATURE_DECLS_2, GetFeatureTree((* _IG_incl123), NULL), NoKey);
/*SPC(8026)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5FEATURE_DECLS(_TPPFEATURE_DECLS _currn)
#else
void _VS5FEATURE_DECLS(_currn )
_TPPFEATURE_DECLS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_ID_USE(_TPPFEATURE_ID_USE _currn)
#else
void _VS1FEATURE_ID_USE(_currn )
_TPPFEATURE_ID_USE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVFeature_id_use_Sym=_currn->_ATTERM_1;
/*SPC(4239)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_SPEC_STREAM(_TPPFEATURE_SPEC_STREAM _currn)
#else
void _VS1FEATURE_SPEC_STREAM(_currn )
_TPPFEATURE_SPEC_STREAM _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVFeature_specification_ModKey=
(ResetKindSet(_AVMethod_specification_Key, SingleIS(streamK)), ResetSym(_AVMethod_specification_Key, _AVFeature_id_use_Sym), _AVMethod_specification_Key)
;
/*SPC(3827)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_SPEC_STREAM(_TPPFEATURE_SPEC_STREAM _currn)
#else
void _VS2FEATURE_SPEC_STREAM(_currn )
_TPPFEATURE_SPEC_STREAM _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1FEATURE_SPEC(_TPPFEATURE_SPEC _currn)
#else
void _VS1FEATURE_SPEC(_currn )
_TPPFEATURE_SPEC _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVFeature_specification_ModKey=
(ResetKindSet(_AVMethod_specification_Key, SingleIS(procedureK)), ResetSym(_AVMethod_specification_Key, _AVFeature_id_use_Sym), _AVMethod_specification_Key)
;
/*SPC(3820)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2FEATURE_SPEC(_TPPFEATURE_SPEC _currn)
#else
void _VS2FEATURE_SPEC(_currn )
_TPPFEATURE_SPEC _currn;

#endif
{
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1IDENT_MOD(_TPPIDENT_MOD _currn)
#else
void _VS1IDENT_MOD(_currn )
_TPPIDENT_MOD _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVIdent_mod_Sym=_currn->_ATTERM_1;
/*SPC(4239)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1MODIFICATION_NAME(_TPPMODIFICATION_NAME _currn)
#else
void _VS1MODIFICATION_NAME(_currn )
_TPPMODIFICATION_NAME _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVModification_ModKey=KResetModSym(_AVFeature_specification_ModKey, _AVIdent_mod_Sym);
/*SPC(3846)*/
_AVModificationModInfos_post=ConsDefTableKeyList(KResetType(KResetPos(_AVModification_ModKey, (&( _currn->_AT_pos))), NewType(_AVModification_ModKey, GetKindSet(_AVModification_ModKey, NULLIS), MakeName("method"))), _AVModificationModInfos_post);
/*SPC(3850)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2MODIFICATION_NAME(_TPPMODIFICATION_NAME _currn)
#else
void _VS2MODIFICATION_NAME(_currn )
_TPPMODIFICATION_NAME _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1MODIFICATION_OUT(_TPPMODIFICATION_OUT _currn)
#else
void _VS1MODIFICATION_OUT(_currn )
_TPPMODIFICATION_OUT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVModification_ModKey=_AVFeature_specification_ModKey;
/*SPC(3838)*/
_AVModificationModInfos_post=ConsDefTableKeyList(KResetType(KResetPos(_AVModification_ModKey, (&( _currn->_AT_pos))), NewType(_AVModification_ModKey, GetKindSet(_AVModification_ModKey, NULLIS), MakeName("method"))), _AVModificationModInfos_post);
/*SPC(3850)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2MODIFICATION_OUT(_TPPMODIFICATION_OUT _currn)
#else
void _VS2MODIFICATION_OUT(_currn )
_TPPMODIFICATION_OUT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

if ((* _IG_incl125)) {
message(ERROR, "must not delete identifier by modification in an only inheritance", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(3842)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1MODIFICATION_ONLY(_TPPMODIFICATION_ONLY _currn)
#else
void _VS1MODIFICATION_ONLY(_currn )
_TPPMODIFICATION_ONLY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVModification_ModKey=_AVFeature_specification_ModKey;
/*SPC(3834)*/
_AVModificationModInfos_post=ConsDefTableKeyList(KResetType(KResetPos(_AVModification_ModKey, (&( _currn->_AT_pos))), NewType(_AVModification_ModKey, GetKindSet(_AVModification_ModKey, NULLIS), MakeName("method"))), _AVModificationModInfos_post);
/*SPC(3850)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2MODIFICATION_ONLY(_TPPMODIFICATION_ONLY _currn)
#else
void _VS2MODIFICATION_ONLY(_currn )
_TPPMODIFICATION_ONLY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1MODIFICATIONS(_TPPMODIFICATIONS _currn)
#else
void _VS1MODIFICATIONS(_currn )
_TPPMODIFICATIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVModificationModInfos_post=NULLDefTableKeyList;
/*SPC(3809)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVModifications_ModInfoList=_AVModificationModInfos_post;
/*SPC(3810)*/

_VisitExit();
}

