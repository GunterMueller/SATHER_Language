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
    

/* definition of tree node structure */

#ifndef NODE_H
#define NODE_H
#include "err.h"
#include "nodeptr.h" /* defines NODEPTR */
#include "HEAD.h"

#ifdef MONITOR
#define _NODECOMMON int _prod; POSITION _coord;
#else
#define _NODECOMMON int _prod;
#endif
struct NODEPTR_struct {
        _NODECOMMON
#ifdef __cplusplus
        void* operator new(size_t size);
#endif
};

typedef struct _TSLST_Class_declarations* _TSPLST_Class_declarations;
typedef struct _TSLST_Parameter_types* _TSPLST_Parameter_types;
typedef struct _TSLST_Bounds* _TSPLST_Bounds;
typedef struct _TSLST_Named_expressions* _TSPLST_Named_expressions;
typedef struct _TSLST_Modifications* _TSPLST_Modifications;
typedef struct _TSLST_Feature_declarations* _TSPLST_Feature_declarations;
typedef struct _TSLST_Parameters* _TSPLST_Parameters;
typedef struct _TSLST_Label_list* _TSPLST_Label_list;
typedef struct _TSLST_Class_declarations_2* _TSPLST_Class_declarations_2;
typedef struct _TSLST_Parameter_types_2* _TSPLST_Parameter_types_2;
typedef struct _TSLST_Bounds_2* _TSPLST_Bounds_2;
typedef struct _TSLST_Named_expressions_2* _TSPLST_Named_expressions_2;
typedef struct _TSLST_Feature_declarations_2* _TSPLST_Feature_declarations_2;
typedef struct _TSLST_Parameters_2* _TSPLST_Parameters_2;
typedef struct _TSLST_Label_list_2* _TSPLST_Label_list_2;
typedef struct _TSLST_class_declarations* _TSPLST_class_declarations;
typedef struct _TSLST_parameter_types* _TSPLST_parameter_types;
typedef struct _TSLST_bounds* _TSPLST_bounds;
typedef struct _TSLST_named_expressions* _TSPLST_named_expressions;
typedef struct _TSLST_modifications* _TSPLST_modifications;
typedef struct _TSLST_feature_declarations* _TSPLST_feature_declarations;
typedef struct _TSLST_parameters* _TSPLST_parameters;
typedef struct _TSLST_label_list* _TSPLST_label_list;
typedef struct _TStypes* _TSPtypes;
typedef struct _TSwhen_types_block* _TSPwhen_types_block;
typedef struct _TSwhen_types_blocks* _TSPwhen_types_blocks;
typedef struct _TStype_case_statement* _TSPtype_case_statement;
typedef struct _TSInheritance_2* _TSPInheritance_2;
typedef struct _TSClass_argument_2* _TSPClass_argument_2;
typedef struct _TSType_specifiers_2* _TSPType_specifiers_2;
typedef struct _TSClass_parameter_2* _TSPClass_parameter_2;
typedef struct _TSTypes* _TSPTypes;
typedef struct _TSWhen_types_block* _TSPWhen_types_block;
typedef struct _TSCase_label* _TSPCase_label;
typedef struct _TSLabel_range* _TSPLabel_range;
typedef struct _TSLabel_list* _TSPLabel_list;
typedef struct _TSWhen_label_stmt* _TSPWhen_label_stmt;
typedef struct _TSWhen_label_stmts* _TSPWhen_label_stmts;
typedef struct _TSException_types* _TSPException_types;
typedef struct _TSWhen_exception_stmt* _TSPWhen_exception_stmt;
typedef struct _TSWhen_exception_stmts* _TSPWhen_exception_stmts;
typedef struct _TSExceptions* _TSPExceptions;
typedef struct _TSAssertion_statement* _TSPAssertion_statement;
typedef struct _TSRaise_statement* _TSPRaise_statement;
typedef struct _TSReturn_statement* _TSPReturn_statement;
typedef struct _TSResume_statement* _TSPResume_statement;
typedef struct _TSBreak_statement* _TSPBreak_statement;
typedef struct _TSLoop* _TSPLoop;
typedef struct _TSCase_statement* _TSPCase_statement;
typedef struct _TSConditional_statement* _TSPConditional_statement;
typedef struct _TSBegin_block* _TSPBegin_block;
typedef struct _TSAssignment* _TSPAssignment;
typedef struct _TSLocal_stream_declaration* _TSPLocal_stream_declaration;
typedef struct _TSStatements* _TSPStatements;
typedef struct _TSBuiltin_instruction* _TSPBuiltin_instruction;
typedef struct _TSLinker_symbol* _TSPLinker_symbol;
typedef struct _TSForeign_language* _TSPForeign_language;
typedef struct _TSBlock* _TSPBlock;
typedef struct _TSStringconstant* _TSPStringconstant;
typedef struct _TSStringconstants* _TSPStringconstants;
typedef struct _TSNamed_expression* _TSPNamed_expression;
typedef struct _TSAgg_id_def* _TSPAgg_id_def;
typedef struct _TSNamed_expressions* _TSPNamed_expressions;
typedef struct _TSAggregate* _TSPAggregate;
typedef struct _TSQual_feature_id_use* _TSPQual_feature_id_use;
typedef struct _TSObj_id_use* _TSPObj_id_use;
typedef struct _TSDirect_stream_call* _TSPDirect_stream_call;
typedef struct _TSCoercion* _TSPCoercion;
typedef struct _TSValue* _TSPValue;
typedef struct _TSBound_method* _TSPBound_method;
typedef struct _TSQualification* _TSPQualification;
typedef struct _TSStd_method_call* _TSPStd_method_call;
typedef struct _TSName* _TSPName;
typedef struct _TSDesignator* _TSPDesignator;
typedef struct _TSArgument* _TSPArgument;
typedef struct _TSArguments* _TSPArguments;
typedef struct _TSParameter_type* _TSPParameter_type;
typedef struct _TSParameter_types* _TSPParameter_types;
typedef struct _TSParameter_type_2* _TSPParameter_type_2;
typedef struct _TSParameter_types_2* _TSPParameter_types_2;
typedef struct _TSBounds* _TSPBounds;
typedef struct _TSClass_argument* _TSPClass_argument;
typedef struct _TSType_specifiers* _TSPType_specifiers;
typedef struct _TSClass_parameter* _TSPClass_parameter;
typedef struct _TSMethod_specification* _TSPMethod_specification;
typedef struct _TSFeature_specification* _TSPFeature_specification;
typedef struct _TSFeature_id_use* _TSPFeature_id_use;
typedef struct _TSIdent_mod* _TSPIdent_mod;
typedef struct _TSModification* _TSPModification;
typedef struct _TSstatements* _TSPstatements;
typedef struct _TSbuiltin_instruction* _TSPbuiltin_instruction;
typedef struct _TSbuiltin_instructions* _TSPbuiltin_instructions;
typedef struct _TSlinker_symbol* _TSPlinker_symbol;
typedef struct _TSforeign_language* _TSPforeign_language;
typedef struct _TSparameter_specification* _TSPparameter_specification;
typedef struct _TSmethod_body* _TSPmethod_body;
typedef struct _TSparameters* _TSPparameters;
typedef struct _TSmethod_ident_def* _TSPmethod_ident_def;
typedef struct _TSmethod_decl* _TSPmethod_decl;
typedef struct _TSreturn_statement* _TSPreturn_statement;
typedef struct _TSresume_statement* _TSPresume_statement;
typedef struct _TSbreak_statement* _TSPbreak_statement;
typedef struct _TSloop* _TSPloop;
typedef struct _TSLocal_declarations* _TSPLocal_declarations;
typedef struct _TSWhen_types_blocks* _TSPWhen_types_blocks;
typedef struct _TSType_case_statement* _TSPType_case_statement;
typedef struct _TSParameter_kind* _TSPParameter_kind;
typedef struct _TSParameter_specification* _TSPParameter_specification;
typedef struct _TSType_constructor* _TSPType_constructor;
typedef struct _TSBuiltin_instructions* _TSPBuiltin_instructions;
typedef struct _TSType_specifier* _TSPType_specifier;
typedef struct _TSParameters* _TSPParameters;
typedef struct _TSMethod_ident_def* _TSPMethod_ident_def;
typedef struct _TSFeature_declaration* _TSPFeature_declaration;
typedef struct _TSMethod_body* _TSPMethod_body;
typedef struct _TSAttribute_specification* _TSPAttribute_specification;
typedef struct _TSAttribute_declaration* _TSPAttribute_declaration;
typedef struct _TSAttribute_access_type* _TSPAttribute_access_type;
typedef struct _TSIdentifiers* _TSPIdentifiers;
typedef struct _TSMethod_decl* _TSPMethod_decl;
typedef struct _TSFeature* _TSPFeature;
typedef struct _TSClass_id_use* _TSPClass_id_use;
typedef struct _TSClass_specifier* _TSPClass_specifier;
typedef struct _TSFeature_declarations* _TSPFeature_declarations;
typedef struct _TSBuiltin_option* _TSPBuiltin_option;
typedef struct _TSClass_body* _TSPClass_body;
typedef struct _TSClass_attribute* _TSPClass_attribute;
typedef struct _TSIdent_def* _TSPIdent_def;
typedef struct _TSBound_identifier* _TSPBound_identifier;
typedef struct _TSClass_parameters* _TSPClass_parameters;
typedef struct _TSClass_bounds* _TSPClass_bounds;
typedef struct _TSClass_id_def* _TSPClass_id_def;
typedef struct _TSClass_declaration* _TSPClass_declaration;
typedef struct _TSClass_head* _TSPClass_head;
typedef struct _TSModifications* _TSPModifications;
typedef struct _TSClass_arguments* _TSPClass_arguments;
typedef struct _TSInheritances* _TSPInheritances;
typedef struct _TSInheritance* _TSPInheritance;
typedef struct _TSExpression* _TSPExpression;
typedef struct _TSBound* _TSPBound;
typedef struct _TSlocal_stream_declaration* _TSPlocal_stream_declaration;
typedef struct _TSlocal_declarations* _TSPlocal_declarations;
typedef struct _TSfeature_declaration* _TSPfeature_declaration;
typedef struct _TSqual_feature_id_use* _TSPqual_feature_id_use;
typedef struct _TSobj_id_use* _TSPobj_id_use;
typedef struct _TSqualification* _TSPqualification;
typedef struct _TSdirect_stream_call* _TSPdirect_stream_call;
typedef struct _TSstd_method_call* _TSPstd_method_call;
typedef struct _TScoercion* _TSPcoercion;
typedef struct _TSargument* _TSPargument;
typedef struct _TSbound_method* _TSPbound_method;
typedef struct _TSarguments* _TSParguments;
typedef struct _TSstringconstant* _TSPstringconstant;
typedef struct _TSstringconstants* _TSPstringconstants;
typedef struct _TSconditional_statement* _TSPconditional_statement;
typedef struct _TSStringconstant_2* _TSPStringconstant_2;
typedef struct _TSStringconstants_2* _TSPStringconstants_2;
typedef struct _TSClass_arguments_2* _TSPClass_arguments_2;
typedef struct _TSClass_id_use_2* _TSPClass_id_use_2;
typedef struct _TSBound_2* _TSPBound_2;
typedef struct _TSBounds_2* _TSPBounds_2;
typedef struct _TSWhen_types_blocks_2* _TSPWhen_types_blocks_2;
typedef struct _TSResume_statement_2* _TSPResume_statement_2;
typedef struct _TSType_case_statement_2* _TSPType_case_statement_2;
typedef struct _TSObj_id_use_2* _TSPObj_id_use_2;
typedef struct _TSWhen_types_block_2* _TSPWhen_types_block_2;
typedef struct _TSReturn_statement_2* _TSPReturn_statement_2;
typedef struct _TSQual_feature_id_use_2* _TSPQual_feature_id_use_2;
typedef struct _TSParameter_kind_2* _TSPParameter_kind_2;
typedef struct _TSParameter_specification_2* _TSPParameter_specification_2;
typedef struct _TSLinker_symbol_2* _TSPLinker_symbol_2;
typedef struct _TSForeign_language_2* _TSPForeign_language_2;
typedef struct _TSInheritances_2* _TSPInheritances_2;
typedef struct _TSBreak_statement_2* _TSPBreak_statement_2;
typedef struct _TSLoop_2* _TSPLoop_2;
typedef struct _TSMethod_body_2* _TSPMethod_body_2;
typedef struct _TSParameters_2* _TSPParameters_2;
typedef struct _TSMethod_ident_def_2* _TSPMethod_ident_def_2;
typedef struct _TSMethod_decl_2* _TSPMethod_decl_2;
typedef struct _TSFeature_declarations_2* _TSPFeature_declarations_2;
typedef struct _TSDirect_stream_call_2* _TSPDirect_stream_call_2;
typedef struct _TSValue_2* _TSPValue_2;
typedef struct _TSRaise_statement_2* _TSPRaise_statement_2;
typedef struct _TSWhen_exception_stmt_2* _TSPWhen_exception_stmt_2;
typedef struct _TSWhen_exception_stmts_2* _TSPWhen_exception_stmts_2;
typedef struct _TSBegin_block_2* _TSPBegin_block_2;
typedef struct _TSExceptions_2* _TSPExceptions_2;
typedef struct _TSQualification_2* _TSPQualification_2;
typedef struct _TSStd_method_call_2* _TSPStd_method_call_2;
typedef struct _TSConditional_statement_2* _TSPConditional_statement_2;
typedef struct _TSCoercion_2* _TSPCoercion_2;
typedef struct _TSClass_parameters_2* _TSPClass_parameters_2;
typedef struct _TSClass_id_def_2* _TSPClass_id_def_2;
typedef struct _TSClass_body_2* _TSPClass_body_2;
typedef struct _TSClass_head_2* _TSPClass_head_2;
typedef struct _TSClass_attribute_2* _TSPClass_attribute_2;
typedef struct _TSCase_label_2* _TSPCase_label_2;
typedef struct _TSLabel_range_2* _TSPLabel_range_2;
typedef struct _TSLabel_list_2* _TSPLabel_list_2;
typedef struct _TSWhen_label_stmts_2* _TSPWhen_label_stmts_2;
typedef struct _TSWhen_label_stmt_2* _TSPWhen_label_stmt_2;
typedef struct _TSCase_statement_2* _TSPCase_statement_2;
typedef struct _TSBuiltin_instruction_2* _TSPBuiltin_instruction_2;
typedef struct _TSBuiltin_instructions_2* _TSPBuiltin_instructions_2;
typedef struct _TSMethod_specification_2* _TSPMethod_specification_2;
typedef struct _TSBound_method_2* _TSPBound_method_2;
typedef struct _TSLocal_stream_declaration_2* _TSPLocal_stream_declaration_2;
typedef struct _TSStatements_2* _TSPStatements_2;
typedef struct _TSLocal_declarations_2* _TSPLocal_declarations_2;
typedef struct _TSBlock_2* _TSPBlock_2;
typedef struct _TSBound_identifier_2* _TSPBound_identifier_2;
typedef struct _TSClass_bounds_2* _TSPClass_bounds_2;
typedef struct _TSFeature_declaration_2* _TSPFeature_declaration_2;
typedef struct _TSAttribute_specification_2* _TSPAttribute_specification_2;
typedef struct _TSIdent_def_2* _TSPIdent_def_2;
typedef struct _TSAttribute_declaration_2* _TSPAttribute_declaration_2;
typedef struct _TSAttribute_access_type_2* _TSPAttribute_access_type_2;
typedef struct _TSType_specifier_2* _TSPType_specifier_2;
typedef struct _TSIdentifiers_2* _TSPIdentifiers_2;
typedef struct _TSFeature_2* _TSPFeature_2;
typedef struct _TSAssignment_2* _TSPAssignment_2;
typedef struct _TSAssertion_statement_2* _TSPAssertion_statement_2;
typedef struct _TSDesignator_2* _TSPDesignator_2;
typedef struct _TSArgument_2* _TSPArgument_2;
typedef struct _TSArguments_2* _TSPArguments_2;
typedef struct _TSExpression_2* _TSPExpression_2;
typedef struct _TSName_2* _TSPName_2;
typedef struct _TSNamed_expression_2* _TSPNamed_expression_2;
typedef struct _TSAgg_id_def_2* _TSPAgg_id_def_2;
typedef struct _TSNamed_expressions_2* _TSPNamed_expressions_2;
typedef struct _TSAggregate_2* _TSPAggregate_2;
typedef struct _TSType_constructor_2* _TSPType_constructor_2;
typedef struct _TSClass_specifier_2* _TSPClass_specifier_2;
typedef struct _TSClass_declaration_2* _TSPClass_declaration_2;
typedef struct _TSBuiltin_option_2* _TSPBuiltin_option_2;
typedef struct _TSparameter_kind* _TSPparameter_kind;
typedef struct _TSparameter_type* _TSPparameter_type;
typedef struct _TSparameter_types* _TSPparameter_types;
typedef struct _TSfeature_id_use* _TSPfeature_id_use;
typedef struct _TSident_mod* _TSPident_mod;
typedef struct _TSfeature_specification* _TSPfeature_specification;
typedef struct _TSmodification* _TSPmodification;
typedef struct _TSmodifications* _TSPmodifications;
typedef struct _TSinheritance* _TSPinheritance;
typedef struct _TSfeature_declarations* _TSPfeature_declarations;
typedef struct _TSinheritances* _TSPinheritances;
typedef struct _TSbuiltin_option* _TSPbuiltin_option;
typedef struct _TSclass_argument* _TSPclass_argument;
typedef struct _TSclass_arguments* _TSPclass_arguments;
typedef struct _TSmethod_specification* _TSPmethod_specification;
typedef struct _TSclass_specifier* _TSPclass_specifier;
typedef struct _TStype_specifiers* _TSPtype_specifiers;
typedef struct _TSclass_parameter* _TSPclass_parameter;
typedef struct _TSbound_identifier* _TSPbound_identifier;
typedef struct _TSclass_id_use* _TSPclass_id_use;
typedef struct _TSclass_param_id_def* _TSPclass_param_id_def;
typedef struct _TSclass_parameters* _TSPclass_parameters;
typedef struct _TSclass_bounds* _TSPclass_bounds;
typedef struct _TSclass_id_def* _TSPclass_id_def;
typedef struct _TSclass_body* _TSPclass_body;
typedef struct _TSclass_head* _TSPclass_head;
typedef struct _TSclass_attribute* _TSPclass_attribute;
typedef struct _TSclass_declaration* _TSPclass_declaration;
typedef struct _TSClass_declarations_2* _TSPClass_declarations_2;
typedef struct _TSClass_declarations* _TSPClass_declarations;
typedef struct _TSclass_declarations* _TSPclass_declarations;
typedef struct _TSprogram* _TSPprogram;
typedef struct _TSdesignator* _TSPdesignator;
typedef struct _TSvalue* _TSPvalue;
typedef struct _TScase_label* _TSPcase_label;
typedef struct _TSlabel_range* _TSPlabel_range;
typedef struct _TSlabel_list* _TSPlabel_list;
typedef struct _TSwhen_label_stmt* _TSPwhen_label_stmt;
typedef struct _TSwhen_label_stmts* _TSPwhen_label_stmts;
typedef struct _TScase_statement* _TSPcase_statement;
typedef struct _TSbound* _TSPbound;
typedef struct _TSbounds* _TSPbounds;
typedef struct _TSassertion_statement* _TSPassertion_statement;
typedef struct _TSraise_statement* _TSPraise_statement;
typedef struct _TSexception_types* _TSPexception_types;
typedef struct _TSwhen_exception_stmt* _TSPwhen_exception_stmt;
typedef struct _TSwhen_exception_stmts* _TSPwhen_exception_stmts;
typedef struct _TSexceptions* _TSPexceptions;
typedef struct _TSblock* _TSPblock;
typedef struct _TSbegin_block* _TSPbegin_block;
typedef struct _TSident_def* _TSPident_def;
typedef struct _TStype_specifier* _TSPtype_specifier;
typedef struct _TStype_constructor* _TSPtype_constructor;
typedef struct _TSidentifiers* _TSPidentifiers;
typedef struct _TSattribute_specification* _TSPattribute_specification;
typedef struct _TSattribute_declaration* _TSPattribute_declaration;
typedef struct _TSfeature* _TSPfeature;
typedef struct _TSattribute_access_type* _TSPattribute_access_type;
typedef struct _TSassignment* _TSPassignment;
typedef struct _TSexpression* _TSPexpression;
typedef struct _TSname* _TSPname;
typedef struct _TSnamed_expression* _TSPnamed_expression;
typedef struct _TSagg_id_def* _TSPagg_id_def;
typedef struct _TSnamed_expressions* _TSPnamed_expressions;
typedef struct _TSaggregate* _TSPaggregate;
typedef struct _TPLST_Class_declarationCLASS_DECLARATIONS* _TPPLST_Class_declarationCLASS_DECLARATIONS;
typedef struct _TPLST_0CLASS_DECLARATIONS* _TPPLST_0CLASS_DECLARATIONS;
typedef struct _TPLST_Parameter_typePARAMETER_TYPES* _TPPLST_Parameter_typePARAMETER_TYPES;
typedef struct _TPLST_0PARAMETER_TYPES* _TPPLST_0PARAMETER_TYPES;
typedef struct _TPLST_BoundBOUNDS* _TPPLST_BoundBOUNDS;
typedef struct _TPLST_0BOUNDS* _TPPLST_0BOUNDS;
typedef struct _TPLST_Named_expressionNAMED_EXPRESSIONS* _TPPLST_Named_expressionNAMED_EXPRESSIONS;
typedef struct _TPLST_0NAMED_EXPRESSIONS* _TPPLST_0NAMED_EXPRESSIONS;
typedef struct _TPLST_ModificationMODIFICATIONS* _TPPLST_ModificationMODIFICATIONS;
typedef struct _TPLST_0MODIFICATIONS* _TPPLST_0MODIFICATIONS;
typedef struct _TPLST_Feature_declarationFEATURE_DECLS* _TPPLST_Feature_declarationFEATURE_DECLS;
typedef struct _TPLST_0FEATURE_DECLS* _TPPLST_0FEATURE_DECLS;
typedef struct _TPLST_Parameter_specificationPARAMETERS* _TPPLST_Parameter_specificationPARAMETERS;
typedef struct _TPLST_0PARAMETERS* _TPPLST_0PARAMETERS;
typedef struct _TPLST_Label_rangeLABEL_LIST* _TPPLST_Label_rangeLABEL_LIST;
typedef struct _TPLST_0LABEL_LIST* _TPPLST_0LABEL_LIST;
typedef struct _TPLST_Class_declaration_2CLASS_DECLARATIONS_2* _TPPLST_Class_declaration_2CLASS_DECLARATIONS_2;
typedef struct _TPLST_0CLASS_DECLARATIONS_2* _TPPLST_0CLASS_DECLARATIONS_2;
typedef struct _TPLST_Parameter_type_2PARAMETER_TYPES_2* _TPPLST_Parameter_type_2PARAMETER_TYPES_2;
typedef struct _TPLST_0PARAMETER_TYPES_2* _TPPLST_0PARAMETER_TYPES_2;
typedef struct _TPLST_Bound_2BOUNDS_2* _TPPLST_Bound_2BOUNDS_2;
typedef struct _TPLST_0BOUNDS_2* _TPPLST_0BOUNDS_2;
typedef struct _TPLST_Named_expression_2NAMED_EXPRESSIONS_2* _TPPLST_Named_expression_2NAMED_EXPRESSIONS_2;
typedef struct _TPLST_0NAMED_EXPRESSIONS_2* _TPPLST_0NAMED_EXPRESSIONS_2;
typedef struct _TPLST_Feature_declaration_2FEATURE_DECLS_2* _TPPLST_Feature_declaration_2FEATURE_DECLS_2;
typedef struct _TPLST_0FEATURE_DECLS_2* _TPPLST_0FEATURE_DECLS_2;
typedef struct _TPLST_Parameter_specification_2PARAMETERS_2* _TPPLST_Parameter_specification_2PARAMETERS_2;
typedef struct _TPLST_0PARAMETERS_2* _TPPLST_0PARAMETERS_2;
typedef struct _TPLST_Label_range_2LABEL_LIST_2* _TPPLST_Label_range_2LABEL_LIST_2;
typedef struct _TPLST_0LABEL_LIST_2* _TPPLST_0LABEL_LIST_2;
typedef struct _TPLST_class_declarationCLASS_DECLARATIONS_O* _TPPLST_class_declarationCLASS_DECLARATIONS_O;
typedef struct _TPLST_0CLASS_DECLARATIONS_O* _TPPLST_0CLASS_DECLARATIONS_O;
typedef struct _TPLST_parameter_typePARAMETER_TYPES_O* _TPPLST_parameter_typePARAMETER_TYPES_O;
typedef struct _TPLST_0PARAMETER_TYPES_O* _TPPLST_0PARAMETER_TYPES_O;
typedef struct _TPLST_boundBOUNDS_O* _TPPLST_boundBOUNDS_O;
typedef struct _TPLST_0BOUNDS_O* _TPPLST_0BOUNDS_O;
typedef struct _TPLST_named_expressionNAMED_EXPRESSIONS_O* _TPPLST_named_expressionNAMED_EXPRESSIONS_O;
typedef struct _TPLST_0NAMED_EXPRESSIONS_O* _TPPLST_0NAMED_EXPRESSIONS_O;
typedef struct _TPLST_modificationMODIFICATIONS_O* _TPPLST_modificationMODIFICATIONS_O;
typedef struct _TPLST_0MODIFICATIONS_O* _TPPLST_0MODIFICATIONS_O;
typedef struct _TPLST_feature_declarationFEATURE_DECLS_O* _TPPLST_feature_declarationFEATURE_DECLS_O;
typedef struct _TPLST_0FEATURE_DECLS_O* _TPPLST_0FEATURE_DECLS_O;
typedef struct _TPLST_parameter_specificationPARAMETERS_O* _TPPLST_parameter_specificationPARAMETERS_O;
typedef struct _TPLST_0PARAMETERS_O* _TPPLST_0PARAMETERS_O;
typedef struct _TPLST_label_rangeLABEL_LIST_O* _TPPLST_label_rangeLABEL_LIST_O;
typedef struct _TPLST_0LABEL_LIST_O* _TPPLST_0LABEL_LIST_O;
typedef struct _TPrule_1* _TPPrule_1;
typedef struct _TPrule_2* _TPPrule_2;
typedef struct _TPASSERTION_STATEMENT_O* _TPPASSERTION_STATEMENT_O;
typedef struct _TPRAISE_STATEMENT_O* _TPPRAISE_STATEMENT_O;
typedef struct _TPRETURN_STATEMENT_O* _TPPRETURN_STATEMENT_O;
typedef struct _TPRESUME_STATEMENT_O* _TPPRESUME_STATEMENT_O;
typedef struct _TPBREAK_STATEMENT_O* _TPPBREAK_STATEMENT_O;
typedef struct _TPLOOP_O* _TPPLOOP_O;
typedef struct _TPLOOP_EXP_O* _TPPLOOP_EXP_O;
typedef struct _TPTYPES_LST_O* _TPPTYPES_LST_O;
typedef struct _TPTYPES_EMPTY_O* _TPPTYPES_EMPTY_O;
typedef struct _TPWHEN_TYPES_BLOCK_O* _TPPWHEN_TYPES_BLOCK_O;
typedef struct _TPWHEN_TYPES_BLOCKS_EMPTY_O* _TPPWHEN_TYPES_BLOCKS_EMPTY_O;
typedef struct _TPWHEN_TYPES_BLOCKS_O* _TPPWHEN_TYPES_BLOCKS_O;
typedef struct _TPTYPE_CASE_STATEMENT_ATT_O* _TPPTYPE_CASE_STATEMENT_ATT_O;
typedef struct _TPTYPE_CASE_STATEMENT_O* _TPPTYPE_CASE_STATEMENT_O;
typedef struct _TPCASE_LABEL_DES_O* _TPPCASE_LABEL_DES_O;
typedef struct _TPCASE_LABEL_VALUE_O* _TPPCASE_LABEL_VALUE_O;
typedef struct _TPLABEL_RANGE_O* _TPPLABEL_RANGE_O;
typedef struct _TPLABEL_RANGE_SINGLE_O* _TPPLABEL_RANGE_SINGLE_O;
typedef struct _TPLABEL_LIST_O* _TPPLABEL_LIST_O;
typedef struct _TPWHEN_LABEL_STMT_O* _TPPWHEN_LABEL_STMT_O;
typedef struct _TPWHEN_LABEL_STMTS_EMPTY_O* _TPPWHEN_LABEL_STMTS_EMPTY_O;
typedef struct _TPWHEN_LABEL_STMTS_O* _TPPWHEN_LABEL_STMTS_O;
typedef struct _TPCASE_STATEMENT_O* _TPPCASE_STATEMENT_O;
typedef struct _TPCOND_STATEMENT_ELSE_O* _TPPCOND_STATEMENT_ELSE_O;
typedef struct _TPCOND_STATEMENT_O* _TPPCOND_STATEMENT_O;
typedef struct _TPEXCEPTION_TYPES_LST_O* _TPPEXCEPTION_TYPES_LST_O;
typedef struct _TPEXCEPTION_TYPES_EMPTY_O* _TPPEXCEPTION_TYPES_EMPTY_O;
typedef struct _TPWHEN_EXCEPTION_STMT_O* _TPPWHEN_EXCEPTION_STMT_O;
typedef struct _TPWHEN_EXCEPTION_STMTS_EMPTY_O* _TPPWHEN_EXCEPTION_STMTS_EMPTY_O;
typedef struct _TPWHEN_EXCEPTION_STMTS_O* _TPPWHEN_EXCEPTION_STMTS_O;
typedef struct _TPEXCEPTIONS_O* _TPPEXCEPTIONS_O;
typedef struct _TPEXCEPTIONS_EMPTY_O* _TPPEXCEPTIONS_EMPTY_O;
typedef struct _TPBEGIN_BLOCK_O* _TPPBEGIN_BLOCK_O;
typedef struct _TPASSIGNMENT_O* _TPPASSIGNMENT_O;
typedef struct _TPSTATEMENTS_ASSERT_O* _TPPSTATEMENTS_ASSERT_O;
typedef struct _TPSTATEMENTS_RAISE_O* _TPPSTATEMENTS_RAISE_O;
typedef struct _TPSTATEMENTS_RETURN_O* _TPPSTATEMENTS_RETURN_O;
typedef struct _TPSTATEMENTS_RESUME_O* _TPPSTATEMENTS_RESUME_O;
typedef struct _TPSTATEMENTS_EXP_O* _TPPSTATEMENTS_EXP_O;
typedef struct _TPSTATEMENTS_BREAK_O* _TPPSTATEMENTS_BREAK_O;
typedef struct _TPSTATEMENTS_LOOP_O* _TPPSTATEMENTS_LOOP_O;
typedef struct _TPSTATEMENTS_TYPE_CASE_O* _TPPSTATEMENTS_TYPE_CASE_O;
typedef struct _TPSTATEMENTS_CASE_O* _TPPSTATEMENTS_CASE_O;
typedef struct _TPSTATEMENTS_COND_O* _TPPSTATEMENTS_COND_O;
typedef struct _TPSTATEMENTS_BEGIN_O* _TPPSTATEMENTS_BEGIN_O;
typedef struct _TPSTATEMENTS_ASSIGN_O* _TPPSTATEMENTS_ASSIGN_O;
typedef struct _TPSTATEMENTS_EMPTY_O* _TPPSTATEMENTS_EMPTY_O;
typedef struct _TPLOCAL_STREAM_DECL_O* _TPPLOCAL_STREAM_DECL_O;
typedef struct _TPLOCAL_DECLS_STREAM_O* _TPPLOCAL_DECLS_STREAM_O;
typedef struct _TPLOCAL_DECLS_ATT_O* _TPPLOCAL_DECLS_ATT_O;
typedef struct _TPLOCAL_DECLS_EMPTY_O* _TPPLOCAL_DECLS_EMPTY_O;
typedef struct _TPBLOCK_O* _TPPBLOCK_O;
typedef struct _TPBUILTIN_INST_CLRTYPE_O* _TPPBUILTIN_INST_CLRTYPE_O;
typedef struct _TPBUILTIN_INST_TYPE_O* _TPPBUILTIN_INST_TYPE_O;
typedef struct _TPBUILTIN_INST_STR_O* _TPPBUILTIN_INST_STR_O;
typedef struct _TPBUILTIN_INSTS_EMPTY_O* _TPPBUILTIN_INSTS_EMPTY_O;
typedef struct _TPBUILTIN_INSTS_O* _TPPBUILTIN_INSTS_O;
typedef struct _TPMETHOD_BODY_STATIC_BUILTIN_O* _TPPMETHOD_BODY_STATIC_BUILTIN_O;
typedef struct _TPMETHOD_BODY_BUILTIN_O* _TPPMETHOD_BODY_BUILTIN_O;
typedef struct _TPLINKER_SYMBOL_O* _TPPLINKER_SYMBOL_O;
typedef struct _TPLINKER_SYMBOL_EMPTY_O* _TPPLINKER_SYMBOL_EMPTY_O;
typedef struct _TPFOREIGN_LANGUAGE_O* _TPPFOREIGN_LANGUAGE_O;
typedef struct _TPMETHOD_BODY_FOREIGN_O* _TPPMETHOD_BODY_FOREIGN_O;
typedef struct _TPMETHOD_BODY_AB_O* _TPPMETHOD_BODY_AB_O;
typedef struct _TPMETHOD_BODY_O* _TPPMETHOD_BODY_O;
typedef struct _TPPARAMETER_SPEC_O* _TPPPARAMETER_SPEC_O;
typedef struct _TPPARAMETERS_O* _TPPPARAMETERS_O;
typedef struct _TPMETHOD_IDENT_DEF_O* _TPPMETHOD_IDENT_DEF_O;
typedef struct _TPMETHOD_DECL_O* _TPPMETHOD_DECL_O;
typedef struct _TPIDENTIFIERS_O* _TPPIDENTIFIERS_O;
typedef struct _TPIDENTIFIERS_LST_O* _TPPIDENTIFIERS_LST_O;
typedef struct _TPATTR_SPEC_O* _TPPATTR_SPEC_O;
typedef struct _TPATTR_DECL_CONST_TYPE_CONST_O* _TPPATTR_DECL_CONST_TYPE_CONST_O;
typedef struct _TPATTR_DECL_TYPE_CONST_O* _TPPATTR_DECL_TYPE_CONST_O;
typedef struct _TPATTR_DECL_CONST_EXP_O* _TPPATTR_DECL_CONST_EXP_O;
typedef struct _TPATTR_DECL_EXP_O* _TPPATTR_DECL_EXP_O;
typedef struct _TPATTR_DECL_O* _TPPATTR_DECL_O;
typedef struct _TPATTR_ACCESS_SH_RO_O* _TPPATTR_ACCESS_SH_RO_O;
typedef struct _TPATTR_ACCESS_RO_O* _TPPATTR_ACCESS_RO_O;
typedef struct _TPATTR_ACCESS_SH_O* _TPPATTR_ACCESS_SH_O;
typedef struct _TPFEATURE_STREAM_O* _TPPFEATURE_STREAM_O;
typedef struct _TPFEATURE_METH_O* _TPPFEATURE_METH_O;
typedef struct _TPFEATURE_ATT_O* _TPPFEATURE_ATT_O;
typedef struct _TPFEATURE_ATT_ACC_O* _TPPFEATURE_ATT_ACC_O;
typedef struct _TPFEATURE_DECL_PRIV_O* _TPPFEATURE_DECL_PRIV_O;
typedef struct _TPFEATURE_DECL_O* _TPPFEATURE_DECL_O;
typedef struct _TPFEATURE_DECLS_O* _TPPFEATURE_DECLS_O;
typedef struct _TPFEATURE_ID_USE_O* _TPPFEATURE_ID_USE_O;
typedef struct _TPFEATURE_SPEC_STREAM_O* _TPPFEATURE_SPEC_STREAM_O;
typedef struct _TPFEATURE_SPEC_O* _TPPFEATURE_SPEC_O;
typedef struct _TPIDENT_MOD_O* _TPPIDENT_MOD_O;
typedef struct _TPMODIFICATION_NAME_O* _TPPMODIFICATION_NAME_O;
typedef struct _TPMODIFICATION_OUT_O* _TPPMODIFICATION_OUT_O;
typedef struct _TPMODIFICATION_ONLY_O* _TPPMODIFICATION_ONLY_O;
typedef struct _TPMODIFICATIONS_O* _TPPMODIFICATIONS_O;
typedef struct _TPINHERITANCE_INC_ONLY_O* _TPPINHERITANCE_INC_ONLY_O;
typedef struct _TPINHERITANCE_INCLUDE_O* _TPPINHERITANCE_INCLUDE_O;
typedef struct _TPINHERITANCE_LIKE_O* _TPPINHERITANCE_LIKE_O;
typedef struct _TPINHERITANCE_PRIV_O* _TPPINHERITANCE_PRIV_O;
typedef struct _TPINHERITANCES_LST_O* _TPPINHERITANCES_LST_O;
typedef struct _TPINHERITANCES_EMPTY_O* _TPPINHERITANCES_EMPTY_O;
typedef struct _TPDIRECT_STREAM_CALL_O* _TPPDIRECT_STREAM_CALL_O;
typedef struct _TPCOERCION_O* _TPPCOERCION_O;
typedef struct _TPSTR_CONSTANT_O* _TPPSTR_CONSTANT_O;
typedef struct _TPSTR_CONSTANTS_O* _TPPSTR_CONSTANTS_O;
typedef struct _TPSTR_CONSTANTS_LST_O* _TPPSTR_CONSTANTS_LST_O;
typedef struct _TPVALUE_VOID_O* _TPPVALUE_VOID_O;
typedef struct _TPVALUE_SED_O* _TPPVALUE_SED_O;
typedef struct _TPVALUE_OCT_O* _TPPVALUE_OCT_O;
typedef struct _TPVALUE_STR_O* _TPPVALUE_STR_O;
typedef struct _TPVALUE_CHAR_O* _TPPVALUE_CHAR_O;
typedef struct _TPVALUE_BOOL_O* _TPPVALUE_BOOL_O;
typedef struct _TPVALUE_FLOAT_O* _TPPVALUE_FLOAT_O;
typedef struct _TPVALUE_INT_O* _TPPVALUE_INT_O;
typedef struct _TPBOUND_METHOD_O* _TPPBOUND_METHOD_O;
typedef struct _TPNAMED_EXPRESSION_O* _TPPNAMED_EXPRESSION_O;
typedef struct _TPNAMED_EXPRESSIONS_O* _TPPNAMED_EXPRESSIONS_O;
typedef struct _TPAGG_ID_DEF_O* _TPPAGG_ID_DEF_O;
typedef struct _TPAGGREGATE_NAMED_O* _TPPAGGREGATE_NAMED_O;
typedef struct _TPAGGREGATE_O* _TPPAGGREGATE_O;
typedef struct _TPTYPE_CONSTRUCTOR_SAME_AGG_O* _TPPTYPE_CONSTRUCTOR_SAME_AGG_O;
typedef struct _TPTYPE_CONSTRUCTOR_SAME_O* _TPPTYPE_CONSTRUCTOR_SAME_O;
typedef struct _TPTYPE_CONSTRUCTOR_DES_O* _TPPTYPE_CONSTRUCTOR_DES_O;
typedef struct _TPTYPE_CONSTRUCTOR_AGG_O* _TPPTYPE_CONSTRUCTOR_AGG_O;
typedef struct _TPTYPE_CONSTRUCTOR_CLASS_O* _TPPTYPE_CONSTRUCTOR_CLASS_O;
typedef struct _TPTYPE_CONSTRUCTOR_CL_AGG_O* _TPPTYPE_CONSTRUCTOR_CL_AGG_O;
typedef struct _TPQUAL_FEATURE_ID_USE_O* _TPPQUAL_FEATURE_ID_USE_O;
typedef struct _TPQUALIFICATION_TYPE_O* _TPPQUALIFICATION_TYPE_O;
typedef struct _TPQUALIFICATION_EXP_O* _TPPQUALIFICATION_EXP_O;
typedef struct _TPSTD_METHOD_CALL_O* _TPPSTD_METHOD_CALL_O;
typedef struct _TPOBJ_ID_USE_O* _TPPOBJ_ID_USE_O;
typedef struct _TPNAME_NOT_O* _TPPNAME_NOT_O;
typedef struct _TPNAME_POW_O* _TPPNAME_POW_O;
typedef struct _TPNAME_MOD_O* _TPPNAME_MOD_O;
typedef struct _TPNAME_DIV_O* _TPPNAME_DIV_O;
typedef struct _TPNAME_QUOTIENT_O* _TPPNAME_QUOTIENT_O;
typedef struct _TPNAME_STAR_O* _TPPNAME_STAR_O;
typedef struct _TPNAME_MINUS_O* _TPPNAME_MINUS_O;
typedef struct _TPNAME_PLUS_O* _TPPNAME_PLUS_O;
typedef struct _TPNAME_GT_EQ_O* _TPPNAME_GT_EQ_O;
typedef struct _TPNAME_GT_O* _TPPNAME_GT_O;
typedef struct _TPNAME_LT_EQ_O* _TPPNAME_LT_EQ_O;
typedef struct _TPNAME_LT_O* _TPPNAME_LT_O;
typedef struct _TPNAME_NOT_EQ_O* _TPPNAME_NOT_EQ_O;
typedef struct _TPNAME_EQ_O* _TPPNAME_EQ_O;
typedef struct _TPNAME_QUESTION_O* _TPPNAME_QUESTION_O;
typedef struct _TPNAME_GRAVE_O* _TPPNAME_GRAVE_O;
typedef struct _TPNAME_TILDE_O* _TPPNAME_TILDE_O;
typedef struct _TPNAME_STROKE_O* _TPPNAME_STROKE_O;
typedef struct _TPNAME_BACKSLASH_O* _TPPNAME_BACKSLASH_O;
typedef struct _TPNAME_STR_IN_O* _TPPNAME_STR_IN_O;
typedef struct _TPNAME_STR_OUT_O* _TPPNAME_STR_OUT_O;
typedef struct _TPNAME_EMPTY_O* _TPPNAME_EMPTY_O;
typedef struct _TPNAME_OBJ_O* _TPPNAME_OBJ_O;
typedef struct _TPNAME_LEFT_SQ_BRACKET_O* _TPPNAME_LEFT_SQ_BRACKET_O;
typedef struct _TPEXPRESSION_EMPTY_O* _TPPEXPRESSION_EMPTY_O;
typedef struct _TPEXPRESSION_AND_O* _TPPEXPRESSION_AND_O;
typedef struct _TPEXPRESSION_OR_O* _TPPEXPRESSION_OR_O;
typedef struct _TPEXPRESSION_STREAM_O* _TPPEXPRESSION_STREAM_O;
typedef struct _TPEXPRESSION_METH_O* _TPPEXPRESSION_METH_O;
typedef struct _TPEXPRESSION_COERCION_O* _TPPEXPRESSION_COERCION_O;
typedef struct _TPEXPRESSION_VALUE_O* _TPPEXPRESSION_VALUE_O;
typedef struct _TPEXPRESSION_BOUND_O* _TPPEXPRESSION_BOUND_O;
typedef struct _TPEXPRESSION_CONS_O* _TPPEXPRESSION_CONS_O;
typedef struct _TPEXPRESSION_STAR_O* _TPPEXPRESSION_STAR_O;
typedef struct _TPDESIGNATOR_QUAL_O* _TPPDESIGNATOR_QUAL_O;
typedef struct _TPDESIGNATOR_METH_O* _TPPDESIGNATOR_METH_O;
typedef struct _TPDESIGNATOR_EXP_O* _TPPDESIGNATOR_EXP_O;
typedef struct _TPDESIGNATOR_NAME_O* _TPPDESIGNATOR_NAME_O;
typedef struct _TPARGUMENT_EMPTY_O* _TPPARGUMENT_EMPTY_O;
typedef struct _TPARGUMENT_INOUT_O* _TPPARGUMENT_INOUT_O;
typedef struct _TPARGUMENT_OUT_O* _TPPARGUMENT_OUT_O;
typedef struct _TPARGUMENT_EXP_O* _TPPARGUMENT_EXP_O;
typedef struct _TPARGUMENTS_LST_O* _TPPARGUMENTS_LST_O;
typedef struct _TPARGUMENTS_EMPTY_O* _TPPARGUMENTS_EMPTY_O;
typedef struct _TPBOUND_EXP_O* _TPPBOUND_EXP_O;
typedef struct _TPBOUNDS_O* _TPPBOUNDS_O;
typedef struct _TPCLASS_ID_USE_O* _TPPCLASS_ID_USE_O;
typedef struct _TPPARAMETER_KIND_INOUT_O* _TPPPARAMETER_KIND_INOUT_O;
typedef struct _TPPARAMETER_KIND_OUT_O* _TPPPARAMETER_KIND_OUT_O;
typedef struct _TPPARAMETER_KIND_ONCE_O* _TPPPARAMETER_KIND_ONCE_O;
typedef struct _TPPARAMETER_KIND_IN_O* _TPPPARAMETER_KIND_IN_O;
typedef struct _TPPARAMETER_TYPE_O* _TPPPARAMETER_TYPE_O;
typedef struct _TPPARAMETER_TYPES_O* _TPPPARAMETER_TYPES_O;
typedef struct _TPMETHOD_SPECIFICATION_O* _TPPMETHOD_SPECIFICATION_O;
typedef struct _TPCLASS_ARGUMENT_O* _TPPCLASS_ARGUMENT_O;
typedef struct _TPCLASS_ARGUMENTS_LST_O* _TPPCLASS_ARGUMENTS_LST_O;
typedef struct _TPCLASS_ARGUMENTS_EMPTY_O* _TPPCLASS_ARGUMENTS_EMPTY_O;
typedef struct _TPCLASS_SPECIFIER_O* _TPPCLASS_SPECIFIER_O;
typedef struct _TPTYPE_SPECIFIER_STREAM_O* _TPPTYPE_SPECIFIER_STREAM_O;
typedef struct _TPTYPE_SPECIFIER_SAME_O* _TPPTYPE_SPECIFIER_SAME_O;
typedef struct _TPTYPE_SPECIFIER_SAME_POLY_O* _TPPTYPE_SPECIFIER_SAME_POLY_O;
typedef struct _TPTYPE_SPECIFIER_PROC_O* _TPPTYPE_SPECIFIER_PROC_O;
typedef struct _TPTYPE_SPECIFIER_EMPTY_O* _TPPTYPE_SPECIFIER_EMPTY_O;
typedef struct _TPTYPE_SPECIFIER_DES_O* _TPPTYPE_SPECIFIER_DES_O;
typedef struct _TPTYPE_SPECIFIER_CL_O* _TPPTYPE_SPECIFIER_CL_O;
typedef struct _TPTYPE_SPECIFIER_CL_POLY_O* _TPPTYPE_SPECIFIER_CL_POLY_O;
typedef struct _TPTYPE_SPECIFIERS_EMPTY_O* _TPPTYPE_SPECIFIERS_EMPTY_O;
typedef struct _TPTYPE_SPECIFIERS_LST_O* _TPPTYPE_SPECIFIERS_LST_O;
typedef struct _TPCLASS_PARAM_ID_DEF_O* _TPPCLASS_PARAM_ID_DEF_O;
typedef struct _TPCLASS_PARAMETER_O* _TPPCLASS_PARAMETER_O;
typedef struct _TPIDENT_DEF_O* _TPPIDENT_DEF_O;
typedef struct _TPBOUND_IDENTIFIER_STAR_O* _TPPBOUND_IDENTIFIER_STAR_O;
typedef struct _TPBOUND_IDENTIFIER_O* _TPPBOUND_IDENTIFIER_O;
typedef struct _TPCLASS_PARAMETERS_EMPTY_O* _TPPCLASS_PARAMETERS_EMPTY_O;
typedef struct _TPCLASS_PARAMETERS_LST_O* _TPPCLASS_PARAMETERS_LST_O;
typedef struct _TPCLASS_BOUNDS_EMPTY_O* _TPPCLASS_BOUNDS_EMPTY_O;
typedef struct _TPCLASS_BOUNDS_LST_O* _TPPCLASS_BOUNDS_LST_O;
typedef struct _TPCLASS_ID_DEF_O* _TPPCLASS_ID_DEF_O;
typedef struct _TPBUILTIN_OPT_CL_O* _TPPBUILTIN_OPT_CL_O;
typedef struct _TPBUILTIN_OPT_ID_O* _TPPBUILTIN_OPT_ID_O;
typedef struct _TPBUILTIN_OPT_O* _TPPBUILTIN_OPT_O;
typedef struct _TPBUILTIN_OPT_EMPTY_O* _TPPBUILTIN_OPT_EMPTY_O;
typedef struct _TPCLASS_BODY_O* _TPPCLASS_BODY_O;
typedef struct _TPCLASS_HEAD_O* _TPPCLASS_HEAD_O;
typedef struct _TPCLASS_ATTRIBUTE_VA_O* _TPPCLASS_ATTRIBUTE_VA_O;
typedef struct _TPCLASS_ATTRIBUTE_EX_O* _TPPCLASS_ATTRIBUTE_EX_O;
typedef struct _TPCLASS_ATTRIBUTE_O* _TPPCLASS_ATTRIBUTE_O;
typedef struct _TPCLASS_ATTRIBUTE_ABVA_O* _TPPCLASS_ATTRIBUTE_ABVA_O;
typedef struct _TPCLASS_ATTRIBUTE_AB_O* _TPPCLASS_ATTRIBUTE_AB_O;
typedef struct _TPCLASS_DECLARATION_O* _TPPCLASS_DECLARATION_O;
typedef struct _TPCLASS_DECLARATIONS_O* _TPPCLASS_DECLARATIONS_O;
typedef struct _TPASSERTION_STATEMENT_2* _TPPASSERTION_STATEMENT_2;
typedef struct _TPRAISE_STATEMENT_2* _TPPRAISE_STATEMENT_2;
typedef struct _TPRETURN_STATEMENT_2* _TPPRETURN_STATEMENT_2;
typedef struct _TPRESUME_STATEMENT_2* _TPPRESUME_STATEMENT_2;
typedef struct _TPBREAK_STATEMENT_2* _TPPBREAK_STATEMENT_2;
typedef struct _TPLOOP_2* _TPPLOOP_2;
typedef struct _TPLOOP_EXP_2* _TPPLOOP_EXP_2;
typedef struct _TPWHEN_TYPES_BLOCK_ELSE_2* _TPPWHEN_TYPES_BLOCK_ELSE_2;
typedef struct _TPWHEN_TYPES_BLOCK_2* _TPPWHEN_TYPES_BLOCK_2;
typedef struct _TPWHEN_TYPES_BLOCKS_EMPTY_2* _TPPWHEN_TYPES_BLOCKS_EMPTY_2;
typedef struct _TPWHEN_TYPES_BLOCKS_2* _TPPWHEN_TYPES_BLOCKS_2;
typedef struct _TPTYPE_CASE_STATEMENT_ATT_2* _TPPTYPE_CASE_STATEMENT_ATT_2;
typedef struct _TPTYPE_CASE_STATEMENT_2* _TPPTYPE_CASE_STATEMENT_2;
typedef struct _TPCASE_LABEL_DES_2* _TPPCASE_LABEL_DES_2;
typedef struct _TPCASE_LABEL_VALUE_2* _TPPCASE_LABEL_VALUE_2;
typedef struct _TPLABEL_RANGE_2* _TPPLABEL_RANGE_2;
typedef struct _TPLABEL_RANGE_SINGLE_2* _TPPLABEL_RANGE_SINGLE_2;
typedef struct _TPLABEL_LIST_2* _TPPLABEL_LIST_2;
typedef struct _TPWHEN_LABEL_STMT_2* _TPPWHEN_LABEL_STMT_2;
typedef struct _TPWHEN_LABEL_STMTS_EMPTY_2* _TPPWHEN_LABEL_STMTS_EMPTY_2;
typedef struct _TPWHEN_LABEL_STMTS_2* _TPPWHEN_LABEL_STMTS_2;
typedef struct _TPCASE_STATEMENT_2* _TPPCASE_STATEMENT_2;
typedef struct _TPCOND_STATEMENT_ELSE_2* _TPPCOND_STATEMENT_ELSE_2;
typedef struct _TPCOND_STATEMENT_2* _TPPCOND_STATEMENT_2;
typedef struct _TPWHEN_EXCEPTION_STMT_ELSE_2* _TPPWHEN_EXCEPTION_STMT_ELSE_2;
typedef struct _TPWHEN_EXCEPTION_STMT_2* _TPPWHEN_EXCEPTION_STMT_2;
typedef struct _TPWHEN_EXCEPTION_STMTS_EMPTY_2* _TPPWHEN_EXCEPTION_STMTS_EMPTY_2;
typedef struct _TPWHEN_EXCEPTION_STMTS_2* _TPPWHEN_EXCEPTION_STMTS_2;
typedef struct _TPEXCEPTIONS_2* _TPPEXCEPTIONS_2;
typedef struct _TPEXCEPTIONS_EMPTY_2* _TPPEXCEPTIONS_EMPTY_2;
typedef struct _TPBEGIN_BLOCK_2* _TPPBEGIN_BLOCK_2;
typedef struct _TPASSIGNMENT_2* _TPPASSIGNMENT_2;
typedef struct _TPSTATEMENTS_ASSERT_2* _TPPSTATEMENTS_ASSERT_2;
typedef struct _TPSTATEMENTS_RAISE_2* _TPPSTATEMENTS_RAISE_2;
typedef struct _TPSTATEMENTS_RETURN_2* _TPPSTATEMENTS_RETURN_2;
typedef struct _TPSTATEMENTS_RESUME_2* _TPPSTATEMENTS_RESUME_2;
typedef struct _TPSTATEMENTS_EXP_2* _TPPSTATEMENTS_EXP_2;
typedef struct _TPSTATEMENTS_BREAK_2* _TPPSTATEMENTS_BREAK_2;
typedef struct _TPSTATEMENTS_LOOP_2* _TPPSTATEMENTS_LOOP_2;
typedef struct _TPSTATEMENTS_TYPE_CASE_2* _TPPSTATEMENTS_TYPE_CASE_2;
typedef struct _TPSTATEMENTS_CASE_2* _TPPSTATEMENTS_CASE_2;
typedef struct _TPSTATEMENTS_COND_2* _TPPSTATEMENTS_COND_2;
typedef struct _TPSTATEMENTS_BEGIN_2* _TPPSTATEMENTS_BEGIN_2;
typedef struct _TPSTATEMENTS_ASSIGN_2* _TPPSTATEMENTS_ASSIGN_2;
typedef struct _TPSTATEMENTS_EMPTY_2* _TPPSTATEMENTS_EMPTY_2;
typedef struct _TPLOCAL_STREAM_DECL_2* _TPPLOCAL_STREAM_DECL_2;
typedef struct _TPLOCAL_DECLS_STREAM_2* _TPPLOCAL_DECLS_STREAM_2;
typedef struct _TPLOCAL_DECLS_ATT_2* _TPPLOCAL_DECLS_ATT_2;
typedef struct _TPLOCAL_DECLS_EMPTY_2* _TPPLOCAL_DECLS_EMPTY_2;
typedef struct _TPBLOCK_2* _TPPBLOCK_2;
typedef struct _TPBUILTIN_INST_CLRTYPE_2* _TPPBUILTIN_INST_CLRTYPE_2;
typedef struct _TPBUILTIN_INST_TYPE_2* _TPPBUILTIN_INST_TYPE_2;
typedef struct _TPBUILTIN_INST_STR_2* _TPPBUILTIN_INST_STR_2;
typedef struct _TPBUILTIN_INSTS_EMPTY_2* _TPPBUILTIN_INSTS_EMPTY_2;
typedef struct _TPBUILTIN_INSTS_2* _TPPBUILTIN_INSTS_2;
typedef struct _TPMETHOD_BODY_STATIC_BUILTIN_2* _TPPMETHOD_BODY_STATIC_BUILTIN_2;
typedef struct _TPMETHOD_BODY_BUILTIN_2* _TPPMETHOD_BODY_BUILTIN_2;
typedef struct _TPLINKER_SYMBOL_2* _TPPLINKER_SYMBOL_2;
typedef struct _TPLINKER_SYMBOL_EMPTY_2* _TPPLINKER_SYMBOL_EMPTY_2;
typedef struct _TPFOREIGN_LANGUAGE_2* _TPPFOREIGN_LANGUAGE_2;
typedef struct _TPMETHOD_BODY_FOREIGN_2* _TPPMETHOD_BODY_FOREIGN_2;
typedef struct _TPMETHOD_BODY_AB_2* _TPPMETHOD_BODY_AB_2;
typedef struct _TPMETHOD_BODY_2* _TPPMETHOD_BODY_2;
typedef struct _TPPARAMETER_SPEC_2* _TPPPARAMETER_SPEC_2;
typedef struct _TPPARAMETERS_2* _TPPPARAMETERS_2;
typedef struct _TPMETHOD_IDENT_DEF_2* _TPPMETHOD_IDENT_DEF_2;
typedef struct _TPMETHOD_DECL_2* _TPPMETHOD_DECL_2;
typedef struct _TPIDENTIFIERS_2* _TPPIDENTIFIERS_2;
typedef struct _TPIDENTIFIERS_LST_2* _TPPIDENTIFIERS_LST_2;
typedef struct _TPATTR_SPEC_2* _TPPATTR_SPEC_2;
typedef struct _TPATTR_DECL_CONST_TYPE_CONST_2* _TPPATTR_DECL_CONST_TYPE_CONST_2;
typedef struct _TPATTR_DECL_TYPE_CONST_2* _TPPATTR_DECL_TYPE_CONST_2;
typedef struct _TPATTR_DECL_CONST_EXP_2* _TPPATTR_DECL_CONST_EXP_2;
typedef struct _TPATTR_DECL_EXP_2* _TPPATTR_DECL_EXP_2;
typedef struct _TPATTR_DECL_2* _TPPATTR_DECL_2;
typedef struct _TPATTR_ACCESS_SH_RO_2* _TPPATTR_ACCESS_SH_RO_2;
typedef struct _TPATTR_ACCESS_RO_2* _TPPATTR_ACCESS_RO_2;
typedef struct _TPATTR_ACCESS_SH_2* _TPPATTR_ACCESS_SH_2;
typedef struct _TPFEATURE_STREAM_2* _TPPFEATURE_STREAM_2;
typedef struct _TPFEATURE_METH_2* _TPPFEATURE_METH_2;
typedef struct _TPFEATURE_ATT_2* _TPPFEATURE_ATT_2;
typedef struct _TPFEATURE_ATT_ACC_2* _TPPFEATURE_ATT_ACC_2;
typedef struct _TPFEATURE_DECL_PRIV_2* _TPPFEATURE_DECL_PRIV_2;
typedef struct _TPFEATURE_DECL_2* _TPPFEATURE_DECL_2;
typedef struct _TPFEATURE_DECLS_2* _TPPFEATURE_DECLS_2;
typedef struct _TPINHERITANCE_LIKE_2* _TPPINHERITANCE_LIKE_2;
typedef struct _TPINHERITANCES_LST_2* _TPPINHERITANCES_LST_2;
typedef struct _TPINHERITANCES_EMPTY_2* _TPPINHERITANCES_EMPTY_2;
typedef struct _TPDIRECT_STREAM_CALL_2* _TPPDIRECT_STREAM_CALL_2;
typedef struct _TPCOERCION_2* _TPPCOERCION_2;
typedef struct _TPSTR_CONSTANT_2* _TPPSTR_CONSTANT_2;
typedef struct _TPSTR_CONSTANTS_2* _TPPSTR_CONSTANTS_2;
typedef struct _TPSTR_CONSTANTS_LST_2* _TPPSTR_CONSTANTS_LST_2;
typedef struct _TPVALUE_VOID_2* _TPPVALUE_VOID_2;
typedef struct _TPVALUE_SED_2* _TPPVALUE_SED_2;
typedef struct _TPVALUE_OCT_2* _TPPVALUE_OCT_2;
typedef struct _TPVALUE_STR_2* _TPPVALUE_STR_2;
typedef struct _TPVALUE_CHAR_2* _TPPVALUE_CHAR_2;
typedef struct _TPVALUE_BOOL_2* _TPPVALUE_BOOL_2;
typedef struct _TPVALUE_FLOAT_2* _TPPVALUE_FLOAT_2;
typedef struct _TPVALUE_INT_2* _TPPVALUE_INT_2;
typedef struct _TPBOUND_METHOD_2* _TPPBOUND_METHOD_2;
typedef struct _TPNAMED_EXPRESSION_2* _TPPNAMED_EXPRESSION_2;
typedef struct _TPNAMED_EXPRESSIONS_2* _TPPNAMED_EXPRESSIONS_2;
typedef struct _TPAGG_ID_DEF_2* _TPPAGG_ID_DEF_2;
typedef struct _TPAGGREGATE_NAMED_2* _TPPAGGREGATE_NAMED_2;
typedef struct _TPAGGREGATE_2* _TPPAGGREGATE_2;
typedef struct _TPTYPE_CONSTRUCTOR_SAME_AGG_2* _TPPTYPE_CONSTRUCTOR_SAME_AGG_2;
typedef struct _TPTYPE_CONSTRUCTOR_SAME_2* _TPPTYPE_CONSTRUCTOR_SAME_2;
typedef struct _TPTYPE_CONSTRUCTOR_DES_2* _TPPTYPE_CONSTRUCTOR_DES_2;
typedef struct _TPTYPE_CONSTRUCTOR_AGG_2* _TPPTYPE_CONSTRUCTOR_AGG_2;
typedef struct _TPTYPE_CONSTRUCTOR_CLASS_2* _TPPTYPE_CONSTRUCTOR_CLASS_2;
typedef struct _TPTYPE_CONSTRUCTOR_CL_AGG_2* _TPPTYPE_CONSTRUCTOR_CL_AGG_2;
typedef struct _TPQUAL_FEATURE_ID_USE_2* _TPPQUAL_FEATURE_ID_USE_2;
typedef struct _TPQUALIFICATION_TYPE_2* _TPPQUALIFICATION_TYPE_2;
typedef struct _TPQUALIFICATION_EXP_2* _TPPQUALIFICATION_EXP_2;
typedef struct _TPSTD_METHOD_CALL_2* _TPPSTD_METHOD_CALL_2;
typedef struct _TPOBJ_ID_USE_2* _TPPOBJ_ID_USE_2;
typedef struct _TPNAME_NOT_2* _TPPNAME_NOT_2;
typedef struct _TPNAME_POW_2* _TPPNAME_POW_2;
typedef struct _TPNAME_MOD_2* _TPPNAME_MOD_2;
typedef struct _TPNAME_DIV_2* _TPPNAME_DIV_2;
typedef struct _TPNAME_QUOTIENT_2* _TPPNAME_QUOTIENT_2;
typedef struct _TPNAME_STAR_2* _TPPNAME_STAR_2;
typedef struct _TPNAME_MINUS_2* _TPPNAME_MINUS_2;
typedef struct _TPNAME_PLUS_2* _TPPNAME_PLUS_2;
typedef struct _TPNAME_GT_EQ_2* _TPPNAME_GT_EQ_2;
typedef struct _TPNAME_GT_2* _TPPNAME_GT_2;
typedef struct _TPNAME_LT_EQ_2* _TPPNAME_LT_EQ_2;
typedef struct _TPNAME_LT_2* _TPPNAME_LT_2;
typedef struct _TPNAME_EQ_2* _TPPNAME_EQ_2;
typedef struct _TPNAME_QUESTION_2* _TPPNAME_QUESTION_2;
typedef struct _TPNAME_GRAVE_2* _TPPNAME_GRAVE_2;
typedef struct _TPNAME_TILDE_2* _TPPNAME_TILDE_2;
typedef struct _TPNAME_STROKE_2* _TPPNAME_STROKE_2;
typedef struct _TPNAME_BACKSLASH_2* _TPPNAME_BACKSLASH_2;
typedef struct _TPNAME_STR_IN_2* _TPPNAME_STR_IN_2;
typedef struct _TPNAME_STR_OUT_2* _TPPNAME_STR_OUT_2;
typedef struct _TPNAME_EMPTY_2* _TPPNAME_EMPTY_2;
typedef struct _TPNAME_OBJ_2* _TPPNAME_OBJ_2;
typedef struct _TPNAME_LEFT_SQ_BRACKET_2* _TPPNAME_LEFT_SQ_BRACKET_2;
typedef struct _TPEXPRESSION_AND_2* _TPPEXPRESSION_AND_2;
typedef struct _TPEXPRESSION_OR_2* _TPPEXPRESSION_OR_2;
typedef struct _TPEXPRESSION_STREAM_2* _TPPEXPRESSION_STREAM_2;
typedef struct _TPEXPRESSION_METH_2* _TPPEXPRESSION_METH_2;
typedef struct _TPEXPRESSION_COERCION_2* _TPPEXPRESSION_COERCION_2;
typedef struct _TPEXPRESSION_VALUE_2* _TPPEXPRESSION_VALUE_2;
typedef struct _TPEXPRESSION_BOUND_2* _TPPEXPRESSION_BOUND_2;
typedef struct _TPEXPRESSION_CONS_2* _TPPEXPRESSION_CONS_2;
typedef struct _TPEXPRESSION_STAR_2* _TPPEXPRESSION_STAR_2;
typedef struct _TPDESIGNATOR_QUAL_2* _TPPDESIGNATOR_QUAL_2;
typedef struct _TPDESIGNATOR_METH_2* _TPPDESIGNATOR_METH_2;
typedef struct _TPDESIGNATOR_EXP_2* _TPPDESIGNATOR_EXP_2;
typedef struct _TPDESIGNATOR_NAME_2* _TPPDESIGNATOR_NAME_2;
typedef struct _TPARGUMENT_EMPTY_2* _TPPARGUMENT_EMPTY_2;
typedef struct _TPARGUMENT_INOUT_2* _TPPARGUMENT_INOUT_2;
typedef struct _TPARGUMENT_OUT_2* _TPPARGUMENT_OUT_2;
typedef struct _TPARGUMENT_EXP_2* _TPPARGUMENT_EXP_2;
typedef struct _TPARGUMENTS_LST_2* _TPPARGUMENTS_LST_2;
typedef struct _TPARGUMENTS_EMPTY_2* _TPPARGUMENTS_EMPTY_2;
typedef struct _TPBOUND_EXP_2* _TPPBOUND_EXP_2;
typedef struct _TPBOUNDS_2* _TPPBOUNDS_2;
typedef struct _TPCLASS_ID_USE_2* _TPPCLASS_ID_USE_2;
typedef struct _TPPARAMETER_KIND_INOUT_2* _TPPPARAMETER_KIND_INOUT_2;
typedef struct _TPPARAMETER_KIND_OUT_2* _TPPPARAMETER_KIND_OUT_2;
typedef struct _TPPARAMETER_KIND_ONCE_2* _TPPPARAMETER_KIND_ONCE_2;
typedef struct _TPPARAMETER_KIND_IN_2* _TPPPARAMETER_KIND_IN_2;
typedef struct _TPPARAMETER_TYPE_2* _TPPPARAMETER_TYPE_2;
typedef struct _TPPARAMETER_TYPES_2* _TPPPARAMETER_TYPES_2;
typedef struct _TPMETHOD_SPECIFICATION_2* _TPPMETHOD_SPECIFICATION_2;
typedef struct _TPCLASS_ARGUMENT_2* _TPPCLASS_ARGUMENT_2;
typedef struct _TPCLASS_ARGUMENTS_LST_2* _TPPCLASS_ARGUMENTS_LST_2;
typedef struct _TPCLASS_ARGUMENTS_EMPTY_2* _TPPCLASS_ARGUMENTS_EMPTY_2;
typedef struct _TPCLASS_SPECIFIER_2* _TPPCLASS_SPECIFIER_2;
typedef struct _TPTYPE_SPECIFIER_STREAM_2* _TPPTYPE_SPECIFIER_STREAM_2;
typedef struct _TPTYPE_SPECIFIER_SAME_2* _TPPTYPE_SPECIFIER_SAME_2;
typedef struct _TPTYPE_SPECIFIER_SAME_POLY_2* _TPPTYPE_SPECIFIER_SAME_POLY_2;
typedef struct _TPTYPE_SPECIFIER_PROC_2* _TPPTYPE_SPECIFIER_PROC_2;
typedef struct _TPTYPE_SPECIFIER_EMPTY_2* _TPPTYPE_SPECIFIER_EMPTY_2;
typedef struct _TPTYPE_SPECIFIER_CL_2* _TPPTYPE_SPECIFIER_CL_2;
typedef struct _TPTYPE_SPECIFIER_CL_POLY_2* _TPPTYPE_SPECIFIER_CL_POLY_2;
typedef struct _TPTYPE_SPECIFIERS_EMPTY_2* _TPPTYPE_SPECIFIERS_EMPTY_2;
typedef struct _TPTYPE_SPECIFIERS_LST_2* _TPPTYPE_SPECIFIERS_LST_2;
typedef struct _TPCLASS_PARAMETER_2* _TPPCLASS_PARAMETER_2;
typedef struct _TPIDENT_DEF_2* _TPPIDENT_DEF_2;
typedef struct _TPBOUND_IDENTIFIER_2* _TPPBOUND_IDENTIFIER_2;
typedef struct _TPCLASS_PARAMETERS_EMPTY_2* _TPPCLASS_PARAMETERS_EMPTY_2;
typedef struct _TPCLASS_PARAMETERS_LST_2* _TPPCLASS_PARAMETERS_LST_2;
typedef struct _TPCLASS_BOUNDS_EMPTY_2* _TPPCLASS_BOUNDS_EMPTY_2;
typedef struct _TPCLASS_BOUNDS_LST_2* _TPPCLASS_BOUNDS_LST_2;
typedef struct _TPCLASS_ID_DEF_POLY_2* _TPPCLASS_ID_DEF_POLY_2;
typedef struct _TPCLASS_ID_DEF_2* _TPPCLASS_ID_DEF_2;
typedef struct _TPBUILTIN_OPT_CL_2* _TPPBUILTIN_OPT_CL_2;
typedef struct _TPBUILTIN_OPT_ID_2* _TPPBUILTIN_OPT_ID_2;
typedef struct _TPBUILTIN_OPT_2* _TPPBUILTIN_OPT_2;
typedef struct _TPBUILTIN_OPT_EMPTY_2* _TPPBUILTIN_OPT_EMPTY_2;
typedef struct _TPCLASS_BODY_2* _TPPCLASS_BODY_2;
typedef struct _TPCLASS_HEAD_2* _TPPCLASS_HEAD_2;
typedef struct _TPCLASS_ATTRIBUTE_VA_2* _TPPCLASS_ATTRIBUTE_VA_2;
typedef struct _TPCLASS_ATTRIBUTE_EX_2* _TPPCLASS_ATTRIBUTE_EX_2;
typedef struct _TPCLASS_ATTRIBUTE_2* _TPPCLASS_ATTRIBUTE_2;
typedef struct _TPCLASS_ATTRIBUTE_ABVA_2* _TPPCLASS_ATTRIBUTE_ABVA_2;
typedef struct _TPCLASS_ATTRIBUTE_AB_2* _TPPCLASS_ATTRIBUTE_AB_2;
typedef struct _TPCLASS_DECLARATION_2* _TPPCLASS_DECLARATION_2;
typedef struct _TPCLASS_DECLARATIONS_2* _TPPCLASS_DECLARATIONS_2;
typedef struct _TPASSERTION_STATEMENT* _TPPASSERTION_STATEMENT;
typedef struct _TPRAISE_STATEMENT* _TPPRAISE_STATEMENT;
typedef struct _TPRETURN_STATEMENT* _TPPRETURN_STATEMENT;
typedef struct _TPRESUME_STATEMENT* _TPPRESUME_STATEMENT;
typedef struct _TPBREAK_STATEMENT* _TPPBREAK_STATEMENT;
typedef struct _TPLOOP* _TPPLOOP;
typedef struct _TPLOOP_EXP* _TPPLOOP_EXP;
typedef struct _TPTYPES_LST* _TPPTYPES_LST;
typedef struct _TPTYPES_EMPTY* _TPPTYPES_EMPTY;
typedef struct _TPWHEN_TYPES_BLOCK* _TPPWHEN_TYPES_BLOCK;
typedef struct _TPWHEN_TYPES_BLOCKS_EMPTY* _TPPWHEN_TYPES_BLOCKS_EMPTY;
typedef struct _TPWHEN_TYPES_BLOCKS* _TPPWHEN_TYPES_BLOCKS;
typedef struct _TPTYPE_CASE_STATEMENT_ATT* _TPPTYPE_CASE_STATEMENT_ATT;
typedef struct _TPTYPE_CASE_STATEMENT* _TPPTYPE_CASE_STATEMENT;
typedef struct _TPCASE_LABEL_DES* _TPPCASE_LABEL_DES;
typedef struct _TPCASE_LABEL_VALUE* _TPPCASE_LABEL_VALUE;
typedef struct _TPLABEL_RANGE* _TPPLABEL_RANGE;
typedef struct _TPLABEL_RANGE_SINGLE* _TPPLABEL_RANGE_SINGLE;
typedef struct _TPLABEL_LIST* _TPPLABEL_LIST;
typedef struct _TPWHEN_LABEL_STMT* _TPPWHEN_LABEL_STMT;
typedef struct _TPWHEN_LABEL_STMTS_EMPTY* _TPPWHEN_LABEL_STMTS_EMPTY;
typedef struct _TPWHEN_LABEL_STMTS* _TPPWHEN_LABEL_STMTS;
typedef struct _TPCASE_STATEMENT* _TPPCASE_STATEMENT;
typedef struct _TPCOND_STATEMENT_ELSE* _TPPCOND_STATEMENT_ELSE;
typedef struct _TPCOND_STATEMENT* _TPPCOND_STATEMENT;
typedef struct _TPEXCEPTION_TYPES_LST* _TPPEXCEPTION_TYPES_LST;
typedef struct _TPEXCEPTION_TYPES_EMPTY* _TPPEXCEPTION_TYPES_EMPTY;
typedef struct _TPWHEN_EXCEPTION_STMT* _TPPWHEN_EXCEPTION_STMT;
typedef struct _TPWHEN_EXCEPTION_STMTS_EMPTY* _TPPWHEN_EXCEPTION_STMTS_EMPTY;
typedef struct _TPWHEN_EXCEPTION_STMTS* _TPPWHEN_EXCEPTION_STMTS;
typedef struct _TPEXCEPTIONS* _TPPEXCEPTIONS;
typedef struct _TPEXCEPTIONS_EMPTY* _TPPEXCEPTIONS_EMPTY;
typedef struct _TPBEGIN_BLOCK* _TPPBEGIN_BLOCK;
typedef struct _TPASSIGNMENT* _TPPASSIGNMENT;
typedef struct _TPSTATEMENTS_ASSERT* _TPPSTATEMENTS_ASSERT;
typedef struct _TPSTATEMENTS_RAISE* _TPPSTATEMENTS_RAISE;
typedef struct _TPSTATEMENTS_RETURN* _TPPSTATEMENTS_RETURN;
typedef struct _TPSTATEMENTS_RESUME* _TPPSTATEMENTS_RESUME;
typedef struct _TPSTATEMENTS_EXP* _TPPSTATEMENTS_EXP;
typedef struct _TPSTATEMENTS_BREAK* _TPPSTATEMENTS_BREAK;
typedef struct _TPSTATEMENTS_LOOP* _TPPSTATEMENTS_LOOP;
typedef struct _TPSTATEMENTS_TYPE_CASE* _TPPSTATEMENTS_TYPE_CASE;
typedef struct _TPSTATEMENTS_CASE* _TPPSTATEMENTS_CASE;
typedef struct _TPSTATEMENTS_COND* _TPPSTATEMENTS_COND;
typedef struct _TPSTATEMENTS_BEGIN* _TPPSTATEMENTS_BEGIN;
typedef struct _TPSTATEMENTS_ASSIGN* _TPPSTATEMENTS_ASSIGN;
typedef struct _TPSTATEMENTS_EMPTY* _TPPSTATEMENTS_EMPTY;
typedef struct _TPLOCAL_STREAM_DECL* _TPPLOCAL_STREAM_DECL;
typedef struct _TPLOCAL_DECLS_STREAM* _TPPLOCAL_DECLS_STREAM;
typedef struct _TPLOCAL_DECLS_ATT* _TPPLOCAL_DECLS_ATT;
typedef struct _TPLOCAL_DECLS_EMPTY* _TPPLOCAL_DECLS_EMPTY;
typedef struct _TPBLOCK* _TPPBLOCK;
typedef struct _TPBUILTIN_INST_CLRTYPE* _TPPBUILTIN_INST_CLRTYPE;
typedef struct _TPBUILTIN_INST_TYPE* _TPPBUILTIN_INST_TYPE;
typedef struct _TPBUILTIN_INST_STR* _TPPBUILTIN_INST_STR;
typedef struct _TPBUILTIN_INSTS_EMPTY* _TPPBUILTIN_INSTS_EMPTY;
typedef struct _TPBUILTIN_INSTS* _TPPBUILTIN_INSTS;
typedef struct _TPMETHOD_BODY_STATIC_BUILTIN* _TPPMETHOD_BODY_STATIC_BUILTIN;
typedef struct _TPMETHOD_BODY_BUILTIN* _TPPMETHOD_BODY_BUILTIN;
typedef struct _TPLINKER_SYMBOL* _TPPLINKER_SYMBOL;
typedef struct _TPLINKER_SYMBOL_EMPTY* _TPPLINKER_SYMBOL_EMPTY;
typedef struct _TPFOREIGN_LANGUAGE* _TPPFOREIGN_LANGUAGE;
typedef struct _TPMETHOD_BODY_FOREIGN* _TPPMETHOD_BODY_FOREIGN;
typedef struct _TPMETHOD_BODY_AB* _TPPMETHOD_BODY_AB;
typedef struct _TPMETHOD_BODY* _TPPMETHOD_BODY;
typedef struct _TPPARAMETER_SPEC* _TPPPARAMETER_SPEC;
typedef struct _TPPARAMETERS* _TPPPARAMETERS;
typedef struct _TPMETHOD_IDENT_DEF* _TPPMETHOD_IDENT_DEF;
typedef struct _TPMETHOD_DECL* _TPPMETHOD_DECL;
typedef struct _TPIDENTIFIERS* _TPPIDENTIFIERS;
typedef struct _TPIDENTIFIERS_LST* _TPPIDENTIFIERS_LST;
typedef struct _TPATTR_SPEC* _TPPATTR_SPEC;
typedef struct _TPATTR_DECL_CONST_TYPE_CONST* _TPPATTR_DECL_CONST_TYPE_CONST;
typedef struct _TPATTR_DECL_TYPE_CONST* _TPPATTR_DECL_TYPE_CONST;
typedef struct _TPATTR_DECL_CONST_EXP* _TPPATTR_DECL_CONST_EXP;
typedef struct _TPATTR_DECL_EXP* _TPPATTR_DECL_EXP;
typedef struct _TPATTR_DECL* _TPPATTR_DECL;
typedef struct _TPATTR_ACCESS_SH_RO* _TPPATTR_ACCESS_SH_RO;
typedef struct _TPATTR_ACCESS_RO* _TPPATTR_ACCESS_RO;
typedef struct _TPATTR_ACCESS_SH* _TPPATTR_ACCESS_SH;
typedef struct _TPFEATURE_STREAM* _TPPFEATURE_STREAM;
typedef struct _TPFEATURE_METH* _TPPFEATURE_METH;
typedef struct _TPFEATURE_ATT* _TPPFEATURE_ATT;
typedef struct _TPFEATURE_ATT_ACC* _TPPFEATURE_ATT_ACC;
typedef struct _TPFEATURE_DECL_PRIV* _TPPFEATURE_DECL_PRIV;
typedef struct _TPFEATURE_DECL* _TPPFEATURE_DECL;
typedef struct _TPFEATURE_DECLS* _TPPFEATURE_DECLS;
typedef struct _TPFEATURE_ID_USE* _TPPFEATURE_ID_USE;
typedef struct _TPFEATURE_SPEC_STREAM* _TPPFEATURE_SPEC_STREAM;
typedef struct _TPFEATURE_SPEC* _TPPFEATURE_SPEC;
typedef struct _TPIDENT_MOD* _TPPIDENT_MOD;
typedef struct _TPMODIFICATION_NAME* _TPPMODIFICATION_NAME;
typedef struct _TPMODIFICATION_OUT* _TPPMODIFICATION_OUT;
typedef struct _TPMODIFICATION_ONLY* _TPPMODIFICATION_ONLY;
typedef struct _TPMODIFICATIONS* _TPPMODIFICATIONS;
typedef struct _TPINHERITANCE_INC_ONLY* _TPPINHERITANCE_INC_ONLY;
typedef struct _TPINHERITANCE_INCLUDE* _TPPINHERITANCE_INCLUDE;
typedef struct _TPINHERITANCE_LIKE* _TPPINHERITANCE_LIKE;
typedef struct _TPINHERITANCE_PRIV* _TPPINHERITANCE_PRIV;
typedef struct _TPINHERITANCES_LST* _TPPINHERITANCES_LST;
typedef struct _TPINHERITANCES_EMPTY* _TPPINHERITANCES_EMPTY;
typedef struct _TPDIRECT_STREAM_CALL* _TPPDIRECT_STREAM_CALL;
typedef struct _TPCOERCION* _TPPCOERCION;
typedef struct _TPSTR_CONSTANT* _TPPSTR_CONSTANT;
typedef struct _TPSTR_CONSTANTS* _TPPSTR_CONSTANTS;
typedef struct _TPSTR_CONSTANTS_LST* _TPPSTR_CONSTANTS_LST;
typedef struct _TPVALUE_VOID* _TPPVALUE_VOID;
typedef struct _TPVALUE_SED* _TPPVALUE_SED;
typedef struct _TPVALUE_OCT* _TPPVALUE_OCT;
typedef struct _TPVALUE_STR* _TPPVALUE_STR;
typedef struct _TPVALUE_CHAR* _TPPVALUE_CHAR;
typedef struct _TPVALUE_BOOL* _TPPVALUE_BOOL;
typedef struct _TPVALUE_FLOAT* _TPPVALUE_FLOAT;
typedef struct _TPVALUE_INT* _TPPVALUE_INT;
typedef struct _TPBOUND_METHOD* _TPPBOUND_METHOD;
typedef struct _TPNAMED_EXPRESSION* _TPPNAMED_EXPRESSION;
typedef struct _TPNAMED_EXPRESSIONS* _TPPNAMED_EXPRESSIONS;
typedef struct _TPAGG_ID_DEF* _TPPAGG_ID_DEF;
typedef struct _TPAGGREGATE_NAMED* _TPPAGGREGATE_NAMED;
typedef struct _TPAGGREGATE* _TPPAGGREGATE;
typedef struct _TPTYPE_CONSTRUCTOR_SAME_AGG* _TPPTYPE_CONSTRUCTOR_SAME_AGG;
typedef struct _TPTYPE_CONSTRUCTOR_SAME* _TPPTYPE_CONSTRUCTOR_SAME;
typedef struct _TPTYPE_CONSTRUCTOR_DES* _TPPTYPE_CONSTRUCTOR_DES;
typedef struct _TPTYPE_CONSTRUCTOR_AGG* _TPPTYPE_CONSTRUCTOR_AGG;
typedef struct _TPTYPE_CONSTRUCTOR_CLASS* _TPPTYPE_CONSTRUCTOR_CLASS;
typedef struct _TPTYPE_CONSTRUCTOR_CL_AGG* _TPPTYPE_CONSTRUCTOR_CL_AGG;
typedef struct _TPQUAL_FEATURE_ID_USE* _TPPQUAL_FEATURE_ID_USE;
typedef struct _TPQUALIFICATION_TYPE* _TPPQUALIFICATION_TYPE;
typedef struct _TPQUALIFICATION_EXP* _TPPQUALIFICATION_EXP;
typedef struct _TPSTD_METHOD_CALL* _TPPSTD_METHOD_CALL;
typedef struct _TPOBJ_ID_USE* _TPPOBJ_ID_USE;
typedef struct _TPNAME_NOT* _TPPNAME_NOT;
typedef struct _TPNAME_POW* _TPPNAME_POW;
typedef struct _TPNAME_MOD* _TPPNAME_MOD;
typedef struct _TPNAME_DIV* _TPPNAME_DIV;
typedef struct _TPNAME_QUOTIENT* _TPPNAME_QUOTIENT;
typedef struct _TPNAME_STAR* _TPPNAME_STAR;
typedef struct _TPNAME_MINUS* _TPPNAME_MINUS;
typedef struct _TPNAME_PLUS* _TPPNAME_PLUS;
typedef struct _TPNAME_GT_EQ* _TPPNAME_GT_EQ;
typedef struct _TPNAME_GT* _TPPNAME_GT;
typedef struct _TPNAME_LT_EQ* _TPPNAME_LT_EQ;
typedef struct _TPNAME_LT* _TPPNAME_LT;
typedef struct _TPNAME_EQ* _TPPNAME_EQ;
typedef struct _TPNAME_QUESTION* _TPPNAME_QUESTION;
typedef struct _TPNAME_GRAVE* _TPPNAME_GRAVE;
typedef struct _TPNAME_TILDE* _TPPNAME_TILDE;
typedef struct _TPNAME_STROKE* _TPPNAME_STROKE;
typedef struct _TPNAME_BACKSLASH* _TPPNAME_BACKSLASH;
typedef struct _TPNAME_STR_IN* _TPPNAME_STR_IN;
typedef struct _TPNAME_STR_OUT* _TPPNAME_STR_OUT;
typedef struct _TPNAME_EMPTY* _TPPNAME_EMPTY;
typedef struct _TPNAME_OBJ* _TPPNAME_OBJ;
typedef struct _TPNAME_LEFT_SQ_BRACKET* _TPPNAME_LEFT_SQ_BRACKET;
typedef struct _TPEXPRESSION_AND* _TPPEXPRESSION_AND;
typedef struct _TPEXPRESSION_OR* _TPPEXPRESSION_OR;
typedef struct _TPEXPRESSION_STREAM* _TPPEXPRESSION_STREAM;
typedef struct _TPEXPRESSION_METH* _TPPEXPRESSION_METH;
typedef struct _TPEXPRESSION_COERCION* _TPPEXPRESSION_COERCION;
typedef struct _TPEXPRESSION_VALUE* _TPPEXPRESSION_VALUE;
typedef struct _TPEXPRESSION_BOUND* _TPPEXPRESSION_BOUND;
typedef struct _TPEXPRESSION_CONS* _TPPEXPRESSION_CONS;
typedef struct _TPEXPRESSION_STAR* _TPPEXPRESSION_STAR;
typedef struct _TPDESIGNATOR_QUAL* _TPPDESIGNATOR_QUAL;
typedef struct _TPDESIGNATOR_METH* _TPPDESIGNATOR_METH;
typedef struct _TPDESIGNATOR_EXP* _TPPDESIGNATOR_EXP;
typedef struct _TPDESIGNATOR_NAME* _TPPDESIGNATOR_NAME;
typedef struct _TPARGUMENT_EMPTY* _TPPARGUMENT_EMPTY;
typedef struct _TPARGUMENT_INOUT* _TPPARGUMENT_INOUT;
typedef struct _TPARGUMENT_OUT* _TPPARGUMENT_OUT;
typedef struct _TPARGUMENT_EXP* _TPPARGUMENT_EXP;
typedef struct _TPARGUMENTS_LST* _TPPARGUMENTS_LST;
typedef struct _TPARGUMENTS_EMPTY* _TPPARGUMENTS_EMPTY;
typedef struct _TPBOUND_EXP* _TPPBOUND_EXP;
typedef struct _TPBOUNDS* _TPPBOUNDS;
typedef struct _TPCLASS_ID_USE* _TPPCLASS_ID_USE;
typedef struct _TPPARAMETER_KIND_INOUT* _TPPPARAMETER_KIND_INOUT;
typedef struct _TPPARAMETER_KIND_OUT* _TPPPARAMETER_KIND_OUT;
typedef struct _TPPARAMETER_KIND_ONCE* _TPPPARAMETER_KIND_ONCE;
typedef struct _TPPARAMETER_KIND_IN* _TPPPARAMETER_KIND_IN;
typedef struct _TPPARAMETER_TYPE* _TPPPARAMETER_TYPE;
typedef struct _TPPARAMETER_TYPES* _TPPPARAMETER_TYPES;
typedef struct _TPMETHOD_SPECIFICATION* _TPPMETHOD_SPECIFICATION;
typedef struct _TPCLASS_ARGUMENT* _TPPCLASS_ARGUMENT;
typedef struct _TPCLASS_ARGUMENTS_LST* _TPPCLASS_ARGUMENTS_LST;
typedef struct _TPCLASS_ARGUMENTS_EMPTY* _TPPCLASS_ARGUMENTS_EMPTY;
typedef struct _TPCLASS_SPECIFIER* _TPPCLASS_SPECIFIER;
typedef struct _TPTYPE_SPECIFIER_STREAM* _TPPTYPE_SPECIFIER_STREAM;
typedef struct _TPTYPE_SPECIFIER_SAME* _TPPTYPE_SPECIFIER_SAME;
typedef struct _TPTYPE_SPECIFIER_SAME_POLY* _TPPTYPE_SPECIFIER_SAME_POLY;
typedef struct _TPTYPE_SPECIFIER_PROC* _TPPTYPE_SPECIFIER_PROC;
typedef struct _TPTYPE_SPECIFIER_EMPTY* _TPPTYPE_SPECIFIER_EMPTY;
typedef struct _TPTYPE_SPECIFIER_CL* _TPPTYPE_SPECIFIER_CL;
typedef struct _TPTYPE_SPECIFIER_CL_POLY* _TPPTYPE_SPECIFIER_CL_POLY;
typedef struct _TPTYPE_SPECIFIERS_EMPTY* _TPPTYPE_SPECIFIERS_EMPTY;
typedef struct _TPTYPE_SPECIFIERS_LST* _TPPTYPE_SPECIFIERS_LST;
typedef struct _TPCLASS_PARAMETER* _TPPCLASS_PARAMETER;
typedef struct _TPIDENT_DEF* _TPPIDENT_DEF;
typedef struct _TPBOUND_IDENTIFIER_STAR* _TPPBOUND_IDENTIFIER_STAR;
typedef struct _TPBOUND_IDENTIFIER* _TPPBOUND_IDENTIFIER;
typedef struct _TPCLASS_PARAMETERS_EMPTY* _TPPCLASS_PARAMETERS_EMPTY;
typedef struct _TPCLASS_PARAMETERS_LST* _TPPCLASS_PARAMETERS_LST;
typedef struct _TPCLASS_BOUNDS_EMPTY* _TPPCLASS_BOUNDS_EMPTY;
typedef struct _TPCLASS_BOUNDS_LST* _TPPCLASS_BOUNDS_LST;
typedef struct _TPCLASS_ID_DEF* _TPPCLASS_ID_DEF;
typedef struct _TPBUILTIN_OPT_CL* _TPPBUILTIN_OPT_CL;
typedef struct _TPBUILTIN_OPT_ID* _TPPBUILTIN_OPT_ID;
typedef struct _TPBUILTIN_OPT* _TPPBUILTIN_OPT;
typedef struct _TPBUILTIN_OPT_EMPTY* _TPPBUILTIN_OPT_EMPTY;
typedef struct _TPCLASS_BODY* _TPPCLASS_BODY;
typedef struct _TPCLASS_HEAD* _TPPCLASS_HEAD;
typedef struct _TPCLASS_ATTRIBUTE_VA* _TPPCLASS_ATTRIBUTE_VA;
typedef struct _TPCLASS_ATTRIBUTE_EX* _TPPCLASS_ATTRIBUTE_EX;
typedef struct _TPCLASS_ATTRIBUTE* _TPPCLASS_ATTRIBUTE;
typedef struct _TPCLASS_ATTRIBUTE_ABVA* _TPPCLASS_ATTRIBUTE_ABVA;
typedef struct _TPCLASS_ATTRIBUTE_AB* _TPPCLASS_ATTRIBUTE_AB;
typedef struct _TPCLASS_DECLARATION* _TPPCLASS_DECLARATION;
typedef struct _TPCLASS_DECLARATIONS* _TPPCLASS_DECLARATIONS;

struct _TSLST_Class_declarations
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_Parameter_types
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_Bounds
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_Named_expressions
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_Modifications
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_Feature_declarations
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_Parameters
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_Label_list
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_Class_declarations_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_Parameter_types_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_Bounds_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_Named_expressions_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATUnnamedIndex_pre;
int _ATIndex_pre;
};

struct _TSLST_Feature_declarations_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const0;
int _AT_const106;
int _AT_const107;
int _AT_const111;
PTGNode _ATshared_init_code_post;
PTGNode _ATfeature_decls_out_post;
};

struct _TSLST_Parameters_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_Label_list_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_class_declarations
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_parameter_types
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_bounds
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_named_expressions
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_modifications
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_feature_declarations
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_parameters
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLST_label_list
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TStypes
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSwhen_types_block
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSwhen_types_blocks
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TStype_case_statement
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSInheritance_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSClass_argument_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSType_specifiers_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSClass_parameter_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSTypes
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSWhen_types_block
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATBlockTree;
};

struct _TSCase_label
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLabel_range
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLabel_list
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSWhen_label_stmt
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSWhen_label_stmts
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSException_types
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSWhen_exception_stmt
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATBlockTree;
};

struct _TSWhen_exception_stmts
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATLeftTree;
};

struct _TSExceptions
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSAssertion_statement
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSRaise_statement
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSReturn_statement
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSResume_statement
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSBreak_statement
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSLoop
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSCase_statement
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSConditional_statement
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSBegin_block
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSAssignment
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSLocal_stream_declaration
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSStatements
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSBuiltin_instruction
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLinker_symbol
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSForeign_language
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSBlock
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSStringconstant
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSStringconstants
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSNamed_expression
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSAgg_id_def
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSNamed_expressions
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSAggregate
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSQual_feature_id_use
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSObj_id_use
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSDirect_stream_call
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSCoercion
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSValue
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSBound_method
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSQualification
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSStd_method_call
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSName
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSDesignator
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSArgument
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSArguments
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSParameter_type
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSParameter_types
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSParameter_type_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSParameter_types_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSBounds
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSClass_argument
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSType_specifiers
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSClass_parameter
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSMethod_specification
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSFeature_specification
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSFeature_id_use
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSIdent_mod
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSModification
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSstatements
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSbuiltin_instruction
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSbuiltin_instructions
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSlinker_symbol
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSforeign_language
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSparameter_specification
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSmethod_body
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSparameters
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSmethod_ident_def
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
int _ATSym;
};

struct _TSmethod_decl
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSreturn_statement
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSresume_statement
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSbreak_statement
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSloop
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLocal_declarations
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSWhen_types_blocks
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATLeftTree;
};

struct _TSType_case_statement
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSParameter_kind
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSParameter_specification
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSType_constructor
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsInTypedAggregate;
TreeNodePtr _ATtree;
};

struct _TSBuiltin_instructions
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSType_specifier
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
STPtr _ATType;
};

struct _TSParameters
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATInhEnv;
TreeNodePtr _ATtree;
int _ATIsParamDecl;
};

struct _TSMethod_ident_def
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
DefTableKey _ATKey;
};

struct _TSFeature_declaration
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSMethod_body
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSAttribute_specification
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
};

struct _TSAttribute_declaration
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
TreeNodePtr _ATtree;
};

struct _TSAttribute_access_type
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSIdentifiers
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSMethod_decl
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
IntSet _ATKindSet;
};

struct _TSFeature
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsAttributeDecl;
};

struct _TSClass_id_use
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsRow;
};

struct _TSClass_specifier
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
PTGNode _ATClassArgsPtg;
};

struct _TSFeature_declarations
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSBuiltin_option
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
InheritanceInfoList _ATInhers_post;
TreeNodePtr _ATtree;
};

struct _TSClass_body
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKey _AT_const125;
};

struct _TSClass_attribute
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
IntSet _ATKindSet;
};

struct _TSIdent_def
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKey _ATKey;
int _ATSym;
int _ATIsAttributeDecl;
};

struct _TSBound_identifier
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
int _ATIsAttributeDecl;
};

struct _TSClass_parameters
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSClass_bounds
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSClass_id_def
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
};

struct _TSClass_declaration
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATInhEnv;
IntSet _ATKindSet;
TreeNodePtr _ATBuiltinTree;
TreeNodePtr _ATBoundsTree;
DefTableKey _ATKey;
};

struct _TSClass_head
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _AT_const123;
};

struct _TSModifications
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSClass_arguments
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSInheritances
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSInheritance
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _AT_const120;
int _ATIsOnly;
int _ATIsPrivate;
int _ATIsSubType;
DefTableKey _ATKey;
DefTableKey _ATBoundsFrom;
int _ATNumBounds;
};

struct _TSExpression
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSBound
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSlocal_stream_declaration
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSlocal_declarations
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSfeature_declaration
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSqual_feature_id_use
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSobj_id_use
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSqualification
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSdirect_stream_call
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSstd_method_call
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsArrayAccess;
};

struct _TScoercion
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSargument
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATResolvesToExpression;
};

struct _TSbound_method
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSarguments
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_partial_call;
};

struct _TSstringconstant
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSstringconstants
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSconditional_statement
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSStringconstant_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSStringconstants_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATstr_val;
};

struct _TSClass_arguments_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSClass_id_use_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
};

struct _TSBound_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSBounds_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSWhen_types_blocks_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSResume_statement_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSType_case_statement_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
int _ATSym;
STPtr _ATType;
int _ATEndLabel;
PTGNode _ATtype_out;
};

struct _TSObj_id_use_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
};

struct _TSWhen_types_block_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
int _ATSym;
DefTableKey _ATKey;
};

struct _TSReturn_statement_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSQual_feature_id_use_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKey _ATKey;
};

struct _TSParameter_kind_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATNamePtg;
IntSet _ATKindSet;
};

struct _TSParameter_specification_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLinker_symbol_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSForeign_language_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSInheritances_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _AT_const110;
DefTableKeyList _ATMethCallsLoc_post;
DefTableKeyList _ATAttrAccLoc_post;
};

struct _TSBreak_statement_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLoop_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
int _ATIsLoop;
int _ATEndLabel;
};

struct _TSMethod_body_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSParameters_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
DefTableKeyList _ATParamList;
};

struct _TSMethod_ident_def_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKey _ATKey;
IntSet _ATSemKindSet;
int _ATSym;
};

struct _TSMethod_decl_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
int _ATself_sym;
DefTableKey _ATself_key;
DefTableKeyList _ATParamList;
int _ATCLRStreamName;
DefTableKey _ATKey;
IntSet _ATKindSet;
int _ATEndLabel;
DefTableKey _ATres_key;
int _ATres_sym;
int _ATIsInitMethod;
};

struct _TSFeature_declarations_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATattr_preinit_initcode;
PTGNode _ATattr_postinit_initcode;
PTGNode _ATattribute_init_locals;
PTGNode _ATarray_init;
};

struct _TSDirect_stream_call_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKey _ATCalled;
int _ATStreamValHome;
int _ATStackBefore;
STPtr _ATType;
};

struct _TSValue_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATout;
CTValuePtr _ATVal;
STPtr _ATType;
};

struct _TSRaise_statement_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSWhen_exception_stmt_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_exception;
Environment _ATSemEnv;
int _ATSym;
DefTableKey _ATKey;
};

struct _TSWhen_exception_stmts_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSBegin_block_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
int _ATLeaveLabel;
};

struct _TSExceptions_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
STPtr _ATType;
int _ATSym;
};

struct _TSQualification_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSStd_method_call_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsArg;
DefTableKey _ATKey;
int _ATStackBefore;
DefTableKey _ATCalled;
CTValuePtr _ATVal;
STPtr _ATType;
};

struct _TSConditional_statement_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
};

struct _TSCoercion_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
};

struct _TSClass_parameters_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSClass_id_def_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKey _ATKey;
int _ATSym;
PTGNode _ATout;
};

struct _TSClass_body_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_builtin_array;
int _ATis_builtin;
};

struct _TSClass_head_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _AT_const109;
DefTableKey _AT_const116;
int _ATis_array_class;
};

struct _TSClass_attribute_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _ATMethCallsLoc_post;
DefTableKeyList _ATAttrAccLoc_post;
DefTableKeyList _ATPubAttr_post;
IntSet _ATKindSet;
};

struct _TSCase_label_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLabel_range_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSLabel_list_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSWhen_label_stmts_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSWhen_label_stmt_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
int _ATBlockLabel;
};

struct _TSCase_statement_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
int _ATEndLabel;
};

struct _TSBuiltin_instruction_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSBuiltin_instructions_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSMethod_specification_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSBound_method_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATStackBefore;
STPtr _ATType;
DefTableKey _ATCalled;
};

struct _TSLocal_stream_declaration_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
};

struct _TSStatements_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const84;
int _AT_const85;
PTGNode _ATout;
};

struct _TSLocal_declarations_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _ATinit_code;
PTGNode _ATcil_locals;
};

struct _TSBlock_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATLabelNum_post;
PTGNode _ATResumeLabels_post;
Environment _ATSemEnv;
};

struct _TSBound_identifier_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
};

struct _TSClass_bounds_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSFeature_declaration_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _ATMethodCallsLocal;
DefTableKeyList _ATAttributeAccessLocal;
PTGNode _ATacc_out;
};

struct _TSAttribute_specification_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsTypeCase;
IntSet _ATKindSet;
int _ATIsConstructor;
STPtr _ATType;
};

struct _TSIdent_def_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
int _ATUniqueId;
PTGNode _ATout;
DefTableKey _ATKey;
IntSet _ATSemKindSet;
PTGNode _ATinit_out;
};

struct _TSAttribute_declaration_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
CTValuePtr _ATVal;
int _ATIsTypeCase;
int _ATIsShared;
IntSet _ATKindSet;
STPtr _ATType;
PTGNode _ATinit_code;
};

struct _TSAttribute_access_type_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
IntSet _ATKindSet;
PTGNode _ATout;
};

struct _TSType_specifier_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
PTGNode _ATNamePtg;
STPtr _ATType;
};

struct _TSIdentifiers_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSFeature_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATNamePtg;
int _ATValHome;
PTGNode _ATacc_out;
};

struct _TSAssignment_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSAssertion_statement_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSDesignator_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsQualified;
int _ATIsQualifiedPolymorph;
DefTableKey _ATKey;
};

struct _TSArgument_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATStackBefore;
STPtr _ATTypeEst;
};

struct _TSArguments_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
MethArgInfoList _ATArgList;
int _ATNumArgs;
};

struct _TSExpression_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
STPtr _ATTypeEst;
int _ATIsArg;
CTValuePtr _ATVal;
int _ATStackHeight;
STPtr _ATType;
};

struct _TSName_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
};

struct _TSNamed_expression_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSAgg_id_def_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKey _ATKey;
};

struct _TSNamed_expressions_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSAggregate_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_array_aggregate;
STPtr _ATTypeEst;
Environment _ATSemEnv;
int _ATAggregateDepth;
};

struct _TSType_constructor_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
DefTableKey _ATCalled;
int _ATStackBefore;
STPtr _ATType;
};

struct _TSClass_specifier_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsRow;
DefTableKey _ATKey;
int _ATIsConstructor;
};

struct _TSClass_declaration_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
int _ATIsMainClass;
int _ATHasParamlessInitMethod;
IntSet _ATSemKindSet;
int _ATis_polymorph;
DefTableKey _ATKey;
};

struct _TSBuiltin_option_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATout;
};

struct _TSparameter_kind
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSparameter_type
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSparameter_types
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSfeature_id_use
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSident_mod
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSfeature_specification
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSmodification
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSmodifications
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSinheritance
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSfeature_declarations
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSinheritances
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSbuiltin_option
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSclass_argument
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSclass_arguments
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSmethod_specification
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSclass_specifier
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_predef_array;
int _ATis_string_abbrev;
int _ATIsClassParam;
DefTableKey _ATKey;
};

struct _TStype_specifiers
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSclass_parameter
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSbound_identifier
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSclass_id_use
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
PTGNode _ATClassBoundsPtg;
DefTableKey _ATKey;
};

struct _TSclass_param_id_def
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
};

struct _TSclass_parameters
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATTypeGenEnv;
};

struct _TSclass_bounds
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSclass_id_def
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
};

struct _TSclass_body
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _ATClassParams_post;
Environment _ATTypeGenEnv;
TreeNodePtr _ATtree;
};

struct _TSclass_head
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _AT_const70;
};

struct _TSclass_attribute
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _ATClassParams_post;
DefTableKeyList _ATRefClasses_post;
TreeNodePtr _ATtree;
};

struct _TSclass_declaration
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATTypeGenEnv;
int _ATIsMainClass;
DefTableKey _ATKey;
};

struct _TSClass_declarations_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSClass_declarations
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSclass_declarations
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSprogram
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATInhEnv;
Environment _ATSemEnv;
STPtr _ATBoolTypeSem;
STPtr _ATType;
DefTableKey _ATMethodBodyKey;
DefTableKey _ATAttributeDeclKey;
STPtr _ATBoolPolyTypeSem;
Environment _ATTypeInhEnv;
Environment _ATTypeGenEnv;
DefTableKeyList _ATReachableClasses;
STPtr _ATSTPtrNull;
CTValuePtr _ATCTValueNull;
DefTableKey _ATDefTableKeyNull;
int _ATintNull;
STPtr _ATUnivType;
Environment _ATTypeSemEnv;
};

struct _TSdesignator
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSvalue
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TScase_label
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSlabel_range
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSlabel_list
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSwhen_label_stmt
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSwhen_label_stmts
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TScase_statement
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSbound
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSbounds
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATClassBoundsPtg;
};

struct _TSassertion_statement
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSraise_statement
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSexception_types
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSwhen_exception_stmt
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSwhen_exception_stmts
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSexceptions
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSblock
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSbegin_block
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSident_def
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TStype_specifier
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TStype_constructor
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATWithClassArgs;
};

struct _TSidentifiers
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSattribute_specification
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSattribute_declaration
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSfeature
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSattribute_access_type
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSassignment
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSexpression
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSname
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
};

struct _TSnamed_expression
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSagg_id_def
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
};

struct _TSnamed_expressions
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TSaggregate
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TPLST_Class_declarationCLASS_DECLARATIONS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPClass_declaration _desc1;
_TSPLST_Class_declarations _desc2;
};

struct _TPLST_0CLASS_DECLARATIONS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_Parameter_typePARAMETER_TYPES
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPParameter_type _desc1;
_TSPLST_Parameter_types _desc2;
};

struct _TPLST_0PARAMETER_TYPES
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_BoundBOUNDS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPBound _desc1;
_TSPLST_Bounds _desc2;
};

struct _TPLST_0BOUNDS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_Named_expressionNAMED_EXPRESSIONS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPNamed_expression _desc1;
_TSPLST_Named_expressions _desc2;
};

struct _TPLST_0NAMED_EXPRESSIONS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_ModificationMODIFICATIONS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPModification _desc1;
_TSPLST_Modifications _desc2;
};

struct _TPLST_0MODIFICATIONS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_Feature_declarationFEATURE_DECLS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPFeature_declaration _desc1;
_TSPLST_Feature_declarations _desc2;
};

struct _TPLST_0FEATURE_DECLS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_Parameter_specificationPARAMETERS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPParameter_specification _desc1;
_TSPLST_Parameters _desc2;
};

struct _TPLST_0PARAMETERS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_Label_rangeLABEL_LIST
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLabel_range _desc1;
_TSPLST_Label_list _desc2;
};

struct _TPLST_0LABEL_LIST
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_Class_declaration_2CLASS_DECLARATIONS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPClass_declaration_2 _desc1;
_TSPLST_Class_declarations_2 _desc2;
};

struct _TPLST_0CLASS_DECLARATIONS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_Parameter_type_2PARAMETER_TYPES_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPParameter_type_2 _desc1;
_TSPLST_Parameter_types_2 _desc2;
};

struct _TPLST_0PARAMETER_TYPES_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_Bound_2BOUNDS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPBound_2 _desc1;
_TSPLST_Bounds_2 _desc2;
};

struct _TPLST_0BOUNDS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_Named_expression_2NAMED_EXPRESSIONS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATUnnamedIndex_pre;
int _ATIndex_pre;
_TSPNamed_expression_2 _desc1;
_TSPLST_Named_expressions_2 _desc2;
};

struct _TPLST_0NAMED_EXPRESSIONS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATUnnamedIndex_pre;
int _ATIndex_pre;
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_Feature_declaration_2FEATURE_DECLS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const0;
int _AT_const106;
int _AT_const107;
int _AT_const111;
PTGNode _ATshared_init_code_post;
PTGNode _ATfeature_decls_out_post;
_TSPFeature_declaration_2 _desc1;
_TSPLST_Feature_declarations_2 _desc2;
};

struct _TPLST_0FEATURE_DECLS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const0;
int _AT_const106;
int _AT_const107;
int _AT_const111;
PTGNode _ATshared_init_code_post;
PTGNode _ATfeature_decls_out_post;
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_Parameter_specification_2PARAMETERS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPParameter_specification_2 _desc1;
_TSPLST_Parameters_2 _desc2;
};

struct _TPLST_0PARAMETERS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_Label_range_2LABEL_LIST_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLabel_range_2 _desc1;
_TSPLST_Label_list_2 _desc2;
};

struct _TPLST_0LABEL_LIST_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_class_declarationCLASS_DECLARATIONS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPclass_declaration _desc1;
_TSPLST_class_declarations _desc2;
};

struct _TPLST_0CLASS_DECLARATIONS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_parameter_typePARAMETER_TYPES_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPparameter_type _desc1;
_TSPLST_parameter_types _desc2;
};

struct _TPLST_0PARAMETER_TYPES_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_boundBOUNDS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPbound _desc1;
_TSPLST_bounds _desc2;
};

struct _TPLST_0BOUNDS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_named_expressionNAMED_EXPRESSIONS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPnamed_expression _desc1;
_TSPLST_named_expressions _desc2;
};

struct _TPLST_0NAMED_EXPRESSIONS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_modificationMODIFICATIONS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPmodification _desc1;
_TSPLST_modifications _desc2;
};

struct _TPLST_0MODIFICATIONS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_feature_declarationFEATURE_DECLS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPfeature_declaration _desc1;
_TSPLST_feature_declarations _desc2;
};

struct _TPLST_0FEATURE_DECLS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_parameter_specificationPARAMETERS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPparameter_specification _desc1;
_TSPLST_parameters _desc2;
};

struct _TPLST_0PARAMETERS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPLST_label_rangeLABEL_LIST_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPlabel_range _desc1;
_TSPLST_label_list _desc2;
};

struct _TPLST_0LABEL_LIST_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
NODEPTR _desc1;
NODEPTR _desc2;
};

struct _TPrule_1
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPrule_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATInhEnv;
Environment _ATSemEnv;
STPtr _ATBoolTypeSem;
STPtr _ATType;
DefTableKey _ATMethodBodyKey;
DefTableKey _ATAttributeDeclKey;
STPtr _ATBoolPolyTypeSem;
Environment _ATTypeInhEnv;
Environment _ATTypeGenEnv;
DefTableKeyList _ATReachableClasses;
STPtr _ATSTPtrNull;
CTValuePtr _ATCTValueNull;
DefTableKey _ATDefTableKeyNull;
int _ATintNull;
STPtr _ATUnivType;
Environment _ATTypeSemEnv;
_TSPclass_declarations _desc1;
_TSPClass_declarations _desc2;
_TSPClass_declarations_2 _desc3;
POSITION _AT_pos;
};

struct _TPASSERTION_STATEMENT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPexpression _desc1;
POSITION _AT_pos;
};

struct _TPRAISE_STATEMENT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPtype_specifier _desc1;
POSITION _AT_pos;
};

struct _TPRETURN_STATEMENT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPRESUME_STATEMENT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPBREAK_STATEMENT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPLOOP_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPblock _desc1;
POSITION _AT_pos;
};

struct _TPLOOP_EXP_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPexpression _desc1;
_TSPblock _desc2;
POSITION _AT_pos;
};

struct _TPTYPES_LST_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPtypes _desc1;
_TSPtype_specifier _desc2;
POSITION _AT_pos;
};

struct _TPTYPES_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPWHEN_TYPES_BLOCK_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPtypes _desc1;
_TSPblock _desc2;
POSITION _AT_pos;
};

struct _TPWHEN_TYPES_BLOCKS_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPWHEN_TYPES_BLOCKS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPwhen_types_blocks _desc1;
_TSPwhen_types_block _desc2;
POSITION _AT_pos;
};

struct _TPTYPE_CASE_STATEMENT_ATT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPattribute_declaration _desc1;
_TSPwhen_types_blocks _desc2;
POSITION _AT_pos;
};

struct _TPTYPE_CASE_STATEMENT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPname _desc1;
_TSPwhen_types_blocks _desc2;
POSITION _AT_pos;
};

struct _TPCASE_LABEL_DES_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPdesignator _desc1;
POSITION _AT_pos;
};

struct _TPCASE_LABEL_VALUE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPvalue _desc1;
POSITION _AT_pos;
};

struct _TPLABEL_RANGE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPcase_label _desc1;
_TSPcase_label _desc2;
POSITION _AT_pos;
};

struct _TPLABEL_RANGE_SINGLE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPcase_label _desc1;
POSITION _AT_pos;
};

struct _TPLABEL_LIST_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLST_label_list _desc1;
POSITION _AT_pos;
};

struct _TPWHEN_LABEL_STMT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPlabel_list _desc1;
_TSPblock _desc2;
POSITION _AT_pos;
};

struct _TPWHEN_LABEL_STMTS_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPWHEN_LABEL_STMTS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPwhen_label_stmts _desc1;
_TSPwhen_label_stmt _desc2;
POSITION _AT_pos;
};

struct _TPCASE_STATEMENT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPexpression _desc1;
_TSPwhen_label_stmts _desc2;
POSITION _AT_pos;
};

struct _TPCOND_STATEMENT_ELSE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPblock _desc1;
POSITION _AT_pos;
};

struct _TPCOND_STATEMENT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPexpression _desc1;
_TSPblock _desc2;
_TSPconditional_statement _desc3;
POSITION _AT_pos;
};

struct _TPEXCEPTION_TYPES_LST_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPexception_types _desc1;
_TSPtype_specifier _desc2;
POSITION _AT_pos;
};

struct _TPEXCEPTION_TYPES_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPWHEN_EXCEPTION_STMT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPexception_types _desc1;
_TSPblock _desc2;
POSITION _AT_pos;
};

struct _TPWHEN_EXCEPTION_STMTS_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPWHEN_EXCEPTION_STMTS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPwhen_exception_stmts _desc1;
_TSPwhen_exception_stmt _desc2;
POSITION _AT_pos;
};

struct _TPEXCEPTIONS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPident_def _desc1;
_TSPwhen_exception_stmts _desc2;
POSITION _AT_pos;
};

struct _TPEXCEPTIONS_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPBEGIN_BLOCK_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPblock _desc1;
_TSPexceptions _desc2;
POSITION _AT_pos;
};

struct _TPASSIGNMENT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPname _desc1;
_TSPexpression _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_ASSERT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPstatements _desc1;
_TSPassertion_statement _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_RAISE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPstatements _desc1;
_TSPraise_statement _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_RETURN_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPstatements _desc1;
_TSPreturn_statement _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_RESUME_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPstatements _desc1;
_TSPresume_statement _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_EXP_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPstatements _desc1;
_TSPexpression _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_BREAK_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPstatements _desc1;
_TSPbreak_statement _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_LOOP_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPstatements _desc1;
_TSPloop _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_TYPE_CASE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPstatements _desc1;
_TSPtype_case_statement _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_CASE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPstatements _desc1;
_TSPcase_statement _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_COND_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPstatements _desc1;
_TSPconditional_statement _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_BEGIN_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPstatements _desc1;
_TSPbegin_block _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_ASSIGN_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPstatements _desc1;
_TSPassignment _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPLOCAL_STREAM_DECL_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPident_def _desc1;
_TSPmethod_specification _desc2;
_TSPbound_method _desc3;
POSITION _AT_pos;
};

struct _TPLOCAL_DECLS_STREAM_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPlocal_declarations _desc1;
_TSPlocal_stream_declaration _desc2;
POSITION _AT_pos;
};

struct _TPLOCAL_DECLS_ATT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPlocal_declarations _desc1;
_TSPattribute_declaration _desc2;
POSITION _AT_pos;
};

struct _TPLOCAL_DECLS_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPBLOCK_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPlocal_declarations _desc1;
_TSPstatements _desc2;
POSITION _AT_pos;
};

struct _TPBUILTIN_INST_CLRTYPE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPtype_specifier _desc1;
POSITION _AT_pos;
};

struct _TPBUILTIN_INST_TYPE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPtype_specifier _desc1;
POSITION _AT_pos;
};

struct _TPBUILTIN_INST_STR_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPBUILTIN_INSTS_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPBUILTIN_INSTS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPbuiltin_instructions _desc1;
_TSPbuiltin_instruction _desc2;
POSITION _AT_pos;
};

struct _TPMETHOD_BODY_STATIC_BUILTIN_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPbuiltin_instructions _desc1;
POSITION _AT_pos;
};

struct _TPMETHOD_BODY_BUILTIN_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPbuiltin_instructions _desc1;
POSITION _AT_pos;
};

struct _TPLINKER_SYMBOL_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPLINKER_SYMBOL_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPFOREIGN_LANGUAGE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPMETHOD_BODY_FOREIGN_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPforeign_language _desc1;
_TSPlinker_symbol _desc2;
POSITION _AT_pos;
};

struct _TPMETHOD_BODY_AB_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPMETHOD_BODY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPblock _desc1;
POSITION _AT_pos;
};

struct _TPPARAMETER_SPEC_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPparameter_kind _desc1;
_TSPattribute_specification _desc2;
POSITION _AT_pos;
};

struct _TPPARAMETERS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPLST_parameters _desc1;
POSITION _AT_pos;
};

struct _TPMETHOD_IDENT_DEF_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
int _ATSym;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPMETHOD_DECL_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPmethod_ident_def _desc1;
_TSPparameters _desc2;
_TSPtype_specifier _desc3;
_TSPmethod_body _desc4;
POSITION _AT_pos;
};

struct _TPIDENTIFIERS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPident_def _desc1;
POSITION _AT_pos;
};

struct _TPIDENTIFIERS_LST_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPidentifiers _desc1;
_TSPident_def _desc2;
POSITION _AT_pos;
};

struct _TPATTR_SPEC_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPidentifiers _desc1;
_TSPtype_specifier _desc2;
POSITION _AT_pos;
};

struct _TPATTR_DECL_CONST_TYPE_CONST_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPidentifiers _desc1;
_TSPtype_constructor _desc2;
POSITION _AT_pos;
};

struct _TPATTR_DECL_TYPE_CONST_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPidentifiers _desc1;
_TSPtype_constructor _desc2;
POSITION _AT_pos;
};

struct _TPATTR_DECL_CONST_EXP_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPattribute_specification _desc1;
_TSPexpression _desc2;
POSITION _AT_pos;
};

struct _TPATTR_DECL_EXP_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPattribute_specification _desc1;
_TSPexpression _desc2;
POSITION _AT_pos;
};

struct _TPATTR_DECL_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPattribute_specification _desc1;
POSITION _AT_pos;
};

struct _TPATTR_ACCESS_SH_RO_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPATTR_ACCESS_RO_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPATTR_ACCESS_SH_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPFEATURE_STREAM_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPmethod_decl _desc1;
POSITION _AT_pos;
};

struct _TPFEATURE_METH_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPmethod_decl _desc1;
POSITION _AT_pos;
};

struct _TPFEATURE_ATT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPattribute_declaration _desc1;
POSITION _AT_pos;
};

struct _TPFEATURE_ATT_ACC_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPattribute_access_type _desc1;
_TSPattribute_declaration _desc2;
POSITION _AT_pos;
};

struct _TPFEATURE_DECL_PRIV_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPfeature _desc1;
POSITION _AT_pos;
};

struct _TPFEATURE_DECL_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPfeature _desc1;
POSITION _AT_pos;
};

struct _TPFEATURE_DECLS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLST_feature_declarations _desc1;
POSITION _AT_pos;
};

struct _TPFEATURE_ID_USE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPFEATURE_SPEC_STREAM_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPfeature_id_use _desc1;
_TSPmethod_specification _desc2;
POSITION _AT_pos;
};

struct _TPFEATURE_SPEC_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPfeature_id_use _desc1;
_TSPmethod_specification _desc2;
POSITION _AT_pos;
};

struct _TPIDENT_MOD_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPMODIFICATION_NAME_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPfeature_specification _desc1;
_TSPident_mod _desc2;
POSITION _AT_pos;
};

struct _TPMODIFICATION_OUT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPfeature_specification _desc1;
POSITION _AT_pos;
};

struct _TPMODIFICATION_ONLY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPfeature_specification _desc1;
POSITION _AT_pos;
};

struct _TPMODIFICATIONS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLST_modifications _desc1;
POSITION _AT_pos;
};

struct _TPINHERITANCE_INC_ONLY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPclass_specifier _desc1;
_TSPmodifications _desc2;
POSITION _AT_pos;
};

struct _TPINHERITANCE_INCLUDE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPclass_specifier _desc1;
_TSPmodifications _desc2;
POSITION _AT_pos;
};

struct _TPINHERITANCE_LIKE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPclass_specifier _desc1;
_TSPmodifications _desc2;
POSITION _AT_pos;
};

struct _TPINHERITANCE_PRIV_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPinheritance _desc1;
POSITION _AT_pos;
};

struct _TPINHERITANCES_LST_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPinheritances _desc1;
_TSPinheritance _desc2;
POSITION _AT_pos;
};

struct _TPINHERITANCES_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPDIRECT_STREAM_CALL_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPdesignator _desc1;
_TSParguments _desc2;
POSITION _AT_pos;
};

struct _TPCOERCION_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPexpression _desc1;
_TSPtype_specifier _desc2;
POSITION _AT_pos;
};

struct _TPSTR_CONSTANT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPSTR_CONSTANTS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPstringconstant _desc1;
POSITION _AT_pos;
};

struct _TPSTR_CONSTANTS_LST_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPstringconstant _desc1;
_TSPstringconstants _desc2;
POSITION _AT_pos;
};

struct _TPVALUE_VOID_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPVALUE_SED_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPVALUE_OCT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPVALUE_STR_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPstringconstants _desc1;
POSITION _AT_pos;
};

struct _TPVALUE_CHAR_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPVALUE_BOOL_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPVALUE_FLOAT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPVALUE_INT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPBOUND_METHOD_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPdesignator _desc1;
_TSParguments _desc2;
POSITION _AT_pos;
};

struct _TPNAMED_EXPRESSION_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPname _desc1;
_TSPexpression _desc2;
POSITION _AT_pos;
};

struct _TPNAMED_EXPRESSIONS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLST_named_expressions _desc1;
POSITION _AT_pos;
};

struct _TPAGG_ID_DEF_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPAGGREGATE_NAMED_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPagg_id_def _desc1;
_TSPnamed_expressions _desc2;
POSITION _AT_pos;
};

struct _TPAGGREGATE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPnamed_expressions _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_SAME_AGG_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATWithClassArgs;
_TSPaggregate _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_SAME_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATWithClassArgs;
_TSParguments _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_DES_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATWithClassArgs;
_TSPdesignator _desc1;
_TSParguments _desc2;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_AGG_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATWithClassArgs;
_TSPaggregate _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_CLASS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATWithClassArgs;
_TSPdesignator _desc1;
_TSParguments _desc2;
_TSParguments _desc3;
_TSPclass_specifier _desc4;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_CL_AGG_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATWithClassArgs;
_TSPdesignator _desc1;
_TSParguments _desc2;
_TSPaggregate _desc3;
_TSPclass_specifier _desc4;
POSITION _AT_pos;
};

struct _TPQUAL_FEATURE_ID_USE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPQUALIFICATION_TYPE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPtype_specifier _desc1;
_TSPqual_feature_id_use _desc2;
POSITION _AT_pos;
};

struct _TPQUALIFICATION_EXP_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPexpression _desc1;
_TSPqual_feature_id_use _desc2;
POSITION _AT_pos;
};

struct _TPSTD_METHOD_CALL_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsArrayAccess;
_TSPdesignator _desc1;
_TSParguments _desc2;
POSITION _AT_pos;
};

struct _TPOBJ_ID_USE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPNAME_NOT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_POW_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_MOD_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_DIV_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_QUOTIENT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_STAR_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPNAME_MINUS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_PLUS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_GT_EQ_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_GT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_LT_EQ_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_LT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_NOT_EQ_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_EQ_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_QUESTION_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_GRAVE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_TILDE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_STROKE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_BACKSLASH_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_STR_IN_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_STR_OUT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPNAME_OBJ_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
_TSPobj_id_use _desc1;
POSITION _AT_pos;
};

struct _TPNAME_LEFT_SQ_BRACKET_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_notequal;
TreeNodePtr _ATtree;
int _ATstr_in_or_out;
POSITION _AT_pos;
};

struct _TPEXPRESSION_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPEXPRESSION_AND_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPexpression _desc1;
_TSPexpression _desc2;
POSITION _AT_pos;
};

struct _TPEXPRESSION_OR_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPexpression _desc1;
_TSPexpression _desc2;
POSITION _AT_pos;
};

struct _TPEXPRESSION_STREAM_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPdirect_stream_call _desc1;
POSITION _AT_pos;
};

struct _TPEXPRESSION_METH_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPstd_method_call _desc1;
POSITION _AT_pos;
};

struct _TPEXPRESSION_COERCION_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPcoercion _desc1;
POSITION _AT_pos;
};

struct _TPEXPRESSION_VALUE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPvalue _desc1;
POSITION _AT_pos;
};

struct _TPEXPRESSION_BOUND_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPbound_method _desc1;
POSITION _AT_pos;
};

struct _TPEXPRESSION_CONS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPtype_constructor _desc1;
POSITION _AT_pos;
};

struct _TPEXPRESSION_STAR_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPDESIGNATOR_QUAL_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPqualification _desc1;
POSITION _AT_pos;
};

struct _TPDESIGNATOR_METH_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPstd_method_call _desc1;
POSITION _AT_pos;
};

struct _TPDESIGNATOR_EXP_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPexpression _desc1;
_TSPname _desc2;
POSITION _AT_pos;
};

struct _TPDESIGNATOR_NAME_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPname _desc1;
POSITION _AT_pos;
};

struct _TPARGUMENT_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATResolvesToExpression;
POSITION _AT_pos;
};

struct _TPARGUMENT_INOUT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATResolvesToExpression;
_TSPdesignator _desc1;
POSITION _AT_pos;
};

struct _TPARGUMENT_OUT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATResolvesToExpression;
_TSPdesignator _desc1;
POSITION _AT_pos;
};

struct _TPARGUMENT_EXP_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATResolvesToExpression;
_TSPexpression _desc1;
POSITION _AT_pos;
};

struct _TPARGUMENTS_LST_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_partial_call;
_TSParguments _desc1;
_TSPargument _desc2;
POSITION _AT_pos;
};

struct _TPARGUMENTS_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_partial_call;
POSITION _AT_pos;
};

struct _TPBOUND_EXP_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPexpression _desc1;
POSITION _AT_pos;
};

struct _TPBOUNDS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATClassBoundsPtg;
_TSPLST_bounds _desc1;
POSITION _AT_pos;
};

struct _TPCLASS_ID_USE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
PTGNode _ATClassBoundsPtg;
DefTableKey _ATKey;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPPARAMETER_KIND_INOUT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPPARAMETER_KIND_OUT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPPARAMETER_KIND_ONCE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPPARAMETER_KIND_IN_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPPARAMETER_TYPE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPparameter_kind _desc1;
_TSPtype_specifier _desc2;
POSITION _AT_pos;
};

struct _TPPARAMETER_TYPES_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLST_parameter_types _desc1;
POSITION _AT_pos;
};

struct _TPMETHOD_SPECIFICATION_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPparameter_types _desc1;
_TSPtype_specifier _desc2;
POSITION _AT_pos;
};

struct _TPCLASS_ARGUMENT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPclass_specifier _desc1;
POSITION _AT_pos;
};

struct _TPCLASS_ARGUMENTS_LST_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPclass_arguments _desc1;
_TSPclass_argument _desc2;
POSITION _AT_pos;
};

struct _TPCLASS_ARGUMENTS_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPCLASS_SPECIFIER_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_predef_array;
int _ATis_string_abbrev;
int _ATIsClassParam;
DefTableKey _ATKey;
_TSPclass_id_use _desc1;
_TSPbounds _desc2;
_TSPclass_arguments _desc3;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_STREAM_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPmethod_specification _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_SAME_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_SAME_POLY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_PROC_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPmethod_specification _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_DES_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPdesignator _desc1;
_TSParguments _desc2;
_TSPclass_specifier _desc3;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_CL_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPclass_specifier _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_CL_POLY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPclass_specifier _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIERS_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIERS_LST_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPtype_specifiers _desc1;
_TSPtype_specifier _desc2;
POSITION _AT_pos;
};

struct _TPCLASS_PARAM_ID_DEF_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPCLASS_PARAMETER_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPclass_param_id_def _desc1;
_TSPtype_specifiers _desc2;
POSITION _AT_pos;
};

struct _TPIDENT_DEF_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPBOUND_IDENTIFIER_STAR_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPBOUND_IDENTIFIER_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPident_def _desc1;
POSITION _AT_pos;
};

struct _TPCLASS_PARAMETERS_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATTypeGenEnv;
POSITION _AT_pos;
};

struct _TPCLASS_PARAMETERS_LST_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATTypeGenEnv;
_TSPclass_parameters _desc1;
_TSPclass_parameter _desc2;
POSITION _AT_pos;
};

struct _TPCLASS_BOUNDS_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPCLASS_BOUNDS_LST_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPclass_bounds _desc1;
_TSPbound_identifier _desc2;
POSITION _AT_pos;
};

struct _TPCLASS_ID_DEF_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPBUILTIN_OPT_CL_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPclass_specifier _desc1;
POSITION _AT_pos;
};

struct _TPBUILTIN_OPT_ID_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPBUILTIN_OPT_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPBUILTIN_OPT_EMPTY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPCLASS_BODY_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _ATClassParams_post;
Environment _ATTypeGenEnv;
TreeNodePtr _ATtree;
_TSPbuiltin_option _desc1;
_TSPinheritances _desc2;
_TSPfeature_declarations _desc3;
POSITION _AT_pos;
};

struct _TPCLASS_HEAD_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _AT_const70;
_TSPclass_id_def _desc1;
_TSPclass_bounds _desc2;
_TSPclass_parameters _desc3;
POSITION _AT_pos;
};

struct _TPCLASS_ATTRIBUTE_VA_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _ATClassParams_post;
DefTableKeyList _ATRefClasses_post;
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPCLASS_ATTRIBUTE_EX_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _ATClassParams_post;
DefTableKeyList _ATRefClasses_post;
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPCLASS_ATTRIBUTE_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _ATClassParams_post;
DefTableKeyList _ATRefClasses_post;
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPCLASS_ATTRIBUTE_ABVA_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _ATClassParams_post;
DefTableKeyList _ATRefClasses_post;
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPCLASS_ATTRIBUTE_AB_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _ATClassParams_post;
DefTableKeyList _ATRefClasses_post;
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPCLASS_DECLARATION_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATTypeGenEnv;
int _ATIsMainClass;
DefTableKey _ATKey;
_TSPclass_attribute _desc1;
_TSPclass_head _desc2;
_TSPclass_body _desc3;
POSITION _AT_pos;
};

struct _TPCLASS_DECLARATIONS_O
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLST_class_declarations _desc1;
POSITION _AT_pos;
};

struct _TPASSERTION_STATEMENT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPExpression_2 _desc1;
};

struct _TPRAISE_STATEMENT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPType_specifier_2 _desc1;
POSITION _AT_pos;
};

struct _TPRETURN_STATEMENT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TPRESUME_STATEMENT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPBREAK_STATEMENT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPLOOP_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
int _ATIsLoop;
int _ATEndLabel;
_TSPBlock_2 _desc1;
};

struct _TPLOOP_EXP_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
int _ATIsLoop;
int _ATEndLabel;
_TSPExpression_2 _desc1;
_TSPBlock_2 _desc2;
POSITION _AT_pos;
};

struct _TPWHEN_TYPES_BLOCK_ELSE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
int _ATSym;
DefTableKey _ATKey;
_TSPBlock_2 _desc1;
};

struct _TPWHEN_TYPES_BLOCK_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
int _ATSym;
DefTableKey _ATKey;
_TSPType_specifier_2 _desc1;
_TSPBlock_2 _desc2;
POSITION _AT_pos;
};

struct _TPWHEN_TYPES_BLOCKS_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TPWHEN_TYPES_BLOCKS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPWhen_types_blocks_2 _desc1;
_TSPWhen_types_block_2 _desc2;
};

struct _TPTYPE_CASE_STATEMENT_ATT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
int _ATSym;
STPtr _ATType;
int _ATEndLabel;
PTGNode _ATtype_out;
_TSPAttribute_declaration_2 _desc1;
_TSPWhen_types_blocks_2 _desc2;
};

struct _TPTYPE_CASE_STATEMENT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
int _ATSym;
STPtr _ATType;
int _ATEndLabel;
PTGNode _ATtype_out;
_TSPName_2 _desc1;
_TSPWhen_types_blocks_2 _desc2;
POSITION _AT_pos;
};

struct _TPCASE_LABEL_DES_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPDesignator_2 _desc1;
POSITION _AT_pos;
};

struct _TPCASE_LABEL_VALUE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPValue_2 _desc1;
POSITION _AT_pos;
};

struct _TPLABEL_RANGE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPCase_label_2 _desc1;
_TSPCase_label_2 _desc2;
POSITION _AT_pos;
};

struct _TPLABEL_RANGE_SINGLE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPCase_label_2 _desc1;
POSITION _AT_pos;
};

struct _TPLABEL_LIST_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLST_Label_list_2 _desc1;
};

struct _TPWHEN_LABEL_STMT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
int _ATBlockLabel;
_TSPLabel_list_2 _desc1;
_TSPBlock_2 _desc2;
};

struct _TPWHEN_LABEL_STMTS_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TPWHEN_LABEL_STMTS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPWhen_label_stmts_2 _desc1;
_TSPWhen_label_stmt_2 _desc2;
};

struct _TPCASE_STATEMENT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
int _ATEndLabel;
_TSPExpression_2 _desc1;
_TSPWhen_label_stmts_2 _desc2;
POSITION _AT_pos;
};

struct _TPCOND_STATEMENT_ELSE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
_TSPBlock_2 _desc1;
};

struct _TPCOND_STATEMENT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
_TSPExpression_2 _desc1;
_TSPBlock_2 _desc2;
_TSPConditional_statement_2 _desc3;
POSITION _AT_pos;
};

struct _TPWHEN_EXCEPTION_STMT_ELSE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_exception;
Environment _ATSemEnv;
int _ATSym;
DefTableKey _ATKey;
_TSPBlock_2 _desc1;
POSITION _AT_pos;
};

struct _TPWHEN_EXCEPTION_STMT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_exception;
Environment _ATSemEnv;
int _ATSym;
DefTableKey _ATKey;
_TSPType_specifier_2 _desc1;
_TSPBlock_2 _desc2;
};

struct _TPWHEN_EXCEPTION_STMTS_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TPWHEN_EXCEPTION_STMTS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPWhen_exception_stmts_2 _desc1;
_TSPWhen_exception_stmt_2 _desc2;
};

struct _TPEXCEPTIONS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
STPtr _ATType;
int _ATSym;
_TSPIdent_def_2 _desc1;
_TSPWhen_exception_stmts_2 _desc2;
};

struct _TPEXCEPTIONS_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
STPtr _ATType;
int _ATSym;
};

struct _TPBEGIN_BLOCK_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
int _ATLeaveLabel;
_TSPBlock_2 _desc1;
_TSPExceptions_2 _desc2;
POSITION _AT_pos;
};

struct _TPASSIGNMENT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPName_2 _desc1;
_TSPExpression_2 _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_ASSERT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const84;
int _AT_const85;
PTGNode _ATout;
_TSPStatements_2 _desc1;
_TSPAssertion_statement_2 _desc2;
};

struct _TPSTATEMENTS_RAISE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const84;
int _AT_const85;
PTGNode _ATout;
_TSPStatements_2 _desc1;
_TSPRaise_statement_2 _desc2;
};

struct _TPSTATEMENTS_RETURN_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const84;
int _AT_const85;
PTGNode _ATout;
_TSPStatements_2 _desc1;
_TSPReturn_statement_2 _desc2;
};

struct _TPSTATEMENTS_RESUME_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const84;
int _AT_const85;
PTGNode _ATout;
_TSPStatements_2 _desc1;
_TSPResume_statement_2 _desc2;
};

struct _TPSTATEMENTS_EXP_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const84;
int _AT_const85;
PTGNode _ATout;
_TSPStatements_2 _desc1;
_TSPExpression_2 _desc2;
};

struct _TPSTATEMENTS_BREAK_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const84;
int _AT_const85;
PTGNode _ATout;
_TSPStatements_2 _desc1;
_TSPBreak_statement_2 _desc2;
};

struct _TPSTATEMENTS_LOOP_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const84;
int _AT_const85;
PTGNode _ATout;
_TSPStatements_2 _desc1;
_TSPLoop_2 _desc2;
};

struct _TPSTATEMENTS_TYPE_CASE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const84;
int _AT_const85;
PTGNode _ATout;
_TSPStatements_2 _desc1;
_TSPType_case_statement_2 _desc2;
};

struct _TPSTATEMENTS_CASE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const84;
int _AT_const85;
PTGNode _ATout;
_TSPStatements_2 _desc1;
_TSPCase_statement_2 _desc2;
};

struct _TPSTATEMENTS_COND_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const84;
int _AT_const85;
PTGNode _ATout;
_TSPStatements_2 _desc1;
_TSPConditional_statement_2 _desc2;
};

struct _TPSTATEMENTS_BEGIN_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const84;
int _AT_const85;
PTGNode _ATout;
_TSPStatements_2 _desc1;
_TSPBegin_block_2 _desc2;
};

struct _TPSTATEMENTS_ASSIGN_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const84;
int _AT_const85;
PTGNode _ATout;
_TSPStatements_2 _desc1;
_TSPAssignment_2 _desc2;
};

struct _TPSTATEMENTS_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const84;
int _AT_const85;
PTGNode _ATout;
};

struct _TPLOCAL_STREAM_DECL_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
_TSPIdent_def_2 _desc1;
_TSPMethod_specification_2 _desc2;
_TSPBound_method_2 _desc3;
};

struct _TPLOCAL_DECLS_STREAM_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _ATinit_code;
PTGNode _ATcil_locals;
_TSPLocal_declarations_2 _desc1;
_TSPLocal_stream_declaration_2 _desc2;
};

struct _TPLOCAL_DECLS_ATT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _ATinit_code;
PTGNode _ATcil_locals;
_TSPLocal_declarations_2 _desc1;
_TSPAttribute_declaration_2 _desc2;
};

struct _TPLOCAL_DECLS_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _ATinit_code;
PTGNode _ATcil_locals;
};

struct _TPBLOCK_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATLabelNum_post;
PTGNode _ATResumeLabels_post;
Environment _ATSemEnv;
_TSPLocal_declarations_2 _desc1;
_TSPStatements_2 _desc2;
};

struct _TPBUILTIN_INST_CLRTYPE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPType_specifier_2 _desc1;
};

struct _TPBUILTIN_INST_TYPE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPType_specifier_2 _desc1;
};

struct _TPBUILTIN_INST_STR_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATTERM_1;
};

struct _TPBUILTIN_INSTS_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TPBUILTIN_INSTS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPBuiltin_instructions_2 _desc1;
_TSPBuiltin_instruction_2 _desc2;
};

struct _TPMETHOD_BODY_STATIC_BUILTIN_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPBuiltin_instructions_2 _desc1;
};

struct _TPMETHOD_BODY_BUILTIN_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPBuiltin_instructions_2 _desc1;
};

struct _TPLINKER_SYMBOL_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TPLINKER_SYMBOL_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TPFOREIGN_LANGUAGE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TPMETHOD_BODY_FOREIGN_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPForeign_language_2 _desc1;
_TSPLinker_symbol_2 _desc2;
POSITION _AT_pos;
};

struct _TPMETHOD_BODY_AB_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPMETHOD_BODY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPBlock_2 _desc1;
POSITION _AT_pos;
};

struct _TPPARAMETER_SPEC_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPParameter_kind_2 _desc1;
_TSPAttribute_specification_2 _desc2;
POSITION _AT_pos;
};

struct _TPPARAMETERS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
DefTableKeyList _ATParamList;
_TSPLST_Parameters_2 _desc1;
};

struct _TPMETHOD_IDENT_DEF_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKey _ATKey;
IntSet _ATSemKindSet;
int _ATSym;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPMETHOD_DECL_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
int _ATself_sym;
DefTableKey _ATself_key;
DefTableKeyList _ATParamList;
int _ATCLRStreamName;
DefTableKey _ATKey;
IntSet _ATKindSet;
int _ATEndLabel;
DefTableKey _ATres_key;
int _ATres_sym;
int _ATIsInitMethod;
_TSPMethod_ident_def_2 _desc1;
_TSPParameters_2 _desc2;
_TSPType_specifier_2 _desc3;
_TSPMethod_body_2 _desc4;
POSITION _AT_pos;
};

struct _TPIDENTIFIERS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPIdent_def_2 _desc1;
};

struct _TPIDENTIFIERS_LST_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPIdentifiers_2 _desc1;
_TSPIdent_def_2 _desc2;
POSITION _AT_pos;
};

struct _TPATTR_SPEC_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsTypeCase;
IntSet _ATKindSet;
int _ATIsConstructor;
STPtr _ATType;
_TSPIdentifiers_2 _desc1;
_TSPType_specifier_2 _desc2;
};

struct _TPATTR_DECL_CONST_TYPE_CONST_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
CTValuePtr _ATVal;
int _ATIsTypeCase;
int _ATIsShared;
IntSet _ATKindSet;
STPtr _ATType;
PTGNode _ATinit_code;
_TSPIdentifiers_2 _desc1;
_TSPType_constructor_2 _desc2;
POSITION _AT_pos;
};

struct _TPATTR_DECL_TYPE_CONST_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
CTValuePtr _ATVal;
int _ATIsTypeCase;
int _ATIsShared;
IntSet _ATKindSet;
STPtr _ATType;
PTGNode _ATinit_code;
_TSPIdentifiers_2 _desc1;
_TSPType_constructor_2 _desc2;
POSITION _AT_pos;
};

struct _TPATTR_DECL_CONST_EXP_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
CTValuePtr _ATVal;
int _ATIsTypeCase;
int _ATIsShared;
IntSet _ATKindSet;
STPtr _ATType;
PTGNode _ATinit_code;
_TSPAttribute_specification_2 _desc1;
_TSPExpression_2 _desc2;
POSITION _AT_pos;
};

struct _TPATTR_DECL_EXP_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
CTValuePtr _ATVal;
int _ATIsTypeCase;
int _ATIsShared;
IntSet _ATKindSet;
STPtr _ATType;
PTGNode _ATinit_code;
_TSPAttribute_specification_2 _desc1;
_TSPExpression_2 _desc2;
POSITION _AT_pos;
};

struct _TPATTR_DECL_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
CTValuePtr _ATVal;
int _ATIsTypeCase;
int _ATIsShared;
IntSet _ATKindSet;
STPtr _ATType;
PTGNode _ATinit_code;
_TSPAttribute_specification_2 _desc1;
POSITION _AT_pos;
};

struct _TPATTR_ACCESS_SH_RO_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
IntSet _ATKindSet;
PTGNode _ATout;
};

struct _TPATTR_ACCESS_RO_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
IntSet _ATKindSet;
PTGNode _ATout;
};

struct _TPATTR_ACCESS_SH_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
IntSet _ATKindSet;
PTGNode _ATout;
};

struct _TPFEATURE_STREAM_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATNamePtg;
int _ATValHome;
PTGNode _ATacc_out;
_TSPMethod_decl_2 _desc1;
};

struct _TPFEATURE_METH_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATNamePtg;
int _ATValHome;
PTGNode _ATacc_out;
_TSPMethod_decl_2 _desc1;
};

struct _TPFEATURE_ATT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATNamePtg;
int _ATValHome;
PTGNode _ATacc_out;
_TSPAttribute_declaration_2 _desc1;
};

struct _TPFEATURE_ATT_ACC_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATNamePtg;
int _ATValHome;
PTGNode _ATacc_out;
_TSPAttribute_access_type_2 _desc1;
_TSPAttribute_declaration_2 _desc2;
};

struct _TPFEATURE_DECL_PRIV_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _ATMethodCallsLocal;
DefTableKeyList _ATAttributeAccessLocal;
PTGNode _ATacc_out;
_TSPFeature_2 _desc1;
};

struct _TPFEATURE_DECL_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _ATMethodCallsLocal;
DefTableKeyList _ATAttributeAccessLocal;
PTGNode _ATacc_out;
_TSPFeature_2 _desc1;
};

struct _TPFEATURE_DECLS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATattr_preinit_initcode;
PTGNode _ATattr_postinit_initcode;
PTGNode _ATattribute_init_locals;
PTGNode _ATarray_init;
_TSPLST_Feature_declarations_2 _desc1;
};

struct _TPINHERITANCE_LIKE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPClass_specifier_2 _desc1;
};

struct _TPINHERITANCES_LST_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _AT_const110;
DefTableKeyList _ATMethCallsLoc_post;
DefTableKeyList _ATAttrAccLoc_post;
_TSPInheritances_2 _desc1;
_TSPInheritance_2 _desc2;
};

struct _TPINHERITANCES_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _AT_const110;
DefTableKeyList _ATMethCallsLoc_post;
DefTableKeyList _ATAttrAccLoc_post;
};

struct _TPDIRECT_STREAM_CALL_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKey _ATCalled;
int _ATStreamValHome;
int _ATStackBefore;
STPtr _ATType;
_TSPDesignator_2 _desc1;
_TSPArguments_2 _desc2;
POSITION _AT_pos;
};

struct _TPCOERCION_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
_TSPExpression_2 _desc1;
_TSPType_specifier_2 _desc2;
POSITION _AT_pos;
};

struct _TPSTR_CONSTANT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATTERM_1;
};

struct _TPSTR_CONSTANTS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATstr_val;
_TSPStringconstant_2 _desc1;
};

struct _TPSTR_CONSTANTS_LST_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATstr_val;
_TSPStringconstant_2 _desc1;
_TSPStringconstants_2 _desc2;
};

struct _TPVALUE_VOID_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATout;
CTValuePtr _ATVal;
STPtr _ATType;
};

struct _TPVALUE_SED_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATout;
CTValuePtr _ATVal;
STPtr _ATType;
int _ATTERM_1;
};

struct _TPVALUE_OCT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATout;
CTValuePtr _ATVal;
STPtr _ATType;
int _ATTERM_1;
};

struct _TPVALUE_STR_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATout;
CTValuePtr _ATVal;
STPtr _ATType;
_TSPStringconstants_2 _desc1;
POSITION _AT_pos;
};

struct _TPVALUE_CHAR_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATout;
CTValuePtr _ATVal;
STPtr _ATType;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPVALUE_BOOL_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATout;
CTValuePtr _ATVal;
STPtr _ATType;
int _ATTERM_1;
};

struct _TPVALUE_FLOAT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATout;
CTValuePtr _ATVal;
STPtr _ATType;
int _ATTERM_1;
};

struct _TPVALUE_INT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATout;
CTValuePtr _ATVal;
STPtr _ATType;
int _ATTERM_1;
};

struct _TPBOUND_METHOD_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATStackBefore;
STPtr _ATType;
DefTableKey _ATCalled;
_TSPDesignator_2 _desc1;
_TSPArguments_2 _desc2;
POSITION _AT_pos;
};

struct _TPNAMED_EXPRESSION_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPName_2 _desc1;
_TSPExpression_2 _desc2;
POSITION _AT_pos;
};

struct _TPNAMED_EXPRESSIONS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLST_Named_expressions_2 _desc1;
};

struct _TPAGG_ID_DEF_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKey _ATKey;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPAGGREGATE_NAMED_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_array_aggregate;
STPtr _ATTypeEst;
Environment _ATSemEnv;
int _ATAggregateDepth;
_TSPAgg_id_def_2 _desc1;
_TSPNamed_expressions_2 _desc2;
POSITION _AT_pos;
};

struct _TPAGGREGATE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_array_aggregate;
STPtr _ATTypeEst;
Environment _ATSemEnv;
int _ATAggregateDepth;
_TSPNamed_expressions_2 _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_SAME_AGG_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
DefTableKey _ATCalled;
int _ATStackBefore;
STPtr _ATType;
_TSPAggregate_2 _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_SAME_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
DefTableKey _ATCalled;
int _ATStackBefore;
STPtr _ATType;
_TSPArguments_2 _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_DES_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
DefTableKey _ATCalled;
int _ATStackBefore;
STPtr _ATType;
_TSPDesignator_2 _desc1;
_TSPArguments_2 _desc2;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_AGG_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
DefTableKey _ATCalled;
int _ATStackBefore;
STPtr _ATType;
_TSPAggregate_2 _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_CLASS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
DefTableKey _ATCalled;
int _ATStackBefore;
STPtr _ATType;
_TSPClass_specifier_2 _desc1;
_TSPArguments_2 _desc2;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_CL_AGG_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
DefTableKey _ATCalled;
int _ATStackBefore;
STPtr _ATType;
_TSPClass_specifier_2 _desc1;
_TSPAggregate_2 _desc2;
POSITION _AT_pos;
};

struct _TPQUAL_FEATURE_ID_USE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKey _ATKey;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPQUALIFICATION_TYPE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPType_specifier_2 _desc1;
_TSPQual_feature_id_use_2 _desc2;
};

struct _TPQUALIFICATION_EXP_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPExpression_2 _desc1;
_TSPQual_feature_id_use_2 _desc2;
};

struct _TPSTD_METHOD_CALL_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsArg;
DefTableKey _ATKey;
int _ATStackBefore;
DefTableKey _ATCalled;
CTValuePtr _ATVal;
STPtr _ATType;
_TSPDesignator_2 _desc1;
_TSPArguments_2 _desc2;
POSITION _AT_pos;
};

struct _TPOBJ_ID_USE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
};

struct _TPNAME_NOT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_POW_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_MOD_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_DIV_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_QUOTIENT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_STAR_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_MINUS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_PLUS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_GT_EQ_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_GT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_LT_EQ_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_LT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_EQ_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_QUESTION_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_GRAVE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_TILDE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_STROKE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_BACKSLASH_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_STR_IN_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_STR_OUT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPNAME_OBJ_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
_TSPObj_id_use_2 _desc1;
POSITION _AT_pos;
};

struct _TPNAME_LEFT_SQ_BRACKET_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
};

struct _TPEXPRESSION_AND_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
STPtr _ATTypeEst;
int _ATIsArg;
CTValuePtr _ATVal;
int _ATStackHeight;
STPtr _ATType;
_TSPExpression_2 _desc1;
_TSPExpression_2 _desc2;
POSITION _AT_pos;
};

struct _TPEXPRESSION_OR_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
STPtr _ATTypeEst;
int _ATIsArg;
CTValuePtr _ATVal;
int _ATStackHeight;
STPtr _ATType;
_TSPExpression_2 _desc1;
_TSPExpression_2 _desc2;
POSITION _AT_pos;
};

struct _TPEXPRESSION_STREAM_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
STPtr _ATTypeEst;
int _ATIsArg;
CTValuePtr _ATVal;
int _ATStackHeight;
STPtr _ATType;
_TSPDirect_stream_call_2 _desc1;
};

struct _TPEXPRESSION_METH_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
STPtr _ATTypeEst;
int _ATIsArg;
CTValuePtr _ATVal;
int _ATStackHeight;
STPtr _ATType;
_TSPStd_method_call_2 _desc1;
POSITION _AT_pos;
};

struct _TPEXPRESSION_COERCION_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
STPtr _ATTypeEst;
int _ATIsArg;
CTValuePtr _ATVal;
int _ATStackHeight;
STPtr _ATType;
_TSPCoercion_2 _desc1;
};

struct _TPEXPRESSION_VALUE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
STPtr _ATTypeEst;
int _ATIsArg;
CTValuePtr _ATVal;
int _ATStackHeight;
STPtr _ATType;
_TSPValue_2 _desc1;
POSITION _AT_pos;
};

struct _TPEXPRESSION_BOUND_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
STPtr _ATTypeEst;
int _ATIsArg;
CTValuePtr _ATVal;
int _ATStackHeight;
STPtr _ATType;
_TSPBound_method_2 _desc1;
};

struct _TPEXPRESSION_CONS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
STPtr _ATTypeEst;
int _ATIsArg;
CTValuePtr _ATVal;
int _ATStackHeight;
STPtr _ATType;
_TSPType_constructor_2 _desc1;
};

struct _TPEXPRESSION_STAR_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
STPtr _ATTypeEst;
int _ATIsArg;
CTValuePtr _ATVal;
int _ATStackHeight;
STPtr _ATType;
};

struct _TPDESIGNATOR_QUAL_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsQualified;
int _ATIsQualifiedPolymorph;
DefTableKey _ATKey;
_TSPQualification_2 _desc1;
POSITION _AT_pos;
};

struct _TPDESIGNATOR_METH_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsQualified;
int _ATIsQualifiedPolymorph;
DefTableKey _ATKey;
_TSPStd_method_call_2 _desc1;
POSITION _AT_pos;
};

struct _TPDESIGNATOR_EXP_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsQualified;
int _ATIsQualifiedPolymorph;
DefTableKey _ATKey;
_TSPExpression_2 _desc1;
_TSPName_2 _desc2;
POSITION _AT_pos;
};

struct _TPDESIGNATOR_NAME_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsQualified;
int _ATIsQualifiedPolymorph;
DefTableKey _ATKey;
_TSPName_2 _desc1;
POSITION _AT_pos;
};

struct _TPARGUMENT_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATStackBefore;
STPtr _ATTypeEst;
};

struct _TPARGUMENT_INOUT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATStackBefore;
STPtr _ATTypeEst;
_TSPDesignator_2 _desc1;
};

struct _TPARGUMENT_OUT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATStackBefore;
STPtr _ATTypeEst;
_TSPDesignator_2 _desc1;
};

struct _TPARGUMENT_EXP_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATStackBefore;
STPtr _ATTypeEst;
_TSPExpression_2 _desc1;
POSITION _AT_pos;
};

struct _TPARGUMENTS_LST_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
MethArgInfoList _ATArgList;
int _ATNumArgs;
_TSPArguments_2 _desc1;
_TSPArgument_2 _desc2;
};

struct _TPARGUMENTS_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
MethArgInfoList _ATArgList;
int _ATNumArgs;
};

struct _TPBOUND_EXP_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPExpression_2 _desc1;
POSITION _AT_pos;
};

struct _TPBOUNDS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLST_Bounds_2 _desc1;
};

struct _TPCLASS_ID_USE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
};

struct _TPPARAMETER_KIND_INOUT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATNamePtg;
IntSet _ATKindSet;
};

struct _TPPARAMETER_KIND_OUT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATNamePtg;
IntSet _ATKindSet;
};

struct _TPPARAMETER_KIND_ONCE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATNamePtg;
IntSet _ATKindSet;
};

struct _TPPARAMETER_KIND_IN_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATNamePtg;
IntSet _ATKindSet;
};

struct _TPPARAMETER_TYPE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPParameter_kind_2 _desc1;
_TSPType_specifier_2 _desc2;
};

struct _TPPARAMETER_TYPES_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLST_Parameter_types_2 _desc1;
};

struct _TPMETHOD_SPECIFICATION_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPParameter_types_2 _desc1;
_TSPType_specifier_2 _desc2;
};

struct _TPCLASS_ARGUMENT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPClass_specifier_2 _desc1;
};

struct _TPCLASS_ARGUMENTS_LST_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPClass_arguments_2 _desc1;
_TSPClass_argument_2 _desc2;
};

struct _TPCLASS_ARGUMENTS_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TPCLASS_SPECIFIER_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsRow;
DefTableKey _ATKey;
int _ATIsConstructor;
_TSPClass_id_use_2 _desc1;
_TSPBounds_2 _desc2;
_TSPClass_arguments_2 _desc3;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_STREAM_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
PTGNode _ATNamePtg;
STPtr _ATType;
_TSPMethod_specification_2 _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_SAME_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
PTGNode _ATNamePtg;
STPtr _ATType;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_SAME_POLY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
PTGNode _ATNamePtg;
STPtr _ATType;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_PROC_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
PTGNode _ATNamePtg;
STPtr _ATType;
_TSPMethod_specification_2 _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
PTGNode _ATNamePtg;
STPtr _ATType;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_CL_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
PTGNode _ATNamePtg;
STPtr _ATType;
_TSPClass_specifier_2 _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_CL_POLY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _AT_const82;
int _AT_const83;
PTGNode _AT_const101;
PTGNode _ATNamePtg;
STPtr _ATType;
_TSPClass_specifier_2 _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIERS_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TPTYPE_SPECIFIERS_LST_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPType_specifiers_2 _desc1;
_TSPType_specifier_2 _desc2;
};

struct _TPCLASS_PARAMETER_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPClass_specifier_2 _desc1;
_TSPType_specifiers_2 _desc2;
POSITION _AT_pos;
};

struct _TPIDENT_DEF_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
int _ATUniqueId;
PTGNode _ATout;
DefTableKey _ATKey;
IntSet _ATSemKindSet;
PTGNode _ATinit_out;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPBOUND_IDENTIFIER_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
_TSPIdent_def_2 _desc1;
POSITION _AT_pos;
};

struct _TPCLASS_PARAMETERS_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TPCLASS_PARAMETERS_LST_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPClass_parameters_2 _desc1;
_TSPClass_parameter_2 _desc2;
};

struct _TPCLASS_BOUNDS_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TPCLASS_BOUNDS_LST_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPClass_bounds_2 _desc1;
_TSPBound_identifier_2 _desc2;
};

struct _TPCLASS_ID_DEF_POLY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKey _ATKey;
int _ATSym;
PTGNode _ATout;
int _ATTERM_1;
};

struct _TPCLASS_ID_DEF_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKey _ATKey;
int _ATSym;
PTGNode _ATout;
int _ATTERM_1;
};

struct _TPBUILTIN_OPT_CL_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATout;
_TSPClass_specifier_2 _desc1;
};

struct _TPBUILTIN_OPT_ID_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATout;
int _ATTERM_1;
};

struct _TPBUILTIN_OPT_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATout;
};

struct _TPBUILTIN_OPT_EMPTY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
PTGNode _ATout;
};

struct _TPCLASS_BODY_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATis_builtin_array;
int _ATis_builtin;
_TSPBuiltin_option_2 _desc1;
_TSPInheritances_2 _desc2;
_TSPFeature_declarations_2 _desc3;
};

struct _TPCLASS_HEAD_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _AT_const109;
DefTableKey _AT_const116;
int _ATis_array_class;
_TSPClass_id_def_2 _desc1;
_TSPClass_bounds_2 _desc2;
_TSPClass_parameters_2 _desc3;
POSITION _AT_pos;
};

struct _TPCLASS_ATTRIBUTE_VA_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _ATMethCallsLoc_post;
DefTableKeyList _ATAttrAccLoc_post;
DefTableKeyList _ATPubAttr_post;
IntSet _ATKindSet;
};

struct _TPCLASS_ATTRIBUTE_EX_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _ATMethCallsLoc_post;
DefTableKeyList _ATAttrAccLoc_post;
DefTableKeyList _ATPubAttr_post;
IntSet _ATKindSet;
};

struct _TPCLASS_ATTRIBUTE_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _ATMethCallsLoc_post;
DefTableKeyList _ATAttrAccLoc_post;
DefTableKeyList _ATPubAttr_post;
IntSet _ATKindSet;
};

struct _TPCLASS_ATTRIBUTE_ABVA_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _ATMethCallsLoc_post;
DefTableKeyList _ATAttrAccLoc_post;
DefTableKeyList _ATPubAttr_post;
IntSet _ATKindSet;
};

struct _TPCLASS_ATTRIBUTE_AB_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _ATMethCallsLoc_post;
DefTableKeyList _ATAttrAccLoc_post;
DefTableKeyList _ATPubAttr_post;
IntSet _ATKindSet;
};

struct _TPCLASS_DECLARATION_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATSemEnv;
int _ATIsMainClass;
int _ATHasParamlessInitMethod;
IntSet _ATSemKindSet;
int _ATis_polymorph;
DefTableKey _ATKey;
_TSPClass_attribute_2 _desc1;
_TSPClass_head_2 _desc2;
_TSPClass_body_2 _desc3;
POSITION _AT_pos;
};

struct _TPCLASS_DECLARATIONS_2
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLST_Class_declarations_2 _desc1;
};

struct _TPASSERTION_STATEMENT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPExpression _desc1;
POSITION _AT_pos;
};

struct _TPRAISE_STATEMENT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPType_specifier _desc1;
POSITION _AT_pos;
};

struct _TPRETURN_STATEMENT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPRESUME_STATEMENT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPBREAK_STATEMENT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPLOOP
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPBlock _desc1;
POSITION _AT_pos;
};

struct _TPLOOP_EXP
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPExpression _desc1;
_TSPBlock _desc2;
POSITION _AT_pos;
};

struct _TPTYPES_LST
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPTypes _desc1;
_TSPType_specifier _desc2;
POSITION _AT_pos;
};

struct _TPTYPES_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TPWHEN_TYPES_BLOCK
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATBlockTree;
_TSPTypes _desc1;
_TSPBlock _desc2;
POSITION _AT_pos;
};

struct _TPWHEN_TYPES_BLOCKS_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATLeftTree;
POSITION _AT_pos;
};

struct _TPWHEN_TYPES_BLOCKS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATLeftTree;
_TSPWhen_types_blocks _desc1;
_TSPWhen_types_block _desc2;
};

struct _TPTYPE_CASE_STATEMENT_ATT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPAttribute_declaration _desc1;
_TSPWhen_types_blocks _desc2;
POSITION _AT_pos;
};

struct _TPTYPE_CASE_STATEMENT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPName _desc1;
_TSPWhen_types_blocks _desc2;
POSITION _AT_pos;
};

struct _TPCASE_LABEL_DES
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPDesignator _desc1;
POSITION _AT_pos;
};

struct _TPCASE_LABEL_VALUE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPValue _desc1;
POSITION _AT_pos;
};

struct _TPLABEL_RANGE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPCase_label _desc1;
_TSPCase_label _desc2;
POSITION _AT_pos;
};

struct _TPLABEL_RANGE_SINGLE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPCase_label _desc1;
POSITION _AT_pos;
};

struct _TPLABEL_LIST
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPLST_Label_list _desc1;
POSITION _AT_pos;
};

struct _TPWHEN_LABEL_STMT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLabel_list _desc1;
_TSPBlock _desc2;
POSITION _AT_pos;
};

struct _TPWHEN_LABEL_STMTS_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPWHEN_LABEL_STMTS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPWhen_label_stmts _desc1;
_TSPWhen_label_stmt _desc2;
POSITION _AT_pos;
};

struct _TPCASE_STATEMENT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPExpression _desc1;
_TSPWhen_label_stmts _desc2;
POSITION _AT_pos;
};

struct _TPCOND_STATEMENT_ELSE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPBlock _desc1;
POSITION _AT_pos;
};

struct _TPCOND_STATEMENT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPExpression _desc1;
_TSPBlock _desc2;
_TSPConditional_statement _desc3;
POSITION _AT_pos;
};

struct _TPEXCEPTION_TYPES_LST
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPException_types _desc1;
_TSPType_specifier _desc2;
POSITION _AT_pos;
};

struct _TPEXCEPTION_TYPES_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
};

struct _TPWHEN_EXCEPTION_STMT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATBlockTree;
_TSPException_types _desc1;
_TSPBlock _desc2;
POSITION _AT_pos;
};

struct _TPWHEN_EXCEPTION_STMTS_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATLeftTree;
POSITION _AT_pos;
};

struct _TPWHEN_EXCEPTION_STMTS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATLeftTree;
_TSPWhen_exception_stmts _desc1;
_TSPWhen_exception_stmt _desc2;
};

struct _TPEXCEPTIONS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPIdent_def _desc1;
_TSPWhen_exception_stmts _desc2;
POSITION _AT_pos;
};

struct _TPEXCEPTIONS_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPBEGIN_BLOCK
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPBlock _desc1;
_TSPExceptions _desc2;
POSITION _AT_pos;
};

struct _TPASSIGNMENT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPName _desc1;
_TSPExpression _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_ASSERT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPStatements _desc1;
_TSPAssertion_statement _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_RAISE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPStatements _desc1;
_TSPRaise_statement _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_RETURN
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPStatements _desc1;
_TSPReturn_statement _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_RESUME
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPStatements _desc1;
_TSPResume_statement _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_EXP
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPStatements _desc1;
_TSPExpression _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_BREAK
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPStatements _desc1;
_TSPBreak_statement _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_LOOP
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPStatements _desc1;
_TSPLoop _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_TYPE_CASE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPStatements _desc1;
_TSPType_case_statement _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_CASE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPStatements _desc1;
_TSPCase_statement _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_COND
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPStatements _desc1;
_TSPConditional_statement _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_BEGIN
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPStatements _desc1;
_TSPBegin_block _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_ASSIGN
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPStatements _desc1;
_TSPAssignment _desc2;
POSITION _AT_pos;
};

struct _TPSTATEMENTS_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPLOCAL_STREAM_DECL
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPIdent_def _desc1;
_TSPMethod_specification _desc2;
_TSPBound_method _desc3;
POSITION _AT_pos;
};

struct _TPLOCAL_DECLS_STREAM
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLocal_declarations _desc1;
_TSPLocal_stream_declaration _desc2;
POSITION _AT_pos;
};

struct _TPLOCAL_DECLS_ATT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLocal_declarations _desc1;
_TSPAttribute_declaration _desc2;
POSITION _AT_pos;
};

struct _TPLOCAL_DECLS_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPBLOCK
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPLocal_declarations _desc1;
_TSPStatements _desc2;
POSITION _AT_pos;
};

struct _TPBUILTIN_INST_CLRTYPE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPType_specifier _desc1;
POSITION _AT_pos;
};

struct _TPBUILTIN_INST_TYPE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPType_specifier _desc1;
POSITION _AT_pos;
};

struct _TPBUILTIN_INST_STR
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPBUILTIN_INSTS_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPBUILTIN_INSTS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPBuiltin_instructions _desc1;
_TSPBuiltin_instruction _desc2;
POSITION _AT_pos;
};

struct _TPMETHOD_BODY_STATIC_BUILTIN
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPBuiltin_instructions _desc1;
POSITION _AT_pos;
};

struct _TPMETHOD_BODY_BUILTIN
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPBuiltin_instructions _desc1;
POSITION _AT_pos;
};

struct _TPLINKER_SYMBOL
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPLINKER_SYMBOL_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPFOREIGN_LANGUAGE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPMETHOD_BODY_FOREIGN
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPForeign_language _desc1;
_TSPLinker_symbol _desc2;
POSITION _AT_pos;
};

struct _TPMETHOD_BODY_AB
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPMETHOD_BODY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPBlock _desc1;
POSITION _AT_pos;
};

struct _TPPARAMETER_SPEC
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPParameter_kind _desc1;
_TSPAttribute_specification _desc2;
POSITION _AT_pos;
};

struct _TPPARAMETERS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATInhEnv;
TreeNodePtr _ATtree;
int _ATIsParamDecl;
_TSPLST_Parameters _desc1;
POSITION _AT_pos;
};

struct _TPMETHOD_IDENT_DEF
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
DefTableKey _ATKey;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPMETHOD_DECL
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
IntSet _ATKindSet;
_TSPMethod_ident_def _desc1;
_TSPParameters _desc2;
_TSPType_specifier _desc3;
_TSPMethod_body _desc4;
POSITION _AT_pos;
};

struct _TPIDENTIFIERS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPIdent_def _desc1;
POSITION _AT_pos;
};

struct _TPIDENTIFIERS_LST
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPIdentifiers _desc1;
_TSPIdent_def _desc2;
POSITION _AT_pos;
};

struct _TPATTR_SPEC
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
_TSPIdentifiers _desc1;
_TSPType_specifier _desc2;
POSITION _AT_pos;
};

struct _TPATTR_DECL_CONST_TYPE_CONST
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
TreeNodePtr _ATtree;
_TSPIdentifiers _desc1;
_TSPType_constructor _desc2;
POSITION _AT_pos;
};

struct _TPATTR_DECL_TYPE_CONST
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
TreeNodePtr _ATtree;
_TSPIdentifiers _desc1;
_TSPType_constructor _desc2;
POSITION _AT_pos;
};

struct _TPATTR_DECL_CONST_EXP
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
TreeNodePtr _ATtree;
_TSPAttribute_specification _desc1;
_TSPExpression _desc2;
POSITION _AT_pos;
};

struct _TPATTR_DECL_EXP
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
TreeNodePtr _ATtree;
_TSPAttribute_specification _desc1;
_TSPExpression _desc2;
POSITION _AT_pos;
};

struct _TPATTR_DECL
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
TreeNodePtr _ATtree;
_TSPAttribute_specification _desc1;
POSITION _AT_pos;
};

struct _TPATTR_ACCESS_SH_RO
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPATTR_ACCESS_RO
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPATTR_ACCESS_SH
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPFEATURE_STREAM
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsAttributeDecl;
_TSPMethod_decl _desc1;
POSITION _AT_pos;
};

struct _TPFEATURE_METH
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsAttributeDecl;
_TSPMethod_decl _desc1;
POSITION _AT_pos;
};

struct _TPFEATURE_ATT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsAttributeDecl;
_TSPAttribute_declaration _desc1;
POSITION _AT_pos;
};

struct _TPFEATURE_ATT_ACC
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsAttributeDecl;
_TSPAttribute_access_type _desc1;
_TSPAttribute_declaration _desc2;
POSITION _AT_pos;
};

struct _TPFEATURE_DECL_PRIV
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPFeature _desc1;
POSITION _AT_pos;
};

struct _TPFEATURE_DECL
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPFeature _desc1;
POSITION _AT_pos;
};

struct _TPFEATURE_DECLS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLST_Feature_declarations _desc1;
POSITION _AT_pos;
};

struct _TPFEATURE_ID_USE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATTERM_1;
};

struct _TPFEATURE_SPEC_STREAM
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPFeature_id_use _desc1;
_TSPMethod_specification _desc2;
};

struct _TPFEATURE_SPEC
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPFeature_id_use _desc1;
_TSPMethod_specification _desc2;
};

struct _TPIDENT_MOD
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATTERM_1;
};

struct _TPMODIFICATION_NAME
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPFeature_specification _desc1;
_TSPIdent_mod _desc2;
POSITION _AT_pos;
};

struct _TPMODIFICATION_OUT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPFeature_specification _desc1;
POSITION _AT_pos;
};

struct _TPMODIFICATION_ONLY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPFeature_specification _desc1;
POSITION _AT_pos;
};

struct _TPMODIFICATIONS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLST_Modifications _desc1;
};

struct _TPINHERITANCE_INC_ONLY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _AT_const120;
int _ATIsOnly;
int _ATIsPrivate;
int _ATIsSubType;
DefTableKey _ATKey;
DefTableKey _ATBoundsFrom;
int _ATNumBounds;
_TSPClass_specifier _desc1;
_TSPModifications _desc2;
POSITION _AT_pos;
};

struct _TPINHERITANCE_INCLUDE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _AT_const120;
int _ATIsOnly;
int _ATIsPrivate;
int _ATIsSubType;
DefTableKey _ATKey;
DefTableKey _ATBoundsFrom;
int _ATNumBounds;
_TSPClass_specifier _desc1;
_TSPModifications _desc2;
POSITION _AT_pos;
};

struct _TPINHERITANCE_LIKE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _AT_const120;
int _ATIsOnly;
int _ATIsPrivate;
int _ATIsSubType;
DefTableKey _ATKey;
DefTableKey _ATBoundsFrom;
int _ATNumBounds;
_TSPClass_specifier _desc1;
_TSPModifications _desc2;
POSITION _AT_pos;
};

struct _TPINHERITANCE_PRIV
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKeyList _AT_const120;
int _ATIsOnly;
int _ATIsPrivate;
int _ATIsSubType;
DefTableKey _ATKey;
DefTableKey _ATBoundsFrom;
int _ATNumBounds;
_TSPInheritance _desc1;
POSITION _AT_pos;
};

struct _TPINHERITANCES_LST
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPInheritances _desc1;
_TSPInheritance _desc2;
POSITION _AT_pos;
};

struct _TPINHERITANCES_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPDIRECT_STREAM_CALL
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPDesignator _desc1;
_TSPArguments _desc2;
POSITION _AT_pos;
};

struct _TPCOERCION
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPExpression _desc1;
_TSPType_specifier _desc2;
POSITION _AT_pos;
};

struct _TPSTR_CONSTANT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPSTR_CONSTANTS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPStringconstant _desc1;
POSITION _AT_pos;
};

struct _TPSTR_CONSTANTS_LST
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPStringconstant _desc1;
_TSPStringconstants _desc2;
POSITION _AT_pos;
};

struct _TPVALUE_VOID
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPVALUE_SED
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPVALUE_OCT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPVALUE_STR
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPStringconstants _desc1;
POSITION _AT_pos;
};

struct _TPVALUE_CHAR
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPVALUE_BOOL
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPVALUE_FLOAT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPVALUE_INT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPBOUND_METHOD
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPDesignator _desc1;
_TSPArguments _desc2;
POSITION _AT_pos;
};

struct _TPNAMED_EXPRESSION
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPName _desc1;
_TSPExpression _desc2;
POSITION _AT_pos;
};

struct _TPNAMED_EXPRESSIONS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLST_Named_expressions _desc1;
POSITION _AT_pos;
};

struct _TPAGG_ID_DEF
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPAGGREGATE_NAMED
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPAgg_id_def _desc1;
_TSPNamed_expressions _desc2;
POSITION _AT_pos;
};

struct _TPAGGREGATE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPNamed_expressions _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_SAME_AGG
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsInTypedAggregate;
TreeNodePtr _ATtree;
_TSPAggregate _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_SAME
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsInTypedAggregate;
TreeNodePtr _ATtree;
_TSPArguments _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_DES
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsInTypedAggregate;
TreeNodePtr _ATtree;
_TSPDesignator _desc1;
_TSPArguments _desc2;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_AGG
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsInTypedAggregate;
TreeNodePtr _ATtree;
_TSPAggregate _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_CLASS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsInTypedAggregate;
TreeNodePtr _ATtree;
_TSPClass_specifier _desc1;
_TSPArguments _desc2;
POSITION _AT_pos;
};

struct _TPTYPE_CONSTRUCTOR_CL_AGG
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsInTypedAggregate;
TreeNodePtr _ATtree;
_TSPClass_specifier _desc1;
_TSPAggregate _desc2;
POSITION _AT_pos;
};

struct _TPQUAL_FEATURE_ID_USE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPQUALIFICATION_TYPE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPType_specifier _desc1;
_TSPQual_feature_id_use _desc2;
POSITION _AT_pos;
};

struct _TPQUALIFICATION_EXP
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPExpression _desc1;
_TSPQual_feature_id_use _desc2;
POSITION _AT_pos;
};

struct _TPSTD_METHOD_CALL
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPDesignator _desc1;
_TSPArguments _desc2;
POSITION _AT_pos;
};

struct _TPOBJ_ID_USE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPNAME_NOT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_POW
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_MOD
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_DIV
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_QUOTIENT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_STAR
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPNAME_MINUS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_PLUS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_GT_EQ
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_GT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_LT_EQ
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_LT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_EQ
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_QUESTION
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_GRAVE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_TILDE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_STROKE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_BACKSLASH
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_STR_IN
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_STR_OUT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPNAME_OBJ
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPObj_id_use _desc1;
POSITION _AT_pos;
};

struct _TPNAME_LEFT_SQ_BRACKET
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPEXPRESSION_AND
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPExpression _desc1;
_TSPExpression _desc2;
POSITION _AT_pos;
};

struct _TPEXPRESSION_OR
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPExpression _desc1;
_TSPExpression _desc2;
POSITION _AT_pos;
};

struct _TPEXPRESSION_STREAM
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPDirect_stream_call _desc1;
POSITION _AT_pos;
};

struct _TPEXPRESSION_METH
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPStd_method_call _desc1;
POSITION _AT_pos;
};

struct _TPEXPRESSION_COERCION
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPCoercion _desc1;
POSITION _AT_pos;
};

struct _TPEXPRESSION_VALUE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPValue _desc1;
POSITION _AT_pos;
};

struct _TPEXPRESSION_BOUND
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPBound_method _desc1;
POSITION _AT_pos;
};

struct _TPEXPRESSION_CONS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPType_constructor _desc1;
POSITION _AT_pos;
};

struct _TPEXPRESSION_STAR
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPDESIGNATOR_QUAL
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPQualification _desc1;
POSITION _AT_pos;
};

struct _TPDESIGNATOR_METH
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPStd_method_call _desc1;
POSITION _AT_pos;
};

struct _TPDESIGNATOR_EXP
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPExpression _desc1;
_TSPName _desc2;
POSITION _AT_pos;
};

struct _TPDESIGNATOR_NAME
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPName _desc1;
POSITION _AT_pos;
};

struct _TPARGUMENT_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPARGUMENT_INOUT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPDesignator _desc1;
POSITION _AT_pos;
};

struct _TPARGUMENT_OUT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPDesignator _desc1;
POSITION _AT_pos;
};

struct _TPARGUMENT_EXP
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPExpression _desc1;
POSITION _AT_pos;
};

struct _TPARGUMENTS_LST
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPArguments _desc1;
_TSPArgument _desc2;
POSITION _AT_pos;
};

struct _TPARGUMENTS_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPBOUND_EXP
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPExpression _desc1;
POSITION _AT_pos;
};

struct _TPBOUNDS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLST_Bounds _desc1;
POSITION _AT_pos;
};

struct _TPCLASS_ID_USE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATIsRow;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPPARAMETER_KIND_INOUT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPPARAMETER_KIND_OUT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPPARAMETER_KIND_ONCE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPPARAMETER_KIND_IN
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPPARAMETER_TYPE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPParameter_kind _desc1;
_TSPType_specifier _desc2;
POSITION _AT_pos;
};

struct _TPPARAMETER_TYPES
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLST_Parameter_types _desc1;
POSITION _AT_pos;
};

struct _TPMETHOD_SPECIFICATION
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPParameter_types _desc1;
_TSPType_specifier _desc2;
POSITION _AT_pos;
};

struct _TPCLASS_ARGUMENT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPClass_specifier _desc1;
POSITION _AT_pos;
};

struct _TPCLASS_ARGUMENTS_LST
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPClass_arguments _desc1;
_TSPClass_argument _desc2;
POSITION _AT_pos;
};

struct _TPCLASS_ARGUMENTS_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPCLASS_SPECIFIER
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
PTGNode _ATClassArgsPtg;
_TSPClass_id_use _desc1;
_TSPBounds _desc2;
_TSPClass_arguments _desc3;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_STREAM
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
STPtr _ATType;
_TSPMethod_specification _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_SAME
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
STPtr _ATType;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_SAME_POLY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
STPtr _ATType;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_PROC
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
STPtr _ATType;
_TSPMethod_specification _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
STPtr _ATType;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_CL
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
STPtr _ATType;
_TSPClass_specifier _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIER_CL_POLY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
STPtr _ATType;
_TSPClass_specifier _desc1;
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIERS_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
POSITION _AT_pos;
};

struct _TPTYPE_SPECIFIERS_LST
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPType_specifiers _desc1;
_TSPType_specifier _desc2;
POSITION _AT_pos;
};

struct _TPCLASS_PARAMETER
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPClass_specifier _desc1;
_TSPType_specifiers _desc2;
POSITION _AT_pos;
};

struct _TPIDENT_DEF
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKey _ATKey;
int _ATSym;
int _ATIsAttributeDecl;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPBOUND_IDENTIFIER_STAR
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
int _ATIsAttributeDecl;
POSITION _AT_pos;
};

struct _TPBOUND_IDENTIFIER
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
STPtr _ATType;
int _ATIsAttributeDecl;
_TSPIdent_def _desc1;
POSITION _AT_pos;
};

struct _TPCLASS_PARAMETERS_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPCLASS_PARAMETERS_LST
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPClass_parameters _desc1;
_TSPClass_parameter _desc2;
POSITION _AT_pos;
};

struct _TPCLASS_BOUNDS_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPCLASS_BOUNDS_LST
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
_TSPClass_bounds _desc1;
_TSPBound_identifier _desc2;
POSITION _AT_pos;
};

struct _TPCLASS_ID_DEF
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _ATSym;
DefTableKey _ATKey;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPBUILTIN_OPT_CL
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
InheritanceInfoList _ATInhers_post;
TreeNodePtr _ATtree;
_TSPClass_specifier _desc1;
POSITION _AT_pos;
};

struct _TPBUILTIN_OPT_ID
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
InheritanceInfoList _ATInhers_post;
TreeNodePtr _ATtree;
POSITION _AT_pos;
int _ATTERM_1;
};

struct _TPBUILTIN_OPT
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
InheritanceInfoList _ATInhers_post;
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPBUILTIN_OPT_EMPTY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
InheritanceInfoList _ATInhers_post;
TreeNodePtr _ATtree;
POSITION _AT_pos;
};

struct _TPCLASS_BODY
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
DefTableKey _AT_const125;
_TSPBuiltin_option _desc1;
_TSPInheritances _desc2;
_TSPFeature_declarations _desc3;
POSITION _AT_pos;
};

struct _TPCLASS_HEAD
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
int _AT_const123;
_TSPClass_id_def _desc1;
_TSPClass_bounds _desc2;
_TSPClass_parameters _desc3;
POSITION _AT_pos;
};

struct _TPCLASS_ATTRIBUTE_VA
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
IntSet _ATKindSet;
POSITION _AT_pos;
};

struct _TPCLASS_ATTRIBUTE_EX
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
IntSet _ATKindSet;
POSITION _AT_pos;
};

struct _TPCLASS_ATTRIBUTE
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
IntSet _ATKindSet;
POSITION _AT_pos;
};

struct _TPCLASS_ATTRIBUTE_ABVA
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
IntSet _ATKindSet;
POSITION _AT_pos;
};

struct _TPCLASS_ATTRIBUTE_AB
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
TreeNodePtr _ATtree;
IntSet _ATKindSet;
POSITION _AT_pos;
};

struct _TPCLASS_DECLARATION
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
Environment _ATInhEnv;
IntSet _ATKindSet;
TreeNodePtr _ATBuiltinTree;
TreeNodePtr _ATBoundsTree;
DefTableKey _ATKey;
_TSPClass_attribute _desc1;
_TSPClass_head _desc2;
_TSPClass_body _desc3;
POSITION _AT_pos;
};

struct _TPCLASS_DECLARATIONS
#ifdef __cplusplus
	: public NODEPTR_struct {
#else
{
_NODECOMMON
#endif
_TSPLST_Class_declarations _desc1;
POSITION _AT_pos;
};

#undef _NODECOMMON
#endif
