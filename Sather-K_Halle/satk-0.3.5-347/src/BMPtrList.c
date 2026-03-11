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
    


#include "BMPtrList.h"
#include "err.h"
#include "obstack.h"

typedef struct {
  Obstack space;
  void *baseptr;
} Dyn, *DynP;

static DynP BMPtrListSpace = (DynP)0;

#if defined(__STDC__) || defined(__cplusplus)
void FinlBMPtrList (void)
#else
void FinlBMPtrList ()
#endif
{
    if (BMPtrListSpace != (DynP)0)
    {  obstack_free(&(BMPtrListSpace->space), BMPtrListSpace->baseptr);
       BMPtrListSpace->baseptr = obstack_alloc(&(BMPtrListSpace->space), 0);
    }
}/* FinlBMPtrList */

#if defined(__STDC__) || defined(__cplusplus)
BMPtrList ConsBMPtrList (BMPtr e, BMPtrList l)
#else
BMPtrList ConsBMPtrList (e, l)
        BMPtr   e;
        BMPtrList       l;
#endif
{
    BMPtrList   h;

    if (BMPtrListSpace == (DynP)0)
    {   BMPtrListSpace = (DynP) malloc (sizeof(Dyn));
        if (BMPtrListSpace == (DynP)0)
        {  message (DEADLY, "no space for BMPtrList", 0, (POSITION*)0);
           exit (1);
        }
        obstack_init(&(BMPtrListSpace->space));
        BMPtrListSpace->baseptr =
                obstack_alloc(&(BMPtrListSpace->space), 0);
    }

    h = (BMPtrList)obstack_alloc(&(BMPtrListSpace->space),
                                  sizeof (struct _BMPtrLE));
    h->head = e;
    h->tail= l;
    return (h);
}/* ConsBMPtrList */

#if defined(__STDC__) || defined(__cplusplus)
BMPtr HeadBMPtrList (BMPtrList l)
#else
BMPtr HeadBMPtrList (l)
        BMPtrList       l;
#endif
{
    if (l == NULLBMPtrList)
    {
        message (DEADLY, "HeadBMPtrList: empty list", 0, (POSITION*)0);
        /* return ((BMPtr)0); */
    } /* if */
    return (l->head);
}/* HeadBMPtrList */

#if defined(__STDC__) || defined(__cplusplus)
BMPtrList TailBMPtrList (BMPtrList l)
#else
BMPtrList TailBMPtrList (l)
        BMPtrList       l;
#endif
{
    return ((l==NULLBMPtrList) ? NULLBMPtrList : l->tail);
}/* TailBMPtrList */

#if defined(__STDC__) || defined(__cplusplus)
int LengthBMPtrList (BMPtrList l)
#else
int LengthBMPtrList (l)
        BMPtrList       l;
#endif
{
    int res = 0;

    for (; l; l = l->tail)
        res++;
    return (res);
}/* LengthBMPtrList */

#if defined(__STDC__) || defined(__cplusplus)
BMPtr IthElemBMPtrList (BMPtrList l, int i)
#else
BMPtr IthElemBMPtrList (l, i)
        BMPtrList       l;
        int     i;
#endif
{
    while ((i>1) && l)
    {
        i--;
        l = l->tail;
    }

    if ((i<=0) || (l==NULLBMPtrList))
        message (DEADLY, "IthElemBMPtrList: no such element",
                 0, (POSITION*)0);
    return (l->head);
}/* IthBMPtrList */


#if defined(__STDC__) || defined(__cplusplus)
BMPtrList CopyBMPtrList (BMPtrList l, BMPtrMapFct cp)
#else
BMPtrList CopyBMPtrList (l, cp)
        BMPtrList l;
        BMPtrMapFct     cp;
#endif
{
    BMPtrList NewList=NULLBMPtrList, *addr = &NewList;

    while (l)
    {
        (*addr) = ConsBMPtrList (cp (l->head), NULLBMPtrList);
        addr = &((*addr)->tail);
        l = l->tail;
    }
    return (NewList);
}/* CopyBMPtrList */

#if defined(__STDC__) || defined(__cplusplus)
BMPtrList AppBMPtrList (BMPtrList l1, BMPtrList l2)
#else
BMPtrList AppBMPtrList (l1, l2)
        BMPtrList       l1, l2;
#endif
{
    BMPtrList   NewList;
    BMPtrList   *addr = &NewList;

    if (!l1) return (l2);
    if (!l2) return (l1);

    while (l1) {
        (*addr) = ConsBMPtrList (l1->head, NULLBMPtrList);
        addr = &((*addr)->tail);
        l1 = l1->tail;
    }
    (*addr) = l2;

    return (NewList);
}/* AppBMPtrList */

#if defined(__STDC__) || defined(__cplusplus)
BMPtrList AppElBMPtrList (BMPtrList l, BMPtr e)
#else
BMPtrList AppElBMPtrList (l, e)
        BMPtrList       l;
        BMPtr   e;
#endif
{
    BMPtrList   res = l;
    if (!l)
        return (ConsBMPtrList (e, NULLBMPtrList));

    while (l->tail)
        l = l->tail;
    l->tail = ConsBMPtrList (e, NULLBMPtrList);

    return (res);
} /* AppElBMPtrList */


#if defined(__STDC__) || defined(__cplusplus)
void InsertAfterBMPtrList (BMPtrList l, BMPtr e)
#else
void InsertAfterBMPtrList (l, e)
        BMPtrList       l;
        BMPtr   e;
#endif
{
    if (!l)
        message (DEADLY, "InsertAfterBMPtrList: null list", 0, (POSITION*)0);
    else
        l->tail = ConsBMPtrList (e, l->tail);
}/* InsertAfterBMPtrList */

#if defined(__STDC__) || defined(__cplusplus)
BMPtrList OrderedInsertBMPtrList (BMPtrList l, BMPtr e, BMPtrCmpFctType fcmp)
#else
BMPtrList OrderedInsertBMPtrList (l, e, fcmp)
        BMPtrList       l;
        BMPtr   e;
        BMPtrCmpFctType fcmp;
#endif
{
    BMPtrList   p;
    if (!l)
        return (ConsBMPtrList (e, NULLBMPtrList));
    if (fcmp (e, l->head) <= 0)
        return (ConsBMPtrList (e, l));
    p = l;
    while (p->tail && (fcmp (e, p->tail->head) > 0))
        p = p->tail;
    p->tail = ConsBMPtrList (e, p->tail);
    return (l);
}/* OrderedInsertBMPtrList */

#if defined(__STDC__) || defined(__cplusplus)
BMPtrListPtr RefEndConsBMPtrList (BMPtrListPtr addr, BMPtr e)
#else
BMPtrListPtr RefEndConsBMPtrList (addr, e)
        BMPtrListPtr    addr;
        BMPtr           e;
#endif
{
    if (!addr)
    {
        message (DEADLY, "RefEndConsBMPtrList: no BMPtrList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    (*addr) = ConsBMPtrList (e, NULLBMPtrList);
    return (&((*addr)->tail));
}/* RefEndConsBMPtrList */

#if defined(__STDC__) || defined(__cplusplus)
BMPtrListPtr RefEndAppBMPtrList (BMPtrListPtr addr, BMPtrList l)
#else
BMPtrListPtr RefEndAppBMPtrList (addr, l)
        BMPtrListPtr    addr;
        BMPtrList               l;
#endif
{
    if (!addr) {
        message (DEADLY, "RefEndAppBMPtrList: no BMPtrList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    if (!l)
        return addr;

    (*addr) = l;

    while (l->tail)
        l = l->tail;
    return (&(l->tail));
}/* RefEndAppBMPtrList */

#if defined(__STDC__) || defined(__cplusplus)
int ElemInBMPtrList (BMPtr e, BMPtrList l, BMPtrCmpFctType fcmp)
#else
int ElemInBMPtrList (e, l, fcmp)
        BMPtr   e;
        BMPtrList       l;
        BMPtrCmpFctType fcmp;
#endif
{
    while (l != NULLBMPtrList) {
        if (fcmp (e, l->head) == 0)
            return (1);
        l = l->tail;
    }
    return (0);
}/* ElemInBMPtrList */

#if defined(__STDC__) || defined(__cplusplus)
BMPtrList AddToSetBMPtrList (BMPtr e, BMPtrList l, BMPtrCmpFctType fcmp)
#else
BMPtrList AddToSetBMPtrList (e, l, fcmp)
        BMPtr   e;
        BMPtrList       l;
        BMPtrCmpFctType fcmp;
#endif
{
    if (ElemInBMPtrList (e, l, fcmp))
        return (l);
    else
        return (ConsBMPtrList (e, l));
}/* AddToSetBMPtrList */


#if defined(__STDC__) || defined(__cplusplus)
BMPtrList AddToOrderedSetBMPtrList (BMPtr e, BMPtrList l, BMPtrCmpFctType fcmp)
#else
BMPtrList AddToOrderedSetBMPtrList (e, l, fcmp)
        BMPtr  e;
        BMPtrList      l;
        BMPtrCmpFctType fcmp;
#endif
{   int test;
    BMPtrList  p;
    if (!l)
        return (ConsBMPtrList (e, NULLBMPtrList));
    if ((test = fcmp (e, l->head)) < 0)
        return (ConsBMPtrList (e, l));
    if (test == 0) return l;
    p = l;
    while (p->tail && ((test = fcmp (e, p->tail->head)) > 0))
        p = p->tail;
    if (test) p->tail = ConsBMPtrList (e, p->tail);
    return (l);
}/* AddToOrderedSetBMPtrList */

#if defined(__STDC__) || defined(__cplusplus)
BMPtrList MapBMPtrList (BMPtrList l, BMPtrMapFct f)
#else
BMPtrList MapBMPtrList (l, f)
        BMPtrList       l;
        BMPtrMapFct f;
#endif
{
    BMPtrList NewList = NULLBMPtrList;
    BMPtrList last = NULLBMPtrList;

    while (l)
    {
        if (!NewList) {
            NewList = ConsBMPtrList ((f (l->head)), NULLBMPtrList);
            last = NewList;
        }
        else
        {
            last->tail = ConsBMPtrList ((f (l->head)), NULLBMPtrList);
            last = last->tail;
        }
        l = l->tail;
    }
    return (NewList);
}/* MapBMPtrList */

#if defined(__STDC__) || defined(__cplusplus)
int CompBMPtrList (BMPtrList l1, BMPtrList l2, BMPtrCmpFctType fcmp)
#else
int CompBMPtrList (l1, l2, fcmp)
        BMPtrList       l1, l2;
        BMPtrCmpFctType fcmp;
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
}/* CompBMPtrList */

#if defined(__STDC__) || defined(__cplusplus)
BMPtr SumBMPtrList (BMPtrList l, BMPtrSumFct f, BMPtr a)
#else
BMPtr SumBMPtrList (l, f, a)
        BMPtrList       l;
        BMPtr ((*f) ());
        BMPtr   a;
#endif
{
    while (l) {
        a = (f (a, l->head));
        l = l->tail;
    }
    return (a);
}/* SumBMPtrList */
