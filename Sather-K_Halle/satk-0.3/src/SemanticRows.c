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
    
#include "SemanticRows.head"
#include "Strings.h"

int IsRowSym(int sym)
{
  CharPtr test = "ROW[*]";
  CharPtr name = StringTable(sym);
  int i;

  if (name == NULL || strlen(name) < 6)
    return 0;

  for (i=0; i<6; i++)
  {
    if (name[i] != test[i])
      return 0;
  }

  return 1;
}
