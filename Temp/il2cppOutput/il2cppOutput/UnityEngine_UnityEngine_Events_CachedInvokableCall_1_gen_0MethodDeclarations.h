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

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t674;
// UnityEngine.Object
struct Object_t71;
struct Object_t71_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t75;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3468_gshared (CachedInvokableCall_1_t674 * __this, Object_t71 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3468(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t674 *, Object_t71 *, MethodInfo_t *, int32_t, const MethodInfo*))CachedInvokableCall_1__ctor_m3468_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m16683_gshared (CachedInvokableCall_1_t674 * __this, ObjectU5BU5D_t75* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m16683(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t674 *, ObjectU5BU5D_t75*, const MethodInfo*))CachedInvokableCall_1_Invoke_m16683_gshared)(__this, ___args, method)
