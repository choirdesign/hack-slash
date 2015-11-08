#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextAsset
struct TextAsset_t28;
// System.String[]
struct StringU5BU5D_t12;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t29;

#include "AssemblyU2DCSharp_SingletonMonoBehaviour_1_gen.h"

// EnemyBuild
struct  EnemyBuild_t26  : public SingletonMonoBehaviour_1_t27
{
	// UnityEngine.TextAsset EnemyBuild::enemyLayout
	TextAsset_t28 * ___enemyLayout_3;
	// UnityEngine.TextAsset EnemyBuild::enemyInfo
	TextAsset_t28 * ___enemyInfo_4;
	// UnityEngine.GameObject[] EnemyBuild::enemies
	GameObjectU5BU5D_t29* ___enemies_6;
	// System.Single EnemyBuild::spawnHeight
	float ___spawnHeight_7;
	// System.Int32 EnemyBuild::objNum
	int32_t ___objNum_8;
};
struct EnemyBuild_t26_StaticFields{
	// System.String[] EnemyBuild::enemyEachLine
	StringU5BU5D_t12* ___enemyEachLine_5;
};
