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
    
#include "satk_token_processors.h"
#include "csm.h"
#include "ScanProc.h"
#include "err.h"
#include "gla.h"
#include "source.h"
#include "tabsize.h"

void satk_mkstr(char *c, int l, int *t, int *p)
{
  char buf[l-2];
  int i;

  // start at i=1 and not i=0 and stop at l-1 and not l
  for (i=1; i<l-1;i++)
    buf[i-1] = c[i];

  *p = stostr(buf, l-2);
}

void satk_mknumidn(char *c, int l, int *t, int *s)
{
  char buf[l];
  int i,j;

  for (i=0,j=0; i<l; i++)
    //if its a underline ignore it
    if (c[i] != '_')
      buf[j++] = c[i];

  buf[j+1] = 0;

  mkidn(buf, j, t, s);
}
