#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t37;
// UnityEngine.UI.Text
struct Text_t8;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// StageBuild
struct  StageBuild_t44  : public MonoBehaviour_t2
{
	// UnityEngine.SpriteRenderer StageBuild::distant
	SpriteRenderer_t37 * ___distant_3;
	// UnityEngine.SpriteRenderer StageBuild::near_1
	SpriteRenderer_t37 * ___near_1_4;
	// UnityEngine.SpriteRenderer StageBuild::near_2
	SpriteRenderer_t37 * ___near_2_5;
	// UnityEngine.SpriteRenderer StageBuild::near_3
	SpriteRenderer_t37 * ___near_3_6;
	// UnityEngine.SpriteRenderer StageBuild::ground_1
	SpriteRenderer_t37 * ___ground_1_7;
	// UnityEngine.SpriteRenderer StageBuild::ground_2
	SpriteRenderer_t37 * ___ground_2_8;
	// UnityEngine.SpriteRenderer StageBuild::ground_3
	SpriteRenderer_t37 * ___ground_3_9;
	// UnityEngine.UI.Text StageBuild::stageName
	Text_t8 * ___stageName_10;
};
struct StageBuild_t44_StaticFields{
	// System.Int32 StageBuild::clearLevel
	int32_t ___clearLevel_2;
	// System.Int32 StageBuild::currentStage
	int32_t ___currentStage_11;
};
