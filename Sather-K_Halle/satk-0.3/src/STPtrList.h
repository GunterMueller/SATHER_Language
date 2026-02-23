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
    

#ifndef _STPtrLIST_H
#define _STPtrLIST_H

/* include header file defining STPtr if SatherType is set: */
#define EMPTYSatherTypeHDR
#ifndef EMPTYHDR
#include "SatherType.h"
#endif
#undef EMPTYSatherTypeHDR

#include "STPtrFunctionTypes.h"

typedef struct _STPtrLE *STPtrList;
typedef STPtrList    *STPtrListPtr;

struct _STPtrLE {
STPtr           head;
STPtrList       tail;
};

#define NULLSTPtrList           ((STPtrList)0)
#define NullSTPtrList() ((STPtrList)0)
#define SingleSTPtrList(e)      (ConsSTPtrList((e),NULLSTPtrList))

#if defined(__STDC__) || defined(__cplusplus)

extern void FinlSTPtrList(void);
   /* Deallocates all STPtrLists. */
   /* Dynamic storage is allocated on first need */

extern STPtrList ConsSTPtrList (STPtr e, STPtrList l);
   /* Constructs a STPtrList of an element e and a given tail l.
    * e is the first element of the list. */

extern STPtr HeadSTPtrList (STPtrList l);
   /* Returns the first element of the list l.
    * The list l must not be empty. */

extern STPtrList TailSTPtrList (STPtrList l);
   /* Returns the tail of the list l.
    * If l is empty, an empty list is returned. */

extern int LengthSTPtrList (STPtrList l);
   /* Returns the number of elements in the list l. */

extern STPtr IthElemSTPtrList (STPtrList l, int i);
   /* Returns the i-th element of the List l. The head of l
    * is referred to as 1. If the value of
    * i is greater than the length of the list, an error
    * is reported and the program exits.
    */

extern STPtrList CopySTPtrList (STPtrList l, STPtrMapFct cp);
   /* Copies the list l. Elements are copied by calls of cp. */

extern STPtrList AppSTPtrList (STPtrList l1, STPtrList l2);
   /* Concatenates two lists l1 and l2. The resulting list contains l2 at
    * the end of a copy of list l1. */

extern STPtrList AppElSTPtrList (STPtrList l, STPtr e);
   /* Appends an element e to the list l.
    * The list l is not copied, it is modified as a side-effect
    * of this function. */

extern void InsertAfterSTPtrList (STPtrList l, STPtr e);
   /* This function requires a non-empty list l. The element e is inserted
    * just after the first element of l. 
    * The list l is modified as a side-effect of this function. */

extern STPtrList OrderedInsertSTPtrList (STPtrList l, STPtr e, STPtrCmpFctType fcmp);
   /* Inserts the element e into the list l maintaining l in
    * ascending order with respect to the compare fcmp. 
    * The list l is modified as a side-effect of this function. */

extern STPtrListPtr RefEndConsSTPtrList (STPtrListPtr addr, STPtr e);
   /* Appends an element e to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern STPtrListPtr RefEndAppSTPtrList (STPtrListPtr addr, STPtrList l);
   /* Appends a list l to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern int ElemInSTPtrList (STPtr e, STPtrList l, STPtrCmpFctType cmpfct);
   /* This function returns true (1) iff the element e is in the List l.
    * List elements are compared by the function cmpfct. */

extern STPtrList AddToSetSTPtrList (STPtr e, STPtrList l, STPtrCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. */

extern STPtrList AddToOrderedSetSTPtrList 
       (STPtr e, STPtrList l, STPtrCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. l is assumed to be ordered increasingly in the sense of
    * cmpfct. */

extern STPtrList MapSTPtrList (STPtrList l, STPtrMapFct f);
   /* Returns a new STPtrList obtained by applying f to each element of l. */

extern int CompSTPtrList (STPtrList l1, STPtrList l2, STPtrCmpFctType f);
   /* Compares the lists l1 and l2 lexicographically by applying f
    * to the corresponding elements. */

extern STPtr SumSTPtrList (STPtrList l, STPtrSumFct f, STPtr a);
   /* Applies the binary function f to the elements of the List:
    *   f( f(... f(a, e1), e2, ...), en)
    * If l is empty a is returned. */

#else

extern void FinlSTPtrList ();
extern STPtrList ConsSTPtrList ();
extern STPtr HeadSTPtrList ();
extern STPtrList TailSTPtrList ();
extern int LengthSTPtrList ();
extern STPtr IthElemSTPtrList ();
extern STPtrList CopySTPtrList ();
extern STPtrList AppSTPtrList ();
extern STPtrList AppElSTPtrList ();
extern void InsertAfterSTPtrList ();
extern STPtrList OrderedInsertSTPtrList ();
extern STPtrListPtr RefEndConsSTPtrList ();
extern STPtrListPtr RefEndAppSTPtrList ();
extern int ElemInSTPtrList ();
extern STPtrList AddToSetSTPtrList ();
extern STPtrList MapSTPtrList ();
extern int CompSTPtrList ();
extern STPtr SumSTPtrList ();

#endif

#ifdef MONITOR
#define DAPTO_RESULTSTPtrList(l) DAPTO_RESULT_PTR(l)
#define DAPTO_ARGSTPtrList(l)    DAPTO_ARG_PTR (l, STPtrList)
#endif

#endif
