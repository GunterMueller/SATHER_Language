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
    

#ifndef TreeNodePtrFUNCTIONTYPES_H
#define TreeNodePtrFUNCTIONTYPES_H

#include "eliproto.h"

/* include header file defining TreeNodePtr if TreeNode is set: */
#define EMPTYTreeNodeHDR
#ifndef EMPTYHDR
#include "TreeNode.h"
#endif
#undef EMPTYTreeNodeHDR

typedef int (*TreeNodePtrCmpFctType) ELI_ARG((TreeNodePtr, TreeNodePtr));
/* Functions that compare two TreeNodePtr values
 *   If the left argument is less than the right then on exit-
 *     TreeNodePtrCmpFctType = -1
 *   Else if the arguments are equal then on exit-
 *     TreeNodePtrCmpFctType = 0
 *   Else on exit-
 *     TreeNodePtrCmpFctType = 1
 ***/

typedef TreeNodePtr (*TreeNodePtrMapFct) ELI_ARG((TreeNodePtr));
/* Functions that map one TreeNodePtr value into another
 *   On exit-
 *     TreeNodePtrMapFct = image of the argument under the map
 ***/

typedef TreeNodePtr (*TreeNodePtrSumFct) ELI_ARG((TreeNodePtr, TreeNodePtr));
/* Functions that combine two TreeNodePtr values
 *   On exit-
 *     TreeNodePtrSumFct = combination of the two arguments
 ***/

#endif
