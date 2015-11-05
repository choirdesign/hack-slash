#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t533;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t530;
// UnityEngine.GUIStyle
struct GUIStyle_t534;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Rect.h"

// UnityEngine.GUILayoutUtility
struct  GUILayoutUtility_t532  : public Object_t
{
};
struct GUILayoutUtility_t532_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredLayouts
	Dictionary_2_t533 * ___s_StoredLayouts_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredWindows
	Dictionary_2_t533 * ___s_StoredWindows_1;
	// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::current
	LayoutCache_t530 * ___current_2;
	// UnityEngine.Rect UnityEngine.GUILayoutUtility::kDummyRect
	Rect_t72  ___kDummyRect_3;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::s_SpaceStyle
	GUIStyle_t534 * ___s_SpaceStyle_4;
};
