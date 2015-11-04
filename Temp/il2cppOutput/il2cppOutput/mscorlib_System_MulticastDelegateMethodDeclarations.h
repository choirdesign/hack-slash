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

// System.MulticastDelegate
struct MulticastDelegate_t207;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t629;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1718;
// System.Delegate
struct Delegate_t363;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m6062 (MulticastDelegate_t207 * __this, SerializationInfo_t629 * ___info, StreamingContext_t630  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m6063 (MulticastDelegate_t207 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m6064 (MulticastDelegate_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1718* MulticastDelegate_GetInvocationList_m6065 (MulticastDelegate_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t363 * MulticastDelegate_CombineImpl_m6066 (MulticastDelegate_t207 * __this, Delegate_t363 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m6067 (MulticastDelegate_t207 * __this, MulticastDelegate_t207 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t207 * MulticastDelegate_KPM_m6068 (Object_t * __this /* static, unused */, MulticastDelegate_t207 * ___needle, MulticastDelegate_t207 * ___haystack, MulticastDelegate_t207 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t363 * MulticastDelegate_RemoveImpl_m6069 (MulticastDelegate_t207 * __this, Delegate_t363 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
