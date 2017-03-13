#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Audio.AudioMixer
struct AudioMixer_t3244290001;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SetAudioLevels
struct  SetAudioLevels_t1095765071  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Audio.AudioMixer SetAudioLevels::mainMixer
	AudioMixer_t3244290001 * ___mainMixer_2;

public:
	inline static int32_t get_offset_of_mainMixer_2() { return static_cast<int32_t>(offsetof(SetAudioLevels_t1095765071, ___mainMixer_2)); }
	inline AudioMixer_t3244290001 * get_mainMixer_2() const { return ___mainMixer_2; }
	inline AudioMixer_t3244290001 ** get_address_of_mainMixer_2() { return &___mainMixer_2; }
	inline void set_mainMixer_2(AudioMixer_t3244290001 * value)
	{
		___mainMixer_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainMixer_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
