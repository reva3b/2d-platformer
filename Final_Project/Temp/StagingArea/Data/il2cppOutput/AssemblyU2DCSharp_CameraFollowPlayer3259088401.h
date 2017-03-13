#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFollowPlayer
struct  CameraFollowPlayer_t3259088401  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CameraFollowPlayer::Max_X_Axis_Value
	float ___Max_X_Axis_Value_2;
	// System.Single CameraFollowPlayer::Max_Y_Axis_Value
	float ___Max_Y_Axis_Value_3;
	// System.Single CameraFollowPlayer::Min_X_Axis_Value
	float ___Min_X_Axis_Value_4;
	// System.Single CameraFollowPlayer::Min_Y_Axis_Value
	float ___Min_Y_Axis_Value_5;
	// UnityEngine.Transform CameraFollowPlayer::MainCameraTarget
	Transform_t3275118058 * ___MainCameraTarget_6;

public:
	inline static int32_t get_offset_of_Max_X_Axis_Value_2() { return static_cast<int32_t>(offsetof(CameraFollowPlayer_t3259088401, ___Max_X_Axis_Value_2)); }
	inline float get_Max_X_Axis_Value_2() const { return ___Max_X_Axis_Value_2; }
	inline float* get_address_of_Max_X_Axis_Value_2() { return &___Max_X_Axis_Value_2; }
	inline void set_Max_X_Axis_Value_2(float value)
	{
		___Max_X_Axis_Value_2 = value;
	}

	inline static int32_t get_offset_of_Max_Y_Axis_Value_3() { return static_cast<int32_t>(offsetof(CameraFollowPlayer_t3259088401, ___Max_Y_Axis_Value_3)); }
	inline float get_Max_Y_Axis_Value_3() const { return ___Max_Y_Axis_Value_3; }
	inline float* get_address_of_Max_Y_Axis_Value_3() { return &___Max_Y_Axis_Value_3; }
	inline void set_Max_Y_Axis_Value_3(float value)
	{
		___Max_Y_Axis_Value_3 = value;
	}

	inline static int32_t get_offset_of_Min_X_Axis_Value_4() { return static_cast<int32_t>(offsetof(CameraFollowPlayer_t3259088401, ___Min_X_Axis_Value_4)); }
	inline float get_Min_X_Axis_Value_4() const { return ___Min_X_Axis_Value_4; }
	inline float* get_address_of_Min_X_Axis_Value_4() { return &___Min_X_Axis_Value_4; }
	inline void set_Min_X_Axis_Value_4(float value)
	{
		___Min_X_Axis_Value_4 = value;
	}

	inline static int32_t get_offset_of_Min_Y_Axis_Value_5() { return static_cast<int32_t>(offsetof(CameraFollowPlayer_t3259088401, ___Min_Y_Axis_Value_5)); }
	inline float get_Min_Y_Axis_Value_5() const { return ___Min_Y_Axis_Value_5; }
	inline float* get_address_of_Min_Y_Axis_Value_5() { return &___Min_Y_Axis_Value_5; }
	inline void set_Min_Y_Axis_Value_5(float value)
	{
		___Min_Y_Axis_Value_5 = value;
	}

	inline static int32_t get_offset_of_MainCameraTarget_6() { return static_cast<int32_t>(offsetof(CameraFollowPlayer_t3259088401, ___MainCameraTarget_6)); }
	inline Transform_t3275118058 * get_MainCameraTarget_6() const { return ___MainCameraTarget_6; }
	inline Transform_t3275118058 ** get_address_of_MainCameraTarget_6() { return &___MainCameraTarget_6; }
	inline void set_MainCameraTarget_6(Transform_t3275118058 * value)
	{
		___MainCameraTarget_6 = value;
		Il2CppCodeGenWriteBarrier(&___MainCameraTarget_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
