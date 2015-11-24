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

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t1347;
// System.Exception
struct Exception_t92;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t647;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C" void TargetInvocationException__ctor_m8399 (TargetInvocationException_t1347 * __this, Exception_t92 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetInvocationException__ctor_m8400 (TargetInvocationException_t1347 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
