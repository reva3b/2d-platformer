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

// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t2863394393;
// System.Threading.WaitHandle
struct WaitHandle_t677569169;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t2724438238;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_WaitHandle677569169.h"
#include "mscorlib_System_Threading_WaitOrTimerCallback2724438238.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.Void System.Threading.RegisteredWaitHandle::.ctor(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C"  void RegisteredWaitHandle__ctor_m267368504 (RegisteredWaitHandle_t2863394393 * __this, WaitHandle_t677569169 * ___waitObject0, WaitOrTimerCallback_t2724438238 * ___callback1, Il2CppObject * ___state2, TimeSpan_t3430258949  ___timeout3, bool ___executeOnlyOnce4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::Wait(System.Object)
extern "C"  void RegisteredWaitHandle_Wait_m1577159487 (RegisteredWaitHandle_t2863394393 * __this, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::DoCallBack(System.Object)
extern "C"  void RegisteredWaitHandle_DoCallBack_m277534842 (RegisteredWaitHandle_t2863394393 * __this, Il2CppObject * ___timedOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
