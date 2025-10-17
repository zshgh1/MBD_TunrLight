/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TurnLightLogic.c
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

#include "TurnLightLogic.h"
#include "rtwtypes.h"
#include "TurnLightLogic_private.h"
#include "Rte_Type.h"

/* Named constants for Chart: '<S1>/Diagnosis' */
#define TurnLightLog_IN_NO_ACTIVE_CHILD ((uint8)0U)
#define TurnLightLogic_IN_IDLE         ((uint8)1U)
#define TurnLightLogic_IN_Long         ((uint8)2U)
#define TurnLightLogic_IN_Short        ((uint8)3U)
#define TurnLightLogic_ON              ((uint8)1U)
#define TurnLightLogic_OPEN            ((uint8)2U)
#define TurnLightLogic_SHORT           ((uint8)1U)

/* Named constants for Chart: '<S1>/HazardLogic' */
#define TurnLightLogi_IN_CrashIntensity ((uint8)2U)
#define TurnLightLogi_IN_EmergencyBrake ((uint8)3U)
#define TurnLightLogic_ACTIVE          ((uint8)1U)
#define TurnLightLogic_HAZARD_ACTIVE   ((uint8)1U)
#define TurnLightLogic_HAZARD_INACTIVE ((uint8)0U)
#define TurnLightLogic_HAZARD_OFF      ((uint8)0U)
#define TurnLightLogic_HAZARD_ON       (1.0)
#define TurnLightLogic_IN_CheckTime    ((uint8)1U)
#define TurnLightLogic_IN_Hazard       ((uint8)4U)
#define TurnLightLogic_IN_IDLE_i       ((uint8)5U)

/* Named constants for Chart: '<S1>/TurnLightLogic' */
#define TurnLightLogic_IGNST           ((uint8)3U)
#define TurnLightLogic_IGN_OFF         ((uint8)0U)
#define TurnLightLogic_IGN_ON          ((uint8)1U)
#define TurnLightLogic_IN_Change       ((uint8)1U)
#define TurnLightLogic_IN_CheckTime_b  ((uint8)2U)
#define TurnLightLogic_IN_ShineLong    ((uint8)3U)
#define TurnLightLogic_IN_ShineThree   ((uint8)4U)
#define TurnLightLogic_IN_TurnLeft     ((uint8)2U)
#define TurnLightLogic_IN_TurnRight    ((uint8)3U)
#define TurnLightLogic_MODE_LONG       ((uint8)2U)
#define TurnLightLogic_MODE_NOREQUEST  ((uint8)0U)
#define TurnLightLogic_MODE_THREE      ((uint8)1U)
#define TurnLightLogic_NOREQUEST       ((uint8)0U)
#define TurnLightLogic_TURN_LEFT       ((uint8)1U)
#define TurnLightLogic_TURN_RIGHT      ((uint8)2U)

/* Named constants for Chart: '<S1>/TurnLightSelector' */
#define TurnLightLogic_HAZARD_ON_k     ((uint8)1U)
#define TurnLightLogic_IN_ALLOFF       ((uint8)1U)
#define TurnLightLogic_IN_Hazard_ON    ((uint8)2U)
#define TurnLightLogic_IN_Left_ON      ((uint8)3U)
#define TurnLightLogic_IN_Right_ON     ((uint8)4U)
#define TurnLightLogic_IN_delay        ((uint8)5U)
#define TurnLightLogic_IN_delay1       ((uint8)6U)
#define TurnLightLogic_IN_delay2       ((uint8)7U)

const TurnLightService TurnLightLogic_rtZTurnLightService = {
  POS_NOREQUEST,                       /* TurnLightPosition */
  ONOFF_NOREQUEST,                     /* TurnLightOnOff */
  0U,                                  /* TurnLightDutyCycle */
  0U,                                  /* TurnLightCycle */
  0U,                                  /* TurnLightTimes */
  0U,                                  /* TurnLightNumber */
  0U                                   /* TurnLightPriority */
};                                     /* TurnLightService ground */

/* PublicStructure Variables for Internal Data */
ARID_DEF_TurnLightLogic_T TurnLightLogic_ARID_DEF;/* '<S1>/HazardLogic' */

/* Forward declaration for local functions */
static void TurnLightLogic_LeftShortOrLong(void);
static void TurnLightLogic_RightShortOrLong(void);
static void TurnLightLogic_tokenplus(void);
static void TurnLightLogic_act_RL(float64 action);
static void TurnLightLogic_act_FL(float64 action);
static void TurnLightLogic_act_FR(float64 action);
static void TurnLightLogic_act_RR(float64 action);

/* Output and update for function-call system: '<S1>/Function-Call Subsystem8' */
void TurnLigh_FunctionCallSubsystem8(void)
{
  TurnLightService rtb_BusCreator_de;

  /* BusCreator: '<S17>/Bus Creator' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S17>/Constant1'
   *  Constant: '<S17>/Constant2'
   *  Constant: '<S17>/Constant3'
   *  Constant: '<S17>/Constant4'
   *  Constant: '<S17>/Constant5'
   *  Constant: '<S17>/Constant6'
   */
  rtb_BusCreator_de.TurnLightPosition = POS_NOREQUEST;
  rtb_BusCreator_de.TurnLightOnOff = ONOFF_NOREQUEST;
  rtb_BusCreator_de.TurnLightDutyCycle = 0U;
  rtb_BusCreator_de.TurnLightCycle = 8U;
  rtb_BusCreator_de.TurnLightTimes = 0U;
  rtb_BusCreator_de.TurnLightNumber = 0U;
  rtb_BusCreator_de.TurnLightPriority = 0U;

  /* FunctionCaller: '<S17>/TurnLightService_TurnLightControl_Operation_Operation' incorporates:
   *  BusCreator: '<S17>/Bus Creator'
   */
  Rte_Call_TurnLightService_TurnLightControl_Operation_Operation
    (&rtb_BusCreator_de);
}

/* Output and update for function-call system: '<S1>/Function-Call Subsystem13' */
void TurnLig_FunctionCallSubsystem13(void)
{
  TurnLightService rtb_BusCreator_m;

  /* BusCreator: '<S9>/Bus Creator' incorporates:
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant1'
   *  Constant: '<S9>/Constant2'
   *  Constant: '<S9>/Constant3'
   *  Constant: '<S9>/Constant4'
   *  Constant: '<S9>/Constant5'
   *  Constant: '<S9>/Constant6'
   */
  rtb_BusCreator_m.TurnLightPosition = ALL;
  rtb_BusCreator_m.TurnLightOnOff = ON;
  rtb_BusCreator_m.TurnLightDutyCycle = 0U;
  rtb_BusCreator_m.TurnLightCycle = 8U;
  rtb_BusCreator_m.TurnLightTimes = 0U;
  rtb_BusCreator_m.TurnLightNumber = 0U;
  rtb_BusCreator_m.TurnLightPriority = 3U;

  /* FunctionCaller: '<S9>/TurnLightService_TurnLightControl_Operation_Operation' incorporates:
   *  BusCreator: '<S9>/Bus Creator'
   */
  Rte_Call_TurnLightService_TurnLightControl_Operation_Operation
    (&rtb_BusCreator_m);
}

/* Output and update for function-call system: '<S1>/Function-Call Subsystem14' */
void TurnLig_FunctionCallSubsystem14(void)
{
  TurnLightService rtb_BusCreator_ds;

  /* BusCreator: '<S10>/Bus Creator' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S10>/Constant1'
   *  Constant: '<S10>/Constant2'
   *  Constant: '<S10>/Constant3'
   *  Constant: '<S10>/Constant4'
   *  Constant: '<S10>/Constant5'
   *  Constant: '<S10>/Constant6'
   */
  rtb_BusCreator_ds.TurnLightPosition = ALL;
  rtb_BusCreator_ds.TurnLightOnOff = OFF;
  rtb_BusCreator_ds.TurnLightDutyCycle = 0U;
  rtb_BusCreator_ds.TurnLightCycle = 8U;
  rtb_BusCreator_ds.TurnLightTimes = 0U;
  rtb_BusCreator_ds.TurnLightNumber = 0U;
  rtb_BusCreator_ds.TurnLightPriority = 3U;

  /* FunctionCaller: '<S10>/TurnLightService_TurnLightControl_Operation_Operation' incorporates:
   *  BusCreator: '<S10>/Bus Creator'
   */
  Rte_Call_TurnLightService_TurnLightControl_Operation_Operation
    (&rtb_BusCreator_ds);
}

/* Function for Chart: '<S1>/TurnLightSelector' */
static void TurnLightLogic_LeftShortOrLong(void)
{
  TurnLightService rtb_BusCreator;
  if (TurnLightLogic_ARID_DEF.TurnLightMode == TurnLightLogic_MODE_THREE) {
    /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem10' */
    /* BusCreator: '<S6>/Bus Creator' incorporates:
     *  Constant: '<S6>/Constant'
     *  Constant: '<S6>/Constant1'
     *  Constant: '<S6>/Constant2'
     *  Constant: '<S6>/Constant3'
     *  Constant: '<S6>/Constant4'
     *  Constant: '<S6>/Constant5'
     *  Constant: '<S6>/Constant6'
     */
    rtb_BusCreator.TurnLightPosition = LEFT;
    rtb_BusCreator.TurnLightOnOff = ON;
    rtb_BusCreator.TurnLightDutyCycle = 0U;
    rtb_BusCreator.TurnLightCycle = 8U;
    rtb_BusCreator.TurnLightTimes = 0U;
    rtb_BusCreator.TurnLightNumber = 3U;
    rtb_BusCreator.TurnLightPriority = 3U;

    /* FunctionCaller: '<S6>/TurnLightService_TurnLightControl_Operation_Operation' incorporates:
     *  BusCreator: '<S6>/Bus Creator'
     */
    Rte_Call_TurnLightService_TurnLightControl_Operation_Operation
      (&rtb_BusCreator);

    /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem10' */
  } else {
    /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem12' */
    /* BusCreator: '<S8>/Bus Creator' incorporates:
     *  Constant: '<S8>/Constant'
     *  Constant: '<S8>/Constant1'
     *  Constant: '<S8>/Constant2'
     *  Constant: '<S8>/Constant3'
     *  Constant: '<S8>/Constant4'
     *  Constant: '<S8>/Constant5'
     *  Constant: '<S8>/Constant6'
     */
    rtb_BusCreator.TurnLightPosition = LEFT;
    rtb_BusCreator.TurnLightOnOff = ON;
    rtb_BusCreator.TurnLightDutyCycle = 0U;
    rtb_BusCreator.TurnLightCycle = 8U;
    rtb_BusCreator.TurnLightTimes = 0U;
    rtb_BusCreator.TurnLightNumber = 0U;
    rtb_BusCreator.TurnLightPriority = 3U;

    /* FunctionCaller: '<S8>/TurnLightService_TurnLightControl_Operation_Operation' incorporates:
     *  BusCreator: '<S8>/Bus Creator'
     */
    Rte_Call_TurnLightService_TurnLightControl_Operation_Operation
      (&rtb_BusCreator);

    /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem12' */
  }
}

/* Function for Chart: '<S1>/TurnLightSelector' */
static void TurnLightLogic_RightShortOrLong(void)
{
  TurnLightService rtb_BusCreator;
  if (TurnLightLogic_ARID_DEF.TurnLightMode == TurnLightLogic_MODE_THREE) {
    /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem9' */
    /* BusCreator: '<S18>/Bus Creator' incorporates:
     *  Constant: '<S18>/Constant'
     *  Constant: '<S18>/Constant1'
     *  Constant: '<S18>/Constant2'
     *  Constant: '<S18>/Constant3'
     *  Constant: '<S18>/Constant4'
     *  Constant: '<S18>/Constant5'
     *  Constant: '<S18>/Constant6'
     */
    rtb_BusCreator.TurnLightPosition = RIGHT;
    rtb_BusCreator.TurnLightOnOff = ON;
    rtb_BusCreator.TurnLightDutyCycle = 0U;
    rtb_BusCreator.TurnLightCycle = 8U;
    rtb_BusCreator.TurnLightTimes = 0U;
    rtb_BusCreator.TurnLightNumber = 3U;
    rtb_BusCreator.TurnLightPriority = 3U;

    /* FunctionCaller: '<S18>/TurnLightService_TurnLightControl_Operation_Operation' incorporates:
     *  BusCreator: '<S18>/Bus Creator'
     */
    Rte_Call_TurnLightService_TurnLightControl_Operation_Operation
      (&rtb_BusCreator);

    /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem9' */
  } else {
    /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem11' */
    /* BusCreator: '<S7>/Bus Creator' incorporates:
     *  Constant: '<S7>/Constant'
     *  Constant: '<S7>/Constant1'
     *  Constant: '<S7>/Constant2'
     *  Constant: '<S7>/Constant3'
     *  Constant: '<S7>/Constant4'
     *  Constant: '<S7>/Constant5'
     *  Constant: '<S7>/Constant6'
     */
    rtb_BusCreator.TurnLightPosition = RIGHT;
    rtb_BusCreator.TurnLightOnOff = ON;
    rtb_BusCreator.TurnLightDutyCycle = 0U;
    rtb_BusCreator.TurnLightCycle = 8U;
    rtb_BusCreator.TurnLightTimes = 0U;
    rtb_BusCreator.TurnLightNumber = 0U;
    rtb_BusCreator.TurnLightPriority = 3U;

    /* FunctionCaller: '<S7>/TurnLightService_TurnLightControl_Operation_Operation' incorporates:
     *  BusCreator: '<S7>/Bus Creator'
     */
    Rte_Call_TurnLightService_TurnLightControl_Operation_Operation
      (&rtb_BusCreator);

    /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem11' */
  }
}

/* Function for Chart: '<S1>/Diagnosis' */
static void TurnLightLogic_tokenplus(void)
{
  sint32 tmp;
  tmp = TurnLightLogic_ARID_DEF.token + 1;
  if (TurnLightLogic_ARID_DEF.token + 1 > 255) {
    tmp = 255;
  }

  TurnLightLogic_ARID_DEF.token = (uint8)tmp;
  while (TurnLightLogic_ARID_DEF.token == 4) {
    TurnLightLogic_ARID_DEF.token = 0U;
  }
}

/* Function for Chart: '<S1>/Diagnosis' */
static void TurnLightLogic_act_RL(float64 action)
{
  TurnLightService rtb_BusCreator_k;
  if ((TurnLightLogic_ARID_DEF.token == 2) && TurnLightLogic_ARID_DEF.RL_flag) {
    if (action == 0.0) {
      /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem8' */
      TurnLigh_FunctionCallSubsystem8();

      /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem8' */
      TurnLightLogic_ARID_DEF.RL_flag = false;
    } else if (action == 1.0) {
      /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem2' */
      /* BusCreator: '<S11>/Bus Creator' incorporates:
       *  Constant: '<S11>/Constant'
       *  Constant: '<S11>/Constant1'
       *  Constant: '<S11>/Constant2'
       *  Constant: '<S11>/Constant3'
       *  Constant: '<S11>/Constant4'
       *  Constant: '<S11>/Constant5'
       *  Constant: '<S11>/Constant6'
       */
      rtb_BusCreator_k.TurnLightPosition = REAR_LEFT;
      rtb_BusCreator_k.TurnLightOnOff = OFF;
      rtb_BusCreator_k.TurnLightDutyCycle = 0U;
      rtb_BusCreator_k.TurnLightCycle = 8U;
      rtb_BusCreator_k.TurnLightTimes = 0U;
      rtb_BusCreator_k.TurnLightNumber = 0U;
      rtb_BusCreator_k.TurnLightPriority = 4U;

      /* FunctionCaller: '<S11>/TurnLightService_TurnLightControl_Operation_Operation' incorporates:
       *  BusCreator: '<S11>/Bus Creator'
       */
      Rte_Call_TurnLightService_TurnLightControl_Operation_Operation
        (&rtb_BusCreator_k);

      /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem2' */
      TurnLightLogic_ARID_DEF.RL_flag = false;
    } else if (action == 2.0) {
      /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem6' */
      /* BusCreator: '<S15>/Bus Creator' incorporates:
       *  Constant: '<S15>/Constant'
       *  Constant: '<S15>/Constant1'
       *  Constant: '<S15>/Constant2'
       *  Constant: '<S15>/Constant3'
       *  Constant: '<S15>/Constant4'
       *  Constant: '<S15>/Constant5'
       *  Constant: '<S15>/Constant6'
       */
      rtb_BusCreator_k.TurnLightPosition = REAR_LEFT;
      rtb_BusCreator_k.TurnLightOnOff = ON;
      rtb_BusCreator_k.TurnLightDutyCycle = 0U;
      rtb_BusCreator_k.TurnLightCycle = 4U;
      rtb_BusCreator_k.TurnLightTimes = 0U;
      rtb_BusCreator_k.TurnLightNumber = 0U;
      rtb_BusCreator_k.TurnLightPriority = 4U;

      /* FunctionCaller: '<S15>/TurnLightService_TurnLightControl_Operation_Operation' incorporates:
       *  BusCreator: '<S15>/Bus Creator'
       */
      Rte_Call_TurnLightService_TurnLightControl_Operation_Operation
        (&rtb_BusCreator_k);

      /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem6' */
      TurnLightLogic_ARID_DEF.RL_flag = false;
    }
  }
}

/* Function for Chart: '<S1>/Diagnosis' */
static void TurnLightLogic_act_FL(float64 action)
{
  TurnLightService rtb_BusCreator_h;
  if ((TurnLightLogic_ARID_DEF.token == 0) && TurnLightLogic_ARID_DEF.FL_flag) {
    if (action == 0.0) {
      /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem8' */
      TurnLigh_FunctionCallSubsystem8();

      /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem8' */
      TurnLightLogic_ARID_DEF.FL_flag = false;
    } else if (action == 1.0) {
      /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem' */
      /* BusCreator: '<S4>/Bus Creator' incorporates:
       *  Constant: '<S4>/Constant'
       *  Constant: '<S4>/Constant1'
       *  Constant: '<S4>/Constant2'
       *  Constant: '<S4>/Constant3'
       *  Constant: '<S4>/Constant4'
       *  Constant: '<S4>/Constant5'
       *  Constant: '<S4>/Constant6'
       */
      rtb_BusCreator_h.TurnLightPosition = FRONT_LEFT;
      rtb_BusCreator_h.TurnLightOnOff = OFF;
      rtb_BusCreator_h.TurnLightDutyCycle = 0U;
      rtb_BusCreator_h.TurnLightCycle = 8U;
      rtb_BusCreator_h.TurnLightTimes = 0U;
      rtb_BusCreator_h.TurnLightNumber = 0U;
      rtb_BusCreator_h.TurnLightPriority = 4U;

      /* FunctionCaller: '<S4>/TurnLightService_TurnLightControl_Operation_Operation' incorporates:
       *  BusCreator: '<S4>/Bus Creator'
       */
      Rte_Call_TurnLightService_TurnLightControl_Operation_Operation
        (&rtb_BusCreator_h);

      /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem' */
      TurnLightLogic_ARID_DEF.FL_flag = false;
    } else if (action == 2.0) {
      /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem4' */
      /* BusCreator: '<S13>/Bus Creator' incorporates:
       *  Constant: '<S13>/Constant'
       *  Constant: '<S13>/Constant1'
       *  Constant: '<S13>/Constant2'
       *  Constant: '<S13>/Constant3'
       *  Constant: '<S13>/Constant4'
       *  Constant: '<S13>/Constant5'
       *  Constant: '<S13>/Constant6'
       */
      rtb_BusCreator_h.TurnLightPosition = FRONT_LEFT;
      rtb_BusCreator_h.TurnLightOnOff = ON;
      rtb_BusCreator_h.TurnLightDutyCycle = 0U;
      rtb_BusCreator_h.TurnLightCycle = 4U;
      rtb_BusCreator_h.TurnLightTimes = 0U;
      rtb_BusCreator_h.TurnLightNumber = 0U;
      rtb_BusCreator_h.TurnLightPriority = 4U;

      /* FunctionCaller: '<S13>/TurnLightService_TurnLightControl_Operation_Operation' incorporates:
       *  BusCreator: '<S13>/Bus Creator'
       */
      Rte_Call_TurnLightService_TurnLightControl_Operation_Operation
        (&rtb_BusCreator_h);

      /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem4' */
      TurnLightLogic_ARID_DEF.FL_flag = false;
    }
  }
}

/* Function for Chart: '<S1>/Diagnosis' */
static void TurnLightLogic_act_FR(float64 action)
{
  TurnLightService rtb_BusCreator_au;
  if ((TurnLightLogic_ARID_DEF.token == 1) && TurnLightLogic_ARID_DEF.FR_flag) {
    if (action == 0.0) {
      /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem8' */
      TurnLigh_FunctionCallSubsystem8();

      /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem8' */
      TurnLightLogic_ARID_DEF.FR_flag = false;
    } else if (action == 1.0) {
      /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem1' */
      /* BusCreator: '<S5>/Bus Creator' incorporates:
       *  Constant: '<S5>/Constant'
       *  Constant: '<S5>/Constant1'
       *  Constant: '<S5>/Constant2'
       *  Constant: '<S5>/Constant3'
       *  Constant: '<S5>/Constant4'
       *  Constant: '<S5>/Constant5'
       *  Constant: '<S5>/Constant6'
       */
      rtb_BusCreator_au.TurnLightPosition = FRONT_RIGHT;
      rtb_BusCreator_au.TurnLightOnOff = OFF;
      rtb_BusCreator_au.TurnLightDutyCycle = 0U;
      rtb_BusCreator_au.TurnLightCycle = 8U;
      rtb_BusCreator_au.TurnLightTimes = 0U;
      rtb_BusCreator_au.TurnLightNumber = 0U;
      rtb_BusCreator_au.TurnLightPriority = 4U;

      /* FunctionCaller: '<S5>/TurnLightService_TurnLightControl_Operation_Operation' incorporates:
       *  BusCreator: '<S5>/Bus Creator'
       */
      Rte_Call_TurnLightService_TurnLightControl_Operation_Operation
        (&rtb_BusCreator_au);

      /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem1' */
      TurnLightLogic_ARID_DEF.FR_flag = false;
    } else if (action == 2.0) {
      /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem5' */
      /* BusCreator: '<S14>/Bus Creator' incorporates:
       *  Constant: '<S14>/Constant'
       *  Constant: '<S14>/Constant1'
       *  Constant: '<S14>/Constant2'
       *  Constant: '<S14>/Constant3'
       *  Constant: '<S14>/Constant4'
       *  Constant: '<S14>/Constant5'
       *  Constant: '<S14>/Constant6'
       */
      rtb_BusCreator_au.TurnLightPosition = FRONT_RIGHT;
      rtb_BusCreator_au.TurnLightOnOff = ON;
      rtb_BusCreator_au.TurnLightDutyCycle = 0U;
      rtb_BusCreator_au.TurnLightCycle = 4U;
      rtb_BusCreator_au.TurnLightTimes = 0U;
      rtb_BusCreator_au.TurnLightNumber = 0U;
      rtb_BusCreator_au.TurnLightPriority = 4U;

      /* FunctionCaller: '<S14>/TurnLightService_TurnLightControl_Operation_Operation' incorporates:
       *  BusCreator: '<S14>/Bus Creator'
       */
      Rte_Call_TurnLightService_TurnLightControl_Operation_Operation
        (&rtb_BusCreator_au);

      /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem5' */
      TurnLightLogic_ARID_DEF.FR_flag = false;
    }
  }
}

/* Function for Chart: '<S1>/Diagnosis' */
static void TurnLightLogic_act_RR(float64 action)
{
  TurnLightService rtb_BusCreator_m;
  if ((TurnLightLogic_ARID_DEF.token == 3) && TurnLightLogic_ARID_DEF.RR_flag) {
    if (action == 0.0) {
      /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem8' */
      TurnLigh_FunctionCallSubsystem8();

      /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem8' */
      TurnLightLogic_ARID_DEF.RR_flag = false;
    } else if (action == 1.0) {
      /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem3' */
      /* BusCreator: '<S12>/Bus Creator' incorporates:
       *  Constant: '<S12>/Constant'
       *  Constant: '<S12>/Constant1'
       *  Constant: '<S12>/Constant2'
       *  Constant: '<S12>/Constant3'
       *  Constant: '<S12>/Constant4'
       *  Constant: '<S12>/Constant5'
       *  Constant: '<S12>/Constant6'
       */
      rtb_BusCreator_m.TurnLightPosition = REAR_RIGHT;
      rtb_BusCreator_m.TurnLightOnOff = OFF;
      rtb_BusCreator_m.TurnLightDutyCycle = 0U;
      rtb_BusCreator_m.TurnLightCycle = 8U;
      rtb_BusCreator_m.TurnLightTimes = 0U;
      rtb_BusCreator_m.TurnLightNumber = 0U;
      rtb_BusCreator_m.TurnLightPriority = 4U;

      /* FunctionCaller: '<S12>/TurnLightService_TurnLightControl_Operation_Operation' incorporates:
       *  BusCreator: '<S12>/Bus Creator'
       */
      Rte_Call_TurnLightService_TurnLightControl_Operation_Operation
        (&rtb_BusCreator_m);

      /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem3' */
      TurnLightLogic_ARID_DEF.RR_flag = false;
    } else if (action == 2.0) {
      /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem7' */
      /* BusCreator: '<S16>/Bus Creator' incorporates:
       *  Constant: '<S16>/Constant'
       *  Constant: '<S16>/Constant1'
       *  Constant: '<S16>/Constant2'
       *  Constant: '<S16>/Constant3'
       *  Constant: '<S16>/Constant4'
       *  Constant: '<S16>/Constant5'
       *  Constant: '<S16>/Constant6'
       */
      rtb_BusCreator_m.TurnLightPosition = REAR_RIGHT;
      rtb_BusCreator_m.TurnLightOnOff = ON;
      rtb_BusCreator_m.TurnLightDutyCycle = 0U;
      rtb_BusCreator_m.TurnLightCycle = 4U;
      rtb_BusCreator_m.TurnLightTimes = 0U;
      rtb_BusCreator_m.TurnLightNumber = 0U;
      rtb_BusCreator_m.TurnLightPriority = 4U;

      /* FunctionCaller: '<S16>/TurnLightService_TurnLightControl_Operation_Operation' incorporates:
       *  BusCreator: '<S16>/Bus Creator'
       */
      Rte_Call_TurnLightService_TurnLightControl_Operation_Operation
        (&rtb_BusCreator_m);

      /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem7' */
      TurnLightLogic_ARID_DEF.RR_flag = false;
    }
  }
}

/* Model step function for TID1 */
void Runnable(void)                    /* Explicit Task: Runnable */
{
  sint32 tmp;
  uint8 tmpRead;
  uint8 tmpRead_0;
  uint8 tmpRead_1;
  uint8 tmpRead_2;
  uint8 tmpRead_3;
  uint8 tmpRead_4;
  uint8 tmpRead_5;
  uint8 tmpRead_6;
  uint8 tmpRead_7;
  uint8 tmpRead_8;
  uint8 tmpRead_9;
  uint8 tmpRead_a;
  uint8 tmpRead_b;
  uint8 tmpRead_c;
  uint8 tmpRead_d;
  uint8 tmpRead_e;

  /* Inport: '<Root>/EmergencyBrakeLight_Signal' */
  (void)Rte_Read_EmergencyBrakeLight_Signal(&tmpRead_1);

  /* Inport: '<Root>/CrashIntensity_Signal' */
  (void)Rte_Read_CrashIntensity_Signal(&tmpRead_0);

  /* RootInportFunctionCallGenerator generated from: '<Root>/Runnable' incorporates:
   *  SubSystem: '<Root>/Runnable_sys'
   */
  /* Chart: '<S1>/TurnLightLogic' incorporates:
   *  Inport: '<Root>/CountSignal_Left_Signal'
   *  Inport: '<Root>/CountSignal_Right_Signal'
   *  Inport: '<Root>/IGN_Status_Signal'
   *  Inport: '<Root>/TurnLampSw_Signal'
   */
  if (TurnLightLogic_ARID_DEF.is_active_c3_TurnLightLogic == 0U) {
    TurnLightLogic_ARID_DEF.is_active_c3_TurnLightLogic = 1U;
    TurnLightLogic_ARID_DEF.is_c3_TurnLightLogic = TurnLightLogic_IN_IDLE;
    TurnLightLogic_ARID_DEF.TurnLightReq = TurnLightLogic_NOREQUEST;
    TurnLightLogic_ARID_DEF.TurnLightMode = TurnLightLogic_MODE_NOREQUEST;
  } else {
    (void)Rte_Read_IGN_Status_Signal(&tmpRead_3);
    (void)Rte_Read_TurnLampSw_Signal(&tmpRead_c);
    switch (TurnLightLogic_ARID_DEF.is_c3_TurnLightLogic) {
     case TurnLightLogic_IN_IDLE:
      tmp = (tmpRead_3 == TurnLightLogic_IGN_ON) | (tmpRead_3 ==
        TurnLightLogic_IGNST);
      if ((tmp != 0) && (tmpRead_c == TurnLightLogic_TURN_LEFT)) {
        TurnLightLogic_ARID_DEF.is_c3_TurnLightLogic =
          TurnLightLogic_IN_TurnLeft;
        TurnLightLogic_ARID_DEF.CheckTime = 0U;
        TurnLightLogic_ARID_DEF.TurnLightReq = TurnLightLogic_TURN_LEFT;
        TurnLightLogic_ARID_DEF.is_TurnLeft = TurnLightLogic_IN_CheckTime_b;
      } else if ((tmp != 0) && (tmpRead_c == TurnLightLogic_TURN_RIGHT)) {
        TurnLightLogic_ARID_DEF.is_c3_TurnLightLogic =
          TurnLightLogic_IN_TurnRight;
        TurnLightLogic_ARID_DEF.CheckTime = 0U;
        TurnLightLogic_ARID_DEF.TurnLightReq = TurnLightLogic_TURN_RIGHT;
        TurnLightLogic_ARID_DEF.is_TurnRight = TurnLightLogic_IN_CheckTime_b;
      } else {
        TurnLightLogic_ARID_DEF.TurnLightReq = TurnLightLogic_NOREQUEST;
        TurnLightLogic_ARID_DEF.TurnLightMode = TurnLightLogic_MODE_NOREQUEST;
      }
      break;

     case TurnLightLogic_IN_TurnLeft:
      if (tmpRead_3 == TurnLightLogic_IGN_OFF) {
        TurnLightLogic_ARID_DEF.is_TurnLeft = TurnLightLog_IN_NO_ACTIVE_CHILD;
        TurnLightLogic_ARID_DEF.is_c3_TurnLightLogic = TurnLightLogic_IN_IDLE;
        TurnLightLogic_ARID_DEF.TurnLightReq = TurnLightLogic_NOREQUEST;
        TurnLightLogic_ARID_DEF.TurnLightMode = TurnLightLogic_MODE_NOREQUEST;
      } else {
        switch (TurnLightLogic_ARID_DEF.is_TurnLeft) {
         case TurnLightLogic_IN_Change:
          if ((TurnLightLogic_ARID_DEF.CheckTime <= 80) && (tmpRead_c !=
               TurnLightLogic_TURN_LEFT)) {
            TurnLightLogic_ARID_DEF.is_TurnLeft = TurnLightLogic_IN_ShineThree;
            TurnLightLogic_ARID_DEF.TurnLightMode = TurnLightLogic_MODE_THREE;
          } else if (TurnLightLogic_ARID_DEF.CheckTime >= 80) {
            TurnLightLogic_ARID_DEF.is_TurnLeft = TurnLightLogic_IN_ShineLong;
            TurnLightLogic_ARID_DEF.TurnLightMode = TurnLightLogic_MODE_LONG;
          } else {
            TurnLightLogic_ARID_DEF.CheckTime++;
          }
          break;

         case TurnLightLogic_IN_CheckTime_b:
          if ((TurnLightLogic_ARID_DEF.CheckTime >= 10) && (tmpRead_c ==
               TurnLightLogic_TURN_LEFT)) {
            TurnLightLogic_ARID_DEF.is_TurnLeft = TurnLightLogic_IN_Change;
          } else {
            tmp = TurnLightLogic_ARID_DEF.CheckTime + 1;
            if (TurnLightLogic_ARID_DEF.CheckTime + 1 > 65535) {
              tmp = 65535;
            }

            TurnLightLogic_ARID_DEF.CheckTime = (uint16)tmp;
          }
          break;

         case TurnLightLogic_IN_ShineLong:
          if (tmpRead_c != TurnLightLogic_TURN_LEFT) {
            TurnLightLogic_ARID_DEF.is_TurnLeft =
              TurnLightLog_IN_NO_ACTIVE_CHILD;
            TurnLightLogic_ARID_DEF.is_c3_TurnLightLogic =
              TurnLightLogic_IN_IDLE;
            TurnLightLogic_ARID_DEF.TurnLightReq = TurnLightLogic_NOREQUEST;
            TurnLightLogic_ARID_DEF.TurnLightMode =
              TurnLightLogic_MODE_NOREQUEST;
          }
          break;

         default:
          /* case IN_ShineThree: */
          (void)Rte_Read_CountSignal_Left_Signal(&tmpRead);
          if (tmpRead == 3) {
            TurnLightLogic_ARID_DEF.is_TurnLeft =
              TurnLightLog_IN_NO_ACTIVE_CHILD;
            TurnLightLogic_ARID_DEF.is_c3_TurnLightLogic =
              TurnLightLogic_IN_IDLE;
            TurnLightLogic_ARID_DEF.TurnLightReq = TurnLightLogic_NOREQUEST;
            TurnLightLogic_ARID_DEF.TurnLightMode =
              TurnLightLogic_MODE_NOREQUEST;
          }
          break;
        }
      }
      break;

     default:
      /* case IN_TurnRight: */
      if (tmpRead_3 == TurnLightLogic_IGN_OFF) {
        TurnLightLogic_ARID_DEF.is_TurnRight = TurnLightLog_IN_NO_ACTIVE_CHILD;
        TurnLightLogic_ARID_DEF.is_c3_TurnLightLogic = TurnLightLogic_IN_IDLE;
        TurnLightLogic_ARID_DEF.TurnLightReq = TurnLightLogic_NOREQUEST;
        TurnLightLogic_ARID_DEF.TurnLightMode = TurnLightLogic_MODE_NOREQUEST;
      } else {
        switch (TurnLightLogic_ARID_DEF.is_TurnRight) {
         case TurnLightLogic_IN_Change:
          if ((TurnLightLogic_ARID_DEF.CheckTime <= 80) && (tmpRead_c !=
               TurnLightLogic_TURN_RIGHT)) {
            TurnLightLogic_ARID_DEF.is_TurnRight = TurnLightLogic_IN_ShineThree;
            TurnLightLogic_ARID_DEF.TurnLightMode = TurnLightLogic_MODE_THREE;
          } else if (TurnLightLogic_ARID_DEF.CheckTime >= 80) {
            TurnLightLogic_ARID_DEF.is_TurnRight = TurnLightLogic_IN_ShineLong;
            TurnLightLogic_ARID_DEF.TurnLightMode = TurnLightLogic_MODE_LONG;
          } else {
            TurnLightLogic_ARID_DEF.CheckTime++;
          }
          break;

         case TurnLightLogic_IN_CheckTime_b:
          if ((TurnLightLogic_ARID_DEF.CheckTime >= 10) && (tmpRead_c ==
               TurnLightLogic_TURN_RIGHT)) {
            TurnLightLogic_ARID_DEF.is_TurnRight = TurnLightLogic_IN_Change;
          } else {
            tmp = TurnLightLogic_ARID_DEF.CheckTime + 1;
            if (TurnLightLogic_ARID_DEF.CheckTime + 1 > 65535) {
              tmp = 65535;
            }

            TurnLightLogic_ARID_DEF.CheckTime = (uint16)tmp;
          }
          break;

         case TurnLightLogic_IN_ShineLong:
          if (tmpRead_c != TurnLightLogic_TURN_RIGHT) {
            TurnLightLogic_ARID_DEF.is_TurnRight =
              TurnLightLog_IN_NO_ACTIVE_CHILD;
            TurnLightLogic_ARID_DEF.is_c3_TurnLightLogic =
              TurnLightLogic_IN_IDLE;
            TurnLightLogic_ARID_DEF.TurnLightReq = TurnLightLogic_NOREQUEST;
            TurnLightLogic_ARID_DEF.TurnLightMode =
              TurnLightLogic_MODE_NOREQUEST;
          }
          break;

         default:
          /* case IN_ShineThree: */
          (void)Rte_Read_CountSignal_Right_Signal(&tmpRead);
          if (tmpRead == 3) {
            TurnLightLogic_ARID_DEF.is_TurnRight =
              TurnLightLog_IN_NO_ACTIVE_CHILD;
            TurnLightLogic_ARID_DEF.is_c3_TurnLightLogic =
              TurnLightLogic_IN_IDLE;
            TurnLightLogic_ARID_DEF.TurnLightReq = TurnLightLogic_NOREQUEST;
            TurnLightLogic_ARID_DEF.TurnLightMode =
              TurnLightLogic_MODE_NOREQUEST;
          }
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S1>/TurnLightLogic' */

  /* Chart: '<S1>/HazardLogic' incorporates:
   *  Inport: '<Root>/HazardSw_Signal'
   *  Inport: '<Root>/VehicleSpeed_Signal'
   *  Inport: '<Root>/VehicleSpeed_Valid_Signal'
   */
  if (TurnLightLogic_ARID_DEF.temporalCounter_i1 < 131071U) {
    TurnLightLogic_ARID_DEF.temporalCounter_i1++;
  }

  TurnLightLogic_ARID_DEF.CrashIntensity_Signal_prev =
    TurnLightLogic_ARID_DEF.CrashIntensity_Signal_start;
  TurnLightLogic_ARID_DEF.CrashIntensity_Signal_start = tmpRead_0;
  TurnLightLogic_ARID_DEF.EmergencyBrakeLight_Signal_prev =
    TurnLightLogic_ARID_DEF.EmergencyBrakeLight_Signal_star;
  TurnLightLogic_ARID_DEF.EmergencyBrakeLight_Signal_star = tmpRead_1;
  if (TurnLightLogic_ARID_DEF.is_active_c1_TurnLightLogic == 0U) {
    TurnLightLogic_ARID_DEF.CrashIntensity_Signal_prev = tmpRead_0;
    TurnLightLogic_ARID_DEF.EmergencyBrakeLight_Signal_prev = tmpRead_1;
    TurnLightLogic_ARID_DEF.is_active_c1_TurnLightLogic = 1U;
    TurnLightLogic_ARID_DEF.is_c1_TurnLightLogic = TurnLightLogic_IN_IDLE_i;
    TurnLightLogic_ARID_DEF.temporalCounter_i1 = 0U;
    TurnLightLogic_ARID_DEF.HazardReq = TurnLightLogic_HAZARD_OFF;
  } else {
    (void)Rte_Read_HazardSw_Signal(&tmpRead_2);
    switch (TurnLightLogic_ARID_DEF.is_c1_TurnLightLogic) {
     case TurnLightLogic_IN_CheckTime:
      if (tmpRead_2 == TurnLightLogic_HAZARD_ACTIVE) {
        TurnLightLogic_ARID_DEF.is_c1_TurnLightLogic = TurnLightLogic_IN_IDLE_i;
        TurnLightLogic_ARID_DEF.temporalCounter_i1 = 0U;
        TurnLightLogic_ARID_DEF.HazardReq = TurnLightLogic_HAZARD_OFF;
      } else if (tmpRead_2 == TurnLightLogic_HAZARD_INACTIVE) {
        TurnLightLogic_ARID_DEF.is_c1_TurnLightLogic =
          TurnLightLogic_IN_CheckTime;
        TurnLightLogic_ARID_DEF.temporalCounter_i1 = 0U;
      }
      break;

     case TurnLightLogi_IN_CrashIntensity:
      TurnLightLogic_ARID_DEF.HazardReq = (uint8)TurnLightLogic_HAZARD_ON;
      if (TurnLightLogic_ARID_DEF.temporalCounter_i1 >= 90000U) {
        TurnLightLogic_ARID_DEF.is_c1_TurnLightLogic = TurnLightLogic_IN_IDLE_i;
        TurnLightLogic_ARID_DEF.temporalCounter_i1 = 0U;
        TurnLightLogic_ARID_DEF.HazardReq = TurnLightLogic_HAZARD_OFF;
      } else if (TurnLightLogic_ARID_DEF.temporalCounter_i1 >= 500U) {
        TurnLightLogic_ARID_DEF.is_c1_TurnLightLogic =
          TurnLightLogic_IN_CheckTime;
        TurnLightLogic_ARID_DEF.temporalCounter_i1 = 0U;
      }
      break;

     case TurnLightLogi_IN_EmergencyBrake:
      TurnLightLogic_ARID_DEF.HazardReq = (uint8)TurnLightLogic_HAZARD_ON;
      (void)Rte_Read_VehicleSpeed_Signal(&tmpRead_d);
      (void)Rte_Read_VehicleSpeed_Valid_Signal(&tmpRead_e);
      if (((tmpRead_d >= 15) && (tmpRead_e == TurnLightLogic_ACTIVE)) ||
          (tmpRead_2 == TurnLightLogic_HAZARD_ACTIVE)) {
        TurnLightLogic_ARID_DEF.is_c1_TurnLightLogic = TurnLightLogic_IN_IDLE_i;
        TurnLightLogic_ARID_DEF.temporalCounter_i1 = 0U;
        TurnLightLogic_ARID_DEF.HazardReq = TurnLightLogic_HAZARD_OFF;
      } else if (tmpRead_2 == TurnLightLogic_HAZARD_INACTIVE) {
        TurnLightLogic_ARID_DEF.is_c1_TurnLightLogic =
          TurnLightLogi_IN_EmergencyBrake;
        TurnLightLogic_ARID_DEF.temporalCounter_i1 = 0U;
      }
      break;

     case TurnLightLogic_IN_Hazard:
      TurnLightLogic_ARID_DEF.HazardReq = (uint8)TurnLightLogic_HAZARD_ON;
      if ((tmpRead_2 == TurnLightLogic_HAZARD_ACTIVE) &&
          (TurnLightLogic_ARID_DEF.temporalCounter_i1 >= 30U)) {
        TurnLightLogic_ARID_DEF.is_c1_TurnLightLogic = TurnLightLogic_IN_IDLE_i;
        TurnLightLogic_ARID_DEF.temporalCounter_i1 = 0U;
        TurnLightLogic_ARID_DEF.HazardReq = TurnLightLogic_HAZARD_OFF;
      } else if (tmpRead_2 == TurnLightLogic_HAZARD_INACTIVE) {
        TurnLightLogic_ARID_DEF.is_c1_TurnLightLogic = TurnLightLogic_IN_Hazard;
        TurnLightLogic_ARID_DEF.temporalCounter_i1 = 0U;
      }
      break;

     default:
      /* case IN_IDLE: */
      TurnLightLogic_ARID_DEF.HazardReq = TurnLightLogic_HAZARD_OFF;
      if ((TurnLightLogic_ARID_DEF.CrashIntensity_Signal_prev !=
           TurnLightLogic_ARID_DEF.CrashIntensity_Signal_start) &&
          (TurnLightLogic_ARID_DEF.CrashIntensity_Signal_prev ==
           TurnLightLogic_HAZARD_INACTIVE)) {
        TurnLightLogic_ARID_DEF.is_c1_TurnLightLogic =
          TurnLightLogi_IN_CrashIntensity;
        TurnLightLogic_ARID_DEF.temporalCounter_i1 = 0U;
        TurnLightLogic_ARID_DEF.HazardReq = (uint8)TurnLightLogic_HAZARD_ON;
      } else if ((TurnLightLogic_ARID_DEF.EmergencyBrakeLight_Signal_prev !=
                  TurnLightLogic_ARID_DEF.EmergencyBrakeLight_Signal_star) &&
                 (TurnLightLogic_ARID_DEF.EmergencyBrakeLight_Signal_prev ==
                  TurnLightLogic_HAZARD_INACTIVE)) {
        TurnLightLogic_ARID_DEF.is_c1_TurnLightLogic =
          TurnLightLogi_IN_EmergencyBrake;
        TurnLightLogic_ARID_DEF.temporalCounter_i1 = 0U;
        TurnLightLogic_ARID_DEF.HazardReq = (uint8)TurnLightLogic_HAZARD_ON;
      } else if ((tmpRead_2 == TurnLightLogic_HAZARD_ACTIVE) &&
                 (TurnLightLogic_ARID_DEF.temporalCounter_i1 >= 30U)) {
        TurnLightLogic_ARID_DEF.is_c1_TurnLightLogic = TurnLightLogic_IN_Hazard;
        TurnLightLogic_ARID_DEF.temporalCounter_i1 = 0U;
        TurnLightLogic_ARID_DEF.HazardReq = (uint8)TurnLightLogic_HAZARD_ON;
      } else if (tmpRead_2 == TurnLightLogic_HAZARD_INACTIVE) {
        TurnLightLogic_ARID_DEF.is_c1_TurnLightLogic = TurnLightLogic_IN_IDLE_i;
        TurnLightLogic_ARID_DEF.temporalCounter_i1 = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/HazardLogic' */

  /* Chart: '<S1>/TurnLightSelector' */
  if (TurnLightLogic_ARID_DEF.temporalCounter_i1_g < 63U) {
    TurnLightLogic_ARID_DEF.temporalCounter_i1_g++;
  }

  TurnLightLogic_ARID_DEF.TurnLightReq_prev =
    TurnLightLogic_ARID_DEF.TurnLightReq_start;
  TurnLightLogic_ARID_DEF.TurnLightReq_start =
    TurnLightLogic_ARID_DEF.TurnLightReq;
  TurnLightLogic_ARID_DEF.HazardReq_prev =
    TurnLightLogic_ARID_DEF.HazardReq_start;
  TurnLightLogic_ARID_DEF.HazardReq_start = TurnLightLogic_ARID_DEF.HazardReq;
  if (TurnLightLogic_ARID_DEF.is_active_c4_TurnLightLogic == 0U) {
    TurnLightLogic_ARID_DEF.TurnLightReq_prev =
      TurnLightLogic_ARID_DEF.TurnLightReq;
    TurnLightLogic_ARID_DEF.HazardReq_prev = TurnLightLogic_ARID_DEF.HazardReq;
    TurnLightLogic_ARID_DEF.is_active_c4_TurnLightLogic = 1U;
    TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic = TurnLightLogic_IN_ALLOFF;

    /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem14' */
    TurnLig_FunctionCallSubsystem14();

    /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem14' */
  } else {
    switch (TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic) {
     case TurnLightLogic_IN_ALLOFF:
      if (TurnLightLogic_ARID_DEF.TurnLightReq == TurnLightLogic_TURN_LEFT) {
        TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic = TurnLightLogic_IN_Left_ON;
        TurnLightLogic_LeftShortOrLong();
        TurnLightLogic_ARID_DEF.LeftRetry = 0U;
      } else if (TurnLightLogic_ARID_DEF.TurnLightReq ==
                 TurnLightLogic_TURN_RIGHT) {
        TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic =
          TurnLightLogic_IN_Right_ON;
        TurnLightLogic_RightShortOrLong();
        TurnLightLogic_ARID_DEF.RightRetry = 0U;
      } else if (TurnLightLogic_ARID_DEF.HazardReq == TurnLightLogic_HAZARD_ON_k)
      {
        TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic =
          TurnLightLogic_IN_Hazard_ON;

        /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem13' */
        TurnLig_FunctionCallSubsystem13();

        /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem13' */
        TurnLightLogic_ARID_DEF.LeftRetry = 0U;
        TurnLightLogic_ARID_DEF.RightRetry = 0U;
      }
      break;

     case TurnLightLogic_IN_Hazard_ON:
      if ((TurnLightLogic_ARID_DEF.TurnLightReq == TurnLightLogic_TURN_LEFT) &&
          ((TurnLightLogic_ARID_DEF.HazardReq_prev !=
            TurnLightLogic_ARID_DEF.HazardReq_start) &&
           (TurnLightLogic_ARID_DEF.HazardReq_start == TurnLightLogic_HAZARD_OFF)))
      {
        TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic = TurnLightLogic_IN_Left_ON;
        TurnLightLogic_LeftShortOrLong();
        TurnLightLogic_ARID_DEF.LeftRetry = 0U;
      } else if (TurnLightLogic_ARID_DEF.HazardReq == TurnLightLogic_HAZARD_OFF)
      {
        TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic = TurnLightLogic_IN_ALLOFF;

        /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem14' */
        TurnLig_FunctionCallSubsystem14();

        /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem14' */
      } else if ((TurnLightLogic_ARID_DEF.TurnLightReq ==
                  TurnLightLogic_TURN_RIGHT) &&
                 ((TurnLightLogic_ARID_DEF.HazardReq_prev !=
                   TurnLightLogic_ARID_DEF.HazardReq_start) &&
                  (TurnLightLogic_ARID_DEF.HazardReq_start ==
                   TurnLightLogic_HAZARD_OFF))) {
        TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic =
          TurnLightLogic_IN_Right_ON;
        TurnLightLogic_RightShortOrLong();
        TurnLightLogic_ARID_DEF.RightRetry = 0U;
      } else if ((TurnLightLogic_ARID_DEF.LeftRetry == 1) ||
                 (TurnLightLogic_ARID_DEF.RightRetry == 1)) {
        TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic = TurnLightLogic_IN_delay;
        TurnLightLogic_ARID_DEF.temporalCounter_i1_g = 0U;
      }
      break;

     case TurnLightLogic_IN_Left_ON:
      if (TurnLightLogic_ARID_DEF.TurnLightReq != TurnLightLogic_TURN_LEFT) {
        TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic = TurnLightLogic_IN_ALLOFF;

        /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem14' */
        TurnLig_FunctionCallSubsystem14();

        /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem14' */
      } else if (TurnLightLogic_ARID_DEF.LeftRetry == 1) {
        TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic = TurnLightLogic_IN_delay2;
        TurnLightLogic_ARID_DEF.temporalCounter_i1_g = 0U;
      } else if (((TurnLightLogic_ARID_DEF.HazardReq ==
                   TurnLightLogic_HAZARD_ON_k) &&
                  ((TurnLightLogic_ARID_DEF.TurnLightReq_prev !=
                    TurnLightLogic_ARID_DEF.TurnLightReq_start) &&
                   (TurnLightLogic_ARID_DEF.TurnLightReq_prev ==
                    TurnLightLogic_TURN_LEFT))) ||
                 ((TurnLightLogic_ARID_DEF.HazardReq_prev !=
                   TurnLightLogic_ARID_DEF.HazardReq_start) &&
                  (TurnLightLogic_ARID_DEF.HazardReq_start ==
                   TurnLightLogic_HAZARD_ON_k))) {
        TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic =
          TurnLightLogic_IN_Hazard_ON;

        /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem13' */
        TurnLig_FunctionCallSubsystem13();

        /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem13' */
        TurnLightLogic_ARID_DEF.LeftRetry = 0U;
        TurnLightLogic_ARID_DEF.RightRetry = 0U;
      }
      break;

     case TurnLightLogic_IN_Right_ON:
      if (TurnLightLogic_ARID_DEF.TurnLightReq != TurnLightLogic_TURN_RIGHT) {
        TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic = TurnLightLogic_IN_ALLOFF;

        /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem14' */
        TurnLig_FunctionCallSubsystem14();

        /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem14' */
      } else if (TurnLightLogic_ARID_DEF.RightRetry == 1) {
        TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic = TurnLightLogic_IN_delay1;
        TurnLightLogic_ARID_DEF.temporalCounter_i1_g = 0U;
      } else if (((TurnLightLogic_ARID_DEF.HazardReq ==
                   TurnLightLogic_HAZARD_ON_k) &&
                  ((TurnLightLogic_ARID_DEF.TurnLightReq_prev !=
                    TurnLightLogic_ARID_DEF.TurnLightReq_start) &&
                   (TurnLightLogic_ARID_DEF.TurnLightReq_prev ==
                    TurnLightLogic_TURN_RIGHT))) ||
                 ((TurnLightLogic_ARID_DEF.HazardReq_prev !=
                   TurnLightLogic_ARID_DEF.HazardReq_start) &&
                  (TurnLightLogic_ARID_DEF.HazardReq_start ==
                   TurnLightLogic_HAZARD_ON_k))) {
        TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic =
          TurnLightLogic_IN_Hazard_ON;

        /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem13' */
        TurnLig_FunctionCallSubsystem13();

        /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem13' */
        TurnLightLogic_ARID_DEF.LeftRetry = 0U;
        TurnLightLogic_ARID_DEF.RightRetry = 0U;
      }
      break;

     case TurnLightLogic_IN_delay:
      if (TurnLightLogic_ARID_DEF.temporalCounter_i1_g >= 50U) {
        TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic =
          TurnLightLogic_IN_Hazard_ON;

        /* Outputs for Function Call SubSystem: '<S1>/Function-Call Subsystem13' */
        TurnLig_FunctionCallSubsystem13();

        /* End of Outputs for SubSystem: '<S1>/Function-Call Subsystem13' */
        TurnLightLogic_ARID_DEF.LeftRetry = 0U;
        TurnLightLogic_ARID_DEF.RightRetry = 0U;
      }
      break;

     case TurnLightLogic_IN_delay1:
      if (TurnLightLogic_ARID_DEF.temporalCounter_i1_g >= 50U) {
        TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic =
          TurnLightLogic_IN_Right_ON;
        TurnLightLogic_RightShortOrLong();
        TurnLightLogic_ARID_DEF.RightRetry = 0U;
      }
      break;

     default:
      /* case IN_delay2: */
      if (TurnLightLogic_ARID_DEF.temporalCounter_i1_g >= 50U) {
        TurnLightLogic_ARID_DEF.is_c4_TurnLightLogic = TurnLightLogic_IN_Left_ON;
        TurnLightLogic_LeftShortOrLong();
        TurnLightLogic_ARID_DEF.LeftRetry = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/TurnLightSelector' */

  /* Chart: '<S1>/Diagnosis' incorporates:
   *  Inport: '<Root>/TurnLampCtrlCmd_FL_Signal'
   *  Inport: '<Root>/TurnLampCtrlCmd_FR_Signal'
   *  Inport: '<Root>/TurnLampCtrlCmd_RL_Signal'
   *  Inport: '<Root>/TurnLampCtrlCmd_RR_Signal'
   *  Inport: '<Root>/TurnLampFb_FL_Signal'
   *  Inport: '<Root>/TurnLampFb_FR_Signal'
   *  Inport: '<Root>/TurnLampFb_RL_Signal'
   *  Inport: '<Root>/TurnLampFb_RR_Signal'
   */
  if (TurnLightLogic_ARID_DEF.is_active_c2_TurnLightLogic == 0U) {
    TurnLightLogic_ARID_DEF.is_active_c2_TurnLightLogic = 1U;
    TurnLightLogic_ARID_DEF.is_RL = TurnLightLogic_IN_IDLE;
    TurnLightLogic_act_RL(0.0);
    TurnLightLogic_ARID_DEF.is_FL = TurnLightLogic_IN_IDLE;
    TurnLightLogic_act_FL(0.0);
    TurnLightLogic_ARID_DEF.is_FR = TurnLightLogic_IN_IDLE;
    TurnLightLogic_act_FR(0.0);
    TurnLightLogic_ARID_DEF.is_RR = TurnLightLogic_IN_IDLE;
    TurnLightLogic_act_RR(0.0);
  } else {
    TurnLightLogic_tokenplus();
    (void)Rte_Read_TurnLampFb_RL_Signal(&tmpRead_a);
    switch (TurnLightLogic_ARID_DEF.is_RL) {
     case TurnLightLogic_IN_IDLE:
      (void)Rte_Read_TurnLampCtrlCmd_RL_Signal(&tmpRead_6);
      if ((tmpRead_a == TurnLightLogic_SHORT) && (tmpRead_6 == TurnLightLogic_ON))
      {
        TurnLightLogic_ARID_DEF.RL_flag = true;
        TurnLightLogic_ARID_DEF.is_RL = TurnLightLogic_IN_Short;
        TurnLightLogic_act_RL(1.0);
      } else if ((tmpRead_a == TurnLightLogic_OPEN) && (tmpRead_6 ==
                  TurnLightLogic_ON)) {
        TurnLightLogic_ARID_DEF.RL_flag = true;
        TurnLightLogic_ARID_DEF.is_RL = TurnLightLogic_IN_Long;
        TurnLightLogic_act_RL(2.0);
      } else if (TurnLightLogic_ARID_DEF.RL_flag) {
        TurnLightLogic_ARID_DEF.is_RL = TurnLightLogic_IN_IDLE;
        TurnLightLogic_act_RL(0.0);
      }
      break;

     case TurnLightLogic_IN_Long:
      if (tmpRead_a != TurnLightLogic_OPEN) {
        TurnLightLogic_ARID_DEF.LeftRetry = 1U;
        TurnLightLogic_ARID_DEF.RL_flag = true;
        TurnLightLogic_ARID_DEF.is_RL = TurnLightLogic_IN_IDLE;
        TurnLightLogic_act_RL(0.0);
      } else if (TurnLightLogic_ARID_DEF.RL_flag) {
        TurnLightLogic_ARID_DEF.is_RL = TurnLightLogic_IN_Long;
        TurnLightLogic_act_RL(2.0);
      }
      break;

     default:
      /* case IN_Short: */
      if (tmpRead_a != TurnLightLogic_SHORT) {
        TurnLightLogic_ARID_DEF.LeftRetry = 1U;
        TurnLightLogic_ARID_DEF.RL_flag = true;
        TurnLightLogic_ARID_DEF.is_RL = TurnLightLogic_IN_IDLE;
        TurnLightLogic_act_RL(0.0);
      } else if (TurnLightLogic_ARID_DEF.RL_flag) {
        TurnLightLogic_ARID_DEF.is_RL = TurnLightLogic_IN_Short;
        TurnLightLogic_act_RL(1.0);
      }
      break;
    }

    (void)Rte_Read_TurnLampFb_FL_Signal(&tmpRead_8);
    switch (TurnLightLogic_ARID_DEF.is_FL) {
     case TurnLightLogic_IN_IDLE:
      (void)Rte_Read_TurnLampCtrlCmd_FL_Signal(&tmpRead_4);
      if ((tmpRead_8 == TurnLightLogic_SHORT) && (tmpRead_4 == TurnLightLogic_ON))
      {
        TurnLightLogic_ARID_DEF.FL_flag = true;
        TurnLightLogic_ARID_DEF.is_FL = TurnLightLogic_IN_Short;
        TurnLightLogic_act_FL(1.0);
      } else if ((tmpRead_8 == TurnLightLogic_OPEN) && (tmpRead_4 ==
                  TurnLightLogic_ON)) {
        TurnLightLogic_ARID_DEF.FL_flag = true;
        TurnLightLogic_ARID_DEF.is_FL = TurnLightLogic_IN_Long;
        TurnLightLogic_act_FL(2.0);
      } else if (TurnLightLogic_ARID_DEF.FL_flag) {
        TurnLightLogic_ARID_DEF.is_FL = TurnLightLogic_IN_IDLE;
        TurnLightLogic_act_FL(0.0);
      }
      break;

     case TurnLightLogic_IN_Long:
      if (tmpRead_8 != TurnLightLogic_OPEN) {
        TurnLightLogic_ARID_DEF.LeftRetry = 1U;
        TurnLightLogic_ARID_DEF.FL_flag = true;
        TurnLightLogic_ARID_DEF.is_FL = TurnLightLogic_IN_IDLE;
        TurnLightLogic_act_FL(0.0);
      } else if (TurnLightLogic_ARID_DEF.FL_flag) {
        TurnLightLogic_ARID_DEF.is_FL = TurnLightLogic_IN_Long;
        TurnLightLogic_act_FL(2.0);
      }
      break;

     default:
      /* case IN_Short: */
      if (tmpRead_8 != TurnLightLogic_SHORT) {
        TurnLightLogic_ARID_DEF.LeftRetry = 1U;
        TurnLightLogic_ARID_DEF.FL_flag = true;
        TurnLightLogic_ARID_DEF.is_FL = TurnLightLogic_IN_IDLE;
        TurnLightLogic_act_FL(0.0);
      } else if (TurnLightLogic_ARID_DEF.FL_flag) {
        TurnLightLogic_ARID_DEF.is_FL = TurnLightLogic_IN_Short;
        TurnLightLogic_act_FL(1.0);
      }
      break;
    }

    (void)Rte_Read_TurnLampFb_FR_Signal(&tmpRead_9);
    switch (TurnLightLogic_ARID_DEF.is_FR) {
     case TurnLightLogic_IN_IDLE:
      (void)Rte_Read_TurnLampCtrlCmd_FR_Signal(&tmpRead_5);
      if ((tmpRead_9 == TurnLightLogic_SHORT) && (tmpRead_5 == TurnLightLogic_ON))
      {
        TurnLightLogic_ARID_DEF.FR_flag = true;
        TurnLightLogic_ARID_DEF.is_FR = TurnLightLogic_IN_Short;
        TurnLightLogic_act_FR(1.0);
      } else if ((tmpRead_9 == TurnLightLogic_OPEN) && (tmpRead_5 ==
                  TurnLightLogic_ON)) {
        TurnLightLogic_ARID_DEF.FR_flag = true;
        TurnLightLogic_ARID_DEF.is_FR = TurnLightLogic_IN_Long;
        TurnLightLogic_act_FR(2.0);
      } else if (TurnLightLogic_ARID_DEF.FR_flag) {
        TurnLightLogic_ARID_DEF.is_FR = TurnLightLogic_IN_IDLE;
        TurnLightLogic_act_FR(0.0);
      }
      break;

     case TurnLightLogic_IN_Long:
      if (tmpRead_9 != TurnLightLogic_OPEN) {
        TurnLightLogic_ARID_DEF.RightRetry = 1U;
        TurnLightLogic_ARID_DEF.FR_flag = true;
        TurnLightLogic_ARID_DEF.is_FR = TurnLightLogic_IN_IDLE;
        TurnLightLogic_act_FR(0.0);
      } else if (TurnLightLogic_ARID_DEF.FR_flag) {
        TurnLightLogic_ARID_DEF.is_FR = TurnLightLogic_IN_Long;
        TurnLightLogic_act_FR(2.0);
      }
      break;

     default:
      /* case IN_Short: */
      if (tmpRead_9 != TurnLightLogic_SHORT) {
        TurnLightLogic_ARID_DEF.RightRetry = 1U;
        TurnLightLogic_ARID_DEF.FR_flag = true;
        TurnLightLogic_ARID_DEF.is_FR = TurnLightLogic_IN_IDLE;
        TurnLightLogic_act_FR(0.0);
      } else if (TurnLightLogic_ARID_DEF.FR_flag) {
        TurnLightLogic_ARID_DEF.is_FR = TurnLightLogic_IN_Short;
        TurnLightLogic_act_FR(1.0);
      }
      break;
    }

    (void)Rte_Read_TurnLampFb_RR_Signal(&tmpRead_b);
    switch (TurnLightLogic_ARID_DEF.is_RR) {
     case TurnLightLogic_IN_IDLE:
      (void)Rte_Read_TurnLampCtrlCmd_RR_Signal(&tmpRead_7);
      if ((tmpRead_b == TurnLightLogic_SHORT) && (tmpRead_7 == TurnLightLogic_ON))
      {
        TurnLightLogic_ARID_DEF.RR_flag = true;
        TurnLightLogic_ARID_DEF.is_RR = TurnLightLogic_IN_Short;
        TurnLightLogic_act_RR(1.0);
      } else if ((tmpRead_b == TurnLightLogic_OPEN) && (tmpRead_7 ==
                  TurnLightLogic_ON)) {
        TurnLightLogic_ARID_DEF.RR_flag = true;
        TurnLightLogic_ARID_DEF.is_RR = TurnLightLogic_IN_Long;
        TurnLightLogic_act_RR(2.0);
      } else if (TurnLightLogic_ARID_DEF.RR_flag) {
        TurnLightLogic_ARID_DEF.is_RR = TurnLightLogic_IN_IDLE;
        TurnLightLogic_act_RR(0.0);
      }
      break;

     case TurnLightLogic_IN_Long:
      if (tmpRead_b != TurnLightLogic_OPEN) {
        TurnLightLogic_ARID_DEF.RightRetry = 1U;
        TurnLightLogic_ARID_DEF.RR_flag = true;
        TurnLightLogic_ARID_DEF.is_RR = TurnLightLogic_IN_IDLE;
        TurnLightLogic_act_RR(0.0);
      } else if (TurnLightLogic_ARID_DEF.RR_flag) {
        TurnLightLogic_ARID_DEF.is_RR = TurnLightLogic_IN_Long;
        TurnLightLogic_act_RR(2.0);
      }
      break;

     default:
      /* case IN_Short: */
      if (tmpRead_b != TurnLightLogic_SHORT) {
        TurnLightLogic_ARID_DEF.RightRetry = 1U;
        TurnLightLogic_ARID_DEF.RR_flag = true;
        TurnLightLogic_ARID_DEF.is_RR = TurnLightLogic_IN_IDLE;
        TurnLightLogic_act_RR(0.0);
      } else if (TurnLightLogic_ARID_DEF.RR_flag) {
        TurnLightLogic_ARID_DEF.is_RR = TurnLightLogic_IN_Short;
        TurnLightLogic_act_RR(1.0);
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Diagnosis' */

  /* FunctionCaller: '<S1>/TurnLightService_TurnLightControl_Operation_Operation' */
  Rte_Call_TurnLightService_TurnLightControl_Operation_Operation
    (&TurnLightLogic_rtZTurnLightService);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Runnable' */
}

/* Model initialize function */
void TurnLightLogic_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
