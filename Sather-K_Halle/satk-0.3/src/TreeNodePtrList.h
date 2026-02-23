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
    

#ifndef _TreeNodePtrLIST_H
#define _TreeNodePtrLIST_H

/* include header file defining TreeNodePtr if TreeNode is set: */
#define EMPTYTreeNodeHDR
#ifndef EMPTYHDR
#include "TreeNode.h"
#endif
#undef EMPTYTreeNodeHDR

#include "TreeNodePtrFunctionTypes.h"

typedef struct _TreeNodePtrLE *TreeNodePtrList;
typedef TreeNodePtrList    *TreeNodePtrListPtr;

struct _TreeNodePtrLE {
TreeNodePtr             head;
TreeNodePtrList tail;
};

#define NULLTreeNodePtrList             ((TreeNodePtrList)0)
#define NullTreeNodePtrList()   ((TreeNodePtrList)0)
#define SingleTreeNodePtrList(e)        (ConsTreeNodePtrList((e),NULLTreeNodePtrList))

#if defined(__STDC__) || defined(__cplusplus)

extern void FinlTreeNodePtrList(void);
   /* Deallocates all TreeNodePtrLists. */
   /* Dynamic storage is allocated on first need */

extern TreeNodePtrList ConsTreeNodePtrList (TreeNodePtr e, TreeNodePtrList l);
   /* Constructs a TreeNodePtrList of an element e and a given tail l.
    * e is the first element of the list. */

extern TreeNodePtr HeadTreeNodePtrList (TreeNodePtrList l);
   /* Returns the first element of the list l.
    * The list l must not be empty. */

extern TreeNodePtrList TailTreeNodePtrList (TreeNodePtrList l);
   /* Returns the tail of the list l.
    * If l is empty, an empty list is returned. */

extern int LengthTreeNodePtrList (TreeNodePtrList l);
   /* Returns the number of elements in the list l. */

extern TreeNodePtr IthElemTreeNodePtrList (TreeNodePtrList l, int i);
   /* Returns the i-th element of the List l. The head of l
    * is referred to as 1. If the value of
    * i is greater than the length of the list, an error
    * is reported and the program exits.
    */

extern TreeNodePtrList CopyTreeNodePtrList (TreeNodePtrList l, TreeNodePtrMapFct cp);
   /* Copies the list l. Elements are copied by calls of cp. */

extern TreeNodePtrList AppTreeNodePtrList (TreeNodePtrList l1, TreeNodePtrList l2);
   /* Concatenates two lists l1 and l2. The resulting list contains l2 at
    * the end of a copy of list l1. */

extern TreeNodePtrList AppElTreeNodePtrList (TreeNodePtrList l, TreeNodePtr e);
   /* Appends an element e to the list l.
    * The list l is not copied, it is modified as a side-effect
    * of this function. */

extern void InsertAfterTreeNodePtrList (TreeNodePtrList l, TreeNodePtr e);
   /* This function requires a non-empty list l. The element e is inserted
    * just after the first element of l. 
    * The list l is modified as a side-effect of this function. */

extern TreeNodePtrList OrderedInsertTreeNodePtrList (TreeNodePtrList l, TreeNodePtr e, TreeNodePtrCmpFctType fcmp);
   /* Inserts the element e into the list l maintaining l in
    * ascending order with respect to the compare fcmp. 
    * The list l is modified as a side-effect of this function. */

extern TreeNodePtrListPtr RefEndConsTreeNodePtrList (TreeNodePtrListPtr addr, TreeNodePtr e);
   /* Appends an element e to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern TreeNodePtrListPtr RefEndAppTreeNodePtrList (TreeNodePtrListPtr addr, TreeNodePtrList l);
   /* Appends a list l to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern int ElemInTreeNodePtrList (TreeNodePtr e, TreeNodePtrList l, TreeNodePtrCmpFctType cmpfct);
   /* This function returns true (1) iff the element e is in the List l.
    * List elements are compared by the function cmpfct. */

extern TreeNodePtrList AddToSetTreeNodePtrList (TreeNodePtr e, TreeNodePtrList l, TreeNodePtrCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. */

extern TreeNodePtrList AddToOrderedSetTreeNodePtrList 
       (TreeNodePtr e, TreeNodePtrList l, TreeNodePtrCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. l is assumed to be ordered increasingly in the sense of
    * cmpfct. */

extern TreeNodePtrList MapTreeNodePtrList (TreeNodePtrList l, TreeNodePtrMapFct f);
   /* Returns a new TreeNodePtrList obtained by applying f to each element of l. */

extern int CompTreeNodePtrList (TreeNodePtrList l1, TreeNodePtrList l2, TreeNodePtrCmpFctType f);
   /* Compares the lists l1 and l2 lexicographically by applying f
    * to the corresponding elements. */

extern TreeNodePtr SumTreeNodePtrList (TreeNodePtrList l, TreeNodePtrSumFct f, TreeNodePtr a);
   /* Applies the binary function f to the elements of the List:
    *   f( f(... f(a, e1), e2, ...), en)
    * If l is empty a is returned. */

#else

extern void FinlTreeNodePtrList ();
extern TreeNodePtrList ConsTreeNodePtrList ();
extern TreeNodePtr HeadTreeNodePtrList ();
extern TreeNodePtrList TailTreeNodePtrList ();
extern int LengthTreeNodePtrList ();
extern TreeNodePtr IthElemTreeNodePtrList ();
extern TreeNodePtrList CopyTreeNodePtrList ();
extern TreeNodePtrList AppTreeNodePtrList ();
extern TreeNodePtrList AppElTreeNodePtrList ();
extern void InsertAfterTreeNodePtrList ();
extern TreeNodePtrList OrderedInsertTreeNodePtrList ();
extern TreeNodePtrListPtr RefEndConsTreeNodePtrList ();
extern TreeNodePtrListPtr RefEndAppTreeNodePtrList ();
extern int ElemInTreeNodePtrList ();
extern TreeNodePtrList AddToSetTreeNodePtrList ();
extern TreeNodePtrList MapTreeNodePtrList ();
extern int CompTreeNodePtrList ();
extern TreeNodePtr SumTreeNodePtrList ();

#endif

#ifdef MONITOR
#define DAPTO_RESULTTreeNodePtrList(l) DAPTO_RESULT_PTR(l)
#define DAPTO_ARGTreeNodePtrList(l)    DAPTO_ARG_PTR (l, TreeNodePtrList)
#endif

#endif
