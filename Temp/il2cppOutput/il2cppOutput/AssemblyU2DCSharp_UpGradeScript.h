#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t8;
// XPScript
struct XPScript_t68;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t69;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UpGradeScript
struct  UpGradeScript_t67  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject UpGradeScript::stats
	GameObject_t4 * ___stats_2;
	// UnityEngine.GameObject UpGradeScript::cost
	GameObject_t4 * ___cost_3;
	// System.String UpGradeScript::statsText
	String_t* ___statsText_4;
	// System.Int32 UpGradeScript::eachStats
	int32_t ___eachStats_5;
	// UnityEngine.UI.Text UpGradeScript::dispText
	Text_t8 * ___dispText_6;
	// System.String UpGradeScript::statsType
	String_t* ___statsType_7;
	// System.Int32 UpGradeScript::decreasedXP
	int32_t ___decreasedXP_8;
	// System.Int32 UpGradeScript::needCost
	int32_t ___needCost_9;
	// UnityEngine.UI.Text UpGradeScript::costText
	Text_t8 * ___costText_10;
	// XPScript UpGradeScript::xps
	XPScript_t68 * ___xps_11;
};
struct UpGradeScript_t67_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UpGradeScript::<>f__switch$map0
	Dictionary_2_t69 * ___U3CU3Ef__switchU24map0_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UpGradeScript::<>f__switch$map1
	Dictionary_2_t69 * ___U3CU3Ef__switchU24map1_13;
};
