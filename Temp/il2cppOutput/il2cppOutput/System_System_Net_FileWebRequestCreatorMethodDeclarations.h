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

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t909;
// System.Net.WebRequest
struct WebRequest_t873;
// System.Uri
struct Uri_t868;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m4613 (FileWebRequestCreator_t909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t873 * FileWebRequestCreator_Create_m4614 (FileWebRequestCreator_t909 * __this, Uri_t868 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
