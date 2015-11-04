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

// System.RankException
struct RankException_t1673;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t629;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.RankException::.ctor()
extern "C" void RankException__ctor_m10446 (RankException_t1673 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RankException::.ctor(System.String)
extern "C" void RankException__ctor_m10447 (RankException_t1673 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RankException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RankException__ctor_m10448 (RankException_t1673 * __this, SerializationInfo_t629 * ___info, StreamingContext_t630  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
