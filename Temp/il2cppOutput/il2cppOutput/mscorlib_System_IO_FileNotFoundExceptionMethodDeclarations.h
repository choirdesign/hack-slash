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

// System.IO.FileNotFoundException
struct FileNotFoundException_t1236;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t647;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.FileNotFoundException::.ctor()
extern "C" void FileNotFoundException__ctor_m7554 (FileNotFoundException_t1236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::.ctor(System.String,System.String)
extern "C" void FileNotFoundException__ctor_m7555 (FileNotFoundException_t1236 * __this, String_t* ___message, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileNotFoundException__ctor_m7556 (FileNotFoundException_t1236 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileNotFoundException::get_Message()
extern "C" String_t* FileNotFoundException_get_Message_m7557 (FileNotFoundException_t1236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileNotFoundException_GetObjectData_m7558 (FileNotFoundException_t1236 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileNotFoundException::ToString()
extern "C" String_t* FileNotFoundException_ToString_m7559 (FileNotFoundException_t1236 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
