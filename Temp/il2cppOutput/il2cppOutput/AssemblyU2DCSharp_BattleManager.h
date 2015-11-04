#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t17;
// UnityEngine.GameObject
struct GameObject_t7;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// BattleManager
struct  BattleManager_t16  : public MonoBehaviour_t2
{
	// UnityEngine.UI.Image BattleManager::buttonCover
	Image_t17 * ___buttonCover_3;
	// UnityEngine.GameObject BattleManager::player
	GameObject_t7 * ___player_4;
};
struct BattleManager_t16_StaticFields{
	// System.Boolean BattleManager::isBattle
	bool ___isBattle_2;
	// System.Boolean BattleManager::isEnemyDead
	bool ___isEnemyDead_5;
};
