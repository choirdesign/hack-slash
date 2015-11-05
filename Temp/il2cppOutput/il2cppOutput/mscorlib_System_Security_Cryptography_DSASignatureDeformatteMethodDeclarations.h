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

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t856;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t827;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t678;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
extern "C" void DSASignatureDeformatter__ctor_m9046 (DSASignatureDeformatter_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter__ctor_m4452 (DSASignatureDeformatter_t856 * __this, AsymmetricAlgorithm_t827 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void DSASignatureDeformatter_SetHashAlgorithm_m9047 (DSASignatureDeformatter_t856 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter_SetKey_m9048 (DSASignatureDeformatter_t856 * __this, AsymmetricAlgorithm_t827 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSASignatureDeformatter_VerifySignature_m9049 (DSASignatureDeformatter_t856 * __this, ByteU5BU5D_t678* ___rgbHash, ByteU5BU5D_t678* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
