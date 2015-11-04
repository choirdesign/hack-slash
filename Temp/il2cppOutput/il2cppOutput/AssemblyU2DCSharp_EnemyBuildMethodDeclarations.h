﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// EnemyBuild
struct EnemyBuild_t18;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t7;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void EnemyBuild::.ctor()
extern "C" void EnemyBuild__ctor_m30 (EnemyBuild_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyBuild::Awake()
extern "C" void EnemyBuild_Awake_m31 (EnemyBuild_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyBuild::EnemySetUp()
extern "C" void EnemyBuild_EnemySetUp_m32 (EnemyBuild_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EnemyBuild::getObj(System.String)
extern "C" int32_t EnemyBuild_getObj_m33 (EnemyBuild_t18 * __this, String_t* ___objType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyBuild::createObj(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C" void EnemyBuild_createObj_m34 (EnemyBuild_t18 * __this, GameObject_t7 * ___obj, Vector2_t55  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
