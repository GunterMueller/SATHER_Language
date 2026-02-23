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
    


#include "GenericInfoList.h"
#include "err.h"
#include "obstack.h"

typedef struct {
  Obstack space;
  void *baseptr;
} Dyn, *DynP;

static DynP GenericInfoListSpace = (DynP)0;

#if defined(__STDC__) || defined(__cplusplus)
void FinlGenericInfoList (void)
#else
void FinlGenericInfoList ()
#endif
{
    if (GenericInfoListSpace != (DynP)0)
    {  obstack_free(&(GenericInfoListSpace->space), GenericInfoListSpace->baseptr);
       GenericInfoListSpace->baseptr = obstack_alloc(&(GenericInfoListSpace->space), 0);
    }
}/* FinlGenericInfoList */

#if defined(__STDC__) || defined(__cplusplus)
GenericInfoList ConsGenericInfoList (GenericInfo e, GenericInfoList l)
#else
GenericInfoList ConsGenericInfoList (e, l)
        GenericInfo     e;
        GenericInfoList l;
#endif
{
    GenericInfoList     h;

    if (GenericInfoListSpace == (DynP)0)
    {   GenericInfoListSpace = (DynP) malloc (sizeof(Dyn));
        if (GenericInfoListSpace == (DynP)0)
        {  message (DEADLY, "no space for GenericInfoList", 0, (POSITION*)0);
           exit (1);
        }
        obstack_init(&(GenericInfoListSpace->space));
        GenericInfoListSpace->baseptr =
                obstack_alloc(&(GenericInfoListSpace->space), 0);
    }

    h = (GenericInfoList)obstack_alloc(&(GenericInfoListSpace->space),
                                  sizeof (struct _GenericInfoLE));
    h->head = e;
    h->tail= l;
    return (h);
}/* ConsGenericInfoList */

#if defined(__STDC__) || defined(__cplusplus)
GenericInfo HeadGenericInfoList (GenericInfoList l)
#else
GenericInfo HeadGenericInfoList (l)
        GenericInfoList l;
#endif
{
    if (l == NULLGenericInfoList)
    {
        message (DEADLY, "HeadGenericInfoList: empty list", 0, (POSITION*)0);
        /* return ((GenericInfo)0); */
    } /* if */
    return (l->head);
}/* HeadGenericInfoList */

#if defined(__STDC__) || defined(__cplusplus)
GenericInfoList TailGenericInfoList (GenericInfoList l)
#else
GenericInfoList TailGenericInfoList (l)
        GenericInfoList l;
#endif
{
    return ((l==NULLGenericInfoList) ? NULLGenericInfoList : l->tail);
}/* TailGenericInfoList */

#if defined(__STDC__) || defined(__cplusplus)
int LengthGenericInfoList (GenericInfoList l)
#else
int LengthGenericInfoList (l)
        GenericInfoList l;
#endif
{
    int res = 0;

    for (; l; l = l->tail)
        res++;
    return (res);
}/* LengthGenericInfoList */

#if defined(__STDC__) || defined(__cplusplus)
GenericInfo IthElemGenericInfoList (GenericInfoList l, int i)
#else
GenericInfo IthElemGenericInfoList (l, i)
        GenericInfoList l;
        int     i;
#endif
{
    while ((i>1) && l)
    {
        i--;
        l = l->tail;
    }

    if ((i<=0) || (l==NULLGenericInfoList))
        message (DEADLY, "IthElemGenericInfoList: no such element",
                 0, (POSITION*)0);
    return (l->head);
}/* IthGenericInfoList */


#if defined(__STDC__) || defined(__cplusplus)
GenericInfoList CopyGenericInfoList (GenericInfoList l, GenericInfoMapFct cp)
#else
GenericInfoList CopyGenericInfoList (l, cp)
        GenericInfoList l;
        GenericInfoMapFct       cp;
#endif
{
    GenericInfoList NewList=NULLGenericInfoList, *addr = &NewList;

    while (l)
    {
        (*addr) = ConsGenericInfoList (cp (l->head), NULLGenericInfoList);
        addr = &((*addr)->tail);
        l = l->tail;
    }
    return (NewList);
}/* CopyGenericInfoList */

#if defined(__STDC__) || defined(__cplusplus)
GenericInfoList AppGenericInfoList (GenericInfoList l1, GenericInfoList l2)
#else
GenericInfoList AppGenericInfoList (l1, l2)
        GenericInfoList l1, l2;
#endif
{
    GenericInfoList     NewList;
    GenericInfoList     *addr = &NewList;

    if (!l1) return (l2);
    if (!l2) return (l1);

    while (l1) {
        (*addr) = ConsGenericInfoList (l1->head, NULLGenericInfoList);
        addr = &((*addr)->tail);
        l1 = l1->tail;
    }
    (*addr) = l2;

    return (NewList);
}/* AppGenericInfoList */

#if defined(__STDC__) || defined(__cplusplus)
GenericInfoList AppElGenericInfoList (GenericInfoList l, GenericInfo e)
#else
GenericInfoList AppElGenericInfoList (l, e)
        GenericInfoList l;
        GenericInfo     e;
#endif
{
    GenericInfoList     res = l;
    if (!l)
        return (ConsGenericInfoList (e, NULLGenericInfoList));

    while (l->tail)
        l = l->tail;
    l->tail = ConsGenericInfoList (e, NULLGenericInfoList);

    return (res);
} /* AppElGenericInfoList */


#if defined(__STDC__) || defined(__cplusplus)
void InsertAfterGenericInfoList (GenericInfoList l, GenericInfo e)
#else
void InsertAfterGenericInfoList (l, e)
        GenericInfoList l;
        GenericInfo     e;
#endif
{
    if (!l)
        message (DEADLY, "InsertAfterGenericInfoList: null list", 0, (POSITION*)0);
    else
        l->tail = ConsGenericInfoList (e, l->tail);
}/* InsertAfterGenericInfoList */

#if defined(__STDC__) || defined(__cplusplus)
GenericInfoList OrderedInsertGenericInfoList (GenericInfoList l, GenericInfo e, GenericInfoCmpFctType fcmp)
#else
GenericInfoList OrderedInsertGenericInfoList (l, e, fcmp)
        GenericInfoList l;
        GenericInfo     e;
        GenericInfoCmpFctType fcmp;
#endif
{
    GenericInfoList     p;
    if (!l)
        return (ConsGenericInfoList (e, NULLGenericInfoList));
    if (fcmp (e, l->head) <= 0)
        return (ConsGenericInfoList (e, l));
    p = l;
    while (p->tail && (fcmp (e, p->tail->head) > 0))
        p = p->tail;
    p->tail = ConsGenericInfoList (e, p->tail);
    return (l);
}/* OrderedInsertGenericInfoList */

#if defined(__STDC__) || defined(__cplusplus)
GenericInfoListPtr RefEndConsGenericInfoList (GenericInfoListPtr addr, GenericInfo e)
#else
GenericInfoListPtr RefEndConsGenericInfoList (addr, e)
        GenericInfoListPtr      addr;
        GenericInfo             e;
#endif
{
    if (!addr)
    {
        message (DEADLY, "RefEndConsGenericInfoList: no GenericInfoList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    (*addr) = ConsGenericInfoList (e, NULLGenericInfoList);
    return (&((*addr)->tail));
}/* RefEndConsGenericInfoList */

#if defined(__STDC__) || defined(__cplusplus)
GenericInfoListPtr RefEndAppGenericInfoList (GenericInfoListPtr addr, GenericInfoList l)
#else
GenericInfoListPtr RefEndAppGenericInfoList (addr, l)
        GenericInfoListPtr      addr;
        GenericInfoList         l;
#endif
{
    if (!addr) {
        message (DEADLY, "RefEndAppGenericInfoList: no GenericInfoList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    if (!l)
        return addr;

    (*addr) = l;

    while (l->tail)
        l = l->tail;
    return (&(l->tail));
}/* RefEndAppGenericInfoList */

#if defined(__STDC__) || defined(__cplusplus)
int ElemInGenericInfoList (GenericInfo e, GenericInfoList l, GenericInfoCmpFctType fcmp)
#else
int ElemInGenericInfoList (e, l, fcmp)
        GenericInfo     e;
        GenericInfoList l;
        GenericInfoCmpFctType   fcmp;
#endif
{
    while (l != NULLGenericInfoList) {
        if (fcmp (e, l->head) == 0)
            return (1);
        l = l->tail;
    }
    return (0);
}/* ElemInGenericInfoList */

#if defined(__STDC__) || defined(__cplusplus)
GenericInfoList AddToSetGenericInfoList (GenericInfo e, GenericInfoList l, GenericInfoCmpFctType fcmp)
#else
GenericInfoList AddToSetGenericInfoList (e, l, fcmp)
        GenericInfo     e;
        GenericInfoList l;
        GenericInfoCmpFctType   fcmp;
#endif
{
    if (ElemInGenericInfoList (e, l, fcmp))
        return (l);
    else
        return (ConsGenericInfoList (e, l));
}/* AddToSetGenericInfoList */


#if defined(__STDC__) || defined(__cplusplus)
GenericInfoList AddToOrderedSetGenericInfoList (GenericInfo e, GenericInfoList l, GenericInfoCmpFctType fcmp)
#else
GenericInfoList AddToOrderedSetGenericInfoList (e, l, fcmp)
        GenericInfo  e;
        GenericInfoList      l;
        GenericInfoCmpFctType fcmp;
#endif
{   int test;
    GenericInfoList  p;
    if (!l)
        return (ConsGenericInfoList (e, NULLGenericInfoList));
    if ((test = fcmp (e, l->head)) < 0)
        return (ConsGenericInfoList (e, l));
    if (test == 0) return l;
    p = l;
    while (p->tail && ((test = fcmp (e, p->tail->head)) > 0))
        p = p->tail;
    if (test) p->tail = ConsGenericInfoList (e, p->tail);
    return (l);
}/* AddToOrderedSetGenericInfoList */

#if defined(__STDC__) || defined(__cplusplus)
GenericInfoList MapGenericInfoList (GenericInfoList l, GenericInfoMapFct f)
#else
GenericInfoList MapGenericInfoList (l, f)
        GenericInfoList l;
        GenericInfoMapFct f;
#endif
{
    GenericInfoList NewList = NULLGenericInfoList;
    GenericInfoList last = NULLGenericInfoList;

    while (l)
    {
        if (!NewList) {
            NewList = ConsGenericInfoList ((f (l->head)), NULLGenericInfoList);
            last = NewList;
        }
        else
        {
            last->tail = ConsGenericInfoList ((f (l->head)), NULLGenericInfoList);
            last = last->tail;
        }
        l = l->tail;
    }
    return (NewList);
}/* MapGenericInfoList */

#if defined(__STDC__) || defined(__cplusplus)
int CompGenericInfoList (GenericInfoList l1, GenericInfoList l2, GenericInfoCmpFctType fcmp)
#else
int CompGenericInfoList (l1, l2, fcmp)
        GenericInfoList l1, l2;
        GenericInfoCmpFctType fcmp;
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
}/* CompGenericInfoList */

#if defined(__STDC__) || defined(__cplusplus)
GenericInfo SumGenericInfoList (GenericInfoList l, GenericInfoSumFct f, GenericInfo a)
#else
GenericInfo SumGenericInfoList (l, f, a)
        GenericInfoList l;
        GenericInfo ((*f) ());
        GenericInfo     a;
#endif
{
    while (l) {
        a = (f (a, l->head));
        l = l->tail;
    }
    return (a);
}/* SumGenericInfoList */
