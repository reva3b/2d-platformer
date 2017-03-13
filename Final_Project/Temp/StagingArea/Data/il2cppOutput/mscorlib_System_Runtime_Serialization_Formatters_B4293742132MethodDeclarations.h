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

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t4293742132;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1912587528;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t2408360458;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t1398900059;
// System.Type
struct Type_t;
// System.Array
struct Il2CppArray;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t4268412390;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo999493661.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo943306207.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B1398900059.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Bi141209596.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C"  void ObjectWriter__ctor_m2425543832 (ObjectWriter_t4293742132 * __this, Il2CppObject * ___surrogateSelector0, StreamingContext_t1417235061  ___context1, int32_t ___assemblyFormat2, int32_t ___typeFormat3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::.cctor()
extern "C"  void ObjectWriter__cctor_m2917296548 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectGraph(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[])
extern "C"  void ObjectWriter_WriteObjectGraph_m1869353433 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, Il2CppObject * ___obj1, HeaderU5BU5D_t2408360458* ___headers2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::QueueObject(System.Object)
extern "C"  void ObjectWriter_QueueObject_m2932691973 (ObjectWriter_t4293742132 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteQueuedObjects(System.IO.BinaryWriter)
extern "C"  void ObjectWriter_WriteQueuedObjects_m2323709238 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectInstance(System.IO.BinaryWriter,System.Object,System.Boolean)
extern "C"  void ObjectWriter_WriteObjectInstance_m2984338708 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, Il2CppObject * ___obj1, bool ___isValueObject2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteSerializationEnd(System.IO.BinaryWriter)
extern "C"  void ObjectWriter_WriteSerializationEnd_m3798820786 (Il2CppObject * __this /* static, unused */, BinaryWriter_t3179371318 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObject(System.IO.BinaryWriter,System.Int64,System.Object)
extern "C"  void ObjectWriter_WriteObject_m829027640 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, int64_t ___id1, Il2CppObject * ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetObjectData(System.Object,System.Runtime.Serialization.Formatters.Binary.TypeMetadata&,System.Object&)
extern "C"  void ObjectWriter_GetObjectData_m1289198744 (ObjectWriter_t4293742132 * __this, Il2CppObject * ___obj0, TypeMetadata_t1398900059 ** ___metadata1, Il2CppObject ** ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CreateMemberTypeMetadata(System.Type)
extern "C"  TypeMetadata_t1398900059 * ObjectWriter_CreateMemberTypeMetadata_m1372839942 (ObjectWriter_t4293742132 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WriteArray_m3577535090 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, int64_t ___id1, Il2CppArray * ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteGenericArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WriteGenericArray_m1259362665 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, int64_t ___id1, Il2CppArray * ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WriteObjectArray_m964520409 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, int64_t ___id1, Il2CppArray * ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteStringArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WriteStringArray_m3948181301 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, int64_t ___id1, Il2CppArray * ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WritePrimitiveTypeArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C"  void ObjectWriter_WritePrimitiveTypeArray_m4061317393 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, int64_t ___id1, Il2CppArray * ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::BlockWrite(System.IO.BinaryWriter,System.Array,System.Int32)
extern "C"  void ObjectWriter_BlockWrite_m2071012239 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, Il2CppArray * ___array1, int32_t ___dataSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteSingleDimensionArrayElements(System.IO.BinaryWriter,System.Array,System.Type)
extern "C"  void ObjectWriter_WriteSingleDimensionArrayElements_m2372680506 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, Il2CppArray * ___array1, Type_t * ___elementType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteNullFiller(System.IO.BinaryWriter,System.Int32)
extern "C"  void ObjectWriter_WriteNullFiller_m1888582595 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, int32_t ___numNulls1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectReference(System.IO.BinaryWriter,System.Int64)
extern "C"  void ObjectWriter_WriteObjectReference_m1471017929 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, int64_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteValue(System.IO.BinaryWriter,System.Type,System.Object)
extern "C"  void ObjectWriter_WriteValue_m3608247663 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, Type_t * ___valueType1, Il2CppObject * ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteString(System.IO.BinaryWriter,System.Int64,System.String)
extern "C"  void ObjectWriter_WriteString_m3771020088 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, int64_t ___id1, String_t* ___str2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteAssembly(System.IO.BinaryWriter,System.Reflection.Assembly)
extern "C"  int32_t ObjectWriter_WriteAssembly_m3501957525 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, Assembly_t4268412390 * ___assembly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteAssemblyName(System.IO.BinaryWriter,System.String)
extern "C"  int32_t ObjectWriter_WriteAssemblyName_m3199872248 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, String_t* ___assembly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetAssemblyId(System.Reflection.Assembly)
extern "C"  int32_t ObjectWriter_GetAssemblyId_m492305086 (ObjectWriter_t4293742132 * __this, Assembly_t4268412390 * ___assembly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetAssemblyNameId(System.String)
extern "C"  int32_t ObjectWriter_GetAssemblyNameId_m2631825813 (ObjectWriter_t4293742132 * __this, String_t* ___assembly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::RegisterAssembly(System.String,System.Boolean&)
extern "C"  int32_t ObjectWriter_RegisterAssembly_m1130617565 (ObjectWriter_t4293742132 * __this, String_t* ___assembly0, bool* ___firstTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WritePrimitiveValue(System.IO.BinaryWriter,System.Object)
extern "C"  void ObjectWriter_WritePrimitiveValue_m3356504901 (Il2CppObject * __this /* static, unused */, BinaryWriter_t3179371318 * ___writer0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteTypeCode(System.IO.BinaryWriter,System.Type)
extern "C"  void ObjectWriter_WriteTypeCode_m2690735655 (Il2CppObject * __this /* static, unused */, BinaryWriter_t3179371318 * ___writer0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.TypeTag System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetTypeTag(System.Type)
extern "C"  uint8_t ObjectWriter_GetTypeTag_m481155806 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteTypeSpec(System.IO.BinaryWriter,System.Type)
extern "C"  void ObjectWriter_WriteTypeSpec_m1312689219 (ObjectWriter_t4293742132 * __this, BinaryWriter_t3179371318 * ___writer0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
