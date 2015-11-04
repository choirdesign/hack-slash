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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>
struct DefaultComparer_t2106;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::.ctor()
extern "C" void DefaultComparer__ctor_m15106_gshared (DefaultComparer_t2106 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15106(__this, method) (( void (*) (DefaultComparer_t2106 *, const MethodInfo*))DefaultComparer__ctor_m15106_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15107_gshared (DefaultComparer_t2106 * __this, Vector4_t296  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15107(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2106 *, Vector4_t296 , const MethodInfo*))DefaultComparer_GetHashCode_m15107_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15108_gshared (DefaultComparer_t2106 * __this, Vector4_t296  ___x, Vector4_t296  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15108(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2106 *, Vector4_t296 , Vector4_t296 , const MethodInfo*))DefaultComparer_Equals_m15108_gshared)(__this, ___x, ___y, method)
