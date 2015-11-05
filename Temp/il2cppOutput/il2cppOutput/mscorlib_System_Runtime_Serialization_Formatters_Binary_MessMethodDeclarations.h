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

// System.Object
struct Object_t;
// System.IO.BinaryReader
struct BinaryReader_t1210;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t1692;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t1464;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t1736;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0.h"

// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C" Object_t * MessageFormatter_ReadMethodCall_m8862 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t1210 * ___reader, bool ___hasHeaders, HeaderHandler_t1692 * ___headerHandler, BinaryFormatter_t1464 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C" Object_t * MessageFormatter_ReadMethodResponse_m8863 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t1210 * ___reader, bool ___hasHeaders, HeaderHandler_t1692 * ___headerHandler, Object_t * ___methodCallMessage, BinaryFormatter_t1464 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
