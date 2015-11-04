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

// UnityEngine.Mesh
struct Mesh_t181;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t197;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t291;
// System.Object
struct Object_t;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t403;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t294;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t196;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t293;
// UnityEngine.Color32[]
struct Color32U5BU5D_t402;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t292;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t295;
// System.Int32[]
struct Int32U5BU5D_t404;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m1870 (Mesh_t181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m2315 (Object_t * __this /* static, unused */, Mesh_t181 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
extern "C" void Mesh_Clear_m2316 (Mesh_t181 * __this, bool ___keepVertexLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C" void Mesh_Clear_m2200 (Mesh_t181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C" Vector3U5BU5D_t197* Mesh_get_vertices_m2187 (Mesh_t181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" void Mesh_SetVertices_m2201 (Mesh_t181 * __this, List_1_t291 * ___inVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVerticesInternal(System.Object)
extern "C" void Mesh_SetVerticesInternal_m2317 (Mesh_t181 * __this, Object_t * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C" Vector3U5BU5D_t197* Mesh_get_normals_m2194 (Mesh_t181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" void Mesh_SetNormals_m2204 (Mesh_t181 * __this, List_1_t291 * ___inNormals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormalsInternal(System.Object)
extern "C" void Mesh_SetNormalsInternal_m2318 (Mesh_t181 * __this, Object_t * ___normals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
extern "C" Vector4U5BU5D_t403* Mesh_get_tangents_m2195 (Mesh_t181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C" void Mesh_SetTangents_m2205 (Mesh_t181 * __this, List_1_t294 * ___inTangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangentsInternal(System.Object)
extern "C" void Mesh_SetTangentsInternal_m2319 (Mesh_t181 * __this, Object_t * ___tangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C" Vector2U5BU5D_t196* Mesh_get_uv_m2191 (Mesh_t181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv2()
extern "C" Vector2U5BU5D_t196* Mesh_get_uv2_m2193 (Mesh_t181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C" void Mesh_SetUVs_m2203 (Mesh_t181 * __this, int32_t ___channel, List_1_t293 * ___uvs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVInternal(System.Object,System.Int32,System.Int32)
extern "C" void Mesh_SetUVInternal_m2320 (Mesh_t181 * __this, Object_t * ___uvs, int32_t ___channel, int32_t ___dim, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Mesh::get_colors32()
extern "C" Color32U5BU5D_t402* Mesh_get_colors32_m2189 (Mesh_t181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors(System.Collections.Generic.List`1<UnityEngine.Color32>)
extern "C" void Mesh_SetColors_m2202 (Mesh_t181 * __this, List_1_t292 * ___inColors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors32Internal(System.Object)
extern "C" void Mesh_SetColors32Internal_m2321 (Mesh_t181 * __this, Object_t * ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C" void Mesh_RecalculateBounds_m2207 (Mesh_t181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
extern "C" void Mesh_SetTriangles_m2206 (Mesh_t181 * __this, List_1_t295 * ___inTriangles, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTrianglesInternal(System.Object,System.Int32)
extern "C" void Mesh_SetTrianglesInternal_m2322 (Mesh_t181 * __this, Object_t * ___triangles, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32)
extern "C" Int32U5BU5D_t404* Mesh_GetIndices_m2197 (Mesh_t181 * __this, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
