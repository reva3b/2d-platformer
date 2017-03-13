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
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t502196753;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t3205633421;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t318414488;
// System.MarshalByRefObject
struct MarshalByRefObject_t1285298191;
// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t3663008028;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_Context502196753.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_MarshalByRefObject1285298191.h"

// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C"  void ServerIdentity__ctor_m1576469955 (ServerIdentity_t1656058977 * __this, String_t* ___objectUri0, Context_t502196753 * ___context1, Type_t * ___objectType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
extern "C"  Type_t * ServerIdentity_get_ObjectType_m2310936373 (ServerIdentity_t1656058977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::StartTrackingLifetime(System.Runtime.Remoting.Lifetime.ILease)
extern "C"  void ServerIdentity_StartTrackingLifetime_m2979905325 (ServerIdentity_t1656058977 * __this, Il2CppObject * ___lease0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::OnLifetimeExpired()
extern "C"  void ServerIdentity_OnLifetimeExpired_m3275432040 (ServerIdentity_t1656058977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
extern "C"  ObjRef_t318414488 * ServerIdentity_CreateObjRef_m1056204803 (ServerIdentity_t1656058977 * __this, Type_t * ___requestedType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::AttachServerObject(System.MarshalByRefObject,System.Runtime.Remoting.Contexts.Context)
extern "C"  void ServerIdentity_AttachServerObject_m820541069 (ServerIdentity_t1656058977 * __this, MarshalByRefObject_t1285298191 * ___serverObject0, Context_t502196753 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Lifetime.Lease System.Runtime.Remoting.ServerIdentity::get_Lease()
extern "C"  Lease_t3663008028 * ServerIdentity_get_Lease_m1487526102 (ServerIdentity_t1656058977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::DisposeServerObject()
extern "C"  void ServerIdentity_DisposeServerObject_m2882442022 (ServerIdentity_t1656058977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
