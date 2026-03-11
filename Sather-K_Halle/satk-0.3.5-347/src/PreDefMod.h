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
    
#ifndef PREDEFMOD_H
#define PREDEFMOD_H

#include "eliproto.h"
#include "envmod.h"

extern void PreDefine
  ELI_ARG((const char *name, int code, int *sym, Environment env,
           DefTableKey key, Binding *bind));
/* On exit:
        The string name is encoded with the given syntax code which is bound
        to key in the environment env.
        *sym is set to the symbol index.
	*bind is set to the created binding, if successful,
          otherwise to NoBinding
*/
extern void PreDefineSym ELI_ARG((const char *name, int code, int *sym));
/* On exit:
        The string name is encoded with the given syntax code.
        *sym is set to the symbol index.
*/

#endif
