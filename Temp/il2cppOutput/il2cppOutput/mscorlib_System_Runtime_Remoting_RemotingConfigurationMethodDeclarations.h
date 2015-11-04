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

// System.String
struct String_t;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t1444;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ActivatedServiceTypeEntry
struct ActivatedServiceTypeEntry_t1446;
// System.Runtime.Remoting.WellKnownClientTypeEntry
struct WellKnownClientTypeEntry_t1469;
// System.Runtime.Remoting.WellKnownServiceTypeEntry
struct WellKnownServiceTypeEntry_t1471;
// System.Runtime.Remoting.ChannelData
struct ChannelData_t1457;
// System.Runtime.Remoting.ProviderData
struct ProviderData_t1458;
// System.Collections.ArrayList
struct ArrayList_t707;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.RemotingConfiguration::.cctor()
extern "C" void RemotingConfiguration__cctor_m8717 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ApplicationName()
extern "C" String_t* RemotingConfiguration_get_ApplicationName_m8718 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::set_ApplicationName(System.String)
extern "C" void RemotingConfiguration_set_ApplicationName_m8719 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ProcessId()
extern "C" String_t* RemotingConfiguration_get_ProcessId_m8720 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::LoadDefaultDelayedChannels()
extern "C" void RemotingConfiguration_LoadDefaultDelayedChannels_m8721 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ActivatedClientTypeEntry System.Runtime.Remoting.RemotingConfiguration::IsRemotelyActivatedClientType(System.Type)
extern "C" ActivatedClientTypeEntry_t1444 * RemotingConfiguration_IsRemotelyActivatedClientType_m8722 (Object_t * __this /* static, unused */, Type_t * ___svrType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedClientType(System.Runtime.Remoting.ActivatedClientTypeEntry)
extern "C" void RemotingConfiguration_RegisterActivatedClientType_m8723 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t1444 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedServiceType(System.Runtime.Remoting.ActivatedServiceTypeEntry)
extern "C" void RemotingConfiguration_RegisterActivatedServiceType_m8724 (Object_t * __this /* static, unused */, ActivatedServiceTypeEntry_t1446 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownClientType(System.Runtime.Remoting.WellKnownClientTypeEntry)
extern "C" void RemotingConfiguration_RegisterWellKnownClientType_m8725 (Object_t * __this /* static, unused */, WellKnownClientTypeEntry_t1469 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownServiceType(System.Runtime.Remoting.WellKnownServiceTypeEntry)
extern "C" void RemotingConfiguration_RegisterWellKnownServiceType_m8726 (Object_t * __this /* static, unused */, WellKnownServiceTypeEntry_t1471 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannelTemplate(System.Runtime.Remoting.ChannelData)
extern "C" void RemotingConfiguration_RegisterChannelTemplate_m8727 (Object_t * __this /* static, unused */, ChannelData_t1457 * ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterClientProviderTemplate(System.Runtime.Remoting.ProviderData)
extern "C" void RemotingConfiguration_RegisterClientProviderTemplate_m8728 (Object_t * __this /* static, unused */, ProviderData_t1458 * ___prov, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterServerProviderTemplate(System.Runtime.Remoting.ProviderData)
extern "C" void RemotingConfiguration_RegisterServerProviderTemplate_m8729 (Object_t * __this /* static, unused */, ProviderData_t1458 * ___prov, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannels(System.Collections.ArrayList,System.Boolean)
extern "C" void RemotingConfiguration_RegisterChannels_m8730 (Object_t * __this /* static, unused */, ArrayList_t707 * ___channels, bool ___onlyDelayed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterTypes(System.Collections.ArrayList)
extern "C" void RemotingConfiguration_RegisterTypes_m8731 (Object_t * __this /* static, unused */, ArrayList_t707 * ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::SetCustomErrorsMode(System.String)
extern "C" void RemotingConfiguration_SetCustomErrorsMode_m8732 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
