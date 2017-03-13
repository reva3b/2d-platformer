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

// Idle
struct Idle_t538098526;
// Enemy
struct Enemy_t1088811588;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Enemy1088811588.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"

// System.Void Idle::.ctor()
extern "C"  void Idle__ctor_m3167654731 (Idle_t538098526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Idle::execute()
extern "C"  void Idle_execute_m3204784482 (Idle_t538098526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Idle::Enter(Enemy)
extern "C"  void Idle_Enter_m1520969561 (Idle_t538098526 * __this, Enemy_t1088811588 * ___enemy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Idle::Exit()
extern "C"  void Idle_Exit_m2947068331 (Idle_t538098526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Idle::OnTriggerEnter(UnityEngine.Collider2D)
extern "C"  void Idle_OnTriggerEnter_m3535483861 (Idle_t538098526 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Idle::idle()
extern "C"  void Idle_idle_m1789322019 (Idle_t538098526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
