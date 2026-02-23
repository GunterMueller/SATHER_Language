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
    
#include "CommandLine.head"
#include "source.h"
#include "csm.h"
#include "clp.h"
#include "Strings.h"
#include "err.h"

int GetMainClassName()
{
  char uc_name[strlen(SRCFILE)+1];
  int i,j;

  if (MainClassName == NoKey)
  {
    if (SRCFILE == NULL)
      return 0;

    for (i=0,j=0; SRCFILE[i] && SRCFILE[i]!='.'; i++,j++)
                {
      if (SRCFILE[i] == '/')
        j = -1;
      else
        uc_name[j] = toupper(SRCFILE[i]);
                }

    uc_name[j] = 0;
  
    return MakeName(uc_name);
  }
  else
    return MakeName(StringTable(GetClpValue (MainClassName, 0)));
    // sonst klappt es irgendwie nicht
}

int GetOutputFile()
{
  char * classname = StringTable(GetMainClassName());
  char lc_name[strlen(classname)+1];
  int i;

  if (OutputFile == NoKey)
  {
    for (i=0; classname && classname[i]!=0; i++)
      lc_name[i] = tolower(classname[i]);

    lc_name[i] = 0;
  
    return MakeName(lc_name);
  }
  else
    return GetClpValue (OutputFile, 0);
}

CharPtr GetIlasm()
{
  CharPtr ilasm = getenv("SAKCILCOMP");

  if (!ilasm) {
    fprintf(stderr, "define cil compiler with SAKCILCOMP environment variable\n");
    return "ilasm ";
  } 
  else
   return CatStrStr(ilasm, " ");
}
