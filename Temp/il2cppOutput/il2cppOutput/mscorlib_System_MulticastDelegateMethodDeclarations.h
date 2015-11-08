#pragma once

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
struct MulticastDelegate_t217;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t641;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1730;
// System.Delegate
struct Delegate_t372;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m6120 (MulticastDelegate_t217 * __this, SerializationInfo_t641 * ___info, StreamingContext_t642  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m6121 (MulticastDelegate_t217 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m6122 (MulticastDelegate_t217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1730* MulticastDelegate_GetInvocationList_m6123 (MulticastDelegate_t217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t372 * MulticastDelegate_CombineImpl_m6124 (MulticastDelegate_t217 * __this, Delegate_t372 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m6125 (MulticastDelegate_t217 * __this, MulticastDelegate_t217 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t217 * MulticastDelegate_KPM_m6126 (Object_t * __this /* static, unused */, MulticastDelegate_t217 * ___needle, MulticastDelegate_t217 * ___haystack, MulticastDelegate_t217 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t372 * MulticastDelegate_RemoveImpl_m6127 (MulticastDelegate_t217 * __this, Delegate_t372 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
