#pragma once

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
struct EnemyBuild_t28;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void EnemyBuild::.ctor()
extern "C" void EnemyBuild__ctor_m79 (EnemyBuild_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyBuild::Awake()
extern "C" void EnemyBuild_Awake_m80 (EnemyBuild_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyBuild::EnemySetUp()
extern "C" void EnemyBuild_EnemySetUp_m81 (EnemyBuild_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EnemyBuild::getObj(System.String)
extern "C" int32_t EnemyBuild_getObj_m82 (EnemyBuild_t28 * __this, String_t* ___objType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyBuild::createObj(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C" void EnemyBuild_createObj_m83 (EnemyBuild_t28 * __this, GameObject_t4 * ___obj, Vector2_t72  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
