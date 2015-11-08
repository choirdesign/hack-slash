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

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t2311;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t218;
// System.AsyncCallback
struct AsyncCallback_t219;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Converter_2__ctor_m17297_gshared (Converter_2_t2311 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Converter_2__ctor_m17297(__this, ___object, ___method, method) (( void (*) (Converter_2_t2311 *, Object_t *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m17297_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" Object_t * Converter_2_Invoke_m17298_gshared (Converter_2_t2311 * __this, Object_t * ___input, const MethodInfo* method);
#define Converter_2_Invoke_m17298(__this, ___input, method) (( Object_t * (*) (Converter_2_t2311 *, Object_t *, const MethodInfo*))Converter_2_Invoke_m17298_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C" Object_t * Converter_2_BeginInvoke_m17299_gshared (Converter_2_t2311 * __this, Object_t * ___input, AsyncCallback_t219 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Converter_2_BeginInvoke_m17299(__this, ___input, ___callback, ___object, method) (( Object_t * (*) (Converter_2_t2311 *, Object_t *, AsyncCallback_t219 *, Object_t *, const MethodInfo*))Converter_2_BeginInvoke_m17299_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Converter_2_EndInvoke_m17300_gshared (Converter_2_t2311 * __this, Object_t * ___result, const MethodInfo* method);
#define Converter_2_EndInvoke_m17300(__this, ___result, method) (( Object_t * (*) (Converter_2_t2311 *, Object_t *, const MethodInfo*))Converter_2_EndInvoke_m17300_gshared)(__this, ___result, method)
