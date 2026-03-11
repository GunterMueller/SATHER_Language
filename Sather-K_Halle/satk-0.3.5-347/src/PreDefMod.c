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
    
static char rcsid[] = "$Id: PreDefMod.c,v 1.1 1999/10/15 08:47:34 uwe Exp $";

#include <string.h>
#include "idn.h"
#include "PreDefMod.h"

void
#if PROTO_OK
PreDefine(const char *name, int code, int *sym, Environment env,
          DefTableKey key, Binding *bind)
#else
PreDefine (name, code, sym, env, key, bind)
char *name; int code, *sym; Environment env; DefTableKey key; Binding *bind;
#endif
{ int idtoken = code;
  mkidn(name, strlen (name), &idtoken, sym);
  *bind = BindKey(env, *sym, key);
}

void
#if PROTO_OK
PreDefineSym(const char *name, int code, int *sym)
#else
PreDefineSym (name, code, sym) char *name; int code, *sym;
#endif
{ int idtoken = code;
  mkidn(name, strlen (name), &idtoken, sym);
}
