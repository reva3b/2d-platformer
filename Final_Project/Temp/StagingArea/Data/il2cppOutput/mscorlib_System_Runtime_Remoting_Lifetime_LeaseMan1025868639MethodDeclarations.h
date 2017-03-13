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

// System.Runtime.Remoting.Lifetime.LeaseManager
struct LeaseManager_t1025868639;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1656058977;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_Runtime_Remoting_ServerIdentity1656058977.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::.ctor()
extern "C"  void LeaseManager__ctor_m2166901364 (LeaseManager_t1025868639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::SetPollTime(System.TimeSpan)
extern "C"  void LeaseManager_SetPollTime_m3137304074 (LeaseManager_t1025868639 * __this, TimeSpan_t3430258949  ___timeSpan0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern "C"  void LeaseManager_TrackLifetime_m2369913799 (LeaseManager_t1025868639 * __this, ServerIdentity_t1656058977 * ___identity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StartManager()
extern "C"  void LeaseManager_StartManager_m281998993 (LeaseManager_t1025868639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StopManager()
extern "C"  void LeaseManager_StopManager_m2176663593 (LeaseManager_t1025868639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::ManageLeases(System.Object)
extern "C"  void LeaseManager_ManageLeases_m3356404918 (LeaseManager_t1025868639 * __this, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
