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

// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t3070747799;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Runtime.Serialization.ObjectIDGenerator::.ctor()
extern "C"  void ObjectIDGenerator__ctor_m278693416 (ObjectIDGenerator_t3070747799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectIDGenerator::.cctor()
extern "C"  void ObjectIDGenerator__cctor_m3537626169 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::GetId(System.Object,System.Boolean&)
extern "C"  int64_t ObjectIDGenerator_GetId_m2773988387 (ObjectIDGenerator_t3070747799 * __this, Il2CppObject * ___obj0, bool* ___firstTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::get_NextId()
extern "C"  int64_t ObjectIDGenerator_get_NextId_m774325974 (ObjectIDGenerator_t3070747799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
