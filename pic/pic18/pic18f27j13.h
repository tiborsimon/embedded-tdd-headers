/* Generated on 2016-07-26
===============================================================================
      P I C   T D D   R E A D Y   R E G I S T E R   D E F I N I T I O N
===============================================================================

Created by Tibor Simon - tiborsimon.io
Generator script:  https://github.com/tiborsimon/pic-definition-converter

Based on the register definition header file v1.37 provided by Microchip.
Original definition date and license: */

// Generated 11/03/2016 GMT

/*
* Copyright © 2016, Microchip Technology Inc. and its subsidiaries ("Microchip")
* All rights reserved.
*
* This software is developed by Microchip Technology Inc. and its subsidiaries ("Microchip").
*
* Redistribution and use in source and binary forms, with or without modification, are
* permitted provided that the following conditions are met:
*
*     1. Redistributions of source code must retain the above copyright notice, this list of
*        conditions and the following disclaimer.
*
*     2. Redistributions in binary form must reproduce the above copyright notice, this list
*        of conditions and the following disclaimer in the documentation and/or other
*        materials provided with the distribution.
*
*     3. Microchip's name may not be used to endorse or promote products derived from this
*        software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
* INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
* PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
* PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
* LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
* THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*  */

#ifndef _PIC18F27J13_H_
#define _PIC18F27J13_H_


/*--------------------------------------------#
| ADCTRIG                               0xEB8 |
#---------------------------------------------#
| - | - | - | - | - | - | TRIGSEL1 | TRIGSEL0 |
#---------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1        | 0        |
#--------------------------------------------*/

#define ADCTRIG                                  0x0
#define ADCTRIG_address                          0xEB8
#define ADCTRIG_position                         0x0
#define ADCTRIG_size                             0x8
#define ADCTRIG_value_mask                       0xFF
#define ADCTRIG_clear_mask                       0x0

#define TRIGSEL                                  0x0
#define TRIGSEL_address                          0xEB8
#define TRIGSEL_position                         0x0
#define TRIGSEL_size                             0x2
#define TRIGSEL_value_mask                       0x3
#define TRIGSEL_clear_mask                       0xFC

#define SRC                                      0x0
#define SRC_address                              0xEB8
#define SRC_position                             0x0
#define SRC_size                                 0x2
#define SRC_value_mask                           0x3
#define SRC_clear_mask                           0xFC

#define TRIGSEL0                                 0x0
#define TRIGSEL0_address                         0xEB8
#define TRIGSEL0_position                        0x0
#define TRIGSEL0_size                            0x1
#define TRIGSEL0_value_mask                      0x1
#define TRIGSEL0_clear_mask                      0xFE

#define SRC0                                     0x0
#define SRC0_address                             0xEB8
#define SRC0_position                            0x0
#define SRC0_size                                0x1
#define SRC0_value_mask                          0x1
#define SRC0_clear_mask                          0xFE

#define TRIGSEL1                                 0x1
#define TRIGSEL1_address                         0xEB8
#define TRIGSEL1_position                        0x1
#define TRIGSEL1_size                            0x1
#define TRIGSEL1_value_mask                      0x2
#define TRIGSEL1_clear_mask                      0xFD

#define SRC1                                     0x1
#define SRC1_address                             0xEB8
#define SRC1_position                            0x1
#define SRC1_size                                0x1
#define SRC1_value_mask                          0x2
#define SRC1_clear_mask                          0xFD


/*-----------------------------------------------------------------------------#
| PMDIS0                                                                 0xEB9 |
#------------------------------------------------------------------------------#
| ECCP3MD | ECCP2MD | ECCP1MD | PMDUART2 | PMDUART1 | SPI2MD | SPI1MD | PMDADC |
#------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4        | 3        | 2      | 1      | 0      |
#-----------------------------------------------------------------------------*/

#define PMDIS0                                   0x0
#define PMDIS0_address                           0xEB9
#define PMDIS0_position                          0x0
#define PMDIS0_size                              0x8
#define PMDIS0_value_mask                        0xFF
#define PMDIS0_clear_mask                        0x0

#define PMDADC                                   0x0
#define PMDADC_address                           0xEB9
#define PMDADC_position                          0x0
#define PMDADC_size                              0x1
#define PMDADC_value_mask                        0x1
#define PMDADC_clear_mask                        0xFE

#define ADCMD                                    0x0
#define ADCMD_address                            0xEB9
#define ADCMD_position                           0x0
#define ADCMD_size                               0x1
#define ADCMD_value_mask                         0x1
#define ADCMD_clear_mask                         0xFE

#define SPI1MD                                   0x1
#define SPI1MD_address                           0xEB9
#define SPI1MD_position                          0x1
#define SPI1MD_size                              0x1
#define SPI1MD_value_mask                        0x2
#define SPI1MD_clear_mask                        0xFD

#define PMDMSSP                                  0x1
#define PMDMSSP_address                          0xEB9
#define PMDMSSP_position                         0x1
#define PMDMSSP_size                             0x2
#define PMDMSSP_value_mask                       0x6
#define PMDMSSP_clear_mask                       0xF9

#define PMDMSSP1                                 0x1
#define PMDMSSP1_address                         0xEB9
#define PMDMSSP1_position                        0x1
#define PMDMSSP1_size                            0x1
#define PMDMSSP1_value_mask                      0x2
#define PMDMSSP1_clear_mask                      0xFD

#define SPIMD                                    0x1
#define SPIMD_address                            0xEB9
#define SPIMD_position                           0x1
#define SPIMD_size                               0x2
#define SPIMD_value_mask                         0x6
#define SPIMD_clear_mask                         0xF9

#define SPI2MD                                   0x2
#define SPI2MD_address                           0xEB9
#define SPI2MD_position                          0x2
#define SPI2MD_size                              0x1
#define SPI2MD_value_mask                        0x4
#define SPI2MD_clear_mask                        0xFB

#define PMDMSSP2                                 0x2
#define PMDMSSP2_address                         0xEB9
#define PMDMSSP2_position                        0x2
#define PMDMSSP2_size                            0x1
#define PMDMSSP2_value_mask                      0x4
#define PMDMSSP2_clear_mask                      0xFB

#define PMDUART                                  0x3
#define PMDUART_address                          0xEB9
#define PMDUART_position                         0x3
#define PMDUART_size                             0x2
#define PMDUART_value_mask                       0x18
#define PMDUART_clear_mask                       0xE7

#define PMDUART1                                 0x3
#define PMDUART1_address                         0xEB9
#define PMDUART1_position                        0x3
#define PMDUART1_size                            0x1
#define PMDUART1_value_mask                      0x8
#define PMDUART1_clear_mask                      0xF7

#define UARTMD                                   0x3
#define UARTMD_address                           0xEB9
#define UARTMD_position                          0x3
#define UARTMD_size                              0x2
#define UARTMD_value_mask                        0x18
#define UARTMD_clear_mask                        0xE7

#define UART1MD                                  0x3
#define UART1MD_address                          0xEB9
#define UART1MD_position                         0x3
#define UART1MD_size                             0x1
#define UART1MD_value_mask                       0x8
#define UART1MD_clear_mask                       0xF7

#define PMDUART2                                 0x4
#define PMDUART2_address                         0xEB9
#define PMDUART2_position                        0x4
#define PMDUART2_size                            0x1
#define PMDUART2_value_mask                      0x10
#define PMDUART2_clear_mask                      0xEF

#define UART2MD                                  0x4
#define UART2MD_address                          0xEB9
#define UART2MD_position                         0x4
#define UART2MD_size                             0x1
#define UART2MD_value_mask                       0x10
#define UART2MD_clear_mask                       0xEF

#define PMDECCP                                  0x5
#define PMDECCP_address                          0xEB9
#define PMDECCP_position                         0x5
#define PMDECCP_size                             0x3
#define PMDECCP_value_mask                       0xE0
#define PMDECCP_clear_mask                       0x1F

#define ECCP1MD                                  0x5
#define ECCP1MD_address                          0xEB9
#define ECCP1MD_position                         0x5
#define ECCP1MD_size                             0x1
#define ECCP1MD_value_mask                       0x20
#define ECCP1MD_clear_mask                       0xDF

#define ECCPMD                                   0x5
#define ECCPMD_address                           0xEB9
#define ECCPMD_position                          0x5
#define ECCPMD_size                              0x3
#define ECCPMD_value_mask                        0xE0
#define ECCPMD_clear_mask                        0x1F

#define PMDECCP1                                 0x5
#define PMDECCP1_address                         0xEB9
#define PMDECCP1_position                        0x5
#define PMDECCP1_size                            0x1
#define PMDECCP1_value_mask                      0x20
#define PMDECCP1_clear_mask                      0xDF

#define ECCP2MD                                  0x6
#define ECCP2MD_address                          0xEB9
#define ECCP2MD_position                         0x6
#define ECCP2MD_size                             0x1
#define ECCP2MD_value_mask                       0x40
#define ECCP2MD_clear_mask                       0xBF

#define PMDECCP2                                 0x6
#define PMDECCP2_address                         0xEB9
#define PMDECCP2_position                        0x6
#define PMDECCP2_size                            0x1
#define PMDECCP2_value_mask                      0x40
#define PMDECCP2_clear_mask                      0xBF

#define ECCP3MD                                  0x7
#define ECCP3MD_address                          0xEB9
#define ECCP3MD_position                         0x7
#define ECCP3MD_size                             0x1
#define ECCP3MD_value_mask                       0x80
#define ECCP3MD_clear_mask                       0x7F

#define PMDECCP3                                 0x7
#define PMDECCP3_address                         0xEB9
#define PMDECCP3_position                        0x7
#define PMDECCP3_size                            0x1
#define PMDECCP3_value_mask                      0x80
#define PMDECCP3_clear_mask                      0x7F


/*-----------------------------------------------------------------#
| PMDIS1                                                     0xEBA |
#------------------------------------------------------------------#
| - | CTMUMD | PMDRTCC | PMDTMR4 | PMDTMR3 | PMDTMR2 | PMDTMR1 | - |
#------------------------------------------------------------------#
| 7 | 6      | 5       | 4       | 3       | 2       | 1       | 0 |
#-----------------------------------------------------------------*/

#define PMDIS1                                   0x0
#define PMDIS1_address                           0xEBA
#define PMDIS1_position                          0x0
#define PMDIS1_size                              0x8
#define PMDIS1_value_mask                        0xFF
#define PMDIS1_clear_mask                        0x0

#define PMDTMR                                   0x1
#define PMDTMR_address                           0xEBA
#define PMDTMR_position                          0x1
#define PMDTMR_size                              0x4
#define PMDTMR_value_mask                        0x1E
#define PMDTMR_clear_mask                        0xE1

#define TMRMD                                    0x1
#define TMRMD_address                            0xEBA
#define TMRMD_position                           0x1
#define TMRMD_size                               0x4
#define TMRMD_value_mask                         0x1E
#define TMRMD_clear_mask                         0xE1

#define PMDTMR1                                  0x1
#define PMDTMR1_address                          0xEBA
#define PMDTMR1_position                         0x1
#define PMDTMR1_size                             0x1
#define PMDTMR1_value_mask                       0x2
#define PMDTMR1_clear_mask                       0xFD

#define TMR1MD                                   0x1
#define TMR1MD_address                           0xEBA
#define TMR1MD_position                          0x1
#define TMR1MD_size                              0x1
#define TMR1MD_value_mask                        0x2
#define TMR1MD_clear_mask                        0xFD

#define PMDTMR2                                  0x2
#define PMDTMR2_address                          0xEBA
#define PMDTMR2_position                         0x2
#define PMDTMR2_size                             0x1
#define PMDTMR2_value_mask                       0x4
#define PMDTMR2_clear_mask                       0xFB

#define TMR2MD                                   0x2
#define TMR2MD_address                           0xEBA
#define TMR2MD_position                          0x2
#define TMR2MD_size                              0x1
#define TMR2MD_value_mask                        0x4
#define TMR2MD_clear_mask                        0xFB

#define PMDTMR3                                  0x3
#define PMDTMR3_address                          0xEBA
#define PMDTMR3_position                         0x3
#define PMDTMR3_size                             0x1
#define PMDTMR3_value_mask                       0x8
#define PMDTMR3_clear_mask                       0xF7

#define TMR3MD                                   0x3
#define TMR3MD_address                           0xEBA
#define TMR3MD_position                          0x3
#define TMR3MD_size                              0x1
#define TMR3MD_value_mask                        0x8
#define TMR3MD_clear_mask                        0xF7

#define PMDTMR4                                  0x4
#define PMDTMR4_address                          0xEBA
#define PMDTMR4_position                         0x4
#define PMDTMR4_size                             0x1
#define PMDTMR4_value_mask                       0x10
#define PMDTMR4_clear_mask                       0xEF

#define TMR4MD                                   0x4
#define TMR4MD_address                           0xEBA
#define TMR4MD_position                          0x4
#define TMR4MD_size                              0x1
#define TMR4MD_value_mask                        0x10
#define TMR4MD_clear_mask                        0xEF

#define PMDRTCC                                  0x5
#define PMDRTCC_address                          0xEBA
#define PMDRTCC_position                         0x5
#define PMDRTCC_size                             0x1
#define PMDRTCC_value_mask                       0x20
#define PMDRTCC_clear_mask                       0xDF

#define RTCCMD                                   0x5
#define RTCCMD_address                           0xEBA
#define RTCCMD_position                          0x5
#define RTCCMD_size                              0x1
#define RTCCMD_value_mask                        0x20
#define RTCCMD_clear_mask                        0xDF

#define CTMUMD                                   0x6
#define CTMUMD_address                           0xEBA
#define CTMUMD_position                          0x6
#define CTMUMD_size                              0x1
#define CTMUMD_value_mask                        0x40
#define CTMUMD_clear_mask                        0xBF

#define PMDCTMU                                  0x6
#define PMDCTMU_address                          0xEBA
#define PMDCTMU_position                         0x6
#define PMDCTMU_size                             0x1
#define PMDCTMU_value_mask                       0x40
#define PMDCTMU_clear_mask                       0xBF


/*-------------------------------------------------------------#
| PMDIS2                                                 0xEBB |
#--------------------------------------------------------------#
| - | TMR8MD | - | TMR6MD | TMR5MD | CMP3MD | CMP2MD | PMDCMP1 |
#--------------------------------------------------------------#
| 7 | 6      | 5 | 4      | 3      | 2      | 1      | 0       |
#-------------------------------------------------------------*/

#define PMDIS2                                   0x0
#define PMDIS2_address                           0xEBB
#define PMDIS2_position                          0x0
#define PMDIS2_size                              0x8
#define PMDIS2_value_mask                        0xFF
#define PMDIS2_clear_mask                        0x0

#define CMP1MD                                   0x0
#define CMP1MD_address                           0xEBB
#define CMP1MD_position                          0x0
#define CMP1MD_size                              0x1
#define CMP1MD_value_mask                        0x1
#define CMP1MD_clear_mask                        0xFE

#define PMDCMP                                   0x0
#define PMDCMP_address                           0xEBB
#define PMDCMP_position                          0x0
#define PMDCMP_size                              0x3
#define PMDCMP_value_mask                        0x7
#define PMDCMP_clear_mask                        0xF8

#define CMPMD                                    0x0
#define CMPMD_address                            0xEBB
#define CMPMD_position                           0x0
#define CMPMD_size                               0x3
#define CMPMD_value_mask                         0x7
#define CMPMD_clear_mask                         0xF8

#define PMDCMP1                                  0x0
#define PMDCMP1_address                          0xEBB
#define PMDCMP1_position                         0x0
#define PMDCMP1_size                             0x1
#define PMDCMP1_value_mask                       0x1
#define PMDCMP1_clear_mask                       0xFE

#define PMDCMP2                                  0x1
#define PMDCMP2_address                          0xEBB
#define PMDCMP2_position                         0x1
#define PMDCMP2_size                             0x1
#define PMDCMP2_value_mask                       0x2
#define PMDCMP2_clear_mask                       0xFD

#define CMP2MD                                   0x1
#define CMP2MD_address                           0xEBB
#define CMP2MD_position                          0x1
#define CMP2MD_size                              0x1
#define CMP2MD_value_mask                        0x2
#define CMP2MD_clear_mask                        0xFD

#define CMP3MD                                   0x2
#define CMP3MD_address                           0xEBB
#define CMP3MD_position                          0x2
#define CMP3MD_size                              0x1
#define CMP3MD_value_mask                        0x4
#define CMP3MD_clear_mask                        0xFB

#define PMDCMP3                                  0x2
#define PMDCMP3_address                          0xEBB
#define PMDCMP3_position                         0x2
#define PMDCMP3_size                             0x1
#define PMDCMP3_value_mask                       0x4
#define PMDCMP3_clear_mask                       0xFB

#define PMDTMR5                                  0x3
#define PMDTMR5_address                          0xEBB
#define PMDTMR5_position                         0x3
#define PMDTMR5_size                             0x1
#define PMDTMR5_value_mask                       0x8
#define PMDTMR5_clear_mask                       0xF7

#define TMR5MD                                   0x3
#define TMR5MD_address                           0xEBB
#define TMR5MD_position                          0x3
#define TMR5MD_size                              0x1
#define TMR5MD_value_mask                        0x8
#define TMR5MD_clear_mask                        0xF7

#define TMR6MD                                   0x4
#define TMR6MD_address                           0xEBB
#define TMR6MD_position                          0x4
#define TMR6MD_size                              0x1
#define TMR6MD_value_mask                        0x10
#define TMR6MD_clear_mask                        0xEF

#define PMDTMR6                                  0x4
#define PMDTMR6_address                          0xEBB
#define PMDTMR6_position                         0x4
#define PMDTMR6_size                             0x1
#define PMDTMR6_value_mask                       0x10
#define PMDTMR6_clear_mask                       0xEF

#define PMDTMR8                                  0x6
#define PMDTMR8_address                          0xEBB
#define PMDTMR8_position                         0x6
#define PMDTMR8_size                             0x1
#define PMDTMR8_value_mask                       0x40
#define PMDTMR8_clear_mask                       0xBF

#define TMR8MD                                   0x6
#define TMR8MD_address                           0xEBB
#define TMR8MD_position                          0x6
#define TMR8MD_size                              0x1
#define TMR8MD_value_mask                        0x40
#define TMR8MD_clear_mask                        0xBF


/*-------------------------------------------------------------------#
| PMDIS3                                                       0xEBC |
#--------------------------------------------------------------------#
| CCP10MD | PMDCCP9 | CCP8MD | CCP7MD | CCP6MD | CCP5MD | CCP4MD | - |
#--------------------------------------------------------------------#
| 7       | 6       | 5      | 4      | 3      | 2      | 1      | 0 |
#-------------------------------------------------------------------*/

#define PMDIS3                                   0x0
#define PMDIS3_address                           0xEBC
#define PMDIS3_position                          0x0
#define PMDIS3_size                              0x8
#define PMDIS3_value_mask                        0xFF
#define PMDIS3_clear_mask                        0x0

#define CCP4MD                                   0x1
#define CCP4MD_address                           0xEBC
#define CCP4MD_position                          0x1
#define CCP4MD_size                              0x1
#define CCP4MD_value_mask                        0x2
#define CCP4MD_clear_mask                        0xFD

#define PMDCCP                                   0x1
#define PMDCCP_address                           0xEBC
#define PMDCCP_position                          0x1
#define PMDCCP_size                              0x7
#define PMDCCP_value_mask                        0xFE
#define PMDCCP_clear_mask                        0x1

#define PMDCCP4                                  0x1
#define PMDCCP4_address                          0xEBC
#define PMDCCP4_position                         0x1
#define PMDCCP4_size                             0x1
#define PMDCCP4_value_mask                       0x2
#define PMDCCP4_clear_mask                       0xFD

#define CCPMD                                    0x1
#define CCPMD_address                            0xEBC
#define CCPMD_position                           0x1
#define CCPMD_size                               0x7
#define CCPMD_value_mask                         0xFE
#define CCPMD_clear_mask                         0x1

#define PMDCCP5                                  0x2
#define PMDCCP5_address                          0xEBC
#define PMDCCP5_position                         0x2
#define PMDCCP5_size                             0x1
#define PMDCCP5_value_mask                       0x4
#define PMDCCP5_clear_mask                       0xFB

#define CCP5MD                                   0x2
#define CCP5MD_address                           0xEBC
#define CCP5MD_position                          0x2
#define CCP5MD_size                              0x1
#define CCP5MD_value_mask                        0x4
#define CCP5MD_clear_mask                        0xFB

#define CCP6MD                                   0x3
#define CCP6MD_address                           0xEBC
#define CCP6MD_position                          0x3
#define CCP6MD_size                              0x1
#define CCP6MD_value_mask                        0x8
#define CCP6MD_clear_mask                        0xF7

#define PMDCCP6                                  0x3
#define PMDCCP6_address                          0xEBC
#define PMDCCP6_position                         0x3
#define PMDCCP6_size                             0x1
#define PMDCCP6_value_mask                       0x8
#define PMDCCP6_clear_mask                       0xF7

#define CCP7MD                                   0x4
#define CCP7MD_address                           0xEBC
#define CCP7MD_position                          0x4
#define CCP7MD_size                              0x1
#define CCP7MD_value_mask                        0x10
#define CCP7MD_clear_mask                        0xEF

#define PMDCCP7                                  0x4
#define PMDCCP7_address                          0xEBC
#define PMDCCP7_position                         0x4
#define PMDCCP7_size                             0x1
#define PMDCCP7_value_mask                       0x10
#define PMDCCP7_clear_mask                       0xEF

#define CCP8MD                                   0x5
#define CCP8MD_address                           0xEBC
#define CCP8MD_position                          0x5
#define CCP8MD_size                              0x1
#define CCP8MD_value_mask                        0x20
#define CCP8MD_clear_mask                        0xDF

#define PMDCCP8                                  0x5
#define PMDCCP8_address                          0xEBC
#define PMDCCP8_position                         0x5
#define PMDCCP8_size                             0x1
#define PMDCCP8_value_mask                       0x20
#define PMDCCP8_clear_mask                       0xDF

#define PMDCCP9                                  0x6
#define PMDCCP9_address                          0xEBC
#define PMDCCP9_position                         0x6
#define PMDCCP9_size                             0x1
#define PMDCCP9_value_mask                       0x40
#define PMDCCP9_clear_mask                       0xBF

#define CCP9MD                                   0x6
#define CCP9MD_address                           0xEBC
#define CCP9MD_position                          0x6
#define CCP9MD_size                              0x1
#define CCP9MD_value_mask                        0x40
#define CCP9MD_clear_mask                        0xBF

#define PMDCCP10                                 0x7
#define PMDCCP10_address                         0xEBC
#define PMDCCP10_position                        0x7
#define PMDCCP10_size                            0x1
#define PMDCCP10_value_mask                      0x80
#define PMDCCP10_clear_mask                      0x7F

#define CCP10MD                                  0x7
#define CCP10MD_address                          0xEBC
#define CCP10MD_position                         0x7
#define CCP10MD_size                             0x1
#define CCP10MD_value_mask                       0x80
#define CCP10MD_clear_mask                       0x7F


/*-----------------------------------#
| PPSCON                       0xEBF |
#------------------------------------#
| - | - | - | - | - | - | - | IOLOCK |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0      |
#-----------------------------------*/

#define PPSCON                                   0x0
#define PPSCON_address                           0xEBF
#define PPSCON_position                          0x0
#define PPSCON_size                              0x8
#define PPSCON_value_mask                        0xFF
#define PPSCON_clear_mask                        0x0

#define IOLOCK                                   0x0
#define IOLOCK_address                           0xEBF
#define IOLOCK_position                          0x0
#define IOLOCK_size                              0x1
#define IOLOCK_value_mask                        0x1
#define IOLOCK_clear_mask                        0xFE


/*----------------------------------------------------------------#
| CCP10CON                                                  0xF00 |
#-----------------------------------------------------------------#
| - | - | DC10B1 | DC10B0 | CCP10M3 | CCP10M2 | CCP10M1 | CCP10M0 |
#-----------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------*/

#define CCP10CON                                 0x0
#define CCP10CON_address                         0xF00
#define CCP10CON_position                        0x0
#define CCP10CON_size                            0x8
#define CCP10CON_value_mask                      0xFF
#define CCP10CON_clear_mask                      0x0

#define CCP10M                                   0x0
#define CCP10M_address                           0xF00
#define CCP10M_position                          0x0
#define CCP10M_size                              0x4
#define CCP10M_value_mask                        0xF
#define CCP10M_clear_mask                        0xF0

#define CCP10M0                                  0x0
#define CCP10M0_address                          0xF00
#define CCP10M0_position                         0x0
#define CCP10M0_size                             0x1
#define CCP10M0_value_mask                       0x1
#define CCP10M0_clear_mask                       0xFE

#define CCP10M1                                  0x1
#define CCP10M1_address                          0xF00
#define CCP10M1_position                         0x1
#define CCP10M1_size                             0x1
#define CCP10M1_value_mask                       0x2
#define CCP10M1_clear_mask                       0xFD

#define CCP10M2                                  0x2
#define CCP10M2_address                          0xF00
#define CCP10M2_position                         0x2
#define CCP10M2_size                             0x1
#define CCP10M2_value_mask                       0x4
#define CCP10M2_clear_mask                       0xFB

#define CCP10M3                                  0x3
#define CCP10M3_address                          0xF00
#define CCP10M3_position                         0x3
#define CCP10M3_size                             0x1
#define CCP10M3_value_mask                       0x8
#define CCP10M3_clear_mask                       0xF7

#define DC10B0                                   0x4
#define DC10B0_address                           0xF00
#define DC10B0_position                          0x4
#define DC10B0_size                              0x1
#define DC10B0_value_mask                        0x10
#define DC10B0_clear_mask                        0xEF

#define DC10B                                    0x4
#define DC10B_address                            0xF00
#define DC10B_position                           0x4
#define DC10B_size                               0x2
#define DC10B_value_mask                         0x30
#define DC10B_clear_mask                         0xCF

#define DC10B1                                   0x5
#define DC10B1_address                           0xF00
#define DC10B1_position                          0x5
#define DC10B1_size                              0x1
#define DC10B1_value_mask                        0x20
#define DC10B1_clear_mask                        0xDF


/*------------------------------#
| CCPR10L                 0xF01 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR10L                                  0x0
#define CCPR10L_address                          0xF01
#define CCPR10L_position                         0x0
#define CCPR10L_size                             0x8
#define CCPR10L_value_mask                       0xFF
#define CCPR10L_clear_mask                       0x0


/*------------------------------#
| CCPR10H                 0xF02 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR10H                                  0x0
#define CCPR10H_address                          0xF02
#define CCPR10H_position                         0x0
#define CCPR10H_size                             0x8
#define CCPR10H_value_mask                       0xFF
#define CCPR10H_clear_mask                       0x0


/*----------------------------------------------------------#
| CCP9CON                                             0xF03 |
#-----------------------------------------------------------#
| - | - | DC9B1 | DC9B0 | CCP9M3 | CCP9M2 | CCP9M1 | CCP9M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP9CON                                  0x0
#define CCP9CON_address                          0xF03
#define CCP9CON_position                         0x0
#define CCP9CON_size                             0x8
#define CCP9CON_value_mask                       0xFF
#define CCP9CON_clear_mask                       0x0

#define CCP9M0                                   0x0
#define CCP9M0_address                           0xF03
#define CCP9M0_position                          0x0
#define CCP9M0_size                              0x1
#define CCP9M0_value_mask                        0x1
#define CCP9M0_clear_mask                        0xFE

#define CCP9M                                    0x0
#define CCP9M_address                            0xF03
#define CCP9M_position                           0x0
#define CCP9M_size                               0x4
#define CCP9M_value_mask                         0xF
#define CCP9M_clear_mask                         0xF0

#define CCP9M1                                   0x1
#define CCP9M1_address                           0xF03
#define CCP9M1_position                          0x1
#define CCP9M1_size                              0x1
#define CCP9M1_value_mask                        0x2
#define CCP9M1_clear_mask                        0xFD

#define CCP9M2                                   0x2
#define CCP9M2_address                           0xF03
#define CCP9M2_position                          0x2
#define CCP9M2_size                              0x1
#define CCP9M2_value_mask                        0x4
#define CCP9M2_clear_mask                        0xFB

#define CCP9M3                                   0x3
#define CCP9M3_address                           0xF03
#define CCP9M3_position                          0x3
#define CCP9M3_size                              0x1
#define CCP9M3_value_mask                        0x8
#define CCP9M3_clear_mask                        0xF7

#define DC9B0                                    0x4
#define DC9B0_address                            0xF03
#define DC9B0_position                           0x4
#define DC9B0_size                               0x1
#define DC9B0_value_mask                         0x10
#define DC9B0_clear_mask                         0xEF

#define DC9B                                     0x4
#define DC9B_address                             0xF03
#define DC9B_position                            0x4
#define DC9B_size                                0x2
#define DC9B_value_mask                          0x30
#define DC9B_clear_mask                          0xCF

#define DC9B1                                    0x5
#define DC9B1_address                            0xF03
#define DC9B1_position                           0x5
#define DC9B1_size                               0x1
#define DC9B1_value_mask                         0x20
#define DC9B1_clear_mask                         0xDF


/*------------------------------#
| CCPR9L                  0xF04 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR9L                                   0x0
#define CCPR9L_address                           0xF04
#define CCPR9L_position                          0x0
#define CCPR9L_size                              0x8
#define CCPR9L_value_mask                        0xFF
#define CCPR9L_clear_mask                        0x0


/*------------------------------#
| CCPR9H                  0xF05 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR9H                                   0x0
#define CCPR9H_address                           0xF05
#define CCPR9H_position                          0x0
#define CCPR9H_size                              0x8
#define CCPR9H_value_mask                        0xFF
#define CCPR9H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP8CON                                             0xF06 |
#-----------------------------------------------------------#
| - | - | DC8B1 | DC8B0 | CCP8M3 | CCP8M2 | CCP8M1 | CCP8M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP8CON                                  0x0
#define CCP8CON_address                          0xF06
#define CCP8CON_position                         0x0
#define CCP8CON_size                             0x8
#define CCP8CON_value_mask                       0xFF
#define CCP8CON_clear_mask                       0x0

#define CCP8M0                                   0x0
#define CCP8M0_address                           0xF06
#define CCP8M0_position                          0x0
#define CCP8M0_size                              0x1
#define CCP8M0_value_mask                        0x1
#define CCP8M0_clear_mask                        0xFE

#define CCP8M                                    0x0
#define CCP8M_address                            0xF06
#define CCP8M_position                           0x0
#define CCP8M_size                               0x4
#define CCP8M_value_mask                         0xF
#define CCP8M_clear_mask                         0xF0

#define CCP8M1                                   0x1
#define CCP8M1_address                           0xF06
#define CCP8M1_position                          0x1
#define CCP8M1_size                              0x1
#define CCP8M1_value_mask                        0x2
#define CCP8M1_clear_mask                        0xFD

#define CCP8M2                                   0x2
#define CCP8M2_address                           0xF06
#define CCP8M2_position                          0x2
#define CCP8M2_size                              0x1
#define CCP8M2_value_mask                        0x4
#define CCP8M2_clear_mask                        0xFB

#define CCP8M3                                   0x3
#define CCP8M3_address                           0xF06
#define CCP8M3_position                          0x3
#define CCP8M3_size                              0x1
#define CCP8M3_value_mask                        0x8
#define CCP8M3_clear_mask                        0xF7

#define DC8B0                                    0x4
#define DC8B0_address                            0xF06
#define DC8B0_position                           0x4
#define DC8B0_size                               0x1
#define DC8B0_value_mask                         0x10
#define DC8B0_clear_mask                         0xEF

#define DC8B                                     0x4
#define DC8B_address                             0xF06
#define DC8B_position                            0x4
#define DC8B_size                                0x2
#define DC8B_value_mask                          0x30
#define DC8B_clear_mask                          0xCF

#define DC8B1                                    0x5
#define DC8B1_address                            0xF06
#define DC8B1_position                           0x5
#define DC8B1_size                               0x1
#define DC8B1_value_mask                         0x20
#define DC8B1_clear_mask                         0xDF


/*------------------------------#
| CCPR8L                  0xF07 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR8L                                   0x0
#define CCPR8L_address                           0xF07
#define CCPR8L_position                          0x0
#define CCPR8L_size                              0x8
#define CCPR8L_value_mask                        0xFF
#define CCPR8L_clear_mask                        0x0


/*------------------------------#
| CCPR8H                  0xF08 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR8H                                   0x0
#define CCPR8H_address                           0xF08
#define CCPR8H_position                          0x0
#define CCPR8H_size                              0x8
#define CCPR8H_value_mask                        0xFF
#define CCPR8H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP7CON                                             0xF09 |
#-----------------------------------------------------------#
| - | - | DC7B1 | DC7B0 | CCP7M3 | CCP7M2 | CCP7M1 | CCP7M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP7CON                                  0x0
#define CCP7CON_address                          0xF09
#define CCP7CON_position                         0x0
#define CCP7CON_size                             0x8
#define CCP7CON_value_mask                       0xFF
#define CCP7CON_clear_mask                       0x0

#define CCP7M0                                   0x0
#define CCP7M0_address                           0xF09
#define CCP7M0_position                          0x0
#define CCP7M0_size                              0x1
#define CCP7M0_value_mask                        0x1
#define CCP7M0_clear_mask                        0xFE

#define CCP7M                                    0x0
#define CCP7M_address                            0xF09
#define CCP7M_position                           0x0
#define CCP7M_size                               0x4
#define CCP7M_value_mask                         0xF
#define CCP7M_clear_mask                         0xF0

#define CCP7M1                                   0x1
#define CCP7M1_address                           0xF09
#define CCP7M1_position                          0x1
#define CCP7M1_size                              0x1
#define CCP7M1_value_mask                        0x2
#define CCP7M1_clear_mask                        0xFD

#define CCP7M2                                   0x2
#define CCP7M2_address                           0xF09
#define CCP7M2_position                          0x2
#define CCP7M2_size                              0x1
#define CCP7M2_value_mask                        0x4
#define CCP7M2_clear_mask                        0xFB

#define CCP7M3                                   0x3
#define CCP7M3_address                           0xF09
#define CCP7M3_position                          0x3
#define CCP7M3_size                              0x1
#define CCP7M3_value_mask                        0x8
#define CCP7M3_clear_mask                        0xF7

#define DC7B                                     0x4
#define DC7B_address                             0xF09
#define DC7B_position                            0x4
#define DC7B_size                                0x2
#define DC7B_value_mask                          0x30
#define DC7B_clear_mask                          0xCF

#define DC7B0                                    0x4
#define DC7B0_address                            0xF09
#define DC7B0_position                           0x4
#define DC7B0_size                               0x1
#define DC7B0_value_mask                         0x10
#define DC7B0_clear_mask                         0xEF

#define DC7B1                                    0x5
#define DC7B1_address                            0xF09
#define DC7B1_position                           0x5
#define DC7B1_size                               0x1
#define DC7B1_value_mask                         0x20
#define DC7B1_clear_mask                         0xDF


/*------------------------------#
| CCPR7L                  0xF0A |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR7L                                   0x0
#define CCPR7L_address                           0xF0A
#define CCPR7L_position                          0x0
#define CCPR7L_size                              0x8
#define CCPR7L_value_mask                        0xFF
#define CCPR7L_clear_mask                        0x0


/*------------------------------#
| CCPR7H                  0xF0B |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR7H                                   0x0
#define CCPR7H_address                           0xF0B
#define CCPR7H_position                          0x0
#define CCPR7H_size                              0x8
#define CCPR7H_value_mask                        0xFF
#define CCPR7H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP6CON                                             0xF0C |
#-----------------------------------------------------------#
| - | - | DC6B1 | DC6B0 | CCP6M3 | CCP6M2 | CCP6M1 | CCP6M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP6CON                                  0x0
#define CCP6CON_address                          0xF0C
#define CCP6CON_position                         0x0
#define CCP6CON_size                             0x8
#define CCP6CON_value_mask                       0xFF
#define CCP6CON_clear_mask                       0x0

#define CCP6M                                    0x0
#define CCP6M_address                            0xF0C
#define CCP6M_position                           0x0
#define CCP6M_size                               0x4
#define CCP6M_value_mask                         0xF
#define CCP6M_clear_mask                         0xF0

#define CCP6M0                                   0x0
#define CCP6M0_address                           0xF0C
#define CCP6M0_position                          0x0
#define CCP6M0_size                              0x1
#define CCP6M0_value_mask                        0x1
#define CCP6M0_clear_mask                        0xFE

#define CCP6M1                                   0x1
#define CCP6M1_address                           0xF0C
#define CCP6M1_position                          0x1
#define CCP6M1_size                              0x1
#define CCP6M1_value_mask                        0x2
#define CCP6M1_clear_mask                        0xFD

#define CCP6M2                                   0x2
#define CCP6M2_address                           0xF0C
#define CCP6M2_position                          0x2
#define CCP6M2_size                              0x1
#define CCP6M2_value_mask                        0x4
#define CCP6M2_clear_mask                        0xFB

#define CCP6M3                                   0x3
#define CCP6M3_address                           0xF0C
#define CCP6M3_position                          0x3
#define CCP6M3_size                              0x1
#define CCP6M3_value_mask                        0x8
#define CCP6M3_clear_mask                        0xF7

#define DC6B0                                    0x4
#define DC6B0_address                            0xF0C
#define DC6B0_position                           0x4
#define DC6B0_size                               0x1
#define DC6B0_value_mask                         0x10
#define DC6B0_clear_mask                         0xEF

#define DC6B                                     0x4
#define DC6B_address                             0xF0C
#define DC6B_position                            0x4
#define DC6B_size                                0x2
#define DC6B_value_mask                          0x30
#define DC6B_clear_mask                          0xCF

#define DC6B1                                    0x5
#define DC6B1_address                            0xF0C
#define DC6B1_position                           0x5
#define DC6B1_size                               0x1
#define DC6B1_value_mask                         0x20
#define DC6B1_clear_mask                         0xDF


/*------------------------------#
| CCPR6L                  0xF0D |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR6L                                   0x0
#define CCPR6L_address                           0xF0D
#define CCPR6L_position                          0x0
#define CCPR6L_size                              0x8
#define CCPR6L_value_mask                        0xFF
#define CCPR6L_clear_mask                        0x0


/*------------------------------#
| CCPR6H                  0xF0E |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR6H                                   0x0
#define CCPR6H_address                           0xF0E
#define CCPR6H_position                          0x0
#define CCPR6H_size                              0x8
#define CCPR6H_value_mask                        0xFF
#define CCPR6H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP5CON                                             0xF0F |
#-----------------------------------------------------------#
| - | - | DC5B1 | DC5B0 | CCP5M3 | CCP5M2 | CCP5M1 | CCP5M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP5CON                                  0x0
#define CCP5CON_address                          0xF0F
#define CCP5CON_position                         0x0
#define CCP5CON_size                             0x8
#define CCP5CON_value_mask                       0xFF
#define CCP5CON_clear_mask                       0x0

#define CCP5M0                                   0x0
#define CCP5M0_address                           0xF0F
#define CCP5M0_position                          0x0
#define CCP5M0_size                              0x1
#define CCP5M0_value_mask                        0x1
#define CCP5M0_clear_mask                        0xFE

#define CCP5M                                    0x0
#define CCP5M_address                            0xF0F
#define CCP5M_position                           0x0
#define CCP5M_size                               0x4
#define CCP5M_value_mask                         0xF
#define CCP5M_clear_mask                         0xF0

#define CCP5M1                                   0x1
#define CCP5M1_address                           0xF0F
#define CCP5M1_position                          0x1
#define CCP5M1_size                              0x1
#define CCP5M1_value_mask                        0x2
#define CCP5M1_clear_mask                        0xFD

#define CCP5M2                                   0x2
#define CCP5M2_address                           0xF0F
#define CCP5M2_position                          0x2
#define CCP5M2_size                              0x1
#define CCP5M2_value_mask                        0x4
#define CCP5M2_clear_mask                        0xFB

#define CCP5M3                                   0x3
#define CCP5M3_address                           0xF0F
#define CCP5M3_position                          0x3
#define CCP5M3_size                              0x1
#define CCP5M3_value_mask                        0x8
#define CCP5M3_clear_mask                        0xF7

#define DC5B0                                    0x4
#define DC5B0_address                            0xF0F
#define DC5B0_position                           0x4
#define DC5B0_size                               0x1
#define DC5B0_value_mask                         0x10
#define DC5B0_clear_mask                         0xEF

#define DC5B                                     0x4
#define DC5B_address                             0xF0F
#define DC5B_position                            0x4
#define DC5B_size                                0x2
#define DC5B_value_mask                          0x30
#define DC5B_clear_mask                          0xCF

#define DC5B1                                    0x5
#define DC5B1_address                            0xF0F
#define DC5B1_position                           0x5
#define DC5B1_size                               0x1
#define DC5B1_value_mask                         0x20
#define DC5B1_clear_mask                         0xDF


/*------------------------------#
| CCPR5L                  0xF10 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR5L                                   0x0
#define CCPR5L_address                           0xF10
#define CCPR5L_position                          0x0
#define CCPR5L_size                              0x8
#define CCPR5L_value_mask                        0xFF
#define CCPR5L_clear_mask                        0x0


/*------------------------------#
| CCPR5H                  0xF11 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR5H                                   0x0
#define CCPR5H_address                           0xF11
#define CCPR5H_position                          0x0
#define CCPR5H_size                              0x8
#define CCPR5H_value_mask                        0xFF
#define CCPR5H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP4CON                                             0xF12 |
#-----------------------------------------------------------#
| - | - | DC4B1 | DC4B0 | CCP4M3 | CCP4M2 | CCP4M1 | CCP4M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP4CON                                  0x0
#define CCP4CON_address                          0xF12
#define CCP4CON_position                         0x0
#define CCP4CON_size                             0x8
#define CCP4CON_value_mask                       0xFF
#define CCP4CON_clear_mask                       0x0

#define CCP4M                                    0x0
#define CCP4M_address                            0xF12
#define CCP4M_position                           0x0
#define CCP4M_size                               0x4
#define CCP4M_value_mask                         0xF
#define CCP4M_clear_mask                         0xF0

#define CCP4M0                                   0x0
#define CCP4M0_address                           0xF12
#define CCP4M0_position                          0x0
#define CCP4M0_size                              0x1
#define CCP4M0_value_mask                        0x1
#define CCP4M0_clear_mask                        0xFE

#define CCP4M1                                   0x1
#define CCP4M1_address                           0xF12
#define CCP4M1_position                          0x1
#define CCP4M1_size                              0x1
#define CCP4M1_value_mask                        0x2
#define CCP4M1_clear_mask                        0xFD

#define CCP4M2                                   0x2
#define CCP4M2_address                           0xF12
#define CCP4M2_position                          0x2
#define CCP4M2_size                              0x1
#define CCP4M2_value_mask                        0x4
#define CCP4M2_clear_mask                        0xFB

#define CCP4M3                                   0x3
#define CCP4M3_address                           0xF12
#define CCP4M3_position                          0x3
#define CCP4M3_size                              0x1
#define CCP4M3_value_mask                        0x8
#define CCP4M3_clear_mask                        0xF7

#define DC4B0                                    0x4
#define DC4B0_address                            0xF12
#define DC4B0_position                           0x4
#define DC4B0_size                               0x1
#define DC4B0_value_mask                         0x10
#define DC4B0_clear_mask                         0xEF

#define DC4B                                     0x4
#define DC4B_address                             0xF12
#define DC4B_position                            0x4
#define DC4B_size                                0x2
#define DC4B_value_mask                          0x30
#define DC4B_clear_mask                          0xCF

#define DC4B1                                    0x5
#define DC4B1_address                            0xF12
#define DC4B1_position                           0x5
#define DC4B1_size                               0x1
#define DC4B1_value_mask                         0x20
#define DC4B1_clear_mask                         0xDF


/*------------------------------#
| CCPR4L                  0xF13 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR4L                                   0x0
#define CCPR4L_address                           0xF13
#define CCPR4L_position                          0x0
#define CCPR4L_size                              0x8
#define CCPR4L_value_mask                        0xFF
#define CCPR4L_clear_mask                        0x0


/*------------------------------#
| CCPR4H                  0xF14 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR4H                                   0x0
#define CCPR4H_address                           0xF14
#define CCPR4H_position                          0x0
#define CCPR4H_size                              0x8
#define CCPR4H_value_mask                        0xFF
#define CCPR4H_clear_mask                        0x0


/*----------------------------------------------------------------#
| CCP3CON                                                   0xF15 |
#-----------------------------------------------------------------#
| P3M1 | P3M0 | DC3B1 | DC3B0 | CCP3M3 | CCP3M2 | CCP3M1 | CCP3M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define CCP3CON                                  0x0
#define CCP3CON_address                          0xF15
#define CCP3CON_position                         0x0
#define CCP3CON_size                             0x8
#define CCP3CON_value_mask                       0xFF
#define CCP3CON_clear_mask                       0x0

#define CCP3M                                    0x0
#define CCP3M_address                            0xF15
#define CCP3M_position                           0x0
#define CCP3M_size                               0x4
#define CCP3M_value_mask                         0xF
#define CCP3M_clear_mask                         0xF0

#define CCP3M0                                   0x0
#define CCP3M0_address                           0xF15
#define CCP3M0_position                          0x0
#define CCP3M0_size                              0x1
#define CCP3M0_value_mask                        0x1
#define CCP3M0_clear_mask                        0xFE

#define CCP3M1                                   0x1
#define CCP3M1_address                           0xF15
#define CCP3M1_position                          0x1
#define CCP3M1_size                              0x1
#define CCP3M1_value_mask                        0x2
#define CCP3M1_clear_mask                        0xFD

#define CCP3M2                                   0x2
#define CCP3M2_address                           0xF15
#define CCP3M2_position                          0x2
#define CCP3M2_size                              0x1
#define CCP3M2_value_mask                        0x4
#define CCP3M2_clear_mask                        0xFB

#define CCP3M3                                   0x3
#define CCP3M3_address                           0xF15
#define CCP3M3_position                          0x3
#define CCP3M3_size                              0x1
#define CCP3M3_value_mask                        0x8
#define CCP3M3_clear_mask                        0xF7

#define DC3B                                     0x4
#define DC3B_address                             0xF15
#define DC3B_position                            0x4
#define DC3B_size                                0x2
#define DC3B_value_mask                          0x30
#define DC3B_clear_mask                          0xCF

#define DC3B0                                    0x4
#define DC3B0_address                            0xF15
#define DC3B0_position                           0x4
#define DC3B0_size                               0x1
#define DC3B0_value_mask                         0x10
#define DC3B0_clear_mask                         0xEF

#define DC3B1                                    0x5
#define DC3B1_address                            0xF15
#define DC3B1_position                           0x5
#define DC3B1_size                               0x1
#define DC3B1_value_mask                         0x20
#define DC3B1_clear_mask                         0xDF

#define P3M                                      0x6
#define P3M_address                              0xF15
#define P3M_position                             0x6
#define P3M_size                                 0x2
#define P3M_value_mask                           0xC0
#define P3M_clear_mask                           0x3F

#define P3M0                                     0x6
#define P3M0_address                             0xF15
#define P3M0_position                            0x6
#define P3M0_size                                0x1
#define P3M0_value_mask                          0x40
#define P3M0_clear_mask                          0xBF

#define P3M1                                     0x7
#define P3M1_address                             0xF15
#define P3M1_position                            0x7
#define P3M1_size                                0x1
#define P3M1_value_mask                          0x80
#define P3M1_clear_mask                          0x7F


/*------------------------------#
| CCPR3L                  0xF16 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR3L                                   0x0
#define CCPR3L_address                           0xF16
#define CCPR3L_position                          0x0
#define CCPR3L_size                              0x8
#define CCPR3L_value_mask                        0xFF
#define CCPR3L_clear_mask                        0x0


/*------------------------------#
| CCPR3H                  0xF17 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR3H                                   0x0
#define CCPR3H_address                           0xF17
#define CCPR3H_position                          0x0
#define CCPR3H_size                              0x8
#define CCPR3H_value_mask                        0xFF
#define CCPR3H_clear_mask                        0x0


/*---------------------------------------------------------------#
| ECCP3DEL                                                 0xF18 |
#----------------------------------------------------------------#
| P3RSEN | P3DC6 | P3DC5 | P3DC4 | P3DC3 | P3DC2 | P3DC1 | P3DC0 |
#----------------------------------------------------------------#
| 7      | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#---------------------------------------------------------------*/

#define ECCP3DEL                                 0x0
#define ECCP3DEL_address                         0xF18
#define ECCP3DEL_position                        0x0
#define ECCP3DEL_size                            0x8
#define ECCP3DEL_value_mask                      0xFF
#define ECCP3DEL_clear_mask                      0x0

#define P3DC                                     0x0
#define P3DC_address                             0xF18
#define P3DC_position                            0x0
#define P3DC_size                                0x7
#define P3DC_value_mask                          0x7F
#define P3DC_clear_mask                          0x80

#define P3DC0                                    0x0
#define P3DC0_address                            0xF18
#define P3DC0_position                           0x0
#define P3DC0_size                               0x1
#define P3DC0_value_mask                         0x1
#define P3DC0_clear_mask                         0xFE

#define P3DC1                                    0x1
#define P3DC1_address                            0xF18
#define P3DC1_position                           0x1
#define P3DC1_size                               0x1
#define P3DC1_value_mask                         0x2
#define P3DC1_clear_mask                         0xFD

#define P3DC2                                    0x2
#define P3DC2_address                            0xF18
#define P3DC2_position                           0x2
#define P3DC2_size                               0x1
#define P3DC2_value_mask                         0x4
#define P3DC2_clear_mask                         0xFB

#define P3DC3                                    0x3
#define P3DC3_address                            0xF18
#define P3DC3_position                           0x3
#define P3DC3_size                               0x1
#define P3DC3_value_mask                         0x8
#define P3DC3_clear_mask                         0xF7

#define P3DC4                                    0x4
#define P3DC4_address                            0xF18
#define P3DC4_position                           0x4
#define P3DC4_size                               0x1
#define P3DC4_value_mask                         0x10
#define P3DC4_clear_mask                         0xEF

#define P3DC5                                    0x5
#define P3DC5_address                            0xF18
#define P3DC5_position                           0x5
#define P3DC5_size                               0x1
#define P3DC5_value_mask                         0x20
#define P3DC5_clear_mask                         0xDF

#define P3DC6                                    0x6
#define P3DC6_address                            0xF18
#define P3DC6_position                           0x6
#define P3DC6_size                               0x1
#define P3DC6_value_mask                         0x40
#define P3DC6_clear_mask                         0xBF

#define P3RSEN                                   0x7
#define P3RSEN_address                           0xF18
#define P3RSEN_position                          0x7
#define P3RSEN_size                              0x1
#define P3RSEN_value_mask                        0x80
#define P3RSEN_clear_mask                        0x7F


/*----------------------------------------------------------------------------------#
| ECCP3AS                                                                     0xF19 |
#-----------------------------------------------------------------------------------#
| ECCP3ASE | ECCP3AS2 | ECCP3AS1 | ECCP3AS0 | PSS3AC1 | PSS3AC0 | PSS3BD1 | PSS3BD0 |
#-----------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------------------------*/

#define PSS3BD0                                  0x0
#define PSS3BD0_address                          0xF19
#define PSS3BD0_position                         0x0
#define PSS3BD0_size                             0x1
#define PSS3BD0_value_mask                       0x1
#define PSS3BD0_clear_mask                       0xFE

#define PSS3BD                                   0x0
#define PSS3BD_address                           0xF19
#define PSS3BD_position                          0x0
#define PSS3BD_size                              0x2
#define PSS3BD_value_mask                        0x3
#define PSS3BD_clear_mask                        0xFC

#define PSS3BD1                                  0x1
#define PSS3BD1_address                          0xF19
#define PSS3BD1_position                         0x1
#define PSS3BD1_size                             0x1
#define PSS3BD1_value_mask                       0x2
#define PSS3BD1_clear_mask                       0xFD

#define PSS3AC0                                  0x2
#define PSS3AC0_address                          0xF19
#define PSS3AC0_position                         0x2
#define PSS3AC0_size                             0x1
#define PSS3AC0_value_mask                       0x4
#define PSS3AC0_clear_mask                       0xFB

#define PSS3AC                                   0x2
#define PSS3AC_address                           0xF19
#define PSS3AC_position                          0x2
#define PSS3AC_size                              0x2
#define PSS3AC_value_mask                        0xC
#define PSS3AC_clear_mask                        0xF3

#define PSS3AC1                                  0x3
#define PSS3AC1_address                          0xF19
#define PSS3AC1_position                         0x3
#define PSS3AC1_size                             0x1
#define PSS3AC1_value_mask                       0x8
#define PSS3AC1_clear_mask                       0xF7

#define ECCP3AS                                  0x4
#define ECCP3AS_address                          0xF19
#define ECCP3AS_position                         0x4
#define ECCP3AS_size                             0x3
#define ECCP3AS_value_mask                       0x70
#define ECCP3AS_clear_mask                       0x8F

#define ECCP3AS0                                 0x4
#define ECCP3AS0_address                         0xF19
#define ECCP3AS0_position                        0x4
#define ECCP3AS0_size                            0x1
#define ECCP3AS0_value_mask                      0x10
#define ECCP3AS0_clear_mask                      0xEF

#define ECCP3AS1                                 0x5
#define ECCP3AS1_address                         0xF19
#define ECCP3AS1_position                        0x5
#define ECCP3AS1_size                            0x1
#define ECCP3AS1_value_mask                      0x20
#define ECCP3AS1_clear_mask                      0xDF

#define ECCP3AS2                                 0x6
#define ECCP3AS2_address                         0xF19
#define ECCP3AS2_position                        0x6
#define ECCP3AS2_size                            0x1
#define ECCP3AS2_value_mask                      0x40
#define ECCP3AS2_clear_mask                      0xBF

#define ECCP3ASE                                 0x7
#define ECCP3ASE_address                         0xF19
#define ECCP3ASE_position                        0x7
#define ECCP3ASE_size                            0x1
#define ECCP3ASE_value_mask                      0x80
#define ECCP3ASE_clear_mask                      0x7F


/*-----------------------------------------------------------------------------------------------#
| PSTR3CON                                                                                 0xF1A |
#------------------------------------------------------------------------------------------------#
| PSTR3CON_CMPL1 | PSTR3CON_CMPL0 | - | STRSYNC3 | PSTR3CON_STRD | STRC3 | STRB3 | PSTR3CON_STRA |
#------------------------------------------------------------------------------------------------#
| 7              | 6              | 5 | 4        | 3             | 2     | 1     | 0             |
#-----------------------------------------------------------------------------------------------*/

#define PSTR3CON                                 0x0
#define PSTR3CON_address                         0xF1A
#define PSTR3CON_position                        0x0
#define PSTR3CON_size                            0x8
#define PSTR3CON_value_mask                      0xFF
#define PSTR3CON_clear_mask                      0x0

#define PSTR3CON_STRA                            0x0
#define PSTR3CON_STRA_address                    0xF1A
#define PSTR3CON_STRA_position                   0x0
#define PSTR3CON_STRA_size                       0x1
#define PSTR3CON_STRA_value_mask                 0x1
#define PSTR3CON_STRA_clear_mask                 0xFE

#define STRA3                                    0x0
#define STRA3_address                            0xF1A
#define STRA3_position                           0x0
#define STRA3_size                               0x1
#define STRA3_value_mask                         0x1
#define STRA3_clear_mask                         0xFE

#define STRB3                                    0x1
#define STRB3_address                            0xF1A
#define STRB3_position                           0x1
#define STRB3_size                               0x1
#define STRB3_value_mask                         0x2
#define STRB3_clear_mask                         0xFD

#define PSTR3CON_STRB                            0x1
#define PSTR3CON_STRB_address                    0xF1A
#define PSTR3CON_STRB_position                   0x1
#define PSTR3CON_STRB_size                       0x1
#define PSTR3CON_STRB_value_mask                 0x2
#define PSTR3CON_STRB_clear_mask                 0xFD

#define PSTR3CON_STRC                            0x2
#define PSTR3CON_STRC_address                    0xF1A
#define PSTR3CON_STRC_position                   0x2
#define PSTR3CON_STRC_size                       0x1
#define PSTR3CON_STRC_value_mask                 0x4
#define PSTR3CON_STRC_clear_mask                 0xFB

#define STRC3                                    0x2
#define STRC3_address                            0xF1A
#define STRC3_position                           0x2
#define STRC3_size                               0x1
#define STRC3_value_mask                         0x4
#define STRC3_clear_mask                         0xFB

#define STRD3                                    0x3
#define STRD3_address                            0xF1A
#define STRD3_position                           0x3
#define STRD3_size                               0x1
#define STRD3_value_mask                         0x8
#define STRD3_clear_mask                         0xF7

#define PSTR3CON_STRD                            0x3
#define PSTR3CON_STRD_address                    0xF1A
#define PSTR3CON_STRD_position                   0x3
#define PSTR3CON_STRD_size                       0x1
#define PSTR3CON_STRD_value_mask                 0x8
#define PSTR3CON_STRD_clear_mask                 0xF7

#define STRSYNC3                                 0x4
#define STRSYNC3_address                         0xF1A
#define STRSYNC3_position                        0x4
#define STRSYNC3_size                            0x1
#define STRSYNC3_value_mask                      0x10
#define STRSYNC3_clear_mask                      0xEF

#define PSTR3CON_STRSYNC                         0x4
#define PSTR3CON_STRSYNC_address                 0xF1A
#define PSTR3CON_STRSYNC_position                0x4
#define PSTR3CON_STRSYNC_size                    0x1
#define PSTR3CON_STRSYNC_value_mask              0x10
#define PSTR3CON_STRSYNC_clear_mask              0xEF

#define CMPL                                     0x6
#define CMPL_address                             0xF1A
#define CMPL_position                            0x6
#define CMPL_size                                0x2
#define CMPL_value_mask                          0xC0
#define CMPL_clear_mask                          0x3F

#define PSTR3CON_CMPL0                           0x6
#define PSTR3CON_CMPL0_address                   0xF1A
#define PSTR3CON_CMPL0_position                  0x6
#define PSTR3CON_CMPL0_size                      0x1
#define PSTR3CON_CMPL0_value_mask                0x40
#define PSTR3CON_CMPL0_clear_mask                0xBF

#define CMPL03                                   0x6
#define CMPL03_address                           0xF1A
#define CMPL03_position                          0x6
#define CMPL03_size                              0x1
#define CMPL03_value_mask                        0x40
#define CMPL03_clear_mask                        0xBF

#define CMPL13                                   0x7
#define CMPL13_address                           0xF1A
#define CMPL13_position                          0x7
#define CMPL13_size                              0x1
#define CMPL13_value_mask                        0x80
#define CMPL13_clear_mask                        0x7F

#define PSTR3CON_CMPL1                           0x7
#define PSTR3CON_CMPL1_address                   0xF1A
#define PSTR3CON_CMPL1_position                  0x7
#define PSTR3CON_CMPL1_size                      0x1
#define PSTR3CON_CMPL1_value_mask                0x80
#define PSTR3CON_CMPL1_clear_mask                0x7F


/*---------------------------------------------------------------------------#
| T8CON                                                                0xF1B |
#----------------------------------------------------------------------------#
| - | T8OUTPS3 | T8OUTPS2 | T8OUTPS1 | T8OUTPS0 | TMR8ON | T8CKPS1 | T8CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T8CON                                    0x0
#define T8CON_address                            0xF1B
#define T8CON_position                           0x0
#define T8CON_size                               0x8
#define T8CON_value_mask                         0xFF
#define T8CON_clear_mask                         0x0

#define T8CKPS0                                  0x0
#define T8CKPS0_address                          0xF1B
#define T8CKPS0_position                         0x0
#define T8CKPS0_size                             0x1
#define T8CKPS0_value_mask                       0x1
#define T8CKPS0_clear_mask                       0xFE

#define T8CKPS                                   0x0
#define T8CKPS_address                           0xF1B
#define T8CKPS_position                          0x0
#define T8CKPS_size                              0x2
#define T8CKPS_value_mask                        0x3
#define T8CKPS_clear_mask                        0xFC

#define T8CKPS1                                  0x1
#define T8CKPS1_address                          0xF1B
#define T8CKPS1_position                         0x1
#define T8CKPS1_size                             0x1
#define T8CKPS1_value_mask                       0x2
#define T8CKPS1_clear_mask                       0xFD

#define TMR8ON                                   0x2
#define TMR8ON_address                           0xF1B
#define TMR8ON_position                          0x2
#define TMR8ON_size                              0x1
#define TMR8ON_value_mask                        0x4
#define TMR8ON_clear_mask                        0xFB

#define T8OUTPS                                  0x3
#define T8OUTPS_address                          0xF1B
#define T8OUTPS_position                         0x3
#define T8OUTPS_size                             0x4
#define T8OUTPS_value_mask                       0x78
#define T8OUTPS_clear_mask                       0x87

#define T8OUTPS0                                 0x3
#define T8OUTPS0_address                         0xF1B
#define T8OUTPS0_position                        0x3
#define T8OUTPS0_size                            0x1
#define T8OUTPS0_value_mask                      0x8
#define T8OUTPS0_clear_mask                      0xF7

#define T8OUTPS1                                 0x4
#define T8OUTPS1_address                         0xF1B
#define T8OUTPS1_position                        0x4
#define T8OUTPS1_size                            0x1
#define T8OUTPS1_value_mask                      0x10
#define T8OUTPS1_clear_mask                      0xEF

#define T8OUTPS2                                 0x5
#define T8OUTPS2_address                         0xF1B
#define T8OUTPS2_position                        0x5
#define T8OUTPS2_size                            0x1
#define T8OUTPS2_value_mask                      0x20
#define T8OUTPS2_clear_mask                      0xDF

#define T8OUTPS3                                 0x6
#define T8OUTPS3_address                         0xF1B
#define T8OUTPS3_position                        0x6
#define T8OUTPS3_size                            0x1
#define T8OUTPS3_value_mask                      0x40
#define T8OUTPS3_clear_mask                      0xBF


/*------------------------------#
| PR8                     0xF1C |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR8                                      0x0
#define PR8_address                              0xF1C
#define PR8_position                             0x0
#define PR8_size                                 0x8
#define PR8_value_mask                           0xFF
#define PR8_clear_mask                           0x0


/*------------------------------#
| TMR8                    0xF1D |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR8                                     0x0
#define TMR8_address                             0xF1D
#define TMR8_position                            0x0
#define TMR8_size                                0x8
#define TMR8_value_mask                          0xFF
#define TMR8_clear_mask                          0x0


/*---------------------------------------------------------------------------#
| T6CON                                                                0xF1E |
#----------------------------------------------------------------------------#
| - | T6OUTPS3 | T6OUTPS2 | T6OUTPS1 | T6OUTPS0 | TMR6ON | T6CKPS1 | T6CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T6CON                                    0x0
#define T6CON_address                            0xF1E
#define T6CON_position                           0x0
#define T6CON_size                               0x8
#define T6CON_value_mask                         0xFF
#define T6CON_clear_mask                         0x0

#define T6CKPS0                                  0x0
#define T6CKPS0_address                          0xF1E
#define T6CKPS0_position                         0x0
#define T6CKPS0_size                             0x1
#define T6CKPS0_value_mask                       0x1
#define T6CKPS0_clear_mask                       0xFE

#define T6CKPS                                   0x0
#define T6CKPS_address                           0xF1E
#define T6CKPS_position                          0x0
#define T6CKPS_size                              0x2
#define T6CKPS_value_mask                        0x3
#define T6CKPS_clear_mask                        0xFC

#define T6CKPS1                                  0x1
#define T6CKPS1_address                          0xF1E
#define T6CKPS1_position                         0x1
#define T6CKPS1_size                             0x1
#define T6CKPS1_value_mask                       0x2
#define T6CKPS1_clear_mask                       0xFD

#define TMR6ON                                   0x2
#define TMR6ON_address                           0xF1E
#define TMR6ON_position                          0x2
#define TMR6ON_size                              0x1
#define TMR6ON_value_mask                        0x4
#define TMR6ON_clear_mask                        0xFB

#define T6OUTPS0                                 0x3
#define T6OUTPS0_address                         0xF1E
#define T6OUTPS0_position                        0x3
#define T6OUTPS0_size                            0x1
#define T6OUTPS0_value_mask                      0x8
#define T6OUTPS0_clear_mask                      0xF7

#define T6OUTPS                                  0x3
#define T6OUTPS_address                          0xF1E
#define T6OUTPS_position                         0x3
#define T6OUTPS_size                             0x4
#define T6OUTPS_value_mask                       0x78
#define T6OUTPS_clear_mask                       0x87

#define T6OUTPS1                                 0x4
#define T6OUTPS1_address                         0xF1E
#define T6OUTPS1_position                        0x4
#define T6OUTPS1_size                            0x1
#define T6OUTPS1_value_mask                      0x10
#define T6OUTPS1_clear_mask                      0xEF

#define T6OUTPS2                                 0x5
#define T6OUTPS2_address                         0xF1E
#define T6OUTPS2_position                        0x5
#define T6OUTPS2_size                            0x1
#define T6OUTPS2_value_mask                      0x20
#define T6OUTPS2_clear_mask                      0xDF

#define T6OUTPS3                                 0x6
#define T6OUTPS3_address                         0xF1E
#define T6OUTPS3_position                        0x6
#define T6OUTPS3_size                            0x1
#define T6OUTPS3_value_mask                      0x40
#define T6OUTPS3_clear_mask                      0xBF


/*------------------------------#
| PR6                     0xF1F |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR6                                      0x0
#define PR6_address                              0xF1F
#define PR6_position                             0x0
#define PR6_size                                 0x8
#define PR6_value_mask                           0xFF
#define PR6_clear_mask                           0x0


/*------------------------------#
| TMR6                    0xF20 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR6                                     0x0
#define TMR6_address                             0xF20
#define TMR6_position                            0x0
#define TMR6_size                                0x8
#define TMR6_value_mask                          0xFF
#define TMR6_clear_mask                          0x0


/*---------------------------------------------------------------------#
| T5GCON                                                         0xF21 |
#----------------------------------------------------------------------#
| TMR5GE | T5GPOL | T5GTM | T5GSPM | T5DONE | T5GVAL | T5GSS1 | T5GSS0 |
#----------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------------*/

#define T5GCON                                   0x0
#define T5GCON_address                           0xF21
#define T5GCON_position                          0x0
#define T5GCON_size                              0x8
#define T5GCON_value_mask                        0xFF
#define T5GCON_clear_mask                        0x0

#define T5GSS                                    0x0
#define T5GSS_address                            0xF21
#define T5GSS_position                           0x0
#define T5GSS_size                               0x2
#define T5GSS_value_mask                         0x3
#define T5GSS_clear_mask                         0xFC

#define T5GSS0                                   0x0
#define T5GSS0_address                           0xF21
#define T5GSS0_position                          0x0
#define T5GSS0_size                              0x1
#define T5GSS0_value_mask                        0x1
#define T5GSS0_clear_mask                        0xFE

#define T5GSS1                                   0x1
#define T5GSS1_address                           0xF21
#define T5GSS1_position                          0x1
#define T5GSS1_size                              0x1
#define T5GSS1_value_mask                        0x2
#define T5GSS1_clear_mask                        0xFD

#define T5GVAL                                   0x2
#define T5GVAL_address                           0xF21
#define T5GVAL_position                          0x2
#define T5GVAL_size                              0x1
#define T5GVAL_value_mask                        0x4
#define T5GVAL_clear_mask                        0xFB

#define T5DONE                                   0x3
#define T5DONE_address                           0xF21
#define T5DONE_position                          0x3
#define T5DONE_size                              0x1
#define T5DONE_value_mask                        0x8
#define T5DONE_clear_mask                        0xF7

#define T5GGO_NOT_T5DONE                         0x3
#define T5GGO_NOT_T5DONE_address                 0xF21
#define T5GGO_NOT_T5DONE_position                0x3
#define T5GGO_NOT_T5DONE_size                    0x1
#define T5GGO_NOT_T5DONE_value_mask              0x8
#define T5GGO_NOT_T5DONE_clear_mask              0xF7

#define nT5DONE                                  0x3
#define nT5DONE_address                          0xF21
#define nT5DONE_position                         0x3
#define nT5DONE_size                             0x1
#define nT5DONE_value_mask                       0x8
#define nT5DONE_clear_mask                       0xF7

#define T5GGO_nT5DONE                            0x3
#define T5GGO_nT5DONE_address                    0xF21
#define T5GGO_nT5DONE_position                   0x3
#define T5GGO_nT5DONE_size                       0x1
#define T5GGO_nT5DONE_value_mask                 0x8
#define T5GGO_nT5DONE_clear_mask                 0xF7

#define NOT_T5DONE                               0x3
#define NOT_T5DONE_address                       0xF21
#define NOT_T5DONE_position                      0x3
#define NOT_T5DONE_size                          0x1
#define NOT_T5DONE_value_mask                    0x8
#define NOT_T5DONE_clear_mask                    0xF7

#define T5GGO                                    0x3
#define T5GGO_address                            0xF21
#define T5GGO_position                           0x3
#define T5GGO_size                               0x1
#define T5GGO_value_mask                         0x8
#define T5GGO_clear_mask                         0xF7

#define T5GSPM                                   0x4
#define T5GSPM_address                           0xF21
#define T5GSPM_position                          0x4
#define T5GSPM_size                              0x1
#define T5GSPM_value_mask                        0x10
#define T5GSPM_clear_mask                        0xEF

#define T5GTM                                    0x5
#define T5GTM_address                            0xF21
#define T5GTM_position                           0x5
#define T5GTM_size                               0x1
#define T5GTM_value_mask                         0x20
#define T5GTM_clear_mask                         0xDF

#define T5GPOL                                   0x6
#define T5GPOL_address                           0xF21
#define T5GPOL_position                          0x6
#define T5GPOL_size                              0x1
#define T5GPOL_value_mask                        0x40
#define T5GPOL_clear_mask                        0xBF

#define TMR5GE                                   0x7
#define TMR5GE_address                           0xF21
#define TMR5GE_position                          0x7
#define TMR5GE_size                              0x1
#define TMR5GE_value_mask                        0x80
#define TMR5GE_clear_mask                        0x7F


/*--------------------------------------------------------------------------------#
| T5CON                                                                     0xF22 |
#---------------------------------------------------------------------------------#
| TMR5CS1 | TMR5CS0 | T5CKPS1 | T5CKPS0 | SOSCEN5 | nT5SYNC | T5CON_RD16 | TMR5ON |
#---------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1          | 0      |
#--------------------------------------------------------------------------------*/

#define T5CON                                    0x0
#define T5CON_address                            0xF22
#define T5CON_position                           0x0
#define T5CON_size                               0x8
#define T5CON_value_mask                         0xFF
#define T5CON_clear_mask                         0x0

#define TMR5ON                                   0x0
#define TMR5ON_address                           0xF22
#define TMR5ON_position                          0x0
#define TMR5ON_size                              0x1
#define TMR5ON_value_mask                        0x1
#define TMR5ON_clear_mask                        0xFE

#define T5CON_RD16                               0x1
#define T5CON_RD16_address                       0xF22
#define T5CON_RD16_position                      0x1
#define T5CON_RD16_size                          0x1
#define T5CON_RD16_value_mask                    0x2
#define T5CON_RD16_clear_mask                    0xFD

#define RD165                                    0x1
#define RD165_address                            0xF22
#define RD165_position                           0x1
#define RD165_size                               0x1
#define RD165_value_mask                         0x2
#define RD165_clear_mask                         0xFD

#define nT5SYNC                                  0x2
#define nT5SYNC_address                          0xF22
#define nT5SYNC_position                         0x2
#define nT5SYNC_size                             0x1
#define nT5SYNC_value_mask                       0x4
#define nT5SYNC_clear_mask                       0xFB

#define NOT_T5SYNC                               0x2
#define NOT_T5SYNC_address                       0xF22
#define NOT_T5SYNC_position                      0x2
#define NOT_T5SYNC_size                          0x1
#define NOT_T5SYNC_value_mask                    0x4
#define NOT_T5SYNC_clear_mask                    0xFB

#define SOSCEN5                                  0x3
#define SOSCEN5_address                          0xF22
#define SOSCEN5_position                         0x3
#define SOSCEN5_size                             0x1
#define SOSCEN5_value_mask                       0x8
#define SOSCEN5_clear_mask                       0xF7

#define T5OSCEN                                  0x3
#define T5OSCEN_address                          0xF22
#define T5OSCEN_position                         0x3
#define T5OSCEN_size                             0x1
#define T5OSCEN_value_mask                       0x8
#define T5OSCEN_clear_mask                       0xF7

#define T5CKPS                                   0x4
#define T5CKPS_address                           0xF22
#define T5CKPS_position                          0x4
#define T5CKPS_size                              0x2
#define T5CKPS_value_mask                        0x30
#define T5CKPS_clear_mask                        0xCF

#define T5CKPS0                                  0x4
#define T5CKPS0_address                          0xF22
#define T5CKPS0_position                         0x4
#define T5CKPS0_size                             0x1
#define T5CKPS0_value_mask                       0x10
#define T5CKPS0_clear_mask                       0xEF

#define T5CKPS1                                  0x5
#define T5CKPS1_address                          0xF22
#define T5CKPS1_position                         0x5
#define T5CKPS1_size                             0x1
#define T5CKPS1_value_mask                       0x20
#define T5CKPS1_clear_mask                       0xDF

#define TMR5CS0                                  0x6
#define TMR5CS0_address                          0xF22
#define TMR5CS0_position                         0x6
#define TMR5CS0_size                             0x1
#define TMR5CS0_value_mask                       0x40
#define TMR5CS0_clear_mask                       0xBF

#define TMR5CS                                   0x6
#define TMR5CS_address                           0xF22
#define TMR5CS_position                          0x6
#define TMR5CS_size                              0x2
#define TMR5CS_value_mask                        0xC0
#define TMR5CS_clear_mask                        0x3F

#define TMR5CS1                                  0x7
#define TMR5CS1_address                          0xF22
#define TMR5CS1_position                         0x7
#define TMR5CS1_size                             0x1
#define TMR5CS1_value_mask                       0x80
#define TMR5CS1_clear_mask                       0x7F


/*------------------------------#
| TMR5L                   0xF23 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR5L                                    0x0
#define TMR5L_address                            0xF23
#define TMR5L_position                           0x0
#define TMR5L_size                               0x8
#define TMR5L_value_mask                         0xFF
#define TMR5L_clear_mask                         0x0


/*------------------------------#
| TMR5H                   0xF24 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR5H                                    0x0
#define TMR5H_address                            0xF24
#define TMR5H_position                           0x0
#define TMR5H_size                               0x8
#define TMR5H_value_mask                         0xFF
#define TMR5H_clear_mask                         0x0


/*----------------------------------------------------------------------------------------------------#
| CM3CON                                                                                        0xF25 |
#-----------------------------------------------------------------------------------------------------#
| CM3CON_CON | CM3CON_COE | CM3CON_CPOL | CM3CON_EVPOL1 | EVPOL03 | CREF3 | CM3CON_CCH1 | CM3CON_CCH0 |
#-----------------------------------------------------------------------------------------------------#
| 7          | 6          | 5           | 4             | 3       | 2     | 1           | 0           |
#----------------------------------------------------------------------------------------------------*/

#define CM3CON                                   0x0
#define CM3CON_address                           0xF25
#define CM3CON_position                          0x0
#define CM3CON_size                              0x8
#define CM3CON_value_mask                        0xFF
#define CM3CON_clear_mask                        0x0

#define CM3CON_CCH                               0x0
#define CM3CON_CCH_address                       0xF25
#define CM3CON_CCH_position                      0x0
#define CM3CON_CCH_size                          0x2
#define CM3CON_CCH_value_mask                    0x3
#define CM3CON_CCH_clear_mask                    0xFC

#define CCH03                                    0x0
#define CCH03_address                            0xF25
#define CCH03_position                           0x0
#define CCH03_size                               0x1
#define CCH03_value_mask                         0x1
#define CCH03_clear_mask                         0xFE

#define CM3CON_CCH0                              0x0
#define CM3CON_CCH0_address                      0xF25
#define CM3CON_CCH0_position                     0x0
#define CM3CON_CCH0_size                         0x1
#define CM3CON_CCH0_value_mask                   0x1
#define CM3CON_CCH0_clear_mask                   0xFE

#define CCH13                                    0x1
#define CCH13_address                            0xF25
#define CCH13_position                           0x1
#define CCH13_size                               0x1
#define CCH13_value_mask                         0x2
#define CCH13_clear_mask                         0xFD

#define CM3CON_CCH1                              0x1
#define CM3CON_CCH1_address                      0xF25
#define CM3CON_CCH1_position                     0x1
#define CM3CON_CCH1_size                         0x1
#define CM3CON_CCH1_value_mask                   0x2
#define CM3CON_CCH1_clear_mask                   0xFD

#define CM3CON_CREF                              0x2
#define CM3CON_CREF_address                      0xF25
#define CM3CON_CREF_position                     0x2
#define CM3CON_CREF_size                         0x1
#define CM3CON_CREF_value_mask                   0x4
#define CM3CON_CREF_clear_mask                   0xFB

#define CREF3                                    0x2
#define CREF3_address                            0xF25
#define CREF3_position                           0x2
#define CREF3_size                               0x1
#define CREF3_value_mask                         0x4
#define CREF3_clear_mask                         0xFB

#define CM3CON_EVPOL                             0x3
#define CM3CON_EVPOL_address                     0xF25
#define CM3CON_EVPOL_position                    0x3
#define CM3CON_EVPOL_size                        0x2
#define CM3CON_EVPOL_value_mask                  0x18
#define CM3CON_EVPOL_clear_mask                  0xE7

#define EVPOL03                                  0x3
#define EVPOL03_address                          0xF25
#define EVPOL03_position                         0x3
#define EVPOL03_size                             0x1
#define EVPOL03_value_mask                       0x8
#define EVPOL03_clear_mask                       0xF7

#define CM3CON_EVPOL0                            0x3
#define CM3CON_EVPOL0_address                    0xF25
#define CM3CON_EVPOL0_position                   0x3
#define CM3CON_EVPOL0_size                       0x1
#define CM3CON_EVPOL0_value_mask                 0x8
#define CM3CON_EVPOL0_clear_mask                 0xF7

#define CM3CON_EVPOL1                            0x4
#define CM3CON_EVPOL1_address                    0xF25
#define CM3CON_EVPOL1_position                   0x4
#define CM3CON_EVPOL1_size                       0x1
#define CM3CON_EVPOL1_value_mask                 0x10
#define CM3CON_EVPOL1_clear_mask                 0xEF

#define EVPOL13                                  0x4
#define EVPOL13_address                          0xF25
#define EVPOL13_position                         0x4
#define EVPOL13_size                             0x1
#define EVPOL13_value_mask                       0x10
#define EVPOL13_clear_mask                       0xEF

#define CM3CON_CPOL                              0x5
#define CM3CON_CPOL_address                      0xF25
#define CM3CON_CPOL_position                     0x5
#define CM3CON_CPOL_size                         0x1
#define CM3CON_CPOL_value_mask                   0x20
#define CM3CON_CPOL_clear_mask                   0xDF

#define CPOL3                                    0x5
#define CPOL3_address                            0xF25
#define CPOL3_position                           0x5
#define CPOL3_size                               0x1
#define CPOL3_value_mask                         0x20
#define CPOL3_clear_mask                         0xDF

#define COE3                                     0x6
#define COE3_address                             0xF25
#define COE3_position                            0x6
#define COE3_size                                0x1
#define COE3_value_mask                          0x40
#define COE3_clear_mask                          0xBF

#define CM3CON_COE                               0x6
#define CM3CON_COE_address                       0xF25
#define CM3CON_COE_position                      0x6
#define CM3CON_COE_size                          0x1
#define CM3CON_COE_value_mask                    0x40
#define CM3CON_COE_clear_mask                    0xBF

#define CM3CON_CON                               0x7
#define CM3CON_CON_address                       0xF25
#define CM3CON_CON_position                      0x7
#define CM3CON_CON_size                          0x1
#define CM3CON_CON_value_mask                    0x80
#define CM3CON_CON_clear_mask                    0x7F

#define CON3                                     0x7
#define CON3_address                             0xF25
#define CON3_position                            0x7
#define CON3_size                                0x1
#define CON3_value_mask                          0x80
#define CON3_clear_mask                          0x7F


/*------------------------------#
| RTCVALL                 0xF3A |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RTCVALL                                  0x0
#define RTCVALL_address                          0xF3A
#define RTCVALL_position                         0x0
#define RTCVALL_size                             0x8
#define RTCVALL_value_mask                       0xFF
#define RTCVALL_clear_mask                       0x0


/*----------------------------------------------------------------------#
| RTCVALH                                                         0xF3B |
#-----------------------------------------------------------------------#
| WAITB1 | WAITB0 | WAITM3 | WAITM2 | WAITM1 | WAITM0 | WAITE1 | WAITE0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define WAITE0                                   0x0
#define WAITE0_address                           0xF3B
#define WAITE0_position                          0x0
#define WAITE0_size                              0x1
#define WAITE0_value_mask                        0x1
#define WAITE0_clear_mask                        0xFE

#define RTCVALH                                  0x0
#define RTCVALH_address                          0xF3B
#define RTCVALH_position                         0x0
#define RTCVALH_size                             0x8
#define RTCVALH_value_mask                       0xFF
#define RTCVALH_clear_mask                       0x0

#define WAITE1                                   0x1
#define WAITE1_address                           0xF3B
#define WAITE1_position                          0x1
#define WAITE1_size                              0x1
#define WAITE1_value_mask                        0x2
#define WAITE1_clear_mask                        0xFD

#define WAITM0                                   0x2
#define WAITM0_address                           0xF3B
#define WAITM0_position                          0x2
#define WAITM0_size                              0x1
#define WAITM0_value_mask                        0x4
#define WAITM0_clear_mask                        0xFB

#define WAITM1                                   0x3
#define WAITM1_address                           0xF3B
#define WAITM1_position                          0x3
#define WAITM1_size                              0x1
#define WAITM1_value_mask                        0x8
#define WAITM1_clear_mask                        0xF7

#define WAITM2                                   0x4
#define WAITM2_address                           0xF3B
#define WAITM2_position                          0x4
#define WAITM2_size                              0x1
#define WAITM2_value_mask                        0x10
#define WAITM2_clear_mask                        0xEF

#define WAITM3                                   0x5
#define WAITM3_address                           0xF3B
#define WAITM3_position                          0x5
#define WAITM3_size                              0x1
#define WAITM3_value_mask                        0x20
#define WAITM3_clear_mask                        0xDF

#define WAITB0                                   0x6
#define WAITB0_address                           0xF3B
#define WAITB0_position                          0x6
#define WAITB0_size                              0x1
#define WAITB0_value_mask                        0x40
#define WAITB0_clear_mask                        0xBF

#define WAITB1                                   0x7
#define WAITB1_address                           0xF3B
#define WAITB1_position                          0x7
#define WAITB1_size                              0x1
#define WAITB1_value_mask                        0x80
#define WAITB1_clear_mask                        0x7F


/*----------------------------------------------#
| PADCFG1                                 0xF3C |
#-----------------------------------------------#
| - | - | - | - | - | RTSECSEL1 | RTSECSEL0 | - |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2         | 1         | 0 |
#----------------------------------------------*/

#define PADCFG1                                  0x0
#define PADCFG1_address                          0xF3C
#define PADCFG1_position                         0x0
#define PADCFG1_size                             0x8
#define PADCFG1_value_mask                       0xFF
#define PADCFG1_clear_mask                       0x0

#define RTSECSEL0                                0x1
#define RTSECSEL0_address                        0xF3C
#define RTSECSEL0_position                       0x1
#define RTSECSEL0_size                           0x1
#define RTSECSEL0_value_mask                     0x2
#define RTSECSEL0_clear_mask                     0xFD

#define RTSECSEL1                                0x2
#define RTSECSEL1_address                        0xF3C
#define RTSECSEL1_position                       0x2
#define RTSECSEL1_size                           0x1
#define RTSECSEL1_value_mask                     0x4
#define RTSECSEL1_clear_mask                     0xFB


/*--------------------------------------------------------------#
| REFOCON                                                 0xF3D |
#---------------------------------------------------------------#
| ROON | - | ROSSLP | ROSEL | RODIV3 | RODIV2 | RODIV1 | RODIV0 |
#---------------------------------------------------------------#
| 7    | 6 | 5      | 4     | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------*/

#define REFOCON                                  0x0
#define REFOCON_address                          0xF3D
#define REFOCON_position                         0x0
#define REFOCON_size                             0x8
#define REFOCON_value_mask                       0xFF
#define REFOCON_clear_mask                       0x0

#define RODIV0                                   0x0
#define RODIV0_address                           0xF3D
#define RODIV0_position                          0x0
#define RODIV0_size                              0x1
#define RODIV0_value_mask                        0x1
#define RODIV0_clear_mask                        0xFE

#define RODIV                                    0x0
#define RODIV_address                            0xF3D
#define RODIV_position                           0x0
#define RODIV_size                               0x4
#define RODIV_value_mask                         0xF
#define RODIV_clear_mask                         0xF0

#define RODIV1                                   0x1
#define RODIV1_address                           0xF3D
#define RODIV1_position                          0x1
#define RODIV1_size                              0x1
#define RODIV1_value_mask                        0x2
#define RODIV1_clear_mask                        0xFD

#define RODIV2                                   0x2
#define RODIV2_address                           0xF3D
#define RODIV2_position                          0x2
#define RODIV2_size                              0x1
#define RODIV2_value_mask                        0x4
#define RODIV2_clear_mask                        0xFB

#define RODIV3                                   0x3
#define RODIV3_address                           0xF3D
#define RODIV3_position                          0x3
#define RODIV3_size                              0x1
#define RODIV3_value_mask                        0x8
#define RODIV3_clear_mask                        0xF7

#define ROSEL                                    0x4
#define ROSEL_address                            0xF3D
#define ROSEL_position                           0x4
#define ROSEL_size                               0x1
#define ROSEL_value_mask                         0x10
#define ROSEL_clear_mask                         0xEF

#define ROSSLP                                   0x5
#define ROSSLP_address                           0xF3D
#define ROSSLP_position                          0x5
#define ROSSLP_size                              0x1
#define ROSSLP_value_mask                        0x20
#define ROSSLP_clear_mask                        0xDF

#define ROON                                     0x7
#define ROON_address                             0xF3D
#define ROON_position                            0x7
#define ROON_size                                0x1
#define ROON_value_mask                          0x80
#define ROON_clear_mask                          0x7F


/*------------------------------------------------------#
| RTCCAL                                          0xF3E |
#-------------------------------------------------------#
| CAL7 | CAL6 | CAL5 | CAL4 | CAL3 | CAL2 | CAL1 | CAL0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define RTCCAL                                   0x0
#define RTCCAL_address                           0xF3E
#define RTCCAL_position                          0x0
#define RTCCAL_size                              0x8
#define RTCCAL_value_mask                        0xFF
#define RTCCAL_clear_mask                        0x0

#define CAL0                                     0x0
#define CAL0_address                             0xF3E
#define CAL0_position                            0x0
#define CAL0_size                                0x1
#define CAL0_value_mask                          0x1
#define CAL0_clear_mask                          0xFE

#define CAL                                      0x0
#define CAL_address                              0xF3E
#define CAL_position                             0x0
#define CAL_size                                 0x8
#define CAL_value_mask                           0xFF
#define CAL_clear_mask                           0x0

#define CAL1                                     0x1
#define CAL1_address                             0xF3E
#define CAL1_position                            0x1
#define CAL1_size                                0x1
#define CAL1_value_mask                          0x2
#define CAL1_clear_mask                          0xFD

#define CAL2                                     0x2
#define CAL2_address                             0xF3E
#define CAL2_position                            0x2
#define CAL2_size                                0x1
#define CAL2_value_mask                          0x4
#define CAL2_clear_mask                          0xFB

#define CAL3                                     0x3
#define CAL3_address                             0xF3E
#define CAL3_position                            0x3
#define CAL3_size                                0x1
#define CAL3_value_mask                          0x8
#define CAL3_clear_mask                          0xF7

#define CAL4                                     0x4
#define CAL4_address                             0xF3E
#define CAL4_position                            0x4
#define CAL4_size                                0x1
#define CAL4_value_mask                          0x10
#define CAL4_clear_mask                          0xEF

#define CAL5                                     0x5
#define CAL5_address                             0xF3E
#define CAL5_position                            0x5
#define CAL5_size                                0x1
#define CAL5_value_mask                          0x20
#define CAL5_clear_mask                          0xDF

#define CAL6                                     0x6
#define CAL6_address                             0xF3E
#define CAL6_position                            0x6
#define CAL6_size                                0x1
#define CAL6_value_mask                          0x40
#define CAL6_clear_mask                          0xBF

#define CAL7                                     0x7
#define CAL7_address                             0xF3E
#define CAL7_position                            0x7
#define CAL7_size                                0x1
#define CAL7_value_mask                          0x80
#define CAL7_clear_mask                          0x7F


/*--------------------------------------------------------------------#
| RTCCFG                                                        0xF3F |
#---------------------------------------------------------------------#
| RTCEN | - | RTCWREN | RTCSYNC | HALFSEC | RTCOE | RTCPTR1 | RTCPTR0 |
#---------------------------------------------------------------------#
| 7     | 6 | 5       | 4       | 3       | 2     | 1       | 0       |
#--------------------------------------------------------------------*/

#define RTCCFG                                   0x0
#define RTCCFG_address                           0xF3F
#define RTCCFG_position                          0x0
#define RTCCFG_size                              0x8
#define RTCCFG_value_mask                        0xFF
#define RTCCFG_clear_mask                        0x0

#define RTCPTR0                                  0x0
#define RTCPTR0_address                          0xF3F
#define RTCPTR0_position                         0x0
#define RTCPTR0_size                             0x1
#define RTCPTR0_value_mask                       0x1
#define RTCPTR0_clear_mask                       0xFE

#define RTCPTR1                                  0x1
#define RTCPTR1_address                          0xF3F
#define RTCPTR1_position                         0x1
#define RTCPTR1_size                             0x1
#define RTCPTR1_value_mask                       0x2
#define RTCPTR1_clear_mask                       0xFD

#define RTCOE                                    0x2
#define RTCOE_address                            0xF3F
#define RTCOE_position                           0x2
#define RTCOE_size                               0x1
#define RTCOE_value_mask                         0x4
#define RTCOE_clear_mask                         0xFB

#define HALFSEC                                  0x3
#define HALFSEC_address                          0xF3F
#define HALFSEC_position                         0x3
#define HALFSEC_size                             0x1
#define HALFSEC_value_mask                       0x8
#define HALFSEC_clear_mask                       0xF7

#define RTCSYNC                                  0x4
#define RTCSYNC_address                          0xF3F
#define RTCSYNC_position                         0x4
#define RTCSYNC_size                             0x1
#define RTCSYNC_value_mask                       0x10
#define RTCSYNC_clear_mask                       0xEF

#define RTCWREN                                  0x5
#define RTCWREN_address                          0xF3F
#define RTCWREN_position                         0x5
#define RTCWREN_size                             0x1
#define RTCWREN_value_mask                       0x20
#define RTCWREN_clear_mask                       0xDF

#define RTCEN                                    0x7
#define RTCEN_address                            0xF3F
#define RTCEN_position                           0x7
#define RTCEN_size                               0x1
#define RTCEN_value_mask                         0x80
#define RTCEN_clear_mask                         0x7F


/*---------------------------------------------#
| ODCON3                                 0xF40 |
#----------------------------------------------#
| CTMUDS | - | - | - | - | - | SPI2OD | SPI1OD |
#----------------------------------------------#
| 7      | 6 | 5 | 4 | 3 | 2 | 1      | 0      |
#---------------------------------------------*/

#define ODCON3                                   0x0
#define ODCON3_address                           0xF40
#define ODCON3_position                          0x0
#define ODCON3_size                              0x8
#define ODCON3_value_mask                        0xFF
#define ODCON3_clear_mask                        0x0

#define SPI1OD                                   0x0
#define SPI1OD_address                           0xF40
#define SPI1OD_position                          0x0
#define SPI1OD_size                              0x1
#define SPI1OD_value_mask                        0x1
#define SPI1OD_clear_mask                        0xFE

#define SPI2OD                                   0x1
#define SPI2OD_address                           0xF40
#define SPI2OD_position                          0x1
#define SPI2OD_size                              0x1
#define SPI2OD_value_mask                        0x2
#define SPI2OD_clear_mask                        0xFD

#define CTMUDS                                   0x7
#define CTMUDS_address                           0xF40
#define CTMUDS_position                          0x7
#define CTMUDS_size                              0x1
#define CTMUDS_value_mask                        0x80
#define CTMUDS_clear_mask                        0x7F


/*-----------------------------------------------#
| ODCON2                                   0xF41 |
#------------------------------------------------#
| - | - | - | - | CCP10OD | CCP9OD | U2OD | U1OD |
#------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2      | 1    | 0    |
#-----------------------------------------------*/

#define ODCON2                                   0x0
#define ODCON2_address                           0xF41
#define ODCON2_position                          0x0
#define ODCON2_size                              0x8
#define ODCON2_value_mask                        0xFF
#define ODCON2_clear_mask                        0x0

#define U1OD                                     0x0
#define U1OD_address                             0xF41
#define U1OD_position                            0x0
#define U1OD_size                                0x1
#define U1OD_value_mask                          0x1
#define U1OD_clear_mask                          0xFE

#define U2OD                                     0x1
#define U2OD_address                             0xF41
#define U2OD_position                            0x1
#define U2OD_size                                0x1
#define U2OD_value_mask                          0x2
#define U2OD_clear_mask                          0xFD

#define CCP9OD                                   0x2
#define CCP9OD_address                           0xF41
#define CCP9OD_position                          0x2
#define CCP9OD_size                              0x1
#define CCP9OD_value_mask                        0x4
#define CCP9OD_clear_mask                        0xFB

#define CCP10OD                                  0x3
#define CCP10OD_address                          0xF41
#define CCP10OD_position                         0x3
#define CCP10OD_size                             0x1
#define CCP10OD_value_mask                       0x8
#define CCP10OD_clear_mask                       0xF7


/*-------------------------------------------------------------------------#
| ODCON1                                                             0xF42 |
#--------------------------------------------------------------------------#
| CCP8OD | CCP7OD | CCP6OD | CCP5OD | CCP4OD | ECCP3OD | ECCP2OD | ECCP1OD |
#--------------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2       | 1       | 0       |
#-------------------------------------------------------------------------*/

#define ODCON1                                   0x0
#define ODCON1_address                           0xF42
#define ODCON1_position                          0x0
#define ODCON1_size                              0x8
#define ODCON1_value_mask                        0xFF
#define ODCON1_clear_mask                        0x0

#define ECCP1OD                                  0x0
#define ECCP1OD_address                          0xF42
#define ECCP1OD_position                         0x0
#define ECCP1OD_size                             0x1
#define ECCP1OD_value_mask                       0x1
#define ECCP1OD_clear_mask                       0xFE

#define ECCP2OD                                  0x1
#define ECCP2OD_address                          0xF42
#define ECCP2OD_position                         0x1
#define ECCP2OD_size                             0x1
#define ECCP2OD_value_mask                       0x2
#define ECCP2OD_clear_mask                       0xFD

#define ECCP3OD                                  0x2
#define ECCP3OD_address                          0xF42
#define ECCP3OD_position                         0x2
#define ECCP3OD_size                             0x1
#define ECCP3OD_value_mask                       0x4
#define ECCP3OD_clear_mask                       0xFB

#define CCP4OD                                   0x3
#define CCP4OD_address                           0xF42
#define CCP4OD_position                          0x3
#define CCP4OD_size                              0x1
#define CCP4OD_value_mask                        0x8
#define CCP4OD_clear_mask                        0xF7

#define CCP5OD                                   0x4
#define CCP5OD_address                           0xF42
#define CCP5OD_position                          0x4
#define CCP5OD_size                              0x1
#define CCP5OD_value_mask                        0x10
#define CCP5OD_clear_mask                        0xEF

#define CCP6OD                                   0x5
#define CCP6OD_address                           0xF42
#define CCP6OD_position                          0x5
#define CCP6OD_size                              0x1
#define CCP6OD_value_mask                        0x20
#define CCP6OD_clear_mask                        0xDF

#define CCP7OD                                   0x6
#define CCP7OD_address                           0xF42
#define CCP7OD_position                          0x6
#define CCP7OD_size                              0x1
#define CCP7OD_value_mask                        0x40
#define CCP7OD_clear_mask                        0xBF

#define CCP8OD                                   0x7
#define CCP8OD_address                           0xF42
#define CCP8OD_position                          0x7
#define CCP8OD_size                              0x1
#define CCP8OD_value_mask                        0x80
#define CCP8OD_clear_mask                        0x7F


/*------------------------------#
| ALRMVALL                0xF44 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ALRMVALL                                 0x0
#define ALRMVALL_address                         0xF44
#define ALRMVALL_position                        0x0
#define ALRMVALL_size                            0x8
#define ALRMVALL_value_mask                      0xFF
#define ALRMVALL_clear_mask                      0x0


/*------------------------------#
| ALRMVALH                0xF45 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ALRMVALH                                 0x0
#define ALRMVALH_address                         0xF45
#define ALRMVALH_position                        0x0
#define ALRMVALH_size                            0x8
#define ALRMVALH_value_mask                      0xFF
#define ALRMVALH_clear_mask                      0x0


/*--------------------------------------------------------------#
| ALRMRPT                                                 0xF46 |
#---------------------------------------------------------------#
| ARPT7 | ARPT6 | ARPT5 | ARPT4 | ARPT3 | ARPT2 | ARPT1 | ARPT0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define ALRMRPT                                  0x0
#define ALRMRPT_address                          0xF46
#define ALRMRPT_position                         0x0
#define ALRMRPT_size                             0x8
#define ALRMRPT_value_mask                       0xFF
#define ALRMRPT_clear_mask                       0x0

#define ARPT0                                    0x0
#define ARPT0_address                            0xF46
#define ARPT0_position                           0x0
#define ARPT0_size                               0x1
#define ARPT0_value_mask                         0x1
#define ARPT0_clear_mask                         0xFE

#define ARPT                                     0x0
#define ARPT_address                             0xF46
#define ARPT_position                            0x0
#define ARPT_size                                0x8
#define ARPT_value_mask                          0xFF
#define ARPT_clear_mask                          0x0

#define ARPT1                                    0x1
#define ARPT1_address                            0xF46
#define ARPT1_position                           0x1
#define ARPT1_size                               0x1
#define ARPT1_value_mask                         0x2
#define ARPT1_clear_mask                         0xFD

#define ARPT2                                    0x2
#define ARPT2_address                            0xF46
#define ARPT2_position                           0x2
#define ARPT2_size                               0x1
#define ARPT2_value_mask                         0x4
#define ARPT2_clear_mask                         0xFB

#define ARPT3                                    0x3
#define ARPT3_address                            0xF46
#define ARPT3_position                           0x3
#define ARPT3_size                               0x1
#define ARPT3_value_mask                         0x8
#define ARPT3_clear_mask                         0xF7

#define ARPT4                                    0x4
#define ARPT4_address                            0xF46
#define ARPT4_position                           0x4
#define ARPT4_size                               0x1
#define ARPT4_value_mask                         0x10
#define ARPT4_clear_mask                         0xEF

#define ARPT5                                    0x5
#define ARPT5_address                            0xF46
#define ARPT5_position                           0x5
#define ARPT5_size                               0x1
#define ARPT5_value_mask                         0x20
#define ARPT5_clear_mask                         0xDF

#define ARPT6                                    0x6
#define ARPT6_address                            0xF46
#define ARPT6_position                           0x6
#define ARPT6_size                               0x1
#define ARPT6_value_mask                         0x40
#define ARPT6_clear_mask                         0xBF

#define ARPT7                                    0x7
#define ARPT7_address                            0xF46
#define ARPT7_position                           0x7
#define ARPT7_size                               0x1
#define ARPT7_value_mask                         0x80
#define ARPT7_clear_mask                         0x7F


/*-------------------------------------------------------------------------#
| ALRMCFG                                                            0xF47 |
#--------------------------------------------------------------------------#
| ALRMEN | CHIME | AMASK3 | AMASK2 | AMASK1 | AMASK0 | ALRMPTR1 | ALRMPTR0 |
#--------------------------------------------------------------------------#
| 7      | 6     | 5      | 4      | 3      | 2      | 1        | 0        |
#-------------------------------------------------------------------------*/

#define ALRMCFG                                  0x0
#define ALRMCFG_address                          0xF47
#define ALRMCFG_position                         0x0
#define ALRMCFG_size                             0x8
#define ALRMCFG_value_mask                       0xFF
#define ALRMCFG_clear_mask                       0x0

#define ALRMPTR                                  0x0
#define ALRMPTR_address                          0xF47
#define ALRMPTR_position                         0x0
#define ALRMPTR_size                             0x2
#define ALRMPTR_value_mask                       0x3
#define ALRMPTR_clear_mask                       0xFC

#define ALRMPTR0                                 0x0
#define ALRMPTR0_address                         0xF47
#define ALRMPTR0_position                        0x0
#define ALRMPTR0_size                            0x1
#define ALRMPTR0_value_mask                      0x1
#define ALRMPTR0_clear_mask                      0xFE

#define ALRMPTR1                                 0x1
#define ALRMPTR1_address                         0xF47
#define ALRMPTR1_position                        0x1
#define ALRMPTR1_size                            0x1
#define ALRMPTR1_value_mask                      0x2
#define ALRMPTR1_clear_mask                      0xFD

#define AMASK0                                   0x2
#define AMASK0_address                           0xF47
#define AMASK0_position                          0x2
#define AMASK0_size                              0x1
#define AMASK0_value_mask                        0x4
#define AMASK0_clear_mask                        0xFB

#define AMASK                                    0x2
#define AMASK_address                            0xF47
#define AMASK_position                           0x2
#define AMASK_size                               0x4
#define AMASK_value_mask                         0x3C
#define AMASK_clear_mask                         0xC3

#define AMASK1                                   0x3
#define AMASK1_address                           0xF47
#define AMASK1_position                          0x3
#define AMASK1_size                              0x1
#define AMASK1_value_mask                        0x8
#define AMASK1_clear_mask                        0xF7

#define AMASK2                                   0x4
#define AMASK2_address                           0xF47
#define AMASK2_position                          0x4
#define AMASK2_size                              0x1
#define AMASK2_value_mask                        0x10
#define AMASK2_clear_mask                        0xEF

#define AMASK3                                   0x5
#define AMASK3_address                           0xF47
#define AMASK3_position                          0x5
#define AMASK3_size                              0x1
#define AMASK3_value_mask                        0x20
#define AMASK3_clear_mask                        0xDF

#define CHIME                                    0x6
#define CHIME_address                            0xF47
#define CHIME_position                           0x6
#define CHIME_size                               0x1
#define CHIME_value_mask                         0x40
#define CHIME_clear_mask                         0xBF

#define ALRMEN                                   0x7
#define ALRMEN_address                           0xF47
#define ALRMEN_position                          0x7
#define ALRMEN_size                              0x1
#define ALRMEN_value_mask                        0x80
#define ALRMEN_clear_mask                        0x7F


/*--------------------------------------------------#
| ANCON0                                      0xF48 |
#---------------------------------------------------#
| - | - | - | PCFG4 | PCFG3 | PCFG2 | PCFG1 | PCFG0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------*/

#define ANCON0                                   0x0
#define ANCON0_address                           0xF48
#define ANCON0_position                          0x0
#define ANCON0_size                              0x8
#define ANCON0_value_mask                        0xFF
#define ANCON0_clear_mask                        0x0

#define PCFG0                                    0x0
#define PCFG0_address                            0xF48
#define PCFG0_position                           0x0
#define PCFG0_size                               0x1
#define PCFG0_value_mask                         0x1
#define PCFG0_clear_mask                         0xFE

#define PCFG1                                    0x1
#define PCFG1_address                            0xF48
#define PCFG1_position                           0x1
#define PCFG1_size                               0x1
#define PCFG1_value_mask                         0x2
#define PCFG1_clear_mask                         0xFD

#define PCFG2                                    0x2
#define PCFG2_address                            0xF48
#define PCFG2_position                           0x2
#define PCFG2_size                               0x1
#define PCFG2_value_mask                         0x4
#define PCFG2_clear_mask                         0xFB

#define PCFG3                                    0x3
#define PCFG3_address                            0xF48
#define PCFG3_position                           0x3
#define PCFG3_size                               0x1
#define PCFG3_value_mask                         0x8
#define PCFG3_clear_mask                         0xF7

#define PCFG4                                    0x4
#define PCFG4_address                            0xF48
#define PCFG4_position                           0x4
#define PCFG4_size                               0x1
#define PCFG4_value_mask                         0x10
#define PCFG4_clear_mask                         0xEF


/*----------------------------------------------------------#
| ANCON1                                              0xF49 |
#-----------------------------------------------------------#
| PCFG15 | - | - | PCFG12 | PCFG11 | PCFG10 | PCFG9 | PCFG8 |
#-----------------------------------------------------------#
| 7      | 6 | 5 | 4      | 3      | 2      | 1     | 0     |
#----------------------------------------------------------*/

#define ANCON1                                   0x0
#define ANCON1_address                           0xF49
#define ANCON1_position                          0x0
#define ANCON1_size                              0x8
#define ANCON1_value_mask                        0xFF
#define ANCON1_clear_mask                        0x0

#define PCFG8                                    0x0
#define PCFG8_address                            0xF49
#define PCFG8_position                           0x0
#define PCFG8_size                               0x1
#define PCFG8_value_mask                         0x1
#define PCFG8_clear_mask                         0xFE

#define PCFG9                                    0x1
#define PCFG9_address                            0xF49
#define PCFG9_position                           0x1
#define PCFG9_size                               0x1
#define PCFG9_value_mask                         0x2
#define PCFG9_clear_mask                         0xFD

#define PCFG10                                   0x2
#define PCFG10_address                           0xF49
#define PCFG10_position                          0x2
#define PCFG10_size                              0x1
#define PCFG10_value_mask                        0x4
#define PCFG10_clear_mask                        0xFB

#define PCFG11                                   0x3
#define PCFG11_address                           0xF49
#define PCFG11_position                          0x3
#define PCFG11_size                              0x1
#define PCFG11_value_mask                        0x8
#define PCFG11_clear_mask                        0xF7

#define PCFG12                                   0x4
#define PCFG12_address                           0xF49
#define PCFG12_position                          0x4
#define PCFG12_size                              0x1
#define PCFG12_value_mask                        0x10
#define PCFG12_clear_mask                        0xEF

#define PCFG15                                   0x7
#define PCFG15_address                           0xF49
#define PCFG15_position                          0x7
#define PCFG15_size                              0x1
#define PCFG15_value_mask                        0x80
#define PCFG15_clear_mask                        0x7F

#define VBGEN                                    0x7
#define VBGEN_address                            0xF49
#define VBGEN_position                           0x7
#define VBGEN_size                               0x1
#define VBGEN_value_mask                         0x80
#define VBGEN_clear_mask                         0x7F


/*-------------------------------------------------------#
| DSWAKEL                                          0xF4A |
#--------------------------------------------------------#
| DSFLT | - | DSULP | DSWDT | DSRTC | DSMCLR | - | DSPOR |
#--------------------------------------------------------#
| 7     | 6 | 5     | 4     | 3     | 2      | 1 | 0     |
#-------------------------------------------------------*/

#define DSWAKEL                                  0x0
#define DSWAKEL_address                          0xF4A
#define DSWAKEL_position                         0x0
#define DSWAKEL_size                             0x8
#define DSWAKEL_value_mask                       0xFF
#define DSWAKEL_clear_mask                       0x0

#define DSPOR                                    0x0
#define DSPOR_address                            0xF4A
#define DSPOR_position                           0x0
#define DSPOR_size                               0x1
#define DSPOR_value_mask                         0x1
#define DSPOR_clear_mask                         0xFE

#define DSMCLR                                   0x2
#define DSMCLR_address                           0xF4A
#define DSMCLR_position                          0x2
#define DSMCLR_size                              0x1
#define DSMCLR_value_mask                        0x4
#define DSMCLR_clear_mask                        0xFB

#define DSRTC                                    0x3
#define DSRTC_address                            0xF4A
#define DSRTC_position                           0x3
#define DSRTC_size                               0x1
#define DSRTC_value_mask                         0x8
#define DSRTC_clear_mask                         0xF7

#define DSWDT                                    0x4
#define DSWDT_address                            0xF4A
#define DSWDT_position                           0x4
#define DSWDT_size                               0x1
#define DSWDT_value_mask                         0x10
#define DSWDT_clear_mask                         0xEF

#define DSULP                                    0x5
#define DSULP_address                            0xF4A
#define DSULP_position                           0x5
#define DSULP_size                               0x1
#define DSULP_value_mask                         0x20
#define DSULP_clear_mask                         0xDF

#define DSFLT                                    0x7
#define DSFLT_address                            0xF4A
#define DSFLT_position                           0x7
#define DSFLT_size                               0x1
#define DSFLT_value_mask                         0x80
#define DSFLT_clear_mask                         0x7F


/*-----------------------------------#
| DSWAKEH                      0xF4B |
#------------------------------------#
| - | - | - | - | - | - | - | DSINT0 |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0      |
#-----------------------------------*/

#define DSWAKEH                                  0x0
#define DSWAKEH_address                          0xF4B
#define DSWAKEH_position                         0x0
#define DSWAKEH_size                             0x8
#define DSWAKEH_value_mask                       0xFF
#define DSWAKEH_clear_mask                       0x0

#define DSINT0                                   0x0
#define DSINT0_address                           0xF4B
#define DSINT0_position                          0x0
#define DSINT0_size                              0x1
#define DSINT0_value_mask                        0x1
#define DSINT0_clear_mask                        0xFE


/*----------------------------------------------#
| DSCONL                                  0xF4C |
#-----------------------------------------------#
| - | - | - | - | - | ULPWDIS | DSBOR | RELEASE |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2       | 1     | 0       |
#----------------------------------------------*/

#define DSCONL                                   0x0
#define DSCONL_address                           0xF4C
#define DSCONL_position                          0x0
#define DSCONL_size                              0x8
#define DSCONL_value_mask                        0xFF
#define DSCONL_clear_mask                        0x0

#define RELEASE                                  0x0
#define RELEASE_address                          0xF4C
#define RELEASE_position                         0x0
#define RELEASE_size                             0x1
#define RELEASE_value_mask                       0x1
#define RELEASE_clear_mask                       0xFE

#define DSBOR                                    0x1
#define DSBOR_address                            0xF4C
#define DSBOR_position                           0x1
#define DSBOR_size                               0x1
#define DSBOR_value_mask                         0x2
#define DSBOR_clear_mask                         0xFD

#define ULPWDIS                                  0x2
#define ULPWDIS_address                          0xF4C
#define ULPWDIS_position                         0x2
#define ULPWDIS_size                             0x1
#define ULPWDIS_value_mask                       0x4
#define ULPWDIS_clear_mask                       0xFB


/*---------------------------------------------#
| DSCONH                                 0xF4D |
#----------------------------------------------#
| DSEN | - | - | - | - | - | DSULPEN | RTCWDIS |
#----------------------------------------------#
| 7    | 6 | 5 | 4 | 3 | 2 | 1       | 0       |
#---------------------------------------------*/

#define DSCONH                                   0x0
#define DSCONH_address                           0xF4D
#define DSCONH_position                          0x0
#define DSCONH_size                              0x8
#define DSCONH_value_mask                        0xFF
#define DSCONH_clear_mask                        0x0

#define RTCWDIS                                  0x0
#define RTCWDIS_address                          0xF4D
#define RTCWDIS_position                         0x0
#define RTCWDIS_size                             0x1
#define RTCWDIS_value_mask                       0x1
#define RTCWDIS_clear_mask                       0xFE

#define DSULPEN                                  0x1
#define DSULPEN_address                          0xF4D
#define DSULPEN_position                         0x1
#define DSULPEN_size                             0x1
#define DSULPEN_value_mask                       0x2
#define DSULPEN_clear_mask                       0xFD

#define DSEN                                     0x7
#define DSEN_address                             0xF4D
#define DSEN_position                            0x7
#define DSEN_size                                0x1
#define DSEN_value_mask                          0x80
#define DSEN_clear_mask                          0x7F


/*------------------------------#
| DSGPR0                  0xF4E |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define DSGPR0                                   0x0
#define DSGPR0_address                           0xF4E
#define DSGPR0_position                          0x0
#define DSGPR0_size                              0x8
#define DSGPR0_value_mask                        0xFF
#define DSGPR0_clear_mask                        0x0


/*------------------------------#
| DSGPR1                  0xF4F |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define DSGPR1                                   0x0
#define DSGPR1_address                           0xF4F
#define DSGPR1_position                          0x0
#define DSGPR1_size                              0x8
#define DSGPR1_value_mask                        0xFF
#define DSGPR1_clear_mask                        0x0


/*-------------------------------------------------------#
| CCPTMRS2                                         0xF50 |
#--------------------------------------------------------#
| - | - | - | C10TSEL0 | - | C9TSEL0 | C8TSEL1 | C8TSEL0 |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3 | 2       | 1       | 0       |
#-------------------------------------------------------*/

#define CCPTMRS2                                 0x0
#define CCPTMRS2_address                         0xF50
#define CCPTMRS2_position                        0x0
#define CCPTMRS2_size                            0x8
#define CCPTMRS2_value_mask                      0xFF
#define CCPTMRS2_clear_mask                      0x0

#define C8TSEL0                                  0x0
#define C8TSEL0_address                          0xF50
#define C8TSEL0_position                         0x0
#define C8TSEL0_size                             0x1
#define C8TSEL0_value_mask                       0x1
#define C8TSEL0_clear_mask                       0xFE

#define C8TSEL                                   0x0
#define C8TSEL_address                           0xF50
#define C8TSEL_position                          0x0
#define C8TSEL_size                              0x2
#define C8TSEL_value_mask                        0x3
#define C8TSEL_clear_mask                        0xFC

#define C8TSEL1                                  0x1
#define C8TSEL1_address                          0xF50
#define C8TSEL1_position                         0x1
#define C8TSEL1_size                             0x1
#define C8TSEL1_value_mask                       0x2
#define C8TSEL1_clear_mask                       0xFD

#define C9TSEL0                                  0x2
#define C9TSEL0_address                          0xF50
#define C9TSEL0_position                         0x2
#define C9TSEL0_size                             0x1
#define C9TSEL0_value_mask                       0x4
#define C9TSEL0_clear_mask                       0xFB

#define C10TSEL0                                 0x4
#define C10TSEL0_address                         0xF50
#define C10TSEL0_position                        0x4
#define C10TSEL0_size                            0x1
#define C10TSEL0_value_mask                      0x10
#define C10TSEL0_clear_mask                      0xEF


/*------------------------------------------------------------------#
| CCPTMRS1                                                    0xF51 |
#-------------------------------------------------------------------#
| C7TSEL1 | C7TSEL0 | - | C6TSEL0 | - | C5TSEL0 | C4TSEL1 | C4TSEL0 |
#-------------------------------------------------------------------#
| 7       | 6       | 5 | 4       | 3 | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define CCPTMRS1                                 0x0
#define CCPTMRS1_address                         0xF51
#define CCPTMRS1_position                        0x0
#define CCPTMRS1_size                            0x8
#define CCPTMRS1_value_mask                      0xFF
#define CCPTMRS1_clear_mask                      0x0

#define C4TSEL                                   0x0
#define C4TSEL_address                           0xF51
#define C4TSEL_position                          0x0
#define C4TSEL_size                              0x2
#define C4TSEL_value_mask                        0x3
#define C4TSEL_clear_mask                        0xFC

#define C4TSEL0                                  0x0
#define C4TSEL0_address                          0xF51
#define C4TSEL0_position                         0x0
#define C4TSEL0_size                             0x1
#define C4TSEL0_value_mask                       0x1
#define C4TSEL0_clear_mask                       0xFE

#define C4TSEL1                                  0x1
#define C4TSEL1_address                          0xF51
#define C4TSEL1_position                         0x1
#define C4TSEL1_size                             0x1
#define C4TSEL1_value_mask                       0x2
#define C4TSEL1_clear_mask                       0xFD

#define C5TSEL0                                  0x2
#define C5TSEL0_address                          0xF51
#define C5TSEL0_position                         0x2
#define C5TSEL0_size                             0x1
#define C5TSEL0_value_mask                       0x4
#define C5TSEL0_clear_mask                       0xFB

#define C6TSEL0                                  0x4
#define C6TSEL0_address                          0xF51
#define C6TSEL0_position                         0x4
#define C6TSEL0_size                             0x1
#define C6TSEL0_value_mask                       0x10
#define C6TSEL0_clear_mask                       0xEF

#define C7TSEL                                   0x6
#define C7TSEL_address                           0xF51
#define C7TSEL_position                          0x6
#define C7TSEL_size                              0x2
#define C7TSEL_value_mask                        0xC0
#define C7TSEL_clear_mask                        0x3F

#define C7TSEL0                                  0x6
#define C7TSEL0_address                          0xF51
#define C7TSEL0_position                         0x6
#define C7TSEL0_size                             0x1
#define C7TSEL0_value_mask                       0x40
#define C7TSEL0_clear_mask                       0xBF

#define C7TSEL1                                  0x7
#define C7TSEL1_address                          0xF51
#define C7TSEL1_position                         0x7
#define C7TSEL1_size                             0x1
#define C7TSEL1_value_mask                       0x80
#define C7TSEL1_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| CCPTMRS0                                                                0xF52 |
#-------------------------------------------------------------------------------#
| C3TSEL1 | C3TSEL0 | C2TSEL2 | C2TSEL1 | C2TSEL0 | C1TSEL2 | C1TSEL1 | C1TSEL0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define CCPTMRS0                                 0x0
#define CCPTMRS0_address                         0xF52
#define CCPTMRS0_position                        0x0
#define CCPTMRS0_size                            0x8
#define CCPTMRS0_value_mask                      0xFF
#define CCPTMRS0_clear_mask                      0x0

#define C1TSEL0                                  0x0
#define C1TSEL0_address                          0xF52
#define C1TSEL0_position                         0x0
#define C1TSEL0_size                             0x1
#define C1TSEL0_value_mask                       0x1
#define C1TSEL0_clear_mask                       0xFE

#define C1TSEL                                   0x0
#define C1TSEL_address                           0xF52
#define C1TSEL_position                          0x0
#define C1TSEL_size                              0x3
#define C1TSEL_value_mask                        0x7
#define C1TSEL_clear_mask                        0xF8

#define C1TSEL1                                  0x1
#define C1TSEL1_address                          0xF52
#define C1TSEL1_position                         0x1
#define C1TSEL1_size                             0x1
#define C1TSEL1_value_mask                       0x2
#define C1TSEL1_clear_mask                       0xFD

#define C1TSEL2                                  0x2
#define C1TSEL2_address                          0xF52
#define C1TSEL2_position                         0x2
#define C1TSEL2_size                             0x1
#define C1TSEL2_value_mask                       0x4
#define C1TSEL2_clear_mask                       0xFB

#define C2TSEL0                                  0x3
#define C2TSEL0_address                          0xF52
#define C2TSEL0_position                         0x3
#define C2TSEL0_size                             0x1
#define C2TSEL0_value_mask                       0x8
#define C2TSEL0_clear_mask                       0xF7

#define C2TSEL                                   0x3
#define C2TSEL_address                           0xF52
#define C2TSEL_position                          0x3
#define C2TSEL_size                              0x3
#define C2TSEL_value_mask                        0x38
#define C2TSEL_clear_mask                        0xC7

#define C2TSEL1                                  0x4
#define C2TSEL1_address                          0xF52
#define C2TSEL1_position                         0x4
#define C2TSEL1_size                             0x1
#define C2TSEL1_value_mask                       0x10
#define C2TSEL1_clear_mask                       0xEF

#define C2TSEL2                                  0x5
#define C2TSEL2_address                          0xF52
#define C2TSEL2_position                         0x5
#define C2TSEL2_size                             0x1
#define C2TSEL2_value_mask                       0x20
#define C2TSEL2_clear_mask                       0xDF

#define C3TSEL0                                  0x6
#define C3TSEL0_address                          0xF52
#define C3TSEL0_position                         0x6
#define C3TSEL0_size                             0x1
#define C3TSEL0_value_mask                       0x40
#define C3TSEL0_clear_mask                       0xBF

#define C3TSEL                                   0x6
#define C3TSEL_address                           0xF52
#define C3TSEL_position                          0x6
#define C3TSEL_size                              0x2
#define C3TSEL_value_mask                        0xC0
#define C3TSEL_clear_mask                        0x3F

#define C3TSEL1                                  0x7
#define C3TSEL1_address                          0xF52
#define C3TSEL1_position                         0x7
#define C3TSEL1_size                             0x1
#define C3TSEL1_value_mask                       0x80
#define C3TSEL1_clear_mask                       0x7F


/*----------------------------------------------------------#
| CVRCON                                              0xF53 |
#-----------------------------------------------------------#
| CVREN | CVROEN | CVRR | CVRSS | CVR3 | CVR2 | CVR1 | CVR0 |
#-----------------------------------------------------------#
| 7     | 6      | 5    | 4     | 3    | 2    | 1    | 0    |
#----------------------------------------------------------*/

#define CVRCON                                   0x0
#define CVRCON_address                           0xF53
#define CVRCON_position                          0x0
#define CVRCON_size                              0x8
#define CVRCON_value_mask                        0xFF
#define CVRCON_clear_mask                        0x0

#define CVR                                      0x0
#define CVR_address                              0xF53
#define CVR_position                             0x0
#define CVR_size                                 0x4
#define CVR_value_mask                           0xF
#define CVR_clear_mask                           0xF0

#define CVR0                                     0x0
#define CVR0_address                             0xF53
#define CVR0_position                            0x0
#define CVR0_size                                0x1
#define CVR0_value_mask                          0x1
#define CVR0_clear_mask                          0xFE

#define CVR1                                     0x1
#define CVR1_address                             0xF53
#define CVR1_position                            0x1
#define CVR1_size                                0x1
#define CVR1_value_mask                          0x2
#define CVR1_clear_mask                          0xFD

#define CVR2                                     0x2
#define CVR2_address                             0xF53
#define CVR2_position                            0x2
#define CVR2_size                                0x1
#define CVR2_value_mask                          0x4
#define CVR2_clear_mask                          0xFB

#define CVR3                                     0x3
#define CVR3_address                             0xF53
#define CVR3_position                            0x3
#define CVR3_size                                0x1
#define CVR3_value_mask                          0x8
#define CVR3_clear_mask                          0xF7

#define CVRSS                                    0x4
#define CVRSS_address                            0xF53
#define CVRSS_position                           0x4
#define CVRSS_size                               0x1
#define CVRSS_value_mask                         0x10
#define CVRSS_clear_mask                         0xEF

#define CVRR                                     0x5
#define CVRR_address                             0xF53
#define CVRR_position                            0x5
#define CVRR_size                                0x1
#define CVRR_value_mask                          0x20
#define CVRR_clear_mask                          0xDF

#define CVROEN                                   0x6
#define CVROEN_address                           0xF53
#define CVROEN_position                          0x6
#define CVROEN_size                              0x1
#define CVROEN_value_mask                        0x40
#define CVROEN_clear_mask                        0xBF

#define CVROE                                    0x6
#define CVROE_address                            0xF53
#define CVROE_position                           0x6
#define CVROE_size                               0x1
#define CVROE_value_mask                         0x40
#define CVROE_clear_mask                         0xBF

#define CVREN                                    0x7
#define CVREN_address                            0xF53
#define CVREN_position                           0x7
#define CVREN_size                               0x1
#define CVREN_value_mask                         0x80
#define CVREN_clear_mask                         0x7F


/*---------------------------------#
| DMABCH                     0xF66 |
#----------------------------------#
| - | - | - | - | - | - | DMACNTHB |
#----------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0    |
#---------------------------------*/

#define DMABCH                                   0x0
#define DMABCH_address                           0xF66
#define DMABCH_position                          0x0
#define DMABCH_size                              0x8
#define DMABCH_value_mask                        0xFF
#define DMABCH_clear_mask                        0x0

#define DMACNTHB                                 0x0
#define DMACNTHB_address                         0xF66
#define DMACNTHB_position                        0x0
#define DMACNTHB_size                            0x2
#define DMACNTHB_value_mask                      0x3
#define DMACNTHB_clear_mask                      0xFC


/*------------------------------#
| DMABCL                  0xF67 |
#-------------------------------#
| DMACNTLB                      |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define DMABCL                                   0x0
#define DMABCL_address                           0xF67
#define DMABCL_position                          0x0
#define DMABCL_size                              0x8
#define DMABCL_value_mask                        0xFF
#define DMABCL_clear_mask                        0x0

#define DMACNTLB                                 0x0
#define DMACNTLB_address                         0xF67
#define DMACNTLB_position                        0x0
#define DMACNTLB_size                            0x8
#define DMACNTLB_value_mask                      0xFF
#define DMACNTLB_clear_mask                      0x0


/*------------------------------#
| RXADDRH                 0xF68 |
#-------------------------------#
| - | - | - | - | DMARCVPTRHB   |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RXADDRH                                  0x0
#define RXADDRH_address                          0xF68
#define RXADDRH_position                         0x0
#define RXADDRH_size                             0x8
#define RXADDRH_value_mask                       0xFF
#define RXADDRH_clear_mask                       0x0

#define DMARCVPTRHB                              0x0
#define DMARCVPTRHB_address                      0xF68
#define DMARCVPTRHB_position                     0x0
#define DMARCVPTRHB_size                         0x4
#define DMARCVPTRHB_value_mask                   0xF
#define DMARCVPTRHB_clear_mask                   0xF0


/*------------------------------#
| RXADDRL                 0xF69 |
#-------------------------------#
| DMARCVPTRLB                   |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RXADDRL                                  0x0
#define RXADDRL_address                          0xF69
#define RXADDRL_position                         0x0
#define RXADDRL_size                             0x8
#define RXADDRL_value_mask                       0xFF
#define RXADDRL_clear_mask                       0x0

#define DMARCVPTRLB                              0x0
#define DMARCVPTRLB_address                      0xF69
#define DMARCVPTRLB_position                     0x0
#define DMARCVPTRLB_size                         0x8
#define DMARCVPTRLB_value_mask                   0xFF
#define DMARCVPTRLB_clear_mask                   0x0


/*------------------------------#
| TXADDRH                 0xF6A |
#-------------------------------#
| - | - | - | - | DMATXPTRHB    |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TXADDRH                                  0x0
#define TXADDRH_address                          0xF6A
#define TXADDRH_position                         0x0
#define TXADDRH_size                             0x8
#define TXADDRH_value_mask                       0xFF
#define TXADDRH_clear_mask                       0x0

#define DMATXPTRHB                               0x0
#define DMATXPTRHB_address                       0xF6A
#define DMATXPTRHB_position                      0x0
#define DMATXPTRHB_size                          0x4
#define DMATXPTRHB_value_mask                    0xF
#define DMATXPTRHB_clear_mask                    0xF0


/*------------------------------#
| TXADDRL                 0xF6B |
#-------------------------------#
| DMATXPTRLB                    |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TXADDRL                                  0x0
#define TXADDRL_address                          0xF6B
#define TXADDRL_position                         0x0
#define TXADDRL_size                             0x8
#define TXADDRL_value_mask                       0xFF
#define TXADDRL_clear_mask                       0x0

#define DMATXPTRLB                               0x0
#define DMATXPTRLB_address                       0xF6B
#define DMATXPTRLB_position                      0x0
#define DMATXPTRLB_size                          0x8
#define DMATXPTRLB_value_mask                    0xFF
#define DMATXPTRLB_clear_mask                    0x0


/*------------------------------------------#
| CMSTAT                              0xF70 |
#-------------------------------------------#
| - | - | - | - | - | COUT3 | COUT2 | COUT1 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------*/

#define CMSTAT                                   0x0
#define CMSTAT_address                           0xF70
#define CMSTAT_position                          0x0
#define CMSTAT_size                              0x8
#define CMSTAT_value_mask                        0xFF
#define CMSTAT_clear_mask                        0x0

#define COUT1                                    0x0
#define COUT1_address                            0xF70
#define COUT1_position                           0x0
#define COUT1_size                               0x1
#define COUT1_value_mask                         0x1
#define COUT1_clear_mask                         0xFE

#define COUT2                                    0x1
#define COUT2_address                            0xF70
#define COUT2_position                           0x1
#define COUT2_size                               0x1
#define COUT2_value_mask                         0x2
#define COUT2_clear_mask                         0xFD

#define COUT3                                    0x2
#define COUT3_address                            0xF70
#define COUT3_position                           0x2
#define COUT3_size                               0x1
#define COUT3_value_mask                         0x4
#define COUT3_clear_mask                         0xFB


/*---------------------------------------------------------------------------------#
| SSP2CON2                                                                   0xF71 |
#----------------------------------------------------------------------------------#
| GCEN2 | SSP2CON2_ACKSTAT | ADMSK52 | ACKEN2 | ADMSK32 | ADMSK22 | ADMSK12 | SEN2 |
#----------------------------------------------------------------------------------#
| 7     | 6                | 5       | 4      | 3       | 2       | 1       | 0    |
#---------------------------------------------------------------------------------*/

#define SSP2CON2                                 0x0
#define SSP2CON2_address                         0xF71
#define SSP2CON2_position                        0x0
#define SSP2CON2_size                            0x8
#define SSP2CON2_value_mask                      0xFF
#define SSP2CON2_clear_mask                      0x0

#define SEN2                                     0x0
#define SEN2_address                             0xF71
#define SEN2_position                            0x0
#define SEN2_size                                0x1
#define SEN2_value_mask                          0x1
#define SEN2_clear_mask                          0xFE

#define SSP2CON2_SEN                             0x0
#define SSP2CON2_SEN_address                     0xF71
#define SSP2CON2_SEN_position                    0x0
#define SSP2CON2_SEN_size                        0x1
#define SSP2CON2_SEN_value_mask                  0x1
#define SSP2CON2_SEN_clear_mask                  0xFE

#define ADMSK12                                  0x1
#define ADMSK12_address                          0xF71
#define ADMSK12_position                         0x1
#define ADMSK12_size                             0x1
#define ADMSK12_value_mask                       0x2
#define ADMSK12_clear_mask                       0xFD

#define SSP2CON2_RSEN                            0x1
#define SSP2CON2_RSEN_address                    0xF71
#define SSP2CON2_RSEN_position                   0x1
#define SSP2CON2_RSEN_size                       0x1
#define SSP2CON2_RSEN_value_mask                 0x2
#define SSP2CON2_RSEN_clear_mask                 0xFD

#define RSEN2                                    0x1
#define RSEN2_address                            0xF71
#define RSEN2_position                           0x1
#define RSEN2_size                               0x1
#define RSEN2_value_mask                         0x2
#define RSEN2_clear_mask                         0xFD

#define SSP2CON2_ADMSK1                          0x1
#define SSP2CON2_ADMSK1_address                  0xF71
#define SSP2CON2_ADMSK1_position                 0x1
#define SSP2CON2_ADMSK1_size                     0x1
#define SSP2CON2_ADMSK1_value_mask               0x2
#define SSP2CON2_ADMSK1_clear_mask               0xFD

#define ADMSK22                                  0x2
#define ADMSK22_address                          0xF71
#define ADMSK22_position                         0x2
#define ADMSK22_size                             0x1
#define ADMSK22_value_mask                       0x4
#define ADMSK22_clear_mask                       0xFB

#define PEN2                                     0x2
#define PEN2_address                             0xF71
#define PEN2_position                            0x2
#define PEN2_size                                0x1
#define PEN2_value_mask                          0x4
#define PEN2_clear_mask                          0xFB

#define SSP2CON2_PEN                             0x2
#define SSP2CON2_PEN_address                     0xF71
#define SSP2CON2_PEN_position                    0x2
#define SSP2CON2_PEN_size                        0x1
#define SSP2CON2_PEN_value_mask                  0x4
#define SSP2CON2_PEN_clear_mask                  0xFB

#define SSP2CON2_ADMSK2                          0x2
#define SSP2CON2_ADMSK2_address                  0xF71
#define SSP2CON2_ADMSK2_position                 0x2
#define SSP2CON2_ADMSK2_size                     0x1
#define SSP2CON2_ADMSK2_value_mask               0x4
#define SSP2CON2_ADMSK2_clear_mask               0xFB

#define ADMSK32                                  0x3
#define ADMSK32_address                          0xF71
#define ADMSK32_position                         0x3
#define ADMSK32_size                             0x1
#define ADMSK32_value_mask                       0x8
#define ADMSK32_clear_mask                       0xF7

#define SSP2CON2_RCEN                            0x3
#define SSP2CON2_RCEN_address                    0xF71
#define SSP2CON2_RCEN_position                   0x3
#define SSP2CON2_RCEN_size                       0x1
#define SSP2CON2_RCEN_value_mask                 0x8
#define SSP2CON2_RCEN_clear_mask                 0xF7

#define RCEN2                                    0x3
#define RCEN2_address                            0xF71
#define RCEN2_position                           0x3
#define RCEN2_size                               0x1
#define RCEN2_value_mask                         0x8
#define RCEN2_clear_mask                         0xF7

#define SSP2CON2_ADMSK3                          0x3
#define SSP2CON2_ADMSK3_address                  0xF71
#define SSP2CON2_ADMSK3_position                 0x3
#define SSP2CON2_ADMSK3_size                     0x1
#define SSP2CON2_ADMSK3_value_mask               0x8
#define SSP2CON2_ADMSK3_clear_mask               0xF7

#define ACKEN2                                   0x4
#define ACKEN2_address                           0xF71
#define ACKEN2_position                          0x4
#define ACKEN2_size                              0x1
#define ACKEN2_value_mask                        0x10
#define ACKEN2_clear_mask                        0xEF

#define ADMSK42                                  0x4
#define ADMSK42_address                          0xF71
#define ADMSK42_position                         0x4
#define ADMSK42_size                             0x1
#define ADMSK42_value_mask                       0x10
#define ADMSK42_clear_mask                       0xEF

#define SSP2CON2_ADMSK4                          0x4
#define SSP2CON2_ADMSK4_address                  0xF71
#define SSP2CON2_ADMSK4_position                 0x4
#define SSP2CON2_ADMSK4_size                     0x1
#define SSP2CON2_ADMSK4_value_mask               0x10
#define SSP2CON2_ADMSK4_clear_mask               0xEF

#define SSP2CON2_ACKEN                           0x4
#define SSP2CON2_ACKEN_address                   0xF71
#define SSP2CON2_ACKEN_position                  0x4
#define SSP2CON2_ACKEN_size                      0x1
#define SSP2CON2_ACKEN_value_mask                0x10
#define SSP2CON2_ACKEN_clear_mask                0xEF

#define ACKDT2                                   0x5
#define ACKDT2_address                           0xF71
#define ACKDT2_position                          0x5
#define ACKDT2_size                              0x1
#define ACKDT2_value_mask                        0x20
#define ACKDT2_clear_mask                        0xDF

#define ADMSK52                                  0x5
#define ADMSK52_address                          0xF71
#define ADMSK52_position                         0x5
#define ADMSK52_size                             0x1
#define ADMSK52_value_mask                       0x20
#define ADMSK52_clear_mask                       0xDF

#define SSP2CON2_ACKDT                           0x5
#define SSP2CON2_ACKDT_address                   0xF71
#define SSP2CON2_ACKDT_position                  0x5
#define SSP2CON2_ACKDT_size                      0x1
#define SSP2CON2_ACKDT_value_mask                0x20
#define SSP2CON2_ACKDT_clear_mask                0xDF

#define SSP2CON2_ADMSK5                          0x5
#define SSP2CON2_ADMSK5_address                  0xF71
#define SSP2CON2_ADMSK5_position                 0x5
#define SSP2CON2_ADMSK5_size                     0x1
#define SSP2CON2_ADMSK5_value_mask               0x20
#define SSP2CON2_ADMSK5_clear_mask               0xDF

#define SSP2CON2_ACKSTAT                         0x6
#define SSP2CON2_ACKSTAT_address                 0xF71
#define SSP2CON2_ACKSTAT_position                0x6
#define SSP2CON2_ACKSTAT_size                    0x1
#define SSP2CON2_ACKSTAT_value_mask              0x40
#define SSP2CON2_ACKSTAT_clear_mask              0xBF

#define ACKSTAT2                                 0x6
#define ACKSTAT2_address                         0xF71
#define ACKSTAT2_position                        0x6
#define ACKSTAT2_size                            0x1
#define ACKSTAT2_value_mask                      0x40
#define ACKSTAT2_clear_mask                      0xBF

#define SSP2CON2_GCEN                            0x7
#define SSP2CON2_GCEN_address                    0xF71
#define SSP2CON2_GCEN_position                   0x7
#define SSP2CON2_GCEN_size                       0x1
#define SSP2CON2_GCEN_value_mask                 0x80
#define SSP2CON2_GCEN_clear_mask                 0x7F

#define GCEN2                                    0x7
#define GCEN2_address                            0xF71
#define GCEN2_position                           0x7
#define GCEN2_size                               0x1
#define GCEN2_value_mask                         0x80
#define GCEN2_clear_mask                         0x7F


/*---------------------------------------------------------------------------------------------------------------------------#
| SSP2CON1                                                                                                             0xF72 |
#----------------------------------------------------------------------------------------------------------------------------#
| WCOL2 | SSP2CON1_SSPOV | SSP2CON1_SSPEN | SSP2CON1_CKP | SSP2CON1_SSPM3 | SSP2CON1_SSPM2 | SSP2CON1_SSPM1 | SSP2CON1_SSPM0 |
#----------------------------------------------------------------------------------------------------------------------------#
| 7     | 6              | 5              | 4            | 3              | 2              | 1              | 0              |
#---------------------------------------------------------------------------------------------------------------------------*/

#define SSP2CON1                                 0x0
#define SSP2CON1_address                         0xF72
#define SSP2CON1_position                        0x0
#define SSP2CON1_size                            0x8
#define SSP2CON1_value_mask                      0xFF
#define SSP2CON1_clear_mask                      0x0

#define SSP2CON1_SSPM                            0x0
#define SSP2CON1_SSPM_address                    0xF72
#define SSP2CON1_SSPM_position                   0x0
#define SSP2CON1_SSPM_size                       0x4
#define SSP2CON1_SSPM_value_mask                 0xF
#define SSP2CON1_SSPM_clear_mask                 0xF0

#define SSP2CON1_SSPM0                           0x0
#define SSP2CON1_SSPM0_address                   0xF72
#define SSP2CON1_SSPM0_position                  0x0
#define SSP2CON1_SSPM0_size                      0x1
#define SSP2CON1_SSPM0_value_mask                0x1
#define SSP2CON1_SSPM0_clear_mask                0xFE

#define SSPM02                                   0x0
#define SSPM02_address                           0xF72
#define SSPM02_position                          0x0
#define SSPM02_size                              0x1
#define SSPM02_value_mask                        0x1
#define SSPM02_clear_mask                        0xFE

#define SSPM12                                   0x1
#define SSPM12_address                           0xF72
#define SSPM12_position                          0x1
#define SSPM12_size                              0x1
#define SSPM12_value_mask                        0x2
#define SSPM12_clear_mask                        0xFD

#define SSP2CON1_SSPM1                           0x1
#define SSP2CON1_SSPM1_address                   0xF72
#define SSP2CON1_SSPM1_position                  0x1
#define SSP2CON1_SSPM1_size                      0x1
#define SSP2CON1_SSPM1_value_mask                0x2
#define SSP2CON1_SSPM1_clear_mask                0xFD

#define SSP2CON1_SSPM2                           0x2
#define SSP2CON1_SSPM2_address                   0xF72
#define SSP2CON1_SSPM2_position                  0x2
#define SSP2CON1_SSPM2_size                      0x1
#define SSP2CON1_SSPM2_value_mask                0x4
#define SSP2CON1_SSPM2_clear_mask                0xFB

#define SSPM22                                   0x2
#define SSPM22_address                           0xF72
#define SSPM22_position                          0x2
#define SSPM22_size                              0x1
#define SSPM22_value_mask                        0x4
#define SSPM22_clear_mask                        0xFB

#define SSPM32                                   0x3
#define SSPM32_address                           0xF72
#define SSPM32_position                          0x3
#define SSPM32_size                              0x1
#define SSPM32_value_mask                        0x8
#define SSPM32_clear_mask                        0xF7

#define SSP2CON1_SSPM3                           0x3
#define SSP2CON1_SSPM3_address                   0xF72
#define SSP2CON1_SSPM3_position                  0x3
#define SSP2CON1_SSPM3_size                      0x1
#define SSP2CON1_SSPM3_value_mask                0x8
#define SSP2CON1_SSPM3_clear_mask                0xF7

#define SSP2CON1_CKP                             0x4
#define SSP2CON1_CKP_address                     0xF72
#define SSP2CON1_CKP_position                    0x4
#define SSP2CON1_CKP_size                        0x1
#define SSP2CON1_CKP_value_mask                  0x10
#define SSP2CON1_CKP_clear_mask                  0xEF

#define CKP2                                     0x4
#define CKP2_address                             0xF72
#define CKP2_position                            0x4
#define CKP2_size                                0x1
#define CKP2_value_mask                          0x10
#define CKP2_clear_mask                          0xEF

#define SSPEN2                                   0x5
#define SSPEN2_address                           0xF72
#define SSPEN2_position                          0x5
#define SSPEN2_size                              0x1
#define SSPEN2_value_mask                        0x20
#define SSPEN2_clear_mask                        0xDF

#define SSP2CON1_SSPEN                           0x5
#define SSP2CON1_SSPEN_address                   0xF72
#define SSP2CON1_SSPEN_position                  0x5
#define SSP2CON1_SSPEN_size                      0x1
#define SSP2CON1_SSPEN_value_mask                0x20
#define SSP2CON1_SSPEN_clear_mask                0xDF

#define SSPOV2                                   0x6
#define SSPOV2_address                           0xF72
#define SSPOV2_position                          0x6
#define SSPOV2_size                              0x1
#define SSPOV2_value_mask                        0x40
#define SSPOV2_clear_mask                        0xBF

#define SSP2CON1_SSPOV                           0x6
#define SSP2CON1_SSPOV_address                   0xF72
#define SSP2CON1_SSPOV_position                  0x6
#define SSP2CON1_SSPOV_size                      0x1
#define SSP2CON1_SSPOV_value_mask                0x40
#define SSP2CON1_SSPOV_clear_mask                0xBF

#define WCOL2                                    0x7
#define WCOL2_address                            0xF72
#define WCOL2_position                           0x7
#define WCOL2_size                               0x1
#define WCOL2_value_mask                         0x80
#define WCOL2_clear_mask                         0x7F

#define SSP2CON1_WCOL                            0x7
#define SSP2CON1_WCOL_address                    0xF72
#define SSP2CON1_WCOL_position                   0x7
#define SSP2CON1_WCOL_size                       0x1
#define SSP2CON1_WCOL_value_mask                 0x80
#define SSP2CON1_WCOL_clear_mask                 0x7F


/*--------------------------------------------------------------------------------------------------#
| SSP2STAT                                                                                    0xF73 |
#---------------------------------------------------------------------------------------------------#
| SSP2STAT_SMP | SSP2STAT_CKE | DATA_ADDRESS2 | SSP2STAT_P | S2 | R_nW2 | SSP2STAT_UA | SSP2STAT_BF |
#---------------------------------------------------------------------------------------------------#
| 7            | 6            | 5             | 4          | 3  | 2     | 1           | 0           |
#--------------------------------------------------------------------------------------------------*/

#define SSP2STAT                                 0x0
#define SSP2STAT_address                         0xF73
#define SSP2STAT_position                        0x0
#define SSP2STAT_size                            0x8
#define SSP2STAT_value_mask                      0xFF
#define SSP2STAT_clear_mask                      0x0

#define SSP2STAT_BF                              0x0
#define SSP2STAT_BF_address                      0xF73
#define SSP2STAT_BF_position                     0x0
#define SSP2STAT_BF_size                         0x1
#define SSP2STAT_BF_value_mask                   0x1
#define SSP2STAT_BF_clear_mask                   0xFE

#define BF2                                      0x0
#define BF2_address                              0xF73
#define BF2_position                             0x0
#define BF2_size                                 0x1
#define BF2_value_mask                           0x1
#define BF2_clear_mask                           0xFE

#define SSP2STAT_UA                              0x1
#define SSP2STAT_UA_address                      0xF73
#define SSP2STAT_UA_position                     0x1
#define SSP2STAT_UA_size                         0x1
#define SSP2STAT_UA_value_mask                   0x2
#define SSP2STAT_UA_clear_mask                   0xFD

#define UA2                                      0x1
#define UA2_address                              0xF73
#define UA2_position                             0x1
#define UA2_size                                 0x1
#define UA2_value_mask                           0x2
#define UA2_clear_mask                           0xFD

#define RW2                                      0x2
#define RW2_address                              0xF73
#define RW2_position                             0x2
#define RW2_size                                 0x1
#define RW2_value_mask                           0x4
#define RW2_clear_mask                           0xFB

#define READ_WRITE2                              0x2
#define READ_WRITE2_address                      0xF73
#define READ_WRITE2_position                     0x2
#define READ_WRITE2_size                         0x1
#define READ_WRITE2_value_mask                   0x4
#define READ_WRITE2_clear_mask                   0xFB

#define nW2                                      0x2
#define nW2_address                              0xF73
#define nW2_position                             0x2
#define nW2_size                                 0x1
#define nW2_value_mask                           0x4
#define nW2_clear_mask                           0xFB

#define I2C_READ2                                0x2
#define I2C_READ2_address                        0xF73
#define I2C_READ2_position                       0x2
#define I2C_READ2_size                           0x1
#define I2C_READ2_value_mask                     0x4
#define I2C_READ2_clear_mask                     0xFB

#define SSP2STAT_R_NOT_W                         0x2
#define SSP2STAT_R_NOT_W_address                 0xF73
#define SSP2STAT_R_NOT_W_position                0x2
#define SSP2STAT_R_NOT_W_size                    0x1
#define SSP2STAT_R_NOT_W_value_mask              0x4
#define SSP2STAT_R_NOT_W_clear_mask              0xFB

#define R_nW2                                    0x2
#define R_nW2_address                            0xF73
#define R_nW2_position                           0x2
#define R_nW2_size                               0x1
#define R_nW2_value_mask                         0x4
#define R_nW2_clear_mask                         0xFB

#define nWRITE2                                  0x2
#define nWRITE2_address                          0xF73
#define nWRITE2_position                         0x2
#define nWRITE2_size                             0x1
#define nWRITE2_value_mask                       0x4
#define nWRITE2_clear_mask                       0xFB

#define R_W2                                     0x2
#define R_W2_address                             0xF73
#define R_W2_position                            0x2
#define R_W2_size                                0x1
#define R_W2_value_mask                          0x4
#define R_W2_clear_mask                          0xFB

#define SSP2STAT_R_nW                            0x2
#define SSP2STAT_R_nW_address                    0xF73
#define SSP2STAT_R_nW_position                   0x2
#define SSP2STAT_R_nW_size                       0x1
#define SSP2STAT_R_nW_value_mask                 0x4
#define SSP2STAT_R_nW_clear_mask                 0xFB

#define SSP2STAT_S                               0x3
#define SSP2STAT_S_address                       0xF73
#define SSP2STAT_S_position                      0x3
#define SSP2STAT_S_size                          0x1
#define SSP2STAT_S_value_mask                    0x8
#define SSP2STAT_S_clear_mask                    0xF7

#define S2                                       0x3
#define S2_address                               0xF73
#define S2_position                              0x3
#define S2_size                                  0x1
#define S2_value_mask                            0x8
#define S2_clear_mask                            0xF7

#define START2                                   0x3
#define START2_address                           0xF73
#define START2_position                          0x3
#define START2_size                              0x1
#define START2_value_mask                        0x8
#define START2_clear_mask                        0xF7

#define I2C_START2                               0x3
#define I2C_START2_address                       0xF73
#define I2C_START2_position                      0x3
#define I2C_START2_size                          0x1
#define I2C_START2_value_mask                    0x8
#define I2C_START2_clear_mask                    0xF7

#define P2                                       0x4
#define P2_address                               0xF73
#define P2_position                              0x4
#define P2_size                                  0x1
#define P2_value_mask                            0x10
#define P2_clear_mask                            0xEF

#define SSP2STAT_P                               0x4
#define SSP2STAT_P_address                       0xF73
#define SSP2STAT_P_position                      0x4
#define SSP2STAT_P_size                          0x1
#define SSP2STAT_P_value_mask                    0x10
#define SSP2STAT_P_clear_mask                    0xEF

#define STOP2                                    0x4
#define STOP2_address                            0xF73
#define STOP2_position                           0x4
#define STOP2_size                               0x1
#define STOP2_value_mask                         0x10
#define STOP2_clear_mask                         0xEF

#define I2C_STOP2                                0x4
#define I2C_STOP2_address                        0xF73
#define I2C_STOP2_position                       0x4
#define I2C_STOP2_size                           0x1
#define I2C_STOP2_value_mask                     0x10
#define I2C_STOP2_clear_mask                     0xEF

#define I2C_DAT2                                 0x5
#define I2C_DAT2_address                         0xF73
#define I2C_DAT2_position                        0x5
#define I2C_DAT2_size                            0x1
#define I2C_DAT2_value_mask                      0x20
#define I2C_DAT2_clear_mask                      0xDF

#define DATA_ADDRESS2                            0x5
#define DATA_ADDRESS2_address                    0xF73
#define DATA_ADDRESS2_position                   0x5
#define DATA_ADDRESS2_size                       0x1
#define DATA_ADDRESS2_value_mask                 0x20
#define DATA_ADDRESS2_clear_mask                 0xDF

#define SSP2STAT_D_NOT_A                         0x5
#define SSP2STAT_D_NOT_A_address                 0xF73
#define SSP2STAT_D_NOT_A_position                0x5
#define SSP2STAT_D_NOT_A_size                    0x1
#define SSP2STAT_D_NOT_A_value_mask              0x20
#define SSP2STAT_D_NOT_A_clear_mask              0xDF

#define D_A2                                     0x5
#define D_A2_address                             0xF73
#define D_A2_position                            0x5
#define D_A2_size                                0x1
#define D_A2_value_mask                          0x20
#define D_A2_clear_mask                          0xDF

#define SSP2STAT_D_nA                            0x5
#define SSP2STAT_D_nA_address                    0xF73
#define SSP2STAT_D_nA_position                   0x5
#define SSP2STAT_D_nA_size                       0x1
#define SSP2STAT_D_nA_value_mask                 0x20
#define SSP2STAT_D_nA_clear_mask                 0xDF

#define nA2                                      0x5
#define nA2_address                              0xF73
#define nA2_position                             0x5
#define nA2_size                                 0x1
#define nA2_value_mask                           0x20
#define nA2_clear_mask                           0xDF

#define DA2                                      0x5
#define DA2_address                              0xF73
#define DA2_position                             0x5
#define DA2_size                                 0x1
#define DA2_value_mask                           0x20
#define DA2_clear_mask                           0xDF

#define nADDRESS2                                0x5
#define nADDRESS2_address                        0xF73
#define nADDRESS2_position                       0x5
#define nADDRESS2_size                           0x1
#define nADDRESS2_value_mask                     0x20
#define nADDRESS2_clear_mask                     0xDF

#define D_nA2                                    0x5
#define D_nA2_address                            0xF73
#define D_nA2_position                           0x5
#define D_nA2_size                               0x1
#define D_nA2_value_mask                         0x20
#define D_nA2_clear_mask                         0xDF

#define SSP2STAT_CKE                             0x6
#define SSP2STAT_CKE_address                     0xF73
#define SSP2STAT_CKE_position                    0x6
#define SSP2STAT_CKE_size                        0x1
#define SSP2STAT_CKE_value_mask                  0x40
#define SSP2STAT_CKE_clear_mask                  0xBF

#define CKE2                                     0x6
#define CKE2_address                             0xF73
#define CKE2_position                            0x6
#define CKE2_size                                0x1
#define CKE2_value_mask                          0x40
#define CKE2_clear_mask                          0xBF

#define SSP2STAT_SMP                             0x7
#define SSP2STAT_SMP_address                     0xF73
#define SSP2STAT_SMP_position                    0x7
#define SSP2STAT_SMP_size                        0x1
#define SSP2STAT_SMP_value_mask                  0x80
#define SSP2STAT_SMP_clear_mask                  0x7F

#define SMP2                                     0x7
#define SMP2_address                             0xF73
#define SMP2_position                            0x7
#define SMP2_size                                0x1
#define SMP2_value_mask                          0x80
#define SMP2_clear_mask                          0x7F


/*--------------------------------------------------------------#
| SSP2ADD                                                 0xF74 |
#---------------------------------------------------------------#
| MSK72 | MSK62 | MSK52 | MSK42 | MSK32 | MSK22 | MSK12 | MSK02 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define SSP2ADD                                  0x0
#define SSP2ADD_address                          0xF74
#define SSP2ADD_position                         0x0
#define SSP2ADD_size                             0x8
#define SSP2ADD_value_mask                       0xFF
#define SSP2ADD_clear_mask                       0x0

#define MSK02                                    0x0
#define MSK02_address                            0xF74
#define MSK02_position                           0x0
#define MSK02_size                               0x1
#define MSK02_value_mask                         0x1
#define MSK02_clear_mask                         0xFE

#define SSP2ADD_SSPADD                           0x0
#define SSP2ADD_SSPADD_address                   0xF74
#define SSP2ADD_SSPADD_position                  0x0
#define SSP2ADD_SSPADD_size                      0x8
#define SSP2ADD_SSPADD_value_mask                0xFF
#define SSP2ADD_SSPADD_clear_mask                0x0

#define MSK12                                    0x1
#define MSK12_address                            0xF74
#define MSK12_position                           0x1
#define MSK12_size                               0x1
#define MSK12_value_mask                         0x2
#define MSK12_clear_mask                         0xFD

#define MSK22                                    0x2
#define MSK22_address                            0xF74
#define MSK22_position                           0x2
#define MSK22_size                               0x1
#define MSK22_value_mask                         0x4
#define MSK22_clear_mask                         0xFB

#define MSK32                                    0x3
#define MSK32_address                            0xF74
#define MSK32_position                           0x3
#define MSK32_size                               0x1
#define MSK32_value_mask                         0x8
#define MSK32_clear_mask                         0xF7

#define MSK42                                    0x4
#define MSK42_address                            0xF74
#define MSK42_position                           0x4
#define MSK42_size                               0x1
#define MSK42_value_mask                         0x10
#define MSK42_clear_mask                         0xEF

#define MSK52                                    0x5
#define MSK52_address                            0xF74
#define MSK52_position                           0x5
#define MSK52_size                               0x1
#define MSK52_value_mask                         0x20
#define MSK52_clear_mask                         0xDF

#define MSK62                                    0x6
#define MSK62_address                            0xF74
#define MSK62_position                           0x6
#define MSK62_size                               0x1
#define MSK62_value_mask                         0x40
#define MSK62_clear_mask                         0xBF

#define MSK72                                    0x7
#define MSK72_address                            0xF74
#define MSK72_position                           0x7
#define MSK72_size                               0x1
#define MSK72_value_mask                         0x80
#define MSK72_clear_mask                         0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| SSP2MSK                                                                                                         0xF74 |
#-----------------------------------------------------------------------------------------------------------------------#
| SSP2MSK_MSK7 | SSP2MSK_MSK6 | SSP2MSK_MSK5 | SSP2MSK_MSK4 | SSP2MSK_MSK3 | SSP2MSK_MSK2 | SSP2MSK_MSK1 | SSP2MSK_MSK0 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define SSP2MSK                                  0x0
#define SSP2MSK_address                          0xF74
#define SSP2MSK_position                         0x0
#define SSP2MSK_size                             0x8
#define SSP2MSK_value_mask                       0xFF
#define SSP2MSK_clear_mask                       0x0

#define SSP2MSK_MSK0                             0x0
#define SSP2MSK_MSK0_address                     0xF74
#define SSP2MSK_MSK0_position                    0x0
#define SSP2MSK_MSK0_size                        0x1
#define SSP2MSK_MSK0_value_mask                  0x1
#define SSP2MSK_MSK0_clear_mask                  0xFE

#define SSP2MSK_MSK1                             0x1
#define SSP2MSK_MSK1_address                     0xF74
#define SSP2MSK_MSK1_position                    0x1
#define SSP2MSK_MSK1_size                        0x1
#define SSP2MSK_MSK1_value_mask                  0x2
#define SSP2MSK_MSK1_clear_mask                  0xFD

#define SSP2MSK_MSK2                             0x2
#define SSP2MSK_MSK2_address                     0xF74
#define SSP2MSK_MSK2_position                    0x2
#define SSP2MSK_MSK2_size                        0x1
#define SSP2MSK_MSK2_value_mask                  0x4
#define SSP2MSK_MSK2_clear_mask                  0xFB

#define SSP2MSK_MSK3                             0x3
#define SSP2MSK_MSK3_address                     0xF74
#define SSP2MSK_MSK3_position                    0x3
#define SSP2MSK_MSK3_size                        0x1
#define SSP2MSK_MSK3_value_mask                  0x8
#define SSP2MSK_MSK3_clear_mask                  0xF7

#define SSP2MSK_MSK4                             0x4
#define SSP2MSK_MSK4_address                     0xF74
#define SSP2MSK_MSK4_position                    0x4
#define SSP2MSK_MSK4_size                        0x1
#define SSP2MSK_MSK4_value_mask                  0x10
#define SSP2MSK_MSK4_clear_mask                  0xEF

#define SSP2MSK_MSK5                             0x5
#define SSP2MSK_MSK5_address                     0xF74
#define SSP2MSK_MSK5_position                    0x5
#define SSP2MSK_MSK5_size                        0x1
#define SSP2MSK_MSK5_value_mask                  0x20
#define SSP2MSK_MSK5_clear_mask                  0xDF

#define SSP2MSK_MSK6                             0x6
#define SSP2MSK_MSK6_address                     0xF74
#define SSP2MSK_MSK6_position                    0x6
#define SSP2MSK_MSK6_size                        0x1
#define SSP2MSK_MSK6_value_mask                  0x40
#define SSP2MSK_MSK6_clear_mask                  0xBF

#define SSP2MSK_MSK7                             0x7
#define SSP2MSK_MSK7_address                     0xF74
#define SSP2MSK_MSK7_position                    0x7
#define SSP2MSK_MSK7_size                        0x1
#define SSP2MSK_MSK7_value_mask                  0x80
#define SSP2MSK_MSK7_clear_mask                  0x7F


/*------------------------------#
| SSP2BUF                 0xF75 |
#-------------------------------#
| SSP2BUF_SSPBUF                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP2BUF                                  0x0
#define SSP2BUF_address                          0xF75
#define SSP2BUF_position                         0x0
#define SSP2BUF_size                             0x8
#define SSP2BUF_value_mask                       0xFF
#define SSP2BUF_clear_mask                       0x0

#define SSP2BUF_SSPBUF                           0x0
#define SSP2BUF_SSPBUF_address                   0xF75
#define SSP2BUF_SSPBUF_position                  0x0
#define SSP2BUF_SSPBUF_size                      0x8
#define SSP2BUF_SSPBUF_value_mask                0xFF
#define SSP2BUF_SSPBUF_clear_mask                0x0


/*---------------------------------------------------------------------------#
| T4CON                                                                0xF76 |
#----------------------------------------------------------------------------#
| - | T4OUTPS3 | T4OUTPS2 | T4OUTPS1 | T4OUTPS0 | TMR4ON | T4CKPS1 | T4CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T4CON                                    0x0
#define T4CON_address                            0xF76
#define T4CON_position                           0x0
#define T4CON_size                               0x8
#define T4CON_value_mask                         0xFF
#define T4CON_clear_mask                         0x0

#define T4CKPS0                                  0x0
#define T4CKPS0_address                          0xF76
#define T4CKPS0_position                         0x0
#define T4CKPS0_size                             0x1
#define T4CKPS0_value_mask                       0x1
#define T4CKPS0_clear_mask                       0xFE

#define T4CKPS                                   0x0
#define T4CKPS_address                           0xF76
#define T4CKPS_position                          0x0
#define T4CKPS_size                              0x2
#define T4CKPS_value_mask                        0x3
#define T4CKPS_clear_mask                        0xFC

#define T4CKPS1                                  0x1
#define T4CKPS1_address                          0xF76
#define T4CKPS1_position                         0x1
#define T4CKPS1_size                             0x1
#define T4CKPS1_value_mask                       0x2
#define T4CKPS1_clear_mask                       0xFD

#define TMR4ON                                   0x2
#define TMR4ON_address                           0xF76
#define TMR4ON_position                          0x2
#define TMR4ON_size                              0x1
#define TMR4ON_value_mask                        0x4
#define TMR4ON_clear_mask                        0xFB

#define T4OUTPS                                  0x3
#define T4OUTPS_address                          0xF76
#define T4OUTPS_position                         0x3
#define T4OUTPS_size                             0x4
#define T4OUTPS_value_mask                       0x78
#define T4OUTPS_clear_mask                       0x87

#define T4OUTPS0                                 0x3
#define T4OUTPS0_address                         0xF76
#define T4OUTPS0_position                        0x3
#define T4OUTPS0_size                            0x1
#define T4OUTPS0_value_mask                      0x8
#define T4OUTPS0_clear_mask                      0xF7

#define T4OUTPS1                                 0x4
#define T4OUTPS1_address                         0xF76
#define T4OUTPS1_position                        0x4
#define T4OUTPS1_size                            0x1
#define T4OUTPS1_value_mask                      0x10
#define T4OUTPS1_clear_mask                      0xEF

#define T4OUTPS2                                 0x5
#define T4OUTPS2_address                         0xF76
#define T4OUTPS2_position                        0x5
#define T4OUTPS2_size                            0x1
#define T4OUTPS2_value_mask                      0x20
#define T4OUTPS2_clear_mask                      0xDF

#define T4OUTPS3                                 0x6
#define T4OUTPS3_address                         0xF76
#define T4OUTPS3_position                        0x6
#define T4OUTPS3_size                            0x1
#define T4OUTPS3_value_mask                      0x40
#define T4OUTPS3_clear_mask                      0xBF


/*------------------------------#
| PR4                     0xF77 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR4                                      0x0
#define PR4_address                              0xF77
#define PR4_position                             0x0
#define PR4_size                                 0x8
#define PR4_value_mask                           0xFF
#define PR4_clear_mask                           0x0


/*------------------------------#
| TMR4                    0xF78 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR4                                     0x0
#define TMR4_address                             0xF78
#define TMR4_position                            0x0
#define TMR4_size                                0x8
#define TMR4_value_mask                          0xFF
#define TMR4_clear_mask                          0x0


/*--------------------------------------------------------------------------------#
| T3CON                                                                     0xF79 |
#---------------------------------------------------------------------------------#
| TMR3CS1 | TMR3CS0 | T3CKPS1 | T3CKPS0 | SOSCEN3 | nT3SYNC | T3CON_RD16 | TMR3ON |
#---------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1          | 0      |
#--------------------------------------------------------------------------------*/

#define T3CON                                    0x0
#define T3CON_address                            0xF79
#define T3CON_position                           0x0
#define T3CON_size                               0x8
#define T3CON_value_mask                         0xFF
#define T3CON_clear_mask                         0x0

#define TMR3ON                                   0x0
#define TMR3ON_address                           0xF79
#define TMR3ON_position                          0x0
#define TMR3ON_size                              0x1
#define TMR3ON_value_mask                        0x1
#define TMR3ON_clear_mask                        0xFE

#define T3CON_RD16                               0x1
#define T3CON_RD16_address                       0xF79
#define T3CON_RD16_position                      0x1
#define T3CON_RD16_size                          0x1
#define T3CON_RD16_value_mask                    0x2
#define T3CON_RD16_clear_mask                    0xFD

#define nT3SYNC                                  0x2
#define nT3SYNC_address                          0xF79
#define nT3SYNC_position                         0x2
#define nT3SYNC_size                             0x1
#define nT3SYNC_value_mask                       0x4
#define nT3SYNC_clear_mask                       0xFB

#define NOT_T3SYNC                               0x2
#define NOT_T3SYNC_address                       0xF79
#define NOT_T3SYNC_position                      0x2
#define NOT_T3SYNC_size                          0x1
#define NOT_T3SYNC_value_mask                    0x4
#define NOT_T3SYNC_clear_mask                    0xFB

#define SOSCEN3                                  0x3
#define SOSCEN3_address                          0xF79
#define SOSCEN3_position                         0x3
#define SOSCEN3_size                             0x1
#define SOSCEN3_value_mask                       0x8
#define SOSCEN3_clear_mask                       0xF7

#define T3OSCEN                                  0x3
#define T3OSCEN_address                          0xF79
#define T3OSCEN_position                         0x3
#define T3OSCEN_size                             0x1
#define T3OSCEN_value_mask                       0x8
#define T3OSCEN_clear_mask                       0xF7

#define T3CKPS                                   0x4
#define T3CKPS_address                           0xF79
#define T3CKPS_position                          0x4
#define T3CKPS_size                              0x2
#define T3CKPS_value_mask                        0x30
#define T3CKPS_clear_mask                        0xCF

#define T3CKPS0                                  0x4
#define T3CKPS0_address                          0xF79
#define T3CKPS0_position                         0x4
#define T3CKPS0_size                             0x1
#define T3CKPS0_value_mask                       0x10
#define T3CKPS0_clear_mask                       0xEF

#define T3CKPS1                                  0x5
#define T3CKPS1_address                          0xF79
#define T3CKPS1_position                         0x5
#define T3CKPS1_size                             0x1
#define T3CKPS1_value_mask                       0x20
#define T3CKPS1_clear_mask                       0xDF

#define TMR3CS0                                  0x6
#define TMR3CS0_address                          0xF79
#define TMR3CS0_position                         0x6
#define TMR3CS0_size                             0x1
#define TMR3CS0_value_mask                       0x40
#define TMR3CS0_clear_mask                       0xBF

#define TMR3CS                                   0x6
#define TMR3CS_address                           0xF79
#define TMR3CS_position                          0x6
#define TMR3CS_size                              0x2
#define TMR3CS_value_mask                        0xC0
#define TMR3CS_clear_mask                        0x3F

#define TMR3CS1                                  0x7
#define TMR3CS1_address                          0xF79
#define TMR3CS1_position                         0x7
#define TMR3CS1_size                             0x1
#define TMR3CS1_value_mask                       0x80
#define TMR3CS1_clear_mask                       0x7F

#define T3RD16                                   0x7
#define T3RD16_address                           0xF79
#define T3RD16_position                          0x7
#define T3RD16_size                              0x1
#define T3RD16_value_mask                        0x80
#define T3RD16_clear_mask                        0x7F

#define RD163                                    0x7
#define RD163_address                            0xF79
#define RD163_position                           0x7
#define RD163_size                               0x1
#define RD163_value_mask                         0x80
#define RD163_clear_mask                         0x7F


/*------------------------------#
| TMR3L                   0xF7A |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR3L                                    0x0
#define TMR3L_address                            0xF7A
#define TMR3L_position                           0x0
#define TMR3L_size                               0x8
#define TMR3L_value_mask                         0xFF
#define TMR3L_clear_mask                         0x0


/*------------------------------#
| TMR3H                   0xF7B |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR3H                                    0x0
#define TMR3H_address                            0xF7B
#define TMR3H_position                           0x0
#define TMR3H_size                               0x8
#define TMR3H_value_mask                         0xFF
#define TMR3H_clear_mask                         0x0


/*------------------------------------------------------------------------------------------------#
| BAUDCON2                                                                                  0xF7C |
#-------------------------------------------------------------------------------------------------#
| BAUDCON2_ABDOVF | BAUDCON2_RCIDL | DTRXP2 | BAUDCON2_TXCKP | BAUDCON2_BRG16 | - | WUE2 | ABDEN2 |
#-------------------------------------------------------------------------------------------------#
| 7               | 6              | 5      | 4              | 3              | 2 | 1    | 0      |
#------------------------------------------------------------------------------------------------*/

#define BAUDCON2                                 0x0
#define BAUDCON2_address                         0xF7C
#define BAUDCON2_position                        0x0
#define BAUDCON2_size                            0x8
#define BAUDCON2_value_mask                      0xFF
#define BAUDCON2_clear_mask                      0x0

#define ABDEN2                                   0x0
#define ABDEN2_address                           0xF7C
#define ABDEN2_position                          0x0
#define ABDEN2_size                              0x1
#define ABDEN2_value_mask                        0x1
#define ABDEN2_clear_mask                        0xFE

#define BAUDCON2_ABDEN                           0x0
#define BAUDCON2_ABDEN_address                   0xF7C
#define BAUDCON2_ABDEN_position                  0x0
#define BAUDCON2_ABDEN_size                      0x1
#define BAUDCON2_ABDEN_value_mask                0x1
#define BAUDCON2_ABDEN_clear_mask                0xFE

#define WUE2                                     0x1
#define WUE2_address                             0xF7C
#define WUE2_position                            0x1
#define WUE2_size                                0x1
#define WUE2_value_mask                          0x2
#define WUE2_clear_mask                          0xFD

#define BAUDCON2_WUE                             0x1
#define BAUDCON2_WUE_address                     0xF7C
#define BAUDCON2_WUE_position                    0x1
#define BAUDCON2_WUE_size                        0x1
#define BAUDCON2_WUE_value_mask                  0x2
#define BAUDCON2_WUE_clear_mask                  0xFD

#define BRG162                                   0x3
#define BRG162_address                           0xF7C
#define BRG162_position                          0x3
#define BRG162_size                              0x1
#define BRG162_value_mask                        0x8
#define BRG162_clear_mask                        0xF7

#define BAUDCON2_BRG16                           0x3
#define BAUDCON2_BRG16_address                   0xF7C
#define BAUDCON2_BRG16_position                  0x3
#define BAUDCON2_BRG16_size                      0x1
#define BAUDCON2_BRG16_value_mask                0x8
#define BAUDCON2_BRG16_clear_mask                0xF7

#define SCKP2                                    0x4
#define SCKP2_address                            0xF7C
#define SCKP2_position                           0x4
#define SCKP2_size                               0x1
#define SCKP2_value_mask                         0x10
#define SCKP2_clear_mask                         0xEF

#define TXCKP2                                   0x4
#define TXCKP2_address                           0xF7C
#define TXCKP2_position                          0x4
#define TXCKP2_size                              0x1
#define TXCKP2_value_mask                        0x10
#define TXCKP2_clear_mask                        0xEF

#define BAUDCON2_TXCKP                           0x4
#define BAUDCON2_TXCKP_address                   0xF7C
#define BAUDCON2_TXCKP_position                  0x4
#define BAUDCON2_TXCKP_size                      0x1
#define BAUDCON2_TXCKP_value_mask                0x10
#define BAUDCON2_TXCKP_clear_mask                0xEF

#define DTRXP2                                   0x5
#define DTRXP2_address                           0xF7C
#define DTRXP2_position                          0x5
#define DTRXP2_size                              0x1
#define DTRXP2_value_mask                        0x20
#define DTRXP2_clear_mask                        0xDF

#define RXDTP2                                   0x5
#define RXDTP2_address                           0xF7C
#define RXDTP2_position                          0x5
#define RXDTP2_size                              0x1
#define RXDTP2_value_mask                        0x20
#define RXDTP2_clear_mask                        0xDF

#define BAUDCON2_RXDTP                           0x5
#define BAUDCON2_RXDTP_address                   0xF7C
#define BAUDCON2_RXDTP_position                  0x5
#define BAUDCON2_RXDTP_size                      0x1
#define BAUDCON2_RXDTP_value_mask                0x20
#define BAUDCON2_RXDTP_clear_mask                0xDF

#define RCMT2                                    0x6
#define RCMT2_address                            0xF7C
#define RCMT2_position                           0x6
#define RCMT2_size                               0x1
#define RCMT2_value_mask                         0x40
#define RCMT2_clear_mask                         0xBF

#define RCIDL2                                   0x6
#define RCIDL2_address                           0xF7C
#define RCIDL2_position                          0x6
#define RCIDL2_size                              0x1
#define RCIDL2_value_mask                        0x40
#define RCIDL2_clear_mask                        0xBF

#define BAUDCON2_RCIDL                           0x6
#define BAUDCON2_RCIDL_address                   0xF7C
#define BAUDCON2_RCIDL_position                  0x6
#define BAUDCON2_RCIDL_size                      0x1
#define BAUDCON2_RCIDL_value_mask                0x40
#define BAUDCON2_RCIDL_clear_mask                0xBF

#define BAUDCON2_ABDOVF                          0x7
#define BAUDCON2_ABDOVF_address                  0xF7C
#define BAUDCON2_ABDOVF_position                 0x7
#define BAUDCON2_ABDOVF_size                     0x1
#define BAUDCON2_ABDOVF_value_mask               0x80
#define BAUDCON2_ABDOVF_clear_mask               0x7F

#define ABDOVF2                                  0x7
#define ABDOVF2_address                          0xF7C
#define ABDOVF2_position                         0x7
#define ABDOVF2_size                             0x1
#define ABDOVF2_value_mask                       0x80
#define ABDOVF2_clear_mask                       0x7F


/*------------------------------#
| SPBRGH2                 0xF7D |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SPBRGH2                                  0x0
#define SPBRGH2_address                          0xF7D
#define SPBRGH2_position                         0x0
#define SPBRGH2_size                             0x8
#define SPBRGH2_value_mask                       0xFF
#define SPBRGH2_clear_mask                       0x0


/*------------------------------------------------------------------------------#
| BAUDCON1                                                                0xF7E |
#-------------------------------------------------------------------------------#
| ABDOVF1 | RCMT1 | DTRXP1 | CKTXP | BRG161 | - | BAUDCON1_WUE | BAUDCON1_ABDEN |
#-------------------------------------------------------------------------------#
| 7       | 6     | 5      | 4     | 3      | 2 | 1            | 0              |
#------------------------------------------------------------------------------*/

#define BAUDCON1                                 0x0
#define BAUDCON1_address                         0xF7E
#define BAUDCON1_position                        0x0
#define BAUDCON1_size                            0x8
#define BAUDCON1_value_mask                      0xFF
#define BAUDCON1_clear_mask                      0x0

#define BAUDCON1_ABDEN                           0x0
#define BAUDCON1_ABDEN_address                   0xF7E
#define BAUDCON1_ABDEN_position                  0x0
#define BAUDCON1_ABDEN_size                      0x1
#define BAUDCON1_ABDEN_value_mask                0x1
#define BAUDCON1_ABDEN_clear_mask                0xFE

#define ABDEN1                                   0x0
#define ABDEN1_address                           0xF7E
#define ABDEN1_position                          0x0
#define ABDEN1_size                              0x1
#define ABDEN1_value_mask                        0x1
#define ABDEN1_clear_mask                        0xFE

#define BAUDCON1_WUE                             0x1
#define BAUDCON1_WUE_address                     0xF7E
#define BAUDCON1_WUE_position                    0x1
#define BAUDCON1_WUE_size                        0x1
#define BAUDCON1_WUE_value_mask                  0x2
#define BAUDCON1_WUE_clear_mask                  0xFD

#define WUE1                                     0x1
#define WUE1_address                             0xF7E
#define WUE1_position                            0x1
#define WUE1_size                                0x1
#define WUE1_value_mask                          0x2
#define WUE1_clear_mask                          0xFD

#define W4E                                      0x1
#define W4E_address                              0xF7E
#define W4E_position                             0x1
#define W4E_size                                 0x1
#define W4E_value_mask                           0x2
#define W4E_clear_mask                           0xFD

#define BRG161                                   0x3
#define BRG161_address                           0xF7E
#define BRG161_position                          0x3
#define BRG161_size                              0x1
#define BRG161_value_mask                        0x8
#define BRG161_clear_mask                        0xF7

#define BAUDCON1_BRG16                           0x3
#define BAUDCON1_BRG16_address                   0xF7E
#define BAUDCON1_BRG16_position                  0x3
#define BAUDCON1_BRG16_size                      0x1
#define BAUDCON1_BRG16_value_mask                0x8
#define BAUDCON1_BRG16_clear_mask                0xF7

#define CKTXP                                    0x4
#define CKTXP_address                            0xF7E
#define CKTXP_position                           0x4
#define CKTXP_size                               0x1
#define CKTXP_value_mask                         0x10
#define CKTXP_clear_mask                         0xEF

#define BAUDCON1_TXCKP                           0x4
#define BAUDCON1_TXCKP_address                   0xF7E
#define BAUDCON1_TXCKP_position                  0x4
#define BAUDCON1_TXCKP_size                      0x1
#define BAUDCON1_TXCKP_value_mask                0x10
#define BAUDCON1_TXCKP_clear_mask                0xEF

#define SCKP1                                    0x4
#define SCKP1_address                            0xF7E
#define SCKP1_position                           0x4
#define SCKP1_size                               0x1
#define SCKP1_value_mask                         0x10
#define SCKP1_clear_mask                         0xEF

#define TXCKP1                                   0x4
#define TXCKP1_address                           0xF7E
#define TXCKP1_position                          0x4
#define TXCKP1_size                              0x1
#define TXCKP1_value_mask                        0x10
#define TXCKP1_clear_mask                        0xEF

#define SCKP                                     0x4
#define SCKP_address                             0xF7E
#define SCKP_position                            0x4
#define SCKP_size                                0x1
#define SCKP_value_mask                          0x10
#define SCKP_clear_mask                          0xEF

#define DTRXP1                                   0x5
#define DTRXP1_address                           0xF7E
#define DTRXP1_position                          0x5
#define DTRXP1_size                              0x1
#define DTRXP1_value_mask                        0x20
#define DTRXP1_clear_mask                        0xDF

#define RXDTP1                                   0x5
#define RXDTP1_address                           0xF7E
#define RXDTP1_position                          0x5
#define RXDTP1_size                              0x1
#define RXDTP1_value_mask                        0x20
#define RXDTP1_clear_mask                        0xDF

#define DTRXP                                    0x5
#define DTRXP_address                            0xF7E
#define DTRXP_position                           0x5
#define DTRXP_size                               0x1
#define DTRXP_value_mask                         0x20
#define DTRXP_clear_mask                         0xDF

#define RXCKP                                    0x5
#define RXCKP_address                            0xF7E
#define RXCKP_position                           0x5
#define RXCKP_size                               0x1
#define RXCKP_value_mask                         0x20
#define RXCKP_clear_mask                         0xDF

#define BAUDCON1_RXDTP                           0x5
#define BAUDCON1_RXDTP_address                   0xF7E
#define BAUDCON1_RXDTP_position                  0x5
#define BAUDCON1_RXDTP_size                      0x1
#define BAUDCON1_RXDTP_value_mask                0x20
#define BAUDCON1_RXDTP_clear_mask                0xDF

#define RCMT1                                    0x6
#define RCMT1_address                            0xF7E
#define RCMT1_position                           0x6
#define RCMT1_size                               0x1
#define RCMT1_value_mask                         0x40
#define RCMT1_clear_mask                         0xBF

#define RCIDL1                                   0x6
#define RCIDL1_address                           0xF7E
#define RCIDL1_position                          0x6
#define RCIDL1_size                              0x1
#define RCIDL1_value_mask                        0x40
#define RCIDL1_clear_mask                        0xBF

#define BAUDCON1_RCIDL                           0x6
#define BAUDCON1_RCIDL_address                   0xF7E
#define BAUDCON1_RCIDL_position                  0x6
#define BAUDCON1_RCIDL_size                      0x1
#define BAUDCON1_RCIDL_value_mask                0x40
#define BAUDCON1_RCIDL_clear_mask                0xBF

#define RCMT                                     0x6
#define RCMT_address                             0xF7E
#define RCMT_position                            0x6
#define RCMT_size                                0x1
#define RCMT_value_mask                          0x40
#define RCMT_clear_mask                          0xBF

#define ABDOVF1                                  0x7
#define ABDOVF1_address                          0xF7E
#define ABDOVF1_position                         0x7
#define ABDOVF1_size                             0x1
#define ABDOVF1_value_mask                       0x80
#define ABDOVF1_clear_mask                       0x7F

#define BAUDCON1_ABDOVF                          0x7
#define BAUDCON1_ABDOVF_address                  0xF7E
#define BAUDCON1_ABDOVF_position                 0x7
#define BAUDCON1_ABDOVF_size                     0x1
#define BAUDCON1_ABDOVF_value_mask               0x80
#define BAUDCON1_ABDOVF_clear_mask               0x7F


/*------------------------------#
| SPBRGH1                 0xF7F |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SPBRGH1                                  0x0
#define SPBRGH1_address                          0xF7F
#define SPBRGH1_position                         0x0
#define SPBRGH1_size                             0x8
#define SPBRGH1_value_mask                       0xFF
#define SPBRGH1_clear_mask                       0x0


/*-------------------------------------------------------#
| PORTA                                            0xF80 |
#--------------------------------------------------------#
| CLKI | CLKO | HLVDIN | - | C1INB | C1IND | VBG | C1INA |
#--------------------------------------------------------#
| 7    | 6    | 5      | 4 | 3     | 2     | 1   | 0     |
#-------------------------------------------------------*/

#define PORTA                                    0x0
#define PORTA_address                            0xF80
#define PORTA_position                           0x0
#define PORTA_size                               0x8
#define PORTA_value_mask                         0xFF
#define PORTA_clear_mask                         0x0

#define C1INA                                    0x0
#define C1INA_address                            0xF80
#define C1INA_position                           0x0
#define C1INA_size                               0x1
#define C1INA_value_mask                         0x1
#define C1INA_clear_mask                         0xFE

#define AN0                                      0x0
#define AN0_address                              0xF80
#define AN0_position                             0x0
#define AN0_size                                 0x1
#define AN0_value_mask                           0x1
#define AN0_clear_mask                           0xFE

#define ULPWUIN                                  0x0
#define ULPWUIN_address                          0xF80
#define ULPWUIN_position                         0x0
#define ULPWUIN_size                             0x1
#define ULPWUIN_value_mask                       0x1
#define ULPWUIN_clear_mask                       0xFE

#define ULPWU                                    0x0
#define ULPWU_address                            0xF80
#define ULPWU_position                           0x0
#define ULPWU_size                               0x1
#define ULPWU_value_mask                         0x1
#define ULPWU_clear_mask                         0xFE

#define RP0                                      0x0
#define RP0_address                              0xF80
#define RP0_position                             0x0
#define RP0_size                                 0x1
#define RP0_value_mask                           0x1
#define RP0_clear_mask                           0xFE

#define RA0                                      0x0
#define RA0_address                              0xF80
#define RA0_position                             0x0
#define RA0_size                                 0x1
#define RA0_value_mask                           0x1
#define RA0_clear_mask                           0xFE

#define VBG                                      0x1
#define VBG_address                              0xF80
#define VBG_position                             0x1
#define VBG_size                                 0x1
#define VBG_value_mask                           0x2
#define VBG_clear_mask                           0xFD

#define AN1                                      0x1
#define AN1_address                              0xF80
#define AN1_position                             0x1
#define AN1_size                                 0x1
#define AN1_value_mask                           0x2
#define AN1_clear_mask                           0xFD

#define RP1                                      0x1
#define RP1_address                              0xF80
#define RP1_position                             0x1
#define RP1_size                                 0x1
#define RP1_value_mask                           0x2
#define RP1_clear_mask                           0xFD

#define RA1                                      0x1
#define RA1_address                              0xF80
#define RA1_position                             0x1
#define RA1_size                                 0x1
#define RA1_value_mask                           0x2
#define RA1_clear_mask                           0xFD

#define C2INA                                    0x1
#define C2INA_address                            0xF80
#define C2INA_position                           0x1
#define C2INA_size                               0x1
#define C2INA_value_mask                         0x2
#define C2INA_clear_mask                         0xFD

#define C1IND                                    0x2
#define C1IND_address                            0xF80
#define C1IND_position                           0x2
#define C1IND_size                               0x1
#define C1IND_value_mask                         0x4
#define C1IND_clear_mask                         0xFB

#define AN2                                      0x2
#define AN2_address                              0xF80
#define AN2_position                             0x2
#define AN2_size                                 0x1
#define AN2_value_mask                           0x4
#define AN2_clear_mask                           0xFB

#define C3INB                                    0x2
#define C3INB_address                            0xF80
#define C3INB_position                           0x2
#define C3INB_size                               0x1
#define C3INB_value_mask                         0x4
#define C3INB_clear_mask                         0xFB

#define CVREF                                    0x2
#define CVREF_address                            0xF80
#define CVREF_position                           0x2
#define CVREF_size                               0x1
#define CVREF_value_mask                         0x4
#define CVREF_clear_mask                         0xFB

#define RA2                                      0x2
#define RA2_address                              0xF80
#define RA2_position                             0x2
#define RA2_size                                 0x1
#define RA2_value_mask                           0x4
#define RA2_clear_mask                           0xFB

#define VREF_MINUS                               0x2
#define VREF_MINUS_address                       0xF80
#define VREF_MINUS_position                      0x2
#define VREF_MINUS_size                          0x1
#define VREF_MINUS_value_mask                    0x4
#define VREF_MINUS_clear_mask                    0xFB

#define C2INB                                    0x2
#define C2INB_address                            0xF80
#define C2INB_position                           0x2
#define C2INB_size                               0x1
#define C2INB_value_mask                         0x4
#define C2INB_clear_mask                         0xFB

#define C1INB                                    0x3
#define C1INB_address                            0xF80
#define C1INB_position                           0x3
#define C1INB_size                               0x1
#define C1INB_value_mask                         0x8
#define C1INB_clear_mask                         0xF7

#define AN3                                      0x3
#define AN3_address                              0xF80
#define AN3_position                             0x3
#define AN3_size                                 0x1
#define AN3_value_mask                           0x8
#define AN3_clear_mask                           0xF7

#define VREF_PLUS                                0x3
#define VREF_PLUS_address                        0xF80
#define VREF_PLUS_position                       0x3
#define VREF_PLUS_size                           0x1
#define VREF_PLUS_value_mask                     0x8
#define VREF_PLUS_clear_mask                     0xF7

#define RA3                                      0x3
#define RA3_address                              0xF80
#define RA3_position                             0x3
#define RA3_size                                 0x1
#define RA3_value_mask                           0x8
#define RA3_clear_mask                           0xF7

#define AN4                                      0x5
#define AN4_address                              0xF80
#define AN4_position                             0x5
#define AN4_size                                 0x1
#define AN4_value_mask                           0x20
#define AN4_clear_mask                           0xDF

#define C1INC                                    0x5
#define C1INC_address                            0xF80
#define C1INC_position                           0x5
#define C1INC_size                               0x1
#define C1INC_value_mask                         0x20
#define C1INC_clear_mask                         0xDF

#define NOT_SS1                                  0x5
#define NOT_SS1_address                          0xF80
#define NOT_SS1_position                         0x5
#define NOT_SS1_size                             0x1
#define NOT_SS1_value_mask                       0x20
#define NOT_SS1_clear_mask                       0xDF

#define RP2                                      0x5
#define RP2_address                              0xF80
#define RP2_position                             0x5
#define RP2_size                                 0x1
#define RP2_value_mask                           0x20
#define RP2_clear_mask                           0xDF

#define LVDIN                                    0x5
#define LVDIN_address                            0xF80
#define LVDIN_position                           0x5
#define LVDIN_size                               0x1
#define LVDIN_value_mask                         0x20
#define LVDIN_clear_mask                         0xDF

#define RA5                                      0x5
#define RA5_address                              0xF80
#define RA5_position                             0x5
#define RA5_size                                 0x1
#define RA5_value_mask                           0x20
#define RA5_clear_mask                           0xDF

#define nSS1                                     0x5
#define nSS1_address                             0xF80
#define nSS1_position                            0x5
#define nSS1_size                                0x1
#define nSS1_value_mask                          0x20
#define nSS1_clear_mask                          0xDF

#define HLVDIN                                   0x5
#define HLVDIN_address                           0xF80
#define HLVDIN_position                          0x5
#define HLVDIN_size                              0x1
#define HLVDIN_value_mask                        0x20
#define HLVDIN_clear_mask                        0xDF

#define CLKO                                     0x6
#define CLKO_address                             0xF80
#define CLKO_position                            0x6
#define CLKO_size                                0x1
#define CLKO_value_mask                          0x40
#define CLKO_clear_mask                          0xBF

#define RA6                                      0x6
#define RA6_address                              0xF80
#define RA6_position                             0x6
#define RA6_size                                 0x1
#define RA6_value_mask                           0x40
#define RA6_clear_mask                           0xBF

#define OSC2                                     0x6
#define OSC2_address                             0xF80
#define OSC2_position                            0x6
#define OSC2_size                                0x1
#define OSC2_value_mask                          0x40
#define OSC2_clear_mask                          0xBF

#define CLKI                                     0x7
#define CLKI_address                             0xF80
#define CLKI_position                            0x7
#define CLKI_size                                0x1
#define CLKI_value_mask                          0x80
#define CLKI_clear_mask                          0x7F

#define RJPU                                     0x7
#define RJPU_address                             0xF80
#define RJPU_position                            0x7
#define RJPU_size                                0x1
#define RJPU_value_mask                          0x80
#define RJPU_clear_mask                          0x7F

#define RA7                                      0x7
#define RA7_address                              0xF80
#define RA7_position                             0x7
#define RA7_size                                 0x1
#define RA7_value_mask                           0x80
#define RA7_clear_mask                           0x7F

#define OSC1                                     0x7
#define OSC1_address                             0xF80
#define OSC1_position                            0x7
#define OSC1_size                                0x1
#define OSC1_value_mask                          0x80
#define OSC1_clear_mask                          0x7F


/*--------------------------------------------------#
| PORTB                                       0xF81 |
#---------------------------------------------------#
| CCP7 | KBI2 | CCP5 | CCP4 | AN9 | AN8 | RB1 | RB0 |
#---------------------------------------------------#
| 7    | 6    | 5    | 4    | 3   | 2   | 1   | 0   |
#--------------------------------------------------*/

#define PORTB                                    0x0
#define PORTB_address                            0xF81
#define PORTB_position                           0x0
#define PORTB_size                               0x8
#define PORTB_value_mask                         0xFF
#define PORTB_clear_mask                         0x0

#define RB0                                      0x0
#define RB0_address                              0xF81
#define RB0_position                             0x0
#define RB0_size                                 0x1
#define RB0_value_mask                           0x1
#define RB0_clear_mask                           0xFE

#define C3IND                                    0x0
#define C3IND_address                            0xF81
#define C3IND_position                           0x0
#define C3IND_size                               0x1
#define C3IND_value_mask                         0x1
#define C3IND_clear_mask                         0xFE

#define INT0                                     0x0
#define INT0_address                             0xF81
#define INT0_position                            0x0
#define INT0_size                                0x1
#define INT0_value_mask                          0x1
#define INT0_clear_mask                          0xFE

#define RP3                                      0x0
#define RP3_address                              0xF81
#define RP3_position                             0x0
#define RP3_size                                 0x1
#define RP3_value_mask                           0x1
#define RP3_clear_mask                           0xFE

#define AN12                                     0x0
#define AN12_address                             0xF81
#define AN12_position                            0x0
#define AN12_size                                0x1
#define AN12_value_mask                          0x1
#define AN12_clear_mask                          0xFE

#define RB1                                      0x1
#define RB1_address                              0xF81
#define RB1_position                             0x1
#define RB1_size                                 0x1
#define RB1_value_mask                           0x2
#define RB1_clear_mask                           0xFD

#define C3INC                                    0x1
#define C3INC_address                            0xF81
#define C3INC_position                           0x1
#define C3INC_size                               0x1
#define C3INC_value_mask                         0x2
#define C3INC_clear_mask                         0xFD

#define RP4                                      0x1
#define RP4_address                              0xF81
#define RP4_position                             0x1
#define RP4_size                                 0x1
#define RP4_value_mask                           0x2
#define RP4_clear_mask                           0xFD

#define RTCC                                     0x1
#define RTCC_address                             0xF81
#define RTCC_position                            0x1
#define RTCC_size                                0x1
#define RTCC_value_mask                          0x2
#define RTCC_clear_mask                          0xFD

#define AN10                                     0x1
#define AN10_address                             0xF81
#define AN10_position                            0x1
#define AN10_size                                0x1
#define AN10_value_mask                          0x2
#define AN10_clear_mask                          0xFD

#define REFO                                     0x2
#define REFO_address                             0xF81
#define REFO_position                            0x2
#define REFO_size                                0x1
#define REFO_value_mask                          0x4
#define REFO_clear_mask                          0xFB

#define AN8                                      0x2
#define AN8_address                              0xF81
#define AN8_position                             0x2
#define AN8_size                                 0x1
#define AN8_value_mask                           0x4
#define AN8_clear_mask                           0xFB

#define RB2                                      0x2
#define RB2_address                              0xF81
#define RB2_position                             0x2
#define RB2_size                                 0x1
#define RB2_value_mask                           0x4
#define RB2_clear_mask                           0xFB

#define C2INC                                    0x2
#define C2INC_address                            0xF81
#define C2INC_position                           0x2
#define C2INC_size                               0x1
#define C2INC_value_mask                         0x4
#define C2INC_clear_mask                         0xFB

#define RP5                                      0x2
#define RP5_address                              0xF81
#define RP5_position                             0x2
#define RP5_size                                 0x1
#define RP5_value_mask                           0x4
#define RP5_clear_mask                           0xFB

#define CTED1                                    0x2
#define CTED1_address                            0xF81
#define CTED1_position                           0x2
#define CTED1_size                               0x1
#define CTED1_value_mask                         0x4
#define CTED1_clear_mask                         0xFB

#define AN9                                      0x3
#define AN9_address                              0xF81
#define AN9_position                             0x3
#define AN9_size                                 0x1
#define AN9_value_mask                           0x8
#define AN9_clear_mask                           0xF7

#define RB3                                      0x3
#define RB3_address                              0xF81
#define RB3_position                             0x3
#define RB3_size                                 0x1
#define RB3_value_mask                           0x8
#define RB3_clear_mask                           0xF7

#define C3INA                                    0x3
#define C3INA_address                            0xF81
#define C3INA_position                           0x3
#define C3INA_size                               0x1
#define C3INA_value_mask                         0x8
#define C3INA_clear_mask                         0xF7

#define CCP2_PA2                                 0x3
#define CCP2_PA2_address                         0xF81
#define CCP2_PA2_position                        0x3
#define CCP2_PA2_size                            0x1
#define CCP2_PA2_value_mask                      0x8
#define CCP2_PA2_clear_mask                      0xF7

#define RP6                                      0x3
#define RP6_address                              0xF81
#define RP6_position                             0x3
#define RP6_size                                 0x1
#define RP6_value_mask                           0x8
#define RP6_clear_mask                           0xF7

#define CTED2                                    0x3
#define CTED2_address                            0xF81
#define CTED2_position                           0x3
#define CTED2_size                               0x1
#define CTED2_value_mask                         0x8
#define CTED2_clear_mask                         0xF7

#define CCP4                                     0x4
#define CCP4_address                             0xF81
#define CCP4_position                            0x4
#define CCP4_size                                0x1
#define CCP4_value_mask                          0x10
#define CCP4_clear_mask                          0xEF

#define RB4                                      0x4
#define RB4_address                              0xF81
#define RB4_position                             0x4
#define RB4_size                                 0x1
#define RB4_value_mask                           0x10
#define RB4_clear_mask                           0xEF

#define RP7                                      0x4
#define RP7_address                              0xF81
#define RP7_position                             0x4
#define RP7_size                                 0x1
#define RP7_value_mask                           0x10
#define RP7_clear_mask                           0xEF

#define SCL2                                     0x4
#define SCL2_address                             0xF81
#define SCL2_position                            0x4
#define SCL2_size                                0x1
#define SCL2_value_mask                          0x10
#define SCL2_clear_mask                          0xEF

#define KBI0                                     0x4
#define KBI0_address                             0xF81
#define KBI0_position                            0x4
#define KBI0_size                                0x1
#define KBI0_value_mask                          0x10
#define KBI0_clear_mask                          0xEF

#define CCP5                                     0x5
#define CCP5_address                             0xF81
#define CCP5_position                            0x5
#define CCP5_size                                0x1
#define CCP5_value_mask                          0x20
#define CCP5_clear_mask                          0xDF

#define RB5                                      0x5
#define RB5_address                              0xF81
#define RB5_position                             0x5
#define RB5_size                                 0x1
#define RB5_value_mask                           0x20
#define RB5_clear_mask                           0xDF

#define RP8                                      0x5
#define RP8_address                              0xF81
#define RP8_position                             0x5
#define RP8_size                                 0x1
#define RP8_value_mask                           0x20
#define RP8_clear_mask                           0xDF

#define KBI1                                     0x5
#define KBI1_address                             0xF81
#define KBI1_position                            0x5
#define KBI1_size                                0x1
#define KBI1_value_mask                          0x20
#define KBI1_clear_mask                          0xDF

#define SDA2                                     0x5
#define SDA2_address                             0xF81
#define SDA2_position                            0x5
#define SDA2_size                                0x1
#define SDA2_value_mask                          0x20
#define SDA2_clear_mask                          0xDF

#define CCP6                                     0x6
#define CCP6_address                             0xF81
#define CCP6_position                            0x6
#define CCP6_size                                0x1
#define CCP6_value_mask                          0x40
#define CCP6_clear_mask                          0xBF

#define PGC                                      0x6
#define PGC_address                              0xF81
#define PGC_position                             0x6
#define PGC_size                                 0x1
#define PGC_value_mask                           0x40
#define PGC_clear_mask                           0xBF

#define RB6                                      0x6
#define RB6_address                              0xF81
#define RB6_position                             0x6
#define RB6_size                                 0x1
#define RB6_value_mask                           0x40
#define RB6_clear_mask                           0xBF

#define RP9                                      0x6
#define RP9_address                              0xF81
#define RP9_position                             0x6
#define RP9_size                                 0x1
#define RP9_value_mask                           0x40
#define RP9_clear_mask                           0xBF

#define KBI2                                     0x6
#define KBI2_address                             0xF81
#define KBI2_position                            0x6
#define KBI2_size                                0x1
#define KBI2_value_mask                          0x40
#define KBI2_clear_mask                          0xBF

#define CCP7                                     0x7
#define CCP7_address                             0xF81
#define CCP7_position                            0x7
#define CCP7_size                                0x1
#define CCP7_value_mask                          0x80
#define CCP7_clear_mask                          0x7F

#define PGD                                      0x7
#define PGD_address                              0xF81
#define PGD_position                             0x7
#define PGD_size                                 0x1
#define PGD_value_mask                           0x80
#define PGD_clear_mask                           0x7F

#define RB7                                      0x7
#define RB7_address                              0xF81
#define RB7_position                             0x7
#define RB7_size                                 0x1
#define RB7_value_mask                           0x80
#define RB7_clear_mask                           0x7F

#define RP10                                     0x7
#define RP10_address                             0xF81
#define RP10_position                            0x7
#define RP10_size                                0x1
#define RP10_value_mask                          0x80
#define RP10_clear_mask                          0x7F

#define KBI3                                     0x7
#define KBI3_address                             0xF81
#define KBI3_position                            0x7
#define KBI3_size                                0x1
#define KBI3_value_mask                          0x80
#define KBI3_clear_mask                          0x7F


/*------------------------------------------------------#
| PORTC                                           0xF82 |
#-------------------------------------------------------#
| CCP10 | CCP9 | SDO1 | SDI1 | SCK1 | RP13 | RC1 | RP11 |
#-------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3    | 2    | 1   | 0    |
#------------------------------------------------------*/

#define PORTC                                    0x0
#define PORTC_address                            0xF82
#define PORTC_position                           0x0
#define PORTC_size                               0x8
#define PORTC_value_mask                         0xFF
#define PORTC_clear_mask                         0x0

#define T1CKI                                    0x0
#define T1CKI_address                            0xF82
#define T1CKI_position                           0x0
#define T1CKI_size                               0x1
#define T1CKI_value_mask                         0x1
#define T1CKI_clear_mask                         0xFE

#define RP11                                     0x0
#define RP11_address                             0xF82
#define RP11_position                            0x0
#define RP11_size                                0x1
#define RP11_value_mask                          0x1
#define RP11_clear_mask                          0xFE

#define T1OSO                                    0x0
#define T1OSO_address                            0xF82
#define T1OSO_position                           0x0
#define T1OSO_size                               0x1
#define T1OSO_value_mask                         0x1
#define T1OSO_clear_mask                         0xFE

#define RC0                                      0x0
#define RC0_address                              0xF82
#define RC0_position                             0x0
#define RC0_size                                 0x1
#define RC0_value_mask                           0x1
#define RC0_clear_mask                           0xFE

#define CCP8                                     0x1
#define CCP8_address                             0xF82
#define CCP8_position                            0x1
#define CCP8_size                                0x1
#define CCP8_value_mask                          0x2
#define CCP8_clear_mask                          0xFD

#define CCP2                                     0x1
#define CCP2_address                             0xF82
#define CCP2_position                            0x1
#define CCP2_size                                0x1
#define CCP2_value_mask                          0x2
#define CCP2_clear_mask                          0xFD

#define RP12                                     0x1
#define RP12_address                             0xF82
#define RP12_position                            0x1
#define RP12_size                                0x1
#define RP12_value_mask                          0x2
#define RP12_clear_mask                          0xFD

#define T1OSI                                    0x1
#define T1OSI_address                            0xF82
#define T1OSI_position                           0x1
#define T1OSI_size                               0x1
#define T1OSI_value_mask                         0x2
#define T1OSI_clear_mask                         0xFD

#define PA2                                      0x1
#define PA2_address                              0xF82
#define PA2_position                             0x1
#define PA2_size                                 0x1
#define PA2_value_mask                           0x2
#define PA2_clear_mask                           0xFD

#define RC1                                      0x1
#define RC1_address                              0xF82
#define RC1_position                             0x1
#define RC1_size                                 0x1
#define RC1_value_mask                           0x2
#define RC1_clear_mask                           0xFD

#define RP13                                     0x2
#define RP13_address                             0xF82
#define RP13_position                            0x2
#define RP13_size                                0x1
#define RP13_value_mask                          0x4
#define RP13_clear_mask                          0xFB

#define CTPLS                                    0x2
#define CTPLS_address                            0xF82
#define CTPLS_position                           0x2
#define CTPLS_size                               0x1
#define CTPLS_value_mask                         0x4
#define CTPLS_clear_mask                         0xFB

#define PA1                                      0x2
#define PA1_address                              0xF82
#define PA1_position                             0x2
#define PA1_size                                 0x1
#define PA1_value_mask                           0x4
#define PA1_clear_mask                           0xFB

#define RC2                                      0x2
#define RC2_address                              0xF82
#define RC2_position                             0x2
#define RC2_size                                 0x1
#define RC2_value_mask                           0x4
#define RC2_clear_mask                           0xFB

#define C2IND                                    0x2
#define C2IND_address                            0xF82
#define C2IND_position                           0x2
#define C2IND_size                               0x1
#define C2IND_value_mask                         0x4
#define C2IND_clear_mask                         0xFB

#define AN11                                     0x2
#define AN11_address                             0xF82
#define AN11_position                            0x2
#define AN11_size                                0x1
#define AN11_value_mask                          0x4
#define AN11_clear_mask                          0xFB

#define SCK1                                     0x3
#define SCK1_address                             0xF82
#define SCK1_position                            0x3
#define SCK1_size                                0x1
#define SCK1_value_mask                          0x8
#define SCK1_clear_mask                          0xF7

#define RP14                                     0x3
#define RP14_address                             0xF82
#define RP14_position                            0x3
#define RP14_size                                0x1
#define RP14_value_mask                          0x8
#define RP14_clear_mask                          0xF7

#define SCL1                                     0x3
#define SCL1_address                             0xF82
#define SCL1_position                            0x3
#define SCL1_size                                0x1
#define SCL1_value_mask                          0x8
#define SCL1_clear_mask                          0xF7

#define RC3                                      0x3
#define RC3_address                              0xF82
#define RC3_position                             0x3
#define RC3_size                                 0x1
#define RC3_value_mask                           0x8
#define RC3_clear_mask                           0xF7

#define RP15                                     0x4
#define RP15_address                             0xF82
#define RP15_position                            0x4
#define RP15_size                                0x1
#define RP15_value_mask                          0x10
#define RP15_clear_mask                          0xEF

#define SDI1                                     0x4
#define SDI1_address                             0xF82
#define SDI1_position                            0x4
#define SDI1_size                                0x1
#define SDI1_value_mask                          0x10
#define SDI1_clear_mask                          0xEF

#define SDA1                                     0x4
#define SDA1_address                             0xF82
#define SDA1_position                            0x4
#define SDA1_size                                0x1
#define SDA1_value_mask                          0x10
#define SDA1_clear_mask                          0xEF

#define RC4                                      0x4
#define RC4_address                              0xF82
#define RC4_position                             0x4
#define RC4_size                                 0x1
#define RC4_value_mask                           0x10
#define RC4_clear_mask                           0xEF

#define SDO1                                     0x5
#define SDO1_address                             0xF82
#define SDO1_position                            0x5
#define SDO1_size                                0x1
#define SDO1_value_mask                          0x20
#define SDO1_clear_mask                          0xDF

#define RP16                                     0x5
#define RP16_address                             0xF82
#define RP16_position                            0x5
#define RP16_size                                0x1
#define RP16_value_mask                          0x20
#define RP16_clear_mask                          0xDF

#define RC5                                      0x5
#define RC5_address                              0xF82
#define RC5_position                             0x5
#define RC5_size                                 0x1
#define RC5_value_mask                           0x20
#define RC5_clear_mask                           0xDF

#define CCP9                                     0x6
#define CCP9_address                             0xF82
#define CCP9_position                            0x6
#define CCP9_size                                0x1
#define CCP9_value_mask                          0x40
#define CCP9_clear_mask                          0xBF

#define RP17                                     0x6
#define RP17_address                             0xF82
#define RP17_position                            0x6
#define RP17_size                                0x1
#define RP17_value_mask                          0x40
#define RP17_clear_mask                          0xBF

#define TX1                                      0x6
#define TX1_address                              0xF82
#define TX1_position                             0x6
#define TX1_size                                 0x1
#define TX1_value_mask                           0x40
#define TX1_clear_mask                           0xBF

#define RC6                                      0x6
#define RC6_address                              0xF82
#define RC6_position                             0x6
#define RC6_size                                 0x1
#define RC6_value_mask                           0x40
#define RC6_clear_mask                           0xBF

#define CK1                                      0x6
#define CK1_address                              0xF82
#define CK1_position                             0x6
#define CK1_size                                 0x1
#define CK1_value_mask                           0x40
#define CK1_clear_mask                           0xBF

#define CCP10                                    0x7
#define CCP10_address                            0xF82
#define CCP10_position                           0x7
#define CCP10_size                               0x1
#define CCP10_value_mask                         0x80
#define CCP10_clear_mask                         0x7F

#define RP18                                     0x7
#define RP18_address                             0xF82
#define RP18_position                            0x7
#define RP18_size                                0x1
#define RP18_value_mask                          0x80
#define RP18_clear_mask                          0x7F

#define RX1                                      0x7
#define RX1_address                              0xF82
#define RX1_position                             0x7
#define RX1_size                                 0x1
#define RX1_value_mask                           0x80
#define RX1_clear_mask                           0x7F

#define RC7                                      0x7
#define RC7_address                              0xF82
#define RC7_position                             0x7
#define RC7_size                                 0x1
#define RC7_value_mask                           0x80
#define RC7_clear_mask                           0x7F

#define DT1                                      0x7
#define DT1_address                              0xF82
#define DT1_position                             0x7
#define DT1_size                                 0x1
#define DT1_value_mask                           0x80
#define DT1_clear_mask                           0x7F


/*---------------------------------------------------------------------#
| HLVDCON                                                        0xF85 |
#----------------------------------------------------------------------#
| VDIRMAG | BGVST | IRVST | HLVDEN | HLVDL3 | HLVDL2 | HLVDL1 | HLVDL0 |
#----------------------------------------------------------------------#
| 7       | 6     | 5     | 4      | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------------*/

#define HLVDCON                                  0x0
#define HLVDCON_address                          0xF85
#define HLVDCON_position                         0x0
#define HLVDCON_size                             0x8
#define HLVDCON_value_mask                       0xFF
#define HLVDCON_clear_mask                       0x0

#define HLVDL                                    0x0
#define HLVDL_address                            0xF85
#define HLVDL_position                           0x0
#define HLVDL_size                               0x4
#define HLVDL_value_mask                         0xF
#define HLVDL_clear_mask                         0xF0

#define HLVDL0                                   0x0
#define HLVDL0_address                           0xF85
#define HLVDL0_position                          0x0
#define HLVDL0_size                              0x1
#define HLVDL0_value_mask                        0x1
#define HLVDL0_clear_mask                        0xFE

#define HLVDL1                                   0x1
#define HLVDL1_address                           0xF85
#define HLVDL1_position                          0x1
#define HLVDL1_size                              0x1
#define HLVDL1_value_mask                        0x2
#define HLVDL1_clear_mask                        0xFD

#define HLVDL2                                   0x2
#define HLVDL2_address                           0xF85
#define HLVDL2_position                          0x2
#define HLVDL2_size                              0x1
#define HLVDL2_value_mask                        0x4
#define HLVDL2_clear_mask                        0xFB

#define HLVDL3                                   0x3
#define HLVDL3_address                           0xF85
#define HLVDL3_position                          0x3
#define HLVDL3_size                              0x1
#define HLVDL3_value_mask                        0x8
#define HLVDL3_clear_mask                        0xF7

#define HLVDEN                                   0x4
#define HLVDEN_address                           0xF85
#define HLVDEN_position                          0x4
#define HLVDEN_size                              0x1
#define HLVDEN_value_mask                        0x10
#define HLVDEN_clear_mask                        0xEF

#define IRVST                                    0x5
#define IRVST_address                            0xF85
#define IRVST_position                           0x5
#define IRVST_size                               0x1
#define IRVST_value_mask                         0x20
#define IRVST_clear_mask                         0xDF

#define BGVST                                    0x6
#define BGVST_address                            0xF85
#define BGVST_position                           0x6
#define BGVST_size                               0x1
#define BGVST_value_mask                         0x40
#define BGVST_clear_mask                         0xBF

#define VDIRMAG                                  0x7
#define VDIRMAG_address                          0xF85
#define VDIRMAG_position                         0x7
#define VDIRMAG_size                             0x1
#define VDIRMAG_value_mask                       0x80
#define VDIRMAG_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| DMACON2                                                                 0xF86 |
#-------------------------------------------------------------------------------#
| DLYCYC3 | DLYCYC2 | DLYCYC1 | DLYCYC0 | INTLVL3 | INTLVL2 | INTLVL1 | INTLVL0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define DMACON2                                  0x0
#define DMACON2_address                          0xF86
#define DMACON2_position                         0x0
#define DMACON2_size                             0x8
#define DMACON2_value_mask                       0xFF
#define DMACON2_clear_mask                       0x0

#define INTLVL0                                  0x0
#define INTLVL0_address                          0xF86
#define INTLVL0_position                         0x0
#define INTLVL0_size                             0x1
#define INTLVL0_value_mask                       0x1
#define INTLVL0_clear_mask                       0xFE

#define INTLVL                                   0x0
#define INTLVL_address                           0xF86
#define INTLVL_position                          0x0
#define INTLVL_size                              0x4
#define INTLVL_value_mask                        0xF
#define INTLVL_clear_mask                        0xF0

#define INTLVL1                                  0x1
#define INTLVL1_address                          0xF86
#define INTLVL1_position                         0x1
#define INTLVL1_size                             0x1
#define INTLVL1_value_mask                       0x2
#define INTLVL1_clear_mask                       0xFD

#define INTLVL2                                  0x2
#define INTLVL2_address                          0xF86
#define INTLVL2_position                         0x2
#define INTLVL2_size                             0x1
#define INTLVL2_value_mask                       0x4
#define INTLVL2_clear_mask                       0xFB

#define INTLVL3                                  0x3
#define INTLVL3_address                          0xF86
#define INTLVL3_position                         0x3
#define INTLVL3_size                             0x1
#define INTLVL3_value_mask                       0x8
#define INTLVL3_clear_mask                       0xF7

#define DLYCYC                                   0x4
#define DLYCYC_address                           0xF86
#define DLYCYC_position                          0x4
#define DLYCYC_size                              0x4
#define DLYCYC_value_mask                        0xF0
#define DLYCYC_clear_mask                        0xF

#define DLYCYC0                                  0x4
#define DLYCYC0_address                          0xF86
#define DLYCYC0_position                         0x4
#define DLYCYC0_size                             0x1
#define DLYCYC0_value_mask                       0x10
#define DLYCYC0_clear_mask                       0xEF

#define DLYCYC1                                  0x5
#define DLYCYC1_address                          0xF86
#define DLYCYC1_position                         0x5
#define DLYCYC1_size                             0x1
#define DLYCYC1_value_mask                       0x20
#define DLYCYC1_clear_mask                       0xDF

#define DLYCYC2                                  0x6
#define DLYCYC2_address                          0xF86
#define DLYCYC2_position                         0x6
#define DLYCYC2_size                             0x1
#define DLYCYC2_value_mask                       0x40
#define DLYCYC2_clear_mask                       0xBF

#define DLYCYC3                                  0x7
#define DLYCYC3_address                          0xF86
#define DLYCYC3_position                         0x7
#define DLYCYC3_size                             0x1
#define DLYCYC3_value_mask                       0x80
#define DLYCYC3_clear_mask                       0x7F


/*---------------------------------------------------#
| OSCCON2                                      0xF87 |
#----------------------------------------------------#
| - | SOSCRUN | - | SOSCDRV | SOSCGO | PRISD | - | - |
#----------------------------------------------------#
| 7 | 6       | 5 | 4       | 3      | 2     | 1 | 0 |
#---------------------------------------------------*/

#define OSCCON2                                  0x0
#define OSCCON2_address                          0xF87
#define OSCCON2_position                         0x0
#define OSCCON2_size                             0x8
#define OSCCON2_value_mask                       0xFF
#define OSCCON2_clear_mask                       0x0

#define PRISD                                    0x2
#define PRISD_address                            0xF87
#define PRISD_position                           0x2
#define PRISD_size                               0x1
#define PRISD_value_mask                         0x4
#define PRISD_clear_mask                         0xFB

#define SOSCGO                                   0x3
#define SOSCGO_address                           0xF87
#define SOSCGO_position                          0x3
#define SOSCGO_size                              0x1
#define SOSCGO_value_mask                        0x8
#define SOSCGO_clear_mask                        0xF7

#define SOSCDRV                                  0x4
#define SOSCDRV_address                          0xF87
#define SOSCDRV_position                         0x4
#define SOSCDRV_size                             0x1
#define SOSCDRV_value_mask                       0x10
#define SOSCDRV_clear_mask                       0xEF

#define SOSCRUN                                  0x6
#define SOSCRUN_address                          0xF87
#define SOSCRUN_position                         0x6
#define SOSCRUN_size                             0x1
#define SOSCRUN_value_mask                       0x40
#define SOSCRUN_clear_mask                       0xBF


/*-----------------------------------------------------------------------#
| DMACON1                                                          0xF88 |
#------------------------------------------------------------------------#
| SSCON1 | SSCON0 | TXINC | RXINC | DUPLEX1 | DUPLEX0 | DLYINTEN | DMAEN |
#------------------------------------------------------------------------#
| 7      | 6      | 5     | 4     | 3       | 2       | 1        | 0     |
#-----------------------------------------------------------------------*/

#define DMACON1                                  0x0
#define DMACON1_address                          0xF88
#define DMACON1_position                         0x0
#define DMACON1_size                             0x8
#define DMACON1_value_mask                       0xFF
#define DMACON1_clear_mask                       0x0

#define DMAEN                                    0x0
#define DMAEN_address                            0xF88
#define DMAEN_position                           0x0
#define DMAEN_size                               0x1
#define DMAEN_value_mask                         0x1
#define DMAEN_clear_mask                         0xFE

#define DLYINTEN                                 0x1
#define DLYINTEN_address                         0xF88
#define DLYINTEN_position                        0x1
#define DLYINTEN_size                            0x1
#define DLYINTEN_value_mask                      0x2
#define DLYINTEN_clear_mask                      0xFD

#define DUPLEX0                                  0x2
#define DUPLEX0_address                          0xF88
#define DUPLEX0_position                         0x2
#define DUPLEX0_size                             0x1
#define DUPLEX0_value_mask                       0x4
#define DUPLEX0_clear_mask                       0xFB

#define DUPLEX1                                  0x3
#define DUPLEX1_address                          0xF88
#define DUPLEX1_position                         0x3
#define DUPLEX1_size                             0x1
#define DUPLEX1_value_mask                       0x8
#define DUPLEX1_clear_mask                       0xF7

#define RXINC                                    0x4
#define RXINC_address                            0xF88
#define RXINC_position                           0x4
#define RXINC_size                               0x1
#define RXINC_value_mask                         0x10
#define RXINC_clear_mask                         0xEF

#define TXINC                                    0x5
#define TXINC_address                            0xF88
#define TXINC_position                           0x5
#define TXINC_size                               0x1
#define TXINC_value_mask                         0x20
#define TXINC_clear_mask                         0xDF

#define SSCON0                                   0x6
#define SSCON0_address                           0xF88
#define SSCON0_position                          0x6
#define SSCON0_size                              0x1
#define SSCON0_value_mask                        0x40
#define SSCON0_clear_mask                        0xBF

#define SSCON1                                   0x7
#define SSCON1_address                           0xF88
#define SSCON1_position                          0x7
#define SSCON1_size                              0x1
#define SSCON1_value_mask                        0x80
#define SSCON1_clear_mask                        0x7F


/*----------------------------------------------------------#
| LATA                                                0xF89 |
#-----------------------------------------------------------#
| LATA7 | LATA6 | LATA5 | - | LATA3 | LATA2 | LATA1 | LATA0 |
#-----------------------------------------------------------#
| 7     | 6     | 5     | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------------------*/

#define LATA                                     0x0
#define LATA_address                             0xF89
#define LATA_position                            0x0
#define LATA_size                                0x8
#define LATA_value_mask                          0xFF
#define LATA_clear_mask                          0x0

#define LATA0                                    0x0
#define LATA0_address                            0xF89
#define LATA0_position                           0x0
#define LATA0_size                               0x1
#define LATA0_value_mask                         0x1
#define LATA0_clear_mask                         0xFE

#define LA0                                      0x0
#define LA0_address                              0xF89
#define LA0_position                             0x0
#define LA0_size                                 0x1
#define LA0_value_mask                           0x1
#define LA0_clear_mask                           0xFE

#define LATA1                                    0x1
#define LATA1_address                            0xF89
#define LATA1_position                           0x1
#define LATA1_size                               0x1
#define LATA1_value_mask                         0x2
#define LATA1_clear_mask                         0xFD

#define LA1                                      0x1
#define LA1_address                              0xF89
#define LA1_position                             0x1
#define LA1_size                                 0x1
#define LA1_value_mask                           0x2
#define LA1_clear_mask                           0xFD

#define LATA2                                    0x2
#define LATA2_address                            0xF89
#define LATA2_position                           0x2
#define LATA2_size                               0x1
#define LATA2_value_mask                         0x4
#define LATA2_clear_mask                         0xFB

#define LA2                                      0x2
#define LA2_address                              0xF89
#define LA2_position                             0x2
#define LA2_size                                 0x1
#define LA2_value_mask                           0x4
#define LA2_clear_mask                           0xFB

#define LATA3                                    0x3
#define LATA3_address                            0xF89
#define LATA3_position                           0x3
#define LATA3_size                               0x1
#define LATA3_value_mask                         0x8
#define LATA3_clear_mask                         0xF7

#define LA3                                      0x3
#define LA3_address                              0xF89
#define LA3_position                             0x3
#define LA3_size                                 0x1
#define LA3_value_mask                           0x8
#define LA3_clear_mask                           0xF7

#define LATA5                                    0x5
#define LATA5_address                            0xF89
#define LATA5_position                           0x5
#define LATA5_size                               0x1
#define LATA5_value_mask                         0x20
#define LATA5_clear_mask                         0xDF

#define LA5                                      0x5
#define LA5_address                              0xF89
#define LA5_position                             0x5
#define LA5_size                                 0x1
#define LA5_value_mask                           0x20
#define LA5_clear_mask                           0xDF

#define LATA6                                    0x6
#define LATA6_address                            0xF89
#define LATA6_position                           0x6
#define LATA6_size                               0x1
#define LATA6_value_mask                         0x40
#define LATA6_clear_mask                         0xBF

#define LA6                                      0x6
#define LA6_address                              0xF89
#define LA6_position                             0x6
#define LA6_size                                 0x1
#define LA6_value_mask                           0x40
#define LA6_clear_mask                           0xBF

#define LATA7                                    0x7
#define LATA7_address                            0xF89
#define LATA7_position                           0x7
#define LATA7_size                               0x1
#define LATA7_value_mask                         0x80
#define LATA7_clear_mask                         0x7F

#define LA7                                      0x7
#define LA7_address                              0xF89
#define LA7_position                             0x7
#define LA7_size                                 0x1
#define LA7_value_mask                           0x80
#define LA7_clear_mask                           0x7F


/*----------------------------------------------#
| LATB                                    0xF8A |
#-----------------------------------------------#
| LB7 | LB6 | LB5 | LB4 | LB3 | LB2 | LB1 | LB0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define LATB                                     0x0
#define LATB_address                             0xF8A
#define LATB_position                            0x0
#define LATB_size                                0x8
#define LATB_value_mask                          0xFF
#define LATB_clear_mask                          0x0

#define LB0                                      0x0
#define LB0_address                              0xF8A
#define LB0_position                             0x0
#define LB0_size                                 0x1
#define LB0_value_mask                           0x1
#define LB0_clear_mask                           0xFE

#define LATB0                                    0x0
#define LATB0_address                            0xF8A
#define LATB0_position                           0x0
#define LATB0_size                               0x1
#define LATB0_value_mask                         0x1
#define LATB0_clear_mask                         0xFE

#define LB1                                      0x1
#define LB1_address                              0xF8A
#define LB1_position                             0x1
#define LB1_size                                 0x1
#define LB1_value_mask                           0x2
#define LB1_clear_mask                           0xFD

#define LATB1                                    0x1
#define LATB1_address                            0xF8A
#define LATB1_position                           0x1
#define LATB1_size                               0x1
#define LATB1_value_mask                         0x2
#define LATB1_clear_mask                         0xFD

#define LB2                                      0x2
#define LB2_address                              0xF8A
#define LB2_position                             0x2
#define LB2_size                                 0x1
#define LB2_value_mask                           0x4
#define LB2_clear_mask                           0xFB

#define LATB2                                    0x2
#define LATB2_address                            0xF8A
#define LATB2_position                           0x2
#define LATB2_size                               0x1
#define LATB2_value_mask                         0x4
#define LATB2_clear_mask                         0xFB

#define LB3                                      0x3
#define LB3_address                              0xF8A
#define LB3_position                             0x3
#define LB3_size                                 0x1
#define LB3_value_mask                           0x8
#define LB3_clear_mask                           0xF7

#define LATB3                                    0x3
#define LATB3_address                            0xF8A
#define LATB3_position                           0x3
#define LATB3_size                               0x1
#define LATB3_value_mask                         0x8
#define LATB3_clear_mask                         0xF7

#define LB4                                      0x4
#define LB4_address                              0xF8A
#define LB4_position                             0x4
#define LB4_size                                 0x1
#define LB4_value_mask                           0x10
#define LB4_clear_mask                           0xEF

#define LATB4                                    0x4
#define LATB4_address                            0xF8A
#define LATB4_position                           0x4
#define LATB4_size                               0x1
#define LATB4_value_mask                         0x10
#define LATB4_clear_mask                         0xEF

#define LB5                                      0x5
#define LB5_address                              0xF8A
#define LB5_position                             0x5
#define LB5_size                                 0x1
#define LB5_value_mask                           0x20
#define LB5_clear_mask                           0xDF

#define LATB5                                    0x5
#define LATB5_address                            0xF8A
#define LATB5_position                           0x5
#define LATB5_size                               0x1
#define LATB5_value_mask                         0x20
#define LATB5_clear_mask                         0xDF

#define LB6                                      0x6
#define LB6_address                              0xF8A
#define LB6_position                             0x6
#define LB6_size                                 0x1
#define LB6_value_mask                           0x40
#define LB6_clear_mask                           0xBF

#define LATB6                                    0x6
#define LATB6_address                            0xF8A
#define LATB6_position                           0x6
#define LATB6_size                               0x1
#define LATB6_value_mask                         0x40
#define LATB6_clear_mask                         0xBF

#define LB7                                      0x7
#define LB7_address                              0xF8A
#define LB7_position                             0x7
#define LB7_size                                 0x1
#define LB7_value_mask                           0x80
#define LB7_clear_mask                           0x7F

#define LATB7                                    0x7
#define LATB7_address                            0xF8A
#define LATB7_position                           0x7
#define LATB7_size                               0x1
#define LATB7_value_mask                         0x80
#define LATB7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LATC                                                    0xF8B |
#---------------------------------------------------------------#
| LATC7 | LATC6 | LATC5 | LATC4 | LATC3 | LATC2 | LATC1 | LATC0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LATC                                     0x0
#define LATC_address                             0xF8B
#define LATC_position                            0x0
#define LATC_size                                0x8
#define LATC_value_mask                          0xFF
#define LATC_clear_mask                          0x0

#define LATC0                                    0x0
#define LATC0_address                            0xF8B
#define LATC0_position                           0x0
#define LATC0_size                               0x1
#define LATC0_value_mask                         0x1
#define LATC0_clear_mask                         0xFE

#define LC0                                      0x0
#define LC0_address                              0xF8B
#define LC0_position                             0x0
#define LC0_size                                 0x1
#define LC0_value_mask                           0x1
#define LC0_clear_mask                           0xFE

#define LATC1                                    0x1
#define LATC1_address                            0xF8B
#define LATC1_position                           0x1
#define LATC1_size                               0x1
#define LATC1_value_mask                         0x2
#define LATC1_clear_mask                         0xFD

#define LC1                                      0x1
#define LC1_address                              0xF8B
#define LC1_position                             0x1
#define LC1_size                                 0x1
#define LC1_value_mask                           0x2
#define LC1_clear_mask                           0xFD

#define LATC2                                    0x2
#define LATC2_address                            0xF8B
#define LATC2_position                           0x2
#define LATC2_size                               0x1
#define LATC2_value_mask                         0x4
#define LATC2_clear_mask                         0xFB

#define LC2                                      0x2
#define LC2_address                              0xF8B
#define LC2_position                             0x2
#define LC2_size                                 0x1
#define LC2_value_mask                           0x4
#define LC2_clear_mask                           0xFB

#define LATC3                                    0x3
#define LATC3_address                            0xF8B
#define LATC3_position                           0x3
#define LATC3_size                               0x1
#define LATC3_value_mask                         0x8
#define LATC3_clear_mask                         0xF7

#define LC3                                      0x3
#define LC3_address                              0xF8B
#define LC3_position                             0x3
#define LC3_size                                 0x1
#define LC3_value_mask                           0x8
#define LC3_clear_mask                           0xF7

#define LATC4                                    0x4
#define LATC4_address                            0xF8B
#define LATC4_position                           0x4
#define LATC4_size                               0x1
#define LATC4_value_mask                         0x10
#define LATC4_clear_mask                         0xEF

#define LC4                                      0x4
#define LC4_address                              0xF8B
#define LC4_position                             0x4
#define LC4_size                                 0x1
#define LC4_value_mask                           0x10
#define LC4_clear_mask                           0xEF

#define LATC5                                    0x5
#define LATC5_address                            0xF8B
#define LATC5_position                           0x5
#define LATC5_size                               0x1
#define LATC5_value_mask                         0x20
#define LATC5_clear_mask                         0xDF

#define LC5                                      0x5
#define LC5_address                              0xF8B
#define LC5_position                             0x5
#define LC5_size                                 0x1
#define LC5_value_mask                           0x20
#define LC5_clear_mask                           0xDF

#define LATC6                                    0x6
#define LATC6_address                            0xF8B
#define LATC6_position                           0x6
#define LATC6_size                               0x1
#define LATC6_value_mask                         0x40
#define LATC6_clear_mask                         0xBF

#define LC6                                      0x6
#define LC6_address                              0xF8B
#define LC6_position                             0x6
#define LC6_size                                 0x1
#define LC6_value_mask                           0x40
#define LC6_clear_mask                           0xBF

#define LATC7                                    0x7
#define LATC7_address                            0xF8B
#define LATC7_position                           0x7
#define LATC7_size                               0x1
#define LATC7_value_mask                         0x80
#define LATC7_clear_mask                         0x7F

#define LC7                                      0x7
#define LC7_address                              0xF8B
#define LC7_position                             0x7
#define LC7_size                                 0x1
#define LC7_value_mask                           0x80
#define LC7_clear_mask                           0x7F


/*-----------------------------------------------------------------------#
| PIE4                                                             0xF8E |
#------------------------------------------------------------------------#
| CCP10IE | CCP9IE | CCP8IE | CCP7IE | CCP6IE | CCP5IE | CCP4IE | CCP3IE |
#------------------------------------------------------------------------#
| 7       | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------------*/

#define PIE4                                     0x0
#define PIE4_address                             0xF8E
#define PIE4_position                            0x0
#define PIE4_size                                0x8
#define PIE4_value_mask                          0xFF
#define PIE4_clear_mask                          0x0

#define CCP3IE                                   0x0
#define CCP3IE_address                           0xF8E
#define CCP3IE_position                          0x0
#define CCP3IE_size                              0x1
#define CCP3IE_value_mask                        0x1
#define CCP3IE_clear_mask                        0xFE

#define CCP4IE                                   0x1
#define CCP4IE_address                           0xF8E
#define CCP4IE_position                          0x1
#define CCP4IE_size                              0x1
#define CCP4IE_value_mask                        0x2
#define CCP4IE_clear_mask                        0xFD

#define CCP5IE                                   0x2
#define CCP5IE_address                           0xF8E
#define CCP5IE_position                          0x2
#define CCP5IE_size                              0x1
#define CCP5IE_value_mask                        0x4
#define CCP5IE_clear_mask                        0xFB

#define CCP6IE                                   0x3
#define CCP6IE_address                           0xF8E
#define CCP6IE_position                          0x3
#define CCP6IE_size                              0x1
#define CCP6IE_value_mask                        0x8
#define CCP6IE_clear_mask                        0xF7

#define CCP7IE                                   0x4
#define CCP7IE_address                           0xF8E
#define CCP7IE_position                          0x4
#define CCP7IE_size                              0x1
#define CCP7IE_value_mask                        0x10
#define CCP7IE_clear_mask                        0xEF

#define CCP8IE                                   0x5
#define CCP8IE_address                           0xF8E
#define CCP8IE_position                          0x5
#define CCP8IE_size                              0x1
#define CCP8IE_value_mask                        0x20
#define CCP8IE_clear_mask                        0xDF

#define CCP9IE                                   0x6
#define CCP9IE_address                           0xF8E
#define CCP9IE_position                          0x6
#define CCP9IE_size                              0x1
#define CCP9IE_value_mask                        0x40
#define CCP9IE_clear_mask                        0xBF

#define CCP10IE                                  0x7
#define CCP10IE_address                          0xF8E
#define CCP10IE_position                         0x7
#define CCP10IE_size                             0x1
#define CCP10IE_value_mask                       0x80
#define CCP10IE_clear_mask                       0x7F


/*-----------------------------------------------------------------------#
| PIR4                                                             0xF8F |
#------------------------------------------------------------------------#
| CCP10IF | CCP9IF | CCP8IF | CCP7IF | CCP6IF | CCP5IF | CCP4IF | CCP3IF |
#------------------------------------------------------------------------#
| 7       | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------------*/

#define PIR4                                     0x0
#define PIR4_address                             0xF8F
#define PIR4_position                            0x0
#define PIR4_size                                0x8
#define PIR4_value_mask                          0xFF
#define PIR4_clear_mask                          0x0

#define CCP3IF                                   0x0
#define CCP3IF_address                           0xF8F
#define CCP3IF_position                          0x0
#define CCP3IF_size                              0x1
#define CCP3IF_value_mask                        0x1
#define CCP3IF_clear_mask                        0xFE

#define CCP4IF                                   0x1
#define CCP4IF_address                           0xF8F
#define CCP4IF_position                          0x1
#define CCP4IF_size                              0x1
#define CCP4IF_value_mask                        0x2
#define CCP4IF_clear_mask                        0xFD

#define CCP5IF                                   0x2
#define CCP5IF_address                           0xF8F
#define CCP5IF_position                          0x2
#define CCP5IF_size                              0x1
#define CCP5IF_value_mask                        0x4
#define CCP5IF_clear_mask                        0xFB

#define CCP6IF                                   0x3
#define CCP6IF_address                           0xF8F
#define CCP6IF_position                          0x3
#define CCP6IF_size                              0x1
#define CCP6IF_value_mask                        0x8
#define CCP6IF_clear_mask                        0xF7

#define CCP7IF                                   0x4
#define CCP7IF_address                           0xF8F
#define CCP7IF_position                          0x4
#define CCP7IF_size                              0x1
#define CCP7IF_value_mask                        0x10
#define CCP7IF_clear_mask                        0xEF

#define CCP8IF                                   0x5
#define CCP8IF_address                           0xF8F
#define CCP8IF_position                          0x5
#define CCP8IF_size                              0x1
#define CCP8IF_value_mask                        0x20
#define CCP8IF_clear_mask                        0xDF

#define CCP9IF                                   0x6
#define CCP9IF_address                           0xF8F
#define CCP9IF_position                          0x6
#define CCP9IF_size                              0x1
#define CCP9IF_value_mask                        0x40
#define CCP9IF_clear_mask                        0xBF

#define CCP10IF                                  0x7
#define CCP10IF_address                          0xF8F
#define CCP10IF_position                         0x7
#define CCP10IF_size                             0x1
#define CCP10IF_value_mask                       0x80
#define CCP10IF_clear_mask                       0x7F


/*-----------------------------------------------------------------------#
| IPR4                                                             0xF90 |
#------------------------------------------------------------------------#
| CCP10IP | CCP9IP | CCP8IP | CCP7IP | CCP6IP | CCP5IP | CCP4IP | CCP3IP |
#------------------------------------------------------------------------#
| 7       | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------------*/

#define IPR4                                     0x0
#define IPR4_address                             0xF90
#define IPR4_position                            0x0
#define IPR4_size                                0x8
#define IPR4_value_mask                          0xFF
#define IPR4_clear_mask                          0x0

#define CCP3IP                                   0x0
#define CCP3IP_address                           0xF90
#define CCP3IP_position                          0x0
#define CCP3IP_size                              0x1
#define CCP3IP_value_mask                        0x1
#define CCP3IP_clear_mask                        0xFE

#define CCIP3IP                                  0x0
#define CCIP3IP_address                          0xF90
#define CCIP3IP_position                         0x0
#define CCIP3IP_size                             0x1
#define CCIP3IP_value_mask                       0x1
#define CCIP3IP_clear_mask                       0xFE

#define CCP4IP                                   0x1
#define CCP4IP_address                           0xF90
#define CCP4IP_position                          0x1
#define CCP4IP_size                              0x1
#define CCP4IP_value_mask                        0x2
#define CCP4IP_clear_mask                        0xFD

#define CCP5IP                                   0x2
#define CCP5IP_address                           0xF90
#define CCP5IP_position                          0x2
#define CCP5IP_size                              0x1
#define CCP5IP_value_mask                        0x4
#define CCP5IP_clear_mask                        0xFB

#define CCP6IP                                   0x3
#define CCP6IP_address                           0xF90
#define CCP6IP_position                          0x3
#define CCP6IP_size                              0x1
#define CCP6IP_value_mask                        0x8
#define CCP6IP_clear_mask                        0xF7

#define CCP7IP                                   0x4
#define CCP7IP_address                           0xF90
#define CCP7IP_position                          0x4
#define CCP7IP_size                              0x1
#define CCP7IP_value_mask                        0x10
#define CCP7IP_clear_mask                        0xEF

#define CCP8IP                                   0x5
#define CCP8IP_address                           0xF90
#define CCP8IP_position                          0x5
#define CCP8IP_size                              0x1
#define CCP8IP_value_mask                        0x20
#define CCP8IP_clear_mask                        0xDF

#define CCP9IP                                   0x6
#define CCP9IP_address                           0xF90
#define CCP9IP_position                          0x6
#define CCP9IP_size                              0x1
#define CCP9IP_value_mask                        0x40
#define CCP9IP_clear_mask                        0xBF

#define CCP10IP                                  0x7
#define CCP10IP_address                          0xF90
#define CCP10IP_position                         0x7
#define CCP10IP_size                             0x1
#define CCP10IP_value_mask                       0x80
#define CCP10IP_clear_mask                       0x7F


/*-------------------------------------------------------------#
| PIE5                                                   0xF91 |
#--------------------------------------------------------------#
| - | - | CM3IE | TMR8IE | TMR6IE | TMR5IE | TMR5GIE | TMR1GIE |
#--------------------------------------------------------------#
| 7 | 6 | 5     | 4      | 3      | 2      | 1       | 0       |
#-------------------------------------------------------------*/

#define PIE5                                     0x0
#define PIE5_address                             0xF91
#define PIE5_position                            0x0
#define PIE5_size                                0x8
#define PIE5_value_mask                          0xFF
#define PIE5_clear_mask                          0x0

#define TMR1GIE                                  0x0
#define TMR1GIE_address                          0xF91
#define TMR1GIE_position                         0x0
#define TMR1GIE_size                             0x1
#define TMR1GIE_value_mask                       0x1
#define TMR1GIE_clear_mask                       0xFE

#define TMR5GIE                                  0x1
#define TMR5GIE_address                          0xF91
#define TMR5GIE_position                         0x1
#define TMR5GIE_size                             0x1
#define TMR5GIE_value_mask                       0x2
#define TMR5GIE_clear_mask                       0xFD

#define TMR5IE                                   0x2
#define TMR5IE_address                           0xF91
#define TMR5IE_position                          0x2
#define TMR5IE_size                              0x1
#define TMR5IE_value_mask                        0x4
#define TMR5IE_clear_mask                        0xFB

#define TMR6IE                                   0x3
#define TMR6IE_address                           0xF91
#define TMR6IE_position                          0x3
#define TMR6IE_size                              0x1
#define TMR6IE_value_mask                        0x8
#define TMR6IE_clear_mask                        0xF7

#define TMR8IE                                   0x4
#define TMR8IE_address                           0xF91
#define TMR8IE_position                          0x4
#define TMR8IE_size                              0x1
#define TMR8IE_value_mask                        0x10
#define TMR8IE_clear_mask                        0xEF

#define CM3IE                                    0x5
#define CM3IE_address                            0xF91
#define CM3IE_position                           0x5
#define CM3IE_size                               0x1
#define CM3IE_value_mask                         0x20
#define CM3IE_clear_mask                         0xDF


/*-----------------------------------------------------------------#
| TRISA                                                      0xF92 |
#------------------------------------------------------------------#
| TRISA7 | TRISA6 | TRISA5 | - | TRISA3 | TRISA2 | TRISA1 | TRISA0 |
#------------------------------------------------------------------#
| 7      | 6      | 5      | 4 | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

#define TRISA                                    0x0
#define TRISA_address                            0xF92
#define TRISA_position                           0x0
#define TRISA_size                               0x8
#define TRISA_value_mask                         0xFF
#define TRISA_clear_mask                         0x0

#define TRISA0                                   0x0
#define TRISA0_address                           0xF92
#define TRISA0_position                          0x0
#define TRISA0_size                              0x1
#define TRISA0_value_mask                        0x1
#define TRISA0_clear_mask                        0xFE

#define TRISA1                                   0x1
#define TRISA1_address                           0xF92
#define TRISA1_position                          0x1
#define TRISA1_size                              0x1
#define TRISA1_value_mask                        0x2
#define TRISA1_clear_mask                        0xFD

#define TRISA2                                   0x2
#define TRISA2_address                           0xF92
#define TRISA2_position                          0x2
#define TRISA2_size                              0x1
#define TRISA2_value_mask                        0x4
#define TRISA2_clear_mask                        0xFB

#define TRISA3                                   0x3
#define TRISA3_address                           0xF92
#define TRISA3_position                          0x3
#define TRISA3_size                              0x1
#define TRISA3_value_mask                        0x8
#define TRISA3_clear_mask                        0xF7

#define TRISA5                                   0x5
#define TRISA5_address                           0xF92
#define TRISA5_position                          0x5
#define TRISA5_size                              0x1
#define TRISA5_value_mask                        0x20
#define TRISA5_clear_mask                        0xDF

#define TRISA6                                   0x6
#define TRISA6_address                           0xF92
#define TRISA6_position                          0x6
#define TRISA6_size                              0x1
#define TRISA6_value_mask                        0x40
#define TRISA6_clear_mask                        0xBF

#define TRISA7                                   0x7
#define TRISA7_address                           0xF92
#define TRISA7_position                          0x7
#define TRISA7_size                              0x1
#define TRISA7_value_mask                        0x80
#define TRISA7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| TRISB                                                           0xF93 |
#-----------------------------------------------------------------------#
| TRISB7 | TRISB6 | TRISB5 | TRISB4 | TRISB3 | TRISB2 | TRISB1 | TRISB0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISB                                    0x0
#define TRISB_address                            0xF93
#define TRISB_position                           0x0
#define TRISB_size                               0x8
#define TRISB_value_mask                         0xFF
#define TRISB_clear_mask                         0x0

#define TRISB0                                   0x0
#define TRISB0_address                           0xF93
#define TRISB0_position                          0x0
#define TRISB0_size                              0x1
#define TRISB0_value_mask                        0x1
#define TRISB0_clear_mask                        0xFE

#define TRISB1                                   0x1
#define TRISB1_address                           0xF93
#define TRISB1_position                          0x1
#define TRISB1_size                              0x1
#define TRISB1_value_mask                        0x2
#define TRISB1_clear_mask                        0xFD

#define TRISB2                                   0x2
#define TRISB2_address                           0xF93
#define TRISB2_position                          0x2
#define TRISB2_size                              0x1
#define TRISB2_value_mask                        0x4
#define TRISB2_clear_mask                        0xFB

#define TRISB3                                   0x3
#define TRISB3_address                           0xF93
#define TRISB3_position                          0x3
#define TRISB3_size                              0x1
#define TRISB3_value_mask                        0x8
#define TRISB3_clear_mask                        0xF7

#define TRISB4                                   0x4
#define TRISB4_address                           0xF93
#define TRISB4_position                          0x4
#define TRISB4_size                              0x1
#define TRISB4_value_mask                        0x10
#define TRISB4_clear_mask                        0xEF

#define TRISB5                                   0x5
#define TRISB5_address                           0xF93
#define TRISB5_position                          0x5
#define TRISB5_size                              0x1
#define TRISB5_value_mask                        0x20
#define TRISB5_clear_mask                        0xDF

#define TRISB6                                   0x6
#define TRISB6_address                           0xF93
#define TRISB6_position                          0x6
#define TRISB6_size                              0x1
#define TRISB6_value_mask                        0x40
#define TRISB6_clear_mask                        0xBF

#define TRISB7                                   0x7
#define TRISB7_address                           0xF93
#define TRISB7_position                          0x7
#define TRISB7_size                              0x1
#define TRISB7_value_mask                        0x80
#define TRISB7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| TRISC                                                           0xF94 |
#-----------------------------------------------------------------------#
| TRISC7 | TRISC6 | TRISC5 | TRISC4 | TRISC3 | TRISC2 | TRISC1 | TRISC0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISC                                    0x0
#define TRISC_address                            0xF94
#define TRISC_position                           0x0
#define TRISC_size                               0x8
#define TRISC_value_mask                         0xFF
#define TRISC_clear_mask                         0x0

#define TRISC0                                   0x0
#define TRISC0_address                           0xF94
#define TRISC0_position                          0x0
#define TRISC0_size                              0x1
#define TRISC0_value_mask                        0x1
#define TRISC0_clear_mask                        0xFE

#define TRISC1                                   0x1
#define TRISC1_address                           0xF94
#define TRISC1_position                          0x1
#define TRISC1_size                              0x1
#define TRISC1_value_mask                        0x2
#define TRISC1_clear_mask                        0xFD

#define TRISC2                                   0x2
#define TRISC2_address                           0xF94
#define TRISC2_position                          0x2
#define TRISC2_size                              0x1
#define TRISC2_value_mask                        0x4
#define TRISC2_clear_mask                        0xFB

#define TRISC3                                   0x3
#define TRISC3_address                           0xF94
#define TRISC3_position                          0x3
#define TRISC3_size                              0x1
#define TRISC3_value_mask                        0x8
#define TRISC3_clear_mask                        0xF7

#define TRISC4                                   0x4
#define TRISC4_address                           0xF94
#define TRISC4_position                          0x4
#define TRISC4_size                              0x1
#define TRISC4_value_mask                        0x10
#define TRISC4_clear_mask                        0xEF

#define TRISC5                                   0x5
#define TRISC5_address                           0xF94
#define TRISC5_position                          0x5
#define TRISC5_size                              0x1
#define TRISC5_value_mask                        0x20
#define TRISC5_clear_mask                        0xDF

#define TRISC6                                   0x6
#define TRISC6_address                           0xF94
#define TRISC6_position                          0x6
#define TRISC6_size                              0x1
#define TRISC6_value_mask                        0x40
#define TRISC6_clear_mask                        0xBF

#define TRISC7                                   0x7
#define TRISC7_address                           0xF94
#define TRISC7_position                          0x7
#define TRISC7_size                              0x1
#define TRISC7_value_mask                        0x80
#define TRISC7_clear_mask                        0x7F


/*--------------------------------------------------------------------#
| T3GCON                                                        0xF97 |
#---------------------------------------------------------------------#
| TMR3GE | T3GPOL | T3GTM | T3GSPM | T3GGO | T3GVAL | T3GSS1 | T3GSS0 |
#---------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3     | 2      | 1      | 0      |
#--------------------------------------------------------------------*/

#define T3GCON                                   0x0
#define T3GCON_address                           0xF97
#define T3GCON_position                          0x0
#define T3GCON_size                              0x8
#define T3GCON_value_mask                        0xFF
#define T3GCON_clear_mask                        0x0

#define T3GSS0                                   0x0
#define T3GSS0_address                           0xF97
#define T3GSS0_position                          0x0
#define T3GSS0_size                              0x1
#define T3GSS0_value_mask                        0x1
#define T3GSS0_clear_mask                        0xFE

#define T3GSS1                                   0x1
#define T3GSS1_address                           0xF97
#define T3GSS1_position                          0x1
#define T3GSS1_size                              0x1
#define T3GSS1_value_mask                        0x2
#define T3GSS1_clear_mask                        0xFD

#define T3GVAL                                   0x2
#define T3GVAL_address                           0xF97
#define T3GVAL_position                          0x2
#define T3GVAL_size                              0x1
#define T3GVAL_value_mask                        0x4
#define T3GVAL_clear_mask                        0xFB

#define T3GGO                                    0x3
#define T3GGO_address                            0xF97
#define T3GGO_position                           0x3
#define T3GGO_size                               0x1
#define T3GGO_value_mask                         0x8
#define T3GGO_clear_mask                         0xF7

#define T3DONE                                   0x3
#define T3DONE_address                           0xF97
#define T3DONE_position                          0x3
#define T3DONE_size                              0x1
#define T3DONE_value_mask                        0x8
#define T3DONE_clear_mask                        0xF7

#define T3GGO_T3DONE                             0x3
#define T3GGO_T3DONE_address                     0xF97
#define T3GGO_T3DONE_position                    0x3
#define T3GGO_T3DONE_size                        0x1
#define T3GGO_T3DONE_value_mask                  0x8
#define T3GGO_T3DONE_clear_mask                  0xF7

#define T3GSPM                                   0x4
#define T3GSPM_address                           0xF97
#define T3GSPM_position                          0x4
#define T3GSPM_size                              0x1
#define T3GSPM_value_mask                        0x10
#define T3GSPM_clear_mask                        0xEF

#define T3GTM                                    0x5
#define T3GTM_address                            0xF97
#define T3GTM_position                           0x5
#define T3GTM_size                               0x1
#define T3GTM_value_mask                         0x20
#define T3GTM_clear_mask                         0xDF

#define T3GPOL                                   0x6
#define T3GPOL_address                           0xF97
#define T3GPOL_position                          0x6
#define T3GPOL_size                              0x1
#define T3GPOL_value_mask                        0x40
#define T3GPOL_clear_mask                        0xBF

#define TMR3GE                                   0x7
#define TMR3GE_address                           0xF97
#define TMR3GE_position                          0x7
#define TMR3GE_size                              0x1
#define TMR3GE_value_mask                        0x80
#define TMR3GE_clear_mask                        0x7F


/*-------------------------------------------------------------#
| PIR5                                                   0xF98 |
#--------------------------------------------------------------#
| - | - | CM3IF | TMR8IF | TMR6IF | TMR5IF | TMR5GIF | TMR1GIF |
#--------------------------------------------------------------#
| 7 | 6 | 5     | 4      | 3      | 2      | 1       | 0       |
#-------------------------------------------------------------*/

#define PIR5                                     0x0
#define PIR5_address                             0xF98
#define PIR5_position                            0x0
#define PIR5_size                                0x8
#define PIR5_value_mask                          0xFF
#define PIR5_clear_mask                          0x0

#define TMR1GIF                                  0x0
#define TMR1GIF_address                          0xF98
#define TMR1GIF_position                         0x0
#define TMR1GIF_size                             0x1
#define TMR1GIF_value_mask                       0x1
#define TMR1GIF_clear_mask                       0xFE

#define TMR5GIF                                  0x1
#define TMR5GIF_address                          0xF98
#define TMR5GIF_position                         0x1
#define TMR5GIF_size                             0x1
#define TMR5GIF_value_mask                       0x2
#define TMR5GIF_clear_mask                       0xFD

#define TMR5IF                                   0x2
#define TMR5IF_address                           0xF98
#define TMR5IF_position                          0x2
#define TMR5IF_size                              0x1
#define TMR5IF_value_mask                        0x4
#define TMR5IF_clear_mask                        0xFB

#define TMR6IF                                   0x3
#define TMR6IF_address                           0xF98
#define TMR6IF_position                          0x3
#define TMR6IF_size                              0x1
#define TMR6IF_value_mask                        0x8
#define TMR6IF_clear_mask                        0xF7

#define TMR8IF                                   0x4
#define TMR8IF_address                           0xF98
#define TMR8IF_position                          0x4
#define TMR8IF_size                              0x1
#define TMR8IF_value_mask                        0x10
#define TMR8IF_clear_mask                        0xEF

#define CM3IF                                    0x5
#define CM3IF_address                            0xF98
#define CM3IF_position                           0x5
#define CM3IF_size                               0x1
#define CM3IF_value_mask                         0x20
#define CM3IF_clear_mask                         0xDF


/*-------------------------------------------------------------#
| IPR5                                                   0xF99 |
#--------------------------------------------------------------#
| - | - | CM3IP | EVPOL15 | EVPOL05 | TMR5IP | TMR5GIP | CCH05 |
#--------------------------------------------------------------#
| 7 | 6 | 5     | 4       | 3       | 2      | 1       | 0     |
#-------------------------------------------------------------*/

#define IPR5                                     0x0
#define IPR5_address                             0xF99
#define IPR5_position                            0x0
#define IPR5_size                                0x8
#define IPR5_value_mask                          0xFF
#define IPR5_clear_mask                          0x0

#define CCH05                                    0x0
#define CCH05_address                            0xF99
#define CCH05_position                           0x0
#define CCH05_size                               0x1
#define CCH05_value_mask                         0x1
#define CCH05_clear_mask                         0xFE

#define TMR1GIP                                  0x0
#define TMR1GIP_address                          0xF99
#define TMR1GIP_position                         0x0
#define TMR1GIP_size                             0x1
#define TMR1GIP_value_mask                       0x1
#define TMR1GIP_clear_mask                       0xFE

#define TMR5GIP                                  0x1
#define TMR5GIP_address                          0xF99
#define TMR5GIP_position                         0x1
#define TMR5GIP_size                             0x1
#define TMR5GIP_value_mask                       0x2
#define TMR5GIP_clear_mask                       0xFD

#define CCH15                                    0x1
#define CCH15_address                            0xF99
#define CCH15_position                           0x1
#define CCH15_size                               0x1
#define CCH15_value_mask                         0x2
#define CCH15_clear_mask                         0xFD

#define TMR5IP                                   0x2
#define TMR5IP_address                           0xF99
#define TMR5IP_position                          0x2
#define TMR5IP_size                              0x1
#define TMR5IP_value_mask                        0x4
#define TMR5IP_clear_mask                        0xFB

#define EVPOL05                                  0x3
#define EVPOL05_address                          0xF99
#define EVPOL05_position                         0x3
#define EVPOL05_size                             0x1
#define EVPOL05_value_mask                       0x8
#define EVPOL05_clear_mask                       0xF7

#define TMR6IP                                   0x3
#define TMR6IP_address                           0xF99
#define TMR6IP_position                          0x3
#define TMR6IP_size                              0x1
#define TMR6IP_value_mask                        0x8
#define TMR6IP_clear_mask                        0xF7

#define EVPOL15                                  0x4
#define EVPOL15_address                          0xF99
#define EVPOL15_position                         0x4
#define EVPOL15_size                             0x1
#define EVPOL15_value_mask                       0x10
#define EVPOL15_clear_mask                       0xEF

#define TMR8IP                                   0x4
#define TMR8IP_address                           0xF99
#define TMR8IP_position                          0x4
#define TMR8IP_size                              0x1
#define TMR8IP_value_mask                        0x10
#define TMR8IP_clear_mask                        0xEF

#define CM3IP                                    0x5
#define CM3IP_address                            0xF99
#define CM3IP_position                           0x5
#define CM3IP_size                               0x1
#define CM3IP_value_mask                         0x20
#define CM3IP_clear_mask                         0xDF


/*----------------------------------------------------------------------------#
| T1GCON                                                                0xF9A |
#-----------------------------------------------------------------------------#
| TMR1GE | T1GPOL | T1GTM | T1GSPM | T1GGO_nT1DONE | T1GVAL | T1GSS1 | T1GSS0 |
#-----------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3             | 2      | 1      | 0      |
#----------------------------------------------------------------------------*/

#define T1GCON                                   0x0
#define T1GCON_address                           0xF9A
#define T1GCON_position                          0x0
#define T1GCON_size                              0x8
#define T1GCON_value_mask                        0xFF
#define T1GCON_clear_mask                        0x0

#define T1GSS0                                   0x0
#define T1GSS0_address                           0xF9A
#define T1GSS0_position                          0x0
#define T1GSS0_size                              0x1
#define T1GSS0_value_mask                        0x1
#define T1GSS0_clear_mask                        0xFE

#define T1GSS1                                   0x1
#define T1GSS1_address                           0xF9A
#define T1GSS1_position                          0x1
#define T1GSS1_size                              0x1
#define T1GSS1_value_mask                        0x2
#define T1GSS1_clear_mask                        0xFD

#define T1GVAL                                   0x2
#define T1GVAL_address                           0xF9A
#define T1GVAL_position                          0x2
#define T1GVAL_size                              0x1
#define T1GVAL_value_mask                        0x4
#define T1GVAL_clear_mask                        0xFB

#define T1GGO_nT1DONE                            0x3
#define T1GGO_nT1DONE_address                    0xF9A
#define T1GGO_nT1DONE_position                   0x3
#define T1GGO_nT1DONE_size                       0x1
#define T1GGO_nT1DONE_value_mask                 0x8
#define T1GGO_nT1DONE_clear_mask                 0xF7

#define T1DONE                                   0x3
#define T1DONE_address                           0xF9A
#define T1DONE_position                          0x3
#define T1DONE_size                              0x1
#define T1DONE_value_mask                        0x8
#define T1DONE_clear_mask                        0xF7

#define nT1DONE                                  0x3
#define nT1DONE_address                          0xF9A
#define nT1DONE_position                         0x3
#define nT1DONE_size                             0x1
#define nT1DONE_value_mask                       0x8
#define nT1DONE_clear_mask                       0xF7

#define T1GGO_NOT_T1DONE                         0x3
#define T1GGO_NOT_T1DONE_address                 0xF9A
#define T1GGO_NOT_T1DONE_position                0x3
#define T1GGO_NOT_T1DONE_size                    0x1
#define T1GGO_NOT_T1DONE_value_mask              0x8
#define T1GGO_NOT_T1DONE_clear_mask              0xF7

#define NOT_T1DONE                               0x3
#define NOT_T1DONE_address                       0xF9A
#define NOT_T1DONE_position                      0x3
#define NOT_T1DONE_size                          0x1
#define NOT_T1DONE_value_mask                    0x8
#define NOT_T1DONE_clear_mask                    0xF7

#define T1GGO                                    0x3
#define T1GGO_address                            0xF9A
#define T1GGO_position                           0x3
#define T1GGO_size                               0x1
#define T1GGO_value_mask                         0x8
#define T1GGO_clear_mask                         0xF7

#define T1GSPM                                   0x4
#define T1GSPM_address                           0xF9A
#define T1GSPM_position                          0x4
#define T1GSPM_size                              0x1
#define T1GSPM_value_mask                        0x10
#define T1GSPM_clear_mask                        0xEF

#define T1GTM                                    0x5
#define T1GTM_address                            0xF9A
#define T1GTM_position                           0x5
#define T1GTM_size                               0x1
#define T1GTM_value_mask                         0x20
#define T1GTM_clear_mask                         0xDF

#define T1GPOL                                   0x6
#define T1GPOL_address                           0xF9A
#define T1GPOL_position                          0x6
#define T1GPOL_size                              0x1
#define T1GPOL_value_mask                        0x40
#define T1GPOL_clear_mask                        0xBF

#define TMR1GE                                   0x7
#define TMR1GE_address                           0xF9A
#define TMR1GE_position                          0x7
#define TMR1GE_size                              0x1
#define TMR1GE_value_mask                        0x80
#define TMR1GE_clear_mask                        0x7F


/*---------------------------------------------------------#
| OSCTUNE                                            0xF9B |
#----------------------------------------------------------#
| INTSRC | PLLEN | TUN5 | TUN4 | TUN3 | TUN2 | TUN1 | TUN0 |
#----------------------------------------------------------#
| 7      | 6     | 5    | 4    | 3    | 2    | 1    | 0    |
#---------------------------------------------------------*/

#define OSCTUNE                                  0x0
#define OSCTUNE_address                          0xF9B
#define OSCTUNE_position                         0x0
#define OSCTUNE_size                             0x8
#define OSCTUNE_value_mask                       0xFF
#define OSCTUNE_clear_mask                       0x0

#define TUN0                                     0x0
#define TUN0_address                             0xF9B
#define TUN0_position                            0x0
#define TUN0_size                                0x1
#define TUN0_value_mask                          0x1
#define TUN0_clear_mask                          0xFE

#define TUN                                      0x0
#define TUN_address                              0xF9B
#define TUN_position                             0x0
#define TUN_size                                 0x6
#define TUN_value_mask                           0x3F
#define TUN_clear_mask                           0xC0

#define TUN1                                     0x1
#define TUN1_address                             0xF9B
#define TUN1_position                            0x1
#define TUN1_size                                0x1
#define TUN1_value_mask                          0x2
#define TUN1_clear_mask                          0xFD

#define TUN2                                     0x2
#define TUN2_address                             0xF9B
#define TUN2_position                            0x2
#define TUN2_size                                0x1
#define TUN2_value_mask                          0x4
#define TUN2_clear_mask                          0xFB

#define TUN3                                     0x3
#define TUN3_address                             0xF9B
#define TUN3_position                            0x3
#define TUN3_size                                0x1
#define TUN3_value_mask                          0x8
#define TUN3_clear_mask                          0xF7

#define TUN4                                     0x4
#define TUN4_address                             0xF9B
#define TUN4_position                            0x4
#define TUN4_size                                0x1
#define TUN4_value_mask                          0x10
#define TUN4_clear_mask                          0xEF

#define TUN5                                     0x5
#define TUN5_address                             0xF9B
#define TUN5_position                            0x5
#define TUN5_size                                0x1
#define TUN5_value_mask                          0x20
#define TUN5_clear_mask                          0xDF

#define PLLEN                                    0x6
#define PLLEN_address                            0xF9B
#define PLLEN_position                           0x6
#define PLLEN_size                               0x1
#define PLLEN_value_mask                         0x40
#define PLLEN_clear_mask                         0xBF

#define INTSRC                                   0x7
#define INTSRC_address                           0xF9B
#define INTSRC_position                          0x7
#define INTSRC_size                              0x1
#define INTSRC_value_mask                        0x80
#define INTSRC_clear_mask                        0x7F


/*----------------------------------------------------------------------------#
| RCSTA2                                                                0xF9C |
#-----------------------------------------------------------------------------#
| SPEN2 | RC8_92 | SREN2 | RCSTA2_CREN | RCSTA2_ADDEN | FERR2 | OERR2 | RX9D2 |
#-----------------------------------------------------------------------------#
| 7     | 6      | 5     | 4           | 3            | 2     | 1     | 0     |
#----------------------------------------------------------------------------*/

#define RCSTA2                                   0x0
#define RCSTA2_address                           0xF9C
#define RCSTA2_position                          0x0
#define RCSTA2_size                              0x8
#define RCSTA2_value_mask                        0xFF
#define RCSTA2_clear_mask                        0x0

#define RCD82                                    0x0
#define RCD82_address                            0xF9C
#define RCD82_position                           0x0
#define RCD82_size                               0x1
#define RCD82_value_mask                         0x1
#define RCD82_clear_mask                         0xFE

#define RX9D2                                    0x0
#define RX9D2_address                            0xF9C
#define RX9D2_position                           0x0
#define RX9D2_size                               0x1
#define RX9D2_value_mask                         0x1
#define RX9D2_clear_mask                         0xFE

#define RCSTA2_RX9D                              0x0
#define RCSTA2_RX9D_address                      0xF9C
#define RCSTA2_RX9D_position                     0x0
#define RCSTA2_RX9D_size                         0x1
#define RCSTA2_RX9D_value_mask                   0x1
#define RCSTA2_RX9D_clear_mask                   0xFE

#define OERR2                                    0x1
#define OERR2_address                            0xF9C
#define OERR2_position                           0x1
#define OERR2_size                               0x1
#define OERR2_value_mask                         0x2
#define OERR2_clear_mask                         0xFD

#define RCSTA2_OERR                              0x1
#define RCSTA2_OERR_address                      0xF9C
#define RCSTA2_OERR_position                     0x1
#define RCSTA2_OERR_size                         0x1
#define RCSTA2_OERR_value_mask                   0x2
#define RCSTA2_OERR_clear_mask                   0xFD

#define FERR2                                    0x2
#define FERR2_address                            0xF9C
#define FERR2_position                           0x2
#define FERR2_size                               0x1
#define FERR2_value_mask                         0x4
#define FERR2_clear_mask                         0xFB

#define RCSTA2_FERR                              0x2
#define RCSTA2_FERR_address                      0xF9C
#define RCSTA2_FERR_position                     0x2
#define RCSTA2_FERR_size                         0x1
#define RCSTA2_FERR_value_mask                   0x4
#define RCSTA2_FERR_clear_mask                   0xFB

#define ADDEN2                                   0x3
#define ADDEN2_address                           0xF9C
#define ADDEN2_position                          0x3
#define ADDEN2_size                              0x1
#define ADDEN2_value_mask                        0x8
#define ADDEN2_clear_mask                        0xF7

#define RCSTA2_ADDEN                             0x3
#define RCSTA2_ADDEN_address                     0xF9C
#define RCSTA2_ADDEN_position                    0x3
#define RCSTA2_ADDEN_size                        0x1
#define RCSTA2_ADDEN_value_mask                  0x8
#define RCSTA2_ADDEN_clear_mask                  0xF7

#define RCSTA2_CREN                              0x4
#define RCSTA2_CREN_address                      0xF9C
#define RCSTA2_CREN_position                     0x4
#define RCSTA2_CREN_size                         0x1
#define RCSTA2_CREN_value_mask                   0x10
#define RCSTA2_CREN_clear_mask                   0xEF

#define CREN2                                    0x4
#define CREN2_address                            0xF9C
#define CREN2_position                           0x4
#define CREN2_size                               0x1
#define CREN2_value_mask                         0x10
#define CREN2_clear_mask                         0xEF

#define SREN2                                    0x5
#define SREN2_address                            0xF9C
#define SREN2_position                           0x5
#define SREN2_size                               0x1
#define SREN2_value_mask                         0x20
#define SREN2_clear_mask                         0xDF

#define RCSTA2_SREN                              0x5
#define RCSTA2_SREN_address                      0xF9C
#define RCSTA2_SREN_position                     0x5
#define RCSTA2_SREN_size                         0x1
#define RCSTA2_SREN_value_mask                   0x20
#define RCSTA2_SREN_clear_mask                   0xDF

#define RC92                                     0x6
#define RC92_address                             0xF9C
#define RC92_position                            0x6
#define RC92_size                                0x1
#define RC92_value_mask                          0x40
#define RC92_clear_mask                          0xBF

#define RC8_92                                   0x6
#define RC8_92_address                           0xF9C
#define RC8_92_position                          0x6
#define RC8_92_size                              0x1
#define RC8_92_value_mask                        0x40
#define RC8_92_clear_mask                        0xBF

#define RCSTA2_RX9                               0x6
#define RCSTA2_RX9_address                       0xF9C
#define RCSTA2_RX9_position                      0x6
#define RCSTA2_RX9_size                          0x1
#define RCSTA2_RX9_value_mask                    0x40
#define RCSTA2_RX9_clear_mask                    0xBF

#define RX92                                     0x6
#define RX92_address                             0xF9C
#define RX92_position                            0x6
#define RX92_size                                0x1
#define RX92_value_mask                          0x40
#define RX92_clear_mask                          0xBF

#define RCSTA2_SPEN                              0x7
#define RCSTA2_SPEN_address                      0xF9C
#define RCSTA2_SPEN_position                     0x7
#define RCSTA2_SPEN_size                         0x1
#define RCSTA2_SPEN_value_mask                   0x80
#define RCSTA2_SPEN_clear_mask                   0x7F

#define SPEN2                                    0x7
#define SPEN2_address                            0xF9C
#define SPEN2_position                           0x7
#define SPEN2_size                               0x1
#define SPEN2_value_mask                         0x80
#define SPEN2_clear_mask                         0x7F


/*-----------------------------------------------------------#
| PIE1                                                 0xF9D |
#------------------------------------------------------------#
| - | ADIE | RCIE | TXIE | SSP1IE | CCP1IE | TMR2IE | TMR1IE |
#------------------------------------------------------------#
| 7 | 6    | 5    | 4    | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------*/

#define PIE1                                     0x0
#define PIE1_address                             0xF9D
#define PIE1_position                            0x0
#define PIE1_size                                0x8
#define PIE1_value_mask                          0xFF
#define PIE1_clear_mask                          0x0

#define TMR1IE                                   0x0
#define TMR1IE_address                           0xF9D
#define TMR1IE_position                          0x0
#define TMR1IE_size                              0x1
#define TMR1IE_value_mask                        0x1
#define TMR1IE_clear_mask                        0xFE

#define TMR2IE                                   0x1
#define TMR2IE_address                           0xF9D
#define TMR2IE_position                          0x1
#define TMR2IE_size                              0x1
#define TMR2IE_value_mask                        0x2
#define TMR2IE_clear_mask                        0xFD

#define CCP1IE                                   0x2
#define CCP1IE_address                           0xF9D
#define CCP1IE_position                          0x2
#define CCP1IE_size                              0x1
#define CCP1IE_value_mask                        0x4
#define CCP1IE_clear_mask                        0xFB

#define SSP1IE                                   0x3
#define SSP1IE_address                           0xF9D
#define SSP1IE_position                          0x3
#define SSP1IE_size                              0x1
#define SSP1IE_value_mask                        0x8
#define SSP1IE_clear_mask                        0xF7

#define SSPIE                                    0x3
#define SSPIE_address                            0xF9D
#define SSPIE_position                           0x3
#define SSPIE_size                               0x1
#define SSPIE_value_mask                         0x8
#define SSPIE_clear_mask                         0xF7

#define TXIE                                     0x4
#define TXIE_address                             0xF9D
#define TXIE_position                            0x4
#define TXIE_size                                0x1
#define TXIE_value_mask                          0x10
#define TXIE_clear_mask                          0xEF

#define TX1IE                                    0x4
#define TX1IE_address                            0xF9D
#define TX1IE_position                           0x4
#define TX1IE_size                               0x1
#define TX1IE_value_mask                         0x10
#define TX1IE_clear_mask                         0xEF

#define RC1IE                                    0x5
#define RC1IE_address                            0xF9D
#define RC1IE_position                           0x5
#define RC1IE_size                               0x1
#define RC1IE_value_mask                         0x20
#define RC1IE_clear_mask                         0xDF

#define RCIE                                     0x5
#define RCIE_address                             0xF9D
#define RCIE_position                            0x5
#define RCIE_size                                0x1
#define RCIE_value_mask                          0x20
#define RCIE_clear_mask                          0xDF

#define ADIE                                     0x6
#define ADIE_address                             0xF9D
#define ADIE_position                            0x6
#define ADIE_size                                0x1
#define ADIE_value_mask                          0x40
#define ADIE_clear_mask                          0xBF


/*----------------------------------------------------------#
| PIR1                                                0xF9E |
#-----------------------------------------------------------#
| - | ADIF | RCIF | TXIF | SSPIF | CCP1IF | TMR2IF | TMR1IF |
#-----------------------------------------------------------#
| 7 | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define PIR1                                     0x0
#define PIR1_address                             0xF9E
#define PIR1_position                            0x0
#define PIR1_size                                0x8
#define PIR1_value_mask                          0xFF
#define PIR1_clear_mask                          0x0

#define TMR1IF                                   0x0
#define TMR1IF_address                           0xF9E
#define TMR1IF_position                          0x0
#define TMR1IF_size                              0x1
#define TMR1IF_value_mask                        0x1
#define TMR1IF_clear_mask                        0xFE

#define TMR2IF                                   0x1
#define TMR2IF_address                           0xF9E
#define TMR2IF_position                          0x1
#define TMR2IF_size                              0x1
#define TMR2IF_value_mask                        0x2
#define TMR2IF_clear_mask                        0xFD

#define CCP1IF                                   0x2
#define CCP1IF_address                           0xF9E
#define CCP1IF_position                          0x2
#define CCP1IF_size                              0x1
#define CCP1IF_value_mask                        0x4
#define CCP1IF_clear_mask                        0xFB

#define SSPIF                                    0x3
#define SSPIF_address                            0xF9E
#define SSPIF_position                           0x3
#define SSPIF_size                               0x1
#define SSPIF_value_mask                         0x8
#define SSPIF_clear_mask                         0xF7

#define SSP1IF                                   0x3
#define SSP1IF_address                           0xF9E
#define SSP1IF_position                          0x3
#define SSP1IF_size                              0x1
#define SSP1IF_value_mask                        0x8
#define SSP1IF_clear_mask                        0xF7

#define TXIF                                     0x4
#define TXIF_address                             0xF9E
#define TXIF_position                            0x4
#define TXIF_size                                0x1
#define TXIF_value_mask                          0x10
#define TXIF_clear_mask                          0xEF

#define TX1IF                                    0x4
#define TX1IF_address                            0xF9E
#define TX1IF_position                           0x4
#define TX1IF_size                               0x1
#define TX1IF_value_mask                         0x10
#define TX1IF_clear_mask                         0xEF

#define RCIF                                     0x5
#define RCIF_address                             0xF9E
#define RCIF_position                            0x5
#define RCIF_size                                0x1
#define RCIF_value_mask                          0x20
#define RCIF_clear_mask                          0xDF

#define RC1IF                                    0x5
#define RC1IF_address                            0xF9E
#define RC1IF_position                           0x5
#define RC1IF_size                               0x1
#define RC1IF_value_mask                         0x20
#define RC1IF_clear_mask                         0xDF

#define ADIF                                     0x6
#define ADIF_address                             0xF9E
#define ADIF_position                            0x6
#define ADIF_size                                0x1
#define ADIF_value_mask                          0x40
#define ADIF_clear_mask                          0xBF


/*-------------------------------------------------------------#
| IPR1                                                   0xF9F |
#--------------------------------------------------------------#
| - | ADIP | RC1IP | TX1IP | SSP1IP | CCP1IP | TMR2IP | TMR1IP |
#--------------------------------------------------------------#
| 7 | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#-------------------------------------------------------------*/

#define IPR1                                     0x0
#define IPR1_address                             0xF9F
#define IPR1_position                            0x0
#define IPR1_size                                0x8
#define IPR1_value_mask                          0xFF
#define IPR1_clear_mask                          0x0

#define TMR1IP                                   0x0
#define TMR1IP_address                           0xF9F
#define TMR1IP_position                          0x0
#define TMR1IP_size                              0x1
#define TMR1IP_value_mask                        0x1
#define TMR1IP_clear_mask                        0xFE

#define TMR2IP                                   0x1
#define TMR2IP_address                           0xF9F
#define TMR2IP_position                          0x1
#define TMR2IP_size                              0x1
#define TMR2IP_value_mask                        0x2
#define TMR2IP_clear_mask                        0xFD

#define CCP1IP                                   0x2
#define CCP1IP_address                           0xF9F
#define CCP1IP_position                          0x2
#define CCP1IP_size                              0x1
#define CCP1IP_value_mask                        0x4
#define CCP1IP_clear_mask                        0xFB

#define SSPIP                                    0x3
#define SSPIP_address                            0xF9F
#define SSPIP_position                           0x3
#define SSPIP_size                               0x1
#define SSPIP_value_mask                         0x8
#define SSPIP_clear_mask                         0xF7

#define SSP1IP                                   0x3
#define SSP1IP_address                           0xF9F
#define SSP1IP_position                          0x3
#define SSP1IP_size                              0x1
#define SSP1IP_value_mask                        0x8
#define SSP1IP_clear_mask                        0xF7

#define TX1IP                                    0x4
#define TX1IP_address                            0xF9F
#define TX1IP_position                           0x4
#define TX1IP_size                               0x1
#define TX1IP_value_mask                         0x10
#define TX1IP_clear_mask                         0xEF

#define TXIP                                     0x4
#define TXIP_address                             0xF9F
#define TXIP_position                            0x4
#define TXIP_size                                0x1
#define TXIP_value_mask                          0x10
#define TXIP_clear_mask                          0xEF

#define RCIP                                     0x5
#define RCIP_address                             0xF9F
#define RCIP_position                            0x5
#define RCIP_size                                0x1
#define RCIP_value_mask                          0x20
#define RCIP_clear_mask                          0xDF

#define RC1IP                                    0x5
#define RC1IP_address                            0xF9F
#define RC1IP_position                           0x5
#define RC1IP_size                               0x1
#define RC1IP_value_mask                         0x20
#define RC1IP_clear_mask                         0xDF

#define ADIP                                     0x6
#define ADIP_address                             0xF9F
#define ADIP_position                            0x6
#define ADIP_size                                0x1
#define ADIP_value_mask                          0x40
#define ADIP_clear_mask                          0xBF


/*--------------------------------------------------------------#
| PIE2                                                    0xFA0 |
#---------------------------------------------------------------#
| OSCFIE | CMIE | CM1IE | - | BCL1IE | HLVDIE | TMR3IE | CCP2IE |
#---------------------------------------------------------------#
| 7      | 6    | 5     | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0xFA0
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

#define CCP2IE                                   0x0
#define CCP2IE_address                           0xFA0
#define CCP2IE_position                          0x0
#define CCP2IE_size                              0x1
#define CCP2IE_value_mask                        0x1
#define CCP2IE_clear_mask                        0xFE

#define TMR3IE                                   0x1
#define TMR3IE_address                           0xFA0
#define TMR3IE_position                          0x1
#define TMR3IE_size                              0x1
#define TMR3IE_value_mask                        0x2
#define TMR3IE_clear_mask                        0xFD

#define HLVDIE                                   0x2
#define HLVDIE_address                           0xFA0
#define HLVDIE_position                          0x2
#define HLVDIE_size                              0x1
#define HLVDIE_value_mask                        0x4
#define HLVDIE_clear_mask                        0xFB

#define LVDIE                                    0x2
#define LVDIE_address                            0xFA0
#define LVDIE_position                           0x2
#define LVDIE_size                               0x1
#define LVDIE_value_mask                         0x4
#define LVDIE_clear_mask                         0xFB

#define BCL1IE                                   0x3
#define BCL1IE_address                           0xFA0
#define BCL1IE_position                          0x3
#define BCL1IE_size                              0x1
#define BCL1IE_value_mask                        0x8
#define BCL1IE_clear_mask                        0xF7

#define BCLIE                                    0x3
#define BCLIE_address                            0xFA0
#define BCLIE_position                           0x3
#define BCLIE_size                               0x1
#define BCLIE_value_mask                         0x8
#define BCLIE_clear_mask                         0xF7

#define CM1IE                                    0x5
#define CM1IE_address                            0xFA0
#define CM1IE_position                           0x5
#define CM1IE_size                               0x1
#define CM1IE_value_mask                         0x20
#define CM1IE_clear_mask                         0xDF

#define CMIE                                     0x6
#define CMIE_address                             0xFA0
#define CMIE_position                            0x6
#define CMIE_size                                0x1
#define CMIE_value_mask                          0x40
#define CMIE_clear_mask                          0xBF

#define CM2IE                                    0x6
#define CM2IE_address                            0xFA0
#define CM2IE_position                           0x6
#define CM2IE_size                               0x1
#define CM2IE_value_mask                         0x40
#define CM2IE_clear_mask                         0xBF

#define OSCFIE                                   0x7
#define OSCFIE_address                           0xFA0
#define OSCFIE_position                          0x7
#define OSCFIE_size                              0x1
#define OSCFIE_value_mask                        0x80
#define OSCFIE_clear_mask                        0x7F


/*--------------------------------------------------------------#
| PIR2                                                    0xFA1 |
#---------------------------------------------------------------#
| OSCFIF | CMIF | CM1IF | - | BCL1IF | HLVDIF | TMR3IF | CCP2IF |
#---------------------------------------------------------------#
| 7      | 6    | 5     | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0xFA1
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

#define CCP2IF                                   0x0
#define CCP2IF_address                           0xFA1
#define CCP2IF_position                          0x0
#define CCP2IF_size                              0x1
#define CCP2IF_value_mask                        0x1
#define CCP2IF_clear_mask                        0xFE

#define TMR3IF                                   0x1
#define TMR3IF_address                           0xFA1
#define TMR3IF_position                          0x1
#define TMR3IF_size                              0x1
#define TMR3IF_value_mask                        0x2
#define TMR3IF_clear_mask                        0xFD

#define HLVDIF                                   0x2
#define HLVDIF_address                           0xFA1
#define HLVDIF_position                          0x2
#define HLVDIF_size                              0x1
#define HLVDIF_value_mask                        0x4
#define HLVDIF_clear_mask                        0xFB

#define LVDIF                                    0x2
#define LVDIF_address                            0xFA1
#define LVDIF_position                           0x2
#define LVDIF_size                               0x1
#define LVDIF_value_mask                         0x4
#define LVDIF_clear_mask                         0xFB

#define BCL1IF                                   0x3
#define BCL1IF_address                           0xFA1
#define BCL1IF_position                          0x3
#define BCL1IF_size                              0x1
#define BCL1IF_value_mask                        0x8
#define BCL1IF_clear_mask                        0xF7

#define BCLIF                                    0x3
#define BCLIF_address                            0xFA1
#define BCLIF_position                           0x3
#define BCLIF_size                               0x1
#define BCLIF_value_mask                         0x8
#define BCLIF_clear_mask                         0xF7

#define CM1IF                                    0x5
#define CM1IF_address                            0xFA1
#define CM1IF_position                           0x5
#define CM1IF_size                               0x1
#define CM1IF_value_mask                         0x20
#define CM1IF_clear_mask                         0xDF

#define CMIF                                     0x6
#define CMIF_address                             0xFA1
#define CMIF_position                            0x6
#define CMIF_size                                0x1
#define CMIF_value_mask                          0x40
#define CMIF_clear_mask                          0xBF

#define CM2IF                                    0x6
#define CM2IF_address                            0xFA1
#define CM2IF_position                           0x6
#define CM2IF_size                               0x1
#define CM2IF_value_mask                         0x40
#define CM2IF_clear_mask                         0xBF

#define OSCFIF                                   0x7
#define OSCFIF_address                           0xFA1
#define OSCFIF_position                          0x7
#define OSCFIF_size                              0x1
#define OSCFIF_value_mask                        0x80
#define OSCFIF_clear_mask                        0x7F


/*---------------------------------------------------------------#
| IPR2                                                     0xFA2 |
#----------------------------------------------------------------#
| OSCFIP | CM2IP | CM1IP | - | BCL1IP | HLVDIP | TMR3IP | CCP2IP |
#----------------------------------------------------------------#
| 7      | 6     | 5     | 4 | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------*/

#define IPR2                                     0x0
#define IPR2_address                             0xFA2
#define IPR2_position                            0x0
#define IPR2_size                                0x8
#define IPR2_value_mask                          0xFF
#define IPR2_clear_mask                          0x0

#define CCP2IP                                   0x0
#define CCP2IP_address                           0xFA2
#define CCP2IP_position                          0x0
#define CCP2IP_size                              0x1
#define CCP2IP_value_mask                        0x1
#define CCP2IP_clear_mask                        0xFE

#define TMR3IP                                   0x1
#define TMR3IP_address                           0xFA2
#define TMR3IP_position                          0x1
#define TMR3IP_size                              0x1
#define TMR3IP_value_mask                        0x2
#define TMR3IP_clear_mask                        0xFD

#define HLVDIP                                   0x2
#define HLVDIP_address                           0xFA2
#define HLVDIP_position                          0x2
#define HLVDIP_size                              0x1
#define HLVDIP_value_mask                        0x4
#define HLVDIP_clear_mask                        0xFB

#define LVDIP                                    0x2
#define LVDIP_address                            0xFA2
#define LVDIP_position                           0x2
#define LVDIP_size                               0x1
#define LVDIP_value_mask                         0x4
#define LVDIP_clear_mask                         0xFB

#define BCLIP                                    0x3
#define BCLIP_address                            0xFA2
#define BCLIP_position                           0x3
#define BCLIP_size                               0x1
#define BCLIP_value_mask                         0x8
#define BCLIP_clear_mask                         0xF7

#define BCL1IP                                   0x3
#define BCL1IP_address                           0xFA2
#define BCL1IP_position                          0x3
#define BCL1IP_size                              0x1
#define BCL1IP_value_mask                        0x8
#define BCL1IP_clear_mask                        0xF7

#define CM1IP                                    0x5
#define CM1IP_address                            0xFA2
#define CM1IP_position                           0x5
#define CM1IP_size                               0x1
#define CM1IP_value_mask                         0x20
#define CM1IP_clear_mask                         0xDF

#define CM2IP                                    0x6
#define CM2IP_address                            0xFA2
#define CM2IP_position                           0x6
#define CM2IP_size                               0x1
#define CM2IP_value_mask                         0x40
#define CM2IP_clear_mask                         0xBF

#define CMIP                                     0x6
#define CMIP_address                             0xFA2
#define CMIP_position                            0x6
#define CMIP_size                                0x1
#define CMIP_value_mask                          0x40
#define CMIP_clear_mask                          0xBF

#define OSCFIP                                   0x7
#define OSCFIP_address                           0xFA2
#define OSCFIP_position                          0x7
#define OSCFIP_size                              0x1
#define OSCFIP_value_mask                        0x80
#define OSCFIP_clear_mask                        0x7F


/*---------------------------------------------------------------------#
| PIE3                                                           0xFA3 |
#----------------------------------------------------------------------#
| SSP2IE | BCL2IE | RC2IE | TXB2IE | TMR4IE | CTMUIE | RXBNIE | RTCCIE |
#----------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------------*/

#define PIE3                                     0x0
#define PIE3_address                             0xFA3
#define PIE3_position                            0x0
#define PIE3_size                                0x8
#define PIE3_value_mask                          0xFF
#define PIE3_clear_mask                          0x0

#define RTCCIE                                   0x0
#define RTCCIE_address                           0xFA3
#define RTCCIE_position                          0x0
#define RTCCIE_size                              0x1
#define RTCCIE_value_mask                        0x1
#define RTCCIE_clear_mask                        0xFE

#define RXB0IE                                   0x0
#define RXB0IE_address                           0xFA3
#define RXB0IE_position                          0x0
#define RXB0IE_size                              0x1
#define RXB0IE_value_mask                        0x1
#define RXB0IE_clear_mask                        0xFE

#define RXBNIE                                   0x1
#define RXBNIE_address                           0xFA3
#define RXBNIE_position                          0x1
#define RXBNIE_size                              0x1
#define RXBNIE_value_mask                        0x2
#define RXBNIE_clear_mask                        0xFD

#define TMR3GIE                                  0x1
#define TMR3GIE_address                          0xFA3
#define TMR3GIE_position                         0x1
#define TMR3GIE_size                             0x1
#define TMR3GIE_value_mask                       0x2
#define TMR3GIE_clear_mask                       0xFD

#define RXB1IE                                   0x1
#define RXB1IE_address                           0xFA3
#define RXB1IE_position                          0x1
#define RXB1IE_size                              0x1
#define RXB1IE_value_mask                        0x2
#define RXB1IE_clear_mask                        0xFD

#define CTMUIE                                   0x2
#define CTMUIE_address                           0xFA3
#define CTMUIE_position                          0x2
#define CTMUIE_size                              0x1
#define CTMUIE_value_mask                        0x4
#define CTMUIE_clear_mask                        0xFB

#define TXB0IE                                   0x2
#define TXB0IE_address                           0xFA3
#define TXB0IE_position                          0x2
#define TXB0IE_size                              0x1
#define TXB0IE_value_mask                        0x4
#define TXB0IE_clear_mask                        0xFB

#define TMR4IE                                   0x3
#define TMR4IE_address                           0xFA3
#define TMR4IE_position                          0x3
#define TMR4IE_size                              0x1
#define TMR4IE_value_mask                        0x8
#define TMR4IE_clear_mask                        0xF7

#define TXB1IE                                   0x3
#define TXB1IE_address                           0xFA3
#define TXB1IE_position                          0x3
#define TXB1IE_size                              0x1
#define TXB1IE_value_mask                        0x8
#define TXB1IE_clear_mask                        0xF7

#define TXB2IE                                   0x4
#define TXB2IE_address                           0xFA3
#define TXB2IE_position                          0x4
#define TXB2IE_size                              0x1
#define TXB2IE_value_mask                        0x10
#define TXB2IE_clear_mask                        0xEF

#define TXBNIE                                   0x4
#define TXBNIE_address                           0xFA3
#define TXBNIE_position                          0x4
#define TXBNIE_size                              0x1
#define TXBNIE_value_mask                        0x10
#define TXBNIE_clear_mask                        0xEF

#define TX2IE                                    0x4
#define TX2IE_address                            0xFA3
#define TX2IE_position                           0x4
#define TX2IE_size                               0x1
#define TX2IE_value_mask                         0x10
#define TX2IE_clear_mask                         0xEF

#define RC2IE                                    0x5
#define RC2IE_address                            0xFA3
#define RC2IE_position                           0x5
#define RC2IE_size                               0x1
#define RC2IE_value_mask                         0x20
#define RC2IE_clear_mask                         0xDF

#define BCL2IE                                   0x6
#define BCL2IE_address                           0xFA3
#define BCL2IE_position                          0x6
#define BCL2IE_size                              0x1
#define BCL2IE_value_mask                        0x40
#define BCL2IE_clear_mask                        0xBF

#define SSP2IE                                   0x7
#define SSP2IE_address                           0xFA3
#define SSP2IE_position                          0x7
#define SSP2IE_size                              0x1
#define SSP2IE_value_mask                        0x80
#define SSP2IE_clear_mask                        0x7F


/*---------------------------------------------------------------------#
| PIR3                                                           0xFA4 |
#----------------------------------------------------------------------#
| SSP2IF | BCL2IF | RC2IF | TXBNIF | TMR4IF | CTMUIF | RXBNIF | RTCCIF |
#----------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------------*/

#define PIR3                                     0x0
#define PIR3_address                             0xFA4
#define PIR3_position                            0x0
#define PIR3_size                                0x8
#define PIR3_value_mask                          0xFF
#define PIR3_clear_mask                          0x0

#define RTCCIF                                   0x0
#define RTCCIF_address                           0xFA4
#define RTCCIF_position                          0x0
#define RTCCIF_size                              0x1
#define RTCCIF_value_mask                        0x1
#define RTCCIF_clear_mask                        0xFE

#define RXBNIF                                   0x1
#define RXBNIF_address                           0xFA4
#define RXBNIF_position                          0x1
#define RXBNIF_size                              0x1
#define RXBNIF_value_mask                        0x2
#define RXBNIF_clear_mask                        0xFD

#define TMR3GIF                                  0x1
#define TMR3GIF_address                          0xFA4
#define TMR3GIF_position                         0x1
#define TMR3GIF_size                             0x1
#define TMR3GIF_value_mask                       0x2
#define TMR3GIF_clear_mask                       0xFD

#define CTMUIF                                   0x2
#define CTMUIF_address                           0xFA4
#define CTMUIF_position                          0x2
#define CTMUIF_size                              0x1
#define CTMUIF_value_mask                        0x4
#define CTMUIF_clear_mask                        0xFB

#define TMR4IF                                   0x3
#define TMR4IF_address                           0xFA4
#define TMR4IF_position                          0x3
#define TMR4IF_size                              0x1
#define TMR4IF_value_mask                        0x8
#define TMR4IF_clear_mask                        0xF7

#define TXBNIF                                   0x4
#define TXBNIF_address                           0xFA4
#define TXBNIF_position                          0x4
#define TXBNIF_size                              0x1
#define TXBNIF_value_mask                        0x10
#define TXBNIF_clear_mask                        0xEF

#define TX2IF                                    0x4
#define TX2IF_address                            0xFA4
#define TX2IF_position                           0x4
#define TX2IF_size                               0x1
#define TX2IF_value_mask                         0x10
#define TX2IF_clear_mask                         0xEF

#define RC2IF                                    0x5
#define RC2IF_address                            0xFA4
#define RC2IF_position                           0x5
#define RC2IF_size                               0x1
#define RC2IF_value_mask                         0x20
#define RC2IF_clear_mask                         0xDF

#define BCL2IF                                   0x6
#define BCL2IF_address                           0xFA4
#define BCL2IF_position                          0x6
#define BCL2IF_size                              0x1
#define BCL2IF_value_mask                        0x40
#define BCL2IF_clear_mask                        0xBF

#define SSP2IF                                   0x7
#define SSP2IF_address                           0xFA4
#define SSP2IF_position                          0x7
#define SSP2IF_size                              0x1
#define SSP2IF_value_mask                        0x80
#define SSP2IF_clear_mask                        0x7F


/*---------------------------------------------------------------------#
| IPR3                                                           0xFA5 |
#----------------------------------------------------------------------#
| SSP2IP | BCL2IP | RC2IP | TX2IP | TMR4IP | CTMUIP | TMR3GIP | RTCCIP |
#----------------------------------------------------------------------#
| 7      | 6      | 5     | 4     | 3      | 2      | 1       | 0      |
#---------------------------------------------------------------------*/

#define IPR3                                     0x0
#define IPR3_address                             0xFA5
#define IPR3_position                            0x0
#define IPR3_size                                0x8
#define IPR3_value_mask                          0xFF
#define IPR3_clear_mask                          0x0

#define RTCCIP                                   0x0
#define RTCCIP_address                           0xFA5
#define RTCCIP_position                          0x0
#define RTCCIP_size                              0x1
#define RTCCIP_value_mask                        0x1
#define RTCCIP_clear_mask                        0xFE

#define TMR3GIP                                  0x1
#define TMR3GIP_address                          0xFA5
#define TMR3GIP_position                         0x1
#define TMR3GIP_size                             0x1
#define TMR3GIP_value_mask                       0x2
#define TMR3GIP_clear_mask                       0xFD

#define RXBNIP                                   0x1
#define RXBNIP_address                           0xFA5
#define RXBNIP_position                          0x1
#define RXBNIP_size                              0x1
#define RXBNIP_value_mask                        0x2
#define RXBNIP_clear_mask                        0xFD

#define CTMUIP                                   0x2
#define CTMUIP_address                           0xFA5
#define CTMUIP_position                          0x2
#define CTMUIP_size                              0x1
#define CTMUIP_value_mask                        0x4
#define CTMUIP_clear_mask                        0xFB

#define TMR4IP                                   0x3
#define TMR4IP_address                           0xFA5
#define TMR4IP_position                          0x3
#define TMR4IP_size                              0x1
#define TMR4IP_value_mask                        0x8
#define TMR4IP_clear_mask                        0xF7

#define TX2IP                                    0x4
#define TX2IP_address                            0xFA5
#define TX2IP_position                           0x4
#define TX2IP_size                               0x1
#define TX2IP_value_mask                         0x10
#define TX2IP_clear_mask                         0xEF

#define TXBNIP                                   0x4
#define TXBNIP_address                           0xFA5
#define TXBNIP_position                          0x4
#define TXBNIP_size                              0x1
#define TXBNIP_value_mask                        0x10
#define TXBNIP_clear_mask                        0xEF

#define RC2IP                                    0x5
#define RC2IP_address                            0xFA5
#define RC2IP_position                           0x5
#define RC2IP_size                               0x1
#define RC2IP_value_mask                         0x20
#define RC2IP_clear_mask                         0xDF

#define BCL2IP                                   0x6
#define BCL2IP_address                           0xFA5
#define BCL2IP_position                          0x6
#define BCL2IP_size                              0x1
#define BCL2IP_value_mask                        0x40
#define BCL2IP_clear_mask                        0xBF

#define SSP2IP                                   0x7
#define SSP2IP_address                           0xFA5
#define SSP2IP_position                          0x7
#define SSP2IP_size                              0x1
#define SSP2IP_value_mask                        0x80
#define SSP2IP_clear_mask                        0x7F


/*---------------------------------------------#
| EECON1                                 0xFA6 |
#----------------------------------------------#
| - | - | WPROG | FREE | WRERR | WREN | WR | - |
#----------------------------------------------#
| 7 | 6 | 5     | 4    | 3     | 2    | 1  | 0 |
#---------------------------------------------*/

#define EECON1                                   0x0
#define EECON1_address                           0xFA6
#define EECON1_position                          0x0
#define EECON1_size                              0x8
#define EECON1_value_mask                        0xFF
#define EECON1_clear_mask                        0x0

#define WR                                       0x1
#define WR_address                               0xFA6
#define WR_position                              0x1
#define WR_size                                  0x1
#define WR_value_mask                            0x2
#define WR_clear_mask                            0xFD

#define WREN                                     0x2
#define WREN_address                             0xFA6
#define WREN_position                            0x2
#define WREN_size                                0x1
#define WREN_value_mask                          0x4
#define WREN_clear_mask                          0xFB

#define WRERR                                    0x3
#define WRERR_address                            0xFA6
#define WRERR_position                           0x3
#define WRERR_size                               0x1
#define WRERR_value_mask                         0x8
#define WRERR_clear_mask                         0xF7

#define FREE                                     0x4
#define FREE_address                             0xFA6
#define FREE_position                            0x4
#define FREE_size                                0x1
#define FREE_value_mask                          0x10
#define FREE_clear_mask                          0xEF

#define WPROG                                    0x5
#define WPROG_address                            0xFA6
#define WPROG_position                           0x5
#define WPROG_size                               0x1
#define WPROG_value_mask                         0x20
#define WPROG_clear_mask                         0xDF


/*------------------------------#
| EECON2                  0xFA7 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EECON2                                   0x0
#define EECON2_address                           0xFA7
#define EECON2_position                          0x0
#define EECON2_size                              0x8
#define EECON2_value_mask                        0xFF
#define EECON2_clear_mask                        0x0


/*----------------------------------------------------------------------------------------#
| TXSTA2                                                                            0xFA8 |
#-----------------------------------------------------------------------------------------#
| TXSTA2_CSRC | TX8_92 | TXEN2 | TXSTA2_SYNC | SENDB2 | TXSTA2_BRGH | TXSTA2_TRMT | TX9D2 |
#-----------------------------------------------------------------------------------------#
| 7           | 6      | 5     | 4           | 3      | 2           | 1           | 0     |
#----------------------------------------------------------------------------------------*/

#define TXSTA2                                   0x0
#define TXSTA2_address                           0xFA8
#define TXSTA2_position                          0x0
#define TXSTA2_size                              0x8
#define TXSTA2_value_mask                        0xFF
#define TXSTA2_clear_mask                        0x0

#define TX9D2                                    0x0
#define TX9D2_address                            0xFA8
#define TX9D2_position                           0x0
#define TX9D2_size                               0x1
#define TX9D2_value_mask                         0x1
#define TX9D2_clear_mask                         0xFE

#define TXSTA2_TX9D                              0x0
#define TXSTA2_TX9D_address                      0xFA8
#define TXSTA2_TX9D_position                     0x0
#define TXSTA2_TX9D_size                         0x1
#define TXSTA2_TX9D_value_mask                   0x1
#define TXSTA2_TX9D_clear_mask                   0xFE

#define TXD82                                    0x0
#define TXD82_address                            0xFA8
#define TXD82_position                           0x0
#define TXD82_size                               0x1
#define TXD82_value_mask                         0x1
#define TXD82_clear_mask                         0xFE

#define TRMT2                                    0x1
#define TRMT2_address                            0xFA8
#define TRMT2_position                           0x1
#define TRMT2_size                               0x1
#define TRMT2_value_mask                         0x2
#define TRMT2_clear_mask                         0xFD

#define TXSTA2_TRMT                              0x1
#define TXSTA2_TRMT_address                      0xFA8
#define TXSTA2_TRMT_position                     0x1
#define TXSTA2_TRMT_size                         0x1
#define TXSTA2_TRMT_value_mask                   0x2
#define TXSTA2_TRMT_clear_mask                   0xFD

#define BRGH2                                    0x2
#define BRGH2_address                            0xFA8
#define BRGH2_position                           0x2
#define BRGH2_size                               0x1
#define BRGH2_value_mask                         0x4
#define BRGH2_clear_mask                         0xFB

#define TXSTA2_BRGH                              0x2
#define TXSTA2_BRGH_address                      0xFA8
#define TXSTA2_BRGH_position                     0x2
#define TXSTA2_BRGH_size                         0x1
#define TXSTA2_BRGH_value_mask                   0x4
#define TXSTA2_BRGH_clear_mask                   0xFB

#define SENDB2                                   0x3
#define SENDB2_address                           0xFA8
#define SENDB2_position                          0x3
#define SENDB2_size                              0x1
#define SENDB2_value_mask                        0x8
#define SENDB2_clear_mask                        0xF7

#define TXSTA2_SENDB                             0x3
#define TXSTA2_SENDB_address                     0xFA8
#define TXSTA2_SENDB_position                    0x3
#define TXSTA2_SENDB_size                        0x1
#define TXSTA2_SENDB_value_mask                  0x8
#define TXSTA2_SENDB_clear_mask                  0xF7

#define TXSTA2_SYNC                              0x4
#define TXSTA2_SYNC_address                      0xFA8
#define TXSTA2_SYNC_position                     0x4
#define TXSTA2_SYNC_size                         0x1
#define TXSTA2_SYNC_value_mask                   0x10
#define TXSTA2_SYNC_clear_mask                   0xEF

#define SYNC2                                    0x4
#define SYNC2_address                            0xFA8
#define SYNC2_position                           0x4
#define SYNC2_size                               0x1
#define SYNC2_value_mask                         0x10
#define SYNC2_clear_mask                         0xEF

#define TXEN2                                    0x5
#define TXEN2_address                            0xFA8
#define TXEN2_position                           0x5
#define TXEN2_size                               0x1
#define TXEN2_value_mask                         0x20
#define TXEN2_clear_mask                         0xDF

#define TXSTA2_TXEN                              0x5
#define TXSTA2_TXEN_address                      0xFA8
#define TXSTA2_TXEN_position                     0x5
#define TXSTA2_TXEN_size                         0x1
#define TXSTA2_TXEN_value_mask                   0x20
#define TXSTA2_TXEN_clear_mask                   0xDF

#define TX8_92                                   0x6
#define TX8_92_address                           0xFA8
#define TX8_92_position                          0x6
#define TX8_92_size                              0x1
#define TX8_92_value_mask                        0x40
#define TX8_92_clear_mask                        0xBF

#define TX92                                     0x6
#define TX92_address                             0xFA8
#define TX92_position                            0x6
#define TX92_size                                0x1
#define TX92_value_mask                          0x40
#define TX92_clear_mask                          0xBF

#define TXSTA2_TX9                               0x6
#define TXSTA2_TX9_address                       0xFA8
#define TXSTA2_TX9_position                      0x6
#define TXSTA2_TX9_size                          0x1
#define TXSTA2_TX9_value_mask                    0x40
#define TXSTA2_TX9_clear_mask                    0xBF

#define TXSTA2_CSRC                              0x7
#define TXSTA2_CSRC_address                      0xFA8
#define TXSTA2_CSRC_position                     0x7
#define TXSTA2_CSRC_size                         0x1
#define TXSTA2_CSRC_value_mask                   0x80
#define TXSTA2_CSRC_clear_mask                   0x7F

#define CSRC2                                    0x7
#define CSRC2_address                            0xFA8
#define CSRC2_position                           0x7
#define CSRC2_size                               0x1
#define CSRC2_value_mask                         0x80
#define CSRC2_clear_mask                         0x7F


/*------------------------------#
| TXREG2                  0xFA9 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TXREG2                                   0x0
#define TXREG2_address                           0xFA9
#define TXREG2_position                          0x0
#define TXREG2_size                              0x8
#define TXREG2_value_mask                        0xFF
#define TXREG2_clear_mask                        0x0


/*------------------------------#
| RCREG2                  0xFAA |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RCREG2                                   0x0
#define RCREG2_address                           0xFAA
#define RCREG2_position                          0x0
#define RCREG2_size                              0x8
#define RCREG2_value_mask                        0xFF
#define RCREG2_clear_mask                        0x0


/*------------------------------#
| SPBRG2                  0xFAB |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SPBRG2                                   0x0
#define SPBRG2_address                           0xFAB
#define SPBRG2_position                          0x0
#define SPBRG2_size                              0x8
#define SPBRG2_value_mask                        0xFF
#define SPBRG2_clear_mask                        0x0


/*---------------------------------------------------------------------------------------------------#
| RCSTA1                                                                                       0xFAC |
#----------------------------------------------------------------------------------------------------#
| RCSTA1_SPEN | RC8_9 | SREN1 | RCSTA1_CREN | RCSTA1_ADDEN | RCSTA1_FERR | RCSTA1_OERR | RCSTA1_RX9D |
#----------------------------------------------------------------------------------------------------#
| 7           | 6     | 5     | 4           | 3            | 2           | 1           | 0           |
#---------------------------------------------------------------------------------------------------*/

#define RCSTA1                                   0x0
#define RCSTA1_address                           0xFAC
#define RCSTA1_position                          0x0
#define RCSTA1_size                              0x8
#define RCSTA1_value_mask                        0xFF
#define RCSTA1_clear_mask                        0x0

#define RCSTA1_RX9D                              0x0
#define RCSTA1_RX9D_address                      0xFAC
#define RCSTA1_RX9D_position                     0x0
#define RCSTA1_RX9D_size                         0x1
#define RCSTA1_RX9D_value_mask                   0x1
#define RCSTA1_RX9D_clear_mask                   0xFE

#define RX9D1                                    0x0
#define RX9D1_address                            0xFAC
#define RX9D1_position                           0x0
#define RX9D1_size                               0x1
#define RX9D1_value_mask                         0x1
#define RX9D1_clear_mask                         0xFE

#define RCD8                                     0x0
#define RCD8_address                             0xFAC
#define RCD8_position                            0x0
#define RCD8_size                                0x1
#define RCD8_value_mask                          0x1
#define RCD8_clear_mask                          0xFE

#define RCSTA1_OERR                              0x1
#define RCSTA1_OERR_address                      0xFAC
#define RCSTA1_OERR_position                     0x1
#define RCSTA1_OERR_size                         0x1
#define RCSTA1_OERR_value_mask                   0x2
#define RCSTA1_OERR_clear_mask                   0xFD

#define OERR1                                    0x1
#define OERR1_address                            0xFAC
#define OERR1_position                           0x1
#define OERR1_size                               0x1
#define OERR1_value_mask                         0x2
#define OERR1_clear_mask                         0xFD

#define RCSTA1_FERR                              0x2
#define RCSTA1_FERR_address                      0xFAC
#define RCSTA1_FERR_position                     0x2
#define RCSTA1_FERR_size                         0x1
#define RCSTA1_FERR_value_mask                   0x4
#define RCSTA1_FERR_clear_mask                   0xFB

#define FERR1                                    0x2
#define FERR1_address                            0xFAC
#define FERR1_position                           0x2
#define FERR1_size                               0x1
#define FERR1_value_mask                         0x4
#define FERR1_clear_mask                         0xFB

#define RCSTA1_ADDEN                             0x3
#define RCSTA1_ADDEN_address                     0xFAC
#define RCSTA1_ADDEN_position                    0x3
#define RCSTA1_ADDEN_size                        0x1
#define RCSTA1_ADDEN_value_mask                  0x8
#define RCSTA1_ADDEN_clear_mask                  0xF7

#define ADDEN1                                   0x3
#define ADDEN1_address                           0xFAC
#define ADDEN1_position                          0x3
#define ADDEN1_size                              0x1
#define ADDEN1_value_mask                        0x8
#define ADDEN1_clear_mask                        0xF7

#define ADEN                                     0x3
#define ADEN_address                             0xFAC
#define ADEN_position                            0x3
#define ADEN_size                                0x1
#define ADEN_value_mask                          0x8
#define ADEN_clear_mask                          0xF7

#define RCSTA1_CREN                              0x4
#define RCSTA1_CREN_address                      0xFAC
#define RCSTA1_CREN_position                     0x4
#define RCSTA1_CREN_size                         0x1
#define RCSTA1_CREN_value_mask                   0x10
#define RCSTA1_CREN_clear_mask                   0xEF

#define CREN1                                    0x4
#define CREN1_address                            0xFAC
#define CREN1_position                           0x4
#define CREN1_size                               0x1
#define CREN1_value_mask                         0x10
#define CREN1_clear_mask                         0xEF

#define SRENA                                    0x5
#define SRENA_address                            0xFAC
#define SRENA_position                           0x5
#define SRENA_size                               0x1
#define SRENA_value_mask                         0x20
#define SRENA_clear_mask                         0xDF

#define SREN1                                    0x5
#define SREN1_address                            0xFAC
#define SREN1_position                           0x5
#define SREN1_size                               0x1
#define SREN1_value_mask                         0x20
#define SREN1_clear_mask                         0xDF

#define RCSTA1_SREN                              0x5
#define RCSTA1_SREN_address                      0xFAC
#define RCSTA1_SREN_position                     0x5
#define RCSTA1_SREN_size                         0x1
#define RCSTA1_SREN_value_mask                   0x20
#define RCSTA1_SREN_clear_mask                   0xDF

#define RC8_9                                    0x6
#define RC8_9_address                            0xFAC
#define RC8_9_position                           0x6
#define RC8_9_size                               0x1
#define RC8_9_value_mask                         0x40
#define RC8_9_clear_mask                         0xBF

#define RCSTA1_RX9                               0x6
#define RCSTA1_RX9_address                       0xFAC
#define RCSTA1_RX9_position                      0x6
#define RCSTA1_RX9_size                          0x1
#define RCSTA1_RX9_value_mask                    0x40
#define RCSTA1_RX9_clear_mask                    0xBF

#define nRC8                                     0x6
#define nRC8_address                             0xFAC
#define nRC8_position                            0x6
#define nRC8_size                                0x1
#define nRC8_value_mask                          0x40
#define nRC8_clear_mask                          0xBF

#define NOT_RC8                                  0x6
#define NOT_RC8_address                          0xFAC
#define NOT_RC8_position                         0x6
#define NOT_RC8_size                             0x1
#define NOT_RC8_value_mask                       0x40
#define NOT_RC8_clear_mask                       0xBF

#define RC9                                      0x6
#define RC9_address                              0xFAC
#define RC9_position                             0x6
#define RC9_size                                 0x1
#define RC9_value_mask                           0x40
#define RC9_clear_mask                           0xBF

#define RX91                                     0x6
#define RX91_address                             0xFAC
#define RX91_position                            0x6
#define RX91_size                                0x1
#define RX91_value_mask                          0x40
#define RX91_clear_mask                          0xBF

#define RCSTA1_SPEN                              0x7
#define RCSTA1_SPEN_address                      0xFAC
#define RCSTA1_SPEN_position                     0x7
#define RCSTA1_SPEN_size                         0x1
#define RCSTA1_SPEN_value_mask                   0x80
#define RCSTA1_SPEN_clear_mask                   0x7F

#define SPEN1                                    0x7
#define SPEN1_address                            0xFAC
#define SPEN1_position                           0x7
#define SPEN1_size                               0x1
#define SPEN1_value_mask                         0x80
#define SPEN1_clear_mask                         0x7F


/*-------------------------------------------------------------------------------------#
| TXSTA1                                                                         0xFAD |
#--------------------------------------------------------------------------------------#
| CSRC1 | TX91 | TXSTA1_TXEN | SYNC1 | TXSTA1_SENDB | TXSTA1_BRGH | TXSTA1_TRMT | TXD8 |
#--------------------------------------------------------------------------------------#
| 7     | 6    | 5           | 4     | 3            | 2           | 1           | 0    |
#-------------------------------------------------------------------------------------*/

#define TXSTA1                                   0x0
#define TXSTA1_address                           0xFAD
#define TXSTA1_position                          0x0
#define TXSTA1_size                              0x8
#define TXSTA1_value_mask                        0xFF
#define TXSTA1_clear_mask                        0x0

#define TX9D1                                    0x0
#define TX9D1_address                            0xFAD
#define TX9D1_position                           0x0
#define TX9D1_size                               0x1
#define TX9D1_value_mask                         0x1
#define TX9D1_clear_mask                         0xFE

#define TXSTA1_TX9D                              0x0
#define TXSTA1_TX9D_address                      0xFAD
#define TXSTA1_TX9D_position                     0x0
#define TXSTA1_TX9D_size                         0x1
#define TXSTA1_TX9D_value_mask                   0x1
#define TXSTA1_TX9D_clear_mask                   0xFE

#define TXD8                                     0x0
#define TXD8_address                             0xFAD
#define TXD8_position                            0x0
#define TXD8_size                                0x1
#define TXD8_value_mask                          0x1
#define TXD8_clear_mask                          0xFE

#define TRMT1                                    0x1
#define TRMT1_address                            0xFAD
#define TRMT1_position                           0x1
#define TRMT1_size                               0x1
#define TRMT1_value_mask                         0x2
#define TRMT1_clear_mask                         0xFD

#define TXSTA1_TRMT                              0x1
#define TXSTA1_TRMT_address                      0xFAD
#define TXSTA1_TRMT_position                     0x1
#define TXSTA1_TRMT_size                         0x1
#define TXSTA1_TRMT_value_mask                   0x2
#define TXSTA1_TRMT_clear_mask                   0xFD

#define BRGH1                                    0x2
#define BRGH1_address                            0xFAD
#define BRGH1_position                           0x2
#define BRGH1_size                               0x1
#define BRGH1_value_mask                         0x4
#define BRGH1_clear_mask                         0xFB

#define TXSTA1_BRGH                              0x2
#define TXSTA1_BRGH_address                      0xFAD
#define TXSTA1_BRGH_position                     0x2
#define TXSTA1_BRGH_size                         0x1
#define TXSTA1_BRGH_value_mask                   0x4
#define TXSTA1_BRGH_clear_mask                   0xFB

#define TXSTA1_SENDB                             0x3
#define TXSTA1_SENDB_address                     0xFAD
#define TXSTA1_SENDB_position                    0x3
#define TXSTA1_SENDB_size                        0x1
#define TXSTA1_SENDB_value_mask                  0x8
#define TXSTA1_SENDB_clear_mask                  0xF7

#define SENDB1                                   0x3
#define SENDB1_address                           0xFAD
#define SENDB1_position                          0x3
#define SENDB1_size                              0x1
#define SENDB1_value_mask                        0x8
#define SENDB1_clear_mask                        0xF7

#define TXSTA1_SYNC                              0x4
#define TXSTA1_SYNC_address                      0xFAD
#define TXSTA1_SYNC_position                     0x4
#define TXSTA1_SYNC_size                         0x1
#define TXSTA1_SYNC_value_mask                   0x10
#define TXSTA1_SYNC_clear_mask                   0xEF

#define SYNC1                                    0x4
#define SYNC1_address                            0xFAD
#define SYNC1_position                           0x4
#define SYNC1_size                               0x1
#define SYNC1_value_mask                         0x10
#define SYNC1_clear_mask                         0xEF

#define TXEN1                                    0x5
#define TXEN1_address                            0xFAD
#define TXEN1_position                           0x5
#define TXEN1_size                               0x1
#define TXEN1_value_mask                         0x20
#define TXEN1_clear_mask                         0xDF

#define TXSTA1_TXEN                              0x5
#define TXSTA1_TXEN_address                      0xFAD
#define TXSTA1_TXEN_position                     0x5
#define TXSTA1_TXEN_size                         0x1
#define TXSTA1_TXEN_value_mask                   0x20
#define TXSTA1_TXEN_clear_mask                   0xDF

#define TX91                                     0x6
#define TX91_address                             0xFAD
#define TX91_position                            0x6
#define TX91_size                                0x1
#define TX91_value_mask                          0x40
#define TX91_clear_mask                          0xBF

#define TX8_9                                    0x6
#define TX8_9_address                            0xFAD
#define TX8_9_position                           0x6
#define TX8_9_size                               0x1
#define TX8_9_value_mask                         0x40
#define TX8_9_clear_mask                         0xBF

#define NOT_TX8                                  0x6
#define NOT_TX8_address                          0xFAD
#define NOT_TX8_position                         0x6
#define NOT_TX8_size                             0x1
#define NOT_TX8_value_mask                       0x40
#define NOT_TX8_clear_mask                       0xBF

#define nTX8                                     0x6
#define nTX8_address                             0xFAD
#define nTX8_position                            0x6
#define nTX8_size                                0x1
#define nTX8_value_mask                          0x40
#define nTX8_clear_mask                          0xBF

#define TXSTA1_TX9                               0x6
#define TXSTA1_TX9_address                       0xFAD
#define TXSTA1_TX9_position                      0x6
#define TXSTA1_TX9_size                          0x1
#define TXSTA1_TX9_value_mask                    0x40
#define TXSTA1_TX9_clear_mask                    0xBF

#define TXSTA1_CSRC                              0x7
#define TXSTA1_CSRC_address                      0xFAD
#define TXSTA1_CSRC_position                     0x7
#define TXSTA1_CSRC_size                         0x1
#define TXSTA1_CSRC_value_mask                   0x80
#define TXSTA1_CSRC_clear_mask                   0x7F

#define CSRC1                                    0x7
#define CSRC1_address                            0xFAD
#define CSRC1_position                           0x7
#define CSRC1_size                               0x1
#define CSRC1_value_mask                         0x80
#define CSRC1_clear_mask                         0x7F


/*------------------------------#
| TXREG1                  0xFAE |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TXREG1                                   0x0
#define TXREG1_address                           0xFAE
#define TXREG1_position                          0x0
#define TXREG1_size                              0x8
#define TXREG1_value_mask                        0xFF
#define TXREG1_clear_mask                        0x0


/*------------------------------#
| RCREG1                  0xFAF |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RCREG1                                   0x0
#define RCREG1_address                           0xFAF
#define RCREG1_position                          0x0
#define RCREG1_size                              0x8
#define RCREG1_value_mask                        0xFF
#define RCREG1_clear_mask                        0x0


/*------------------------------#
| SPBRG1                  0xFB0 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SPBRG1                                   0x0
#define SPBRG1_address                           0xFB0
#define SPBRG1_position                          0x0
#define SPBRG1_size                              0x8
#define SPBRG1_value_mask                        0xFF
#define SPBRG1_clear_mask                        0x0


/*--------------------------------------------------------------------#
| CTMUICON                                                      0xFB1 |
#---------------------------------------------------------------------#
| ITRIM5 | ITRIM4 | ITRIM3 | ITRIM2 | ITRIM1 | ITRIM0 | IRNG1 | IRNG0 |
#---------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1     | 0     |
#--------------------------------------------------------------------*/

#define CTMUICON                                 0x0
#define CTMUICON_address                         0xFB1
#define CTMUICON_position                        0x0
#define CTMUICON_size                            0x8
#define CTMUICON_value_mask                      0xFF
#define CTMUICON_clear_mask                      0x0

#define IRNG                                     0x0
#define IRNG_address                             0xFB1
#define IRNG_position                            0x0
#define IRNG_size                                0x2
#define IRNG_value_mask                          0x3
#define IRNG_clear_mask                          0xFC

#define IRNG0                                    0x0
#define IRNG0_address                            0xFB1
#define IRNG0_position                           0x0
#define IRNG0_size                               0x1
#define IRNG0_value_mask                         0x1
#define IRNG0_clear_mask                         0xFE

#define IRNG1                                    0x1
#define IRNG1_address                            0xFB1
#define IRNG1_position                           0x1
#define IRNG1_size                               0x1
#define IRNG1_value_mask                         0x2
#define IRNG1_clear_mask                         0xFD

#define ITRIM0                                   0x2
#define ITRIM0_address                           0xFB1
#define ITRIM0_position                          0x2
#define ITRIM0_size                              0x1
#define ITRIM0_value_mask                        0x4
#define ITRIM0_clear_mask                        0xFB

#define ITRIM                                    0x2
#define ITRIM_address                            0xFB1
#define ITRIM_position                           0x2
#define ITRIM_size                               0x6
#define ITRIM_value_mask                         0xFC
#define ITRIM_clear_mask                         0x3

#define ITRIM1                                   0x3
#define ITRIM1_address                           0xFB1
#define ITRIM1_position                          0x3
#define ITRIM1_size                              0x1
#define ITRIM1_value_mask                        0x8
#define ITRIM1_clear_mask                        0xF7

#define ITRIM2                                   0x4
#define ITRIM2_address                           0xFB1
#define ITRIM2_position                          0x4
#define ITRIM2_size                              0x1
#define ITRIM2_value_mask                        0x10
#define ITRIM2_clear_mask                        0xEF

#define ITRIM3                                   0x5
#define ITRIM3_address                           0xFB1
#define ITRIM3_position                          0x5
#define ITRIM3_size                              0x1
#define ITRIM3_value_mask                        0x20
#define ITRIM3_clear_mask                        0xDF

#define ITRIM4                                   0x6
#define ITRIM4_address                           0xFB1
#define ITRIM4_position                          0x6
#define ITRIM4_size                              0x1
#define ITRIM4_value_mask                        0x40
#define ITRIM4_clear_mask                        0xBF

#define ITRIM5                                   0x7
#define ITRIM5_address                           0xFB1
#define ITRIM5_position                          0x7
#define ITRIM5_size                              0x1
#define ITRIM5_value_mask                        0x80
#define ITRIM5_clear_mask                        0x7F


/*------------------------------------------------------------------------------------#
| CTMUCONL                                                                      0xFB2 |
#-------------------------------------------------------------------------------------#
| EDG2POL | EDG2SEL1 | EDG2SEL0 | EDG1POL | EDG1SEL1 | EDG1SEL0 | EDG2STAT | EDG1STAT |
#-------------------------------------------------------------------------------------#
| 7       | 6        | 5        | 4       | 3        | 2        | 1        | 0        |
#------------------------------------------------------------------------------------*/

#define CTMUCONL                                 0x0
#define CTMUCONL_address                         0xFB2
#define CTMUCONL_position                        0x0
#define CTMUCONL_size                            0x8
#define CTMUCONL_value_mask                      0xFF
#define CTMUCONL_clear_mask                      0x0

#define EDG1STAT                                 0x0
#define EDG1STAT_address                         0xFB2
#define EDG1STAT_position                        0x0
#define EDG1STAT_size                            0x1
#define EDG1STAT_value_mask                      0x1
#define EDG1STAT_clear_mask                      0xFE

#define EDG2STAT                                 0x1
#define EDG2STAT_address                         0xFB2
#define EDG2STAT_position                        0x1
#define EDG2STAT_size                            0x1
#define EDG2STAT_value_mask                      0x2
#define EDG2STAT_clear_mask                      0xFD

#define EDG1SEL0                                 0x2
#define EDG1SEL0_address                         0xFB2
#define EDG1SEL0_position                        0x2
#define EDG1SEL0_size                            0x1
#define EDG1SEL0_value_mask                      0x4
#define EDG1SEL0_clear_mask                      0xFB

#define EDG1SEL1                                 0x3
#define EDG1SEL1_address                         0xFB2
#define EDG1SEL1_position                        0x3
#define EDG1SEL1_size                            0x1
#define EDG1SEL1_value_mask                      0x8
#define EDG1SEL1_clear_mask                      0xF7

#define EDG1POL                                  0x4
#define EDG1POL_address                          0xFB2
#define EDG1POL_position                         0x4
#define EDG1POL_size                             0x1
#define EDG1POL_value_mask                       0x10
#define EDG1POL_clear_mask                       0xEF

#define EDG2SEL0                                 0x5
#define EDG2SEL0_address                         0xFB2
#define EDG2SEL0_position                        0x5
#define EDG2SEL0_size                            0x1
#define EDG2SEL0_value_mask                      0x20
#define EDG2SEL0_clear_mask                      0xDF

#define EDG2SEL1                                 0x6
#define EDG2SEL1_address                         0xFB2
#define EDG2SEL1_position                        0x6
#define EDG2SEL1_size                            0x1
#define EDG2SEL1_value_mask                      0x40
#define EDG2SEL1_clear_mask                      0xBF

#define EDG2POL                                  0x7
#define EDG2POL_address                          0xFB2
#define EDG2POL_position                         0x7
#define EDG2POL_size                             0x1
#define EDG2POL_value_mask                       0x80
#define EDG2POL_clear_mask                       0x7F


/*-------------------------------------------------------------------#
| CTMUCONH                                                     0xFB3 |
#--------------------------------------------------------------------#
| CTMUEN | - | CTMUSIDL | TGEN | EDGEN | EDGSEQEN | IDISSEN | CTTRIG |
#--------------------------------------------------------------------#
| 7      | 6 | 5        | 4    | 3     | 2        | 1       | 0      |
#-------------------------------------------------------------------*/

#define CTMUCONH                                 0x0
#define CTMUCONH_address                         0xFB3
#define CTMUCONH_position                        0x0
#define CTMUCONH_size                            0x8
#define CTMUCONH_value_mask                      0xFF
#define CTMUCONH_clear_mask                      0x0

#define CTTRIG                                   0x0
#define CTTRIG_address                           0xFB3
#define CTTRIG_position                          0x0
#define CTTRIG_size                              0x1
#define CTTRIG_value_mask                        0x1
#define CTTRIG_clear_mask                        0xFE

#define IDISSEN                                  0x1
#define IDISSEN_address                          0xFB3
#define IDISSEN_position                         0x1
#define IDISSEN_size                             0x1
#define IDISSEN_value_mask                       0x2
#define IDISSEN_clear_mask                       0xFD

#define EDGSEQEN                                 0x2
#define EDGSEQEN_address                         0xFB3
#define EDGSEQEN_position                        0x2
#define EDGSEQEN_size                            0x1
#define EDGSEQEN_value_mask                      0x4
#define EDGSEQEN_clear_mask                      0xFB

#define EDGEN                                    0x3
#define EDGEN_address                            0xFB3
#define EDGEN_position                           0x3
#define EDGEN_size                               0x1
#define EDGEN_value_mask                         0x8
#define EDGEN_clear_mask                         0xF7

#define TGEN                                     0x4
#define TGEN_address                             0xFB3
#define TGEN_position                            0x4
#define TGEN_size                                0x1
#define TGEN_value_mask                          0x10
#define TGEN_clear_mask                          0xEF

#define CTMUSIDL                                 0x5
#define CTMUSIDL_address                         0xFB3
#define CTMUSIDL_position                        0x5
#define CTMUSIDL_size                            0x1
#define CTMUSIDL_value_mask                      0x20
#define CTMUSIDL_clear_mask                      0xDF

#define CTMUEN                                   0x7
#define CTMUEN_address                           0xFB3
#define CTMUEN_position                          0x7
#define CTMUEN_size                              0x1
#define CTMUEN_value_mask                        0x80
#define CTMUEN_clear_mask                        0x7F


/*----------------------------------------------------------------#
| CCP2CON                                                   0xFB4 |
#-----------------------------------------------------------------#
| P2M1 | P2M0 | DC2B1 | DC2B0 | CCP2M3 | CCP2M2 | CCP2M1 | CCP2M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define CCP2CON                                  0x0
#define CCP2CON_address                          0xFB4
#define CCP2CON_position                         0x0
#define CCP2CON_size                             0x8
#define CCP2CON_value_mask                       0xFF
#define CCP2CON_clear_mask                       0x0

#define CCP2M                                    0x0
#define CCP2M_address                            0xFB4
#define CCP2M_position                           0x0
#define CCP2M_size                               0x4
#define CCP2M_value_mask                         0xF
#define CCP2M_clear_mask                         0xF0

#define CCP2M0                                   0x0
#define CCP2M0_address                           0xFB4
#define CCP2M0_position                          0x0
#define CCP2M0_size                              0x1
#define CCP2M0_value_mask                        0x1
#define CCP2M0_clear_mask                        0xFE

#define CCP2M1                                   0x1
#define CCP2M1_address                           0xFB4
#define CCP2M1_position                          0x1
#define CCP2M1_size                              0x1
#define CCP2M1_value_mask                        0x2
#define CCP2M1_clear_mask                        0xFD

#define CCP2M2                                   0x2
#define CCP2M2_address                           0xFB4
#define CCP2M2_position                          0x2
#define CCP2M2_size                              0x1
#define CCP2M2_value_mask                        0x4
#define CCP2M2_clear_mask                        0xFB

#define CCP2M3                                   0x3
#define CCP2M3_address                           0xFB4
#define CCP2M3_position                          0x3
#define CCP2M3_size                              0x1
#define CCP2M3_value_mask                        0x8
#define CCP2M3_clear_mask                        0xF7

#define DC2B                                     0x4
#define DC2B_address                             0xFB4
#define DC2B_position                            0x4
#define DC2B_size                                0x2
#define DC2B_value_mask                          0x30
#define DC2B_clear_mask                          0xCF

#define DC2B0                                    0x4
#define DC2B0_address                            0xFB4
#define DC2B0_position                           0x4
#define DC2B0_size                               0x1
#define DC2B0_value_mask                         0x10
#define DC2B0_clear_mask                         0xEF

#define CCP2Y                                    0x4
#define CCP2Y_address                            0xFB4
#define CCP2Y_position                           0x4
#define CCP2Y_size                               0x1
#define CCP2Y_value_mask                         0x10
#define CCP2Y_clear_mask                         0xEF

#define DC2B1                                    0x5
#define DC2B1_address                            0xFB4
#define DC2B1_position                           0x5
#define DC2B1_size                               0x1
#define DC2B1_value_mask                         0x20
#define DC2B1_clear_mask                         0xDF

#define CCP2X                                    0x5
#define CCP2X_address                            0xFB4
#define CCP2X_position                           0x5
#define CCP2X_size                               0x1
#define CCP2X_value_mask                         0x20
#define CCP2X_clear_mask                         0xDF

#define P2M                                      0x6
#define P2M_address                              0xFB4
#define P2M_position                             0x6
#define P2M_size                                 0x2
#define P2M_value_mask                           0xC0
#define P2M_clear_mask                           0x3F

#define P2M0                                     0x6
#define P2M0_address                             0xFB4
#define P2M0_position                            0x6
#define P2M0_size                                0x1
#define P2M0_value_mask                          0x40
#define P2M0_clear_mask                          0xBF

#define P2M1                                     0x7
#define P2M1_address                             0xFB4
#define P2M1_position                            0x7
#define P2M1_size                                0x1
#define P2M1_value_mask                          0x80
#define P2M1_clear_mask                          0x7F


/*------------------------------#
| CCPR2L                  0xFB5 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR2L                                   0x0
#define CCPR2L_address                           0xFB5
#define CCPR2L_position                          0x0
#define CCPR2L_size                              0x8
#define CCPR2L_value_mask                        0xFF
#define CCPR2L_clear_mask                        0x0


/*------------------------------#
| CCPR2H                  0xFB6 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR2H                                   0x0
#define CCPR2H_address                           0xFB6
#define CCPR2H_position                          0x0
#define CCPR2H_size                              0x8
#define CCPR2H_value_mask                        0xFF
#define CCPR2H_clear_mask                        0x0


/*------------------------------------------------------------------------------------------------------------------------------#
| ECCP2DEL                                                                                                                0xFB7 |
#-------------------------------------------------------------------------------------------------------------------------------#
| P2RSEN | ECCP2DEL_P2DC6 | ECCP2DEL_P2DC5 | ECCP2DEL_P2DC4 | ECCP2DEL_P2DC3 | ECCP2DEL_P2DC2 | ECCP2DEL_P2DC1 | ECCP2DEL_P2DC0 |
#-------------------------------------------------------------------------------------------------------------------------------#
| 7      | 6              | 5              | 4              | 3              | 2              | 1              | 0              |
#------------------------------------------------------------------------------------------------------------------------------*/

#define ECCP2DEL                                 0x0
#define ECCP2DEL_address                         0xFB7
#define ECCP2DEL_position                        0x0
#define ECCP2DEL_size                            0x8
#define ECCP2DEL_value_mask                      0xFF
#define ECCP2DEL_clear_mask                      0x0

#define ECCP2DEL_P2DC0                           0x0
#define ECCP2DEL_P2DC0_address                   0xFB7
#define ECCP2DEL_P2DC0_position                  0x0
#define ECCP2DEL_P2DC0_size                      0x1
#define ECCP2DEL_P2DC0_value_mask                0x1
#define ECCP2DEL_P2DC0_clear_mask                0xFE

#define P2DC                                     0x0
#define P2DC_address                             0xFB7
#define P2DC_position                            0x0
#define P2DC_size                                0x7
#define P2DC_value_mask                          0x7F
#define P2DC_clear_mask                          0x80

#define ECCP2DEL_P2DC1                           0x1
#define ECCP2DEL_P2DC1_address                   0xFB7
#define ECCP2DEL_P2DC1_position                  0x1
#define ECCP2DEL_P2DC1_size                      0x1
#define ECCP2DEL_P2DC1_value_mask                0x2
#define ECCP2DEL_P2DC1_clear_mask                0xFD

#define ECCP2DEL_P2DC2                           0x2
#define ECCP2DEL_P2DC2_address                   0xFB7
#define ECCP2DEL_P2DC2_position                  0x2
#define ECCP2DEL_P2DC2_size                      0x1
#define ECCP2DEL_P2DC2_value_mask                0x4
#define ECCP2DEL_P2DC2_clear_mask                0xFB

#define ECCP2DEL_P2DC3                           0x3
#define ECCP2DEL_P2DC3_address                   0xFB7
#define ECCP2DEL_P2DC3_position                  0x3
#define ECCP2DEL_P2DC3_size                      0x1
#define ECCP2DEL_P2DC3_value_mask                0x8
#define ECCP2DEL_P2DC3_clear_mask                0xF7

#define ECCP2DEL_P2DC4                           0x4
#define ECCP2DEL_P2DC4_address                   0xFB7
#define ECCP2DEL_P2DC4_position                  0x4
#define ECCP2DEL_P2DC4_size                      0x1
#define ECCP2DEL_P2DC4_value_mask                0x10
#define ECCP2DEL_P2DC4_clear_mask                0xEF

#define ECCP2DEL_P2DC5                           0x5
#define ECCP2DEL_P2DC5_address                   0xFB7
#define ECCP2DEL_P2DC5_position                  0x5
#define ECCP2DEL_P2DC5_size                      0x1
#define ECCP2DEL_P2DC5_value_mask                0x20
#define ECCP2DEL_P2DC5_clear_mask                0xDF

#define ECCP2DEL_P2DC6                           0x6
#define ECCP2DEL_P2DC6_address                   0xFB7
#define ECCP2DEL_P2DC6_position                  0x6
#define ECCP2DEL_P2DC6_size                      0x1
#define ECCP2DEL_P2DC6_value_mask                0x40
#define ECCP2DEL_P2DC6_clear_mask                0xBF

#define P2RSEN                                   0x7
#define P2RSEN_address                           0xFB7
#define P2RSEN_position                          0x7
#define P2RSEN_size                              0x1
#define P2RSEN_value_mask                        0x80
#define P2RSEN_clear_mask                        0x7F


/*----------------------------------------------------------------------------------#
| ECCP2AS                                                                     0xFB8 |
#-----------------------------------------------------------------------------------#
| ECCP2ASE | ECCP2AS2 | ECCP2AS1 | ECCP2AS0 | PSS2AC1 | PSS2AC0 | PSS2BD1 | PSS2BD0 |
#-----------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------------------------*/

#define PSS2BD                                   0x0
#define PSS2BD_address                           0xFB8
#define PSS2BD_position                          0x0
#define PSS2BD_size                              0x2
#define PSS2BD_value_mask                        0x3
#define PSS2BD_clear_mask                        0xFC

#define PSS2BD0                                  0x0
#define PSS2BD0_address                          0xFB8
#define PSS2BD0_position                         0x0
#define PSS2BD0_size                             0x1
#define PSS2BD0_value_mask                       0x1
#define PSS2BD0_clear_mask                       0xFE

#define PSS2BD1                                  0x1
#define PSS2BD1_address                          0xFB8
#define PSS2BD1_position                         0x1
#define PSS2BD1_size                             0x1
#define PSS2BD1_value_mask                       0x2
#define PSS2BD1_clear_mask                       0xFD

#define PSS2AC0                                  0x2
#define PSS2AC0_address                          0xFB8
#define PSS2AC0_position                         0x2
#define PSS2AC0_size                             0x1
#define PSS2AC0_value_mask                       0x4
#define PSS2AC0_clear_mask                       0xFB

#define PSS2AC                                   0x2
#define PSS2AC_address                           0xFB8
#define PSS2AC_position                          0x2
#define PSS2AC_size                              0x2
#define PSS2AC_value_mask                        0xC
#define PSS2AC_clear_mask                        0xF3

#define PSS2AC1                                  0x3
#define PSS2AC1_address                          0xFB8
#define PSS2AC1_position                         0x3
#define PSS2AC1_size                             0x1
#define PSS2AC1_value_mask                       0x8
#define PSS2AC1_clear_mask                       0xF7

#define ECCP2AS0                                 0x4
#define ECCP2AS0_address                         0xFB8
#define ECCP2AS0_position                        0x4
#define ECCP2AS0_size                            0x1
#define ECCP2AS0_value_mask                      0x10
#define ECCP2AS0_clear_mask                      0xEF

#define ECCP2AS                                  0x4
#define ECCP2AS_address                          0xFB8
#define ECCP2AS_position                         0x4
#define ECCP2AS_size                             0x3
#define ECCP2AS_value_mask                       0x70
#define ECCP2AS_clear_mask                       0x8F

#define ECCP2AS1                                 0x5
#define ECCP2AS1_address                         0xFB8
#define ECCP2AS1_position                        0x5
#define ECCP2AS1_size                            0x1
#define ECCP2AS1_value_mask                      0x20
#define ECCP2AS1_clear_mask                      0xDF

#define ECCP2AS2                                 0x6
#define ECCP2AS2_address                         0xFB8
#define ECCP2AS2_position                        0x6
#define ECCP2AS2_size                            0x1
#define ECCP2AS2_value_mask                      0x40
#define ECCP2AS2_clear_mask                      0xBF

#define ECCP2ASE                                 0x7
#define ECCP2ASE_address                         0xFB8
#define ECCP2ASE_position                        0x7
#define ECCP2ASE_size                            0x1
#define ECCP2ASE_value_mask                      0x80
#define ECCP2ASE_clear_mask                      0x7F


/*---------------------------------------------------------------------------#
| PSTR2CON                                                             0xFB9 |
#----------------------------------------------------------------------------#
| CMPL12 | P2DC6CON | P2DC52 | P2DC4CON | P2DC32 | P2DC22 | STRB2 | P2DC0CON |
#----------------------------------------------------------------------------#
| 7      | 6        | 5      | 4        | 3      | 2      | 1     | 0        |
#---------------------------------------------------------------------------*/

#define PSTR2CON                                 0x0
#define PSTR2CON_address                         0xFB9
#define PSTR2CON_position                        0x0
#define PSTR2CON_size                            0x8
#define PSTR2CON_value_mask                      0xFF
#define PSTR2CON_clear_mask                      0x0

#define PSTR2CON_STRA                            0x0
#define PSTR2CON_STRA_address                    0xFB9
#define PSTR2CON_STRA_position                   0x0
#define PSTR2CON_STRA_size                       0x1
#define PSTR2CON_STRA_value_mask                 0x1
#define PSTR2CON_STRA_clear_mask                 0xFE

#define P2DC02                                   0x0
#define P2DC02_address                           0xFB9
#define P2DC02_position                          0x0
#define P2DC02_size                              0x1
#define P2DC02_value_mask                        0x1
#define P2DC02_clear_mask                        0xFE

#define STRA2                                    0x0
#define STRA2_address                            0xFB9
#define STRA2_position                           0x0
#define STRA2_size                               0x1
#define STRA2_value_mask                         0x1
#define STRA2_clear_mask                         0xFE

#define P2DC0CON                                 0x0
#define P2DC0CON_address                         0xFB9
#define P2DC0CON_position                        0x0
#define P2DC0CON_size                            0x1
#define P2DC0CON_value_mask                      0x1
#define P2DC0CON_clear_mask                      0xFE

#define PSTR2CON_P2DC0                           0x0
#define PSTR2CON_P2DC0_address                   0xFB9
#define PSTR2CON_P2DC0_position                  0x0
#define PSTR2CON_P2DC0_size                      0x1
#define PSTR2CON_P2DC0_value_mask                0x1
#define PSTR2CON_P2DC0_clear_mask                0xFE

#define STRB2                                    0x1
#define STRB2_address                            0xFB9
#define STRB2_position                           0x1
#define STRB2_size                               0x1
#define STRB2_value_mask                         0x2
#define STRB2_clear_mask                         0xFD

#define P2DC12                                   0x1
#define P2DC12_address                           0xFB9
#define P2DC12_position                          0x1
#define P2DC12_size                              0x1
#define P2DC12_value_mask                        0x2
#define P2DC12_clear_mask                        0xFD

#define PSTR2CON_STRB                            0x1
#define PSTR2CON_STRB_address                    0xFB9
#define PSTR2CON_STRB_position                   0x1
#define PSTR2CON_STRB_size                       0x1
#define PSTR2CON_STRB_value_mask                 0x2
#define PSTR2CON_STRB_clear_mask                 0xFD

#define PSTR2CON_P2DC1                           0x1
#define PSTR2CON_P2DC1_address                   0xFB9
#define PSTR2CON_P2DC1_position                  0x1
#define PSTR2CON_P2DC1_size                      0x1
#define PSTR2CON_P2DC1_value_mask                0x2
#define PSTR2CON_P2DC1_clear_mask                0xFD

#define P2DC1CON                                 0x1
#define P2DC1CON_address                         0xFB9
#define P2DC1CON_position                        0x1
#define P2DC1CON_size                            0x1
#define P2DC1CON_value_mask                      0x2
#define P2DC1CON_clear_mask                      0xFD

#define PSTR2CON_STRC                            0x2
#define PSTR2CON_STRC_address                    0xFB9
#define PSTR2CON_STRC_position                   0x2
#define PSTR2CON_STRC_size                       0x1
#define PSTR2CON_STRC_value_mask                 0x4
#define PSTR2CON_STRC_clear_mask                 0xFB

#define STRC2                                    0x2
#define STRC2_address                            0xFB9
#define STRC2_position                           0x2
#define STRC2_size                               0x1
#define STRC2_value_mask                         0x4
#define STRC2_clear_mask                         0xFB

#define PSTR2CON_P2DC2                           0x2
#define PSTR2CON_P2DC2_address                   0xFB9
#define PSTR2CON_P2DC2_position                  0x2
#define PSTR2CON_P2DC2_size                      0x1
#define PSTR2CON_P2DC2_value_mask                0x4
#define PSTR2CON_P2DC2_clear_mask                0xFB

#define P2DC22                                   0x2
#define P2DC22_address                           0xFB9
#define P2DC22_position                          0x2
#define P2DC22_size                              0x1
#define P2DC22_value_mask                        0x4
#define P2DC22_clear_mask                        0xFB

#define P2DC2CON                                 0x2
#define P2DC2CON_address                         0xFB9
#define P2DC2CON_position                        0x2
#define P2DC2CON_size                            0x1
#define P2DC2CON_value_mask                      0x4
#define P2DC2CON_clear_mask                      0xFB

#define P2DC32                                   0x3
#define P2DC32_address                           0xFB9
#define P2DC32_position                          0x3
#define P2DC32_size                              0x1
#define P2DC32_value_mask                        0x8
#define P2DC32_clear_mask                        0xF7

#define STRD2                                    0x3
#define STRD2_address                            0xFB9
#define STRD2_position                           0x3
#define STRD2_size                               0x1
#define STRD2_value_mask                         0x8
#define STRD2_clear_mask                         0xF7

#define PSTR2CON_STRD                            0x3
#define PSTR2CON_STRD_address                    0xFB9
#define PSTR2CON_STRD_position                   0x3
#define PSTR2CON_STRD_size                       0x1
#define PSTR2CON_STRD_value_mask                 0x8
#define PSTR2CON_STRD_clear_mask                 0xF7

#define P2DC3CON                                 0x3
#define P2DC3CON_address                         0xFB9
#define P2DC3CON_position                        0x3
#define P2DC3CON_size                            0x1
#define P2DC3CON_value_mask                      0x8
#define P2DC3CON_clear_mask                      0xF7

#define PSTR2CON_P2DC3                           0x3
#define PSTR2CON_P2DC3_address                   0xFB9
#define PSTR2CON_P2DC3_position                  0x3
#define PSTR2CON_P2DC3_size                      0x1
#define PSTR2CON_P2DC3_value_mask                0x8
#define PSTR2CON_P2DC3_clear_mask                0xF7

#define P2DC4CON                                 0x4
#define P2DC4CON_address                         0xFB9
#define P2DC4CON_position                        0x4
#define P2DC4CON_size                            0x1
#define P2DC4CON_value_mask                      0x10
#define P2DC4CON_clear_mask                      0xEF

#define STRSYNC2                                 0x4
#define STRSYNC2_address                         0xFB9
#define STRSYNC2_position                        0x4
#define STRSYNC2_size                            0x1
#define STRSYNC2_value_mask                      0x10
#define STRSYNC2_clear_mask                      0xEF

#define PSTR2CON_STRSYNC                         0x4
#define PSTR2CON_STRSYNC_address                 0xFB9
#define PSTR2CON_STRSYNC_position                0x4
#define PSTR2CON_STRSYNC_size                    0x1
#define PSTR2CON_STRSYNC_value_mask              0x10
#define PSTR2CON_STRSYNC_clear_mask              0xEF

#define PSTR2CON_P2DC4                           0x4
#define PSTR2CON_P2DC4_address                   0xFB9
#define PSTR2CON_P2DC4_position                  0x4
#define PSTR2CON_P2DC4_size                      0x1
#define PSTR2CON_P2DC4_value_mask                0x10
#define PSTR2CON_P2DC4_clear_mask                0xEF

#define P2DC42                                   0x4
#define P2DC42_address                           0xFB9
#define P2DC42_position                          0x4
#define P2DC42_size                              0x1
#define P2DC42_value_mask                        0x10
#define P2DC42_clear_mask                        0xEF

#define P2DC52                                   0x5
#define P2DC52_address                           0xFB9
#define P2DC52_position                          0x5
#define P2DC52_size                              0x1
#define P2DC52_value_mask                        0x20
#define P2DC52_clear_mask                        0xDF

#define P2DC5CON                                 0x5
#define P2DC5CON_address                         0xFB9
#define P2DC5CON_position                        0x5
#define P2DC5CON_size                            0x1
#define P2DC5CON_value_mask                      0x20
#define P2DC5CON_clear_mask                      0xDF

#define PSTR2CON_P2DC5                           0x5
#define PSTR2CON_P2DC5_address                   0xFB9
#define PSTR2CON_P2DC5_position                  0x5
#define PSTR2CON_P2DC5_size                      0x1
#define PSTR2CON_P2DC5_value_mask                0x20
#define PSTR2CON_P2DC5_clear_mask                0xDF

#define P2DC6CON                                 0x6
#define P2DC6CON_address                         0xFB9
#define P2DC6CON_position                        0x6
#define P2DC6CON_size                            0x1
#define P2DC6CON_value_mask                      0x40
#define P2DC6CON_clear_mask                      0xBF

#define CMPL02                                   0x6
#define CMPL02_address                           0xFB9
#define CMPL02_position                          0x6
#define CMPL02_size                              0x1
#define CMPL02_value_mask                        0x40
#define CMPL02_clear_mask                        0xBF

#define PSTR2CON_P2DC6                           0x6
#define PSTR2CON_P2DC6_address                   0xFB9
#define PSTR2CON_P2DC6_position                  0x6
#define PSTR2CON_P2DC6_size                      0x1
#define PSTR2CON_P2DC6_value_mask                0x40
#define PSTR2CON_P2DC6_clear_mask                0xBF

#define P2DC62                                   0x6
#define P2DC62_address                           0xFB9
#define P2DC62_position                          0x6
#define P2DC62_size                              0x1
#define P2DC62_value_mask                        0x40
#define P2DC62_clear_mask                        0xBF

#define PSTR2CON_CMPL0                           0x6
#define PSTR2CON_CMPL0_address                   0xFB9
#define PSTR2CON_CMPL0_position                  0x6
#define PSTR2CON_CMPL0_size                      0x1
#define PSTR2CON_CMPL0_value_mask                0x40
#define PSTR2CON_CMPL0_clear_mask                0xBF

#define CMPL12                                   0x7
#define CMPL12_address                           0xFB9
#define CMPL12_position                          0x7
#define CMPL12_size                              0x1
#define CMPL12_value_mask                        0x80
#define CMPL12_clear_mask                        0x7F

#define PSTR2CON_CMPL1                           0x7
#define PSTR2CON_CMPL1_address                   0xFB9
#define PSTR2CON_CMPL1_position                  0x7
#define PSTR2CON_CMPL1_size                      0x1
#define PSTR2CON_CMPL1_value_mask                0x80
#define PSTR2CON_CMPL1_clear_mask                0x7F


/*----------------------------------------------------------------#
| CCP1CON                                                   0xFBA |
#-----------------------------------------------------------------#
| P1M1 | P1M0 | CCP1X | CCP1Y | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define CCP1CON                                  0x0
#define CCP1CON_address                          0xFBA
#define CCP1CON_position                         0x0
#define CCP1CON_size                             0x8
#define CCP1CON_value_mask                       0xFF
#define CCP1CON_clear_mask                       0x0

#define CCP1M0                                   0x0
#define CCP1M0_address                           0xFBA
#define CCP1M0_position                          0x0
#define CCP1M0_size                              0x1
#define CCP1M0_value_mask                        0x1
#define CCP1M0_clear_mask                        0xFE

#define CCP1M                                    0x0
#define CCP1M_address                            0xFBA
#define CCP1M_position                           0x0
#define CCP1M_size                               0x4
#define CCP1M_value_mask                         0xF
#define CCP1M_clear_mask                         0xF0

#define CCP1M1                                   0x1
#define CCP1M1_address                           0xFBA
#define CCP1M1_position                          0x1
#define CCP1M1_size                              0x1
#define CCP1M1_value_mask                        0x2
#define CCP1M1_clear_mask                        0xFD

#define CCP1M2                                   0x2
#define CCP1M2_address                           0xFBA
#define CCP1M2_position                          0x2
#define CCP1M2_size                              0x1
#define CCP1M2_value_mask                        0x4
#define CCP1M2_clear_mask                        0xFB

#define CCP1M3                                   0x3
#define CCP1M3_address                           0xFBA
#define CCP1M3_position                          0x3
#define CCP1M3_size                              0x1
#define CCP1M3_value_mask                        0x8
#define CCP1M3_clear_mask                        0xF7

#define CCP1Y                                    0x4
#define CCP1Y_address                            0xFBA
#define CCP1Y_position                           0x4
#define CCP1Y_size                               0x1
#define CCP1Y_value_mask                         0x10
#define CCP1Y_clear_mask                         0xEF

#define DC1B                                     0x4
#define DC1B_address                             0xFBA
#define DC1B_position                            0x4
#define DC1B_size                                0x2
#define DC1B_value_mask                          0x30
#define DC1B_clear_mask                          0xCF

#define DC1B0                                    0x4
#define DC1B0_address                            0xFBA
#define DC1B0_position                           0x4
#define DC1B0_size                               0x1
#define DC1B0_value_mask                         0x10
#define DC1B0_clear_mask                         0xEF

#define CCP1X                                    0x5
#define CCP1X_address                            0xFBA
#define CCP1X_position                           0x5
#define CCP1X_size                               0x1
#define CCP1X_value_mask                         0x20
#define CCP1X_clear_mask                         0xDF

#define DC1B1                                    0x5
#define DC1B1_address                            0xFBA
#define DC1B1_position                           0x5
#define DC1B1_size                               0x1
#define DC1B1_value_mask                         0x20
#define DC1B1_clear_mask                         0xDF

#define P1M                                      0x6
#define P1M_address                              0xFBA
#define P1M_position                             0x6
#define P1M_size                                 0x2
#define P1M_value_mask                           0xC0
#define P1M_clear_mask                           0x3F

#define P1M0                                     0x6
#define P1M0_address                             0xFBA
#define P1M0_position                            0x6
#define P1M0_size                                0x1
#define P1M0_value_mask                          0x40
#define P1M0_clear_mask                          0xBF

#define P1M1                                     0x7
#define P1M1_address                             0xFBA
#define P1M1_position                            0x7
#define P1M1_size                                0x1
#define P1M1_value_mask                          0x80
#define P1M1_clear_mask                          0x7F


/*------------------------------#
| CCPR1L                  0xFBB |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR1L                                   0x0
#define CCPR1L_address                           0xFBB
#define CCPR1L_position                          0x0
#define CCPR1L_size                              0x8
#define CCPR1L_value_mask                        0xFF
#define CCPR1L_clear_mask                        0x0


/*------------------------------#
| CCPR1H                  0xFBC |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR1H                                   0x0
#define CCPR1H_address                           0xFBC
#define CCPR1H_position                          0x0
#define CCPR1H_size                              0x8
#define CCPR1H_value_mask                        0xFF
#define CCPR1H_clear_mask                        0x0


/*---------------------------------------------------------------#
| ECCP1DEL                                                 0xFBD |
#----------------------------------------------------------------#
| P1RSEN | P1DC6 | P1DC5 | P1DC4 | P1DC3 | P1DC2 | P1DC1 | P1DC0 |
#----------------------------------------------------------------#
| 7      | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#---------------------------------------------------------------*/

#define ECCP1DEL                                 0x0
#define ECCP1DEL_address                         0xFBD
#define ECCP1DEL_position                        0x0
#define ECCP1DEL_size                            0x8
#define ECCP1DEL_value_mask                      0xFF
#define ECCP1DEL_clear_mask                      0x0

#define P1DC                                     0x0
#define P1DC_address                             0xFBD
#define P1DC_position                            0x0
#define P1DC_size                                0x7
#define P1DC_value_mask                          0x7F
#define P1DC_clear_mask                          0x80

#define P1DC0                                    0x0
#define P1DC0_address                            0xFBD
#define P1DC0_position                           0x0
#define P1DC0_size                               0x1
#define P1DC0_value_mask                         0x1
#define P1DC0_clear_mask                         0xFE

#define P1DC1                                    0x1
#define P1DC1_address                            0xFBD
#define P1DC1_position                           0x1
#define P1DC1_size                               0x1
#define P1DC1_value_mask                         0x2
#define P1DC1_clear_mask                         0xFD

#define P1DC2                                    0x2
#define P1DC2_address                            0xFBD
#define P1DC2_position                           0x2
#define P1DC2_size                               0x1
#define P1DC2_value_mask                         0x4
#define P1DC2_clear_mask                         0xFB

#define P1DC3                                    0x3
#define P1DC3_address                            0xFBD
#define P1DC3_position                           0x3
#define P1DC3_size                               0x1
#define P1DC3_value_mask                         0x8
#define P1DC3_clear_mask                         0xF7

#define P1DC4                                    0x4
#define P1DC4_address                            0xFBD
#define P1DC4_position                           0x4
#define P1DC4_size                               0x1
#define P1DC4_value_mask                         0x10
#define P1DC4_clear_mask                         0xEF

#define P1DC5                                    0x5
#define P1DC5_address                            0xFBD
#define P1DC5_position                           0x5
#define P1DC5_size                               0x1
#define P1DC5_value_mask                         0x20
#define P1DC5_clear_mask                         0xDF

#define P1DC6                                    0x6
#define P1DC6_address                            0xFBD
#define P1DC6_position                           0x6
#define P1DC6_size                               0x1
#define P1DC6_value_mask                         0x40
#define P1DC6_clear_mask                         0xBF

#define P1RSEN                                   0x7
#define P1RSEN_address                           0xFBD
#define P1RSEN_position                          0x7
#define P1RSEN_size                              0x1
#define P1RSEN_value_mask                        0x80
#define P1RSEN_clear_mask                        0x7F


/*----------------------------------------------------------------------------------#
| ECCP1AS                                                                     0xFBE |
#-----------------------------------------------------------------------------------#
| ECCP1ASE | ECCP1AS2 | ECCP1AS1 | ECCP1AS0 | PSS1AC1 | PSS1AC0 | PSS1BD1 | PSS1BD0 |
#-----------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------------------------*/

#define PSS1BD0                                  0x0
#define PSS1BD0_address                          0xFBE
#define PSS1BD0_position                         0x0
#define PSS1BD0_size                             0x1
#define PSS1BD0_value_mask                       0x1
#define PSS1BD0_clear_mask                       0xFE

#define PSS1BD                                   0x0
#define PSS1BD_address                           0xFBE
#define PSS1BD_position                          0x0
#define PSS1BD_size                              0x2
#define PSS1BD_value_mask                        0x3
#define PSS1BD_clear_mask                        0xFC

#define PSS1BD1                                  0x1
#define PSS1BD1_address                          0xFBE
#define PSS1BD1_position                         0x1
#define PSS1BD1_size                             0x1
#define PSS1BD1_value_mask                       0x2
#define PSS1BD1_clear_mask                       0xFD

#define PSS1AC                                   0x2
#define PSS1AC_address                           0xFBE
#define PSS1AC_position                          0x2
#define PSS1AC_size                              0x2
#define PSS1AC_value_mask                        0xC
#define PSS1AC_clear_mask                        0xF3

#define PSS1AC0                                  0x2
#define PSS1AC0_address                          0xFBE
#define PSS1AC0_position                         0x2
#define PSS1AC0_size                             0x1
#define PSS1AC0_value_mask                       0x4
#define PSS1AC0_clear_mask                       0xFB

#define PSS1AC1                                  0x3
#define PSS1AC1_address                          0xFBE
#define PSS1AC1_position                         0x3
#define PSS1AC1_size                             0x1
#define PSS1AC1_value_mask                       0x8
#define PSS1AC1_clear_mask                       0xF7

#define ECCP1AS                                  0x4
#define ECCP1AS_address                          0xFBE
#define ECCP1AS_position                         0x4
#define ECCP1AS_size                             0x3
#define ECCP1AS_value_mask                       0x70
#define ECCP1AS_clear_mask                       0x8F

#define ECCP1AS0                                 0x4
#define ECCP1AS0_address                         0xFBE
#define ECCP1AS0_position                        0x4
#define ECCP1AS0_size                            0x1
#define ECCP1AS0_value_mask                      0x10
#define ECCP1AS0_clear_mask                      0xEF

#define ECCP1AS1                                 0x5
#define ECCP1AS1_address                         0xFBE
#define ECCP1AS1_position                        0x5
#define ECCP1AS1_size                            0x1
#define ECCP1AS1_value_mask                      0x20
#define ECCP1AS1_clear_mask                      0xDF

#define ECCP1AS2                                 0x6
#define ECCP1AS2_address                         0xFBE
#define ECCP1AS2_position                        0x6
#define ECCP1AS2_size                            0x1
#define ECCP1AS2_value_mask                      0x40
#define ECCP1AS2_clear_mask                      0xBF

#define ECCP1ASE                                 0x7
#define ECCP1ASE_address                         0xFBE
#define ECCP1ASE_position                        0x7
#define ECCP1ASE_size                            0x1
#define ECCP1ASE_value_mask                      0x80
#define ECCP1ASE_clear_mask                      0x7F


/*-----------------------------------------------------------------------------------------------------------------------#
| PSTR1CON                                                                                                         0xFBF |
#------------------------------------------------------------------------------------------------------------------------#
| PSTR1CON_CMPL1 | PSTR1CON_CMPL0 | - | PSTR1CON_STRSYNC | PSTR1CON_STRD | PSTR1CON_STRC | PSTR1CON_STRB | PSTR1CON_STRA |
#------------------------------------------------------------------------------------------------------------------------#
| 7              | 6              | 5 | 4                | 3             | 2             | 1             | 0             |
#-----------------------------------------------------------------------------------------------------------------------*/

#define PSTR1CON                                 0x0
#define PSTR1CON_address                         0xFBF
#define PSTR1CON_position                        0x0
#define PSTR1CON_size                            0x8
#define PSTR1CON_value_mask                      0xFF
#define PSTR1CON_clear_mask                      0x0

#define PSTR1CON_STRA                            0x0
#define PSTR1CON_STRA_address                    0xFBF
#define PSTR1CON_STRA_position                   0x0
#define PSTR1CON_STRA_size                       0x1
#define PSTR1CON_STRA_value_mask                 0x1
#define PSTR1CON_STRA_clear_mask                 0xFE

#define PSTR1CON_STRB                            0x1
#define PSTR1CON_STRB_address                    0xFBF
#define PSTR1CON_STRB_position                   0x1
#define PSTR1CON_STRB_size                       0x1
#define PSTR1CON_STRB_value_mask                 0x2
#define PSTR1CON_STRB_clear_mask                 0xFD

#define PSTR1CON_STRC                            0x2
#define PSTR1CON_STRC_address                    0xFBF
#define PSTR1CON_STRC_position                   0x2
#define PSTR1CON_STRC_size                       0x1
#define PSTR1CON_STRC_value_mask                 0x4
#define PSTR1CON_STRC_clear_mask                 0xFB

#define PSTR1CON_STRD                            0x3
#define PSTR1CON_STRD_address                    0xFBF
#define PSTR1CON_STRD_position                   0x3
#define PSTR1CON_STRD_size                       0x1
#define PSTR1CON_STRD_value_mask                 0x8
#define PSTR1CON_STRD_clear_mask                 0xF7

#define PSTR1CON_STRSYNC                         0x4
#define PSTR1CON_STRSYNC_address                 0xFBF
#define PSTR1CON_STRSYNC_position                0x4
#define PSTR1CON_STRSYNC_size                    0x1
#define PSTR1CON_STRSYNC_value_mask              0x10
#define PSTR1CON_STRSYNC_clear_mask              0xEF

#define PSTR1CON_CMPL0                           0x6
#define PSTR1CON_CMPL0_address                   0xFBF
#define PSTR1CON_CMPL0_position                  0x6
#define PSTR1CON_CMPL0_size                      0x1
#define PSTR1CON_CMPL0_value_mask                0x40
#define PSTR1CON_CMPL0_clear_mask                0xBF

#define PSTR1CON_CMPL1                           0x7
#define PSTR1CON_CMPL1_address                   0xFBF
#define PSTR1CON_CMPL1_position                  0x7
#define PSTR1CON_CMPL1_size                      0x1
#define PSTR1CON_CMPL1_value_mask                0x80
#define PSTR1CON_CMPL1_clear_mask                0x7F


/*------------------------------------------------------------------#
| WDTCON                                                      0xFC0 |
#-------------------------------------------------------------------#
| REGSLP | LVDSTAT | ULPLVL | VBGOE | DS | ULPEN | ULPSINK | SWDTEN |
#-------------------------------------------------------------------#
| 7      | 6       | 5      | 4     | 3  | 2     | 1       | 0      |
#------------------------------------------------------------------*/

#define WDTCON                                   0x0
#define WDTCON_address                           0xFC0
#define WDTCON_position                          0x0
#define WDTCON_size                              0x8
#define WDTCON_value_mask                        0xFF
#define WDTCON_clear_mask                        0x0

#define SWDTEN                                   0x0
#define SWDTEN_address                           0xFC0
#define SWDTEN_position                          0x0
#define SWDTEN_size                              0x1
#define SWDTEN_value_mask                        0x1
#define SWDTEN_clear_mask                        0xFE

#define SWDTE                                    0x0
#define SWDTE_address                            0xFC0
#define SWDTE_position                           0x0
#define SWDTE_size                               0x1
#define SWDTE_value_mask                         0x1
#define SWDTE_clear_mask                         0xFE

#define ULPSINK                                  0x1
#define ULPSINK_address                          0xFC0
#define ULPSINK_position                         0x1
#define ULPSINK_size                             0x1
#define ULPSINK_value_mask                       0x2
#define ULPSINK_clear_mask                       0xFD

#define ULPEN                                    0x2
#define ULPEN_address                            0xFC0
#define ULPEN_position                           0x2
#define ULPEN_size                               0x1
#define ULPEN_value_mask                         0x4
#define ULPEN_clear_mask                         0xFB

#define DS                                       0x3
#define DS_address                               0xFC0
#define DS_position                              0x3
#define DS_size                                  0x1
#define DS_value_mask                            0x8
#define DS_clear_mask                            0xF7

#define VBGOE                                    0x4
#define VBGOE_address                            0xFC0
#define VBGOE_position                           0x4
#define VBGOE_size                               0x1
#define VBGOE_value_mask                         0x10
#define VBGOE_clear_mask                         0xEF

#define ULPLVL                                   0x5
#define ULPLVL_address                           0xFC0
#define ULPLVL_position                          0x5
#define ULPLVL_size                              0x1
#define ULPLVL_value_mask                        0x20
#define ULPLVL_clear_mask                        0xDF

#define LVDSTAT                                  0x6
#define LVDSTAT_address                          0xFC0
#define LVDSTAT_position                         0x6
#define LVDSTAT_size                             0x1
#define LVDSTAT_value_mask                       0x40
#define LVDSTAT_clear_mask                       0xBF

#define REGSLP                                   0x7
#define REGSLP_address                           0xFC0
#define REGSLP_position                          0x7
#define REGSLP_size                              0x1
#define REGSLP_value_mask                        0x80
#define REGSLP_clear_mask                        0x7F


/*--------------------------------------------------------------------#
| ADCON1                                                        0xFC1 |
#---------------------------------------------------------------------#
| ADFM | ADCON1_ADCAL | ACQT2 | ACQT1 | ACQT0 | ADCS2 | ADCS1 | ADCS0 |
#---------------------------------------------------------------------#
| 7    | 6            | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------------*/

#define ADCON1                                   0x0
#define ADCON1_address                           0xFC1
#define ADCON1_position                          0x0
#define ADCON1_size                              0x8
#define ADCON1_value_mask                        0xFF
#define ADCON1_clear_mask                        0x0

#define ADCS0                                    0x0
#define ADCS0_address                            0xFC1
#define ADCS0_position                           0x0
#define ADCS0_size                               0x1
#define ADCS0_value_mask                         0x1
#define ADCS0_clear_mask                         0xFE

#define ADCS                                     0x0
#define ADCS_address                             0xFC1
#define ADCS_position                            0x0
#define ADCS_size                                0x3
#define ADCS_value_mask                          0x7
#define ADCS_clear_mask                          0xF8

#define ADCS1                                    0x1
#define ADCS1_address                            0xFC1
#define ADCS1_position                           0x1
#define ADCS1_size                               0x1
#define ADCS1_value_mask                         0x2
#define ADCS1_clear_mask                         0xFD

#define ADCS2                                    0x2
#define ADCS2_address                            0xFC1
#define ADCS2_position                           0x2
#define ADCS2_size                               0x1
#define ADCS2_value_mask                         0x4
#define ADCS2_clear_mask                         0xFB

#define ACQT0                                    0x3
#define ACQT0_address                            0xFC1
#define ACQT0_position                           0x3
#define ACQT0_size                               0x1
#define ACQT0_value_mask                         0x8
#define ACQT0_clear_mask                         0xF7

#define ACQT                                     0x3
#define ACQT_address                             0xFC1
#define ACQT_position                            0x3
#define ACQT_size                                0x3
#define ACQT_value_mask                          0x38
#define ACQT_clear_mask                          0xC7

#define CHSN3                                    0x3
#define CHSN3_address                            0xFC1
#define CHSN3_position                           0x3
#define CHSN3_size                               0x1
#define CHSN3_value_mask                         0x8
#define CHSN3_clear_mask                         0xF7

#define ACQT1                                    0x4
#define ACQT1_address                            0xFC1
#define ACQT1_position                           0x4
#define ACQT1_size                               0x1
#define ACQT1_value_mask                         0x10
#define ACQT1_clear_mask                         0xEF

#define VCFG01                                   0x4
#define VCFG01_address                           0xFC1
#define VCFG01_position                          0x4
#define VCFG01_size                              0x1
#define VCFG01_value_mask                        0x10
#define VCFG01_clear_mask                        0xEF

#define ACQT2                                    0x5
#define ACQT2_address                            0xFC1
#define ACQT2_position                           0x5
#define ACQT2_size                               0x1
#define ACQT2_value_mask                         0x20
#define ACQT2_clear_mask                         0xDF

#define VCFG11                                   0x5
#define VCFG11_address                           0xFC1
#define VCFG11_position                          0x5
#define VCFG11_size                              0x1
#define VCFG11_value_mask                        0x20
#define VCFG11_clear_mask                        0xDF

#define ADCON1_ADCAL                             0x6
#define ADCON1_ADCAL_address                     0xFC1
#define ADCON1_ADCAL_position                    0x6
#define ADCON1_ADCAL_size                        0x1
#define ADCON1_ADCAL_value_mask                  0x40
#define ADCON1_ADCAL_clear_mask                  0xBF

#define ADFM                                     0x7
#define ADFM_address                             0xFC1
#define ADFM_position                            0x7
#define ADFM_size                                0x1
#define ADFM_value_mask                          0x80
#define ADFM_clear_mask                          0x7F


/*---------------------------------------------------------#
| ADCON0                                             0xFC2 |
#----------------------------------------------------------#
| VCFG1 | VCFG0 | CHS3 | CHS2 | CHS1 | CHS0 | nDONE | ADON |
#----------------------------------------------------------#
| 7     | 6     | 5    | 4    | 3    | 2    | 1     | 0    |
#---------------------------------------------------------*/

#define ADCON0                                   0x0
#define ADCON0_address                           0xFC2
#define ADCON0_position                          0x0
#define ADCON0_size                              0x8
#define ADCON0_value_mask                        0xFF
#define ADCON0_clear_mask                        0x0

#define ADON                                     0x0
#define ADON_address                             0xFC2
#define ADON_position                            0x0
#define ADON_size                                0x1
#define ADON_value_mask                          0x1
#define ADON_clear_mask                          0xFE

#define nDONE                                    0x1
#define nDONE_address                            0xFC2
#define nDONE_position                           0x1
#define nDONE_size                               0x1
#define nDONE_value_mask                         0x2
#define nDONE_clear_mask                         0xFD

#define GO_nDONE                                 0x1
#define GO_nDONE_address                         0xFC2
#define GO_nDONE_position                        0x1
#define GO_nDONE_size                            0x1
#define GO_nDONE_value_mask                      0x2
#define GO_nDONE_clear_mask                      0xFD

#define NOT_DONE                                 0x1
#define NOT_DONE_address                         0xFC2
#define NOT_DONE_position                        0x1
#define NOT_DONE_size                            0x1
#define NOT_DONE_value_mask                      0x2
#define NOT_DONE_clear_mask                      0xFD

#define GODONE                                   0x1
#define GODONE_address                           0xFC2
#define GODONE_position                          0x1
#define GODONE_size                              0x1
#define GODONE_value_mask                        0x2
#define GODONE_clear_mask                        0xFD

#define GO_DONE                                  0x1
#define GO_DONE_address                          0xFC2
#define GO_DONE_position                         0x1
#define GO_DONE_size                             0x1
#define GO_DONE_value_mask                       0x2
#define GO_DONE_clear_mask                       0xFD

#define DONE                                     0x1
#define DONE_address                             0xFC2
#define DONE_position                            0x1
#define DONE_size                                0x1
#define DONE_value_mask                          0x2
#define DONE_clear_mask                          0xFD

#define GO                                       0x1
#define GO_address                               0xFC2
#define GO_position                              0x1
#define GO_size                                  0x1
#define GO_value_mask                            0x2
#define GO_clear_mask                            0xFD

#define GO_NOT_DONE                              0x1
#define GO_NOT_DONE_address                      0xFC2
#define GO_NOT_DONE_position                     0x1
#define GO_NOT_DONE_size                         0x1
#define GO_NOT_DONE_value_mask                   0x2
#define GO_NOT_DONE_clear_mask                   0xFD

#define CHS                                      0x2
#define CHS_address                              0xFC2
#define CHS_position                             0x2
#define CHS_size                                 0x4
#define CHS_value_mask                           0x3C
#define CHS_clear_mask                           0xC3

#define CHS0                                     0x2
#define CHS0_address                             0xFC2
#define CHS0_position                            0x2
#define CHS0_size                                0x1
#define CHS0_value_mask                          0x4
#define CHS0_clear_mask                          0xFB

#define CHS1                                     0x3
#define CHS1_address                             0xFC2
#define CHS1_position                            0x3
#define CHS1_size                                0x1
#define CHS1_value_mask                          0x8
#define CHS1_clear_mask                          0xF7

#define CHS2                                     0x4
#define CHS2_address                             0xFC2
#define CHS2_position                            0x4
#define CHS2_size                                0x1
#define CHS2_value_mask                          0x10
#define CHS2_clear_mask                          0xEF

#define CHS3                                     0x5
#define CHS3_address                             0xFC2
#define CHS3_position                            0x5
#define CHS3_size                                0x1
#define CHS3_value_mask                          0x20
#define CHS3_clear_mask                          0xDF

#define VCFG                                     0x6
#define VCFG_address                             0xFC2
#define VCFG_position                            0x6
#define VCFG_size                                0x2
#define VCFG_value_mask                          0xC0
#define VCFG_clear_mask                          0x3F

#define VCFG0                                    0x6
#define VCFG0_address                            0xFC2
#define VCFG0_position                           0x6
#define VCFG0_size                               0x1
#define VCFG0_value_mask                         0x40
#define VCFG0_clear_mask                         0xBF

#define VCFG1                                    0x7
#define VCFG1_address                            0xFC2
#define VCFG1_position                           0x7
#define VCFG1_size                               0x1
#define VCFG1_value_mask                         0x80
#define VCFG1_clear_mask                         0x7F

#define ADCON0_ADCAL                             0x7
#define ADCON0_ADCAL_address                     0xFC2
#define ADCON0_ADCAL_position                    0x7
#define ADCON0_ADCAL_size                        0x1
#define ADCON0_ADCAL_value_mask                  0x80
#define ADCON0_ADCAL_clear_mask                  0x7F


/*------------------------------#
| ADRESL                  0xFC3 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ADRESL                                   0x0
#define ADRESL_address                           0xFC3
#define ADRESL_position                          0x0
#define ADRESL_size                              0x8
#define ADRESL_value_mask                        0xFF
#define ADRESL_clear_mask                        0x0


/*------------------------------#
| ADRESH                  0xFC4 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ADRESH                                   0x0
#define ADRESH_address                           0xFC4
#define ADRESH_position                          0x0
#define ADRESH_size                              0x8
#define ADRESH_value_mask                        0xFF
#define ADRESH_clear_mask                        0x0


/*---------------------------------------------------------------------------------------------#
| SSP1CON2                                                                               0xFC5 |
#----------------------------------------------------------------------------------------------#
| GCEN1 | SSP1CON2_ACKSTAT | ACKDT1 | SSP1CON2_ACKEN | ADMSK31 | SSP1CON2_PEN | ADMSK11 | SEN1 |
#----------------------------------------------------------------------------------------------#
| 7     | 6                | 5      | 4              | 3       | 2            | 1       | 0    |
#---------------------------------------------------------------------------------------------*/

#define SSP1CON2                                 0x0
#define SSP1CON2_address                         0xFC5
#define SSP1CON2_position                        0x0
#define SSP1CON2_size                            0x8
#define SSP1CON2_value_mask                      0xFF
#define SSP1CON2_clear_mask                      0x0

#define SEN1                                     0x0
#define SEN1_address                             0xFC5
#define SEN1_position                            0x0
#define SEN1_size                                0x1
#define SEN1_value_mask                          0x1
#define SEN1_clear_mask                          0xFE

#define SSP1CON2_SEN                             0x0
#define SSP1CON2_SEN_address                     0xFC5
#define SSP1CON2_SEN_position                    0x0
#define SSP1CON2_SEN_size                        0x1
#define SSP1CON2_SEN_value_mask                  0x1
#define SSP1CON2_SEN_clear_mask                  0xFE

#define ADMSK11                                  0x1
#define ADMSK11_address                          0xFC5
#define ADMSK11_position                         0x1
#define ADMSK11_size                             0x1
#define ADMSK11_value_mask                       0x2
#define ADMSK11_clear_mask                       0xFD

#define SSP1CON2_RSEN                            0x1
#define SSP1CON2_RSEN_address                    0xFC5
#define SSP1CON2_RSEN_position                   0x1
#define SSP1CON2_RSEN_size                       0x1
#define SSP1CON2_RSEN_value_mask                 0x2
#define SSP1CON2_RSEN_clear_mask                 0xFD

#define RSEN1                                    0x1
#define RSEN1_address                            0xFC5
#define RSEN1_position                           0x1
#define RSEN1_size                               0x1
#define RSEN1_value_mask                         0x2
#define RSEN1_clear_mask                         0xFD

#define SSP1CON2_ADMSK1                          0x1
#define SSP1CON2_ADMSK1_address                  0xFC5
#define SSP1CON2_ADMSK1_position                 0x1
#define SSP1CON2_ADMSK1_size                     0x1
#define SSP1CON2_ADMSK1_value_mask               0x2
#define SSP1CON2_ADMSK1_clear_mask               0xFD

#define SSP1CON2_PEN                             0x2
#define SSP1CON2_PEN_address                     0xFC5
#define SSP1CON2_PEN_position                    0x2
#define SSP1CON2_PEN_size                        0x1
#define SSP1CON2_PEN_value_mask                  0x4
#define SSP1CON2_PEN_clear_mask                  0xFB

#define ADMSK21                                  0x2
#define ADMSK21_address                          0xFC5
#define ADMSK21_position                         0x2
#define ADMSK21_size                             0x1
#define ADMSK21_value_mask                       0x4
#define ADMSK21_clear_mask                       0xFB

#define PEN1                                     0x2
#define PEN1_address                             0xFC5
#define PEN1_position                            0x2
#define PEN1_size                                0x1
#define PEN1_value_mask                          0x4
#define PEN1_clear_mask                          0xFB

#define SSP1CON2_ADMSK2                          0x2
#define SSP1CON2_ADMSK2_address                  0xFC5
#define SSP1CON2_ADMSK2_position                 0x2
#define SSP1CON2_ADMSK2_size                     0x1
#define SSP1CON2_ADMSK2_value_mask               0x4
#define SSP1CON2_ADMSK2_clear_mask               0xFB

#define ADMSK31                                  0x3
#define ADMSK31_address                          0xFC5
#define ADMSK31_position                         0x3
#define ADMSK31_size                             0x1
#define ADMSK31_value_mask                       0x8
#define ADMSK31_clear_mask                       0xF7

#define RCEN1                                    0x3
#define RCEN1_address                            0xFC5
#define RCEN1_position                           0x3
#define RCEN1_size                               0x1
#define RCEN1_value_mask                         0x8
#define RCEN1_clear_mask                         0xF7

#define SSP1CON2_RCEN                            0x3
#define SSP1CON2_RCEN_address                    0xFC5
#define SSP1CON2_RCEN_position                   0x3
#define SSP1CON2_RCEN_size                       0x1
#define SSP1CON2_RCEN_value_mask                 0x8
#define SSP1CON2_RCEN_clear_mask                 0xF7

#define SSP1CON2_ADMSK3                          0x3
#define SSP1CON2_ADMSK3_address                  0xFC5
#define SSP1CON2_ADMSK3_position                 0x3
#define SSP1CON2_ADMSK3_size                     0x1
#define SSP1CON2_ADMSK3_value_mask               0x8
#define SSP1CON2_ADMSK3_clear_mask               0xF7

#define SSP1CON2_ACKEN                           0x4
#define SSP1CON2_ACKEN_address                   0xFC5
#define SSP1CON2_ACKEN_position                  0x4
#define SSP1CON2_ACKEN_size                      0x1
#define SSP1CON2_ACKEN_value_mask                0x10
#define SSP1CON2_ACKEN_clear_mask                0xEF

#define ACKEN1                                   0x4
#define ACKEN1_address                           0xFC5
#define ACKEN1_position                          0x4
#define ACKEN1_size                              0x1
#define ACKEN1_value_mask                        0x10
#define ACKEN1_clear_mask                        0xEF

#define ADMSK41                                  0x4
#define ADMSK41_address                          0xFC5
#define ADMSK41_position                         0x4
#define ADMSK41_size                             0x1
#define ADMSK41_value_mask                       0x10
#define ADMSK41_clear_mask                       0xEF

#define SSP1CON2_ADMSK4                          0x4
#define SSP1CON2_ADMSK4_address                  0xFC5
#define SSP1CON2_ADMSK4_position                 0x4
#define SSP1CON2_ADMSK4_size                     0x1
#define SSP1CON2_ADMSK4_value_mask               0x10
#define SSP1CON2_ADMSK4_clear_mask               0xEF

#define ACKDT1                                   0x5
#define ACKDT1_address                           0xFC5
#define ACKDT1_position                          0x5
#define ACKDT1_size                              0x1
#define ACKDT1_value_mask                        0x20
#define ACKDT1_clear_mask                        0xDF

#define ADMSK51                                  0x5
#define ADMSK51_address                          0xFC5
#define ADMSK51_position                         0x5
#define ADMSK51_size                             0x1
#define ADMSK51_value_mask                       0x20
#define ADMSK51_clear_mask                       0xDF

#define SSP1CON2_ACKDT                           0x5
#define SSP1CON2_ACKDT_address                   0xFC5
#define SSP1CON2_ACKDT_position                  0x5
#define SSP1CON2_ACKDT_size                      0x1
#define SSP1CON2_ACKDT_value_mask                0x20
#define SSP1CON2_ACKDT_clear_mask                0xDF

#define SSP1CON2_ADMSK5                          0x5
#define SSP1CON2_ADMSK5_address                  0xFC5
#define SSP1CON2_ADMSK5_position                 0x5
#define SSP1CON2_ADMSK5_size                     0x1
#define SSP1CON2_ADMSK5_value_mask               0x20
#define SSP1CON2_ADMSK5_clear_mask               0xDF

#define SSP1CON2_ACKSTAT                         0x6
#define SSP1CON2_ACKSTAT_address                 0xFC5
#define SSP1CON2_ACKSTAT_position                0x6
#define SSP1CON2_ACKSTAT_size                    0x1
#define SSP1CON2_ACKSTAT_value_mask              0x40
#define SSP1CON2_ACKSTAT_clear_mask              0xBF

#define ACKSTAT1                                 0x6
#define ACKSTAT1_address                         0xFC5
#define ACKSTAT1_position                        0x6
#define ACKSTAT1_size                            0x1
#define ACKSTAT1_value_mask                      0x40
#define ACKSTAT1_clear_mask                      0xBF

#define GCEN1                                    0x7
#define GCEN1_address                            0xFC5
#define GCEN1_position                           0x7
#define GCEN1_size                               0x1
#define GCEN1_value_mask                         0x80
#define GCEN1_clear_mask                         0x7F

#define SSP1CON2_GCEN                            0x7
#define SSP1CON2_GCEN_address                    0xFC5
#define SSP1CON2_GCEN_position                   0x7
#define SSP1CON2_GCEN_size                       0x1
#define SSP1CON2_GCEN_value_mask                 0x80
#define SSP1CON2_GCEN_clear_mask                 0x7F


/*-------------------------------------------------------------------------------------------------------------------#
| SSP1CON1                                                                                                     0xFC6 |
#--------------------------------------------------------------------------------------------------------------------#
| SSP1CON1_WCOL | SSP1CON1_SSPOV | SSP1CON1_SSPEN | SSP1CON1_CKP | SSP1CON1_SSPM3 | SSPM21 | SSP1CON1_SSPM1 | SSPM01 |
#--------------------------------------------------------------------------------------------------------------------#
| 7             | 6              | 5              | 4            | 3              | 2      | 1              | 0      |
#-------------------------------------------------------------------------------------------------------------------*/

#define SSP1CON1                                 0x0
#define SSP1CON1_address                         0xFC6
#define SSP1CON1_position                        0x0
#define SSP1CON1_size                            0x8
#define SSP1CON1_value_mask                      0xFF
#define SSP1CON1_clear_mask                      0x0

#define SSP1CON1_SSPM0                           0x0
#define SSP1CON1_SSPM0_address                   0xFC6
#define SSP1CON1_SSPM0_position                  0x0
#define SSP1CON1_SSPM0_size                      0x1
#define SSP1CON1_SSPM0_value_mask                0x1
#define SSP1CON1_SSPM0_clear_mask                0xFE

#define SSPM01                                   0x0
#define SSPM01_address                           0xFC6
#define SSPM01_position                          0x0
#define SSPM01_size                              0x1
#define SSPM01_value_mask                        0x1
#define SSPM01_clear_mask                        0xFE

#define SSP1CON1_SSPM                            0x0
#define SSP1CON1_SSPM_address                    0xFC6
#define SSP1CON1_SSPM_position                   0x0
#define SSP1CON1_SSPM_size                       0x4
#define SSP1CON1_SSPM_value_mask                 0xF
#define SSP1CON1_SSPM_clear_mask                 0xF0

#define SSP1CON1_SSPM1                           0x1
#define SSP1CON1_SSPM1_address                   0xFC6
#define SSP1CON1_SSPM1_position                  0x1
#define SSP1CON1_SSPM1_size                      0x1
#define SSP1CON1_SSPM1_value_mask                0x2
#define SSP1CON1_SSPM1_clear_mask                0xFD

#define SSPM11                                   0x1
#define SSPM11_address                           0xFC6
#define SSPM11_position                          0x1
#define SSPM11_size                              0x1
#define SSPM11_value_mask                        0x2
#define SSPM11_clear_mask                        0xFD

#define SSP1CON1_SSPM2                           0x2
#define SSP1CON1_SSPM2_address                   0xFC6
#define SSP1CON1_SSPM2_position                  0x2
#define SSP1CON1_SSPM2_size                      0x1
#define SSP1CON1_SSPM2_value_mask                0x4
#define SSP1CON1_SSPM2_clear_mask                0xFB

#define SSPM21                                   0x2
#define SSPM21_address                           0xFC6
#define SSPM21_position                          0x2
#define SSPM21_size                              0x1
#define SSPM21_value_mask                        0x4
#define SSPM21_clear_mask                        0xFB

#define SSPM31                                   0x3
#define SSPM31_address                           0xFC6
#define SSPM31_position                          0x3
#define SSPM31_size                              0x1
#define SSPM31_value_mask                        0x8
#define SSPM31_clear_mask                        0xF7

#define SSP1CON1_SSPM3                           0x3
#define SSP1CON1_SSPM3_address                   0xFC6
#define SSP1CON1_SSPM3_position                  0x3
#define SSP1CON1_SSPM3_size                      0x1
#define SSP1CON1_SSPM3_value_mask                0x8
#define SSP1CON1_SSPM3_clear_mask                0xF7

#define SSP1CON1_CKP                             0x4
#define SSP1CON1_CKP_address                     0xFC6
#define SSP1CON1_CKP_position                    0x4
#define SSP1CON1_CKP_size                        0x1
#define SSP1CON1_CKP_value_mask                  0x10
#define SSP1CON1_CKP_clear_mask                  0xEF

#define CKP1                                     0x4
#define CKP1_address                             0xFC6
#define CKP1_position                            0x4
#define CKP1_size                                0x1
#define CKP1_value_mask                          0x10
#define CKP1_clear_mask                          0xEF

#define SSPEN1                                   0x5
#define SSPEN1_address                           0xFC6
#define SSPEN1_position                          0x5
#define SSPEN1_size                              0x1
#define SSPEN1_value_mask                        0x20
#define SSPEN1_clear_mask                        0xDF

#define SSP1CON1_SSPEN                           0x5
#define SSP1CON1_SSPEN_address                   0xFC6
#define SSP1CON1_SSPEN_position                  0x5
#define SSP1CON1_SSPEN_size                      0x1
#define SSP1CON1_SSPEN_value_mask                0x20
#define SSP1CON1_SSPEN_clear_mask                0xDF

#define SSPOV1                                   0x6
#define SSPOV1_address                           0xFC6
#define SSPOV1_position                          0x6
#define SSPOV1_size                              0x1
#define SSPOV1_value_mask                        0x40
#define SSPOV1_clear_mask                        0xBF

#define SSP1CON1_SSPOV                           0x6
#define SSP1CON1_SSPOV_address                   0xFC6
#define SSP1CON1_SSPOV_position                  0x6
#define SSP1CON1_SSPOV_size                      0x1
#define SSP1CON1_SSPOV_value_mask                0x40
#define SSP1CON1_SSPOV_clear_mask                0xBF

#define WCOL1                                    0x7
#define WCOL1_address                            0xFC6
#define WCOL1_position                           0x7
#define WCOL1_size                               0x1
#define WCOL1_value_mask                         0x80
#define WCOL1_clear_mask                         0x7F

#define SSP1CON1_WCOL                            0x7
#define SSP1CON1_WCOL_address                    0xFC6
#define SSP1CON1_WCOL_position                   0x7
#define SSP1CON1_WCOL_size                       0x1
#define SSP1CON1_WCOL_value_mask                 0x80
#define SSP1CON1_WCOL_clear_mask                 0x7F


/*--------------------------------------------------------------------------------------------#
| SSP1STAT                                                                              0xFC7 |
#---------------------------------------------------------------------------------------------#
| SSP1STAT_SMP | SSP1STAT_CKE | nA | STOP | SSP1STAT_S | SSP1STAT_R_NOT_W | SSP1STAT_UA | BF1 |
#---------------------------------------------------------------------------------------------#
| 7            | 6            | 5  | 4    | 3          | 2                | 1           | 0   |
#--------------------------------------------------------------------------------------------*/

#define SSP1STAT                                 0x0
#define SSP1STAT_address                         0xFC7
#define SSP1STAT_position                        0x0
#define SSP1STAT_size                            0x8
#define SSP1STAT_value_mask                      0xFF
#define SSP1STAT_clear_mask                      0x0

#define BF1                                      0x0
#define BF1_address                              0xFC7
#define BF1_position                             0x0
#define BF1_size                                 0x1
#define BF1_value_mask                           0x1
#define BF1_clear_mask                           0xFE

#define SSP1STAT_BF                              0x0
#define SSP1STAT_BF_address                      0xFC7
#define SSP1STAT_BF_position                     0x0
#define SSP1STAT_BF_size                         0x1
#define SSP1STAT_BF_value_mask                   0x1
#define SSP1STAT_BF_clear_mask                   0xFE

#define SSP1STAT_UA                              0x1
#define SSP1STAT_UA_address                      0xFC7
#define SSP1STAT_UA_position                     0x1
#define SSP1STAT_UA_size                         0x1
#define SSP1STAT_UA_value_mask                   0x2
#define SSP1STAT_UA_clear_mask                   0xFD

#define UA1                                      0x1
#define UA1_address                              0xFC7
#define UA1_position                             0x1
#define UA1_size                                 0x1
#define UA1_value_mask                           0x2
#define UA1_clear_mask                           0xFD

#define SSP1STAT_R_NOT_W                         0x2
#define SSP1STAT_R_NOT_W_address                 0xFC7
#define SSP1STAT_R_NOT_W_position                0x2
#define SSP1STAT_R_NOT_W_size                    0x1
#define SSP1STAT_R_NOT_W_value_mask              0x4
#define SSP1STAT_R_NOT_W_clear_mask              0xFB

#define READ_WRITE                               0x2
#define READ_WRITE_address                       0xFC7
#define READ_WRITE_position                      0x2
#define READ_WRITE_size                          0x1
#define READ_WRITE_value_mask                    0x4
#define READ_WRITE_clear_mask                    0xFB

#define RW1                                      0x2
#define RW1_address                              0xFC7
#define RW1_position                             0x2
#define RW1_size                                 0x1
#define RW1_value_mask                           0x4
#define RW1_clear_mask                           0xFB

#define NOT_W                                    0x2
#define NOT_W_address                            0xFC7
#define NOT_W_position                           0x2
#define NOT_W_size                               0x1
#define NOT_W_value_mask                         0x4
#define NOT_W_clear_mask                         0xFB

#define I2C_READ                                 0x2
#define I2C_READ_address                         0xFC7
#define I2C_READ_position                        0x2
#define I2C_READ_size                            0x1
#define I2C_READ_value_mask                      0x4
#define I2C_READ_clear_mask                      0xFB

#define nW                                       0x2
#define nW_address                               0xFC7
#define nW_position                              0x2
#define nW_size                                  0x1
#define nW_value_mask                            0x4
#define nW_clear_mask                            0xFB

#define RW                                       0x2
#define RW_address                               0xFC7
#define RW_position                              0x2
#define RW_size                                  0x1
#define RW_value_mask                            0x4
#define RW_clear_mask                            0xFB

#define nWRITE                                   0x2
#define nWRITE_address                           0xFC7
#define nWRITE_position                          0x2
#define nWRITE_size                              0x1
#define nWRITE_value_mask                        0x4
#define nWRITE_clear_mask                        0xFB

#define R                                        0x2
#define R_address                                0xFC7
#define R_position                               0x2
#define R_size                                   0x1
#define R_value_mask                             0x4
#define R_clear_mask                             0xFB

#define NOT_WRITE                                0x2
#define NOT_WRITE_address                        0xFC7
#define NOT_WRITE_position                       0x2
#define NOT_WRITE_size                           0x1
#define NOT_WRITE_value_mask                     0x4
#define NOT_WRITE_clear_mask                     0xFB

#define R_W                                      0x2
#define R_W_address                              0xFC7
#define R_W_position                             0x2
#define R_W_size                                 0x1
#define R_W_value_mask                           0x4
#define R_W_clear_mask                           0xFB

#define SSP1STAT_R_nW                            0x2
#define SSP1STAT_R_nW_address                    0xFC7
#define SSP1STAT_R_nW_position                   0x2
#define SSP1STAT_R_nW_size                       0x1
#define SSP1STAT_R_nW_value_mask                 0x4
#define SSP1STAT_R_nW_clear_mask                 0xFB

#define SSP1STAT_S                               0x3
#define SSP1STAT_S_address                       0xFC7
#define SSP1STAT_S_position                      0x3
#define SSP1STAT_S_size                          0x1
#define SSP1STAT_S_value_mask                    0x8
#define SSP1STAT_S_clear_mask                    0xF7

#define START                                    0x3
#define START_address                            0xFC7
#define START_position                           0x3
#define START_size                               0x1
#define START_value_mask                         0x8
#define START_clear_mask                         0xF7

#define START1                                   0x3
#define START1_address                           0xFC7
#define START1_position                          0x3
#define START1_size                              0x1
#define START1_value_mask                        0x8
#define START1_clear_mask                        0xF7

#define I2C_START                                0x3
#define I2C_START_address                        0xFC7
#define I2C_START_position                       0x3
#define I2C_START_size                           0x1
#define I2C_START_value_mask                     0x8
#define I2C_START_clear_mask                     0xF7

#define STOP                                     0x4
#define STOP_address                             0xFC7
#define STOP_position                            0x4
#define STOP_size                                0x1
#define STOP_value_mask                          0x10
#define STOP_clear_mask                          0xEF

#define SSP1STAT_P                               0x4
#define SSP1STAT_P_address                       0xFC7
#define SSP1STAT_P_position                      0x4
#define SSP1STAT_P_size                          0x1
#define SSP1STAT_P_value_mask                    0x10
#define SSP1STAT_P_clear_mask                    0xEF

#define STOP1                                    0x4
#define STOP1_address                            0xFC7
#define STOP1_position                           0x4
#define STOP1_size                               0x1
#define STOP1_value_mask                         0x10
#define STOP1_clear_mask                         0xEF

#define I2C_STOP                                 0x4
#define I2C_STOP_address                         0xFC7
#define I2C_STOP_position                        0x4
#define I2C_STOP_size                            0x1
#define I2C_STOP_value_mask                      0x10
#define I2C_STOP_clear_mask                      0xEF

#define SSP1STAT_D_NOT_A                         0x5
#define SSP1STAT_D_NOT_A_address                 0xFC7
#define SSP1STAT_D_NOT_A_position                0x5
#define SSP1STAT_D_NOT_A_size                    0x1
#define SSP1STAT_D_NOT_A_value_mask              0x20
#define SSP1STAT_D_NOT_A_clear_mask              0xDF

#define NOT_A                                    0x5
#define NOT_A_address                            0xFC7
#define NOT_A_position                           0x5
#define NOT_A_size                               0x1
#define NOT_A_value_mask                         0x20
#define NOT_A_clear_mask                         0xDF

#define SSP1STAT_D_nA                            0x5
#define SSP1STAT_D_nA_address                    0xFC7
#define SSP1STAT_D_nA_position                   0x5
#define SSP1STAT_D_nA_size                       0x1
#define SSP1STAT_D_nA_value_mask                 0x20
#define SSP1STAT_D_nA_clear_mask                 0xDF

#define nA                                       0x5
#define nA_address                               0xFC7
#define nA_position                              0x5
#define nA_size                                  0x1
#define nA_value_mask                            0x20
#define nA_clear_mask                            0xDF

#define D_A                                      0x5
#define D_A_address                              0xFC7
#define D_A_position                             0x5
#define D_A_size                                 0x1
#define D_A_value_mask                           0x20
#define D_A_clear_mask                           0xDF

#define D                                        0x5
#define D_address                                0xFC7
#define D_position                               0x5
#define D_size                                   0x1
#define D_value_mask                             0x20
#define D_clear_mask                             0xDF

#define DA1                                      0x5
#define DA1_address                              0xFC7
#define DA1_position                             0x5
#define DA1_size                                 0x1
#define DA1_value_mask                           0x20
#define DA1_clear_mask                           0xDF

#define DA                                       0x5
#define DA_address                               0xFC7
#define DA_position                              0x5
#define DA_size                                  0x1
#define DA_value_mask                            0x20
#define DA_clear_mask                            0xDF

#define DATA_ADDRESS                             0x5
#define DATA_ADDRESS_address                     0xFC7
#define DATA_ADDRESS_position                    0x5
#define DATA_ADDRESS_size                        0x1
#define DATA_ADDRESS_value_mask                  0x20
#define DATA_ADDRESS_clear_mask                  0xDF

#define NOT_ADDRESS                              0x5
#define NOT_ADDRESS_address                      0xFC7
#define NOT_ADDRESS_position                     0x5
#define NOT_ADDRESS_size                         0x1
#define NOT_ADDRESS_value_mask                   0x20
#define NOT_ADDRESS_clear_mask                   0xDF

#define nADDRESS                                 0x5
#define nADDRESS_address                         0xFC7
#define nADDRESS_position                        0x5
#define nADDRESS_size                            0x1
#define nADDRESS_value_mask                      0x20
#define nADDRESS_clear_mask                      0xDF

#define I2C_DAT                                  0x5
#define I2C_DAT_address                          0xFC7
#define I2C_DAT_position                         0x5
#define I2C_DAT_size                             0x1
#define I2C_DAT_value_mask                       0x20
#define I2C_DAT_clear_mask                       0xDF

#define SSP1STAT_CKE                             0x6
#define SSP1STAT_CKE_address                     0xFC7
#define SSP1STAT_CKE_position                    0x6
#define SSP1STAT_CKE_size                        0x1
#define SSP1STAT_CKE_value_mask                  0x40
#define SSP1STAT_CKE_clear_mask                  0xBF

#define CKE1                                     0x6
#define CKE1_address                             0xFC7
#define CKE1_position                            0x6
#define CKE1_size                                0x1
#define CKE1_value_mask                          0x40
#define CKE1_clear_mask                          0xBF

#define SSP1STAT_SMP                             0x7
#define SSP1STAT_SMP_address                     0xFC7
#define SSP1STAT_SMP_position                    0x7
#define SSP1STAT_SMP_size                        0x1
#define SSP1STAT_SMP_value_mask                  0x80
#define SSP1STAT_SMP_clear_mask                  0x7F

#define SMP1                                     0x7
#define SMP1_address                             0xFC7
#define SMP1_position                            0x7
#define SMP1_size                                0x1
#define SMP1_value_mask                          0x80
#define SMP1_clear_mask                          0x7F


/*-------------------------------------------------------------------------------------------------#
| SSP1ADD                                                                                    0xFC8 |
#--------------------------------------------------------------------------------------------------#
| MSK71 | MSK61 | MSK51 | SSP1ADD_MSK4 | SSP1ADD_MSK3 | SSP1ADD_MSK2 | SSP1ADD_MSK1 | SSP1ADD_MSK0 |
#--------------------------------------------------------------------------------------------------#
| 7     | 6     | 5     | 4            | 3            | 2            | 1            | 0            |
#-------------------------------------------------------------------------------------------------*/

#define SSP1ADD                                  0x0
#define SSP1ADD_address                          0xFC8
#define SSP1ADD_position                         0x0
#define SSP1ADD_size                             0x8
#define SSP1ADD_value_mask                       0xFF
#define SSP1ADD_clear_mask                       0x0

#define SSP1ADD_SSPADD                           0x0
#define SSP1ADD_SSPADD_address                   0xFC8
#define SSP1ADD_SSPADD_position                  0x0
#define SSP1ADD_SSPADD_size                      0x8
#define SSP1ADD_SSPADD_value_mask                0xFF
#define SSP1ADD_SSPADD_clear_mask                0x0

#define SSP1ADD_MSK0                             0x0
#define SSP1ADD_MSK0_address                     0xFC8
#define SSP1ADD_MSK0_position                    0x0
#define SSP1ADD_MSK0_size                        0x1
#define SSP1ADD_MSK0_value_mask                  0x1
#define SSP1ADD_MSK0_clear_mask                  0xFE

#define MSK01                                    0x0
#define MSK01_address                            0xFC8
#define MSK01_position                           0x0
#define MSK01_size                               0x1
#define MSK01_value_mask                         0x1
#define MSK01_clear_mask                         0xFE

#define SSP1ADD_MSK1                             0x1
#define SSP1ADD_MSK1_address                     0xFC8
#define SSP1ADD_MSK1_position                    0x1
#define SSP1ADD_MSK1_size                        0x1
#define SSP1ADD_MSK1_value_mask                  0x2
#define SSP1ADD_MSK1_clear_mask                  0xFD

#define MSK11                                    0x1
#define MSK11_address                            0xFC8
#define MSK11_position                           0x1
#define MSK11_size                               0x1
#define MSK11_value_mask                         0x2
#define MSK11_clear_mask                         0xFD

#define SSP1ADD_MSK2                             0x2
#define SSP1ADD_MSK2_address                     0xFC8
#define SSP1ADD_MSK2_position                    0x2
#define SSP1ADD_MSK2_size                        0x1
#define SSP1ADD_MSK2_value_mask                  0x4
#define SSP1ADD_MSK2_clear_mask                  0xFB

#define MSK21                                    0x2
#define MSK21_address                            0xFC8
#define MSK21_position                           0x2
#define MSK21_size                               0x1
#define MSK21_value_mask                         0x4
#define MSK21_clear_mask                         0xFB

#define MSK31                                    0x3
#define MSK31_address                            0xFC8
#define MSK31_position                           0x3
#define MSK31_size                               0x1
#define MSK31_value_mask                         0x8
#define MSK31_clear_mask                         0xF7

#define SSP1ADD_MSK3                             0x3
#define SSP1ADD_MSK3_address                     0xFC8
#define SSP1ADD_MSK3_position                    0x3
#define SSP1ADD_MSK3_size                        0x1
#define SSP1ADD_MSK3_value_mask                  0x8
#define SSP1ADD_MSK3_clear_mask                  0xF7

#define SSP1ADD_MSK4                             0x4
#define SSP1ADD_MSK4_address                     0xFC8
#define SSP1ADD_MSK4_position                    0x4
#define SSP1ADD_MSK4_size                        0x1
#define SSP1ADD_MSK4_value_mask                  0x10
#define SSP1ADD_MSK4_clear_mask                  0xEF

#define MSK41                                    0x4
#define MSK41_address                            0xFC8
#define MSK41_position                           0x4
#define MSK41_size                               0x1
#define MSK41_value_mask                         0x10
#define MSK41_clear_mask                         0xEF

#define MSK51                                    0x5
#define MSK51_address                            0xFC8
#define MSK51_position                           0x5
#define MSK51_size                               0x1
#define MSK51_value_mask                         0x20
#define MSK51_clear_mask                         0xDF

#define SSP1ADD_MSK5                             0x5
#define SSP1ADD_MSK5_address                     0xFC8
#define SSP1ADD_MSK5_position                    0x5
#define SSP1ADD_MSK5_size                        0x1
#define SSP1ADD_MSK5_value_mask                  0x20
#define SSP1ADD_MSK5_clear_mask                  0xDF

#define SSP1ADD_MSK6                             0x6
#define SSP1ADD_MSK6_address                     0xFC8
#define SSP1ADD_MSK6_position                    0x6
#define SSP1ADD_MSK6_size                        0x1
#define SSP1ADD_MSK6_value_mask                  0x40
#define SSP1ADD_MSK6_clear_mask                  0xBF

#define MSK61                                    0x6
#define MSK61_address                            0xFC8
#define MSK61_position                           0x6
#define MSK61_size                               0x1
#define MSK61_value_mask                         0x40
#define MSK61_clear_mask                         0xBF

#define MSK71                                    0x7
#define MSK71_address                            0xFC8
#define MSK71_position                           0x7
#define MSK71_size                               0x1
#define MSK71_value_mask                         0x80
#define MSK71_clear_mask                         0x7F

#define SSP1ADD_MSK7                             0x7
#define SSP1ADD_MSK7_address                     0xFC8
#define SSP1ADD_MSK7_position                    0x7
#define SSP1ADD_MSK7_size                        0x1
#define SSP1ADD_MSK7_value_mask                  0x80
#define SSP1ADD_MSK7_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| SSP1MSK                                                                                                         0xFC8 |
#-----------------------------------------------------------------------------------------------------------------------#
| SSP1MSK_MSK7 | SSP1MSK_MSK6 | SSP1MSK_MSK5 | SSP1MSK_MSK4 | SSP1MSK_MSK3 | SSP1MSK_MSK2 | SSP1MSK_MSK1 | SSP1MSK_MSK0 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define SSP1MSK                                  0x0
#define SSP1MSK_address                          0xFC8
#define SSP1MSK_position                         0x0
#define SSP1MSK_size                             0x8
#define SSP1MSK_value_mask                       0xFF
#define SSP1MSK_clear_mask                       0x0

#define SSP1MSK_MSK0                             0x0
#define SSP1MSK_MSK0_address                     0xFC8
#define SSP1MSK_MSK0_position                    0x0
#define SSP1MSK_MSK0_size                        0x1
#define SSP1MSK_MSK0_value_mask                  0x1
#define SSP1MSK_MSK0_clear_mask                  0xFE

#define SSP1MSK_MSK1                             0x1
#define SSP1MSK_MSK1_address                     0xFC8
#define SSP1MSK_MSK1_position                    0x1
#define SSP1MSK_MSK1_size                        0x1
#define SSP1MSK_MSK1_value_mask                  0x2
#define SSP1MSK_MSK1_clear_mask                  0xFD

#define SSP1MSK_MSK2                             0x2
#define SSP1MSK_MSK2_address                     0xFC8
#define SSP1MSK_MSK2_position                    0x2
#define SSP1MSK_MSK2_size                        0x1
#define SSP1MSK_MSK2_value_mask                  0x4
#define SSP1MSK_MSK2_clear_mask                  0xFB

#define SSP1MSK_MSK3                             0x3
#define SSP1MSK_MSK3_address                     0xFC8
#define SSP1MSK_MSK3_position                    0x3
#define SSP1MSK_MSK3_size                        0x1
#define SSP1MSK_MSK3_value_mask                  0x8
#define SSP1MSK_MSK3_clear_mask                  0xF7

#define SSP1MSK_MSK4                             0x4
#define SSP1MSK_MSK4_address                     0xFC8
#define SSP1MSK_MSK4_position                    0x4
#define SSP1MSK_MSK4_size                        0x1
#define SSP1MSK_MSK4_value_mask                  0x10
#define SSP1MSK_MSK4_clear_mask                  0xEF

#define SSP1MSK_MSK5                             0x5
#define SSP1MSK_MSK5_address                     0xFC8
#define SSP1MSK_MSK5_position                    0x5
#define SSP1MSK_MSK5_size                        0x1
#define SSP1MSK_MSK5_value_mask                  0x20
#define SSP1MSK_MSK5_clear_mask                  0xDF

#define SSP1MSK_MSK6                             0x6
#define SSP1MSK_MSK6_address                     0xFC8
#define SSP1MSK_MSK6_position                    0x6
#define SSP1MSK_MSK6_size                        0x1
#define SSP1MSK_MSK6_value_mask                  0x40
#define SSP1MSK_MSK6_clear_mask                  0xBF

#define SSP1MSK_MSK7                             0x7
#define SSP1MSK_MSK7_address                     0xFC8
#define SSP1MSK_MSK7_position                    0x7
#define SSP1MSK_MSK7_size                        0x1
#define SSP1MSK_MSK7_value_mask                  0x80
#define SSP1MSK_MSK7_clear_mask                  0x7F


/*------------------------------#
| SSP1BUF                 0xFC9 |
#-------------------------------#
| SSP1BUF_SSPBUF                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1BUF                                  0x0
#define SSP1BUF_address                          0xFC9
#define SSP1BUF_position                         0x0
#define SSP1BUF_size                             0x8
#define SSP1BUF_value_mask                       0xFF
#define SSP1BUF_clear_mask                       0x0

#define SSP1BUF_SSPBUF                           0x0
#define SSP1BUF_SSPBUF_address                   0xFC9
#define SSP1BUF_SSPBUF_position                  0x0
#define SSP1BUF_SSPBUF_size                      0x8
#define SSP1BUF_SSPBUF_value_mask                0xFF
#define SSP1BUF_SSPBUF_clear_mask                0x0


/*---------------------------------------------------------------------------#
| T2CON                                                                0xFCA |
#----------------------------------------------------------------------------#
| - | T2OUTPS3 | T2OUTPS2 | T2OUTPS1 | T2OUTPS0 | TMR2ON | T2CKPS1 | T2CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T2CON                                    0x0
#define T2CON_address                            0xFCA
#define T2CON_position                           0x0
#define T2CON_size                               0x8
#define T2CON_value_mask                         0xFF
#define T2CON_clear_mask                         0x0

#define T2CKPS0                                  0x0
#define T2CKPS0_address                          0xFCA
#define T2CKPS0_position                         0x0
#define T2CKPS0_size                             0x1
#define T2CKPS0_value_mask                       0x1
#define T2CKPS0_clear_mask                       0xFE

#define T2CKPS                                   0x0
#define T2CKPS_address                           0xFCA
#define T2CKPS_position                          0x0
#define T2CKPS_size                              0x2
#define T2CKPS_value_mask                        0x3
#define T2CKPS_clear_mask                        0xFC

#define T2CKPS1                                  0x1
#define T2CKPS1_address                          0xFCA
#define T2CKPS1_position                         0x1
#define T2CKPS1_size                             0x1
#define T2CKPS1_value_mask                       0x2
#define T2CKPS1_clear_mask                       0xFD

#define TMR2ON                                   0x2
#define TMR2ON_address                           0xFCA
#define TMR2ON_position                          0x2
#define TMR2ON_size                              0x1
#define TMR2ON_value_mask                        0x4
#define TMR2ON_clear_mask                        0xFB

#define T2OUTPS0                                 0x3
#define T2OUTPS0_address                         0xFCA
#define T2OUTPS0_position                        0x3
#define T2OUTPS0_size                            0x1
#define T2OUTPS0_value_mask                      0x8
#define T2OUTPS0_clear_mask                      0xF7

#define T2OUTPS                                  0x3
#define T2OUTPS_address                          0xFCA
#define T2OUTPS_position                         0x3
#define T2OUTPS_size                             0x4
#define T2OUTPS_value_mask                       0x78
#define T2OUTPS_clear_mask                       0x87

#define T2OUTPS1                                 0x4
#define T2OUTPS1_address                         0xFCA
#define T2OUTPS1_position                        0x4
#define T2OUTPS1_size                            0x1
#define T2OUTPS1_value_mask                      0x10
#define T2OUTPS1_clear_mask                      0xEF

#define T2OUTPS2                                 0x5
#define T2OUTPS2_address                         0xFCA
#define T2OUTPS2_position                        0x5
#define T2OUTPS2_size                            0x1
#define T2OUTPS2_value_mask                      0x20
#define T2OUTPS2_clear_mask                      0xDF

#define T2OUTPS3                                 0x6
#define T2OUTPS3_address                         0xFCA
#define T2OUTPS3_position                        0x6
#define T2OUTPS3_size                            0x1
#define T2OUTPS3_value_mask                      0x40
#define T2OUTPS3_clear_mask                      0xBF


/*----------------------------------------------#
| PR2                                     0xFCB |
#-----------------------------------------------#
| EBDIS | - | WAIT1 | WAIT0 | - | - | WM1 | WM0 |
#-----------------------------------------------#
| 7     | 6 | 5     | 4     | 3 | 2 | 1   | 0   |
#----------------------------------------------*/

#define WM0                                      0x0
#define WM0_address                              0xFCB
#define WM0_position                             0x0
#define WM0_size                                 0x1
#define WM0_value_mask                           0x1
#define WM0_clear_mask                           0xFE

#define PR2                                      0x0
#define PR2_address                              0xFCB
#define PR2_position                             0x0
#define PR2_size                                 0x8
#define PR2_value_mask                           0xFF
#define PR2_clear_mask                           0x0

#define WM1                                      0x1
#define WM1_address                              0xFCB
#define WM1_position                             0x1
#define WM1_size                                 0x1
#define WM1_value_mask                           0x2
#define WM1_clear_mask                           0xFD

#define WAIT0                                    0x4
#define WAIT0_address                            0xFCB
#define WAIT0_position                           0x4
#define WAIT0_size                               0x1
#define WAIT0_value_mask                         0x10
#define WAIT0_clear_mask                         0xEF

#define WAIT1                                    0x5
#define WAIT1_address                            0xFCB
#define WAIT1_position                           0x5
#define WAIT1_size                               0x1
#define WAIT1_value_mask                         0x20
#define WAIT1_clear_mask                         0xDF

#define EBDIS                                    0x7
#define EBDIS_address                            0xFCB
#define EBDIS_position                           0x7
#define EBDIS_size                               0x1
#define EBDIS_value_mask                         0x80
#define EBDIS_clear_mask                         0x7F


/*------------------------------#
| TMR2                    0xFCC |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR2                                     0x0
#define TMR2_address                             0xFCC
#define TMR2_position                            0x0
#define TMR2_size                                0x8
#define TMR2_value_mask                          0xFF
#define TMR2_clear_mask                          0x0


/*----------------------------------------------------------------------------------#
| T1CON                                                                       0xFCD |
#-----------------------------------------------------------------------------------#
| T1RD16 | TMR1CS0 | T1CKPS1 | T1CKPS0 | T1OSCEN | NOT_T1SYNC | T1CON_RD16 | TMR1ON |
#-----------------------------------------------------------------------------------#
| 7      | 6       | 5       | 4       | 3       | 2          | 1          | 0      |
#----------------------------------------------------------------------------------*/

#define T1CON                                    0x0
#define T1CON_address                            0xFCD
#define T1CON_position                           0x0
#define T1CON_size                               0x8
#define T1CON_value_mask                         0xFF
#define T1CON_clear_mask                         0x0

#define TMR1ON                                   0x0
#define TMR1ON_address                           0xFCD
#define TMR1ON_position                          0x0
#define TMR1ON_size                              0x1
#define TMR1ON_value_mask                        0x1
#define TMR1ON_clear_mask                        0xFE

#define T1CON_RD16                               0x1
#define T1CON_RD16_address                       0xFCD
#define T1CON_RD16_position                      0x1
#define T1CON_RD16_size                          0x1
#define T1CON_RD16_value_mask                    0x2
#define T1CON_RD16_clear_mask                    0xFD

#define NOT_T1SYNC                               0x2
#define NOT_T1SYNC_address                       0xFCD
#define NOT_T1SYNC_position                      0x2
#define NOT_T1SYNC_size                          0x1
#define NOT_T1SYNC_value_mask                    0x4
#define NOT_T1SYNC_clear_mask                    0xFB

#define nT1SYNC                                  0x2
#define nT1SYNC_address                          0xFCD
#define nT1SYNC_position                         0x2
#define nT1SYNC_size                             0x1
#define nT1SYNC_value_mask                       0x4
#define nT1SYNC_clear_mask                       0xFB

#define T1OSCEN                                  0x3
#define T1OSCEN_address                          0xFCD
#define T1OSCEN_position                         0x3
#define T1OSCEN_size                             0x1
#define T1OSCEN_value_mask                       0x8
#define T1OSCEN_clear_mask                       0xF7

#define SOSCEN                                   0x3
#define SOSCEN_address                           0xFCD
#define SOSCEN_position                          0x3
#define SOSCEN_size                              0x1
#define SOSCEN_value_mask                        0x8
#define SOSCEN_clear_mask                        0xF7

#define T1CKPS0                                  0x4
#define T1CKPS0_address                          0xFCD
#define T1CKPS0_position                         0x4
#define T1CKPS0_size                             0x1
#define T1CKPS0_value_mask                       0x10
#define T1CKPS0_clear_mask                       0xEF

#define T1CKPS                                   0x4
#define T1CKPS_address                           0xFCD
#define T1CKPS_position                          0x4
#define T1CKPS_size                              0x2
#define T1CKPS_value_mask                        0x30
#define T1CKPS_clear_mask                        0xCF

#define T1CKPS1                                  0x5
#define T1CKPS1_address                          0xFCD
#define T1CKPS1_position                         0x5
#define T1CKPS1_size                             0x1
#define T1CKPS1_value_mask                       0x20
#define T1CKPS1_clear_mask                       0xDF

#define TMR1CS0                                  0x6
#define TMR1CS0_address                          0xFCD
#define TMR1CS0_position                         0x6
#define TMR1CS0_size                             0x1
#define TMR1CS0_value_mask                       0x40
#define TMR1CS0_clear_mask                       0xBF

#define TMR1CS                                   0x6
#define TMR1CS_address                           0xFCD
#define TMR1CS_position                          0x6
#define TMR1CS_size                              0x2
#define TMR1CS_value_mask                        0xC0
#define TMR1CS_clear_mask                        0x3F

#define T1RD16                                   0x7
#define T1RD16_address                           0xFCD
#define T1RD16_position                          0x7
#define T1RD16_size                              0x1
#define T1RD16_value_mask                        0x80
#define T1RD16_clear_mask                        0x7F

#define TMR1CS1                                  0x7
#define TMR1CS1_address                          0xFCD
#define TMR1CS1_position                         0x7
#define TMR1CS1_size                             0x1
#define TMR1CS1_value_mask                       0x80
#define TMR1CS1_clear_mask                       0x7F


/*------------------------------#
| TMR1L                   0xFCE |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR1L                                    0x0
#define TMR1L_address                            0xFCE
#define TMR1L_position                           0x0
#define TMR1L_size                               0x8
#define TMR1L_value_mask                         0xFF
#define TMR1L_clear_mask                         0x0


/*------------------------------#
| TMR1H                   0xFCF |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR1H                                    0x0
#define TMR1H_address                            0xFCF
#define TMR1H_position                           0x0
#define TMR1H_size                               0x8
#define TMR1H_value_mask                         0xFF
#define TMR1H_clear_mask                         0x0


/*--------------------------------------------------#
| RCON                                        0xFD0 |
#---------------------------------------------------#
| IPEN | - | CM | nRI | TO | NOT_PD | POR | NOT_BOR |
#---------------------------------------------------#
| 7    | 6 | 5  | 4   | 3  | 2      | 1   | 0       |
#--------------------------------------------------*/

#define RCON                                     0x0
#define RCON_address                             0xFD0
#define RCON_position                            0x0
#define RCON_size                                0x8
#define RCON_value_mask                          0xFF
#define RCON_clear_mask                          0x0

#define BOR                                      0x0
#define BOR_address                              0xFD0
#define BOR_position                             0x0
#define BOR_size                                 0x1
#define BOR_value_mask                           0x1
#define BOR_clear_mask                           0xFE

#define NOT_BOR                                  0x0
#define NOT_BOR_address                          0xFD0
#define NOT_BOR_position                         0x0
#define NOT_BOR_size                             0x1
#define NOT_BOR_value_mask                       0x1
#define NOT_BOR_clear_mask                       0xFE

#define nBOR                                     0x0
#define nBOR_address                             0xFD0
#define nBOR_position                            0x0
#define nBOR_size                                0x1
#define nBOR_value_mask                          0x1
#define nBOR_clear_mask                          0xFE

#define POR                                      0x1
#define POR_address                              0xFD0
#define POR_position                             0x1
#define POR_size                                 0x1
#define POR_value_mask                           0x2
#define POR_clear_mask                           0xFD

#define nPOR                                     0x1
#define nPOR_address                             0xFD0
#define nPOR_position                            0x1
#define nPOR_size                                0x1
#define nPOR_value_mask                          0x2
#define nPOR_clear_mask                          0xFD

#define NOT_POR                                  0x1
#define NOT_POR_address                          0xFD0
#define NOT_POR_position                         0x1
#define NOT_POR_size                             0x1
#define NOT_POR_value_mask                       0x2
#define NOT_POR_clear_mask                       0xFD

#define PD                                       0x2
#define PD_address                               0xFD0
#define PD_position                              0x2
#define PD_size                                  0x1
#define PD_value_mask                            0x4
#define PD_clear_mask                            0xFB

#define nPD                                      0x2
#define nPD_address                              0xFD0
#define nPD_position                             0x2
#define nPD_size                                 0x1
#define nPD_value_mask                           0x4
#define nPD_clear_mask                           0xFB

#define NOT_PD                                   0x2
#define NOT_PD_address                           0xFD0
#define NOT_PD_position                          0x2
#define NOT_PD_size                              0x1
#define NOT_PD_value_mask                        0x4
#define NOT_PD_clear_mask                        0xFB

#define nTO                                      0x3
#define nTO_address                              0xFD0
#define nTO_position                             0x3
#define nTO_size                                 0x1
#define nTO_value_mask                           0x8
#define nTO_clear_mask                           0xF7

#define TO                                       0x3
#define TO_address                               0xFD0
#define TO_position                              0x3
#define TO_size                                  0x1
#define TO_value_mask                            0x8
#define TO_clear_mask                            0xF7

#define NOT_TO                                   0x3
#define NOT_TO_address                           0xFD0
#define NOT_TO_position                          0x3
#define NOT_TO_size                              0x1
#define NOT_TO_value_mask                        0x8
#define NOT_TO_clear_mask                        0xF7

#define nRI                                      0x4
#define nRI_address                              0xFD0
#define nRI_position                             0x4
#define nRI_size                                 0x1
#define nRI_value_mask                           0x10
#define nRI_clear_mask                           0xEF

#define NOT_RI                                   0x4
#define NOT_RI_address                           0xFD0
#define NOT_RI_position                          0x4
#define NOT_RI_size                              0x1
#define NOT_RI_value_mask                        0x10
#define NOT_RI_clear_mask                        0xEF

#define RI                                       0x4
#define RI_address                               0xFD0
#define RI_position                              0x4
#define RI_size                                  0x1
#define RI_value_mask                            0x10
#define RI_clear_mask                            0xEF

#define NOT_CM                                   0x5
#define NOT_CM_address                           0xFD0
#define NOT_CM_position                          0x5
#define NOT_CM_size                              0x1
#define NOT_CM_value_mask                        0x20
#define NOT_CM_clear_mask                        0xDF

#define CM                                       0x5
#define CM_address                               0xFD0
#define CM_position                              0x5
#define CM_size                                  0x1
#define CM_value_mask                            0x20
#define CM_clear_mask                            0xDF

#define nCM                                      0x5
#define nCM_address                              0xFD0
#define nCM_position                             0x5
#define nCM_size                                 0x1
#define nCM_value_mask                           0x20
#define nCM_clear_mask                           0xDF

#define IPEN                                     0x7
#define IPEN_address                             0xFD0
#define IPEN_position                            0x7
#define IPEN_size                                0x1
#define IPEN_value_mask                          0x80
#define IPEN_clear_mask                          0x7F


/*----------------------------------------------------------------------------------#
| CM2CON                                                                      0xFD1 |
#-----------------------------------------------------------------------------------#
| CM2CON_CON | CM2CON_COE | CM2CON_CPOL | EVPOL12 | EVPOL02 | CREF2 | CCH12 | CCH02 |
#-----------------------------------------------------------------------------------#
| 7          | 6          | 5           | 4       | 3       | 2     | 1     | 0     |
#----------------------------------------------------------------------------------*/

#define CM2CON                                   0x0
#define CM2CON_address                           0xFD1
#define CM2CON_position                          0x0
#define CM2CON_size                              0x8
#define CM2CON_value_mask                        0xFF
#define CM2CON_clear_mask                        0x0

#define CM2CON_CCH                               0x0
#define CM2CON_CCH_address                       0xFD1
#define CM2CON_CCH_position                      0x0
#define CM2CON_CCH_size                          0x2
#define CM2CON_CCH_value_mask                    0x3
#define CM2CON_CCH_clear_mask                    0xFC

#define CM2CON_CCH0                              0x0
#define CM2CON_CCH0_address                      0xFD1
#define CM2CON_CCH0_position                     0x0
#define CM2CON_CCH0_size                         0x1
#define CM2CON_CCH0_value_mask                   0x1
#define CM2CON_CCH0_clear_mask                   0xFE

#define CCH02                                    0x0
#define CCH02_address                            0xFD1
#define CCH02_position                           0x0
#define CCH02_size                               0x1
#define CCH02_value_mask                         0x1
#define CCH02_clear_mask                         0xFE

#define CCH12                                    0x1
#define CCH12_address                            0xFD1
#define CCH12_position                           0x1
#define CCH12_size                               0x1
#define CCH12_value_mask                         0x2
#define CCH12_clear_mask                         0xFD

#define CM2CON_CCH1                              0x1
#define CM2CON_CCH1_address                      0xFD1
#define CM2CON_CCH1_position                     0x1
#define CM2CON_CCH1_size                         0x1
#define CM2CON_CCH1_value_mask                   0x2
#define CM2CON_CCH1_clear_mask                   0xFD

#define CM2CON_CREF                              0x2
#define CM2CON_CREF_address                      0xFD1
#define CM2CON_CREF_position                     0x2
#define CM2CON_CREF_size                         0x1
#define CM2CON_CREF_value_mask                   0x4
#define CM2CON_CREF_clear_mask                   0xFB

#define CREF2                                    0x2
#define CREF2_address                            0xFD1
#define CREF2_position                           0x2
#define CREF2_size                               0x1
#define CREF2_value_mask                         0x4
#define CREF2_clear_mask                         0xFB

#define CM2CON_EVPOL                             0x3
#define CM2CON_EVPOL_address                     0xFD1
#define CM2CON_EVPOL_position                    0x3
#define CM2CON_EVPOL_size                        0x2
#define CM2CON_EVPOL_value_mask                  0x18
#define CM2CON_EVPOL_clear_mask                  0xE7

#define EVPOL02                                  0x3
#define EVPOL02_address                          0xFD1
#define EVPOL02_position                         0x3
#define EVPOL02_size                             0x1
#define EVPOL02_value_mask                       0x8
#define EVPOL02_clear_mask                       0xF7

#define CM2CON_EVPOL0                            0x3
#define CM2CON_EVPOL0_address                    0xFD1
#define CM2CON_EVPOL0_position                   0x3
#define CM2CON_EVPOL0_size                       0x1
#define CM2CON_EVPOL0_value_mask                 0x8
#define CM2CON_EVPOL0_clear_mask                 0xF7

#define EVPOL12                                  0x4
#define EVPOL12_address                          0xFD1
#define EVPOL12_position                         0x4
#define EVPOL12_size                             0x1
#define EVPOL12_value_mask                       0x10
#define EVPOL12_clear_mask                       0xEF

#define CM2CON_EVPOL1                            0x4
#define CM2CON_EVPOL1_address                    0xFD1
#define CM2CON_EVPOL1_position                   0x4
#define CM2CON_EVPOL1_size                       0x1
#define CM2CON_EVPOL1_value_mask                 0x10
#define CM2CON_EVPOL1_clear_mask                 0xEF

#define CM2CON_CPOL                              0x5
#define CM2CON_CPOL_address                      0xFD1
#define CM2CON_CPOL_position                     0x5
#define CM2CON_CPOL_size                         0x1
#define CM2CON_CPOL_value_mask                   0x20
#define CM2CON_CPOL_clear_mask                   0xDF

#define CPOL2                                    0x5
#define CPOL2_address                            0xFD1
#define CPOL2_position                           0x5
#define CPOL2_size                               0x1
#define CPOL2_value_mask                         0x20
#define CPOL2_clear_mask                         0xDF

#define CM2CON_COE                               0x6
#define CM2CON_COE_address                       0xFD1
#define CM2CON_COE_position                      0x6
#define CM2CON_COE_size                          0x1
#define CM2CON_COE_value_mask                    0x40
#define CM2CON_COE_clear_mask                    0xBF

#define COE2                                     0x6
#define COE2_address                             0xFD1
#define COE2_position                            0x6
#define COE2_size                                0x1
#define COE2_value_mask                          0x40
#define COE2_clear_mask                          0xBF

#define CM2CON_CON                               0x7
#define CM2CON_CON_address                       0xFD1
#define CM2CON_CON_position                      0x7
#define CM2CON_CON_size                          0x1
#define CM2CON_CON_value_mask                    0x80
#define CM2CON_CON_clear_mask                    0x7F

#define CON2                                     0x7
#define CON2_address                             0xFD1
#define CON2_position                            0x7
#define CON2_size                                0x1
#define CON2_value_mask                          0x80
#define CON2_clear_mask                          0x7F


/*----------------------------------------------------------------------------#
| CM1CON                                                                0xFD2 |
#-----------------------------------------------------------------------------#
| CON1 | COE1 | CPOL1 | CM1CON_EVPOL1 | EVPOL01 | CM1CON_CREF | CCH11 | CCH01 |
#-----------------------------------------------------------------------------#
| 7    | 6    | 5     | 4             | 3       | 2           | 1     | 0     |
#----------------------------------------------------------------------------*/

#define CM1CON                                   0x0
#define CM1CON_address                           0xFD2
#define CM1CON_position                          0x0
#define CM1CON_size                              0x8
#define CM1CON_value_mask                        0xFF
#define CM1CON_clear_mask                        0x0

#define CM1CON_CCH                               0x0
#define CM1CON_CCH_address                       0xFD2
#define CM1CON_CCH_position                      0x0
#define CM1CON_CCH_size                          0x2
#define CM1CON_CCH_value_mask                    0x3
#define CM1CON_CCH_clear_mask                    0xFC

#define C1CH0                                    0x0
#define C1CH0_address                            0xFD2
#define C1CH0_position                           0x0
#define C1CH0_size                               0x1
#define C1CH0_value_mask                         0x1
#define C1CH0_clear_mask                         0xFE

#define CM1CON_CCH0                              0x0
#define CM1CON_CCH0_address                      0xFD2
#define CM1CON_CCH0_position                     0x0
#define CM1CON_CCH0_size                         0x1
#define CM1CON_CCH0_value_mask                   0x1
#define CM1CON_CCH0_clear_mask                   0xFE

#define CCH01                                    0x0
#define CCH01_address                            0xFD2
#define CCH01_position                           0x0
#define CCH01_size                               0x1
#define CCH01_value_mask                         0x1
#define CCH01_clear_mask                         0xFE

#define CCH11                                    0x1
#define CCH11_address                            0xFD2
#define CCH11_position                           0x1
#define CCH11_size                               0x1
#define CCH11_value_mask                         0x2
#define CCH11_clear_mask                         0xFD

#define C1CH1                                    0x1
#define C1CH1_address                            0xFD2
#define C1CH1_position                           0x1
#define C1CH1_size                               0x1
#define C1CH1_value_mask                         0x2
#define C1CH1_clear_mask                         0xFD

#define CM1CON_CCH1                              0x1
#define CM1CON_CCH1_address                      0xFD2
#define CM1CON_CCH1_position                     0x1
#define CM1CON_CCH1_size                         0x1
#define CM1CON_CCH1_value_mask                   0x2
#define CM1CON_CCH1_clear_mask                   0xFD

#define CM1CON_CREF                              0x2
#define CM1CON_CREF_address                      0xFD2
#define CM1CON_CREF_position                     0x2
#define CM1CON_CREF_size                         0x1
#define CM1CON_CREF_value_mask                   0x4
#define CM1CON_CREF_clear_mask                   0xFB

#define CREF1                                    0x2
#define CREF1_address                            0xFD2
#define CREF1_position                           0x2
#define CREF1_size                               0x1
#define CREF1_value_mask                         0x4
#define CREF1_clear_mask                         0xFB

#define EVPOL01                                  0x3
#define EVPOL01_address                          0xFD2
#define EVPOL01_position                         0x3
#define EVPOL01_size                             0x1
#define EVPOL01_value_mask                       0x8
#define EVPOL01_clear_mask                       0xF7

#define CM1CON_EVPOL0                            0x3
#define CM1CON_EVPOL0_address                    0xFD2
#define CM1CON_EVPOL0_position                   0x3
#define CM1CON_EVPOL0_size                       0x1
#define CM1CON_EVPOL0_value_mask                 0x8
#define CM1CON_EVPOL0_clear_mask                 0xF7

#define CM1CON_EVPOL                             0x3
#define CM1CON_EVPOL_address                     0xFD2
#define CM1CON_EVPOL_position                    0x3
#define CM1CON_EVPOL_size                        0x2
#define CM1CON_EVPOL_value_mask                  0x18
#define CM1CON_EVPOL_clear_mask                  0xE7

#define CM1CON_EVPOL1                            0x4
#define CM1CON_EVPOL1_address                    0xFD2
#define CM1CON_EVPOL1_position                   0x4
#define CM1CON_EVPOL1_size                       0x1
#define CM1CON_EVPOL1_value_mask                 0x10
#define CM1CON_EVPOL1_clear_mask                 0xEF

#define EVPOL11                                  0x4
#define EVPOL11_address                          0xFD2
#define EVPOL11_position                         0x4
#define EVPOL11_size                             0x1
#define EVPOL11_value_mask                       0x10
#define EVPOL11_clear_mask                       0xEF

#define CM1CON_CPOL                              0x5
#define CM1CON_CPOL_address                      0xFD2
#define CM1CON_CPOL_position                     0x5
#define CM1CON_CPOL_size                         0x1
#define CM1CON_CPOL_value_mask                   0x20
#define CM1CON_CPOL_clear_mask                   0xDF

#define CPOL1                                    0x5
#define CPOL1_address                            0xFD2
#define CPOL1_position                           0x5
#define CPOL1_size                               0x1
#define CPOL1_value_mask                         0x20
#define CPOL1_clear_mask                         0xDF

#define CM1CON_COE                               0x6
#define CM1CON_COE_address                       0xFD2
#define CM1CON_COE_position                      0x6
#define CM1CON_COE_size                          0x1
#define CM1CON_COE_value_mask                    0x40
#define CM1CON_COE_clear_mask                    0xBF

#define COE1                                     0x6
#define COE1_address                             0xFD2
#define COE1_position                            0x6
#define COE1_size                                0x1
#define COE1_value_mask                          0x40
#define COE1_clear_mask                          0xBF

#define CM1CON_CON                               0x7
#define CM1CON_CON_address                       0xFD2
#define CM1CON_CON_position                      0x7
#define CM1CON_CON_size                          0x1
#define CM1CON_CON_value_mask                    0x80
#define CM1CON_CON_clear_mask                    0x7F

#define CON1                                     0x7
#define CON1_address                             0xFD2
#define CON1_position                            0x7
#define CON1_size                                0x1
#define CON1_value_mask                          0x80
#define CON1_clear_mask                          0x7F


/*-------------------------------------------------------#
| OSCCON                                           0xFD3 |
#--------------------------------------------------------#
| IDLEN | IRCF2 | IRCF1 | IRCF0 | OSTS | - | SCS1 | SCS0 |
#--------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3    | 2 | 1    | 0    |
#-------------------------------------------------------*/

#define OSCCON                                   0x0
#define OSCCON_address                           0xFD3
#define OSCCON_position                          0x0
#define OSCCON_size                              0x8
#define OSCCON_value_mask                        0xFF
#define OSCCON_clear_mask                        0x0

#define SCS0                                     0x0
#define SCS0_address                             0xFD3
#define SCS0_position                            0x0
#define SCS0_size                                0x1
#define SCS0_value_mask                          0x1
#define SCS0_clear_mask                          0xFE

#define SCS                                      0x0
#define SCS_address                              0xFD3
#define SCS_position                             0x0
#define SCS_size                                 0x2
#define SCS_value_mask                           0x3
#define SCS_clear_mask                           0xFC

#define SCS1                                     0x1
#define SCS1_address                             0xFD3
#define SCS1_position                            0x1
#define SCS1_size                                0x1
#define SCS1_value_mask                          0x2
#define SCS1_clear_mask                          0xFD

#define OSTS                                     0x3
#define OSTS_address                             0xFD3
#define OSTS_position                            0x3
#define OSTS_size                                0x1
#define OSTS_value_mask                          0x8
#define OSTS_clear_mask                          0xF7

#define IRCF                                     0x4
#define IRCF_address                             0xFD3
#define IRCF_position                            0x4
#define IRCF_size                                0x3
#define IRCF_value_mask                          0x70
#define IRCF_clear_mask                          0x8F

#define IRCF0                                    0x4
#define IRCF0_address                            0xFD3
#define IRCF0_position                           0x4
#define IRCF0_size                               0x1
#define IRCF0_value_mask                         0x10
#define IRCF0_clear_mask                         0xEF

#define IRCF1                                    0x5
#define IRCF1_address                            0xFD3
#define IRCF1_position                           0x5
#define IRCF1_size                               0x1
#define IRCF1_value_mask                         0x20
#define IRCF1_clear_mask                         0xDF

#define IRCF2                                    0x6
#define IRCF2_address                            0xFD3
#define IRCF2_position                           0x6
#define IRCF2_size                               0x1
#define IRCF2_value_mask                         0x40
#define IRCF2_clear_mask                         0xBF

#define IDLEN                                    0x7
#define IDLEN_address                            0xFD3
#define IDLEN_position                           0x7
#define IDLEN_size                               0x1
#define IDLEN_value_mask                         0x80
#define IDLEN_clear_mask                         0x7F


/*------------------------------------------------------------#
| T0CON                                                 0xFD5 |
#-------------------------------------------------------------#
| TMR0ON | T08BIT | T0CS | T0SE | PSA | T0PS2 | T0PS1 | T0PS0 |
#-------------------------------------------------------------#
| 7      | 6      | 5    | 4    | 3   | 2     | 1     | 0     |
#------------------------------------------------------------*/

#define T0CON                                    0x0
#define T0CON_address                            0xFD5
#define T0CON_position                           0x0
#define T0CON_size                               0x8
#define T0CON_value_mask                         0xFF
#define T0CON_clear_mask                         0x0

#define T0PS                                     0x0
#define T0PS_address                             0xFD5
#define T0PS_position                            0x0
#define T0PS_size                                0x3
#define T0PS_value_mask                          0x7
#define T0PS_clear_mask                          0xF8

#define T0PS0                                    0x0
#define T0PS0_address                            0xFD5
#define T0PS0_position                           0x0
#define T0PS0_size                               0x1
#define T0PS0_value_mask                         0x1
#define T0PS0_clear_mask                         0xFE

#define T0PS1                                    0x1
#define T0PS1_address                            0xFD5
#define T0PS1_position                           0x1
#define T0PS1_size                               0x1
#define T0PS1_value_mask                         0x2
#define T0PS1_clear_mask                         0xFD

#define T0PS2                                    0x2
#define T0PS2_address                            0xFD5
#define T0PS2_position                           0x2
#define T0PS2_size                               0x1
#define T0PS2_value_mask                         0x4
#define T0PS2_clear_mask                         0xFB

#define PSA                                      0x3
#define PSA_address                              0xFD5
#define PSA_position                             0x3
#define PSA_size                                 0x1
#define PSA_value_mask                           0x8
#define PSA_clear_mask                           0xF7

#define T0SE                                     0x4
#define T0SE_address                             0xFD5
#define T0SE_position                            0x4
#define T0SE_size                                0x1
#define T0SE_value_mask                          0x10
#define T0SE_clear_mask                          0xEF

#define T0CS                                     0x5
#define T0CS_address                             0xFD5
#define T0CS_position                            0x5
#define T0CS_size                                0x1
#define T0CS_value_mask                          0x20
#define T0CS_clear_mask                          0xDF

#define T08BIT                                   0x6
#define T08BIT_address                           0xFD5
#define T08BIT_position                          0x6
#define T08BIT_size                              0x1
#define T08BIT_value_mask                        0x40
#define T08BIT_clear_mask                        0xBF

#define TMR0ON                                   0x7
#define TMR0ON_address                           0xFD5
#define TMR0ON_position                          0x7
#define TMR0ON_size                              0x1
#define TMR0ON_value_mask                        0x80
#define TMR0ON_clear_mask                        0x7F


/*------------------------------#
| TMR0L                   0xFD6 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR0L                                    0x0
#define TMR0L_address                            0xFD6
#define TMR0L_position                           0x0
#define TMR0L_size                               0x8
#define TMR0L_value_mask                         0xFF
#define TMR0L_clear_mask                         0x0


/*------------------------------#
| TMR0H                   0xFD7 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR0H                                    0x0
#define TMR0H_address                            0xFD7
#define TMR0H_position                           0x0
#define TMR0H_size                               0x8
#define TMR0H_value_mask                         0xFF
#define TMR0H_clear_mask                         0x0


/*-----------------------------------#
| STATUS                       0xFD8 |
#------------------------------------#
| - | - | - | N | OV | ZERO | DC | C |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3  | 2    | 1  | 0 |
#-----------------------------------*/

#define STATUS                                   0x0
#define STATUS_address                           0xFD8
#define STATUS_position                          0x0
#define STATUS_size                              0x8
#define STATUS_value_mask                        0xFF
#define STATUS_clear_mask                        0x0

#define C                                        0x0
#define C_address                                0xFD8
#define C_position                               0x0
#define C_size                                   0x1
#define C_value_mask                             0x1
#define C_clear_mask                             0xFE

#define CARRY                                    0x0
#define CARRY_address                            0xFD8
#define CARRY_position                           0x0
#define CARRY_size                               0x1
#define CARRY_value_mask                         0x1
#define CARRY_clear_mask                         0xFE

#define DC                                       0x1
#define DC_address                               0xFD8
#define DC_position                              0x1
#define DC_size                                  0x1
#define DC_value_mask                            0x2
#define DC_clear_mask                            0xFD

#define ZERO                                     0x2
#define ZERO_address                             0xFD8
#define ZERO_position                            0x2
#define ZERO_size                                0x1
#define ZERO_value_mask                          0x4
#define ZERO_clear_mask                          0xFB

#define Z                                        0x2
#define Z_address                                0xFD8
#define Z_position                               0x2
#define Z_size                                   0x1
#define Z_value_mask                             0x4
#define Z_clear_mask                             0xFB

#define OV                                       0x3
#define OV_address                               0xFD8
#define OV_position                              0x3
#define OV_size                                  0x1
#define OV_value_mask                            0x8
#define OV_clear_mask                            0xF7

#define OVERFLOW                                 0x3
#define OVERFLOW_address                         0xFD8
#define OVERFLOW_position                        0x3
#define OVERFLOW_size                            0x1
#define OVERFLOW_value_mask                      0x8
#define OVERFLOW_clear_mask                      0xF7

#define N                                        0x4
#define N_address                                0xFD8
#define N_position                               0x4
#define N_size                                   0x1
#define N_value_mask                             0x10
#define N_clear_mask                             0xEF

#define NEGATIVE                                 0x4
#define NEGATIVE_address                         0xFD8
#define NEGATIVE_position                        0x4
#define NEGATIVE_size                            0x1
#define NEGATIVE_value_mask                      0x10
#define NEGATIVE_clear_mask                      0xEF


/*------------------------------#
| FSR2L                   0xFD9 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define FSR2L                                    0x0
#define FSR2L_address                            0xFD9
#define FSR2L_position                           0x0
#define FSR2L_size                               0x8
#define FSR2L_value_mask                         0xFF
#define FSR2L_clear_mask                         0x0


/*------------------------------#
| PLUSW2                  0xFDB |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PLUSW2                                   0x0
#define PLUSW2_address                           0xFDB
#define PLUSW2_position                          0x0
#define PLUSW2_size                              0x8
#define PLUSW2_value_mask                        0xFF
#define PLUSW2_clear_mask                        0x0


/*------------------------------#
| PREINC2                 0xFDC |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PREINC2                                  0x0
#define PREINC2_address                          0xFDC
#define PREINC2_position                         0x0
#define PREINC2_size                             0x8
#define PREINC2_value_mask                       0xFF
#define PREINC2_clear_mask                       0x0


/*------------------------------#
| POSTDEC2                0xFDD |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define POSTDEC2                                 0x0
#define POSTDEC2_address                         0xFDD
#define POSTDEC2_position                        0x0
#define POSTDEC2_size                            0x8
#define POSTDEC2_value_mask                      0xFF
#define POSTDEC2_clear_mask                      0x0


/*------------------------------#
| POSTINC2                0xFDE |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define POSTINC2                                 0x0
#define POSTINC2_address                         0xFDE
#define POSTINC2_position                        0x0
#define POSTINC2_size                            0x8
#define POSTINC2_value_mask                      0xFF
#define POSTINC2_clear_mask                      0x0


/*------------------------------#
| INDF2                   0xFDF |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define INDF2                                    0x0
#define INDF2_address                            0xFDF
#define INDF2_position                           0x0
#define INDF2_size                               0x8
#define INDF2_value_mask                         0xFF
#define INDF2_clear_mask                         0x0


/*------------------------------#
| FSR1L                   0xFE1 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define FSR1L                                    0x0
#define FSR1L_address                            0xFE1
#define FSR1L_position                           0x0
#define FSR1L_size                               0x8
#define FSR1L_value_mask                         0xFF
#define FSR1L_clear_mask                         0x0


/*------------------------------#
| PLUSW1                  0xFE3 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PLUSW1                                   0x0
#define PLUSW1_address                           0xFE3
#define PLUSW1_position                          0x0
#define PLUSW1_size                              0x8
#define PLUSW1_value_mask                        0xFF
#define PLUSW1_clear_mask                        0x0


/*------------------------------#
| PREINC1                 0xFE4 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PREINC1                                  0x0
#define PREINC1_address                          0xFE4
#define PREINC1_position                         0x0
#define PREINC1_size                             0x8
#define PREINC1_value_mask                       0xFF
#define PREINC1_clear_mask                       0x0


/*------------------------------#
| POSTDEC1                0xFE5 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define POSTDEC1                                 0x0
#define POSTDEC1_address                         0xFE5
#define POSTDEC1_position                        0x0
#define POSTDEC1_size                            0x8
#define POSTDEC1_value_mask                      0xFF
#define POSTDEC1_clear_mask                      0x0


/*------------------------------#
| POSTINC1                0xFE6 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define POSTINC1                                 0x0
#define POSTINC1_address                         0xFE6
#define POSTINC1_position                        0x0
#define POSTINC1_size                            0x8
#define POSTINC1_value_mask                      0xFF
#define POSTINC1_clear_mask                      0x0


/*------------------------------#
| INDF1                   0xFE7 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define INDF1                                    0x0
#define INDF1_address                            0xFE7
#define INDF1_position                           0x0
#define INDF1_size                               0x8
#define INDF1_value_mask                         0xFF
#define INDF1_clear_mask                         0x0


/*------------------------------#
| WREG                    0xFE8 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define WREG                                     0x0
#define WREG_address                             0xFE8
#define WREG_position                            0x0
#define WREG_size                                0x8
#define WREG_value_mask                          0xFF
#define WREG_clear_mask                          0x0


/*------------------------------#
| FSR0L                   0xFE9 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define FSR0L                                    0x0
#define FSR0L_address                            0xFE9
#define FSR0L_position                           0x0
#define FSR0L_size                               0x8
#define FSR0L_value_mask                         0xFF
#define FSR0L_clear_mask                         0x0


/*------------------------------#
| PLUSW0                  0xFEB |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PLUSW0                                   0x0
#define PLUSW0_address                           0xFEB
#define PLUSW0_position                          0x0
#define PLUSW0_size                              0x8
#define PLUSW0_value_mask                        0xFF
#define PLUSW0_clear_mask                        0x0


/*------------------------------#
| PREINC0                 0xFEC |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PREINC0                                  0x0
#define PREINC0_address                          0xFEC
#define PREINC0_position                         0x0
#define PREINC0_size                             0x8
#define PREINC0_value_mask                       0xFF
#define PREINC0_clear_mask                       0x0


/*------------------------------#
| POSTDEC0                0xFED |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define POSTDEC0                                 0x0
#define POSTDEC0_address                         0xFED
#define POSTDEC0_position                        0x0
#define POSTDEC0_size                            0x8
#define POSTDEC0_value_mask                      0xFF
#define POSTDEC0_clear_mask                      0x0


/*------------------------------#
| POSTINC0                0xFEE |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define POSTINC0                                 0x0
#define POSTINC0_address                         0xFEE
#define POSTINC0_position                        0x0
#define POSTINC0_size                            0x8
#define POSTINC0_value_mask                      0xFF
#define POSTINC0_clear_mask                      0x0


/*------------------------------#
| INDF0                   0xFEF |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define INDF0                                    0x0
#define INDF0_address                            0xFEF
#define INDF0_position                           0x0
#define INDF0_size                               0x8
#define INDF0_value_mask                         0xFF
#define INDF0_clear_mask                         0x0


/*--------------------------------------------------------------------#
| INTCON3                                                       0xFF0 |
#---------------------------------------------------------------------#
| INT2IP | INT1P | INT3E | INT2IE | INT1IE | INT3IF | INT2IF | INT1IF |
#---------------------------------------------------------------------#
| 7      | 6     | 5     | 4      | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------------*/

#define INTCON3                                  0x0
#define INTCON3_address                          0xFF0
#define INTCON3_position                         0x0
#define INTCON3_size                             0x8
#define INTCON3_value_mask                       0xFF
#define INTCON3_clear_mask                       0x0

#define INT1IF                                   0x0
#define INT1IF_address                           0xFF0
#define INT1IF_position                          0x0
#define INT1IF_size                              0x1
#define INT1IF_value_mask                        0x1
#define INT1IF_clear_mask                        0xFE

#define INT1F                                    0x0
#define INT1F_address                            0xFF0
#define INT1F_position                           0x0
#define INT1F_size                               0x1
#define INT1F_value_mask                         0x1
#define INT1F_clear_mask                         0xFE

#define INT2IF                                   0x1
#define INT2IF_address                           0xFF0
#define INT2IF_position                          0x1
#define INT2IF_size                              0x1
#define INT2IF_value_mask                        0x2
#define INT2IF_clear_mask                        0xFD

#define INT2F                                    0x1
#define INT2F_address                            0xFF0
#define INT2F_position                           0x1
#define INT2F_size                               0x1
#define INT2F_value_mask                         0x2
#define INT2F_clear_mask                         0xFD

#define INT3F                                    0x2
#define INT3F_address                            0xFF0
#define INT3F_position                           0x2
#define INT3F_size                               0x1
#define INT3F_value_mask                         0x4
#define INT3F_clear_mask                         0xFB

#define INT3IF                                   0x2
#define INT3IF_address                           0xFF0
#define INT3IF_position                          0x2
#define INT3IF_size                              0x1
#define INT3IF_value_mask                        0x4
#define INT3IF_clear_mask                        0xFB

#define INT1E                                    0x3
#define INT1E_address                            0xFF0
#define INT1E_position                           0x3
#define INT1E_size                               0x1
#define INT1E_value_mask                         0x8
#define INT1E_clear_mask                         0xF7

#define INT1IE                                   0x3
#define INT1IE_address                           0xFF0
#define INT1IE_position                          0x3
#define INT1IE_size                              0x1
#define INT1IE_value_mask                        0x8
#define INT1IE_clear_mask                        0xF7

#define INT2IE                                   0x4
#define INT2IE_address                           0xFF0
#define INT2IE_position                          0x4
#define INT2IE_size                              0x1
#define INT2IE_value_mask                        0x10
#define INT2IE_clear_mask                        0xEF

#define INT2E                                    0x4
#define INT2E_address                            0xFF0
#define INT2E_position                           0x4
#define INT2E_size                               0x1
#define INT2E_value_mask                         0x10
#define INT2E_clear_mask                         0xEF

#define INT3E                                    0x5
#define INT3E_address                            0xFF0
#define INT3E_position                           0x5
#define INT3E_size                               0x1
#define INT3E_value_mask                         0x20
#define INT3E_clear_mask                         0xDF

#define INT3IE                                   0x5
#define INT3IE_address                           0xFF0
#define INT3IE_position                          0x5
#define INT3IE_size                              0x1
#define INT3IE_value_mask                        0x20
#define INT3IE_clear_mask                        0xDF

#define INT1P                                    0x6
#define INT1P_address                            0xFF0
#define INT1P_position                           0x6
#define INT1P_size                               0x1
#define INT1P_value_mask                         0x40
#define INT1P_clear_mask                         0xBF

#define INT1IP                                   0x6
#define INT1IP_address                           0xFF0
#define INT1IP_position                          0x6
#define INT1IP_size                              0x1
#define INT1IP_value_mask                        0x40
#define INT1IP_clear_mask                        0xBF

#define INT2IP                                   0x7
#define INT2IP_address                           0xFF0
#define INT2IP_position                          0x7
#define INT2IP_size                              0x1
#define INT2IP_value_mask                        0x80
#define INT2IP_clear_mask                        0x7F

#define INT2P                                    0x7
#define INT2P_address                            0xFF0
#define INT2P_position                           0x7
#define INT2P_size                               0x1
#define INT2P_value_mask                         0x80
#define INT2P_clear_mask                         0x7F


/*--------------------------------------------------------------------------#
| INTCON2                                                             0xFF1 |
#---------------------------------------------------------------------------#
| NOT_RBPU | INTEDG0 | INTEDG1 | INTEDG2 | INTEDG3 | TMR0IP | INT3IP | RBIP |
#---------------------------------------------------------------------------#
| 7        | 6       | 5       | 4       | 3       | 2      | 1      | 0    |
#--------------------------------------------------------------------------*/

#define INTCON2                                  0x0
#define INTCON2_address                          0xFF1
#define INTCON2_position                         0x0
#define INTCON2_size                             0x8
#define INTCON2_value_mask                       0xFF
#define INTCON2_clear_mask                       0x0

#define RBIP                                     0x0
#define RBIP_address                             0xFF1
#define RBIP_position                            0x0
#define RBIP_size                                0x1
#define RBIP_value_mask                          0x1
#define RBIP_clear_mask                          0xFE

#define INT3IP                                   0x1
#define INT3IP_address                           0xFF1
#define INT3IP_position                          0x1
#define INT3IP_size                              0x1
#define INT3IP_value_mask                        0x2
#define INT3IP_clear_mask                        0xFD

#define INT3P                                    0x1
#define INT3P_address                            0xFF1
#define INT3P_position                           0x1
#define INT3P_size                               0x1
#define INT3P_value_mask                         0x2
#define INT3P_clear_mask                         0xFD

#define TMR0IP                                   0x2
#define TMR0IP_address                           0xFF1
#define TMR0IP_position                          0x2
#define TMR0IP_size                              0x1
#define TMR0IP_value_mask                        0x4
#define TMR0IP_clear_mask                        0xFB

#define T0IP                                     0x2
#define T0IP_address                             0xFF1
#define T0IP_position                            0x2
#define T0IP_size                                0x1
#define T0IP_value_mask                          0x4
#define T0IP_clear_mask                          0xFB

#define INTEDG3                                  0x3
#define INTEDG3_address                          0xFF1
#define INTEDG3_position                         0x3
#define INTEDG3_size                             0x1
#define INTEDG3_value_mask                       0x8
#define INTEDG3_clear_mask                       0xF7

#define INTEDG2                                  0x4
#define INTEDG2_address                          0xFF1
#define INTEDG2_position                         0x4
#define INTEDG2_size                             0x1
#define INTEDG2_value_mask                       0x10
#define INTEDG2_clear_mask                       0xEF

#define INTEDG1                                  0x5
#define INTEDG1_address                          0xFF1
#define INTEDG1_position                         0x5
#define INTEDG1_size                             0x1
#define INTEDG1_value_mask                       0x20
#define INTEDG1_clear_mask                       0xDF

#define INTEDG0                                  0x6
#define INTEDG0_address                          0xFF1
#define INTEDG0_position                         0x6
#define INTEDG0_size                             0x1
#define INTEDG0_value_mask                       0x40
#define INTEDG0_clear_mask                       0xBF

#define RBPU                                     0x7
#define RBPU_address                             0xFF1
#define RBPU_position                            0x7
#define RBPU_size                                0x1
#define RBPU_value_mask                          0x80
#define RBPU_clear_mask                          0x7F

#define NOT_RBPU                                 0x7
#define NOT_RBPU_address                         0xFF1
#define NOT_RBPU_position                        0x7
#define NOT_RBPU_size                            0x1
#define NOT_RBPU_value_mask                      0x80
#define NOT_RBPU_clear_mask                      0x7F

#define nRBPU                                    0x7
#define nRBPU_address                            0xFF1
#define nRBPU_position                           0x7
#define nRBPU_size                               0x1
#define nRBPU_value_mask                         0x80
#define nRBPU_clear_mask                         0x7F


/*----------------------------------------------------------------#
| INTCON                                                    0xFF2 |
#-----------------------------------------------------------------#
| GIE_GIEH | PEIE | T0IE | INT0IE | RBIE | TMR0IF | INT0IF | RBIF |
#-----------------------------------------------------------------#
| 7        | 6    | 5    | 4      | 3    | 2      | 1      | 0    |
#----------------------------------------------------------------*/

#define INTCON                                   0x0
#define INTCON_address                           0xFF2
#define INTCON_position                          0x0
#define INTCON_size                              0x8
#define INTCON_value_mask                        0xFF
#define INTCON_clear_mask                        0x0

#define RBIF                                     0x0
#define RBIF_address                             0xFF2
#define RBIF_position                            0x0
#define RBIF_size                                0x1
#define RBIF_value_mask                          0x1
#define RBIF_clear_mask                          0xFE

#define INT0F                                    0x1
#define INT0F_address                            0xFF2
#define INT0F_position                           0x1
#define INT0F_size                               0x1
#define INT0F_value_mask                         0x2
#define INT0F_clear_mask                         0xFD

#define INT0IF                                   0x1
#define INT0IF_address                           0xFF2
#define INT0IF_position                          0x1
#define INT0IF_size                              0x1
#define INT0IF_value_mask                        0x2
#define INT0IF_clear_mask                        0xFD

#define T0IF                                     0x2
#define T0IF_address                             0xFF2
#define T0IF_position                            0x2
#define T0IF_size                                0x1
#define T0IF_value_mask                          0x4
#define T0IF_clear_mask                          0xFB

#define TMR0IF                                   0x2
#define TMR0IF_address                           0xFF2
#define TMR0IF_position                          0x2
#define TMR0IF_size                              0x1
#define TMR0IF_value_mask                        0x4
#define TMR0IF_clear_mask                        0xFB

#define RBIE                                     0x3
#define RBIE_address                             0xFF2
#define RBIE_position                            0x3
#define RBIE_size                                0x1
#define RBIE_value_mask                          0x8
#define RBIE_clear_mask                          0xF7

#define INT0E                                    0x4
#define INT0E_address                            0xFF2
#define INT0E_position                           0x4
#define INT0E_size                               0x1
#define INT0E_value_mask                         0x10
#define INT0E_clear_mask                         0xEF

#define INT0IE                                   0x4
#define INT0IE_address                           0xFF2
#define INT0IE_position                          0x4
#define INT0IE_size                              0x1
#define INT0IE_value_mask                        0x10
#define INT0IE_clear_mask                        0xEF

#define T0IE                                     0x5
#define T0IE_address                             0xFF2
#define T0IE_position                            0x5
#define T0IE_size                                0x1
#define T0IE_value_mask                          0x20
#define T0IE_clear_mask                          0xDF

#define TMR0IE                                   0x5
#define TMR0IE_address                           0xFF2
#define TMR0IE_position                          0x5
#define TMR0IE_size                              0x1
#define TMR0IE_value_mask                        0x20
#define TMR0IE_clear_mask                        0xDF

#define PEIE                                     0x6
#define PEIE_address                             0xFF2
#define PEIE_position                            0x6
#define PEIE_size                                0x1
#define PEIE_value_mask                          0x40
#define PEIE_clear_mask                          0xBF

#define PEIE_GIEL                                0x6
#define PEIE_GIEL_address                        0xFF2
#define PEIE_GIEL_position                       0x6
#define PEIE_GIEL_size                           0x1
#define PEIE_GIEL_value_mask                     0x40
#define PEIE_GIEL_clear_mask                     0xBF

#define GIEL                                     0x6
#define GIEL_address                             0xFF2
#define GIEL_position                            0x6
#define GIEL_size                                0x1
#define GIEL_value_mask                          0x40
#define GIEL_clear_mask                          0xBF

#define GIE_GIEH                                 0x7
#define GIE_GIEH_address                         0xFF2
#define GIE_GIEH_position                        0x7
#define GIE_GIEH_size                            0x1
#define GIE_GIEH_value_mask                      0x80
#define GIE_GIEH_clear_mask                      0x7F

#define GIE                                      0x7
#define GIE_address                              0xFF2
#define GIE_position                             0x7
#define GIE_size                                 0x1
#define GIE_value_mask                           0x80
#define GIE_clear_mask                           0x7F

#define GIEH                                     0x7
#define GIEH_address                             0xFF2
#define GIEH_position                            0x7
#define GIEH_size                                0x1
#define GIEH_value_mask                          0x80
#define GIEH_clear_mask                          0x7F


/*------------------------------#
| PRODL                   0xFF3 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PRODL                                    0x0
#define PRODL_address                            0xFF3
#define PRODL_position                           0x0
#define PRODL_size                               0x8
#define PRODL_value_mask                         0xFF
#define PRODL_clear_mask                         0x0


/*------------------------------#
| PRODH                   0xFF4 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PRODH                                    0x0
#define PRODH_address                            0xFF4
#define PRODH_position                           0x0
#define PRODH_size                               0x8
#define PRODH_value_mask                         0xFF
#define PRODH_clear_mask                         0x0


/*------------------------------#
| TABLAT                  0xFF5 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TABLAT                                   0x0
#define TABLAT_address                           0xFF5
#define TABLAT_position                          0x0
#define TABLAT_size                              0x8
#define TABLAT_value_mask                        0xFF
#define TABLAT_clear_mask                        0x0


/*------------------------------#
| TBLPTRL                 0xFF6 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TBLPTRL                                  0x0
#define TBLPTRL_address                          0xFF6
#define TBLPTRL_position                         0x0
#define TBLPTRL_size                             0x8
#define TBLPTRL_value_mask                       0xFF
#define TBLPTRL_clear_mask                       0x0


/*------------------------------#
| TBLPTRH                 0xFF7 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TBLPTRH                                  0x0
#define TBLPTRH_address                          0xFF7
#define TBLPTRH_position                         0x0
#define TBLPTRH_size                             0x8
#define TBLPTRH_value_mask                       0xFF
#define TBLPTRH_clear_mask                       0x0


/*------------------------------#
| PCL                     0xFF9 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PCL                                      0x0
#define PCL_address                              0xFF9
#define PCL_position                             0x0
#define PCL_size                                 0x8
#define PCL_value_mask                           0xFF
#define PCL_clear_mask                           0x0


/*------------------------------#
| PCLATH                  0xFFA |
#-------------------------------#
| PCH                           |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PCLATH                                   0x0
#define PCLATH_address                           0xFFA
#define PCLATH_position                          0x0
#define PCLATH_size                              0x8
#define PCLATH_value_mask                        0xFF
#define PCLATH_clear_mask                        0x0

#define PCH                                      0x0
#define PCH_address                              0xFFA
#define PCH_position                             0x0
#define PCH_size                                 0x8
#define PCH_value_mask                           0xFF
#define PCH_clear_mask                           0x0


/*--------------------------------------------------#
| STKPTR                                      0xFFC |
#---------------------------------------------------#
| STKOVF | STKUNF | - | SP4 | SP3 | SP2 | SP1 | SP0 |
#---------------------------------------------------#
| 7      | 6      | 5 | 4   | 3   | 2   | 1   | 0   |
#--------------------------------------------------*/

#define SP0                                      0x0
#define SP0_address                              0xFFC
#define SP0_position                             0x0
#define SP0_size                                 0x1
#define SP0_value_mask                           0x1
#define SP0_clear_mask                           0xFE

#define STKPTR                                   0x0
#define STKPTR_address                           0xFFC
#define STKPTR_position                          0x0
#define STKPTR_size                              0x5
#define STKPTR_value_mask                        0x1F
#define STKPTR_clear_mask                        0xE0

#define SP1                                      0x1
#define SP1_address                              0xFFC
#define SP1_position                             0x1
#define SP1_size                                 0x1
#define SP1_value_mask                           0x2
#define SP1_clear_mask                           0xFD

#define SP2                                      0x2
#define SP2_address                              0xFFC
#define SP2_position                             0x2
#define SP2_size                                 0x1
#define SP2_value_mask                           0x4
#define SP2_clear_mask                           0xFB

#define SP3                                      0x3
#define SP3_address                              0xFFC
#define SP3_position                             0x3
#define SP3_size                                 0x1
#define SP3_value_mask                           0x8
#define SP3_clear_mask                           0xF7

#define SP4                                      0x4
#define SP4_address                              0xFFC
#define SP4_position                             0x4
#define SP4_size                                 0x1
#define SP4_value_mask                           0x10
#define SP4_clear_mask                           0xEF

#define STKUNF                                   0x6
#define STKUNF_address                           0xFFC
#define STKUNF_position                          0x6
#define STKUNF_size                              0x1
#define STKUNF_value_mask                        0x40
#define STKUNF_clear_mask                        0xBF

#define STKOVF                                   0x7
#define STKOVF_address                           0xFFC
#define STKOVF_position                          0x7
#define STKOVF_size                              0x1
#define STKOVF_value_mask                        0x80
#define STKOVF_clear_mask                        0x7F

#define STKFUL                                   0x7
#define STKFUL_address                           0xFFC
#define STKFUL_position                          0x7
#define STKFUL_size                              0x1
#define STKFUL_value_mask                        0x80
#define STKFUL_clear_mask                        0x7F


/*------------------------------#
| TOSL                    0xFFD |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TOSL                                     0x0
#define TOSL_address                             0xFFD
#define TOSL_position                            0x0
#define TOSL_size                                0x8
#define TOSL_value_mask                          0xFF
#define TOSL_clear_mask                          0x0


/*------------------------------#
| TOSH                    0xFFE |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TOSH                                     0x0
#define TOSH_address                             0xFFE
#define TOSH_position                            0x0
#define TOSH_size                                0x8
#define TOSH_value_mask                          0xFF
#define TOSH_clear_mask                          0x0

#endif // _PIC18F27J13_H_
