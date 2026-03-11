#
# Sed script to convert syntactical changes
# from Sather V0.2 to Sather-K
#
###
### WARNING:
###
### This script doesn't care for comments or strings!
###
#
# (C) 1992 Peter Holzwarth
#

#### renaming constant -> const
s/constant/const/g

#### renaming REAL, DOUBLE -> FLT, FLTD
s/REAL/FLT/g
s/DOUBLE/FLTD/g

#### renaming SELF_TYPE to SAME
s/SELF_TYPE/SAME/g

#### replace array access [i] by self[i]
# does not work for nested indices
# does not work if a keyword stands in front of [...]
# how often can an array access appear in a line ???
s/\([^]A-Za-z0-9_$]  *\)\(\[.*\]\)/\1 self\2/g
s/\([^]A-Za-z0-9_$]  *\)\(\[.*\]\)/\1 self\2/g
s/\([^]A-Za-z0-9_$]  *\)\(\[.*\]\)/\1 self\2/g
s/\([^]A-Za-z0-9_$]  *\)\(\[.*\]\)/\1 self\2/g
s/\([^]A-Za-z0-9_$]  *\)\(\[.*\]\)/\1 self\2/g
s/\([^]A-Za-z0-9_$]  *\)\(\[.*\]\)/\1 self\2/g
s/\([^]A-Za-z0-9_$ ]\)\(\[.*\]\)/\1self\2/g
s/\([^]A-Za-z0-9_$ ]\)\(\[.*\]\)/\1self\2/g
s/\([^]A-Za-z0-9_$ ]\)\(\[.*\]\)/\1self\2/g
s/\([^]A-Za-z0-9_$ ]\)\(\[.*\]\)/\1self\2/g
s/\([^]A-Za-z0-9_$ ]\)\(\[.*\]\)/\1self\2/g
s/\([^]A-Za-z0-9_$ ]\)\(\[.*\]\)/\1self\2/g

#### replace inheritance "CLASS[(...)];" by "subtype of $CLASS;"
# works only for class names written in capital letters
s/^\( *\)\([A-Z_][A-Z0-9_${}, ]*;\)/\1subtype of \2/g
s/\(; *\)\([A-Z_][A-Z0-9_${}, ]*;\)/\1subtype of \2/g
s/\(is *\)\([A-Z_][A-Z0-9_${}, ]*;\)/\1subtype of \2/g
s/^\( *\)\([A-Z_][A-Z0-9_${}, ]*\)$/\1subtype of \2/g
s/\(; *\)\([A-Z_][A-Z0-9_${}, ]*\)$/\1subtype of \2/g
s/\(is *\)\([A-Z_][A-Z0-9_${}, ]*\)$/\1subtype of \2/g

#### replacing braces {...} for type parameters by (...)
s/{/(/g
s/}/)/g

s/switch/case/g
s/try/begin/g
# s/STR/STRING/g -- value semantic mostly welcome

#### new arrays
s/ARRAY(/ARRAY[*](/g
s/ARRAY(/ARRAY[*](/g
s/ARRAY2(/ARRAY[*,*](/g
s/ARRAY2(/ARRAY[*,*](/g
s/ARRAY3(/ARRAY[*,*,*](/g
s/ARRAY3(/ARRAY[*,*,*](/g
s/ARRAY4(/ARRAY[*,*,*,*](/g
s/ARRAY4(/ARRAY[*,*,*,*](/g
s/to_s/str/g
s/to_s/str/g
