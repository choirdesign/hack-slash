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

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t723;
// Mono.Security.ASN1
struct ASN1_t718;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t722;
// System.Byte[]
struct ByteU5BU5D_t688;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m3666 (EncryptedData_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m3667 (EncryptedData_t723 * __this, ASN1_t718 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t722 * EncryptedData_get_EncryptionAlgorithm_m3668 (EncryptedData_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t688* EncryptedData_get_EncryptedContent_m3669 (EncryptedData_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
