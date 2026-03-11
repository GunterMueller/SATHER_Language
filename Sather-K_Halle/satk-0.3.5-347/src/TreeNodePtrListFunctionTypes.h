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
    

#ifndef TreeNodePtrListFUNCTIONTYPES_H
#define TreeNodePtrListFUNCTIONTYPES_H

#include "eliproto.h"

/* include header file defining TreeNodePtrList if TreeNodePtrList is set: */
#define EMPTYTreeNodePtrListHDR
#ifndef EMPTYHDR
#include "TreeNodePtrList.h"
#endif
#undef EMPTYTreeNodePtrListHDR

typedef int (*TreeNodePtrListCmpFctType) ELI_ARG((TreeNodePtrList, TreeNodePtrList));
/* Functions that compare two TreeNodePtrList values
 *   If the left argument is less than the right then on exit-
 *     TreeNodePtrListCmpFctType = -1
 *   Else if the arguments are equal then on exit-
 *     TreeNodePtrListCmpFctType = 0
 *   Else on exit-
 *     TreeNodePtrListCmpFctType = 1
 ***/

typedef TreeNodePtrList (*TreeNodePtrListMapFct) ELI_ARG((TreeNodePtrList));
/* Functions that map one TreeNodePtrList value into another
 *   On exit-
 *     TreeNodePtrListMapFct = image of the argument under the map
 ***/

typedef TreeNodePtrList (*TreeNodePtrListSumFct) ELI_ARG((TreeNodePtrList, TreeNodePtrList));
/* Functions that combine two TreeNodePtrList values
 *   On exit-
 *     TreeNodePtrListSumFct = combination of the two arguments
 ***/

#endif
