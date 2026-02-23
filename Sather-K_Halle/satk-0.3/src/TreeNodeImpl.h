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
#include "nodeptr.h"
#include "err.h"
#include "eliproto.h"
#include "obstack.h"
#include "deftbl.h"
#include "TreeNode.h"

#ifndef TREE_NODE_IMPL
#define TREE_NODE_IMPL

#define EMPTY_NODE 0
#define NODE_0_0 1
#define NODE_1_0 2
#define NODE_2_0 3
#define NODE_3_0 4
#define NODE_4_0 5
#define NODE_0_1 6

static Obstack treestack;
static int tree_stack_initialized = 0;

TreeNodePtr NewTreeNodeRhs_0_0(CoordPtr pos, MkFct_0_0 f, DefTableKey m);
TreeNodePtr NewTreeNodeRhs_1_0(CoordPtr pos, MkFct_1_0 f, TreeNodePtr n1, DefTableKey m);
TreeNodePtr NewTreeNodeRhs_2_0(CoordPtr pos, MkFct_2_0 f, TreeNodePtr n1, TreeNodePtr n2,
DefTableKey m);
TreeNodePtr NewTreeNodeRhs_3_0(CoordPtr pos, MkFct_3_0 f, TreeNodePtr n1, TreeNodePtr n2,
TreeNodePtr n3, DefTableKey m);
TreeNodePtr NewTreeNodeRhs_4_0(CoordPtr pos, MkFct_4_0 f, TreeNodePtr n1, TreeNodePtr n2,
TreeNodePtr n3, TreeNodePtr n4, DefTableKey m);
TreeNodePtr NewTreeNodeRhs_0_1(CoordPtr pos, MkFct_0_1 f, int t, DefTableKey m);

static struct TreeNode empty_node = {0, EMPTY_NODE, NULL};

NODEPTR BuildTree(TreeNodePtr node);
TreeNodePtr CopyTree(TreeNodePtr node);
void ReplaceMark(TreeNodePtr *tree, DefTableKey search, TreeNodePtr replace);
int EqualsTree(TreeNodePtr a, TreeNodePtr b);
int NotEqualsTree(TreeNodePtr a, TreeNodePtr b);
int IsFctLISTOF(MkFct_1_0 f);
int IsFct2LISTOF(MkFct_2_0 f);
void PropagateEmptyNodes(TreeNodePtr tree);
void ReplaceFct_1_0(TreeNodePtr node, MkFct_1_0 search, MkFct_1_0 replace);

#endif
