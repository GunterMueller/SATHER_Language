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
    

#ifndef GenericInfoFUNCTIONTYPES_H
#define GenericInfoFUNCTIONTYPES_H

#include "eliproto.h"

/* include header file defining GenericInfo if GenericParameter is set: */
#define EMPTYGenericParameterHDR
#ifndef EMPTYHDR
#include "GenericParameter.h"
#endif
#undef EMPTYGenericParameterHDR

typedef int (*GenericInfoCmpFctType) ELI_ARG((GenericInfo, GenericInfo));
/* Functions that compare two GenericInfo values
 *   If the left argument is less than the right then on exit-
 *     GenericInfoCmpFctType = -1
 *   Else if the arguments are equal then on exit-
 *     GenericInfoCmpFctType = 0
 *   Else on exit-
 *     GenericInfoCmpFctType = 1
 ***/

typedef GenericInfo (*GenericInfoMapFct) ELI_ARG((GenericInfo));
/* Functions that map one GenericInfo value into another
 *   On exit-
 *     GenericInfoMapFct = image of the argument under the map
 ***/

typedef GenericInfo (*GenericInfoSumFct) ELI_ARG((GenericInfo, GenericInfo));
/* Functions that combine two GenericInfo values
 *   On exit-
 *     GenericInfoSumFct = combination of the two arguments
 ***/

#endif
