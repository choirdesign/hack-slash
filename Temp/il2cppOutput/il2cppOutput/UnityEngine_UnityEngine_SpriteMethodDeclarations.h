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
struct Sprite_t72;
// UnityEngine.Texture2D
struct Texture2D_t30;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_SpriteMeshType.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2)
extern "C" Sprite_t72 * Sprite_Create_m213 (Object_t * __this /* static, unused */, Texture2D_t30 * ___texture, Rect_t68  ___rect, Vector2_t55  ___pivot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.Sprite::INTERNAL_CALL_Create(UnityEngine.Texture2D,UnityEngine.Rect&,UnityEngine.Vector2&,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4&)
extern "C" Sprite_t72 * Sprite_INTERNAL_CALL_Create_m2541 (Object_t * __this /* static, unused */, Texture2D_t30 * ___texture, Rect_t68 * ___rect, Vector2_t55 * ___pivot, float ___pixelsPerUnit, uint32_t ___extrude, int32_t ___meshType, Vector4_t296 * ___border, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
extern "C" Rect_t68  Sprite_get_rect_m1924 (Sprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void Sprite_INTERNAL_get_rect_m2542 (Sprite_t72 * __this, Rect_t68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern "C" float Sprite_get_pixelsPerUnit_m1919 (Sprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C" Texture2D_t30 * Sprite_get_texture_m1916 (Sprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern "C" Rect_t68  Sprite_get_textureRect_m1940 (Sprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_textureRect(UnityEngine.Rect&)
extern "C" void Sprite_INTERNAL_get_textureRect_m2543 (Sprite_t72 * __this, Rect_t68 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern "C" Vector4_t296  Sprite_get_border_m1917 (Sprite_t72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_border(UnityEngine.Vector4&)
extern "C" void Sprite_INTERNAL_get_border_m2544 (Sprite_t72 * __this, Vector4_t296 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
