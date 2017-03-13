#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Game>
struct List_1_t969262346;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SaveLoadManager
struct  SaveLoadManager_t4271857616  : public Il2CppObject
{
public:

public:
};

struct SaveLoadManager_t4271857616_StaticFields
{
public:
	// System.Collections.Generic.List`1<Game> SaveLoadManager::savedGames
	List_1_t969262346 * ___savedGames_0;

public:
	inline static int32_t get_offset_of_savedGames_0() { return static_cast<int32_t>(offsetof(SaveLoadManager_t4271857616_StaticFields, ___savedGames_0)); }
	inline List_1_t969262346 * get_savedGames_0() const { return ___savedGames_0; }
	inline List_1_t969262346 ** get_address_of_savedGames_0() { return &___savedGames_0; }
	inline void set_savedGames_0(List_1_t969262346 * value)
	{
		___savedGames_0 = value;
		Il2CppCodeGenWriteBarrier(&___savedGames_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
