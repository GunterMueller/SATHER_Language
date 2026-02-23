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
    
#ifndef PDL_GEN_H
#define PDL_GEN_H

#include "deftbl.h"

#ifdef ELI_ARG
#undef ELI_ARG
#endif

#if defined(__STDC__) || defined(__cplusplus)
#define ELI_ARG(proto)    proto
#else
#define ELI_ARG(proto)    ()
#endif

#include "ptg_gen.h"
#include "DefTableKeyList.h"
#include "GenericInfoList.h"
#include "TreeNodePtrListList.h"
#include "DefTableKeyList.h"
#include "InheritanceInfoList.h"
#include "TreeNode.h"
#include "DefTableKeyList.h"
#include "DefTableKeyList.h"
#include "DefTableKeyList.h"
#include "OvrPtrList.h"
#include "CTValue.h"
#include "DefTableKeyList.h"
#include "DefTableKeyList.h"
#include "DefTableKeyList.h"
#include "DefTableKeyList.h"
#include "SatherType.h"
#include "SatherType.h"
#include "SatherType.h"
#include "IntSet.h"
#include "err.h"
#include "CoordCmp.h"
#include "IntSet.h"
#include "err.h"
#include "envmod.h"
#include "envmod.h"

#define TYPE int
extern TYPE Getint ELI_ARG((int _Property, DefTableKey key, TYPE deflt));
extern void Setint ELI_ARG((int _Property, DefTableKey key, TYPE _add, TYPE _replace));
extern void Resetint ELI_ARG((int _Property, DefTableKey key, TYPE _val));
extern TYPE SetGetint ELI_ARG((int _Property, DefTableKey key, TYPE init, TYPE reset));
extern DefTableKey KResetint ELI_ARG((int _Property, DefTableKey key, TYPE val));
#undef TYPE
#define TYPE PTGNode
extern TYPE GetPTGNode ELI_ARG((int _Property, DefTableKey key, TYPE deflt));
extern void SetPTGNode ELI_ARG((int _Property, DefTableKey key, TYPE _add, TYPE _replace));
extern void ResetPTGNode ELI_ARG((int _Property, DefTableKey key, TYPE _val));
#undef TYPE
#define TYPE DefTableKeyList
extern TYPE GetDefTableKeyList ELI_ARG((int _Property, DefTableKey key, TYPE deflt));
extern void SetDefTableKeyList ELI_ARG((int _Property, DefTableKey key, TYPE _add, TYPE _replace));
extern void ResetDefTableKeyList ELI_ARG((int _Property, DefTableKey key, TYPE _val));
extern DefTableKey KResetDefTableKeyList ELI_ARG((int _Property, DefTableKey key, TYPE val));
#undef TYPE
#define TYPE GenericInfoList
extern TYPE GetGenericInfoList ELI_ARG((int _Property, DefTableKey key, TYPE deflt));
extern void SetGenericInfoList ELI_ARG((int _Property, DefTableKey key, TYPE _add, TYPE _replace));
extern void ResetGenericInfoList ELI_ARG((int _Property, DefTableKey key, TYPE _val));
#undef TYPE
#define TYPE TreeNodePtrListList
extern TYPE GetTreeNodePtrListList ELI_ARG((int _Property, DefTableKey key, TYPE deflt));
extern void SetTreeNodePtrListList ELI_ARG((int _Property, DefTableKey key, TYPE _add, TYPE _replace));
extern void ResetTreeNodePtrListList ELI_ARG((int _Property, DefTableKey key, TYPE _val));
#undef TYPE
#define TYPE TreeNodePtr
extern TYPE GetTreeNodePtr ELI_ARG((int _Property, DefTableKey key, TYPE deflt));
extern void SetTreeNodePtr ELI_ARG((int _Property, DefTableKey key, TYPE _add, TYPE _replace));
extern void ResetTreeNodePtr ELI_ARG((int _Property, DefTableKey key, TYPE _val));
#undef TYPE
#define TYPE DefTableKey
extern TYPE GetDefTableKey ELI_ARG((int _Property, DefTableKey key, TYPE deflt));
extern void SetDefTableKey ELI_ARG((int _Property, DefTableKey key, TYPE _add, TYPE _replace));
extern void ResetDefTableKey ELI_ARG((int _Property, DefTableKey key, TYPE _val));
#undef TYPE
#define TYPE InheritanceInfoList
extern TYPE GetInheritanceInfoList ELI_ARG((int _Property, DefTableKey key, TYPE deflt));
extern void SetInheritanceInfoList ELI_ARG((int _Property, DefTableKey key, TYPE _add, TYPE _replace));
extern void ResetInheritanceInfoList ELI_ARG((int _Property, DefTableKey key, TYPE _val));
#undef TYPE
#define TYPE CoordPtr
extern TYPE GetCoordPtr ELI_ARG((int _Property, DefTableKey key, TYPE deflt));
extern void SetCoordPtr ELI_ARG((int _Property, DefTableKey key, TYPE _add, TYPE _replace));
extern void ResetCoordPtr ELI_ARG((int _Property, DefTableKey key, TYPE _val));
extern DefTableKey KResetCoordPtr ELI_ARG((int _Property, DefTableKey key, TYPE val));
#undef TYPE
#define TYPE OvrPtrList
extern TYPE GetOvrPtrList ELI_ARG((int _Property, DefTableKey key, TYPE deflt));
extern void SetOvrPtrList ELI_ARG((int _Property, DefTableKey key, TYPE _add, TYPE _replace));
extern void ResetOvrPtrList ELI_ARG((int _Property, DefTableKey key, TYPE _val));
#undef TYPE
#define TYPE STPtr
extern TYPE GetSTPtr ELI_ARG((int _Property, DefTableKey key, TYPE deflt));
extern void SetSTPtr ELI_ARG((int _Property, DefTableKey key, TYPE _add, TYPE _replace));
extern void ResetSTPtr ELI_ARG((int _Property, DefTableKey key, TYPE _val));
extern DefTableKey KResetSTPtr ELI_ARG((int _Property, DefTableKey key, TYPE val));
#undef TYPE
#define TYPE CTValuePtr
extern TYPE GetCTValuePtr ELI_ARG((int _Property, DefTableKey key, TYPE deflt));
extern void SetCTValuePtr ELI_ARG((int _Property, DefTableKey key, TYPE _add, TYPE _replace));
extern void ResetCTValuePtr ELI_ARG((int _Property, DefTableKey key, TYPE _val));
#undef TYPE
#define TYPE IntSet
extern TYPE GetIntSet ELI_ARG((int _Property, DefTableKey key, TYPE deflt));
extern void SetIntSet ELI_ARG((int _Property, DefTableKey key, TYPE _add, TYPE _replace));
extern void ResetIntSet ELI_ARG((int _Property, DefTableKey key, TYPE _val));
extern TYPE InsertIntSet ELI_ARG((int _Property, DefTableKey key, int val));
extern TYPE UnionIntSet ELI_ARG((int _Property, DefTableKey key, TYPE val));
extern TYPE IntersectIntSet ELI_ARG((int _Property, DefTableKey key, TYPE val));
#undef TYPE
#define TYPE Environment
extern TYPE GetEnvironment ELI_ARG((int _Property, DefTableKey key, TYPE deflt));
extern void SetEnvironment ELI_ARG((int _Property, DefTableKey key, TYPE _add, TYPE _replace));
extern void ResetEnvironment ELI_ARG((int _Property, DefTableKey key, TYPE _val));
#undef TYPE

#define SetClpValue(key, _add, _replace)   \
		Setint(1, (key), (_add), (_replace))
#define ResetClpValue(key, _val)   \
		Resetint(1, (key), (_val))
#define GetClpValue(key, deflt)   \
		Getint(1, (key), (deflt))
#define SetCLRNative(key, _add, _replace)   \
		SetPTGNode(2, (key), (_add), (_replace))
#define ResetCLRNative(key, _val)   \
		ResetPTGNode(2, (key), (_val))
#define GetCLRNative(key, deflt)   \
		GetPTGNode(2, (key), (deflt))
#define KResetUniqueName(key, val)   \
		KResetint(3, (key), (val))
#define SetUniqueName(key, _add, _replace)   \
		Setint(3, (key), (_add), (_replace))
#define ResetUniqueName(key, _val)   \
		Resetint(3, (key), (_val))
#define GetUniqueName(key, deflt)   \
		Getint(3, (key), (deflt))
#define KResetCLRStreamName(key, val)   \
		KResetint(4, (key), (val))
#define SetCLRStreamName(key, _add, _replace)   \
		Setint(4, (key), (_add), (_replace))
#define ResetCLRStreamName(key, _val)   \
		Resetint(4, (key), (_val))
#define GetCLRStreamName(key, deflt)   \
		Getint(4, (key), (deflt))
#define SetLocals(key, _add, _replace)   \
		SetDefTableKeyList(5, (key), (_add), (_replace))
#define ResetLocals(key, _val)   \
		ResetDefTableKeyList(5, (key), (_val))
#define GetLocals(key, deflt)   \
		GetDefTableKeyList(5, (key), (deflt))
#define SetClassParCount(key, _add, _replace)   \
		Setint(6, (key), (_add), (_replace))
#define ResetClassParCount(key, _val)   \
		Resetint(6, (key), (_val))
#define GetClassParCount(key, deflt)   \
		Getint(6, (key), (deflt))
#define SetSym(key, _add, _replace)   \
		Setint(7, (key), (_add), (_replace))
#define ResetSym(key, _val)   \
		Resetint(7, (key), (_val))
#define GetSym(key, deflt)   \
		Getint(7, (key), (deflt))
#define SetGenInfos(key, _add, _replace)   \
		SetGenericInfoList(8, (key), (_add), (_replace))
#define ResetGenInfos(key, _val)   \
		ResetGenericInfoList(8, (key), (_val))
#define GetGenInfos(key, deflt)   \
		GetGenericInfoList(8, (key), (deflt))
#define SetGenStatus(key, _add, _replace)   \
		Setint(9, (key), (_add), (_replace))
#define ResetGenStatus(key, _val)   \
		Resetint(9, (key), (_val))
#define GetGenStatus(key, deflt)   \
		Getint(9, (key), (deflt))
#define SetInstances(key, _add, _replace)   \
		SetTreeNodePtrListList(10, (key), (_add), (_replace))
#define ResetInstances(key, _val)   \
		ResetTreeNodePtrListList(10, (key), (_val))
#define GetInstances(key, deflt)   \
		GetTreeNodePtrListList(10, (key), (deflt))
#define SetReferencedClasses(key, _add, _replace)   \
		SetDefTableKeyList(11, (key), (_add), (_replace))
#define ResetReferencedClasses(key, _val)   \
		ResetDefTableKeyList(11, (key), (_val))
#define GetReferencedClasses(key, deflt)   \
		GetDefTableKeyList(11, (key), (deflt))
#define SetReachableVisited(key, _add, _replace)   \
		Setint(12, (key), (_add), (_replace))
#define ResetReachableVisited(key, _val)   \
		Resetint(12, (key), (_val))
#define GetReachableVisited(key, deflt)   \
		Getint(12, (key), (deflt))
#define SetBoundsTree(key, _add, _replace)   \
		SetTreeNodePtr(13, (key), (_add), (_replace))
#define ResetBoundsTree(key, _val)   \
		ResetTreeNodePtr(13, (key), (_val))
#define GetBoundsTree(key, deflt)   \
		GetTreeNodePtr(13, (key), (deflt))
#define SetGetsBoundsFrom(key, _add, _replace)   \
		SetDefTableKey(14, (key), (_add), (_replace))
#define ResetGetsBoundsFrom(key, _val)   \
		ResetDefTableKey(14, (key), (_val))
#define GetGetsBoundsFrom(key, deflt)   \
		GetDefTableKey(14, (key), (deflt))
#define SetBuiltinTree(key, _add, _replace)   \
		SetTreeNodePtr(15, (key), (_add), (_replace))
#define ResetBuiltinTree(key, _val)   \
		ResetTreeNodePtr(15, (key), (_val))
#define GetBuiltinTree(key, deflt)   \
		GetTreeNodePtr(15, (key), (deflt))
#define SetGetsBuiltinFrom(key, _add, _replace)   \
		SetDefTableKey(16, (key), (_add), (_replace))
#define ResetGetsBuiltinFrom(key, _val)   \
		ResetDefTableKey(16, (key), (_val))
#define GetGetsBuiltinFrom(key, deflt)   \
		GetDefTableKey(16, (key), (deflt))
#define SetInheritances(key, _add, _replace)   \
		SetInheritanceInfoList(17, (key), (_add), (_replace))
#define ResetInheritances(key, _val)   \
		ResetInheritanceInfoList(17, (key), (_val))
#define GetInheritances(key, deflt)   \
		GetInheritanceInfoList(17, (key), (deflt))
#define SetInhStatus(key, _add, _replace)   \
		Setint(18, (key), (_add), (_replace))
#define ResetInhStatus(key, _val)   \
		Resetint(18, (key), (_val))
#define GetInhStatus(key, deflt)   \
		Getint(18, (key), (deflt))
#define SetFeatureTree(key, _add, _replace)   \
		SetTreeNodePtr(19, (key), (_add), (_replace))
#define ResetFeatureTree(key, _val)   \
		ResetTreeNodePtr(19, (key), (_val))
#define GetFeatureTree(key, deflt)   \
		GetTreeNodePtr(19, (key), (deflt))
#define KResetModSym(key, val)   \
		KResetint(20, (key), (val))
#define SetModSym(key, _add, _replace)   \
		Setint(20, (key), (_add), (_replace))
#define ResetModSym(key, _val)   \
		Resetint(20, (key), (_val))
#define GetModSym(key, deflt)   \
		Getint(20, (key), (deflt))
#define KResetPos(key, val)   \
		KResetCoordPtr(21, (key), (val))
#define SetPos(key, _add, _replace)   \
		SetCoordPtr(21, (key), (_add), (_replace))
#define ResetPos(key, _val)   \
		ResetCoordPtr(21, (key), (_val))
#define GetPos(key, deflt)   \
		GetCoordPtr(21, (key), (deflt))
#define SetArrayDefs(key, _add, _replace)   \
		SetDefTableKeyList(22, (key), (_add), (_replace))
#define ResetArrayDefs(key, _val)   \
		ResetDefTableKeyList(22, (key), (_val))
#define GetArrayDefs(key, deflt)   \
		GetDefTableKeyList(22, (key), (deflt))
#define SetBoundCnt(key, _add, _replace)   \
		Setint(23, (key), (_add), (_replace))
#define ResetBoundCnt(key, _val)   \
		Resetint(23, (key), (_val))
#define GetBoundCnt(key, deflt)   \
		Getint(23, (key), (deflt))
#define SetBoundsMark(key, _add, _replace)   \
		SetDefTableKey(24, (key), (_add), (_replace))
#define ResetBoundsMark(key, _val)   \
		ResetDefTableKey(24, (key), (_val))
#define GetBoundsMark(key, deflt)   \
		GetDefTableKey(24, (key), (deflt))
#define SetAsetMark(key, _add, _replace)   \
		SetDefTableKey(25, (key), (_add), (_replace))
#define ResetAsetMark(key, _val)   \
		ResetDefTableKey(25, (key), (_val))
#define GetAsetMark(key, deflt)   \
		GetDefTableKey(25, (key), (deflt))
#define SetAgetMark(key, _add, _replace)   \
		SetDefTableKey(26, (key), (_add), (_replace))
#define ResetAgetMark(key, _val)   \
		ResetDefTableKey(26, (key), (_val))
#define GetAgetMark(key, deflt)   \
		GetDefTableKey(26, (key), (deflt))
#define SetBindings(key, _add, _replace)   \
		SetDefTableKeyList(27, (key), (_add), (_replace))
#define ResetBindings(key, _val)   \
		ResetDefTableKeyList(27, (key), (_val))
#define GetBindings(key, deflt)   \
		GetDefTableKeyList(27, (key), (deflt))
#define SetIsClassParam(key, _add, _replace)   \
		Setint(28, (key), (_add), (_replace))
#define ResetIsClassParam(key, _val)   \
		Resetint(28, (key), (_val))
#define GetIsClassParam(key, deflt)   \
		Getint(28, (key), (deflt))
#define SetClassParams(key, _add, _replace)   \
		SetDefTableKeyList(29, (key), (_add), (_replace))
#define ResetClassParams(key, _val)   \
		ResetDefTableKeyList(29, (key), (_val))
#define GetClassParams(key, deflt)   \
		GetDefTableKeyList(29, (key), (deflt))
#define SetOverrides(key, _add, _replace)   \
		SetOvrPtrList(30, (key), (_add), (_replace))
#define ResetOverrides(key, _val)   \
		ResetOvrPtrList(30, (key), (_val))
#define GetOverrides(key, deflt)   \
		GetOvrPtrList(30, (key), (deflt))
#define SetOvrReady(key, _add, _replace)   \
		Setint(31, (key), (_add), (_replace))
#define ResetOvrReady(key, _val)   \
		Resetint(31, (key), (_val))
#define GetOvrReady(key, deflt)   \
		Getint(31, (key), (deflt))
#define SetReaderMethod(key, _add, _replace)   \
		SetDefTableKey(32, (key), (_add), (_replace))
#define ResetReaderMethod(key, _val)   \
		ResetDefTableKey(32, (key), (_val))
#define GetReaderMethod(key, deflt)   \
		GetDefTableKey(32, (key), (deflt))
#define SetWriterMethod(key, _add, _replace)   \
		SetDefTableKey(33, (key), (_add), (_replace))
#define ResetWriterMethod(key, _val)   \
		ResetDefTableKey(33, (key), (_val))
#define GetWriterMethod(key, deflt)   \
		GetDefTableKey(33, (key), (deflt))
#define SetPublicAttrList(key, _add, _replace)   \
		SetDefTableKeyList(34, (key), (_add), (_replace))
#define ResetPublicAttrList(key, _val)   \
		ResetDefTableKeyList(34, (key), (_val))
#define GetPublicAttrList(key, deflt)   \
		GetDefTableKeyList(34, (key), (deflt))
#define SetBoundKeys(key, _add, _replace)   \
		SetDefTableKeyList(35, (key), (_add), (_replace))
#define ResetBoundKeys(key, _val)   \
		ResetDefTableKeyList(35, (key), (_val))
#define GetBoundKeys(key, deflt)   \
		GetDefTableKeyList(35, (key), (deflt))
#define SetAgetKey(key, _add, _replace)   \
		SetDefTableKey(36, (key), (_add), (_replace))
#define ResetAgetKey(key, _val)   \
		ResetDefTableKey(36, (key), (_val))
#define GetAgetKey(key, deflt)   \
		GetDefTableKey(36, (key), (deflt))
#define SetAsetKey(key, _add, _replace)   \
		SetDefTableKey(37, (key), (_add), (_replace))
#define ResetAsetKey(key, _val)   \
		ResetDefTableKey(37, (key), (_val))
#define GetAsetKey(key, deflt)   \
		GetDefTableKey(37, (key), (deflt))
#define SetElementType(key, _add, _replace)   \
		SetSTPtr(38, (key), (_add), (_replace))
#define ResetElementType(key, _val)   \
		ResetSTPtr(38, (key), (_val))
#define GetElementType(key, deflt)   \
		GetSTPtr(38, (key), (deflt))
#define SetHasInitMethod(key, _add, _replace)   \
		Setint(39, (key), (_add), (_replace))
#define ResetHasInitMethod(key, _val)   \
		Resetint(39, (key), (_val))
#define GetHasInitMethod(key, deflt)   \
		Getint(39, (key), (deflt))
#define SetFeatureOf(key, _add, _replace)   \
		SetDefTableKey(40, (key), (_add), (_replace))
#define ResetFeatureOf(key, _val)   \
		ResetDefTableKey(40, (key), (_val))
#define GetFeatureOf(key, deflt)   \
		GetDefTableKey(40, (key), (deflt))
#define SetSharedStatus(key, _add, _replace)   \
		Setint(41, (key), (_add), (_replace))
#define ResetSharedStatus(key, _val)   \
		Resetint(41, (key), (_val))
#define GetSharedStatus(key, deflt)   \
		Getint(41, (key), (deflt))
#define SetLocalCalled(key, _add, _replace)   \
		SetDefTableKeyList(42, (key), (_add), (_replace))
#define ResetLocalCalled(key, _val)   \
		ResetDefTableKeyList(42, (key), (_val))
#define GetLocalCalled(key, deflt)   \
		GetDefTableKeyList(42, (key), (deflt))
#define SetConstValue(key, _add, _replace)   \
		SetCTValuePtr(43, (key), (_add), (_replace))
#define ResetConstValue(key, _val)   \
		ResetCTValuePtr(43, (key), (_val))
#define GetConstValue(key, deflt)   \
		GetCTValuePtr(43, (key), (deflt))
#define KResetParams(key, val)   \
		KResetDefTableKeyList(44, (key), (val))
#define SetParams(key, _add, _replace)   \
		SetDefTableKeyList(44, (key), (_add), (_replace))
#define ResetParams(key, _val)   \
		ResetDefTableKeyList(44, (key), (_val))
#define GetParams(key, deflt)   \
		GetDefTableKeyList(44, (key), (deflt))
#define KResetResultType(key, val)   \
		KResetSTPtr(45, (key), (val))
#define SetResultType(key, _add, _replace)   \
		SetSTPtr(45, (key), (_add), (_replace))
#define ResetResultType(key, _val)   \
		ResetSTPtr(45, (key), (_val))
#define GetResultType(key, deflt)   \
		GetSTPtr(45, (key), (deflt))
#define SetIsLike(key, _add, _replace)   \
		SetDefTableKeyList(46, (key), (_add), (_replace))
#define ResetIsLike(key, _val)   \
		ResetDefTableKeyList(46, (key), (_val))
#define GetIsLike(key, deflt)   \
		GetDefTableKeyList(46, (key), (deflt))
#define SetMustConformTo(key, _add, _replace)   \
		SetDefTableKeyList(47, (key), (_add), (_replace))
#define ResetMustConformTo(key, _val)   \
		ResetDefTableKeyList(47, (key), (_val))
#define GetMustConformTo(key, deflt)   \
		GetDefTableKeyList(47, (key), (deflt))
#define SetConformsTo(key, _add, _replace)   \
		SetDefTableKeyList(48, (key), (_add), (_replace))
#define ResetConformsTo(key, _val)   \
		ResetDefTableKeyList(48, (key), (_val))
#define GetConformsTo(key, deflt)   \
		GetDefTableKeyList(48, (key), (deflt))
#define SetTDGReady(key, _add, _replace)   \
		Setint(49, (key), (_add), (_replace))
#define ResetTDGReady(key, _val)   \
		Resetint(49, (key), (_val))
#define GetTDGReady(key, deflt)   \
		Getint(49, (key), (deflt))
#define KResetType(key, val)   \
		KResetSTPtr(50, (key), (val))
#define SetType(key, _add, _replace)   \
		SetSTPtr(50, (key), (_add), (_replace))
#define ResetType(key, _val)   \
		ResetSTPtr(50, (key), (_val))
#define GetType(key, deflt)   \
		GetSTPtr(50, (key), (deflt))
#define KResetPolyType(key, val)   \
		KResetSTPtr(51, (key), (val))
#define SetPolyType(key, _add, _replace)   \
		SetSTPtr(51, (key), (_add), (_replace))
#define ResetPolyType(key, _val)   \
		ResetSTPtr(51, (key), (_val))
#define GetPolyType(key, deflt)   \
		GetSTPtr(51, (key), (deflt))
#define SetMonoType(key, _add, _replace)   \
		SetSTPtr(52, (key), (_add), (_replace))
#define ResetMonoType(key, _val)   \
		ResetSTPtr(52, (key), (_val))
#define GetMonoType(key, deflt)   \
		GetSTPtr(52, (key), (deflt))
#define SetUsedPolymorph(key, _add, _replace)   \
		Setint(53, (key), (_add), (_replace))
#define ResetUsedPolymorph(key, _val)   \
		Resetint(53, (key), (_val))
#define GetUsedPolymorph(key, deflt)   \
		Getint(53, (key), (deflt))
#define IntersectSemKindSet(key, val)   \
		IntersectIntSet(54, (key), (val))
#define UnionSemKindSet(key, val)   \
		UnionIntSet(54, (key), (val))
#define InsertSemKindSet(key, val)   \
		InsertIntSet(54, (key), (val))
#define SetSemKindSet(key, _add, _replace)   \
		SetIntSet(54, (key), (_add), (_replace))
#define ResetSemKindSet(key, _val)   \
		ResetIntSet(54, (key), (_val))
#define GetSemKindSet(key, deflt)   \
		GetIntSet(54, (key), (deflt))
#define IntersectKindSet(key, val)   \
		IntersectIntSet(55, (key), (val))
#define UnionKindSet(key, val)   \
		UnionIntSet(55, (key), (val))
#define InsertKindSet(key, val)   \
		InsertIntSet(55, (key), (val))
#define SetKindSet(key, _add, _replace)   \
		SetIntSet(55, (key), (_add), (_replace))
#define ResetKindSet(key, _val)   \
		ResetIntSet(55, (key), (_val))
#define GetKindSet(key, deflt)   \
		GetIntSet(55, (key), (deflt))
#define SetInhScope(key, _add, _replace)   \
		SetEnvironment(56, (key), (_add), (_replace))
#define ResetInhScope(key, _val)   \
		ResetEnvironment(56, (key), (_val))
#define GetInhScope(key, deflt)   \
		GetEnvironment(56, (key), (deflt))
#define SetCnt(key, _add, _replace)   \
		Setint(57, (key), (_add), (_replace))
#define ResetCnt(key, _val)   \
		Resetint(57, (key), (_val))
#define GetCnt(key, deflt)   \
		Getint(57, (key), (deflt))
#define SetGetFirstOcc(key, init, reset)   \
		SetGetint(58, (key), (init), (reset))
#define SetFirstOcc(key, _add, _replace)   \
		Setint(58, (key), (_add), (_replace))
#define ResetFirstOcc(key, _val)   \
		Resetint(58, (key), (_val))
#define GetFirstOcc(key, deflt)   \
		Getint(58, (key), (deflt))
#define SetSemScope(key, _add, _replace)   \
		SetEnvironment(59, (key), (_add), (_replace))
#define ResetSemScope(key, _val)   \
		ResetEnvironment(59, (key), (_val))
#define GetSemScope(key, deflt)   \
		GetEnvironment(59, (key), (deflt))

extern struct PropList PDLk[];


extern DefTableKey CloneKey ELI_ARG((DefTableKey key));
/* Clone a definition
 *    On entry-
 *       key=a valid definition
 *    On exit-
 *       CloneKey=Unique definition with the same properties
 *                and property values as key
 ***/

#ifdef MONITOR
extern void pdl_mon_properties ELI_ARG((DefTableKey));
#endif

#endif
