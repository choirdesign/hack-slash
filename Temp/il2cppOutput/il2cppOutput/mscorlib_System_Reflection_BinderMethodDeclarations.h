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

// System.Reflection.Binder
struct Binder_t649;
// System.Object[]
struct ObjectU5BU5D_t61;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t657;
// System.Globalization.CultureInfo
struct CultureInfo_t651;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t656;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1725;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m8055 (Binder_t649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m8056 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t649 * Binder_get_DefaultBinder_m8057 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m8058 (Object_t * __this /* static, unused */, Binder_t649 * ___binder, ObjectU5BU5D_t61* ___args, ParameterInfoU5BU5D_t657* ___pinfo, CultureInfo_t651 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m8059 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t656 * Binder_FindMostDerivedMatch_m8060 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1725* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
