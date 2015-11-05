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

// System.ResolveEventHandler
struct ResolveEventHandler_t1620;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t1046;
// System.ResolveEventArgs
struct ResolveEventArgs_t1676;
// System.IAsyncResult
struct IAsyncResult_t211;
// System.AsyncCallback
struct AsyncCallback_t212;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m10635 (ResolveEventHandler_t1620 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t1046 * ResolveEventHandler_Invoke_m10636 (ResolveEventHandler_t1620 * __this, Object_t * ___sender, ResolveEventArgs_t1676 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t1046 * pinvoke_delegate_wrapper_ResolveEventHandler_t1620(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t1676 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m10637 (ResolveEventHandler_t1620 * __this, Object_t * ___sender, ResolveEventArgs_t1676 * ___args, AsyncCallback_t212 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t1046 * ResolveEventHandler_EndInvoke_m10638 (ResolveEventHandler_t1620 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
