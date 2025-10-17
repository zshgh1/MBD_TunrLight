/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TurnLightAct_private.h
 *
 * Code generated for Simulink model 'TurnLightAct'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Sat Oct 11 16:26:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TurnLightAct_private_h_
#define RTW_HEADER_TurnLightAct_private_h_
#include "rtwtypes.h"
#include "TurnLightAct.h"
#include "TurnLightAct_types.h"

extern void Tur_TurnLightControl_Front_Init(uint8
  *rty_Com_CAN_LA_St_DirectionLamp, uint8 *rty_TurnLampCtrlCmd_Signal, uint8
  *rty_CountSignal_Signal);
extern void TurnLigh_TurnLightControl_Front(uint8 rtu_TurnLamp_Out_Signal, uint8
  *rty_Com_CAN_LA_St_DirectionLamp, uint8 *rty_TurnLampCtrlCmd_Signal, uint8
  *rty_CountSignal_Signal, ARID_DEF_TurnLightControl_Fro_T
  *TurnLightAct__ARID_DEF_arg);
extern void Turn_TurnLightControl_Rear_Init(uint8 *rty_TurnLampCtrlCmd_Signal);
extern void TurnLight_TurnLightControl_Rear(uint8 rtu_TurnLamp_Out_Signal, uint8
  *rty_TurnLampCtrlCmd_Signal, ARID_DEF_TurnLightControl_Rea_T
  *TurnLightAct__ARID_DEF_arg);

#endif                                 /* RTW_HEADER_TurnLightAct_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
