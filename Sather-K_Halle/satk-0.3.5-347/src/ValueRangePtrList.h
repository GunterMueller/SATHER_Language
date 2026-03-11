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
    

#ifndef _ValueRangePtrLIST_H
#define _ValueRangePtrLIST_H

/* include header file defining ValueRangePtr if CTValue is set: */
#define EMPTYCTValueHDR
#ifndef EMPTYHDR
#include "CTValue.h"
#endif
#undef EMPTYCTValueHDR

#include "ValueRangePtrFunctionTypes.h"

typedef struct _ValueRangePtrLE *ValueRangePtrList;
typedef ValueRangePtrList    *ValueRangePtrListPtr;

struct _ValueRangePtrLE {
ValueRangePtr           head;
ValueRangePtrList       tail;
};

#define NULLValueRangePtrList           ((ValueRangePtrList)0)
#define NullValueRangePtrList() ((ValueRangePtrList)0)
#define SingleValueRangePtrList(e)      (ConsValueRangePtrList((e),NULLValueRangePtrList))

#if defined(__STDC__) || defined(__cplusplus)

extern void FinlValueRangePtrList(void);
   /* Deallocates all ValueRangePtrLists. */
   /* Dynamic storage is allocated on first need */

extern ValueRangePtrList ConsValueRangePtrList (ValueRangePtr e, ValueRangePtrList l);
   /* Constructs a ValueRangePtrList of an element e and a given tail l.
    * e is the first element of the list. */

extern ValueRangePtr HeadValueRangePtrList (ValueRangePtrList l);
   /* Returns the first element of the list l.
    * The list l must not be empty. */

extern ValueRangePtrList TailValueRangePtrList (ValueRangePtrList l);
   /* Returns the tail of the list l.
    * If l is empty, an empty list is returned. */

extern int LengthValueRangePtrList (ValueRangePtrList l);
   /* Returns the number of elements in the list l. */

extern ValueRangePtr IthElemValueRangePtrList (ValueRangePtrList l, int i);
   /* Returns the i-th element of the List l. The head of l
    * is referred to as 1. If the value of
    * i is greater than the length of the list, an error
    * is reported and the program exits.
    */

extern ValueRangePtrList CopyValueRangePtrList (ValueRangePtrList l, ValueRangePtrMapFct cp);
   /* Copies the list l. Elements are copied by calls of cp. */

extern ValueRangePtrList AppValueRangePtrList (ValueRangePtrList l1, ValueRangePtrList l2);
   /* Concatenates two lists l1 and l2. The resulting list contains l2 at
    * the end of a copy of list l1. */

extern ValueRangePtrList AppElValueRangePtrList (ValueRangePtrList l, ValueRangePtr e);
   /* Appends an element e to the list l.
    * The list l is not copied, it is modified as a side-effect
    * of this function. */

extern void InsertAfterValueRangePtrList (ValueRangePtrList l, ValueRangePtr e);
   /* This function requires a non-empty list l. The element e is inserted
    * just after the first element of l. 
    * The list l is modified as a side-effect of this function. */

extern ValueRangePtrList OrderedInsertValueRangePtrList (ValueRangePtrList l, ValueRangePtr e, ValueRangePtrCmpFctType fcmp);
   /* Inserts the element e into the list l maintaining l in
    * ascending order with respect to the compare fcmp. 
    * The list l is modified as a side-effect of this function. */

extern ValueRangePtrListPtr RefEndConsValueRangePtrList (ValueRangePtrListPtr addr, ValueRangePtr e);
   /* Appends an element e to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern ValueRangePtrListPtr RefEndAppValueRangePtrList (ValueRangePtrListPtr addr, ValueRangePtrList l);
   /* Appends a list l to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern int ElemInValueRangePtrList (ValueRangePtr e, ValueRangePtrList l, ValueRangePtrCmpFctType cmpfct);
   /* This function returns true (1) iff the element e is in the List l.
    * List elements are compared by the function cmpfct. */

extern ValueRangePtrList AddToSetValueRangePtrList (ValueRangePtr e, ValueRangePtrList l, ValueRangePtrCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. */

extern ValueRangePtrList AddToOrderedSetValueRangePtrList 
       (ValueRangePtr e, ValueRangePtrList l, ValueRangePtrCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. l is assumed to be ordered increasingly in the sense of
    * cmpfct. */

extern ValueRangePtrList MapValueRangePtrList (ValueRangePtrList l, ValueRangePtrMapFct f);
   /* Returns a new ValueRangePtrList obtained by applying f to each element of l. */

extern int CompValueRangePtrList (ValueRangePtrList l1, ValueRangePtrList l2, ValueRangePtrCmpFctType f);
   /* Compares the lists l1 and l2 lexicographically by applying f
    * to the corresponding elements. */

extern ValueRangePtr SumValueRangePtrList (ValueRangePtrList l, ValueRangePtrSumFct f, ValueRangePtr a);
   /* Applies the binary function f to the elements of the List:
    *   f( f(... f(a, e1), e2, ...), en)
    * If l is empty a is returned. */

#else

extern void FinlValueRangePtrList ();
extern ValueRangePtrList ConsValueRangePtrList ();
extern ValueRangePtr HeadValueRangePtrList ();
extern ValueRangePtrList TailValueRangePtrList ();
extern int LengthValueRangePtrList ();
extern ValueRangePtr IthElemValueRangePtrList ();
extern ValueRangePtrList CopyValueRangePtrList ();
extern ValueRangePtrList AppValueRangePtrList ();
extern ValueRangePtrList AppElValueRangePtrList ();
extern void InsertAfterValueRangePtrList ();
extern ValueRangePtrList OrderedInsertValueRangePtrList ();
extern ValueRangePtrListPtr RefEndConsValueRangePtrList ();
extern ValueRangePtrListPtr RefEndAppValueRangePtrList ();
extern int ElemInValueRangePtrList ();
extern ValueRangePtrList AddToSetValueRangePtrList ();
extern ValueRangePtrList MapValueRangePtrList ();
extern int CompValueRangePtrList ();
extern ValueRangePtr SumValueRangePtrList ();

#endif

#ifdef MONITOR
#define DAPTO_RESULTValueRangePtrList(l) DAPTO_RESULT_PTR(l)
#define DAPTO_ARGValueRangePtrList(l)    DAPTO_ARG_PTR (l, ValueRangePtrList)
#endif

#endif
