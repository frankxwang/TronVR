﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t1204247907;
// System.Collections.Generic.Queue`1<UnityEngine.Vector3>
struct Queue_1_t2063364415;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonTransformViewPositionControl
struct  PhotonTransformViewPositionControl_t1910445639  : public Il2CppObject
{
public:
	// PhotonTransformViewPositionModel PhotonTransformViewPositionControl::m_Model
	PhotonTransformViewPositionModel_t1204247907 * ___m_Model_0;
	// System.Single PhotonTransformViewPositionControl::m_CurrentSpeed
	float ___m_CurrentSpeed_1;
	// System.Double PhotonTransformViewPositionControl::m_LastSerializeTime
	double ___m_LastSerializeTime_2;
	// UnityEngine.Vector3 PhotonTransformViewPositionControl::m_SynchronizedSpeed
	Vector3_t2243707580  ___m_SynchronizedSpeed_3;
	// System.Single PhotonTransformViewPositionControl::m_SynchronizedTurnSpeed
	float ___m_SynchronizedTurnSpeed_4;
	// UnityEngine.Vector3 PhotonTransformViewPositionControl::m_NetworkPosition
	Vector3_t2243707580  ___m_NetworkPosition_5;
	// System.Collections.Generic.Queue`1<UnityEngine.Vector3> PhotonTransformViewPositionControl::m_OldNetworkPositions
	Queue_1_t2063364415 * ___m_OldNetworkPositions_6;
	// System.Boolean PhotonTransformViewPositionControl::m_UpdatedPositionAfterOnSerialize
	bool ___m_UpdatedPositionAfterOnSerialize_7;

public:
	inline static int32_t get_offset_of_m_Model_0() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionControl_t1910445639, ___m_Model_0)); }
	inline PhotonTransformViewPositionModel_t1204247907 * get_m_Model_0() const { return ___m_Model_0; }
	inline PhotonTransformViewPositionModel_t1204247907 ** get_address_of_m_Model_0() { return &___m_Model_0; }
	inline void set_m_Model_0(PhotonTransformViewPositionModel_t1204247907 * value)
	{
		___m_Model_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Model_0, value);
	}

	inline static int32_t get_offset_of_m_CurrentSpeed_1() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionControl_t1910445639, ___m_CurrentSpeed_1)); }
	inline float get_m_CurrentSpeed_1() const { return ___m_CurrentSpeed_1; }
	inline float* get_address_of_m_CurrentSpeed_1() { return &___m_CurrentSpeed_1; }
	inline void set_m_CurrentSpeed_1(float value)
	{
		___m_CurrentSpeed_1 = value;
	}

	inline static int32_t get_offset_of_m_LastSerializeTime_2() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionControl_t1910445639, ___m_LastSerializeTime_2)); }
	inline double get_m_LastSerializeTime_2() const { return ___m_LastSerializeTime_2; }
	inline double* get_address_of_m_LastSerializeTime_2() { return &___m_LastSerializeTime_2; }
	inline void set_m_LastSerializeTime_2(double value)
	{
		___m_LastSerializeTime_2 = value;
	}

	inline static int32_t get_offset_of_m_SynchronizedSpeed_3() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionControl_t1910445639, ___m_SynchronizedSpeed_3)); }
	inline Vector3_t2243707580  get_m_SynchronizedSpeed_3() const { return ___m_SynchronizedSpeed_3; }
	inline Vector3_t2243707580 * get_address_of_m_SynchronizedSpeed_3() { return &___m_SynchronizedSpeed_3; }
	inline void set_m_SynchronizedSpeed_3(Vector3_t2243707580  value)
	{
		___m_SynchronizedSpeed_3 = value;
	}

	inline static int32_t get_offset_of_m_SynchronizedTurnSpeed_4() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionControl_t1910445639, ___m_SynchronizedTurnSpeed_4)); }
	inline float get_m_SynchronizedTurnSpeed_4() const { return ___m_SynchronizedTurnSpeed_4; }
	inline float* get_address_of_m_SynchronizedTurnSpeed_4() { return &___m_SynchronizedTurnSpeed_4; }
	inline void set_m_SynchronizedTurnSpeed_4(float value)
	{
		___m_SynchronizedTurnSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_NetworkPosition_5() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionControl_t1910445639, ___m_NetworkPosition_5)); }
	inline Vector3_t2243707580  get_m_NetworkPosition_5() const { return ___m_NetworkPosition_5; }
	inline Vector3_t2243707580 * get_address_of_m_NetworkPosition_5() { return &___m_NetworkPosition_5; }
	inline void set_m_NetworkPosition_5(Vector3_t2243707580  value)
	{
		___m_NetworkPosition_5 = value;
	}

	inline static int32_t get_offset_of_m_OldNetworkPositions_6() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionControl_t1910445639, ___m_OldNetworkPositions_6)); }
	inline Queue_1_t2063364415 * get_m_OldNetworkPositions_6() const { return ___m_OldNetworkPositions_6; }
	inline Queue_1_t2063364415 ** get_address_of_m_OldNetworkPositions_6() { return &___m_OldNetworkPositions_6; }
	inline void set_m_OldNetworkPositions_6(Queue_1_t2063364415 * value)
	{
		___m_OldNetworkPositions_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_OldNetworkPositions_6, value);
	}

	inline static int32_t get_offset_of_m_UpdatedPositionAfterOnSerialize_7() { return static_cast<int32_t>(offsetof(PhotonTransformViewPositionControl_t1910445639, ___m_UpdatedPositionAfterOnSerialize_7)); }
	inline bool get_m_UpdatedPositionAfterOnSerialize_7() const { return ___m_UpdatedPositionAfterOnSerialize_7; }
	inline bool* get_address_of_m_UpdatedPositionAfterOnSerialize_7() { return &___m_UpdatedPositionAfterOnSerialize_7; }
	inline void set_m_UpdatedPositionAfterOnSerialize_7(bool value)
	{
		___m_UpdatedPositionAfterOnSerialize_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif