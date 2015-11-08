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

// System.Attribute
struct Attribute_t464;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t670;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Attribute::.ctor()
extern "C" void Attribute__ctor_m3414 (Attribute_t464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::CheckParameters(System.Object,System.Type)
extern "C" void Attribute_CheckParameters_m5557 (Object_t * __this /* static, unused */, Object_t * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
extern "C" Attribute_t464 * Attribute_GetCustomAttribute_m5558 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C" Attribute_t464 * Attribute_GetCustomAttribute_m5559 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Attribute::GetHashCode()
extern "C" int32_t Attribute_GetHashCode_m3482 (Attribute_t464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type)
extern "C" bool Attribute_IsDefined_m5560 (Object_t * __this /* static, unused */, ParameterInfo_t670 * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
extern "C" bool Attribute_IsDefined_m5561 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C" bool Attribute_IsDefined_m5562 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type,System.Boolean)
extern "C" bool Attribute_IsDefined_m5563 (Object_t * __this /* static, unused */, ParameterInfo_t670 * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::Equals(System.Object)
extern "C" bool Attribute_Equals_m5564 (Attribute_t464 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
