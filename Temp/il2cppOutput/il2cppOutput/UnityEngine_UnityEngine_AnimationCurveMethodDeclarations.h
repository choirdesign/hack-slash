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
struct AnimationCurve_t516;
struct AnimationCurve_t516_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t634;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2830 (AnimationCurve_t516 * __this, KeyframeU5BU5D_t634* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2831 (AnimationCurve_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2832 (AnimationCurve_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2833 (AnimationCurve_t516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2834 (AnimationCurve_t516 * __this, KeyframeU5BU5D_t634* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t516_marshal(const AnimationCurve_t516& unmarshaled, AnimationCurve_t516_marshaled& marshaled);
extern "C" void AnimationCurve_t516_marshal_back(const AnimationCurve_t516_marshaled& marshaled, AnimationCurve_t516& unmarshaled);
extern "C" void AnimationCurve_t516_marshal_cleanup(AnimationCurve_t516_marshaled& marshaled);
