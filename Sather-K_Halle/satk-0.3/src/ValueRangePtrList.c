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
    


#include "ValueRangePtrList.h"
#include "err.h"
#include "obstack.h"

typedef struct {
  Obstack space;
  void *baseptr;
} Dyn, *DynP;

static DynP ValueRangePtrListSpace = (DynP)0;

#if defined(__STDC__) || defined(__cplusplus)
void FinlValueRangePtrList (void)
#else
void FinlValueRangePtrList ()
#endif
{
    if (ValueRangePtrListSpace != (DynP)0)
    {  obstack_free(&(ValueRangePtrListSpace->space), ValueRangePtrListSpace->baseptr);
       ValueRangePtrListSpace->baseptr = obstack_alloc(&(ValueRangePtrListSpace->space), 0);
    }
}/* FinlValueRangePtrList */

#if defined(__STDC__) || defined(__cplusplus)
ValueRangePtrList ConsValueRangePtrList (ValueRangePtr e, ValueRangePtrList l)
#else
ValueRangePtrList ConsValueRangePtrList (e, l)
        ValueRangePtr   e;
        ValueRangePtrList       l;
#endif
{
    ValueRangePtrList   h;

    if (ValueRangePtrListSpace == (DynP)0)
    {   ValueRangePtrListSpace = (DynP) malloc (sizeof(Dyn));
        if (ValueRangePtrListSpace == (DynP)0)
        {  message (DEADLY, "no space for ValueRangePtrList", 0, (POSITION*)0);
           exit (1);
        }
        obstack_init(&(ValueRangePtrListSpace->space));
        ValueRangePtrListSpace->baseptr =
                obstack_alloc(&(ValueRangePtrListSpace->space), 0);
    }

    h = (ValueRangePtrList)obstack_alloc(&(ValueRangePtrListSpace->space),
                                  sizeof (struct _ValueRangePtrLE));
    h->head = e;
    h->tail= l;
    return (h);
}/* ConsValueRangePtrList */

#if defined(__STDC__) || defined(__cplusplus)
ValueRangePtr HeadValueRangePtrList (ValueRangePtrList l)
#else
ValueRangePtr HeadValueRangePtrList (l)
        ValueRangePtrList       l;
#endif
{
    if (l == NULLValueRangePtrList)
    {
        message (DEADLY, "HeadValueRangePtrList: empty list", 0, (POSITION*)0);
        /* return ((ValueRangePtr)0); */
    } /* if */
    return (l->head);
}/* HeadValueRangePtrList */

#if defined(__STDC__) || defined(__cplusplus)
ValueRangePtrList TailValueRangePtrList (ValueRangePtrList l)
#else
ValueRangePtrList TailValueRangePtrList (l)
        ValueRangePtrList       l;
#endif
{
    return ((l==NULLValueRangePtrList) ? NULLValueRangePtrList : l->tail);
}/* TailValueRangePtrList */

#if defined(__STDC__) || defined(__cplusplus)
int LengthValueRangePtrList (ValueRangePtrList l)
#else
int LengthValueRangePtrList (l)
        ValueRangePtrList       l;
#endif
{
    int res = 0;

    for (; l; l = l->tail)
        res++;
    return (res);
}/* LengthValueRangePtrList */

#if defined(__STDC__) || defined(__cplusplus)
ValueRangePtr IthElemValueRangePtrList (ValueRangePtrList l, int i)
#else
ValueRangePtr IthElemValueRangePtrList (l, i)
        ValueRangePtrList       l;
        int     i;
#endif
{
    while ((i>1) && l)
    {
        i--;
        l = l->tail;
    }

    if ((i<=0) || (l==NULLValueRangePtrList))
        message (DEADLY, "IthElemValueRangePtrList: no such element",
                 0, (POSITION*)0);
    return (l->head);
}/* IthValueRangePtrList */


#if defined(__STDC__) || defined(__cplusplus)
ValueRangePtrList CopyValueRangePtrList (ValueRangePtrList l, ValueRangePtrMapFct cp)
#else
ValueRangePtrList CopyValueRangePtrList (l, cp)
        ValueRangePtrList l;
        ValueRangePtrMapFct     cp;
#endif
{
    ValueRangePtrList NewList=NULLValueRangePtrList, *addr = &NewList;

    while (l)
    {
        (*addr) = ConsValueRangePtrList (cp (l->head), NULLValueRangePtrList);
        addr = &((*addr)->tail);
        l = l->tail;
    }
    return (NewList);
}/* CopyValueRangePtrList */

#if defined(__STDC__) || defined(__cplusplus)
ValueRangePtrList AppValueRangePtrList (ValueRangePtrList l1, ValueRangePtrList l2)
#else
ValueRangePtrList AppValueRangePtrList (l1, l2)
        ValueRangePtrList       l1, l2;
#endif
{
    ValueRangePtrList   NewList;
    ValueRangePtrList   *addr = &NewList;

    if (!l1) return (l2);
    if (!l2) return (l1);

    while (l1) {
        (*addr) = ConsValueRangePtrList (l1->head, NULLValueRangePtrList);
        addr = &((*addr)->tail);
        l1 = l1->tail;
    }
    (*addr) = l2;

    return (NewList);
}/* AppValueRangePtrList */

#if defined(__STDC__) || defined(__cplusplus)
ValueRangePtrList AppElValueRangePtrList (ValueRangePtrList l, ValueRangePtr e)
#else
ValueRangePtrList AppElValueRangePtrList (l, e)
        ValueRangePtrList       l;
        ValueRangePtr   e;
#endif
{
    ValueRangePtrList   res = l;
    if (!l)
        return (ConsValueRangePtrList (e, NULLValueRangePtrList));

    while (l->tail)
        l = l->tail;
    l->tail = ConsValueRangePtrList (e, NULLValueRangePtrList);

    return (res);
} /* AppElValueRangePtrList */


#if defined(__STDC__) || defined(__cplusplus)
void InsertAfterValueRangePtrList (ValueRangePtrList l, ValueRangePtr e)
#else
void InsertAfterValueRangePtrList (l, e)
        ValueRangePtrList       l;
        ValueRangePtr   e;
#endif
{
    if (!l)
        message (DEADLY, "InsertAfterValueRangePtrList: null list", 0, (POSITION*)0);
    else
        l->tail = ConsValueRangePtrList (e, l->tail);
}/* InsertAfterValueRangePtrList */

#if defined(__STDC__) || defined(__cplusplus)
ValueRangePtrList OrderedInsertValueRangePtrList (ValueRangePtrList l, ValueRangePtr e, ValueRangePtrCmpFctType fcmp)
#else
ValueRangePtrList OrderedInsertValueRangePtrList (l, e, fcmp)
        ValueRangePtrList       l;
        ValueRangePtr   e;
        ValueRangePtrCmpFctType fcmp;
#endif
{
    ValueRangePtrList   p;
    if (!l)
        return (ConsValueRangePtrList (e, NULLValueRangePtrList));
    if (fcmp (e, l->head) <= 0)
        return (ConsValueRangePtrList (e, l));
    p = l;
    while (p->tail && (fcmp (e, p->tail->head) > 0))
        p = p->tail;
    p->tail = ConsValueRangePtrList (e, p->tail);
    return (l);
}/* OrderedInsertValueRangePtrList */

#if defined(__STDC__) || defined(__cplusplus)
ValueRangePtrListPtr RefEndConsValueRangePtrList (ValueRangePtrListPtr addr, ValueRangePtr e)
#else
ValueRangePtrListPtr RefEndConsValueRangePtrList (addr, e)
        ValueRangePtrListPtr    addr;
        ValueRangePtr           e;
#endif
{
    if (!addr)
    {
        message (DEADLY, "RefEndConsValueRangePtrList: no ValueRangePtrList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    (*addr) = ConsValueRangePtrList (e, NULLValueRangePtrList);
    return (&((*addr)->tail));
}/* RefEndConsValueRangePtrList */

#if defined(__STDC__) || defined(__cplusplus)
ValueRangePtrListPtr RefEndAppValueRangePtrList (ValueRangePtrListPtr addr, ValueRangePtrList l)
#else
ValueRangePtrListPtr RefEndAppValueRangePtrList (addr, l)
        ValueRangePtrListPtr    addr;
        ValueRangePtrList               l;
#endif
{
    if (!addr) {
        message (DEADLY, "RefEndAppValueRangePtrList: no ValueRangePtrList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    if (!l)
        return addr;

    (*addr) = l;

    while (l->tail)
        l = l->tail;
    return (&(l->tail));
}/* RefEndAppValueRangePtrList */

#if defined(__STDC__) || defined(__cplusplus)
int ElemInValueRangePtrList (ValueRangePtr e, ValueRangePtrList l, ValueRangePtrCmpFctType fcmp)
#else
int ElemInValueRangePtrList (e, l, fcmp)
        ValueRangePtr   e;
        ValueRangePtrList       l;
        ValueRangePtrCmpFctType fcmp;
#endif
{
    while (l != NULLValueRangePtrList) {
        if (fcmp (e, l->head) == 0)
            return (1);
        l = l->tail;
    }
    return (0);
}/* ElemInValueRangePtrList */

#if defined(__STDC__) || defined(__cplusplus)
ValueRangePtrList AddToSetValueRangePtrList (ValueRangePtr e, ValueRangePtrList l, ValueRangePtrCmpFctType fcmp)
#else
ValueRangePtrList AddToSetValueRangePtrList (e, l, fcmp)
        ValueRangePtr   e;
        ValueRangePtrList       l;
        ValueRangePtrCmpFctType fcmp;
#endif
{
    if (ElemInValueRangePtrList (e, l, fcmp))
        return (l);
    else
        return (ConsValueRangePtrList (e, l));
}/* AddToSetValueRangePtrList */


#if defined(__STDC__) || defined(__cplusplus)
ValueRangePtrList AddToOrderedSetValueRangePtrList (ValueRangePtr e, ValueRangePtrList l, ValueRangePtrCmpFctType fcmp)
#else
ValueRangePtrList AddToOrderedSetValueRangePtrList (e, l, fcmp)
        ValueRangePtr  e;
        ValueRangePtrList      l;
        ValueRangePtrCmpFctType fcmp;
#endif
{   int test;
    ValueRangePtrList  p;
    if (!l)
        return (ConsValueRangePtrList (e, NULLValueRangePtrList));
    if ((test = fcmp (e, l->head)) < 0)
        return (ConsValueRangePtrList (e, l));
    if (test == 0) return l;
    p = l;
    while (p->tail && ((test = fcmp (e, p->tail->head)) > 0))
        p = p->tail;
    if (test) p->tail = ConsValueRangePtrList (e, p->tail);
    return (l);
}/* AddToOrderedSetValueRangePtrList */

#if defined(__STDC__) || defined(__cplusplus)
ValueRangePtrList MapValueRangePtrList (ValueRangePtrList l, ValueRangePtrMapFct f)
#else
ValueRangePtrList MapValueRangePtrList (l, f)
        ValueRangePtrList       l;
        ValueRangePtrMapFct f;
#endif
{
    ValueRangePtrList NewList = NULLValueRangePtrList;
    ValueRangePtrList last = NULLValueRangePtrList;

    while (l)
    {
        if (!NewList) {
            NewList = ConsValueRangePtrList ((f (l->head)), NULLValueRangePtrList);
            last = NewList;
        }
        else
        {
            last->tail = ConsValueRangePtrList ((f (l->head)), NULLValueRangePtrList);
            last = last->tail;
        }
        l = l->tail;
    }
    return (NewList);
}/* MapValueRangePtrList */

#if defined(__STDC__) || defined(__cplusplus)
int CompValueRangePtrList (ValueRangePtrList l1, ValueRangePtrList l2, ValueRangePtrCmpFctType fcmp)
#else
int CompValueRangePtrList (l1, l2, fcmp)
        ValueRangePtrList       l1, l2;
        ValueRangePtrCmpFctType fcmp;
#endif
{
    int res = 0;
    while (l1 && l2 && (res == 0)) {
        res = (fcmp (l1->head, l2->head));
        l1 = l1->tail;
        l2 = l2->tail;
    }
    if (l1 && !l2)
        return (1);
    if (!l1 && l2)
        return (-1);
    return (res);
}/* CompValueRangePtrList */

#if defined(__STDC__) || defined(__cplusplus)
ValueRangePtr SumValueRangePtrList (ValueRangePtrList l, ValueRangePtrSumFct f, ValueRangePtr a)
#else
ValueRangePtr SumValueRangePtrList (l, f, a)
        ValueRangePtrList       l;
        ValueRangePtr ((*f) ());
        ValueRangePtr   a;
#endif
{
    while (l) {
        a = (f (a, l->head));
        l = l->tail;
    }
    return (a);
}/* SumValueRangePtrList */
