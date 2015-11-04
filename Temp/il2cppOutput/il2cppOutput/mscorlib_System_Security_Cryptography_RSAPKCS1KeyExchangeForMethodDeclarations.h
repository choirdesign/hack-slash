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

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t878;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t825;
// System.Byte[]
struct ByteU5BU5D_t676;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter__ctor_m4506 (RSAPKCS1KeyExchangeFormatter_t878 * __this, AsymmetricAlgorithm_t825 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t676* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m9169 (RSAPKCS1KeyExchangeFormatter_t878 * __this, ByteU5BU5D_t676* ___rgbData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m9170 (RSAPKCS1KeyExchangeFormatter_t878 * __this, AsymmetricAlgorithm_t825 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
