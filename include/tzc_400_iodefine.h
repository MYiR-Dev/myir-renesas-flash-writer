/**********************************************************************************************************************
 * DISCLAIMER
 * This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products. No
 * other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
 * applicable laws, including copyright laws.
 * THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
 * THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED. TO THE MAXIMUM
 * EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES
 * SHALL BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO
 * THIS SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 * Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability of
 * this software. By using this software, you agree to the additional terms and conditions found by accessing the
 * following link:
 * http://www.renesas.com/disclaimer
 *
 * Copyright (C) 2020 Renesas Electronics Corporation. All rights reserved.
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * File Name    : tzc_400_iodefine.h
 * Version      : 1.0
 * Description  : iodefine header file.
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * History : DD.MM.YYYY Version  Description
 *         : 01.09.2020 1.00     First Release
 *********************************************************************************************************************/

/**********************************************************************************************************************
 Includes   <System Includes> , "Project Includes"
 *********************************************************************************************************************/
#include <stdint.h>

/**********************************************************************************************************************
 Macro definitions
 *********************************************************************************************************************/
#ifndef TZC_400_IODEFINE_H
#define TZC_400_IODEFINE_H

#define _TZC_ASRAM_BASE_    (0x011040000ul)         /* Base address of TZC for ACPU SRAM */
#define _TZC_MSRAM_BASE_    (0x011050000ul)         /* Base address of TZC for MCPU SRAM */
#define _TZC_SPI_BASE_      (0x011060000ul)         /* Base address of TZC for SPI */
#define _TZC_DDR_BASE_      (0x011070000ul)         /* Base address of TZC for TZCDDR */

/*** Registers for ACPU SRAM ***/
#define TZC_GATE_KEEP_ASRAM     (*(volatile uint32_t *)( _TZC_ASRAM_BASE_ + 0x008ul ))  /* Gate Keeper register */
#define TZC_SPECUL_CTL_ASRAM    (*(volatile uint32_t *)( _TZC_ASRAM_BASE_ + 0x00Cul ))  /* Speculation control register */
#define TZC_RGN_ATTR_ASRAM      (*(volatile uint32_t *)( _TZC_ASRAM_BASE_ + 0x110ul ))  /* Region attributes register */
#define TZC_RGN_ID_ACC_ASRAM    (*(volatile uint32_t *)( _TZC_ASRAM_BASE_ + 0x114ul ))  /* Region ID access register */

/*** Registers for MCPU SRAM ***/
#define TZC_GATE_KEEP_MSRAM     (*(volatile uint32_t *)( _TZC_MSRAM_BASE_ + 0x008ul ))  /* Gate Keeper register */
#define TZC_SPECUL_CTL_MSRAM    (*(volatile uint32_t *)( _TZC_MSRAM_BASE_ + 0x00Cul ))  /* Speculation control register */
#define TZC_RGN_ATTR_MSRAM      (*(volatile uint32_t *)( _TZC_MSRAM_BASE_ + 0x110ul ))  /* Region attributes register */
#define TZC_RGN_ID_ACC_MSRAM    (*(volatile uint32_t *)( _TZC_MSRAM_BASE_ + 0x114ul ))  /* Region ID access register */

/*** Registers for SPI Multi ***/
#define TZC_GATE_KEEP_SPI       (*(volatile uint32_t *)( _TZC_SPI_BASE_   + 0x008ul ))  /* Gate Keeper register */
#define TZC_SPECUL_CTL_SPI      (*(volatile uint32_t *)( _TZC_SPI_BASE_   + 0x00Cul ))  /* Speculation control register */
#define TZC_RGN_ATTR_SPI        (*(volatile uint32_t *)( _TZC_SPI_BASE_   + 0x110ul ))  /* Region attributes register */
#define TZC_RGN_ID_ACC_SPI      (*(volatile uint32_t *)( _TZC_SPI_BASE_   + 0x114ul ))  /* Region ID access register */

/*** Registers for TZCDDR ***/
#define TZC_GATE_KEEP_TZCDDR    (*(volatile uint32_t *)( _TZC_DDR_BASE_   + 0x008ul ))  /* Gate Keeper register */
#define TZC_SPECUL_CTL_TZCDDR   (*(volatile uint32_t *)( _TZC_DDR_BASE_   + 0x00Cul ))  /* Speculation control register */
#define TZC_RGN_ATTR_TZCDDR     (*(volatile uint32_t *)( _TZC_DDR_BASE_   + 0x110ul ))  /* Region attributes register */
#define TZC_RGN_ID_ACC_TZCDDR   (*(volatile uint32_t *)( _TZC_DDR_BASE_   + 0x114ul ))  /* Region ID access register */

/*** Mask/Setting bit patter for registers ***/
#define TZC_GATE_KEEP_SET_BIT   (0x0000000Ful)      /* Setting bit pattern */
#define TZC_SPECUL_CTL_SET_BIT  (0x00000003ul)      /* Setting bit pattern */
#define TZC_RGN_ATTR_MSK        (0x0FFFFFFFul)      /* Mask bit pattern */
#define TZC_RGN_ID_ACC_SET_BIT  (0x000F000Ful)      /* Setting bit pattern */

#define TZC_GATE_KEEP_OPEN_ALLFLT       (0x0000000Ful)  /* Open all filter unit */
#define TZC_SPECUL_DIS_PREFETCH         (0x00000003ul)  /* Disable pre-fetch */
#define TZC_RGN_ATTR_EN_ALLFLT          (0x0000000Ful)  /* Enable all filter unit */
#define TZC_RGN_ID_ACC_EN_RDWR_NSAID0_1 (0x000F000Ful)  /* Enable NSAIDW<x>�F 0, 1, NSAIDR<x>�F 0, 1   */

/**********************************************************************************************************************
 Global Typedef definitions
 *********************************************************************************************************************/

/**********************************************************************************************************************
 External global variables
 *********************************************************************************************************************/

/**********************************************************************************************************************
 Exported global functions
 *********************************************************************************************************************/

#endif /* TZC_400_IODEFINE_H */
