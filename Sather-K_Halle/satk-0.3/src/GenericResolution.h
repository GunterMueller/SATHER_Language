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
    
#include "treecon.h"
#include "obstack.h"
#include "treecon.h"
#include "DefTableKeyList.h"
#include "ArgumentParameter.h"
#include "ArgumentInfoList.h"
#include "GenericParameter.h"
#include "GenericInfoList.h"
#include "TreeNode.h"
#include "TreeNodeImpl.h"
#include "TreeNodePtrList.h"
#include "TreeNodePtrListList.h"

#ifndef GENERIC_RESOLUTION
#define GENERIC_RESOLUTION

#define GEN_STARTED 1
#define GEN_FINISHED 2

static Obstack genstack;
static int gen_stack_initialized = 0;

char error_message[255];

ArgumentInfo NewArgumentInfo(TreeNodePtr node, DefTableKeyList list);
GenericInfo NewGenericInfo(ArgumentInfoList list, DefTableKey k);
int UsesClassParams(ArgumentInfoList list);
int DoGenericInstantiation(DefTableKey k);
int CompareTreeNodePtrList(TreeNodePtrList l1, TreeNodePtrList l2);

TreeNodePtr ReplaceClassParams(DefTableKey k, TreeNodePtr class, 
  TreeNodePtr class_decls, TreeNodePtrListList instlist, DefTableKeyList params, 
  CoordPtr pos); 

TreeNodePtr BuildArrayClass(DefTableKey arr_key, DefTableKey inst_key, TreeNodePtr class,
  CoordPtr pos);
#endif
