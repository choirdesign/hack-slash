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

// UnityEngine.GUISkin
struct GUISkin_t525;
// UnityEngine.Texture
struct Texture_t232;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t524;
// UnityEngine.GUIStyle
struct GUIStyle_t534;
// UnityEngine.Material
struct Material_t181;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_ScaleMode.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m2983 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m2984 (Object_t * __this /* static, unused */, DateTime_t527  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m2985 (Object_t * __this /* static, unused */, GUISkin_t525 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t525 * GUI_get_skin_m2986 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C" void GUI_DoSetSkin_m2987 (Object_t * __this /* static, unused */, GUISkin_t525 * ___newSkin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
extern "C" void GUI_DrawTexture_m215 (Object_t * __this /* static, unused */, Rect_t72  ___position, Texture_t232 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
extern "C" void GUI_DrawTexture_m2988 (Object_t * __this /* static, unused */, Rect_t72  ___position, Texture_t232 * ___image, int32_t ___scaleMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean)
extern "C" void GUI_DrawTexture_m2989 (Object_t * __this /* static, unused */, Rect_t72  ___position, Texture_t232 * ___image, int32_t ___scaleMode, bool ___alphaBlend, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
extern "C" void GUI_DrawTexture_m2990 (Object_t * __this /* static, unused */, Rect_t72  ___position, Texture_t232 * ___image, int32_t ___scaleMode, bool ___alphaBlend, float ___imageAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m2991 (Object_t * __this /* static, unused */, WindowFunction_t524 * ___func, int32_t ___id, GUISkin_t525 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t534 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUI::get_color()
extern "C" Color_t70  GUI_get_color_m2992 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
extern "C" void GUI_set_color_m212 (Object_t * __this /* static, unused */, Color_t70  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_get_color_m2993 (Object_t * __this /* static, unused */, Color_t70 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_set_color_m2994 (Object_t * __this /* static, unused */, Color_t70 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m2995 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C" Material_t181 * GUI_get_blendMaterial_m2996 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C" Material_t181 * GUI_get_blitMaterial_m2997 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
