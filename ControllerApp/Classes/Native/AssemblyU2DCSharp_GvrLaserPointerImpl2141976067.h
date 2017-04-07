#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_GvrBasePointer2150122635.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrLaserPointerImpl
struct  GvrLaserPointerImpl_t2141976067  : public GvrBasePointer_t2150122635
{
public:
	// UnityEngine.Camera GvrLaserPointerImpl::<MainCamera>k__BackingField
	Camera_t189460977 * ___U3CMainCameraU3Ek__BackingField_4;
	// UnityEngine.Color GvrLaserPointerImpl::<LaserColor>k__BackingField
	Color_t2020392075  ___U3CLaserColorU3Ek__BackingField_5;
	// UnityEngine.LineRenderer GvrLaserPointerImpl::<LaserLineRenderer>k__BackingField
	LineRenderer_t849157671 * ___U3CLaserLineRendererU3Ek__BackingField_6;
	// UnityEngine.GameObject GvrLaserPointerImpl::<Reticle>k__BackingField
	GameObject_t1756533147 * ___U3CReticleU3Ek__BackingField_7;
	// System.Single GvrLaserPointerImpl::<MaxLaserDistance>k__BackingField
	float ___U3CMaxLaserDistanceU3Ek__BackingField_8;
	// System.Single GvrLaserPointerImpl::<MaxReticleDistance>k__BackingField
	float ___U3CMaxReticleDistanceU3Ek__BackingField_9;
	// UnityEngine.Vector3 GvrLaserPointerImpl::<PointerIntersection>k__BackingField
	Vector3_t2243707580  ___U3CPointerIntersectionU3Ek__BackingField_10;
	// System.Boolean GvrLaserPointerImpl::<IsPointerIntersecting>k__BackingField
	bool ___U3CIsPointerIntersectingU3Ek__BackingField_11;
	// UnityEngine.Ray GvrLaserPointerImpl::<PointerIntersectionRay>k__BackingField
	Ray_t2469606224  ___U3CPointerIntersectionRayU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CMainCameraU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___U3CMainCameraU3Ek__BackingField_4)); }
	inline Camera_t189460977 * get_U3CMainCameraU3Ek__BackingField_4() const { return ___U3CMainCameraU3Ek__BackingField_4; }
	inline Camera_t189460977 ** get_address_of_U3CMainCameraU3Ek__BackingField_4() { return &___U3CMainCameraU3Ek__BackingField_4; }
	inline void set_U3CMainCameraU3Ek__BackingField_4(Camera_t189460977 * value)
	{
		___U3CMainCameraU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMainCameraU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CLaserColorU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___U3CLaserColorU3Ek__BackingField_5)); }
	inline Color_t2020392075  get_U3CLaserColorU3Ek__BackingField_5() const { return ___U3CLaserColorU3Ek__BackingField_5; }
	inline Color_t2020392075 * get_address_of_U3CLaserColorU3Ek__BackingField_5() { return &___U3CLaserColorU3Ek__BackingField_5; }
	inline void set_U3CLaserColorU3Ek__BackingField_5(Color_t2020392075  value)
	{
		___U3CLaserColorU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLaserLineRendererU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___U3CLaserLineRendererU3Ek__BackingField_6)); }
	inline LineRenderer_t849157671 * get_U3CLaserLineRendererU3Ek__BackingField_6() const { return ___U3CLaserLineRendererU3Ek__BackingField_6; }
	inline LineRenderer_t849157671 ** get_address_of_U3CLaserLineRendererU3Ek__BackingField_6() { return &___U3CLaserLineRendererU3Ek__BackingField_6; }
	inline void set_U3CLaserLineRendererU3Ek__BackingField_6(LineRenderer_t849157671 * value)
	{
		___U3CLaserLineRendererU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLaserLineRendererU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CReticleU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___U3CReticleU3Ek__BackingField_7)); }
	inline GameObject_t1756533147 * get_U3CReticleU3Ek__BackingField_7() const { return ___U3CReticleU3Ek__BackingField_7; }
	inline GameObject_t1756533147 ** get_address_of_U3CReticleU3Ek__BackingField_7() { return &___U3CReticleU3Ek__BackingField_7; }
	inline void set_U3CReticleU3Ek__BackingField_7(GameObject_t1756533147 * value)
	{
		___U3CReticleU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CReticleU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CMaxLaserDistanceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___U3CMaxLaserDistanceU3Ek__BackingField_8)); }
	inline float get_U3CMaxLaserDistanceU3Ek__BackingField_8() const { return ___U3CMaxLaserDistanceU3Ek__BackingField_8; }
	inline float* get_address_of_U3CMaxLaserDistanceU3Ek__BackingField_8() { return &___U3CMaxLaserDistanceU3Ek__BackingField_8; }
	inline void set_U3CMaxLaserDistanceU3Ek__BackingField_8(float value)
	{
		___U3CMaxLaserDistanceU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CMaxReticleDistanceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___U3CMaxReticleDistanceU3Ek__BackingField_9)); }
	inline float get_U3CMaxReticleDistanceU3Ek__BackingField_9() const { return ___U3CMaxReticleDistanceU3Ek__BackingField_9; }
	inline float* get_address_of_U3CMaxReticleDistanceU3Ek__BackingField_9() { return &___U3CMaxReticleDistanceU3Ek__BackingField_9; }
	inline void set_U3CMaxReticleDistanceU3Ek__BackingField_9(float value)
	{
		___U3CMaxReticleDistanceU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CPointerIntersectionU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___U3CPointerIntersectionU3Ek__BackingField_10)); }
	inline Vector3_t2243707580  get_U3CPointerIntersectionU3Ek__BackingField_10() const { return ___U3CPointerIntersectionU3Ek__BackingField_10; }
	inline Vector3_t2243707580 * get_address_of_U3CPointerIntersectionU3Ek__BackingField_10() { return &___U3CPointerIntersectionU3Ek__BackingField_10; }
	inline void set_U3CPointerIntersectionU3Ek__BackingField_10(Vector3_t2243707580  value)
	{
		___U3CPointerIntersectionU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CIsPointerIntersectingU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___U3CIsPointerIntersectingU3Ek__BackingField_11)); }
	inline bool get_U3CIsPointerIntersectingU3Ek__BackingField_11() const { return ___U3CIsPointerIntersectingU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CIsPointerIntersectingU3Ek__BackingField_11() { return &___U3CIsPointerIntersectingU3Ek__BackingField_11; }
	inline void set_U3CIsPointerIntersectingU3Ek__BackingField_11(bool value)
	{
		___U3CIsPointerIntersectingU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CPointerIntersectionRayU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___U3CPointerIntersectionRayU3Ek__BackingField_12)); }
	inline Ray_t2469606224  get_U3CPointerIntersectionRayU3Ek__BackingField_12() const { return ___U3CPointerIntersectionRayU3Ek__BackingField_12; }
	inline Ray_t2469606224 * get_address_of_U3CPointerIntersectionRayU3Ek__BackingField_12() { return &___U3CPointerIntersectionRayU3Ek__BackingField_12; }
	inline void set_U3CPointerIntersectionRayU3Ek__BackingField_12(Ray_t2469606224  value)
	{
		___U3CPointerIntersectionRayU3Ek__BackingField_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
