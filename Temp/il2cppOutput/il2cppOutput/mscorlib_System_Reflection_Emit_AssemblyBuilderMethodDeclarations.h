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

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1245;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1247;
// System.Type[]
struct TypeU5BU5D_t627;
// System.Exception
struct Exception_t75;
// System.Reflection.AssemblyName
struct AssemblyName_t1292;

#include "codegen/il2cpp-codegen.h"

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m7730 (AssemblyBuilder_t1245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1247* AssemblyBuilder_GetModulesInternal_m7731 (AssemblyBuilder_t1245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t627* AssemblyBuilder_GetTypes_m7732 (AssemblyBuilder_t1245 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m7733 (AssemblyBuilder_t1245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t75 * AssemblyBuilder_not_supported_m7734 (AssemblyBuilder_t1245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1292 * AssemblyBuilder_UnprotectedGetName_m7735 (AssemblyBuilder_t1245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
