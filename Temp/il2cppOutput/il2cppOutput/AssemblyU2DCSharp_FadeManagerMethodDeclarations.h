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

// FadeManager
struct FadeManager_t36;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t64;

#include "codegen/il2cpp-codegen.h"

// System.Void FadeManager::.ctor()
extern "C" void FadeManager__ctor_m89 (FadeManager_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeManager::Awake()
extern "C" void FadeManager_Awake_m90 (FadeManager_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeManager::OnGUI()
extern "C" void FadeManager_OnGUI_m91 (FadeManager_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeManager::LoadLevel(System.String,System.Single)
extern "C" void FadeManager_LoadLevel_m92 (FadeManager_t36 * __this, String_t* ___scene, float ___interval, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator FadeManager::TransScene(System.String,System.Single)
extern "C" Object_t * FadeManager_TransScene_m93 (FadeManager_t36 * __this, String_t* ___scene, float ___interval, const MethodInfo* method) IL2CPP_METHOD_ATTR;
