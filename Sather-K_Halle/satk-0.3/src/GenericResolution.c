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
    
#include "GenericResolution.h"

ArgumentInfo NewArgumentInfo(TreeNodePtr node, DefTableKeyList list) 
{
  if (gen_stack_initialized == 0)
  {
    obstack_init(&genstack);
    gen_stack_initialized = 1;
  }

  ArgumentInfo newinfo = (ArgumentInfo) obstack_alloc(&genstack, sizeof(struct
  ArgumentParameter));

  newinfo->argument = node;
  newinfo->usedParams = list;

  return newinfo;
}

GenericInfo NewGenericInfo(ArgumentInfoList list, DefTableKey k) 
{
  if (gen_stack_initialized == 0)
  {
    obstack_init(&genstack);
    gen_stack_initialized = 1;
  }

 GenericInfo newinfo = (GenericInfo) obstack_alloc(&genstack, sizeof(struct
  GenericParameter));

  newinfo->arguments = list;
  newinfo->usingClass = k;

  return newinfo;
}

int UsesClassParams(ArgumentInfoList list) 
{
  while (list != NULLArgumentInfoList)
  {
    if (HeadArgumentInfoList(list)->usedParams != NULLDefTableKeyList )
      return 1;
    list = TailArgumentInfoList(list);  
  }

  return 0;
}

int CompareTreeNodePtrList(TreeNodePtrList l1, TreeNodePtrList l2)
{
  return CompTreeNodePtrList(l1, l2, NotEqualsTree);
}

int DoGenericInstantiation(DefTableKey k) {

  GenericInfoList genlist, selflist;
  ArgumentInfoList arglist;
  DefTableKey instantiatingClass;
  DefTableKeyList params;
  ArgumentInfo arginfo;
  TreeNodePtrList curinst;
  ArgumentInfoList newarglist;
  ArgumentInfo newarginfo;
  TreeNodePtrListList instlist, templist;
  DefTableKeyList instparams, it;
  int instCount, i, is_first_pass, num_instance_created, before, after;

  if (GetSym(k, 0) == MakeName("ARRAY") || GetSym(k, 0) == MakeName("ARR"))
  {
    it = GetArrayDefs(k, NULLDefTableKeyList);

    while (it != NULLDefTableKeyList)
    {
      DoGenericInstantiation(HeadDefTableKeyList(it));
      it = TailDefTableKeyList(it);
    }
    return 1;
  }

  genlist = GetGenInfos(k, NULLGenericInfoList);
  is_first_pass = 0;
  num_instance_created = 0;

  if (GetGenStatus(k, 0) == GEN_STARTED) {
    printf("ERROR: Detected cyclic dependency of class parameters\n");
    return 0;
  }

  if (GetGenStatus(k,0) != GEN_FINISHED) {
    is_first_pass = 1; 
    selflist = NULLGenericInfoList;
    ResetGenStatus(k, GEN_STARTED);
  }

  while (genlist != NULLGenericInfoList)
  {
    params = GetClassParams(k, NULLDefTableKeyList);
    arglist = HeadGenericInfoList(genlist)->arguments;
    instantiatingClass = HeadGenericInfoList(genlist)->usingClass;
    
    if (LengthArgumentInfoList(arglist) != LengthDefTableKeyList(params))
    {
      printf("unexpected error in resolution of generic parameters\n");
      return 2;
    }
    
    if (UsesClassParams(arglist))
    {
      if (instantiatingClass == k && is_first_pass)
      {
        selflist = AppElGenericInfoList(selflist, HeadGenericInfoList(genlist));
      }
      else
      {
        if (GetGenStatus(instantiatingClass, 0) != GEN_FINISHED) 
        {
          if (DoGenericInstantiation(instantiatingClass) == 0)
          {
            fprintf(stderr, 
           "ERROR: class involved in cyclic parameter dependency: %s\n", 
           StringTable(GetSym(instantiatingClass, 0)));
           return 0;
          }
        }
      
        instCount = LengthTreeNodePtrListList(
          GetInstances(instantiatingClass, NULLTreeNodePtrListList));
        instlist = GetInstances(instantiatingClass, NULLTreeNodePtrListList);

        while (instlist != NULLTreeNodePtrListList)
        {
          curinst = HeadTreeNodePtrListList(instlist);
          instparams = GetClassParams(instantiatingClass, NULLDefTableKeyList);
          newarglist = NULLArgumentInfoList;
          arglist = HeadGenericInfoList(genlist)->arguments;

          while (arglist != NULLArgumentInfoList)
          {
            newarginfo = NewArgumentInfo(CopyTree(HeadArgumentInfoList(arglist)->argument),
              NULLDefTableKeyList);
            it = HeadArgumentInfoList(arglist)->usedParams;

            while ( it != NULLDefTableKeyList)
            {
              for (i=1; i<= LengthDefTableKeyList(instparams); i++)
              {
                if(IthElemDefTableKeyList(instparams, i) == HeadDefTableKeyList(it)) 
                  ReplaceMark(ADDRESS(newarginfo->argument), HeadDefTableKeyList(it),
                  IthElemTreeNodePtrList(curinst, i));
                  
              }
              it = TailDefTableKeyList(it);
            }
          
            newarglist = AppElArgumentInfoList(newarglist, newarginfo);
            arglist = TailArgumentInfoList(arglist);
          }
        
          genlist = AppElGenericInfoList(genlist, NewGenericInfo(newarglist,
          instantiatingClass));
          instlist = TailTreeNodePtrListList(instlist);
        }
      }
    }
    else
    {
      curinst = NULLTreeNodePtrList;
      
      while (arglist != NULLArgumentInfoList)
      {
        arginfo = HeadArgumentInfoList(arglist);
        curinst = AppElTreeNodePtrList(curinst, arginfo->argument);
        arglist = TailArgumentInfoList(arglist);
      }
      
      templist= GetInstances(k, NULLTreeNodePtrListList);
      before = LengthTreeNodePtrListList(templist);
      templist = AddToSetTreeNodePtrListList(curinst, 
              templist, CompareTreeNodePtrList);
      after = LengthTreeNodePtrListList(templist);        
      num_instance_created += after - before;

      ResetInstances(k,templist);
    }
    genlist = TailGenericInfoList(genlist);
  }

  ResetGenStatus(k, GEN_FINISHED);
  
  if (is_first_pass)
    ResetGenInfos(k, selflist);

  if (num_instance_created != 0)
    DoGenericInstantiation(k);
  
  return 1;
}

TreeNodePtr ReplaceClassParams(DefTableKey k, TreeNodePtr class, TreeNodePtr class_decls, 
TreeNodePtrListList instlist, DefTableKeyList params, CoordPtr pos) 
{
  TreeNodePtrList inst;
  TreeNodePtr cur;
  DefTableKeyList it;

  if (GetSym(k, 0) == MakeName("ARRAY") || GetSym(k, 0) == MakeName("ARR"))
  {
    it = GetArrayDefs(k, NULLDefTableKeyList);

    while (it != NULLDefTableKeyList)
    {
      cur = BuildArrayClass(k, HeadDefTableKeyList(it), CopyTree(class), pos);
      
      class_decls = ReplaceClassParams(HeadDefTableKeyList(it), cur, class_decls,
        GetInstances(HeadDefTableKeyList(it), NULLTreeNodePtrListList), params, pos);

      it = TailDefTableKeyList(it);
    }
    
    return class_decls;
  }

  if (instlist == NULLTreeNodePtrListList || params == NULLDefTableKeyList)
    class_decls = NewTreeNodeRhs_2_0(pos, Mk2CLASS_DECLARATIONS, class_decls, class, NoKey); 

  while (instlist != NULLTreeNodePtrListList)
  {
    inst = HeadTreeNodePtrListList(instlist); 
    cur = CopyTree(class);
    it = params;

    while (inst != NULLTreeNodePtrList)
    {
      ReplaceMark(&cur, HeadDefTableKeyList(it), HeadTreeNodePtrList(inst));        
      it = TailDefTableKeyList(it);
      inst = TailTreeNodePtrList(inst);
    }
    instlist = TailTreeNodePtrListList(instlist);
    class_decls = NewTreeNodeRhs_2_0(pos, Mk2CLASS_DECLARATIONS, class_decls, cur, NoKey); 
  }

  return class_decls;
}

TreeNodePtr BuildArrayClass(DefTableKey arr_key, DefTableKey inst_key, TreeNodePtr class,
  CoordPtr pos)
{
  int num_bounds, i, CLRBoundsSym;  
  char buf[127]; 
  CharPtr temp;
  TreeNodePtr bounds_tree = NewTreeNodeRhs_0_0(pos, MkCLASS_BOUNDS_EMPTY, NoKey);
  TreeNodePtr aget_tree, param_tree, load_args_tree, body_tree, aset_tree;
  DefTableKey class_param_key;

  ReplaceMark(&class, arr_key, NewTreeNodeRhs_0_1(pos, MkCLASS_ID_DEF,
    GetSym(inst_key, 0), NoKey));

  num_bounds = GetBoundCnt(inst_key, 0);

  for (i=0; i<num_bounds; i++)
  {
    sprintf(buf, "asize%d", i);
    bounds_tree = NewTreeNodeRhs_2_0(pos, MkCLASS_BOUNDS_LST, bounds_tree,
      NewTreeNodeRhs_1_0(pos, MkBOUND_IDENTIFIER,
        NewTreeNodeRhs_0_1(pos, MkIDENT_DEF, MakeName(buf),
          NoKey), NoKey), NoKey);
  }

  ReplaceMark(&class, GetBoundsMark(arr_key, NoKey), bounds_tree);

  class_param_key = HeadDefTableKeyList(GetClassParams(arr_key, NULLDefTableKeyList));

  param_tree = NULL;
  for (i=0; i<num_bounds; i++)
  {
    sprintf(buf, "i%d", i);
    param_tree = NewTreeNodeRhs_2_0(pos, Mk2PARAMETERS, param_tree,
      NewTreeNodeRhs_2_0(pos, MkPARAMETER_SPEC,
        NewTreeNodeRhs_0_0(pos, MkPARAMETER_KIND_IN, NoKey),
        NewTreeNodeRhs_2_0(pos, MkATTR_SPEC,
          NewTreeNodeRhs_1_0(pos, MkIDENTIFIERS,
            NewTreeNodeRhs_0_1(pos, MkIDENT_DEF, MakeName(buf), NoKey), NoKey),
          NewTreeNodeRhs_1_0(pos, MkTYPE_SPECIFIER_CL,
            NewTreeNodeRhs_3_0(pos, MkCLASS_SPECIFIER, 
              NewTreeNodeRhs_0_1(pos, MkCLASS_ID_USE, MakeName("INT"), NoKey),
              NewTreeNodeRhs_1_0(pos, MkBOUNDS, NULL, NoKey),
              NewTreeNodeRhs_0_0(pos, MkCLASS_ARGUMENTS_EMPTY, 
      NoKey), NoKey), NoKey), NoKey), NoKey), NoKey);
  }
  
  bounds_tree = NULL;
  temp = "::Get(";
  for (i=0; i<num_bounds; i++)
  {
    bounds_tree = NewTreeNodeRhs_2_0(pos, Mk2BOUNDS, bounds_tree,
      NewTreeNodeRhs_1_0(pos, MkBOUND_EXP,
        NewTreeNodeRhs_0_1(pos, MkEXPRESSION_STAR, MakeName("*"),
          NoKey), NoKey), NoKey);
    if (i != 0)
      temp = CatStrStr(temp, ",");

    temp = CatStrStr(temp, "int32");
  }
  temp = CatStrStr(temp, ")");
    
  sprintf(buf, "[");
  for (i=1; i<num_bounds; i++)
    sprintf(buf, "%s", CatStrStr(buf, ","));
  sprintf(buf, "%s", CatStrStr(buf, "]"));

  CLRBoundsSym = MakeName(buf);

  load_args_tree = 
    NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
    NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
    NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
    NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
    NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
    NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
      NewTreeNodeRhs_0_0(pos, MkBUILTIN_INSTS_EMPTY, NoKey),
      NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, 
        MakeName("ldarg 0"), NoKey), NoKey),
      NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, 
        MakeName("ldfld "), NoKey), NoKey),
      NewTreeNodeRhs_1_0(pos, MkBUILTIN_INST_TYPE, 
        NewTreeNodeRhs_1_0(pos, MkTYPE_SPECIFIER_CL,
          NewTreeNodeRhs_3_0(pos, MkCLASS_SPECIFIER, 
            NewTreeNodeRhs_0_1(pos, MkCLASS_ID_USE, MakeName("T"), NoKey),
            NewTreeNodeRhs_1_0(pos, MkBOUNDS, NULL, NoKey),
            NewTreeNodeRhs_0_0(pos, MkCLASS_ARGUMENTS_EMPTY, NoKey),
          class_param_key), NoKey), NoKey), NoKey),
      NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, 
        CLRBoundsSym, NoKey), NoKey),
      NewTreeNodeRhs_1_0(pos, MkBUILTIN_INST_TYPE, 
        NewTreeNodeRhs_0_0(pos, MkTYPE_SPECIFIER_SAME, NoKey), NoKey), NoKey),
      NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, 
        MakeName("::_val"), NoKey), NoKey);

  
  for (i=0; i<num_bounds; i++)
  {
    sprintf(buf, "ldarg i%d", i);
    load_args_tree = 
      NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
      NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
        load_args_tree,
        NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, 
          MakeName(buf), NoKey), NoKey),
        NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, 
          MakeName("call int32 INT::_valueOut(valuetype 'INT')"), NoKey), NoKey);
  }
 
        if (num_bounds > 1) {
                body_tree = NewTreeNodeRhs_1_0(pos, MkMETHOD_BODY_BUILTIN,
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                                load_args_tree,
                                NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, 
                                        MakeName("call"), NoKey), NoKey),
                                NewTreeNodeRhs_1_0(pos, MkBUILTIN_INST_TYPE, 
                                        NewTreeNodeRhs_1_0(pos, MkTYPE_SPECIFIER_CL,
                                                NewTreeNodeRhs_3_0(pos, MkCLASS_SPECIFIER, 
                                                        NewTreeNodeRhs_0_1(pos, MkCLASS_ID_USE, MakeName("T"), NoKey),
                                                        NewTreeNodeRhs_1_0(pos, MkBOUNDS, NULL, NoKey),
                                                        NewTreeNodeRhs_0_0(pos, MkCLASS_ARGUMENTS_EMPTY, NoKey),
                                                class_param_key), NoKey), NoKey), NoKey),
                                NewTreeNodeRhs_1_0(pos, MkBUILTIN_INST_TYPE, 
                                        NewTreeNodeRhs_1_0(pos, MkTYPE_SPECIFIER_CL,
                                                NewTreeNodeRhs_3_0(pos, MkCLASS_SPECIFIER, 
                                                        NewTreeNodeRhs_0_1(pos, MkCLASS_ID_USE, MakeName("T"), NoKey),
                                                        NewTreeNodeRhs_1_0(pos, MkBOUNDS, NULL, NoKey),
                                                        NewTreeNodeRhs_0_0(pos, MkCLASS_ARGUMENTS_EMPTY, NoKey),
                                                class_param_key), NoKey), NoKey), NoKey),
                                NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, 
                                        CLRBoundsSym, NoKey), NoKey),
                                NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, 
                                        MakeName(temp), NoKey), NoKey),
                                NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, 
                                        MakeName("ret"), NoKey), NoKey), NoKey);
  } else
                body_tree = NewTreeNodeRhs_1_0(pos, MkMETHOD_BODY_BUILTIN,
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                                load_args_tree,
                                NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, 
                                        MakeName("ldelem "), NoKey), NoKey),
                                NewTreeNodeRhs_1_0(pos, MkBUILTIN_INST_TYPE, 
                                        NewTreeNodeRhs_1_0(pos, MkTYPE_SPECIFIER_CL,
                                                NewTreeNodeRhs_3_0(pos, MkCLASS_SPECIFIER, 
                                                        NewTreeNodeRhs_0_1(pos, MkCLASS_ID_USE, MakeName("T"), NoKey),
                                                        NewTreeNodeRhs_1_0(pos, MkBOUNDS, NULL, NoKey),
                                                        NewTreeNodeRhs_0_0(pos, MkCLASS_ARGUMENTS_EMPTY, NoKey),
                                                class_param_key), NoKey), NoKey), NoKey),
                                NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, 
                                        MakeName("ret"), NoKey), NoKey), NoKey);


  aget_tree = NewTreeNodeRhs_4_0(pos, MkMETHOD_DECL,
    NewTreeNodeRhs_0_1(pos, MkMETHOD_IDENT_DEF, MakeName("aget"), NoKey),
    NewTreeNodeRhs_1_0(pos, MkPARAMETERS, param_tree, NoKey),
    NewTreeNodeRhs_1_0(pos, MkTYPE_SPECIFIER_CL,
      NewTreeNodeRhs_3_0(pos, MkCLASS_SPECIFIER, 
        NewTreeNodeRhs_0_1(pos, MkCLASS_ID_USE, MakeName("T"), NoKey),
        NewTreeNodeRhs_1_0(pos, MkBOUNDS, NULL, NoKey),
        NewTreeNodeRhs_0_0(pos, MkCLASS_ARGUMENTS_EMPTY, NoKey), 
      class_param_key), NoKey),
    body_tree, NoKey);

  ReplaceMark(&class, GetAgetMark(arr_key, NoKey), aget_tree);

  param_tree = NewTreeNodeRhs_2_0(pos, Mk2PARAMETERS, param_tree,
    NewTreeNodeRhs_2_0(pos, MkPARAMETER_SPEC,
      NewTreeNodeRhs_0_0(pos, MkPARAMETER_KIND_IN, NoKey),
      NewTreeNodeRhs_2_0(pos, MkATTR_SPEC,
        NewTreeNodeRhs_1_0(pos, MkIDENTIFIERS,
          NewTreeNodeRhs_0_1(pos, MkIDENT_DEF, MakeName("v"), NoKey), NoKey),
        NewTreeNodeRhs_1_0(pos, MkTYPE_SPECIFIER_CL,
          NewTreeNodeRhs_3_0(pos, MkCLASS_SPECIFIER, 
            NewTreeNodeRhs_0_1(pos, MkCLASS_ID_USE, MakeName("T"), NoKey),
            NewTreeNodeRhs_1_0(pos, MkBOUNDS, NULL, NoKey),
            NewTreeNodeRhs_0_0(pos, MkCLASS_ARGUMENTS_EMPTY, NoKey), 
    class_param_key), NoKey), NoKey), NoKey), NoKey);
  
  if (num_bounds > 1) {
                temp = "::Set(";
                for (i=0; i<num_bounds; i++)
                {
                        if (i != 0)
                                temp = CatStrStr(temp, ",");

                        temp = CatStrStr(temp, "int32");
                }
                temp = CatStrStr(temp, ",");
  
                body_tree = NewTreeNodeRhs_1_0(pos, MkMETHOD_BODY_BUILTIN,
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                                load_args_tree,
                                NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, MakeName("ldarg v"), NoKey), NoKey),
                                NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, MakeName("call"), NoKey), NoKey),
                                NewTreeNodeRhs_1_0(pos, MkBUILTIN_INST_TYPE, 
                                        NewTreeNodeRhs_0_0(pos, MkTYPE_SPECIFIER_EMPTY, NoKey), NoKey), NoKey),
                                NewTreeNodeRhs_1_0(pos, MkBUILTIN_INST_TYPE, 
                                        NewTreeNodeRhs_1_0(pos, MkTYPE_SPECIFIER_CL,
                                                NewTreeNodeRhs_3_0(pos, MkCLASS_SPECIFIER, 
                                                        NewTreeNodeRhs_0_1(pos, MkCLASS_ID_USE, MakeName("T"), NoKey),
                                                        NewTreeNodeRhs_1_0(pos, MkBOUNDS, NULL, NoKey),
                                                        NewTreeNodeRhs_0_0(pos, MkCLASS_ARGUMENTS_EMPTY, NoKey), class_param_key), NoKey), NoKey), NoKey),
                                NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, CLRBoundsSym, NoKey), NoKey),
                                NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, MakeName(temp), NoKey), NoKey),
                                NewTreeNodeRhs_1_0(pos, MkBUILTIN_INST_TYPE, 
                                        NewTreeNodeRhs_1_0(pos, MkTYPE_SPECIFIER_CL,
                                                NewTreeNodeRhs_3_0(pos, MkCLASS_SPECIFIER, 
                                                        NewTreeNodeRhs_0_1(pos, MkCLASS_ID_USE, MakeName("T"), NoKey),
                                                        NewTreeNodeRhs_1_0(pos, MkBOUNDS, NULL, NoKey),
                                                        NewTreeNodeRhs_0_0(pos, MkCLASS_ARGUMENTS_EMPTY, NoKey), class_param_key), NoKey), NoKey), NoKey),
                                NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, MakeName(")"), NoKey), NoKey),
                                NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, MakeName("ret"), NoKey), NoKey), NoKey);
        } else
                body_tree = NewTreeNodeRhs_1_0(pos, MkMETHOD_BODY_BUILTIN,
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                        NewTreeNodeRhs_2_0(pos, MkBUILTIN_INSTS, 
                                load_args_tree,
                                NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, MakeName("ldarg v"), NoKey), NoKey),
                                NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, MakeName("stelem "), NoKey), NoKey),
                                NewTreeNodeRhs_1_0(pos, MkBUILTIN_INST_TYPE, 
                                        NewTreeNodeRhs_1_0(pos, MkTYPE_SPECIFIER_CL,
                                                NewTreeNodeRhs_3_0(pos, MkCLASS_SPECIFIER, 
                                                        NewTreeNodeRhs_0_1(pos, MkCLASS_ID_USE, MakeName("T"), NoKey),
                                                        NewTreeNodeRhs_1_0(pos, MkBOUNDS, NULL, NoKey),
                                                        NewTreeNodeRhs_0_0(pos, MkCLASS_ARGUMENTS_EMPTY, NoKey), class_param_key), NoKey), NoKey), NoKey),
                                NewTreeNodeRhs_0_1(pos, MkBUILTIN_INST_STR, MakeName("ret"), NoKey), NoKey), NoKey);

  
  aset_tree = NewTreeNodeRhs_4_0(pos, MkMETHOD_DECL,
    NewTreeNodeRhs_0_1(pos, MkMETHOD_IDENT_DEF, MakeName("aset"), NoKey),
    NewTreeNodeRhs_1_0(pos, MkPARAMETERS, param_tree, NoKey),
    NewTreeNodeRhs_0_0(pos, MkTYPE_SPECIFIER_EMPTY, NoKey),
    body_tree, NoKey);

  ReplaceMark(&class, GetAsetMark(arr_key, NoKey), aset_tree);
  
  return class;
}
