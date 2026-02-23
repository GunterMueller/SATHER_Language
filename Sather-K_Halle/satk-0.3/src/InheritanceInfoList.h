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
    

#ifndef _InheritanceInfoLIST_H
#define _InheritanceInfoLIST_H

/* include header file defining InheritanceInfo if InheritanceParameter is set: */
#define EMPTYInheritanceParameterHDR
#ifndef EMPTYHDR
#include "InheritanceParameter.h"
#endif
#undef EMPTYInheritanceParameterHDR

#include "InheritanceInfoFunctionTypes.h"

typedef struct _InheritanceInfoLE *InheritanceInfoList;
typedef InheritanceInfoList    *InheritanceInfoListPtr;

struct _InheritanceInfoLE {
InheritanceInfo         head;
InheritanceInfoList     tail;
};

#define NULLInheritanceInfoList         ((InheritanceInfoList)0)
#define NullInheritanceInfoList()       ((InheritanceInfoList)0)
#define SingleInheritanceInfoList(e)    (ConsInheritanceInfoList((e),NULLInheritanceInfoList))

#if defined(__STDC__) || defined(__cplusplus)

extern void FinlInheritanceInfoList(void);
   /* Deallocates all InheritanceInfoLists. */
   /* Dynamic storage is allocated on first need */

extern InheritanceInfoList ConsInheritanceInfoList (InheritanceInfo e, InheritanceInfoList l);
   /* Constructs a InheritanceInfoList of an element e and a given tail l.
    * e is the first element of the list. */

extern InheritanceInfo HeadInheritanceInfoList (InheritanceInfoList l);
   /* Returns the first element of the list l.
    * The list l must not be empty. */

extern InheritanceInfoList TailInheritanceInfoList (InheritanceInfoList l);
   /* Returns the tail of the list l.
    * If l is empty, an empty list is returned. */

extern int LengthInheritanceInfoList (InheritanceInfoList l);
   /* Returns the number of elements in the list l. */

extern InheritanceInfo IthElemInheritanceInfoList (InheritanceInfoList l, int i);
   /* Returns the i-th element of the List l. The head of l
    * is referred to as 1. If the value of
    * i is greater than the length of the list, an error
    * is reported and the program exits.
    */

extern InheritanceInfoList CopyInheritanceInfoList (InheritanceInfoList l, InheritanceInfoMapFct cp);
   /* Copies the list l. Elements are copied by calls of cp. */

extern InheritanceInfoList AppInheritanceInfoList (InheritanceInfoList l1, InheritanceInfoList l2);
   /* Concatenates two lists l1 and l2. The resulting list contains l2 at
    * the end of a copy of list l1. */

extern InheritanceInfoList AppElInheritanceInfoList (InheritanceInfoList l, InheritanceInfo e);
   /* Appends an element e to the list l.
    * The list l is not copied, it is modified as a side-effect
    * of this function. */

extern void InsertAfterInheritanceInfoList (InheritanceInfoList l, InheritanceInfo e);
   /* This function requires a non-empty list l. The element e is inserted
    * just after the first element of l. 
    * The list l is modified as a side-effect of this function. */

extern InheritanceInfoList OrderedInsertInheritanceInfoList (InheritanceInfoList l, InheritanceInfo e, InheritanceInfoCmpFctType fcmp);
   /* Inserts the element e into the list l maintaining l in
    * ascending order with respect to the compare fcmp. 
    * The list l is modified as a side-effect of this function. */

extern InheritanceInfoListPtr RefEndConsInheritanceInfoList (InheritanceInfoListPtr addr, InheritanceInfo e);
   /* Appends an element e to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern InheritanceInfoListPtr RefEndAppInheritanceInfoList (InheritanceInfoListPtr addr, InheritanceInfoList l);
   /* Appends a list l to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern int ElemInInheritanceInfoList (InheritanceInfo e, InheritanceInfoList l, InheritanceInfoCmpFctType cmpfct);
   /* This function returns true (1) iff the element e is in the List l.
    * List elements are compared by the function cmpfct. */

extern InheritanceInfoList AddToSetInheritanceInfoList (InheritanceInfo e, InheritanceInfoList l, InheritanceInfoCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. */

extern InheritanceInfoList AddToOrderedSetInheritanceInfoList 
       (InheritanceInfo e, InheritanceInfoList l, InheritanceInfoCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. l is assumed to be ordered increasingly in the sense of
    * cmpfct. */

extern InheritanceInfoList MapInheritanceInfoList (InheritanceInfoList l, InheritanceInfoMapFct f);
   /* Returns a new InheritanceInfoList obtained by applying f to each element of l. */

extern int CompInheritanceInfoList (InheritanceInfoList l1, InheritanceInfoList l2, InheritanceInfoCmpFctType f);
   /* Compares the lists l1 and l2 lexicographically by applying f
    * to the corresponding elements. */

extern InheritanceInfo SumInheritanceInfoList (InheritanceInfoList l, InheritanceInfoSumFct f, InheritanceInfo a);
   /* Applies the binary function f to the elements of the List:
    *   f( f(... f(a, e1), e2, ...), en)
    * If l is empty a is returned. */

#else

extern void FinlInheritanceInfoList ();
extern InheritanceInfoList ConsInheritanceInfoList ();
extern InheritanceInfo HeadInheritanceInfoList ();
extern InheritanceInfoList TailInheritanceInfoList ();
extern int LengthInheritanceInfoList ();
extern InheritanceInfo IthElemInheritanceInfoList ();
extern InheritanceInfoList CopyInheritanceInfoList ();
extern InheritanceInfoList AppInheritanceInfoList ();
extern InheritanceInfoList AppElInheritanceInfoList ();
extern void InsertAfterInheritanceInfoList ();
extern InheritanceInfoList OrderedInsertInheritanceInfoList ();
extern InheritanceInfoListPtr RefEndConsInheritanceInfoList ();
extern InheritanceInfoListPtr RefEndAppInheritanceInfoList ();
extern int ElemInInheritanceInfoList ();
extern InheritanceInfoList AddToSetInheritanceInfoList ();
extern InheritanceInfoList MapInheritanceInfoList ();
extern int CompInheritanceInfoList ();
extern InheritanceInfo SumInheritanceInfoList ();

#endif

#ifdef MONITOR
#define DAPTO_RESULTInheritanceInfoList(l) DAPTO_RESULT_PTR(l)
#define DAPTO_ARGInheritanceInfoList(l)    DAPTO_ARG_PTR (l, InheritanceInfoList)
#endif

#endif
