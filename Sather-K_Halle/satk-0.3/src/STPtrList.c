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
    


#include "STPtrList.h"
#include "err.h"
#include "obstack.h"

typedef struct {
  Obstack space;
  void *baseptr;
} Dyn, *DynP;

static DynP STPtrListSpace = (DynP)0;

#if defined(__STDC__) || defined(__cplusplus)
void FinlSTPtrList (void)
#else
void FinlSTPtrList ()
#endif
{
    if (STPtrListSpace != (DynP)0)
    {  obstack_free(&(STPtrListSpace->space), STPtrListSpace->baseptr);
       STPtrListSpace->baseptr = obstack_alloc(&(STPtrListSpace->space), 0);
    }
}/* FinlSTPtrList */

#if defined(__STDC__) || defined(__cplusplus)
STPtrList ConsSTPtrList (STPtr e, STPtrList l)
#else
STPtrList ConsSTPtrList (e, l)
        STPtr   e;
        STPtrList       l;
#endif
{
    STPtrList   h;

    if (STPtrListSpace == (DynP)0)
    {   STPtrListSpace = (DynP) malloc (sizeof(Dyn));
        if (STPtrListSpace == (DynP)0)
        {  message (DEADLY, "no space for STPtrList", 0, (POSITION*)0);
           exit (1);
        }
        obstack_init(&(STPtrListSpace->space));
        STPtrListSpace->baseptr =
                obstack_alloc(&(STPtrListSpace->space), 0);
    }

    h = (STPtrList)obstack_alloc(&(STPtrListSpace->space),
                                  sizeof (struct _STPtrLE));
    h->head = e;
    h->tail= l;
    return (h);
}/* ConsSTPtrList */

#if defined(__STDC__) || defined(__cplusplus)
STPtr HeadSTPtrList (STPtrList l)
#else
STPtr HeadSTPtrList (l)
        STPtrList       l;
#endif
{
    if (l == NULLSTPtrList)
    {
        message (DEADLY, "HeadSTPtrList: empty list", 0, (POSITION*)0);
        /* return ((STPtr)0); */
    } /* if */
    return (l->head);
}/* HeadSTPtrList */

#if defined(__STDC__) || defined(__cplusplus)
STPtrList TailSTPtrList (STPtrList l)
#else
STPtrList TailSTPtrList (l)
        STPtrList       l;
#endif
{
    return ((l==NULLSTPtrList) ? NULLSTPtrList : l->tail);
}/* TailSTPtrList */

#if defined(__STDC__) || defined(__cplusplus)
int LengthSTPtrList (STPtrList l)
#else
int LengthSTPtrList (l)
        STPtrList       l;
#endif
{
    int res = 0;

    for (; l; l = l->tail)
        res++;
    return (res);
}/* LengthSTPtrList */

#if defined(__STDC__) || defined(__cplusplus)
STPtr IthElemSTPtrList (STPtrList l, int i)
#else
STPtr IthElemSTPtrList (l, i)
        STPtrList       l;
        int     i;
#endif
{
    while ((i>1) && l)
    {
        i--;
        l = l->tail;
    }

    if ((i<=0) || (l==NULLSTPtrList))
        message (DEADLY, "IthElemSTPtrList: no such element",
                 0, (POSITION*)0);
    return (l->head);
}/* IthSTPtrList */


#if defined(__STDC__) || defined(__cplusplus)
STPtrList CopySTPtrList (STPtrList l, STPtrMapFct cp)
#else
STPtrList CopySTPtrList (l, cp)
        STPtrList l;
        STPtrMapFct     cp;
#endif
{
    STPtrList NewList=NULLSTPtrList, *addr = &NewList;

    while (l)
    {
        (*addr) = ConsSTPtrList (cp (l->head), NULLSTPtrList);
        addr = &((*addr)->tail);
        l = l->tail;
    }
    return (NewList);
}/* CopySTPtrList */

#if defined(__STDC__) || defined(__cplusplus)
STPtrList AppSTPtrList (STPtrList l1, STPtrList l2)
#else
STPtrList AppSTPtrList (l1, l2)
        STPtrList       l1, l2;
#endif
{
    STPtrList   NewList;
    STPtrList   *addr = &NewList;

    if (!l1) return (l2);
    if (!l2) return (l1);

    while (l1) {
        (*addr) = ConsSTPtrList (l1->head, NULLSTPtrList);
        addr = &((*addr)->tail);
        l1 = l1->tail;
    }
    (*addr) = l2;

    return (NewList);
}/* AppSTPtrList */

#if defined(__STDC__) || defined(__cplusplus)
STPtrList AppElSTPtrList (STPtrList l, STPtr e)
#else
STPtrList AppElSTPtrList (l, e)
        STPtrList       l;
        STPtr   e;
#endif
{
    STPtrList   res = l;
    if (!l)
        return (ConsSTPtrList (e, NULLSTPtrList));

    while (l->tail)
        l = l->tail;
    l->tail = ConsSTPtrList (e, NULLSTPtrList);

    return (res);
} /* AppElSTPtrList */


#if defined(__STDC__) || defined(__cplusplus)
void InsertAfterSTPtrList (STPtrList l, STPtr e)
#else
void InsertAfterSTPtrList (l, e)
        STPtrList       l;
        STPtr   e;
#endif
{
    if (!l)
        message (DEADLY, "InsertAfterSTPtrList: null list", 0, (POSITION*)0);
    else
        l->tail = ConsSTPtrList (e, l->tail);
}/* InsertAfterSTPtrList */

#if defined(__STDC__) || defined(__cplusplus)
STPtrList OrderedInsertSTPtrList (STPtrList l, STPtr e, STPtrCmpFctType fcmp)
#else
STPtrList OrderedInsertSTPtrList (l, e, fcmp)
        STPtrList       l;
        STPtr   e;
        STPtrCmpFctType fcmp;
#endif
{
    STPtrList   p;
    if (!l)
        return (ConsSTPtrList (e, NULLSTPtrList));
    if (fcmp (e, l->head) <= 0)
        return (ConsSTPtrList (e, l));
    p = l;
    while (p->tail && (fcmp (e, p->tail->head) > 0))
        p = p->tail;
    p->tail = ConsSTPtrList (e, p->tail);
    return (l);
}/* OrderedInsertSTPtrList */

#if defined(__STDC__) || defined(__cplusplus)
STPtrListPtr RefEndConsSTPtrList (STPtrListPtr addr, STPtr e)
#else
STPtrListPtr RefEndConsSTPtrList (addr, e)
        STPtrListPtr    addr;
        STPtr           e;
#endif
{
    if (!addr)
    {
        message (DEADLY, "RefEndConsSTPtrList: no STPtrList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    (*addr) = ConsSTPtrList (e, NULLSTPtrList);
    return (&((*addr)->tail));
}/* RefEndConsSTPtrList */

#if defined(__STDC__) || defined(__cplusplus)
STPtrListPtr RefEndAppSTPtrList (STPtrListPtr addr, STPtrList l)
#else
STPtrListPtr RefEndAppSTPtrList (addr, l)
        STPtrListPtr    addr;
        STPtrList               l;
#endif
{
    if (!addr) {
        message (DEADLY, "RefEndAppSTPtrList: no STPtrList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    if (!l)
        return addr;

    (*addr) = l;

    while (l->tail)
        l = l->tail;
    return (&(l->tail));
}/* RefEndAppSTPtrList */

#if defined(__STDC__) || defined(__cplusplus)
int ElemInSTPtrList (STPtr e, STPtrList l, STPtrCmpFctType fcmp)
#else
int ElemInSTPtrList (e, l, fcmp)
        STPtr   e;
        STPtrList       l;
        STPtrCmpFctType fcmp;
#endif
{
    while (l != NULLSTPtrList) {
        if (fcmp (e, l->head) == 0)
            return (1);
        l = l->tail;
    }
    return (0);
}/* ElemInSTPtrList */

#if defined(__STDC__) || defined(__cplusplus)
STPtrList AddToSetSTPtrList (STPtr e, STPtrList l, STPtrCmpFctType fcmp)
#else
STPtrList AddToSetSTPtrList (e, l, fcmp)
        STPtr   e;
        STPtrList       l;
        STPtrCmpFctType fcmp;
#endif
{
    if (ElemInSTPtrList (e, l, fcmp))
        return (l);
    else
        return (ConsSTPtrList (e, l));
}/* AddToSetSTPtrList */


#if defined(__STDC__) || defined(__cplusplus)
STPtrList AddToOrderedSetSTPtrList (STPtr e, STPtrList l, STPtrCmpFctType fcmp)
#else
STPtrList AddToOrderedSetSTPtrList (e, l, fcmp)
        STPtr  e;
        STPtrList      l;
        STPtrCmpFctType fcmp;
#endif
{   int test;
    STPtrList  p;
    if (!l)
        return (ConsSTPtrList (e, NULLSTPtrList));
    if ((test = fcmp (e, l->head)) < 0)
        return (ConsSTPtrList (e, l));
    if (test == 0) return l;
    p = l;
    while (p->tail && ((test = fcmp (e, p->tail->head)) > 0))
        p = p->tail;
    if (test) p->tail = ConsSTPtrList (e, p->tail);
    return (l);
}/* AddToOrderedSetSTPtrList */

#if defined(__STDC__) || defined(__cplusplus)
STPtrList MapSTPtrList (STPtrList l, STPtrMapFct f)
#else
STPtrList MapSTPtrList (l, f)
        STPtrList       l;
        STPtrMapFct f;
#endif
{
    STPtrList NewList = NULLSTPtrList;
    STPtrList last = NULLSTPtrList;

    while (l)
    {
        if (!NewList) {
            NewList = ConsSTPtrList ((f (l->head)), NULLSTPtrList);
            last = NewList;
        }
        else
        {
            last->tail = ConsSTPtrList ((f (l->head)), NULLSTPtrList);
            last = last->tail;
        }
        l = l->tail;
    }
    return (NewList);
}/* MapSTPtrList */

#if defined(__STDC__) || defined(__cplusplus)
int CompSTPtrList (STPtrList l1, STPtrList l2, STPtrCmpFctType fcmp)
#else
int CompSTPtrList (l1, l2, fcmp)
        STPtrList       l1, l2;
        STPtrCmpFctType fcmp;
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
}/* CompSTPtrList */

#if defined(__STDC__) || defined(__cplusplus)
STPtr SumSTPtrList (STPtrList l, STPtrSumFct f, STPtr a)
#else
STPtr SumSTPtrList (l, f, a)
        STPtrList       l;
        STPtr ((*f) ());
        STPtr   a;
#endif
{
    while (l) {
        a = (f (a, l->head));
        l = l->tail;
    }
    return (a);
}/* SumSTPtrList */
