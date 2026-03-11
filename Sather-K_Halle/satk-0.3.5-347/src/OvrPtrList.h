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
    

#ifndef _OvrPtrLIST_H
#define _OvrPtrLIST_H

/* include header file defining OvrPtr if Overriding is set: */
#define EMPTYOverridingHDR
#ifndef EMPTYHDR
#include "Overriding.h"
#endif
#undef EMPTYOverridingHDR

#include "OvrPtrFunctionTypes.h"

typedef struct _OvrPtrLE *OvrPtrList;
typedef OvrPtrList    *OvrPtrListPtr;

struct _OvrPtrLE {
OvrPtr          head;
OvrPtrList      tail;
};

#define NULLOvrPtrList          ((OvrPtrList)0)
#define NullOvrPtrList()        ((OvrPtrList)0)
#define SingleOvrPtrList(e)     (ConsOvrPtrList((e),NULLOvrPtrList))

#if defined(__STDC__) || defined(__cplusplus)

extern void FinlOvrPtrList(void);
   /* Deallocates all OvrPtrLists. */
   /* Dynamic storage is allocated on first need */

extern OvrPtrList ConsOvrPtrList (OvrPtr e, OvrPtrList l);
   /* Constructs a OvrPtrList of an element e and a given tail l.
    * e is the first element of the list. */

extern OvrPtr HeadOvrPtrList (OvrPtrList l);
   /* Returns the first element of the list l.
    * The list l must not be empty. */

extern OvrPtrList TailOvrPtrList (OvrPtrList l);
   /* Returns the tail of the list l.
    * If l is empty, an empty list is returned. */

extern int LengthOvrPtrList (OvrPtrList l);
   /* Returns the number of elements in the list l. */

extern OvrPtr IthElemOvrPtrList (OvrPtrList l, int i);
   /* Returns the i-th element of the List l. The head of l
    * is referred to as 1. If the value of
    * i is greater than the length of the list, an error
    * is reported and the program exits.
    */

extern OvrPtrList CopyOvrPtrList (OvrPtrList l, OvrPtrMapFct cp);
   /* Copies the list l. Elements are copied by calls of cp. */

extern OvrPtrList AppOvrPtrList (OvrPtrList l1, OvrPtrList l2);
   /* Concatenates two lists l1 and l2. The resulting list contains l2 at
    * the end of a copy of list l1. */

extern OvrPtrList AppElOvrPtrList (OvrPtrList l, OvrPtr e);
   /* Appends an element e to the list l.
    * The list l is not copied, it is modified as a side-effect
    * of this function. */

extern void InsertAfterOvrPtrList (OvrPtrList l, OvrPtr e);
   /* This function requires a non-empty list l. The element e is inserted
    * just after the first element of l. 
    * The list l is modified as a side-effect of this function. */

extern OvrPtrList OrderedInsertOvrPtrList (OvrPtrList l, OvrPtr e, OvrPtrCmpFctType fcmp);
   /* Inserts the element e into the list l maintaining l in
    * ascending order with respect to the compare fcmp. 
    * The list l is modified as a side-effect of this function. */

extern OvrPtrListPtr RefEndConsOvrPtrList (OvrPtrListPtr addr, OvrPtr e);
   /* Appends an element e to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern OvrPtrListPtr RefEndAppOvrPtrList (OvrPtrListPtr addr, OvrPtrList l);
   /* Appends a list l to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern int ElemInOvrPtrList (OvrPtr e, OvrPtrList l, OvrPtrCmpFctType cmpfct);
   /* This function returns true (1) iff the element e is in the List l.
    * List elements are compared by the function cmpfct. */

extern OvrPtrList AddToSetOvrPtrList (OvrPtr e, OvrPtrList l, OvrPtrCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. */

extern OvrPtrList AddToOrderedSetOvrPtrList 
       (OvrPtr e, OvrPtrList l, OvrPtrCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. l is assumed to be ordered increasingly in the sense of
    * cmpfct. */

extern OvrPtrList MapOvrPtrList (OvrPtrList l, OvrPtrMapFct f);
   /* Returns a new OvrPtrList obtained by applying f to each element of l. */

extern int CompOvrPtrList (OvrPtrList l1, OvrPtrList l2, OvrPtrCmpFctType f);
   /* Compares the lists l1 and l2 lexicographically by applying f
    * to the corresponding elements. */

extern OvrPtr SumOvrPtrList (OvrPtrList l, OvrPtrSumFct f, OvrPtr a);
   /* Applies the binary function f to the elements of the List:
    *   f( f(... f(a, e1), e2, ...), en)
    * If l is empty a is returned. */

#else

extern void FinlOvrPtrList ();
extern OvrPtrList ConsOvrPtrList ();
extern OvrPtr HeadOvrPtrList ();
extern OvrPtrList TailOvrPtrList ();
extern int LengthOvrPtrList ();
extern OvrPtr IthElemOvrPtrList ();
extern OvrPtrList CopyOvrPtrList ();
extern OvrPtrList AppOvrPtrList ();
extern OvrPtrList AppElOvrPtrList ();
extern void InsertAfterOvrPtrList ();
extern OvrPtrList OrderedInsertOvrPtrList ();
extern OvrPtrListPtr RefEndConsOvrPtrList ();
extern OvrPtrListPtr RefEndAppOvrPtrList ();
extern int ElemInOvrPtrList ();
extern OvrPtrList AddToSetOvrPtrList ();
extern OvrPtrList MapOvrPtrList ();
extern int CompOvrPtrList ();
extern OvrPtr SumOvrPtrList ();

#endif

#ifdef MONITOR
#define DAPTO_RESULTOvrPtrList(l) DAPTO_RESULT_PTR(l)
#define DAPTO_ARGOvrPtrList(l)    DAPTO_ARG_PTR (l, OvrPtrList)
#endif

#endif
