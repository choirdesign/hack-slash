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

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t793;
// System.IO.Stream
struct Stream_t799;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t818;
// System.Net.HttpWebRequest
struct HttpWebRequest_t794;
// System.Byte[]
struct ByteU5BU5D_t688;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t819;
// System.Int32[]
struct Int32U5BU5D_t413;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t837;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C" void HttpsClientStream__ctor_m4107 (HttpsClientStream_t793 * __this, Stream_t799 * ___stream, X509CertificateCollection_t818 * ___clientCertificates, HttpWebRequest_t794 * ___request, ByteU5BU5D_t688* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C" bool HttpsClientStream_get_TrustFailure_m4108 (HttpsClientStream_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool HttpsClientStream_RaiseServerCertificateValidation_m4109 (HttpsClientStream_t793 * __this, X509Certificate_t819 * ___certificate, Int32U5BU5D_t413* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t819 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m4110 (Object_t * __this /* static, unused */, X509CertificateCollection_t818 * ___clientCerts, X509Certificate_t819 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t818 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t837 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m4111 (Object_t * __this /* static, unused */, X509Certificate_t819 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
