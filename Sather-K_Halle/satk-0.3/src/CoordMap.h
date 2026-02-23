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
    

#ifndef COORDMAP_H
#define COORDMAP_H

/* To indicate that these message are related with no file */
#define NoFile  "NoFile"

#if defined(__cplusplus) || defined(__STDC__)
extern int MapLine(int line);
/* Obtain the index of a line within a file
 *   On entry-
 *     line=cumulative number of the line in the input text
 *   On exit-
 *     MapLine=index of the line in the file containing it
 ***/

extern const char *MapFile(int line);
/* Obtain the name of the file containing a line
 *   On entry-
 *     line=cumulative number of the line in the input text
 *   On exit-
 *     MapFile=name of the file containing the line
 ***/

extern void AddBreak(const char *name, int line);
/* Add an entry to the break table
 *   On entry-
 *     name points to the file name string
 *     line=number of the next line in the file
 ***/

#else
extern int MapLine();
extern const char *MapFile();
extern void AddBreak();
#endif

#endif
