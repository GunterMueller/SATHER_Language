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
void _VS1INHERITANCE_INC_ONLY(_TPPINHERITANCE_INC_ONLY _currn,int* _AS0_const118)
#else
void _VS1INHERITANCE_INC_ONLY(_currn ,_AS0_const118)
_TPPINHERITANCE_INC_ONLY _currn;
int* _AS0_const118;

#endif
{
int* _IL_incl125;
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
_IL_incl125=_IG_incl125;_IG_incl125= &(_currn->_ATIsOnly);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const118)=_AS1_const118;
/*SPC(3168)*/
_currn->_AT_const120=_AVModifications_ModInfoList;
/*SPC(3168)*/
_currn->_ATIsOnly=1;
/*SPC(3279)*/
_currn->_ATIsPrivate=0;
/*SPC(3265)*/
_currn->_ATIsSubType=0;
/*SPC(3284)*/
_currn->_ATKey=_AS1Key;
/*SPC(3169)*/
_currn->_ATNumBounds=_AS1_const118;
/*SPC(2967)*/
_currn->_ATBoundsFrom=
((NOT(EQ(_currn->_ATNumBounds, 0))
) ? (_currn->_ATKey
) : (NoKey))
;
/*SPC(3005)*/
_IG_incl125=_IL_incl125;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2INHERITANCE_INC_ONLY(_TPPINHERITANCE_INC_ONLY _currn,int* _AS0_const118)
#else
void _VS2INHERITANCE_INC_ONLY(_currn ,_AS0_const118)
_TPPINHERITANCE_INC_ONLY _currn;
int* _AS0_const118;

#endif
{
int* _IL_incl125;
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
_IL_incl125=_IG_incl125;_IG_incl125= &(_currn->_ATIsOnly);
_AVInheritance_tree=NULL;
/*SPC(8014)*/
_AVInheritance_BoundsFromFix=_currn->_ATKey;

_CYCLE0BoundsFromFix:;
;
/*SPC(3074)*/
_AVInheritance_BoundsTree=GetBoundsTree(_AVInheritance_BoundsFromFix, NULL);
/*SPC(3084)*/

if (!(EQ(_AVInheritance_BoundsFromFix, GetGetsBoundsFrom(_AVInheritance_BoundsFromFix, NoKey)))) {
_AVInheritance_BoundsFromFix=GetGetsBoundsFrom(_AVInheritance_BoundsFromFix, NoKey);

goto _CYCLE0BoundsFromFix;
}
;
/*SPC(3079)*/
_IG_incl125=_IL_incl125;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3INHERITANCE_INC_ONLY(_TPPINHERITANCE_INC_ONLY _currn,int* _AS0_const118,int* _AS0_const117)
#else
void _VS3INHERITANCE_INC_ONLY(_currn ,_AS0_const118,_AS0_const117)
_TPPINHERITANCE_INC_ONLY _currn;
int* _AS0_const117;
int* _AS0_const118;

#endif
{
int* _IL_incl125;
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
_IL_incl125=_IG_incl125;_IG_incl125= &(_currn->_ATIsOnly);
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)),(&( _AS1_const117)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const117)=_AS1_const117;
/*SPC(3168)*/
_AVInheritance_NumStars=_AS1_const117;
/*SPC(2971)*/

if (AND(NOT(EQ(_AVInheritance_NumStars, 0)), NOT(EQ(_AVInheritance_NumStars, _currn->_ATNumBounds)))) {
message(ERROR, "do not mix * and bound expressions in an inheritance clause", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(2979)*/
_IG_incl125=_IL_incl125;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1INHERITANCE_INCLUDE(_TPPINHERITANCE_INCLUDE _currn,int* _AS0_const118)
#else
void _VS1INHERITANCE_INCLUDE(_currn ,_AS0_const118)
_TPPINHERITANCE_INCLUDE _currn;
int* _AS0_const118;

#endif
{
int* _IL_incl125;
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
_IL_incl125=_IG_incl125;_IG_incl125= &(_currn->_ATIsOnly);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const118)=_AS1_const118;
/*SPC(3164)*/
_currn->_AT_const120=_AVModifications_ModInfoList;
/*SPC(3164)*/
_currn->_ATIsOnly=0;
/*SPC(3275)*/
_currn->_ATIsPrivate=0;
/*SPC(3265)*/
_currn->_ATIsSubType=0;
/*SPC(3284)*/
_currn->_ATKey=_AS1Key;
/*SPC(3165)*/
_currn->_ATNumBounds=_AS1_const118;
/*SPC(2967)*/
_currn->_ATBoundsFrom=
((NOT(EQ(_currn->_ATNumBounds, 0))
) ? (_currn->_ATKey
) : (NoKey))
;
/*SPC(3005)*/
_IG_incl125=_IL_incl125;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2INHERITANCE_INCLUDE(_TPPINHERITANCE_INCLUDE _currn,int* _AS0_const118)
#else
void _VS2INHERITANCE_INCLUDE(_currn ,_AS0_const118)
_TPPINHERITANCE_INCLUDE _currn;
int* _AS0_const118;

#endif
{
int* _IL_incl125;
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
_IL_incl125=_IG_incl125;_IG_incl125= &(_currn->_ATIsOnly);
_AVInheritance_tree=NULL;
/*SPC(8010)*/
_AVInheritance_BoundsFromFix=_currn->_ATKey;

_CYCLE0BoundsFromFix:;
;
/*SPC(3074)*/
_AVInheritance_BoundsTree=GetBoundsTree(_AVInheritance_BoundsFromFix, NULL);
/*SPC(3084)*/

if (!(EQ(_AVInheritance_BoundsFromFix, GetGetsBoundsFrom(_AVInheritance_BoundsFromFix, NoKey)))) {
_AVInheritance_BoundsFromFix=GetGetsBoundsFrom(_AVInheritance_BoundsFromFix, NoKey);

goto _CYCLE0BoundsFromFix;
}
;
/*SPC(3079)*/
_IG_incl125=_IL_incl125;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3INHERITANCE_INCLUDE(_TPPINHERITANCE_INCLUDE _currn,int* _AS0_const118,int* _AS0_const117)
#else
void _VS3INHERITANCE_INCLUDE(_currn ,_AS0_const118,_AS0_const117)
_TPPINHERITANCE_INCLUDE _currn;
int* _AS0_const117;
int* _AS0_const118;

#endif
{
int* _IL_incl125;
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
_IL_incl125=_IG_incl125;_IG_incl125= &(_currn->_ATIsOnly);
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)),(&( _AS1_const117)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const117)=_AS1_const117;
/*SPC(3164)*/
_AVInheritance_NumStars=_AS1_const117;
/*SPC(2971)*/

if (AND(NOT(EQ(_AVInheritance_NumStars, 0)), NOT(EQ(_AVInheritance_NumStars, _currn->_ATNumBounds)))) {
message(ERROR, "do not mix * and bound expressions in an inheritance clause", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(2979)*/
_IG_incl125=_IL_incl125;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1INHERITANCE_LIKE(_TPPINHERITANCE_LIKE _currn,int* _AS0_const118)
#else
void _VS1INHERITANCE_LIKE(_currn ,_AS0_const118)
_TPPINHERITANCE_LIKE _currn;
int* _AS0_const118;

#endif
{
int* _IL_incl125;
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
_IL_incl125=_IG_incl125;_IG_incl125= &(_currn->_ATIsOnly);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const118)=_AS1_const118;
/*SPC(3160)*/
_currn->_AT_const120=_AVModifications_ModInfoList;
/*SPC(3160)*/
_currn->_ATIsOnly=0;
/*SPC(3275)*/
_currn->_ATIsPrivate=0;
/*SPC(3265)*/
_currn->_ATIsSubType=1;
/*SPC(3288)*/
_currn->_ATKey=_AS1Key;
/*SPC(3161)*/
_currn->_ATNumBounds=_AS1_const118;
/*SPC(2967)*/
_currn->_ATBoundsFrom=
((NOT(EQ(_currn->_ATNumBounds, 0))
) ? (_currn->_ATKey
) : (NoKey))
;
/*SPC(3005)*/
_IG_incl125=_IL_incl125;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2INHERITANCE_LIKE(_TPPINHERITANCE_LIKE _currn,int* _AS0_const118)
#else
void _VS2INHERITANCE_LIKE(_currn ,_AS0_const118)
_TPPINHERITANCE_LIKE _currn;
int* _AS0_const118;

#endif
{
int* _IL_incl125;
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
_IL_incl125=_IG_incl125;_IG_incl125= &(_currn->_ATIsOnly);
_AVInheritance_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkINHERITANCE_LIKE_2, _currn->_desc1->_ATtree, NoKey);
/*SPC(8018)*/
_AVInheritance_BoundsFromFix=_currn->_ATKey;

_CYCLE0BoundsFromFix:;
;
/*SPC(3074)*/
_AVInheritance_BoundsTree=GetBoundsTree(_AVInheritance_BoundsFromFix, NULL);
/*SPC(3084)*/

if (!(EQ(_AVInheritance_BoundsFromFix, GetGetsBoundsFrom(_AVInheritance_BoundsFromFix, NoKey)))) {
_AVInheritance_BoundsFromFix=GetGetsBoundsFrom(_AVInheritance_BoundsFromFix, NoKey);

goto _CYCLE0BoundsFromFix;
}
;
/*SPC(3079)*/
_IG_incl125=_IL_incl125;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3INHERITANCE_LIKE(_TPPINHERITANCE_LIKE _currn,int* _AS0_const118,int* _AS0_const117)
#else
void _VS3INHERITANCE_LIKE(_currn ,_AS0_const118,_AS0_const117)
_TPPINHERITANCE_LIKE _currn;
int* _AS0_const117;
int* _AS0_const118;

#endif
{
int* _IL_incl125;
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
_IL_incl125=_IG_incl125;_IG_incl125= &(_currn->_ATIsOnly);
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)),(&( _AS1_const117)));

if (_AVClass_specifier__const119) {
message(ERROR, "inheritance of predefined class ROW[*] is not allowed", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(3215)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0_const117)=_AS1_const117;
/*SPC(3160)*/
_AVInheritance_NumStars=_AS1_const117;
/*SPC(2971)*/

if (AND(NOT(EQ(_AVInheritance_NumStars, 0)), NOT(EQ(_AVInheritance_NumStars, _currn->_ATNumBounds)))) {
message(ERROR, "do not mix * and bound expressions in an inheritance clause", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(2979)*/
_IG_incl125=_IL_incl125;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1INHERITANCE_PRIV(_TPPINHERITANCE_PRIV _currn,int* _AS0_const118)
#else
void _VS1INHERITANCE_PRIV(_currn ,_AS0_const118)
_TPPINHERITANCE_PRIV _currn;
int* _AS0_const118;

#endif
{
int* _IL_incl125;
int _AS1_const117;
int _AS1_const118;

_VisitVarDecl()
_VisitEntry();
_IL_incl125=_IG_incl125;_IG_incl125= &(_currn->_ATIsOnly);
(*(_CALL_VS_((NODEPTR ,int*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const118)));
(* _AS0_const118)=_AS1_const118;
/*SPC(3156)*/
_currn->_AT_const120=_currn->_desc1->_AT_const120;
/*SPC(3156)*/
_currn->_ATIsOnly=_currn->_desc1->_ATIsOnly;
/*SPC(3270)*/
_currn->_ATIsPrivate=1;
/*SPC(3269)*/
_currn->_ATIsSubType=0;
/*SPC(3284)*/
_currn->_ATKey=_currn->_desc1->_ATKey;
/*SPC(3157)*/
_currn->_ATNumBounds=_AS1_const118;
/*SPC(2967)*/
_currn->_ATBoundsFrom=
((NOT(EQ(_currn->_ATNumBounds, 0))
) ? (_currn->_ATKey
) : (NoKey))
;
/*SPC(3005)*/
_IG_incl125=_IL_incl125;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2INHERITANCE_PRIV(_TPPINHERITANCE_PRIV _currn,int* _AS0_const118)
#else
void _VS2INHERITANCE_PRIV(_currn ,_AS0_const118)
_TPPINHERITANCE_PRIV _currn;
int* _AS0_const118;

#endif
{
int* _IL_incl125;
int _AS1_const117;
int _AS1_const118;

_VisitVarDecl()
_VisitEntry();
_IL_incl125=_IG_incl125;_IG_incl125= &(_currn->_ATIsOnly);
(*(_CALL_VS_((NODEPTR ,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const118)));
_AVInheritance_tree=_AVInheritance_tree;
/*SPC(8006)*/
_AVInheritance_BoundsFromFix=_currn->_ATKey;

_CYCLE0BoundsFromFix:;
;
/*SPC(3074)*/
_AVInheritance_BoundsTree=GetBoundsTree(_AVInheritance_BoundsFromFix, NULL);
/*SPC(3084)*/

if (!(EQ(_AVInheritance_BoundsFromFix, GetGetsBoundsFrom(_AVInheritance_BoundsFromFix, NoKey)))) {
_AVInheritance_BoundsFromFix=GetGetsBoundsFrom(_AVInheritance_BoundsFromFix, NoKey);

goto _CYCLE0BoundsFromFix;
}
;
/*SPC(3079)*/
_IG_incl125=_IL_incl125;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3INHERITANCE_PRIV(_TPPINHERITANCE_PRIV _currn,int* _AS0_const118,int* _AS0_const117)
#else
void _VS3INHERITANCE_PRIV(_currn ,_AS0_const118,_AS0_const117)
_TPPINHERITANCE_PRIV _currn;
int* _AS0_const117;
int* _AS0_const118;

#endif
{
int* _IL_incl125;
int _AS1_const117;
int _AS1_const118;

_VisitVarDecl()
_VisitEntry();
_IL_incl125=_IG_incl125;_IG_incl125= &(_currn->_ATIsOnly);
(*(_CALL_VS_((NODEPTR ,int*,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1_const118)),(&( _AS1_const117)));
(* _AS0_const117)=_AS1_const117;
/*SPC(3156)*/
_AVInheritance_NumStars=_AS1_const117;
/*SPC(2971)*/

if (AND(NOT(EQ(_AVInheritance_NumStars, 0)), NOT(EQ(_AVInheritance_NumStars, _currn->_ATNumBounds)))) {
message(ERROR, "do not mix * and bound expressions in an inheritance clause", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(2979)*/
_IG_incl125=_IL_incl125;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1INHERITANCES_LST(_TPPINHERITANCES_LST _currn)
#else
void _VS1INHERITANCES_LST(_currn )
_TPPINHERITANCES_LST _currn;

#endif
{
int _AS2_const117;
int _AS2_const118;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,int*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const118)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2INHERITANCES_LST(_TPPINHERITANCES_LST _currn)
#else
void _VS2INHERITANCES_LST(_currn )
_TPPINHERITANCES_LST _currn;

#endif
{
int _AS2_const117;
int _AS2_const118;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVInheritancesInhers_post=
((AND(_currn->_desc2->_ATIsSubType, OR(AND(InIS(valueK, (* _IG_incl128)), NOT(InIS(valueK, GetKindSet(_currn->_desc2->_ATKey, NULLIS)))), AND(InIS(referenceK, (* _IG_incl128)), NOT(InIS(referenceK, GetKindSet(_currn->_desc2->_ATKey, NULLIS))))))
) ? (
(message(FATAL, "value class could not be subtype of reference class and vice versa", 0, (&( _currn->_AT_pos))), _AVInheritancesInhers_post)

) : (
((OR(InIS(externalK, (* _IG_incl128)), InIS(externalK, GetKindSet(_currn->_desc2->_ATKey, NULLIS)))
) ? (
(message(FATAL, "external class may neither inherit another class nor be inherited by a class", 0, (&( _currn->_AT_pos))), _AVInheritancesInhers_post)

) : (ConsInheritanceInfoList(NewInheritanceInfo(_currn->_desc2->_ATKey, _currn->_desc2->_AT_const120, _currn->_desc2->_ATIsPrivate, _currn->_desc2->_ATIsOnly, _currn->_desc2->_ATIsSubType), _AVInheritancesInhers_post)))
))
;
/*SPC(3234)*/
_AVInheritances_BoundsFrom=
((EQ(_AVInheritances_BoundsFrom, NoKey)
) ? (_currn->_desc2->_ATBoundsFrom
) : (_AVInheritances_BoundsFrom))
;
/*SPC(3015)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3INHERITANCES_LST(_TPPINHERITANCES_LST _currn)
#else
void _VS3INHERITANCES_LST(_currn )
_TPPINHERITANCES_LST _currn;

#endif
{
int _AS2_const117;
int _AS2_const118;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,int*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const118)));
_AVInheritances_tree=
((EQ(_AVInheritance_tree, NULL)
) ? (_AVInheritances_tree
) : (NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkINHERITANCES_LST_2, _AVInheritances_tree, _AVInheritance_tree, NoKey)))
;
/*SPC(8000)*/
_AVInheritances_BoundsTree=
((EQ(_AVInheritances_BoundsTree, NULL)
) ? (_AVInheritance_BoundsTree
) : (_AVInheritances_BoundsTree))
;
/*SPC(3092)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4INHERITANCES_LST(_TPPINHERITANCES_LST _currn)
#else
void _VS4INHERITANCES_LST(_currn )
_TPPINHERITANCES_LST _currn;

#endif
{
int _AS2_const117;
int _AS2_const118;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,int*,int*)) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2_const118)),(&( _AS2_const117)));
_AVInheritances_NumStars=
((EQ(_AVInheritances_NumStars, 0)
) ? (_AVInheritance_NumStars
) : (
((EQ(_AVInheritance_NumStars, 0)
) ? (_AVInheritances_NumStars
) : (
(message(ERROR, "no multiple inheritance of array classes", 0, (&( _currn->_AT_pos))), _AVInheritance_NumStars)
))
))
;
/*SPC(2987)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1INHERITANCES_EMPTY(_TPPINHERITANCES_EMPTY _currn)
#else
void _VS1INHERITANCES_EMPTY(_currn )
_TPPINHERITANCES_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2INHERITANCES_EMPTY(_TPPINHERITANCES_EMPTY _currn)
#else
void _VS2INHERITANCES_EMPTY(_currn )
_TPPINHERITANCES_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVInheritances_BoundsFrom=NoKey;
/*SPC(3011)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3INHERITANCES_EMPTY(_TPPINHERITANCES_EMPTY _currn)
#else
void _VS3INHERITANCES_EMPTY(_currn )
_TPPINHERITANCES_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVInheritances_tree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkINHERITANCES_EMPTY_2, NoKey);
/*SPC(7996)*/
_AVInheritances_BoundsTree=NULL;
/*SPC(3088)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4INHERITANCES_EMPTY(_TPPINHERITANCES_EMPTY _currn)
#else
void _VS4INHERITANCES_EMPTY(_currn )
_TPPINHERITANCES_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVInheritances_NumStars=0;
/*SPC(2983)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1DIRECT_STREAM_CALL(_TPPDIRECT_STREAM_CALL _currn)
#else
void _VS1DIRECT_STREAM_CALL(_currn )
_TPPDIRECT_STREAM_CALL _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVDirect_stream_call_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkDIRECT_STREAM_CALL_2, _AS1tree, _AS2tree, NoKey);
/*SPC(7990)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2DIRECT_STREAM_CALL(_TPPDIRECT_STREAM_CALL _currn)
#else
void _VS2DIRECT_STREAM_CALL(_currn )
_TPPDIRECT_STREAM_CALL _currn;

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
void _VS1COERCION(_TPPCOERCION _currn)
#else
void _VS1COERCION(_currn )
_TPPCOERCION _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVCoercion_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkCOERCION_2, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(7985)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2COERCION(_TPPCOERCION _currn)
#else
void _VS2COERCION(_currn )
_TPPCOERCION _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STR_CONSTANT(_TPPSTR_CONSTANT _currn,TreeNodePtr* _AS0tree)
#else
void _VS1STR_CONSTANT(_currn ,_AS0tree)
_TPPSTR_CONSTANT _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0tree)=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkSTR_CONSTANT_2, _currn->_ATTERM_1, NoKey);
/*SPC(7980)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STR_CONSTANTS(_TPPSTR_CONSTANTS _currn)
#else
void _VS1STR_CONSTANTS(_currn )
_TPPSTR_CONSTANTS _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVStringconstants_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkSTR_CONSTANTS_2, _AS1tree, NoKey);
/*SPC(7975)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STR_CONSTANTS_LST(_TPPSTR_CONSTANTS_LST _currn)
#else
void _VS1STR_CONSTANTS_LST(_currn )
_TPPSTR_CONSTANTS_LST _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVStringconstants_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTR_CONSTANTS_LST_2, _AS1tree, _AVStringconstants_tree, NoKey);
/*SPC(7970)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_VOID(_TPPVALUE_VOID _currn)
#else
void _VS1VALUE_VOID(_currn )
_TPPVALUE_VOID _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVValue_tree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkVALUE_VOID_2, NoKey);
/*SPC(7966)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_SED(_TPPVALUE_SED _currn)
#else
void _VS1VALUE_SED(_currn )
_TPPVALUE_SED _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVValue_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_SED_2, _currn->_ATTERM_1, NoKey);
/*SPC(7962)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_OCT(_TPPVALUE_OCT _currn)
#else
void _VS1VALUE_OCT(_currn )
_TPPVALUE_OCT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVValue_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_OCT_2, _currn->_ATTERM_1, NoKey);
/*SPC(7958)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_STR(_TPPVALUE_STR _currn)
#else
void _VS1VALUE_STR(_currn )
_TPPVALUE_STR _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVValue_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkVALUE_STR_2, _AVStringconstants_tree, NoKey);
/*SPC(7954)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_CHAR(_TPPVALUE_CHAR _currn)
#else
void _VS1VALUE_CHAR(_currn )
_TPPVALUE_CHAR _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVValue_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_CHAR_2, _currn->_ATTERM_1, NoKey);
/*SPC(7950)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_BOOL(_TPPVALUE_BOOL _currn)
#else
void _VS1VALUE_BOOL(_currn )
_TPPVALUE_BOOL _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVValue_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_BOOL_2, _currn->_ATTERM_1, NoKey);
/*SPC(7946)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_FLOAT(_TPPVALUE_FLOAT _currn)
#else
void _VS1VALUE_FLOAT(_currn )
_TPPVALUE_FLOAT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVValue_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_FLOAT_2, _currn->_ATTERM_1, NoKey);
/*SPC(7942)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1VALUE_INT(_TPPVALUE_INT _currn)
#else
void _VS1VALUE_INT(_currn )
_TPPVALUE_INT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVValue_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkVALUE_INT_2, _currn->_ATTERM_1, NoKey);
/*SPC(7938)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BOUND_METHOD(_TPPBOUND_METHOD _currn)
#else
void _VS1BOUND_METHOD(_currn )
_TPPBOUND_METHOD _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVBound_method_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkBOUND_METHOD_2, _AS1tree, _AS2tree, NoKey);
/*SPC(7933)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BOUND_METHOD(_TPPBOUND_METHOD _currn)
#else
void _VS2BOUND_METHOD(_currn )
_TPPBOUND_METHOD _currn;

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
void _VS1NAMED_EXPRESSION(_TPPNAMED_EXPRESSION _currn,TreeNodePtr* _AS0named_expressions_tree_pre)
#else
void _VS1NAMED_EXPRESSION(_currn ,_AS0named_expressions_tree_pre)
_TPPNAMED_EXPRESSION _currn;
TreeNodePtr* _AS0named_expressions_tree_pre;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVNamed_expression_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkNAMED_EXPRESSION_2, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(7928)*/
_AVnamed_expressionnamed_expressions_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2NAMED_EXPRESSIONS_2, (* _AS0named_expressions_tree_pre), _AVNamed_expression_tree, NoKey);
/*SPC(7926)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAMED_EXPRESSION(_TPPNAMED_EXPRESSION _currn,TreeNodePtr* _AS0named_expressions_tree_pre)
#else
void _VS2NAMED_EXPRESSION(_currn ,_AS0named_expressions_tree_pre)
_TPPNAMED_EXPRESSION _currn;
TreeNodePtr* _AS0named_expressions_tree_pre;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAMED_EXPRESSIONS(_TPPNAMED_EXPRESSIONS _currn)
#else
void _VS1NAMED_EXPRESSIONS(_currn )
_TPPNAMED_EXPRESSIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVnamed_expressionnamed_expressions_tree_post=NULL;
/*SPC(7920)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVNamed_expressions_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkNAMED_EXPRESSIONS_2, _AVnamed_expressionnamed_expressions_tree_post, NoKey);
/*SPC(7921)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2NAMED_EXPRESSIONS(_TPPNAMED_EXPRESSIONS _currn)
#else
void _VS2NAMED_EXPRESSIONS(_currn )
_TPPNAMED_EXPRESSIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1AGG_ID_DEF(_TPPAGG_ID_DEF _currn,TreeNodePtr* _AS0tree)
#else
void _VS1AGG_ID_DEF(_currn ,_AS0tree)
_TPPAGG_ID_DEF _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0tree)=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkAGG_ID_DEF_2, _currn->_ATTERM_1, NoKey);
/*SPC(7916)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1AGGREGATE_NAMED(_TPPAGGREGATE_NAMED _currn)
#else
void _VS1AGGREGATE_NAMED(_currn )
_TPPAGGREGATE_NAMED _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVAggregate_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkAGGREGATE_NAMED_2, _AS1tree, _AVNamed_expressions_tree, NoKey);
/*SPC(7910)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2AGGREGATE_NAMED(_TPPAGGREGATE_NAMED _currn)
#else
void _VS2AGGREGATE_NAMED(_currn )
_TPPAGGREGATE_NAMED _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1AGGREGATE(_TPPAGGREGATE _currn)
#else
void _VS1AGGREGATE(_currn )
_TPPAGGREGATE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVAggregate_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkAGGREGATE_2, _AVNamed_expressions_tree, NoKey);
/*SPC(7905)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2AGGREGATE(_TPPAGGREGATE _currn)
#else
void _VS2AGGREGATE(_currn )
_TPPAGGREGATE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CONSTRUCTOR_SAME_AGG(_TPPTYPE_CONSTRUCTOR_SAME_AGG _currn)
#else
void _VS1TYPE_CONSTRUCTOR_SAME_AGG(_currn )
_TPPTYPE_CONSTRUCTOR_SAME_AGG _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVType_constructor_Type=GetMonoType((* _IG_incl123), NoType);
/*SPC(10510)*/
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_SAME_AGG_2, _AVAggregate_tree, NoKey);
/*SPC(7900)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_SAME_AGG(_TPPTYPE_CONSTRUCTOR_SAME_AGG _currn)
#else
void _VS2TYPE_CONSTRUCTOR_SAME_AGG(_currn )
_TPPTYPE_CONSTRUCTOR_SAME_AGG _currn;

#endif
{
int* _IL_incl131;

_VisitVarDecl()
_VisitEntry();
_IL_incl131=_IG_incl131;_IG_incl131= &(_currn->_ATIsInTypedAggregate);
_currn->_ATIsInTypedAggregate=(* _IL_incl131);
/*SPC(10484)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl131=_IL_incl131;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CONSTRUCTOR_SAME(_TPPTYPE_CONSTRUCTOR_SAME _currn)
#else
void _VS1TYPE_CONSTRUCTOR_SAME(_currn )
_TPPTYPE_CONSTRUCTOR_SAME _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVType_constructor_Type=GetMonoType((* _IG_incl123), NoType);
/*SPC(10505)*/
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_SAME_2, _AS1tree, NoKey);
/*SPC(7895)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_SAME(_TPPTYPE_CONSTRUCTOR_SAME _currn)
#else
void _VS2TYPE_CONSTRUCTOR_SAME(_currn )
_TPPTYPE_CONSTRUCTOR_SAME _currn;

#endif
{
int* _IL_incl131;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_IL_incl131=_IG_incl131;_IG_incl131= &(_currn->_ATIsInTypedAggregate);
_currn->_ATIsInTypedAggregate=(* _IL_incl131);
/*SPC(10484)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_IG_incl131=_IL_incl131;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CONSTRUCTOR_DES(_TPPTYPE_CONSTRUCTOR_DES _currn)
#else
void _VS1TYPE_CONSTRUCTOR_DES(_currn )
_TPPTYPE_CONSTRUCTOR_DES _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
message(FATAL, "Designator in type constructor not implemented yet, behaviour undefined", 0, (&( _currn->_AT_pos)));
/*SPC(10501)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVType_constructor_Type=NoType;
/*SPC(10498)*/
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_DES_2, _AS1tree, _AS2tree, NoKey);
/*SPC(7889)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_DES(_TPPTYPE_CONSTRUCTOR_DES _currn)
#else
void _VS2TYPE_CONSTRUCTOR_DES(_currn )
_TPPTYPE_CONSTRUCTOR_DES _currn;

#endif
{
int* _IL_incl131;
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_IL_incl131=_IG_incl131;_IG_incl131= &(_currn->_ATIsInTypedAggregate);
_currn->_ATIsInTypedAggregate=(* _IL_incl131);
/*SPC(10484)*/
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_IG_incl131=_IL_incl131;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CONSTRUCTOR_AGG(_TPPTYPE_CONSTRUCTOR_AGG _currn)
#else
void _VS1TYPE_CONSTRUCTOR_AGG(_currn )
_TPPTYPE_CONSTRUCTOR_AGG _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVType_constructor_Type=NoType;
/*SPC(10480)*/
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_AGG_2, _AVAggregate_tree, NoKey);
/*SPC(7884)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_AGG(_TPPTYPE_CONSTRUCTOR_AGG _currn)
#else
void _VS2TYPE_CONSTRUCTOR_AGG(_currn )
_TPPTYPE_CONSTRUCTOR_AGG _currn;

#endif
{
int* _IL_incl131;

_VisitVarDecl()
_VisitEntry();
_IL_incl131=_IG_incl131;_IG_incl131= &(_currn->_ATIsInTypedAggregate);
_currn->_ATIsInTypedAggregate=(* _IL_incl131);
/*SPC(10484)*/

if (EQ(_currn->_ATIsInTypedAggregate, 0)) {
message(FATAL, "untyped aggregate not substructure of other aggregate", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(10492)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl131=_IL_incl131;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CONSTRUCTOR_CLASS(_TPPTYPE_CONSTRUCTOR_CLASS _currn)
#else
void _VS1TYPE_CONSTRUCTOR_CLASS(_currn )
_TPPTYPE_CONSTRUCTOR_CLASS _currn;

#endif
{
TreeNodePtr _AS2tree;
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVType_constructor_Type=GetMonoType(_AS1Key, NoType);
/*SPC(10475)*/
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_CLASS_2, _currn->_desc1->_ATtree, _AS2tree, NoKey);
/*SPC(7878)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_CLASS(_TPPTYPE_CONSTRUCTOR_CLASS _currn)
#else
void _VS2TYPE_CONSTRUCTOR_CLASS(_currn )
_TPPTYPE_CONSTRUCTOR_CLASS _currn;

#endif
{
int* _IL_incl131;
TreeNodePtr _AS2tree;
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
_IL_incl131=_IG_incl131;_IG_incl131= &(_currn->_ATIsInTypedAggregate);
_currn->_ATIsInTypedAggregate=(* _IL_incl131);
/*SPC(10484)*/
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)),(&( _AS1_const117)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_IG_incl131=_IL_incl131;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_CONSTRUCTOR_CL_AGG(_TPPTYPE_CONSTRUCTOR_CL_AGG _currn)
#else
void _VS1TYPE_CONSTRUCTOR_CL_AGG(_currn )
_TPPTYPE_CONSTRUCTOR_CL_AGG _currn;

#endif
{
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVType_constructor_Type=GetMonoType(_AS1Key, NoType);
/*SPC(10469)*/
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkTYPE_CONSTRUCTOR_CL_AGG_2, _currn->_desc1->_ATtree, _AVAggregate_tree, NoKey);
/*SPC(7872)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_CONSTRUCTOR_CL_AGG(_TPPTYPE_CONSTRUCTOR_CL_AGG _currn)
#else
void _VS2TYPE_CONSTRUCTOR_CL_AGG(_currn )
_TPPTYPE_CONSTRUCTOR_CL_AGG _currn;

#endif
{
int* _IL_incl131;
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
_IL_incl131=_IG_incl131;_IG_incl131= &(_currn->_ATIsInTypedAggregate);
_currn->_ATIsInTypedAggregate=1;
/*SPC(10471)*/
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)),(&( _AS1_const117)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_IG_incl131=_IL_incl131;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1QUAL_FEATURE_ID_USE(_TPPQUAL_FEATURE_ID_USE _currn)
#else
void _VS1QUAL_FEATURE_ID_USE(_currn )
_TPPQUAL_FEATURE_ID_USE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVQual_feature_id_use_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkQUAL_FEATURE_ID_USE_2, _currn->_ATTERM_1, NoKey);
/*SPC(7867)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1QUALIFICATION_TYPE(_TPPQUALIFICATION_TYPE _currn)
#else
void _VS1QUALIFICATION_TYPE(_currn )
_TPPQUALIFICATION_TYPE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVQualification_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkQUALIFICATION_TYPE_2, _currn->_desc1->_ATtree, _AVQual_feature_id_use_tree, NoKey);
/*SPC(7861)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2QUALIFICATION_TYPE(_TPPQUALIFICATION_TYPE _currn)
#else
void _VS2QUALIFICATION_TYPE(_currn )
_TPPQUALIFICATION_TYPE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1QUALIFICATION_EXP(_TPPQUALIFICATION_EXP _currn)
#else
void _VS1QUALIFICATION_EXP(_currn )
_TPPQUALIFICATION_EXP _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVQualification_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkQUALIFICATION_EXP_2, _currn->_desc1->_ATtree, _AVQual_feature_id_use_tree, NoKey);
/*SPC(7855)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2QUALIFICATION_EXP(_TPPQUALIFICATION_EXP _currn)
#else
void _VS2QUALIFICATION_EXP(_currn )
_TPPQUALIFICATION_EXP _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1STD_METHOD_CALL(_TPPSTD_METHOD_CALL _currn)
#else
void _VS1STD_METHOD_CALL(_currn )
_TPPSTD_METHOD_CALL _currn;

#endif
{
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)));
_AVStd_method_call_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkSTD_METHOD_CALL_2, _AS1tree, _AS2tree, NoKey);
/*SPC(7850)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2STD_METHOD_CALL(_TPPSTD_METHOD_CALL _currn)
#else
void _VS2STD_METHOD_CALL(_currn )
_TPPSTD_METHOD_CALL _currn;

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
void _VS1OBJ_ID_USE(_TPPOBJ_ID_USE _currn)
#else
void _VS1OBJ_ID_USE(_currn )
_TPPOBJ_ID_USE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVObj_id_use_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkOBJ_ID_USE_2, _currn->_ATTERM_1, NoKey);
/*SPC(7846)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_NOT(_TPPNAME_NOT _currn)
#else
void _VS1NAME_NOT(_currn )
_TPPNAME_NOT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_NOT_2, NoKey);
/*SPC(7842)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_POW(_TPPNAME_POW _currn)
#else
void _VS1NAME_POW(_currn )
_TPPNAME_POW _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_POW_2, NoKey);
/*SPC(7838)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_MOD(_TPPNAME_MOD _currn)
#else
void _VS1NAME_MOD(_currn )
_TPPNAME_MOD _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_MOD_2, NoKey);
/*SPC(7834)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_DIV(_TPPNAME_DIV _currn)
#else
void _VS1NAME_DIV(_currn )
_TPPNAME_DIV _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_DIV_2, NoKey);
/*SPC(7830)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_QUOTIENT(_TPPNAME_QUOTIENT _currn)
#else
void _VS1NAME_QUOTIENT(_currn )
_TPPNAME_QUOTIENT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_QUOTIENT_2, NoKey);
/*SPC(7826)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_STAR(_TPPNAME_STAR _currn)
#else
void _VS1NAME_STAR(_currn )
_TPPNAME_STAR _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkNAME_STAR_2, _currn->_ATTERM_1, NoKey);
/*SPC(7822)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_MINUS(_TPPNAME_MINUS _currn)
#else
void _VS1NAME_MINUS(_currn )
_TPPNAME_MINUS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_MINUS_2, NoKey);
/*SPC(7818)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_PLUS(_TPPNAME_PLUS _currn)
#else
void _VS1NAME_PLUS(_currn )
_TPPNAME_PLUS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_PLUS_2, NoKey);
/*SPC(7814)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_GT_EQ(_TPPNAME_GT_EQ _currn)
#else
void _VS1NAME_GT_EQ(_currn )
_TPPNAME_GT_EQ _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_GT_EQ_2, NoKey);
/*SPC(7810)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_GT(_TPPNAME_GT _currn)
#else
void _VS1NAME_GT(_currn )
_TPPNAME_GT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_GT_2, NoKey);
/*SPC(7806)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_LT_EQ(_TPPNAME_LT_EQ _currn)
#else
void _VS1NAME_LT_EQ(_currn )
_TPPNAME_LT_EQ _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_LT_EQ_2, NoKey);
/*SPC(7802)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_LT(_TPPNAME_LT _currn)
#else
void _VS1NAME_LT(_currn )
_TPPNAME_LT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_LT_2, NoKey);
/*SPC(7798)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_EQ(_TPPNAME_EQ _currn)
#else
void _VS1NAME_EQ(_currn )
_TPPNAME_EQ _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_EQ_2, NoKey);
/*SPC(7794)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_QUESTION(_TPPNAME_QUESTION _currn)
#else
void _VS1NAME_QUESTION(_currn )
_TPPNAME_QUESTION _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_QUESTION_2, NoKey);
/*SPC(7790)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_GRAVE(_TPPNAME_GRAVE _currn)
#else
void _VS1NAME_GRAVE(_currn )
_TPPNAME_GRAVE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_GRAVE_2, NoKey);
/*SPC(7786)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_TILDE(_TPPNAME_TILDE _currn)
#else
void _VS1NAME_TILDE(_currn )
_TPPNAME_TILDE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_TILDE_2, NoKey);
/*SPC(7782)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_STROKE(_TPPNAME_STROKE _currn)
#else
void _VS1NAME_STROKE(_currn )
_TPPNAME_STROKE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_STROKE_2, NoKey);
/*SPC(7778)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_BACKSLASH(_TPPNAME_BACKSLASH _currn)
#else
void _VS1NAME_BACKSLASH(_currn )
_TPPNAME_BACKSLASH _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_BACKSLASH_2, NoKey);
/*SPC(7774)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_STR_IN(_TPPNAME_STR_IN _currn)
#else
void _VS1NAME_STR_IN(_currn )
_TPPNAME_STR_IN _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_STR_IN_2, NoKey);
/*SPC(7770)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_STR_OUT(_TPPNAME_STR_OUT _currn)
#else
void _VS1NAME_STR_OUT(_currn )
_TPPNAME_STR_OUT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_STR_OUT_2, NoKey);
/*SPC(7766)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_EMPTY(_TPPNAME_EMPTY _currn)
#else
void _VS1NAME_EMPTY(_currn )
_TPPNAME_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_EMPTY_2, NoKey);
/*SPC(7762)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_OBJ(_TPPNAME_OBJ _currn)
#else
void _VS1NAME_OBJ(_currn )
_TPPNAME_OBJ _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkNAME_OBJ_2, _AVObj_id_use_tree, NoKey);
/*SPC(7758)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1NAME_LEFT_SQ_BRACKET(_TPPNAME_LEFT_SQ_BRACKET _currn)
#else
void _VS1NAME_LEFT_SQ_BRACKET(_currn )
_TPPNAME_LEFT_SQ_BRACKET _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkNAME_LEFT_SQ_BRACKET_2, NoKey);
/*SPC(7754)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_AND(_TPPEXPRESSION_AND _currn)
#else
void _VS1EXPRESSION_AND(_currn )
_TPPEXPRESSION_AND _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkEXPRESSION_AND_2, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(7748)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_AND(_TPPEXPRESSION_AND _currn)
#else
void _VS2EXPRESSION_AND(_currn )
_TPPEXPRESSION_AND _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVExpression_IsStar=0;
/*SPC(2959)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_OR(_TPPEXPRESSION_OR _currn)
#else
void _VS1EXPRESSION_OR(_currn )
_TPPEXPRESSION_OR _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkEXPRESSION_OR_2, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(7742)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_OR(_TPPEXPRESSION_OR _currn)
#else
void _VS2EXPRESSION_OR(_currn )
_TPPEXPRESSION_OR _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVExpression_IsStar=0;
/*SPC(2959)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_STREAM(_TPPEXPRESSION_STREAM _currn)
#else
void _VS1EXPRESSION_STREAM(_currn )
_TPPEXPRESSION_STREAM _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_STREAM_2, _AVDirect_stream_call_tree, NoKey);
/*SPC(7737)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_STREAM(_TPPEXPRESSION_STREAM _currn)
#else
void _VS2EXPRESSION_STREAM(_currn )
_TPPEXPRESSION_STREAM _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVExpression_IsStar=0;
/*SPC(2959)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_METH(_TPPEXPRESSION_METH _currn)
#else
void _VS1EXPRESSION_METH(_currn )
_TPPEXPRESSION_METH _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_METH_2, _AVStd_method_call_tree, NoKey);
/*SPC(7732)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_METH(_TPPEXPRESSION_METH _currn)
#else
void _VS2EXPRESSION_METH(_currn )
_TPPEXPRESSION_METH _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVExpression_IsStar=0;
/*SPC(2959)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_COERCION(_TPPEXPRESSION_COERCION _currn)
#else
void _VS1EXPRESSION_COERCION(_currn )
_TPPEXPRESSION_COERCION _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_COERCION_2, _AVCoercion_tree, NoKey);
/*SPC(7727)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_COERCION(_TPPEXPRESSION_COERCION _currn)
#else
void _VS2EXPRESSION_COERCION(_currn )
_TPPEXPRESSION_COERCION _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVExpression_IsStar=0;
/*SPC(2959)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_VALUE(_TPPEXPRESSION_VALUE _currn)
#else
void _VS1EXPRESSION_VALUE(_currn )
_TPPEXPRESSION_VALUE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_VALUE_2, _AVValue_tree, NoKey);
/*SPC(7723)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_VALUE(_TPPEXPRESSION_VALUE _currn)
#else
void _VS2EXPRESSION_VALUE(_currn )
_TPPEXPRESSION_VALUE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVExpression_IsStar=0;
/*SPC(2959)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_BOUND(_TPPEXPRESSION_BOUND _currn)
#else
void _VS1EXPRESSION_BOUND(_currn )
_TPPEXPRESSION_BOUND _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_BOUND_2, _AVBound_method_tree, NoKey);
/*SPC(7718)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_BOUND(_TPPEXPRESSION_BOUND _currn)
#else
void _VS2EXPRESSION_BOUND(_currn )
_TPPEXPRESSION_BOUND _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVExpression_IsStar=0;
/*SPC(2959)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_CONS(_TPPEXPRESSION_CONS _currn)
#else
void _VS1EXPRESSION_CONS(_currn )
_TPPEXPRESSION_CONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkEXPRESSION_CONS_2, _currn->_desc1->_ATtree, NoKey);
/*SPC(7713)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_CONS(_TPPEXPRESSION_CONS _currn)
#else
void _VS2EXPRESSION_CONS(_currn )
_TPPEXPRESSION_CONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVExpression_IsStar=0;
/*SPC(2959)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1EXPRESSION_STAR(_TPPEXPRESSION_STAR _currn)
#else
void _VS1EXPRESSION_STAR(_currn )
_TPPEXPRESSION_STAR _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkEXPRESSION_STAR_2, _currn->_ATTERM_1, NoKey);
/*SPC(7709)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2EXPRESSION_STAR(_TPPEXPRESSION_STAR _currn)
#else
void _VS2EXPRESSION_STAR(_currn )
_TPPEXPRESSION_STAR _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVExpression_IsStar=1;
/*SPC(2963)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1DESIGNATOR_QUAL(_TPPDESIGNATOR_QUAL _currn,TreeNodePtr* _AS0tree)
#else
void _VS1DESIGNATOR_QUAL(_currn ,_AS0tree)
_TPPDESIGNATOR_QUAL _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkDESIGNATOR_QUAL_2, _AVQualification_tree, NoKey);
/*SPC(7704)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2DESIGNATOR_QUAL(_TPPDESIGNATOR_QUAL _currn,TreeNodePtr* _AS0tree)
#else
void _VS2DESIGNATOR_QUAL(_currn ,_AS0tree)
_TPPDESIGNATOR_QUAL _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1DESIGNATOR_METH(_TPPDESIGNATOR_METH _currn,TreeNodePtr* _AS0tree)
#else
void _VS1DESIGNATOR_METH(_currn ,_AS0tree)
_TPPDESIGNATOR_METH _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkDESIGNATOR_METH_2, _AVStd_method_call_tree, NoKey);
/*SPC(7699)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2DESIGNATOR_METH(_TPPDESIGNATOR_METH _currn,TreeNodePtr* _AS0tree)
#else
void _VS2DESIGNATOR_METH(_currn ,_AS0tree)
_TPPDESIGNATOR_METH _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1DESIGNATOR_EXP(_TPPDESIGNATOR_EXP _currn,TreeNodePtr* _AS0tree)
#else
void _VS1DESIGNATOR_EXP(_currn ,_AS0tree)
_TPPDESIGNATOR_EXP _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkDESIGNATOR_EXP_2, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(7694)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2DESIGNATOR_EXP(_TPPDESIGNATOR_EXP _currn,TreeNodePtr* _AS0tree)
#else
void _VS2DESIGNATOR_EXP(_currn ,_AS0tree)
_TPPDESIGNATOR_EXP _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1DESIGNATOR_NAME(_TPPDESIGNATOR_NAME _currn,TreeNodePtr* _AS0tree)
#else
void _VS1DESIGNATOR_NAME(_currn ,_AS0tree)
_TPPDESIGNATOR_NAME _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkDESIGNATOR_NAME_2, _currn->_desc1->_ATtree, NoKey);
/*SPC(7690)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2DESIGNATOR_NAME(_TPPDESIGNATOR_NAME _currn,TreeNodePtr* _AS0tree)
#else
void _VS2DESIGNATOR_NAME(_currn ,_AS0tree)
_TPPDESIGNATOR_NAME _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ARGUMENT_EMPTY(_TPPARGUMENT_EMPTY _currn)
#else
void _VS1ARGUMENT_EMPTY(_currn )
_TPPARGUMENT_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVArgument_tree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkARGUMENT_EMPTY_2, NoKey);
/*SPC(7686)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ARGUMENT_INOUT(_TPPARGUMENT_INOUT _currn)
#else
void _VS1ARGUMENT_INOUT(_currn )
_TPPARGUMENT_INOUT _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVArgument_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkARGUMENT_INOUT_2, _AS1tree, NoKey);
/*SPC(7682)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ARGUMENT_INOUT(_TPPARGUMENT_INOUT _currn)
#else
void _VS2ARGUMENT_INOUT(_currn )
_TPPARGUMENT_INOUT _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ARGUMENT_OUT(_TPPARGUMENT_OUT _currn)
#else
void _VS1ARGUMENT_OUT(_currn )
_TPPARGUMENT_OUT _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVArgument_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkARGUMENT_OUT_2, _AS1tree, NoKey);
/*SPC(7678)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ARGUMENT_OUT(_TPPARGUMENT_OUT _currn)
#else
void _VS2ARGUMENT_OUT(_currn )
_TPPARGUMENT_OUT _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ARGUMENT_EXP(_TPPARGUMENT_EXP _currn)
#else
void _VS1ARGUMENT_EXP(_currn )
_TPPARGUMENT_EXP _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVArgument_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkARGUMENT_EXP_2, _currn->_desc1->_ATtree, NoKey);
/*SPC(7674)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ARGUMENT_EXP(_TPPARGUMENT_EXP _currn)
#else
void _VS2ARGUMENT_EXP(_currn )
_TPPARGUMENT_EXP _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ARGUMENTS_LST(_TPPARGUMENTS_LST _currn,TreeNodePtr* _AS0tree)
#else
void _VS1ARGUMENTS_LST(_currn ,_AS0tree)
_TPPARGUMENTS_LST _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkARGUMENTS_LST_2, _AS1tree, _AVArgument_tree, NoKey);
/*SPC(7669)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ARGUMENTS_LST(_TPPARGUMENTS_LST _currn,TreeNodePtr* _AS0tree)
#else
void _VS2ARGUMENTS_LST(_currn ,_AS0tree)
_TPPARGUMENTS_LST _currn;
TreeNodePtr* _AS0tree;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1ARGUMENTS_EMPTY(_TPPARGUMENTS_EMPTY _currn,TreeNodePtr* _AS0tree)
#else
void _VS1ARGUMENTS_EMPTY(_currn ,_AS0tree)
_TPPARGUMENTS_EMPTY _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkARGUMENTS_EMPTY_2, NoKey);
/*SPC(7665)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2ARGUMENTS_EMPTY(_TPPARGUMENTS_EMPTY _currn,TreeNodePtr* _AS0tree)
#else
void _VS2ARGUMENTS_EMPTY(_currn ,_AS0tree)
_TPPARGUMENTS_EMPTY _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BOUND_EXP(_TPPBOUND_EXP _currn,int* _AS0One,TreeNodePtr* _AS0bounds_tree_pre)
#else
void _VS1BOUND_EXP(_currn ,_AS0One,_AS0bounds_tree_pre)
_TPPBOUND_EXP _currn;
TreeNodePtr* _AS0bounds_tree_pre;
int* _AS0One;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVBound_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUND_EXP_2, _currn->_desc1->_ATtree, NoKey);
/*SPC(7661)*/
(* _AS0One)=1;
/*SPC(2955)*/
_AVboundbounds_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2BOUNDS_2, (* _AS0bounds_tree_pre), _AVBound_tree, NoKey);
/*SPC(7656)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BOUND_EXP(_TPPBOUND_EXP _currn,int* _AS0One,TreeNodePtr* _AS0bounds_tree_pre,int* _AS0_const117)
#else
void _VS2BOUND_EXP(_currn ,_AS0One,_AS0bounds_tree_pre,_AS0_const117)
_TPPBOUND_EXP _currn;
int* _AS0_const117;
TreeNodePtr* _AS0bounds_tree_pre;
int* _AS0One;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const117)=IDENTICAL(_AVExpression_IsStar);
/*SPC(2954)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BOUNDS(_TPPBOUNDS _currn,TreeNodePtr* _AS0tree,int* _AS0_const118)
#else
void _VS1BOUNDS(_currn ,_AS0tree,_AS0_const118)
_TPPBOUNDS _currn;
int* _AS0_const118;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVboundbounds_tree_post=NULL;
/*SPC(7651)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const118)=_AVLST_Bounds__const118;
/*SPC(5127)*/
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUNDS_2, _AVboundbounds_tree_post, NoKey);
/*SPC(7652)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BOUNDS(_TPPBOUNDS _currn,TreeNodePtr* _AS0tree,int* _AS0_const118,int* _AS0_const117)
#else
void _VS2BOUNDS(_currn ,_AS0tree,_AS0_const118,_AS0_const117)
_TPPBOUNDS _currn;
int* _AS0_const117;
int* _AS0_const118;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0_const117)=_AVLST_Bounds__const117;
/*SPC(5127)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ID_USE(_TPPCLASS_ID_USE _currn,PTGNode* _AS0ClassArgsPtg)
#else
void _VS1CLASS_ID_USE(_currn ,_AS0ClassArgsPtg)
_TPPCLASS_ID_USE _currn;
PTGNode* _AS0ClassArgsPtg;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0ClassArgsPtg)=PTGIdent(StringTable(_currn->_ATTERM_1));
/*SPC(4139)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_ID_USE(_TPPCLASS_ID_USE _currn,PTGNode* _AS0ClassArgsPtg,DefTableKey* _AS0Key,TreeNodePtr* _AS0tree)
#else
void _VS2CLASS_ID_USE(_currn ,_AS0ClassArgsPtg,_AS0Key,_AS0tree)
_TPPCLASS_ID_USE _currn;
TreeNodePtr* _AS0tree;
DefTableKey* _AS0Key;
PTGNode* _AS0ClassArgsPtg;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVClass_id_use_Bind=BindingInEnv((* _IG_incl132), _AVClass_id_use_Sym);
/*SPC(13041)*/
(* _AS0tree)=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkCLASS_ID_USE_2, _AVClass_id_use_Sym, NoKey);
/*SPC(7646)*/
(* _AS0Key)=KeyOf(_AVClass_id_use_Bind);
/*SPC(13045)*/
_currn->_ATIsRow=EQ(_currn->_ATTERM_1, MakeName("ROW[*]"));
/*SPC(3208)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_KIND_INOUT(_TPPPARAMETER_KIND_INOUT _currn,IntSet* _AS0KindSet)
#else
void _VS1PARAMETER_KIND_INOUT(_currn ,_AS0KindSet)
_TPPPARAMETER_KIND_INOUT _currn;
IntSet* _AS0KindSet;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkPARAMETER_KIND_INOUT_2, NoKey);
/*SPC(7642)*/
(* _AS0KindSet)=SingleIS(inoutK);
/*SPC(3496)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_KIND_OUT(_TPPPARAMETER_KIND_OUT _currn,IntSet* _AS0KindSet)
#else
void _VS1PARAMETER_KIND_OUT(_currn ,_AS0KindSet)
_TPPPARAMETER_KIND_OUT _currn;
IntSet* _AS0KindSet;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkPARAMETER_KIND_OUT_2, NoKey);
/*SPC(7638)*/
(* _AS0KindSet)=SingleIS(outK);
/*SPC(3493)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_KIND_ONCE(_TPPPARAMETER_KIND_ONCE _currn,IntSet* _AS0KindSet)
#else
void _VS1PARAMETER_KIND_ONCE(_currn ,_AS0KindSet)
_TPPPARAMETER_KIND_ONCE _currn;
IntSet* _AS0KindSet;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkPARAMETER_KIND_ONCE_2, NoKey);
/*SPC(7634)*/
(* _AS0KindSet)=SingleIS(onceK);
/*SPC(3490)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_KIND_IN(_TPPPARAMETER_KIND_IN _currn,IntSet* _AS0KindSet)
#else
void _VS1PARAMETER_KIND_IN(_currn ,_AS0KindSet)
_TPPPARAMETER_KIND_IN _currn;
IntSet* _AS0KindSet;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkPARAMETER_KIND_IN_2, NoKey);
/*SPC(7630)*/
(* _AS0KindSet)=SingleIS(inK);
/*SPC(3487)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_TYPE(_TPPPARAMETER_TYPE _currn,DefTableKeyList* _AS0Params_pre,TreeNodePtr* _AS0parameter_types_tree_pre)
#else
void _VS1PARAMETER_TYPE(_currn ,_AS0Params_pre,_AS0parameter_types_tree_pre)
_TPPPARAMETER_TYPE _currn;
TreeNodePtr* _AS0parameter_types_tree_pre;
DefTableKeyList* _AS0Params_pre;

#endif
{
IntSet _AS1KindSet;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,IntSet*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1KindSet)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVParameter_type_Key=NewKey();
/*SPC(10420)*/
_AVParameter_type_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkPARAMETER_TYPE_2, _currn->_desc1->_ATtree, _currn->_desc2->_ATtree, NoKey);
/*SPC(7624)*/
_AVparameter_typeparameter_types_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2PARAMETER_TYPES_2, (* _AS0parameter_types_tree_pre), _AVParameter_type_tree, NoKey);
/*SPC(7622)*/
ResetKindSet(_AVParameter_type_Key, _AS1KindSet);
ResetType(_AVParameter_type_Key, _currn->_desc2->_ATType);
;
/*SPC(10421)*/
_AVParameter_specification_2Params_post=AppElDefTableKeyList((* _AS0Params_pre), _AVParameter_type_Key);
/*SPC(10427)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2PARAMETER_TYPE(_TPPPARAMETER_TYPE _currn,DefTableKeyList* _AS0Params_pre,TreeNodePtr* _AS0parameter_types_tree_pre)
#else
void _VS2PARAMETER_TYPE(_currn ,_AS0Params_pre,_AS0parameter_types_tree_pre)
_TPPPARAMETER_TYPE _currn;
TreeNodePtr* _AS0parameter_types_tree_pre;
DefTableKeyList* _AS0Params_pre;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1PARAMETER_TYPES(_TPPPARAMETER_TYPES _currn,TreeNodePtr* _AS0tree,DefTableKeyList* _AS0ParamList)
#else
void _VS1PARAMETER_TYPES(_currn ,_AS0tree,_AS0ParamList)
_TPPPARAMETER_TYPES _currn;
DefTableKeyList* _AS0ParamList;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVparameter_typeparameter_types_tree_post=NULL;
/*SPC(7616)*/
_AVParameter_specification_2Params_post=NULLDefTableKeyList;
/*SPC(10415)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(* _AS0ParamList)=_AVParameter_specification_2Params_post;
/*SPC(10416)*/
(* _AS0tree)=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkPARAMETER_TYPES_2, _AVparameter_typeparameter_types_tree_post, NoKey);
/*SPC(7617)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2PARAMETER_TYPES(_TPPPARAMETER_TYPES _currn,TreeNodePtr* _AS0tree,DefTableKeyList* _AS0ParamList)
#else
void _VS2PARAMETER_TYPES(_currn ,_AS0tree,_AS0ParamList)
_TPPPARAMETER_TYPES _currn;
DefTableKeyList* _AS0ParamList;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1METHOD_SPECIFICATION(_TPPMETHOD_SPECIFICATION _currn,TreeNodePtr* _AS0tree)
#else
void _VS1METHOD_SPECIFICATION(_currn ,_AS0tree)
_TPPMETHOD_SPECIFICATION _currn;
TreeNodePtr* _AS0tree;

#endif
{
DefTableKeyList _AS1ParamList;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,DefTableKeyList*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1ParamList)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkMETHOD_SPECIFICATION_2, _AS1tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(7610)*/
_AVMethod_specification_Key=KResetResultType(KResetParams(NewKey(), _AS1ParamList), _currn->_desc2->_ATType);
/*SPC(10405)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2METHOD_SPECIFICATION(_TPPMETHOD_SPECIFICATION _currn,TreeNodePtr* _AS0tree)
#else
void _VS2METHOD_SPECIFICATION(_currn ,_AS0tree)
_TPPMETHOD_SPECIFICATION _currn;
TreeNodePtr* _AS0tree;

#endif
{
DefTableKeyList _AS1ParamList;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,DefTableKeyList*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)),(&( _AS1ParamList)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ARGUMENT(_TPPCLASS_ARGUMENT _currn)
#else
void _VS1CLASS_ARGUMENT(_currn )
_TPPCLASS_ARGUMENT _currn;

#endif
{
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVClass_argument_ClassArgsPtg=_currn->_desc1->_ATClassArgsPtg;
/*SPC(4128)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_ARGUMENT(_TPPCLASS_ARGUMENT _currn)
#else
void _VS2CLASS_ARGUMENT(_currn )
_TPPCLASS_ARGUMENT _currn;

#endif
{
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)));
_AVClass_argument_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENT_2, _currn->_desc1->_ATtree, NoKey);
/*SPC(7605)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_ARGUMENT(_TPPCLASS_ARGUMENT _currn)
#else
void _VS3CLASS_ARGUMENT(_currn )
_TPPCLASS_ARGUMENT _currn;

#endif
{
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)),(&( _AS1_const117)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ARGUMENTS_LST(_TPPCLASS_ARGUMENTS_LST _currn,PTGNode* _AS0ClassArgsPtg)
#else
void _VS1CLASS_ARGUMENTS_LST(_currn ,_AS0ClassArgsPtg)
_TPPCLASS_ARGUMENTS_LST _currn;
PTGNode* _AS0ClassArgsPtg;

#endif
{
TreeNodePtr _AS1tree;
PTGNode _AS1ClassArgsPtg;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,PTGNode*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1ClassArgsPtg)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0ClassArgsPtg)=PTGCommaSeq(_AS1ClassArgsPtg, _AVClass_argument_ClassArgsPtg);
/*SPC(4119)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_ARGUMENTS_LST(_TPPCLASS_ARGUMENTS_LST _currn,PTGNode* _AS0ClassArgsPtg,TreeNodePtr* _AS0tree)
#else
void _VS2CLASS_ARGUMENTS_LST(_currn ,_AS0ClassArgsPtg,_AS0tree)
_TPPCLASS_ARGUMENTS_LST _currn;
TreeNodePtr* _AS0tree;
PTGNode* _AS0ClassArgsPtg;

#endif
{
TreeNodePtr _AS1tree;
PTGNode _AS1ClassArgsPtg;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,PTGNode*,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1ClassArgsPtg)),(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(* _AS0tree)=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENTS_LST_2, _AS1tree, _AVClass_argument_tree, NoKey);
/*SPC(7595)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_ARGUMENTS_LST(_TPPCLASS_ARGUMENTS_LST _currn,PTGNode* _AS0ClassArgsPtg,TreeNodePtr* _AS0tree)
#else
void _VS3CLASS_ARGUMENTS_LST(_currn ,_AS0ClassArgsPtg,_AS0tree)
_TPPCLASS_ARGUMENTS_LST _currn;
TreeNodePtr* _AS0tree;
PTGNode* _AS0ClassArgsPtg;

#endif
{
TreeNodePtr _AS1tree;
PTGNode _AS1ClassArgsPtg;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,PTGNode*,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1ClassArgsPtg)),(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ARGUMENTS_EMPTY(_TPPCLASS_ARGUMENTS_EMPTY _currn,PTGNode* _AS0ClassArgsPtg)
#else
void _VS1CLASS_ARGUMENTS_EMPTY(_currn ,_AS0ClassArgsPtg)
_TPPCLASS_ARGUMENTS_EMPTY _currn;
PTGNode* _AS0ClassArgsPtg;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0ClassArgsPtg)=PTGNULL;
/*SPC(4124)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_ARGUMENTS_EMPTY(_TPPCLASS_ARGUMENTS_EMPTY _currn,PTGNode* _AS0ClassArgsPtg,TreeNodePtr* _AS0tree)
#else
void _VS2CLASS_ARGUMENTS_EMPTY(_currn ,_AS0ClassArgsPtg,_AS0tree)
_TPPCLASS_ARGUMENTS_EMPTY _currn;
TreeNodePtr* _AS0tree;
PTGNode* _AS0ClassArgsPtg;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0tree)=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ARGUMENTS_EMPTY_2, NoKey);
/*SPC(7601)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_ARGUMENTS_EMPTY(_TPPCLASS_ARGUMENTS_EMPTY _currn,PTGNode* _AS0ClassArgsPtg,TreeNodePtr* _AS0tree)
#else
void _VS3CLASS_ARGUMENTS_EMPTY(_currn ,_AS0ClassArgsPtg,_AS0tree)
_TPPCLASS_ARGUMENTS_EMPTY _currn;
TreeNodePtr* _AS0tree;
PTGNode* _AS0ClassArgsPtg;

#endif
{

_VisitVarDecl()
_VisitEntry();

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_SPECIFIER(_TPPCLASS_SPECIFIER _currn)
#else
void _VS1CLASS_SPECIFIER(_currn )
_TPPCLASS_SPECIFIER _currn;

#endif
{
TreeNodePtr _AS3tree;
PTGNode _AS3ClassArgsPtg;
int _AS2_const117;
int _AS2_const118;
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;
DefTableKey _AS1Key;
PTGNode _AS1ClassArgsPtg;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,PTGNode*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1ClassArgsPtg)));
(*(_CALL_VS_((NODEPTR ,PTGNode*)) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3ClassArgsPtg)));
_currn->_ATClassArgsPtg=PTGTuple(_AS1ClassArgsPtg, PTGParenthesis(_AS3ClassArgsPtg));
/*SPC(4132)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_SPECIFIER(_TPPCLASS_SPECIFIER _currn,DefTableKey* _AS0Key,int* _AS0_const118)
#else
void _VS2CLASS_SPECIFIER(_currn ,_AS0Key,_AS0_const118)
_TPPCLASS_SPECIFIER _currn;
int* _AS0_const118;
DefTableKey* _AS0Key;

#endif
{
TreeNodePtr _AS3tree;
PTGNode _AS3ClassArgsPtg;
int _AS2_const117;
int _AS2_const118;
TreeNodePtr _AS2tree;
TreeNodePtr _AS1tree;
DefTableKey _AS1Key;
PTGNode _AS1ClassArgsPtg;

_VisitVarDecl()
_VisitEntry();
_AVClass_id_use_Sym=MakeName(PTG_StringOut(_currn->_ATClassArgsPtg));
/*SPC(4135)*/
(*(_CALL_VS_((NODEPTR ,PTGNode*,DefTableKey*,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1ClassArgsPtg)),(&( _AS1Key)),(&( _AS1tree)));
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,int*)) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)),(&( _AS2_const118)));
(*(_CALL_VS_((NODEPTR ,PTGNode*,TreeNodePtr*)) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3ClassArgsPtg)),(&( _AS3tree)));
(* _AS0_const118)=_AS2_const118;
/*SPC(4131)*/
_currn->_ATtree=NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_SPECIFIER_2, _AS1tree, _AS2tree, _AS3tree, NoKey);
/*SPC(7589)*/
(* _AS0Key)=_AS1Key;
/*SPC(4693)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_SPECIFIER(_TPPCLASS_SPECIFIER _currn,DefTableKey* _AS0Key,int* _AS0_const118,int* _AS0_const117)
#else
void _VS3CLASS_SPECIFIER(_currn ,_AS0Key,_AS0_const118,_AS0_const117)
_TPPCLASS_SPECIFIER _currn;
int* _AS0_const117;
int* _AS0_const118;
DefTableKey* _AS0Key;

#endif
{
TreeNodePtr _AS3tree;
PTGNode _AS3ClassArgsPtg;
int _AS2_const117;
int _AS2_const118;
TreeNodePtr _AS2tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*,int*,int*)) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2,(&( _AS2tree)),(&( _AS2_const118)),(&( _AS2_const117)));
(*(_CALL_VS_((NODEPTR ,PTGNode*,TreeNodePtr*)) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3,(&( _AS3ClassArgsPtg)),(&( _AS3tree)));
(* _AS0_const117)=_AS2_const117;
/*SPC(4131)*/
_AVClass_specifier__const119=_currn->_desc1->_ATIsRow;
/*SPC(4131)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_STREAM(_TPPTYPE_SPECIFIER_STREAM _currn)
#else
void _VS1TYPE_SPECIFIER_STREAM(_currn )
_TPPTYPE_SPECIFIER_STREAM _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_STREAM_2, _AS1tree, NoKey);
/*SPC(7576)*/
_currn->_ATType=NewType(_AVMethod_specification_Key, AddElIS(methodK, SingleIS(streamK)), MakeName("stream"));
/*SPC(10453)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIER_STREAM(_TPPTYPE_SPECIFIER_STREAM _currn)
#else
void _VS2TYPE_SPECIFIER_STREAM(_currn )
_TPPTYPE_SPECIFIER_STREAM _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_SAME(_TPPTYPE_SPECIFIER_SAME _currn)
#else
void _VS1TYPE_SPECIFIER_SAME(_currn )
_TPPTYPE_SPECIFIER_SAME _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_SAME_2, NoKey);
/*SPC(7585)*/
_currn->_ATType=GetMonoType(same_key, NoType);
/*SPC(10438)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_SAME_POLY(_TPPTYPE_SPECIFIER_SAME_POLY _currn)
#else
void _VS1TYPE_SPECIFIER_SAME_POLY(_currn )
_TPPTYPE_SPECIFIER_SAME_POLY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
ResetUsedPolymorph((* _IG_incl123), 1);
/*SPC(11317)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_SAME_POLY_2, NoKey);
/*SPC(7581)*/
_currn->_ATType=GetPolyType(same_key, NoType);
/*SPC(10443)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_PROC(_TPPTYPE_SPECIFIER_PROC _currn)
#else
void _VS1TYPE_SPECIFIER_PROC(_currn )
_TPPTYPE_SPECIFIER_PROC _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_PROC_2, _AS1tree, NoKey);
/*SPC(7571)*/
_currn->_ATType=NewType(_AVMethod_specification_Key, AddElIS(methodK, SingleIS(procedureK)), MakeName("procedure"));
/*SPC(10458)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIER_PROC(_TPPTYPE_SPECIFIER_PROC _currn)
#else
void _VS2TYPE_SPECIFIER_PROC(_currn )
_TPPTYPE_SPECIFIER_PROC _currn;

#endif
{
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_EMPTY(_TPPTYPE_SPECIFIER_EMPTY _currn)
#else
void _VS1TYPE_SPECIFIER_EMPTY(_currn )
_TPPTYPE_SPECIFIER_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_EMPTY_2, NoKey);
/*SPC(7567)*/
_currn->_ATType=NoType;
/*SPC(10463)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_CL(_TPPTYPE_SPECIFIER_CL _currn)
#else
void _VS1TYPE_SPECIFIER_CL(_currn )
_TPPTYPE_SPECIFIER_CL _currn;

#endif
{
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)));
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_CL_2, _currn->_desc1->_ATtree, NoKey);
/*SPC(7562)*/
_currn->_ATType=GetMonoType(_AS1Key, NoType);
/*SPC(10433)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIER_CL(_TPPTYPE_SPECIFIER_CL _currn)
#else
void _VS2TYPE_SPECIFIER_CL(_currn )
_TPPTYPE_SPECIFIER_CL _currn;

#endif
{
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)),(&( _AS1_const117)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIER_CL_POLY(_TPPTYPE_SPECIFIER_CL_POLY _currn)
#else
void _VS1TYPE_SPECIFIER_CL_POLY(_currn )
_TPPTYPE_SPECIFIER_CL_POLY _currn;

#endif
{
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)));
ResetUsedPolymorph(_AS1Key, 1);
/*SPC(11321)*/
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIER_CL_POLY_2, _currn->_desc1->_ATtree, NoKey);
/*SPC(7557)*/
_currn->_ATType=GetPolyType(_AS1Key, NoType);
/*SPC(10448)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIER_CL_POLY(_TPPTYPE_SPECIFIER_CL_POLY _currn)
#else
void _VS2TYPE_SPECIFIER_CL_POLY(_currn )
_TPPTYPE_SPECIFIER_CL_POLY _currn;

#endif
{
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)),(&( _AS1_const117)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIERS_EMPTY(_TPPTYPE_SPECIFIERS_EMPTY _currn)
#else
void _VS1TYPE_SPECIFIERS_EMPTY(_currn )
_TPPTYPE_SPECIFIERS_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVType_specifiers_tree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIERS_EMPTY_2, NoKey);
/*SPC(7553)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1TYPE_SPECIFIERS_LST(_TPPTYPE_SPECIFIERS_LST _currn)
#else
void _VS1TYPE_SPECIFIERS_LST(_currn )
_TPPTYPE_SPECIFIERS_LST _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVType_specifiers_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkTYPE_SPECIFIERS_LST_2, _AVType_specifiers_tree, _currn->_desc2->_ATtree, NoKey);
/*SPC(7547)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2TYPE_SPECIFIERS_LST(_TPPTYPE_SPECIFIERS_LST _currn)
#else
void _VS2TYPE_SPECIFIERS_LST(_currn )
_TPPTYPE_SPECIFIERS_LST _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_PARAMETER(_TPPCLASS_PARAMETER _currn)
#else
void _VS1CLASS_PARAMETER(_currn )
_TPPCLASS_PARAMETER _currn;

#endif
{
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVClass_parameter_ClassArgsPtg=_currn->_desc1->_ATClassArgsPtg;
/*SPC(4115)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_PARAMETER(_TPPCLASS_PARAMETER _currn)
#else
void _VS2CLASS_PARAMETER(_currn )
_TPPCLASS_PARAMETER _currn;

#endif
{
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)));
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVClass_parameter_tree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkCLASS_PARAMETER_2, _currn->_desc1->_ATtree, _AVType_specifiers_tree, NoKey);
/*SPC(7541)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_PARAMETER(_TPPCLASS_PARAMETER _currn)
#else
void _VS3CLASS_PARAMETER(_currn )
_TPPCLASS_PARAMETER _currn;

#endif
{
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)),(&( _AS1_const117)));
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1IDENT_DEF(_TPPIDENT_DEF _currn)
#else
void _VS1IDENT_DEF(_currn )
_TPPIDENT_DEF _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVIdent_def_IsParamDecl=(* _IG_incl137);
/*SPC(4198)*/
_currn->_ATIsAttributeDecl=(* _IG_incl138);
/*SPC(4006)*/
_AVIdent_def_Bind=
((OR(EQ(_currn->_ATIsAttributeDecl, 1), EQ(_AVIdent_def_IsParamDecl, 1))
) ? (BindIdn((* _IG_incl0), _currn->_ATSym)
) : (NoBinding))
;
/*SPC(4012)*/
_currn->_ATKey=KeyOf(_AVIdent_def_Bind);
/*SPC(4015)*/
UnionKindSet(_currn->_ATKey, _AVIdent_def_KindSet);
/*SPC(12151)*/
ResetType(_currn->_ATKey, (* _IG_incl135));
/*SPC(10554)*/

if (OR(EQ(_currn->_ATSym, MakeName("self")), EQ(_currn->_ATSym, MakeName("res")))) {
message(ERROR, "this identifier has special meaning and cannot be redefined", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(6952)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2IDENT_DEF(_TPPIDENT_DEF _currn,TreeNodePtr* _AS0tree)
#else
void _VS2IDENT_DEF(_currn ,_AS0tree)
_TPPIDENT_DEF _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
(* _AS0tree)=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkIDENT_DEF_2, _currn->_ATTERM_1, _currn->_ATKey);
/*SPC(7527)*/

if (EQ(_currn->_ATIsAttributeDecl, 1)) {
CreateReaderWriterMethods(_currn->_ATKey, (* _IG_incl123));

} else {
}
;
/*SPC(5068)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3IDENT_DEF(_TPPIDENT_DEF _currn,TreeNodePtr* _AS0tree)
#else
void _VS3IDENT_DEF(_currn ,_AS0tree)
_TPPIDENT_DEF _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVIdent_def_Cnt=ADD(1, GetCnt(_currn->_ATKey, 0));
/*SPC(12382)*/
ResetCnt(_currn->_ATKey, _AVIdent_def_Cnt);
/*SPC(12385)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4IDENT_DEF(_TPPIDENT_DEF _currn,TreeNodePtr* _AS0tree)
#else
void _VS4IDENT_DEF(_currn ,_AS0tree)
_TPPIDENT_DEF _currn;
TreeNodePtr* _AS0tree;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVIdent_def_TotalCnt=GetCnt(_currn->_ATKey, 0);
/*SPC(12389)*/

if (GT(_AVIdent_def_TotalCnt, 1)) {
message(ERROR, CatStrInd("identifier is multiply defined: ", _currn->_ATSym), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(4248)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BOUND_IDENTIFIER_STAR(_TPPBOUND_IDENTIFIER_STAR _currn)
#else
void _VS1BOUND_IDENTIFIER_STAR(_currn )
_TPPBOUND_IDENTIFIER_STAR _currn;

#endif
{
STPtr* _IL_incl135;
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
_currn->_ATType=GetMonoType(GetPreDefKey(MakeName("INT"), (* _IG_incl132), (&( _currn->_AT_pos))), NoType);
/*SPC(10541)*/
_currn->_ATIsAttributeDecl=1;
/*SPC(3995)*/
_IG_incl135=_IL_incl135;
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BOUND_IDENTIFIER_STAR(_TPPBOUND_IDENTIFIER_STAR _currn)
#else
void _VS2BOUND_IDENTIFIER_STAR(_currn )
_TPPBOUND_IDENTIFIER_STAR _currn;

#endif
{
STPtr* _IL_incl135;
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
_AVBound_identifier_tree=NULL;
/*SPC(7523)*/
_IG_incl135=_IL_incl135;
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BOUND_IDENTIFIER_STAR(_TPPBOUND_IDENTIFIER_STAR _currn)
#else
void _VS3BOUND_IDENTIFIER_STAR(_currn )
_TPPBOUND_IDENTIFIER_STAR _currn;

#endif
{
STPtr* _IL_incl135;
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
_AVBound_identifier_IsStar=1;
/*SPC(3051)*/
_IG_incl135=_IL_incl135;
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4BOUND_IDENTIFIER_STAR(_TPPBOUND_IDENTIFIER_STAR _currn)
#else
void _VS4BOUND_IDENTIFIER_STAR(_currn )
_TPPBOUND_IDENTIFIER_STAR _currn;

#endif
{
STPtr* _IL_incl135;
int* _IL_incl138;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
_IG_incl135=_IL_incl135;
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BOUND_IDENTIFIER(_TPPBOUND_IDENTIFIER _currn)
#else
void _VS1BOUND_IDENTIFIER(_currn )
_TPPBOUND_IDENTIFIER _currn;

#endif
{
STPtr* _IL_incl135;
int* _IL_incl138;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
_currn->_ATType=GetMonoType(GetPreDefKey(MakeName("INT"), (* _IG_incl132), (&( _currn->_AT_pos))), NoType);
/*SPC(10541)*/
_currn->_ATIsAttributeDecl=1;
/*SPC(3995)*/
_AVIdent_def_KindSet=AddElIS(readonlyK, AddElIS(attributeK, SingleIS(boundK)));
/*SPC(3500)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_IG_incl135=_IL_incl135;
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BOUND_IDENTIFIER(_TPPBOUND_IDENTIFIER _currn)
#else
void _VS2BOUND_IDENTIFIER(_currn )
_TPPBOUND_IDENTIFIER _currn;

#endif
{
STPtr* _IL_incl135;
int* _IL_incl138;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVBound_identifier_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBOUND_IDENTIFIER_2, _AS1tree, NoKey);
/*SPC(7518)*/
_IG_incl135=_IL_incl135;
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3BOUND_IDENTIFIER(_TPPBOUND_IDENTIFIER _currn)
#else
void _VS3BOUND_IDENTIFIER(_currn )
_TPPBOUND_IDENTIFIER _currn;

#endif
{
STPtr* _IL_incl135;
int* _IL_incl138;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_AVBound_identifier_IsStar=0;
/*SPC(3047)*/
_IG_incl135=_IL_incl135;
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4BOUND_IDENTIFIER(_TPPBOUND_IDENTIFIER _currn)
#else
void _VS4BOUND_IDENTIFIER(_currn )
_TPPBOUND_IDENTIFIER _currn;

#endif
{
STPtr* _IL_incl135;
int* _IL_incl138;
TreeNodePtr _AS1tree;

_VisitVarDecl()
_VisitEntry();
_IL_incl135=_IG_incl135;_IG_incl135= &(_currn->_ATType);
_IL_incl138=_IG_incl138;_IG_incl138= &(_currn->_ATIsAttributeDecl);
(*(_CALL_VS_((NODEPTR ,TreeNodePtr*)) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1tree)));
_IG_incl135=_IL_incl135;
_IG_incl138=_IL_incl138;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_PARAMETERS_EMPTY(_TPPCLASS_PARAMETERS_EMPTY _currn)
#else
void _VS1CLASS_PARAMETERS_EMPTY(_currn )
_TPPCLASS_PARAMETERS_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVClass_parameters_ClassArgsPtg=PTGNULL;
/*SPC(4111)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_PARAMETERS_EMPTY(_TPPCLASS_PARAMETERS_EMPTY _currn)
#else
void _VS2CLASS_PARAMETERS_EMPTY(_currn )
_TPPCLASS_PARAMETERS_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_PARAMETERS_EMPTY_2, NoKey);
/*SPC(7537)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_PARAMETERS_LST(_TPPCLASS_PARAMETERS_LST _currn)
#else
void _VS1CLASS_PARAMETERS_LST(_currn )
_TPPCLASS_PARAMETERS_LST _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVClass_parameters_ClassArgsPtg=PTGCommaSeq(_AVClass_parameters_ClassArgsPtg, _AVClass_parameter_ClassArgsPtg);
/*SPC(4106)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_PARAMETERS_LST(_TPPCLASS_PARAMETERS_LST _currn)
#else
void _VS2CLASS_PARAMETERS_LST(_currn )
_TPPCLASS_PARAMETERS_LST _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkCLASS_PARAMETERS_LST_2, _currn->_desc1->_ATtree, _AVClass_parameter_tree, NoKey);
/*SPC(7531)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_PARAMETERS_LST(_TPPCLASS_PARAMETERS_LST _currn)
#else
void _VS3CLASS_PARAMETERS_LST(_currn )
_TPPCLASS_PARAMETERS_LST _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_BOUNDS_EMPTY(_TPPCLASS_BOUNDS_EMPTY _currn)
#else
void _VS1CLASS_BOUNDS_EMPTY(_currn )
_TPPCLASS_BOUNDS_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVClass_bounds_is_array_class=0;
/*SPC(3349)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_BOUNDS_EMPTY(_TPPCLASS_BOUNDS_EMPTY _currn)
#else
void _VS2CLASS_BOUNDS_EMPTY(_currn )
_TPPCLASS_BOUNDS_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_BOUNDS_EMPTY_2, NoKey);
/*SPC(7514)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_BOUNDS_EMPTY(_TPPCLASS_BOUNDS_EMPTY _currn)
#else
void _VS3CLASS_BOUNDS_EMPTY(_currn )
_TPPCLASS_BOUNDS_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVClass_bounds_NumStars=0;
/*SPC(3043)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_BOUNDS_LST(_TPPCLASS_BOUNDS_LST _currn)
#else
void _VS1CLASS_BOUNDS_LST(_currn )
_TPPCLASS_BOUNDS_LST _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVClass_bounds_is_array_class=1;
/*SPC(3353)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_BOUNDS_LST(_TPPCLASS_BOUNDS_LST _currn)
#else
void _VS2CLASS_BOUNDS_LST(_currn )
_TPPCLASS_BOUNDS_LST _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATtree=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), MkCLASS_BOUNDS_LST_2, _currn->_desc1->_ATtree, _AVBound_identifier_tree, NoKey);
/*SPC(7508)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_BOUNDS_LST(_TPPCLASS_BOUNDS_LST _currn)
#else
void _VS3CLASS_BOUNDS_LST(_currn )
_TPPCLASS_BOUNDS_LST _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVClass_bounds_NumStars=ADD(_AVClass_bounds_NumStars, _AVBound_identifier_IsStar);
/*SPC(3039)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_BOUNDS_LST(_TPPCLASS_BOUNDS_LST _currn)
#else
void _VS4CLASS_BOUNDS_LST(_currn )
_TPPCLASS_BOUNDS_LST _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ID_DEF(_TPPCLASS_ID_DEF _currn)
#else
void _VS1CLASS_ID_DEF(_currn )
_TPPCLASS_ID_DEF _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVClass_id_def_ClassArgsPtg=PTGIdent(StringTable(_currn->_ATTERM_1));
/*SPC(4102)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_ID_DEF(_TPPCLASS_ID_DEF _currn)
#else
void _VS2CLASS_ID_DEF(_currn )
_TPPCLASS_ID_DEF _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVClass_id_def_Bind=BindIdn((* _IG_incl132), _currn->_ATSym);
/*SPC(13029)*/
_currn->_ATKey=KeyOf(_AVClass_id_def_Bind);
/*SPC(13031)*/
ResetMonoType(KResetPolyType(_currn->_ATKey, NewType(_currn->_ATKey, SingleIS(polymorphK), MakeName(CatStrInd("$", _currn->_ATSym)))), NewType(_currn->_ATKey, SingleIS(monomorphK), _currn->_ATSym));
/*SPC(10390)*/
ResetSym(_currn->_ATKey, _currn->_ATSym);
/*SPC(4677)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_ID_DEF(_TPPCLASS_ID_DEF _currn)
#else
void _VS3CLASS_ID_DEF(_currn )
_TPPCLASS_ID_DEF _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVClass_id_def_poly_decl_tree=
((EQ(GetUsedPolymorph(_currn->_ATKey, 0), 1)
) ? (NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkCLASS_ID_DEF_POLY_2, _currn->_ATSym, NoKey)
) : (NULL))
;
/*SPC(8445)*/
_AVClass_id_def_tree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkCLASS_ID_DEF_2, _currn->_ATSym, NoKey);
/*SPC(7485)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_OPT_CL(_TPPBUILTIN_OPT_CL _currn)
#else
void _VS1BUILTIN_OPT_CL(_currn )
_TPPBUILTIN_OPT_CL _currn;

#endif
{
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*)) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)));
_currn->_ATInhers_post=_AVInheritancesInhers_post;
/*SPC(0)*/
_AVBuiltin_option_is_builtin=1;
/*SPC(3361)*/
_currn->_ATtree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkBUILTIN_OPT_CL_2, _currn->_desc1->_ATtree, NoKey);
/*SPC(7503)*/
_AVBuiltin_option_is_empty=0;
/*SPC(3111)*/
ResetBuiltinTree((* _IG_incl123), 
((_AVBuiltin_option_is_empty
) ? (NULL
) : (_currn->_ATtree))
);
/*SPC(3123)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2BUILTIN_OPT_CL(_TPPBUILTIN_OPT_CL _currn)
#else
void _VS2BUILTIN_OPT_CL(_currn )
_TPPBUILTIN_OPT_CL _currn;

#endif
{
int _AS1_const117;
int _AS1_const118;
DefTableKey _AS1Key;

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR ,DefTableKey*,int*,int*)) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1,(&( _AS1Key)),(&( _AS1_const118)),(&( _AS1_const117)));

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_OPT_ID(_TPPBUILTIN_OPT_ID _currn)
#else
void _VS1BUILTIN_OPT_ID(_currn )
_TPPBUILTIN_OPT_ID _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATInhers_post=_AVInheritancesInhers_post;
/*SPC(0)*/
_AVBuiltin_option_is_builtin=1;
/*SPC(3361)*/
_currn->_ATtree=NewTreeNodeRhs_0_1((&( _currn->_AT_pos)), MkBUILTIN_OPT_ID_2, _currn->_ATTERM_1, NoKey);
/*SPC(7498)*/
_AVBuiltin_option_is_empty=0;
/*SPC(3111)*/
ResetBuiltinTree((* _IG_incl123), 
((_AVBuiltin_option_is_empty
) ? (NULL
) : (_currn->_ATtree))
);
/*SPC(3123)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_OPT(_TPPBUILTIN_OPT _currn)
#else
void _VS1BUILTIN_OPT(_currn )
_TPPBUILTIN_OPT _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATInhers_post=_AVInheritancesInhers_post;
/*SPC(0)*/
_AVBuiltin_option_is_builtin=1;
/*SPC(3361)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkBUILTIN_OPT_2, NoKey);
/*SPC(7494)*/
_AVBuiltin_option_is_empty=1;
/*SPC(3119)*/
ResetBuiltinTree((* _IG_incl123), 
((_AVBuiltin_option_is_empty
) ? (NULL
) : (_currn->_ATtree))
);
/*SPC(3123)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1BUILTIN_OPT_EMPTY(_TPPBUILTIN_OPT_EMPTY _currn)
#else
void _VS1BUILTIN_OPT_EMPTY(_currn )
_TPPBUILTIN_OPT_EMPTY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATInhers_post=_AVInheritancesInhers_post;
/*SPC(0)*/
_AVBuiltin_option_is_builtin=0;
/*SPC(3365)*/
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkBUILTIN_OPT_EMPTY_2, NoKey);
/*SPC(7490)*/
_AVBuiltin_option_is_empty=1;
/*SPC(3115)*/
ResetBuiltinTree((* _IG_incl123), 
((_AVBuiltin_option_is_empty
) ? (NULL
) : (_currn->_ATtree))
);
/*SPC(3123)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_BODY(_TPPCLASS_BODY _currn)
#else
void _VS1CLASS_BODY(_currn )
_TPPCLASS_BODY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVInheritancesInhers_post=NULLInheritanceInfoList;
/*SPC(3227)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVClass_body_is_builtin=_AVBuiltin_option_is_builtin;
/*SPC(3369)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_BODY(_TPPCLASS_BODY _currn)
#else
void _VS2CLASS_BODY(_currn )
_TPPCLASS_BODY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_BODY(_TPPCLASS_BODY _currn)
#else
void _VS3CLASS_BODY(_currn )
_TPPCLASS_BODY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVInheritancesInhers_post=_currn->_desc1->_ATInhers_post;
/*SPC(0)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVClass_body__const121=_AVFeature_declarations_org_tree;
/*SPC(3142)*/
_currn->_AT_const125=_AVInheritances_BoundsFrom;
/*SPC(3142)*/
_AVClass_body_InheritanceList=_AVInheritancesInhers_post;
/*SPC(3228)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_BODY(_TPPCLASS_BODY _currn)
#else
void _VS4CLASS_BODY(_currn )
_TPPCLASS_BODY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVClass_body__const124=_AVInheritances_BoundsTree;
/*SPC(3142)*/
_AVClass_body_tree=NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_BODY_2, 
((EQ((* _IG_incl140), NULL)
) ? (_currn->_desc1->_ATtree
) : ((* _IG_incl140)))
, _AVInheritances_tree, _AVFeature_declarations_tree, NoKey);
/*SPC(3143)*/
_AVClass_body_poly_decl_tree=StripClassBody(CopyTree(_AVClass_body_tree), (* _IG_incl118), (* _IG_incl122), (&( _currn->_AT_pos)));
/*SPC(8453)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5CLASS_BODY(_TPPCLASS_BODY _currn)
#else
void _VS5CLASS_BODY(_currn )
_TPPCLASS_BODY _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_AVClass_body__const126=_AVInheritances_NumStars;
/*SPC(3142)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_HEAD(_TPPCLASS_HEAD _currn)
#else
void _VS1CLASS_HEAD(_currn )
_TPPCLASS_HEAD _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_currn->_desc1->_ATSym=MakeName(PTG_StringOut(PTGTuple(_AVClass_id_def_ClassArgsPtg, PTGParenthesis(_AVClass_parameters_ClassArgsPtg))));
/*SPC(4096)*/
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_HEAD(_TPPCLASS_HEAD _currn)
#else
void _VS2CLASS_HEAD(_currn )
_TPPCLASS_HEAD _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVClass_head__const122=_currn->_desc1->_ATKey;
/*SPC(3026)*/
_AVClass_head_is_array_class=_AVClass_bounds_is_array_class;
/*SPC(3357)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_HEAD(_TPPCLASS_HEAD _currn)
#else
void _VS3CLASS_HEAD(_currn )
_TPPCLASS_HEAD _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
ResetBoundsTree(_currn->_desc1->_ATKey, _currn->_desc2->_ATtree);
/*SPC(3027)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_HEAD(_TPPCLASS_HEAD _currn)
#else
void _VS4CLASS_HEAD(_currn )
_TPPCLASS_HEAD _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_AT_const123=_AVClass_bounds_NumStars;
/*SPC(3026)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5CLASS_HEAD(_TPPCLASS_HEAD _currn)
#else
void _VS5CLASS_HEAD(_currn )
_TPPCLASS_HEAD _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVClass_head_class_bounds_tree=
((EQ((* _IG_incl141), NULL)
) ? (_currn->_desc2->_ATtree
) : ((* _IG_incl141)))
;
/*SPC(7476)*/
_AVClass_head_tree=NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_HEAD_2, _AVClass_id_def_tree, _AVClass_head_class_bounds_tree, _currn->_desc3->_ATtree, NoKey);
/*SPC(7479)*/
_AVClass_head_poly_decl_tree=
((NOT(EQ(_AVClass_id_def_poly_decl_tree, NULL))
) ? (NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_HEAD_2, _AVClass_id_def_poly_decl_tree, CopyTree(_AVClass_head_class_bounds_tree), CopyTree(_currn->_desc3->_ATtree), NoKey)
) : (NULL))
;
/*SPC(8437)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6CLASS_HEAD(_TPPCLASS_HEAD _currn)
#else
void _VS6CLASS_HEAD(_currn )
_TPPCLASS_HEAD _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ATTRIBUTE_VA(_TPPCLASS_ATTRIBUTE_VA _currn)
#else
void _VS1CLASS_ATTRIBUTE_VA(_currn )
_TPPCLASS_ATTRIBUTE_VA _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ATTRIBUTE_VA_2, NoKey);
/*SPC(7470)*/
_currn->_ATKindSet=SingleIS(valueK);
/*SPC(3334)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ATTRIBUTE_EX(_TPPCLASS_ATTRIBUTE_EX _currn)
#else
void _VS1CLASS_ATTRIBUTE_EX(_currn )
_TPPCLASS_ATTRIBUTE_EX _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ATTRIBUTE_EX_2, NoKey);
/*SPC(7467)*/
_currn->_ATKindSet=SingleIS(externalK);
/*SPC(3326)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ATTRIBUTE(_TPPCLASS_ATTRIBUTE _currn)
#else
void _VS1CLASS_ATTRIBUTE(_currn )
_TPPCLASS_ATTRIBUTE _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ATTRIBUTE_2, NoKey);
/*SPC(7464)*/
_currn->_ATKindSet=SingleIS(referenceK);
/*SPC(3342)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ATTRIBUTE_ABVA(_TPPCLASS_ATTRIBUTE_ABVA _currn)
#else
void _VS1CLASS_ATTRIBUTE_ABVA(_currn )
_TPPCLASS_ATTRIBUTE_ABVA _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ATTRIBUTE_ABVA_2, NoKey);
/*SPC(7461)*/
_currn->_ATKindSet=AddElIS(abstractK, SingleIS(valueK));
/*SPC(3338)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_ATTRIBUTE_AB(_TPPCLASS_ATTRIBUTE_AB _currn)
#else
void _VS1CLASS_ATTRIBUTE_AB(_currn )
_TPPCLASS_ATTRIBUTE_AB _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_currn->_ATtree=NewTreeNodeRhs_0_0((&( _currn->_AT_pos)), MkCLASS_ATTRIBUTE_AB_2, NoKey);
/*SPC(7458)*/
_currn->_ATKindSet=AddElIS(referenceK, SingleIS(abstractK));
/*SPC(3330)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_DECLARATION(_TPPCLASS_DECLARATION _currn)
#else
void _VS1CLASS_DECLARATION(_currn )
_TPPCLASS_DECLARATION _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_DECLARATION(_TPPCLASS_DECLARATION _currn)
#else
void _VS2CLASS_DECLARATION(_currn )
_TPPCLASS_DECLARATION _currn;

#endif
{
IntSet* _IL_incl128;
DefTableKey* _IL_incl123;
Environment* _IL_incl0;

_VisitVarDecl()
_VisitEntry();
_IL_incl128=_IG_incl128;_IG_incl128= &(_currn->_ATKindSet);
_IL_incl123=_IG_incl123;_IG_incl123= &(_currn->_ATKey);
_IL_incl0=_IG_incl0;_IG_incl0= &(_currn->_ATInhEnv);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATKey=_AVClass_head__const122;
/*SPC(4687)*/
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_currn->_ATKindSet=UniteIS(_currn->_desc1->_ATKindSet, UniteIS(
((_AVClass_head_is_array_class
) ? (SingleIS(arrayclassK)
) : (NULLIS))
, UniteIS(
((_AVClass_body_is_builtin
) ? (SingleIS(builtinK)
) : (NULLIS))
, 
((EQ(_currn->_ATKey, GetPreDefKey(MakeName("OB"), (* _IG_incl132), (&( _currn->_AT_pos))))
) ? (SingleIS(referenceK)
) : (NULLIS))
)));
/*SPC(3373)*/
UnionKindSet(_currn->_ATKey, _currn->_ATKindSet);
/*SPC(12151)*/
_IG_incl128=_IL_incl128;
_IG_incl123=_IL_incl123;
_IG_incl0=_IL_incl0;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_DECLARATION(_TPPCLASS_DECLARATION _currn)
#else
void _VS3CLASS_DECLARATION(_currn )
_TPPCLASS_DECLARATION _currn;

#endif
{
IntSet* _IL_incl128;
DefTableKey* _IL_incl123;
Environment* _IL_incl0;

_VisitVarDecl()
_VisitEntry();
_IL_incl128=_IG_incl128;_IG_incl128= &(_currn->_ATKindSet);
_IL_incl123=_IG_incl123;_IG_incl123= &(_currn->_ATKey);
_IL_incl0=_IG_incl0;_IG_incl0= &(_currn->_ATInhEnv);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
ResetInhScope(_AVClass_declaration_InhScopeKey, _currn->_ATInhEnv);
/*SPC(12268)*/
_IG_incl128=_IL_incl128;
_IG_incl123=_IL_incl123;
_IG_incl0=_IL_incl0;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_DECLARATION(_TPPCLASS_DECLARATION _currn)
#else
void _VS4CLASS_DECLARATION(_currn )
_TPPCLASS_DECLARATION _currn;

#endif
{
IntSet* _IL_incl128;
DefTableKey* _IL_incl123;
Environment* _IL_incl0;

_VisitVarDecl()
_VisitEntry();
_IL_incl128=_IG_incl128;_IG_incl128= &(_currn->_ATKindSet);
_IL_incl123=_IG_incl123;_IG_incl123= &(_currn->_ATKey);
_IL_incl0=_IG_incl0;_IG_incl0= &(_currn->_ATInhEnv);
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

if (CheckLocalConflicts(_currn->_ATKey, (&( _currn->_AT_pos)))) {
message(ERROR, CatStrInd("Method conflicts in class ", GetSym(_currn->_ATKey, 0)), 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(3754)*/
ResetFeatureTree(_currn->_ATKey, _AVClass_body__const121);
/*SPC(3200)*/

if (OR(OR(EQ(_currn->_ATKey, GetPreDefKey(MakeName("REFERENCE"), (* _IG_incl132), (&( _currn->_AT_pos)))), OR(EQ(_currn->_ATKey, GetPreDefKey(MakeName("VALUE"), (* _IG_incl132), (&( _currn->_AT_pos)))), EQ(_currn->_ATKey, GetPreDefKey(MakeName("OB"), (* _IG_incl132), (&( _currn->_AT_pos)))))), InIS(externalK, _currn->_ATKindSet))) {
ResetInheritances(_currn->_ATKey, _AVClass_body_InheritanceList);

} else {

if (InIS(referenceK, _currn->_ATKindSet)) {
ResetInheritances(_currn->_ATKey, AppElInheritanceInfoList(_AVClass_body_InheritanceList, NewInheritanceInfo(GetPreDefKey(MakeName("REFERENCE"), (* _IG_incl132), (&( _currn->_AT_pos))), NULLDefTableKeyList, 0, 0, 1)));

} else {
ResetInheritances(_currn->_ATKey, AppElInheritanceInfoList(_AVClass_body_InheritanceList, NewInheritanceInfo(GetPreDefKey(MakeName("VALUE"), (* _IG_incl132), (&( _currn->_AT_pos))), NULLDefTableKeyList, 0, 0, 1)));
}
;
}
;
/*SPC(3173)*/
_IG_incl128=_IL_incl128;
_IG_incl123=_IL_incl123;
_IG_incl0=_IL_incl0;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5CLASS_DECLARATION(_TPPCLASS_DECLARATION _currn)
#else
void _VS5CLASS_DECLARATION(_currn )
_TPPCLASS_DECLARATION _currn;

#endif
{
IntSet* _IL_incl128;
DefTableKey* _IL_incl123;
Environment* _IL_incl0;

_VisitVarDecl()
_VisitEntry();
_IL_incl128=_IG_incl128;_IG_incl128= &(_currn->_ATKindSet);
_IL_incl123=_IG_incl123;_IG_incl123= &(_currn->_ATKey);
_IL_incl0=_IG_incl0;_IG_incl0= &(_currn->_ATInhEnv);

if (NOT(GetInhStatus(_currn->_ATKey, 0))) {

if (EQ(InheritFeatures(_currn->_ATKey, (&( _currn->_AT_pos))), 0)) {
message(DEADLY, "stopped compiling due to cyclic dependencies", 0, (&( _currn->_AT_pos)));

} else {
}
;

} else {
}
;
/*SPC(3295)*/
ResetGetsBoundsFrom(_currn->_ATKey, 
((EQ(_currn->_desc3->_AT_const125, NoKey)
) ? (_currn->_ATKey
) : (_currn->_desc3->_AT_const125))
);
/*SPC(3021)*/
_IG_incl128=_IL_incl128;
_IG_incl123=_IL_incl123;
_IG_incl0=_IL_incl0;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6CLASS_DECLARATION(_TPPCLASS_DECLARATION _currn)
#else
void _VS6CLASS_DECLARATION(_currn )
_TPPCLASS_DECLARATION _currn;

#endif
{
TreeNodePtr* _IL_incl141;
TreeNodePtr* _IL_incl140;
IntSet* _IL_incl128;
DefTableKey* _IL_incl123;
Environment* _IL_incl0;

_VisitVarDecl()
_VisitEntry();
_IL_incl141=_IG_incl141;_IG_incl141= &(_currn->_ATBoundsTree);
_IL_incl140=_IG_incl140;_IG_incl140= &(_currn->_ATBuiltinTree);
_IL_incl128=_IG_incl128;_IG_incl128= &(_currn->_ATKindSet);
_IL_incl123=_IG_incl123;_IG_incl123= &(_currn->_ATKey);
_IL_incl0=_IG_incl0;_IG_incl0= &(_currn->_ATInhEnv);
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_currn->_ATBuiltinTree=GetBuiltinTree(CalcGetsBuiltinFrom(_currn->_ATKey, (&( _currn->_AT_pos))), NULL);
/*SPC(3136)*/
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);
_currn->_ATBoundsTree=
((EQ(_currn->_desc2->_AT_const123, 0)
) ? (NULL
) : (_AVClass_body__const124))
;
/*SPC(3099)*/
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
_AVClass_declaration_poly_decl_tree=
((NOT(EQ(_AVClass_head_poly_decl_tree, NULL))
) ? (NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_DECLARATION_2, _currn->_desc1->_ATtree, _AVClass_head_poly_decl_tree, _AVClass_body_poly_decl_tree, NoKey)
) : (NULL))
;
/*SPC(8430)*/
_AVClass_declaration_tree=NewTreeNodeRhs_3_0((&( _currn->_AT_pos)), MkCLASS_DECLARATION_2, _currn->_desc1->_ATtree, _AVClass_head_tree, 
((InIS(abstractK, _currn->_ATKindSet)
) ? (_AVClass_body_poly_decl_tree
) : (_AVClass_body_tree))
, NoKey);
/*SPC(7448)*/
_AVclass_declarationclass_decls_tree_post=NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2CLASS_DECLARATIONS_2, NewTreeNodeRhs_2_0((&( _currn->_AT_pos)), Mk2CLASS_DECLARATIONS_2, _AVclass_declarationclass_decls_tree_post, _AVClass_declaration_tree, NoKey), _AVClass_declaration_poly_decl_tree, NoKey);
/*SPC(7442)*/
_IG_incl141=_IL_incl141;
_IG_incl140=_IL_incl140;
_IG_incl128=_IL_incl128;
_IG_incl123=_IL_incl123;
_IG_incl0=_IL_incl0;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7CLASS_DECLARATION(_TPPCLASS_DECLARATION _currn)
#else
void _VS7CLASS_DECLARATION(_currn )
_TPPCLASS_DECLARATION _currn;

#endif
{
TreeNodePtr* _IL_incl141;
TreeNodePtr* _IL_incl140;
IntSet* _IL_incl128;
DefTableKey* _IL_incl123;
Environment* _IL_incl0;

_VisitVarDecl()
_VisitEntry();
_IL_incl141=_IG_incl141;_IG_incl141= &(_currn->_ATBoundsTree);
_IL_incl140=_IG_incl140;_IG_incl140= &(_currn->_ATBuiltinTree);
_IL_incl128=_IG_incl128;_IG_incl128= &(_currn->_ATKindSet);
_IL_incl123=_IG_incl123;_IG_incl123= &(_currn->_ATKey);
_IL_incl0=_IG_incl0;_IG_incl0= &(_currn->_ATInhEnv);
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc2->_prod])))((NODEPTR) _currn->_desc2);
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc3->_prod])))((NODEPTR) _currn->_desc3);

if (AND(NOT(EQ(_currn->_desc2->_AT_const123, 0)), NOT(EQ(_currn->_desc2->_AT_const123, _AVClass_body__const126)))) {
message(ERROR, "number of bounds does not match overtaken bounds", 0, (&( _currn->_AT_pos)));

} else {
}
;
/*SPC(3064)*/
_IG_incl141=_IL_incl141;
_IG_incl140=_IL_incl140;
_IG_incl128=_IL_incl128;
_IG_incl123=_IL_incl123;
_IG_incl0=_IL_incl0;

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS1CLASS_DECLARATIONS(_TPPCLASS_DECLARATIONS _currn)
#else
void _VS1CLASS_DECLARATIONS(_currn )
_TPPCLASS_DECLARATIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS1MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS2CLASS_DECLARATIONS(_TPPCLASS_DECLARATIONS _currn)
#else
void _VS2CLASS_DECLARATIONS(_currn )
_TPPCLASS_DECLARATIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS2MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS3CLASS_DECLARATIONS(_TPPCLASS_DECLARATIONS _currn)
#else
void _VS3CLASS_DECLARATIONS(_currn )
_TPPCLASS_DECLARATIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS3MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS4CLASS_DECLARATIONS(_TPPCLASS_DECLARATIONS _currn)
#else
void _VS4CLASS_DECLARATIONS(_currn )
_TPPCLASS_DECLARATIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS4MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS5CLASS_DECLARATIONS(_TPPCLASS_DECLARATIONS _currn)
#else
void _VS5CLASS_DECLARATIONS(_currn )
_TPPCLASS_DECLARATIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS5MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS6CLASS_DECLARATIONS(_TPPCLASS_DECLARATIONS _currn)
#else
void _VS6CLASS_DECLARATIONS(_currn )
_TPPCLASS_DECLARATIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
_AVclass_declarationclass_decls_tree_post=NULL;
/*SPC(7436)*/
(*(_CALL_VS_((NODEPTR )) (VS6MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);
_AVClass_declarations_tree=NewTreeNodeRhs_1_0((&( _currn->_AT_pos)), MkCLASS_DECLARATIONS_2, _AVclass_declarationclass_decls_tree_post, NoKey);
/*SPC(7437)*/

_VisitExit();
}

#if defined(__STDC__) || defined(__cplusplus)
void _VS7CLASS_DECLARATIONS(_TPPCLASS_DECLARATIONS _currn)
#else
void _VS7CLASS_DECLARATIONS(_currn )
_TPPCLASS_DECLARATIONS _currn;

#endif
{

_VisitVarDecl()
_VisitEntry();
(*(_CALL_VS_((NODEPTR )) (VS7MAP[_currn->_desc1->_prod])))((NODEPTR) _currn->_desc1);

_VisitExit();
}

