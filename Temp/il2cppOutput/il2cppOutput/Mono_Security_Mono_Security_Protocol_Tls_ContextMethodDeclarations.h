﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Protocol.Tls.Context
struct Context_t781;
// System.Byte[]
struct ByteU5BU5D_t694;
// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t792;
// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t793;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t782;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t795;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t787;
// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t794;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeState.h"

// System.Void Mono.Security.Protocol.Tls.Context::.ctor(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" void Context__ctor_m4092 (Context_t781 * __this, int32_t ___securityProtocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_AbbreviatedHandshake()
extern "C" bool Context_get_AbbreviatedHandshake_m4093 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_AbbreviatedHandshake(System.Boolean)
extern "C" void Context_set_AbbreviatedHandshake_m4094 (Context_t781 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ProtocolNegotiated()
extern "C" bool Context_get_ProtocolNegotiated_m4095 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ProtocolNegotiated(System.Boolean)
extern "C" void Context_set_ProtocolNegotiated_m4096 (Context_t781 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocol()
extern "C" int32_t Context_get_SecurityProtocol_m4097 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SecurityProtocol(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" void Context_set_SecurityProtocol_m4098 (Context_t781 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocolFlags()
extern "C" int32_t Context_get_SecurityProtocolFlags_m4099 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.Context::get_Protocol()
extern "C" int16_t Context_get_Protocol_m4100 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_SessionId()
extern "C" ByteU5BU5D_t694* Context_get_SessionId_m4101 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SessionId(System.Byte[])
extern "C" void Context_set_SessionId_m4102 (Context_t781 * __this, ByteU5BU5D_t694* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Context::get_CompressionMethod()
extern "C" int32_t Context_get_CompressionMethod_m4103 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_CompressionMethod(Mono.Security.Protocol.Tls.SecurityCompressionType)
extern "C" void Context_set_CompressionMethod_m4104 (Context_t781 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsServerSettings Mono.Security.Protocol.Tls.Context::get_ServerSettings()
extern "C" TlsServerSettings_t792 * Context_get_ServerSettings_m4105 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsClientSettings Mono.Security.Protocol.Tls.Context::get_ClientSettings()
extern "C" TlsClientSettings_t793 * Context_get_ClientSettings_m4106 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Context::get_LastHandshakeMsg()
extern "C" uint8_t Context_get_LastHandshakeMsg_m4107 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_LastHandshakeMsg(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" void Context_set_LastHandshakeMsg_m4108 (Context_t781 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HandshakeState Mono.Security.Protocol.Tls.Context::get_HandshakeState()
extern "C" int32_t Context_get_HandshakeState_m4109 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_HandshakeState(Mono.Security.Protocol.Tls.HandshakeState)
extern "C" void Context_set_HandshakeState_m4110 (Context_t781 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ReceivedConnectionEnd()
extern "C" bool Context_get_ReceivedConnectionEnd_m4111 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReceivedConnectionEnd(System.Boolean)
extern "C" void Context_set_ReceivedConnectionEnd_m4112 (Context_t781 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_SentConnectionEnd()
extern "C" bool Context_get_SentConnectionEnd_m4113 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SentConnectionEnd(System.Boolean)
extern "C" void Context_set_SentConnectionEnd_m4114 (Context_t781 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.Context::get_SupportedCiphers()
extern "C" CipherSuiteCollection_t782 * Context_get_SupportedCiphers_m4115 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SupportedCiphers(Mono.Security.Protocol.Tls.CipherSuiteCollection)
extern "C" void Context_set_SupportedCiphers_m4116 (Context_t781 * __this, CipherSuiteCollection_t782 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsStream Mono.Security.Protocol.Tls.Context::get_HandshakeMessages()
extern "C" TlsStream_t795 * Context_get_HandshakeMessages_m4117 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_WriteSequenceNumber()
extern "C" uint64_t Context_get_WriteSequenceNumber_m4118 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_WriteSequenceNumber(System.UInt64)
extern "C" void Context_set_WriteSequenceNumber_m4119 (Context_t781 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_ReadSequenceNumber()
extern "C" uint64_t Context_get_ReadSequenceNumber_m4120 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReadSequenceNumber(System.UInt64)
extern "C" void Context_set_ReadSequenceNumber_m4121 (Context_t781 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientRandom()
extern "C" ByteU5BU5D_t694* Context_get_ClientRandom_m4122 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientRandom(System.Byte[])
extern "C" void Context_set_ClientRandom_m4123 (Context_t781 * __this, ByteU5BU5D_t694* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerRandom()
extern "C" ByteU5BU5D_t694* Context_get_ServerRandom_m4124 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerRandom(System.Byte[])
extern "C" void Context_set_ServerRandom_m4125 (Context_t781 * __this, ByteU5BU5D_t694* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomCS()
extern "C" ByteU5BU5D_t694* Context_get_RandomCS_m4126 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomCS(System.Byte[])
extern "C" void Context_set_RandomCS_m4127 (Context_t781 * __this, ByteU5BU5D_t694* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomSC()
extern "C" ByteU5BU5D_t694* Context_get_RandomSC_m4128 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomSC(System.Byte[])
extern "C" void Context_set_RandomSC_m4129 (Context_t781 * __this, ByteU5BU5D_t694* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_MasterSecret()
extern "C" ByteU5BU5D_t694* Context_get_MasterSecret_m4130 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_MasterSecret(System.Byte[])
extern "C" void Context_set_MasterSecret_m4131 (Context_t781 * __this, ByteU5BU5D_t694* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteKey()
extern "C" ByteU5BU5D_t694* Context_get_ClientWriteKey_m4132 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteKey(System.Byte[])
extern "C" void Context_set_ClientWriteKey_m4133 (Context_t781 * __this, ByteU5BU5D_t694* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteKey()
extern "C" ByteU5BU5D_t694* Context_get_ServerWriteKey_m4134 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteKey(System.Byte[])
extern "C" void Context_set_ServerWriteKey_m4135 (Context_t781 * __this, ByteU5BU5D_t694* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteIV()
extern "C" ByteU5BU5D_t694* Context_get_ClientWriteIV_m4136 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteIV(System.Byte[])
extern "C" void Context_set_ClientWriteIV_m4137 (Context_t781 * __this, ByteU5BU5D_t694* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteIV()
extern "C" ByteU5BU5D_t694* Context_get_ServerWriteIV_m4138 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteIV(System.Byte[])
extern "C" void Context_set_ServerWriteIV_m4139 (Context_t781 * __this, ByteU5BU5D_t694* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.Context::get_RecordProtocol()
extern "C" RecordProtocol_t787 * Context_get_RecordProtocol_m4140 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RecordProtocol(Mono.Security.Protocol.Tls.RecordProtocol)
extern "C" void Context_set_RecordProtocol_m4141 (Context_t781 * __this, RecordProtocol_t787 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.Context::GetUnixTime()
extern "C" int32_t Context_GetUnixTime_m4142 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::GetSecureRandomBytes(System.Int32)
extern "C" ByteU5BU5D_t694* Context_GetSecureRandomBytes_m4143 (Context_t781 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::Clear()
extern "C" void Context_Clear_m4144 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ClearKeyInfo()
extern "C" void Context_ClearKeyInfo_m4145 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::DecodeProtocolCode(System.Int16)
extern "C" int32_t Context_DecodeProtocolCode_m4146 (Context_t781 * __this, int16_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ChangeProtocol(System.Int16)
extern "C" void Context_ChangeProtocol_m4147 (Context_t781 * __this, int16_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Current()
extern "C" SecurityParameters_t794 * Context_get_Current_m4148 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Negotiating()
extern "C" SecurityParameters_t794 * Context_get_Negotiating_m4149 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Read()
extern "C" SecurityParameters_t794 * Context_get_Read_m4150 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Write()
extern "C" SecurityParameters_t794 * Context_get_Write_m4151 (Context_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::StartSwitchingSecurityParameters(System.Boolean)
extern "C" void Context_StartSwitchingSecurityParameters_m4152 (Context_t781 * __this, bool ___client, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::EndSwitchingSecurityParameters(System.Boolean)
extern "C" void Context_EndSwitchingSecurityParameters_m4153 (Context_t781 * __this, bool ___client, const MethodInfo* method) IL2CPP_METHOD_ATTR;
