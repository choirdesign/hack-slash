﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m10656_gshared (Nullable_1_t1738 * __this, TimeSpan_t949  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m10656(__this, ___value, method) (( void (*) (Nullable_1_t1738 *, TimeSpan_t949 , const MethodInfo*))Nullable_1__ctor_m10656_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m10657_gshared (Nullable_1_t1738 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m10657(__this, method) (( bool (*) (Nullable_1_t1738 *, const MethodInfo*))Nullable_1_get_HasValue_m10657_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t949  Nullable_1_get_Value_m10658_gshared (Nullable_1_t1738 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m10658(__this, method) (( TimeSpan_t949  (*) (Nullable_1_t1738 *, const MethodInfo*))Nullable_1_get_Value_m10658_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m17976_gshared (Nullable_1_t1738 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m17976(__this, ___other, method) (( bool (*) (Nullable_1_t1738 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m17976_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m17977_gshared (Nullable_1_t1738 * __this, Nullable_1_t1738  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m17977(__this, ___other, method) (( bool (*) (Nullable_1_t1738 *, Nullable_1_t1738 , const MethodInfo*))Nullable_1_Equals_m17977_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m17978_gshared (Nullable_1_t1738 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m17978(__this, method) (( int32_t (*) (Nullable_1_t1738 *, const MethodInfo*))Nullable_1_GetHashCode_m17978_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m17979_gshared (Nullable_1_t1738 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m17979(__this, method) (( String_t* (*) (Nullable_1_t1738 *, const MethodInfo*))Nullable_1_ToString_m17979_gshared)(__this, method)
