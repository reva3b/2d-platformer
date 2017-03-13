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

// range
struct range_t624912309;
// Enemy
struct Enemy_t1088811588;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Enemy1088811588.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"

// System.Void range::.ctor()
extern "C"  void range__ctor_m1011783132 (range_t624912309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void range::execute()
extern "C"  void range_execute_m3209206659 (range_t624912309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void range::Enter(Enemy)
extern "C"  void range_Enter_m3467218180 (range_t624912309 * __this, Enemy_t1088811588 * ___enemy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void range::Exit()
extern "C"  void range_Exit_m1553958926 (range_t624912309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void range::OnTriggerEnter(UnityEngine.Collider2D)
extern "C"  void range_OnTriggerEnter_m3363976218 (range_t624912309 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void range::ThrowKnife()
extern "C"  void range_ThrowKnife_m1151614993 (range_t624912309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
