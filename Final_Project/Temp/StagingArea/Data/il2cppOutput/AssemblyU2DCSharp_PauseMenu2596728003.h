#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PauseButtons
struct PauseButtons_t1966417637;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseMenu
struct  PauseMenu_t2596728003  : public MonoBehaviour_t1158329972
{
public:
	// PauseButtons PauseMenu::showPanels
	PauseButtons_t1966417637 * ___showPanels_2;
	// System.Boolean PauseMenu::isPaused
	bool ___isPaused_3;

public:
	inline static int32_t get_offset_of_showPanels_2() { return static_cast<int32_t>(offsetof(PauseMenu_t2596728003, ___showPanels_2)); }
	inline PauseButtons_t1966417637 * get_showPanels_2() const { return ___showPanels_2; }
	inline PauseButtons_t1966417637 ** get_address_of_showPanels_2() { return &___showPanels_2; }
	inline void set_showPanels_2(PauseButtons_t1966417637 * value)
	{
		___showPanels_2 = value;
		Il2CppCodeGenWriteBarrier(&___showPanels_2, value);
	}

	inline static int32_t get_offset_of_isPaused_3() { return static_cast<int32_t>(offsetof(PauseMenu_t2596728003, ___isPaused_3)); }
	inline bool get_isPaused_3() const { return ___isPaused_3; }
	inline bool* get_address_of_isPaused_3() { return &___isPaused_3; }
	inline void set_isPaused_3(bool value)
	{
		___isPaused_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
