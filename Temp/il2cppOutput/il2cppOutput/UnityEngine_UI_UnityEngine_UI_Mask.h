#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t164;
// UnityEngine.UI.Graphic
struct Graphic_t180;
// UnityEngine.Material
struct Material_t181;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"

// UnityEngine.UI.Mask
struct  Mask_t223  : public UIBehaviour_t85
{
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t164 * ___m_RectTransform_2;
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_3;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t180 * ___m_Graphic_4;
	// UnityEngine.Material UnityEngine.UI.Mask::m_MaskMaterial
	Material_t181 * ___m_MaskMaterial_5;
	// UnityEngine.Material UnityEngine.UI.Mask::m_UnmaskMaterial
	Material_t181 * ___m_UnmaskMaterial_6;
};
