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
    
#include "satk_aux_scanner.h"
#include "csm.h"
#include "ScanProc.h"
#include "err.h"
#include "gla.h"
#include "source.h"
#include "tabsize.h"

char* auxSatherKComment(char *start, int length)
/* Scan a Sather-K comment after the opening delimiter
 *   On entry
 *     start points to the opening delimiter
 *     len=length of the opening delimiter
 *   On exit
 *     text points to the character position following the
 *       closing delimiter
 ***/
{ register char c;
  register char *p = start + length;    /* first char not yet processed */

  for (;;) {
    if (*p == '\0') {
      int current = p - start;
      TokenStart = start = auxNUL(start, current);
      p = start + current;
      StartLine = p - 1;
      if (*p == '\0') {
        message(ERROR,"file ends inside this comment",0,&curpos);
        return p;
      }
    }
    c = *p++;

    if (c == '\r' && *p == '\n') c = *p++;
    if (c == '\n' || c == '\r') { LineNum++; StartLine = p - 1; }
    else if (c == '\t') StartLine -= TABSIZE(p - StartLine);
    else if (c == '*' && *p == '-') return p + 1;
  }
}
