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
    

#ifndef BMPtrFUNCTIONTYPES_H
#define BMPtrFUNCTIONTYPES_H

#include "eliproto.h"

/* include header file defining BMPtr if BoundMethods is set: */
#define EMPTYBoundMethodsHDR
#ifndef EMPTYHDR
#include "BoundMethods.h"
#endif
#undef EMPTYBoundMethodsHDR

typedef int (*BMPtrCmpFctType) ELI_ARG((BMPtr, BMPtr));
/* Functions that compare two BMPtr values
 *   If the left argument is less than the right then on exit-
 *     BMPtrCmpFctType = -1
 *   Else if the arguments are equal then on exit-
 *     BMPtrCmpFctType = 0
 *   Else on exit-
 *     BMPtrCmpFctType = 1
 ***/

typedef BMPtr (*BMPtrMapFct) ELI_ARG((BMPtr));
/* Functions that map one BMPtr value into another
 *   On exit-
 *     BMPtrMapFct = image of the argument under the map
 ***/

typedef BMPtr (*BMPtrSumFct) ELI_ARG((BMPtr, BMPtr));
/* Functions that combine two BMPtr values
 *   On exit-
 *     BMPtrSumFct = combination of the two arguments
 ***/

#endif
