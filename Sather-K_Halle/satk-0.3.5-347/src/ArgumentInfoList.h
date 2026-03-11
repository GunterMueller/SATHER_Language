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
    

#ifndef _ArgumentInfoLIST_H
#define _ArgumentInfoLIST_H

/* include header file defining ArgumentInfo if ArgumentParameter is set: */
#define EMPTYArgumentParameterHDR
#ifndef EMPTYHDR
#include "ArgumentParameter.h"
#endif
#undef EMPTYArgumentParameterHDR

#include "ArgumentInfoFunctionTypes.h"

typedef struct _ArgumentInfoLE *ArgumentInfoList;
typedef ArgumentInfoList    *ArgumentInfoListPtr;

struct _ArgumentInfoLE {
ArgumentInfo            head;
ArgumentInfoList        tail;
};

#define NULLArgumentInfoList            ((ArgumentInfoList)0)
#define NullArgumentInfoList()  ((ArgumentInfoList)0)
#define SingleArgumentInfoList(e)       (ConsArgumentInfoList((e),NULLArgumentInfoList))

#if defined(__STDC__) || defined(__cplusplus)

extern void FinlArgumentInfoList(void);
   /* Deallocates all ArgumentInfoLists. */
   /* Dynamic storage is allocated on first need */

extern ArgumentInfoList ConsArgumentInfoList (ArgumentInfo e, ArgumentInfoList l);
   /* Constructs a ArgumentInfoList of an element e and a given tail l.
    * e is the first element of the list. */

extern ArgumentInfo HeadArgumentInfoList (ArgumentInfoList l);
   /* Returns the first element of the list l.
    * The list l must not be empty. */

extern ArgumentInfoList TailArgumentInfoList (ArgumentInfoList l);
   /* Returns the tail of the list l.
    * If l is empty, an empty list is returned. */

extern int LengthArgumentInfoList (ArgumentInfoList l);
   /* Returns the number of elements in the list l. */

extern ArgumentInfo IthElemArgumentInfoList (ArgumentInfoList l, int i);
   /* Returns the i-th element of the List l. The head of l
    * is referred to as 1. If the value of
    * i is greater than the length of the list, an error
    * is reported and the program exits.
    */

extern ArgumentInfoList CopyArgumentInfoList (ArgumentInfoList l, ArgumentInfoMapFct cp);
   /* Copies the list l. Elements are copied by calls of cp. */

extern ArgumentInfoList AppArgumentInfoList (ArgumentInfoList l1, ArgumentInfoList l2);
   /* Concatenates two lists l1 and l2. The resulting list contains l2 at
    * the end of a copy of list l1. */

extern ArgumentInfoList AppElArgumentInfoList (ArgumentInfoList l, ArgumentInfo e);
   /* Appends an element e to the list l.
    * The list l is not copied, it is modified as a side-effect
    * of this function. */

extern void InsertAfterArgumentInfoList (ArgumentInfoList l, ArgumentInfo e);
   /* This function requires a non-empty list l. The element e is inserted
    * just after the first element of l. 
    * The list l is modified as a side-effect of this function. */

extern ArgumentInfoList OrderedInsertArgumentInfoList (ArgumentInfoList l, ArgumentInfo e, ArgumentInfoCmpFctType fcmp);
   /* Inserts the element e into the list l maintaining l in
    * ascending order with respect to the compare fcmp. 
    * The list l is modified as a side-effect of this function. */

extern ArgumentInfoListPtr RefEndConsArgumentInfoList (ArgumentInfoListPtr addr, ArgumentInfo e);
   /* Appends an element e to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern ArgumentInfoListPtr RefEndAppArgumentInfoList (ArgumentInfoListPtr addr, ArgumentInfoList l);
   /* Appends a list l to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern int ElemInArgumentInfoList (ArgumentInfo e, ArgumentInfoList l, ArgumentInfoCmpFctType cmpfct);
   /* This function returns true (1) iff the element e is in the List l.
    * List elements are compared by the function cmpfct. */

extern ArgumentInfoList AddToSetArgumentInfoList (ArgumentInfo e, ArgumentInfoList l, ArgumentInfoCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. */

extern ArgumentInfoList AddToOrderedSetArgumentInfoList 
       (ArgumentInfo e, ArgumentInfoList l, ArgumentInfoCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. l is assumed to be ordered increasingly in the sense of
    * cmpfct. */

extern ArgumentInfoList MapArgumentInfoList (ArgumentInfoList l, ArgumentInfoMapFct f);
   /* Returns a new ArgumentInfoList obtained by applying f to each element of l. */

extern int CompArgumentInfoList (ArgumentInfoList l1, ArgumentInfoList l2, ArgumentInfoCmpFctType f);
   /* Compares the lists l1 and l2 lexicographically by applying f
    * to the corresponding elements. */

extern ArgumentInfo SumArgumentInfoList (ArgumentInfoList l, ArgumentInfoSumFct f, ArgumentInfo a);
   /* Applies the binary function f to the elements of the List:
    *   f( f(... f(a, e1), e2, ...), en)
    * If l is empty a is returned. */

#else

extern void FinlArgumentInfoList ();
extern ArgumentInfoList ConsArgumentInfoList ();
extern ArgumentInfo HeadArgumentInfoList ();
extern ArgumentInfoList TailArgumentInfoList ();
extern int LengthArgumentInfoList ();
extern ArgumentInfo IthElemArgumentInfoList ();
extern ArgumentInfoList CopyArgumentInfoList ();
extern ArgumentInfoList AppArgumentInfoList ();
extern ArgumentInfoList AppElArgumentInfoList ();
extern void InsertAfterArgumentInfoList ();
extern ArgumentInfoList OrderedInsertArgumentInfoList ();
extern ArgumentInfoListPtr RefEndConsArgumentInfoList ();
extern ArgumentInfoListPtr RefEndAppArgumentInfoList ();
extern int ElemInArgumentInfoList ();
extern ArgumentInfoList AddToSetArgumentInfoList ();
extern ArgumentInfoList MapArgumentInfoList ();
extern int CompArgumentInfoList ();
extern ArgumentInfo SumArgumentInfoList ();

#endif

#ifdef MONITOR
#define DAPTO_RESULTArgumentInfoList(l) DAPTO_RESULT_PTR(l)
#define DAPTO_ARGArgumentInfoList(l)    DAPTO_ARG_PTR (l, ArgumentInfoList)
#endif

#endif
