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

// System.Type
struct Type_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t99948092;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator99948092.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::.cctor()
extern "C"  void CodeGenerator__cctor_m905428766 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::GenerateMetadataType(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C"  Type_t * CodeGenerator_GenerateMetadataType_m2172429046 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::GenerateMetadataTypeInternal(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C"  Type_t * CodeGenerator_GenerateMetadataTypeInternal_m3869409539 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::LoadFromPtr(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void CodeGenerator_LoadFromPtr_m1386106213 (Il2CppObject * __this /* static, unused */, ILGenerator_t99948092 * ___ig0, Type_t * ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWriteTypeSpec(System.Reflection.Emit.ILGenerator,System.Type,System.String)
extern "C"  void CodeGenerator_EmitWriteTypeSpec_m4272816866 (Il2CppObject * __this /* static, unused */, ILGenerator_t99948092 * ___gen0, Type_t * ___type1, String_t* ___member2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitLoadTypeAssembly(System.Reflection.Emit.ILGenerator,System.Type,System.String)
extern "C"  void CodeGenerator_EmitLoadTypeAssembly_m3629134244 (Il2CppObject * __this /* static, unused */, ILGenerator_t99948092 * ___gen0, Type_t * ___type1, String_t* ___member2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWrite(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void CodeGenerator_EmitWrite_m1304508043 (Il2CppObject * __this /* static, unused */, ILGenerator_t99948092 * ___gen0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWritePrimitiveValue(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void CodeGenerator_EmitWritePrimitiveValue_m2258722809 (Il2CppObject * __this /* static, unused */, ILGenerator_t99948092 * ___gen0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EnumToUnderlying(System.Type)
extern "C"  Type_t * CodeGenerator_EnumToUnderlying_m1384250641 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
