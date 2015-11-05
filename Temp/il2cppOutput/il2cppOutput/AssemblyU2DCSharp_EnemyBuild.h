#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextAsset
struct TextAsset_t21;
// System.String[]
struct StringU5BU5D_t6;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t22;

#include "AssemblyU2DCSharp_SingletonMonoBehaviour_1_gen.h"

// EnemyBuild
struct  EnemyBuild_t19  : public SingletonMonoBehaviour_1_t20
{
	// UnityEngine.TextAsset EnemyBuild::enemyLayout
	TextAsset_t21 * ___enemyLayout_3;
	// UnityEngine.TextAsset EnemyBuild::enemyInfo
	TextAsset_t21 * ___enemyInfo_4;
	// UnityEngine.GameObject[] EnemyBuild::enemies
	GameObjectU5BU5D_t22* ___enemies_6;
	// System.Single EnemyBuild::spawnHeight
	float ___spawnHeight_7;
	// System.Int32 EnemyBuild::objNum
	int32_t ___objNum_8;
};
struct EnemyBuild_t19_StaticFields{
	// System.String[] EnemyBuild::enemyEachLine
	StringU5BU5D_t6* ___enemyEachLine_5;
};
