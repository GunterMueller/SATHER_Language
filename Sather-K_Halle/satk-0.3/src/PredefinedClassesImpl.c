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
    
#include "PredefinedClassesImpl.head"
#include "err.h"
#include "Strings.h"
#include "PreDefinedClasses.h"
#include <stdlib.h>
#include <stdio.h>
#include "csm.h"
#include "clp.h"

void IncludePredefinedClasses()
{
  extern int pre_inc;

  if(!pre_inc) 
  {
    char* lib_path;
    int error_res=0;
    DefTableKey k;
    int i=0;

    lib_path = getenv("SAKLIBPATH");

    if (lib_path == NULL)
    {
      printf("$SAKLIBPATH not set, could not find predefined classes\n");
      exit(1);
    }  

    lib_path = CatStrStr(lib_path, "/");

    for (i; i<PRE_DEF_NUM; i++)
    {
      if (NewInput(CatStrStr(lib_path, PreDefClasses[i][1]))==0)
        message(FATAL, CatStrStr(CatStrStr(CatStrStr(CatStrStr(
        "could not find ", PreDefClasses[i][0])," in SAKLIBPATH (")
        , lib_path), ")"), 0, 0);
    }

    while (LibFiles != NULLDefTableKeyList) {
      if (NewInput(StringTable(GetClpValue(HeadDefTableKeyList(LibFiles), 0)))==0)
        message(FATAL, CatStrStr(CatStrStr(
        "could not find ", StringTable(GetClpValue(HeadDefTableKeyList(LibFiles), 0))),
        " specified with the -i option"), 0, 0);
      LibFiles = TailDefTableKeyList(LibFiles);
    }
    
    pre_inc=1;
  }
}
