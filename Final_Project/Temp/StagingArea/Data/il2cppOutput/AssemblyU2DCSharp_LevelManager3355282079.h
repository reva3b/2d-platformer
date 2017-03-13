#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelManager
struct  LevelManager_t3355282079  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 LevelManager::Level
	int32_t ___Level_2;
	// UnityEngine.UI.Image LevelManager::Image
	Image_t2042527209 * ___Image_3;
	// System.String LevelManager::LevelString
	String_t* ___LevelString_4;

public:
	inline static int32_t get_offset_of_Level_2() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___Level_2)); }
	inline int32_t get_Level_2() const { return ___Level_2; }
	inline int32_t* get_address_of_Level_2() { return &___Level_2; }
	inline void set_Level_2(int32_t value)
	{
		___Level_2 = value;
	}

	inline static int32_t get_offset_of_Image_3() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___Image_3)); }
	inline Image_t2042527209 * get_Image_3() const { return ___Image_3; }
	inline Image_t2042527209 ** get_address_of_Image_3() { return &___Image_3; }
	inline void set_Image_3(Image_t2042527209 * value)
	{
		___Image_3 = value;
		Il2CppCodeGenWriteBarrier(&___Image_3, value);
	}

	inline static int32_t get_offset_of_LevelString_4() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___LevelString_4)); }
	inline String_t* get_LevelString_4() const { return ___LevelString_4; }
	inline String_t** get_address_of_LevelString_4() { return &___LevelString_4; }
	inline void set_LevelString_4(String_t* value)
	{
		___LevelString_4 = value;
		Il2CppCodeGenWriteBarrier(&___LevelString_4, value);
	}
};

struct LevelManager_t3355282079_StaticFields
{
public:
	// System.Int32 LevelManager::releasedLevelStatic
	int32_t ___releasedLevelStatic_5;

public:
	inline static int32_t get_offset_of_releasedLevelStatic_5() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079_StaticFields, ___releasedLevelStatic_5)); }
	inline int32_t get_releasedLevelStatic_5() const { return ___releasedLevelStatic_5; }
	inline int32_t* get_address_of_releasedLevelStatic_5() { return &___releasedLevelStatic_5; }
	inline void set_releasedLevelStatic_5(int32_t value)
	{
		___releasedLevelStatic_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
