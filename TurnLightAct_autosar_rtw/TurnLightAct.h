/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TurnLightAct.h
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

#ifndef RTW_HEADER_TurnLightAct_h_
#define RTW_HEADER_TurnLightAct_h_
#ifndef TurnLightAct_COMMON_INCLUDES_
#define TurnLightAct_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_TurnLightAct.h"
#endif                                 /* TurnLightAct_COMMON_INCLUDES_ */

#include "TurnLightAct_types.h"

/* PublicStructure Variables for Internal Data, for system '<S1>/TurnLightControl_Front' */
typedef struct {
  uint8 is_active_c3_TurnLightMode_Cont;/* '<S1>/TurnLightControl_Front' */
  uint8 is_c3_TurnLightMode_Control;   /* '<S1>/TurnLightControl_Front' */
  uint8 is_DOUBLE;                     /* '<S1>/TurnLightControl_Front' */
  uint8 is_NORMAL;                     /* '<S1>/TurnLightControl_Front' */
  uint8 temporalCounter_i1;            /* '<S1>/TurnLightControl_Front' */
  uint8 TurnLamp_Out_Signal_prev;      /* '<S1>/TurnLightControl_Front' */
  uint8 TurnLamp_Out_Signal_start;     /* '<S1>/TurnLightControl_Front' */
} ARID_DEF_TurnLightControl_Fro_T;

/* PublicStructure Variables for Internal Data, for system '<S1>/TurnLightControl_Rear' */
typedef struct {
  uint8 CountSignal_Signal;            /* '<S1>/TurnLightControl_Rear' */
  uint8 is_active_c1_TurnLightMode_Cont;/* '<S1>/TurnLightControl_Rear' */
  uint8 is_c1_TurnLightMode_Control;   /* '<S1>/TurnLightControl_Rear' */
  uint8 is_LONG;                       /* '<S1>/TurnLightControl_Rear' */
  uint8 is_THREE;                      /* '<S1>/TurnLightControl_Rear' */
  uint8 temporalCounter_i1;            /* '<S1>/TurnLightControl_Rear' */
  uint8 TurnLamp_Out_Signal_prev;      /* '<S1>/TurnLightControl_Rear' */
  uint8 TurnLamp_Out_Signal_start;     /* '<S1>/TurnLightControl_Rear' */
} ARID_DEF_TurnLightControl_Rea_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_TurnLightControl_Rea_T ARID_DEF_TurnLightControl_Rear;/* '<S1>/TurnLightControl_Rear1' */
  ARID_DEF_TurnLightControl_Rea_T ARID_DEF_TurnLightControl_Rea_m;/* '<S1>/TurnLightControl_Rear' */
  ARID_DEF_TurnLightControl_Fro_T ARID_DEF_TurnLightControl_Fron;/* '<S1>/TurnLightControl_Front1' */
  ARID_DEF_TurnLightControl_Fro_T ARID_DEF_TurnLightControl_Fro_c;/* '<S1>/TurnLightControl_Front' */
  uint8 CountSignal_Signal;            /* '<S1>/TurnLightControl_Front1' */
  uint8 CountSignal_Signal_g;          /* '<S1>/TurnLightControl_Front' */
} ARID_DEF_TurnLightAct_T;

/* PublicStructure Variables for Internal Data */
extern ARID_DEF_TurnLightAct_T TurnLightAct_ARID_DEF;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Scope' : Unused code path elimination
 * Block '<S1>/Scope1' : Unused code path elimination
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
 * '<Root>' : 'TurnLightAct'
 * '<S1>'   : 'TurnLightAct/Runnable_sys'
 * '<S2>'   : 'TurnLightAct/TurnLightAct_Init'
 * '<S3>'   : 'TurnLightAct/Runnable_sys/TurnLightControl_Front'
 * '<S4>'   : 'TurnLightAct/Runnable_sys/TurnLightControl_Front1'
 * '<S5>'   : 'TurnLightAct/Runnable_sys/TurnLightControl_Rear'
 * '<S6>'   : 'TurnLightAct/Runnable_sys/TurnLightControl_Rear1'
 */
#endif                                 /* RTW_HEADER_TurnLightAct_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
