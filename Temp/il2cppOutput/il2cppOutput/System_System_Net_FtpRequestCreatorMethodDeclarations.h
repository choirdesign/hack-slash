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

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t922;
// System.Net.WebRequest
struct WebRequest_t885;
// System.Uri
struct Uri_t880;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m4673 (FtpRequestCreator_t922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t885 * FtpRequestCreator_Create_m4674 (FtpRequestCreator_t922 * __this, Uri_t880 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
