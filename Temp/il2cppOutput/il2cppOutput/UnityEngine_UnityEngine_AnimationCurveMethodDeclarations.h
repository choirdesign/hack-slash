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
struct AnimationCurve_t522;
struct AnimationCurve_t522_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t640;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2877 (AnimationCurve_t522 * __this, KeyframeU5BU5D_t640* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2878 (AnimationCurve_t522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2879 (AnimationCurve_t522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2880 (AnimationCurve_t522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2881 (AnimationCurve_t522 * __this, KeyframeU5BU5D_t640* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t522_marshal(const AnimationCurve_t522& unmarshaled, AnimationCurve_t522_marshaled& marshaled);
extern "C" void AnimationCurve_t522_marshal_back(const AnimationCurve_t522_marshaled& marshaled, AnimationCurve_t522& unmarshaled);
extern "C" void AnimationCurve_t522_marshal_cleanup(AnimationCurve_t522_marshaled& marshaled);
