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

// System.Collections.Comparer
struct Comparer_t1169;
// System.Globalization.CultureInfo
struct CultureInfo_t651;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t629;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Comparer::.ctor()
extern "C" void Comparer__ctor_m7042 (Comparer_t1169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Comparer::.ctor(System.Globalization.CultureInfo)
extern "C" void Comparer__ctor_m7043 (Comparer_t1169 * __this, CultureInfo_t651 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Comparer::.cctor()
extern "C" void Comparer__cctor_m7044 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Comparer::Compare(System.Object,System.Object)
extern "C" int32_t Comparer_Compare_m7045 (Comparer_t1169 * __this, Object_t * ___a, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Comparer::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Comparer_GetObjectData_m7046 (Comparer_t1169 * __this, SerializationInfo_t629 * ___info, StreamingContext_t630  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
