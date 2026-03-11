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
    
#ifndef PTG_H1
#define PTG_H1

#include "PtgOutput.h"

#define PTG_OUTPUT_FILE PtgFilePtr
#define PTG_OUTPUT_STRING(file,param) (file->PrintString(file,param))
#define PTG_OUTPUT_INT(file,param) (file->PrintInt(file,param))
#define PTG_OUTPUT_LONG(file,param) (file->PrintLong(file,param))
#define PTG_OUTPUT_SHORT(file,param) (file->PrintShort(file,param))
#define PTG_OUTPUT_CHAR(file,param) (file->PrintChar(file,param))
#define PTG_OUTPUT_FLOAT(file,param) (file->PrintFloat(file,param))
#define PTG_OUTPUT_DOUBLE(file,param) (file->PrintDouble(file,param))

#endif

#ifndef PTG_H2
#define PTG_H2
/* $Id: ptgadt.ptg.phi,v 1.1 1996/01/30 08:40:46 mjung Exp $
 *
 * To influence the output of PTG, write definitions of the
 * PTG-Output-Macros into a .ptg.phi-file and include it into
 * your .specs-file. Read (ptg)Macros. for further information.
 */
#endif

