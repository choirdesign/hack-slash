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

// System.Runtime.Remoting.Proxies.RemotingProxy
struct RemotingProxy_t1460;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1467;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t82;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern "C" void RemotingProxy__ctor_m8775 (RemotingProxy_t1460 * __this, Type_t * ___type, ClientIdentity_t1467 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.String,System.Object[])
extern "C" void RemotingProxy__ctor_m8776 (RemotingProxy_t1460 * __this, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t82* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.cctor()
extern "C" void RemotingProxy__cctor_m8777 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Proxies.RemotingProxy::get_TypeName()
extern "C" String_t* RemotingProxy_get_TypeName_m8778 (RemotingProxy_t1460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::Finalize()
extern "C" void RemotingProxy_Finalize_m8779 (RemotingProxy_t1460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;