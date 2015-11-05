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

// System.IO.IOException
struct IOException_t878;
// System.String
struct String_t;
// System.Exception
struct Exception_t78;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t631;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.IOException::.ctor()
extern "C" void IOException__ctor_m7525 (IOException_t878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String)
extern "C" void IOException__ctor_m7526 (IOException_t878 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
extern "C" void IOException__ctor_m4510 (IOException_t878 * __this, String_t* ___message, Exception_t78 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void IOException__ctor_m7527 (IOException_t878 * __this, SerializationInfo_t631 * ___info, StreamingContext_t632  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String,System.Int32)
extern "C" void IOException__ctor_m7528 (IOException_t878 * __this, String_t* ___message, int32_t ___hresult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
