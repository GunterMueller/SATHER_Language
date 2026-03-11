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
    
#ifndef PRE_DEFINED_CLASSES 
#define PRE_DEFINED_CLASSES

#define PRE_DEF_NUM 44
int pre_inc ;

char* PreDefClasses[PRE_DEF_NUM][2] =
{
{"EXCEPTION","exception.sa"},
{"EXTOB","extob.sa"},
{"OB","ob.sa"},
{"REFERENCE","reference.sa"},
{"VALUE", "value.sa"},
{"ARR","arr.sa"},
{"ARRAY","array.sa"},
{"BITS","bits.sa"},
{"BOOL","bool.sa"},
{"BYTE","byte.sa"},
{"CHAR","char.sa"},
{"FILE","file.sa"},
{"FLT","flt.sa"},
{"FLTD","fltd.sa"},
{"INT","int.sa"},
{"INTINF","intinf.sa"},
{"LONG_INT","long_int.sa"},
{"LONG_UNSIGNED","long_unsigned.sa"},
{"ROW","row.sa"},
{"SHORT_INT","short_int.sa"},
{"SHORT_UNSIGNED","short_unsigned.sa"},
{"STR","str.sa"},
{"STRING","string.sa"},
{"TEXT","text.sa"},
{"TYPE","type.sa"},
{"UNSIGNED","unsigned.sa"},

{"SYS_SIMPLE_VALUE","sys_simple_value.sa"},
{"SYS_SIMPLE_NUM","sys_simple_num.sa"},
{"SYS_SIMPLE_INUM","sys_simple_inum.sa"},
{"SYS_SIMPLE_FNUM","sys_simple_fnum.sa"},
{"SYS_SIMPLE_ARRAY","sys_simple_array.sa"},

{"SYS_EXCEPTION","sys_exception.sa"},
{"REFERENCE_ERROR","reference_error.sa"},
{"INDEX_ERROR","index_error.sa"},
{"NUMERIC_ERROR","numeric_error.sa"},
{"INTEGER_OVERFLOW","integer_overflow.sa"},
{"FLOAT_UNDERFLOW","float_underflow.sa"},
{"FLOAT_OVERFLOW","float_overflow.sa"},
{"ZERO_DIVIDE","zero_divide.sa"},
{"STREAM_TERMINATION","stream_termination.sa"},
{"EXCEPTION_USER","exception_user.sa"},

{"SYS_CONVERSION","sys_conversion.sa"},
{"SYS_ATTR","sys_attr.sa"},

{"RANDOM","random.sa"}
};
#endif
