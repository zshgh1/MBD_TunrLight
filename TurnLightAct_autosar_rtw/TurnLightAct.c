/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TurnLightAct.c
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

#include "TurnLightAct.h"
#include "rtwtypes.h"
#include "TurnLightAct_private.h"

/* Named constants for Chart: '<S1>/TurnLightControl_Front' */
#define TurnLightAct_IN_DOUBLE         ((uint8)1U)
#define TurnLightAct_IN_IDLE           ((uint8)2U)
#define TurnLightAct_IN_NORMAL         ((uint8)3U)
#define TurnLightAct_IN_NO_ACTIVE_CHILD ((uint8)0U)
#define TurnLightAct_IN_OFF            ((uint8)1U)
#define TurnLightAct_IN_ON_            ((uint8)2U)
#define TurnLightAct_MODE_DOUBLE       ((uint8)3U)
#define TurnLightAct_MODE_LONG         ((uint8)2U)
#define TurnLightAct_MODE_THREE        ((uint8)1U)
#define TurnLightAct_OFF               ((uint8)0U)
#define TurnLightAct_ON                ((uint8)1U)

/* Named constants for Chart: '<S1>/TurnLightControl_Rear' */
#define TurnLightA_IN_NO_ACTIVE_CHILD_o ((uint8)0U)
#define TurnLightAct_IN_IDLE_l         ((uint8)1U)
#define TurnLightAct_IN_LONG           ((uint8)2U)
#define TurnLightAct_IN_OFF_f          ((uint8)1U)
#define TurnLightAct_IN_ON__b          ((uint8)2U)
#define TurnLightAct_IN_THREE          ((uint8)3U)
#define TurnLightAct_MODE_DOUBLE_e     ((uint8)3U)
#define TurnLightAct_MODE_LONG_o       ((uint8)2U)
#define TurnLightAct_MODE_THREE_b      ((uint8)1U)
#define TurnLightAct_OFF_g             ((uint8)0U)
#define TurnLightAct_ON_a              ((uint8)1U)

/* PublicStructure Variables for Internal Data */
ARID_DEF_TurnLightAct_T TurnLightAct_ARID_DEF;

/*
 * System initialize for atomic system:
 *    '<S1>/TurnLightControl_Front'
 *    '<S1>/TurnLightControl_Front1'
 */
void Tur_TurnLightControl_Front_Init(uint8 *rty_Com_CAN_LA_St_DirectionLamp,
  uint8 *rty_TurnLampCtrlCmd_Signal, uint8 *rty_CountSignal_Signal)
{
  *rty_Com_CAN_LA_St_DirectionLamp = 0U;
  *rty_TurnLampCtrlCmd_Signal = 0U;
  *rty_CountSignal_Signal = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S1>/TurnLightControl_Front'
 *    '<S1>/TurnLightControl_Front1'
 */
void TurnLigh_TurnLightControl_Front(uint8 rtu_TurnLamp_Out_Signal, uint8
  *rty_Com_CAN_LA_St_DirectionLamp, uint8 *rty_TurnLampCtrlCmd_Signal, uint8
  *rty_CountSignal_Signal, ARID_DEF_TurnLightControl_Fro_T
  *TurnLightAct__ARID_DEF_arg)
{
  if (TurnLightAct__ARID_DEF_arg->temporalCounter_i1 < 63U) {
    TurnLightAct__ARID_DEF_arg->temporalCounter_i1++;
  }

  TurnLightAct__ARID_DEF_arg->TurnLamp_Out_Signal_prev =
    TurnLightAct__ARID_DEF_arg->TurnLamp_Out_Signal_start;
  TurnLightAct__ARID_DEF_arg->TurnLamp_Out_Signal_start =
    rtu_TurnLamp_Out_Signal;

  /* Chart: '<S1>/TurnLightControl_Front' */
  if (TurnLightAct__ARID_DEF_arg->is_active_c3_TurnLightMode_Cont == 0U) {
    TurnLightAct__ARID_DEF_arg->TurnLamp_Out_Signal_prev =
      rtu_TurnLamp_Out_Signal;
    TurnLightAct__ARID_DEF_arg->is_active_c3_TurnLightMode_Cont = 1U;
    TurnLightAct__ARID_DEF_arg->is_c3_TurnLightMode_Control =
      TurnLightAct_IN_IDLE;
    *rty_TurnLampCtrlCmd_Signal = TurnLightAct_OFF;
    *rty_Com_CAN_LA_St_DirectionLamp = TurnLightAct_OFF;
  } else {
    switch (TurnLightAct__ARID_DEF_arg->is_c3_TurnLightMode_Control) {
     case TurnLightAct_IN_DOUBLE:
      {
        if (rtu_TurnLamp_Out_Signal != TurnLightAct_MODE_DOUBLE) {
          if (TurnLightAct__ARID_DEF_arg->is_DOUBLE == TurnLightAct_IN_OFF) {
            sint32 tmp;
            tmp = *rty_CountSignal_Signal + 1;
            if (*rty_CountSignal_Signal + 1 > 255) {
              tmp = 255;
            }

            *rty_CountSignal_Signal = (uint8)tmp;
            TurnLightAct__ARID_DEF_arg->is_DOUBLE =
              TurnLightAct_IN_NO_ACTIVE_CHILD;
          } else {
            TurnLightAct__ARID_DEF_arg->is_DOUBLE =
              TurnLightAct_IN_NO_ACTIVE_CHILD;
          }

          TurnLightAct__ARID_DEF_arg->is_c3_TurnLightMode_Control =
            TurnLightAct_IN_IDLE;
          *rty_TurnLampCtrlCmd_Signal = TurnLightAct_OFF;
          *rty_Com_CAN_LA_St_DirectionLamp = TurnLightAct_OFF;
        } else if (TurnLightAct__ARID_DEF_arg->is_DOUBLE == TurnLightAct_IN_OFF)
        {
          *rty_TurnLampCtrlCmd_Signal = TurnLightAct_OFF;
          *rty_Com_CAN_LA_St_DirectionLamp = TurnLightAct_OFF;
          if (TurnLightAct__ARID_DEF_arg->temporalCounter_i1 >= 20U) {
            sint32 tmp;
            tmp = *rty_CountSignal_Signal + 1;
            if (*rty_CountSignal_Signal + 1 > 255) {
              tmp = 255;
            }

            *rty_CountSignal_Signal = (uint8)tmp;
            TurnLightAct__ARID_DEF_arg->is_DOUBLE = TurnLightAct_IN_ON_;
            TurnLightAct__ARID_DEF_arg->temporalCounter_i1 = 0U;
            *rty_TurnLampCtrlCmd_Signal = TurnLightAct_ON;
            *rty_Com_CAN_LA_St_DirectionLamp = TurnLightAct_ON;
          }
        } else {
          /* case IN_ON_: */
          *rty_TurnLampCtrlCmd_Signal = TurnLightAct_ON;
          *rty_Com_CAN_LA_St_DirectionLamp = TurnLightAct_ON;
          if (TurnLightAct__ARID_DEF_arg->temporalCounter_i1 >= 20U) {
            TurnLightAct__ARID_DEF_arg->is_DOUBLE = TurnLightAct_IN_OFF;
            TurnLightAct__ARID_DEF_arg->temporalCounter_i1 = 0U;
            *rty_TurnLampCtrlCmd_Signal = TurnLightAct_OFF;
            *rty_Com_CAN_LA_St_DirectionLamp = TurnLightAct_OFF;
          }
        }
      }
      break;

     case TurnLightAct_IN_IDLE:
      *rty_TurnLampCtrlCmd_Signal = TurnLightAct_OFF;
      *rty_Com_CAN_LA_St_DirectionLamp = TurnLightAct_OFF;
      if ((rtu_TurnLamp_Out_Signal == TurnLightAct_MODE_LONG) ||
          (rtu_TurnLamp_Out_Signal == TurnLightAct_MODE_THREE)) {
        TurnLightAct__ARID_DEF_arg->is_c3_TurnLightMode_Control =
          TurnLightAct_IN_NORMAL;
        *rty_CountSignal_Signal = 0U;
        TurnLightAct__ARID_DEF_arg->is_NORMAL = TurnLightAct_IN_ON_;
        TurnLightAct__ARID_DEF_arg->temporalCounter_i1 = 0U;
        *rty_TurnLampCtrlCmd_Signal = TurnLightAct_ON;
        *rty_Com_CAN_LA_St_DirectionLamp = TurnLightAct_ON;
      } else if (rtu_TurnLamp_Out_Signal == TurnLightAct_MODE_DOUBLE) {
        TurnLightAct__ARID_DEF_arg->is_c3_TurnLightMode_Control =
          TurnLightAct_IN_DOUBLE;
        *rty_CountSignal_Signal = 0U;
        TurnLightAct__ARID_DEF_arg->is_DOUBLE = TurnLightAct_IN_ON_;
        TurnLightAct__ARID_DEF_arg->temporalCounter_i1 = 0U;
        *rty_TurnLampCtrlCmd_Signal = TurnLightAct_ON;
        *rty_Com_CAN_LA_St_DirectionLamp = TurnLightAct_ON;
      }
      break;

     default:
      {
        /* case IN_NORMAL: */
        if (((TurnLightAct__ARID_DEF_arg->TurnLamp_Out_Signal_prev !=
              TurnLightAct__ARID_DEF_arg->TurnLamp_Out_Signal_start) &&
             (TurnLightAct__ARID_DEF_arg->TurnLamp_Out_Signal_prev ==
              TurnLightAct_MODE_LONG)) || ((rtu_TurnLamp_Out_Signal ==
              TurnLightAct_MODE_THREE) && (*rty_CountSignal_Signal == 3))) {
          if (TurnLightAct__ARID_DEF_arg->is_NORMAL == TurnLightAct_IN_OFF) {
            sint32 tmp;
            tmp = *rty_CountSignal_Signal + 1;
            if (*rty_CountSignal_Signal + 1 > 255) {
              tmp = 255;
            }

            *rty_CountSignal_Signal = (uint8)tmp;
            TurnLightAct__ARID_DEF_arg->is_NORMAL =
              TurnLightAct_IN_NO_ACTIVE_CHILD;
          } else {
            TurnLightAct__ARID_DEF_arg->is_NORMAL =
              TurnLightAct_IN_NO_ACTIVE_CHILD;
          }

          TurnLightAct__ARID_DEF_arg->is_c3_TurnLightMode_Control =
            TurnLightAct_IN_IDLE;
          *rty_TurnLampCtrlCmd_Signal = TurnLightAct_OFF;
          *rty_Com_CAN_LA_St_DirectionLamp = TurnLightAct_OFF;
        } else if (TurnLightAct__ARID_DEF_arg->is_NORMAL == TurnLightAct_IN_OFF)
        {
          *rty_TurnLampCtrlCmd_Signal = TurnLightAct_OFF;
          *rty_Com_CAN_LA_St_DirectionLamp = TurnLightAct_OFF;
          if (TurnLightAct__ARID_DEF_arg->temporalCounter_i1 >= 40U) {
            sint32 tmp;
            tmp = *rty_CountSignal_Signal + 1;
            if (*rty_CountSignal_Signal + 1 > 255) {
              tmp = 255;
            }

            *rty_CountSignal_Signal = (uint8)tmp;
            TurnLightAct__ARID_DEF_arg->is_NORMAL = TurnLightAct_IN_ON_;
            TurnLightAct__ARID_DEF_arg->temporalCounter_i1 = 0U;
            *rty_TurnLampCtrlCmd_Signal = TurnLightAct_ON;
            *rty_Com_CAN_LA_St_DirectionLamp = TurnLightAct_ON;
          }
        } else {
          /* case IN_ON_: */
          *rty_TurnLampCtrlCmd_Signal = TurnLightAct_ON;
          *rty_Com_CAN_LA_St_DirectionLamp = TurnLightAct_ON;
          if (TurnLightAct__ARID_DEF_arg->temporalCounter_i1 >= 40U) {
            TurnLightAct__ARID_DEF_arg->is_NORMAL = TurnLightAct_IN_OFF;
            TurnLightAct__ARID_DEF_arg->temporalCounter_i1 = 0U;
            *rty_TurnLampCtrlCmd_Signal = TurnLightAct_OFF;
            *rty_Com_CAN_LA_St_DirectionLamp = TurnLightAct_OFF;
          }
        }
      }
      break;
    }
  }

  /* End of Chart: '<S1>/TurnLightControl_Front' */
}

/*
 * System initialize for atomic system:
 *    '<S1>/TurnLightControl_Rear'
 *    '<S1>/TurnLightControl_Rear1'
 */
void Turn_TurnLightControl_Rear_Init(uint8 *rty_TurnLampCtrlCmd_Signal)
{
  *rty_TurnLampCtrlCmd_Signal = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S1>/TurnLightControl_Rear'
 *    '<S1>/TurnLightControl_Rear1'
 */
void TurnLight_TurnLightControl_Rear(uint8 rtu_TurnLamp_Out_Signal, uint8
  *rty_TurnLampCtrlCmd_Signal, ARID_DEF_TurnLightControl_Rea_T
  *TurnLightAct__ARID_DEF_arg)
{
  if (TurnLightAct__ARID_DEF_arg->temporalCounter_i1 < 63U) {
    TurnLightAct__ARID_DEF_arg->temporalCounter_i1++;
  }

  TurnLightAct__ARID_DEF_arg->TurnLamp_Out_Signal_prev =
    TurnLightAct__ARID_DEF_arg->TurnLamp_Out_Signal_start;
  TurnLightAct__ARID_DEF_arg->TurnLamp_Out_Signal_start =
    rtu_TurnLamp_Out_Signal;

  /* Chart: '<S1>/TurnLightControl_Rear' */
  if (TurnLightAct__ARID_DEF_arg->is_active_c1_TurnLightMode_Cont == 0U) {
    TurnLightAct__ARID_DEF_arg->TurnLamp_Out_Signal_prev =
      rtu_TurnLamp_Out_Signal;
    TurnLightAct__ARID_DEF_arg->is_active_c1_TurnLightMode_Cont = 1U;
    TurnLightAct__ARID_DEF_arg->is_c1_TurnLightMode_Control =
      TurnLightAct_IN_IDLE_l;
    *rty_TurnLampCtrlCmd_Signal = TurnLightAct_OFF_g;
  } else {
    switch (TurnLightAct__ARID_DEF_arg->is_c1_TurnLightMode_Control) {
     case TurnLightAct_IN_IDLE_l:
      *rty_TurnLampCtrlCmd_Signal = TurnLightAct_OFF_g;
      if (rtu_TurnLamp_Out_Signal == TurnLightAct_MODE_DOUBLE_e) {
        TurnLightAct__ARID_DEF_arg->is_c1_TurnLightMode_Control =
          TurnLightAct_IN_THREE;
        TurnLightAct__ARID_DEF_arg->CountSignal_Signal = 0U;
        TurnLightAct__ARID_DEF_arg->is_THREE = TurnLightAct_IN_ON__b;
        TurnLightAct__ARID_DEF_arg->temporalCounter_i1 = 0U;
        *rty_TurnLampCtrlCmd_Signal = TurnLightAct_ON_a;
      } else if ((rtu_TurnLamp_Out_Signal == TurnLightAct_MODE_LONG_o) ||
                 (rtu_TurnLamp_Out_Signal == TurnLightAct_MODE_THREE_b)) {
        TurnLightAct__ARID_DEF_arg->is_c1_TurnLightMode_Control =
          TurnLightAct_IN_LONG;
        TurnLightAct__ARID_DEF_arg->CountSignal_Signal = 0U;
        TurnLightAct__ARID_DEF_arg->is_LONG = TurnLightAct_IN_ON__b;
        TurnLightAct__ARID_DEF_arg->temporalCounter_i1 = 0U;
        *rty_TurnLampCtrlCmd_Signal = TurnLightAct_ON_a;
      }
      break;

     case TurnLightAct_IN_LONG:
      {
        if (((TurnLightAct__ARID_DEF_arg->TurnLamp_Out_Signal_prev !=
              TurnLightAct__ARID_DEF_arg->TurnLamp_Out_Signal_start) &&
             (TurnLightAct__ARID_DEF_arg->TurnLamp_Out_Signal_prev ==
              TurnLightAct_MODE_LONG_o)) || ((rtu_TurnLamp_Out_Signal ==
              TurnLightAct_MODE_THREE_b) &&
             (TurnLightAct__ARID_DEF_arg->CountSignal_Signal == 3))) {
          if (TurnLightAct__ARID_DEF_arg->is_LONG == TurnLightAct_IN_OFF_f) {
            sint32 tmp;
            tmp = TurnLightAct__ARID_DEF_arg->CountSignal_Signal + 1;
            if (TurnLightAct__ARID_DEF_arg->CountSignal_Signal + 1 > 255) {
              tmp = 255;
            }

            TurnLightAct__ARID_DEF_arg->CountSignal_Signal = (uint8)tmp;
            TurnLightAct__ARID_DEF_arg->is_LONG =
              TurnLightA_IN_NO_ACTIVE_CHILD_o;
          } else {
            TurnLightAct__ARID_DEF_arg->is_LONG =
              TurnLightA_IN_NO_ACTIVE_CHILD_o;
          }

          TurnLightAct__ARID_DEF_arg->is_c1_TurnLightMode_Control =
            TurnLightAct_IN_IDLE_l;
          *rty_TurnLampCtrlCmd_Signal = TurnLightAct_OFF_g;
        } else if (TurnLightAct__ARID_DEF_arg->is_LONG == TurnLightAct_IN_OFF_f)
        {
          *rty_TurnLampCtrlCmd_Signal = TurnLightAct_OFF_g;
          if (TurnLightAct__ARID_DEF_arg->temporalCounter_i1 >= 40U) {
            sint32 tmp;
            tmp = TurnLightAct__ARID_DEF_arg->CountSignal_Signal + 1;
            if (TurnLightAct__ARID_DEF_arg->CountSignal_Signal + 1 > 255) {
              tmp = 255;
            }

            TurnLightAct__ARID_DEF_arg->CountSignal_Signal = (uint8)tmp;
            TurnLightAct__ARID_DEF_arg->is_LONG = TurnLightAct_IN_ON__b;
            TurnLightAct__ARID_DEF_arg->temporalCounter_i1 = 0U;
            *rty_TurnLampCtrlCmd_Signal = TurnLightAct_ON_a;
          }
        } else {
          /* case IN_ON_: */
          *rty_TurnLampCtrlCmd_Signal = TurnLightAct_ON_a;
          if (TurnLightAct__ARID_DEF_arg->temporalCounter_i1 >= 40U) {
            TurnLightAct__ARID_DEF_arg->is_LONG = TurnLightAct_IN_OFF_f;
            TurnLightAct__ARID_DEF_arg->temporalCounter_i1 = 0U;
            *rty_TurnLampCtrlCmd_Signal = TurnLightAct_OFF_g;
          }
        }
      }
      break;

     default:
      {
        /* case IN_THREE: */
        if (rtu_TurnLamp_Out_Signal != TurnLightAct_MODE_DOUBLE_e) {
          if (TurnLightAct__ARID_DEF_arg->is_THREE == TurnLightAct_IN_OFF_f) {
            sint32 tmp;
            tmp = TurnLightAct__ARID_DEF_arg->CountSignal_Signal + 1;
            if (TurnLightAct__ARID_DEF_arg->CountSignal_Signal + 1 > 255) {
              tmp = 255;
            }

            TurnLightAct__ARID_DEF_arg->CountSignal_Signal = (uint8)tmp;
            TurnLightAct__ARID_DEF_arg->is_THREE =
              TurnLightA_IN_NO_ACTIVE_CHILD_o;
          } else {
            TurnLightAct__ARID_DEF_arg->is_THREE =
              TurnLightA_IN_NO_ACTIVE_CHILD_o;
          }

          TurnLightAct__ARID_DEF_arg->is_c1_TurnLightMode_Control =
            TurnLightAct_IN_IDLE_l;
          *rty_TurnLampCtrlCmd_Signal = TurnLightAct_OFF_g;
        } else if (TurnLightAct__ARID_DEF_arg->is_THREE == TurnLightAct_IN_OFF_f)
        {
          *rty_TurnLampCtrlCmd_Signal = TurnLightAct_OFF_g;
          if (TurnLightAct__ARID_DEF_arg->temporalCounter_i1 >= 20U) {
            sint32 tmp;
            tmp = TurnLightAct__ARID_DEF_arg->CountSignal_Signal + 1;
            if (TurnLightAct__ARID_DEF_arg->CountSignal_Signal + 1 > 255) {
              tmp = 255;
            }

            TurnLightAct__ARID_DEF_arg->CountSignal_Signal = (uint8)tmp;
            TurnLightAct__ARID_DEF_arg->is_THREE = TurnLightAct_IN_ON__b;
            TurnLightAct__ARID_DEF_arg->temporalCounter_i1 = 0U;
            *rty_TurnLampCtrlCmd_Signal = TurnLightAct_ON_a;
          }
        } else {
          /* case IN_ON_: */
          *rty_TurnLampCtrlCmd_Signal = TurnLightAct_ON_a;
          if (TurnLightAct__ARID_DEF_arg->temporalCounter_i1 >= 20U) {
            TurnLightAct__ARID_DEF_arg->is_THREE = TurnLightAct_IN_OFF_f;
            TurnLightAct__ARID_DEF_arg->temporalCounter_i1 = 0U;
            *rty_TurnLampCtrlCmd_Signal = TurnLightAct_OFF_g;
          }
        }
      }
      break;
    }
  }

  /* End of Chart: '<S1>/TurnLightControl_Rear' */
}

/* Model step function for TID1 */
void Runnable(void)                    /* Explicit Task: Runnable */
{
  uint8 tmpRead;
  uint8 tmpRead_0;
  uint8 tmpRead_1;
  uint8 tmpRead_2;
  uint8 tmpWrite;
  uint8 tmpWrite_0;
  uint8 tmpWrite_1;

  /* Inport: '<Root>/TurnLamp_RR_Out_Signal' */
  (void)Rte_Read_TurnLamp_RR_Out_Signal(&tmpRead_2);

  /* Inport: '<Root>/TurnLamp_RL_Out_Signal' */
  (void)Rte_Read_TurnLamp_RL_Out_Signal(&tmpRead_1);

  /* Inport: '<Root>/TurnLamp_FR_Out_Signal' */
  (void)Rte_Read_TurnLamp_FR_Out_Signal(&tmpRead_0);

  /* Inport: '<Root>/TurnLamp_FL_Out_Signal' */
  (void)Rte_Read_TurnLamp_FL_Out_Signal(&tmpRead);

  /* RootInportFunctionCallGenerator generated from: '<Root>/Runnable' incorporates:
   *  SubSystem: '<Root>/Runnable_sys'
   */

  /* Chart: '<S1>/TurnLightControl_Front' incorporates:
   *  Outport: '<Root>/Com_CAN_LA_St_DirectionLampL_Signal'
   *  Outport: '<Root>/TurnLampCtrlCmd_FL_Signal'
   */
  TurnLigh_TurnLightControl_Front(tmpRead, &tmpWrite, &tmpWrite_0,
    &TurnLightAct_ARID_DEF.CountSignal_Signal_g,
    &TurnLightAct_ARID_DEF.ARID_DEF_TurnLightControl_Fro_c);

  /* Chart: '<S1>/TurnLightControl_Front1' incorporates:
   *  Outport: '<Root>/Com_CAN_LA_St_DirectionLampR_Signal'
   *  Outport: '<Root>/TurnLampCtrlCmd_FR_Signal'
   */
  TurnLigh_TurnLightControl_Front(tmpRead_0, &tmpRead, &tmpWrite_1,
    &TurnLightAct_ARID_DEF.CountSignal_Signal,
    &TurnLightAct_ARID_DEF.ARID_DEF_TurnLightControl_Fron);

  /* Chart: '<S1>/TurnLightControl_Rear' incorporates:
   *  Outport: '<Root>/TurnLampCtrlCmd_RL_Signal'
   */
  TurnLight_TurnLightControl_Rear(tmpRead_1, &tmpRead_0,
    &TurnLightAct_ARID_DEF.ARID_DEF_TurnLightControl_Rea_m);

  /* Chart: '<S1>/TurnLightControl_Rear1' incorporates:
   *  Outport: '<Root>/TurnLampCtrlCmd_RR_Signal'
   */
  TurnLight_TurnLightControl_Rear(tmpRead_2, &tmpRead_1,
    &TurnLightAct_ARID_DEF.ARID_DEF_TurnLightControl_Rear);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Runnable' */

  /* Outport: '<Root>/CountSignal_Left_Signal' */
  (void)Rte_Write_CountSignal_Left_Signal
    (TurnLightAct_ARID_DEF.CountSignal_Signal_g);

  /* Outport: '<Root>/CountSignal_Right_Signal' */
  (void)Rte_Write_CountSignal_Right_Signal
    (TurnLightAct_ARID_DEF.CountSignal_Signal);

  /* Outport: '<Root>/Com_CAN_LA_St_DirectionLampL_Signal' */
  (void)Rte_Write_Com_CAN_LA_St_DirectionLampL_Signal(tmpWrite);

  /* Outport: '<Root>/Com_CAN_LA_St_DirectionLampR_Signal' */
  (void)Rte_Write_Com_CAN_LA_St_DirectionLampR_Signal(tmpRead);

  /* Outport: '<Root>/TurnLampCtrlCmd_FL_Signal' */
  (void)Rte_Write_TurnLampCtrlCmd_FL_Signal(tmpWrite_0);

  /* Outport: '<Root>/TurnLampCtrlCmd_FR_Signal' */
  (void)Rte_Write_TurnLampCtrlCmd_FR_Signal(tmpWrite_1);

  /* Outport: '<Root>/TurnLampCtrlCmd_RL_Signal' */
  (void)Rte_Write_TurnLampCtrlCmd_RL_Signal(tmpRead_0);

  /* Outport: '<Root>/TurnLampCtrlCmd_RR_Signal' */
  (void)Rte_Write_TurnLampCtrlCmd_RR_Signal(tmpRead_1);
}

/* Model initialize function */
void TurnLightAct_Init(void)
{
  {
    uint8 tmpWrite;
    uint8 tmpWrite_0;
    uint8 tmpWrite_1;
    uint8 tmpWrite_2;
    uint8 tmpWrite_3;
    uint8 tmpWrite_4;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Runnable' incorporates:
     *  SubSystem: '<Root>/Runnable_sys'
     */

    /* SystemInitialize for Chart: '<S1>/TurnLightControl_Front' incorporates:
     *  Outport: '<Root>/Com_CAN_LA_St_DirectionLampL_Signal'
     *  Outport: '<Root>/TurnLampCtrlCmd_FL_Signal'
     */
    Tur_TurnLightControl_Front_Init(&tmpWrite, &tmpWrite_1,
      &TurnLightAct_ARID_DEF.CountSignal_Signal_g);

    /* SystemInitialize for Chart: '<S1>/TurnLightControl_Front1' incorporates:
     *  Outport: '<Root>/Com_CAN_LA_St_DirectionLampR_Signal'
     *  Outport: '<Root>/TurnLampCtrlCmd_FR_Signal'
     */
    Tur_TurnLightControl_Front_Init(&tmpWrite_0, &tmpWrite_2,
      &TurnLightAct_ARID_DEF.CountSignal_Signal);

    /* SystemInitialize for Chart: '<S1>/TurnLightControl_Rear' incorporates:
     *  Outport: '<Root>/TurnLampCtrlCmd_RL_Signal'
     */
    Turn_TurnLightControl_Rear_Init(&tmpWrite_3);

    /* SystemInitialize for Chart: '<S1>/TurnLightControl_Rear1' incorporates:
     *  Outport: '<Root>/TurnLampCtrlCmd_RR_Signal'
     */
    Turn_TurnLightControl_Rear_Init(&tmpWrite_4);

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Runnable' */

    /* SystemInitialize for Outport: '<Root>/CountSignal_Left_Signal' */
    (void)Rte_Write_CountSignal_Left_Signal
      (TurnLightAct_ARID_DEF.CountSignal_Signal_g);

    /* SystemInitialize for Outport: '<Root>/CountSignal_Right_Signal' */
    (void)Rte_Write_CountSignal_Right_Signal
      (TurnLightAct_ARID_DEF.CountSignal_Signal);

    /* Outport: '<Root>/Com_CAN_LA_St_DirectionLampL_Signal' */
    (void)Rte_Write_Com_CAN_LA_St_DirectionLampL_Signal(tmpWrite);

    /* Outport: '<Root>/Com_CAN_LA_St_DirectionLampR_Signal' */
    (void)Rte_Write_Com_CAN_LA_St_DirectionLampR_Signal(tmpWrite_0);

    /* Outport: '<Root>/TurnLampCtrlCmd_FL_Signal' */
    (void)Rte_Write_TurnLampCtrlCmd_FL_Signal(tmpWrite_1);

    /* Outport: '<Root>/TurnLampCtrlCmd_FR_Signal' */
    (void)Rte_Write_TurnLampCtrlCmd_FR_Signal(tmpWrite_2);

    /* Outport: '<Root>/TurnLampCtrlCmd_RL_Signal' */
    (void)Rte_Write_TurnLampCtrlCmd_RL_Signal(tmpWrite_3);

    /* Outport: '<Root>/TurnLampCtrlCmd_RR_Signal' */
    (void)Rte_Write_TurnLampCtrlCmd_RR_Signal(tmpWrite_4);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
