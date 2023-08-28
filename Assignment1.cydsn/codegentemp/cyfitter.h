/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* RGB_G */
#define RGB_G__0__INTTYPE CYREG_PICU2_INTTYPE4
#define RGB_G__0__MASK 0x10u
#define RGB_G__0__PC CYREG_PRT2_PC4
#define RGB_G__0__PORT 2u
#define RGB_G__0__SHIFT 4u
#define RGB_G__AG CYREG_PRT2_AG
#define RGB_G__AMUX CYREG_PRT2_AMUX
#define RGB_G__BIE CYREG_PRT2_BIE
#define RGB_G__BIT_MASK CYREG_PRT2_BIT_MASK
#define RGB_G__BYP CYREG_PRT2_BYP
#define RGB_G__CTL CYREG_PRT2_CTL
#define RGB_G__DM0 CYREG_PRT2_DM0
#define RGB_G__DM1 CYREG_PRT2_DM1
#define RGB_G__DM2 CYREG_PRT2_DM2
#define RGB_G__DR CYREG_PRT2_DR
#define RGB_G__INP_DIS CYREG_PRT2_INP_DIS
#define RGB_G__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define RGB_G__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define RGB_G__LCD_EN CYREG_PRT2_LCD_EN
#define RGB_G__MASK 0x10u
#define RGB_G__PORT 2u
#define RGB_G__PRT CYREG_PRT2_PRT
#define RGB_G__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define RGB_G__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define RGB_G__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define RGB_G__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define RGB_G__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define RGB_G__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define RGB_G__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define RGB_G__PS CYREG_PRT2_PS
#define RGB_G__SHIFT 4u
#define RGB_G__SLW CYREG_PRT2_SLW

/* LED_red */
#define LED_red__0__INTTYPE CYREG_PICU0_INTTYPE6
#define LED_red__0__MASK 0x40u
#define LED_red__0__PC CYREG_PRT0_PC6
#define LED_red__0__PORT 0u
#define LED_red__0__SHIFT 6u
#define LED_red__AG CYREG_PRT0_AG
#define LED_red__AMUX CYREG_PRT0_AMUX
#define LED_red__BIE CYREG_PRT0_BIE
#define LED_red__BIT_MASK CYREG_PRT0_BIT_MASK
#define LED_red__BYP CYREG_PRT0_BYP
#define LED_red__CTL CYREG_PRT0_CTL
#define LED_red__DM0 CYREG_PRT0_DM0
#define LED_red__DM1 CYREG_PRT0_DM1
#define LED_red__DM2 CYREG_PRT0_DM2
#define LED_red__DR CYREG_PRT0_DR
#define LED_red__INP_DIS CYREG_PRT0_INP_DIS
#define LED_red__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define LED_red__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define LED_red__LCD_EN CYREG_PRT0_LCD_EN
#define LED_red__MASK 0x40u
#define LED_red__PORT 0u
#define LED_red__PRT CYREG_PRT0_PRT
#define LED_red__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define LED_red__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define LED_red__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define LED_red__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define LED_red__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define LED_red__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define LED_red__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define LED_red__PS CYREG_PRT0_PS
#define LED_red__SHIFT 6u
#define LED_red__SLW CYREG_PRT0_SLW

/* UART_LOG */
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B1_UDB08_09_ACTL
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B1_UDB08_09_CTL
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG CYREG_B1_UDB08_09_CTL
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG CYREG_B1_UDB08_09_CTL
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG CYREG_B1_UDB08_09_CTL
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG CYREG_B1_UDB08_09_MSK
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG CYREG_B1_UDB08_09_MSK
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG CYREG_B1_UDB08_09_MSK
#define UART_LOG_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B1_UDB08_09_MSK
#define UART_LOG_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_B1_UDB08_ACTL
#define UART_LOG_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_B1_UDB08_CTL
#define UART_LOG_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_B1_UDB08_ST_CTL
#define UART_LOG_BUART_sRX_RxBitCounter__COUNT_REG CYREG_B1_UDB08_CTL
#define UART_LOG_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_B1_UDB08_ST_CTL
#define UART_LOG_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_LOG_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_LOG_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_B1_UDB08_MSK
#define UART_LOG_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB08_09_ACTL
#define UART_LOG_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG CYREG_B1_UDB08_09_ST
#define UART_LOG_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_B1_UDB08_MSK
#define UART_LOG_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_LOG_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_LOG_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_B1_UDB08_ACTL
#define UART_LOG_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_B1_UDB08_ST_CTL
#define UART_LOG_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_B1_UDB08_ST_CTL
#define UART_LOG_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_B1_UDB08_ST
#define UART_LOG_BUART_sRX_RxShifter_u0__16BIT_A0_REG CYREG_B1_UDB08_09_A0
#define UART_LOG_BUART_sRX_RxShifter_u0__16BIT_A1_REG CYREG_B1_UDB08_09_A1
#define UART_LOG_BUART_sRX_RxShifter_u0__16BIT_D0_REG CYREG_B1_UDB08_09_D0
#define UART_LOG_BUART_sRX_RxShifter_u0__16BIT_D1_REG CYREG_B1_UDB08_09_D1
#define UART_LOG_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB08_09_ACTL
#define UART_LOG_BUART_sRX_RxShifter_u0__16BIT_F0_REG CYREG_B1_UDB08_09_F0
#define UART_LOG_BUART_sRX_RxShifter_u0__16BIT_F1_REG CYREG_B1_UDB08_09_F1
#define UART_LOG_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_B1_UDB08_A0_A1
#define UART_LOG_BUART_sRX_RxShifter_u0__A0_REG CYREG_B1_UDB08_A0
#define UART_LOG_BUART_sRX_RxShifter_u0__A1_REG CYREG_B1_UDB08_A1
#define UART_LOG_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_B1_UDB08_D0_D1
#define UART_LOG_BUART_sRX_RxShifter_u0__D0_REG CYREG_B1_UDB08_D0
#define UART_LOG_BUART_sRX_RxShifter_u0__D1_REG CYREG_B1_UDB08_D1
#define UART_LOG_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_B1_UDB08_ACTL
#define UART_LOG_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_B1_UDB08_F0_F1
#define UART_LOG_BUART_sRX_RxShifter_u0__F0_REG CYREG_B1_UDB08_F0
#define UART_LOG_BUART_sRX_RxShifter_u0__F1_REG CYREG_B1_UDB08_F1
#define UART_LOG_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_LOG_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG CYREG_B1_UDB08_MSK_ACTL
#define UART_LOG_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB08_09_ACTL
#define UART_LOG_BUART_sRX_RxSts__16BIT_STATUS_REG CYREG_B0_UDB08_09_ST
#define UART_LOG_BUART_sRX_RxSts__3__MASK 0x08u
#define UART_LOG_BUART_sRX_RxSts__3__POS 3
#define UART_LOG_BUART_sRX_RxSts__4__MASK 0x10u
#define UART_LOG_BUART_sRX_RxSts__4__POS 4
#define UART_LOG_BUART_sRX_RxSts__5__MASK 0x20u
#define UART_LOG_BUART_sRX_RxSts__5__POS 5
#define UART_LOG_BUART_sRX_RxSts__MASK 0x38u
#define UART_LOG_BUART_sRX_RxSts__MASK_REG CYREG_B0_UDB08_MSK
#define UART_LOG_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB08_ACTL
#define UART_LOG_BUART_sRX_RxSts__STATUS_REG CYREG_B0_UDB08_ST
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B0_UDB14_15_A0
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B0_UDB14_15_A1
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B0_UDB14_15_D0
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B0_UDB14_15_D1
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB14_15_ACTL
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B0_UDB14_15_F0
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B0_UDB14_15_F1
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B0_UDB14_A0_A1
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B0_UDB14_A0
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B0_UDB14_A1
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B0_UDB14_D0_D1
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B0_UDB14_D0
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B0_UDB14_D1
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B0_UDB14_ACTL
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B0_UDB14_F0_F1
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B0_UDB14_F0
#define UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B0_UDB14_F1
#define UART_LOG_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_B0_UDB10_11_A0
#define UART_LOG_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_B0_UDB10_11_A1
#define UART_LOG_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_B0_UDB10_11_D0
#define UART_LOG_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_B0_UDB10_11_D1
#define UART_LOG_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB10_11_ACTL
#define UART_LOG_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_B0_UDB10_11_F0
#define UART_LOG_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_B0_UDB10_11_F1
#define UART_LOG_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B0_UDB10_A0_A1
#define UART_LOG_BUART_sTX_TxShifter_u0__A0_REG CYREG_B0_UDB10_A0
#define UART_LOG_BUART_sTX_TxShifter_u0__A1_REG CYREG_B0_UDB10_A1
#define UART_LOG_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B0_UDB10_D0_D1
#define UART_LOG_BUART_sTX_TxShifter_u0__D0_REG CYREG_B0_UDB10_D0
#define UART_LOG_BUART_sTX_TxShifter_u0__D1_REG CYREG_B0_UDB10_D1
#define UART_LOG_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB10_ACTL
#define UART_LOG_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B0_UDB10_F0_F1
#define UART_LOG_BUART_sTX_TxShifter_u0__F0_REG CYREG_B0_UDB10_F0
#define UART_LOG_BUART_sTX_TxShifter_u0__F1_REG CYREG_B0_UDB10_F1
#define UART_LOG_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_LOG_BUART_sTX_TxSts__0__POS 0
#define UART_LOG_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_LOG_BUART_sTX_TxSts__1__POS 1
#define UART_LOG_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB14_15_ACTL
#define UART_LOG_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B0_UDB14_15_ST
#define UART_LOG_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_LOG_BUART_sTX_TxSts__2__POS 2
#define UART_LOG_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_LOG_BUART_sTX_TxSts__3__POS 3
#define UART_LOG_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_LOG_BUART_sTX_TxSts__MASK_REG CYREG_B0_UDB14_MSK
#define UART_LOG_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB14_ACTL
#define UART_LOG_BUART_sTX_TxSts__STATUS_REG CYREG_B0_UDB14_ST
#define UART_LOG_IntClock__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define UART_LOG_IntClock__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define UART_LOG_IntClock__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define UART_LOG_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define UART_LOG_IntClock__INDEX 0x01u
#define UART_LOG_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define UART_LOG_IntClock__PM_ACT_MSK 0x02u
#define UART_LOG_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define UART_LOG_IntClock__PM_STBY_MSK 0x02u

/* PWM_Clock */
#define PWM_Clock__CFG0 CYREG_CLKDIST_DCFG2_CFG0
#define PWM_Clock__CFG1 CYREG_CLKDIST_DCFG2_CFG1
#define PWM_Clock__CFG2 CYREG_CLKDIST_DCFG2_CFG2
#define PWM_Clock__CFG2_SRC_SEL_MASK 0x07u
#define PWM_Clock__INDEX 0x02u
#define PWM_Clock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define PWM_Clock__PM_ACT_MSK 0x04u
#define PWM_Clock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define PWM_Clock__PM_STBY_MSK 0x04u

/* JOYSTICK_X */
#define JOYSTICK_X__0__INTTYPE CYREG_PICU0_INTTYPE0
#define JOYSTICK_X__0__MASK 0x01u
#define JOYSTICK_X__0__PC CYREG_PRT0_PC0
#define JOYSTICK_X__0__PORT 0u
#define JOYSTICK_X__0__SHIFT 0u
#define JOYSTICK_X__AG CYREG_PRT0_AG
#define JOYSTICK_X__AMUX CYREG_PRT0_AMUX
#define JOYSTICK_X__BIE CYREG_PRT0_BIE
#define JOYSTICK_X__BIT_MASK CYREG_PRT0_BIT_MASK
#define JOYSTICK_X__BYP CYREG_PRT0_BYP
#define JOYSTICK_X__CTL CYREG_PRT0_CTL
#define JOYSTICK_X__DM0 CYREG_PRT0_DM0
#define JOYSTICK_X__DM1 CYREG_PRT0_DM1
#define JOYSTICK_X__DM2 CYREG_PRT0_DM2
#define JOYSTICK_X__DR CYREG_PRT0_DR
#define JOYSTICK_X__INP_DIS CYREG_PRT0_INP_DIS
#define JOYSTICK_X__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define JOYSTICK_X__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define JOYSTICK_X__LCD_EN CYREG_PRT0_LCD_EN
#define JOYSTICK_X__MASK 0x01u
#define JOYSTICK_X__PORT 0u
#define JOYSTICK_X__PRT CYREG_PRT0_PRT
#define JOYSTICK_X__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define JOYSTICK_X__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define JOYSTICK_X__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define JOYSTICK_X__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define JOYSTICK_X__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define JOYSTICK_X__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define JOYSTICK_X__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define JOYSTICK_X__PS CYREG_PRT0_PS
#define JOYSTICK_X__SHIFT 0u
#define JOYSTICK_X__SLW CYREG_PRT0_SLW

/* JOYSTICK_Y */
#define JOYSTICK_Y__0__INTTYPE CYREG_PICU0_INTTYPE1
#define JOYSTICK_Y__0__MASK 0x02u
#define JOYSTICK_Y__0__PC CYREG_PRT0_PC1
#define JOYSTICK_Y__0__PORT 0u
#define JOYSTICK_Y__0__SHIFT 1u
#define JOYSTICK_Y__AG CYREG_PRT0_AG
#define JOYSTICK_Y__AMUX CYREG_PRT0_AMUX
#define JOYSTICK_Y__BIE CYREG_PRT0_BIE
#define JOYSTICK_Y__BIT_MASK CYREG_PRT0_BIT_MASK
#define JOYSTICK_Y__BYP CYREG_PRT0_BYP
#define JOYSTICK_Y__CTL CYREG_PRT0_CTL
#define JOYSTICK_Y__DM0 CYREG_PRT0_DM0
#define JOYSTICK_Y__DM1 CYREG_PRT0_DM1
#define JOYSTICK_Y__DM2 CYREG_PRT0_DM2
#define JOYSTICK_Y__DR CYREG_PRT0_DR
#define JOYSTICK_Y__INP_DIS CYREG_PRT0_INP_DIS
#define JOYSTICK_Y__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define JOYSTICK_Y__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define JOYSTICK_Y__LCD_EN CYREG_PRT0_LCD_EN
#define JOYSTICK_Y__MASK 0x02u
#define JOYSTICK_Y__PORT 0u
#define JOYSTICK_Y__PRT CYREG_PRT0_PRT
#define JOYSTICK_Y__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define JOYSTICK_Y__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define JOYSTICK_Y__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define JOYSTICK_Y__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define JOYSTICK_Y__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define JOYSTICK_Y__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define JOYSTICK_Y__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define JOYSTICK_Y__PS CYREG_PRT0_PS
#define JOYSTICK_Y__SHIFT 1u
#define JOYSTICK_Y__SLW CYREG_PRT0_SLW

/* Rx_UARTLOG */
#define Rx_UARTLOG__0__INTTYPE CYREG_PICU12_INTTYPE6
#define Rx_UARTLOG__0__MASK 0x40u
#define Rx_UARTLOG__0__PC CYREG_PRT12_PC6
#define Rx_UARTLOG__0__PORT 12u
#define Rx_UARTLOG__0__SHIFT 6u
#define Rx_UARTLOG__AG CYREG_PRT12_AG
#define Rx_UARTLOG__BIE CYREG_PRT12_BIE
#define Rx_UARTLOG__BIT_MASK CYREG_PRT12_BIT_MASK
#define Rx_UARTLOG__BYP CYREG_PRT12_BYP
#define Rx_UARTLOG__DM0 CYREG_PRT12_DM0
#define Rx_UARTLOG__DM1 CYREG_PRT12_DM1
#define Rx_UARTLOG__DM2 CYREG_PRT12_DM2
#define Rx_UARTLOG__DR CYREG_PRT12_DR
#define Rx_UARTLOG__INP_DIS CYREG_PRT12_INP_DIS
#define Rx_UARTLOG__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define Rx_UARTLOG__MASK 0x40u
#define Rx_UARTLOG__PORT 12u
#define Rx_UARTLOG__PRT CYREG_PRT12_PRT
#define Rx_UARTLOG__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define Rx_UARTLOG__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define Rx_UARTLOG__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define Rx_UARTLOG__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define Rx_UARTLOG__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define Rx_UARTLOG__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define Rx_UARTLOG__PS CYREG_PRT12_PS
#define Rx_UARTLOG__SHIFT 6u
#define Rx_UARTLOG__SIO_CFG CYREG_PRT12_SIO_CFG
#define Rx_UARTLOG__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define Rx_UARTLOG__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define Rx_UARTLOG__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define Rx_UARTLOG__SLW CYREG_PRT12_SLW

/* WDT_Button */
#define WDT_Button__0__INTTYPE CYREG_PICU0_INTTYPE3
#define WDT_Button__0__MASK 0x08u
#define WDT_Button__0__PC CYREG_PRT0_PC3
#define WDT_Button__0__PORT 0u
#define WDT_Button__0__SHIFT 3u
#define WDT_Button__AG CYREG_PRT0_AG
#define WDT_Button__AMUX CYREG_PRT0_AMUX
#define WDT_Button__BIE CYREG_PRT0_BIE
#define WDT_Button__BIT_MASK CYREG_PRT0_BIT_MASK
#define WDT_Button__BYP CYREG_PRT0_BYP
#define WDT_Button__CTL CYREG_PRT0_CTL
#define WDT_Button__DM0 CYREG_PRT0_DM0
#define WDT_Button__DM1 CYREG_PRT0_DM1
#define WDT_Button__DM2 CYREG_PRT0_DM2
#define WDT_Button__DR CYREG_PRT0_DR
#define WDT_Button__INP_DIS CYREG_PRT0_INP_DIS
#define WDT_Button__INTSTAT CYREG_PICU0_INTSTAT
#define WDT_Button__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define WDT_Button__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define WDT_Button__LCD_EN CYREG_PRT0_LCD_EN
#define WDT_Button__MASK 0x08u
#define WDT_Button__PORT 0u
#define WDT_Button__PRT CYREG_PRT0_PRT
#define WDT_Button__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define WDT_Button__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define WDT_Button__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define WDT_Button__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define WDT_Button__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define WDT_Button__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define WDT_Button__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define WDT_Button__PS CYREG_PRT0_PS
#define WDT_Button__SHIFT 3u
#define WDT_Button__SLW CYREG_PRT0_SLW
#define WDT_Button__SNAP CYREG_PICU0_SNAP

/* isr_button */
#define isr_button__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define isr_button__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define isr_button__INTC_MASK 0x10u
#define isr_button__INTC_NUMBER 4u
#define isr_button__INTC_PRIOR_NUM 7u
#define isr_button__INTC_PRIOR_REG CYREG_NVIC_PRI_4
#define isr_button__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define isr_button__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* TX_DEBUGLOG */
#define TX_DEBUGLOG__0__INTTYPE CYREG_PICU12_INTTYPE7
#define TX_DEBUGLOG__0__MASK 0x80u
#define TX_DEBUGLOG__0__PC CYREG_PRT12_PC7
#define TX_DEBUGLOG__0__PORT 12u
#define TX_DEBUGLOG__0__SHIFT 7u
#define TX_DEBUGLOG__AG CYREG_PRT12_AG
#define TX_DEBUGLOG__BIE CYREG_PRT12_BIE
#define TX_DEBUGLOG__BIT_MASK CYREG_PRT12_BIT_MASK
#define TX_DEBUGLOG__BYP CYREG_PRT12_BYP
#define TX_DEBUGLOG__DM0 CYREG_PRT12_DM0
#define TX_DEBUGLOG__DM1 CYREG_PRT12_DM1
#define TX_DEBUGLOG__DM2 CYREG_PRT12_DM2
#define TX_DEBUGLOG__DR CYREG_PRT12_DR
#define TX_DEBUGLOG__INP_DIS CYREG_PRT12_INP_DIS
#define TX_DEBUGLOG__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define TX_DEBUGLOG__MASK 0x80u
#define TX_DEBUGLOG__PORT 12u
#define TX_DEBUGLOG__PRT CYREG_PRT12_PRT
#define TX_DEBUGLOG__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define TX_DEBUGLOG__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define TX_DEBUGLOG__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define TX_DEBUGLOG__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define TX_DEBUGLOG__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define TX_DEBUGLOG__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define TX_DEBUGLOG__PS CYREG_PRT12_PS
#define TX_DEBUGLOG__SHIFT 7u
#define TX_DEBUGLOG__SIO_CFG CYREG_PRT12_SIO_CFG
#define TX_DEBUGLOG__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define TX_DEBUGLOG__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define TX_DEBUGLOG__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define TX_DEBUGLOG__SLW CYREG_PRT12_SLW

/* RGB_PWM_green */
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB13_14_ACTL
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB13_14_CTL
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB13_14_CTL
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB13_14_CTL
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB13_14_CTL
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG CYREG_B0_UDB13_14_MSK
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB13_14_MSK
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB13_14_MSK
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB13_14_MSK
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__7__MASK 0x80u
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__7__POS 7
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG CYREG_B0_UDB13_ACTL
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__CONTROL_REG CYREG_B0_UDB13_CTL
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG CYREG_B0_UDB13_ST_CTL
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__COUNT_REG CYREG_B0_UDB13_CTL
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG CYREG_B0_UDB13_ST_CTL
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__MASK 0x80u
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB13_MSK_ACTL
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB13_MSK_ACTL
#define RGB_PWM_green_PWMUDB_genblk1_ctrlreg__PERIOD_REG CYREG_B0_UDB13_MSK
#define RGB_PWM_green_PWMUDB_genblk8_stsreg__0__MASK 0x01u
#define RGB_PWM_green_PWMUDB_genblk8_stsreg__0__POS 0
#define RGB_PWM_green_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB13_14_ACTL
#define RGB_PWM_green_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG CYREG_B0_UDB13_14_ST
#define RGB_PWM_green_PWMUDB_genblk8_stsreg__2__MASK 0x04u
#define RGB_PWM_green_PWMUDB_genblk8_stsreg__2__POS 2
#define RGB_PWM_green_PWMUDB_genblk8_stsreg__3__MASK 0x08u
#define RGB_PWM_green_PWMUDB_genblk8_stsreg__3__POS 3
#define RGB_PWM_green_PWMUDB_genblk8_stsreg__MASK 0x0Du
#define RGB_PWM_green_PWMUDB_genblk8_stsreg__MASK_REG CYREG_B0_UDB13_MSK
#define RGB_PWM_green_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG CYREG_B0_UDB13_MSK_ACTL
#define RGB_PWM_green_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG CYREG_B0_UDB13_MSK_ACTL
#define RGB_PWM_green_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG CYREG_B0_UDB13_ACTL
#define RGB_PWM_green_PWMUDB_genblk8_stsreg__STATUS_CNT_REG CYREG_B0_UDB13_ST_CTL
#define RGB_PWM_green_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG CYREG_B0_UDB13_ST_CTL
#define RGB_PWM_green_PWMUDB_genblk8_stsreg__STATUS_REG CYREG_B0_UDB13_ST
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG CYREG_B0_UDB13_14_A0
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG CYREG_B0_UDB13_14_A1
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG CYREG_B0_UDB13_14_D0
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG CYREG_B0_UDB13_14_D1
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB13_14_ACTL
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG CYREG_B0_UDB13_14_F0
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG CYREG_B0_UDB13_14_F1
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__A0_A1_REG CYREG_B0_UDB13_A0_A1
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__A0_REG CYREG_B0_UDB13_A0
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__A1_REG CYREG_B0_UDB13_A1
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__D0_D1_REG CYREG_B0_UDB13_D0_D1
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__D0_REG CYREG_B0_UDB13_D0
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__D1_REG CYREG_B0_UDB13_D1
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG CYREG_B0_UDB13_ACTL
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__F0_F1_REG CYREG_B0_UDB13_F0_F1
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__F0_REG CYREG_B0_UDB13_F0
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__F1_REG CYREG_B0_UDB13_F1
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG CYREG_B0_UDB13_MSK_ACTL
#define RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG CYREG_B0_UDB13_MSK_ACTL

/* JOYSTICK_ADC_XY */
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB07_08_ACTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB07_08_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB07_08_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB07_08_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB07_08_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB07_08_MSK
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB07_08_MSK
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB07_08_MSK
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB07_08_MSK
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB07_ACTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__CONTROL_REG CYREG_B0_UDB07_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__CONTROL_ST_REG CYREG_B0_UDB07_ST_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__COUNT_REG CYREG_B0_UDB07_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__COUNT_ST_REG CYREG_B0_UDB07_ST_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB07_MSK_ACTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB07_MSK_ACTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter__PERIOD_REG CYREG_B0_UDB07_MSK
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB07_08_ACTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB07_08_ST
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter_ST__MASK_REG CYREG_B0_UDB07_MSK
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB07_MSK_ACTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB07_MSK_ACTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB07_ACTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter_ST__STATUS_CNT_REG CYREG_B0_UDB07_ST_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB07_ST_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_ChannelCounter_ST__STATUS_REG CYREG_B0_UDB07_ST
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__0__MASK 0x01u
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__0__POS 0
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__1__MASK 0x02u
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__1__POS 1
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__16BIT_CONTROL_AUX_CTL_REG CYREG_B1_UDB07_08_ACTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__16BIT_CONTROL_CONTROL_REG CYREG_B1_UDB07_08_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__16BIT_CONTROL_COUNT_REG CYREG_B1_UDB07_08_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__16BIT_COUNT_CONTROL_REG CYREG_B1_UDB07_08_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__16BIT_COUNT_COUNT_REG CYREG_B1_UDB07_08_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__16BIT_MASK_MASK_REG CYREG_B1_UDB07_08_MSK
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__16BIT_MASK_PERIOD_REG CYREG_B1_UDB07_08_MSK
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__16BIT_PERIOD_MASK_REG CYREG_B1_UDB07_08_MSK
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__16BIT_PERIOD_PERIOD_REG CYREG_B1_UDB07_08_MSK
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__CONTROL_AUX_CTL_REG CYREG_B1_UDB07_ACTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__CONTROL_REG CYREG_B1_UDB07_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__CONTROL_ST_REG CYREG_B1_UDB07_ST_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__COUNT_REG CYREG_B1_UDB07_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__COUNT_ST_REG CYREG_B1_UDB07_ST_CTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__MASK 0x03u
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__MASK_CTL_AUX_CTL_REG CYREG_B1_UDB07_MSK_ACTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__PER_CTL_AUX_CTL_REG CYREG_B1_UDB07_MSK_ACTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_CtrlReg__PERIOD_REG CYREG_B1_UDB07_MSK
#define JOYSTICK_ADC_XY_bSAR_SEQ_EOCSts__0__MASK 0x01u
#define JOYSTICK_ADC_XY_bSAR_SEQ_EOCSts__0__POS 0
#define JOYSTICK_ADC_XY_bSAR_SEQ_EOCSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB11_12_ACTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_EOCSts__16BIT_STATUS_REG CYREG_B0_UDB11_12_ST
#define JOYSTICK_ADC_XY_bSAR_SEQ_EOCSts__MASK 0x01u
#define JOYSTICK_ADC_XY_bSAR_SEQ_EOCSts__MASK_REG CYREG_B0_UDB11_MSK
#define JOYSTICK_ADC_XY_bSAR_SEQ_EOCSts__STATUS_AUX_CTL_REG CYREG_B0_UDB11_ACTL
#define JOYSTICK_ADC_XY_bSAR_SEQ_EOCSts__STATUS_REG CYREG_B0_UDB11_ST
#define JOYSTICK_ADC_XY_FinalBuf__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define JOYSTICK_ADC_XY_FinalBuf__DRQ_NUMBER 0u
#define JOYSTICK_ADC_XY_FinalBuf__NUMBEROF_TDS 0u
#define JOYSTICK_ADC_XY_FinalBuf__PRIORITY 2u
#define JOYSTICK_ADC_XY_FinalBuf__TERMIN_EN 0u
#define JOYSTICK_ADC_XY_FinalBuf__TERMIN_SEL 0u
#define JOYSTICK_ADC_XY_FinalBuf__TERMOUT0_EN 1u
#define JOYSTICK_ADC_XY_FinalBuf__TERMOUT0_SEL 0u
#define JOYSTICK_ADC_XY_FinalBuf__TERMOUT1_EN 0u
#define JOYSTICK_ADC_XY_FinalBuf__TERMOUT1_SEL 0u
#define JOYSTICK_ADC_XY_IntClock__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define JOYSTICK_ADC_XY_IntClock__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define JOYSTICK_ADC_XY_IntClock__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define JOYSTICK_ADC_XY_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define JOYSTICK_ADC_XY_IntClock__INDEX 0x00u
#define JOYSTICK_ADC_XY_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define JOYSTICK_ADC_XY_IntClock__PM_ACT_MSK 0x01u
#define JOYSTICK_ADC_XY_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define JOYSTICK_ADC_XY_IntClock__PM_STBY_MSK 0x01u
#define JOYSTICK_ADC_XY_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define JOYSTICK_ADC_XY_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define JOYSTICK_ADC_XY_IRQ__INTC_MASK 0x01u
#define JOYSTICK_ADC_XY_IRQ__INTC_NUMBER 0u
#define JOYSTICK_ADC_XY_IRQ__INTC_PRIOR_NUM 7u
#define JOYSTICK_ADC_XY_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define JOYSTICK_ADC_XY_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define JOYSTICK_ADC_XY_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__CLK CYREG_SAR0_CLK
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__CSR0 CYREG_SAR0_CSR0
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__CSR1 CYREG_SAR0_CSR1
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__CSR2 CYREG_SAR0_CSR2
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__CSR3 CYREG_SAR0_CSR3
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__CSR4 CYREG_SAR0_CSR4
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__CSR5 CYREG_SAR0_CSR5
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__CSR6 CYREG_SAR0_CSR6
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__PM_ACT_CFG CYREG_PM_ACT_CFG11
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__PM_ACT_MSK 0x01u
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__PM_STBY_CFG CYREG_PM_STBY_CFG11
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__PM_STBY_MSK 0x01u
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__SW0 CYREG_SAR0_SW0
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__SW2 CYREG_SAR0_SW2
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__SW3 CYREG_SAR0_SW3
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__SW4 CYREG_SAR0_SW4
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__SW6 CYREG_SAR0_SW6
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__TR0 CYREG_SAR0_TR0
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__WRK0 CYREG_SAR0_WRK0
#define JOYSTICK_ADC_XY_SAR_ADC_SAR__WRK1 CYREG_SAR0_WRK1
#define JOYSTICK_ADC_XY_TempBuf__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define JOYSTICK_ADC_XY_TempBuf__DRQ_NUMBER 1u
#define JOYSTICK_ADC_XY_TempBuf__NUMBEROF_TDS 0u
#define JOYSTICK_ADC_XY_TempBuf__PRIORITY 2u
#define JOYSTICK_ADC_XY_TempBuf__TERMIN_EN 0u
#define JOYSTICK_ADC_XY_TempBuf__TERMIN_SEL 0u
#define JOYSTICK_ADC_XY_TempBuf__TERMOUT0_EN 1u
#define JOYSTICK_ADC_XY_TempBuf__TERMOUT0_SEL 1u
#define JOYSTICK_ADC_XY_TempBuf__TERMOUT1_EN 0u
#define JOYSTICK_ADC_XY_TempBuf__TERMOUT1_SEL 0u

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "Assignment1"
#define CY_VERSION "PSoC Creator  4.4"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 26u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 26u
#define CYDEV_CHIP_MEMBER_4AA 25u
#define CYDEV_CHIP_MEMBER_4AB 30u
#define CYDEV_CHIP_MEMBER_4AC 14u
#define CYDEV_CHIP_MEMBER_4AD 15u
#define CYDEV_CHIP_MEMBER_4AE 16u
#define CYDEV_CHIP_MEMBER_4D 20u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 27u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 24u
#define CYDEV_CHIP_MEMBER_4I 32u
#define CYDEV_CHIP_MEMBER_4J 21u
#define CYDEV_CHIP_MEMBER_4K 22u
#define CYDEV_CHIP_MEMBER_4L 31u
#define CYDEV_CHIP_MEMBER_4M 29u
#define CYDEV_CHIP_MEMBER_4N 11u
#define CYDEV_CHIP_MEMBER_4O 8u
#define CYDEV_CHIP_MEMBER_4P 28u
#define CYDEV_CHIP_MEMBER_4Q 17u
#define CYDEV_CHIP_MEMBER_4R 9u
#define CYDEV_CHIP_MEMBER_4S 12u
#define CYDEV_CHIP_MEMBER_4T 10u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 23u
#define CYDEV_CHIP_MEMBER_4W 13u
#define CYDEV_CHIP_MEMBER_4X 7u
#define CYDEV_CHIP_MEMBER_4Y 18u
#define CYDEV_CHIP_MEMBER_4Z 19u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 33u
#define CYDEV_CHIP_MEMBER_FM3 37u
#define CYDEV_CHIP_MEMBER_FM4 38u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 34u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 35u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 36u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4AA_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AB_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AC_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AD_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AE_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4W_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4X_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Z_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_Disable
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x1AC
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000001u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000003u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
