/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TurnLightLogic.h
 *
 * Code generated for Simulink model 'TurnLightLogic'.
 *
 * Model version                  : 1.16
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Sat Oct 11 16:25:00 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TurnLightLogic_h_
#define RTW_HEADER_TurnLightLogic_h_
#ifndef TurnLightLogic_COMMON_INCLUDES_
#define TurnLightLogic_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_TurnLightLogic.h"
#endif                                 /* TurnLightLogic_COMMON_INCLUDES_ */

#include "TurnLightLogic_types.h"
#include "Rte_Type.h"

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  uint32 temporalCounter_i1;           /* '<S1>/HazardLogic' */
  uint16 CheckTime;                    /* '<S1>/TurnLightLogic' */
  uint8 TurnLightReq;                  /* '<S1>/TurnLightLogic' */
  uint8 TurnLightMode;                 /* '<S1>/TurnLightLogic' */
  uint8 HazardReq;                     /* '<S1>/HazardLogic' */
  uint8 LeftRetry;                     /* '<S1>/Data Store Memory' */
  uint8 RightRetry;                    /* '<S1>/Data Store Memory1' */
  uint8 is_active_c4_TurnLightLogic;   /* '<S1>/TurnLightSelector' */
  uint8 is_c4_TurnLightLogic;          /* '<S1>/TurnLightSelector' */
  uint8 temporalCounter_i1_g;          /* '<S1>/TurnLightSelector' */
  uint8 TurnLightReq_prev;             /* '<S1>/TurnLightSelector' */
  uint8 TurnLightReq_start;            /* '<S1>/TurnLightSelector' */
  uint8 HazardReq_prev;                /* '<S1>/TurnLightSelector' */
  uint8 HazardReq_start;               /* '<S1>/TurnLightSelector' */
  uint8 is_active_c3_TurnLightLogic;   /* '<S1>/TurnLightLogic' */
  uint8 is_c3_TurnLightLogic;          /* '<S1>/TurnLightLogic' */
  uint8 is_TurnLeft;                   /* '<S1>/TurnLightLogic' */
  uint8 is_TurnRight;                  /* '<S1>/TurnLightLogic' */
  uint8 is_active_c1_TurnLightLogic;   /* '<S1>/HazardLogic' */
  uint8 is_c1_TurnLightLogic;          /* '<S1>/HazardLogic' */
  uint8 CrashIntensity_Signal_prev;    /* '<S1>/HazardLogic' */
  uint8 CrashIntensity_Signal_start;   /* '<S1>/HazardLogic' */
  uint8 EmergencyBrakeLight_Signal_prev;/* '<S1>/HazardLogic' */
  uint8 EmergencyBrakeLight_Signal_star;/* '<S1>/HazardLogic' */
  uint8 token;                         /* '<S1>/Diagnosis' */
  uint8 is_active_c2_TurnLightLogic;   /* '<S1>/Diagnosis' */
  uint8 is_RL;                         /* '<S1>/Diagnosis' */
  uint8 is_FL;                         /* '<S1>/Diagnosis' */
  uint8 is_FR;                         /* '<S1>/Diagnosis' */
  uint8 is_RR;                         /* '<S1>/Diagnosis' */
  boolean FL_flag;                     /* '<S1>/Diagnosis' */
  boolean FR_flag;                     /* '<S1>/Diagnosis' */
  boolean RL_flag;                     /* '<S1>/Diagnosis' */
  boolean RR_flag;                     /* '<S1>/Diagnosis' */
} ARID_DEF_TurnLightLogic_T;

/* PublicStructure Variables for Internal Data */
extern ARID_DEF_TurnLightLogic_T TurnLightLogic_ARID_DEF;/* '<S1>/HazardLogic' */

/* External data declarations for dependent source files */
extern const TurnLightService TurnLightLogic_rtZTurnLightService;/* TurnLightService ground */

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
 * '<Root>' : 'TurnLightLogic'
 * '<S1>'   : 'TurnLightLogic/Runnable_sys'
 * '<S2>'   : 'TurnLightLogic/TurnLightLogic_Init'
 * '<S3>'   : 'TurnLightLogic/Runnable_sys/Diagnosis'
 * '<S4>'   : 'TurnLightLogic/Runnable_sys/Function-Call Subsystem'
 * '<S5>'   : 'TurnLightLogic/Runnable_sys/Function-Call Subsystem1'
 * '<S6>'   : 'TurnLightLogic/Runnable_sys/Function-Call Subsystem10'
 * '<S7>'   : 'TurnLightLogic/Runnable_sys/Function-Call Subsystem11'
 * '<S8>'   : 'TurnLightLogic/Runnable_sys/Function-Call Subsystem12'
 * '<S9>'   : 'TurnLightLogic/Runnable_sys/Function-Call Subsystem13'
 * '<S10>'  : 'TurnLightLogic/Runnable_sys/Function-Call Subsystem14'
 * '<S11>'  : 'TurnLightLogic/Runnable_sys/Function-Call Subsystem2'
 * '<S12>'  : 'TurnLightLogic/Runnable_sys/Function-Call Subsystem3'
 * '<S13>'  : 'TurnLightLogic/Runnable_sys/Function-Call Subsystem4'
 * '<S14>'  : 'TurnLightLogic/Runnable_sys/Function-Call Subsystem5'
 * '<S15>'  : 'TurnLightLogic/Runnable_sys/Function-Call Subsystem6'
 * '<S16>'  : 'TurnLightLogic/Runnable_sys/Function-Call Subsystem7'
 * '<S17>'  : 'TurnLightLogic/Runnable_sys/Function-Call Subsystem8'
 * '<S18>'  : 'TurnLightLogic/Runnable_sys/Function-Call Subsystem9'
 * '<S19>'  : 'TurnLightLogic/Runnable_sys/HazardLogic'
 * '<S20>'  : 'TurnLightLogic/Runnable_sys/TurnLightLogic'
 * '<S21>'  : 'TurnLightLogic/Runnable_sys/TurnLightSelector'
 */
#endif                                 /* RTW_HEADER_TurnLightLogic_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
