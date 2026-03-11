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
    

#ifndef ValueRangePtrFUNCTIONTYPES_H
#define ValueRangePtrFUNCTIONTYPES_H

#include "eliproto.h"

/* include header file defining ValueRangePtr if CTValue is set: */
#define EMPTYCTValueHDR
#ifndef EMPTYHDR
#include "CTValue.h"
#endif
#undef EMPTYCTValueHDR

typedef int (*ValueRangePtrCmpFctType) ELI_ARG((ValueRangePtr, ValueRangePtr));
/* Functions that compare two ValueRangePtr values
 *   If the left argument is less than the right then on exit-
 *     ValueRangePtrCmpFctType = -1
 *   Else if the arguments are equal then on exit-
 *     ValueRangePtrCmpFctType = 0
 *   Else on exit-
 *     ValueRangePtrCmpFctType = 1
 ***/

typedef ValueRangePtr (*ValueRangePtrMapFct) ELI_ARG((ValueRangePtr));
/* Functions that map one ValueRangePtr value into another
 *   On exit-
 *     ValueRangePtrMapFct = image of the argument under the map
 ***/

typedef ValueRangePtr (*ValueRangePtrSumFct) ELI_ARG((ValueRangePtr, ValueRangePtr));
/* Functions that combine two ValueRangePtr values
 *   On exit-
 *     ValueRangePtrSumFct = combination of the two arguments
 ***/

#endif
