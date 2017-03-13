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

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1656058977;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_Runtime_Remoting_ServerIdentity1656058977.h"

// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::.cctor()
extern "C"  void LifetimeServices__cctor_m2764553769 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_LeaseManagerPollTime()
extern "C"  TimeSpan_t3430258949  LifetimeServices_get_LeaseManagerPollTime_m1828355433 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseManagerPollTime(System.TimeSpan)
extern "C"  void LifetimeServices_set_LeaseManagerPollTime_m3919998154 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_LeaseTime()
extern "C"  TimeSpan_t3430258949  LifetimeServices_get_LeaseTime_m1234206881 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseTime(System.TimeSpan)
extern "C"  void LifetimeServices_set_LeaseTime_m1487876644 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_RenewOnCallTime()
extern "C"  TimeSpan_t3430258949  LifetimeServices_get_RenewOnCallTime_m3359574203 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_RenewOnCallTime(System.TimeSpan)
extern "C"  void LifetimeServices_set_RenewOnCallTime_m3507481746 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_SponsorshipTimeout()
extern "C"  TimeSpan_t3430258949  LifetimeServices_get_SponsorshipTimeout_m2853018055 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_SponsorshipTimeout(System.TimeSpan)
extern "C"  void LifetimeServices_set_SponsorshipTimeout_m1403222216 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern "C"  void LifetimeServices_TrackLifetime_m2757573867 (Il2CppObject * __this /* static, unused */, ServerIdentity_t1656058977 * ___identity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
