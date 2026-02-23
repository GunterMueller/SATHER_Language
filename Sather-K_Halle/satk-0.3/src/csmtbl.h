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
    
	/* This is an initialized obstack */

static struct {char *l; void *p; char c[1];} csm_data = {
	&(csm_data.c[1]),
	0,
""};

struct obstack csm_obstack =
	obstack_known_chunk(&csm_data,
	&(csm_data.c[1]), &(csm_data.c[1]), &(csm_data.c[1]),
	4096, 1);

	/* This is an initialized obstack */

static struct {char **l; void *p; char *c[1];} csm_indx = {
	&(csm_indx.c[1]),
	0,{
	&(csm_data.c[0])}};

struct csmalign {char ___x; char *___d;};
static struct obstack csm_indx_obstk =
	obstack_known_chunk(&csm_indx, &(csm_indx.c[0]),
	&(csm_indx.c[1]), &(csm_indx.c[1]), 4096,
	((PTR_INT_TYPE) ((char *) &((struct csmalign *) 0)->___d - (char *) 0)));

char **strng = csm_indx.c;
int numstr = 1;

