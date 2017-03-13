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

// Enemy
struct Enemy_t1088811588;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Ienemy
struct Ienemy_t1554599973;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"

// System.Void Enemy::.ctor()
extern "C"  void Enemy__ctor_m2474411757 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Death()
extern "C"  void Enemy_Death_m3128331729 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Enemy::get_IsDead()
extern "C"  bool Enemy_get_IsDead_m1396538206 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Enemy::TakeDamage()
extern "C"  Il2CppObject * Enemy_TakeDamage_m3220086127 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Enemy::get_Target()
extern "C"  GameObject_t1756533147 * Enemy_get_Target_m268973216 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::set_Target(UnityEngine.GameObject)
extern "C"  void Enemy_set_Target_m628586885 (Enemy_t1088811588 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Enemy::get_InAttackRange()
extern "C"  bool Enemy_get_InAttackRange_m1840039710 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Enemy::get_InThrowRange()
extern "C"  bool Enemy_get_InThrowRange_m334621270 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Start()
extern "C"  void Enemy_Start_m4271536181 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::LookAtTarget()
extern "C"  void Enemy_LookAtTarget_m3338472552 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Update()
extern "C"  void Enemy_Update_m1726793138 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::ChangeState(Ienemy)
extern "C"  void Enemy_ChangeState_m3766430951 (Enemy_t1088811588 * __this, Il2CppObject * ___newState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Move()
extern "C"  void Enemy_Move_m1768179118 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Enemy::GetDirection()
extern "C"  Vector2_t2243707579  Enemy_GetDirection_m699380205 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::OntriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Enemy_OntriggerEnter2D_m2055607325 (Enemy_t1088811588 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
