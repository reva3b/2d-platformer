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

// patrol
struct patrol_t3707319898;
// Enemy
struct Enemy_t1088811588;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Enemy1088811588.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"

// System.Void patrol::.ctor()
extern "C"  void patrol__ctor_m227304283 (patrol_t3707319898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void patrol::execute()
extern "C"  void patrol_execute_m2570952046 (patrol_t3707319898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void patrol::Enter(Enemy)
extern "C"  void patrol_Enter_m2100635829 (patrol_t3707319898 * __this, Enemy_t1088811588 * ___enemy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void patrol::Exit()
extern "C"  void patrol_Exit_m4209291523 (patrol_t3707319898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void patrol::OnTriggerEnter(UnityEngine.Collider2D)
extern "C"  void patrol_OnTriggerEnter_m3376517201 (patrol_t3707319898 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void patrol::Patrol()
extern "C"  void patrol_Patrol_m139979683 (patrol_t3707319898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
