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
    

#ifndef INCLUDE_H
#define INCLUDE_H

#include "source.h"

typedef struct stkelt {
  SrcBufPtr buffer;     /* Suspended buffer */
  char *name;           /* Suspended break table file name */
  int line;             /* Next line in suspended file */
} SrcFile;

#if defined(__cplusplus) || defined(__STDC__)
extern int NewInput(char *);
extern char *auxEOF(char *, int);
#else
extern int NewInput();
extern char *auxEOF();
#endif

#endif
