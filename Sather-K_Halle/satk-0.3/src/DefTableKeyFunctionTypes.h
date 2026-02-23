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
    

#ifndef DefTableKeyFUNCTIONTYPES_H
#define DefTableKeyFUNCTIONTYPES_H

#include "eliproto.h"

/* include header file defining DefTableKey if deftbl is set: */
#define EMPTYdeftblHDR
#ifndef EMPTYHDR
#include "deftbl.h"
#endif
#undef EMPTYdeftblHDR

typedef int (*DefTableKeyCmpFctType) ELI_ARG((DefTableKey, DefTableKey));
/* Functions that compare two DefTableKey values
 *   If the left argument is less than the right then on exit-
 *     DefTableKeyCmpFctType = -1
 *   Else if the arguments are equal then on exit-
 *     DefTableKeyCmpFctType = 0
 *   Else on exit-
 *     DefTableKeyCmpFctType = 1
 ***/

typedef DefTableKey (*DefTableKeyMapFct) ELI_ARG((DefTableKey));
/* Functions that map one DefTableKey value into another
 *   On exit-
 *     DefTableKeyMapFct = image of the argument under the map
 ***/

typedef DefTableKey (*DefTableKeySumFct) ELI_ARG((DefTableKey, DefTableKey));
/* Functions that combine two DefTableKey values
 *   On exit-
 *     DefTableKeySumFct = combination of the two arguments
 ***/

#endif
