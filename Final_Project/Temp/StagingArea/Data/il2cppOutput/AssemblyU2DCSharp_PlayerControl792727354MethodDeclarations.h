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

// PlayerControl
struct PlayerControl_t792727354;
// HandlePlayerDeadEvent
struct HandlePlayerDeadEvent_t1954397659;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_HandlePlayerDeadEvent1954397659.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"

// System.Void PlayerControl::.ctor()
extern "C"  void PlayerControl__ctor_m4206630767 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::add_PlayerDead(HandlePlayerDeadEvent)
extern "C"  void PlayerControl_add_PlayerDead_m878047955 (PlayerControl_t792727354 * __this, HandlePlayerDeadEvent_t1954397659 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::remove_PlayerDead(HandlePlayerDeadEvent)
extern "C"  void PlayerControl_remove_PlayerDead_m679566054 (PlayerControl_t792727354 * __this, HandlePlayerDeadEvent_t1954397659 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::Awake()
extern "C"  void PlayerControl_Awake_m1232832358 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::Start()
extern "C"  void PlayerControl_Start_m3254241707 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::Update()
extern "C"  void PlayerControl_Update_m3533035396 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::FixedUpdate()
extern "C"  void PlayerControl_FixedUpdate_m1918381310 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerControl::ChangeSceneIfPlayerDead()
extern "C"  Il2CppObject * PlayerControl_ChangeSceneIfPlayerDead_m1287973309 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::HandlePlayerAnimatorLayers()
extern "C"  void PlayerControl_HandlePlayerAnimatorLayers_m3025061297 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::HandlePlayerKeyPress()
extern "C"  void PlayerControl_HandlePlayerKeyPress_m1029298684 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::ResetAllPlayerValues()
extern "C"  void PlayerControl_ResetAllPlayerValues_m66727528 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::MovePlayer(System.Single)
extern "C"  void PlayerControl_MovePlayer_m1978823354 (PlayerControl_t792727354 * __this, float ___horizontalAxisValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::SetPlayerBoxColliderValue()
extern "C"  void PlayerControl_SetPlayerBoxColliderValue_m1291391822 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::ResetPlayerBoxColliderValue()
extern "C"  void PlayerControl_ResetPlayerBoxColliderValue_m1935333381 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::FlipPlayer(System.Single)
extern "C"  void PlayerControl_FlipPlayer_m1502815180 (PlayerControl_t792727354 * __this, float ___horizontalAxisValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::PlayerAttacks()
extern "C"  void PlayerControl_PlayerAttacks_m1626915719 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerControl::IsPlayerGrounded()
extern "C"  bool PlayerControl_IsPlayerGrounded_m3275676712 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::FireBullet()
extern "C"  void PlayerControl_FireBullet_m2303031109 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerControl::CheckIfPlayerDead()
extern "C"  bool PlayerControl_CheckIfPlayerDead_m2294725585 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerControl::PlayerTakeDamage()
extern "C"  Il2CppObject * PlayerControl_PlayerTakeDamage_m3038938166 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerControl::IndicatePlayerIsImmortal()
extern "C"  Il2CppObject * PlayerControl_IndicatePlayerIsImmortal_m3170616902 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::WhenPlayerIsDead()
extern "C"  void PlayerControl_WhenPlayerIsDead_m3895165198 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::RespawnPlayer()
extern "C"  void PlayerControl_RespawnPlayer_m4094753204 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void PlayerControl_OnCollisionEnter2D_m1503360437 (PlayerControl_t792727354 * __this, Collision2D_t1539500754 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::.cctor()
extern "C"  void PlayerControl__cctor_m596885520 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
