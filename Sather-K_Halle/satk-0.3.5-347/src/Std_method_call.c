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
    
#include "Std_method_call.head"

static Obstack methargstack;
static int metharg_stack_initialized = 0;

MethArgInfo NewMethArgInfo(STPtr t, CTValuePtr val, int kind)
{
  if (!metharg_stack_initialized)
  {
    obstack_init(&methargstack);
    metharg_stack_initialized = 1;
  }
  
  MethArgInfo newinfo = 
    (MethArgInfo) obstack_alloc(&methargstack, sizeof(struct MethodArgument));
  
  newinfo->Type = t;
  newinfo->Val = val;
  newinfo->ParameterKind = kind;
  return newinfo;
}
