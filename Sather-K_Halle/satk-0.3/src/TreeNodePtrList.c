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
    


#include "TreeNodePtrList.h"
#include "err.h"
#include "obstack.h"

typedef struct {
  Obstack space;
  void *baseptr;
} Dyn, *DynP;

static DynP TreeNodePtrListSpace = (DynP)0;

#if defined(__STDC__) || defined(__cplusplus)
void FinlTreeNodePtrList (void)
#else
void FinlTreeNodePtrList ()
#endif
{
    if (TreeNodePtrListSpace != (DynP)0)
    {  obstack_free(&(TreeNodePtrListSpace->space), TreeNodePtrListSpace->baseptr);
       TreeNodePtrListSpace->baseptr = obstack_alloc(&(TreeNodePtrListSpace->space), 0);
    }
}/* FinlTreeNodePtrList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrList ConsTreeNodePtrList (TreeNodePtr e, TreeNodePtrList l)
#else
TreeNodePtrList ConsTreeNodePtrList (e, l)
        TreeNodePtr     e;
        TreeNodePtrList l;
#endif
{
    TreeNodePtrList     h;

    if (TreeNodePtrListSpace == (DynP)0)
    {   TreeNodePtrListSpace = (DynP) malloc (sizeof(Dyn));
        if (TreeNodePtrListSpace == (DynP)0)
        {  message (DEADLY, "no space for TreeNodePtrList", 0, (POSITION*)0);
           exit (1);
        }
        obstack_init(&(TreeNodePtrListSpace->space));
        TreeNodePtrListSpace->baseptr =
                obstack_alloc(&(TreeNodePtrListSpace->space), 0);
    }

    h = (TreeNodePtrList)obstack_alloc(&(TreeNodePtrListSpace->space),
                                  sizeof (struct _TreeNodePtrLE));
    h->head = e;
    h->tail= l;
    return (h);
}/* ConsTreeNodePtrList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtr HeadTreeNodePtrList (TreeNodePtrList l)
#else
TreeNodePtr HeadTreeNodePtrList (l)
        TreeNodePtrList l;
#endif
{
    if (l == NULLTreeNodePtrList)
    {
        message (DEADLY, "HeadTreeNodePtrList: empty list", 0, (POSITION*)0);
        /* return ((TreeNodePtr)0); */
    } /* if */
    return (l->head);
}/* HeadTreeNodePtrList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrList TailTreeNodePtrList (TreeNodePtrList l)
#else
TreeNodePtrList TailTreeNodePtrList (l)
        TreeNodePtrList l;
#endif
{
    return ((l==NULLTreeNodePtrList) ? NULLTreeNodePtrList : l->tail);
}/* TailTreeNodePtrList */

#if defined(__STDC__) || defined(__cplusplus)
int LengthTreeNodePtrList (TreeNodePtrList l)
#else
int LengthTreeNodePtrList (l)
        TreeNodePtrList l;
#endif
{
    int res = 0;

    for (; l; l = l->tail)
        res++;
    return (res);
}/* LengthTreeNodePtrList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtr IthElemTreeNodePtrList (TreeNodePtrList l, int i)
#else
TreeNodePtr IthElemTreeNodePtrList (l, i)
        TreeNodePtrList l;
        int     i;
#endif
{
    while ((i>1) && l)
    {
        i--;
        l = l->tail;
    }

    if ((i<=0) || (l==NULLTreeNodePtrList))
        message (DEADLY, "IthElemTreeNodePtrList: no such element",
                 0, (POSITION*)0);
    return (l->head);
}/* IthTreeNodePtrList */


#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrList CopyTreeNodePtrList (TreeNodePtrList l, TreeNodePtrMapFct cp)
#else
TreeNodePtrList CopyTreeNodePtrList (l, cp)
        TreeNodePtrList l;
        TreeNodePtrMapFct       cp;
#endif
{
    TreeNodePtrList NewList=NULLTreeNodePtrList, *addr = &NewList;

    while (l)
    {
        (*addr) = ConsTreeNodePtrList (cp (l->head), NULLTreeNodePtrList);
        addr = &((*addr)->tail);
        l = l->tail;
    }
    return (NewList);
}/* CopyTreeNodePtrList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrList AppTreeNodePtrList (TreeNodePtrList l1, TreeNodePtrList l2)
#else
TreeNodePtrList AppTreeNodePtrList (l1, l2)
        TreeNodePtrList l1, l2;
#endif
{
    TreeNodePtrList     NewList;
    TreeNodePtrList     *addr = &NewList;

    if (!l1) return (l2);
    if (!l2) return (l1);

    while (l1) {
        (*addr) = ConsTreeNodePtrList (l1->head, NULLTreeNodePtrList);
        addr = &((*addr)->tail);
        l1 = l1->tail;
    }
    (*addr) = l2;

    return (NewList);
}/* AppTreeNodePtrList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrList AppElTreeNodePtrList (TreeNodePtrList l, TreeNodePtr e)
#else
TreeNodePtrList AppElTreeNodePtrList (l, e)
        TreeNodePtrList l;
        TreeNodePtr     e;
#endif
{
    TreeNodePtrList     res = l;
    if (!l)
        return (ConsTreeNodePtrList (e, NULLTreeNodePtrList));

    while (l->tail)
        l = l->tail;
    l->tail = ConsTreeNodePtrList (e, NULLTreeNodePtrList);

    return (res);
} /* AppElTreeNodePtrList */


#if defined(__STDC__) || defined(__cplusplus)
void InsertAfterTreeNodePtrList (TreeNodePtrList l, TreeNodePtr e)
#else
void InsertAfterTreeNodePtrList (l, e)
        TreeNodePtrList l;
        TreeNodePtr     e;
#endif
{
    if (!l)
        message (DEADLY, "InsertAfterTreeNodePtrList: null list", 0, (POSITION*)0);
    else
        l->tail = ConsTreeNodePtrList (e, l->tail);
}/* InsertAfterTreeNodePtrList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrList OrderedInsertTreeNodePtrList (TreeNodePtrList l, TreeNodePtr e, TreeNodePtrCmpFctType fcmp)
#else
TreeNodePtrList OrderedInsertTreeNodePtrList (l, e, fcmp)
        TreeNodePtrList l;
        TreeNodePtr     e;
        TreeNodePtrCmpFctType fcmp;
#endif
{
    TreeNodePtrList     p;
    if (!l)
        return (ConsTreeNodePtrList (e, NULLTreeNodePtrList));
    if (fcmp (e, l->head) <= 0)
        return (ConsTreeNodePtrList (e, l));
    p = l;
    while (p->tail && (fcmp (e, p->tail->head) > 0))
        p = p->tail;
    p->tail = ConsTreeNodePtrList (e, p->tail);
    return (l);
}/* OrderedInsertTreeNodePtrList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrListPtr RefEndConsTreeNodePtrList (TreeNodePtrListPtr addr, TreeNodePtr e)
#else
TreeNodePtrListPtr RefEndConsTreeNodePtrList (addr, e)
        TreeNodePtrListPtr      addr;
        TreeNodePtr             e;
#endif
{
    if (!addr)
    {
        message (DEADLY, "RefEndConsTreeNodePtrList: no TreeNodePtrList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    (*addr) = ConsTreeNodePtrList (e, NULLTreeNodePtrList);
    return (&((*addr)->tail));
}/* RefEndConsTreeNodePtrList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrListPtr RefEndAppTreeNodePtrList (TreeNodePtrListPtr addr, TreeNodePtrList l)
#else
TreeNodePtrListPtr RefEndAppTreeNodePtrList (addr, l)
        TreeNodePtrListPtr      addr;
        TreeNodePtrList         l;
#endif
{
    if (!addr) {
        message (DEADLY, "RefEndAppTreeNodePtrList: no TreeNodePtrList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    if (!l)
        return addr;

    (*addr) = l;

    while (l->tail)
        l = l->tail;
    return (&(l->tail));
}/* RefEndAppTreeNodePtrList */

#if defined(__STDC__) || defined(__cplusplus)
int ElemInTreeNodePtrList (TreeNodePtr e, TreeNodePtrList l, TreeNodePtrCmpFctType fcmp)
#else
int ElemInTreeNodePtrList (e, l, fcmp)
        TreeNodePtr     e;
        TreeNodePtrList l;
        TreeNodePtrCmpFctType   fcmp;
#endif
{
    while (l != NULLTreeNodePtrList) {
        if (fcmp (e, l->head) == 0)
            return (1);
        l = l->tail;
    }
    return (0);
}/* ElemInTreeNodePtrList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrList AddToSetTreeNodePtrList (TreeNodePtr e, TreeNodePtrList l, TreeNodePtrCmpFctType fcmp)
#else
TreeNodePtrList AddToSetTreeNodePtrList (e, l, fcmp)
        TreeNodePtr     e;
        TreeNodePtrList l;
        TreeNodePtrCmpFctType   fcmp;
#endif
{
    if (ElemInTreeNodePtrList (e, l, fcmp))
        return (l);
    else
        return (ConsTreeNodePtrList (e, l));
}/* AddToSetTreeNodePtrList */


#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrList AddToOrderedSetTreeNodePtrList (TreeNodePtr e, TreeNodePtrList l, TreeNodePtrCmpFctType fcmp)
#else
TreeNodePtrList AddToOrderedSetTreeNodePtrList (e, l, fcmp)
        TreeNodePtr  e;
        TreeNodePtrList      l;
        TreeNodePtrCmpFctType fcmp;
#endif
{   int test;
    TreeNodePtrList  p;
    if (!l)
        return (ConsTreeNodePtrList (e, NULLTreeNodePtrList));
    if ((test = fcmp (e, l->head)) < 0)
        return (ConsTreeNodePtrList (e, l));
    if (test == 0) return l;
    p = l;
    while (p->tail && ((test = fcmp (e, p->tail->head)) > 0))
        p = p->tail;
    if (test) p->tail = ConsTreeNodePtrList (e, p->tail);
    return (l);
}/* AddToOrderedSetTreeNodePtrList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrList MapTreeNodePtrList (TreeNodePtrList l, TreeNodePtrMapFct f)
#else
TreeNodePtrList MapTreeNodePtrList (l, f)
        TreeNodePtrList l;
        TreeNodePtrMapFct f;
#endif
{
    TreeNodePtrList NewList = NULLTreeNodePtrList;
    TreeNodePtrList last = NULLTreeNodePtrList;

    while (l)
    {
        if (!NewList) {
            NewList = ConsTreeNodePtrList ((f (l->head)), NULLTreeNodePtrList);
            last = NewList;
        }
        else
        {
            last->tail = ConsTreeNodePtrList ((f (l->head)), NULLTreeNodePtrList);
            last = last->tail;
        }
        l = l->tail;
    }
    return (NewList);
}/* MapTreeNodePtrList */

#if defined(__STDC__) || defined(__cplusplus)
int CompTreeNodePtrList (TreeNodePtrList l1, TreeNodePtrList l2, TreeNodePtrCmpFctType fcmp)
#else
int CompTreeNodePtrList (l1, l2, fcmp)
        TreeNodePtrList l1, l2;
        TreeNodePtrCmpFctType fcmp;
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
}/* CompTreeNodePtrList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtr SumTreeNodePtrList (TreeNodePtrList l, TreeNodePtrSumFct f, TreeNodePtr a)
#else
TreeNodePtr SumTreeNodePtrList (l, f, a)
        TreeNodePtrList l;
        TreeNodePtr ((*f) ());
        TreeNodePtr     a;
#endif
{
    while (l) {
        a = (f (a, l->head));
        l = l->tail;
    }
    return (a);
}/* SumTreeNodePtrList */
