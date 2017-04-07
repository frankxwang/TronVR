#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrControllerVisualManager1857939020.h"
#include "AssemblyU2DCSharp_GvrPointerManager2205699129.h"
#include "AssemblyU2DCSharp_GvrRecenterOnlyController2745329441.h"
#include "AssemblyU2DCSharp_GvrTooltip801170144.h"
#include "AssemblyU2DCSharp_Gvr_Internal_AndroidNativeContro1389606029.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorClientSocke2001911543.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorConfig616150261.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorConfig_Mode1624619217.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent1858389926.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent621139879.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent1122923020.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_A936529327.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_3000685002.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation4153005117.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent156276569.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent4043921137.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager3364249716.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnG1804908545.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnA1967739812.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnT4143287487.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnOr602701282.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnBu358370788.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_U3C4253624923.h"
#include "AssemblyU2DCSharp_proto_Proto_PhoneEvent3882078222.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent2572128318.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types3648109718.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Type1530480861.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve4072706903.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1262104803.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1211758263.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve2701542133.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve3452538341.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_GyroscopeE182225200.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_GyroscopeEv33558588.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerom1893725728.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerom1480486140.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE1516604558.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE3483346914.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Orientati2038376807.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Orientati2561526853.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent639576718.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent_2056133158.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Builder2537253112.h"
#include "AssemblyU2DCSharp_GvrBasePointer2150122635.h"
#include "AssemblyU2DCSharp_GvrBasePointerRaycaster1189534163.h"
#include "AssemblyU2DCSharp_GvrBasePointerRaycaster_RaycastM3965091944.h"
#include "AssemblyU2DCSharp_GvrExecuteEventsExtension3083691626.h"
#include "AssemblyU2DCSharp_GvrPointerGraphicRaycaster1649506702.h"
#include "AssemblyU2DCSharp_GvrPointerGraphicRaycaster_Block4215129352.h"
#include "AssemblyU2DCSharp_GvrPointerInputModule1603976810.h"
#include "AssemblyU2DCSharp_GvrPointerPhysicsRaycaster2558158517.h"
#include "AssemblyU2DCSharp_GvrUnitySdkVersion4210256426.h"
#include "AssemblyU2DCSharp_GvrViewer2583885279.h"
#include "AssemblyU2DCSharp_GvrViewer_DistortionCorrectionMe1613770858.h"
#include "AssemblyU2DCSharp_GvrViewer_StereoScreenChangeDele1350813851.h"
#include "AssemblyU2DCSharp_GvrViewer_Eye1346324485.h"
#include "AssemblyU2DCSharp_GvrViewer_Distortion351632083.h"
#include "AssemblyU2DCSharp_Pose3D3872859958.h"
#include "AssemblyU2DCSharp_MutablePose3D1015643808.h"
#include "AssemblyU2DCSharp_GvrDropdown2234606196.h"
#include "AssemblyU2DCSharp_GvrLaserPointer2879974839.h"
#include "AssemblyU2DCSharp_GvrLaserPointerImpl2141976067.h"
#include "AssemblyU2DCSharp_GvrReticlePointer2836438988.h"
#include "AssemblyU2DCSharp_GvrReticlePointerImpl3911945438.h"
#include "AssemblyU2DCSharp_GvrActivityHelper1610839920.h"
#include "AssemblyU2DCSharp_GvrFPS750935016.h"
#include "AssemblyU2DCSharp_GvrIntent542233401.h"
#include "AssemblyU2DCSharp_GvrUIHelpers1244281516.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture673526704.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_VideoType3515677472.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_VideoResol1153223030.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_VideoPlaye2474362314.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_VideoEvents660621533.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_RenderComma104445810.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_OnVideoEve3117232894.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_OnExceptio1653610982.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_U3CStartU32919987970.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_U3CCallPlu2924899295.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_U3CInternal129051828.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_U3CInterna2021693473.h"
#include "AssemblyU2DCSharp_Demo2DJumpAndRun3867174783.h"
#include "AssemblyU2DCSharp_JumpAndRunMovement1247290497.h"
#include "AssemblyU2DCSharp_ColorPerPlayer3468414963.h"
#include "AssemblyU2DCSharp_ColorPerPlayerApply1602831959.h"
#include "AssemblyU2DCSharp_DemoBoxesGui1886963857.h"
#include "AssemblyU2DCSharp_DemoBoxesGui_U3CSwapTipU3Ec__Ite1221830033.h"
#include "AssemblyU2DCSharp_OnAwakePhysicsSettings211072656.h"
#include "AssemblyU2DCSharp_OnClickFlashRpc4256173558.h"
#include "AssemblyU2DCSharp_OnClickFlashRpc_U3CFlashU3Ec__It3298883714.h"
#include "AssemblyU2DCSharp_OnDoubleclickDestroy1672824578.h"
#include "AssemblyU2DCSharp_ClickAndDrag3685540827.h"
#include "AssemblyU2DCSharp_DemoOwnershipGui3074530025.h"
#include "AssemblyU2DCSharp_InstantiateCube1938453577.h"
#include "AssemblyU2DCSharp_MaterialPerOwner1592108355.h"
#include "AssemblyU2DCSharp_OnClickDisableObj3388396834.h"
#include "AssemblyU2DCSharp_OnClickRequestOwnership527990915.h"
#include "AssemblyU2DCSharp_OnClickRightDestroy2493671783.h"
#include "AssemblyU2DCSharp_ChannelSelector4169853654.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2200 = { sizeof (GvrControllerVisualManager_t1857939020), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2201 = { sizeof (GvrPointerManager_t2205699129), -1, sizeof(GvrPointerManager_t2205699129_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2201[2] = 
{
	GvrPointerManager_t2205699129_StaticFields::get_offset_of_instance_2(),
	GvrPointerManager_t2205699129::get_offset_of_pointer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2202 = { sizeof (GvrRecenterOnlyController_t2745329441), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2203 = { sizeof (GvrTooltip_t801170144), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2204 = { sizeof (AndroidNativeControllerProvider_t1389606029), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2205 = { sizeof (EmulatorClientSocket_t2001911543), -1, sizeof(EmulatorClientSocket_t2001911543_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2205[9] = 
{
	EmulatorClientSocket_t2001911543_StaticFields::get_offset_of_kPhoneEventPort_2(),
	0,
	0,
	EmulatorClientSocket_t2001911543::get_offset_of_phoneMirroringSocket_5(),
	EmulatorClientSocket_t2001911543::get_offset_of_phoneEventThread_6(),
	EmulatorClientSocket_t2001911543::get_offset_of_shouldStop_7(),
	EmulatorClientSocket_t2001911543::get_offset_of_lastConnectionAttemptWasSuccessful_8(),
	EmulatorClientSocket_t2001911543::get_offset_of_phoneRemote_9(),
	EmulatorClientSocket_t2001911543::get_offset_of_U3CconnectedU3Ek__BackingField_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2206 = { sizeof (EmulatorConfig_t616150261), -1, sizeof(EmulatorConfig_t616150261_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2206[4] = 
{
	EmulatorConfig_t616150261_StaticFields::get_offset_of_instance_2(),
	EmulatorConfig_t616150261::get_offset_of_PHONE_EVENT_MODE_3(),
	EmulatorConfig_t616150261_StaticFields::get_offset_of_USB_SERVER_IP_4(),
	EmulatorConfig_t616150261_StaticFields::get_offset_of_WIFI_SERVER_IP_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2207 = { sizeof (Mode_t1624619217)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2207[4] = 
{
	Mode_t1624619217::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2208 = { sizeof (EmulatorGyroEvent_t1858389926)+ sizeof (Il2CppObject), sizeof(EmulatorGyroEvent_t1858389926 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2208[2] = 
{
	EmulatorGyroEvent_t1858389926::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorGyroEvent_t1858389926::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2209 = { sizeof (EmulatorAccelEvent_t621139879)+ sizeof (Il2CppObject), sizeof(EmulatorAccelEvent_t621139879 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2209[2] = 
{
	EmulatorAccelEvent_t621139879::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorAccelEvent_t621139879::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2210 = { sizeof (EmulatorTouchEvent_t1122923020)+ sizeof (Il2CppObject), -1, sizeof(EmulatorTouchEvent_t1122923020_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2210[6] = 
{
	EmulatorTouchEvent_t1122923020::get_offset_of_action_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t1122923020::get_offset_of_relativeTimestamp_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t1122923020::get_offset_of_pointers_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t1122923020_StaticFields::get_offset_of_ACTION_POINTER_INDEX_SHIFT_3(),
	EmulatorTouchEvent_t1122923020_StaticFields::get_offset_of_ACTION_POINTER_INDEX_MASK_4(),
	EmulatorTouchEvent_t1122923020_StaticFields::get_offset_of_ACTION_MASK_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2211 = { sizeof (Action_t936529327)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2211[10] = 
{
	Action_t936529327::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2212 = { sizeof (Pointer_t3000685002)+ sizeof (Il2CppObject), sizeof(Pointer_t3000685002 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2212[3] = 
{
	Pointer_t3000685002::get_offset_of_fingerId_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Pointer_t3000685002::get_offset_of_normalizedX_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Pointer_t3000685002::get_offset_of_normalizedY_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2213 = { sizeof (EmulatorOrientationEvent_t4153005117)+ sizeof (Il2CppObject), sizeof(EmulatorOrientationEvent_t4153005117 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2213[2] = 
{
	EmulatorOrientationEvent_t4153005117::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorOrientationEvent_t4153005117::get_offset_of_orientation_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2214 = { sizeof (EmulatorButtonEvent_t156276569)+ sizeof (Il2CppObject), sizeof(EmulatorButtonEvent_t156276569_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2214[2] = 
{
	EmulatorButtonEvent_t156276569::get_offset_of_code_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorButtonEvent_t156276569::get_offset_of_down_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2215 = { sizeof (ButtonCode_t4043921137)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2215[7] = 
{
	ButtonCode_t4043921137::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2216 = { sizeof (EmulatorManager_t3364249716), -1, sizeof(EmulatorManager_t3364249716_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2216[16] = 
{
	EmulatorManager_t3364249716::get_offset_of_emulatorUpdate_2(),
	EmulatorManager_t3364249716::get_offset_of_waitForEndOfFrame_3(),
	EmulatorManager_t3364249716_StaticFields::get_offset_of_instance_4(),
	EmulatorManager_t3364249716::get_offset_of_currentGyroEvent_5(),
	EmulatorManager_t3364249716::get_offset_of_currentAccelEvent_6(),
	EmulatorManager_t3364249716::get_offset_of_currentTouchEvent_7(),
	EmulatorManager_t3364249716::get_offset_of_currentOrientationEvent_8(),
	EmulatorManager_t3364249716::get_offset_of_currentButtonEvent_9(),
	EmulatorManager_t3364249716::get_offset_of_gyroEventListenersInternal_10(),
	EmulatorManager_t3364249716::get_offset_of_accelEventListenersInternal_11(),
	EmulatorManager_t3364249716::get_offset_of_touchEventListenersInternal_12(),
	EmulatorManager_t3364249716::get_offset_of_orientationEventListenersInternal_13(),
	EmulatorManager_t3364249716::get_offset_of_buttonEventListenersInternal_14(),
	EmulatorManager_t3364249716::get_offset_of_pendingEvents_15(),
	EmulatorManager_t3364249716::get_offset_of_socket_16(),
	EmulatorManager_t3364249716::get_offset_of_lastDownTimeMs_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2217 = { sizeof (OnGyroEvent_t1804908545), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2218 = { sizeof (OnAccelEvent_t1967739812), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2219 = { sizeof (OnTouchEvent_t4143287487), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2220 = { sizeof (OnOrientationEvent_t602701282), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2221 = { sizeof (OnButtonEvent_t358370788), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2222 = { sizeof (U3CEndOfFrameU3Ec__Iterator0_t4253624923), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2222[5] = 
{
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24locvar0_0(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24this_1(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24current_2(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24disposing_3(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2223 = { sizeof (PhoneEvent_t3882078222), -1, sizeof(PhoneEvent_t3882078222_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2223[1] = 
{
	PhoneEvent_t3882078222_StaticFields::get_offset_of_Descriptor_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2224 = { sizeof (PhoneEvent_t2572128318), -1, sizeof(PhoneEvent_t2572128318_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2224[25] = 
{
	PhoneEvent_t2572128318_StaticFields::get_offset_of_defaultInstance_0(),
	PhoneEvent_t2572128318_StaticFields::get_offset_of__phoneEventFieldNames_1(),
	PhoneEvent_t2572128318_StaticFields::get_offset_of__phoneEventFieldTags_2(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasType_4(),
	PhoneEvent_t2572128318::get_offset_of_type__5(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasMotionEvent_7(),
	PhoneEvent_t2572128318::get_offset_of_motionEvent__8(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasGyroscopeEvent_10(),
	PhoneEvent_t2572128318::get_offset_of_gyroscopeEvent__11(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasAccelerometerEvent_13(),
	PhoneEvent_t2572128318::get_offset_of_accelerometerEvent__14(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasDepthMapEvent_16(),
	PhoneEvent_t2572128318::get_offset_of_depthMapEvent__17(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasOrientationEvent_19(),
	PhoneEvent_t2572128318::get_offset_of_orientationEvent__20(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasKeyEvent_22(),
	PhoneEvent_t2572128318::get_offset_of_keyEvent__23(),
	PhoneEvent_t2572128318::get_offset_of_memoizedSerializedSize_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2225 = { sizeof (Types_t3648109718), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2226 = { sizeof (Type_t1530480861)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2226[7] = 
{
	Type_t1530480861::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2227 = { sizeof (MotionEvent_t4072706903), -1, sizeof(MotionEvent_t4072706903_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2227[12] = 
{
	MotionEvent_t4072706903_StaticFields::get_offset_of_defaultInstance_0(),
	MotionEvent_t4072706903_StaticFields::get_offset_of__motionEventFieldNames_1(),
	MotionEvent_t4072706903_StaticFields::get_offset_of__motionEventFieldTags_2(),
	0,
	MotionEvent_t4072706903::get_offset_of_hasTimestamp_4(),
	MotionEvent_t4072706903::get_offset_of_timestamp__5(),
	0,
	MotionEvent_t4072706903::get_offset_of_hasAction_7(),
	MotionEvent_t4072706903::get_offset_of_action__8(),
	0,
	MotionEvent_t4072706903::get_offset_of_pointers__10(),
	MotionEvent_t4072706903::get_offset_of_memoizedSerializedSize_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2228 = { sizeof (Types_t1262104803), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2229 = { sizeof (Pointer_t1211758263), -1, sizeof(Pointer_t1211758263_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2229[13] = 
{
	Pointer_t1211758263_StaticFields::get_offset_of_defaultInstance_0(),
	Pointer_t1211758263_StaticFields::get_offset_of__pointerFieldNames_1(),
	Pointer_t1211758263_StaticFields::get_offset_of__pointerFieldTags_2(),
	0,
	Pointer_t1211758263::get_offset_of_hasId_4(),
	Pointer_t1211758263::get_offset_of_id__5(),
	0,
	Pointer_t1211758263::get_offset_of_hasNormalizedX_7(),
	Pointer_t1211758263::get_offset_of_normalizedX__8(),
	0,
	Pointer_t1211758263::get_offset_of_hasNormalizedY_10(),
	Pointer_t1211758263::get_offset_of_normalizedY__11(),
	Pointer_t1211758263::get_offset_of_memoizedSerializedSize_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2230 = { sizeof (Builder_t2701542133), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2230[2] = 
{
	Builder_t2701542133::get_offset_of_resultIsReadOnly_0(),
	Builder_t2701542133::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2231 = { sizeof (Builder_t3452538341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2231[2] = 
{
	Builder_t3452538341::get_offset_of_resultIsReadOnly_0(),
	Builder_t3452538341::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2232 = { sizeof (GyroscopeEvent_t182225200), -1, sizeof(GyroscopeEvent_t182225200_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2232[16] = 
{
	GyroscopeEvent_t182225200_StaticFields::get_offset_of_defaultInstance_0(),
	GyroscopeEvent_t182225200_StaticFields::get_offset_of__gyroscopeEventFieldNames_1(),
	GyroscopeEvent_t182225200_StaticFields::get_offset_of__gyroscopeEventFieldTags_2(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasTimestamp_4(),
	GyroscopeEvent_t182225200::get_offset_of_timestamp__5(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasX_7(),
	GyroscopeEvent_t182225200::get_offset_of_x__8(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasY_10(),
	GyroscopeEvent_t182225200::get_offset_of_y__11(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasZ_13(),
	GyroscopeEvent_t182225200::get_offset_of_z__14(),
	GyroscopeEvent_t182225200::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2233 = { sizeof (Builder_t33558588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2233[2] = 
{
	Builder_t33558588::get_offset_of_resultIsReadOnly_0(),
	Builder_t33558588::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2234 = { sizeof (AccelerometerEvent_t1893725728), -1, sizeof(AccelerometerEvent_t1893725728_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2234[16] = 
{
	AccelerometerEvent_t1893725728_StaticFields::get_offset_of_defaultInstance_0(),
	AccelerometerEvent_t1893725728_StaticFields::get_offset_of__accelerometerEventFieldNames_1(),
	AccelerometerEvent_t1893725728_StaticFields::get_offset_of__accelerometerEventFieldTags_2(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasTimestamp_4(),
	AccelerometerEvent_t1893725728::get_offset_of_timestamp__5(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasX_7(),
	AccelerometerEvent_t1893725728::get_offset_of_x__8(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasY_10(),
	AccelerometerEvent_t1893725728::get_offset_of_y__11(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasZ_13(),
	AccelerometerEvent_t1893725728::get_offset_of_z__14(),
	AccelerometerEvent_t1893725728::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2235 = { sizeof (Builder_t1480486140), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2235[2] = 
{
	Builder_t1480486140::get_offset_of_resultIsReadOnly_0(),
	Builder_t1480486140::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2236 = { sizeof (DepthMapEvent_t1516604558), -1, sizeof(DepthMapEvent_t1516604558_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2236[16] = 
{
	DepthMapEvent_t1516604558_StaticFields::get_offset_of_defaultInstance_0(),
	DepthMapEvent_t1516604558_StaticFields::get_offset_of__depthMapEventFieldNames_1(),
	DepthMapEvent_t1516604558_StaticFields::get_offset_of__depthMapEventFieldTags_2(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_hasTimestamp_4(),
	DepthMapEvent_t1516604558::get_offset_of_timestamp__5(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_hasWidth_7(),
	DepthMapEvent_t1516604558::get_offset_of_width__8(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_hasHeight_10(),
	DepthMapEvent_t1516604558::get_offset_of_height__11(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_zDistancesMemoizedSerializedSize_13(),
	DepthMapEvent_t1516604558::get_offset_of_zDistances__14(),
	DepthMapEvent_t1516604558::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2237 = { sizeof (Builder_t3483346914), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2237[2] = 
{
	Builder_t3483346914::get_offset_of_resultIsReadOnly_0(),
	Builder_t3483346914::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2238 = { sizeof (OrientationEvent_t2038376807), -1, sizeof(OrientationEvent_t2038376807_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2238[19] = 
{
	OrientationEvent_t2038376807_StaticFields::get_offset_of_defaultInstance_0(),
	OrientationEvent_t2038376807_StaticFields::get_offset_of__orientationEventFieldNames_1(),
	OrientationEvent_t2038376807_StaticFields::get_offset_of__orientationEventFieldTags_2(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasTimestamp_4(),
	OrientationEvent_t2038376807::get_offset_of_timestamp__5(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasX_7(),
	OrientationEvent_t2038376807::get_offset_of_x__8(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasY_10(),
	OrientationEvent_t2038376807::get_offset_of_y__11(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasZ_13(),
	OrientationEvent_t2038376807::get_offset_of_z__14(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasW_16(),
	OrientationEvent_t2038376807::get_offset_of_w__17(),
	OrientationEvent_t2038376807::get_offset_of_memoizedSerializedSize_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2239 = { sizeof (Builder_t2561526853), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2239[2] = 
{
	Builder_t2561526853::get_offset_of_resultIsReadOnly_0(),
	Builder_t2561526853::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2240 = { sizeof (KeyEvent_t639576718), -1, sizeof(KeyEvent_t639576718_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2240[10] = 
{
	KeyEvent_t639576718_StaticFields::get_offset_of_defaultInstance_0(),
	KeyEvent_t639576718_StaticFields::get_offset_of__keyEventFieldNames_1(),
	KeyEvent_t639576718_StaticFields::get_offset_of__keyEventFieldTags_2(),
	0,
	KeyEvent_t639576718::get_offset_of_hasAction_4(),
	KeyEvent_t639576718::get_offset_of_action__5(),
	0,
	KeyEvent_t639576718::get_offset_of_hasCode_7(),
	KeyEvent_t639576718::get_offset_of_code__8(),
	KeyEvent_t639576718::get_offset_of_memoizedSerializedSize_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2241 = { sizeof (Builder_t2056133158), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2241[2] = 
{
	Builder_t2056133158::get_offset_of_resultIsReadOnly_0(),
	Builder_t2056133158::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2242 = { sizeof (Builder_t2537253112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2242[2] = 
{
	Builder_t2537253112::get_offset_of_resultIsReadOnly_0(),
	Builder_t2537253112::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2243 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2244 = { sizeof (GvrBasePointer_t2150122635), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2244[2] = 
{
	GvrBasePointer_t2150122635::get_offset_of_U3CShouldUseExitRadiusForRaycastU3Ek__BackingField_0(),
	GvrBasePointer_t2150122635::get_offset_of_U3CPointerTransformU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2245 = { sizeof (GvrBasePointerRaycaster_t1189534163), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2245[2] = 
{
	GvrBasePointerRaycaster_t1189534163::get_offset_of_raycastMode_2(),
	GvrBasePointerRaycaster_t1189534163::get_offset_of_lastRay_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2246 = { sizeof (RaycastMode_t3965091944)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2246[3] = 
{
	RaycastMode_t3965091944::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2247 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2248 = { sizeof (GvrExecuteEventsExtension_t3083691626), -1, sizeof(GvrExecuteEventsExtension_t3083691626_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2248[2] = 
{
	GvrExecuteEventsExtension_t3083691626_StaticFields::get_offset_of_s_HoverHandler_0(),
	GvrExecuteEventsExtension_t3083691626_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2249 = { sizeof (GvrPointerGraphicRaycaster_t1649506702), -1, sizeof(GvrPointerGraphicRaycaster_t1649506702_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2249[9] = 
{
	0,
	GvrPointerGraphicRaycaster_t1649506702::get_offset_of_ignoreReversedGraphics_5(),
	GvrPointerGraphicRaycaster_t1649506702::get_offset_of_blockingObjects_6(),
	GvrPointerGraphicRaycaster_t1649506702::get_offset_of_blockingMask_7(),
	GvrPointerGraphicRaycaster_t1649506702::get_offset_of_targetCanvas_8(),
	GvrPointerGraphicRaycaster_t1649506702::get_offset_of_raycastResults_9(),
	GvrPointerGraphicRaycaster_t1649506702::get_offset_of_cachedPointerEventCamera_10(),
	GvrPointerGraphicRaycaster_t1649506702_StaticFields::get_offset_of_sortedGraphics_11(),
	GvrPointerGraphicRaycaster_t1649506702_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2250 = { sizeof (BlockingObjects_t4215129352)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2250[5] = 
{
	BlockingObjects_t4215129352::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2251 = { sizeof (GvrPointerInputModule_t1603976810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2251[9] = 
{
	GvrPointerInputModule_t1603976810::get_offset_of_vrModeOnly_8(),
	GvrPointerInputModule_t1603976810::get_offset_of_pointerData_9(),
	GvrPointerInputModule_t1603976810::get_offset_of_lastPose_10(),
	GvrPointerInputModule_t1603976810::get_offset_of_lastScroll_11(),
	GvrPointerInputModule_t1603976810::get_offset_of_eligibleForScroll_12(),
	GvrPointerInputModule_t1603976810::get_offset_of_isPointerHovering_13(),
	GvrPointerInputModule_t1603976810::get_offset_of_isActive_14(),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2252 = { sizeof (GvrPointerPhysicsRaycaster_t2558158517), -1, sizeof(GvrPointerPhysicsRaycaster_t2558158517_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2252[4] = 
{
	0,
	GvrPointerPhysicsRaycaster_t2558158517::get_offset_of_raycasterEventMask_5(),
	GvrPointerPhysicsRaycaster_t2558158517::get_offset_of_cachedEventCamera_6(),
	GvrPointerPhysicsRaycaster_t2558158517_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2253 = { sizeof (GvrUnitySdkVersion_t4210256426), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2253[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2254 = { sizeof (GvrViewer_t2583885279), -1, sizeof(GvrViewer_t2583885279_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2254[20] = 
{
	0,
	GvrViewer_t2583885279_StaticFields::get_offset_of_instance_3(),
	GvrViewer_t2583885279_StaticFields::get_offset_of_currentController_4(),
	GvrViewer_t2583885279_StaticFields::get_offset_of_currentMainCamera_5(),
	GvrViewer_t2583885279::get_offset_of_vrModeEnabled_6(),
	GvrViewer_t2583885279::get_offset_of_distortionCorrection_7(),
	GvrViewer_t2583885279::get_offset_of_neckModelScale_8(),
	GvrViewer_t2583885279_StaticFields::get_offset_of_device_9(),
	GvrViewer_t2583885279::get_offset_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_10(),
	GvrViewer_t2583885279::get_offset_of_U3CNativeUILayerSupportedU3Ek__BackingField_11(),
	GvrViewer_t2583885279::get_offset_of_stereoScreenScale_12(),
	GvrViewer_t2583885279_StaticFields::get_offset_of_stereoScreen_13(),
	GvrViewer_t2583885279::get_offset_of_OnStereoScreenChanged_14(),
	GvrViewer_t2583885279::get_offset_of_defaultComfortableViewingRange_15(),
	GvrViewer_t2583885279::get_offset_of_DefaultDeviceProfile_16(),
	GvrViewer_t2583885279::get_offset_of_U3CTriggeredU3Ek__BackingField_17(),
	GvrViewer_t2583885279::get_offset_of_U3CTiltedU3Ek__BackingField_18(),
	GvrViewer_t2583885279::get_offset_of_U3CProfileChangedU3Ek__BackingField_19(),
	GvrViewer_t2583885279::get_offset_of_U3CBackButtonPressedU3Ek__BackingField_20(),
	GvrViewer_t2583885279::get_offset_of_updatedToFrame_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2255 = { sizeof (DistortionCorrectionMethod_t1613770858)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2255[4] = 
{
	DistortionCorrectionMethod_t1613770858::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2256 = { sizeof (StereoScreenChangeDelegate_t1350813851), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2257 = { sizeof (Eye_t1346324485)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2257[4] = 
{
	Eye_t1346324485::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2258 = { sizeof (Distortion_t351632083)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2258[3] = 
{
	Distortion_t351632083::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2259 = { sizeof (Pose3D_t3872859958), -1, sizeof(Pose3D_t3872859958_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2259[4] = 
{
	Pose3D_t3872859958_StaticFields::get_offset_of_flipZ_0(),
	Pose3D_t3872859958::get_offset_of_U3CPositionU3Ek__BackingField_1(),
	Pose3D_t3872859958::get_offset_of_U3COrientationU3Ek__BackingField_2(),
	Pose3D_t3872859958::get_offset_of_U3CMatrixU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2260 = { sizeof (MutablePose3D_t1015643808), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2261 = { sizeof (GvrDropdown_t2234606196), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2261[1] = 
{
	GvrDropdown_t2234606196::get_offset_of_currentBlocker_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2262 = { sizeof (GvrLaserPointer_t2879974839), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2263 = { sizeof (GvrLaserPointerImpl_t2141976067), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2263[11] = 
{
	0,
	0,
	GvrLaserPointerImpl_t2141976067::get_offset_of_U3CMainCameraU3Ek__BackingField_4(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_U3CLaserColorU3Ek__BackingField_5(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_U3CLaserLineRendererU3Ek__BackingField_6(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_U3CReticleU3Ek__BackingField_7(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_U3CMaxLaserDistanceU3Ek__BackingField_8(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_U3CMaxReticleDistanceU3Ek__BackingField_9(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_U3CPointerIntersectionU3Ek__BackingField_10(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_U3CIsPointerIntersectingU3Ek__BackingField_11(),
	GvrLaserPointerImpl_t2141976067::get_offset_of_U3CPointerIntersectionRayU3Ek__BackingField_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2264 = { sizeof (GvrReticlePointer_t2836438988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2264[3] = 
{
	GvrReticlePointer_t2836438988::get_offset_of_reticlePointerImpl_2(),
	GvrReticlePointer_t2836438988::get_offset_of_reticleSegments_3(),
	GvrReticlePointer_t2836438988::get_offset_of_reticleGrowthSpeed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2265 = { sizeof (GvrReticlePointerImpl_t3911945438), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2265[12] = 
{
	0,
	0,
	0,
	0,
	0,
	GvrReticlePointerImpl_t3911945438::get_offset_of_U3CReticleGrowthSpeedU3Ek__BackingField_7(),
	GvrReticlePointerImpl_t3911945438::get_offset_of_U3CMaterialCompU3Ek__BackingField_8(),
	GvrReticlePointerImpl_t3911945438::get_offset_of_U3CReticleInnerAngleU3Ek__BackingField_9(),
	GvrReticlePointerImpl_t3911945438::get_offset_of_U3CReticleOuterAngleU3Ek__BackingField_10(),
	GvrReticlePointerImpl_t3911945438::get_offset_of_U3CReticleDistanceInMetersU3Ek__BackingField_11(),
	GvrReticlePointerImpl_t3911945438::get_offset_of_U3CReticleInnerDiameterU3Ek__BackingField_12(),
	GvrReticlePointerImpl_t3911945438::get_offset_of_U3CReticleOuterDiameterU3Ek__BackingField_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2266 = { sizeof (GvrActivityHelper_t1610839920), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2267 = { sizeof (GvrFPS_t750935016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2267[6] = 
{
	0,
	0,
	0,
	GvrFPS_t750935016::get_offset_of_textField_5(),
	GvrFPS_t750935016::get_offset_of_fps_6(),
	GvrFPS_t750935016::get_offset_of_cam_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2268 = { sizeof (GvrIntent_t542233401), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2268[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2269 = { sizeof (GvrUIHelpers_t1244281516), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2270 = { sizeof (GvrVideoPlayerTexture_t673526704), -1, sizeof(GvrVideoPlayerTexture_t673526704_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2270[33] = 
{
	0,
	0,
	GvrVideoPlayerTexture_t673526704::get_offset_of_videoTextures_4(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_currentTexture_5(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_videoPlayerPtr_6(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_videoPlayerEventBase_7(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_initialTexture_8(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_initialized_9(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_texWidth_10(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_texHeight_11(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_lastBufferedPosition_12(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_framecount_13(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_graphicComponent_14(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_rendererComponent_15(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_renderEventFunction_16(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_processingRunning_17(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_exitProcessing_18(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_onEventCallbacks_19(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_onExceptionCallbacks_20(),
	GvrVideoPlayerTexture_t673526704_StaticFields::get_offset_of_ExecuteOnMainThread_21(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_statusText_22(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_bufferSize_23(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_videoType_24(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_videoURL_25(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_videoContentID_26(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_videoProviderId_27(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_initialResolution_28(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_adjustAspectRatio_29(),
	GvrVideoPlayerTexture_t673526704::get_offset_of_useSecurePath_30(),
	0,
	GvrVideoPlayerTexture_t673526704_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_32(),
	GvrVideoPlayerTexture_t673526704_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_33(),
	GvrVideoPlayerTexture_t673526704_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_34(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2271 = { sizeof (VideoType_t3515677472)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2271[4] = 
{
	VideoType_t3515677472::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2272 = { sizeof (VideoResolution_t1153223030)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2272[6] = 
{
	VideoResolution_t1153223030::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2273 = { sizeof (VideoPlayerState_t2474362314)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2273[6] = 
{
	VideoPlayerState_t2474362314::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2274 = { sizeof (VideoEvents_t660621533)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2274[6] = 
{
	VideoEvents_t660621533::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2275 = { sizeof (RenderCommand_t104445810)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2275[8] = 
{
	RenderCommand_t104445810::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2276 = { sizeof (OnVideoEventCallback_t3117232894), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2277 = { sizeof (OnExceptionCallback_t1653610982), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2278 = { sizeof (U3CStartU3Ec__Iterator0_t2919987970), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2278[4] = 
{
	U3CStartU3Ec__Iterator0_t2919987970::get_offset_of_U24this_0(),
	U3CStartU3Ec__Iterator0_t2919987970::get_offset_of_U24current_1(),
	U3CStartU3Ec__Iterator0_t2919987970::get_offset_of_U24disposing_2(),
	U3CStartU3Ec__Iterator0_t2919987970::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2279 = { sizeof (U3CCallPluginAtEndOfFramesU3Ec__Iterator1_t2924899295), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2279[10] = 
{
	U3CCallPluginAtEndOfFramesU3Ec__Iterator1_t2924899295::get_offset_of_U3CrunningU3E__0_0(),
	U3CCallPluginAtEndOfFramesU3Ec__Iterator1_t2924899295::get_offset_of_U3CwfeofU3E__0_1(),
	U3CCallPluginAtEndOfFramesU3Ec__Iterator1_t2924899295::get_offset_of_U3CtexU3E__1_2(),
	U3CCallPluginAtEndOfFramesU3Ec__Iterator1_t2924899295::get_offset_of_U3CwU3E__1_3(),
	U3CCallPluginAtEndOfFramesU3Ec__Iterator1_t2924899295::get_offset_of_U3ChU3E__1_4(),
	U3CCallPluginAtEndOfFramesU3Ec__Iterator1_t2924899295::get_offset_of_U3CbpU3E__1_5(),
	U3CCallPluginAtEndOfFramesU3Ec__Iterator1_t2924899295::get_offset_of_U24this_6(),
	U3CCallPluginAtEndOfFramesU3Ec__Iterator1_t2924899295::get_offset_of_U24current_7(),
	U3CCallPluginAtEndOfFramesU3Ec__Iterator1_t2924899295::get_offset_of_U24disposing_8(),
	U3CCallPluginAtEndOfFramesU3Ec__Iterator1_t2924899295::get_offset_of_U24PC_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2280 = { sizeof (U3CInternalOnVideoEventCallbackU3Ec__AnonStorey2_t129051828), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2280[2] = 
{
	U3CInternalOnVideoEventCallbackU3Ec__AnonStorey2_t129051828::get_offset_of_player_0(),
	U3CInternalOnVideoEventCallbackU3Ec__AnonStorey2_t129051828::get_offset_of_eventId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2281 = { sizeof (U3CInternalOnExceptionCallbackU3Ec__AnonStorey3_t2021693473), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2281[3] = 
{
	U3CInternalOnExceptionCallbackU3Ec__AnonStorey3_t2021693473::get_offset_of_player_0(),
	U3CInternalOnExceptionCallbackU3Ec__AnonStorey3_t2021693473::get_offset_of_type_1(),
	U3CInternalOnExceptionCallbackU3Ec__AnonStorey3_t2021693473::get_offset_of_msg_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2282 = { sizeof (Demo2DJumpAndRun_t3867174783), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2283 = { sizeof (JumpAndRunMovement_t1247290497), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2283[6] = 
{
	JumpAndRunMovement_t1247290497::get_offset_of_Speed_2(),
	JumpAndRunMovement_t1247290497::get_offset_of_JumpForce_3(),
	JumpAndRunMovement_t1247290497::get_offset_of_m_Animator_4(),
	JumpAndRunMovement_t1247290497::get_offset_of_m_Body_5(),
	JumpAndRunMovement_t1247290497::get_offset_of_m_PhotonView_6(),
	JumpAndRunMovement_t1247290497::get_offset_of_m_IsGrounded_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2284 = { sizeof (ColorPerPlayer_t3468414963), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2284[8] = 
{
	ColorPerPlayer_t3468414963::get_offset_of_Colors_3(),
	0,
	ColorPerPlayer_t3468414963::get_offset_of_ShowColorLabel_5(),
	ColorPerPlayer_t3468414963::get_offset_of_ColorLabelArea_6(),
	ColorPerPlayer_t3468414963::get_offset_of_img_7(),
	ColorPerPlayer_t3468414963::get_offset_of_MyColor_8(),
	ColorPerPlayer_t3468414963::get_offset_of_U3CColorPickedU3Ek__BackingField_9(),
	ColorPerPlayer_t3468414963::get_offset_of_isInitialized_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2285 = { sizeof (ColorPerPlayerApply_t1602831959), -1, sizeof(ColorPerPlayerApply_t1602831959_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2285[3] = 
{
	ColorPerPlayerApply_t1602831959_StaticFields::get_offset_of_colorPickerCache_3(),
	ColorPerPlayerApply_t1602831959::get_offset_of_rendererComponent_4(),
	ColorPerPlayerApply_t1602831959::get_offset_of_isInitialized_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2286 = { sizeof (DemoBoxesGui_t1886963857), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2286[7] = 
{
	DemoBoxesGui_t1886963857::get_offset_of_HideUI_2(),
	DemoBoxesGui_t1886963857::get_offset_of_GuiTextForTips_3(),
	DemoBoxesGui_t1886963857::get_offset_of_tipsIndex_4(),
	DemoBoxesGui_t1886963857::get_offset_of_tips_5(),
	0,
	DemoBoxesGui_t1886963857::get_offset_of_timeSinceLastTip_7(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2287 = { sizeof (U3CSwapTipU3Ec__Iterator0_t1221830033), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2287[5] = 
{
	U3CSwapTipU3Ec__Iterator0_t1221830033::get_offset_of_U3CalphaU3E__0_0(),
	U3CSwapTipU3Ec__Iterator0_t1221830033::get_offset_of_U24this_1(),
	U3CSwapTipU3Ec__Iterator0_t1221830033::get_offset_of_U24current_2(),
	U3CSwapTipU3Ec__Iterator0_t1221830033::get_offset_of_U24disposing_3(),
	U3CSwapTipU3Ec__Iterator0_t1221830033::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2288 = { sizeof (OnAwakePhysicsSettings_t211072656), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2289 = { sizeof (OnClickFlashRpc_t4256173558), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2289[3] = 
{
	OnClickFlashRpc_t4256173558::get_offset_of_originalMaterial_3(),
	OnClickFlashRpc_t4256173558::get_offset_of_originalColor_4(),
	OnClickFlashRpc_t4256173558::get_offset_of_isFlashing_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2290 = { sizeof (U3CFlashU3Ec__Iterator0_t3298883714), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2290[6] = 
{
	U3CFlashU3Ec__Iterator0_t3298883714::get_offset_of_U3CfU3E__1_0(),
	U3CFlashU3Ec__Iterator0_t3298883714::get_offset_of_U3ClerpedU3E__2_1(),
	U3CFlashU3Ec__Iterator0_t3298883714::get_offset_of_U24this_2(),
	U3CFlashU3Ec__Iterator0_t3298883714::get_offset_of_U24current_3(),
	U3CFlashU3Ec__Iterator0_t3298883714::get_offset_of_U24disposing_4(),
	U3CFlashU3Ec__Iterator0_t3298883714::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2291 = { sizeof (OnDoubleclickDestroy_t1672824578), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2291[2] = 
{
	OnDoubleclickDestroy_t1672824578::get_offset_of_timeOfLastClick_3(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2292 = { sizeof (ClickAndDrag_t3685540827), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2292[3] = 
{
	ClickAndDrag_t3685540827::get_offset_of_camOnPress_3(),
	ClickAndDrag_t3685540827::get_offset_of_following_4(),
	ClickAndDrag_t3685540827::get_offset_of_factor_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2293 = { sizeof (DemoOwnershipGui_t3074530025), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2293[2] = 
{
	DemoOwnershipGui_t3074530025::get_offset_of_Skin_2(),
	DemoOwnershipGui_t3074530025::get_offset_of_TransferOwnershipOnRequest_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2294 = { sizeof (InstantiateCube_t1938453577), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2294[3] = 
{
	InstantiateCube_t1938453577::get_offset_of_Prefab_2(),
	InstantiateCube_t1938453577::get_offset_of_InstantiateType_3(),
	InstantiateCube_t1938453577::get_offset_of_showGui_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2295 = { sizeof (MaterialPerOwner_t1592108355), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2295[2] = 
{
	MaterialPerOwner_t1592108355::get_offset_of_assignedColorForUserId_3(),
	MaterialPerOwner_t1592108355::get_offset_of_m_Renderer_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2296 = { sizeof (OnClickDisableObj_t3388396834), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2297 = { sizeof (OnClickRequestOwnership_t527990915), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2298 = { sizeof (OnClickRightDestroy_t2493671783), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2299 = { sizeof (ChannelSelector_t4169853654), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2299[1] = 
{
	ChannelSelector_t4169853654::get_offset_of_Channel_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
