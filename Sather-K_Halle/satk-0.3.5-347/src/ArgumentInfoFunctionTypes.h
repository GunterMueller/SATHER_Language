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
    

#ifndef ArgumentInfoFUNCTIONTYPES_H
#define ArgumentInfoFUNCTIONTYPES_H

#include "eliproto.h"

/* include header file defining ArgumentInfo if ArgumentParameter is set: */
#define EMPTYArgumentParameterHDR
#ifndef EMPTYHDR
#include "ArgumentParameter.h"
#endif
#undef EMPTYArgumentParameterHDR

typedef int (*ArgumentInfoCmpFctType) ELI_ARG((ArgumentInfo, ArgumentInfo));
/* Functions that compare two ArgumentInfo values
 *   If the left argument is less than the right then on exit-
 *     ArgumentInfoCmpFctType = -1
 *   Else if the arguments are equal then on exit-
 *     ArgumentInfoCmpFctType = 0
 *   Else on exit-
 *     ArgumentInfoCmpFctType = 1
 ***/

typedef ArgumentInfo (*ArgumentInfoMapFct) ELI_ARG((ArgumentInfo));
/* Functions that map one ArgumentInfo value into another
 *   On exit-
 *     ArgumentInfoMapFct = image of the argument under the map
 ***/

typedef ArgumentInfo (*ArgumentInfoSumFct) ELI_ARG((ArgumentInfo, ArgumentInfo));
/* Functions that combine two ArgumentInfo values
 *   On exit-
 *     ArgumentInfoSumFct = combination of the two arguments
 ***/

#endif
