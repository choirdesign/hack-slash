﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t622;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t616;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t82;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern "C" void InvokableCallList__ctor_m3397 (InvokableCallList_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddPersistentInvokableCall_m3398 (InvokableCallList_t622 * __this, BaseInvokableCall_t616 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddListener_m3399 (InvokableCallList_t622 * __this, BaseInvokableCall_t616 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCallList_RemoveListener_m3400 (InvokableCallList_t622 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m3401 (InvokableCallList_t622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern "C" void InvokableCallList_Invoke_m3402 (InvokableCallList_t622 * __this, ObjectU5BU5D_t82* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;