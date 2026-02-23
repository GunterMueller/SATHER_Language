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
    

#ifndef CTValuePtrFUNCTIONTYPES_H
#define CTValuePtrFUNCTIONTYPES_H

#include "eliproto.h"

/* include header file defining CTValuePtr if CTValue is set: */
#define EMPTYCTValueHDR
#ifndef EMPTYHDR
#include "CTValue.h"
#endif
#undef EMPTYCTValueHDR

typedef int (*CTValuePtrCmpFctType) ELI_ARG((CTValuePtr, CTValuePtr));
/* Functions that compare two CTValuePtr values
 *   If the left argument is less than the right then on exit-
 *     CTValuePtrCmpFctType = -1
 *   Else if the arguments are equal then on exit-
 *     CTValuePtrCmpFctType = 0
 *   Else on exit-
 *     CTValuePtrCmpFctType = 1
 ***/

typedef CTValuePtr (*CTValuePtrMapFct) ELI_ARG((CTValuePtr));
/* Functions that map one CTValuePtr value into another
 *   On exit-
 *     CTValuePtrMapFct = image of the argument under the map
 ***/

typedef CTValuePtr (*CTValuePtrSumFct) ELI_ARG((CTValuePtr, CTValuePtr));
/* Functions that combine two CTValuePtr values
 *   On exit-
 *     CTValuePtrSumFct = combination of the two arguments
 ***/

#endif
