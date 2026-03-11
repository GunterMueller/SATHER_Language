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
    

#ifndef _GenericInfoLIST_H
#define _GenericInfoLIST_H

/* include header file defining GenericInfo if GenericParameter is set: */
#define EMPTYGenericParameterHDR
#ifndef EMPTYHDR
#include "GenericParameter.h"
#endif
#undef EMPTYGenericParameterHDR

#include "GenericInfoFunctionTypes.h"

typedef struct _GenericInfoLE *GenericInfoList;
typedef GenericInfoList    *GenericInfoListPtr;

struct _GenericInfoLE {
GenericInfo             head;
GenericInfoList tail;
};

#define NULLGenericInfoList             ((GenericInfoList)0)
#define NullGenericInfoList()   ((GenericInfoList)0)
#define SingleGenericInfoList(e)        (ConsGenericInfoList((e),NULLGenericInfoList))

#if defined(__STDC__) || defined(__cplusplus)

extern void FinlGenericInfoList(void);
   /* Deallocates all GenericInfoLists. */
   /* Dynamic storage is allocated on first need */

extern GenericInfoList ConsGenericInfoList (GenericInfo e, GenericInfoList l);
   /* Constructs a GenericInfoList of an element e and a given tail l.
    * e is the first element of the list. */

extern GenericInfo HeadGenericInfoList (GenericInfoList l);
   /* Returns the first element of the list l.
    * The list l must not be empty. */

extern GenericInfoList TailGenericInfoList (GenericInfoList l);
   /* Returns the tail of the list l.
    * If l is empty, an empty list is returned. */

extern int LengthGenericInfoList (GenericInfoList l);
   /* Returns the number of elements in the list l. */

extern GenericInfo IthElemGenericInfoList (GenericInfoList l, int i);
   /* Returns the i-th element of the List l. The head of l
    * is referred to as 1. If the value of
    * i is greater than the length of the list, an error
    * is reported and the program exits.
    */

extern GenericInfoList CopyGenericInfoList (GenericInfoList l, GenericInfoMapFct cp);
   /* Copies the list l. Elements are copied by calls of cp. */

extern GenericInfoList AppGenericInfoList (GenericInfoList l1, GenericInfoList l2);
   /* Concatenates two lists l1 and l2. The resulting list contains l2 at
    * the end of a copy of list l1. */

extern GenericInfoList AppElGenericInfoList (GenericInfoList l, GenericInfo e);
   /* Appends an element e to the list l.
    * The list l is not copied, it is modified as a side-effect
    * of this function. */

extern void InsertAfterGenericInfoList (GenericInfoList l, GenericInfo e);
   /* This function requires a non-empty list l. The element e is inserted
    * just after the first element of l. 
    * The list l is modified as a side-effect of this function. */

extern GenericInfoList OrderedInsertGenericInfoList (GenericInfoList l, GenericInfo e, GenericInfoCmpFctType fcmp);
   /* Inserts the element e into the list l maintaining l in
    * ascending order with respect to the compare fcmp. 
    * The list l is modified as a side-effect of this function. */

extern GenericInfoListPtr RefEndConsGenericInfoList (GenericInfoListPtr addr, GenericInfo e);
   /* Appends an element e to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern GenericInfoListPtr RefEndAppGenericInfoList (GenericInfoListPtr addr, GenericInfoList l);
   /* Appends a list l to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern int ElemInGenericInfoList (GenericInfo e, GenericInfoList l, GenericInfoCmpFctType cmpfct);
   /* This function returns true (1) iff the element e is in the List l.
    * List elements are compared by the function cmpfct. */

extern GenericInfoList AddToSetGenericInfoList (GenericInfo e, GenericInfoList l, GenericInfoCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. */

extern GenericInfoList AddToOrderedSetGenericInfoList 
       (GenericInfo e, GenericInfoList l, GenericInfoCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. l is assumed to be ordered increasingly in the sense of
    * cmpfct. */

extern GenericInfoList MapGenericInfoList (GenericInfoList l, GenericInfoMapFct f);
   /* Returns a new GenericInfoList obtained by applying f to each element of l. */

extern int CompGenericInfoList (GenericInfoList l1, GenericInfoList l2, GenericInfoCmpFctType f);
   /* Compares the lists l1 and l2 lexicographically by applying f
    * to the corresponding elements. */

extern GenericInfo SumGenericInfoList (GenericInfoList l, GenericInfoSumFct f, GenericInfo a);
   /* Applies the binary function f to the elements of the List:
    *   f( f(... f(a, e1), e2, ...), en)
    * If l is empty a is returned. */

#else

extern void FinlGenericInfoList ();
extern GenericInfoList ConsGenericInfoList ();
extern GenericInfo HeadGenericInfoList ();
extern GenericInfoList TailGenericInfoList ();
extern int LengthGenericInfoList ();
extern GenericInfo IthElemGenericInfoList ();
extern GenericInfoList CopyGenericInfoList ();
extern GenericInfoList AppGenericInfoList ();
extern GenericInfoList AppElGenericInfoList ();
extern void InsertAfterGenericInfoList ();
extern GenericInfoList OrderedInsertGenericInfoList ();
extern GenericInfoListPtr RefEndConsGenericInfoList ();
extern GenericInfoListPtr RefEndAppGenericInfoList ();
extern int ElemInGenericInfoList ();
extern GenericInfoList AddToSetGenericInfoList ();
extern GenericInfoList MapGenericInfoList ();
extern int CompGenericInfoList ();
extern GenericInfo SumGenericInfoList ();

#endif

#ifdef MONITOR
#define DAPTO_RESULTGenericInfoList(l) DAPTO_RESULT_PTR(l)
#define DAPTO_ARGGenericInfoList(l)    DAPTO_ARG_PTR (l, GenericInfoList)
#endif

#endif
