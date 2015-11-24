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

// System.Security.Cryptography.CryptographicUnexpectedOperationException
struct CryptographicUnexpectedOperationException_t878;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t647;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.Cryptography.CryptographicUnexpectedOperationException::.ctor()
extern "C" void CryptographicUnexpectedOperationException__ctor_m9094 (CryptographicUnexpectedOperationException_t878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicUnexpectedOperationException::.ctor(System.String)
extern "C" void CryptographicUnexpectedOperationException__ctor_m4564 (CryptographicUnexpectedOperationException_t878 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicUnexpectedOperationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CryptographicUnexpectedOperationException__ctor_m9095 (CryptographicUnexpectedOperationException_t878 * __this, SerializationInfo_t647 * ___info, StreamingContext_t648  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
