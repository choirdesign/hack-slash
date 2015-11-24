#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextAsset
struct TextAsset_t30;
// System.String[]
struct StringU5BU5D_t14;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t31;

#include "AssemblyU2DCSharp_SingletonMonoBehaviour_1_gen.h"

// EnemyBuild
struct  EnemyBuild_t28  : public SingletonMonoBehaviour_1_t29
{
	// UnityEngine.TextAsset EnemyBuild::enemyLayout
	TextAsset_t30 * ___enemyLayout_3;
	// UnityEngine.TextAsset EnemyBuild::enemyInfo
	TextAsset_t30 * ___enemyInfo_4;
	// UnityEngine.GameObject[] EnemyBuild::enemies
	GameObjectU5BU5D_t31* ___enemies_6;
	// System.Single EnemyBuild::spawnHeight
	float ___spawnHeight_7;
	// System.Int32 EnemyBuild::objNum
	int32_t ___objNum_8;
};
struct EnemyBuild_t28_StaticFields{
	// System.String[] EnemyBuild::enemyEachLine
	StringU5BU5D_t14* ___enemyEachLine_5;
};
