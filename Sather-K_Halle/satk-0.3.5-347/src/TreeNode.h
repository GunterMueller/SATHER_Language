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
    
#include "nodeptr.h"
#include "err.h"
#include "deftbl.h"

#ifndef TREE_NODE
#define TREE_NODE

typedef NODEPTR (* MkFct_0_0) ELI_ARG((CoordPtr));
typedef NODEPTR (* MkFct_1_0) ELI_ARG((CoordPtr, NODEPTR));
typedef NODEPTR (* MkFct_2_0) ELI_ARG((CoordPtr, NODEPTR, NODEPTR));
typedef NODEPTR (* MkFct_3_0) ELI_ARG((CoordPtr, NODEPTR, NODEPTR, NODEPTR));
typedef NODEPTR 
  (* MkFct_4_0) ELI_ARG((CoordPtr, NODEPTR, NODEPTR, NODEPTR, NODEPTR));
typedef NODEPTR (* MkFct_0_1) ELI_ARG((CoordPtr, int));

struct TreeNode {
  CoordPtr pos;
  int kind;
  DefTableKey mark;
};
typedef struct TreeNode* TreeNodePtr;

struct TreeNode_0_0 {
  CoordPtr pos;
  int kind;
  DefTableKey mark;
  MkFct_0_0 const_fct;
};  
typedef struct TreeNode_0_0* TreeNode_0_0Ptr;

struct TreeNode_1_0 {
  CoordPtr pos;
  int kind;
  DefTableKey mark;
  MkFct_1_0 const_fct;
  TreeNodePtr child1;
};  
typedef struct TreeNode_1_0* TreeNode_1_0Ptr;

struct TreeNode_2_0 {
  CoordPtr pos;
  int kind;
  DefTableKey mark;
  MkFct_2_0 const_fct;
  TreeNodePtr child1;
  TreeNodePtr child2;
};  
typedef struct TreeNode_2_0* TreeNode_2_0Ptr;

struct TreeNode_3_0 {
  CoordPtr pos;
  int kind;
  DefTableKey mark;
  MkFct_3_0 const_fct;
  TreeNodePtr child1;
  TreeNodePtr child2;
  TreeNodePtr child3;
};  
typedef struct TreeNode_3_0* TreeNode_3_0Ptr;

struct TreeNode_4_0 {
  CoordPtr pos;
  int kind;
  DefTableKey mark;
  MkFct_4_0 const_fct;
  TreeNodePtr child1;
  TreeNodePtr child2;
  TreeNodePtr child3;
  TreeNodePtr child4;
};  
typedef struct TreeNode_4_0* TreeNode_4_0Ptr;

struct TreeNode_0_1 {
  CoordPtr pos;
  int kind;
  DefTableKey mark;
  MkFct_0_1 const_fct;
  int term;
};  
typedef struct TreeNode_0_1* TreeNode_0_1Ptr;
#endif
