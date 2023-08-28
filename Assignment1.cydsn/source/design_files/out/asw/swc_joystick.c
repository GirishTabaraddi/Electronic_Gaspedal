/*
 * Filename: swc_joystick.c
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 *
 * description: Software component that reads the joystick data every 10ms and provides to the it's runnable.
 * name: swc_joystick
 * shortname: joystick
 *
 */

#include "project.h"
#include "global.h"
#include "rte.h"
#include "rte_types.h"
#include "swc_joystick.h"



/* USER CODE START SWC_JOYSTICK_INCLUDE */

/* USER CODE END SWC_JOYSTICK_INCLUDE */


#include "sp_common.h"

/* USER CODE START SWC_JOYSTICK_USERDEFINITIONS */

/* USER CODE END SWC_JOYSTICK_USERDEFINITIONS */



/*
 * component: swc_joystick
 * cycletime: 10
 * description: Runnable that reads the joystick value x,y every 10ms and updates through API pullport().
 * events: 
 * name: JOYSTICK_readJoystick_run
 * shortname: readJoystick
 * signalIN: 
 * signalOUT: so_joystick
 * task: tsk_io
 */
void JOYSTICK_readJoystick_run(RTE_event ev){
	
	/* USER CODE START JOYSTICK_readJoystick_run */

    /* USER CODE END JOYSTICK_readJoystick_run */
}

/* USER CODE START SWC_JOYSTICK_FUNCTIONS */

/* USER CODE END SWC_JOYSTICK_FUNCTIONS */

