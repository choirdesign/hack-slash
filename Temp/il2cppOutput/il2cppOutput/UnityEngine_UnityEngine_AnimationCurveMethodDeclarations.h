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

// UnityEngine.AnimationCurve
struct AnimationCurve_t506;
struct AnimationCurve_t506_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t624;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2786 (AnimationCurve_t506 * __this, KeyframeU5BU5D_t624* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2787 (AnimationCurve_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2788 (AnimationCurve_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2789 (AnimationCurve_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2790 (AnimationCurve_t506 * __this, KeyframeU5BU5D_t624* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t506_marshal(const AnimationCurve_t506& unmarshaled, AnimationCurve_t506_marshaled& marshaled);
extern "C" void AnimationCurve_t506_marshal_back(const AnimationCurve_t506_marshaled& marshaled, AnimationCurve_t506& unmarshaled);
extern "C" void AnimationCurve_t506_marshal_cleanup(AnimationCurve_t506_marshaled& marshaled);
