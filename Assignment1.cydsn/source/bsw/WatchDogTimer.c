/**
* \file <filename>
* \author <author-name>
* \date <date>
*
* \brief <Symbolic File name>
*
* \copyright Copyright �2016
* Department of electrical engineering and information technology, Hochschule Darmstadt - University of applied sciences (h_da). All Rights Reserved.
* Permission to use, copy, modify, and distribute this software and its documentation for educational, and research purposes in the context of non-commercial
* (unless permitted by h_da) and official h_da projects, is hereby granted for enrolled students of h_da, provided that the above copyright notice,
* this paragraph and the following paragraph appear in all copies, modifications, and distributions.
* Contact Prof.Dr.-Ing. Peter Fromm, peter.fromm@h-da.de, Birkenweg 8 64295 Darmstadt - GERMANY for commercial requests.
*
* \warning This software is a PROTOTYPE version and is not designed or intended for use in production, especially not for safety-critical applications!
* The user represents and warrants that it will NOT use or redistribute the Software for such purposes.
* This prototype is for research purposes only. This software is provided "AS IS," without a warranty of any kind.
*/

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/
#include "global.h"
#include <stdio.h>
#include <stdlib.h>
#include "WatchDogTimer.h"
/*****************************************************************************/
/* Local pre-processor symbols/macros ('#define')                            */
/*****************************************************************************/

/*****************************************************************************/
/* Global variable definitions (declared in header file with 'extern')       */
/*****************************************************************************/

/*****************************************************************************/
/* Local type definitions ('typedef')                                        */
/*****************************************************************************/

/*****************************************************************************/
/* Local variable definitions ('static')                                     */
/*****************************************************************************/


/*****************************************************************************/
/* Local function prototypes ('static')                                      */
/*****************************************************************************/
static uint8_t WD_RunnableAliveBitField;

/*****************************************************************************/
/* Function implementation - global ('extern') and local ('static')          */
/*****************************************************************************/

/**
* Activate the Watchdog Trigger
* \param WDT_TimeOut_t timeout - [IN] Timeout Period
* @return RC_SUCCESS
*/
RC_t WD_Start( WDT_TimeOut_t timeout)
{
    CyWdtStart(timeout, CYWDT_LPMODE_NOCHANGE);
    return RC_SUCCESS;
}

/**
* Service the Watchdog Trigger
* @return RC_SUCCESS
*/
RC_t WD_Trigger()
{
    if(WD_RunnableAliveBitField == 0x0f)
    {
        CyWdtClear();
        WD_RunnableAliveBitField = 0;
    }    
    return RC_SUCCESS;
}

/**
* Checks the watchdog bit
* @return TRUE if watchdog reset bit was set
*/
boolean_t WD_CheckResetBit()
{
    if(CyResetStatus & CY_RESET_WD)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/**
* This function sets the bit at the corresponding position.
* It is called by every runnable using a uniqe position.
* 0 = JoyStick_run, 1 = Control_run, 2 = Engine_run, 3 = brakelight_run
* @return RC_SUCCESS
*/
RC_t WD_Alive(uint8_t myBitPosition)
{
    WD_RunnableAliveBitField |= (1U) << myBitPosition;
    
    return RC_SUCCESS;
}