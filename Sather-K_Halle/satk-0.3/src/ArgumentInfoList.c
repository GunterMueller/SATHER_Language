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
    


#include "ArgumentInfoList.h"
#include "err.h"
#include "obstack.h"

typedef struct {
  Obstack space;
  void *baseptr;
} Dyn, *DynP;

static DynP ArgumentInfoListSpace = (DynP)0;

#if defined(__STDC__) || defined(__cplusplus)
void FinlArgumentInfoList (void)
#else
void FinlArgumentInfoList ()
#endif
{
    if (ArgumentInfoListSpace != (DynP)0)
    {  obstack_free(&(ArgumentInfoListSpace->space), ArgumentInfoListSpace->baseptr);
       ArgumentInfoListSpace->baseptr = obstack_alloc(&(ArgumentInfoListSpace->space), 0);
    }
}/* FinlArgumentInfoList */

#if defined(__STDC__) || defined(__cplusplus)
ArgumentInfoList ConsArgumentInfoList (ArgumentInfo e, ArgumentInfoList l)
#else
ArgumentInfoList ConsArgumentInfoList (e, l)
        ArgumentInfo    e;
        ArgumentInfoList        l;
#endif
{
    ArgumentInfoList    h;

    if (ArgumentInfoListSpace == (DynP)0)
    {   ArgumentInfoListSpace = (DynP) malloc (sizeof(Dyn));
        if (ArgumentInfoListSpace == (DynP)0)
        {  message (DEADLY, "no space for ArgumentInfoList", 0, (POSITION*)0);
           exit (1);
        }
        obstack_init(&(ArgumentInfoListSpace->space));
        ArgumentInfoListSpace->baseptr =
                obstack_alloc(&(ArgumentInfoListSpace->space), 0);
    }

    h = (ArgumentInfoList)obstack_alloc(&(ArgumentInfoListSpace->space),
                                  sizeof (struct _ArgumentInfoLE));
    h->head = e;
    h->tail= l;
    return (h);
}/* ConsArgumentInfoList */

#if defined(__STDC__) || defined(__cplusplus)
ArgumentInfo HeadArgumentInfoList (ArgumentInfoList l)
#else
ArgumentInfo HeadArgumentInfoList (l)
        ArgumentInfoList        l;
#endif
{
    if (l == NULLArgumentInfoList)
    {
        message (DEADLY, "HeadArgumentInfoList: empty list", 0, (POSITION*)0);
        /* return ((ArgumentInfo)0); */
    } /* if */
    return (l->head);
}/* HeadArgumentInfoList */

#if defined(__STDC__) || defined(__cplusplus)
ArgumentInfoList TailArgumentInfoList (ArgumentInfoList l)
#else
ArgumentInfoList TailArgumentInfoList (l)
        ArgumentInfoList        l;
#endif
{
    return ((l==NULLArgumentInfoList) ? NULLArgumentInfoList : l->tail);
}/* TailArgumentInfoList */

#if defined(__STDC__) || defined(__cplusplus)
int LengthArgumentInfoList (ArgumentInfoList l)
#else
int LengthArgumentInfoList (l)
        ArgumentInfoList        l;
#endif
{
    int res = 0;

    for (; l; l = l->tail)
        res++;
    return (res);
}/* LengthArgumentInfoList */

#if defined(__STDC__) || defined(__cplusplus)
ArgumentInfo IthElemArgumentInfoList (ArgumentInfoList l, int i)
#else
ArgumentInfo IthElemArgumentInfoList (l, i)
        ArgumentInfoList        l;
        int     i;
#endif
{
    while ((i>1) && l)
    {
        i--;
        l = l->tail;
    }

    if ((i<=0) || (l==NULLArgumentInfoList))
        message (DEADLY, "IthElemArgumentInfoList: no such element",
                 0, (POSITION*)0);
    return (l->head);
}/* IthArgumentInfoList */


#if defined(__STDC__) || defined(__cplusplus)
ArgumentInfoList CopyArgumentInfoList (ArgumentInfoList l, ArgumentInfoMapFct cp)
#else
ArgumentInfoList CopyArgumentInfoList (l, cp)
        ArgumentInfoList l;
        ArgumentInfoMapFct      cp;
#endif
{
    ArgumentInfoList NewList=NULLArgumentInfoList, *addr = &NewList;

    while (l)
    {
        (*addr) = ConsArgumentInfoList (cp (l->head), NULLArgumentInfoList);
        addr = &((*addr)->tail);
        l = l->tail;
    }
    return (NewList);
}/* CopyArgumentInfoList */

#if defined(__STDC__) || defined(__cplusplus)
ArgumentInfoList AppArgumentInfoList (ArgumentInfoList l1, ArgumentInfoList l2)
#else
ArgumentInfoList AppArgumentInfoList (l1, l2)
        ArgumentInfoList        l1, l2;
#endif
{
    ArgumentInfoList    NewList;
    ArgumentInfoList    *addr = &NewList;

    if (!l1) return (l2);
    if (!l2) return (l1);

    while (l1) {
        (*addr) = ConsArgumentInfoList (l1->head, NULLArgumentInfoList);
        addr = &((*addr)->tail);
        l1 = l1->tail;
    }
    (*addr) = l2;

    return (NewList);
}/* AppArgumentInfoList */

#if defined(__STDC__) || defined(__cplusplus)
ArgumentInfoList AppElArgumentInfoList (ArgumentInfoList l, ArgumentInfo e)
#else
ArgumentInfoList AppElArgumentInfoList (l, e)
        ArgumentInfoList        l;
        ArgumentInfo    e;
#endif
{
    ArgumentInfoList    res = l;
    if (!l)
        return (ConsArgumentInfoList (e, NULLArgumentInfoList));

    while (l->tail)
        l = l->tail;
    l->tail = ConsArgumentInfoList (e, NULLArgumentInfoList);

    return (res);
} /* AppElArgumentInfoList */


#if defined(__STDC__) || defined(__cplusplus)
void InsertAfterArgumentInfoList (ArgumentInfoList l, ArgumentInfo e)
#else
void InsertAfterArgumentInfoList (l, e)
        ArgumentInfoList        l;
        ArgumentInfo    e;
#endif
{
    if (!l)
        message (DEADLY, "InsertAfterArgumentInfoList: null list", 0, (POSITION*)0);
    else
        l->tail = ConsArgumentInfoList (e, l->tail);
}/* InsertAfterArgumentInfoList */

#if defined(__STDC__) || defined(__cplusplus)
ArgumentInfoList OrderedInsertArgumentInfoList (ArgumentInfoList l, ArgumentInfo e, ArgumentInfoCmpFctType fcmp)
#else
ArgumentInfoList OrderedInsertArgumentInfoList (l, e, fcmp)
        ArgumentInfoList        l;
        ArgumentInfo    e;
        ArgumentInfoCmpFctType fcmp;
#endif
{
    ArgumentInfoList    p;
    if (!l)
        return (ConsArgumentInfoList (e, NULLArgumentInfoList));
    if (fcmp (e, l->head) <= 0)
        return (ConsArgumentInfoList (e, l));
    p = l;
    while (p->tail && (fcmp (e, p->tail->head) > 0))
        p = p->tail;
    p->tail = ConsArgumentInfoList (e, p->tail);
    return (l);
}/* OrderedInsertArgumentInfoList */

#if defined(__STDC__) || defined(__cplusplus)
ArgumentInfoListPtr RefEndConsArgumentInfoList (ArgumentInfoListPtr addr, ArgumentInfo e)
#else
ArgumentInfoListPtr RefEndConsArgumentInfoList (addr, e)
        ArgumentInfoListPtr     addr;
        ArgumentInfo            e;
#endif
{
    if (!addr)
    {
        message (DEADLY, "RefEndConsArgumentInfoList: no ArgumentInfoList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    (*addr) = ConsArgumentInfoList (e, NULLArgumentInfoList);
    return (&((*addr)->tail));
}/* RefEndConsArgumentInfoList */

#if defined(__STDC__) || defined(__cplusplus)
ArgumentInfoListPtr RefEndAppArgumentInfoList (ArgumentInfoListPtr addr, ArgumentInfoList l)
#else
ArgumentInfoListPtr RefEndAppArgumentInfoList (addr, l)
        ArgumentInfoListPtr     addr;
        ArgumentInfoList                l;
#endif
{
    if (!addr) {
        message (DEADLY, "RefEndAppArgumentInfoList: no ArgumentInfoList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    if (!l)
        return addr;

    (*addr) = l;

    while (l->tail)
        l = l->tail;
    return (&(l->tail));
}/* RefEndAppArgumentInfoList */

#if defined(__STDC__) || defined(__cplusplus)
int ElemInArgumentInfoList (ArgumentInfo e, ArgumentInfoList l, ArgumentInfoCmpFctType fcmp)
#else
int ElemInArgumentInfoList (e, l, fcmp)
        ArgumentInfo    e;
        ArgumentInfoList        l;
        ArgumentInfoCmpFctType  fcmp;
#endif
{
    while (l != NULLArgumentInfoList) {
        if (fcmp (e, l->head) == 0)
            return (1);
        l = l->tail;
    }
    return (0);
}/* ElemInArgumentInfoList */

#if defined(__STDC__) || defined(__cplusplus)
ArgumentInfoList AddToSetArgumentInfoList (ArgumentInfo e, ArgumentInfoList l, ArgumentInfoCmpFctType fcmp)
#else
ArgumentInfoList AddToSetArgumentInfoList (e, l, fcmp)
        ArgumentInfo    e;
        ArgumentInfoList        l;
        ArgumentInfoCmpFctType  fcmp;
#endif
{
    if (ElemInArgumentInfoList (e, l, fcmp))
        return (l);
    else
        return (ConsArgumentInfoList (e, l));
}/* AddToSetArgumentInfoList */


#if defined(__STDC__) || defined(__cplusplus)
ArgumentInfoList AddToOrderedSetArgumentInfoList (ArgumentInfo e, ArgumentInfoList l, ArgumentInfoCmpFctType fcmp)
#else
ArgumentInfoList AddToOrderedSetArgumentInfoList (e, l, fcmp)
        ArgumentInfo  e;
        ArgumentInfoList      l;
        ArgumentInfoCmpFctType fcmp;
#endif
{   int test;
    ArgumentInfoList  p;
    if (!l)
        return (ConsArgumentInfoList (e, NULLArgumentInfoList));
    if ((test = fcmp (e, l->head)) < 0)
        return (ConsArgumentInfoList (e, l));
    if (test == 0) return l;
    p = l;
    while (p->tail && ((test = fcmp (e, p->tail->head)) > 0))
        p = p->tail;
    if (test) p->tail = ConsArgumentInfoList (e, p->tail);
    return (l);
}/* AddToOrderedSetArgumentInfoList */

#if defined(__STDC__) || defined(__cplusplus)
ArgumentInfoList MapArgumentInfoList (ArgumentInfoList l, ArgumentInfoMapFct f)
#else
ArgumentInfoList MapArgumentInfoList (l, f)
        ArgumentInfoList        l;
        ArgumentInfoMapFct f;
#endif
{
    ArgumentInfoList NewList = NULLArgumentInfoList;
    ArgumentInfoList last = NULLArgumentInfoList;

    while (l)
    {
        if (!NewList) {
            NewList = ConsArgumentInfoList ((f (l->head)), NULLArgumentInfoList);
            last = NewList;
        }
        else
        {
            last->tail = ConsArgumentInfoList ((f (l->head)), NULLArgumentInfoList);
            last = last->tail;
        }
        l = l->tail;
    }
    return (NewList);
}/* MapArgumentInfoList */

#if defined(__STDC__) || defined(__cplusplus)
int CompArgumentInfoList (ArgumentInfoList l1, ArgumentInfoList l2, ArgumentInfoCmpFctType fcmp)
#else
int CompArgumentInfoList (l1, l2, fcmp)
        ArgumentInfoList        l1, l2;
        ArgumentInfoCmpFctType fcmp;
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
}/* CompArgumentInfoList */

#if defined(__STDC__) || defined(__cplusplus)
ArgumentInfo SumArgumentInfoList (ArgumentInfoList l, ArgumentInfoSumFct f, ArgumentInfo a)
#else
ArgumentInfo SumArgumentInfoList (l, f, a)
        ArgumentInfoList        l;
        ArgumentInfo ((*f) ());
        ArgumentInfo    a;
#endif
{
    while (l) {
        a = (f (a, l->head));
        l = l->tail;
    }
    return (a);
}/* SumArgumentInfoList */
