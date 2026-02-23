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
    

#ifndef OvrPtrFUNCTIONTYPES_H
#define OvrPtrFUNCTIONTYPES_H

#include "eliproto.h"

/* include header file defining OvrPtr if Overriding is set: */
#define EMPTYOverridingHDR
#ifndef EMPTYHDR
#include "Overriding.h"
#endif
#undef EMPTYOverridingHDR

typedef int (*OvrPtrCmpFctType) ELI_ARG((OvrPtr, OvrPtr));
/* Functions that compare two OvrPtr values
 *   If the left argument is less than the right then on exit-
 *     OvrPtrCmpFctType = -1
 *   Else if the arguments are equal then on exit-
 *     OvrPtrCmpFctType = 0
 *   Else on exit-
 *     OvrPtrCmpFctType = 1
 ***/

typedef OvrPtr (*OvrPtrMapFct) ELI_ARG((OvrPtr));
/* Functions that map one OvrPtr value into another
 *   On exit-
 *     OvrPtrMapFct = image of the argument under the map
 ***/

typedef OvrPtr (*OvrPtrSumFct) ELI_ARG((OvrPtr, OvrPtr));
/* Functions that combine two OvrPtr values
 *   On exit-
 *     OvrPtrSumFct = combination of the two arguments
 ***/

#endif
