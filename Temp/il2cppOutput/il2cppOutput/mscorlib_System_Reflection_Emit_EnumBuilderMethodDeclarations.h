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

// System.Reflection.Emit.EnumBuilder
struct EnumBuilder_t1271;
// System.Reflection.Assembly
struct Assembly_t1062;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t1282;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t683;
// System.Reflection.Binder
struct Binder_t667;
// System.Type[]
struct TypeU5BU5D_t645;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t668;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1741;
// System.Object[]
struct ObjectU5BU5D_t82;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1742;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1334;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t669;
// System.String[]
struct StringU5BU5D_t14;
// System.Exception
struct Exception_t92;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_System_Reflection_TypeAttributes.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
extern "C" Assembly_t1062 * EnumBuilder_get_Assembly_m7867 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
extern "C" String_t* EnumBuilder_get_AssemblyQualifiedName_m7868 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
extern "C" Type_t * EnumBuilder_get_BaseType_m7869 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
extern "C" Type_t * EnumBuilder_get_DeclaringType_m7870 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
extern "C" String_t* EnumBuilder_get_FullName_m7871 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
extern "C" Module_t1282 * EnumBuilder_get_Module_m7872 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
extern "C" String_t* EnumBuilder_get_Name_m7873 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
extern "C" String_t* EnumBuilder_get_Namespace_m7874 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
extern "C" Type_t * EnumBuilder_get_ReflectedType_m7875 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1081  EnumBuilder_get_TypeHandle_m7876 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
extern "C" Type_t * EnumBuilder_get_UnderlyingSystemType_m7877 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
extern "C" int32_t EnumBuilder_GetAttributeFlagsImpl_m7878 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t683 * EnumBuilder_GetConstructorImpl_m7879 (EnumBuilder_t1271 * __this, int32_t ___bindingAttr, Binder_t667 * ___binder, int32_t ___callConvention, TypeU5BU5D_t645* ___types, ParameterModifierU5BU5D_t668* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1741* EnumBuilder_GetConstructors_m7880 (EnumBuilder_t1271 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t82* EnumBuilder_GetCustomAttributes_m7881 (EnumBuilder_t1271 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t82* EnumBuilder_GetCustomAttributes_m7882 (EnumBuilder_t1271 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
extern "C" Type_t * EnumBuilder_GetElementType_m7883 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * EnumBuilder_GetEvent_m7884 (EnumBuilder_t1271 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * EnumBuilder_GetField_m7885 (EnumBuilder_t1271 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.EnumBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t1742* EnumBuilder_GetFields_m7886 (EnumBuilder_t1271 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t645* EnumBuilder_GetInterfaces_m7887 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * EnumBuilder_GetMethodImpl_m7888 (EnumBuilder_t1271 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t667 * ___binder, int32_t ___callConvention, TypeU5BU5D_t645* ___types, ParameterModifierU5BU5D_t668* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1334* EnumBuilder_GetMethods_m7889 (EnumBuilder_t1271 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * EnumBuilder_GetPropertyImpl_m7890 (EnumBuilder_t1271 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t667 * ___binder, Type_t * ___returnType, TypeU5BU5D_t645* ___types, ParameterModifierU5BU5D_t668* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
extern "C" bool EnumBuilder_HasElementTypeImpl_m7891 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * EnumBuilder_InvokeMember_m7892 (EnumBuilder_t1271 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t667 * ___binder, Object_t * ___target, ObjectU5BU5D_t82* ___args, ParameterModifierU5BU5D_t668* ___modifiers, CultureInfo_t669 * ___culture, StringU5BU5D_t14* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
extern "C" bool EnumBuilder_IsArrayImpl_m7893 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
extern "C" bool EnumBuilder_IsByRefImpl_m7894 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
extern "C" bool EnumBuilder_IsPointerImpl_m7895 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
extern "C" bool EnumBuilder_IsPrimitiveImpl_m7896 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
extern "C" bool EnumBuilder_IsValueTypeImpl_m7897 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool EnumBuilder_IsDefined_m7898 (EnumBuilder_t1271 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
extern "C" Exception_t92 * EnumBuilder_CreateNotSupportedException_m7899 (EnumBuilder_t1271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
