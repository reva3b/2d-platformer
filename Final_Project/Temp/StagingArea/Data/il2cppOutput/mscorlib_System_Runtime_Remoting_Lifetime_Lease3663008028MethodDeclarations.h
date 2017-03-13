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

// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t3663008028;
// System.Runtime.Remoting.Lifetime.ISponsor
struct ISponsor_t2140934449;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseState83447469.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Runtime.Remoting.Lifetime.Lease::.ctor()
extern "C"  void Lease__ctor_m1998787561 (Lease_t3663008028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::get_CurrentLeaseTime()
extern "C"  TimeSpan_t3430258949  Lease_get_CurrentLeaseTime_m3991965175 (Lease_t3663008028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::get_CurrentState()
extern "C"  int32_t Lease_get_CurrentState_m2904545479 (Lease_t3663008028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::Activate()
extern "C"  void Lease_Activate_m2883090984 (Lease_t3663008028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_InitialLeaseTime(System.TimeSpan)
extern "C"  void Lease_set_InitialLeaseTime_m4143816219 (Lease_t3663008028 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_RenewOnCallTime(System.TimeSpan)
extern "C"  void Lease_set_RenewOnCallTime_m2942016623 (Lease_t3663008028 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_SponsorshipTimeout(System.TimeSpan)
extern "C"  void Lease_set_SponsorshipTimeout_m1892549099 (Lease_t3663008028 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::Renew(System.TimeSpan)
extern "C"  TimeSpan_t3430258949  Lease_Renew_m885615341 (Lease_t3663008028 * __this, TimeSpan_t3430258949  ___renewalTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::Unregister(System.Runtime.Remoting.Lifetime.ISponsor)
extern "C"  void Lease_Unregister_m3231982373 (Lease_t3663008028 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::UpdateState()
extern "C"  void Lease_UpdateState_m1274513087 (Lease_t3663008028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::CheckNextSponsor()
extern "C"  void Lease_CheckNextSponsor_m918996304 (Lease_t3663008028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::ProcessSponsorResponse(System.Object,System.Boolean)
extern "C"  void Lease_ProcessSponsorResponse_m1322070924 (Lease_t3663008028 * __this, Il2CppObject * ___state0, bool ___timedOut1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
