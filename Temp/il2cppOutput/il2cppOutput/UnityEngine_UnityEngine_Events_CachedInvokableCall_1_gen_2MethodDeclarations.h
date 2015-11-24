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

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct CachedInvokableCall_1_t682;
// UnityEngine.Object
struct Object_t78;
struct Object_t78_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t82;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3517_gshared (CachedInvokableCall_1_t682 * __this, Object_t78 * ___target, MethodInfo_t * ___theFunction, bool ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3517(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t682 *, Object_t78 *, MethodInfo_t *, bool, const MethodInfo*))CachedInvokableCall_1__ctor_m3517_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m16736_gshared (CachedInvokableCall_1_t682 * __this, ObjectU5BU5D_t82* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m16736(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t682 *, ObjectU5BU5D_t82*, const MethodInfo*))CachedInvokableCall_1_Invoke_m16736_gshared)(__this, ___args, method)
