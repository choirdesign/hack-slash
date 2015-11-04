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

// System.ObjectDisposedException
struct ObjectDisposedException_t692;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t629;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ObjectDisposedException::.ctor(System.String)
extern "C" void ObjectDisposedException__ctor_m3485 (ObjectDisposedException_t692 * __this, String_t* ___objectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
extern "C" void ObjectDisposedException__ctor_m10432 (ObjectDisposedException_t692 * __this, String_t* ___objectName, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ObjectDisposedException__ctor_m10433 (ObjectDisposedException_t692 * __this, SerializationInfo_t629 * ___info, StreamingContext_t630  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ObjectDisposedException::get_Message()
extern "C" String_t* ObjectDisposedException_get_Message_m10434 (ObjectDisposedException_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ObjectDisposedException_GetObjectData_m10435 (ObjectDisposedException_t692 * __this, SerializationInfo_t629 * ___info, StreamingContext_t630  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
