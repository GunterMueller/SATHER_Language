SHELL   = /bin/sh

CC	= gcc
LIBS	= -lgmp

OBJS	= driver.o clpintf.o clp.o csm.o obsave.o deftbl.o err.o \
	CoordMap.o source.o pdl_gen.o DefTableKeyList.o clplib.o \
	SrcFileStack.o InhAlgScope.o envmod.o BitSet.o \
	TypeGenAlgScope.o TypeSemAlgScope.o SemAlgScope.o \
	TypeInhAlgScope.o treecon.o nodecode.o parser.o glahead.o \
	auxNUL.o Include.o dflteot.o tabsize.o idn.o \
	satk_token_processors.o CchStr.o satk_aux_scanner.o \
	auxScanEOL.o pgs_gen.o PredefinedClassesImpl.o Strings.o \
	treestack.o dfltrepar.o attrmain.o visitprocs.o visitmap.o \
	visitprocs3.o MethArgInfoList.o ptg_gen.o Indent.o IntSet.o \
	STPtrList.o MakeName.o PreDefKeys.o Coercions.o \
	TypeConformance.o SatherTypeImpl.o OverridingImpl.o \
	OvrPtrList.o GetReferencedClasses.o SemanticValues.o \
	CodeGenMisc.o SemanticRows.o StringOutput.o PtgOutput.o \
	ReaderWriter.o Inheritances.o ConflictsInh.o TreeNodeImpl.o \
	InheritanceInfoList.o CommandLine.o TDG.o \
	CodeGenOverriding.o NameAnalysisFeaturesInh.o visitprocs2.o \
	SemanticSharedFeatures.o SemanticArrays.o PreDefMod.o \
	CodeGenStreams.o TypeAnalSem.o CodeGenTypeConstructor.o \
	BoundMethodsImpl.o BMPtrList.o TypeAnalSemArguments.o \
	CodeGenValues.o Std_method_call.o visitprocs4.o \
	TreeConstructionInh.o InheritanceBuiltinOption.o \
	visitprocs1.o GenericResolution.o ArgumentInfoList.o \
	TreeNodePtrList.o GenericInfoList.o TreeNodePtrListList.o \
	SemanticValueRange.o ValueRangePtrList.o SpecialTypes.o \
	MethodTypes.o PtgOutFPtr.o obstack.o

EXE	= ../bin/satk

all:	$(EXE)

$(EXE):	$(OBJS)
	$(CC) -o $(EXE) $(CFLAGS) $(OBJS) $(LIBS)

objects: $(OBJS)

clean:
	rm -f a.out *.o *.a *~ core ERRS $(EXE)

tidy:
	rm -f core a.out *.o *~ *.a ERRS

driver.o:	driver.c err.h HEAD.h dapto.h dapto_dapto.h INIT.h FINL.h \
		eliproto.h clp.h BoundMethods.h BoundMethodsImpl.h \
		CodeGenMisc.h ptg_gen.h DefTableKeyList.h CodeGenStreams.h \
		SatherType.h Coercions.h SatherTypeImpl.h envmod.h \
		CTValue.h CommandLine.h IntSet.h Kinds.head \
		SpecialTypes.head deftbl.h pdl_gen.h Strings.h \
		GenericResolution.h GetReferencedClasses.h Inheritances.h \
		MethodTypes.h MyDebug.h Overriding.h obstack.h PreDefKeys.h \
		ReaderWriter.h satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TDG.h TreeNodeImpl.h \
		TreeNode.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h BMPtrList.h Indent.h CTValuePtrList.h \
		ArgumentInfoList.h GenericInfoList.h TreeNodePtrList.h \
		TreeNodePtrListList.h MakeName.h Include.h SrcFileStack.h \
		InheritanceInfoList.h CoordCmp.h InhAlgScope.h \
		TypeGenAlgScope.h TypeSemAlgScope.h SemAlgScope.h \
		TypeInhAlgScope.h OvrPtrList.h STPtrList.h \
		ValueRangePtrList.h treecon.h BitSet.h VoidPtrList.h \
		CoordMap.h StringOutput.h clplib.h ptg.h PtgOutput.h \
		DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		OvrPtrFunctionTypes.h CTValuePtrFunctionTypes.h \
		STPtrFunctionTypes.h BMPtrFunctionTypes.h csm.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

clpintf.o:	clpintf.c clp.h clpintf.h csm.h eliproto.h pdl_gen.h \
		source.h clplib.h DefTableKeyList.h deftbl.h ptg_gen.h \
		GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h CTValue.h \
		SatherType.h IntSet.h err.h CoordCmp.h envmod.h ptg.h \
		PtgOutput.h DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentInfoList.h \
		ArgumentParameter.h ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrList.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h Overriding.h \
		OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h obstack.h BitSet.h

clp.o:	clp.c clp.h clpintf.h pdl_gen.h csm.h eliproto.h clplib.h \
		DefTableKeyList.h deftbl.h ptg_gen.h GenericInfoList.h \
		TreeNodePtrListList.h InheritanceInfoList.h TreeNode.h \
		OvrPtrList.h CTValue.h SatherType.h IntSet.h err.h \
		CoordCmp.h envmod.h ptg.h PtgOutput.h \
		DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentInfoList.h \
		ArgumentParameter.h ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrList.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h Overriding.h \
		OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h obstack.h BitSet.h

csm.o:	csm.c csm.h csmtbl.h dapto_dapto.h csm_dapto.h obsave.h \
		obstack.h eliproto.h dapto.h

obsave.o:	obsave.c obsave.h obstack.h eliproto.h

deftbl.o:	deftbl.c err.h deftbl.h obstack.h obsave.h eliproto.h

err.o:	err.c err.h source.h CoordMap.h dapto_dapto.h err_dapto.h \
		eliproto.h dapto.h

CoordMap.o:	CoordMap.c obstack.h source.h csm.h err.h CoordMap.h \
		eliproto.h

source.o:	source.c source.h dapto_dapto.h dapto.h eliproto.h

pdl_gen.o:	pdl_gen.c pdl_gen.h deftbl.h ptg_gen.h DefTableKeyList.h \
		GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h CTValue.h \
		SatherType.h IntSet.h err.h CoordCmp.h envmod.h eliproto.h \
		ptg.h PtgOutput.h DefTableKeyFunctionTypes.h \
		GenericParameter.h GenericInfoFunctionTypes.h \
		ArgumentInfoList.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h TreeNodePtrList.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		Overriding.h OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h obstack.h BitSet.h

DefTableKeyList.o:	DefTableKeyList.c DefTableKeyList.h err.h obstack.h \
		deftbl.h DefTableKeyFunctionTypes.h eliproto.h

clplib.o:	clplib.c csm.h clplib.h obstack.h eliproto.h

SrcFileStack.o:	SrcFileStack.c obstack.h

InhAlgScope.o:	InhAlgScope.c InhAlgScope.h envmod.h deftbl.h obstack.h \
		BitSet.h eliproto.h

envmod.o:	envmod.c err.h obstack.h envmod.h obsave.h envmod_dapto.h \
		eliproto.h deftbl.h BitSet.h dapto.h

BitSet.o:	BitSet.c obstack.h err.h BitSet.h eliproto.h

TypeGenAlgScope.o:	TypeGenAlgScope.c TypeGenAlgScope.h envmod.h deftbl.h \
		obstack.h BitSet.h eliproto.h

TypeSemAlgScope.o:	TypeSemAlgScope.c TypeSemAlgScope.h envmod.h deftbl.h \
		obstack.h BitSet.h eliproto.h

SemAlgScope.o:	SemAlgScope.c SemAlgScope.h envmod.h deftbl.h obstack.h \
		BitSet.h eliproto.h

TypeInhAlgScope.o:	TypeInhAlgScope.c TypeInhAlgScope.h envmod.h deftbl.h \
		obstack.h BitSet.h eliproto.h

treecon.o:	treecon.c node.h nodecode.h attrpredef.h visitmap.h \
		treeact.h obstack.h err.h nodeptr.h HEAD.h eliproto.h clp.h \
		BoundMethods.h BoundMethodsImpl.h CodeGenMisc.h ptg_gen.h \
		DefTableKeyList.h CodeGenStreams.h SatherType.h Coercions.h \
		SatherTypeImpl.h envmod.h CTValue.h CommandLine.h IntSet.h \
		Kinds.head SpecialTypes.head deftbl.h pdl_gen.h Strings.h \
		GenericResolution.h GetReferencedClasses.h Inheritances.h \
		MethodTypes.h MyDebug.h Overriding.h PreDefKeys.h \
		ReaderWriter.h satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TDG.h TreeNodeImpl.h \
		TreeNode.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h BMPtrList.h Indent.h CTValuePtrList.h \
		ArgumentInfoList.h GenericInfoList.h TreeNodePtrList.h \
		TreeNodePtrListList.h MakeName.h Include.h SrcFileStack.h \
		InheritanceInfoList.h CoordCmp.h InhAlgScope.h \
		TypeGenAlgScope.h TypeSemAlgScope.h SemAlgScope.h \
		TypeInhAlgScope.h OvrPtrList.h STPtrList.h \
		ValueRangePtrList.h treecon.h BitSet.h VoidPtrList.h \
		CoordMap.h StringOutput.h clplib.h ptg.h PtgOutput.h \
		DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h OvrPtrFunctionTypes.h \
		CTValuePtrFunctionTypes.h STPtrFunctionTypes.h \
		BMPtrFunctionTypes.h csm.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

nodecode.o:	nodecode.c nodecode.h

parser.o:	parser.c err.h gla.h gsdescr.h reparatur.h dapto_dapto.h \
		pgs_gen.h eliproto.h parsops.h dapto.h

glahead.o:	glahead.c err.h csm.h source.h obstack.h scanops.h \
		tabsize.h ScanProc.h gla.h dapto_dapto.h xtables.h xcode.h \
		eliproto.h dapto.h

auxNUL.o:	auxNUL.c source.h gla.h

Include.o:	Include.c source.h csm.h gla.h err.h SrcFileStack.h \
		Include.h CoordMap.h obstack.h eliproto.h

dflteot.o:	dflteot.c 

tabsize.o:	tabsize.c 

idn.o:	idn.c err.h idn.h csm.h obstack.h obsave.h idntbl.h \
		eliproto.h

satk_token_processors.o:	satk_token_processors.c satk_token_processors.h csm.h \
		ScanProc.h err.h gla.h source.h tabsize.h obstack.h \
		eliproto.h

CchStr.o:	CchStr.c err.h source.h gla.h csm.h tabsize.h ScanProc.h \
		eliproto.h obstack.h

satk_aux_scanner.o:	satk_aux_scanner.c satk_aux_scanner.h csm.h ScanProc.h \
		err.h gla.h source.h tabsize.h obstack.h eliproto.h

auxScanEOL.o:	auxScanEOL.c eliproto.h err.h gla.h source.h ScanProc.h

pgs_gen.o:	pgs_gen.c gsdescr.h treestack.h HEAD.h err.h parsops.h \
		eliproto.h nodeptr.h clp.h BoundMethods.h \
		BoundMethodsImpl.h CodeGenMisc.h ptg_gen.h \
		DefTableKeyList.h CodeGenStreams.h SatherType.h Coercions.h \
		SatherTypeImpl.h envmod.h CTValue.h CommandLine.h IntSet.h \
		Kinds.head SpecialTypes.head deftbl.h pdl_gen.h Strings.h \
		GenericResolution.h GetReferencedClasses.h Inheritances.h \
		MethodTypes.h MyDebug.h Overriding.h obstack.h PreDefKeys.h \
		ReaderWriter.h satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TDG.h TreeNodeImpl.h \
		TreeNode.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h BMPtrList.h Indent.h CTValuePtrList.h \
		ArgumentInfoList.h GenericInfoList.h TreeNodePtrList.h \
		TreeNodePtrListList.h MakeName.h Include.h SrcFileStack.h \
		InheritanceInfoList.h CoordCmp.h InhAlgScope.h \
		TypeGenAlgScope.h TypeSemAlgScope.h SemAlgScope.h \
		TypeInhAlgScope.h OvrPtrList.h STPtrList.h \
		ValueRangePtrList.h treecon.h BitSet.h VoidPtrList.h \
		CoordMap.h StringOutput.h clplib.h ptg.h PtgOutput.h \
		DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h OvrPtrFunctionTypes.h \
		CTValuePtrFunctionTypes.h STPtrFunctionTypes.h \
		BMPtrFunctionTypes.h csm.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

PredefinedClassesImpl.o:	PredefinedClassesImpl.c PredefinedClassesImpl.head err.h \
		Strings.h PreDefinedClasses.h csm.h clp.h eliproto.h \
		obstack.h clplib.h pdl_gen.h DefTableKeyList.h deftbl.h \
		ptg_gen.h GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h CTValue.h \
		SatherType.h IntSet.h CoordCmp.h envmod.h ptg.h PtgOutput.h \
		DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentInfoList.h \
		ArgumentParameter.h ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrList.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h Overriding.h \
		OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h BitSet.h

Strings.o:	Strings.c Strings.h csm.h obstack.h eliproto.h

treestack.o:	treestack.c err.h treestack.h eliproto.h nodeptr.h

dfltrepar.o:	dfltrepar.c err.h reparatur.h eliproto.h

attrmain.o:	attrmain.c treestack.h visitprocs.h nodeptr.h HEAD.h node.h \
		treecon.h eliproto.h clp.h BoundMethods.h \
		BoundMethodsImpl.h CodeGenMisc.h ptg_gen.h \
		DefTableKeyList.h CodeGenStreams.h SatherType.h Coercions.h \
		SatherTypeImpl.h err.h envmod.h CTValue.h CommandLine.h \
		IntSet.h Kinds.head SpecialTypes.head deftbl.h pdl_gen.h \
		Strings.h GenericResolution.h GetReferencedClasses.h \
		Inheritances.h MethodTypes.h MyDebug.h Overriding.h \
		obstack.h PreDefKeys.h ReaderWriter.h satk_aux_scanner.h \
		satk_token_processors.h SemanticSharedFeatures.h \
		SemanticValueRange.h SemanticValues.h MethArgInfoList.h \
		TDG.h TreeNodeImpl.h TreeNode.h TypeAnalSemArguments.h \
		TypeAnalSem.h TypeConformance.h BMPtrList.h Indent.h \
		CTValuePtrList.h ArgumentInfoList.h GenericInfoList.h \
		TreeNodePtrList.h TreeNodePtrListList.h MakeName.h \
		Include.h SrcFileStack.h InheritanceInfoList.h CoordCmp.h \
		InhAlgScope.h TypeGenAlgScope.h TypeSemAlgScope.h \
		SemAlgScope.h TypeInhAlgScope.h OvrPtrList.h STPtrList.h \
		ValueRangePtrList.h BitSet.h VoidPtrList.h CoordMap.h \
		StringOutput.h clplib.h ptg.h PtgOutput.h \
		DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h OvrPtrFunctionTypes.h \
		CTValuePtrFunctionTypes.h STPtrFunctionTypes.h \
		BMPtrFunctionTypes.h csm.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

visitprocs.o:	visitprocs.c HEAD.h err.h node.h visitprocs.h attrpredef.h \
		visitmap.h clp.h BoundMethods.h BoundMethodsImpl.h \
		CodeGenMisc.h ptg_gen.h DefTableKeyList.h CodeGenStreams.h \
		SatherType.h Coercions.h SatherTypeImpl.h envmod.h \
		CTValue.h CommandLine.h IntSet.h Kinds.head \
		SpecialTypes.head deftbl.h pdl_gen.h Strings.h \
		GenericResolution.h GetReferencedClasses.h Inheritances.h \
		MethodTypes.h MyDebug.h Overriding.h obstack.h PreDefKeys.h \
		ReaderWriter.h satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TDG.h TreeNodeImpl.h \
		TreeNode.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h BMPtrList.h Indent.h CTValuePtrList.h \
		ArgumentInfoList.h GenericInfoList.h TreeNodePtrList.h \
		TreeNodePtrListList.h MakeName.h Include.h SrcFileStack.h \
		InheritanceInfoList.h CoordCmp.h InhAlgScope.h \
		TypeGenAlgScope.h TypeSemAlgScope.h SemAlgScope.h \
		TypeInhAlgScope.h OvrPtrList.h STPtrList.h \
		ValueRangePtrList.h treecon.h BitSet.h VoidPtrList.h \
		CoordMap.h StringOutput.h clplib.h eliproto.h ptg.h \
		PtgOutput.h DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		OvrPtrFunctionTypes.h CTValuePtrFunctionTypes.h \
		STPtrFunctionTypes.h BMPtrFunctionTypes.h csm.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

visitmap.o:	visitmap.c visitprocs.h visitmap.h HEAD.h node.h treecon.h \
		eliproto.h clp.h BoundMethods.h BoundMethodsImpl.h \
		CodeGenMisc.h ptg_gen.h DefTableKeyList.h CodeGenStreams.h \
		SatherType.h Coercions.h SatherTypeImpl.h err.h envmod.h \
		CTValue.h CommandLine.h IntSet.h Kinds.head \
		SpecialTypes.head deftbl.h pdl_gen.h Strings.h \
		GenericResolution.h GetReferencedClasses.h Inheritances.h \
		MethodTypes.h MyDebug.h Overriding.h obstack.h PreDefKeys.h \
		ReaderWriter.h satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TDG.h TreeNodeImpl.h \
		TreeNode.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h BMPtrList.h Indent.h CTValuePtrList.h \
		ArgumentInfoList.h GenericInfoList.h TreeNodePtrList.h \
		TreeNodePtrListList.h MakeName.h Include.h SrcFileStack.h \
		InheritanceInfoList.h CoordCmp.h InhAlgScope.h \
		TypeGenAlgScope.h TypeSemAlgScope.h SemAlgScope.h \
		TypeInhAlgScope.h OvrPtrList.h STPtrList.h \
		ValueRangePtrList.h BitSet.h VoidPtrList.h CoordMap.h \
		StringOutput.h clplib.h ptg.h PtgOutput.h \
		DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		OvrPtrFunctionTypes.h CTValuePtrFunctionTypes.h \
		STPtrFunctionTypes.h BMPtrFunctionTypes.h csm.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

visitprocs3.o:	visitprocs3.c HEAD.h err.h node.h visitprocs.h attrpredef.h \
		visitmap.h clp.h BoundMethods.h BoundMethodsImpl.h \
		CodeGenMisc.h ptg_gen.h DefTableKeyList.h CodeGenStreams.h \
		SatherType.h Coercions.h SatherTypeImpl.h envmod.h \
		CTValue.h CommandLine.h IntSet.h Kinds.head \
		SpecialTypes.head deftbl.h pdl_gen.h Strings.h \
		GenericResolution.h GetReferencedClasses.h Inheritances.h \
		MethodTypes.h MyDebug.h Overriding.h obstack.h PreDefKeys.h \
		ReaderWriter.h satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TDG.h TreeNodeImpl.h \
		TreeNode.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h BMPtrList.h Indent.h CTValuePtrList.h \
		ArgumentInfoList.h GenericInfoList.h TreeNodePtrList.h \
		TreeNodePtrListList.h MakeName.h Include.h SrcFileStack.h \
		InheritanceInfoList.h CoordCmp.h InhAlgScope.h \
		TypeGenAlgScope.h TypeSemAlgScope.h SemAlgScope.h \
		TypeInhAlgScope.h OvrPtrList.h STPtrList.h \
		ValueRangePtrList.h treecon.h BitSet.h VoidPtrList.h \
		CoordMap.h StringOutput.h clplib.h eliproto.h ptg.h \
		PtgOutput.h DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		OvrPtrFunctionTypes.h CTValuePtrFunctionTypes.h \
		STPtrFunctionTypes.h BMPtrFunctionTypes.h csm.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

MethArgInfoList.o:	MethArgInfoList.c MethArgInfoList.h err.h obstack.h \
		MethodArgument.h MethArgInfoFunctionTypes.h deftbl.h \
		SatherType.h CTValue.h eliproto.h IntSet.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h

ptg_gen.o:	ptg_gen.c ptg_gen.h obstack.h eliproto.h ptg.h PtgOutput.h

Indent.o:	Indent.c Indent.h ptg_gen.h eliproto.h ptg.h PtgOutput.h

IntSet.o:	IntSet.c err.h IntSet.h eliproto.h

STPtrList.o:	STPtrList.c STPtrList.h err.h obstack.h SatherType.h \
		STPtrFunctionTypes.h IntSet.h deftbl.h CTValuePtrList.h \
		eliproto.h CTValue.h CTValuePtrFunctionTypes.h

MakeName.o:	MakeName.c err.h csm.h idn.h termcode.h MakeName.h \
		eliproto.h obstack.h

PreDefKeys.o:	PreDefKeys.c PreDefKeys.h envmod.h deftbl.h err.h Strings.h \
		obstack.h BitSet.h eliproto.h csm.h

Coercions.o:	Coercions.c Coercions.h SatherTypeImpl.h SemanticValues.h \
		err.h PreDefKeys.h Strings.h csm.h envmod.h pdl_gen.h \
		obstack.h deftbl.h IntSet.h Kinds.head DefTableKeyList.h \
		STPtrList.h MyDebug.h eliproto.h DefTableKeyFunctionTypes.h \
		ptg_gen.h GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h CTValue.h \
		SatherType.h CoordCmp.h ptg.h PtgOutput.h \
		GenericParameter.h GenericInfoFunctionTypes.h \
		ArgumentInfoList.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h TreeNodePtrList.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		Overriding.h OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h BitSet.h STPtrFunctionTypes.h \
		TreeNodeImpl.h BMPtrList.h treecon.h HEAD.h clp.h \
		BoundMethods.h BoundMethodsImpl.h CodeGenMisc.h \
		CodeGenStreams.h CommandLine.h SpecialTypes.head \
		GenericResolution.h GetReferencedClasses.h Inheritances.h \
		MethodTypes.h ReaderWriter.h satk_aux_scanner.h \
		satk_token_processors.h SemanticSharedFeatures.h \
		SemanticValueRange.h MethArgInfoList.h TDG.h \
		TypeAnalSemArguments.h TypeAnalSem.h TypeConformance.h \
		Indent.h MakeName.h Include.h SrcFileStack.h InhAlgScope.h \
		TypeGenAlgScope.h TypeSemAlgScope.h SemAlgScope.h \
		TypeInhAlgScope.h ValueRangePtrList.h VoidPtrList.h \
		CoordMap.h StringOutput.h clplib.h BMPtrFunctionTypes.h \
		idn.h ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

TypeConformance.o:	TypeConformance.c TypeConformance.h deftbl.h pdl_gen.h \
		SpecialTypes.head Inheritances.h Strings.h err.h \
		GetReferencedClasses.h MyDebug.h eliproto.h ptg_gen.h \
		DefTableKeyList.h GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h CTValue.h \
		SatherType.h IntSet.h CoordCmp.h envmod.h ptg.h PtgOutput.h \
		DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentInfoList.h \
		ArgumentParameter.h ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrList.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h Overriding.h \
		OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h obstack.h BitSet.h \
		SatherTypeImpl.h Kinds.head csm.h STPtrList.h \
		STPtrFunctionTypes.h TreeNodeImpl.h BMPtrList.h treecon.h \
		HEAD.h clp.h BoundMethods.h BoundMethodsImpl.h \
		CodeGenMisc.h CodeGenStreams.h Coercions.h CommandLine.h \
		GenericResolution.h MethodTypes.h PreDefKeys.h \
		ReaderWriter.h satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TDG.h \
		TypeAnalSemArguments.h TypeAnalSem.h Indent.h MakeName.h \
		Include.h SrcFileStack.h InhAlgScope.h TypeGenAlgScope.h \
		TypeSemAlgScope.h SemAlgScope.h TypeInhAlgScope.h \
		ValueRangePtrList.h VoidPtrList.h CoordMap.h StringOutput.h \
		clplib.h BMPtrFunctionTypes.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

SatherTypeImpl.o:	SatherTypeImpl.c SatherTypeImpl.h obstack.h deftbl.h \
		IntSet.h Kinds.head csm.h DefTableKeyList.h pdl_gen.h \
		STPtrList.h MyDebug.h eliproto.h DefTableKeyFunctionTypes.h \
		ptg_gen.h GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h CTValue.h \
		SatherType.h err.h CoordCmp.h envmod.h ptg.h PtgOutput.h \
		GenericParameter.h GenericInfoFunctionTypes.h \
		ArgumentInfoList.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h TreeNodePtrList.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		Overriding.h OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h BitSet.h STPtrFunctionTypes.h \
		Strings.h TreeNodeImpl.h BMPtrList.h treecon.h HEAD.h clp.h \
		BoundMethods.h BoundMethodsImpl.h CodeGenMisc.h \
		CodeGenStreams.h Coercions.h CommandLine.h \
		SpecialTypes.head GenericResolution.h \
		GetReferencedClasses.h Inheritances.h MethodTypes.h \
		PreDefKeys.h ReaderWriter.h satk_aux_scanner.h \
		satk_token_processors.h SemanticSharedFeatures.h \
		SemanticValueRange.h SemanticValues.h MethArgInfoList.h \
		TDG.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h Indent.h MakeName.h Include.h \
		SrcFileStack.h InhAlgScope.h TypeGenAlgScope.h \
		TypeSemAlgScope.h SemAlgScope.h TypeInhAlgScope.h \
		ValueRangePtrList.h VoidPtrList.h CoordMap.h StringOutput.h \
		clplib.h BMPtrFunctionTypes.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

OverridingImpl.o:	OverridingImpl.c OverridingImpl.head SatherTypeImpl.h \
		Overriding.h obstack.h err.h deftbl.h eliproto.h IntSet.h \
		Kinds.head csm.h DefTableKeyList.h pdl_gen.h STPtrList.h \
		MyDebug.h DefTableKeyFunctionTypes.h ptg_gen.h \
		GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h CTValue.h \
		SatherType.h CoordCmp.h envmod.h ptg.h PtgOutput.h \
		GenericParameter.h GenericInfoFunctionTypes.h \
		ArgumentInfoList.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h TreeNodePtrList.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h BitSet.h STPtrFunctionTypes.h \
		Strings.h TreeNodeImpl.h BMPtrList.h treecon.h HEAD.h clp.h \
		BoundMethods.h BoundMethodsImpl.h CodeGenMisc.h \
		CodeGenStreams.h Coercions.h CommandLine.h \
		SpecialTypes.head GenericResolution.h \
		GetReferencedClasses.h Inheritances.h MethodTypes.h \
		PreDefKeys.h ReaderWriter.h satk_aux_scanner.h \
		satk_token_processors.h SemanticSharedFeatures.h \
		SemanticValueRange.h SemanticValues.h MethArgInfoList.h \
		TDG.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h Indent.h MakeName.h Include.h \
		SrcFileStack.h InhAlgScope.h TypeGenAlgScope.h \
		TypeSemAlgScope.h SemAlgScope.h TypeInhAlgScope.h \
		ValueRangePtrList.h VoidPtrList.h CoordMap.h StringOutput.h \
		clplib.h BMPtrFunctionTypes.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

OvrPtrList.o:	OvrPtrList.c OvrPtrList.h err.h obstack.h Overriding.h \
		OvrPtrFunctionTypes.h deftbl.h eliproto.h

GetReferencedClasses.o:	GetReferencedClasses.c GetReferencedClasses.h pdl_gen.h \
		DefTableKeyList.h idn.h envmod.h deftbl.h ptg_gen.h \
		GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h CTValue.h \
		SatherType.h IntSet.h err.h CoordCmp.h eliproto.h ptg.h \
		PtgOutput.h DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentInfoList.h \
		ArgumentParameter.h ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrList.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h Overriding.h \
		OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h obstack.h BitSet.h

SemanticValues.o:	SemanticValues.c SemanticValues.h CTValue.h obstack.h \
		Strings.h err.h csm.h eliproto.h

CodeGenMisc.o:	CodeGenMisc.c CodeGenMisc.head Kinds.head Strings.h \
		pdl_gen.h IntSet.h MakeName.h Coercions.h envmod.h \
		CodeGenMisc.h SatherTypeImpl.h DefTableKeyList.h ptg_gen.h \
		err.h obstack.h deftbl.h csm.h STPtrList.h MyDebug.h \
		eliproto.h DefTableKeyFunctionTypes.h GenericInfoList.h \
		TreeNodePtrListList.h InheritanceInfoList.h TreeNode.h \
		OvrPtrList.h CTValue.h SatherType.h CoordCmp.h ptg.h \
		PtgOutput.h GenericParameter.h GenericInfoFunctionTypes.h \
		ArgumentInfoList.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h TreeNodePtrList.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		Overriding.h OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h BitSet.h STPtrFunctionTypes.h \
		TreeNodeImpl.h BMPtrList.h treecon.h HEAD.h clp.h \
		BoundMethods.h BoundMethodsImpl.h CodeGenStreams.h \
		CommandLine.h SpecialTypes.head GenericResolution.h \
		GetReferencedClasses.h Inheritances.h MethodTypes.h \
		PreDefKeys.h ReaderWriter.h satk_aux_scanner.h \
		satk_token_processors.h SemanticSharedFeatures.h \
		SemanticValueRange.h SemanticValues.h MethArgInfoList.h \
		TDG.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h Indent.h Include.h SrcFileStack.h \
		InhAlgScope.h TypeGenAlgScope.h TypeSemAlgScope.h \
		SemAlgScope.h TypeInhAlgScope.h ValueRangePtrList.h \
		VoidPtrList.h CoordMap.h StringOutput.h clplib.h \
		BMPtrFunctionTypes.h idn.h ValueRangePtrFunctionTypes.h \
		MethodArgument.h MethArgInfoFunctionTypes.h source.h \
		VoidPtr.h VoidPtrFunctionTypes.h

SemanticRows.o:	SemanticRows.c SemanticRows.head Strings.h csm.h obstack.h \
		eliproto.h

StringOutput.o:	StringOutput.c StringOutput.h obstack.h ptg_gen.h \
		eliproto.h ptg.h PtgOutput.h

PtgOutput.o:	PtgOutput.c PtgOutput.h

ReaderWriter.o:	ReaderWriter.c ReaderWriter.h deftbl.h IntSet.h \
		DefTableKeyList.h Kinds.head pdl_gen.h idn.h err.h \
		SatherTypeImpl.h Inheritances.h eliproto.h \
		DefTableKeyFunctionTypes.h ptg_gen.h GenericInfoList.h \
		TreeNodePtrListList.h InheritanceInfoList.h TreeNode.h \
		OvrPtrList.h CTValue.h SatherType.h CoordCmp.h envmod.h \
		ptg.h PtgOutput.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentInfoList.h \
		ArgumentParameter.h ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrList.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h Overriding.h \
		OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h obstack.h BitSet.h csm.h \
		STPtrList.h MyDebug.h STPtrFunctionTypes.h Strings.h \
		TreeNodeImpl.h BMPtrList.h treecon.h HEAD.h clp.h \
		BoundMethods.h BoundMethodsImpl.h CodeGenMisc.h \
		CodeGenStreams.h Coercions.h CommandLine.h \
		SpecialTypes.head GenericResolution.h \
		GetReferencedClasses.h MethodTypes.h PreDefKeys.h \
		satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TDG.h \
		TypeAnalSemArguments.h TypeAnalSem.h TypeConformance.h \
		Indent.h MakeName.h Include.h SrcFileStack.h InhAlgScope.h \
		TypeGenAlgScope.h TypeSemAlgScope.h SemAlgScope.h \
		TypeInhAlgScope.h ValueRangePtrList.h VoidPtrList.h \
		CoordMap.h StringOutput.h clplib.h BMPtrFunctionTypes.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

Inheritances.o:	Inheritances.c Inheritances.h deftbl.h pdl_gen.h \
		InheritanceInfoList.h DefTableKeyList.h Kinds.head \
		TreeNodeImpl.h GetReferencedClasses.h err.h eliproto.h \
		ptg_gen.h GenericInfoList.h TreeNodePtrListList.h \
		TreeNode.h OvrPtrList.h CTValue.h SatherType.h IntSet.h \
		CoordCmp.h envmod.h ptg.h PtgOutput.h \
		DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentInfoList.h \
		ArgumentParameter.h ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrList.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h Overriding.h \
		OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h obstack.h BitSet.h treecon.h \
		HEAD.h clp.h BoundMethods.h BoundMethodsImpl.h \
		CodeGenMisc.h CodeGenStreams.h Coercions.h SatherTypeImpl.h \
		CommandLine.h SpecialTypes.head Strings.h \
		GenericResolution.h MethodTypes.h MyDebug.h PreDefKeys.h \
		ReaderWriter.h satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TDG.h \
		TypeAnalSemArguments.h TypeAnalSem.h TypeConformance.h \
		BMPtrList.h Indent.h MakeName.h Include.h SrcFileStack.h \
		InhAlgScope.h TypeGenAlgScope.h TypeSemAlgScope.h \
		SemAlgScope.h TypeInhAlgScope.h STPtrList.h \
		ValueRangePtrList.h VoidPtrList.h CoordMap.h StringOutput.h \
		clplib.h STPtrFunctionTypes.h BMPtrFunctionTypes.h csm.h \
		idn.h ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

ConflictsInh.o:	ConflictsInh.c ConflictsInh.head envmod.h IntSet.h \
		Kinds.head SpecialTypes.head deftbl.h pdl_gen.h \
		DefTableKeyList.h Strings.h SatherType.h obstack.h BitSet.h \
		eliproto.h SatherTypeImpl.h csm.h STPtrList.h MyDebug.h \
		DefTableKeyFunctionTypes.h ptg_gen.h GenericInfoList.h \
		TreeNodePtrListList.h InheritanceInfoList.h TreeNode.h \
		OvrPtrList.h CTValue.h err.h CoordCmp.h ptg.h PtgOutput.h \
		GenericParameter.h GenericInfoFunctionTypes.h \
		ArgumentInfoList.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h TreeNodePtrList.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		Overriding.h OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h STPtrFunctionTypes.h \
		TreeNodeImpl.h BMPtrList.h treecon.h HEAD.h clp.h \
		BoundMethods.h BoundMethodsImpl.h CodeGenMisc.h \
		CodeGenStreams.h Coercions.h CommandLine.h \
		GenericResolution.h GetReferencedClasses.h Inheritances.h \
		MethodTypes.h PreDefKeys.h ReaderWriter.h \
		satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TDG.h \
		TypeAnalSemArguments.h TypeAnalSem.h TypeConformance.h \
		Indent.h MakeName.h Include.h SrcFileStack.h InhAlgScope.h \
		TypeGenAlgScope.h TypeSemAlgScope.h SemAlgScope.h \
		TypeInhAlgScope.h ValueRangePtrList.h VoidPtrList.h \
		CoordMap.h StringOutput.h clplib.h BMPtrFunctionTypes.h \
		idn.h ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

TreeNodeImpl.o:	TreeNodeImpl.c TreeNodeImpl.h treecon.h nodeptr.h err.h \
		eliproto.h obstack.h deftbl.h TreeNode.h HEAD.h clp.h \
		BoundMethods.h BoundMethodsImpl.h CodeGenMisc.h ptg_gen.h \
		DefTableKeyList.h CodeGenStreams.h SatherType.h Coercions.h \
		SatherTypeImpl.h envmod.h CTValue.h CommandLine.h IntSet.h \
		Kinds.head SpecialTypes.head pdl_gen.h Strings.h \
		GenericResolution.h GetReferencedClasses.h Inheritances.h \
		MethodTypes.h MyDebug.h Overriding.h PreDefKeys.h \
		ReaderWriter.h satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TDG.h \
		TypeAnalSemArguments.h TypeAnalSem.h TypeConformance.h \
		BMPtrList.h Indent.h CTValuePtrList.h ArgumentInfoList.h \
		GenericInfoList.h TreeNodePtrList.h TreeNodePtrListList.h \
		MakeName.h Include.h SrcFileStack.h InheritanceInfoList.h \
		CoordCmp.h InhAlgScope.h TypeGenAlgScope.h \
		TypeSemAlgScope.h SemAlgScope.h TypeInhAlgScope.h \
		OvrPtrList.h STPtrList.h ValueRangePtrList.h BitSet.h \
		VoidPtrList.h CoordMap.h StringOutput.h clplib.h ptg.h \
		PtgOutput.h DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h OvrPtrFunctionTypes.h \
		CTValuePtrFunctionTypes.h STPtrFunctionTypes.h \
		BMPtrFunctionTypes.h csm.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

InheritanceInfoList.o:	InheritanceInfoList.c InheritanceInfoList.h err.h obstack.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		deftbl.h DefTableKeyList.h eliproto.h \
		DefTableKeyFunctionTypes.h

CommandLine.o:	CommandLine.c CommandLine.head source.h csm.h clp.h \
		Strings.h err.h CommandLine.h obstack.h eliproto.h clplib.h \
		pdl_gen.h DefTableKeyList.h deftbl.h ptg_gen.h \
		GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h CTValue.h \
		SatherType.h IntSet.h CoordCmp.h envmod.h ptg.h PtgOutput.h \
		DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentInfoList.h \
		ArgumentParameter.h ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrList.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h Overriding.h \
		OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h BitSet.h

TDG.o:	TDG.c TDG.h DefTableKeyList.h pdl_gen.h err.h Strings.h \
		Inheritances.h PreDefKeys.h deftbl.h \
		DefTableKeyFunctionTypes.h eliproto.h ptg_gen.h \
		GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h CTValue.h \
		SatherType.h IntSet.h CoordCmp.h envmod.h ptg.h PtgOutput.h \
		GenericParameter.h GenericInfoFunctionTypes.h \
		ArgumentInfoList.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h TreeNodePtrList.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		Overriding.h OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h obstack.h BitSet.h csm.h \
		Kinds.head TreeNodeImpl.h GetReferencedClasses.h treecon.h \
		HEAD.h clp.h BoundMethods.h BoundMethodsImpl.h \
		CodeGenMisc.h CodeGenStreams.h Coercions.h SatherTypeImpl.h \
		CommandLine.h SpecialTypes.head GenericResolution.h \
		MethodTypes.h MyDebug.h ReaderWriter.h satk_aux_scanner.h \
		satk_token_processors.h SemanticSharedFeatures.h \
		SemanticValueRange.h SemanticValues.h MethArgInfoList.h \
		TypeAnalSemArguments.h TypeAnalSem.h TypeConformance.h \
		BMPtrList.h Indent.h MakeName.h Include.h SrcFileStack.h \
		InhAlgScope.h TypeGenAlgScope.h TypeSemAlgScope.h \
		SemAlgScope.h TypeInhAlgScope.h STPtrList.h \
		ValueRangePtrList.h VoidPtrList.h CoordMap.h StringOutput.h \
		clplib.h STPtrFunctionTypes.h BMPtrFunctionTypes.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

CodeGenOverriding.o:	CodeGenOverriding.c CodeGenOverriding.head OvrPtrList.h \
		Strings.h pdl_gen.h CodeGenMisc.h ptg_gen.h \
		DefTableKeyList.h eliproto.h ptg.h PtgOutput.h deftbl.h \
		DefTableKeyFunctionTypes.h Overriding.h \
		OvrPtrFunctionTypes.h csm.h obstack.h GenericInfoList.h \
		TreeNodePtrListList.h InheritanceInfoList.h TreeNode.h \
		CTValue.h SatherType.h IntSet.h err.h CoordCmp.h envmod.h \
		GenericParameter.h GenericInfoFunctionTypes.h \
		ArgumentInfoList.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h TreeNodePtrList.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		CTValuePtrList.h CTValuePtrFunctionTypes.h BitSet.h \
		SatherTypeImpl.h Kinds.head STPtrList.h MyDebug.h \
		STPtrFunctionTypes.h TreeNodeImpl.h BMPtrList.h treecon.h \
		HEAD.h clp.h BoundMethods.h BoundMethodsImpl.h \
		CodeGenStreams.h Coercions.h CommandLine.h \
		SpecialTypes.head GenericResolution.h \
		GetReferencedClasses.h Inheritances.h MethodTypes.h \
		PreDefKeys.h ReaderWriter.h satk_aux_scanner.h \
		satk_token_processors.h SemanticSharedFeatures.h \
		SemanticValueRange.h SemanticValues.h MethArgInfoList.h \
		TDG.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h Indent.h MakeName.h Include.h \
		SrcFileStack.h InhAlgScope.h TypeGenAlgScope.h \
		TypeSemAlgScope.h SemAlgScope.h TypeInhAlgScope.h \
		ValueRangePtrList.h VoidPtrList.h CoordMap.h StringOutput.h \
		clplib.h BMPtrFunctionTypes.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

NameAnalysisFeaturesInh.o:	NameAnalysisFeaturesInh.c NameAnalysisFeaturesInh.head \
		pdl_gen.h DefTableKeyList.h Strings.h deftbl.h ptg_gen.h \
		GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h CTValue.h \
		SatherType.h IntSet.h err.h CoordCmp.h envmod.h eliproto.h \
		ptg.h PtgOutput.h DefTableKeyFunctionTypes.h \
		GenericParameter.h GenericInfoFunctionTypes.h \
		ArgumentInfoList.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h TreeNodePtrList.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		Overriding.h OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h obstack.h BitSet.h csm.h

visitprocs2.o:	visitprocs2.c HEAD.h err.h node.h visitprocs.h attrpredef.h \
		visitmap.h clp.h BoundMethods.h BoundMethodsImpl.h \
		CodeGenMisc.h ptg_gen.h DefTableKeyList.h CodeGenStreams.h \
		SatherType.h Coercions.h SatherTypeImpl.h envmod.h \
		CTValue.h CommandLine.h IntSet.h Kinds.head \
		SpecialTypes.head deftbl.h pdl_gen.h Strings.h \
		GenericResolution.h GetReferencedClasses.h Inheritances.h \
		MethodTypes.h MyDebug.h Overriding.h obstack.h PreDefKeys.h \
		ReaderWriter.h satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TDG.h TreeNodeImpl.h \
		TreeNode.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h BMPtrList.h Indent.h CTValuePtrList.h \
		ArgumentInfoList.h GenericInfoList.h TreeNodePtrList.h \
		TreeNodePtrListList.h MakeName.h Include.h SrcFileStack.h \
		InheritanceInfoList.h CoordCmp.h InhAlgScope.h \
		TypeGenAlgScope.h TypeSemAlgScope.h SemAlgScope.h \
		TypeInhAlgScope.h OvrPtrList.h STPtrList.h \
		ValueRangePtrList.h treecon.h BitSet.h VoidPtrList.h \
		CoordMap.h StringOutput.h clplib.h eliproto.h ptg.h \
		PtgOutput.h DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		OvrPtrFunctionTypes.h CTValuePtrFunctionTypes.h \
		STPtrFunctionTypes.h BMPtrFunctionTypes.h csm.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

SemanticSharedFeatures.o:	SemanticSharedFeatures.c SemanticSharedFeatures.h \
		Inheritances.h deftbl.h IntSet.h pdl_gen.h eliproto.h \
		ptg_gen.h DefTableKeyList.h GenericInfoList.h \
		TreeNodePtrListList.h InheritanceInfoList.h TreeNode.h \
		OvrPtrList.h CTValue.h SatherType.h err.h CoordCmp.h \
		envmod.h ptg.h PtgOutput.h DefTableKeyFunctionTypes.h \
		GenericParameter.h GenericInfoFunctionTypes.h \
		ArgumentInfoList.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h TreeNodePtrList.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		Overriding.h OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h obstack.h BitSet.h Kinds.head \
		TreeNodeImpl.h GetReferencedClasses.h treecon.h HEAD.h \
		clp.h BoundMethods.h BoundMethodsImpl.h CodeGenMisc.h \
		CodeGenStreams.h Coercions.h SatherTypeImpl.h CommandLine.h \
		SpecialTypes.head Strings.h GenericResolution.h \
		MethodTypes.h MyDebug.h PreDefKeys.h ReaderWriter.h \
		satk_aux_scanner.h satk_token_processors.h \
		SemanticValueRange.h SemanticValues.h MethArgInfoList.h \
		TDG.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h BMPtrList.h Indent.h MakeName.h Include.h \
		SrcFileStack.h InhAlgScope.h TypeGenAlgScope.h \
		TypeSemAlgScope.h SemAlgScope.h TypeInhAlgScope.h \
		STPtrList.h ValueRangePtrList.h VoidPtrList.h CoordMap.h \
		StringOutput.h clplib.h STPtrFunctionTypes.h \
		BMPtrFunctionTypes.h csm.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

SemanticArrays.o:	SemanticArrays.c SemanticArrays.head pdl_gen.h \
		DefTableKeyList.h SatherType.h deftbl.h \
		DefTableKeyFunctionTypes.h eliproto.h IntSet.h \
		CTValuePtrList.h CTValue.h CTValuePtrFunctionTypes.h \
		ptg_gen.h GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h err.h \
		CoordCmp.h envmod.h ptg.h PtgOutput.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentInfoList.h \
		ArgumentParameter.h ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrList.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h Overriding.h \
		OvrPtrFunctionTypes.h obstack.h BitSet.h

PreDefMod.o:	PreDefMod.c idn.h PreDefMod.h eliproto.h envmod.h deftbl.h \
		obstack.h BitSet.h

CodeGenStreams.o:	CodeGenStreams.c CodeGenStreams.h Strings.h pdl_gen.h \
		CodeGenMisc.h ptg_gen.h DefTableKeyList.h eliproto.h ptg.h \
		PtgOutput.h deftbl.h DefTableKeyFunctionTypes.h csm.h \
		obstack.h GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h CTValue.h \
		SatherType.h IntSet.h err.h CoordCmp.h envmod.h \
		GenericParameter.h GenericInfoFunctionTypes.h \
		ArgumentInfoList.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h TreeNodePtrList.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		Overriding.h OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h BitSet.h SatherTypeImpl.h \
		Kinds.head STPtrList.h MyDebug.h STPtrFunctionTypes.h \
		TreeNodeImpl.h BMPtrList.h treecon.h HEAD.h clp.h \
		BoundMethods.h BoundMethodsImpl.h Coercions.h CommandLine.h \
		SpecialTypes.head GenericResolution.h \
		GetReferencedClasses.h Inheritances.h MethodTypes.h \
		PreDefKeys.h ReaderWriter.h satk_aux_scanner.h \
		satk_token_processors.h SemanticSharedFeatures.h \
		SemanticValueRange.h SemanticValues.h MethArgInfoList.h \
		TDG.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h Indent.h MakeName.h Include.h \
		SrcFileStack.h InhAlgScope.h TypeGenAlgScope.h \
		TypeSemAlgScope.h SemAlgScope.h TypeInhAlgScope.h \
		ValueRangePtrList.h VoidPtrList.h CoordMap.h StringOutput.h \
		clplib.h BMPtrFunctionTypes.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

TypeAnalSem.o:	TypeAnalSem.c TypeAnalSem.h err.h pdl_gen.h TDG.h \
		Kinds.head deftbl.h SatherType.h envmod.h MyDebug.h \
		Coercions.h eliproto.h ptg_gen.h DefTableKeyList.h \
		GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h CTValue.h \
		IntSet.h CoordCmp.h ptg.h PtgOutput.h \
		DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentInfoList.h \
		ArgumentParameter.h ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrList.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h Overriding.h \
		OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h obstack.h BitSet.h Strings.h \
		Inheritances.h PreDefKeys.h csm.h TreeNodeImpl.h \
		GetReferencedClasses.h treecon.h HEAD.h clp.h \
		BoundMethods.h BoundMethodsImpl.h CodeGenMisc.h \
		CodeGenStreams.h SatherTypeImpl.h CommandLine.h \
		SpecialTypes.head GenericResolution.h MethodTypes.h \
		ReaderWriter.h satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TypeAnalSemArguments.h \
		TypeConformance.h BMPtrList.h Indent.h MakeName.h Include.h \
		SrcFileStack.h InhAlgScope.h TypeGenAlgScope.h \
		TypeSemAlgScope.h SemAlgScope.h TypeInhAlgScope.h \
		STPtrList.h ValueRangePtrList.h VoidPtrList.h CoordMap.h \
		StringOutput.h clplib.h STPtrFunctionTypes.h \
		BMPtrFunctionTypes.h idn.h ValueRangePtrFunctionTypes.h \
		MethodArgument.h MethArgInfoFunctionTypes.h source.h \
		VoidPtr.h VoidPtrFunctionTypes.h

CodeGenTypeConstructor.o:	CodeGenTypeConstructor.c CodeGenTypeConstructor.head \
		CodeGenMisc.h Strings.h MyDebug.h DefTableKeyList.h \
		ptg_gen.h SatherType.h deftbl.h DefTableKeyFunctionTypes.h \
		eliproto.h ptg.h PtgOutput.h IntSet.h CTValuePtrList.h \
		CTValue.h CTValuePtrFunctionTypes.h SatherTypeImpl.h err.h \
		obstack.h Kinds.head csm.h pdl_gen.h STPtrList.h \
		GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h CoordCmp.h \
		envmod.h GenericParameter.h GenericInfoFunctionTypes.h \
		ArgumentInfoList.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h TreeNodePtrList.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		Overriding.h OvrPtrFunctionTypes.h BitSet.h \
		STPtrFunctionTypes.h TreeNodeImpl.h BMPtrList.h treecon.h \
		HEAD.h clp.h BoundMethods.h BoundMethodsImpl.h \
		CodeGenStreams.h Coercions.h CommandLine.h \
		SpecialTypes.head GenericResolution.h \
		GetReferencedClasses.h Inheritances.h MethodTypes.h \
		PreDefKeys.h ReaderWriter.h satk_aux_scanner.h \
		satk_token_processors.h SemanticSharedFeatures.h \
		SemanticValueRange.h SemanticValues.h MethArgInfoList.h \
		TDG.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h Indent.h MakeName.h Include.h \
		SrcFileStack.h InhAlgScope.h TypeGenAlgScope.h \
		TypeSemAlgScope.h SemAlgScope.h TypeInhAlgScope.h \
		ValueRangePtrList.h VoidPtrList.h CoordMap.h StringOutput.h \
		clplib.h BMPtrFunctionTypes.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

BoundMethodsImpl.o:	BoundMethodsImpl.c BoundMethodsImpl.h BMPtrList.h obstack.h \
		IntSet.h Kinds.head pdl_gen.h SatherTypeImpl.h ptg_gen.h \
		BoundMethods.h BMPtrFunctionTypes.h deftbl.h STPtrList.h \
		eliproto.h SatherType.h STPtrFunctionTypes.h \
		CTValuePtrList.h CTValue.h CTValuePtrFunctionTypes.h \
		DefTableKeyList.h GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h err.h \
		CoordCmp.h envmod.h ptg.h PtgOutput.h \
		DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentInfoList.h \
		ArgumentParameter.h ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrList.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h Overriding.h \
		OvrPtrFunctionTypes.h BitSet.h csm.h MyDebug.h Strings.h \
		TreeNodeImpl.h treecon.h HEAD.h clp.h CodeGenMisc.h \
		CodeGenStreams.h Coercions.h CommandLine.h \
		SpecialTypes.head GenericResolution.h \
		GetReferencedClasses.h Inheritances.h MethodTypes.h \
		PreDefKeys.h ReaderWriter.h satk_aux_scanner.h \
		satk_token_processors.h SemanticSharedFeatures.h \
		SemanticValueRange.h SemanticValues.h MethArgInfoList.h \
		TDG.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h Indent.h MakeName.h Include.h \
		SrcFileStack.h InhAlgScope.h TypeGenAlgScope.h \
		TypeSemAlgScope.h SemAlgScope.h TypeInhAlgScope.h \
		ValueRangePtrList.h VoidPtrList.h CoordMap.h StringOutput.h \
		clplib.h idn.h ValueRangePtrFunctionTypes.h \
		MethodArgument.h MethArgInfoFunctionTypes.h source.h \
		VoidPtr.h VoidPtrFunctionTypes.h

BMPtrList.o:	BMPtrList.c BMPtrList.h err.h obstack.h BoundMethods.h \
		BMPtrFunctionTypes.h deftbl.h STPtrList.h eliproto.h \
		SatherType.h STPtrFunctionTypes.h IntSet.h CTValuePtrList.h \
		CTValue.h CTValuePtrFunctionTypes.h

TypeAnalSemArguments.o:	TypeAnalSemArguments.c TypeAnalSem.h err.h pdl_gen.h TDG.h \
		Kinds.head deftbl.h SatherType.h envmod.h MyDebug.h \
		Coercions.h eliproto.h ptg_gen.h DefTableKeyList.h \
		GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h CTValue.h \
		IntSet.h CoordCmp.h ptg.h PtgOutput.h \
		DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentInfoList.h \
		ArgumentParameter.h ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrList.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h Overriding.h \
		OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h obstack.h BitSet.h Strings.h \
		Inheritances.h PreDefKeys.h csm.h TreeNodeImpl.h \
		GetReferencedClasses.h treecon.h HEAD.h clp.h \
		BoundMethods.h BoundMethodsImpl.h CodeGenMisc.h \
		CodeGenStreams.h SatherTypeImpl.h CommandLine.h \
		SpecialTypes.head GenericResolution.h MethodTypes.h \
		ReaderWriter.h satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TypeAnalSemArguments.h \
		TypeConformance.h BMPtrList.h Indent.h MakeName.h Include.h \
		SrcFileStack.h InhAlgScope.h TypeGenAlgScope.h \
		TypeSemAlgScope.h SemAlgScope.h TypeInhAlgScope.h \
		STPtrList.h ValueRangePtrList.h VoidPtrList.h CoordMap.h \
		StringOutput.h clplib.h STPtrFunctionTypes.h \
		BMPtrFunctionTypes.h idn.h ValueRangePtrFunctionTypes.h \
		MethodArgument.h MethArgInfoFunctionTypes.h source.h \
		VoidPtr.h VoidPtrFunctionTypes.h

CodeGenValues.o:	CodeGenValues.c CodeGenValues.head SemanticValues.h \
		MyDebug.h Coercions.h ptg_gen.h SatherTypeImpl.h err.h \
		envmod.h CTValue.h PreDefKeys.h Strings.h csm.h pdl_gen.h \
		obstack.h deftbl.h IntSet.h Kinds.head DefTableKeyList.h \
		STPtrList.h eliproto.h DefTableKeyFunctionTypes.h \
		GenericInfoList.h TreeNodePtrListList.h \
		InheritanceInfoList.h TreeNode.h OvrPtrList.h SatherType.h \
		CoordCmp.h ptg.h PtgOutput.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentInfoList.h \
		ArgumentParameter.h ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrList.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h Overriding.h \
		OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h BitSet.h STPtrFunctionTypes.h \
		TreeNodeImpl.h BMPtrList.h treecon.h HEAD.h clp.h \
		BoundMethods.h BoundMethodsImpl.h CodeGenMisc.h \
		CodeGenStreams.h CommandLine.h SpecialTypes.head \
		GenericResolution.h GetReferencedClasses.h Inheritances.h \
		MethodTypes.h ReaderWriter.h satk_aux_scanner.h \
		satk_token_processors.h SemanticSharedFeatures.h \
		SemanticValueRange.h MethArgInfoList.h TDG.h \
		TypeAnalSemArguments.h TypeAnalSem.h TypeConformance.h \
		Indent.h MakeName.h Include.h SrcFileStack.h InhAlgScope.h \
		TypeGenAlgScope.h TypeSemAlgScope.h SemAlgScope.h \
		TypeInhAlgScope.h ValueRangePtrList.h VoidPtrList.h \
		CoordMap.h StringOutput.h clplib.h BMPtrFunctionTypes.h \
		idn.h ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

Std_method_call.o:	Std_method_call.c Std_method_call.head deftbl.h pdl_gen.h \
		MethArgInfoList.h SatherType.h obstack.h eliproto.h \
		ptg_gen.h DefTableKeyList.h GenericInfoList.h \
		TreeNodePtrListList.h InheritanceInfoList.h TreeNode.h \
		OvrPtrList.h CTValue.h IntSet.h err.h CoordCmp.h envmod.h \
		ptg.h PtgOutput.h DefTableKeyFunctionTypes.h \
		GenericParameter.h GenericInfoFunctionTypes.h \
		ArgumentInfoList.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h TreeNodePtrList.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		Overriding.h OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h BitSet.h MethodArgument.h \
		MethArgInfoFunctionTypes.h

visitprocs4.o:	visitprocs4.c HEAD.h err.h node.h visitprocs.h attrpredef.h \
		visitmap.h clp.h BoundMethods.h BoundMethodsImpl.h \
		CodeGenMisc.h ptg_gen.h DefTableKeyList.h CodeGenStreams.h \
		SatherType.h Coercions.h SatherTypeImpl.h envmod.h \
		CTValue.h CommandLine.h IntSet.h Kinds.head \
		SpecialTypes.head deftbl.h pdl_gen.h Strings.h \
		GenericResolution.h GetReferencedClasses.h Inheritances.h \
		MethodTypes.h MyDebug.h Overriding.h obstack.h PreDefKeys.h \
		ReaderWriter.h satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TDG.h TreeNodeImpl.h \
		TreeNode.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h BMPtrList.h Indent.h CTValuePtrList.h \
		ArgumentInfoList.h GenericInfoList.h TreeNodePtrList.h \
		TreeNodePtrListList.h MakeName.h Include.h SrcFileStack.h \
		InheritanceInfoList.h CoordCmp.h InhAlgScope.h \
		TypeGenAlgScope.h TypeSemAlgScope.h SemAlgScope.h \
		TypeInhAlgScope.h OvrPtrList.h STPtrList.h \
		ValueRangePtrList.h treecon.h BitSet.h VoidPtrList.h \
		CoordMap.h StringOutput.h clplib.h eliproto.h ptg.h \
		PtgOutput.h DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		OvrPtrFunctionTypes.h CTValuePtrFunctionTypes.h \
		STPtrFunctionTypes.h BMPtrFunctionTypes.h csm.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

TreeConstructionInh.o:	TreeConstructionInh.c TreeConstructionInh.head \
		TreeNodeImpl.h treecon.h nodeptr.h err.h eliproto.h \
		obstack.h deftbl.h TreeNode.h HEAD.h clp.h BoundMethods.h \
		BoundMethodsImpl.h CodeGenMisc.h ptg_gen.h \
		DefTableKeyList.h CodeGenStreams.h SatherType.h Coercions.h \
		SatherTypeImpl.h envmod.h CTValue.h CommandLine.h IntSet.h \
		Kinds.head SpecialTypes.head pdl_gen.h Strings.h \
		GenericResolution.h GetReferencedClasses.h Inheritances.h \
		MethodTypes.h MyDebug.h Overriding.h PreDefKeys.h \
		ReaderWriter.h satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TDG.h \
		TypeAnalSemArguments.h TypeAnalSem.h TypeConformance.h \
		BMPtrList.h Indent.h CTValuePtrList.h ArgumentInfoList.h \
		GenericInfoList.h TreeNodePtrList.h TreeNodePtrListList.h \
		MakeName.h Include.h SrcFileStack.h InheritanceInfoList.h \
		CoordCmp.h InhAlgScope.h TypeGenAlgScope.h \
		TypeSemAlgScope.h SemAlgScope.h TypeInhAlgScope.h \
		OvrPtrList.h STPtrList.h ValueRangePtrList.h BitSet.h \
		VoidPtrList.h CoordMap.h StringOutput.h clplib.h ptg.h \
		PtgOutput.h DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h OvrPtrFunctionTypes.h \
		CTValuePtrFunctionTypes.h STPtrFunctionTypes.h \
		BMPtrFunctionTypes.h csm.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

InheritanceBuiltinOption.o:	InheritanceBuiltinOption.c InheritanceBuiltinOption.head \
		InheritanceInfoList.h pdl_gen.h DefTableKeyList.h err.h \
		deftbl.h DefTableKeyFunctionTypes.h eliproto.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		ptg_gen.h GenericInfoList.h TreeNodePtrListList.h \
		TreeNode.h OvrPtrList.h CTValue.h SatherType.h IntSet.h \
		CoordCmp.h envmod.h ptg.h PtgOutput.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentInfoList.h \
		ArgumentParameter.h ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrList.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h Overriding.h \
		OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h obstack.h BitSet.h

visitprocs1.o:	visitprocs1.c HEAD.h err.h node.h visitprocs.h attrpredef.h \
		visitmap.h clp.h BoundMethods.h BoundMethodsImpl.h \
		CodeGenMisc.h ptg_gen.h DefTableKeyList.h CodeGenStreams.h \
		SatherType.h Coercions.h SatherTypeImpl.h envmod.h \
		CTValue.h CommandLine.h IntSet.h Kinds.head \
		SpecialTypes.head deftbl.h pdl_gen.h Strings.h \
		GenericResolution.h GetReferencedClasses.h Inheritances.h \
		MethodTypes.h MyDebug.h Overriding.h obstack.h PreDefKeys.h \
		ReaderWriter.h satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TDG.h TreeNodeImpl.h \
		TreeNode.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h BMPtrList.h Indent.h CTValuePtrList.h \
		ArgumentInfoList.h GenericInfoList.h TreeNodePtrList.h \
		TreeNodePtrListList.h MakeName.h Include.h SrcFileStack.h \
		InheritanceInfoList.h CoordCmp.h InhAlgScope.h \
		TypeGenAlgScope.h TypeSemAlgScope.h SemAlgScope.h \
		TypeInhAlgScope.h OvrPtrList.h STPtrList.h \
		ValueRangePtrList.h treecon.h BitSet.h VoidPtrList.h \
		CoordMap.h StringOutput.h clplib.h eliproto.h ptg.h \
		PtgOutput.h DefTableKeyFunctionTypes.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrListFunctionTypes.h TreeNodePtrFunctionTypes.h \
		InheritanceParameter.h InheritanceInfoFunctionTypes.h \
		OvrPtrFunctionTypes.h CTValuePtrFunctionTypes.h \
		STPtrFunctionTypes.h BMPtrFunctionTypes.h csm.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

GenericResolution.o:	GenericResolution.c GenericResolution.h treecon.h obstack.h \
		DefTableKeyList.h ArgumentParameter.h ArgumentInfoList.h \
		GenericParameter.h GenericInfoList.h TreeNode.h \
		TreeNodeImpl.h TreeNodePtrList.h TreeNodePtrListList.h \
		eliproto.h err.h nodeptr.h HEAD.h clp.h BoundMethods.h \
		BoundMethodsImpl.h CodeGenMisc.h ptg_gen.h CodeGenStreams.h \
		SatherType.h Coercions.h SatherTypeImpl.h envmod.h \
		CTValue.h CommandLine.h IntSet.h Kinds.head \
		SpecialTypes.head deftbl.h pdl_gen.h Strings.h \
		GetReferencedClasses.h Inheritances.h MethodTypes.h \
		MyDebug.h Overriding.h PreDefKeys.h ReaderWriter.h \
		satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TDG.h \
		TypeAnalSemArguments.h TypeAnalSem.h TypeConformance.h \
		BMPtrList.h Indent.h CTValuePtrList.h MakeName.h Include.h \
		SrcFileStack.h InheritanceInfoList.h CoordCmp.h \
		InhAlgScope.h TypeGenAlgScope.h TypeSemAlgScope.h \
		SemAlgScope.h TypeInhAlgScope.h OvrPtrList.h STPtrList.h \
		ValueRangePtrList.h BitSet.h VoidPtrList.h CoordMap.h \
		StringOutput.h clplib.h ptg.h PtgOutput.h \
		DefTableKeyFunctionTypes.h GenericInfoFunctionTypes.h \
		ArgumentInfoFunctionTypes.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h OvrPtrFunctionTypes.h \
		CTValuePtrFunctionTypes.h STPtrFunctionTypes.h \
		BMPtrFunctionTypes.h csm.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

ArgumentInfoList.o:	ArgumentInfoList.c ArgumentInfoList.h err.h obstack.h \
		ArgumentParameter.h ArgumentInfoFunctionTypes.h \
		DefTableKeyList.h TreeNode.h deftbl.h \
		DefTableKeyFunctionTypes.h eliproto.h nodeptr.h

TreeNodePtrList.o:	TreeNodePtrList.c TreeNodePtrList.h err.h obstack.h \
		TreeNode.h TreeNodePtrFunctionTypes.h nodeptr.h deftbl.h \
		eliproto.h

GenericInfoList.o:	GenericInfoList.c GenericInfoList.h err.h obstack.h \
		GenericParameter.h GenericInfoFunctionTypes.h \
		ArgumentInfoList.h deftbl.h ArgumentParameter.h \
		ArgumentInfoFunctionTypes.h DefTableKeyList.h TreeNode.h \
		DefTableKeyFunctionTypes.h eliproto.h nodeptr.h

TreeNodePtrListList.o:	TreeNodePtrListList.c TreeNodePtrListList.h err.h obstack.h \
		TreeNodePtrList.h TreeNodePtrListFunctionTypes.h TreeNode.h \
		TreeNodePtrFunctionTypes.h nodeptr.h deftbl.h eliproto.h

SemanticValueRange.o:	SemanticValueRange.c SemanticValueRange.h CTValue.h \
		obstack.h Strings.h err.h ValueRangePtrList.h \
		SemanticValues.h csm.h eliproto.h \
		ValueRangePtrFunctionTypes.h

ValueRangePtrList.o:	ValueRangePtrList.c ValueRangePtrList.h err.h obstack.h \
		CTValue.h ValueRangePtrFunctionTypes.h eliproto.h

SpecialTypes.o:	SpecialTypes.c SpecialTypes.head deftbl.h SatherTypeImpl.h \
		IntSet.h pdl_gen.h eliproto.h obstack.h Kinds.head csm.h \
		DefTableKeyList.h STPtrList.h MyDebug.h \
		DefTableKeyFunctionTypes.h ptg_gen.h GenericInfoList.h \
		TreeNodePtrListList.h InheritanceInfoList.h TreeNode.h \
		OvrPtrList.h CTValue.h SatherType.h err.h CoordCmp.h \
		envmod.h ptg.h PtgOutput.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentInfoList.h \
		ArgumentParameter.h ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrList.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h Overriding.h \
		OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h BitSet.h STPtrFunctionTypes.h \
		Strings.h TreeNodeImpl.h BMPtrList.h treecon.h HEAD.h clp.h \
		BoundMethods.h BoundMethodsImpl.h CodeGenMisc.h \
		CodeGenStreams.h Coercions.h CommandLine.h \
		GenericResolution.h GetReferencedClasses.h Inheritances.h \
		MethodTypes.h PreDefKeys.h ReaderWriter.h \
		satk_aux_scanner.h satk_token_processors.h \
		SemanticSharedFeatures.h SemanticValueRange.h \
		SemanticValues.h MethArgInfoList.h TDG.h \
		TypeAnalSemArguments.h TypeAnalSem.h TypeConformance.h \
		Indent.h MakeName.h Include.h SrcFileStack.h InhAlgScope.h \
		TypeGenAlgScope.h TypeSemAlgScope.h SemAlgScope.h \
		TypeInhAlgScope.h ValueRangePtrList.h VoidPtrList.h \
		CoordMap.h StringOutput.h clplib.h BMPtrFunctionTypes.h \
		idn.h ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

MethodTypes.o:	MethodTypes.c MethodTypes.h CodeGenMisc.h SatherTypeImpl.h \
		ptg_gen.h obstack.h deftbl.h IntSet.h Kinds.head csm.h \
		DefTableKeyList.h pdl_gen.h STPtrList.h MyDebug.h \
		eliproto.h DefTableKeyFunctionTypes.h GenericInfoList.h \
		TreeNodePtrListList.h InheritanceInfoList.h TreeNode.h \
		OvrPtrList.h CTValue.h SatherType.h err.h CoordCmp.h \
		envmod.h ptg.h PtgOutput.h GenericParameter.h \
		GenericInfoFunctionTypes.h ArgumentInfoList.h \
		ArgumentParameter.h ArgumentInfoFunctionTypes.h nodeptr.h \
		TreeNodePtrList.h TreeNodePtrListFunctionTypes.h \
		TreeNodePtrFunctionTypes.h InheritanceParameter.h \
		InheritanceInfoFunctionTypes.h Overriding.h \
		OvrPtrFunctionTypes.h CTValuePtrList.h \
		CTValuePtrFunctionTypes.h BitSet.h STPtrFunctionTypes.h \
		Strings.h TreeNodeImpl.h BMPtrList.h treecon.h HEAD.h clp.h \
		BoundMethods.h BoundMethodsImpl.h CodeGenStreams.h \
		Coercions.h CommandLine.h SpecialTypes.head \
		GenericResolution.h GetReferencedClasses.h Inheritances.h \
		PreDefKeys.h ReaderWriter.h satk_aux_scanner.h \
		satk_token_processors.h SemanticSharedFeatures.h \
		SemanticValueRange.h SemanticValues.h MethArgInfoList.h \
		TDG.h TypeAnalSemArguments.h TypeAnalSem.h \
		TypeConformance.h Indent.h MakeName.h Include.h \
		SrcFileStack.h InhAlgScope.h TypeGenAlgScope.h \
		TypeSemAlgScope.h SemAlgScope.h TypeInhAlgScope.h \
		ValueRangePtrList.h VoidPtrList.h CoordMap.h StringOutput.h \
		clplib.h BMPtrFunctionTypes.h idn.h \
		ValueRangePtrFunctionTypes.h MethodArgument.h \
		MethArgInfoFunctionTypes.h source.h VoidPtr.h \
		VoidPtrFunctionTypes.h

PtgOutFPtr.o:	PtgOutFPtr.c PtgOutFPtr.h ptg_gen.h eliproto.h ptg.h \
		PtgOutput.h

obstack.o:	obstack.c config.h obstack.h gettext.h

