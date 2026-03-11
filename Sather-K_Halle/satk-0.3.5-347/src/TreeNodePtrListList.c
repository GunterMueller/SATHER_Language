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
    


#include "TreeNodePtrListList.h"
#include "err.h"
#include "obstack.h"

typedef struct {
  Obstack space;
  void *baseptr;
} Dyn, *DynP;

static DynP TreeNodePtrListListSpace = (DynP)0;

#if defined(__STDC__) || defined(__cplusplus)
void FinlTreeNodePtrListList (void)
#else
void FinlTreeNodePtrListList ()
#endif
{
    if (TreeNodePtrListListSpace != (DynP)0)
    {  obstack_free(&(TreeNodePtrListListSpace->space), TreeNodePtrListListSpace->baseptr);
       TreeNodePtrListListSpace->baseptr = obstack_alloc(&(TreeNodePtrListListSpace->space), 0);
    }
}/* FinlTreeNodePtrListList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrListList ConsTreeNodePtrListList (TreeNodePtrList e, TreeNodePtrListList l)
#else
TreeNodePtrListList ConsTreeNodePtrListList (e, l)
        TreeNodePtrList e;
        TreeNodePtrListList     l;
#endif
{
    TreeNodePtrListList h;

    if (TreeNodePtrListListSpace == (DynP)0)
    {   TreeNodePtrListListSpace = (DynP) malloc (sizeof(Dyn));
        if (TreeNodePtrListListSpace == (DynP)0)
        {  message (DEADLY, "no space for TreeNodePtrListList", 0, (POSITION*)0);
           exit (1);
        }
        obstack_init(&(TreeNodePtrListListSpace->space));
        TreeNodePtrListListSpace->baseptr =
                obstack_alloc(&(TreeNodePtrListListSpace->space), 0);
    }

    h = (TreeNodePtrListList)obstack_alloc(&(TreeNodePtrListListSpace->space),
                                  sizeof (struct _TreeNodePtrListLE));
    h->head = e;
    h->tail= l;
    return (h);
}/* ConsTreeNodePtrListList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrList HeadTreeNodePtrListList (TreeNodePtrListList l)
#else
TreeNodePtrList HeadTreeNodePtrListList (l)
        TreeNodePtrListList     l;
#endif
{
    if (l == NULLTreeNodePtrListList)
    {
        message (DEADLY, "HeadTreeNodePtrListList: empty list", 0, (POSITION*)0);
        /* return ((TreeNodePtrList)0); */
    } /* if */
    return (l->head);
}/* HeadTreeNodePtrListList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrListList TailTreeNodePtrListList (TreeNodePtrListList l)
#else
TreeNodePtrListList TailTreeNodePtrListList (l)
        TreeNodePtrListList     l;
#endif
{
    return ((l==NULLTreeNodePtrListList) ? NULLTreeNodePtrListList : l->tail);
}/* TailTreeNodePtrListList */

#if defined(__STDC__) || defined(__cplusplus)
int LengthTreeNodePtrListList (TreeNodePtrListList l)
#else
int LengthTreeNodePtrListList (l)
        TreeNodePtrListList     l;
#endif
{
    int res = 0;

    for (; l; l = l->tail)
        res++;
    return (res);
}/* LengthTreeNodePtrListList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrList IthElemTreeNodePtrListList (TreeNodePtrListList l, int i)
#else
TreeNodePtrList IthElemTreeNodePtrListList (l, i)
        TreeNodePtrListList     l;
        int     i;
#endif
{
    while ((i>1) && l)
    {
        i--;
        l = l->tail;
    }

    if ((i<=0) || (l==NULLTreeNodePtrListList))
        message (DEADLY, "IthElemTreeNodePtrListList: no such element",
                 0, (POSITION*)0);
    return (l->head);
}/* IthTreeNodePtrListList */


#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrListList CopyTreeNodePtrListList (TreeNodePtrListList l, TreeNodePtrListMapFct cp)
#else
TreeNodePtrListList CopyTreeNodePtrListList (l, cp)
        TreeNodePtrListList l;
        TreeNodePtrListMapFct   cp;
#endif
{
    TreeNodePtrListList NewList=NULLTreeNodePtrListList, *addr = &NewList;

    while (l)
    {
        (*addr) = ConsTreeNodePtrListList (cp (l->head), NULLTreeNodePtrListList);
        addr = &((*addr)->tail);
        l = l->tail;
    }
    return (NewList);
}/* CopyTreeNodePtrListList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrListList AppTreeNodePtrListList (TreeNodePtrListList l1, TreeNodePtrListList l2)
#else
TreeNodePtrListList AppTreeNodePtrListList (l1, l2)
        TreeNodePtrListList     l1, l2;
#endif
{
    TreeNodePtrListList NewList;
    TreeNodePtrListList *addr = &NewList;

    if (!l1) return (l2);
    if (!l2) return (l1);

    while (l1) {
        (*addr) = ConsTreeNodePtrListList (l1->head, NULLTreeNodePtrListList);
        addr = &((*addr)->tail);
        l1 = l1->tail;
    }
    (*addr) = l2;

    return (NewList);
}/* AppTreeNodePtrListList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrListList AppElTreeNodePtrListList (TreeNodePtrListList l, TreeNodePtrList e)
#else
TreeNodePtrListList AppElTreeNodePtrListList (l, e)
        TreeNodePtrListList     l;
        TreeNodePtrList e;
#endif
{
    TreeNodePtrListList res = l;
    if (!l)
        return (ConsTreeNodePtrListList (e, NULLTreeNodePtrListList));

    while (l->tail)
        l = l->tail;
    l->tail = ConsTreeNodePtrListList (e, NULLTreeNodePtrListList);

    return (res);
} /* AppElTreeNodePtrListList */


#if defined(__STDC__) || defined(__cplusplus)
void InsertAfterTreeNodePtrListList (TreeNodePtrListList l, TreeNodePtrList e)
#else
void InsertAfterTreeNodePtrListList (l, e)
        TreeNodePtrListList     l;
        TreeNodePtrList e;
#endif
{
    if (!l)
        message (DEADLY, "InsertAfterTreeNodePtrListList: null list", 0, (POSITION*)0);
    else
        l->tail = ConsTreeNodePtrListList (e, l->tail);
}/* InsertAfterTreeNodePtrListList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrListList OrderedInsertTreeNodePtrListList (TreeNodePtrListList l, TreeNodePtrList e, TreeNodePtrListCmpFctType fcmp)
#else
TreeNodePtrListList OrderedInsertTreeNodePtrListList (l, e, fcmp)
        TreeNodePtrListList     l;
        TreeNodePtrList e;
        TreeNodePtrListCmpFctType fcmp;
#endif
{
    TreeNodePtrListList p;
    if (!l)
        return (ConsTreeNodePtrListList (e, NULLTreeNodePtrListList));
    if (fcmp (e, l->head) <= 0)
        return (ConsTreeNodePtrListList (e, l));
    p = l;
    while (p->tail && (fcmp (e, p->tail->head) > 0))
        p = p->tail;
    p->tail = ConsTreeNodePtrListList (e, p->tail);
    return (l);
}/* OrderedInsertTreeNodePtrListList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrListListPtr RefEndConsTreeNodePtrListList (TreeNodePtrListListPtr addr, TreeNodePtrList e)
#else
TreeNodePtrListListPtr RefEndConsTreeNodePtrListList (addr, e)
        TreeNodePtrListListPtr  addr;
        TreeNodePtrList         e;
#endif
{
    if (!addr)
    {
        message (DEADLY, "RefEndConsTreeNodePtrListList: no TreeNodePtrListList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    (*addr) = ConsTreeNodePtrListList (e, NULLTreeNodePtrListList);
    return (&((*addr)->tail));
}/* RefEndConsTreeNodePtrListList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrListListPtr RefEndAppTreeNodePtrListList (TreeNodePtrListListPtr addr, TreeNodePtrListList l)
#else
TreeNodePtrListListPtr RefEndAppTreeNodePtrListList (addr, l)
        TreeNodePtrListListPtr  addr;
        TreeNodePtrListList             l;
#endif
{
    if (!addr) {
        message (DEADLY, "RefEndAppTreeNodePtrListList: no TreeNodePtrListList ref",
                 0, (POSITION*)0);
        return (addr);
    }
    if (!l)
        return addr;

    (*addr) = l;

    while (l->tail)
        l = l->tail;
    return (&(l->tail));
}/* RefEndAppTreeNodePtrListList */

#if defined(__STDC__) || defined(__cplusplus)
int ElemInTreeNodePtrListList (TreeNodePtrList e, TreeNodePtrListList l, TreeNodePtrListCmpFctType fcmp)
#else
int ElemInTreeNodePtrListList (e, l, fcmp)
        TreeNodePtrList e;
        TreeNodePtrListList     l;
        TreeNodePtrListCmpFctType       fcmp;
#endif
{
    while (l != NULLTreeNodePtrListList) {
        if (fcmp (e, l->head) == 0)
            return (1);
        l = l->tail;
    }
    return (0);
}/* ElemInTreeNodePtrListList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrListList AddToSetTreeNodePtrListList (TreeNodePtrList e, TreeNodePtrListList l, TreeNodePtrListCmpFctType fcmp)
#else
TreeNodePtrListList AddToSetTreeNodePtrListList (e, l, fcmp)
        TreeNodePtrList e;
        TreeNodePtrListList     l;
        TreeNodePtrListCmpFctType       fcmp;
#endif
{
    if (ElemInTreeNodePtrListList (e, l, fcmp))
        return (l);
    else
        return (ConsTreeNodePtrListList (e, l));
}/* AddToSetTreeNodePtrListList */


#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrListList AddToOrderedSetTreeNodePtrListList (TreeNodePtrList e, TreeNodePtrListList l, TreeNodePtrListCmpFctType fcmp)
#else
TreeNodePtrListList AddToOrderedSetTreeNodePtrListList (e, l, fcmp)
        TreeNodePtrList  e;
        TreeNodePtrListList      l;
        TreeNodePtrListCmpFctType fcmp;
#endif
{   int test;
    TreeNodePtrListList  p;
    if (!l)
        return (ConsTreeNodePtrListList (e, NULLTreeNodePtrListList));
    if ((test = fcmp (e, l->head)) < 0)
        return (ConsTreeNodePtrListList (e, l));
    if (test == 0) return l;
    p = l;
    while (p->tail && ((test = fcmp (e, p->tail->head)) > 0))
        p = p->tail;
    if (test) p->tail = ConsTreeNodePtrListList (e, p->tail);
    return (l);
}/* AddToOrderedSetTreeNodePtrListList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrListList MapTreeNodePtrListList (TreeNodePtrListList l, TreeNodePtrListMapFct f)
#else
TreeNodePtrListList MapTreeNodePtrListList (l, f)
        TreeNodePtrListList     l;
        TreeNodePtrListMapFct f;
#endif
{
    TreeNodePtrListList NewList = NULLTreeNodePtrListList;
    TreeNodePtrListList last = NULLTreeNodePtrListList;

    while (l)
    {
        if (!NewList) {
            NewList = ConsTreeNodePtrListList ((f (l->head)), NULLTreeNodePtrListList);
            last = NewList;
        }
        else
        {
            last->tail = ConsTreeNodePtrListList ((f (l->head)), NULLTreeNodePtrListList);
            last = last->tail;
        }
        l = l->tail;
    }
    return (NewList);
}/* MapTreeNodePtrListList */

#if defined(__STDC__) || defined(__cplusplus)
int CompTreeNodePtrListList (TreeNodePtrListList l1, TreeNodePtrListList l2, TreeNodePtrListCmpFctType fcmp)
#else
int CompTreeNodePtrListList (l1, l2, fcmp)
        TreeNodePtrListList     l1, l2;
        TreeNodePtrListCmpFctType fcmp;
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
}/* CompTreeNodePtrListList */

#if defined(__STDC__) || defined(__cplusplus)
TreeNodePtrList SumTreeNodePtrListList (TreeNodePtrListList l, TreeNodePtrListSumFct f, TreeNodePtrList a)
#else
TreeNodePtrList SumTreeNodePtrListList (l, f, a)
        TreeNodePtrListList     l;
        TreeNodePtrList ((*f) ());
        TreeNodePtrList a;
#endif
{
    while (l) {
        a = (f (a, l->head));
        l = l->tail;
    }
    return (a);
}/* SumTreeNodePtrListList */
