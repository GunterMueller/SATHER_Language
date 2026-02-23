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
    

#ifndef _BMPtrLIST_H
#define _BMPtrLIST_H

/* include header file defining BMPtr if BoundMethods is set: */
#define EMPTYBoundMethodsHDR
#ifndef EMPTYHDR
#include "BoundMethods.h"
#endif
#undef EMPTYBoundMethodsHDR

#include "BMPtrFunctionTypes.h"

typedef struct _BMPtrLE *BMPtrList;
typedef BMPtrList    *BMPtrListPtr;

struct _BMPtrLE {
BMPtr           head;
BMPtrList       tail;
};

#define NULLBMPtrList           ((BMPtrList)0)
#define NullBMPtrList() ((BMPtrList)0)
#define SingleBMPtrList(e)      (ConsBMPtrList((e),NULLBMPtrList))

#if defined(__STDC__) || defined(__cplusplus)

extern void FinlBMPtrList(void);
   /* Deallocates all BMPtrLists. */
   /* Dynamic storage is allocated on first need */

extern BMPtrList ConsBMPtrList (BMPtr e, BMPtrList l);
   /* Constructs a BMPtrList of an element e and a given tail l.
    * e is the first element of the list. */

extern BMPtr HeadBMPtrList (BMPtrList l);
   /* Returns the first element of the list l.
    * The list l must not be empty. */

extern BMPtrList TailBMPtrList (BMPtrList l);
   /* Returns the tail of the list l.
    * If l is empty, an empty list is returned. */

extern int LengthBMPtrList (BMPtrList l);
   /* Returns the number of elements in the list l. */

extern BMPtr IthElemBMPtrList (BMPtrList l, int i);
   /* Returns the i-th element of the List l. The head of l
    * is referred to as 1. If the value of
    * i is greater than the length of the list, an error
    * is reported and the program exits.
    */

extern BMPtrList CopyBMPtrList (BMPtrList l, BMPtrMapFct cp);
   /* Copies the list l. Elements are copied by calls of cp. */

extern BMPtrList AppBMPtrList (BMPtrList l1, BMPtrList l2);
   /* Concatenates two lists l1 and l2. The resulting list contains l2 at
    * the end of a copy of list l1. */

extern BMPtrList AppElBMPtrList (BMPtrList l, BMPtr e);
   /* Appends an element e to the list l.
    * The list l is not copied, it is modified as a side-effect
    * of this function. */

extern void InsertAfterBMPtrList (BMPtrList l, BMPtr e);
   /* This function requires a non-empty list l. The element e is inserted
    * just after the first element of l. 
    * The list l is modified as a side-effect of this function. */

extern BMPtrList OrderedInsertBMPtrList (BMPtrList l, BMPtr e, BMPtrCmpFctType fcmp);
   /* Inserts the element e into the list l maintaining l in
    * ascending order with respect to the compare fcmp. 
    * The list l is modified as a side-effect of this function. */

extern BMPtrListPtr RefEndConsBMPtrList (BMPtrListPtr addr, BMPtr e);
   /* Appends an element e to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern BMPtrListPtr RefEndAppBMPtrList (BMPtrListPtr addr, BMPtrList l);
   /* Appends a list l to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern int ElemInBMPtrList (BMPtr e, BMPtrList l, BMPtrCmpFctType cmpfct);
   /* This function returns true (1) iff the element e is in the List l.
    * List elements are compared by the function cmpfct. */

extern BMPtrList AddToSetBMPtrList (BMPtr e, BMPtrList l, BMPtrCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. */

extern BMPtrList AddToOrderedSetBMPtrList 
       (BMPtr e, BMPtrList l, BMPtrCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. l is assumed to be ordered increasingly in the sense of
    * cmpfct. */

extern BMPtrList MapBMPtrList (BMPtrList l, BMPtrMapFct f);
   /* Returns a new BMPtrList obtained by applying f to each element of l. */

extern int CompBMPtrList (BMPtrList l1, BMPtrList l2, BMPtrCmpFctType f);
   /* Compares the lists l1 and l2 lexicographically by applying f
    * to the corresponding elements. */

extern BMPtr SumBMPtrList (BMPtrList l, BMPtrSumFct f, BMPtr a);
   /* Applies the binary function f to the elements of the List:
    *   f( f(... f(a, e1), e2, ...), en)
    * If l is empty a is returned. */

#else

extern void FinlBMPtrList ();
extern BMPtrList ConsBMPtrList ();
extern BMPtr HeadBMPtrList ();
extern BMPtrList TailBMPtrList ();
extern int LengthBMPtrList ();
extern BMPtr IthElemBMPtrList ();
extern BMPtrList CopyBMPtrList ();
extern BMPtrList AppBMPtrList ();
extern BMPtrList AppElBMPtrList ();
extern void InsertAfterBMPtrList ();
extern BMPtrList OrderedInsertBMPtrList ();
extern BMPtrListPtr RefEndConsBMPtrList ();
extern BMPtrListPtr RefEndAppBMPtrList ();
extern int ElemInBMPtrList ();
extern BMPtrList AddToSetBMPtrList ();
extern BMPtrList MapBMPtrList ();
extern int CompBMPtrList ();
extern BMPtr SumBMPtrList ();

#endif

#ifdef MONITOR
#define DAPTO_RESULTBMPtrList(l) DAPTO_RESULT_PTR(l)
#define DAPTO_ARGBMPtrList(l)    DAPTO_ARG_PTR (l, BMPtrList)
#endif

#endif
