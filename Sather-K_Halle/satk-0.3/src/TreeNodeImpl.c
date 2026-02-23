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
    
#include "TreeNodeImpl.h"

TreeNodePtr NewTreeNodeRhs_0_0(CoordPtr pos, MkFct_0_0 f, DefTableKey m) { 
  if (tree_stack_initialized == 0)
  {
    obstack_init(&treestack);
    tree_stack_initialized = 1;
  }

  TreeNode_0_0Ptr newnode = 
  (TreeNode_0_0Ptr) obstack_alloc(&treestack, sizeof(struct TreeNode_0_0)); 
  
  newnode->pos = pos;
  newnode->kind = NODE_0_0;
  newnode->const_fct = f;
  newnode->mark = m;
  return (TreeNodePtr) newnode;
}

TreeNodePtr 
NewTreeNodeRhs_1_0(CoordPtr pos, MkFct_1_0 f, TreeNodePtr n1, DefTableKey m) {
  if (tree_stack_initialized == 0)
  {
    obstack_init(&treestack);
    tree_stack_initialized = 1;
  }

  TreeNode_1_0Ptr newnode = 
  (TreeNode_1_0Ptr) obstack_alloc(&treestack, sizeof(struct TreeNode_1_0)); 
  
  newnode->pos = pos;
  newnode->kind = NODE_1_0;
  newnode->const_fct = f;
  newnode->mark = m;
  newnode->child1 = n1;

  return (TreeNodePtr) newnode;
}


TreeNodePtr 
NewTreeNodeRhs_2_0(CoordPtr pos, MkFct_2_0 f, TreeNodePtr n1, TreeNodePtr n2, DefTableKey m) {
  if (tree_stack_initialized == 0)
  {
    obstack_init(&treestack);
    tree_stack_initialized = 1;
  }

  TreeNode_2_0Ptr newnode = 
  (TreeNode_2_0Ptr) obstack_alloc(&treestack, sizeof(struct TreeNode_2_0)); 
  
  newnode->pos = pos;
  newnode->kind = NODE_2_0;
  newnode->const_fct = f;
  newnode->mark = m;
  newnode->child1 = n1;
  newnode->child2 = n2;

  return (TreeNodePtr) newnode;
}

TreeNodePtr NewTreeNodeRhs_3_0(CoordPtr pos, MkFct_3_0 f, TreeNodePtr n1, TreeNodePtr n2,
TreeNodePtr n3, DefTableKey m) { 
  if (tree_stack_initialized == 0)
  {
    obstack_init(&treestack);
    tree_stack_initialized = 1;
  }

  TreeNode_3_0Ptr newnode = 
  (TreeNode_3_0Ptr) obstack_alloc(&treestack, sizeof(struct TreeNode_3_0)); 
  
  newnode->pos = pos;
  newnode->kind = NODE_3_0;
  newnode->const_fct = f;
  newnode->mark = m;
  newnode->child1 = n1;
  newnode->child2 = n2;
  newnode->child3 = n3;

  return (TreeNodePtr) newnode;
}

TreeNodePtr NewTreeNodeRhs_4_0(CoordPtr pos, MkFct_4_0 f, TreeNodePtr n1, TreeNodePtr n2,
TreeNodePtr n3, TreeNodePtr n4, DefTableKey m) { 
  if (tree_stack_initialized == 0)
  {
    obstack_init(&treestack);
    tree_stack_initialized = 1;
  }

  TreeNode_4_0Ptr newnode = 
  (TreeNode_4_0Ptr) obstack_alloc(&treestack, sizeof(struct TreeNode_4_0)); 
  
  newnode->pos = pos;
  newnode->kind = NODE_4_0;
  newnode->const_fct = f;
  newnode->mark = m;
  newnode->child1 = n1;
  newnode->child2 = n2;
  newnode->child3 = n3;
  newnode->child4 = n4;

  return (TreeNodePtr) newnode;
}

TreeNodePtr NewTreeNodeRhs_0_1(CoordPtr pos, MkFct_0_1 f, int t, DefTableKey m) {
  if (tree_stack_initialized == 0)
  {
    obstack_init(&treestack);
    tree_stack_initialized = 1;
  }

  TreeNode_0_1Ptr newnode = 
  (TreeNode_0_1Ptr) obstack_alloc(&treestack, sizeof(struct TreeNode_0_1)); 
  
  newnode->pos = pos;
  newnode->kind = NODE_0_1;
  newnode->const_fct = f;
  newnode->mark = m;
  newnode->term = t;

  return (TreeNodePtr) newnode;
}

NODEPTR BuildTree(TreeNodePtr node) {
  if (node == NULL)
  {
    return NULLNODEPTR;
  }

  switch (node->kind) {
  case NODE_0_0:
    return ((TreeNode_0_0Ptr) node)->const_fct(
      ((TreeNode_0_0Ptr) node)->pos); 
  
  case NODE_1_0:
    return ((TreeNode_1_0Ptr) node)->const_fct(
      ((TreeNode_1_0Ptr) node)->pos,
      BuildTree(((TreeNode_1_0Ptr) node)->child1)
      );  

  case NODE_2_0:
    return ((TreeNode_2_0Ptr) node)->const_fct(
      ((TreeNode_2_0Ptr) node)->pos,
      BuildTree(((TreeNode_2_0Ptr) node)->child1),
      BuildTree(((TreeNode_2_0Ptr) node)->child2)); 

  case NODE_3_0:
    return ((TreeNode_3_0Ptr) node)->const_fct(
      ((TreeNode_3_0Ptr) node)->pos,
      BuildTree(((TreeNode_3_0Ptr) node)->child1),
      BuildTree(((TreeNode_3_0Ptr) node)->child2),
      BuildTree(((TreeNode_3_0Ptr) node)->child3)); 

  case NODE_4_0:
    return ((TreeNode_4_0Ptr) node)->const_fct(
      ((TreeNode_4_0Ptr) node)->pos,
      BuildTree(((TreeNode_4_0Ptr) node)->child1),
      BuildTree(((TreeNode_4_0Ptr) node)->child2),
      BuildTree(((TreeNode_4_0Ptr) node)->child3),
      BuildTree(((TreeNode_4_0Ptr) node)->child4)); 
  
  case NODE_0_1:
    return ((TreeNode_0_1Ptr) node)->const_fct(
      ((TreeNode_0_1Ptr) node)->pos,
      ((TreeNode_0_1Ptr) node)->term);  
  
  default:
    return NULLNODEPTR;
  }
}

TreeNodePtr CopyTree(TreeNodePtr node) {
  if (node == NULL)
  {
    return NULL;
  }

  switch (node->kind) {
  case NODE_0_0:
    return NewTreeNodeRhs_0_0(((TreeNode_0_0Ptr) node)->pos,
    ((TreeNode_0_0Ptr) node)->const_fct,
    ((TreeNode_0_0Ptr) node)->mark);  
  
  case NODE_1_0:
    return NewTreeNodeRhs_1_0(((TreeNode_1_0Ptr) node)->pos,
    ((TreeNode_1_0Ptr) node)->const_fct,
    CopyTree(((TreeNode_1_0Ptr) node)->child1),
    ((TreeNode_1_0Ptr) node)->mark);  
  
  case NODE_2_0:
    return NewTreeNodeRhs_2_0(((TreeNode_2_0Ptr) node)->pos,
    ((TreeNode_2_0Ptr) node)->const_fct,
    CopyTree(((TreeNode_2_0Ptr) node)->child1),
    CopyTree(((TreeNode_2_0Ptr) node)->child2),
    ((TreeNode_2_0Ptr) node)->mark);  
  
  case NODE_3_0:
    return NewTreeNodeRhs_3_0(((TreeNode_3_0Ptr) node)->pos,
    ((TreeNode_3_0Ptr) node)->const_fct,
    CopyTree(((TreeNode_3_0Ptr) node)->child1),
    CopyTree(((TreeNode_3_0Ptr) node)->child2),
    CopyTree(((TreeNode_3_0Ptr) node)->child3),
    ((TreeNode_3_0Ptr) node)->mark);  

  case NODE_4_0:
    return NewTreeNodeRhs_4_0(((TreeNode_4_0Ptr) node)->pos,
    ((TreeNode_4_0Ptr) node)->const_fct,
    CopyTree(((TreeNode_4_0Ptr) node)->child1),
    CopyTree(((TreeNode_4_0Ptr) node)->child2),
    CopyTree(((TreeNode_4_0Ptr) node)->child3),
    CopyTree(((TreeNode_4_0Ptr) node)->child4),
    ((TreeNode_4_0Ptr) node)->mark);  
  
  case NODE_0_1:
    return NewTreeNodeRhs_0_1(((TreeNode_0_1Ptr) node)->pos,
    ((TreeNode_0_1Ptr) node)->const_fct,
    ((TreeNode_0_1Ptr) node)->term,
    ((TreeNode_0_1Ptr) node)->mark);  
    
  default:
    return &empty_node;
  }
}

void ReplaceMark(TreeNodePtr* tree, DefTableKey search, TreeNodePtr replace)
{
  if (tree == NULL)
    return;

  if ((*tree) == NULL)
    return;

  if ((*tree)->mark == search)
  {
    (*tree) = replace;
    
    return;
  }

  switch ((*tree)->kind) {
  case NODE_0_0:
    return; break;

  case NODE_1_0:
    ReplaceMark(& (((TreeNode_1_0Ptr) (*tree))->child1), search, replace);
    break;  

  case NODE_2_0:
    ReplaceMark(& (((TreeNode_2_0Ptr) (*tree))->child1), search, replace);
    ReplaceMark(& (((TreeNode_2_0Ptr) (*tree))->child2), search, replace);
    break;  
  
  case NODE_3_0:
    ReplaceMark(& (((TreeNode_3_0Ptr) (*tree))->child1), search, replace);
    ReplaceMark(& (((TreeNode_3_0Ptr) (*tree))->child2), search, replace);
    ReplaceMark(& (((TreeNode_3_0Ptr) (*tree))->child3), search, replace);
    break;  
  
  case NODE_4_0:
    ReplaceMark(& (((TreeNode_4_0Ptr) (*tree))->child1), search, replace);
    ReplaceMark(& (((TreeNode_4_0Ptr) (*tree))->child2), search, replace);
    ReplaceMark(& (((TreeNode_4_0Ptr) (*tree))->child3), search, replace);
    ReplaceMark(& (((TreeNode_4_0Ptr) (*tree))->child4), search, replace);
    break;  
    
  case NODE_0_1:
    return; break;
  }
}

int EqualsTree(TreeNodePtr a, TreeNodePtr b) {
  if (a == NULL || b == NULL)
  {
    return (a == NULL && b == NULL);
  }

  if (!(a->kind == b->kind))
    return 0;
  
  switch (a->kind) {
  case NODE_0_0:
    return ( ((TreeNode_0_0Ptr) a)->const_fct == ((TreeNode_0_0Ptr) b)->const_fct );
  
  case NODE_1_0:
    return ( ((TreeNode_1_0Ptr) a)->const_fct == ((TreeNode_1_0Ptr) b)->const_fct )
      && EqualsTree( ((TreeNode_1_0Ptr) a)->child1, ((TreeNode_1_0Ptr) b)->child1);

  case NODE_2_0:
    return ( ((TreeNode_2_0Ptr) a)->const_fct == ((TreeNode_2_0Ptr) b)->const_fct )
      && EqualsTree( ((TreeNode_2_0Ptr) a)->child1, ((TreeNode_2_0Ptr) b)->child1)
      && EqualsTree( ((TreeNode_2_0Ptr) a)->child2, ((TreeNode_2_0Ptr) b)->child2);

  case NODE_3_0:
    return ( ((TreeNode_3_0Ptr) a)->const_fct == ((TreeNode_3_0Ptr) b)->const_fct )
      && EqualsTree( ((TreeNode_3_0Ptr) a)->child1, ((TreeNode_3_0Ptr) b)->child1)
      && EqualsTree( ((TreeNode_3_0Ptr) a)->child2, ((TreeNode_3_0Ptr) b)->child2)
      && EqualsTree( ((TreeNode_3_0Ptr) a)->child3, ((TreeNode_3_0Ptr) b)->child3);

  case NODE_4_0:
    return ( ((TreeNode_4_0Ptr) a)->const_fct == ((TreeNode_4_0Ptr) b)->const_fct )
      && EqualsTree( ((TreeNode_4_0Ptr) a)->child1, ((TreeNode_4_0Ptr) b)->child1)
      && EqualsTree( ((TreeNode_4_0Ptr) a)->child2, ((TreeNode_4_0Ptr) b)->child2)
      && EqualsTree( ((TreeNode_4_0Ptr) a)->child3, ((TreeNode_4_0Ptr) b)->child3)
      && EqualsTree( ((TreeNode_4_0Ptr) a)->child4, ((TreeNode_4_0Ptr) b)->child4);

  case NODE_0_1:
    return ( ((TreeNode_0_1Ptr) a)->const_fct == ((TreeNode_0_1Ptr) b)->const_fct )
      &&  ( ((TreeNode_0_1Ptr) a)->term == ((TreeNode_0_1Ptr) b)->term );
  
  default:
    return 1;
  }
}

int NotEqualsTree(TreeNodePtr a, TreeNodePtr b) { return !EqualsTree(a,b); }

int IsFctLISTOF(MkFct_1_0 f)
{
  return (
    f == MkPARAMETER_TYPES_O || f == MkPARAMETER_TYPES || f == MkPARAMETER_TYPES_2 ||
    f == MkBOUNDS_O || f == MkBOUNDS || f == MkBOUNDS_2 ||
    f == MkNAMED_EXPRESSIONS_O || f == MkNAMED_EXPRESSIONS || f == MkNAMED_EXPRESSIONS_2 ||
    f == MkMODIFICATIONS_O || f == MkMODIFICATIONS ||
    f == MkFEATURE_DECLS_O || f == MkFEATURE_DECLS || f == MkFEATURE_DECLS_2 ||
    f == MkPARAMETERS_O || f == MkPARAMETERS || f == MkPARAMETERS_2 ||
    f == MkCLASS_DECLARATIONS_O || f == MkCLASS_DECLARATIONS || 
      f == MkCLASS_DECLARATIONS_2 ||
    f == MkLABEL_LIST_O || f == MkLABEL_LIST || f == MkLABEL_LIST_2); 
}

int IsFct2LISTOF(MkFct_2_0 f)
{
  return (
    f == Mk2PARAMETER_TYPES_O || f == Mk2PARAMETER_TYPES || f == Mk2PARAMETER_TYPES_2 ||
    f == Mk2BOUNDS_O || f == Mk2BOUNDS || f == Mk2BOUNDS_2 ||
    f == Mk2NAMED_EXPRESSIONS_O || f == Mk2NAMED_EXPRESSIONS || f == Mk2NAMED_EXPRESSIONS_2 ||
    f == Mk2MODIFICATIONS_O || f == Mk2MODIFICATIONS ||
    f == Mk2FEATURE_DECLS_O || f == Mk2FEATURE_DECLS || f == Mk2FEATURE_DECLS_2 ||
    f == Mk2PARAMETERS_O || f == Mk2PARAMETERS || f == Mk2PARAMETERS_2 ||
    f == Mk2CLASS_DECLARATIONS_O || f == Mk2CLASS_DECLARATIONS || 
    f == Mk2CLASS_DECLARATIONS_2 ||
    f == Mk2LABEL_LIST_O || f == Mk2LABEL_LIST || f == Mk2LABEL_LIST_2); 
}

void PropagateEmptyNodes(TreeNodePtr tree)
{
  if (tree == NULL)
  {
    return;
  }
  
  switch (tree->kind) {
  case NODE_0_0:
    return; break;

  case NODE_1_0:
    PropagateEmptyNodes(((TreeNode_1_0Ptr) tree)->child1);
    if (!IsFctLISTOF(((TreeNode_1_0Ptr) tree)->const_fct)
     && ((TreeNode_1_0Ptr) tree)->child1->kind == EMPTY_NODE)
    tree->kind = EMPTY_NODE;
    break;  

  case NODE_2_0:
    PropagateEmptyNodes(((TreeNode_2_0Ptr) tree)->child1);
    PropagateEmptyNodes(((TreeNode_2_0Ptr) tree)->child2);
    if (((TreeNode_2_0Ptr) tree)->const_fct == MkIDENTIFIERS_LST_2)
    {
      if (((TreeNode_2_0Ptr) tree)->child1->kind == EMPTY_NODE &&
      ((TreeNode_2_0Ptr) tree)->child2->kind != EMPTY_NODE)
      {
        tree->kind = NODE_1_0;
        ((TreeNode_1_0Ptr) tree)->child1 = ((TreeNode_2_0Ptr) tree)->child2;    
        ((TreeNode_1_0Ptr) tree)->const_fct = MkIDENTIFIERS_2;
        return;
      }
      if (((TreeNode_2_0Ptr) tree)->child1->kind != EMPTY_NODE &&
      ((TreeNode_2_0Ptr) tree)->child2->kind == EMPTY_NODE)
      {
        *((TreeNode_2_0Ptr) tree) = *((TreeNode_2_0Ptr)(((TreeNode_2_0Ptr) tree)->child1));
        return;
      }
    }
    
    if (!IsFct2LISTOF(((TreeNode_2_0Ptr) tree)->const_fct) &&
    (((TreeNode_2_0Ptr) tree)->child1->kind == EMPTY_NODE || 
      ((TreeNode_2_0Ptr) tree)->child2->kind == EMPTY_NODE) 
    )
    tree->kind = EMPTY_NODE;
      break;  
  
  case NODE_3_0:
    PropagateEmptyNodes(((TreeNode_3_0Ptr) tree)->child2);
    PropagateEmptyNodes(((TreeNode_3_0Ptr) tree)->child1);
    PropagateEmptyNodes(((TreeNode_3_0Ptr) tree)->child3);
    if (
      ((TreeNode_3_0Ptr) tree)->child1->kind == EMPTY_NODE || 
      ((TreeNode_3_0Ptr) tree)->child2->kind == EMPTY_NODE || 
      ((TreeNode_3_0Ptr) tree)->child3->kind == EMPTY_NODE) 
    tree->kind = EMPTY_NODE;
      break;  
  
  case NODE_4_0:
    PropagateEmptyNodes(((TreeNode_4_0Ptr) tree)->child1);
    PropagateEmptyNodes(((TreeNode_4_0Ptr) tree)->child2);
    PropagateEmptyNodes(((TreeNode_4_0Ptr) tree)->child3);
    PropagateEmptyNodes(((TreeNode_4_0Ptr) tree)->child4);
    if (
      ((TreeNode_4_0Ptr) tree)->child1->kind == EMPTY_NODE || 
      ((TreeNode_4_0Ptr) tree)->child2->kind == EMPTY_NODE || 
      ((TreeNode_4_0Ptr) tree)->child3->kind == EMPTY_NODE || 
      ((TreeNode_4_0Ptr) tree)->child4->kind == EMPTY_NODE) 
    tree->kind = EMPTY_NODE;
      break;  
    
  case NODE_0_1:
    return; break;
  }
}

void ReplaceFct_1_0(TreeNodePtr node, MkFct_1_0 search, MkFct_1_0 replace)
{
  if (node == NULL)
    return;

  switch (node->kind) {
  case NODE_0_0:
    return; break;

  case NODE_1_0:
    if (((TreeNode_1_0Ptr) node)->const_fct == search)
      ((TreeNode_1_0Ptr) node)->const_fct = replace;  

    ReplaceFct_1_0(((TreeNode_1_0Ptr) node)->child1, search, replace);
    break;  

  case NODE_2_0:
  
    ReplaceFct_1_0(((TreeNode_2_0Ptr) node)->child1, search, replace);
    ReplaceFct_1_0(((TreeNode_2_0Ptr) node)->child2, search, replace);
    break;  
  
  case NODE_3_0:
    ReplaceFct_1_0(((TreeNode_3_0Ptr) node)->child2, search, replace);
    ReplaceFct_1_0(((TreeNode_3_0Ptr) node)->child1, search, replace);
    ReplaceFct_1_0(((TreeNode_3_0Ptr) node)->child3, search, replace);
    break;  
  
  case NODE_4_0:
    ReplaceFct_1_0(((TreeNode_4_0Ptr) node)->child1, search, replace);
    ReplaceFct_1_0(((TreeNode_4_0Ptr) node)->child2, search, replace);
    ReplaceFct_1_0(((TreeNode_4_0Ptr) node)->child3, search, replace);
    ReplaceFct_1_0(((TreeNode_4_0Ptr) node)->child4, search, replace);
    break;  
    
  case NODE_0_1:
    return; break;
  }
}
