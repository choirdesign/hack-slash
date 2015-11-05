﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t870;
// System.Net.IWebProxy
struct IWebProxy_t910;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t6;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t872;

#include "System_System_Net_WebRequest.h"

// System.Net.FtpWebRequest
struct  FtpWebRequest_t913  : public WebRequest_t875
{
	// System.Uri System.Net.FtpWebRequest::requestUri
	Uri_t870 * ___requestUri_6;
	// System.Net.IWebProxy System.Net.FtpWebRequest::proxy
	Object_t * ___proxy_7;
	// System.Int32 System.Net.FtpWebRequest::timeout
	int32_t ___timeout_8;
	// System.Int32 System.Net.FtpWebRequest::rwTimeout
	int32_t ___rwTimeout_9;
	// System.Boolean System.Net.FtpWebRequest::binary
	bool ___binary_10;
	// System.Boolean System.Net.FtpWebRequest::usePassive
	bool ___usePassive_11;
	// System.String System.Net.FtpWebRequest::method
	String_t* ___method_12;
	// System.Object System.Net.FtpWebRequest::locker
	Object_t * ___locker_13;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::callback
	RemoteCertificateValidationCallback_t872 * ___callback_15;
};
struct FtpWebRequest_t913_StaticFields{
	// System.String[] System.Net.FtpWebRequest::supportedCommands
	StringU5BU5D_t6* ___supportedCommands_14;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::<>f__am$cache1C
	RemoteCertificateValidationCallback_t872 * ___U3CU3Ef__amU24cache1C_16;
};
