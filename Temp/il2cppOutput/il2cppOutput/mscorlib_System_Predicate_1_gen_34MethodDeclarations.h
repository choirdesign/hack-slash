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

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2193;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t225;
// System.AsyncCallback
struct AsyncCallback_t226;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15931_gshared (Predicate_1_t2193 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15931(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2193 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15931_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15932_gshared (Predicate_1_t2193 * __this, UICharInfo_t390  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15932(__this, ___obj, method) (( bool (*) (Predicate_1_t2193 *, UICharInfo_t390 , const MethodInfo*))Predicate_1_Invoke_m15932_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15933_gshared (Predicate_1_t2193 * __this, UICharInfo_t390  ___obj, AsyncCallback_t226 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15933(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2193 *, UICharInfo_t390 , AsyncCallback_t226 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15933_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15934_gshared (Predicate_1_t2193 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15934(__this, ___result, method) (( bool (*) (Predicate_1_t2193 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15934_gshared)(__this, ___result, method)
