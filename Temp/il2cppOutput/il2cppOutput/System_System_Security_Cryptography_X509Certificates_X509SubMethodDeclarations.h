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

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_t969;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t940;
// System.Byte[]
struct ByteU5BU5D_t688;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t939;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Sub_0.h"
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m4953 (X509SubjectKeyIdentifierExtension_t969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m4954 (X509SubjectKeyIdentifierExtension_t969 * __this, AsnEncodedData_t940 * ___encodedSubjectKeyIdentifier, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m4955 (X509SubjectKeyIdentifierExtension_t969 * __this, ByteU5BU5D_t688* ___subjectKeyIdentifier, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m4956 (X509SubjectKeyIdentifierExtension_t969 * __this, String_t* ___subjectKeyIdentifier, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m4957 (X509SubjectKeyIdentifierExtension_t969 * __this, PublicKey_t939 * ___key, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m4958 (X509SubjectKeyIdentifierExtension_t969 * __this, PublicKey_t939 * ___key, int32_t ___algorithm, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
extern "C" String_t* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_m4959 (X509SubjectKeyIdentifierExtension_t969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509SubjectKeyIdentifierExtension_CopyFrom_m4960 (X509SubjectKeyIdentifierExtension_t969 * __this, AsnEncodedData_t940 * ___encodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
extern "C" uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m4961 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
extern "C" uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_m4962 (Object_t * __this /* static, unused */, uint16_t ___c1, uint16_t ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
extern "C" ByteU5BU5D_t688* X509SubjectKeyIdentifierExtension_FromHex_m4963 (Object_t * __this /* static, unused */, String_t* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
extern "C" int32_t X509SubjectKeyIdentifierExtension_Decode_m4964 (X509SubjectKeyIdentifierExtension_t969 * __this, ByteU5BU5D_t688* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
extern "C" ByteU5BU5D_t688* X509SubjectKeyIdentifierExtension_Encode_m4965 (X509SubjectKeyIdentifierExtension_t969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
extern "C" String_t* X509SubjectKeyIdentifierExtension_ToString_m4966 (X509SubjectKeyIdentifierExtension_t969 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
