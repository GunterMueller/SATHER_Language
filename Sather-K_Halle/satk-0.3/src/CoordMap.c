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
    

#include <stdio.h>
#include "obstack.h"
#include "source.h"
#include "csm.h"
#include "err.h"
#include "CoordMap.h"

typedef struct {
  char *file;   /* file name */
  int index;    /* Cumulative line index */
  int offset;   /* index - offset == line number in the file */
} Break;


static Obstack FileNames;
static Obstack BreakStorage;
static Break *BreakTable = (Break *)0;  /* Pointers to the break table */
static int numbk = 0;                   /* Number of breaks stored */

static void
BreakInit()
{
  obstack_init(&FileNames);
  obstack_init(&BreakStorage);
  obstack_blank(&BreakStorage, sizeof(Break));
  BreakTable = (Break *)obstack_base(&BreakStorage);
  BreakTable[numbk].file = (char *)obstack_copy0(&FileNames, SRCFILE, strlen(SRCFILE));
  BreakTable[numbk].index = 1; BreakTable[numbk].offset = 0;
  numbk++;
}

int
#if defined(__cplusplus) || defined(__STDC__)
MapLine(int line)
#else
MapLine(line)
int line;
#endif
{
  if (numbk == 0) BreakInit();

  if (line <= 0)
  return line;
  else {
    register int entry = numbk - 1;
    while (BreakTable[entry].index > line) entry--;
    return line - BreakTable[entry].offset;
   }
}

const char *
#if defined(__cplusplus) || defined(__STDC__)
MapFile(int line)
#else
MapFile(line)
int line;
#endif
{
  if (numbk == 0) BreakInit();

  if (line <= 0)
  return NoFile;
  else {
    register int entry = numbk - 1;
    while (BreakTable[entry].index > line) entry--;
    return BreakTable[entry].file;
   }
}

void
#if defined(__cplusplus) || defined(__STDC__)
AddBreak(const char *name, int line)
#else
AddBreak(name, line)
char *name; int line;
#endif
/* Add an entry to the break table
 *   On entry-
 *     name points to the file name string
 *     line=number of the next line in the file
 ***/
{
  if (numbk == 0) BreakInit();
  if (BreakTable[numbk-1].index == LineNum) {
    BreakTable[numbk-1].file = (char *)obstack_copy0(&FileNames, name, strlen(name));
    BreakTable[numbk-1].offset = LineNum - line;
  } else {
    obstack_blank(&BreakStorage, sizeof(Break));
    BreakTable = (Break *)obstack_base(&BreakStorage);
    BreakTable[numbk].file = (char *)obstack_copy0(&FileNames, name, strlen(name));
    BreakTable[numbk].index = LineNum;
    BreakTable[numbk].offset = LineNum - line;
    numbk++;
  }
}
