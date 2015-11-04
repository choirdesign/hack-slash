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

// UnityEngine.Event
struct Event_t216;
struct Event_t216_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_EventType.h"
#include "UnityEngine_UnityEngine_EventModifiers.h"
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UnityEngine.Event::.ctor()
extern "C" void Event__ctor_m1950 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::.ctor(UnityEngine.Event)
extern "C" void Event__ctor_m2908 (Event_t216 * __this, Event_t216 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::.ctor(System.IntPtr)
extern "C" void Event__ctor_m2909 (Event_t216 * __this, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Finalize()
extern "C" void Event_Finalize_m2910 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" Vector2_t55  Event_get_mousePosition_m2911 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_mousePosition(UnityEngine.Vector2)
extern "C" void Event_set_mousePosition_m2912 (Event_t216 * __this, Vector2_t55  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
extern "C" Vector2_t55  Event_get_delta_m2913 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_delta(UnityEngine.Vector2)
extern "C" void Event_set_delta_m2914 (Event_t216 * __this, Vector2_t55  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Event::get_mouseRay()
extern "C" Ray_t345  Event_get_mouseRay_m2915 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_mouseRay(UnityEngine.Ray)
extern "C" void Event_set_mouseRay_m2916 (Event_t216 * __this, Ray_t345  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_shift()
extern "C" bool Event_get_shift_m2917 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_shift(System.Boolean)
extern "C" void Event_set_shift_m2918 (Event_t216 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_control()
extern "C" bool Event_get_control_m2919 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_control(System.Boolean)
extern "C" void Event_set_control_m2920 (Event_t216 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_alt()
extern "C" bool Event_get_alt_m2921 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_alt(System.Boolean)
extern "C" void Event_set_alt_m2922 (Event_t216 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_command()
extern "C" bool Event_get_command_m2923 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_command(System.Boolean)
extern "C" void Event_set_command_m2924 (Event_t216 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_capsLock()
extern "C" bool Event_get_capsLock_m2925 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_capsLock(System.Boolean)
extern "C" void Event_set_capsLock_m2926 (Event_t216 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_numeric()
extern "C" bool Event_get_numeric_m2927 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_numeric(System.Boolean)
extern "C" void Event_set_numeric_m2928 (Event_t216 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_functionKey()
extern "C" bool Event_get_functionKey_m2929 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::get_current()
extern "C" Event_t216 * Event_get_current_m2930 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_current(UnityEngine.Event)
extern "C" void Event_set_current_m2931 (Object_t * __this /* static, unused */, Event_t216 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
extern "C" void Event_Internal_MakeMasterEventCurrent_m2932 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" bool Event_get_isKey_m2933 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" bool Event_get_isMouse_m2934 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::KeyboardEvent(System.String)
extern "C" Event_t216 * Event_KeyboardEvent_m2935 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetHashCode()
extern "C" int32_t Event_GetHashCode_m2936 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern "C" bool Event_Equals_m2937 (Event_t216 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::ToString()
extern "C" String_t* Event_ToString_m2938 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Init()
extern "C" void Event_Init_m2939 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Cleanup()
extern "C" void Event_Cleanup_m2940 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::InitCopy(UnityEngine.Event)
extern "C" void Event_InitCopy_m2941 (Event_t216 * __this, Event_t216 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::InitPtr(System.IntPtr)
extern "C" void Event_InitPtr_m2942 (Event_t216 * __this, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern "C" int32_t Event_get_rawType_m1989 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" int32_t Event_get_type_m1990 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_type(UnityEngine.EventType)
extern "C" void Event_set_type_m2943 (Event_t216 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::GetTypeForControl(System.Int32)
extern "C" int32_t Event_GetTypeForControl_m2944 (Event_t216 * __this, int32_t ___controlID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetMousePosition(UnityEngine.Vector2)
extern "C" void Event_Internal_SetMousePosition_m2945 (Event_t216 * __this, Vector2_t55  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::INTERNAL_CALL_Internal_SetMousePosition(UnityEngine.Event,UnityEngine.Vector2&)
extern "C" void Event_INTERNAL_CALL_Internal_SetMousePosition_m2946 (Object_t * __this /* static, unused */, Event_t216 * ___self, Vector2_t55 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMousePosition_m2947 (Event_t216 * __this, Vector2_t55 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetMouseDelta(UnityEngine.Vector2)
extern "C" void Event_Internal_SetMouseDelta_m2948 (Event_t216 * __this, Vector2_t55  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::INTERNAL_CALL_Internal_SetMouseDelta(UnityEngine.Event,UnityEngine.Vector2&)
extern "C" void Event_INTERNAL_CALL_Internal_SetMouseDelta_m2949 (Object_t * __this /* static, unused */, Event_t216 * ___self, Vector2_t55 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMouseDelta(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMouseDelta_m2950 (Event_t216 * __this, Vector2_t55 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::get_button()
extern "C" int32_t Event_get_button_m2951 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_button(System.Int32)
extern "C" void Event_set_button_m2952 (Event_t216 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" int32_t Event_get_modifiers_m1985 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)
extern "C" void Event_set_modifiers_m2953 (Event_t216 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Event::get_pressure()
extern "C" float Event_get_pressure_m2954 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_pressure(System.Single)
extern "C" void Event_set_pressure_m2955 (Event_t216 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::get_clickCount()
extern "C" int32_t Event_get_clickCount_m2956 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_clickCount(System.Int32)
extern "C" void Event_set_clickCount_m2957 (Event_t216 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Event::get_character()
extern "C" uint16_t Event_get_character_m1987 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_character(System.Char)
extern "C" void Event_set_character_m2958 (Event_t216 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::get_commandName()
extern "C" String_t* Event_get_commandName_m1991 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_commandName(System.String)
extern "C" void Event_set_commandName_m2959 (Event_t216 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" int32_t Event_get_keyCode_m1986 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)
extern "C" void Event_set_keyCode_m2960 (Event_t216 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" void Event_Internal_SetNativeEvent_m2961 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Use()
extern "C" void Event_Use_m2962 (Event_t216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
extern "C" bool Event_PopEvent_m1993 (Object_t * __this /* static, unused */, Event_t216 * ___outEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetEventCount()
extern "C" int32_t Event_GetEventCount_m2963 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Event_t216_marshal(const Event_t216& unmarshaled, Event_t216_marshaled& marshaled);
extern "C" void Event_t216_marshal_back(const Event_t216_marshaled& marshaled, Event_t216& unmarshaled);
extern "C" void Event_t216_marshal_cleanup(Event_t216_marshaled& marshaled);
