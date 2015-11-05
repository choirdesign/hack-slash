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

// Mono.Security.X509.PKCS12
struct PKCS12_t732;
// System.Byte[]
struct ByteU5BU5D_t678;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t709;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t733;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t675;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t677;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t713;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t723;
// Mono.Security.ASN1
struct ASN1_t708;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t735;
// System.Collections.IDictionary
struct IDictionary_t840;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t712;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
extern "C" void PKCS12__ctor_m3714 (PKCS12_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
extern "C" void PKCS12__ctor_m3715 (PKCS12_t732 * __this, ByteU5BU5D_t678* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
extern "C" void PKCS12__ctor_m3716 (PKCS12_t732 * __this, ByteU5BU5D_t678* ___data, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
extern "C" void PKCS12__cctor_m3717 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
extern "C" void PKCS12_Decode_m3718 (PKCS12_t732 * __this, ByteU5BU5D_t678* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
extern "C" void PKCS12_Finalize_m3719 (PKCS12_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
extern "C" void PKCS12_set_Password_m3720 (PKCS12_t732 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_IterationCount()
extern "C" int32_t PKCS12_get_IterationCount_m3721 (PKCS12_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_IterationCount(System.Int32)
extern "C" void PKCS12_set_IterationCount_m3722 (PKCS12_t732 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.PKCS12::get_Keys()
extern "C" ArrayList_t709 * PKCS12_get_Keys_m3723 (PKCS12_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
extern "C" X509CertificateCollection_t733 * PKCS12_get_Certificates_m3724 (PKCS12_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::get_RNG()
extern "C" RandomNumberGenerator_t675 * PKCS12_get_RNG_m3725 (PKCS12_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS12_Compare_m3726 (PKCS12_t732 * __this, ByteU5BU5D_t678* ___expected, ByteU5BU5D_t678* ___actual, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
extern "C" SymmetricAlgorithm_t677 * PKCS12_GetSymmetricAlgorithm_m3727 (PKCS12_t732 * __this, String_t* ___algorithmOid, ByteU5BU5D_t678* ___salt, int32_t ___iterationCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t678* PKCS12_Decrypt_m3728 (PKCS12_t732 * __this, String_t* ___algorithmOid, ByteU5BU5D_t678* ___salt, int32_t ___iterationCount, ByteU5BU5D_t678* ___encryptedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
extern "C" ByteU5BU5D_t678* PKCS12_Decrypt_m3729 (PKCS12_t732 * __this, EncryptedData_t713 * ___ed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Encrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t678* PKCS12_Encrypt_m3730 (PKCS12_t732 * __this, String_t* ___algorithmOid, ByteU5BU5D_t678* ___salt, int32_t ___iterationCount, ByteU5BU5D_t678* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
extern "C" DSAParameters_t839  PKCS12_GetExistingParameters_m3731 (PKCS12_t732 * __this, bool* ___found, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
extern "C" void PKCS12_AddPrivateKey_m3732 (PKCS12_t732 * __this, PrivateKeyInfo_t723 * ___pki, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
extern "C" void PKCS12_ReadSafeBag_m3733 (PKCS12_t732 * __this, ASN1_t708 * ___safeBag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.PKCS12::CertificateSafeBag(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C" ASN1_t708 * PKCS12_CertificateSafeBag_m3734 (PKCS12_t732 * __this, X509Certificate_t735 * ___x509, Object_t * ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t678* PKCS12_MAC_m3735 (PKCS12_t732 * __this, ByteU5BU5D_t678* ___password, ByteU5BU5D_t678* ___salt, int32_t ___iterations, ByteU5BU5D_t678* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::GetBytes()
extern "C" ByteU5BU5D_t678* PKCS12_GetBytes_m3736 (PKCS12_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.X509.PKCS12::EncryptedContentInfo(Mono.Security.ASN1,System.String)
extern "C" ContentInfo_t712 * PKCS12_EncryptedContentInfo_m3737 (PKCS12_t732 * __this, ASN1_t708 * ___safeBags, String_t* ___algorithmOid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate)
extern "C" void PKCS12_AddCertificate_m3738 (PKCS12_t732 * __this, X509Certificate_t735 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C" void PKCS12_AddCertificate_m3739 (PKCS12_t732 * __this, X509Certificate_t735 * ___cert, Object_t * ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate)
extern "C" void PKCS12_RemoveCertificate_m3740 (PKCS12_t732 * __this, X509Certificate_t735 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C" void PKCS12_RemoveCertificate_m3741 (PKCS12_t732 * __this, X509Certificate_t735 * ___cert, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.X509.PKCS12::Clone()
extern "C" Object_t * PKCS12_Clone_m3742 (PKCS12_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
extern "C" int32_t PKCS12_get_MaximumPasswordLength_m3743 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
