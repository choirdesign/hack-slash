#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// EDamageTextGen
struct  EDamageTextGen_t9  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject EDamageTextGen::PopupTextObject
	GameObject_t3 * ___PopupTextObject_2;
	// UnityEngine.Vector3 EDamageTextGen::PopupPosition
	Vector3_t7  ___PopupPosition_3;
	// System.String EDamageTextGen::PopupString
	String_t* ___PopupString_4;
	// System.Int32 EDamageTextGen::eDamage
	int32_t ___eDamage_5;
	// System.Boolean EDamageTextGen::eIsHit
	bool ___eIsHit_6;
	// System.Int32 EDamageTextGen::pDamage
	int32_t ___pDamage_7;
	// System.Boolean EDamageTextGen::pIsHit
	bool ___pIsHit_8;
};
