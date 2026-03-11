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
    

#ifndef InheritanceInfoFUNCTIONTYPES_H
#define InheritanceInfoFUNCTIONTYPES_H

#include "eliproto.h"

/* include header file defining InheritanceInfo if InheritanceParameter is set: */
#define EMPTYInheritanceParameterHDR
#ifndef EMPTYHDR
#include "InheritanceParameter.h"
#endif
#undef EMPTYInheritanceParameterHDR

typedef int (*InheritanceInfoCmpFctType) ELI_ARG((InheritanceInfo, InheritanceInfo));
/* Functions that compare two InheritanceInfo values
 *   If the left argument is less than the right then on exit-
 *     InheritanceInfoCmpFctType = -1
 *   Else if the arguments are equal then on exit-
 *     InheritanceInfoCmpFctType = 0
 *   Else on exit-
 *     InheritanceInfoCmpFctType = 1
 ***/

typedef InheritanceInfo (*InheritanceInfoMapFct) ELI_ARG((InheritanceInfo));
/* Functions that map one InheritanceInfo value into another
 *   On exit-
 *     InheritanceInfoMapFct = image of the argument under the map
 ***/

typedef InheritanceInfo (*InheritanceInfoSumFct) ELI_ARG((InheritanceInfo, InheritanceInfo));
/* Functions that combine two InheritanceInfo values
 *   On exit-
 *     InheritanceInfoSumFct = combination of the two arguments
 ***/

#endif
