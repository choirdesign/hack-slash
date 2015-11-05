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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t1852;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m11468_gshared (DefaultComparer_t1852 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11468(__this, method) (( void (*) (DefaultComparer_t1852 *, const MethodInfo*))DefaultComparer__ctor_m11468_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m11469_gshared (DefaultComparer_t1852 * __this, RaycastResult_t120  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11469(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1852 *, RaycastResult_t120 , const MethodInfo*))DefaultComparer_GetHashCode_m11469_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11470_gshared (DefaultComparer_t1852 * __this, RaycastResult_t120  ___x, RaycastResult_t120  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m11470(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1852 *, RaycastResult_t120 , RaycastResult_t120 , const MethodInfo*))DefaultComparer_Equals_m11470_gshared)(__this, ___x, ___y, method)
