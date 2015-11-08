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

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t1794;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m10704_gshared (GenericEqualityComparer_1_t1794 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m10704(__this, method) (( void (*) (GenericEqualityComparer_1_t1794 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m10704_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m18031_gshared (GenericEqualityComparer_1_t1794 * __this, Guid_t1664  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m18031(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1794 *, Guid_t1664 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m18031_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m18032_gshared (GenericEqualityComparer_1_t1794 * __this, Guid_t1664  ___x, Guid_t1664  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m18032(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1794 *, Guid_t1664 , Guid_t1664 , const MethodInfo*))GenericEqualityComparer_1_Equals_m18032_gshared)(__this, ___x, ___y, method)
