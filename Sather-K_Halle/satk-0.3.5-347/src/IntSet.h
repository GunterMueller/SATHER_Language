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
    

#ifndef _INTSET
#define _INTSET

typedef unsigned int IntSet;

#define NullIS()        ((IntSet)0)
#define NULLIS          ((IntSet)0)
#define MaxElemIS       (8*sizeof(IntSet)-1)

#define ConsIS(el,s)    ((IntSet)((0x1 << (el)) | (s)))
#define UniteIS(s1,s2)  ((IntSet)((s1) | (s2)))
#define InterIS(s1,s2)  ((IntSet)((s1) & (s2)))
#define SubIS(s1,s2)    ((IntSet)((s1) & ~(s2)))
#define DisjIS(s1,s2)   (InterIS (s1, s2) == NULLIS)
#define EmptyIS(s)      ((s) == NULLIS)
#define EqualIS(s1,s2)  ((s1) == (s2))

#if defined(__STDC__) || defined(__cplusplus)
extern IntSet   SingleIS        (int el);
extern IntSet   AddElIS (int el, IntSet s);
extern int              InIS    (int el, IntSet s);
extern int              InclIS  (IntSet s1, IntSet s2);
extern int              CardIS  (IntSet s);
#else
extern IntSet   SingleIS        ();
extern IntSet   AddElIS ();
extern int              InIS    ();
extern int              InclIS  ();
extern int              CardIS  ();
#endif

#endif
