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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t929;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t735;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t930;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t827;
// System.Security.Cryptography.Oid
struct Oid_t931;
// System.Byte[]
struct ByteU5BU5D_t678;
// System.Security.Cryptography.DSA
struct DSA_t736;
// System.Security.Cryptography.RSA
struct RSA_t729;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4738 (PublicKey_t929 * __this, X509Certificate_t735 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t930 * PublicKey_get_EncodedKeyValue_m4739 (PublicKey_t929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t930 * PublicKey_get_EncodedParameters_m4740 (PublicKey_t929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t827 * PublicKey_get_Key_m4741 (PublicKey_t929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t931 * PublicKey_get_Oid_m4742 (PublicKey_t929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t678* PublicKey_GetUnsignedBigInteger_m4743 (Object_t * __this /* static, unused */, ByteU5BU5D_t678* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t736 * PublicKey_DecodeDSA_m4744 (Object_t * __this /* static, unused */, ByteU5BU5D_t678* ___rawPublicKey, ByteU5BU5D_t678* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t729 * PublicKey_DecodeRSA_m4745 (Object_t * __this /* static, unused */, ByteU5BU5D_t678* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
