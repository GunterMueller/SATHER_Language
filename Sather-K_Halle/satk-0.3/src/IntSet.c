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
    

#include "err.h"
#include "IntSet.h"

#define noelem(el) ((el)<0 || (el>MaxElemIS))

static POSITION coord = {0, 0};

#if defined(__STDC__) || defined(__cplusplus)
IntSet SingleIS (int el)
#else
IntSet SingleIS (el) int el;
#endif
{
if (noelem(el)) 
        message (DEADLY,"IntSet: SingleIS got wrong elem", el, &coord);
return ((IntSet)(0x1 << el));
}/*SingleIS*/

#if defined(__STDC__) || defined(__cplusplus)
IntSet AddElIS (int el, IntSet s)
#else
IntSet AddElIS (el, s) int el; IntSet s;
#endif
{
if (noelem(el)) 
        message (DEADLY,"IntSet: AddElIS got wrong elem", el, &coord);
return (UniteIS (SingleIS (el), s));
}/*AddElIS*/

#if defined(__STDC__) || defined(__cplusplus)
int InIS (int el, IntSet s)
#else
int InIS (el, s) int el; IntSet s;
#endif
{
if (noelem(el)) 
        message (DEADLY,"IntSet: InIS got wrong elem", el, &coord);
return ( ( ((IntSet)(0x1 << el)) & s) != NULLIS);
}/*InIS*/

#if defined(__STDC__) || defined(__cplusplus)
int InclIS (IntSet s1, IntSet s2)
#else
int InclIS (s1, s2) IntSet s1, s2;
#endif
{
return (InterIS (s1,s2) == s1);
}/*InclIS*/

#if defined(__STDC__) || defined(__cplusplus)
int CardIS (IntSet s)
#else
int CardIS (s) IntSet s;
#endif
{       int     card = 0;
while (s != NULLIS) {
        card += (s & (IntSet)0x1);
        s = (IntSet)s >> 1;
}
return (card);
}/*CardIS*/
