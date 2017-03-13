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

// Attack
struct Attack_t3423014084;
// Enemy
struct Enemy_t1088811588;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Enemy1088811588.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"

// System.Void Attack::.ctor()
extern "C"  void Attack__ctor_m2905938363 (Attack_t3423014084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Attack::execute()
extern "C"  void Attack_execute_m1999113236 (Attack_t3423014084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Attack::Enter(Enemy)
extern "C"  void Attack_Enter_m195635325 (Attack_t3423014084 * __this, Enemy_t1088811588 * ___enemy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Attack::Exit()
extern "C"  void Attack_Exit_m1652128947 (Attack_t3423014084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Attack::OnTriggerEnter(UnityEngine.Collider2D)
extern "C"  void Attack_OnTriggerEnter_m3326467641 (Attack_t3423014084 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Attack::attack()
extern "C"  void Attack_attack_m1966832611 (Attack_t3423014084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
