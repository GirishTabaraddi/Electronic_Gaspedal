/*******************************************************************************
* File Name: PWM_RGB_Led_PM.c
* Version 3.30
*
* Description:
*  This file provides the power management source code to API for the
*  PWM.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "PWM_RGB_Led.h"

static PWM_RGB_Led_backupStruct PWM_RGB_Led_backup;


/*******************************************************************************
* Function Name: PWM_RGB_Led_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_RGB_Led_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void PWM_RGB_Led_SaveConfig(void) 
{

    #if(!PWM_RGB_Led_UsingFixedFunction)
        #if(!PWM_RGB_Led_PWMModeIsCenterAligned)
            PWM_RGB_Led_backup.PWMPeriod = PWM_RGB_Led_ReadPeriod();
        #endif /* (!PWM_RGB_Led_PWMModeIsCenterAligned) */
        PWM_RGB_Led_backup.PWMUdb = PWM_RGB_Led_ReadCounter();
        #if (PWM_RGB_Led_UseStatus)
            PWM_RGB_Led_backup.InterruptMaskValue = PWM_RGB_Led_STATUS_MASK;
        #endif /* (PWM_RGB_Led_UseStatus) */

        #if(PWM_RGB_Led_DeadBandMode == PWM_RGB_Led__B_PWM__DBM_256_CLOCKS || \
            PWM_RGB_Led_DeadBandMode == PWM_RGB_Led__B_PWM__DBM_2_4_CLOCKS)
            PWM_RGB_Led_backup.PWMdeadBandValue = PWM_RGB_Led_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(PWM_RGB_Led_KillModeMinTime)
             PWM_RGB_Led_backup.PWMKillCounterPeriod = PWM_RGB_Led_ReadKillTime();
        #endif /* (PWM_RGB_Led_KillModeMinTime) */

        #if(PWM_RGB_Led_UseControl)
            PWM_RGB_Led_backup.PWMControlRegister = PWM_RGB_Led_ReadControlRegister();
        #endif /* (PWM_RGB_Led_UseControl) */
    #endif  /* (!PWM_RGB_Led_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: PWM_RGB_Led_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_RGB_Led_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_RGB_Led_RestoreConfig(void) 
{
        #if(!PWM_RGB_Led_UsingFixedFunction)
            #if(!PWM_RGB_Led_PWMModeIsCenterAligned)
                PWM_RGB_Led_WritePeriod(PWM_RGB_Led_backup.PWMPeriod);
            #endif /* (!PWM_RGB_Led_PWMModeIsCenterAligned) */

            PWM_RGB_Led_WriteCounter(PWM_RGB_Led_backup.PWMUdb);

            #if (PWM_RGB_Led_UseStatus)
                PWM_RGB_Led_STATUS_MASK = PWM_RGB_Led_backup.InterruptMaskValue;
            #endif /* (PWM_RGB_Led_UseStatus) */

            #if(PWM_RGB_Led_DeadBandMode == PWM_RGB_Led__B_PWM__DBM_256_CLOCKS || \
                PWM_RGB_Led_DeadBandMode == PWM_RGB_Led__B_PWM__DBM_2_4_CLOCKS)
                PWM_RGB_Led_WriteDeadTime(PWM_RGB_Led_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(PWM_RGB_Led_KillModeMinTime)
                PWM_RGB_Led_WriteKillTime(PWM_RGB_Led_backup.PWMKillCounterPeriod);
            #endif /* (PWM_RGB_Led_KillModeMinTime) */

            #if(PWM_RGB_Led_UseControl)
                PWM_RGB_Led_WriteControlRegister(PWM_RGB_Led_backup.PWMControlRegister);
            #endif /* (PWM_RGB_Led_UseControl) */
        #endif  /* (!PWM_RGB_Led_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: PWM_RGB_Led_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves the user configuration. Should be called
*  just prior to entering sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_RGB_Led_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void PWM_RGB_Led_Sleep(void) 
{
    #if(PWM_RGB_Led_UseControl)
        if(PWM_RGB_Led_CTRL_ENABLE == (PWM_RGB_Led_CONTROL & PWM_RGB_Led_CTRL_ENABLE))
        {
            /*Component is enabled */
            PWM_RGB_Led_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            PWM_RGB_Led_backup.PWMEnableState = 0u;
        }
    #endif /* (PWM_RGB_Led_UseControl) */

    /* Stop component */
    PWM_RGB_Led_Stop();

    /* Save registers configuration */
    PWM_RGB_Led_SaveConfig();
}


/*******************************************************************************
* Function Name: PWM_RGB_Led_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration. Should be called just after
*  awaking from sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_RGB_Led_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_RGB_Led_Wakeup(void) 
{
     /* Restore registers values */
    PWM_RGB_Led_RestoreConfig();

    if(PWM_RGB_Led_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        PWM_RGB_Led_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
