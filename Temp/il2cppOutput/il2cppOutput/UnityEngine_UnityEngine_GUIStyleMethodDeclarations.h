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

// UnityEngine.GUIStyle
struct GUIStyle_t534;
// UnityEngine.GUIStyleState
struct GUIStyleState_t544;
// UnityEngine.RectOffset
struct RectOffset_t285;
// System.String
struct String_t;
// UnityEngine.Font
struct Font_t177;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" void GUIStyle__ctor_m3123 (GUIStyle_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
extern "C" void GUIStyle__cctor_m3124 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C" void GUIStyle_Finalize_m3125 (GUIStyle_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" GUIStyleState_t544 * GUIStyle_get_normal_m3126 (GUIStyle_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C" RectOffset_t285 * GUIStyle_get_margin_m3127 (GUIStyle_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C" RectOffset_t285 * GUIStyle_get_padding_m3128 (GUIStyle_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C" GUIStyle_t534 * GUIStyle_get_none_m3129 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
extern "C" String_t* GUIStyle_ToString_m3130 (GUIStyle_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
extern "C" void GUIStyle_Init_m3131 (GUIStyle_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C" void GUIStyle_Cleanup_m3132 (GUIStyle_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
extern "C" String_t* GUIStyle_get_name_m3133 (GUIStyle_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C" void GUIStyle_set_name_m3134 (GUIStyle_t534 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetStyleStatePtr_m3135 (GUIStyle_t534 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetRectOffsetPtr_m3136 (GUIStyle_t534 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" float GUIStyle_get_fixedWidth_m3137 (GUIStyle_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" float GUIStyle_get_fixedHeight_m3138 (GUIStyle_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" bool GUIStyle_get_stretchWidth_m3139 (GUIStyle_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C" void GUIStyle_set_stretchWidth_m3140 (GUIStyle_t534 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" bool GUIStyle_get_stretchHeight_m3141 (GUIStyle_t534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C" void GUIStyle_set_stretchHeight_m3142 (GUIStyle_t534 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C" void GUIStyle_SetDefaultFont_m3143 (Object_t * __this /* static, unused */, Font_t177 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
