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
    


#include "InheritanceInfoList.h"
#include "err.h"
#include "obstack.h"

typedef struct {
  Obstack space;
  void *baseptr;
} Dyn, *DynP;

static DynP InheritanceInfoListSpace = (DynP)0;

#if defined(__STDC__) || defined(__cplusplus)
void FinlInheritanceInfoList (void)
#else
void FinlInheritanceInfoList ()
#endif
{
    if (InheritanceInfoListSpace != (DynP)0)
    {  obstack_free(&(InheritanceInfoListSpace->space), InheritanceInfoListSpace->baseptr);
       InheritanceInfoListSpace->baseptr = obstack_alloc(&(InheritanceInfoListSpace->space), 0);
    }
}/* FinlInheritanceInfoList */

#if defined(__STDC__) || defined(__cplusplus)
InheritanceInfoList ConsInheritanceInfoList (InheritanceInfo e, InheritanceInfoList l)
#else
InheritanceInfoList ConsInheritanceInfoList (e, l)
        InheritanceInfo e;
        InheritanceInfoList     l;
#endif
{
    InheritanceInfoList h;

    if (InheritanceInfoListSpace == (DynP)0)
    {   InheritanceInfoListSpace = (DynP) malloc (sizeof(Dyn));
        if (InheritanceInfoListSpace == (DynP)0)
        {  message (DEADLY, "no space for InheritanceInfoList", 0, (POSITION*)0);
           exit (1);
        }
        obstack_init(&(InheritanceInfoListSpace->space));
        InheritanceInfoListSpace->baseptr =
                obstack_alloc(&(InheritanceInfoListSpace->space), 0);
    }

    h = (InheritanceInfoList)obstack_alloc(&(InheritanceInfoListSpace->space),
                                  sizeof (struct _InheritanceInfoLE));
    h->head = e;
    h->tail= l;
    return (h);
}/* ConsInheritanceInfoList */

#if defined(__STDC__) || defined(__cplusplus)
InheritanceInfo HeadInheritanceInfoList (InheritanceInfoList l)
#else
InheritanceInfo HeadInheritanceInfoList (l)
        InheritanceInfoList     l;
#endif
{
    if (l == NULLInheritanceInfoList)
    {
        message (DEADLY, "HeadInheritanceInfoList: empty list", 0, (POSITION*)0);
        /* return ((InheritanceInfo)0); */
    } /* if */
    return (l->head);
}/* HeadInheritanceInfoList */

#if defined(__STDC__) || defined(__cplusplus)
InheritanceInfoList TailInheritanceInfoList (InheritanceInfoList l)
#else
InheritanceInfoList TailInheritanceInfoList (l)
        InheritanceInfoList     l;
#endif
{
    return ((l==NULLInheritanceInfoList) ? NULLInheritanceInfoList : l->tail);
}/* TailInheritanceInfoList */

#if defined(__STDC__) || defined(__cplusplus)
int LengthInheritanceInfoList (InheritanceInfoList l)
#else
int LengthInheritanceInfoList (l)
        InheritanceInfoList     l;
#endif
{
    int res = 0;

    for (; l; l = l->tail)
        res++;
    return (res);
}/* LengthInheritanceInfoList */

#if defined(__STDC__) || defined(__cplusplus)
InheritanceInfo IthElemInheritanceInfoList (InheritanceInfoList l, int i)
#else
InheritanceInfo IthElemInheritanceInfoList (l, i)
        InheritanceInfoList     l;
        int     i;
#endif
{
    while ((i>1) && l)
    {
        i--;
        l = l->tail;
    }

    if ((i<=0) || (l==NULLInheritanceInfoList))
        message (DEADLY, "IthElemInheritanceInfoList: no such element",
                 0, (POSITION*)0);
    return (l->head);
}/* IthInheritanceInfoList */


#if defined(__STDC__) || defined(__cplusplus)
InheritanceInfoList CopyInheritanceInfoList (InheritanceInfoList l, InheritanceInfoMapFct cp)
#else
InheritanceInfoList CopyInheritanceInfoList (l, cp)
        InheritanceInfoList l;
        InheritanceInfoMapFct   cp;
#endif
{
    InheritanceInfoList NewList=NULLInheritanceInfoList, *addr = &NewList;

    while (l)
    {
        (*addr) = ConsInheritanceInfoList (cp (l->head), NULLInheritanceInfoList);
        addr = &((*addr)->tail);
        l = l->tail;
    }
    return (NewList);
}/* CopyInheritanceInfoList */

#if defined(__STDC__) || defined(__cplusplus)
InheritanceInfoList AppInheritanceInfoList (InheritanceInfoList l1, InheritanceInfoList l2)
#else
InheritanceInfoList AppInheritanceInfoList (l1, l2)
        InheritanceInfoList     l1, l2;
#endif
{
    InheritanceInfoList NewList;
    InheritanceInfoList *addr = &NewList;

    if (!l1) return (l2);
    if (!l2) return (l1);

    while (l1) {
        (*addr) = ConsInheritanceInfoList (l1->head, NULLInheritanceInfoList);
        addr = &((*addr)->tail);
        l1 = l1->tail;
    }
    (*addr) = l2;

    return (NewList);
}/* AppInheritanceInfoList */

#if defined(__STDC__) || defined(__cplusplus)
InheritanceInfoList AppElInheritanceInfoList (InheritanceInfoList l, InheritanceInfo e)
#else
InheritanceInfoList AppElInheritanceInfoList (l, e)
        InheritanceInfoList     l;
        InheritanceInfo e;
#endif
{
    InheritanceInfoList res = l;
    if (!l)
        return (ConsInheritanceInfoList (e, NULLInheritanceInfoList));

    while (l->tail)
        l = l->tail;
    l->tail = ConsInheritanceInfoList (e, NULLInheritanceInfoList);

    return (res);
} /* AppElInheritanceInfoList */


#if defined(__STDC__) || defined(__cplusplus)
void InsertAfterInheritanceInfoList (InheritanceInfoList l, InheritanceInfo e)
#else
void InsertAfterInheritanceInfoList (l, e)
        InheritanceInfoList     l;
        InheritanceInfo e;
#endif
{
    if (!l)
        message (DEADLY, "InsertAfterInheritanceInfoList: null list", 0, (POSITION*)0);
    else
        l->tail = ConsInheritanceInfoList (e, l->tail);
}/* InsertAfterInheritanceInfoList */

#if defined(__STDC__) || defined(__cplusplus)
InheritanceInfoList OrderedInsertInheritanceInfoList (InheritanceInfoList l, InheritanceInfo e, InheritanceInfoCmpFctType fcmp)
#else
InheritanceInfoList OrderedInsertInheritanceInfoList (l, e, fcmp)
        InheritanceInfoList     l;
        InheritanceInfo e;
        InheritanceInfoCmpFctType fcmp;
#endif
{
    InheritanceInfoList p;
    if (!l)
        return (ConsInheritanceInfoList (e, NULLInheritanceInfoList));
    if (fcmp (e, l->head) <= 0)
        return (ConsInheritanceInfoList (e, l));
    p = l;
    while (p->tail && (fcmp (e, p->tail->head) > 0))
        p = p->tail;
    p->tail = ConsInheritanceInfoList (e, p->tail);
    return (l);
}/* OrderedInsertInheritanceInfoList */

#if defined(__STDC__) || defined(__cplusplus)
InheritanceInfoListPtr RefEndConsInheritanceInfoList (InheritanceInfoListPtr addr, InheritanceInfo e)
#else
InheritanceInfoListPtr RefEndConsInheritanceInfoList (addr, e)
        InheritanceInfoListPtr  addr;
        InheritanceInfo         e;
#endif
{
    if (!addr)
    {
        message (DEADLY, "RefEndConsInheritanceInfoList: no InheritanceInfoList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    (*addr) = ConsInheritanceInfoList (e, NULLInheritanceInfoList);
    return (&((*addr)->tail));
}/* RefEndConsInheritanceInfoList */

#if defined(__STDC__) || defined(__cplusplus)
InheritanceInfoListPtr RefEndAppInheritanceInfoList (InheritanceInfoListPtr addr, InheritanceInfoList l)
#else
InheritanceInfoListPtr RefEndAppInheritanceInfoList (addr, l)
        InheritanceInfoListPtr  addr;
        InheritanceInfoList             l;
#endif
{
    if (!addr) {
        message (DEADLY, "RefEndAppInheritanceInfoList: no InheritanceInfoList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    if (!l)
        return addr;

    (*addr) = l;

    while (l->tail)
        l = l->tail;
    return (&(l->tail));
}/* RefEndAppInheritanceInfoList */

#if defined(__STDC__) || defined(__cplusplus)
int ElemInInheritanceInfoList (InheritanceInfo e, InheritanceInfoList l, InheritanceInfoCmpFctType fcmp)
#else
int ElemInInheritanceInfoList (e, l, fcmp)
        InheritanceInfo e;
        InheritanceInfoList     l;
        InheritanceInfoCmpFctType       fcmp;
#endif
{
    while (l != NULLInheritanceInfoList) {
        if (fcmp (e, l->head) == 0)
            return (1);
        l = l->tail;
    }
    return (0);
}/* ElemInInheritanceInfoList */

#if defined(__STDC__) || defined(__cplusplus)
InheritanceInfoList AddToSetInheritanceInfoList (InheritanceInfo e, InheritanceInfoList l, InheritanceInfoCmpFctType fcmp)
#else
InheritanceInfoList AddToSetInheritanceInfoList (e, l, fcmp)
        InheritanceInfo e;
        InheritanceInfoList     l;
        InheritanceInfoCmpFctType       fcmp;
#endif
{
    if (ElemInInheritanceInfoList (e, l, fcmp))
        return (l);
    else
        return (ConsInheritanceInfoList (e, l));
}/* AddToSetInheritanceInfoList */


#if defined(__STDC__) || defined(__cplusplus)
InheritanceInfoList AddToOrderedSetInheritanceInfoList (InheritanceInfo e, InheritanceInfoList l, InheritanceInfoCmpFctType fcmp)
#else
InheritanceInfoList AddToOrderedSetInheritanceInfoList (e, l, fcmp)
        InheritanceInfo  e;
        InheritanceInfoList      l;
        InheritanceInfoCmpFctType fcmp;
#endif
{   int test;
    InheritanceInfoList  p;
    if (!l)
        return (ConsInheritanceInfoList (e, NULLInheritanceInfoList));
    if ((test = fcmp (e, l->head)) < 0)
        return (ConsInheritanceInfoList (e, l));
    if (test == 0) return l;
    p = l;
    while (p->tail && ((test = fcmp (e, p->tail->head)) > 0))
        p = p->tail;
    if (test) p->tail = ConsInheritanceInfoList (e, p->tail);
    return (l);
}/* AddToOrderedSetInheritanceInfoList */

#if defined(__STDC__) || defined(__cplusplus)
InheritanceInfoList MapInheritanceInfoList (InheritanceInfoList l, InheritanceInfoMapFct f)
#else
InheritanceInfoList MapInheritanceInfoList (l, f)
        InheritanceInfoList     l;
        InheritanceInfoMapFct f;
#endif
{
    InheritanceInfoList NewList = NULLInheritanceInfoList;
    InheritanceInfoList last = NULLInheritanceInfoList;

    while (l)
    {
        if (!NewList) {
            NewList = ConsInheritanceInfoList ((f (l->head)), NULLInheritanceInfoList);
            last = NewList;
        }
        else
        {
            last->tail = ConsInheritanceInfoList ((f (l->head)), NULLInheritanceInfoList);
            last = last->tail;
        }
        l = l->tail;
    }
    return (NewList);
}/* MapInheritanceInfoList */

#if defined(__STDC__) || defined(__cplusplus)
int CompInheritanceInfoList (InheritanceInfoList l1, InheritanceInfoList l2, InheritanceInfoCmpFctType fcmp)
#else
int CompInheritanceInfoList (l1, l2, fcmp)
        InheritanceInfoList     l1, l2;
        InheritanceInfoCmpFctType fcmp;
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
}/* CompInheritanceInfoList */

#if defined(__STDC__) || defined(__cplusplus)
InheritanceInfo SumInheritanceInfoList (InheritanceInfoList l, InheritanceInfoSumFct f, InheritanceInfo a)
#else
InheritanceInfo SumInheritanceInfoList (l, f, a)
        InheritanceInfoList     l;
        InheritanceInfo ((*f) ());
        InheritanceInfo a;
#endif
{
    while (l) {
        a = (f (a, l->head));
        l = l->tail;
    }
    return (a);
}/* SumInheritanceInfoList */
