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

// System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata
struct SerializableTypeMetadata_t1614068890;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t1398900059;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t4293742132;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B1398900059.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B4293742132.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.SerializationInfo)
extern "C"  void SerializableTypeMetadata__ctor_m819664803 (SerializableTypeMetadata_t1614068890 * __this, Type_t * ___itype0, SerializationInfo_t228987430 * ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::IsCompatible(System.Runtime.Serialization.Formatters.Binary.TypeMetadata)
extern "C"  bool SerializableTypeMetadata_IsCompatible_m1868220581 (SerializableTypeMetadata_t1614068890 * __this, TypeMetadata_t1398900059 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C"  void SerializableTypeMetadata_WriteAssemblies_m2191680612 (SerializableTypeMetadata_t1614068890 * __this, ObjectWriter_t4293742132 * ___ow0, BinaryWriter_t3179371318 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C"  void SerializableTypeMetadata_WriteTypeData_m852433355 (SerializableTypeMetadata_t1614068890 * __this, ObjectWriter_t4293742132 * ___ow0, BinaryWriter_t3179371318 * ___writer1, bool ___writeTypes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C"  void SerializableTypeMetadata_WriteObjectData_m1422347319 (SerializableTypeMetadata_t1614068890 * __this, ObjectWriter_t4293742132 * ___ow0, BinaryWriter_t3179371318 * ___writer1, Il2CppObject * ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::get_RequiresTypes()
extern "C"  bool SerializableTypeMetadata_get_RequiresTypes_m3613630433 (SerializableTypeMetadata_t1614068890 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
