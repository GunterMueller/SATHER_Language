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
    

#ifndef _MethArgInfoLIST_H
#define _MethArgInfoLIST_H

/* include header file defining MethArgInfo if MethodArgument is set: */
#define EMPTYMethodArgumentHDR
#ifndef EMPTYHDR
#include "MethodArgument.h"
#endif
#undef EMPTYMethodArgumentHDR

#include "MethArgInfoFunctionTypes.h"

typedef struct _MethArgInfoLE *MethArgInfoList;
typedef MethArgInfoList    *MethArgInfoListPtr;

struct _MethArgInfoLE {
MethArgInfo             head;
MethArgInfoList tail;
};

#define NULLMethArgInfoList             ((MethArgInfoList)0)
#define NullMethArgInfoList()   ((MethArgInfoList)0)
#define SingleMethArgInfoList(e)        (ConsMethArgInfoList((e),NULLMethArgInfoList))

#if defined(__STDC__) || defined(__cplusplus)

extern void FinlMethArgInfoList(void);
   /* Deallocates all MethArgInfoLists. */
   /* Dynamic storage is allocated on first need */

extern MethArgInfoList ConsMethArgInfoList (MethArgInfo e, MethArgInfoList l);
   /* Constructs a MethArgInfoList of an element e and a given tail l.
    * e is the first element of the list. */

extern MethArgInfo HeadMethArgInfoList (MethArgInfoList l);
   /* Returns the first element of the list l.
    * The list l must not be empty. */

extern MethArgInfoList TailMethArgInfoList (MethArgInfoList l);
   /* Returns the tail of the list l.
    * If l is empty, an empty list is returned. */

extern int LengthMethArgInfoList (MethArgInfoList l);
   /* Returns the number of elements in the list l. */

extern MethArgInfo IthElemMethArgInfoList (MethArgInfoList l, int i);
   /* Returns the i-th element of the List l. The head of l
    * is referred to as 1. If the value of
    * i is greater than the length of the list, an error
    * is reported and the program exits.
    */

extern MethArgInfoList CopyMethArgInfoList (MethArgInfoList l, MethArgInfoMapFct cp);
   /* Copies the list l. Elements are copied by calls of cp. */

extern MethArgInfoList AppMethArgInfoList (MethArgInfoList l1, MethArgInfoList l2);
   /* Concatenates two lists l1 and l2. The resulting list contains l2 at
    * the end of a copy of list l1. */

extern MethArgInfoList AppElMethArgInfoList (MethArgInfoList l, MethArgInfo e);
   /* Appends an element e to the list l.
    * The list l is not copied, it is modified as a side-effect
    * of this function. */

extern void InsertAfterMethArgInfoList (MethArgInfoList l, MethArgInfo e);
   /* This function requires a non-empty list l. The element e is inserted
    * just after the first element of l. 
    * The list l is modified as a side-effect of this function. */

extern MethArgInfoList OrderedInsertMethArgInfoList (MethArgInfoList l, MethArgInfo e, MethArgInfoCmpFctType fcmp);
   /* Inserts the element e into the list l maintaining l in
    * ascending order with respect to the compare fcmp. 
    * The list l is modified as a side-effect of this function. */

extern MethArgInfoListPtr RefEndConsMethArgInfoList (MethArgInfoListPtr addr, MethArgInfo e);
   /* Appends an element e to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern MethArgInfoListPtr RefEndAppMethArgInfoList (MethArgInfoListPtr addr, MethArgInfoList l);
   /* Appends a list l to the end of a list given by its address addr.
    * The address where the next element may be appended is returned.
    * The list is modified as a side-effect of this function. */

extern int ElemInMethArgInfoList (MethArgInfo e, MethArgInfoList l, MethArgInfoCmpFctType cmpfct);
   /* This function returns true (1) iff the element e is in the List l.
    * List elements are compared by the function cmpfct. */

extern MethArgInfoList AddToSetMethArgInfoList (MethArgInfo e, MethArgInfoList l, MethArgInfoCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. */

extern MethArgInfoList AddToOrderedSetMethArgInfoList 
       (MethArgInfo e, MethArgInfoList l, MethArgInfoCmpFctType cmpfct);
   /* A list is returned that has e as an element.
    * l is checked whether it already contains e using the compare
    * function cmpfct. l is assumed to be ordered increasingly in the sense of
    * cmpfct. */

extern MethArgInfoList MapMethArgInfoList (MethArgInfoList l, MethArgInfoMapFct f);
   /* Returns a new MethArgInfoList obtained by applying f to each element of l. */

extern int CompMethArgInfoList (MethArgInfoList l1, MethArgInfoList l2, MethArgInfoCmpFctType f);
   /* Compares the lists l1 and l2 lexicographically by applying f
    * to the corresponding elements. */

extern MethArgInfo SumMethArgInfoList (MethArgInfoList l, MethArgInfoSumFct f, MethArgInfo a);
   /* Applies the binary function f to the elements of the List:
    *   f( f(... f(a, e1), e2, ...), en)
    * If l is empty a is returned. */

#else

extern void FinlMethArgInfoList ();
extern MethArgInfoList ConsMethArgInfoList ();
extern MethArgInfo HeadMethArgInfoList ();
extern MethArgInfoList TailMethArgInfoList ();
extern int LengthMethArgInfoList ();
extern MethArgInfo IthElemMethArgInfoList ();
extern MethArgInfoList CopyMethArgInfoList ();
extern MethArgInfoList AppMethArgInfoList ();
extern MethArgInfoList AppElMethArgInfoList ();
extern void InsertAfterMethArgInfoList ();
extern MethArgInfoList OrderedInsertMethArgInfoList ();
extern MethArgInfoListPtr RefEndConsMethArgInfoList ();
extern MethArgInfoListPtr RefEndAppMethArgInfoList ();
extern int ElemInMethArgInfoList ();
extern MethArgInfoList AddToSetMethArgInfoList ();
extern MethArgInfoList MapMethArgInfoList ();
extern int CompMethArgInfoList ();
extern MethArgInfo SumMethArgInfoList ();

#endif

#ifdef MONITOR
#define DAPTO_RESULTMethArgInfoList(l) DAPTO_RESULT_PTR(l)
#define DAPTO_ARGMethArgInfoList(l)    DAPTO_ARG_PTR (l, MethArgInfoList)
#endif

#endif
