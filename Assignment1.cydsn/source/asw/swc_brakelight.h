
/*
 * Filename: swc_brakelight.h
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 *
 * Description: Software component brakelight which updates it's runnable based on the speed signal value.
 */

#ifndef _H_DEFINE_SWC_BRAKELIGHT
#define _H_DEFINE_SWC_BRAKELIGHT

#include "project.h"
#include "global.h"
#include "rte_types.h"

/* USER CODE START SWC_BRAKELIGHT_INCLUDES */
#include "WatchDogTimer.h"
/* USER CODE END SWC_BRAKELIGHT_INCLUDES */



/* USER CODE START SWC_BRAKELIGHT_USERDEFINITIONS */

/* USER CODE END SWC_BRAKELIGHT_USERDEFINITIONS */


/*
 * component: swc_brakelight
 * cycletime: 0
 * description: Runnable that is updated on speed signal value change.
 * events: ev_on_SpeedUpdate
 * name: BRAKELIGHT_setBrakeLight_run
 * shortname: setBrakeLight
 * signalIN: so_speed
 * signalOUT: so_brakelight
 * task: tsk_io
 */
void BRAKELIGHT_setBrakeLight_run(RTE_event ev);


#endif