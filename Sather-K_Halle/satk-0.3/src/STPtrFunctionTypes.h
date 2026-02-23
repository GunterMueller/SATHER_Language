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
    

#ifndef STPtrFUNCTIONTYPES_H
#define STPtrFUNCTIONTYPES_H

#include "eliproto.h"

/* include header file defining STPtr if SatherType is set: */
#define EMPTYSatherTypeHDR
#ifndef EMPTYHDR
#include "SatherType.h"
#endif
#undef EMPTYSatherTypeHDR

typedef int (*STPtrCmpFctType) ELI_ARG((STPtr, STPtr));
/* Functions that compare two STPtr values
 *   If the left argument is less than the right then on exit-
 *     STPtrCmpFctType = -1
 *   Else if the arguments are equal then on exit-
 *     STPtrCmpFctType = 0
 *   Else on exit-
 *     STPtrCmpFctType = 1
 ***/

typedef STPtr (*STPtrMapFct) ELI_ARG((STPtr));
/* Functions that map one STPtr value into another
 *   On exit-
 *     STPtrMapFct = image of the argument under the map
 ***/

typedef STPtr (*STPtrSumFct) ELI_ARG((STPtr, STPtr));
/* Functions that combine two STPtr values
 *   On exit-
 *     STPtrSumFct = combination of the two arguments
 ***/

#endif
