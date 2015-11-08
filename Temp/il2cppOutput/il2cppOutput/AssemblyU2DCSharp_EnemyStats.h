#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t12;
// EDamageTextGen
struct EDamageTextGen_t9;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// EnemyStats
struct  EnemyStats_t11  : public MonoBehaviour_t2
{
	// System.String EnemyStats::eName
	String_t* ___eName_2;
	// System.Int32 EnemyStats::eHp
	int32_t ___eHp_3;
	// System.Int32 EnemyStats::eAtk
	int32_t ___eAtk_4;
	// System.Int32 EnemyStats::eDef
	int32_t ___eDef_5;
	// System.Single EnemyStats::eSpd
	float ___eSpd_6;
	// System.Int32 EnemyStats::eAgl
	int32_t ___eAgl_7;
	// System.Int32 EnemyStats::eHeal
	int32_t ___eHeal_8;
	// System.Int32 EnemyStats::eXp
	int32_t ___eXp_9;
	// System.String[] EnemyStats::enemyEachInfo
	StringU5BU5D_t12* ___enemyEachInfo_10;
	// EDamageTextGen EnemyStats::gen
	EDamageTextGen_t9 * ___gen_11;
};
