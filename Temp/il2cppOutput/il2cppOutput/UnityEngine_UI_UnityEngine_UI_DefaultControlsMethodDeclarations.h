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

// UnityEngine.GameObject
struct GameObject_t3;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t26;
// UnityEngine.UI.Selectable
struct Selectable_t154;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UI_UnityEngine_UI_DefaultControls_Resources.h"

// System.Void UnityEngine.UI.DefaultControls::.cctor()
extern "C" void DefaultControls__cctor_m610 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIElementRoot(System.String,UnityEngine.Vector2)
extern "C" GameObject_t3 * DefaultControls_CreateUIElementRoot_m611 (Object_t * __this /* static, unused */, String_t* ___name, Vector2_t57  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIObject(System.String,UnityEngine.GameObject)
extern "C" GameObject_t3 * DefaultControls_CreateUIObject_m612 (Object_t * __this /* static, unused */, String_t* ___name, GameObject_t3 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultTextValues(UnityEngine.UI.Text)
extern "C" void DefaultControls_SetDefaultTextValues_m613 (Object_t * __this /* static, unused */, Text_t26 * ___lbl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultColorTransitionValues(UnityEngine.UI.Selectable)
extern "C" void DefaultControls_SetDefaultColorTransitionValues_m614 (Object_t * __this /* static, unused */, Selectable_t154 * ___slider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetParentAndAlign(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" void DefaultControls_SetParentAndAlign_m615 (Object_t * __this /* static, unused */, GameObject_t3 * ___child, GameObject_t3 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
extern "C" void DefaultControls_SetLayerRecursively_m616 (Object_t * __this /* static, unused */, GameObject_t3 * ___go, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreatePanel(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t3 * DefaultControls_CreatePanel_m617 (Object_t * __this /* static, unused */, Resources_t161  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateButton(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t3 * DefaultControls_CreateButton_m618 (Object_t * __this /* static, unused */, Resources_t161  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateText(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t3 * DefaultControls_CreateText_m619 (Object_t * __this /* static, unused */, Resources_t161  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateImage(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t3 * DefaultControls_CreateImage_m620 (Object_t * __this /* static, unused */, Resources_t161  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateRawImage(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t3 * DefaultControls_CreateRawImage_m621 (Object_t * __this /* static, unused */, Resources_t161  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateSlider(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t3 * DefaultControls_CreateSlider_m622 (Object_t * __this /* static, unused */, Resources_t161  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollbar(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t3 * DefaultControls_CreateScrollbar_m623 (Object_t * __this /* static, unused */, Resources_t161  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateToggle(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t3 * DefaultControls_CreateToggle_m624 (Object_t * __this /* static, unused */, Resources_t161  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateInputField(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t3 * DefaultControls_CreateInputField_m625 (Object_t * __this /* static, unused */, Resources_t161  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateDropdown(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t3 * DefaultControls_CreateDropdown_m626 (Object_t * __this /* static, unused */, Resources_t161  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollView(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t3 * DefaultControls_CreateScrollView_m627 (Object_t * __this /* static, unused */, Resources_t161  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
