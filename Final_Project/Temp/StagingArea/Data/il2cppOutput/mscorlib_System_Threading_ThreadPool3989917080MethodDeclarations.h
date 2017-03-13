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

// System.Threading.WaitCallback
struct WaitCallback_t2798937288;
// System.Object
struct Il2CppObject;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t2863394393;
// System.Threading.WaitHandle
struct WaitHandle_t677569169;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t2724438238;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_WaitCallback2798937288.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Threading_WaitHandle677569169.h"
#include "mscorlib_System_Threading_WaitOrTimerCallback2724438238.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern "C"  bool ThreadPool_QueueUserWorkItem_m2209660682 (Il2CppObject * __this /* static, unused */, WaitCallback_t2798937288 * ___callBack0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.Int64,System.Boolean)
extern "C"  RegisteredWaitHandle_t2863394393 * ThreadPool_RegisterWaitForSingleObject_m3904360398 (Il2CppObject * __this /* static, unused */, WaitHandle_t677569169 * ___waitObject0, WaitOrTimerCallback_t2724438238 * ___callBack1, Il2CppObject * ___state2, int64_t ___millisecondsTimeOutInterval3, bool ___executeOnlyOnce4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C"  RegisteredWaitHandle_t2863394393 * ThreadPool_RegisterWaitForSingleObject_m3133782998 (Il2CppObject * __this /* static, unused */, WaitHandle_t677569169 * ___waitObject0, WaitOrTimerCallback_t2724438238 * ___callBack1, Il2CppObject * ___state2, TimeSpan_t3430258949  ___timeout3, bool ___executeOnlyOnce4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
