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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2387;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m18000_gshared (DefaultComparer_t2387 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18000(__this, method) (( void (*) (DefaultComparer_t2387 *, const MethodInfo*))DefaultComparer__ctor_m18000_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18001_gshared (DefaultComparer_t2387 * __this, DateTime_t537  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m18001(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2387 *, DateTime_t537 , const MethodInfo*))DefaultComparer_GetHashCode_m18001_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18002_gshared (DefaultComparer_t2387 * __this, DateTime_t537  ___x, DateTime_t537  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m18002(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2387 *, DateTime_t537 , DateTime_t537 , const MethodInfo*))DefaultComparer_Equals_m18002_gshared)(__this, ___x, ___y, method)
