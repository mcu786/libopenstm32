/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2009 Piotr Esden-Tempski <piotr@esden.net>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBOPENCM3_TIMER_H
#define LIBOPENCM3_TIMER_H

#include <libopencm3/stm32/memorymap.h>
#include <libopencm3/cm3/common.h>

/* --- Convenience macros -------------------------------------------------- */

/* Timer register base adresses (for convenience) */
#define TIM1                            TIM1_BASE
#define TIM2                            TIM2_BASE
#define TIM3                            TIM3_BASE
#define TIM4                            TIM4_BASE
#define TIM5                            TIM5_BASE
#define TIM6                            TIM6_BASE
#define TIM7                            TIM7_BASE
#define TIM8                            TIM8_BASE

/* --- Timer registers ----------------------------------------------------- */

/* Control register 1 (TIMx_CR1) */
#define TIM_CR1(tim_base)               MMIO32(tim_base + 0x00)
#define TIM1_CR1                        TIM_CR1(TIM1)
#define TIM2_CR1                        TIM_CR1(TIM2)
#define TIM3_CR1                        TIM_CR1(TIM3)
#define TIM4_CR1                        TIM_CR1(TIM4)
#define TIM5_CR1                        TIM_CR1(TIM5)
#define TIM6_CR1                        TIM_CR1(TIM6)
#define TIM7_CR1                        TIM_CR1(TIM7)
#define TIM8_CR1                        TIM_CR1(TIM8)

/* Control register 2 (TIMx_CR2) */
#define TIM_CR2(tim_base)               MMIO32(tim_base + 0x04)
#define TIM1_CR2                        TIM_CR2(TIM1)
#define TIM2_CR2                        TIM_CR2(TIM2)
#define TIM3_CR2                        TIM_CR2(TIM3)
#define TIM4_CR2                        TIM_CR2(TIM4)
#define TIM5_CR2                        TIM_CR2(TIM5)
#define TIM6_CR2                        TIM_CR2(TIM6)
#define TIM7_CR2                        TIM_CR2(TIM7)
#define TIM8_CR2                        TIM_CR2(TIM8)

/* Slave mode control register (TIMx_SMCR) */
#define TIM_SMCR(tim_base)              MMIO32(tim_base + 0x08)
#define TIM1_SMCR                       TIM_SMCR(TIM1)
#define TIM2_SMCR                       TIM_SMCR(TIM2)
#define TIM3_SMCR                       TIM_SMCR(TIM3)
#define TIM4_SMCR                       TIM_SMCR(TIM4)
#define TIM5_SMCR                       TIM_SMCR(TIM5)
#define TIM8_SMCR                       TIM_SMCR(TIM8)

/* DMA/Interrupt enable register (TIMx_DIER) */
#define TIM_DIER(tim_base)              MMIO32(tim_base + 0x0C)
#define TIM1_DIER                       TIM_DIER(TIM1)
#define TIM2_DIER                       TIM_DIER(TIM2)
#define TIM3_DIER                       TIM_DIER(TIM3)
#define TIM4_DIER                       TIM_DIER(TIM4)
#define TIM5_DIER                       TIM_DIER(TIM5)
#define TIM6_DIER                       TIM_DIER(TIM6)
#define TIM7_DIER                       TIM_DIER(TIM7)
#define TIM8_DIER                       TIM_DIER(TIM8)

/* Status register (TIMx_SR) */
#define TIM_SR(tim_base)                MMIO32(tim_base + 0x10)
#define TIM1_SR                         TIM_SR(TIM1)
#define TIM2_SR                         TIM_SR(TIM2)
#define TIM3_SR                         TIM_SR(TIM3)
#define TIM4_SR                         TIM_SR(TIM4)
#define TIM5_SR                         TIM_SR(TIM5)
#define TIM6_SR                         TIM_SR(TIM6)
#define TIM7_SR                         TIM_SR(TIM7)
#define TIM8_SR                         TIM_SR(TIM8)

/* Event generation register (TIMx_EGR) */
#define TIM_EGR(tim_base)               MMIO32(tim_base + 0x14)
#define TIM1_EGR                        TIM_EGR(TIM1)
#define TIM2_EGR                        TIM_EGR(TIM2)
#define TIM3_EGR                        TIM_EGR(TIM3)
#define TIM4_EGR                        TIM_EGR(TIM4)
#define TIM5_EGR                        TIM_EGR(TIM5)
#define TIM6_EGR                        TIM_EGR(TIM6)
#define TIM7_EGR                        TIM_EGR(TIM7)
#define TIM8_EGR                        TIM_EGR(TIM8)

/* Capture/compare mode register 1 (TIMx_CCMR1) */
#define TIM_CCMR1(tim_base)             MMIO32(tim_base + 0x18)
#define TIM1_CCMR1                      TIM_CCMR1(TIM1)
#define TIM2_CCMR1                      TIM_CCMR1(TIM2)
#define TIM3_CCMR1                      TIM_CCMR1(TIM3)
#define TIM4_CCMR1                      TIM_CCMR1(TIM4)
#define TIM5_CCMR1                      TIM_CCMR1(TIM5)
#define TIM8_CCMR1                      TIM_CCMR1(TIM8)

/* Capture/compare mode register 2 (TIMx_CCMR2) */
#define TIM_CCMR2(tim_base)             MMIO32(tim_base + 0x1C)
#define TIM1_CCMR2                      TIM_CCMR2(TIM1)
#define TIM2_CCMR2                      TIM_CCMR2(TIM2)
#define TIM3_CCMR2                      TIM_CCMR2(TIM3)
#define TIM4_CCMR2                      TIM_CCMR2(TIM4)
#define TIM5_CCMR2                      TIM_CCMR2(TIM5)
#define TIM8_CCMR2                      TIM_CCMR2(TIM8)

/* Capture/compare enable register (TIMx_CCER) */
#define TIM_CCER(tim_base)              MMIO32(tim_base + 0x20)
#define TIM1_CCER                       TIM_CCER(TIM1)
#define TIM2_CCER                       TIM_CCER(TIM2)
#define TIM3_CCER                       TIM_CCER(TIM3)
#define TIM4_CCER                       TIM_CCER(TIM4)
#define TIM5_CCER                       TIM_CCER(TIM5)
#define TIM8_CCER                       TIM_CCER(TIM8)

/* Counter (TIMx_CNT) */
#define TIM_CNT(tim_base)               MMIO32(tim_base + 0x24)
#define TIM1_CNT                        TIM_CNT(TIM1)
#define TIM2_CNT                        TIM_CNT(TIM2)
#define TIM3_CNT                        TIM_CNT(TIM3)
#define TIM4_CNT                        TIM_CNT(TIM4)
#define TIM5_CNT                        TIM_CNT(TIM5)
#define TIM6_CNT                        TIM_CNT(TIM6)
#define TIM7_CNT                        TIM_CNT(TIM7)
#define TIM8_CNT                        TIM_CNT(TIM8)

/* Prescaler (TIMx_PSC) */
#define TIM_PSC(tim_base)               MMIO32(tim_base + 0x28)
#define TIM1_PSC                        TIM_PSC(TIM1)
#define TIM2_PSC                        TIM_PSC(TIM2)
#define TIM3_PSC                        TIM_PSC(TIM3)
#define TIM4_PSC                        TIM_PSC(TIM4)
#define TIM5_PSC                        TIM_PSC(TIM5)
#define TIM6_PSC                        TIM_PSC(TIM6)
#define TIM7_PSC                        TIM_PSC(TIM7)
#define TIM8_PSC                        TIM_PSC(TIM8)

/* Auto-reload register (TIMx_ARR) */
#define TIM_ARR(tim_base)               MMIO32(tim_base + 0x2C)
#define TIM1_ARR                        TIM_ARR(TIM1)
#define TIM2_ARR                        TIM_ARR(TIM2)
#define TIM3_ARR                        TIM_ARR(TIM3)
#define TIM4_ARR                        TIM_ARR(TIM4)
#define TIM5_ARR                        TIM_ARR(TIM5)
#define TIM6_ARR                        TIM_ARR(TIM6)
#define TIM7_ARR                        TIM_ARR(TIM7)
#define TIM8_ARR                        TIM_ARR(TIM8)

/* Repetition counter register (TIMx_RCR) */
#define TIM_RCR(tim_base)               MMIO32(tim_base + 0x30)
#define TIM1_RCR                        TIM_RCR(TIM1)
#define TIM8_RCR                        TIM_RCR(TIM8)

/* Capture/compare register 1 (TIMx_CCR1) */
#define TIM_CCR1(tim_base)              MMIO32(tim_base + 0x34)
#define TIM1_CCR1                       TIM_CCR1(TIM1)
#define TIM2_CCR1                       TIM_CCR1(TIM2)
#define TIM3_CCR1                       TIM_CCR1(TIM3)
#define TIM4_CCR1                       TIM_CCR1(TIM4)
#define TIM5_CCR1                       TIM_CCR1(TIM5)
#define TIM8_CCR1                       TIM_CCR1(TIM8)

/* Capture/compare register 2 (TIMx_CCR2) */
#define TIM_CCR2(tim_base)              MMIO32(tim_base + 0x38)
#define TIM1_CCR2                       TIM_CCR2(TIM1)
#define TIM2_CCR2                       TIM_CCR2(TIM2)
#define TIM3_CCR2                       TIM_CCR2(TIM3)
#define TIM4_CCR2                       TIM_CCR2(TIM4)
#define TIM5_CCR2                       TIM_CCR2(TIM5)
#define TIM8_CCR2                       TIM_CCR2(TIM8)

/* Capture/compare register 3 (TIMx_CCR3) */
#define TIM_CCR3(tim_base)              MMIO32(tim_base + 0x3C)
#define TIM1_CCR3                       TIM_CCR3(TIM1)
#define TIM2_CCR3                       TIM_CCR3(TIM2)
#define TIM3_CCR3                       TIM_CCR3(TIM3)
#define TIM4_CCR3                       TIM_CCR3(TIM4)
#define TIM5_CCR3                       TIM_CCR3(TIM5)
#define TIM8_CCR3                       TIM_CCR3(TIM8)

/* Capture/compare register 4 (TIMx_CCR4) */
#define TIM_CCR4(tim_base)              MMIO32(tim_base + 0x40)
#define TIM1_CCR4                       TIM_CCR4(TIM1)
#define TIM2_CCR4                       TIM_CCR4(TIM2)
#define TIM3_CCR4                       TIM_CCR4(TIM3)
#define TIM4_CCR4                       TIM_CCR4(TIM4)
#define TIM5_CCR4                       TIM_CCR4(TIM5)
#define TIM8_CCR4                       TIM_CCR4(TIM8)

/* Break and dead-time register (TIMx_BDTR) */
#define TIM_BDTR(tim_base)              MMIO32(tim_base + 0x44)
#define TIM1_BDTR                       TIM_BDTR(TIM1)
#define TIM8_BDTR                       TIM_BDTR(TIM8)

/* DMA control register (TIMx_DCR) */
#define TIM_DCR(tim_base)               MMIO32(tim_base + 0x48)
#define TIM1_DCR                        TIM_DCR(TIM1)
#define TIM2_DCR                        TIM_DCR(TIM2)
#define TIM3_DCR                        TIM_DCR(TIM3)
#define TIM4_DCR                        TIM_DCR(TIM4)
#define TIM5_DCR                        TIM_DCR(TIM5)
#define TIM8_DCR                        TIM_DCR(TIM8)

/* DMA address for full transfer (TIMx_DMAR) */
#define TIM_DMAR(tim_base)              MMIO32(tim_base + 0x4C)
#define TIM1_DMAR                       TIM_DMAR(TIM1)
#define TIM2_DMAR                       TIM_DMAR(TIM2)
#define TIM3_DMAR                       TIM_DMAR(TIM3)
#define TIM4_DMAR                       TIM_DMAR(TIM4)
#define TIM5_DMAR                       TIM_DMAR(TIM5)
#define TIM8_DMAR                       TIM_DMAR(TIM8)

/* --- TIMx_CR1 values ----------------------------------------------------- */

/* CKD[1:0]: Clock division */
#define TIM_CR1_CKD_CK_INT              (0x0 << 8)
#define TIM_CR1_CKD_CK_INT_MUL_2        (0x1 << 8)
#define TIM_CR1_CKD_CK_INT_MUL_4        (0x2 << 8)
#define TIM_CR1_CKD_CK_INT_MASK         (0x3 << 8)

/* ARPE: Auto-reload preload enable */
#define TIM_CR1_ARPE                    (1 << 7)

/* CMS[1:0]: Center-aligned mode selection */
#define TIM_CR1_CMS_EDGE                (0x0 << 5)
#define TIM_CR1_CMS_CENTER_1            (0x1 << 5)
#define TIM_CR1_CMS_CENTER_2            (0x2 << 5)
#define TIM_CR1_CMS_CENTER_3            (0x3 << 5)

/* DIR: Direction */
#define TIM_CR1_DIR_UP                  (0 << 4)
#define TIM_CR1_DIR_DOWN                (1 << 4)

/* OPM: One pulse mode */
#define TIM_CR1_OPM                     (1 << 3)

/* URS: Update request source */
#define TIM_CR1_URS                     (1 << 2)

/* UDIS: Update disable */
#define TIM_CR1_UDIS                    (1 << 1)

/* CEN: Counter enable */
#define TIM_CR1_CEN                     (1 << 0)

/* --- TIMx_CR2 values ----------------------------------------------------- */

/* OIS4: Output idle state 4 (OC4 output) */
#define TIM_CR2_OIS4                    (1 << 14)

/* OIS3N: Output idle state 3 (OC3N output) */
#define TIM_CR2_OIS3N                   (1 << 13)

/* OIS3: Output idle state 3 (OC3 output) */
#define TIM_CR2_OIS3                    (1 << 12)

/* OIS2N: Output idle state 2 (OC2N output) */
#define TIM_CR2_OIS2N                   (1 << 11)

/* OIS2: Output idle state 2 (OC2 output) */
#define TIM_CR2_OIS2                    (1 << 10)

/* OIS1N: Output idle state 1 (OC1N output) */
#define TIM_CR2_OIS1N                   (1 << 9)

/* OIS1: Output idle state 1 (OC1 output) */
#define TIM_CR2_OIS1                    (1 << 8)
#define TIM_CR2_OIS_MASK                (0x7f << 8)

/* TI1S: TI1 selection */
#define TIM_CR2_TI1S                    (1 << 7)

/* MMS[2:0]: Master mode selection */
#define TIM_CR2_MMS_RESET               (0x0 << 4)
#define TIM_CR2_MMS_ENABLE              (0x1 << 4)
#define TIM_CR2_MMS_UPDATE              (0x2 << 4)
#define TIM_CR2_MMS_COMPARE_PULSE       (0x3 << 4)
#define TIM_CR2_MMS_COMPARE_OC1REF      (0x4 << 4)
#define TIM_CR2_MMS_COMPARE_OC2REF      (0x5 << 4)
#define TIM_CR2_MMS_COMPARE_OC3REF      (0x6 << 4)
#define TIM_CR2_MMS_COMPARE_OC4REF      (0x7 << 4)
#define TIM_CR2_MMS_MASK                (0x7 << 4)

/* CCDS: Capture/compare DMA selection */
#define TIM_CR2_CCDS                    (1 << 3)

/* CCUS: Capture/compare control update selection */
#define TIM_CR2_CCUS                    (1 << 2)

/* CCPC: Capture/compare preload control */
#define TIM_CR2_CCPC                    (1 << 0)

/* --- TIMx_SMCR values ---------------------------------------------------- */

/* ETP: External trigger polarity */
#define TIM_SMCR_ETP                    (1 << 15)

/* ECE: External clock enable */
#define TIM_SMCR_ECE                    (1 << 14)

/* ETPS[1:0]: External trigger prescaler */
#define TIM_SMCR_ETPS_OFF               (0x0 << 12)
#define TIM_SMCR_ETPS_ETRP_DIV_2        (0x1 << 12)
#define TIM_SMCR_ETPS_ETRP_DIV_4        (0x2 << 12)
#define TIM_SMCR_ETPS_ETRP_DIV_8        (0x3 << 12)

/* ETF[3:0]: External trigger filter */
#define TIM_SMCR_ETF_OFF                (0x0 << 8)
#define TIM_SMCR_ETF_CK_INT_N_2         (0x1 << 8)
#define TIM_SMCR_ETF_CK_INT_N_4         (0x2 << 8)
#define TIM_SMCR_ETF_CK_INT_N_8         (0x3 << 8)
#define TIM_SMCR_ETF_DTS_DIV_2_N_6      (0x4 << 8)
#define TIM_SMCR_ETF_DTS_DIV_2_N_8      (0x5 << 8)
#define TIM_SMCR_ETF_DTS_DIV_4_N_6      (0x6 << 8)
#define TIM_SMCR_ETF_DTS_DIV_4_N_8      (0x7 << 8)
#define TIM_SMCR_ETF_DTS_DIV_8_N_6      (0x8 << 8)
#define TIM_SMCR_ETF_DTS_DIV_8_N_8      (0x9 << 8)
#define TIM_SMCR_ETF_DTS_DIV_16_N_5     (0xA << 8)
#define TIM_SMCR_ETF_DTS_DIV_16_N_6     (0xB << 8)
#define TIM_SMCR_ETF_DTS_DIV_16_N_8     (0xC << 8)
#define TIM_SMCR_ETF_DTS_DIV_32_N_5     (0xD << 8)
#define TIM_SMCR_ETF_DTS_DIV_32_N_6     (0xE << 8)
#define TIM_SMCR_ETF_DTS_DIV_32_N_8     (0xF << 8)

/* MSM: Master/slave mode */
#define TIM_SMCR_MSM                    (1 << 7)

/* TS[2:0]: Trigger selection */
#define TIM_SMCR_TS_ITR0                (0x0 << 4)
#define TIM_SMCR_TS_ITR1                (0x1 << 4)
#define TIM_SMCR_TS_ITR2                (0x2 << 4)
#define TIM_SMCR_TS_ITR3                (0x3 << 4)
#define TIM_SMCR_TS_IT1F_ED             (0x4 << 4)
#define TIM_SMCR_TS_IT1FP1              (0x5 << 4)
#define TIM_SMCR_TS_IT1FP2              (0x6 << 4)
#define TIM_SMCR_TS_ETRF                (0x7 << 4)

/* SMS[2:0]: Slave mode selection */
#define TIM_SMCR_SMS_OFF                (0x0 << 0)
#define TIM_SMCR_SMS_EM1                (0x1 << 0)
#define TIM_SMCR_SMS_EM2                (0x2 << 0)
#define TIM_SMCR_SMS_EM3                (0x3 << 0)
#define TIM_SMCR_SMS_RM                 (0x4 << 0)
#define TIM_SMCR_SMS_GM                 (0x5 << 0)
#define TIM_SMCR_SMS_TM                 (0x6 << 0)
#define TIM_SMCR_SMS_ECM1               (0x7 << 0)

/* --- TIMx_DIER values ---------------------------------------------------- */

/* TDE: Trigger DMA request enable */
#define TIM_DIER_TDE                    (1 << 14)

/* COMDE: COM DMA request enable */
#define TIM_DIER_COMDE                  (1 << 13)

/* CC4DE: Capture/Compare 4 DMA request enable */
#define TIM_DIER_CC4DE                  (1 << 12)

/* CC3DE: Capture/Compare 3 DMA request enable */
#define TIM_DIER_CC3DE                  (1 << 11)

/* CC2DE: Capture/Compare 2 DMA request enable */
#define TIM_DIER_CC2DE                  (1 << 10)

/* CC1DE: Capture/Compare 1 DMA request enable */
#define TIM_DIER_CC1DE                  (1 << 9)

/* UDE: Update DMA request enable */
#define TIM_DIER_UDE                    (1 << 8)

/* BIE: Break interrupt enable */
#define TIM_DIER_BIE                    (1 << 7)

/* TIE: Trigger interrupt enable */
#define TIM_DIER_TIE                    (1 << 6)

/* COMIE: COM interrupt enable */
#define TIM_DIER_COMIE                  (1 << 5)

/* CC4IE: Capture/compare 4 interrupt enable */
#define TIM_DIER_CC4IE                  (1 << 4)

/* CC3IE: Capture/compare 3 interrupt enable */
#define TIM_DIER_CC3IE                  (1 << 3)

/* CC2IE: Capture/compare 2 interrupt enable */
#define TIM_DIER_CC2IE                  (1 << 2)

/* CC1IE: Capture/compare 1 interrupt enable */
#define TIM_DIER_CC1IE                  (1 << 1)

/* UIE: Update interrupt enable */
#define TIM_DIER_UIE                    (1 << 0)

/* --- TIMx_SR values ------------------------------------------------------ */

/* CC4OF: Capture/compare 4 overcapture flag */
#define TIM_SR_CC4OF                    (1 << 12)

/* CC3OF: Capture/compare 3 overcapture flag */
#define TIM_SR_CC3OF                    (1 << 11)

/* CC2OF: Capture/compare 2 overcapture flag */
#define TIM_SR_CC2OF                    (1 << 10)

/* CC1OF: Capture/compare 1 overcapture flag */
#define TIM_SR_CC1OF                    (1 << 9)

/* BIF: Break interrupt flag */
#define TIM_SR_BIF                      (1 << 7)

/* TIF: Trigger interrupt flag */
#define TIM_SR_TIF                      (1 << 6)

/* COMIF: COM interrupt flag */
#define TIM_SR_COMIF                    (1 << 5)

/* CC4IF: Capture/compare 4 interrupt flag */
#define TIM_SR_CC4IF                    (1 << 4)

/* CC3IF: Capture/compare 3 interrupt flag */
#define TIM_SR_CC3IF                    (1 << 3)

/* CC2IF: Capture/compare 2 interrupt flag */
#define TIM_SR_CC2IF                    (1 << 2)

/* CC1IF: Capture/compare 1 interrupt flag */
#define TIM_SR_CC1IF                    (1 << 1)

/* UIF: Update interrupt flag */
#define TIM_SR_UIF                      (1 << 0)

/* --- TIMx_EGR values ----------------------------------------------------- */

/* BG: Break generation */
#define TIM_EGR_BG                      (1 << 7)

/* TG: Trigger generation */
#define TIM_EGR_TG                      (1 << 6)

/* COMG: Capture/compare control update generation */
#define TIM_EGR_COMG                    (1 << 5)

/* CC4G: Capture/compare 4 generation */
#define TIM_EGR_CC4G                    (1 << 4)

/* CC3G: Capture/compare 3 generation */
#define TIM_EGR_CC3G                    (1 << 3)

/* CC2G: Capture/compare 2 generation */
#define TIM_EGR_CC2G                    (1 << 2)

/* CC1G: Capture/compare 1 generation */
#define TIM_EGR_CC1G                    (1 << 1)

/* UG: Update generation */
#define TIM_EGR_UG                      (1 << 0)

/* --- TIMx_CCMR1 values --------------------------------------------------- */

/* --- Output compare mode --- */

/* OC2CE: Output compare 2 clear enable */
#define TIM_CCMR1_OC2CE                 (1 << 15)

/* OC2M[2:0]: Output compare 2 mode */
#define TIM_CCMR1_OC2M_FROZEN           (0x0 << 12)
#define TIM_CCMR1_OC2M_ACTIVE           (0x1 << 12)
#define TIM_CCMR1_OC2M_INACTIVE         (0x2 << 12)
#define TIM_CCMR1_OC2M_TOGGLE           (0x3 << 12)
#define TIM_CCMR1_OC2M_FORCE_LOW        (0x4 << 12)
#define TIM_CCMR1_OC2M_FORCE_HIGH       (0x5 << 12)
#define TIM_CCMR1_OC2M_PWM1             (0x6 << 12)
#define TIM_CCMR1_OC2M_PWM2             (0x7 << 12)

/* OC2PE: Output compare 2 preload enable */
#define TIM_CCMR1_OC2PE                 (1 << 11)

/* OC2FE: Output compare 2 fast enable */
#define TIM_CCMR1_OC2FE                 (1 << 10)

/* CC2S[1:0]: Capture/compare 2 selection */
/* Note: CC2S bits are writable only when the channel is OFF (CC2E = 0 in
 * TIMx_CCER). */
#define TIM_CCMR1_CC2S_OUT              (0x0 << 8)
#define TIM_CCMR1_CC2S_IN_TI2           (0x1 << 8)
#define TIM_CCMR1_CC2S_IN_TI1           (0x2 << 8)
#define TIM_CCMR1_CC2S_IN_TRC           (0x3 << 8)

/* OC1CE: Output compare 1 clear enable */
#define TIM_CCMR1_OC1CE                 (1 << 7)

/* OC1M[2:0]: Output compare 1 mode */
#define TIM_CCMR1_OC1M_FROZEN           (0x0 << 4)
#define TIM_CCMR1_OC1M_ACTIVE           (0x1 << 4)
#define TIM_CCMR1_OC1M_INACTIVE         (0x2 << 4)
#define TIM_CCMR1_OC1M_TOGGLE           (0x3 << 4)
#define TIM_CCMR1_OC1M_FORCE_LOW        (0x4 << 4)
#define TIM_CCMR1_OC1M_FORCE_HIGH       (0x5 << 4)
#define TIM_CCMR1_OC1M_PWM1             (0x6 << 4)
#define TIM_CCMR1_OC1M_PWM2             (0x7 << 4)

/* OC1PE: Output compare 1 preload enable */
#define TIM_CCMR1_OC1PE                 (1 << 3)

/* OC1FE: Output compare 1 fast enable */
#define TIM_CCMR1_OC1FE                 (1 << 2)

/* CC1S[1:0]: Capture/compare 1 selection */
/* Note: CC2S bits are writable only when the channel is OFF (CC2E = 0 in
 * TIMx_CCER). */
#define TIM_CCMR1_CC1S_OUT              (0x0 << 0)
#define TIM_CCMR1_CC1S_IN_TI2           (0x1 << 0)
#define TIM_CCMR1_CC1S_IN_TI1           (0x2 << 0)
#define TIM_CCMR1_CC1S_IN_TRC           (0x3 << 0)

/* --- Input capture mode --- */

/* IC2F[3:0]: Input capture 2 filter */
#define TIM_CCMR1_IC2F_OFF              (0x0 << 12)
#define TIM_CCMR1_IC2F_CK_INT_N_2       (0x1 << 12)
#define TIM_CCMR1_IC2F_CK_INT_N_4       (0x2 << 12)
#define TIM_CCMR1_IC2F_CK_INT_N_8       (0x3 << 12)
#define TIM_CCMR1_IC2F_DTF_DIV_2_N_6    (0x4 << 12)
#define TIM_CCMR1_IC2F_DTF_DIV_2_N_8    (0x5 << 12)
#define TIM_CCMR1_IC2F_DTF_DIV_4_N_6    (0x6 << 12)
#define TIM_CCMR1_IC2F_DTF_DIV_4_N_8    (0x7 << 12)
#define TIM_CCMR1_IC2F_DTF_DIV_8_N_6    (0x8 << 12)
#define TIM_CCMR1_IC2F_DTF_DIV_8_N_8    (0x9 << 12)
#define TIM_CCMR1_IC2F_DTF_DIV_16_N_5   (0xA << 12)
#define TIM_CCMR1_IC2F_DTF_DIV_16_N_6   (0xB << 12)
#define TIM_CCMR1_IC2F_DTF_DIV_16_N_8   (0xC << 12)
#define TIM_CCMR1_IC2F_DTF_DIV_32_N_5   (0xD << 12)
#define TIM_CCMR1_IC2F_DTF_DIV_32_N_6   (0xE << 12)
#define TIM_CCMR1_IC2F_DTF_DIV_32_N_8   (0xF << 12)

/* IC2PSC[1:0]: Input capture 2 prescaler */
#define TIM_CCMR1_IC2PSC_OFF            (0x0 << 10)
#define TIM_CCMR1_IC2PSC_2              (0x1 << 10)
#define TIM_CCMR1_IC2PSC_4              (0x2 << 10)
#define TIM_CCMR1_IC2PSC_8              (0x3 << 10)

/* IC1F[3:0]: Input capture 1 filter */
#define TIM_CCMR1_IC1F_OFF              (0x0 << 4)
#define TIM_CCMR1_IC1F_CK_INT_N_2       (0x1 << 4)
#define TIM_CCMR1_IC1F_CK_INT_N_4       (0x2 << 4)
#define TIM_CCMR1_IC1F_CK_INT_N_8       (0x3 << 4)
#define TIM_CCMR1_IC1F_DTF_DIV_2_N_6    (0x4 << 4)
#define TIM_CCMR1_IC1F_DTF_DIV_2_N_8    (0x5 << 4)
#define TIM_CCMR1_IC1F_DTF_DIV_4_N_6    (0x6 << 4)
#define TIM_CCMR1_IC1F_DTF_DIV_4_N_8    (0x7 << 4)
#define TIM_CCMR1_IC1F_DTF_DIV_8_N_6    (0x8 << 4)
#define TIM_CCMR1_IC1F_DTF_DIV_8_N_8    (0x9 << 4)
#define TIM_CCMR1_IC1F_DTF_DIV_16_N_5   (0xA << 4)
#define TIM_CCMR1_IC1F_DTF_DIV_16_N_6   (0xB << 4)
#define TIM_CCMR1_IC1F_DTF_DIV_16_N_8   (0xC << 4)
#define TIM_CCMR1_IC1F_DTF_DIV_32_N_5   (0xD << 4)
#define TIM_CCMR1_IC1F_DTF_DIV_32_N_6   (0xE << 4)
#define TIM_CCMR1_IC1F_DTF_DIV_32_N_8   (0xF << 4)

/* IC1PSC[1:0]: Input capture 1 prescaler */
#define TIM_CCMR1_IC1PSC_OFF            (0x0 << 2)
#define TIM_CCMR1_IC1PSC_2              (0x1 << 2)
#define TIM_CCMR1_IC1PSC_4              (0x2 << 2)
#define TIM_CCMR1_IC1PSC_8              (0x3 << 2)

/* --- TIMx_CCMR2 values --------------------------------------------------- */

/* --- Output compare mode --- */

/* OC4CE: Output compare 4 clear enable */
#define TIM_CCMR2_OC4CE                 (1 << 15)

/* OC4M[2:0]: Output compare 4 mode */
#define TIM_CCMR2_OC4M_FROZEN           (0x0 << 12)
#define TIM_CCMR2_OC4M_ACTIVE           (0x1 << 12)
#define TIM_CCMR2_OC4M_INACTIVE         (0x2 << 12)
#define TIM_CCMR2_OC4M_TOGGLE           (0x3 << 12)
#define TIM_CCMR2_OC4M_FORCE_LOW        (0x4 << 12)
#define TIM_CCMR2_OC4M_FORCE_HIGH       (0x5 << 12)
#define TIM_CCMR2_OC4M_PWM1             (0x6 << 12)
#define TIM_CCMR2_OC4M_PWM2             (0x7 << 12)

/* OC4PE: Output compare 4 preload enable */
#define TIM_CCMR2_OC4PE                 (1 << 11)

/* OC4FE: Output compare 4 fast enable */
#define TIM_CCMR2_OC4FE                 (1 << 10)

/* CC4S[1:0]: Capture/compare 4 selection */
/* Note: CC2S bits are writable only when the channel is OFF (CC2E = 0 in
 * TIMx_CCER). */
#define TIM_CCMR2_CC4S_OUT              (0x0 << 8)
#define TIM_CCMR2_CC4S_IN_TI2           (0x1 << 8)
#define TIM_CCMR2_CC4S_IN_TI1           (0x2 << 8)
#define TIM_CCMR2_CC4S_IN_TRC           (0x3 << 8)

/* OC3CE: Output compare 3 clear enable */
#define TIM_CCMR2_OC1CE                 (1 << 7)

/* OC3M[2:0]: Output compare 3 mode */
#define TIM_CCMR2_OC3M_FROZEN           (0x0 << 4)
#define TIM_CCMR2_OC3M_ACTIVE           (0x1 << 4)
#define TIM_CCMR2_OC3M_INACTIVE         (0x2 << 4)
#define TIM_CCMR2_OC3M_TOGGLE           (0x3 << 4)
#define TIM_CCMR2_OC3M_FORCE_LOW        (0x4 << 4)
#define TIM_CCMR2_OC3M_FORCE_HIGH       (0x5 << 4)
#define TIM_CCMR2_OC3M_PWM1             (0x6 << 4)
#define TIM_CCMR2_OC3M_PWM2             (0x7 << 4)

/* OC3PE: Output compare 3 preload enable */
#define TIM_CCMR2_OC3PE                 (1 << 3)

/* OC3FE: Output compare 3 fast enable */
#define TIM_CCMR2_OC3FE                 (1 << 2)

/* CC3S[1:0]: Capture/compare 3 selection */
/* Note: CC2S bits are writable only when the channel is OFF (CC2E = 0 in
 * TIMx_CCER). */
#define TIM_CCMR2_CC3S_OUT              (0x0 << 0)
#define TIM_CCMR2_CC3S_IN_TI2           (0x1 << 0)
#define TIM_CCMR2_CC3S_IN_TI1           (0x2 << 0)
#define TIM_CCMR2_CC3S_IN_TRC           (0x3 << 0)

/* --- Input capture mode --- */

/* IC4F[3:0]: Input capture 4 filter */
#define TIM_CCMR2_IC4F_OFF              (0x0 << 12)
#define TIM_CCMR2_IC4F_CK_INT_N_2       (0x1 << 12)
#define TIM_CCMR2_IC4F_CK_INT_N_4       (0x2 << 12)
#define TIM_CCMR2_IC4F_CK_INT_N_8       (0x3 << 12)
#define TIM_CCMR2_IC4F_DTF_DIV_2_N_6    (0x4 << 12)
#define TIM_CCMR2_IC4F_DTF_DIV_2_N_8    (0x5 << 12)
#define TIM_CCMR2_IC4F_DTF_DIV_4_N_6    (0x6 << 12)
#define TIM_CCMR2_IC4F_DTF_DIV_4_N_8    (0x7 << 12)
#define TIM_CCMR2_IC4F_DTF_DIV_8_N_6    (0x8 << 12)
#define TIM_CCMR2_IC4F_DTF_DIV_8_N_8    (0x9 << 12)
#define TIM_CCMR2_IC4F_DTF_DIV_16_N_5   (0xA << 12)
#define TIM_CCMR2_IC4F_DTF_DIV_16_N_6   (0xB << 12)
#define TIM_CCMR2_IC4F_DTF_DIV_16_N_8   (0xC << 12)
#define TIM_CCMR2_IC4F_DTF_DIV_32_N_5   (0xD << 12)
#define TIM_CCMR2_IC4F_DTF_DIV_32_N_6   (0xE << 12)
#define TIM_CCMR2_IC4F_DTF_DIV_32_N_8   (0xF << 12)

/* IC4PSC[1:0]: Input capture 4 prescaler */
#define TIM_CCMR2_IC4PSC_OFF            (0x0 << 10)
#define TIM_CCMR2_IC4PSC_2              (0x1 << 10)
#define TIM_CCMR2_IC4PSC_4              (0x2 << 10)
#define TIM_CCMR2_IC4PSC_8              (0x3 << 10)

/* IC3F[3:0]: Input capture 3 filter */
#define TIM_CCMR2_IC3F_OFF              (0x0 << 4)
#define TIM_CCMR2_IC3F_CK_INT_N_2       (0x1 << 4)
#define TIM_CCMR2_IC3F_CK_INT_N_4       (0x2 << 4)
#define TIM_CCMR2_IC3F_CK_INT_N_8       (0x3 << 4)
#define TIM_CCMR2_IC3F_DTF_DIV_2_N_6    (0x4 << 4)
#define TIM_CCMR2_IC3F_DTF_DIV_2_N_8    (0x5 << 4)
#define TIM_CCMR2_IC3F_DTF_DIV_4_N_6    (0x6 << 4)
#define TIM_CCMR2_IC3F_DTF_DIV_4_N_8    (0x7 << 4)
#define TIM_CCMR2_IC3F_DTF_DIV_8_N_6    (0x8 << 4)
#define TIM_CCMR2_IC3F_DTF_DIV_8_N_8    (0x9 << 4)
#define TIM_CCMR2_IC3F_DTF_DIV_16_N_5   (0xA << 4)
#define TIM_CCMR2_IC3F_DTF_DIV_16_N_6   (0xB << 4)
#define TIM_CCMR2_IC3F_DTF_DIV_16_N_8   (0xC << 4)
#define TIM_CCMR2_IC3F_DTF_DIV_32_N_5   (0xD << 4)
#define TIM_CCMR2_IC3F_DTF_DIV_32_N_6   (0xE << 4)
#define TIM_CCMR2_IC3F_DTF_DIV_32_N_8   (0xF << 4)

/* IC3PSC[1:0]: Input capture 3 prescaler */
#define TIM_CCMR2_IC3PSC_OFF            (0x0 << 2)
#define TIM_CCMR2_IC3PSC_2              (0x1 << 2)
#define TIM_CCMR2_IC3PSC_4              (0x2 << 2)
#define TIM_CCMR2_IC3PSC_8              (0x3 << 2)

/* --- TIMx_CCER values ---------------------------------------------------- */

/* CC4P: Capture/compare 4 output polarity */
#define TIM_CCER_CC4P                   (1 << 13)

/* CC4E: Capture/compare 4 output enable */
#define TIM_CCER_CC4E                   (1 << 12)

/* CC3NP: Capture/compare 3 complementary output polarity */
#define TIM_CCER_CC3NP                  (1 << 11)

/* CC3NE: Capture/compare 3 complementary output enable */
#define TIM_CCER_CC3NE                  (1 << 10)

/* CC3P: Capture/compare 3 output polarity */
#define TIM_CCER_CC3P                   (1 << 9)

/* CC3E: Capture/compare 3 output enable */
#define TIM_CCER_CC3E                   (1 << 8)

/* CC2NP: Capture/compare 2 complementary output polarity */
#define TIM_CCER_CC2NP                  (1 << 7)

/* CC2NE: Capture/compare 2 complementary output enable */
#define TIM_CCER_CC2NE                  (1 << 6)

/* CC2P: Capture/compare 2 output polarity */
#define TIM_CCER_CC2P                   (1 << 5)

/* CC2E: Capture/compare 2 output enable */
#define TIM_CCER_CC2E                   (1 << 4)

/* CC1NP: Capture/compare 1 complementary output polarity */
#define TIM_CCER_CC1NP                  (1 << 3)

/* CC1NE: Capture/compare 1 complementary output enable */
#define TIM_CCER_CC1NE                  (1 << 2)

/* CC1P: Capture/compare 1 output polarity */
#define TIM_CCER_CC1P                   (1 << 1)

/* CC1E: Capture/compare 1 output enable */
#define TIM_CCER_CC1E                   (1 << 0)

/* --- TIMx_CNT values ----------------------------------------------------- */

/* CNT[15:0]: Counter value */

/* --- TIMx_PSC values ----------------------------------------------------- */

/* PSC[15:0]: Prescaler value */

/* --- TIMx_ARR values ----------------------------------------------------- */

/* ARR[15:0]: Prescaler value */

/* --- TIMx_RCR values ----------------------------------------------------- */

/* REP[15:0]: Repetition counter value */

/* --- TIMx_CCR1 values ---------------------------------------------------- */

/* CCR1[15:0]: Capture/compare 1 value */

/* --- TIMx_CCR2 values ---------------------------------------------------- */

/* CCR2[15:0]: Capture/compare 2 value */

/* --- TIMx_CCR3 values ---------------------------------------------------- */

/* CCR3[15:0]: Capture/compare 3 value */

/* --- TIMx_CCR4 values ---------------------------------------------------- */

/* CCR4[15:0]: Capture/compare 4 value */

/* --- TIMx_BDTR values ---------------------------------------------------- */

/* MOE: Main output enable */
#define TIM_BDTR_MOE                    (1 << 15)

/* AOE: Automatic output enable */
#define TIM_BDTR_AOE                    (1 << 14)

/* BKP: Break polarity */
#define TIM_BDTR_BKP                    (1 << 13)

/* BKE: Break enable */
#define TIM_BDTR_BKE                    (1 << 12)

/* OSSR: Off-state selection of run mode */
#define TIM_BDTR_OSSR                   (1 << 11)

/* OSSI: Off-state selection of idle mode */
#define TIM_BDTR_OSSI                   (1 << 10)

/* LOCK[1:0]: Lock configuration */
#define TIM_BDTR_LOCK_OFF               (0x0 << 8)
#define TIM_BDTR_LOCK_LEVEL_1           (0x1 << 8)
#define TIM_BDTR_LOCK_LEVEL_2           (0x2 << 8)
#define TIM_BDTR_LOCK_LEVEL_3           (0x3 << 8)

/* DTG[7:0]: Dead-time generator set-up */
#define TIM_BDTR_DTG_MASK               0x00FF

/* --- TIMx_DCR values ----------------------------------------------------- */

/* DBL[4:0]: DMA burst length */
#define TIM_BDTR_DBL_MASK               (0x1F << 8)

/* DBA[4:0]: DMA base address */
#define TIM_BDTR_DBA_MASK               (0x1F << 0)

/* --- TIMx_DMAR values ---------------------------------------------------- */

/* DMAB[15:0]: DMA register for burst accesses */

#endif
