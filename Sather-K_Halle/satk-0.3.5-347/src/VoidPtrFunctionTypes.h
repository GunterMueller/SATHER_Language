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
    

#ifndef VoidPtrFUNCTIONTYPES_H
#define VoidPtrFUNCTIONTYPES_H

#include "eliproto.h"

/* include header file defining VoidPtr if VoidPtr is set: */
#define EMPTYVoidPtrHDR
#ifndef EMPTYHDR
#include "VoidPtr.h"
#endif
#undef EMPTYVoidPtrHDR

typedef int (*VoidPtrCmpFctType) ELI_ARG((VoidPtr, VoidPtr));
/* Functions that compare two VoidPtr values
 *   If the left argument is less than the right then on exit-
 *     VoidPtrCmpFctType = -1
 *   Else if the arguments are equal then on exit-
 *     VoidPtrCmpFctType = 0
 *   Else on exit-
 *     VoidPtrCmpFctType = 1
 ***/

typedef VoidPtr (*VoidPtrMapFct) ELI_ARG((VoidPtr));
/* Functions that map one VoidPtr value into another
 *   On exit-
 *     VoidPtrMapFct = image of the argument under the map
 ***/

typedef VoidPtr (*VoidPtrSumFct) ELI_ARG((VoidPtr, VoidPtr));
/* Functions that combine two VoidPtr values
 *   On exit-
 *     VoidPtrSumFct = combination of the two arguments
 ***/

#endif
