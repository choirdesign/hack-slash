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

// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t1687;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t631;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnauthorizedAccessException::.ctor()
extern "C" void UnauthorizedAccessException__ctor_m10552 (UnauthorizedAccessException_t1687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
extern "C" void UnauthorizedAccessException__ctor_m10553 (UnauthorizedAccessException_t1687 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnauthorizedAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnauthorizedAccessException__ctor_m10554 (UnauthorizedAccessException_t1687 * __this, SerializationInfo_t631 * ___info, StreamingContext_t632  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
