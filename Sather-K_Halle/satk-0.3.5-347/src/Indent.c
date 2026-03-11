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
    

#include "Indent.h"

static int curind = 0;
static int indstep = 3;

#if defined(__STDC__) || defined(__cplusplus)
void IndentSetStep (int i)
#else
void IndentSetStep (i) int i;
#endif
{
    indstep = i;
}

#if defined(__STDC__) || defined(__cplusplus)
void IndentIncr (PTG_OUTPUT_FILE f)
#else
void IndentIncr (f) 
        PTG_OUTPUT_FILE f;
#endif
{
    curind += indstep;
}

#if defined(__STDC__) || defined(__cplusplus)
void IndentDecr (PTG_OUTPUT_FILE f)
#else
void IndentDecr (f) 
        PTG_OUTPUT_FILE f;
#endif
{
    curind -= indstep;
}

#if defined(__STDC__) || defined(__cplusplus)
void IndentNewLine (PTG_OUTPUT_FILE f)
#else
void IndentNewLine (f) 
        PTG_OUTPUT_FILE f;
#endif
{
    int i;

    PTG_OUTPUT_CHAR(f, '\n');

    for (i=0; i<curind; i++)
        PTG_OUTPUT_CHAR (f, ' ');
}
