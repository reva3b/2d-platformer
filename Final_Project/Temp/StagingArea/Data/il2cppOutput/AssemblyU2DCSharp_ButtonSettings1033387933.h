#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonSettings
struct  ButtonSettings_t1033387933  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ButtonSettings::releasedLevel
	int32_t ___releasedLevel_3;
	// System.String ButtonSettings::nextLevel
	String_t* ___nextLevel_4;

public:
	inline static int32_t get_offset_of_releasedLevel_3() { return static_cast<int32_t>(offsetof(ButtonSettings_t1033387933, ___releasedLevel_3)); }
	inline int32_t get_releasedLevel_3() const { return ___releasedLevel_3; }
	inline int32_t* get_address_of_releasedLevel_3() { return &___releasedLevel_3; }
	inline void set_releasedLevel_3(int32_t value)
	{
		___releasedLevel_3 = value;
	}

	inline static int32_t get_offset_of_nextLevel_4() { return static_cast<int32_t>(offsetof(ButtonSettings_t1033387933, ___nextLevel_4)); }
	inline String_t* get_nextLevel_4() const { return ___nextLevel_4; }
	inline String_t** get_address_of_nextLevel_4() { return &___nextLevel_4; }
	inline void set_nextLevel_4(String_t* value)
	{
		___nextLevel_4 = value;
		Il2CppCodeGenWriteBarrier(&___nextLevel_4, value);
	}
};

struct ButtonSettings_t1033387933_StaticFields
{
public:
	// System.Int32 ButtonSettings::releasedLevelStatic
	int32_t ___releasedLevelStatic_2;

public:
	inline static int32_t get_offset_of_releasedLevelStatic_2() { return static_cast<int32_t>(offsetof(ButtonSettings_t1033387933_StaticFields, ___releasedLevelStatic_2)); }
	inline int32_t get_releasedLevelStatic_2() const { return ___releasedLevelStatic_2; }
	inline int32_t* get_address_of_releasedLevelStatic_2() { return &___releasedLevelStatic_2; }
	inline void set_releasedLevelStatic_2(int32_t value)
	{
		___releasedLevelStatic_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
