/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TurnLightArb.c
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

#include "TurnLightArb.h"
#include "Rte_Type.h"
#include "rtwtypes.h"

/* Named constants for Chart: '<S1>/TurnLightTruthTable' */
#define TurnLightArb_MODE_DOUBLE       ((uint8)3U)
#define TurnLightArb_MODE_LONG         ((uint8)2U)
#define TurnLightArb_MODE_THREE        ((uint8)1U)
#define TurnLightArb_NOQUEST           ((uint8)0U)

/* PublicStructure Variables for Internal Data */
ARID_DEF_TurnLightArb_T TurnLightArb_ARID_DEF;/* '<Root>/Data Store Memory' */

/* Forward declaration for local functions */
static void TurnLightA_TrunLightArtribution(const uint8 *DataTypeConversion,
  const uint8 *DataTypeConversion1, const uint8 *TurnLightCycle, const uint8
  *TurnLightPriority);
static void TurnLightArb_UsePriorityArb(const uint8 *DataTypeConversion, const
  uint8 *DataTypeConversion1, const uint8 *TurnLightCycle, const uint8
  *TurnLightPriority);

/* Function for Chart: '<S1>/TurnLightTruthTable' */
static void TurnLightA_TrunLightArtribution(const uint8 *DataTypeConversion,
  const uint8 *DataTypeConversion1, const uint8 *TurnLightCycle, const uint8
  *TurnLightPriority)
{
  boolean aVarTruthTableCondition_10;
  boolean aVarTruthTableCondition_11;
  boolean aVarTruthTableCondition_12;
  boolean aVarTruthTableCondition_13;
  boolean aVarTruthTableCondition_14;
  boolean aVarTruthTableCondition_15;
  boolean aVarTruthTableCondition_3;
  boolean aVarTruthTableCondition_4;
  boolean aVarTruthTableCondition_5;
  boolean aVarTruthTableCondition_6;
  boolean aVarTruthTableCondition_7;
  boolean aVarTruthTableCondition_8;
  boolean aVarTruthTableCondition_9;
  aVarTruthTableCondition_3 = (*DataTypeConversion == FRONT_LEFT);
  aVarTruthTableCondition_4 = (*DataTypeConversion == FRONT_RIGHT);
  aVarTruthTableCondition_5 = (*DataTypeConversion == REAR_LEFT);
  aVarTruthTableCondition_6 = (*DataTypeConversion == REAR_RIGHT);
  aVarTruthTableCondition_7 = (*DataTypeConversion == ALL);
  aVarTruthTableCondition_8 = (*DataTypeConversion1 == ON);
  aVarTruthTableCondition_9 = (*DataTypeConversion1 == OFF);
  aVarTruthTableCondition_10 = (*TurnLightCycle == 8);
  aVarTruthTableCondition_11 = (*TurnLightCycle == 4);
  aVarTruthTableCondition_12 = (*TurnLightPriority == 3);
  aVarTruthTableCondition_13 = (*TurnLightPriority == 4);

  /* DataStoreRead: '<S1>/Data Store Read' */
  aVarTruthTableCondition_14 =
    (TurnLightArb_ARID_DEF.TurnLightCtrlPara_d.TurnLightNumber == 3);
  aVarTruthTableCondition_15 =
    (TurnLightArb_ARID_DEF.TurnLightCtrlPara_d.TurnLightNumber == 0);
  if (aVarTruthTableCondition_3 && aVarTruthTableCondition_9 &&
      aVarTruthTableCondition_13 && aVarTruthTableCondition_15) {
    /*  'FL_OFF':  */
    TurnLightArb_ARID_DEF.TurnLamp_FL_Out_Signal = TurnLightArb_NOQUEST;
  } else if (aVarTruthTableCondition_4 && aVarTruthTableCondition_9 &&
             aVarTruthTableCondition_13 && aVarTruthTableCondition_15) {
    /*  'FR_OFF':  */
    TurnLightArb_ARID_DEF.TurnLamp_FR_Out_Signal = TurnLightArb_NOQUEST;
  } else if (aVarTruthTableCondition_5 && aVarTruthTableCondition_9 &&
             aVarTruthTableCondition_13 && aVarTruthTableCondition_15) {
    /*  'RL_OFF':  */
    TurnLightArb_ARID_DEF.TurnLamp_RL_Out_Signal = TurnLightArb_NOQUEST;
  } else if (aVarTruthTableCondition_6 && aVarTruthTableCondition_9 &&
             aVarTruthTableCondition_13 && aVarTruthTableCondition_15) {
    /*  'RR_OFF':  */
    TurnLightArb_ARID_DEF.TurnLamp_RR_Out_Signal = TurnLightArb_NOQUEST;
  } else if (aVarTruthTableCondition_3 && aVarTruthTableCondition_8 &&
             aVarTruthTableCondition_11 && aVarTruthTableCondition_13 &&
             aVarTruthTableCondition_15) {
    /*  'FL_DOUBLE':  */
    TurnLightArb_ARID_DEF.TurnLamp_FL_Out_Signal = TurnLightArb_MODE_DOUBLE;
  } else if (aVarTruthTableCondition_4 && aVarTruthTableCondition_8 &&
             aVarTruthTableCondition_11 && aVarTruthTableCondition_13 &&
             aVarTruthTableCondition_15) {
    /*  'FR_DOUBLE':  */
    TurnLightArb_ARID_DEF.TurnLamp_FR_Out_Signal = TurnLightArb_MODE_DOUBLE;
  } else if (aVarTruthTableCondition_5 && aVarTruthTableCondition_8 &&
             aVarTruthTableCondition_11 && aVarTruthTableCondition_13 &&
             aVarTruthTableCondition_15) {
    /*  'RL_DOUBLE':  */
    TurnLightArb_ARID_DEF.TurnLamp_RL_Out_Signal = TurnLightArb_MODE_DOUBLE;
  } else if (aVarTruthTableCondition_6 && aVarTruthTableCondition_8 &&
             aVarTruthTableCondition_11 && aVarTruthTableCondition_13 &&
             aVarTruthTableCondition_15) {
    /*  'RR_DOUBLE':  */
    TurnLightArb_ARID_DEF.TurnLamp_RR_Out_Signal = TurnLightArb_MODE_DOUBLE;
  } else {
    aVarTruthTableCondition_3 = ((*DataTypeConversion == RIGHT) &&
      aVarTruthTableCondition_8 && aVarTruthTableCondition_10 &&
      aVarTruthTableCondition_12);
    if (aVarTruthTableCondition_3 && aVarTruthTableCondition_14) {
      /*  'TurnLight_RightShort':  */
      TurnLightArb_ARID_DEF.TurnLamp_FR_Out_Signal = TurnLightArb_MODE_THREE;
      TurnLightArb_ARID_DEF.TurnLamp_RL_Out_Signal = TurnLightArb_NOQUEST;
      TurnLightArb_ARID_DEF.TurnLamp_RR_Out_Signal = TurnLightArb_MODE_THREE;
      TurnLightArb_ARID_DEF.TurnLamp_FL_Out_Signal = TurnLightArb_NOQUEST;
    } else if (aVarTruthTableCondition_3 && aVarTruthTableCondition_15) {
      /*  'TurnLight_RightLong':  */
      TurnLightArb_ARID_DEF.TurnLamp_FR_Out_Signal = TurnLightArb_MODE_LONG;
      TurnLightArb_ARID_DEF.TurnLamp_RL_Out_Signal = TurnLightArb_NOQUEST;
      TurnLightArb_ARID_DEF.TurnLamp_RR_Out_Signal = TurnLightArb_MODE_LONG;
      TurnLightArb_ARID_DEF.TurnLamp_FL_Out_Signal = TurnLightArb_NOQUEST;
    } else {
      aVarTruthTableCondition_3 = ((*DataTypeConversion == LEFT) &&
        aVarTruthTableCondition_8 && aVarTruthTableCondition_10 &&
        aVarTruthTableCondition_12);
      if (aVarTruthTableCondition_3 && aVarTruthTableCondition_14) {
        /*  'TurnLight_LeftShort':  */
        TurnLightArb_ARID_DEF.TurnLamp_FR_Out_Signal = TurnLightArb_NOQUEST;
        TurnLightArb_ARID_DEF.TurnLamp_RL_Out_Signal = TurnLightArb_MODE_THREE;
        TurnLightArb_ARID_DEF.TurnLamp_RR_Out_Signal = TurnLightArb_NOQUEST;
        TurnLightArb_ARID_DEF.TurnLamp_FL_Out_Signal = TurnLightArb_MODE_THREE;
      } else if (aVarTruthTableCondition_3 && aVarTruthTableCondition_15) {
        /*  'TurnLight_LeftLong':  */
        TurnLightArb_ARID_DEF.TurnLamp_FR_Out_Signal = TurnLightArb_NOQUEST;
        TurnLightArb_ARID_DEF.TurnLamp_RL_Out_Signal = TurnLightArb_MODE_LONG;
        TurnLightArb_ARID_DEF.TurnLamp_RR_Out_Signal = TurnLightArb_NOQUEST;
        TurnLightArb_ARID_DEF.TurnLamp_FL_Out_Signal = TurnLightArb_MODE_LONG;
      } else if (aVarTruthTableCondition_7 && aVarTruthTableCondition_8 &&
                 aVarTruthTableCondition_10 && aVarTruthTableCondition_12 &&
                 aVarTruthTableCondition_15) {
        /*  'TurnLight_ALLON':  */
        TurnLightArb_ARID_DEF.TurnLamp_FR_Out_Signal = TurnLightArb_MODE_LONG;
        TurnLightArb_ARID_DEF.TurnLamp_RL_Out_Signal = TurnLightArb_MODE_LONG;
        TurnLightArb_ARID_DEF.TurnLamp_RR_Out_Signal = TurnLightArb_MODE_LONG;
        TurnLightArb_ARID_DEF.TurnLamp_FL_Out_Signal = TurnLightArb_MODE_LONG;
      } else if (aVarTruthTableCondition_7 && aVarTruthTableCondition_9 &&
                 aVarTruthTableCondition_12 && aVarTruthTableCondition_15) {
        /*  'TurnLight_ALLOFF':  */
        TurnLightArb_ARID_DEF.TurnLamp_FR_Out_Signal = TurnLightArb_NOQUEST;
        TurnLightArb_ARID_DEF.TurnLamp_RL_Out_Signal = TurnLightArb_NOQUEST;
        TurnLightArb_ARID_DEF.TurnLamp_RR_Out_Signal = TurnLightArb_NOQUEST;
        TurnLightArb_ARID_DEF.TurnLamp_FL_Out_Signal = TurnLightArb_NOQUEST;
      }
    }
  }
}

/* Function for Chart: '<S1>/TurnLightTruthTable' */
static void TurnLightArb_UsePriorityArb(const uint8 *DataTypeConversion, const
  uint8 *DataTypeConversion1, const uint8 *TurnLightCycle, const uint8
  *TurnLightPriority)
{
  if (TurnLightArb_ARID_DEF.OldPriority <= *TurnLightPriority) {
    TurnLightA_TrunLightArtribution(DataTypeConversion, DataTypeConversion1,
      TurnLightCycle, TurnLightPriority);
    TurnLightArb_ARID_DEF.OldPriority = *TurnLightPriority;
  }

  TurnLightArb_ARID_DEF.IsFunctionCall = false;
}

/* Model step function for TID1 */
void Runnable(void)                    /* Explicit Task: Runnable */
{
  uint8 DataTypeConversion;
  uint8 DataTypeConversion1;

  /* RootInportFunctionCallGenerator generated from: '<Root>/Runnable' incorporates:
   *  SubSystem: '<Root>/Runnable_sys'
   */
  /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
   *  DataStoreRead: '<S1>/Data Store Read'
   */
  DataTypeConversion =
    TurnLightArb_ARID_DEF.TurnLightCtrlPara_d.TurnLightPosition;

  /* DataTypeConversion: '<S1>/Data Type Conversion1' incorporates:
   *  DataStoreRead: '<S1>/Data Store Read'
   */
  DataTypeConversion1 = TurnLightArb_ARID_DEF.TurnLightCtrlPara_d.TurnLightOnOff;

  /* Chart: '<S1>/TurnLightTruthTable' incorporates:
   *  DataStoreRead: '<S1>/Data Store Read'
   *  SignalConversion generated from: '<S1>/Bus Selector'
   * */
  if (TurnLightArb_ARID_DEF.is_active_c3_TurnLightArb == 0U) {
    TurnLightArb_ARID_DEF.is_active_c3_TurnLightArb = 1U;
    TurnLightArb_UsePriorityArb(&DataTypeConversion, &DataTypeConversion1,
      &TurnLightArb_ARID_DEF.TurnLightCtrlPara_d.TurnLightCycle,
      &TurnLightArb_ARID_DEF.TurnLightCtrlPara_d.TurnLightPriority);
  } else if (TurnLightArb_ARID_DEF.IsFunctionCall) {
    TurnLightArb_UsePriorityArb(&DataTypeConversion, &DataTypeConversion1,
      &TurnLightArb_ARID_DEF.TurnLightCtrlPara_d.TurnLightCycle,
      &TurnLightArb_ARID_DEF.TurnLightCtrlPara_d.TurnLightPriority);
  }

  /* End of Chart: '<S1>/TurnLightTruthTable' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Runnable' */

  /* Outport: '<Root>/TurnLamp_FL_Out_Signal' */
  (void)Rte_Write_TurnLamp_FL_Out_Signal
    (TurnLightArb_ARID_DEF.TurnLamp_FL_Out_Signal);

  /* Outport: '<Root>/TurnLamp_FR_Out_Signal' */
  (void)Rte_Write_TurnLamp_FR_Out_Signal
    (TurnLightArb_ARID_DEF.TurnLamp_FR_Out_Signal);

  /* Outport: '<Root>/TurnLamp_RL_Out_Signal' */
  (void)Rte_Write_TurnLamp_RL_Out_Signal
    (TurnLightArb_ARID_DEF.TurnLamp_RL_Out_Signal);

  /* Outport: '<Root>/TurnLamp_RR_Out_Signal' */
  (void)Rte_Write_TurnLamp_RR_Out_Signal
    (TurnLightArb_ARID_DEF.TurnLamp_RR_Out_Signal);
}

/* Output function */
void turnlightservice_turnlightcontrol_operation_operation_1(const
  TurnLightService *TurnLightCtrlPara)
{
  /* Outputs for Function Call SubSystem: '<S3>/TurnLightService_TurnLightControl_Operation_Operation_sys' */
  /* SignalConversion generated from: '<S5>/TurnLightCtrlPara' incorporates:
   *  DataStoreWrite: '<S5>/Data Store Write'
   */
  TurnLightArb_ARID_DEF.TurnLightCtrlPara_d = *TurnLightCtrlPara;

  /* DataStoreWrite: '<S5>/Data Store Write1' incorporates:
   *  Constant: '<S5>/Constant'
   */
  TurnLightArb_ARID_DEF.IsFunctionCall = true;

  /* If: '<S5>/If' incorporates:
   *  DataStoreWrite: '<S5>/Data Store Write'
   */
  if (TurnLightArb_ARID_DEF.TurnLightCtrlPara_d.TurnLightPriority == 0) {
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* DataStoreWrite: '<S6>/Data Store Write' incorporates:
     *  Constant: '<S6>/Constant'
     */
    TurnLightArb_ARID_DEF.OldPriority = 0U;

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem' */
  }

  /* End of If: '<S5>/If' */
  /* End of Outputs for SubSystem: '<S3>/TurnLightService_TurnLightControl_Operation_Operation_sys' */
}

/* Model initialize function */
void TurnLightArb_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
