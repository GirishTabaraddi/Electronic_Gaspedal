
/*
 * Filename: sc_joystick_type.h
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 *
 * Description: Signalclass containing the joystick  position
 */

#ifndef _H_DEFINE_SC_JOYSTICK_TYPE
#define _H_DEFINE_SC_JOYSTICK_TYPE

#include "project.h"
#include "global.h"
#include "rte_types.h"

/* USER CODE START SC_JOYSTICK_INCLUDES */
#include "joystick.h"
/* USER CODE END SC_JOYSTICK_INCLUDES */



/**********************************************************************
 *       Type Definition for SC_JOYSTICK signal    
 **********************************************************************/

/* USER CODE START SC_JOYSTICK_USERDEFINITIONS */

/* USER CODE END SC_JOYSTICK_USERDEFINITIONS */

typedef 
/* USER CODE START SC_JOYSTICK_SIGNALDATADEFINITION */
struct
{
	sint8_t x;
    sint8_t y;
} 
/* USER CODE END SC_JOYSTICK_SIGNALDATADEFINITION */
SC_JOYSTICK_data_t;

/* USER CODE START InitSC_JOYSTICK */
#define SC_JOYSTICK_INIT_DATA ((SC_JOYSTICK_data_t){0,0})
/* USER CODE END InitSC_JOYSTICK */


/**
 * Default IN driver API
 * \param SC_JOYSTICK_data_t *const data : [OUT] scaled data read from the driver
 * \return RC_SUCCESS is all was ok, error code otherwise
 */
RC_t SC_JOYSTICK_driverIn(SC_JOYSTICK_data_t *const data);




/* USER CODE START SC_JOYSTICK_USERFUNCTIONS */

/* USER CODE END SC_JOYSTICK_USERFUNCTIONS */


#endif