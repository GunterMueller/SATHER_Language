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
    

#ifndef MethArgInfoFUNCTIONTYPES_H
#define MethArgInfoFUNCTIONTYPES_H

#include "eliproto.h"

/* include header file defining MethArgInfo if MethodArgument is set: */
#define EMPTYMethodArgumentHDR
#ifndef EMPTYHDR
#include "MethodArgument.h"
#endif
#undef EMPTYMethodArgumentHDR

typedef int (*MethArgInfoCmpFctType) ELI_ARG((MethArgInfo, MethArgInfo));
/* Functions that compare two MethArgInfo values
 *   If the left argument is less than the right then on exit-
 *     MethArgInfoCmpFctType = -1
 *   Else if the arguments are equal then on exit-
 *     MethArgInfoCmpFctType = 0
 *   Else on exit-
 *     MethArgInfoCmpFctType = 1
 ***/

typedef MethArgInfo (*MethArgInfoMapFct) ELI_ARG((MethArgInfo));
/* Functions that map one MethArgInfo value into another
 *   On exit-
 *     MethArgInfoMapFct = image of the argument under the map
 ***/

typedef MethArgInfo (*MethArgInfoSumFct) ELI_ARG((MethArgInfo, MethArgInfo));
/* Functions that combine two MethArgInfo values
 *   On exit-
 *     MethArgInfoSumFct = combination of the two arguments
 ***/

#endif
