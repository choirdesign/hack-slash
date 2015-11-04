#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t7;
// PlayerControl
struct PlayerControl_t15;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// AtkButton
struct  AtkButton_t14  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject AtkButton::player
	GameObject_t7 * ___player_2;
	// UnityEngine.GameObject AtkButton::battleManager
	GameObject_t7 * ___battleManager_3;
	// PlayerControl AtkButton::playerCtrl
	PlayerControl_t15 * ___playerCtrl_4;
};
