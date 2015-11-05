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
// PlayerControl
struct PlayerControl_t16;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// AtkButton
struct  AtkButton_t15  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject AtkButton::player
	GameObject_t3 * ___player_2;
	// UnityEngine.GameObject AtkButton::battleManager
	GameObject_t3 * ___battleManager_3;
	// PlayerControl AtkButton::playerCtrl
	PlayerControl_t16 * ___playerCtrl_4;
};
