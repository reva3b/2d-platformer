#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Game
struct Game_t1600141214;
// PlayerStats
struct PlayerStats_t2629781060;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game
struct  Game_t1600141214  : public Il2CppObject
{
public:
	// PlayerStats Game::Archeologist
	PlayerStats_t2629781060 * ___Archeologist_1;

public:
	inline static int32_t get_offset_of_Archeologist_1() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___Archeologist_1)); }
	inline PlayerStats_t2629781060 * get_Archeologist_1() const { return ___Archeologist_1; }
	inline PlayerStats_t2629781060 ** get_address_of_Archeologist_1() { return &___Archeologist_1; }
	inline void set_Archeologist_1(PlayerStats_t2629781060 * value)
	{
		___Archeologist_1 = value;
		Il2CppCodeGenWriteBarrier(&___Archeologist_1, value);
	}
};

struct Game_t1600141214_StaticFields
{
public:
	// Game Game::current
	Game_t1600141214 * ___current_0;

public:
	inline static int32_t get_offset_of_current_0() { return static_cast<int32_t>(offsetof(Game_t1600141214_StaticFields, ___current_0)); }
	inline Game_t1600141214 * get_current_0() const { return ___current_0; }
	inline Game_t1600141214 ** get_address_of_current_0() { return &___current_0; }
	inline void set_current_0(Game_t1600141214 * value)
	{
		___current_0 = value;
		Il2CppCodeGenWriteBarrier(&___current_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
