/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "TurnLightArb"
   ARXML schema: "4.3"
   File generated on: "2025-10-11 16:25:53"  */

#ifndef Rte_Type_h
#define Rte_Type_h
#include "rtwtypes.h"
#include "Std_Types.h"

/* AUTOSAR RTE Status Types */
#ifndef RTE_E_OK
#define RTE_E_OK                       (0x00)
#endif

#ifndef RTE_E_LOST_DATA
#define RTE_E_LOST_DATA                (0x40)
#endif

#ifndef RTE_E_LIMIT
#define RTE_E_LIMIT                    (0x82)
#endif

#ifndef E2E_E_OK
#define E2E_E_OK                       (0x00)
#endif

#ifndef E2EPW_STATUS_OK
#define E2EPW_STATUS_OK                (0x00)
#endif

#ifndef E2EPW_STATUS_OKSOMELOST
#define E2EPW_STATUS_OKSOMELOST        (0x20)
#endif

/* AUTOSAR Implementation data types, specific to software component */
typedef uint8 ComplexTurnLightPosition;
typedef uint8 ComplexTurnLightOnOff;

/* AUTOSAR Enumeration Types */
#ifndef ONOFF_NOREQUEST
#define ONOFF_NOREQUEST                (0)
#endif

#ifndef OFF
#define OFF                            (1)
#endif

#ifndef ON
#define ON                             (2)
#endif

#ifndef POS_NOREQUEST
#define POS_NOREQUEST                  (0)
#endif

#ifndef LEFT
#define LEFT                           (1)
#endif

#ifndef RIGHT
#define RIGHT                          (2)
#endif

#ifndef ALL
#define ALL                            (3)
#endif

#ifndef FRONT_LEFT
#define FRONT_LEFT                     (4)
#endif

#ifndef MIDDLE_LEFT
#define MIDDLE_LEFT                    (5)
#endif

#ifndef REAR_LEFT
#define REAR_LEFT                      (6)
#endif

#ifndef FRONT_RIGHT
#define FRONT_RIGHT                    (7)
#endif

#ifndef MIDDLE_RIGHT
#define MIDDLE_RIGHT                   (8)
#endif

#ifndef REAR_RIGHT
#define REAR_RIGHT                     (9)
#endif

/* AUTOSAR Structure Types */
#ifndef DEFINED_TYPEDEF_FOR_TurnLightService_
#define DEFINED_TYPEDEF_FOR_TurnLightService_

typedef struct {
  ComplexTurnLightPosition TurnLightPosition;
  ComplexTurnLightOnOff TurnLightOnOff;
  uint8 TurnLightDutyCycle;
  uint8 TurnLightCycle;
  uint8 TurnLightTimes;
  uint8 TurnLightNumber;
  uint8 TurnLightPriority;
} TurnLightService;

#endif

typedef void* Rte_Instance;

#endif
