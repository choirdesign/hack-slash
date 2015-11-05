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

// UnityEngine.UI.VertexHelper
struct VertexHelper_t293;
// UnityEngine.Mesh
struct Mesh_t184;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t216;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t329;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UIVertex.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Color32.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UnityEngine.UI.VertexHelper::.ctor()
extern "C" void VertexHelper__ctor_m1586 (VertexHelper_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::.ctor(UnityEngine.Mesh)
extern "C" void VertexHelper__ctor_m1587 (VertexHelper_t293 * __this, Mesh_t184 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::.cctor()
extern "C" void VertexHelper__cctor_m1588 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
extern "C" int32_t VertexHelper_get_currentVertCount_m1589 (VertexHelper_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::PopulateUIVertex(UnityEngine.UIVertex&,System.Int32)
extern "C" void VertexHelper_PopulateUIVertex_m1590 (VertexHelper_t293 * __this, UIVertex_t222 * ___vertex, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::FillMesh(UnityEngine.Mesh)
extern "C" void VertexHelper_FillMesh_m1591 (VertexHelper_t293 * __this, Mesh_t184 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::Dispose()
extern "C" void VertexHelper_Dispose_m1592 (VertexHelper_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector3,UnityEngine.Vector4)
extern "C" void VertexHelper_AddVert_m1593 (VertexHelper_t293 * __this, Vector3_t24  ___position, Color32_t331  ___color, Vector2_t57  ___uv0, Vector2_t57  ___uv1, Vector3_t24  ___normal, Vector4_t299  ___tangent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2)
extern "C" void VertexHelper_AddVert_m1594 (VertexHelper_t293 * __this, Vector3_t24  ___position, Color32_t331  ___color, Vector2_t57  ___uv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.UIVertex)
extern "C" void VertexHelper_AddVert_m1595 (VertexHelper_t293 * __this, UIVertex_t222  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddTriangle(System.Int32,System.Int32,System.Int32)
extern "C" void VertexHelper_AddTriangle_m1596 (VertexHelper_t293 * __this, int32_t ___idx0, int32_t ___idx1, int32_t ___idx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexQuad(UnityEngine.UIVertex[])
extern "C" void VertexHelper_AddUIVertexQuad_m1597 (VertexHelper_t293 * __this, UIVertexU5BU5D_t216* ___verts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void VertexHelper_AddUIVertexTriangleStream_m1598 (VertexHelper_t293 * __this, List_1_t329 * ___verts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void VertexHelper_GetUIVertexStream_m1599 (VertexHelper_t293 * __this, List_1_t329 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
