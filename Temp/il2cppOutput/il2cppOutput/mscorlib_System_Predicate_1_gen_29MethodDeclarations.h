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

// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t2098;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t211;
// System.AsyncCallback
struct AsyncCallback_t212;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14973_gshared (Predicate_1_t2098 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m14973(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2098 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14973_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14974_gshared (Predicate_1_t2098 * __this, Vector2_t57  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m14974(__this, ___obj, method) (( bool (*) (Predicate_1_t2098 *, Vector2_t57 , const MethodInfo*))Predicate_1_Invoke_m14974_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m14975_gshared (Predicate_1_t2098 * __this, Vector2_t57  ___obj, AsyncCallback_t212 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m14975(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2098 *, Vector2_t57 , AsyncCallback_t212 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14975_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14976_gshared (Predicate_1_t2098 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m14976(__this, ___result, method) (( bool (*) (Predicate_1_t2098 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14976_gshared)(__this, ___result, method)
