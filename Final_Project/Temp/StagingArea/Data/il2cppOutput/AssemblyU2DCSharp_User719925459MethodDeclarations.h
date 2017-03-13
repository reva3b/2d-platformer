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

// User
struct User_t719925459;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"

// System.Void User::.ctor()
extern "C"  void User__ctor_m2333596438 (User_t719925459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void User::Death()
extern "C"  void User_Death_m2715599700 (User_t719925459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean User::get_IsDead()
extern "C"  bool User_get_IsDead_m2119609621 (User_t719925459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator User::TakeDamage()
extern "C"  Il2CppObject * User_TakeDamage_m3434856234 (User_t719925459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean User::get_IsPlayerAttacking()
extern "C"  bool User_get_IsPlayerAttacking_m856296272 (User_t719925459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void User::set_IsPlayerAttacking(System.Boolean)
extern "C"  void User_set_IsPlayerAttacking_m104142129 (User_t719925459 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void User::Start()
extern "C"  void User_Start_m644903954 (User_t719925459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void User::Update()
extern "C"  void User_Update_m103022527 (User_t719925459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void User::FixedUpdate()
extern "C"  void User_FixedUpdate_m4186275977 (User_t719925459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void User::HandlePlayerAnimatorLayers()
extern "C"  void User_HandlePlayerAnimatorLayers_m1250342704 (User_t719925459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void User::HandlePlayerKeyPress()
extern "C"  void User_HandlePlayerKeyPress_m2300337975 (User_t719925459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void User::ResetAllPlayerValues()
extern "C"  void User_ResetAllPlayerValues_m2248901885 (User_t719925459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void User::MovePlayer(System.Single)
extern "C"  void User_MovePlayer_m2123345309 (User_t719925459 * __this, float ___horizontalAxisValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void User::FlipPlayer(System.Single)
extern "C"  void User_FlipPlayer_m2247021743 (User_t719925459 * __this, float ___horizontalAxisValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void User::PlayerAttacks()
extern "C"  void User_PlayerAttacks_m2139583424 (User_t719925459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean User::IsPlayerGrounded()
extern "C"  bool User_IsPlayerGrounded_m2782009991 (User_t719925459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void User::FireBullet()
extern "C"  void User_FireBullet_m149106220 (User_t719925459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean User::CheckIfPlayerDead()
extern "C"  bool User_CheckIfPlayerDead_m1345755020 (User_t719925459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void User::PlayerTakeDamage()
extern "C"  void User_PlayerTakeDamage_m157648409 (User_t719925459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void User::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void User_OnCollisionEnter2D_m3455467044 (User_t719925459 * __this, Collision2D_t1539500754 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void User::.cctor()
extern "C"  void User__cctor_m1861548261 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
