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

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1257;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1259;
// System.Type[]
struct TypeU5BU5D_t639;
// System.Exception
struct Exception_t85;
// System.Reflection.AssemblyName
struct AssemblyName_t1304;

#include "codegen/il2cpp-codegen.h"

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m7788 (AssemblyBuilder_t1257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1259* AssemblyBuilder_GetModulesInternal_m7789 (AssemblyBuilder_t1257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t639* AssemblyBuilder_GetTypes_m7790 (AssemblyBuilder_t1257 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m7791 (AssemblyBuilder_t1257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t85 * AssemblyBuilder_not_supported_m7792 (AssemblyBuilder_t1257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1304 * AssemblyBuilder_UnprotectedGetName_m7793 (AssemblyBuilder_t1257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
