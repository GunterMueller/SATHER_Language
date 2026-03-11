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
    

#ifndef _INDENT_H
#define _INDENT_H

#include "ptg_gen.h"

#if defined(__STDC__) || defined(__cplusplus)
extern void IndentSetStep (int     i);
extern void IndentIncr    (PTG_OUTPUT_FILE f);
extern void IndentDecr    (PTG_OUTPUT_FILE f);
extern void IndentNewLine (PTG_OUTPUT_FILE f);
#else
extern void IndentSetStep ();
extern void IndentIncr ();
extern void IndentDecr ();
extern void IndentNewLine ();
#endif

#endif
