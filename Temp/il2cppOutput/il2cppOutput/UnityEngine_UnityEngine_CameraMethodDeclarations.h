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

// UnityEngine.Camera
struct Camera_t139;
// UnityEngine.RenderTexture
struct RenderTexture_t441;
// UnityEngine.Camera[]
struct CameraU5BU5D_t580;
// UnityEngine.GameObject
struct GameObject_t3;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"

// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m1730 (Camera_t139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m1729 (Camera_t139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m1628 (Camera_t139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m1743 (Camera_t139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m2579 (Camera_t139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C" Rect_t72  Camera_get_pixelRect_m2580 (Camera_t139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m2581 (Camera_t139 * __this, Rect_t72 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t441 * Camera_get_targetTexture_m2582 (Camera_t139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m2583 (Camera_t139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t24  Camera_ScreenToViewportPoint_m1908 (Camera_t139 * __this, Vector3_t24  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t24  Camera_INTERNAL_CALL_ScreenToViewportPoint_m2584 (Object_t * __this /* static, unused */, Camera_t139 * ___self, Vector3_t24 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t347  Camera_ScreenPointToRay_m1728 (Camera_t139 * __this, Vector3_t24  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t347  Camera_INTERNAL_CALL_ScreenPointToRay_m2585 (Object_t * __this /* static, unused */, Camera_t139 * ___self, Vector3_t24 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t139 * Camera_get_main_m1742 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m2586 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C" int32_t Camera_GetAllCameras_m2587 (Object_t * __this /* static, unused */, CameraU5BU5D_t580* ___cameras, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern "C" void Camera_FireOnPreCull_m2588 (Object_t * __this /* static, unused */, Camera_t139 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPreRender_m2589 (Object_t * __this /* static, unused */, Camera_t139 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPostRender_m2590 (Object_t * __this /* static, unused */, Camera_t139 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t3 * Camera_RaycastTry_m2591 (Camera_t139 * __this, Ray_t347  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" GameObject_t3 * Camera_INTERNAL_CALL_RaycastTry_m2592 (Object_t * __this /* static, unused */, Camera_t139 * ___self, Ray_t347 * ___ray, float ___distance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t3 * Camera_RaycastTry2D_m2593 (Camera_t139 * __this, Ray_t347  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t3 * Camera_INTERNAL_CALL_RaycastTry2D_m2594 (Object_t * __this /* static, unused */, Camera_t139 * ___self, Ray_t347 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
