#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.ManualResetEvent
struct ManualResetEvent_t788;
// System.IO.Stream
struct Stream_t789;
// System.IO.MemoryStream
struct MemoryStream_t806;
// Mono.Security.Protocol.Tls.Context
struct Context_t765;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t771;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t678;

#include "mscorlib_System_IO_Stream.h"
#include "mscorlib_System_Boolean.h"

// Mono.Security.Protocol.Tls.SslStreamBase
struct  SslStreamBase_t800  : public Stream_t789
{
	// System.IO.Stream Mono.Security.Protocol.Tls.SslStreamBase::innerStream
	Stream_t789 * ___innerStream_3;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::inputBuffer
	MemoryStream_t806 * ___inputBuffer_4;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.SslStreamBase::context
	Context_t765 * ___context_5;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.SslStreamBase::protocol
	RecordProtocol_t771 * ___protocol_6;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::ownsStream
	bool ___ownsStream_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Mono.Security.Protocol.Tls.SslStreamBase::disposed
	bool ___disposed_8;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::checkCertRevocationStatus
	bool ___checkCertRevocationStatus_9;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::negotiate
	Object_t * ___negotiate_10;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::read
	Object_t * ___read_11;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::write
	Object_t * ___write_12;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::negotiationComplete
	ManualResetEvent_t788 * ___negotiationComplete_13;
	// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase::recbuf
	ByteU5BU5D_t678* ___recbuf_14;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::recordStream
	MemoryStream_t806 * ___recordStream_15;
};
struct SslStreamBase_t800_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::record_processing
	ManualResetEvent_t788 * ___record_processing_2;
};
