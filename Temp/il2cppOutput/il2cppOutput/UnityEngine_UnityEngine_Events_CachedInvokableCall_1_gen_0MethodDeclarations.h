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
struct CachedInvokableCall_1_t664;
// UnityEngine.Object
struct Object_t66;
struct Object_t66_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t63;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3424_gshared (CachedInvokableCall_1_t664 * __this, Object_t66 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3424(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t664 *, Object_t66 *, MethodInfo_t *, int32_t, const MethodInfo*))CachedInvokableCall_1__ctor_m3424_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m16639_gshared (CachedInvokableCall_1_t664 * __this, ObjectU5BU5D_t63* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m16639(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t664 *, ObjectU5BU5D_t63*, const MethodInfo*))CachedInvokableCall_1_Invoke_m16639_gshared)(__this, ___args, method)
