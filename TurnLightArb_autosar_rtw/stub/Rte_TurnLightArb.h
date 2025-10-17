/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "TurnLightArb"
   ARXML schema: "4.3"
   File generated on: "2025-10-11 16:25:53"  */

#ifndef Rte_TurnLightArb_h
#define Rte_TurnLightArb_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_Write_TurnLamp_FL_Out_Signal Rte_Write_TurnLightArb_TurnLamp_FL_Out_Signal

Std_ReturnType Rte_Write_TurnLamp_FL_Out_Signal(uint8 u);

#define Rte_Invalidate_TurnLamp_FL_Out_Signal Rte_Invalidate_TurnLightArb_TurnLamp_FL_Out_Signal

Std_ReturnType Rte_Invalidate_TurnLamp_FL_Out_Signal(void);

#define Rte_Write_TurnLamp_FR_Out_Signal Rte_Write_TurnLightArb_TurnLamp_FR_Out_Signal

Std_ReturnType Rte_Write_TurnLamp_FR_Out_Signal(uint8 u);

#define Rte_Invalidate_TurnLamp_FR_Out_Signal Rte_Invalidate_TurnLightArb_TurnLamp_FR_Out_Signal

Std_ReturnType Rte_Invalidate_TurnLamp_FR_Out_Signal(void);

#define Rte_Write_TurnLamp_RL_Out_Signal Rte_Write_TurnLightArb_TurnLamp_RL_Out_Signal

Std_ReturnType Rte_Write_TurnLamp_RL_Out_Signal(uint8 u);

#define Rte_Invalidate_TurnLamp_RL_Out_Signal Rte_Invalidate_TurnLightArb_TurnLamp_RL_Out_Signal

Std_ReturnType Rte_Invalidate_TurnLamp_RL_Out_Signal(void);

#define Rte_Write_TurnLamp_RR_Out_Signal Rte_Write_TurnLightArb_TurnLamp_RR_Out_Signal

Std_ReturnType Rte_Write_TurnLamp_RR_Out_Signal(uint8 u);

#define Rte_Invalidate_TurnLamp_RR_Out_Signal Rte_Invalidate_TurnLightArb_TurnLamp_RR_Out_Signal

Std_ReturnType Rte_Invalidate_TurnLamp_RR_Out_Signal(void);

/* Entry point functions */
extern FUNC(void, TurnLightArb_CODE) Runnable(void);
extern FUNC(void, TurnLightArb_CODE) TurnLightArb_Init(void);

/* Server functions */
void turnlightservice_turnlightcontrol_operation_operation_1(const
  TurnLightService* TurnLightCtrlPara);

#endif
