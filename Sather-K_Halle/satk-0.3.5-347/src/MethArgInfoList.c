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
    


#include "MethArgInfoList.h"
#include "err.h"
#include "obstack.h"

typedef struct {
  Obstack space;
  void *baseptr;
} Dyn, *DynP;

static DynP MethArgInfoListSpace = (DynP)0;

#if defined(__STDC__) || defined(__cplusplus)
void FinlMethArgInfoList (void)
#else
void FinlMethArgInfoList ()
#endif
{
    if (MethArgInfoListSpace != (DynP)0)
    {  obstack_free(&(MethArgInfoListSpace->space), MethArgInfoListSpace->baseptr);
       MethArgInfoListSpace->baseptr = obstack_alloc(&(MethArgInfoListSpace->space), 0);
    }
}/* FinlMethArgInfoList */

#if defined(__STDC__) || defined(__cplusplus)
MethArgInfoList ConsMethArgInfoList (MethArgInfo e, MethArgInfoList l)
#else
MethArgInfoList ConsMethArgInfoList (e, l)
        MethArgInfo     e;
        MethArgInfoList l;
#endif
{
    MethArgInfoList     h;

    if (MethArgInfoListSpace == (DynP)0)
    {   MethArgInfoListSpace = (DynP) malloc (sizeof(Dyn));
        if (MethArgInfoListSpace == (DynP)0)
        {  message (DEADLY, "no space for MethArgInfoList", 0, (POSITION*)0);
           exit (1);
        }
        obstack_init(&(MethArgInfoListSpace->space));
        MethArgInfoListSpace->baseptr =
                obstack_alloc(&(MethArgInfoListSpace->space), 0);
    }

    h = (MethArgInfoList)obstack_alloc(&(MethArgInfoListSpace->space),
                                  sizeof (struct _MethArgInfoLE));
    h->head = e;
    h->tail= l;
    return (h);
}/* ConsMethArgInfoList */

#if defined(__STDC__) || defined(__cplusplus)
MethArgInfo HeadMethArgInfoList (MethArgInfoList l)
#else
MethArgInfo HeadMethArgInfoList (l)
        MethArgInfoList l;
#endif
{
    if (l == NULLMethArgInfoList)
    {
        message (DEADLY, "HeadMethArgInfoList: empty list", 0, (POSITION*)0);
        /* return ((MethArgInfo)0); */
    } /* if */
    return (l->head);
}/* HeadMethArgInfoList */

#if defined(__STDC__) || defined(__cplusplus)
MethArgInfoList TailMethArgInfoList (MethArgInfoList l)
#else
MethArgInfoList TailMethArgInfoList (l)
        MethArgInfoList l;
#endif
{
    return ((l==NULLMethArgInfoList) ? NULLMethArgInfoList : l->tail);
}/* TailMethArgInfoList */

#if defined(__STDC__) || defined(__cplusplus)
int LengthMethArgInfoList (MethArgInfoList l)
#else
int LengthMethArgInfoList (l)
        MethArgInfoList l;
#endif
{
    int res = 0;

    for (; l; l = l->tail)
        res++;
    return (res);
}/* LengthMethArgInfoList */

#if defined(__STDC__) || defined(__cplusplus)
MethArgInfo IthElemMethArgInfoList (MethArgInfoList l, int i)
#else
MethArgInfo IthElemMethArgInfoList (l, i)
        MethArgInfoList l;
        int     i;
#endif
{
    while ((i>1) && l)
    {
        i--;
        l = l->tail;
    }

    if ((i<=0) || (l==NULLMethArgInfoList))
        message (DEADLY, "IthElemMethArgInfoList: no such element",
                 0, (POSITION*)0);
    return (l->head);
}/* IthMethArgInfoList */


#if defined(__STDC__) || defined(__cplusplus)
MethArgInfoList CopyMethArgInfoList (MethArgInfoList l, MethArgInfoMapFct cp)
#else
MethArgInfoList CopyMethArgInfoList (l, cp)
        MethArgInfoList l;
        MethArgInfoMapFct       cp;
#endif
{
    MethArgInfoList NewList=NULLMethArgInfoList, *addr = &NewList;

    while (l)
    {
        (*addr) = ConsMethArgInfoList (cp (l->head), NULLMethArgInfoList);
        addr = &((*addr)->tail);
        l = l->tail;
    }
    return (NewList);
}/* CopyMethArgInfoList */

#if defined(__STDC__) || defined(__cplusplus)
MethArgInfoList AppMethArgInfoList (MethArgInfoList l1, MethArgInfoList l2)
#else
MethArgInfoList AppMethArgInfoList (l1, l2)
        MethArgInfoList l1, l2;
#endif
{
    MethArgInfoList     NewList;
    MethArgInfoList     *addr = &NewList;

    if (!l1) return (l2);
    if (!l2) return (l1);

    while (l1) {
        (*addr) = ConsMethArgInfoList (l1->head, NULLMethArgInfoList);
        addr = &((*addr)->tail);
        l1 = l1->tail;
    }
    (*addr) = l2;

    return (NewList);
}/* AppMethArgInfoList */

#if defined(__STDC__) || defined(__cplusplus)
MethArgInfoList AppElMethArgInfoList (MethArgInfoList l, MethArgInfo e)
#else
MethArgInfoList AppElMethArgInfoList (l, e)
        MethArgInfoList l;
        MethArgInfo     e;
#endif
{
    MethArgInfoList     res = l;
    if (!l)
        return (ConsMethArgInfoList (e, NULLMethArgInfoList));

    while (l->tail)
        l = l->tail;
    l->tail = ConsMethArgInfoList (e, NULLMethArgInfoList);

    return (res);
} /* AppElMethArgInfoList */


#if defined(__STDC__) || defined(__cplusplus)
void InsertAfterMethArgInfoList (MethArgInfoList l, MethArgInfo e)
#else
void InsertAfterMethArgInfoList (l, e)
        MethArgInfoList l;
        MethArgInfo     e;
#endif
{
    if (!l)
        message (DEADLY, "InsertAfterMethArgInfoList: null list", 0, (POSITION*)0);
    else
        l->tail = ConsMethArgInfoList (e, l->tail);
}/* InsertAfterMethArgInfoList */

#if defined(__STDC__) || defined(__cplusplus)
MethArgInfoList OrderedInsertMethArgInfoList (MethArgInfoList l, MethArgInfo e, MethArgInfoCmpFctType fcmp)
#else
MethArgInfoList OrderedInsertMethArgInfoList (l, e, fcmp)
        MethArgInfoList l;
        MethArgInfo     e;
        MethArgInfoCmpFctType fcmp;
#endif
{
    MethArgInfoList     p;
    if (!l)
        return (ConsMethArgInfoList (e, NULLMethArgInfoList));
    if (fcmp (e, l->head) <= 0)
        return (ConsMethArgInfoList (e, l));
    p = l;
    while (p->tail && (fcmp (e, p->tail->head) > 0))
        p = p->tail;
    p->tail = ConsMethArgInfoList (e, p->tail);
    return (l);
}/* OrderedInsertMethArgInfoList */

#if defined(__STDC__) || defined(__cplusplus)
MethArgInfoListPtr RefEndConsMethArgInfoList (MethArgInfoListPtr addr, MethArgInfo e)
#else
MethArgInfoListPtr RefEndConsMethArgInfoList (addr, e)
        MethArgInfoListPtr      addr;
        MethArgInfo             e;
#endif
{
    if (!addr)
    {
        message (DEADLY, "RefEndConsMethArgInfoList: no MethArgInfoList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    (*addr) = ConsMethArgInfoList (e, NULLMethArgInfoList);
    return (&((*addr)->tail));
}/* RefEndConsMethArgInfoList */

#if defined(__STDC__) || defined(__cplusplus)
MethArgInfoListPtr RefEndAppMethArgInfoList (MethArgInfoListPtr addr, MethArgInfoList l)
#else
MethArgInfoListPtr RefEndAppMethArgInfoList (addr, l)
        MethArgInfoListPtr      addr;
        MethArgInfoList         l;
#endif
{
    if (!addr) {
        message (DEADLY, "RefEndAppMethArgInfoList: no MethArgInfoList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    if (!l)
        return addr;

    (*addr) = l;

    while (l->tail)
        l = l->tail;
    return (&(l->tail));
}/* RefEndAppMethArgInfoList */

#if defined(__STDC__) || defined(__cplusplus)
int ElemInMethArgInfoList (MethArgInfo e, MethArgInfoList l, MethArgInfoCmpFctType fcmp)
#else
int ElemInMethArgInfoList (e, l, fcmp)
        MethArgInfo     e;
        MethArgInfoList l;
        MethArgInfoCmpFctType   fcmp;
#endif
{
    while (l != NULLMethArgInfoList) {
        if (fcmp (e, l->head) == 0)
            return (1);
        l = l->tail;
    }
    return (0);
}/* ElemInMethArgInfoList */

#if defined(__STDC__) || defined(__cplusplus)
MethArgInfoList AddToSetMethArgInfoList (MethArgInfo e, MethArgInfoList l, MethArgInfoCmpFctType fcmp)
#else
MethArgInfoList AddToSetMethArgInfoList (e, l, fcmp)
        MethArgInfo     e;
        MethArgInfoList l;
        MethArgInfoCmpFctType   fcmp;
#endif
{
    if (ElemInMethArgInfoList (e, l, fcmp))
        return (l);
    else
        return (ConsMethArgInfoList (e, l));
}/* AddToSetMethArgInfoList */


#if defined(__STDC__) || defined(__cplusplus)
MethArgInfoList AddToOrderedSetMethArgInfoList (MethArgInfo e, MethArgInfoList l, MethArgInfoCmpFctType fcmp)
#else
MethArgInfoList AddToOrderedSetMethArgInfoList (e, l, fcmp)
        MethArgInfo  e;
        MethArgInfoList      l;
        MethArgInfoCmpFctType fcmp;
#endif
{   int test;
    MethArgInfoList  p;
    if (!l)
        return (ConsMethArgInfoList (e, NULLMethArgInfoList));
    if ((test = fcmp (e, l->head)) < 0)
        return (ConsMethArgInfoList (e, l));
    if (test == 0) return l;
    p = l;
    while (p->tail && ((test = fcmp (e, p->tail->head)) > 0))
        p = p->tail;
    if (test) p->tail = ConsMethArgInfoList (e, p->tail);
    return (l);
}/* AddToOrderedSetMethArgInfoList */

#if defined(__STDC__) || defined(__cplusplus)
MethArgInfoList MapMethArgInfoList (MethArgInfoList l, MethArgInfoMapFct f)
#else
MethArgInfoList MapMethArgInfoList (l, f)
        MethArgInfoList l;
        MethArgInfoMapFct f;
#endif
{
    MethArgInfoList NewList = NULLMethArgInfoList;
    MethArgInfoList last = NULLMethArgInfoList;

    while (l)
    {
        if (!NewList) {
            NewList = ConsMethArgInfoList ((f (l->head)), NULLMethArgInfoList);
            last = NewList;
        }
        else
        {
            last->tail = ConsMethArgInfoList ((f (l->head)), NULLMethArgInfoList);
            last = last->tail;
        }
        l = l->tail;
    }
    return (NewList);
}/* MapMethArgInfoList */

#if defined(__STDC__) || defined(__cplusplus)
int CompMethArgInfoList (MethArgInfoList l1, MethArgInfoList l2, MethArgInfoCmpFctType fcmp)
#else
int CompMethArgInfoList (l1, l2, fcmp)
        MethArgInfoList l1, l2;
        MethArgInfoCmpFctType fcmp;
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
}/* CompMethArgInfoList */

#if defined(__STDC__) || defined(__cplusplus)
MethArgInfo SumMethArgInfoList (MethArgInfoList l, MethArgInfoSumFct f, MethArgInfo a)
#else
MethArgInfo SumMethArgInfoList (l, f, a)
        MethArgInfoList l;
        MethArgInfo ((*f) ());
        MethArgInfo     a;
#endif
{
    while (l) {
        a = (f (a, l->head));
        l = l->tail;
    }
    return (a);
}/* SumMethArgInfoList */
