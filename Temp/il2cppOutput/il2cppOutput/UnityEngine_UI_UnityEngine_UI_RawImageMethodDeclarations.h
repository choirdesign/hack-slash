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

// UnityEngine.UI.RawImage
struct RawImage_t231;
// UnityEngine.Texture
struct Texture_t232;
// UnityEngine.Mesh
struct Mesh_t184;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.RawImage::.ctor()
extern "C" void RawImage__ctor_m1038 (RawImage_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_mainTexture()
extern "C" Texture_t232 * RawImage_get_mainTexture_m1039 (RawImage_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
extern "C" Texture_t232 * RawImage_get_texture_m1040 (RawImage_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
extern "C" void RawImage_set_texture_m1041 (RawImage_t231 * __this, Texture_t232 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.RawImage::get_uvRect()
extern "C" Rect_t72  RawImage_get_uvRect_m1042 (RawImage_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_uvRect(UnityEngine.Rect)
extern "C" void RawImage_set_uvRect_m1043 (RawImage_t231 * __this, Rect_t72  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::SetNativeSize()
extern "C" void RawImage_SetNativeSize_m1044 (RawImage_t231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::OnPopulateMesh(UnityEngine.Mesh)
extern "C" void RawImage_OnPopulateMesh_m1045 (RawImage_t231 * __this, Mesh_t184 * ___toFill, const MethodInfo* method) IL2CPP_METHOD_ATTR;
