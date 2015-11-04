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

// System.UnitySerializationHolder
struct UnitySerializationHolder_t1687;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t629;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1627;
// System.Reflection.Module
struct Module_t1264;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m10543 (UnitySerializationHolder_t1687 * __this, SerializationInfo_t629 * ___info, StreamingContext_t630  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m10544 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t629 * ___info, StreamingContext_t630  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m10545 (Object_t * __this /* static, unused */, DBNull_t1627 * ___instance, SerializationInfo_t629 * ___info, StreamingContext_t630  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m10546 (Object_t * __this /* static, unused */, Module_t1264 * ___instance, SerializationInfo_t629 * ___info, StreamingContext_t630  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m10547 (UnitySerializationHolder_t1687 * __this, SerializationInfo_t629 * ___info, StreamingContext_t630  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m10548 (UnitySerializationHolder_t1687 * __this, StreamingContext_t630  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
