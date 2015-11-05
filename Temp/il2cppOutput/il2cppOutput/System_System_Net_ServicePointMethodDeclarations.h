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

// System.Net.ServicePoint
struct ServicePoint_t871;
// System.Uri
struct Uri_t870;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern "C" void ServicePoint__ctor_m4684 (ServicePoint_t871 * __this, Uri_t870 * ___uri, int32_t ___connectionLimit, int32_t ___maxIdleTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
extern "C" Uri_t870 * ServicePoint_get_Address_m4685 (ServicePoint_t871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
extern "C" int32_t ServicePoint_get_CurrentConnections_m4686 (ServicePoint_t871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
extern "C" DateTime_t527  ServicePoint_get_IdleSince_m4687 (ServicePoint_t871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
extern "C" void ServicePoint_set_IdleSince_m4688 (ServicePoint_t871 * __this, DateTime_t527  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern "C" void ServicePoint_set_Expect100Continue_m4689 (ServicePoint_t871 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern "C" void ServicePoint_set_UseNagleAlgorithm_m4690 (ServicePoint_t871 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern "C" void ServicePoint_set_SendContinue_m4691 (ServicePoint_t871 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern "C" void ServicePoint_set_UsesProxy_m4692 (ServicePoint_t871 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern "C" void ServicePoint_set_UseConnect_m4693 (ServicePoint_t871 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
extern "C" bool ServicePoint_get_AvailableForRecycling_m4694 (ServicePoint_t871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
