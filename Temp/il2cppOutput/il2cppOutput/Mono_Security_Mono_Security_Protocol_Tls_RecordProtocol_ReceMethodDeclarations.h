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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t787;
// System.AsyncCallback
struct AsyncCallback_t212;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t678;
// System.IO.Stream
struct Stream_t789;
// System.Exception
struct Exception_t78;
// System.Threading.WaitHandle
struct WaitHandle_t841;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m4068 (ReceiveRecordAsyncResult_t787 * __this, AsyncCallback_t212 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t678* ___initialBuffer, Stream_t789 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t789 * ReceiveRecordAsyncResult_get_Record_m4069 (ReceiveRecordAsyncResult_t787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t678* ReceiveRecordAsyncResult_get_ResultingBuffer_m4070 (ReceiveRecordAsyncResult_t787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t678* ReceiveRecordAsyncResult_get_InitialBuffer_m4071 (ReceiveRecordAsyncResult_t787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m4072 (ReceiveRecordAsyncResult_t787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t78 * ReceiveRecordAsyncResult_get_AsyncException_m4073 (ReceiveRecordAsyncResult_t787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m4074 (ReceiveRecordAsyncResult_t787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t841 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m4075 (ReceiveRecordAsyncResult_t787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m4076 (ReceiveRecordAsyncResult_t787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4077 (ReceiveRecordAsyncResult_t787 * __this, Exception_t78 * ___ex, ByteU5BU5D_t678* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4078 (ReceiveRecordAsyncResult_t787 * __this, Exception_t78 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m4079 (ReceiveRecordAsyncResult_t787 * __this, ByteU5BU5D_t678* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
