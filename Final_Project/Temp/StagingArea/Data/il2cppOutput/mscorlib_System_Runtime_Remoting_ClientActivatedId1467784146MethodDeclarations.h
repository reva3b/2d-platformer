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

// System.Runtime.Remoting.ClientActivatedIdentity
struct ClientActivatedIdentity_t1467784146;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.MarshalByRefObject
struct MarshalByRefObject_t1285298191;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.Runtime.Remoting.ClientActivatedIdentity::.ctor(System.String,System.Type)
extern "C"  void ClientActivatedIdentity__ctor_m1294973613 (ClientActivatedIdentity_t1467784146 * __this, String_t* ___objectUri0, Type_t * ___objectType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientActivatedIdentity::GetServerObject()
extern "C"  MarshalByRefObject_t1285298191 * ClientActivatedIdentity_GetServerObject_m3122151757 (ClientActivatedIdentity_t1467784146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientActivatedIdentity::OnLifetimeExpired()
extern "C"  void ClientActivatedIdentity_OnLifetimeExpired_m3829666701 (ClientActivatedIdentity_t1467784146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
