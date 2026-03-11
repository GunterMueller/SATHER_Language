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
    

#ifndef _TreeNodePtrListLIST_H
#define _TreeNodePtrListLIST_H

/* include header file defining TreeNodePtrList if TreeNodePtrList is set: */
#define EMPTYTreeNodePtrListHDR
#ifndef EMPTYHDR
#include "TreeNodePtrList.h"
#endif
#undef EMPTYTreeNodePtrListHDR

#include "TreeNodePtrListFunctionTypes.h"

typedef struct _TreeNodePtrListLE *TreeNodePtrListList;
typedef TreeNodePtrListList    *TreeNodePtrListListPtr;

struct _TreeNodePtrListLE {
TreeNodePtrList         head;
TreeNodePtrListList     tail;
};

#define NULLTreeNodePtrListList         ((TreeNodePtrListList)0)
#define NullTreeNodePtrListList()       ((TreeNodePtrListList)0)
#define SingleTreeNodePtrListList(e)    (ConsTreeNodePtrListList((e),NULLTreeNodePtrListList))

#if defined(__STDC__) || defined(__cplusplus)

extern void FinlTreeNodePtrListList(void);
   /* Deallocates all TreeNodePtrListLists. */
   /* Dynamic storage is allocated on first need */

extern TreeNodePtrListList ConsTreeNodePtrListList (TreeNodePtrList e, TreeNodePtrListList l);
   /* Constructs a TreeNodePtrListList of an element e and a given tail l.
    * e is the first element of the list. */

extern TreeNodePtrList HeadTreeNodePtrListList (TreeNodePtrListList l);
   /* Returns the first element of the list l.
    * The list l must not be empty. */

extern TreeNodePtrListList TailTreeNodePtrListList (TreeNodePtrListList l);
   /* Returns the tail of the list l.
    * If l is empty, an empty list is returned. */

extern int LengthTreeNodePtrListList (TreeNodePtrListList l);
   /* Returns the number of elements in the list l. */

extern TreeNodePtrList IthElemTreeNodePtrListList (TreeNodePtrListList l, int i);
   /* Returns the i-th element of the List l. The head of l
    * is referred to as 1. If the value of
    * i is greater than the length of the list, an error
    * is reported and the program exits.
    */

extern TreeNodePtrListList CopyTreeNodePtrListList (TreeNodePtrListList l, TreeNodePtrListMapFct cp);
   /* Copies the list l. Elements are copied by calls of cp. */

extern TreeNodePtrListList AppTreeNodePtrListList (TreeNodePtrListList l1, TreeNodePtrListList l2);
   /* Concatenates two lists l1 and l2. The resulting list contains l2 at
    * the end of a copy of list l1. */

extern TreeNodePtrListList AppElTreeNodePtrListList (TreeNodePtrListList l, TreeNodePtrList e);
   /* Appends an element e to the list l.
    * The list l is not copied, it is modified as a side-effect
    * of this function. */

extern void InsertAfterTreeNodePtrListList (TreeNodePtrListList l, TreeNodePtrList e);
   /* This function requires a non-empty list l. The element e is inserted
    * just after the first element of l. 
    * The list l is modified as a side-effect of this function. */

extern TreeNodePtrListList OrderedInsertTreeNodePtrListList (TreeNodePtrListList l, TreeNodePtrList e, TreeNodePtrListCmpFctType fcmp);
   /* Inserts the element e into the list l maintaining l in
    * ascending order with respect to the compare fcmp. 
    * The list l is modified as a side-effect of this function. */

extern TreeNodePtrListListPtr RefEndConsTreeNodePtrListList (TreeNodePtrListListPtr addr, TreeNodePtrList e);
   /* Appends an element e to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern TreeNodePtrListListPtr RefEndAppTreeNodePtrListList (TreeNodePtrListListPtr addr, TreeNodePtrListList l);
   /* Appends a list l to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern int ElemInTreeNodePtrListList (TreeNodePtrList e, TreeNodePtrListList l, TreeNodePtrListCmpFctType cmpfct);
   /* This function returns true (1) iff the element e is in the List l.
    * List elements are compared by the function cmpfct. */

extern TreeNodePtrListList AddToSetTreeNodePtrListList (TreeNodePtrList e, TreeNodePtrListList l, TreeNodePtrListCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. */

extern TreeNodePtrListList AddToOrderedSetTreeNodePtrListList 
       (TreeNodePtrList e, TreeNodePtrListList l, TreeNodePtrListCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. l is assumed to be ordered increasingly in the sense of
    * cmpfct. */

extern TreeNodePtrListList MapTreeNodePtrListList (TreeNodePtrListList l, TreeNodePtrListMapFct f);
   /* Returns a new TreeNodePtrListList obtained by applying f to each element of l. */

extern int CompTreeNodePtrListList (TreeNodePtrListList l1, TreeNodePtrListList l2, TreeNodePtrListCmpFctType f);
   /* Compares the lists l1 and l2 lexicographically by applying f
    * to the corresponding elements. */

extern TreeNodePtrList SumTreeNodePtrListList (TreeNodePtrListList l, TreeNodePtrListSumFct f, TreeNodePtrList a);
   /* Applies the binary function f to the elements of the List:
    *   f( f(... f(a, e1), e2, ...), en)
    * If l is empty a is returned. */

#else

extern void FinlTreeNodePtrListList ();
extern TreeNodePtrListList ConsTreeNodePtrListList ();
extern TreeNodePtrList HeadTreeNodePtrListList ();
extern TreeNodePtrListList TailTreeNodePtrListList ();
extern int LengthTreeNodePtrListList ();
extern TreeNodePtrList IthElemTreeNodePtrListList ();
extern TreeNodePtrListList CopyTreeNodePtrListList ();
extern TreeNodePtrListList AppTreeNodePtrListList ();
extern TreeNodePtrListList AppElTreeNodePtrListList ();
extern void InsertAfterTreeNodePtrListList ();
extern TreeNodePtrListList OrderedInsertTreeNodePtrListList ();
extern TreeNodePtrListListPtr RefEndConsTreeNodePtrListList ();
extern TreeNodePtrListListPtr RefEndAppTreeNodePtrListList ();
extern int ElemInTreeNodePtrListList ();
extern TreeNodePtrListList AddToSetTreeNodePtrListList ();
extern TreeNodePtrListList MapTreeNodePtrListList ();
extern int CompTreeNodePtrListList ();
extern TreeNodePtrList SumTreeNodePtrListList ();

#endif

#ifdef MONITOR
#define DAPTO_RESULTTreeNodePtrListList(l) DAPTO_RESULT_PTR(l)
#define DAPTO_ARGTreeNodePtrListList(l)    DAPTO_ARG_PTR (l, TreeNodePtrListList)
#endif

#endif
