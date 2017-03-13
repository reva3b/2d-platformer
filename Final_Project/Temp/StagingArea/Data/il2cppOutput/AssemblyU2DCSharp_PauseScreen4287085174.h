#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ShowButtons
struct ShowButtons_t2634117638;
// MainMenu
struct MainMenu_t4009084430;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseScreen
struct  PauseScreen_t4287085174  : public MonoBehaviour_t1158329972
{
public:
	// ShowButtons PauseScreen::showPanels
	ShowButtons_t2634117638 * ___showPanels_2;
	// System.Boolean PauseScreen::isPaused
	bool ___isPaused_3;
	// MainMenu PauseScreen::startScript
	MainMenu_t4009084430 * ___startScript_4;

public:
	inline static int32_t get_offset_of_showPanels_2() { return static_cast<int32_t>(offsetof(PauseScreen_t4287085174, ___showPanels_2)); }
	inline ShowButtons_t2634117638 * get_showPanels_2() const { return ___showPanels_2; }
	inline ShowButtons_t2634117638 ** get_address_of_showPanels_2() { return &___showPanels_2; }
	inline void set_showPanels_2(ShowButtons_t2634117638 * value)
	{
		___showPanels_2 = value;
		Il2CppCodeGenWriteBarrier(&___showPanels_2, value);
	}

	inline static int32_t get_offset_of_isPaused_3() { return static_cast<int32_t>(offsetof(PauseScreen_t4287085174, ___isPaused_3)); }
	inline bool get_isPaused_3() const { return ___isPaused_3; }
	inline bool* get_address_of_isPaused_3() { return &___isPaused_3; }
	inline void set_isPaused_3(bool value)
	{
		___isPaused_3 = value;
	}

	inline static int32_t get_offset_of_startScript_4() { return static_cast<int32_t>(offsetof(PauseScreen_t4287085174, ___startScript_4)); }
	inline MainMenu_t4009084430 * get_startScript_4() const { return ___startScript_4; }
	inline MainMenu_t4009084430 ** get_address_of_startScript_4() { return &___startScript_4; }
	inline void set_startScript_4(MainMenu_t4009084430 * value)
	{
		___startScript_4 = value;
		Il2CppCodeGenWriteBarrier(&___startScript_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
