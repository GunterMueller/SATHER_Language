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
    


#include "OvrPtrList.h"
#include "err.h"
#include "obstack.h"

typedef struct {
  Obstack space;
  void *baseptr;
} Dyn, *DynP;

static DynP OvrPtrListSpace = (DynP)0;

#if defined(__STDC__) || defined(__cplusplus)
void FinlOvrPtrList (void)
#else
void FinlOvrPtrList ()
#endif
{
    if (OvrPtrListSpace != (DynP)0)
    {  obstack_free(&(OvrPtrListSpace->space), OvrPtrListSpace->baseptr);
       OvrPtrListSpace->baseptr = obstack_alloc(&(OvrPtrListSpace->space), 0);
    }
}/* FinlOvrPtrList */

#if defined(__STDC__) || defined(__cplusplus)
OvrPtrList ConsOvrPtrList (OvrPtr e, OvrPtrList l)
#else
OvrPtrList ConsOvrPtrList (e, l)
        OvrPtr  e;
        OvrPtrList      l;
#endif
{
    OvrPtrList  h;

    if (OvrPtrListSpace == (DynP)0)
    {   OvrPtrListSpace = (DynP) malloc (sizeof(Dyn));
        if (OvrPtrListSpace == (DynP)0)
        {  message (DEADLY, "no space for OvrPtrList", 0, (POSITION*)0);
           exit (1);
        }
        obstack_init(&(OvrPtrListSpace->space));
        OvrPtrListSpace->baseptr =
                obstack_alloc(&(OvrPtrListSpace->space), 0);
    }

    h = (OvrPtrList)obstack_alloc(&(OvrPtrListSpace->space),
                                  sizeof (struct _OvrPtrLE));
    h->head = e;
    h->tail= l;
    return (h);
}/* ConsOvrPtrList */

#if defined(__STDC__) || defined(__cplusplus)
OvrPtr HeadOvrPtrList (OvrPtrList l)
#else
OvrPtr HeadOvrPtrList (l)
        OvrPtrList      l;
#endif
{
    if (l == NULLOvrPtrList)
    {
        message (DEADLY, "HeadOvrPtrList: empty list", 0, (POSITION*)0);
        /* return ((OvrPtr)0); */
    } /* if */
    return (l->head);
}/* HeadOvrPtrList */

#if defined(__STDC__) || defined(__cplusplus)
OvrPtrList TailOvrPtrList (OvrPtrList l)
#else
OvrPtrList TailOvrPtrList (l)
        OvrPtrList      l;
#endif
{
    return ((l==NULLOvrPtrList) ? NULLOvrPtrList : l->tail);
}/* TailOvrPtrList */

#if defined(__STDC__) || defined(__cplusplus)
int LengthOvrPtrList (OvrPtrList l)
#else
int LengthOvrPtrList (l)
        OvrPtrList      l;
#endif
{
    int res = 0;

    for (; l; l = l->tail)
        res++;
    return (res);
}/* LengthOvrPtrList */

#if defined(__STDC__) || defined(__cplusplus)
OvrPtr IthElemOvrPtrList (OvrPtrList l, int i)
#else
OvrPtr IthElemOvrPtrList (l, i)
        OvrPtrList      l;
        int     i;
#endif
{
    while ((i>1) && l)
    {
        i--;
        l = l->tail;
    }

    if ((i<=0) || (l==NULLOvrPtrList))
        message (DEADLY, "IthElemOvrPtrList: no such element",
                 0, (POSITION*)0);
    return (l->head);
}/* IthOvrPtrList */


#if defined(__STDC__) || defined(__cplusplus)
OvrPtrList CopyOvrPtrList (OvrPtrList l, OvrPtrMapFct cp)
#else
OvrPtrList CopyOvrPtrList (l, cp)
        OvrPtrList l;
        OvrPtrMapFct    cp;
#endif
{
    OvrPtrList NewList=NULLOvrPtrList, *addr = &NewList;

    while (l)
    {
        (*addr) = ConsOvrPtrList (cp (l->head), NULLOvrPtrList);
        addr = &((*addr)->tail);
        l = l->tail;
    }
    return (NewList);
}/* CopyOvrPtrList */

#if defined(__STDC__) || defined(__cplusplus)
OvrPtrList AppOvrPtrList (OvrPtrList l1, OvrPtrList l2)
#else
OvrPtrList AppOvrPtrList (l1, l2)
        OvrPtrList      l1, l2;
#endif
{
    OvrPtrList  NewList;
    OvrPtrList  *addr = &NewList;

    if (!l1) return (l2);
    if (!l2) return (l1);

    while (l1) {
        (*addr) = ConsOvrPtrList (l1->head, NULLOvrPtrList);
        addr = &((*addr)->tail);
        l1 = l1->tail;
    }
    (*addr) = l2;

    return (NewList);
}/* AppOvrPtrList */

#if defined(__STDC__) || defined(__cplusplus)
OvrPtrList AppElOvrPtrList (OvrPtrList l, OvrPtr e)
#else
OvrPtrList AppElOvrPtrList (l, e)
        OvrPtrList      l;
        OvrPtr  e;
#endif
{
    OvrPtrList  res = l;
    if (!l)
        return (ConsOvrPtrList (e, NULLOvrPtrList));

    while (l->tail)
        l = l->tail;
    l->tail = ConsOvrPtrList (e, NULLOvrPtrList);

    return (res);
} /* AppElOvrPtrList */


#if defined(__STDC__) || defined(__cplusplus)
void InsertAfterOvrPtrList (OvrPtrList l, OvrPtr e)
#else
void InsertAfterOvrPtrList (l, e)
        OvrPtrList      l;
        OvrPtr  e;
#endif
{
    if (!l)
        message (DEADLY, "InsertAfterOvrPtrList: null list", 0, (POSITION*)0);
    else
        l->tail = ConsOvrPtrList (e, l->tail);
}/* InsertAfterOvrPtrList */

#if defined(__STDC__) || defined(__cplusplus)
OvrPtrList OrderedInsertOvrPtrList (OvrPtrList l, OvrPtr e, OvrPtrCmpFctType fcmp)
#else
OvrPtrList OrderedInsertOvrPtrList (l, e, fcmp)
        OvrPtrList      l;
        OvrPtr  e;
        OvrPtrCmpFctType fcmp;
#endif
{
    OvrPtrList  p;
    if (!l)
        return (ConsOvrPtrList (e, NULLOvrPtrList));
    if (fcmp (e, l->head) <= 0)
        return (ConsOvrPtrList (e, l));
    p = l;
    while (p->tail && (fcmp (e, p->tail->head) > 0))
        p = p->tail;
    p->tail = ConsOvrPtrList (e, p->tail);
    return (l);
}/* OrderedInsertOvrPtrList */

#if defined(__STDC__) || defined(__cplusplus)
OvrPtrListPtr RefEndConsOvrPtrList (OvrPtrListPtr addr, OvrPtr e)
#else
OvrPtrListPtr RefEndConsOvrPtrList (addr, e)
        OvrPtrListPtr   addr;
        OvrPtr          e;
#endif
{
    if (!addr)
    {
        message (DEADLY, "RefEndConsOvrPtrList: no OvrPtrList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    (*addr) = ConsOvrPtrList (e, NULLOvrPtrList);
    return (&((*addr)->tail));
}/* RefEndConsOvrPtrList */

#if defined(__STDC__) || defined(__cplusplus)
OvrPtrListPtr RefEndAppOvrPtrList (OvrPtrListPtr addr, OvrPtrList l)
#else
OvrPtrListPtr RefEndAppOvrPtrList (addr, l)
        OvrPtrListPtr   addr;
        OvrPtrList              l;
#endif
{
    if (!addr) {
        message (DEADLY, "RefEndAppOvrPtrList: no OvrPtrList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    if (!l)
        return addr;

    (*addr) = l;

    while (l->tail)
        l = l->tail;
    return (&(l->tail));
}/* RefEndAppOvrPtrList */

#if defined(__STDC__) || defined(__cplusplus)
int ElemInOvrPtrList (OvrPtr e, OvrPtrList l, OvrPtrCmpFctType fcmp)
#else
int ElemInOvrPtrList (e, l, fcmp)
        OvrPtr  e;
        OvrPtrList      l;
        OvrPtrCmpFctType        fcmp;
#endif
{
    while (l != NULLOvrPtrList) {
        if (fcmp (e, l->head) == 0)
            return (1);
        l = l->tail;
    }
    return (0);
}/* ElemInOvrPtrList */

#if defined(__STDC__) || defined(__cplusplus)
OvrPtrList AddToSetOvrPtrList (OvrPtr e, OvrPtrList l, OvrPtrCmpFctType fcmp)
#else
OvrPtrList AddToSetOvrPtrList (e, l, fcmp)
        OvrPtr  e;
        OvrPtrList      l;
        OvrPtrCmpFctType        fcmp;
#endif
{
    if (ElemInOvrPtrList (e, l, fcmp))
        return (l);
    else
        return (ConsOvrPtrList (e, l));
}/* AddToSetOvrPtrList */


#if defined(__STDC__) || defined(__cplusplus)
OvrPtrList AddToOrderedSetOvrPtrList (OvrPtr e, OvrPtrList l, OvrPtrCmpFctType fcmp)
#else
OvrPtrList AddToOrderedSetOvrPtrList (e, l, fcmp)
        OvrPtr  e;
        OvrPtrList      l;
        OvrPtrCmpFctType fcmp;
#endif
{   int test;
    OvrPtrList  p;
    if (!l)
        return (ConsOvrPtrList (e, NULLOvrPtrList));
    if ((test = fcmp (e, l->head)) < 0)
        return (ConsOvrPtrList (e, l));
    if (test == 0) return l;
    p = l;
    while (p->tail && ((test = fcmp (e, p->tail->head)) > 0))
        p = p->tail;
    if (test) p->tail = ConsOvrPtrList (e, p->tail);
    return (l);
}/* AddToOrderedSetOvrPtrList */

#if defined(__STDC__) || defined(__cplusplus)
OvrPtrList MapOvrPtrList (OvrPtrList l, OvrPtrMapFct f)
#else
OvrPtrList MapOvrPtrList (l, f)
        OvrPtrList      l;
        OvrPtrMapFct f;
#endif
{
    OvrPtrList NewList = NULLOvrPtrList;
    OvrPtrList last = NULLOvrPtrList;

    while (l)
    {
        if (!NewList) {
            NewList = ConsOvrPtrList ((f (l->head)), NULLOvrPtrList);
            last = NewList;
        }
        else
        {
            last->tail = ConsOvrPtrList ((f (l->head)), NULLOvrPtrList);
            last = last->tail;
        }
        l = l->tail;
    }
    return (NewList);
}/* MapOvrPtrList */

#if defined(__STDC__) || defined(__cplusplus)
int CompOvrPtrList (OvrPtrList l1, OvrPtrList l2, OvrPtrCmpFctType fcmp)
#else
int CompOvrPtrList (l1, l2, fcmp)
        OvrPtrList      l1, l2;
        OvrPtrCmpFctType fcmp;
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
}/* CompOvrPtrList */

#if defined(__STDC__) || defined(__cplusplus)
OvrPtr SumOvrPtrList (OvrPtrList l, OvrPtrSumFct f, OvrPtr a)
#else
OvrPtr SumOvrPtrList (l, f, a)
        OvrPtrList      l;
        OvrPtr ((*f) ());
        OvrPtr  a;
#endif
{
    while (l) {
        a = (f (a, l->head));
        l = l->tail;
    }
    return (a);
}/* SumOvrPtrList */
