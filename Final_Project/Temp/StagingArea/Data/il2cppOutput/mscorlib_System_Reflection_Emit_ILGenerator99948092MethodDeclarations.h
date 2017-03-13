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

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t99948092;
// System.Reflection.Module
struct Module_t4282841206;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t4150817334;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t2116499186;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Module4282841206.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Reflection_Emit_OpCode2247480392.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_Emit_Label4243202660.h"
#include "mscorlib_System_Reflection_ConstructorInfo2851816542.h"
#include "mscorlib_System_Reflection_FieldInfo255040150.h"
#include "mscorlib_System_Reflection_Emit_LocalBuilder2116499186.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator99948092.h"

// System.Void System.Reflection.Emit.ILGenerator::.ctor(System.Reflection.Module,System.Reflection.Emit.TokenGenerator,System.Int32)
extern "C"  void ILGenerator__ctor_m3365621387 (ILGenerator_t99948092 * __this, Module_t4282841206 * ___m0, Il2CppObject * ___token_gen1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::.cctor()
extern "C"  void ILGenerator__cctor_m3943061018 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::add_token_fixup(System.Reflection.MemberInfo)
extern "C"  void ILGenerator_add_token_fixup_m3261621911 (ILGenerator_t99948092 * __this, MemberInfo_t * ___mi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::make_room(System.Int32)
extern "C"  void ILGenerator_make_room_m373147874 (ILGenerator_t99948092 * __this, int32_t ___nbytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::emit_int(System.Int32)
extern "C"  void ILGenerator_emit_int_m1061022647 (ILGenerator_t99948092 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::ll_emit(System.Reflection.Emit.OpCode)
extern "C"  void ILGenerator_ll_emit_m2087647272 (ILGenerator_t99948092 * __this, OpCode_t2247480392  ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::target_len(System.Reflection.Emit.OpCode)
extern "C"  int32_t ILGenerator_target_len_m1964456727 (Il2CppObject * __this /* static, unused */, OpCode_t2247480392  ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type)
extern "C"  LocalBuilder_t2116499186 * ILGenerator_DeclareLocal_m2024612863 (ILGenerator_t99948092 * __this, Type_t * ___localType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type,System.Boolean)
extern "C"  LocalBuilder_t2116499186 * ILGenerator_DeclareLocal_m2758488526 (ILGenerator_t99948092 * __this, Type_t * ___localType0, bool ___pinned1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.Label System.Reflection.Emit.ILGenerator::DefineLabel()
extern "C"  Label_t4243202660  ILGenerator_DefineLabel_m1064918102 (ILGenerator_t99948092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode)
extern "C"  void ILGenerator_Emit_m531109645 (ILGenerator_t99948092 * __this, OpCode_t2247480392  ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Byte)
extern "C"  void ILGenerator_Emit_m716320246 (ILGenerator_t99948092 * __this, OpCode_t2247480392  ___opcode0, uint8_t ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.ConstructorInfo)
extern "C"  void ILGenerator_Emit_m116557729 (ILGenerator_t99948092 * __this, OpCode_t2247480392  ___opcode0, ConstructorInfo_t2851816542 * ___con1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.FieldInfo)
extern "C"  void ILGenerator_Emit_m2714420963 (ILGenerator_t99948092 * __this, OpCode_t2247480392  ___opcode0, FieldInfo_t * ___field1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Int32)
extern "C"  void ILGenerator_Emit_m243800782 (ILGenerator_t99948092 * __this, OpCode_t2247480392  ___opcode0, int32_t ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.Label)
extern "C"  void ILGenerator_Emit_m2474021108 (ILGenerator_t99948092 * __this, OpCode_t2247480392  ___opcode0, Label_t4243202660  ___label1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.LocalBuilder)
extern "C"  void ILGenerator_Emit_m4076099962 (ILGenerator_t99948092 * __this, OpCode_t2247480392  ___opcode0, LocalBuilder_t2116499186 * ___local1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo)
extern "C"  void ILGenerator_Emit_m149869034 (ILGenerator_t99948092 * __this, OpCode_t2247480392  ___opcode0, MethodInfo_t * ___meth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Int32)
extern "C"  void ILGenerator_Emit_m2782317915 (ILGenerator_t99948092 * __this, OpCode_t2247480392  ___opcode0, MethodInfo_t * ___method1, int32_t ___token2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.String)
extern "C"  void ILGenerator_Emit_m4163373327 (ILGenerator_t99948092 * __this, OpCode_t2247480392  ___opcode0, String_t* ___str1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type)
extern "C"  void ILGenerator_Emit_m145986960 (ILGenerator_t99948092 * __this, OpCode_t2247480392  ___opcode0, Type_t * ___cls1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[])
extern "C"  void ILGenerator_EmitCall_m2105676417 (ILGenerator_t99948092 * __this, OpCode_t2247480392  ___opcode0, MethodInfo_t * ___methodInfo1, TypeU5BU5D_t1664964607* ___optionalParameterTypes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::MarkLabel(System.Reflection.Emit.Label)
extern "C"  void ILGenerator_MarkLabel_m3560445835 (ILGenerator_t99948092 * __this, Label_t4243202660  ___loc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::label_fixup()
extern "C"  void ILGenerator_label_fixup_m1325994348 (ILGenerator_t99948092 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::Mono_GetCurrentOffset(System.Reflection.Emit.ILGenerator)
extern "C"  int32_t ILGenerator_Mono_GetCurrentOffset_m3553856682 (Il2CppObject * __this /* static, unused */, ILGenerator_t99948092 * ___ig0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
