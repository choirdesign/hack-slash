﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t790;
// System.Security.Policy.Evidence
struct Evidence_t1299;
// System.Security.PermissionSet
struct PermissionSet_t1300;
// System.Security.Principal.IPrincipal
struct IPrincipal_t1621;
// System.AppDomain
struct AppDomain_t650;
// System.AppDomainManager
struct AppDomainManager_t1633;
// System.ActivationContext
struct ActivationContext_t1631;
// System.ApplicationIdentity
struct ApplicationIdentity_t1634;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t1635;
// System.ResolveEventHandler
struct ResolveEventHandler_t1636;
// System.EventHandler
struct EventHandler_t1262;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t651;

#include "mscorlib_System_MarshalByRefObject.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Security_Principal_PrincipalPolicy.h"

// System.AppDomain
struct  AppDomain_t650  : public MarshalByRefObject_t943
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	IntPtr_t ____mono_app_domain_1;
	// System.Security.Policy.Evidence System.AppDomain::_evidence
	Evidence_t1299 * ____evidence_6;
	// System.Security.PermissionSet System.AppDomain::_granted
	PermissionSet_t1300 * ____granted_7;
	// System.Security.Principal.PrincipalPolicy System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AppDomainManager System.AppDomain::_domain_manager
	AppDomainManager_t1633 * ____domain_manager_11;
	// System.ActivationContext System.AppDomain::_activation
	ActivationContext_t1631 * ____activation_12;
	// System.ApplicationIdentity System.AppDomain::_applicationIdentity
	ApplicationIdentity_t1634 * ____applicationIdentity_13;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t1635 * ___AssemblyLoad_14;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t1636 * ___AssemblyResolve_15;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t1262 * ___DomainUnload_16;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t1262 * ___ProcessExit_17;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t1636 * ___ResourceResolve_18;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t1636 * ___TypeResolve_19;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t651 * ___UnhandledException_20;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t1636 * ___ReflectionOnlyAssemblyResolve_21;
};
struct AppDomain_t650_StaticFields{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t650 * ___default_domain_10;
};
struct AppDomain_t650_ThreadStaticFields{
	// System.Collections.Hashtable System.AppDomain::type_resolve_in_progress
	Hashtable_t790 * ___type_resolve_in_progress_3;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress
	Hashtable_t790 * ___assembly_resolve_in_progress_4;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress_refonly
	Hashtable_t790 * ___assembly_resolve_in_progress_refonly_5;
	// System.Security.Principal.IPrincipal System.AppDomain::_principal
	Object_t * ____principal_9;
};
