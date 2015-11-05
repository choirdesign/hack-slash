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

// System.Diagnostics.StackTrace
struct StackTrace_t630;
// System.Exception
struct Exception_t78;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t1192;
// System.Diagnostics.StackFrame
struct StackFrame_t657;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.StackTrace::.ctor()
extern "C" void StackTrace__ctor_m7216 (StackTrace_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
extern "C" void StackTrace__ctor_m3401 (StackTrace_t630 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
extern "C" void StackTrace__ctor_m7217 (StackTrace_t630 * __this, Exception_t78 * ___e, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
extern "C" void StackTrace__ctor_m7218 (StackTrace_t630 * __this, Exception_t78 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean,System.Boolean)
extern "C" void StackTrace__ctor_m7219 (StackTrace_t630 * __this, Exception_t78 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, bool ___returnNativeFrames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
extern "C" void StackTrace_init_frames_m7220 (StackTrace_t630 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
extern "C" StackFrameU5BU5D_t1192* StackTrace_get_trace_m7221 (Object_t * __this /* static, unused */, Exception_t78 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackTrace::get_FrameCount()
extern "C" int32_t StackTrace_get_FrameCount_m7222 (StackTrace_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32)
extern "C" StackFrame_t657 * StackTrace_GetFrame_m7223 (StackTrace_t630 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackTrace::ToString()
extern "C" String_t* StackTrace_ToString_m7224 (StackTrace_t630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
