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

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t2239;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t63;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_3__ctor_m16622_gshared (InvokableCall_3_t2239 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_3__ctor_m16622(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_3_t2239 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_3__ctor_m16622_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_3_Invoke_m16623_gshared (InvokableCall_3_t2239 * __this, ObjectU5BU5D_t63* ___args, const MethodInfo* method);
#define InvokableCall_3_Invoke_m16623(__this, ___args, method) (( void (*) (InvokableCall_3_t2239 *, ObjectU5BU5D_t63*, const MethodInfo*))InvokableCall_3_Invoke_m16623_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_3_Find_m16624_gshared (InvokableCall_3_t2239 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_3_Find_m16624(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_3_t2239 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_3_Find_m16624_gshared)(__this, ___targetObj, ___method, method)
