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

// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct X509BasicConstraintsExtension_t946;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t940;
// System.Byte[]
struct ByteU5BU5D_t688;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
extern "C" void X509BasicConstraintsExtension__ctor_m4796 (X509BasicConstraintsExtension_t946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C" void X509BasicConstraintsExtension__ctor_m4797 (X509BasicConstraintsExtension_t946 * __this, AsnEncodedData_t940 * ___encodedBasicConstraints, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
extern "C" void X509BasicConstraintsExtension__ctor_m4798 (X509BasicConstraintsExtension_t946 * __this, bool ___certificateAuthority, bool ___hasPathLengthConstraint, int32_t ___pathLengthConstraint, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
extern "C" bool X509BasicConstraintsExtension_get_CertificateAuthority_m4799 (X509BasicConstraintsExtension_t946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
extern "C" bool X509BasicConstraintsExtension_get_HasPathLengthConstraint_m4800 (X509BasicConstraintsExtension_t946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
extern "C" int32_t X509BasicConstraintsExtension_get_PathLengthConstraint_m4801 (X509BasicConstraintsExtension_t946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509BasicConstraintsExtension_CopyFrom_m4802 (X509BasicConstraintsExtension_t946 * __this, AsnEncodedData_t940 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
extern "C" int32_t X509BasicConstraintsExtension_Decode_m4803 (X509BasicConstraintsExtension_t946 * __this, ByteU5BU5D_t688* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
extern "C" ByteU5BU5D_t688* X509BasicConstraintsExtension_Encode_m4804 (X509BasicConstraintsExtension_t946 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
extern "C" String_t* X509BasicConstraintsExtension_ToString_m4805 (X509BasicConstraintsExtension_t946 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
