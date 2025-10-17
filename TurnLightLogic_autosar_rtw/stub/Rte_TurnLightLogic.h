/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "TurnLightLogic"
   ARXML schema: "4.3"
   File generated on: "2025-10-11 16:25:08"  */

#ifndef Rte_TurnLightLogic_h
#define Rte_TurnLightLogic_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_Read_CountSignal_Left_Signal Rte_Read_TurnLightLogic_CountSignal_Left_Signal

Std_ReturnType Rte_Read_CountSignal_Left_Signal(uint8* u);

#define Rte_Read_CountSignal_Right_Signal Rte_Read_TurnLightLogic_CountSignal_Right_Signal

Std_ReturnType Rte_Read_CountSignal_Right_Signal(uint8* u);

#define Rte_Read_CrashIntensity_Signal Rte_Read_TurnLightLogic_CrashIntensity_Signal

Std_ReturnType Rte_Read_CrashIntensity_Signal(uint8* u);

#define Rte_Read_EmergencyBrakeLight_Signal Rte_Read_TurnLightLogic_EmergencyBrakeLight_Signal

Std_ReturnType Rte_Read_EmergencyBrakeLight_Signal(uint8* u);

#define Rte_Read_HazardSw_Signal       Rte_Read_TurnLightLogic_HazardSw_Signal

Std_ReturnType Rte_Read_HazardSw_Signal(uint8* u);

#define Rte_Read_IGN_Status_Signal     Rte_Read_TurnLightLogic_IGN_Status_Signal

Std_ReturnType Rte_Read_IGN_Status_Signal(uint8* u);

#define Rte_Read_TurnLampCtrlCmd_FL_Signal Rte_Read_TurnLightLogic_TurnLampCtrlCmd_FL_Signal

Std_ReturnType Rte_Read_TurnLampCtrlCmd_FL_Signal(uint8* u);

#define Rte_Read_TurnLampCtrlCmd_FR_Signal Rte_Read_TurnLightLogic_TurnLampCtrlCmd_FR_Signal

Std_ReturnType Rte_Read_TurnLampCtrlCmd_FR_Signal(uint8* u);

#define Rte_Read_TurnLampCtrlCmd_RL_Signal Rte_Read_TurnLightLogic_TurnLampCtrlCmd_RL_Signal

Std_ReturnType Rte_Read_TurnLampCtrlCmd_RL_Signal(uint8* u);

#define Rte_Read_TurnLampCtrlCmd_RR_Signal Rte_Read_TurnLightLogic_TurnLampCtrlCmd_RR_Signal

Std_ReturnType Rte_Read_TurnLampCtrlCmd_RR_Signal(uint8* u);

#define Rte_Read_TurnLampFb_FL_Signal  Rte_Read_TurnLightLogic_TurnLampFb_FL_Signal

Std_ReturnType Rte_Read_TurnLampFb_FL_Signal(uint8* u);

#define Rte_Read_TurnLampFb_FR_Signal  Rte_Read_TurnLightLogic_TurnLampFb_FR_Signal

Std_ReturnType Rte_Read_TurnLampFb_FR_Signal(uint8* u);

#define Rte_Read_TurnLampFb_RL_Signal  Rte_Read_TurnLightLogic_TurnLampFb_RL_Signal

Std_ReturnType Rte_Read_TurnLampFb_RL_Signal(uint8* u);

#define Rte_Read_TurnLampFb_RR_Signal  Rte_Read_TurnLightLogic_TurnLampFb_RR_Signal

Std_ReturnType Rte_Read_TurnLampFb_RR_Signal(uint8* u);

#define Rte_Read_TurnLampSw_Signal     Rte_Read_TurnLightLogic_TurnLampSw_Signal

Std_ReturnType Rte_Read_TurnLampSw_Signal(uint8* u);

#define Rte_Read_VehicleSpeed_Signal   Rte_Read_TurnLightLogic_VehicleSpeed_Signal

Std_ReturnType Rte_Read_VehicleSpeed_Signal(uint8* u);

#define Rte_Read_VehicleSpeed_Valid_Signal Rte_Read_TurnLightLogic_VehicleSpeed_Valid_Signal

Std_ReturnType Rte_Read_VehicleSpeed_Valid_Signal(uint8* u);

/* Entry point functions */
extern FUNC(void, TurnLightLogic_CODE) Runnable(void);
extern FUNC(void, TurnLightLogic_CODE) TurnLightLogic_Init(void);

/* Server operation call points */
#define Rte_Call_TurnLightService_TurnLightControl_Operation_Operation Rte_Call_TurnLightLogic_TurnLightService_TurnLightControl_Operation_Operation

Std_ReturnType Rte_Call_TurnLightService_TurnLightControl_Operation_Operation(
  const TurnLightService* TurnLightCtrlPara);

#endif
