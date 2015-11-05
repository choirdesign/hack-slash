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

// UnityEngine.Sprite
struct Sprite_t75;
// UnityEngine.Texture2D
struct Texture2D_t33;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_SpriteMeshType.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2)
extern "C" Sprite_t75 * Sprite_Create_m227 (Object_t * __this /* static, unused */, Texture2D_t33 * ___texture, Rect_t72  ___rect, Vector2_t57  ___pivot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.Sprite::INTERNAL_CALL_Create(UnityEngine.Texture2D,UnityEngine.Rect&,UnityEngine.Vector2&,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4&)
extern "C" Sprite_t75 * Sprite_INTERNAL_CALL_Create_m2556 (Object_t * __this /* static, unused */, Texture2D_t33 * ___texture, Rect_t72 * ___rect, Vector2_t57 * ___pivot, float ___pixelsPerUnit, uint32_t ___extrude, int32_t ___meshType, Vector4_t299 * ___border, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
extern "C" Rect_t72  Sprite_get_rect_m1939 (Sprite_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void Sprite_INTERNAL_get_rect_m2557 (Sprite_t75 * __this, Rect_t72 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern "C" float Sprite_get_pixelsPerUnit_m1934 (Sprite_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C" Texture2D_t33 * Sprite_get_texture_m1931 (Sprite_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern "C" Rect_t72  Sprite_get_textureRect_m1955 (Sprite_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_textureRect(UnityEngine.Rect&)
extern "C" void Sprite_INTERNAL_get_textureRect_m2558 (Sprite_t75 * __this, Rect_t72 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern "C" Vector4_t299  Sprite_get_border_m1932 (Sprite_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_border(UnityEngine.Vector4&)
extern "C" void Sprite_INTERNAL_get_border_m2559 (Sprite_t75 * __this, Vector4_t299 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
