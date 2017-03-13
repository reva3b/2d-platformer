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

// System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata
struct MemberTypeMetadata_t887587901;
// System.Type
struct Type_t;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t4293742132;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B4293742132.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C"  void MemberTypeMetadata__ctor_m1760390833 (MemberTypeMetadata_t887587901 * __this, Type_t * ___type0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C"  void MemberTypeMetadata_WriteAssemblies_m2215695293 (MemberTypeMetadata_t887587901 * __this, ObjectWriter_t4293742132 * ___ow0, BinaryWriter_t3179371318 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C"  void MemberTypeMetadata_WriteTypeData_m1663840546 (MemberTypeMetadata_t887587901 * __this, ObjectWriter_t4293742132 * ___ow0, BinaryWriter_t3179371318 * ___writer1, bool ___writeTypes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C"  void MemberTypeMetadata_WriteObjectData_m549206014 (MemberTypeMetadata_t887587901 * __this, ObjectWriter_t4293742132 * ___ow0, BinaryWriter_t3179371318 * ___writer1, Il2CppObject * ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
