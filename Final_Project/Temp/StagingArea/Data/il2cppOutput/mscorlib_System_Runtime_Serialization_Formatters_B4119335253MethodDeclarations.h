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

// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t2408360458;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1912587528;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t324204131;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t1866979105;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t645865707;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Type
struct Type_t;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo999493661.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo943306207.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B2209278355.h"
#include "mscorlib_System_IO_BinaryReader2491843768.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHa324204131.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B1866979105.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.MessageFormatter::WriteMethodCall(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[],System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C"  void MessageFormatter_WriteMethodCall_m3564444827 (Il2CppObject * __this /* static, unused */, BinaryWriter_t3179371318 * ___writer0, Il2CppObject * ___obj1, HeaderU5BU5D_t2408360458* ___headers2, Il2CppObject * ___surrogateSelector3, StreamingContext_t1417235061  ___context4, int32_t ___assemblyFormat5, int32_t ___typeFormat6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MessageFormatter::WriteMethodResponse(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[],System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C"  void MessageFormatter_WriteMethodResponse_m2770324324 (Il2CppObject * __this /* static, unused */, BinaryWriter_t3179371318 * ___writer0, Il2CppObject * ___obj1, HeaderU5BU5D_t2408360458* ___headers2, Il2CppObject * ___surrogateSelector3, StreamingContext_t1417235061  ___context4, int32_t ___assemblyFormat5, int32_t ___typeFormat6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  Il2CppObject * MessageFormatter_ReadMethodCall_m6568789 (Il2CppObject * __this /* static, unused */, uint8_t ___elem0, BinaryReader_t2491843768 * ___reader1, bool ___hasHeaders2, HeaderHandler_t324204131 * ___headerHandler3, BinaryFormatter_t1866979105 * ___formatter4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  Il2CppObject * MessageFormatter_ReadMethodResponse_m4134629501 (Il2CppObject * __this /* static, unused */, uint8_t ___elem0, BinaryReader_t2491843768 * ___reader1, bool ___hasHeaders2, HeaderHandler_t324204131 * ___headerHandler3, Il2CppObject * ___methodCallMessage4, BinaryFormatter_t1866979105 * ___formatter5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::AllTypesArePrimitive(System.Object[])
extern "C"  bool MessageFormatter_AllTypesArePrimitive_m3151865695 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___objects0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsMethodPrimitive(System.Type)
extern "C"  bool MessageFormatter_IsMethodPrimitive_m2276926929 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Serialization.Formatters.Binary.MessageFormatter::GetExtraProperties(System.Collections.IDictionary,System.String[])
extern "C"  ObjectU5BU5D_t3614634134* MessageFormatter_GetExtraProperties_m3967829401 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___properties0, StringU5BU5D_t1642385972* ___internalKeys1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsInternalKey(System.String,System.String[])
extern "C"  bool MessageFormatter_IsInternalKey_m1691080546 (Il2CppObject * __this /* static, unused */, String_t* ___key0, StringU5BU5D_t1642385972* ___internalKeys1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
