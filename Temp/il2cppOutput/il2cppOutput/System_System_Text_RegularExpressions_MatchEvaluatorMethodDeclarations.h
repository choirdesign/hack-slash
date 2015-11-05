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

// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t1033;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t882;
// System.IAsyncResult
struct IAsyncResult_t211;
// System.AsyncCallback
struct AsyncCallback_t212;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
extern "C" void MatchEvaluator__ctor_m5409 (MatchEvaluator_t1033 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
extern "C" String_t* MatchEvaluator_Invoke_m5410 (MatchEvaluator_t1033 * __this, Match_t882 * ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" String_t* pinvoke_delegate_wrapper_MatchEvaluator_t1033(Il2CppObject* delegate, Match_t882 * ___match);
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
extern "C" Object_t * MatchEvaluator_BeginInvoke_m5411 (MatchEvaluator_t1033 * __this, Match_t882 * ___match, AsyncCallback_t212 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
extern "C" String_t* MatchEvaluator_EndInvoke_m5412 (MatchEvaluator_t1033 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
