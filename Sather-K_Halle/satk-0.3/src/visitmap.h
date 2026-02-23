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
    
#ifndef VISITMAP_H
#define VISITMAP_H

#include "nodeptr.h"

#if defined(__STDC__) || defined(__cplusplus)
typedef void (* _VPROCPTR) (NODEPTR);
#else
typedef void (* _VPROCPTR) ();
#endif

extern _VPROCPTR VS10MAP[];
extern _VPROCPTR VS9MAP[];
extern _VPROCPTR VS8MAP[];
extern _VPROCPTR VS7MAP[];
extern _VPROCPTR VS6MAP[];
extern _VPROCPTR VS5MAP[];
extern _VPROCPTR VS4MAP[];
extern _VPROCPTR VS3MAP[];
extern _VPROCPTR VS2MAP[];
extern _VPROCPTR VS1MAP[];

#endif

