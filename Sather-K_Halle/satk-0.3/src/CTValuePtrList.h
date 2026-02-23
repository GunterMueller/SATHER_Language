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
    

#ifndef _CTValuePtrLIST_H
#define _CTValuePtrLIST_H

/* include header file defining CTValuePtr if CTValue is set: */
#define EMPTYCTValueHDR
#ifndef EMPTYHDR
#include "CTValue.h"
#endif
#undef EMPTYCTValueHDR

#include "CTValuePtrFunctionTypes.h"

typedef struct _CTValuePtrLE *CTValuePtrList;
typedef CTValuePtrList    *CTValuePtrListPtr;

struct _CTValuePtrLE {
CTValuePtr              head;
CTValuePtrList  tail;
};

#define NULLCTValuePtrList              ((CTValuePtrList)0)
#define NullCTValuePtrList()    ((CTValuePtrList)0)
#define SingleCTValuePtrList(e) (ConsCTValuePtrList((e),NULLCTValuePtrList))

#if defined(__STDC__) || defined(__cplusplus)

extern void FinlCTValuePtrList(void);
   /* Deallocates all CTValuePtrLists. */
   /* Dynamic storage is allocated on first need */

extern CTValuePtrList ConsCTValuePtrList (CTValuePtr e, CTValuePtrList l);
   /* Constructs a CTValuePtrList of an element e and a given tail l.
    * e is the first element of the list. */

extern CTValuePtr HeadCTValuePtrList (CTValuePtrList l);
   /* Returns the first element of the list l.
    * The list l must not be empty. */

extern CTValuePtrList TailCTValuePtrList (CTValuePtrList l);
   /* Returns the tail of the list l.
    * If l is empty, an empty list is returned. */

extern int LengthCTValuePtrList (CTValuePtrList l);
   /* Returns the number of elements in the list l. */

extern CTValuePtr IthElemCTValuePtrList (CTValuePtrList l, int i);
   /* Returns the i-th element of the List l. The head of l
    * is referred to as 1. If the value of
    * i is greater than the length of the list, an error
    * is reported and the program exits.
    */

extern CTValuePtrList CopyCTValuePtrList (CTValuePtrList l, CTValuePtrMapFct cp);
   /* Copies the list l. Elements are copied by calls of cp. */

extern CTValuePtrList AppCTValuePtrList (CTValuePtrList l1, CTValuePtrList l2);
   /* Concatenates two lists l1 and l2. The resulting list contains l2 at
    * the end of a copy of list l1. */

extern CTValuePtrList AppElCTValuePtrList (CTValuePtrList l, CTValuePtr e);
   /* Appends an element e to the list l.
    * The list l is not copied, it is modified as a side-effect
    * of this function. */

extern void InsertAfterCTValuePtrList (CTValuePtrList l, CTValuePtr e);
   /* This function requires a non-empty list l. The element e is inserted
    * just after the first element of l. 
    * The list l is modified as a side-effect of this function. */

extern CTValuePtrList OrderedInsertCTValuePtrList (CTValuePtrList l, CTValuePtr e, CTValuePtrCmpFctType fcmp);
   /* Inserts the element e into the list l maintaining l in
    * ascending order with respect to the compare fcmp. 
    * The list l is modified as a side-effect of this function. */

extern CTValuePtrListPtr RefEndConsCTValuePtrList (CTValuePtrListPtr addr, CTValuePtr e);
   /* Appends an element e to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern CTValuePtrListPtr RefEndAppCTValuePtrList (CTValuePtrListPtr addr, CTValuePtrList l);
   /* Appends a list l to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern int ElemInCTValuePtrList (CTValuePtr e, CTValuePtrList l, CTValuePtrCmpFctType cmpfct);
   /* This function returns true (1) iff the element e is in the List l.
    * List elements are compared by the function cmpfct. */

extern CTValuePtrList AddToSetCTValuePtrList (CTValuePtr e, CTValuePtrList l, CTValuePtrCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. */

extern CTValuePtrList AddToOrderedSetCTValuePtrList 
       (CTValuePtr e, CTValuePtrList l, CTValuePtrCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. l is assumed to be ordered increasingly in the sense of
    * cmpfct. */

extern CTValuePtrList MapCTValuePtrList (CTValuePtrList l, CTValuePtrMapFct f);
   /* Returns a new CTValuePtrList obtained by applying f to each element of l. */

extern int CompCTValuePtrList (CTValuePtrList l1, CTValuePtrList l2, CTValuePtrCmpFctType f);
   /* Compares the lists l1 and l2 lexicographically by applying f
    * to the corresponding elements. */

extern CTValuePtr SumCTValuePtrList (CTValuePtrList l, CTValuePtrSumFct f, CTValuePtr a);
   /* Applies the binary function f to the elements of the List:
    *   f( f(... f(a, e1), e2, ...), en)
    * If l is empty a is returned. */

#else

extern void FinlCTValuePtrList ();
extern CTValuePtrList ConsCTValuePtrList ();
extern CTValuePtr HeadCTValuePtrList ();
extern CTValuePtrList TailCTValuePtrList ();
extern int LengthCTValuePtrList ();
extern CTValuePtr IthElemCTValuePtrList ();
extern CTValuePtrList CopyCTValuePtrList ();
extern CTValuePtrList AppCTValuePtrList ();
extern CTValuePtrList AppElCTValuePtrList ();
extern void InsertAfterCTValuePtrList ();
extern CTValuePtrList OrderedInsertCTValuePtrList ();
extern CTValuePtrListPtr RefEndConsCTValuePtrList ();
extern CTValuePtrListPtr RefEndAppCTValuePtrList ();
extern int ElemInCTValuePtrList ();
extern CTValuePtrList AddToSetCTValuePtrList ();
extern CTValuePtrList MapCTValuePtrList ();
extern int CompCTValuePtrList ();
extern CTValuePtr SumCTValuePtrList ();

#endif

#ifdef MONITOR
#define DAPTO_RESULTCTValuePtrList(l) DAPTO_RESULT_PTR(l)
#define DAPTO_ARGCTValuePtrList(l)    DAPTO_ARG_PTR (l, CTValuePtrList)
#endif

#endif
