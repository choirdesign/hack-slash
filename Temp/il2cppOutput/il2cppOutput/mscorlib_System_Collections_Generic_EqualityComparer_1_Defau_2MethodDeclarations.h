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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t2004;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m13433_gshared (DefaultComparer_t2004 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m13433(__this, method) (( void (*) (DefaultComparer_t2004 *, const MethodInfo*))DefaultComparer__ctor_m13433_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m13434_gshared (DefaultComparer_t2004 * __this, UIVertex_t235  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m13434(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2004 *, UIVertex_t235 , const MethodInfo*))DefaultComparer_GetHashCode_m13434_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13435_gshared (DefaultComparer_t2004 * __this, UIVertex_t235  ___x, UIVertex_t235  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m13435(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2004 *, UIVertex_t235 , UIVertex_t235 , const MethodInfo*))DefaultComparer_Equals_m13435_gshared)(__this, ___x, ___y, method)
