/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TurnLightArb.h
 *
 * Code generated for Simulink model 'TurnLightArb'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Sat Oct 11 16:25:50 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TurnLightArb_h_
#define RTW_HEADER_TurnLightArb_h_
#ifndef TurnLightArb_COMMON_INCLUDES_
#define TurnLightArb_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_TurnLightArb.h"
#endif                                 /* TurnLightArb_COMMON_INCLUDES_ */

#include "TurnLightArb_types.h"
#include "Rte_Type.h"

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  TurnLightService TurnLightCtrlPara_d;/* '<Root>/Data Store Memory' */
  uint8 TurnLamp_RR_Out_Signal;        /* '<S1>/TurnLightTruthTable' */
  uint8 TurnLamp_RL_Out_Signal;        /* '<S1>/TurnLightTruthTable' */
  uint8 TurnLamp_FR_Out_Signal;        /* '<S1>/TurnLightTruthTable' */
  uint8 TurnLamp_FL_Out_Signal;        /* '<S1>/TurnLightTruthTable' */
  uint8 OldPriority;                   /* '<Root>/Data Store Memory2' */
  uint8 is_active_c3_TurnLightArb;     /* '<S1>/TurnLightTruthTable' */
  boolean IsFunctionCall;              /* '<Root>/Data Store Memory1' */
} ARID_DEF_TurnLightArb_T;

/* PublicStructure Variables for Internal Data */
extern ARID_DEF_TurnLightArb_T TurnLightArb_ARID_DEF;/* '<Root>/Data Store Memory' */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Scope' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TurnLightArb'
 * '<S1>'   : 'TurnLightArb/Runnable_sys'
 * '<S2>'   : 'TurnLightArb/TurnLightArb_Init'
 * '<S3>'   : 'TurnLightArb/TurnLightService_TurnLightControl_Operation'
 * '<S4>'   : 'TurnLightArb/Runnable_sys/TurnLightTruthTable'
 * '<S5>'   : 'TurnLightArb/TurnLightService_TurnLightControl_Operation/TurnLightService_TurnLightControl_Operation_Operation_sys'
 * '<S6>'   : 'TurnLightArb/TurnLightService_TurnLightControl_Operation/TurnLightService_TurnLightControl_Operation_Operation_sys/If Action Subsystem'
 */
#endif                                 /* RTW_HEADER_TurnLightArb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
