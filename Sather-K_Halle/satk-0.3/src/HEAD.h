#ifndef HEAD_H1
#define HEAD_H1
/*
 * $Id: clp.head,v 1.7 1997/09/08 04:56:26 kadhim Exp $
 * Header file for CLP
 */

#include "clp.h"
#endif

#ifndef HEAD_H2
#define HEAD_H2
#include "BoundMethods.h"
#endif

#ifndef HEAD_H3
#define HEAD_H3
#include "BoundMethodsImpl.h"
#endif

#ifndef HEAD_H4
#define HEAD_H4

#include "CodeGenMisc.h"
#endif

#ifndef HEAD_H5
#define HEAD_H5

#include "ptg_gen.h"
#include "DefTableKeyList.h"

PTGNode GenerateBridgeMethods(DefTableKey k, PTGNode meth_object);
#endif

#ifndef HEAD_H6
#define HEAD_H6

#define MAX(a,b) (a>b ? a : b) 
#endif

#ifndef HEAD_H7
#define HEAD_H7

#include "CodeGenStreams.h"

#define STREAM_BASE_NAME "StreamObjectBase"

#endif

#ifndef HEAD_H8
#define HEAD_H8

#include "DefTableKeyList.h"
#include "ptg_gen.h"
#include "SatherType.h"

PTGNode CreateArray(STPtr t, STPtr elem_type, DefTableKeyList bounds, int is_builtin);
#endif

#ifndef HEAD_H9
#define HEAD_H9

#include "Coercions.h"
#include "ptg_gen.h"
#include "SatherTypeImpl.h"
#include "err.h"
#include "envmod.h"
#include "CTValue.h"

PTGNode GetValueCode(STPtr type, CTValuePtr val, CoordPtr pos, Environment scope);
#endif

#ifndef HEAD_H10
#define HEAD_H10
#include "Coercions.h"
#endif

#ifndef HEAD_H11
#define HEAD_H11
#include "CommandLine.h"
#endif

#ifndef HEAD_H12
#define HEAD_H12
#include "envmod.h"
#include "IntSet.h"
#include "Kinds.head"
#include "SpecialTypes.head"
#include "deftbl.h"
#include "pdl_gen.h"
#include "DefTableKeyList.h"
#include "Strings.h"
#include "SatherType.h"
#include <stdio.h>

int CheckLocalConflicts(DefTableKey k, POSITION *ref);
int CheckMethodConflicts(DefTableKeyList li, DefTableKey class_key);
int Conflicts(STPtr s, STPtr t, DefTableKey class_key);
#endif

#ifndef HEAD_H13
#define HEAD_H13
#include "GenericResolution.h"
#endif

#ifndef HEAD_H14
#define HEAD_H14
#include "GetReferencedClasses.h"
#endif

#ifndef HEAD_H15
#define HEAD_H15
#include "DefTableKeyList.h"
#include "err.h"

DefTableKey CalcGetsBuiltinFrom(DefTableKey k, CoordPtr pos);
#endif

#ifndef HEAD_H16
#define HEAD_H16
#include "Inheritances.h"
#endif

#ifndef HEAD_H17
#define HEAD_H17
#define featureK                1
#define methodK                 2
#define locVarK                 3
#define parameterK              4
#define aggregateK              5
#define attributeK              6

#define externalK               7
#define abstractK               8
#define valueK                  9
#define referenceK              10

#define privateK                11
#define constantK               12
#define sharedK                 13
#define readonlyK               14

#define streamK                 15
#define procedureK              16

#define onceK                   17
#define inK                     18
#define outK                    19
#define inoutK                  20

#define arrayclassK             21

#define polymorphK              22
#define monomorphK              23
#define sameK                   24

#define implicitstreamK         25
#define unsharedK               26
#define boundK                  27
#define builtinK                28
#define builtinarrayK           29
#define initK                   30
#define finalizeK               31
#define builtinstaticK          28
#endif

#ifndef HEAD_H18
#define HEAD_H18
#include "MethodTypes.h"
#endif

#ifndef HEAD_H19
#define HEAD_H19

#include "MyDebug.h"
#endif

#ifndef HEAD_H20
#define HEAD_H20
#include "pdl_gen.h"
#include "DefTableKeyList.h"
#include "Strings.h"

DefTableKey AddMethodBinding(POSITION *pos, DefTableKey k);
#endif

#ifndef HEAD_H21
#define HEAD_H21
#include "Overriding.h"
#endif

#ifndef HEAD_H22
#define HEAD_H22
#include "Overriding.h"
#include "obstack.h"
#include "err.h"

#ifndef OVERRIDING_IMPL_H
#define OVERRIDING_IMPL_H

static Obstack ovrstack;
static int ovr_stack_initialized = 0;

OvrPtr NewOverriding(DefTableKey oridden, DefTableKey oriding);
int CmpOverriding(OvrPtr o1, OvrPtr o2);
int TransitiveClosureOverrides(DefTableKey k, CoordPtr pos);
#endif
#endif

#ifndef HEAD_H23
#define HEAD_H23
#ifndef PREDEFINED_CLASSES_IMPL_HEAD
#define PREDEFINED_CLASSES_IMPL_HEAD
void IncludePredefinedClasses();
#endif
#endif

#ifndef HEAD_H24
#define HEAD_H24
#include "PreDefKeys.h"
#endif

#ifndef HEAD_H25
#define HEAD_H25
#include "ReaderWriter.h"
#endif

#ifndef HEAD_H26
#define HEAD_H26
#include "SatherTypeImpl.h"
#endif

#ifndef HEAD_H27
#define HEAD_H27
#include "satk_aux_scanner.h"
#endif

#ifndef HEAD_H28
#define HEAD_H28
#include "satk_token_processors.h"
#endif

#ifndef HEAD_H29
#define HEAD_H29
#include "DefTableKeyList.h"
#include "SatherType.h"

int IsAget(DefTableKeyList params, STPtr int_type, int bound_count);
int IsAset(DefTableKeyList params, STPtr int_type, STPtr element_type,
int bound_count);
#endif

#ifndef HEAD_H30
#define HEAD_H30
int IsRowSym(int sym);
#endif

#ifndef HEAD_H31
#define HEAD_H31
#include "SemanticSharedFeatures.h"
#endif

#ifndef HEAD_H32
#define HEAD_H32
#include "SemanticValueRange.h"
#endif

#ifndef HEAD_H33
#define HEAD_H33
#include "SemanticValues.h"
#endif

#ifndef HEAD_H34
#define HEAD_H34
#include "deftbl.h"
#include "SatherTypeImpl.h"
#include "IntSet.h"
#include "pdl_gen.h"

DefTableKey same_key;

int CreateSpecialTypes();

#endif

#ifndef HEAD_H35
#define HEAD_H35
#include "deftbl.h"
#include "pdl_gen.h"
#include "MethArgInfoList.h"
#include "SatherType.h"
#include "obstack.h"

MethArgInfo NewMethArgInfo(STPtr t, CTValuePtr val, int kind);
#endif

#ifndef HEAD_H36
#define HEAD_H36
#include "TDG.h"
#endif

#ifndef HEAD_H37
#define HEAD_H37
#include "TreeNodeImpl.h"

TreeNodePtr StripClassBody(TreeNodePtr tree, DefTableKey meths, DefTableKey attrs, CoordPtr
pos); 
#endif

#ifndef HEAD_H38
#define HEAD_H38
#include "TreeNode.h"
#endif

#ifndef HEAD_H39
#define HEAD_H39
#include "TreeNodeImpl.h"
#endif

#ifndef HEAD_H40
#define HEAD_H40
#include "TypeAnalSemArguments.h"
#endif

#ifndef HEAD_H41
#define HEAD_H41
#include "TypeAnalSem.h"
#endif

#ifndef HEAD_H42
#define HEAD_H42
#include "TypeConformance.h"
#endif

#ifndef HEAD_H43
#define HEAD_H43

#define _BMPtrListADDROF(x)       (&(x))
#endif

#ifndef HEAD_H44
#define HEAD_H44

#include "BMPtrList.h"
#endif

#ifndef HEAD_H45
#define HEAD_H45

#include "Indent.h"
#endif

#ifndef HEAD_H46
#define HEAD_H46
/* $Id: Strings.head,v 3.3 1997/09/17 09:53:21 mjung Exp $ */
/* Copyright, 1992, AG-Kastens, University Of Paderborn */
/* This file is part of the Eli Module Library.

The Eli Module Library is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public License as
published by the Free Software Foundation; either version 2 of the
License, or (at your option) any later version.

The Eli Module Library is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Library General Public License for more details.

You should have received a copy of the GNU Library General Public
License along with the Eli Module Library; see the file COPYING.LIB.
If not, write to the Free Software Foundation, Inc., 59 Temple Place -
Suite 330, Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Eli into the
   directory resulting from a :source derivation, you may use that
   created file as a part of that directory without restriction. */

#include "Strings.h"
#endif

#ifndef HEAD_H47
#define HEAD_H47

#define _CTValuePtrListADDROF(x)       (&(x))
#endif

#ifndef HEAD_H48
#define HEAD_H48

#include "CTValuePtrList.h"
#endif

#ifndef HEAD_H49
#define HEAD_H49

#define _ArgumentInfoListADDROF(x)       (&(x))
#endif

#ifndef HEAD_H50
#define HEAD_H50

#define _GenericInfoListADDROF(x)       (&(x))
#endif

#ifndef HEAD_H51
#define HEAD_H51

#define _TreeNodePtrListADDROF(x)       (&(x))
#endif

#ifndef HEAD_H52
#define HEAD_H52

#define _TreeNodePtrListListADDROF(x)       (&(x))
#endif

#ifndef HEAD_H53
#define HEAD_H53

#include "ArgumentInfoList.h"
#endif

#ifndef HEAD_H54
#define HEAD_H54

#include "GenericInfoList.h"
#endif

#ifndef HEAD_H55
#define HEAD_H55

#include "TreeNodePtrList.h"
#endif

#ifndef HEAD_H56
#define HEAD_H56

#include "TreeNodePtrListList.h"
#endif

#ifndef HEAD_H57
#define HEAD_H57

#include "MakeName.h"
#endif

#ifndef HEAD_H58
#define HEAD_H58

#include "Include.h"
#endif

#ifndef HEAD_H59
#define HEAD_H59

#include "SrcFileStack.h"
#endif

#ifndef HEAD_H60
#define HEAD_H60

#define _InheritanceInfoListADDROF(x)       (&(x))
#endif

#ifndef HEAD_H61
#define HEAD_H61

#include "InheritanceInfoList.h"
#endif

#ifndef HEAD_H62
#define HEAD_H62

#include "IntSet.h"
#endif

#ifndef HEAD_H63
#define HEAD_H63

#include "IntSet.h"
#endif

#ifndef HEAD_H64
#define HEAD_H64

#include "CoordCmp.h"
#endif

#ifndef HEAD_H65
#define HEAD_H65

#include "IntSet.h"
#endif

#ifndef HEAD_H66
#define HEAD_H66

#include "InhAlgScope.h"
#include "err.h"
#endif

#ifndef HEAD_H67
#define HEAD_H67
/* $Id: envmod.head,v 3.3 1997/09/05 10:52:59 peter Exp $ */
/* Copyright, 1995, University of Colorado */
/* This file is part of the Eli Module Library.

The Eli Module Library is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public License as
published by the Free Software Foundation; either version 2 of the
License, or (at your option) any later version.

The Eli Module Library is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Library General Public License for more details.

You should have received a copy of the GNU Library General Public
License along with the Eli Module Library; see the file COPYING.LIB.
If not, write to the Free Software Foundation, Inc., 59 Temple Place -
Suite 330, Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Eli into the
   directory resulting from a :source derivation, you may use that
   created file as a part of that directory without restriction. */
#include "envmod.h"
#endif

#ifndef HEAD_H68
#define HEAD_H68

#include "TypeGenAlgScope.h"
#include "err.h"
#endif

#ifndef HEAD_H69
#define HEAD_H69

#define _DefTableKeyListADDROF(x)       (&(x))
#endif

#ifndef HEAD_H70
#define HEAD_H70

#include "DefTableKeyList.h"
#endif

#ifndef HEAD_H71
#define HEAD_H71

#include "TypeSemAlgScope.h"
#include "err.h"
#endif

#ifndef HEAD_H72
#define HEAD_H72

#include "SemAlgScope.h"
#include "err.h"
#endif

#ifndef HEAD_H73
#define HEAD_H73

#include "TypeInhAlgScope.h"
#include "err.h"
#endif

#ifndef HEAD_H74
#define HEAD_H74

#define _OvrPtrListADDROF(x)       (&(x))
#endif

#ifndef HEAD_H75
#define HEAD_H75

#include "OvrPtrList.h"
#endif

#ifndef HEAD_H76
#define HEAD_H76

#define _STPtrListADDROF(x)       (&(x))
#endif

#ifndef HEAD_H77
#define HEAD_H77

#include "STPtrList.h"
#endif

#ifndef HEAD_H78
#define HEAD_H78

#define _ValueRangePtrListADDROF(x)       (&(x))
#endif

#ifndef HEAD_H79
#define HEAD_H79

#include "ValueRangePtrList.h"
#endif

#ifndef HEAD_H80
#define HEAD_H80

#define _MethArgInfoListADDROF(x)       (&(x))
#endif

#ifndef HEAD_H81
#define HEAD_H81

#include "MethArgInfoList.h"
#endif

#ifndef HEAD_H82
#define HEAD_H82
/* $Id: ptgadt.head,v 1.1 1991/09/19 11:31:10 mjung Exp $ */
/* Interface for the PTG-generated module */

#include "ptg_gen.h"
#endif

#ifndef HEAD_H83
#define HEAD_H83
#include "pdl_gen.h"
#endif

#ifndef HEAD_H84
#define HEAD_H84
/* $Id: liga.head,v 4.3 1997/09/15 14:46:48 cogito Exp $ */
/* (C) Copyright 1997 University of Paderborn */

/* This file is part of the Eli Module Library.

The Eli Module Library is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public License as
published by the Free Software Foundation; either version 2 of the
License, or (at your option) any later version.

The Eli Module Library is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Library General Public License for more details.

You should have received a copy of the GNU Library General Public
License along with the Eli Module Library; see the file COPYING.LIB.
If not, write to the Free Software Foundation, Inc., 59 Temple Place -
Suite 330, Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Eli into the
   directory resulting from a :source derivation, you may use that
   created file as a part of that directory without restriction. */

#include "treecon.h"

#endif

#ifndef HEAD_H85
#define HEAD_H85

#include "BitSet.h"
#endif

#ifndef HEAD_H86
#define HEAD_H86

#include "DefTableKeyList.h"
#endif

#ifndef HEAD_H87
#define HEAD_H87
/* $Id: deftbl.head,v 1.1 1992/06/20 19:04:11 kadhim Exp $ */
/* Type definitions for the property list module */

#include "deftbl.h"

#endif

#ifndef HEAD_H88
#define HEAD_H88

#include "VoidPtrList.h"
#endif

#ifndef HEAD_H89
#define HEAD_H89

#include "CoordMap.h"
#endif

#ifndef HEAD_H90
#define HEAD_H90

#include "StringOutput.h"
#endif

