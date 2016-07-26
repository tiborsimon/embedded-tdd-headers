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

#ifndef _PIC18F46K22_H_
#define _PIC18F46K22_H_


/*--------------------------------------------------#
| ANSELA                                      0xF38 |
#---------------------------------------------------#
| - | - | ANSA5 | - | ANSA3 | ANSA2 | ANSA1 | ANSA0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4 | 3     | 2     | 1     | 0     |
#--------------------------------------------------*/

#define ANSELA                                   0x0
#define ANSELA_address                           0xF38
#define ANSELA_position                          0x0
#define ANSELA_size                              0x8
#define ANSELA_value_mask                        0xFF
#define ANSELA_clear_mask                        0x0

#define ANSA0                                    0x0
#define ANSA0_address                            0xF38
#define ANSA0_position                           0x0
#define ANSA0_size                               0x1
#define ANSA0_value_mask                         0x1
#define ANSA0_clear_mask                         0xFE

#define ANSA1                                    0x1
#define ANSA1_address                            0xF38
#define ANSA1_position                           0x1
#define ANSA1_size                               0x1
#define ANSA1_value_mask                         0x2
#define ANSA1_clear_mask                         0xFD

#define ANSA2                                    0x2
#define ANSA2_address                            0xF38
#define ANSA2_position                           0x2
#define ANSA2_size                               0x1
#define ANSA2_value_mask                         0x4
#define ANSA2_clear_mask                         0xFB

#define ANSA3                                    0x3
#define ANSA3_address                            0xF38
#define ANSA3_position                           0x3
#define ANSA3_size                               0x1
#define ANSA3_value_mask                         0x8
#define ANSA3_clear_mask                         0xF7

#define ANSA5                                    0x5
#define ANSA5_address                            0xF38
#define ANSA5_position                           0x5
#define ANSA5_size                               0x1
#define ANSA5_value_mask                         0x20
#define ANSA5_clear_mask                         0xDF


/*------------------------------------------------------#
| ANSELB                                          0xF39 |
#-------------------------------------------------------#
| - | - | ANSB5 | ANSB4 | ANSB3 | ANSB2 | ANSB1 | ANSB0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define ANSELB                                   0x0
#define ANSELB_address                           0xF39
#define ANSELB_position                          0x0
#define ANSELB_size                              0x8
#define ANSELB_value_mask                        0xFF
#define ANSELB_clear_mask                        0x0

#define ANSB0                                    0x0
#define ANSB0_address                            0xF39
#define ANSB0_position                           0x0
#define ANSB0_size                               0x1
#define ANSB0_value_mask                         0x1
#define ANSB0_clear_mask                         0xFE

#define ANSB1                                    0x1
#define ANSB1_address                            0xF39
#define ANSB1_position                           0x1
#define ANSB1_size                               0x1
#define ANSB1_value_mask                         0x2
#define ANSB1_clear_mask                         0xFD

#define ANSB2                                    0x2
#define ANSB2_address                            0xF39
#define ANSB2_position                           0x2
#define ANSB2_size                               0x1
#define ANSB2_value_mask                         0x4
#define ANSB2_clear_mask                         0xFB

#define ANSB3                                    0x3
#define ANSB3_address                            0xF39
#define ANSB3_position                           0x3
#define ANSB3_size                               0x1
#define ANSB3_value_mask                         0x8
#define ANSB3_clear_mask                         0xF7

#define ANSB4                                    0x4
#define ANSB4_address                            0xF39
#define ANSB4_position                           0x4
#define ANSB4_size                               0x1
#define ANSB4_value_mask                         0x10
#define ANSB4_clear_mask                         0xEF

#define ANSB5                                    0x5
#define ANSB5_address                            0xF39
#define ANSB5_position                           0x5
#define ANSB5_size                               0x1
#define ANSB5_value_mask                         0x20
#define ANSB5_clear_mask                         0xDF


/*------------------------------------------------------#
| ANSELC                                          0xF3A |
#-------------------------------------------------------#
| ANSC7 | ANSC6 | ANSC5 | ANSC4 | ANSC3 | ANSC2 | - | - |
#-------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1 | 0 |
#------------------------------------------------------*/

#define ANSELC                                   0x0
#define ANSELC_address                           0xF3A
#define ANSELC_position                          0x0
#define ANSELC_size                              0x8
#define ANSELC_value_mask                        0xFF
#define ANSELC_clear_mask                        0x0

#define ANSC2                                    0x2
#define ANSC2_address                            0xF3A
#define ANSC2_position                           0x2
#define ANSC2_size                               0x1
#define ANSC2_value_mask                         0x4
#define ANSC2_clear_mask                         0xFB

#define ANSC3                                    0x3
#define ANSC3_address                            0xF3A
#define ANSC3_position                           0x3
#define ANSC3_size                               0x1
#define ANSC3_value_mask                         0x8
#define ANSC3_clear_mask                         0xF7

#define ANSC4                                    0x4
#define ANSC4_address                            0xF3A
#define ANSC4_position                           0x4
#define ANSC4_size                               0x1
#define ANSC4_value_mask                         0x10
#define ANSC4_clear_mask                         0xEF

#define ANSC5                                    0x5
#define ANSC5_address                            0xF3A
#define ANSC5_position                           0x5
#define ANSC5_size                               0x1
#define ANSC5_value_mask                         0x20
#define ANSC5_clear_mask                         0xDF

#define ANSC6                                    0x6
#define ANSC6_address                            0xF3A
#define ANSC6_position                           0x6
#define ANSC6_size                               0x1
#define ANSC6_value_mask                         0x40
#define ANSC6_clear_mask                         0xBF

#define ANSC7                                    0x7
#define ANSC7_address                            0xF3A
#define ANSC7_position                           0x7
#define ANSC7_size                               0x1
#define ANSC7_value_mask                         0x80
#define ANSC7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| ANSELD                                                  0xF3B |
#---------------------------------------------------------------#
| ANSD7 | ANSD6 | ANSD5 | ANSD4 | ANSD3 | ANSD2 | ANSD1 | ANSD0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define ANSELD                                   0x0
#define ANSELD_address                           0xF3B
#define ANSELD_position                          0x0
#define ANSELD_size                              0x8
#define ANSELD_value_mask                        0xFF
#define ANSELD_clear_mask                        0x0

#define ANSD0                                    0x0
#define ANSD0_address                            0xF3B
#define ANSD0_position                           0x0
#define ANSD0_size                               0x1
#define ANSD0_value_mask                         0x1
#define ANSD0_clear_mask                         0xFE

#define ANSD1                                    0x1
#define ANSD1_address                            0xF3B
#define ANSD1_position                           0x1
#define ANSD1_size                               0x1
#define ANSD1_value_mask                         0x2
#define ANSD1_clear_mask                         0xFD

#define ANSD2                                    0x2
#define ANSD2_address                            0xF3B
#define ANSD2_position                           0x2
#define ANSD2_size                               0x1
#define ANSD2_value_mask                         0x4
#define ANSD2_clear_mask                         0xFB

#define ANSD3                                    0x3
#define ANSD3_address                            0xF3B
#define ANSD3_position                           0x3
#define ANSD3_size                               0x1
#define ANSD3_value_mask                         0x8
#define ANSD3_clear_mask                         0xF7

#define ANSD4                                    0x4
#define ANSD4_address                            0xF3B
#define ANSD4_position                           0x4
#define ANSD4_size                               0x1
#define ANSD4_value_mask                         0x10
#define ANSD4_clear_mask                         0xEF

#define ANSD5                                    0x5
#define ANSD5_address                            0xF3B
#define ANSD5_position                           0x5
#define ANSD5_size                               0x1
#define ANSD5_value_mask                         0x20
#define ANSD5_clear_mask                         0xDF

#define ANSD6                                    0x6
#define ANSD6_address                            0xF3B
#define ANSD6_position                           0x6
#define ANSD6_size                               0x1
#define ANSD6_value_mask                         0x40
#define ANSD6_clear_mask                         0xBF

#define ANSD7                                    0x7
#define ANSD7_address                            0xF3B
#define ANSD7_position                           0x7
#define ANSD7_size                               0x1
#define ANSD7_value_mask                         0x80
#define ANSD7_clear_mask                         0x7F


/*------------------------------------------#
| ANSELE                              0xF3C |
#-------------------------------------------#
| - | - | - | - | - | ANSE2 | ANSE1 | ANSE0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------*/

#define ANSELE                                   0x0
#define ANSELE_address                           0xF3C
#define ANSELE_position                          0x0
#define ANSELE_size                              0x8
#define ANSELE_value_mask                        0xFF
#define ANSELE_clear_mask                        0x0

#define ANSE0                                    0x0
#define ANSE0_address                            0xF3C
#define ANSE0_position                           0x0
#define ANSE0_size                               0x1
#define ANSE0_value_mask                         0x1
#define ANSE0_clear_mask                         0xFE

#define ANSE1                                    0x1
#define ANSE1_address                            0xF3C
#define ANSE1_position                           0x1
#define ANSE1_size                               0x1
#define ANSE1_value_mask                         0x2
#define ANSE1_clear_mask                         0xFD

#define ANSE2                                    0x2
#define ANSE2_address                            0xF3C
#define ANSE2_position                           0x2
#define ANSE2_size                               0x1
#define ANSE2_value_mask                         0x4
#define ANSE2_clear_mask                         0xFB


/*-------------------------------------------------#
| PMD2                                       0xF3D |
#--------------------------------------------------#
| - | - | - | - | CTMUMD | CMP2MD | CMP1MD | ADCMD |
#--------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0     |
#-------------------------------------------------*/

#define PMD2                                     0x0
#define PMD2_address                             0xF3D
#define PMD2_position                            0x0
#define PMD2_size                                0x8
#define PMD2_value_mask                          0xFF
#define PMD2_clear_mask                          0x0

#define ADCMD                                    0x0
#define ADCMD_address                            0xF3D
#define ADCMD_position                           0x0
#define ADCMD_size                               0x1
#define ADCMD_value_mask                         0x1
#define ADCMD_clear_mask                         0xFE

#define CMP1MD                                   0x1
#define CMP1MD_address                           0xF3D
#define CMP1MD_position                          0x1
#define CMP1MD_size                              0x1
#define CMP1MD_value_mask                        0x2
#define CMP1MD_clear_mask                        0xFD

#define CMP2MD                                   0x2
#define CMP2MD_address                           0xF3D
#define CMP2MD_position                          0x2
#define CMP2MD_size                              0x1
#define CMP2MD_value_mask                        0x4
#define CMP2MD_clear_mask                        0xFB

#define CTMUMD                                   0x3
#define CTMUMD_address                           0xF3D
#define CTMUMD_position                          0x3
#define CTMUMD_size                              0x1
#define CTMUMD_value_mask                        0x8
#define CTMUMD_clear_mask                        0xF7


/*------------------------------------------------------------------#
| PMD1                                                        0xF3E |
#-------------------------------------------------------------------#
| MSSP2MD | MSSP1MD | - | CCP5MD | CCP4MD | CCP3MD | CCP2MD | EMBMD |
#-------------------------------------------------------------------#
| 7       | 6       | 5 | 4      | 3      | 2      | 1      | 0     |
#------------------------------------------------------------------*/

#define PMD1                                     0x0
#define PMD1_address                             0xF3E
#define PMD1_position                            0x0
#define PMD1_size                                0x8
#define PMD1_value_mask                          0xFF
#define PMD1_clear_mask                          0x0

#define EMBMD                                    0x0
#define EMBMD_address                            0xF3E
#define EMBMD_position                           0x0
#define EMBMD_size                               0x1
#define EMBMD_value_mask                         0x1
#define EMBMD_clear_mask                         0xFE

#define CCP1MD                                   0x0
#define CCP1MD_address                           0xF3E
#define CCP1MD_position                          0x0
#define CCP1MD_size                              0x1
#define CCP1MD_value_mask                        0x1
#define CCP1MD_clear_mask                        0xFE

#define CCP2MD                                   0x1
#define CCP2MD_address                           0xF3E
#define CCP2MD_position                          0x1
#define CCP2MD_size                              0x1
#define CCP2MD_value_mask                        0x2
#define CCP2MD_clear_mask                        0xFD

#define CCP3MD                                   0x2
#define CCP3MD_address                           0xF3E
#define CCP3MD_position                          0x2
#define CCP3MD_size                              0x1
#define CCP3MD_value_mask                        0x4
#define CCP3MD_clear_mask                        0xFB

#define CCP4MD                                   0x3
#define CCP4MD_address                           0xF3E
#define CCP4MD_position                          0x3
#define CCP4MD_size                              0x1
#define CCP4MD_value_mask                        0x8
#define CCP4MD_clear_mask                        0xF7

#define CCP5MD                                   0x4
#define CCP5MD_address                           0xF3E
#define CCP5MD_position                          0x4
#define CCP5MD_size                              0x1
#define CCP5MD_value_mask                        0x10
#define CCP5MD_clear_mask                        0xEF

#define MSSP1MD                                  0x6
#define MSSP1MD_address                          0xF3E
#define MSSP1MD_position                         0x6
#define MSSP1MD_size                             0x1
#define MSSP1MD_value_mask                       0x40
#define MSSP1MD_clear_mask                       0xBF

#define MSSP2MD                                  0x7
#define MSSP2MD_address                          0xF3E
#define MSSP2MD_position                         0x7
#define MSSP2MD_size                             0x1
#define MSSP2MD_value_mask                       0x80
#define MSSP2MD_clear_mask                       0x7F


/*------------------------------------------------------------------------#
| PMD0                                                              0xF3F |
#-------------------------------------------------------------------------#
| UART2MD | UART1MD | TMR6MD | TMR5MD | TMR4MD | SPI2MD | SPI1MD | TMR1MD |
#-------------------------------------------------------------------------#
| 7       | 6       | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------------------*/

#define PMD0                                     0x0
#define PMD0_address                             0xF3F
#define PMD0_position                            0x0
#define PMD0_size                                0x8
#define PMD0_value_mask                          0xFF
#define PMD0_clear_mask                          0x0

#define TMR1MD                                   0x0
#define TMR1MD_address                           0xF3F
#define TMR1MD_position                          0x0
#define TMR1MD_size                              0x1
#define TMR1MD_value_mask                        0x1
#define TMR1MD_clear_mask                        0xFE

#define SPI1MD                                   0x1
#define SPI1MD_address                           0xF3F
#define SPI1MD_position                          0x1
#define SPI1MD_size                              0x1
#define SPI1MD_value_mask                        0x2
#define SPI1MD_clear_mask                        0xFD

#define TMR2MD                                   0x1
#define TMR2MD_address                           0xF3F
#define TMR2MD_position                          0x1
#define TMR2MD_size                              0x1
#define TMR2MD_value_mask                        0x2
#define TMR2MD_clear_mask                        0xFD

#define SPI2MD                                   0x2
#define SPI2MD_address                           0xF3F
#define SPI2MD_position                          0x2
#define SPI2MD_size                              0x1
#define SPI2MD_value_mask                        0x4
#define SPI2MD_clear_mask                        0xFB

#define TMR3MD                                   0x2
#define TMR3MD_address                           0xF3F
#define TMR3MD_position                          0x2
#define TMR3MD_size                              0x1
#define TMR3MD_value_mask                        0x4
#define TMR3MD_clear_mask                        0xFB

#define TMR4MD                                   0x3
#define TMR4MD_address                           0xF3F
#define TMR4MD_position                          0x3
#define TMR4MD_size                              0x1
#define TMR4MD_value_mask                        0x8
#define TMR4MD_clear_mask                        0xF7

#define TMR5MD                                   0x4
#define TMR5MD_address                           0xF3F
#define TMR5MD_position                          0x4
#define TMR5MD_size                              0x1
#define TMR5MD_value_mask                        0x10
#define TMR5MD_clear_mask                        0xEF

#define TMR6MD                                   0x5
#define TMR6MD_address                           0xF3F
#define TMR6MD_position                          0x5
#define TMR6MD_size                              0x1
#define TMR6MD_value_mask                        0x20
#define TMR6MD_clear_mask                        0xDF

#define UART1MD                                  0x6
#define UART1MD_address                          0xF3F
#define UART1MD_position                         0x6
#define UART1MD_size                             0x1
#define UART1MD_value_mask                       0x40
#define UART1MD_clear_mask                       0xBF

#define UART2MD                                  0x7
#define UART2MD_address                          0xF3F
#define UART2MD_position                         0x7
#define UART2MD_size                             0x1
#define UART2MD_value_mask                       0x80
#define UART2MD_clear_mask                       0x7F


/*--------------------------------------------------#
| VREFCON2                                    0xF40 |
#---------------------------------------------------#
| - | - | - | DACR4 | DACR3 | DACR2 | DACR1 | DACR0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------*/

#define VREFCON2                                 0x0
#define VREFCON2_address                         0xF40
#define VREFCON2_position                        0x0
#define VREFCON2_size                            0x8
#define VREFCON2_value_mask                      0xFF
#define VREFCON2_clear_mask                      0x0

#define DACR0                                    0x0
#define DACR0_address                            0xF40
#define DACR0_position                           0x0
#define DACR0_size                               0x1
#define DACR0_value_mask                         0x1
#define DACR0_clear_mask                         0xFE

#define DACR                                     0x0
#define DACR_address                             0xF40
#define DACR_position                            0x0
#define DACR_size                                0x5
#define DACR_value_mask                          0x1F
#define DACR_clear_mask                          0xE0

#define DACR1                                    0x1
#define DACR1_address                            0xF40
#define DACR1_position                           0x1
#define DACR1_size                               0x1
#define DACR1_value_mask                         0x2
#define DACR1_clear_mask                         0xFD

#define DACR2                                    0x2
#define DACR2_address                            0xF40
#define DACR2_position                           0x2
#define DACR2_size                               0x1
#define DACR2_value_mask                         0x4
#define DACR2_clear_mask                         0xFB

#define DACR3                                    0x3
#define DACR3_address                            0xF40
#define DACR3_position                           0x3
#define DACR3_size                               0x1
#define DACR3_value_mask                         0x8
#define DACR3_clear_mask                         0xF7

#define DACR4                                    0x4
#define DACR4_address                            0xF40
#define DACR4_position                           0x4
#define DACR4_size                               0x1
#define DACR4_value_mask                         0x10
#define DACR4_clear_mask                         0xEF


/*------------------------------------------------------------#
| VREFCON1                                              0xF41 |
#-------------------------------------------------------------#
| DACEN | DACLPS | DACOE | - | DACPSS1 | DACPSS0 | - | DACNSS |
#-------------------------------------------------------------#
| 7     | 6      | 5     | 4 | 3       | 2       | 1 | 0      |
#------------------------------------------------------------*/

#define VREFCON1                                 0x0
#define VREFCON1_address                         0xF41
#define VREFCON1_position                        0x0
#define VREFCON1_size                            0x8
#define VREFCON1_value_mask                      0xFF
#define VREFCON1_clear_mask                      0x0

#define DACNSS                                   0x0
#define DACNSS_address                           0xF41
#define DACNSS_position                          0x0
#define DACNSS_size                              0x1
#define DACNSS_value_mask                        0x1
#define DACNSS_clear_mask                        0xFE

#define DACPSS                                   0x2
#define DACPSS_address                           0xF41
#define DACPSS_position                          0x2
#define DACPSS_size                              0x2
#define DACPSS_value_mask                        0xC
#define DACPSS_clear_mask                        0xF3

#define DACPSS0                                  0x2
#define DACPSS0_address                          0xF41
#define DACPSS0_position                         0x2
#define DACPSS0_size                             0x1
#define DACPSS0_value_mask                       0x4
#define DACPSS0_clear_mask                       0xFB

#define DACPSS1                                  0x3
#define DACPSS1_address                          0xF41
#define DACPSS1_position                         0x3
#define DACPSS1_size                             0x1
#define DACPSS1_value_mask                       0x8
#define DACPSS1_clear_mask                       0xF7

#define DACOE                                    0x5
#define DACOE_address                            0xF41
#define DACOE_position                           0x5
#define DACOE_size                               0x1
#define DACOE_value_mask                         0x20
#define DACOE_clear_mask                         0xDF

#define DACLPS                                   0x6
#define DACLPS_address                           0xF41
#define DACLPS_position                          0x6
#define DACLPS_size                              0x1
#define DACLPS_value_mask                        0x40
#define DACLPS_clear_mask                        0xBF

#define DACEN                                    0x7
#define DACEN_address                            0xF41
#define DACEN_position                           0x7
#define DACEN_size                               0x1
#define DACEN_value_mask                         0x80
#define DACEN_clear_mask                         0x7F


/*----------------------------------------------#
| VREFCON0                                0xF42 |
#-----------------------------------------------#
| FVREN | FVRST | FVRS1 | FVRS0 | - | - | - | - |
#-----------------------------------------------#
| 7     | 6     | 5     | 4     | 3 | 2 | 1 | 0 |
#----------------------------------------------*/

#define VREFCON0                                 0x0
#define VREFCON0_address                         0xF42
#define VREFCON0_position                        0x0
#define VREFCON0_size                            0x8
#define VREFCON0_value_mask                      0xFF
#define VREFCON0_clear_mask                      0x0

#define FVRS                                     0x4
#define FVRS_address                             0xF42
#define FVRS_position                            0x4
#define FVRS_size                                0x2
#define FVRS_value_mask                          0x30
#define FVRS_clear_mask                          0xCF

#define FVRS0                                    0x4
#define FVRS0_address                            0xF42
#define FVRS0_position                           0x4
#define FVRS0_size                               0x1
#define FVRS0_value_mask                         0x10
#define FVRS0_clear_mask                         0xEF

#define FVRS1                                    0x5
#define FVRS1_address                            0xF42
#define FVRS1_position                           0x5
#define FVRS1_size                               0x1
#define FVRS1_value_mask                         0x20
#define FVRS1_clear_mask                         0xDF

#define FVRST                                    0x6
#define FVRST_address                            0xF42
#define FVRST_position                           0x6
#define FVRST_size                               0x1
#define FVRST_value_mask                         0x40
#define FVRST_clear_mask                         0xBF

#define FVREN                                    0x7
#define FVREN_address                            0xF42
#define FVREN_position                           0x7
#define FVREN_size                               0x1
#define FVREN_value_mask                         0x80
#define FVREN_clear_mask                         0x7F


/*--------------------------------------------------------------------#
| CTMUICON                                                      0xF43 |
#---------------------------------------------------------------------#
| ITRIM5 | ITRIM4 | ITRIM3 | ITRIM2 | ITRIM1 | ITRIM0 | IRNG1 | IRNG0 |
#---------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1     | 0     |
#--------------------------------------------------------------------*/

#define CTMUICON                                 0x0
#define CTMUICON_address                         0xF43
#define CTMUICON_position                        0x0
#define CTMUICON_size                            0x8
#define CTMUICON_value_mask                      0xFF
#define CTMUICON_clear_mask                      0x0

#define IRNG                                     0x0
#define IRNG_address                             0xF43
#define IRNG_position                            0x0
#define IRNG_size                                0x2
#define IRNG_value_mask                          0x3
#define IRNG_clear_mask                          0xFC

#define IRNG0                                    0x0
#define IRNG0_address                            0xF43
#define IRNG0_position                           0x0
#define IRNG0_size                               0x1
#define IRNG0_value_mask                         0x1
#define IRNG0_clear_mask                         0xFE

#define IRNG1                                    0x1
#define IRNG1_address                            0xF43
#define IRNG1_position                           0x1
#define IRNG1_size                               0x1
#define IRNG1_value_mask                         0x2
#define IRNG1_clear_mask                         0xFD

#define ITRIM0                                   0x2
#define ITRIM0_address                           0xF43
#define ITRIM0_position                          0x2
#define ITRIM0_size                              0x1
#define ITRIM0_value_mask                        0x4
#define ITRIM0_clear_mask                        0xFB

#define ITRIM                                    0x2
#define ITRIM_address                            0xF43
#define ITRIM_position                           0x2
#define ITRIM_size                               0x6
#define ITRIM_value_mask                         0xFC
#define ITRIM_clear_mask                         0x3

#define ITRIM1                                   0x3
#define ITRIM1_address                           0xF43
#define ITRIM1_position                          0x3
#define ITRIM1_size                              0x1
#define ITRIM1_value_mask                        0x8
#define ITRIM1_clear_mask                        0xF7

#define ITRIM2                                   0x4
#define ITRIM2_address                           0xF43
#define ITRIM2_position                          0x4
#define ITRIM2_size                              0x1
#define ITRIM2_value_mask                        0x10
#define ITRIM2_clear_mask                        0xEF

#define ITRIM3                                   0x5
#define ITRIM3_address                           0xF43
#define ITRIM3_position                          0x5
#define ITRIM3_size                              0x1
#define ITRIM3_value_mask                        0x20
#define ITRIM3_clear_mask                        0xDF

#define ITRIM4                                   0x6
#define ITRIM4_address                           0xF43
#define ITRIM4_position                          0x6
#define ITRIM4_size                              0x1
#define ITRIM4_value_mask                        0x40
#define ITRIM4_clear_mask                        0xBF

#define ITRIM5                                   0x7
#define ITRIM5_address                           0xF43
#define ITRIM5_position                          0x7
#define ITRIM5_size                              0x1
#define ITRIM5_value_mask                        0x80
#define ITRIM5_clear_mask                        0x7F


/*------------------------------------------------------------------------------------#
| CTMUCONL                                                                      0xF44 |
#-------------------------------------------------------------------------------------#
| EDG2POL | EDG2SEL1 | EDG2SEL0 | EDG1POL | EDG1SEL1 | EDG1SEL0 | EDG2STAT | EDG1STAT |
#-------------------------------------------------------------------------------------#
| 7       | 6        | 5        | 4       | 3        | 2        | 1        | 0        |
#------------------------------------------------------------------------------------*/

#define CTMUCONL                                 0x0
#define CTMUCONL_address                         0xF44
#define CTMUCONL_position                        0x0
#define CTMUCONL_size                            0x8
#define CTMUCONL_value_mask                      0xFF
#define CTMUCONL_clear_mask                      0x0

#define EDG1STAT                                 0x0
#define EDG1STAT_address                         0xF44
#define EDG1STAT_position                        0x0
#define EDG1STAT_size                            0x1
#define EDG1STAT_value_mask                      0x1
#define EDG1STAT_clear_mask                      0xFE

#define EDG2STAT                                 0x1
#define EDG2STAT_address                         0xF44
#define EDG2STAT_position                        0x1
#define EDG2STAT_size                            0x1
#define EDG2STAT_value_mask                      0x2
#define EDG2STAT_clear_mask                      0xFD

#define EDG1SEL                                  0x2
#define EDG1SEL_address                          0xF44
#define EDG1SEL_position                         0x2
#define EDG1SEL_size                             0x2
#define EDG1SEL_value_mask                       0xC
#define EDG1SEL_clear_mask                       0xF3

#define EDG1SEL0                                 0x2
#define EDG1SEL0_address                         0xF44
#define EDG1SEL0_position                        0x2
#define EDG1SEL0_size                            0x1
#define EDG1SEL0_value_mask                      0x4
#define EDG1SEL0_clear_mask                      0xFB

#define EDG1SEL1                                 0x3
#define EDG1SEL1_address                         0xF44
#define EDG1SEL1_position                        0x3
#define EDG1SEL1_size                            0x1
#define EDG1SEL1_value_mask                      0x8
#define EDG1SEL1_clear_mask                      0xF7

#define EDG1POL                                  0x4
#define EDG1POL_address                          0xF44
#define EDG1POL_position                         0x4
#define EDG1POL_size                             0x1
#define EDG1POL_value_mask                       0x10
#define EDG1POL_clear_mask                       0xEF

#define EDG2SEL0                                 0x5
#define EDG2SEL0_address                         0xF44
#define EDG2SEL0_position                        0x5
#define EDG2SEL0_size                            0x1
#define EDG2SEL0_value_mask                      0x20
#define EDG2SEL0_clear_mask                      0xDF

#define EDG2SEL                                  0x5
#define EDG2SEL_address                          0xF44
#define EDG2SEL_position                         0x5
#define EDG2SEL_size                             0x2
#define EDG2SEL_value_mask                       0x60
#define EDG2SEL_clear_mask                       0x9F

#define EDG2SEL1                                 0x6
#define EDG2SEL1_address                         0xF44
#define EDG2SEL1_position                        0x6
#define EDG2SEL1_size                            0x1
#define EDG2SEL1_value_mask                      0x40
#define EDG2SEL1_clear_mask                      0xBF

#define EDG2POL                                  0x7
#define EDG2POL_address                          0xF44
#define EDG2POL_position                         0x7
#define EDG2POL_size                             0x1
#define EDG2POL_value_mask                       0x80
#define EDG2POL_clear_mask                       0x7F


/*-------------------------------------------------------------------#
| CTMUCONH                                                     0xF45 |
#--------------------------------------------------------------------#
| CTMUEN | - | CTMUSIDL | TGEN | EDGEN | EDGSEQEN | IDISSEN | CTTRIG |
#--------------------------------------------------------------------#
| 7      | 6 | 5        | 4    | 3     | 2        | 1       | 0      |
#-------------------------------------------------------------------*/

#define CTMUCONH                                 0x0
#define CTMUCONH_address                         0xF45
#define CTMUCONH_position                        0x0
#define CTMUCONH_size                            0x8
#define CTMUCONH_value_mask                      0xFF
#define CTMUCONH_clear_mask                      0x0

#define CTTRIG                                   0x0
#define CTTRIG_address                           0xF45
#define CTTRIG_position                          0x0
#define CTTRIG_size                              0x1
#define CTTRIG_value_mask                        0x1
#define CTTRIG_clear_mask                        0xFE

#define IDISSEN                                  0x1
#define IDISSEN_address                          0xF45
#define IDISSEN_position                         0x1
#define IDISSEN_size                             0x1
#define IDISSEN_value_mask                       0x2
#define IDISSEN_clear_mask                       0xFD

#define EDGSEQEN                                 0x2
#define EDGSEQEN_address                         0xF45
#define EDGSEQEN_position                        0x2
#define EDGSEQEN_size                            0x1
#define EDGSEQEN_value_mask                      0x4
#define EDGSEQEN_clear_mask                      0xFB

#define EDGEN                                    0x3
#define EDGEN_address                            0xF45
#define EDGEN_position                           0x3
#define EDGEN_size                               0x1
#define EDGEN_value_mask                         0x8
#define EDGEN_clear_mask                         0xF7

#define TGEN                                     0x4
#define TGEN_address                             0xF45
#define TGEN_position                            0x4
#define TGEN_size                                0x1
#define TGEN_value_mask                          0x10
#define TGEN_clear_mask                          0xEF

#define CTMUSIDL                                 0x5
#define CTMUSIDL_address                         0xF45
#define CTMUSIDL_position                        0x5
#define CTMUSIDL_size                            0x1
#define CTMUSIDL_value_mask                      0x20
#define CTMUSIDL_clear_mask                      0xDF

#define CTMUEN                                   0x7
#define CTMUEN_address                           0xF45
#define CTMUEN_position                          0x7
#define CTMUEN_size                              0x1
#define CTMUEN_value_mask                        0x80
#define CTMUEN_clear_mask                        0x7F


/*--------------------------------------------------------------------#
| SRCON1                                                        0xF46 |
#---------------------------------------------------------------------#
| SRSPE | SRSCKE | SRSC2E | SRSC1E | SRRPE | SRRCKE | SRRC2E | SRRC1E |
#---------------------------------------------------------------------#
| 7     | 6      | 5      | 4      | 3     | 2      | 1      | 0      |
#--------------------------------------------------------------------*/

#define SRCON1                                   0x0
#define SRCON1_address                           0xF46
#define SRCON1_position                          0x0
#define SRCON1_size                              0x8
#define SRCON1_value_mask                        0xFF
#define SRCON1_clear_mask                        0x0

#define SRRC1E                                   0x0
#define SRRC1E_address                           0xF46
#define SRRC1E_position                          0x0
#define SRRC1E_size                              0x1
#define SRRC1E_value_mask                        0x1
#define SRRC1E_clear_mask                        0xFE

#define SRRC2E                                   0x1
#define SRRC2E_address                           0xF46
#define SRRC2E_position                          0x1
#define SRRC2E_size                              0x1
#define SRRC2E_value_mask                        0x2
#define SRRC2E_clear_mask                        0xFD

#define SRRCKE                                   0x2
#define SRRCKE_address                           0xF46
#define SRRCKE_position                          0x2
#define SRRCKE_size                              0x1
#define SRRCKE_value_mask                        0x4
#define SRRCKE_clear_mask                        0xFB

#define SRRPE                                    0x3
#define SRRPE_address                            0xF46
#define SRRPE_position                           0x3
#define SRRPE_size                               0x1
#define SRRPE_value_mask                         0x8
#define SRRPE_clear_mask                         0xF7

#define SRSC1E                                   0x4
#define SRSC1E_address                           0xF46
#define SRSC1E_position                          0x4
#define SRSC1E_size                              0x1
#define SRSC1E_value_mask                        0x10
#define SRSC1E_clear_mask                        0xEF

#define SRSC2E                                   0x5
#define SRSC2E_address                           0xF46
#define SRSC2E_position                          0x5
#define SRSC2E_size                              0x1
#define SRSC2E_value_mask                        0x20
#define SRSC2E_clear_mask                        0xDF

#define SRSCKE                                   0x6
#define SRSCKE_address                           0xF46
#define SRSCKE_position                          0x6
#define SRSCKE_size                              0x1
#define SRSCKE_value_mask                        0x40
#define SRSCKE_clear_mask                        0xBF

#define SRSPE                                    0x7
#define SRSPE_address                            0xF46
#define SRSPE_position                           0x7
#define SRSPE_size                               0x1
#define SRSPE_value_mask                         0x80
#define SRSPE_clear_mask                         0x7F


/*----------------------------------------------------------------#
| SRCON0                                                    0xF47 |
#-----------------------------------------------------------------#
| SRLEN | SRCLK2 | SRCLK1 | SRCLK0 | SRQEN | SRNQEN | SRPS | SRPR |
#-----------------------------------------------------------------#
| 7     | 6      | 5      | 4      | 3     | 2      | 1    | 0    |
#----------------------------------------------------------------*/

#define SRCON0                                   0x0
#define SRCON0_address                           0xF47
#define SRCON0_position                          0x0
#define SRCON0_size                              0x8
#define SRCON0_value_mask                        0xFF
#define SRCON0_clear_mask                        0x0

#define SRPR                                     0x0
#define SRPR_address                             0xF47
#define SRPR_position                            0x0
#define SRPR_size                                0x1
#define SRPR_value_mask                          0x1
#define SRPR_clear_mask                          0xFE

#define SRPS                                     0x1
#define SRPS_address                             0xF47
#define SRPS_position                            0x1
#define SRPS_size                                0x1
#define SRPS_value_mask                          0x2
#define SRPS_clear_mask                          0xFD

#define SRNQEN                                   0x2
#define SRNQEN_address                           0xF47
#define SRNQEN_position                          0x2
#define SRNQEN_size                              0x1
#define SRNQEN_value_mask                        0x4
#define SRNQEN_clear_mask                        0xFB

#define SRQEN                                    0x3
#define SRQEN_address                            0xF47
#define SRQEN_position                           0x3
#define SRQEN_size                               0x1
#define SRQEN_value_mask                         0x8
#define SRQEN_clear_mask                         0xF7

#define SRCLK0                                   0x4
#define SRCLK0_address                           0xF47
#define SRCLK0_position                          0x4
#define SRCLK0_size                              0x1
#define SRCLK0_value_mask                        0x10
#define SRCLK0_clear_mask                        0xEF

#define SRCLK                                    0x4
#define SRCLK_address                            0xF47
#define SRCLK_position                           0x4
#define SRCLK_size                               0x3
#define SRCLK_value_mask                         0x70
#define SRCLK_clear_mask                         0x8F

#define SRCLK1                                   0x5
#define SRCLK1_address                           0xF47
#define SRCLK1_position                          0x5
#define SRCLK1_size                              0x1
#define SRCLK1_value_mask                        0x20
#define SRCLK1_clear_mask                        0xDF

#define SRCLK2                                   0x6
#define SRCLK2_address                           0xF47
#define SRCLK2_position                          0x6
#define SRCLK2_size                              0x1
#define SRCLK2_value_mask                        0x40
#define SRCLK2_clear_mask                        0xBF

#define SRLEN                                    0x7
#define SRLEN_address                            0xF47
#define SRLEN_position                           0x7
#define SRLEN_size                               0x1
#define SRLEN_value_mask                         0x80
#define SRLEN_clear_mask                         0x7F


/*------------------------------------------------------#
| CCPTMRS1                                        0xF48 |
#-------------------------------------------------------#
| - | - | - | - | C5TSEL1 | C5TSEL0 | C4TSEL1 | C4TSEL0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define CCPTMRS1                                 0x0
#define CCPTMRS1_address                         0xF48
#define CCPTMRS1_position                        0x0
#define CCPTMRS1_size                            0x8
#define CCPTMRS1_value_mask                      0xFF
#define CCPTMRS1_clear_mask                      0x0

#define C4TSEL                                   0x0
#define C4TSEL_address                           0xF48
#define C4TSEL_position                          0x0
#define C4TSEL_size                              0x2
#define C4TSEL_value_mask                        0x3
#define C4TSEL_clear_mask                        0xFC

#define C4TSEL0                                  0x0
#define C4TSEL0_address                          0xF48
#define C4TSEL0_position                         0x0
#define C4TSEL0_size                             0x1
#define C4TSEL0_value_mask                       0x1
#define C4TSEL0_clear_mask                       0xFE

#define C4TSEL1                                  0x1
#define C4TSEL1_address                          0xF48
#define C4TSEL1_position                         0x1
#define C4TSEL1_size                             0x1
#define C4TSEL1_value_mask                       0x2
#define C4TSEL1_clear_mask                       0xFD

#define C5TSEL                                   0x2
#define C5TSEL_address                           0xF48
#define C5TSEL_position                          0x2
#define C5TSEL_size                              0x2
#define C5TSEL_value_mask                        0xC
#define C5TSEL_clear_mask                        0xF3

#define C5TSEL0                                  0x2
#define C5TSEL0_address                          0xF48
#define C5TSEL0_position                         0x2
#define C5TSEL0_size                             0x1
#define C5TSEL0_value_mask                       0x4
#define C5TSEL0_clear_mask                       0xFB

#define C5TSEL1                                  0x3
#define C5TSEL1_address                          0xF48
#define C5TSEL1_position                         0x3
#define C5TSEL1_size                             0x1
#define C5TSEL1_value_mask                       0x8
#define C5TSEL1_clear_mask                       0xF7


/*------------------------------------------------------------------#
| CCPTMRS0                                                    0xF49 |
#-------------------------------------------------------------------#
| C3TSEL1 | C3TSEL0 | - | C2TSEL1 | C2TSEL0 | - | C1TSEL1 | C1TSEL0 |
#-------------------------------------------------------------------#
| 7       | 6       | 5 | 4       | 3       | 2 | 1       | 0       |
#------------------------------------------------------------------*/

#define CCPTMRS0                                 0x0
#define CCPTMRS0_address                         0xF49
#define CCPTMRS0_position                        0x0
#define CCPTMRS0_size                            0x8
#define CCPTMRS0_value_mask                      0xFF
#define CCPTMRS0_clear_mask                      0x0

#define C1TSEL0                                  0x0
#define C1TSEL0_address                          0xF49
#define C1TSEL0_position                         0x0
#define C1TSEL0_size                             0x1
#define C1TSEL0_value_mask                       0x1
#define C1TSEL0_clear_mask                       0xFE

#define C1TSEL                                   0x0
#define C1TSEL_address                           0xF49
#define C1TSEL_position                          0x0
#define C1TSEL_size                              0x2
#define C1TSEL_value_mask                        0x3
#define C1TSEL_clear_mask                        0xFC

#define C1TSEL1                                  0x1
#define C1TSEL1_address                          0xF49
#define C1TSEL1_position                         0x1
#define C1TSEL1_size                             0x1
#define C1TSEL1_value_mask                       0x2
#define C1TSEL1_clear_mask                       0xFD

#define C2TSEL0                                  0x3
#define C2TSEL0_address                          0xF49
#define C2TSEL0_position                         0x3
#define C2TSEL0_size                             0x1
#define C2TSEL0_value_mask                       0x8
#define C2TSEL0_clear_mask                       0xF7

#define C2TSEL                                   0x3
#define C2TSEL_address                           0xF49
#define C2TSEL_position                          0x3
#define C2TSEL_size                              0x2
#define C2TSEL_value_mask                        0x18
#define C2TSEL_clear_mask                        0xE7

#define C2TSEL1                                  0x4
#define C2TSEL1_address                          0xF49
#define C2TSEL1_position                         0x4
#define C2TSEL1_size                             0x1
#define C2TSEL1_value_mask                       0x10
#define C2TSEL1_clear_mask                       0xEF

#define C3TSEL0                                  0x6
#define C3TSEL0_address                          0xF49
#define C3TSEL0_position                         0x6
#define C3TSEL0_size                             0x1
#define C3TSEL0_value_mask                       0x40
#define C3TSEL0_clear_mask                       0xBF

#define C3TSEL                                   0x6
#define C3TSEL_address                           0xF49
#define C3TSEL_position                          0x6
#define C3TSEL_size                              0x2
#define C3TSEL_value_mask                        0xC0
#define C3TSEL_clear_mask                        0x3F

#define C3TSEL1                                  0x7
#define C3TSEL1_address                          0xF49
#define C3TSEL1_position                         0x7
#define C3TSEL1_size                             0x1
#define C3TSEL1_value_mask                       0x80
#define C3TSEL1_clear_mask                       0x7F


/*---------------------------------------------------------------------------#
| T6CON                                                                0xF4A |
#----------------------------------------------------------------------------#
| - | T6OUTPS3 | T6OUTPS2 | T6OUTPS1 | T6OUTPS0 | TMR6ON | T6CKPS1 | T6CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T6CON                                    0x0
#define T6CON_address                            0xF4A
#define T6CON_position                           0x0
#define T6CON_size                               0x8
#define T6CON_value_mask                         0xFF
#define T6CON_clear_mask                         0x0

#define T6CKPS0                                  0x0
#define T6CKPS0_address                          0xF4A
#define T6CKPS0_position                         0x0
#define T6CKPS0_size                             0x1
#define T6CKPS0_value_mask                       0x1
#define T6CKPS0_clear_mask                       0xFE

#define T6CKPS                                   0x0
#define T6CKPS_address                           0xF4A
#define T6CKPS_position                          0x0
#define T6CKPS_size                              0x2
#define T6CKPS_value_mask                        0x3
#define T6CKPS_clear_mask                        0xFC

#define T6CKPS1                                  0x1
#define T6CKPS1_address                          0xF4A
#define T6CKPS1_position                         0x1
#define T6CKPS1_size                             0x1
#define T6CKPS1_value_mask                       0x2
#define T6CKPS1_clear_mask                       0xFD

#define TMR6ON                                   0x2
#define TMR6ON_address                           0xF4A
#define TMR6ON_position                          0x2
#define TMR6ON_size                              0x1
#define TMR6ON_value_mask                        0x4
#define TMR6ON_clear_mask                        0xFB

#define T6OUTPS0                                 0x3
#define T6OUTPS0_address                         0xF4A
#define T6OUTPS0_position                        0x3
#define T6OUTPS0_size                            0x1
#define T6OUTPS0_value_mask                      0x8
#define T6OUTPS0_clear_mask                      0xF7

#define T6OUTPS                                  0x3
#define T6OUTPS_address                          0xF4A
#define T6OUTPS_position                         0x3
#define T6OUTPS_size                             0x4
#define T6OUTPS_value_mask                       0x78
#define T6OUTPS_clear_mask                       0x87

#define T6OUTPS1                                 0x4
#define T6OUTPS1_address                         0xF4A
#define T6OUTPS1_position                        0x4
#define T6OUTPS1_size                            0x1
#define T6OUTPS1_value_mask                      0x10
#define T6OUTPS1_clear_mask                      0xEF

#define T6OUTPS2                                 0x5
#define T6OUTPS2_address                         0xF4A
#define T6OUTPS2_position                        0x5
#define T6OUTPS2_size                            0x1
#define T6OUTPS2_value_mask                      0x20
#define T6OUTPS2_clear_mask                      0xDF

#define T6OUTPS3                                 0x6
#define T6OUTPS3_address                         0xF4A
#define T6OUTPS3_position                        0x6
#define T6OUTPS3_size                            0x1
#define T6OUTPS3_value_mask                      0x40
#define T6OUTPS3_clear_mask                      0xBF


/*------------------------------#
| PR6                     0xF4B |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR6                                      0x0
#define PR6_address                              0xF4B
#define PR6_position                             0x0
#define PR6_size                                 0x8
#define PR6_value_mask                           0xFF
#define PR6_clear_mask                           0x0


/*------------------------------#
| TMR6                    0xF4C |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR6                                     0x0
#define TMR6_address                             0xF4C
#define TMR6_position                            0x0
#define TMR6_size                                0x8
#define TMR6_value_mask                          0xFF
#define TMR6_clear_mask                          0x0


/*-----------------------------------------------------------------------#
| T5GCON                                                           0xF4D |
#------------------------------------------------------------------------#
| TMR5GE | T5GPOL | T5GTM | T5GSPM | T5G_DONE | T5GVAL | T5GSS1 | T5GSS0 |
#------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3        | 2      | 1      | 0      |
#-----------------------------------------------------------------------*/

#define T5GCON                                   0x0
#define T5GCON_address                           0xF4D
#define T5GCON_position                          0x0
#define T5GCON_size                              0x8
#define T5GCON_value_mask                        0xFF
#define T5GCON_clear_mask                        0x0

#define T5GSS                                    0x0
#define T5GSS_address                            0xF4D
#define T5GSS_position                           0x0
#define T5GSS_size                               0x2
#define T5GSS_value_mask                         0x3
#define T5GSS_clear_mask                         0xFC

#define T5GSS0                                   0x0
#define T5GSS0_address                           0xF4D
#define T5GSS0_position                          0x0
#define T5GSS0_size                              0x1
#define T5GSS0_value_mask                        0x1
#define T5GSS0_clear_mask                        0xFE

#define T5GSS1                                   0x1
#define T5GSS1_address                           0xF4D
#define T5GSS1_position                          0x1
#define T5GSS1_size                              0x1
#define T5GSS1_value_mask                        0x2
#define T5GSS1_clear_mask                        0xFD

#define T5GVAL                                   0x2
#define T5GVAL_address                           0xF4D
#define T5GVAL_position                          0x2
#define T5GVAL_size                              0x1
#define T5GVAL_value_mask                        0x4
#define T5GVAL_clear_mask                        0xFB

#define T5G_DONE                                 0x3
#define T5G_DONE_address                         0xF4D
#define T5G_DONE_position                        0x3
#define T5G_DONE_size                            0x1
#define T5G_DONE_value_mask                      0x8
#define T5G_DONE_clear_mask                      0xF7

#define T5GGO_NOT_DONE                           0x3
#define T5GGO_NOT_DONE_address                   0xF4D
#define T5GGO_NOT_DONE_position                  0x3
#define T5GGO_NOT_DONE_size                      0x1
#define T5GGO_NOT_DONE_value_mask                0x8
#define T5GGO_NOT_DONE_clear_mask                0xF7

#define T5GGO_nDONE                              0x3
#define T5GGO_nDONE_address                      0xF4D
#define T5GGO_nDONE_position                     0x3
#define T5GGO_nDONE_size                         0x1
#define T5GGO_nDONE_value_mask                   0x8
#define T5GGO_nDONE_clear_mask                   0xF7

#define T5GGO                                    0x3
#define T5GGO_address                            0xF4D
#define T5GGO_position                           0x3
#define T5GGO_size                               0x1
#define T5GGO_value_mask                         0x8
#define T5GGO_clear_mask                         0xF7

#define T5GSPM                                   0x4
#define T5GSPM_address                           0xF4D
#define T5GSPM_position                          0x4
#define T5GSPM_size                              0x1
#define T5GSPM_value_mask                        0x10
#define T5GSPM_clear_mask                        0xEF

#define T5GTM                                    0x5
#define T5GTM_address                            0xF4D
#define T5GTM_position                           0x5
#define T5GTM_size                               0x1
#define T5GTM_value_mask                         0x20
#define T5GTM_clear_mask                         0xDF

#define T5GPOL                                   0x6
#define T5GPOL_address                           0xF4D
#define T5GPOL_position                          0x6
#define T5GPOL_size                              0x1
#define T5GPOL_value_mask                        0x40
#define T5GPOL_clear_mask                        0xBF

#define TMR5GE                                   0x7
#define TMR5GE_address                           0xF4D
#define TMR5GE_position                          0x7
#define TMR5GE_size                              0x1
#define TMR5GE_value_mask                        0x80
#define TMR5GE_clear_mask                        0x7F


/*---------------------------------------------------------------------------#
| T5CON                                                                0xF4E |
#----------------------------------------------------------------------------#
| TMR5CS1 | TMR5CS0 | T5CKPS1 | T5CKPS0 | SOSCEN5 | T5SYNC | T5RD16 | TMR5ON |
#----------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2      | 1      | 0      |
#---------------------------------------------------------------------------*/

#define T5CON                                    0x0
#define T5CON_address                            0xF4E
#define T5CON_position                           0x0
#define T5CON_size                               0x8
#define T5CON_value_mask                         0xFF
#define T5CON_clear_mask                         0x0

#define TMR5ON                                   0x0
#define TMR5ON_address                           0xF4E
#define TMR5ON_position                          0x0
#define TMR5ON_size                              0x1
#define TMR5ON_value_mask                        0x1
#define TMR5ON_clear_mask                        0xFE

#define T5RD16                                   0x1
#define T5RD16_address                           0xF4E
#define T5RD16_position                          0x1
#define T5RD16_size                              0x1
#define T5RD16_value_mask                        0x2
#define T5RD16_clear_mask                        0xFD

#define RD165                                    0x1
#define RD165_address                            0xF4E
#define RD165_position                           0x1
#define RD165_size                               0x1
#define RD165_value_mask                         0x2
#define RD165_clear_mask                         0xFD

#define T5SYNC                                   0x2
#define T5SYNC_address                           0xF4E
#define T5SYNC_position                          0x2
#define T5SYNC_size                              0x1
#define T5SYNC_value_mask                        0x4
#define T5SYNC_clear_mask                        0xFB

#define nT5SYNC                                  0x2
#define nT5SYNC_address                          0xF4E
#define nT5SYNC_position                         0x2
#define nT5SYNC_size                             0x1
#define nT5SYNC_value_mask                       0x4
#define nT5SYNC_clear_mask                       0xFB

#define NOT_T5SYNC                               0x2
#define NOT_T5SYNC_address                       0xF4E
#define NOT_T5SYNC_position                      0x2
#define NOT_T5SYNC_size                          0x1
#define NOT_T5SYNC_value_mask                    0x4
#define NOT_T5SYNC_clear_mask                    0xFB

#define SOSCEN5                                  0x3
#define SOSCEN5_address                          0xF4E
#define SOSCEN5_position                         0x3
#define SOSCEN5_size                             0x1
#define SOSCEN5_value_mask                       0x8
#define SOSCEN5_clear_mask                       0xF7

#define T5SOSCEN                                 0x3
#define T5SOSCEN_address                         0xF4E
#define T5SOSCEN_position                        0x3
#define T5SOSCEN_size                            0x1
#define T5SOSCEN_value_mask                      0x8
#define T5SOSCEN_clear_mask                      0xF7

#define T5CKPS                                   0x4
#define T5CKPS_address                           0xF4E
#define T5CKPS_position                          0x4
#define T5CKPS_size                              0x2
#define T5CKPS_value_mask                        0x30
#define T5CKPS_clear_mask                        0xCF

#define T5CKPS0                                  0x4
#define T5CKPS0_address                          0xF4E
#define T5CKPS0_position                         0x4
#define T5CKPS0_size                             0x1
#define T5CKPS0_value_mask                       0x10
#define T5CKPS0_clear_mask                       0xEF

#define T5CKPS1                                  0x5
#define T5CKPS1_address                          0xF4E
#define T5CKPS1_position                         0x5
#define T5CKPS1_size                             0x1
#define T5CKPS1_value_mask                       0x20
#define T5CKPS1_clear_mask                       0xDF

#define TMR5CS0                                  0x6
#define TMR5CS0_address                          0xF4E
#define TMR5CS0_position                         0x6
#define TMR5CS0_size                             0x1
#define TMR5CS0_value_mask                       0x40
#define TMR5CS0_clear_mask                       0xBF

#define TMR5CS                                   0x6
#define TMR5CS_address                           0xF4E
#define TMR5CS_position                          0x6
#define TMR5CS_size                              0x2
#define TMR5CS_value_mask                        0xC0
#define TMR5CS_clear_mask                        0x3F

#define TMR5CS1                                  0x7
#define TMR5CS1_address                          0xF4E
#define TMR5CS1_position                         0x7
#define TMR5CS1_size                             0x1
#define TMR5CS1_value_mask                       0x80
#define TMR5CS1_clear_mask                       0x7F


/*------------------------------#
| TMR5L                   0xF4F |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR5L                                    0x0
#define TMR5L_address                            0xF4F
#define TMR5L_position                           0x0
#define TMR5L_size                               0x8
#define TMR5L_value_mask                         0xFF
#define TMR5L_clear_mask                         0x0


/*------------------------------#
| TMR5H                   0xF50 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR5H                                    0x0
#define TMR5H_address                            0xF50
#define TMR5H_position                           0x0
#define TMR5H_size                               0x8
#define TMR5H_value_mask                         0xFF
#define TMR5H_clear_mask                         0x0


/*---------------------------------------------------------------------------#
| T4CON                                                                0xF51 |
#----------------------------------------------------------------------------#
| - | T4OUTPS3 | T4OUTPS2 | T4OUTPS1 | T4OUTPS0 | TMR4ON | T4CKPS1 | T4CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T4CON                                    0x0
#define T4CON_address                            0xF51
#define T4CON_position                           0x0
#define T4CON_size                               0x8
#define T4CON_value_mask                         0xFF
#define T4CON_clear_mask                         0x0

#define T4CKPS0                                  0x0
#define T4CKPS0_address                          0xF51
#define T4CKPS0_position                         0x0
#define T4CKPS0_size                             0x1
#define T4CKPS0_value_mask                       0x1
#define T4CKPS0_clear_mask                       0xFE

#define T4CKPS                                   0x0
#define T4CKPS_address                           0xF51
#define T4CKPS_position                          0x0
#define T4CKPS_size                              0x2
#define T4CKPS_value_mask                        0x3
#define T4CKPS_clear_mask                        0xFC

#define T4CKPS1                                  0x1
#define T4CKPS1_address                          0xF51
#define T4CKPS1_position                         0x1
#define T4CKPS1_size                             0x1
#define T4CKPS1_value_mask                       0x2
#define T4CKPS1_clear_mask                       0xFD

#define TMR4ON                                   0x2
#define TMR4ON_address                           0xF51
#define TMR4ON_position                          0x2
#define TMR4ON_size                              0x1
#define TMR4ON_value_mask                        0x4
#define TMR4ON_clear_mask                        0xFB

#define T4OUTPS                                  0x3
#define T4OUTPS_address                          0xF51
#define T4OUTPS_position                         0x3
#define T4OUTPS_size                             0x4
#define T4OUTPS_value_mask                       0x78
#define T4OUTPS_clear_mask                       0x87

#define T4OUTPS0                                 0x3
#define T4OUTPS0_address                         0xF51
#define T4OUTPS0_position                        0x3
#define T4OUTPS0_size                            0x1
#define T4OUTPS0_value_mask                      0x8
#define T4OUTPS0_clear_mask                      0xF7

#define T4OUTPS1                                 0x4
#define T4OUTPS1_address                         0xF51
#define T4OUTPS1_position                        0x4
#define T4OUTPS1_size                            0x1
#define T4OUTPS1_value_mask                      0x10
#define T4OUTPS1_clear_mask                      0xEF

#define T4OUTPS2                                 0x5
#define T4OUTPS2_address                         0xF51
#define T4OUTPS2_position                        0x5
#define T4OUTPS2_size                            0x1
#define T4OUTPS2_value_mask                      0x20
#define T4OUTPS2_clear_mask                      0xDF

#define T4OUTPS3                                 0x6
#define T4OUTPS3_address                         0xF51
#define T4OUTPS3_position                        0x6
#define T4OUTPS3_size                            0x1
#define T4OUTPS3_value_mask                      0x40
#define T4OUTPS3_clear_mask                      0xBF


/*------------------------------#
| PR4                     0xF52 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR4                                      0x0
#define PR4_address                              0xF52
#define PR4_position                             0x0
#define PR4_size                                 0x8
#define PR4_value_mask                           0xFF
#define PR4_clear_mask                           0x0


/*------------------------------#
| TMR4                    0xF53 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR4                                     0x0
#define TMR4_address                             0xF53
#define TMR4_position                            0x0
#define TMR4_size                                0x8
#define TMR4_value_mask                          0xFF
#define TMR4_clear_mask                          0x0


/*----------------------------------------------------------#
| CCP5CON                                             0xF54 |
#-----------------------------------------------------------#
| - | - | DC5B1 | DC5B0 | CCP5M3 | CCP5M2 | CCP5M1 | CCP5M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP5CON                                  0x0
#define CCP5CON_address                          0xF54
#define CCP5CON_position                         0x0
#define CCP5CON_size                             0x8
#define CCP5CON_value_mask                       0xFF
#define CCP5CON_clear_mask                       0x0

#define CCP5M0                                   0x0
#define CCP5M0_address                           0xF54
#define CCP5M0_position                          0x0
#define CCP5M0_size                              0x1
#define CCP5M0_value_mask                        0x1
#define CCP5M0_clear_mask                        0xFE

#define CCP5M                                    0x0
#define CCP5M_address                            0xF54
#define CCP5M_position                           0x0
#define CCP5M_size                               0x4
#define CCP5M_value_mask                         0xF
#define CCP5M_clear_mask                         0xF0

#define CCP5M1                                   0x1
#define CCP5M1_address                           0xF54
#define CCP5M1_position                          0x1
#define CCP5M1_size                              0x1
#define CCP5M1_value_mask                        0x2
#define CCP5M1_clear_mask                        0xFD

#define CCP5M2                                   0x2
#define CCP5M2_address                           0xF54
#define CCP5M2_position                          0x2
#define CCP5M2_size                              0x1
#define CCP5M2_value_mask                        0x4
#define CCP5M2_clear_mask                        0xFB

#define CCP5M3                                   0x3
#define CCP5M3_address                           0xF54
#define CCP5M3_position                          0x3
#define CCP5M3_size                              0x1
#define CCP5M3_value_mask                        0x8
#define CCP5M3_clear_mask                        0xF7

#define DC5B0                                    0x4
#define DC5B0_address                            0xF54
#define DC5B0_position                           0x4
#define DC5B0_size                               0x1
#define DC5B0_value_mask                         0x10
#define DC5B0_clear_mask                         0xEF

#define DC5B                                     0x4
#define DC5B_address                             0xF54
#define DC5B_position                            0x4
#define DC5B_size                                0x2
#define DC5B_value_mask                          0x30
#define DC5B_clear_mask                          0xCF

#define DC5B1                                    0x5
#define DC5B1_address                            0xF54
#define DC5B1_position                           0x5
#define DC5B1_size                               0x1
#define DC5B1_value_mask                         0x20
#define DC5B1_clear_mask                         0xDF


/*------------------------------#
| CCPR5L                  0xF55 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR5L                                   0x0
#define CCPR5L_address                           0xF55
#define CCPR5L_position                          0x0
#define CCPR5L_size                              0x8
#define CCPR5L_value_mask                        0xFF
#define CCPR5L_clear_mask                        0x0


/*------------------------------#
| CCPR5H                  0xF56 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR5H                                   0x0
#define CCPR5H_address                           0xF56
#define CCPR5H_position                          0x0
#define CCPR5H_size                              0x8
#define CCPR5H_value_mask                        0xFF
#define CCPR5H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP4CON                                             0xF57 |
#-----------------------------------------------------------#
| - | - | DC4B1 | DC4B0 | CCP4M3 | CCP4M2 | CCP4M1 | CCP4M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP4CON                                  0x0
#define CCP4CON_address                          0xF57
#define CCP4CON_position                         0x0
#define CCP4CON_size                             0x8
#define CCP4CON_value_mask                       0xFF
#define CCP4CON_clear_mask                       0x0

#define CCP4M                                    0x0
#define CCP4M_address                            0xF57
#define CCP4M_position                           0x0
#define CCP4M_size                               0x4
#define CCP4M_value_mask                         0xF
#define CCP4M_clear_mask                         0xF0

#define CCP4M0                                   0x0
#define CCP4M0_address                           0xF57
#define CCP4M0_position                          0x0
#define CCP4M0_size                              0x1
#define CCP4M0_value_mask                        0x1
#define CCP4M0_clear_mask                        0xFE

#define CCP4M1                                   0x1
#define CCP4M1_address                           0xF57
#define CCP4M1_position                          0x1
#define CCP4M1_size                              0x1
#define CCP4M1_value_mask                        0x2
#define CCP4M1_clear_mask                        0xFD

#define CCP4M2                                   0x2
#define CCP4M2_address                           0xF57
#define CCP4M2_position                          0x2
#define CCP4M2_size                              0x1
#define CCP4M2_value_mask                        0x4
#define CCP4M2_clear_mask                        0xFB

#define CCP4M3                                   0x3
#define CCP4M3_address                           0xF57
#define CCP4M3_position                          0x3
#define CCP4M3_size                              0x1
#define CCP4M3_value_mask                        0x8
#define CCP4M3_clear_mask                        0xF7

#define DC4B0                                    0x4
#define DC4B0_address                            0xF57
#define DC4B0_position                           0x4
#define DC4B0_size                               0x1
#define DC4B0_value_mask                         0x10
#define DC4B0_clear_mask                         0xEF

#define DC4B                                     0x4
#define DC4B_address                             0xF57
#define DC4B_position                            0x4
#define DC4B_size                                0x2
#define DC4B_value_mask                          0x30
#define DC4B_clear_mask                          0xCF

#define DC4B1                                    0x5
#define DC4B1_address                            0xF57
#define DC4B1_position                           0x5
#define DC4B1_size                               0x1
#define DC4B1_value_mask                         0x20
#define DC4B1_clear_mask                         0xDF


/*------------------------------#
| CCPR4L                  0xF58 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR4L                                   0x0
#define CCPR4L_address                           0xF58
#define CCPR4L_position                          0x0
#define CCPR4L_size                              0x8
#define CCPR4L_value_mask                        0xFF
#define CCPR4L_clear_mask                        0x0


/*------------------------------#
| CCPR4H                  0xF59 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR4H                                   0x0
#define CCPR4H_address                           0xF59
#define CCPR4H_position                          0x0
#define CCPR4H_size                              0x8
#define CCPR4H_value_mask                        0xFF
#define CCPR4H_clear_mask                        0x0


/*-----------------------------------------------------#
| PSTR3CON                                       0xF5A |
#------------------------------------------------------#
| - | - | - | STRSYNC3 | STR3D | STR3C | STRB3 | STR3A |
#------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3     | 2     | 1     | 0     |
#-----------------------------------------------------*/

#define PSTR3CON                                 0x0
#define PSTR3CON_address                         0xF5A
#define PSTR3CON_position                        0x0
#define PSTR3CON_size                            0x8
#define PSTR3CON_value_mask                      0xFF
#define PSTR3CON_clear_mask                      0x0

#define STR3A                                    0x0
#define STR3A_address                            0xF5A
#define STR3A_position                           0x0
#define STR3A_size                               0x1
#define STR3A_value_mask                         0x1
#define STR3A_clear_mask                         0xFE

#define STRA3                                    0x0
#define STRA3_address                            0xF5A
#define STRA3_position                           0x0
#define STRA3_size                               0x1
#define STRA3_value_mask                         0x1
#define STRA3_clear_mask                         0xFE

#define STRB3                                    0x1
#define STRB3_address                            0xF5A
#define STRB3_position                           0x1
#define STRB3_size                               0x1
#define STRB3_value_mask                         0x2
#define STRB3_clear_mask                         0xFD

#define STR3B                                    0x1
#define STR3B_address                            0xF5A
#define STR3B_position                           0x1
#define STR3B_size                               0x1
#define STR3B_value_mask                         0x2
#define STR3B_clear_mask                         0xFD

#define STR3C                                    0x2
#define STR3C_address                            0xF5A
#define STR3C_position                           0x2
#define STR3C_size                               0x1
#define STR3C_value_mask                         0x4
#define STR3C_clear_mask                         0xFB

#define STRC3                                    0x2
#define STRC3_address                            0xF5A
#define STRC3_position                           0x2
#define STRC3_size                               0x1
#define STRC3_value_mask                         0x4
#define STRC3_clear_mask                         0xFB

#define STR3D                                    0x3
#define STR3D_address                            0xF5A
#define STR3D_position                           0x3
#define STR3D_size                               0x1
#define STR3D_value_mask                         0x8
#define STR3D_clear_mask                         0xF7

#define STRD3                                    0x3
#define STRD3_address                            0xF5A
#define STRD3_position                           0x3
#define STRD3_size                               0x1
#define STRD3_value_mask                         0x8
#define STRD3_clear_mask                         0xF7

#define STRSYNC3                                 0x4
#define STRSYNC3_address                         0xF5A
#define STRSYNC3_position                        0x4
#define STRSYNC3_size                            0x1
#define STRSYNC3_value_mask                      0x10
#define STRSYNC3_clear_mask                      0xEF

#define STR3SYNC                                 0x4
#define STR3SYNC_address                         0xF5A
#define STR3SYNC_position                        0x4
#define STR3SYNC_size                            0x1
#define STR3SYNC_value_mask                      0x10
#define STR3SYNC_clear_mask                      0xEF


/*------------------------------------------------------------------------------#
| ECCP3AS                                                                 0xF5B |
#-------------------------------------------------------------------------------#
| CCP3ASE | CCP3AS2 | CCP3AS1 | CCP3AS0 | P3SSAC1 | P3SSAC0 | P3SSBD1 | PSS3BD0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define ECCP3AS                                  0x0
#define ECCP3AS_address                          0xF5B
#define ECCP3AS_position                         0x0
#define ECCP3AS_size                             0x8
#define ECCP3AS_value_mask                       0xFF
#define ECCP3AS_clear_mask                       0x0

#define P3SSBD0                                  0x0
#define P3SSBD0_address                          0xF5B
#define P3SSBD0_position                         0x0
#define P3SSBD0_size                             0x1
#define P3SSBD0_value_mask                       0x1
#define P3SSBD0_clear_mask                       0xFE

#define PSS3BD0                                  0x0
#define PSS3BD0_address                          0xF5B
#define PSS3BD0_position                         0x0
#define PSS3BD0_size                             0x1
#define PSS3BD0_value_mask                       0x1
#define PSS3BD0_clear_mask                       0xFE

#define PSS3BD                                   0x0
#define PSS3BD_address                           0xF5B
#define PSS3BD_position                          0x0
#define PSS3BD_size                              0x2
#define PSS3BD_value_mask                        0x3
#define PSS3BD_clear_mask                        0xFC

#define P3SSBD                                   0x0
#define P3SSBD_address                           0xF5B
#define P3SSBD_position                          0x0
#define P3SSBD_size                              0x2
#define P3SSBD_value_mask                        0x3
#define P3SSBD_clear_mask                        0xFC

#define P3SSBD1                                  0x1
#define P3SSBD1_address                          0xF5B
#define P3SSBD1_position                         0x1
#define P3SSBD1_size                             0x1
#define P3SSBD1_value_mask                       0x2
#define P3SSBD1_clear_mask                       0xFD

#define PSS3BD1                                  0x1
#define PSS3BD1_address                          0xF5B
#define PSS3BD1_position                         0x1
#define PSS3BD1_size                             0x1
#define PSS3BD1_value_mask                       0x2
#define PSS3BD1_clear_mask                       0xFD

#define P3SSAC                                   0x2
#define P3SSAC_address                           0xF5B
#define P3SSAC_position                          0x2
#define P3SSAC_size                              0x2
#define P3SSAC_value_mask                        0xC
#define P3SSAC_clear_mask                        0xF3

#define P3SSAC0                                  0x2
#define P3SSAC0_address                          0xF5B
#define P3SSAC0_position                         0x2
#define P3SSAC0_size                             0x1
#define P3SSAC0_value_mask                       0x4
#define P3SSAC0_clear_mask                       0xFB

#define PSS3AC0                                  0x2
#define PSS3AC0_address                          0xF5B
#define PSS3AC0_position                         0x2
#define PSS3AC0_size                             0x1
#define PSS3AC0_value_mask                       0x4
#define PSS3AC0_clear_mask                       0xFB

#define PSS3AC                                   0x2
#define PSS3AC_address                           0xF5B
#define PSS3AC_position                          0x2
#define PSS3AC_size                              0x2
#define PSS3AC_value_mask                        0xC
#define PSS3AC_clear_mask                        0xF3

#define P3SSAC1                                  0x3
#define P3SSAC1_address                          0xF5B
#define P3SSAC1_position                         0x3
#define P3SSAC1_size                             0x1
#define P3SSAC1_value_mask                       0x8
#define P3SSAC1_clear_mask                       0xF7

#define PSS3AC1                                  0x3
#define PSS3AC1_address                          0xF5B
#define PSS3AC1_position                         0x3
#define PSS3AC1_size                             0x1
#define PSS3AC1_value_mask                       0x8
#define PSS3AC1_clear_mask                       0xF7

#define CCP3AS                                   0x4
#define CCP3AS_address                           0xF5B
#define CCP3AS_position                          0x4
#define CCP3AS_size                              0x3
#define CCP3AS_value_mask                        0x70
#define CCP3AS_clear_mask                        0x8F

#define CCP3AS0                                  0x4
#define CCP3AS0_address                          0xF5B
#define CCP3AS0_position                         0x4
#define CCP3AS0_size                             0x1
#define CCP3AS0_value_mask                       0x10
#define CCP3AS0_clear_mask                       0xEF

#define CCP3AS1                                  0x5
#define CCP3AS1_address                          0xF5B
#define CCP3AS1_position                         0x5
#define CCP3AS1_size                             0x1
#define CCP3AS1_value_mask                       0x20
#define CCP3AS1_clear_mask                       0xDF

#define CCP3AS2                                  0x6
#define CCP3AS2_address                          0xF5B
#define CCP3AS2_position                         0x6
#define CCP3AS2_size                             0x1
#define CCP3AS2_value_mask                       0x40
#define CCP3AS2_clear_mask                       0xBF

#define CCP3ASE                                  0x7
#define CCP3ASE_address                          0xF5B
#define CCP3ASE_position                         0x7
#define CCP3ASE_size                             0x1
#define CCP3ASE_value_mask                       0x80
#define CCP3ASE_clear_mask                       0x7F


/*---------------------------------------------------------------#
| PWM3CON                                                  0xF5C |
#----------------------------------------------------------------#
| P3RSEN | P3DC6 | P3DC5 | P3DC4 | P3DC3 | P3DC2 | P3DC1 | P3DC0 |
#----------------------------------------------------------------#
| 7      | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#---------------------------------------------------------------*/

#define PWM3CON                                  0x0
#define PWM3CON_address                          0xF5C
#define PWM3CON_position                         0x0
#define PWM3CON_size                             0x8
#define PWM3CON_value_mask                       0xFF
#define PWM3CON_clear_mask                       0x0

#define P3DC                                     0x0
#define P3DC_address                             0xF5C
#define P3DC_position                            0x0
#define P3DC_size                                0x7
#define P3DC_value_mask                          0x7F
#define P3DC_clear_mask                          0x80

#define P3DC0                                    0x0
#define P3DC0_address                            0xF5C
#define P3DC0_position                           0x0
#define P3DC0_size                               0x1
#define P3DC0_value_mask                         0x1
#define P3DC0_clear_mask                         0xFE

#define P3DC1                                    0x1
#define P3DC1_address                            0xF5C
#define P3DC1_position                           0x1
#define P3DC1_size                               0x1
#define P3DC1_value_mask                         0x2
#define P3DC1_clear_mask                         0xFD

#define P3DC2                                    0x2
#define P3DC2_address                            0xF5C
#define P3DC2_position                           0x2
#define P3DC2_size                               0x1
#define P3DC2_value_mask                         0x4
#define P3DC2_clear_mask                         0xFB

#define P3DC3                                    0x3
#define P3DC3_address                            0xF5C
#define P3DC3_position                           0x3
#define P3DC3_size                               0x1
#define P3DC3_value_mask                         0x8
#define P3DC3_clear_mask                         0xF7

#define P3DC4                                    0x4
#define P3DC4_address                            0xF5C
#define P3DC4_position                           0x4
#define P3DC4_size                               0x1
#define P3DC4_value_mask                         0x10
#define P3DC4_clear_mask                         0xEF

#define P3DC5                                    0x5
#define P3DC5_address                            0xF5C
#define P3DC5_position                           0x5
#define P3DC5_size                               0x1
#define P3DC5_value_mask                         0x20
#define P3DC5_clear_mask                         0xDF

#define P3DC6                                    0x6
#define P3DC6_address                            0xF5C
#define P3DC6_position                           0x6
#define P3DC6_size                               0x1
#define P3DC6_value_mask                         0x40
#define P3DC6_clear_mask                         0xBF

#define P3RSEN                                   0x7
#define P3RSEN_address                           0xF5C
#define P3RSEN_position                          0x7
#define P3RSEN_size                              0x1
#define P3RSEN_value_mask                        0x80
#define P3RSEN_clear_mask                        0x7F


/*----------------------------------------------------------------#
| CCP3CON                                                   0xF5D |
#-----------------------------------------------------------------#
| P3M1 | P3M0 | DC3B1 | DC3B0 | CCP3M3 | CCP3M2 | CCP3M1 | CCP3M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define CCP3CON                                  0x0
#define CCP3CON_address                          0xF5D
#define CCP3CON_position                         0x0
#define CCP3CON_size                             0x8
#define CCP3CON_value_mask                       0xFF
#define CCP3CON_clear_mask                       0x0

#define CCP3M                                    0x0
#define CCP3M_address                            0xF5D
#define CCP3M_position                           0x0
#define CCP3M_size                               0x4
#define CCP3M_value_mask                         0xF
#define CCP3M_clear_mask                         0xF0

#define CCP3M0                                   0x0
#define CCP3M0_address                           0xF5D
#define CCP3M0_position                          0x0
#define CCP3M0_size                              0x1
#define CCP3M0_value_mask                        0x1
#define CCP3M0_clear_mask                        0xFE

#define CCP3M1                                   0x1
#define CCP3M1_address                           0xF5D
#define CCP3M1_position                          0x1
#define CCP3M1_size                              0x1
#define CCP3M1_value_mask                        0x2
#define CCP3M1_clear_mask                        0xFD

#define CCP3M2                                   0x2
#define CCP3M2_address                           0xF5D
#define CCP3M2_position                          0x2
#define CCP3M2_size                              0x1
#define CCP3M2_value_mask                        0x4
#define CCP3M2_clear_mask                        0xFB

#define CCP3M3                                   0x3
#define CCP3M3_address                           0xF5D
#define CCP3M3_position                          0x3
#define CCP3M3_size                              0x1
#define CCP3M3_value_mask                        0x8
#define CCP3M3_clear_mask                        0xF7

#define DC3B                                     0x4
#define DC3B_address                             0xF5D
#define DC3B_position                            0x4
#define DC3B_size                                0x2
#define DC3B_value_mask                          0x30
#define DC3B_clear_mask                          0xCF

#define DC3B0                                    0x4
#define DC3B0_address                            0xF5D
#define DC3B0_position                           0x4
#define DC3B0_size                               0x1
#define DC3B0_value_mask                         0x10
#define DC3B0_clear_mask                         0xEF

#define DC3B1                                    0x5
#define DC3B1_address                            0xF5D
#define DC3B1_position                           0x5
#define DC3B1_size                               0x1
#define DC3B1_value_mask                         0x20
#define DC3B1_clear_mask                         0xDF

#define P3M                                      0x6
#define P3M_address                              0xF5D
#define P3M_position                             0x6
#define P3M_size                                 0x2
#define P3M_value_mask                           0xC0
#define P3M_clear_mask                           0x3F

#define P3M0                                     0x6
#define P3M0_address                             0xF5D
#define P3M0_position                            0x6
#define P3M0_size                                0x1
#define P3M0_value_mask                          0x40
#define P3M0_clear_mask                          0xBF

#define P3M1                                     0x7
#define P3M1_address                             0xF5D
#define P3M1_position                            0x7
#define P3M1_size                                0x1
#define P3M1_value_mask                          0x80
#define P3M1_clear_mask                          0x7F


/*------------------------------#
| CCPR3L                  0xF5E |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR3L                                   0x0
#define CCPR3L_address                           0xF5E
#define CCPR3L_position                          0x0
#define CCPR3L_size                              0x8
#define CCPR3L_value_mask                        0xFF
#define CCPR3L_clear_mask                        0x0


/*------------------------------#
| CCPR3H                  0xF5F |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR3H                                   0x0
#define CCPR3H_address                           0xF5F
#define CCPR3H_position                          0x0
#define CCPR3H_size                              0x8
#define CCPR3H_value_mask                        0xFF
#define CCPR3H_clear_mask                        0x0


/*---------------------------------------------#
| SLRCON                                 0xF60 |
#----------------------------------------------#
| - | - | - | SLRE | SLRD | SLRC | SLRB | SLRA |
#----------------------------------------------#
| 7 | 6 | 5 | 4    | 3    | 2    | 1    | 0    |
#---------------------------------------------*/

#define SLRCON                                   0x0
#define SLRCON_address                           0xF60
#define SLRCON_position                          0x0
#define SLRCON_size                              0x8
#define SLRCON_value_mask                        0xFF
#define SLRCON_clear_mask                        0x0

#define SLRA                                     0x0
#define SLRA_address                             0xF60
#define SLRA_position                            0x0
#define SLRA_size                                0x1
#define SLRA_value_mask                          0x1
#define SLRA_clear_mask                          0xFE

#define SLRB                                     0x1
#define SLRB_address                             0xF60
#define SLRB_position                            0x1
#define SLRB_size                                0x1
#define SLRB_value_mask                          0x2
#define SLRB_clear_mask                          0xFD

#define SLRC                                     0x2
#define SLRC_address                             0xF60
#define SLRC_position                            0x2
#define SLRC_size                                0x1
#define SLRC_value_mask                          0x4
#define SLRC_clear_mask                          0xFB

#define SLRD                                     0x3
#define SLRD_address                             0xF60
#define SLRD_position                            0x3
#define SLRD_size                                0x1
#define SLRD_value_mask                          0x8
#define SLRD_clear_mask                          0xF7

#define SLRE                                     0x4
#define SLRE_address                             0xF60
#define SLRE_position                            0x4
#define SLRE_size                                0x1
#define SLRE_value_mask                          0x10
#define SLRE_clear_mask                          0xEF


/*--------------------------------------------------------------#
| WPUB                                                    0xF61 |
#---------------------------------------------------------------#
| WPUB7 | WPUB6 | WPUB5 | WPUB4 | WPUB3 | WPUB2 | WPUB1 | WPUB0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define WPUB                                     0x0
#define WPUB_address                             0xF61
#define WPUB_position                            0x0
#define WPUB_size                                0x8
#define WPUB_value_mask                          0xFF
#define WPUB_clear_mask                          0x0

#define WPUB0                                    0x0
#define WPUB0_address                            0xF61
#define WPUB0_position                           0x0
#define WPUB0_size                               0x1
#define WPUB0_value_mask                         0x1
#define WPUB0_clear_mask                         0xFE

#define WPUB1                                    0x1
#define WPUB1_address                            0xF61
#define WPUB1_position                           0x1
#define WPUB1_size                               0x1
#define WPUB1_value_mask                         0x2
#define WPUB1_clear_mask                         0xFD

#define WPUB2                                    0x2
#define WPUB2_address                            0xF61
#define WPUB2_position                           0x2
#define WPUB2_size                               0x1
#define WPUB2_value_mask                         0x4
#define WPUB2_clear_mask                         0xFB

#define WPUB3                                    0x3
#define WPUB3_address                            0xF61
#define WPUB3_position                           0x3
#define WPUB3_size                               0x1
#define WPUB3_value_mask                         0x8
#define WPUB3_clear_mask                         0xF7

#define WPUB4                                    0x4
#define WPUB4_address                            0xF61
#define WPUB4_position                           0x4
#define WPUB4_size                               0x1
#define WPUB4_value_mask                         0x10
#define WPUB4_clear_mask                         0xEF

#define WPUB5                                    0x5
#define WPUB5_address                            0xF61
#define WPUB5_position                           0x5
#define WPUB5_size                               0x1
#define WPUB5_value_mask                         0x20
#define WPUB5_clear_mask                         0xDF

#define WPUB6                                    0x6
#define WPUB6_address                            0xF61
#define WPUB6_position                           0x6
#define WPUB6_size                               0x1
#define WPUB6_value_mask                         0x40
#define WPUB6_clear_mask                         0xBF

#define WPUB7                                    0x7
#define WPUB7_address                            0xF61
#define WPUB7_position                           0x7
#define WPUB7_size                               0x1
#define WPUB7_value_mask                         0x80
#define WPUB7_clear_mask                         0x7F


/*----------------------------------------------#
| IOCB                                    0xF62 |
#-----------------------------------------------#
| IOCB7 | IOCB6 | IOCB5 | IOCB4 | - | - | - | - |
#-----------------------------------------------#
| 7     | 6     | 5     | 4     | 3 | 2 | 1 | 0 |
#----------------------------------------------*/

#define IOCB                                     0x0
#define IOCB_address                             0xF62
#define IOCB_position                            0x0
#define IOCB_size                                0x8
#define IOCB_value_mask                          0xFF
#define IOCB_clear_mask                          0x0

#define IOCB4                                    0x4
#define IOCB4_address                            0xF62
#define IOCB4_position                           0x4
#define IOCB4_size                               0x1
#define IOCB4_value_mask                         0x10
#define IOCB4_clear_mask                         0xEF

#define IOCB5                                    0x5
#define IOCB5_address                            0xF62
#define IOCB5_position                           0x5
#define IOCB5_size                               0x1
#define IOCB5_value_mask                         0x20
#define IOCB5_clear_mask                         0xDF

#define IOCB6                                    0x6
#define IOCB6_address                            0xF62
#define IOCB6_position                           0x6
#define IOCB6_size                               0x1
#define IOCB6_value_mask                         0x40
#define IOCB6_clear_mask                         0xBF

#define IOCB7                                    0x7
#define IOCB7_address                            0xF62
#define IOCB7_position                           0x7
#define IOCB7_size                               0x1
#define IOCB7_value_mask                         0x80
#define IOCB7_clear_mask                         0x7F


/*----------------------------------------------------#
| PSTR2CON                                      0xF63 |
#-----------------------------------------------------#
| - | - | - | P2DC42 | P2DC32 | STR2C | STR2B | STR2A |
#-----------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2     | 1     | 0     |
#----------------------------------------------------*/

#define PSTR2CON                                 0x0
#define PSTR2CON_address                         0xF63
#define PSTR2CON_position                        0x0
#define PSTR2CON_size                            0x8
#define PSTR2CON_value_mask                      0xFF
#define PSTR2CON_clear_mask                      0x0

#define STR2A                                    0x0
#define STR2A_address                            0xF63
#define STR2A_position                           0x0
#define STR2A_size                               0x1
#define STR2A_value_mask                         0x1
#define STR2A_clear_mask                         0xFE

#define P2DC02                                   0x0
#define P2DC02_address                           0xF63
#define P2DC02_position                          0x0
#define P2DC02_size                              0x1
#define P2DC02_value_mask                        0x1
#define P2DC02_clear_mask                        0xFE

#define STRA2                                    0x0
#define STRA2_address                            0xF63
#define STRA2_position                           0x0
#define STRA2_size                               0x1
#define STRA2_value_mask                         0x1
#define STRA2_clear_mask                         0xFE

#define P2DC0CON                                 0x0
#define P2DC0CON_address                         0xF63
#define P2DC0CON_position                        0x0
#define P2DC0CON_size                            0x1
#define P2DC0CON_value_mask                      0x1
#define P2DC0CON_clear_mask                      0xFE

#define STR2B                                    0x1
#define STR2B_address                            0xF63
#define STR2B_position                           0x1
#define STR2B_size                               0x1
#define STR2B_value_mask                         0x2
#define STR2B_clear_mask                         0xFD

#define P2DC1CON                                 0x1
#define P2DC1CON_address                         0xF63
#define P2DC1CON_position                        0x1
#define P2DC1CON_size                            0x1
#define P2DC1CON_value_mask                      0x2
#define P2DC1CON_clear_mask                      0xFD

#define P2DC12                                   0x1
#define P2DC12_address                           0xF63
#define P2DC12_position                          0x1
#define P2DC12_size                              0x1
#define P2DC12_value_mask                        0x2
#define P2DC12_clear_mask                        0xFD

#define STRB2                                    0x1
#define STRB2_address                            0xF63
#define STRB2_position                           0x1
#define STRB2_size                               0x1
#define STRB2_value_mask                         0x2
#define STRB2_clear_mask                         0xFD

#define STR2C                                    0x2
#define STR2C_address                            0xF63
#define STR2C_position                           0x2
#define STR2C_size                               0x1
#define STR2C_value_mask                         0x4
#define STR2C_clear_mask                         0xFB

#define STRC2                                    0x2
#define STRC2_address                            0xF63
#define STRC2_position                           0x2
#define STRC2_size                               0x1
#define STRC2_value_mask                         0x4
#define STRC2_clear_mask                         0xFB

#define P2DC22                                   0x2
#define P2DC22_address                           0xF63
#define P2DC22_position                          0x2
#define P2DC22_size                              0x1
#define P2DC22_value_mask                        0x4
#define P2DC22_clear_mask                        0xFB

#define P2DC2CON                                 0x2
#define P2DC2CON_address                         0xF63
#define P2DC2CON_position                        0x2
#define P2DC2CON_size                            0x1
#define P2DC2CON_value_mask                      0x4
#define P2DC2CON_clear_mask                      0xFB

#define P2DC32                                   0x3
#define P2DC32_address                           0xF63
#define P2DC32_position                          0x3
#define P2DC32_size                              0x1
#define P2DC32_value_mask                        0x8
#define P2DC32_clear_mask                        0xF7

#define STR2D                                    0x3
#define STR2D_address                            0xF63
#define STR2D_position                           0x3
#define STR2D_size                               0x1
#define STR2D_value_mask                         0x8
#define STR2D_clear_mask                         0xF7

#define STRD2                                    0x3
#define STRD2_address                            0xF63
#define STRD2_position                           0x3
#define STRD2_size                               0x1
#define STRD2_value_mask                         0x8
#define STRD2_clear_mask                         0xF7

#define P2DC3CON                                 0x3
#define P2DC3CON_address                         0xF63
#define P2DC3CON_position                        0x3
#define P2DC3CON_size                            0x1
#define P2DC3CON_value_mask                      0x8
#define P2DC3CON_clear_mask                      0xF7

#define P2DC42                                   0x4
#define P2DC42_address                           0xF63
#define P2DC42_position                          0x4
#define P2DC42_size                              0x1
#define P2DC42_value_mask                        0x10
#define P2DC42_clear_mask                        0xEF

#define STR2SYNC                                 0x4
#define STR2SYNC_address                         0xF63
#define STR2SYNC_position                        0x4
#define STR2SYNC_size                            0x1
#define STR2SYNC_value_mask                      0x10
#define STR2SYNC_clear_mask                      0xEF

#define P2DC4CON                                 0x4
#define P2DC4CON_address                         0xF63
#define P2DC4CON_position                        0x4
#define P2DC4CON_size                            0x1
#define P2DC4CON_value_mask                      0x10
#define P2DC4CON_clear_mask                      0xEF

#define STRSYNC2                                 0x4
#define STRSYNC2_address                         0xF63
#define STRSYNC2_position                        0x4
#define STRSYNC2_size                            0x1
#define STRSYNC2_value_mask                      0x10
#define STRSYNC2_clear_mask                      0xEF


/*------------------------------------------------------------------------------#
| ECCP2AS                                                                 0xF64 |
#-------------------------------------------------------------------------------#
| CCP2ASE | CCP2AS2 | CCP2AS1 | CCP2AS0 | PSS2AC1 | PSS2AC0 | PSS2BD1 | PSS2BD0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define ECCP2AS                                  0x0
#define ECCP2AS_address                          0xF64
#define ECCP2AS_position                         0x0
#define ECCP2AS_size                             0x8
#define ECCP2AS_value_mask                       0xFF
#define ECCP2AS_clear_mask                       0x0

#define PSS2BD                                   0x0
#define PSS2BD_address                           0xF64
#define PSS2BD_position                          0x0
#define PSS2BD_size                              0x2
#define PSS2BD_value_mask                        0x3
#define PSS2BD_clear_mask                        0xFC

#define PSS2BD0                                  0x0
#define PSS2BD0_address                          0xF64
#define PSS2BD0_position                         0x0
#define PSS2BD0_size                             0x1
#define PSS2BD0_value_mask                       0x1
#define PSS2BD0_clear_mask                       0xFE

#define P2SSBD                                   0x0
#define P2SSBD_address                           0xF64
#define P2SSBD_position                          0x0
#define P2SSBD_size                              0x2
#define P2SSBD_value_mask                        0x3
#define P2SSBD_clear_mask                        0xFC

#define P2SSBD0                                  0x0
#define P2SSBD0_address                          0xF64
#define P2SSBD0_position                         0x0
#define P2SSBD0_size                             0x1
#define P2SSBD0_value_mask                       0x1
#define P2SSBD0_clear_mask                       0xFE

#define PSS2BD1                                  0x1
#define PSS2BD1_address                          0xF64
#define PSS2BD1_position                         0x1
#define PSS2BD1_size                             0x1
#define PSS2BD1_value_mask                       0x2
#define PSS2BD1_clear_mask                       0xFD

#define P2SSBD1                                  0x1
#define P2SSBD1_address                          0xF64
#define P2SSBD1_position                         0x1
#define P2SSBD1_size                             0x1
#define P2SSBD1_value_mask                       0x2
#define P2SSBD1_clear_mask                       0xFD

#define PSS2AC0                                  0x2
#define PSS2AC0_address                          0xF64
#define PSS2AC0_position                         0x2
#define PSS2AC0_size                             0x1
#define PSS2AC0_value_mask                       0x4
#define PSS2AC0_clear_mask                       0xFB

#define P2SSAC                                   0x2
#define P2SSAC_address                           0xF64
#define P2SSAC_position                          0x2
#define P2SSAC_size                              0x2
#define P2SSAC_value_mask                        0xC
#define P2SSAC_clear_mask                        0xF3

#define P2SSAC0                                  0x2
#define P2SSAC0_address                          0xF64
#define P2SSAC0_position                         0x2
#define P2SSAC0_size                             0x1
#define P2SSAC0_value_mask                       0x4
#define P2SSAC0_clear_mask                       0xFB

#define PSS2AC                                   0x2
#define PSS2AC_address                           0xF64
#define PSS2AC_position                          0x2
#define PSS2AC_size                              0x2
#define PSS2AC_value_mask                        0xC
#define PSS2AC_clear_mask                        0xF3

#define PSS2AC1                                  0x3
#define PSS2AC1_address                          0xF64
#define PSS2AC1_position                         0x3
#define PSS2AC1_size                             0x1
#define PSS2AC1_value_mask                       0x8
#define PSS2AC1_clear_mask                       0xF7

#define P2SSAC1                                  0x3
#define P2SSAC1_address                          0xF64
#define P2SSAC1_position                         0x3
#define P2SSAC1_size                             0x1
#define P2SSAC1_value_mask                       0x8
#define P2SSAC1_clear_mask                       0xF7

#define CCP2AS                                   0x4
#define CCP2AS_address                           0xF64
#define CCP2AS_position                          0x4
#define CCP2AS_size                              0x3
#define CCP2AS_value_mask                        0x70
#define CCP2AS_clear_mask                        0x8F

#define CCP2AS0                                  0x4
#define CCP2AS0_address                          0xF64
#define CCP2AS0_position                         0x4
#define CCP2AS0_size                             0x1
#define CCP2AS0_value_mask                       0x10
#define CCP2AS0_clear_mask                       0xEF

#define CCP2AS1                                  0x5
#define CCP2AS1_address                          0xF64
#define CCP2AS1_position                         0x5
#define CCP2AS1_size                             0x1
#define CCP2AS1_value_mask                       0x20
#define CCP2AS1_clear_mask                       0xDF

#define CCP2AS2                                  0x6
#define CCP2AS2_address                          0xF64
#define CCP2AS2_position                         0x6
#define CCP2AS2_size                             0x1
#define CCP2AS2_value_mask                       0x40
#define CCP2AS2_clear_mask                       0xBF

#define CCP2ASE                                  0x7
#define CCP2ASE_address                          0xF64
#define CCP2ASE_position                         0x7
#define CCP2ASE_size                             0x1
#define CCP2ASE_value_mask                       0x80
#define CCP2ASE_clear_mask                       0x7F


/*---------------------------------------------------------------#
| PWM2CON                                                  0xF65 |
#----------------------------------------------------------------#
| P2RSEN | P2DC6 | P2DC5 | P2DC4 | P2DC3 | P2DC2 | P2DC1 | P2DC0 |
#----------------------------------------------------------------#
| 7      | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#---------------------------------------------------------------*/

#define PWM2CON                                  0x0
#define PWM2CON_address                          0xF65
#define PWM2CON_position                         0x0
#define PWM2CON_size                             0x8
#define PWM2CON_value_mask                       0xFF
#define PWM2CON_clear_mask                       0x0

#define P2DC                                     0x0
#define P2DC_address                             0xF65
#define P2DC_position                            0x0
#define P2DC_size                                0x7
#define P2DC_value_mask                          0x7F
#define P2DC_clear_mask                          0x80

#define P2DC0                                    0x0
#define P2DC0_address                            0xF65
#define P2DC0_position                           0x0
#define P2DC0_size                               0x1
#define P2DC0_value_mask                         0x1
#define P2DC0_clear_mask                         0xFE

#define P2DC1                                    0x1
#define P2DC1_address                            0xF65
#define P2DC1_position                           0x1
#define P2DC1_size                               0x1
#define P2DC1_value_mask                         0x2
#define P2DC1_clear_mask                         0xFD

#define P2DC2                                    0x2
#define P2DC2_address                            0xF65
#define P2DC2_position                           0x2
#define P2DC2_size                               0x1
#define P2DC2_value_mask                         0x4
#define P2DC2_clear_mask                         0xFB

#define P2DC3                                    0x3
#define P2DC3_address                            0xF65
#define P2DC3_position                           0x3
#define P2DC3_size                               0x1
#define P2DC3_value_mask                         0x8
#define P2DC3_clear_mask                         0xF7

#define P2DC4                                    0x4
#define P2DC4_address                            0xF65
#define P2DC4_position                           0x4
#define P2DC4_size                               0x1
#define P2DC4_value_mask                         0x10
#define P2DC4_clear_mask                         0xEF

#define P2DC5                                    0x5
#define P2DC5_address                            0xF65
#define P2DC5_position                           0x5
#define P2DC5_size                               0x1
#define P2DC5_value_mask                         0x20
#define P2DC5_clear_mask                         0xDF

#define P2DC6                                    0x6
#define P2DC6_address                            0xF65
#define P2DC6_position                           0x6
#define P2DC6_size                               0x1
#define P2DC6_value_mask                         0x40
#define P2DC6_clear_mask                         0xBF

#define P2RSEN                                   0x7
#define P2RSEN_address                           0xF65
#define P2RSEN_position                          0x7
#define P2RSEN_size                              0x1
#define P2RSEN_value_mask                        0x80
#define P2RSEN_clear_mask                        0x7F


/*----------------------------------------------------------------#
| CCP2CON                                                   0xF66 |
#-----------------------------------------------------------------#
| P2M1 | P2M0 | DC2B1 | DC2B0 | CCP2M3 | CCP2M2 | CCP2M1 | CCP2M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define CCP2CON                                  0x0
#define CCP2CON_address                          0xF66
#define CCP2CON_position                         0x0
#define CCP2CON_size                             0x8
#define CCP2CON_value_mask                       0xFF
#define CCP2CON_clear_mask                       0x0

#define CCP2M                                    0x0
#define CCP2M_address                            0xF66
#define CCP2M_position                           0x0
#define CCP2M_size                               0x4
#define CCP2M_value_mask                         0xF
#define CCP2M_clear_mask                         0xF0

#define CCP2M0                                   0x0
#define CCP2M0_address                           0xF66
#define CCP2M0_position                          0x0
#define CCP2M0_size                              0x1
#define CCP2M0_value_mask                        0x1
#define CCP2M0_clear_mask                        0xFE

#define CCP2M1                                   0x1
#define CCP2M1_address                           0xF66
#define CCP2M1_position                          0x1
#define CCP2M1_size                              0x1
#define CCP2M1_value_mask                        0x2
#define CCP2M1_clear_mask                        0xFD

#define CCP2M2                                   0x2
#define CCP2M2_address                           0xF66
#define CCP2M2_position                          0x2
#define CCP2M2_size                              0x1
#define CCP2M2_value_mask                        0x4
#define CCP2M2_clear_mask                        0xFB

#define CCP2M3                                   0x3
#define CCP2M3_address                           0xF66
#define CCP2M3_position                          0x3
#define CCP2M3_size                              0x1
#define CCP2M3_value_mask                        0x8
#define CCP2M3_clear_mask                        0xF7

#define DC2B                                     0x4
#define DC2B_address                             0xF66
#define DC2B_position                            0x4
#define DC2B_size                                0x2
#define DC2B_value_mask                          0x30
#define DC2B_clear_mask                          0xCF

#define DC2B0                                    0x4
#define DC2B0_address                            0xF66
#define DC2B0_position                           0x4
#define DC2B0_size                               0x1
#define DC2B0_value_mask                         0x10
#define DC2B0_clear_mask                         0xEF

#define DC2B1                                    0x5
#define DC2B1_address                            0xF66
#define DC2B1_position                           0x5
#define DC2B1_size                               0x1
#define DC2B1_value_mask                         0x20
#define DC2B1_clear_mask                         0xDF

#define P2M                                      0x6
#define P2M_address                              0xF66
#define P2M_position                             0x6
#define P2M_size                                 0x2
#define P2M_value_mask                           0xC0
#define P2M_clear_mask                           0x3F

#define P2M0                                     0x6
#define P2M0_address                             0xF66
#define P2M0_position                            0x6
#define P2M0_size                                0x1
#define P2M0_value_mask                          0x40
#define P2M0_clear_mask                          0xBF

#define P2M1                                     0x7
#define P2M1_address                             0xF66
#define P2M1_position                            0x7
#define P2M1_size                                0x1
#define P2M1_value_mask                          0x80
#define P2M1_clear_mask                          0x7F


/*------------------------------#
| CCPR2L                  0xF67 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR2L                                   0x0
#define CCPR2L_address                           0xF67
#define CCPR2L_position                          0x0
#define CCPR2L_size                              0x8
#define CCPR2L_value_mask                        0xFF
#define CCPR2L_clear_mask                        0x0


/*------------------------------#
| CCPR2H                  0xF68 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR2H                                   0x0
#define CCPR2H_address                           0xF68
#define CCPR2H_position                          0x0
#define CCPR2H_size                              0x8
#define CCPR2H_value_mask                        0xFF
#define CCPR2H_clear_mask                        0x0


/*----------------------------------------------------------------------------------------------------------------------------------#
| SSP2CON3                                                                                                                    0xF69 |
#-----------------------------------------------------------------------------------------------------------------------------------#
| SSP2CON3_ACKTIM | SSP2CON3_PCIE | SSP2CON3_SCIE | SSP2CON3_BOEN | SSP2CON3_SDAHT | SSP2CON3_SBCDE | SSP2CON3_AHEN | SSP2CON3_DHEN |
#-----------------------------------------------------------------------------------------------------------------------------------#
| 7               | 6             | 5             | 4             | 3              | 2              | 1             | 0             |
#----------------------------------------------------------------------------------------------------------------------------------*/

#define SSP2CON3                                 0x0
#define SSP2CON3_address                         0xF69
#define SSP2CON3_position                        0x0
#define SSP2CON3_size                            0x8
#define SSP2CON3_value_mask                      0xFF
#define SSP2CON3_clear_mask                      0x0

#define SSP2CON3_DHEN                            0x0
#define SSP2CON3_DHEN_address                    0xF69
#define SSP2CON3_DHEN_position                   0x0
#define SSP2CON3_DHEN_size                       0x1
#define SSP2CON3_DHEN_value_mask                 0x1
#define SSP2CON3_DHEN_clear_mask                 0xFE

#define SSP2CON3_AHEN                            0x1
#define SSP2CON3_AHEN_address                    0xF69
#define SSP2CON3_AHEN_position                   0x1
#define SSP2CON3_AHEN_size                       0x1
#define SSP2CON3_AHEN_value_mask                 0x2
#define SSP2CON3_AHEN_clear_mask                 0xFD

#define SSP2CON3_SBCDE                           0x2
#define SSP2CON3_SBCDE_address                   0xF69
#define SSP2CON3_SBCDE_position                  0x2
#define SSP2CON3_SBCDE_size                      0x1
#define SSP2CON3_SBCDE_value_mask                0x4
#define SSP2CON3_SBCDE_clear_mask                0xFB

#define SSP2CON3_SDAHT                           0x3
#define SSP2CON3_SDAHT_address                   0xF69
#define SSP2CON3_SDAHT_position                  0x3
#define SSP2CON3_SDAHT_size                      0x1
#define SSP2CON3_SDAHT_value_mask                0x8
#define SSP2CON3_SDAHT_clear_mask                0xF7

#define SSP2CON3_BOEN                            0x4
#define SSP2CON3_BOEN_address                    0xF69
#define SSP2CON3_BOEN_position                   0x4
#define SSP2CON3_BOEN_size                       0x1
#define SSP2CON3_BOEN_value_mask                 0x10
#define SSP2CON3_BOEN_clear_mask                 0xEF

#define SSP2CON3_SCIE                            0x5
#define SSP2CON3_SCIE_address                    0xF69
#define SSP2CON3_SCIE_position                   0x5
#define SSP2CON3_SCIE_size                       0x1
#define SSP2CON3_SCIE_value_mask                 0x20
#define SSP2CON3_SCIE_clear_mask                 0xDF

#define SSP2CON3_PCIE                            0x6
#define SSP2CON3_PCIE_address                    0xF69
#define SSP2CON3_PCIE_position                   0x6
#define SSP2CON3_PCIE_size                       0x1
#define SSP2CON3_PCIE_value_mask                 0x40
#define SSP2CON3_PCIE_clear_mask                 0xBF

#define SSP2CON3_ACKTIM                          0x7
#define SSP2CON3_ACKTIM_address                  0xF69
#define SSP2CON3_ACKTIM_position                 0x7
#define SSP2CON3_ACKTIM_size                     0x1
#define SSP2CON3_ACKTIM_value_mask               0x80
#define SSP2CON3_ACKTIM_clear_mask               0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| SSP2MSK                                                                                                         0xF6A |
#-----------------------------------------------------------------------------------------------------------------------#
| SSP2MSK_MSK7 | SSP2MSK_MSK6 | SSP2MSK_MSK5 | SSP2MSK_MSK4 | SSP2MSK_MSK3 | SSP2MSK_MSK2 | SSP2MSK_MSK1 | SSP2MSK_MSK0 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define SSP2MSK                                  0x0
#define SSP2MSK_address                          0xF6A
#define SSP2MSK_position                         0x0
#define SSP2MSK_size                             0x8
#define SSP2MSK_value_mask                       0xFF
#define SSP2MSK_clear_mask                       0x0

#define SSP2MSK_MSK0                             0x0
#define SSP2MSK_MSK0_address                     0xF6A
#define SSP2MSK_MSK0_position                    0x0
#define SSP2MSK_MSK0_size                        0x1
#define SSP2MSK_MSK0_value_mask                  0x1
#define SSP2MSK_MSK0_clear_mask                  0xFE

#define SSP2MSK_MSK1                             0x1
#define SSP2MSK_MSK1_address                     0xF6A
#define SSP2MSK_MSK1_position                    0x1
#define SSP2MSK_MSK1_size                        0x1
#define SSP2MSK_MSK1_value_mask                  0x2
#define SSP2MSK_MSK1_clear_mask                  0xFD

#define SSP2MSK_MSK2                             0x2
#define SSP2MSK_MSK2_address                     0xF6A
#define SSP2MSK_MSK2_position                    0x2
#define SSP2MSK_MSK2_size                        0x1
#define SSP2MSK_MSK2_value_mask                  0x4
#define SSP2MSK_MSK2_clear_mask                  0xFB

#define SSP2MSK_MSK3                             0x3
#define SSP2MSK_MSK3_address                     0xF6A
#define SSP2MSK_MSK3_position                    0x3
#define SSP2MSK_MSK3_size                        0x1
#define SSP2MSK_MSK3_value_mask                  0x8
#define SSP2MSK_MSK3_clear_mask                  0xF7

#define SSP2MSK_MSK4                             0x4
#define SSP2MSK_MSK4_address                     0xF6A
#define SSP2MSK_MSK4_position                    0x4
#define SSP2MSK_MSK4_size                        0x1
#define SSP2MSK_MSK4_value_mask                  0x10
#define SSP2MSK_MSK4_clear_mask                  0xEF

#define SSP2MSK_MSK5                             0x5
#define SSP2MSK_MSK5_address                     0xF6A
#define SSP2MSK_MSK5_position                    0x5
#define SSP2MSK_MSK5_size                        0x1
#define SSP2MSK_MSK5_value_mask                  0x20
#define SSP2MSK_MSK5_clear_mask                  0xDF

#define SSP2MSK_MSK6                             0x6
#define SSP2MSK_MSK6_address                     0xF6A
#define SSP2MSK_MSK6_position                    0x6
#define SSP2MSK_MSK6_size                        0x1
#define SSP2MSK_MSK6_value_mask                  0x40
#define SSP2MSK_MSK6_clear_mask                  0xBF

#define SSP2MSK_MSK7                             0x7
#define SSP2MSK_MSK7_address                     0xF6A
#define SSP2MSK_MSK7_position                    0x7
#define SSP2MSK_MSK7_size                        0x1
#define SSP2MSK_MSK7_value_mask                  0x80
#define SSP2MSK_MSK7_clear_mask                  0x7F


/*---------------------------------------------------------------------------------------#
| SSP2CON2                                                                         0xF6B |
#----------------------------------------------------------------------------------------#
| GCEN2 | SSP2CON2_ACKSTAT | ADMSK52 | ACKEN2 | ADMSK32 | ADMSK22 | RSEN2 | SSP2CON2_SEN |
#----------------------------------------------------------------------------------------#
| 7     | 6                | 5       | 4      | 3       | 2       | 1     | 0            |
#---------------------------------------------------------------------------------------*/

#define SSP2CON2                                 0x0
#define SSP2CON2_address                         0xF6B
#define SSP2CON2_position                        0x0
#define SSP2CON2_size                            0x8
#define SSP2CON2_value_mask                      0xFF
#define SSP2CON2_clear_mask                      0x0

#define SEN2                                     0x0
#define SEN2_address                             0xF6B
#define SEN2_position                            0x0
#define SEN2_size                                0x1
#define SEN2_value_mask                          0x1
#define SEN2_clear_mask                          0xFE

#define SSP2CON2_SEN                             0x0
#define SSP2CON2_SEN_address                     0xF6B
#define SSP2CON2_SEN_position                    0x0
#define SSP2CON2_SEN_size                        0x1
#define SSP2CON2_SEN_value_mask                  0x1
#define SSP2CON2_SEN_clear_mask                  0xFE

#define ADMSK12                                  0x1
#define ADMSK12_address                          0xF6B
#define ADMSK12_position                         0x1
#define ADMSK12_size                             0x1
#define ADMSK12_value_mask                       0x2
#define ADMSK12_clear_mask                       0xFD

#define SSP2CON2_RSEN                            0x1
#define SSP2CON2_RSEN_address                    0xF6B
#define SSP2CON2_RSEN_position                   0x1
#define SSP2CON2_RSEN_size                       0x1
#define SSP2CON2_RSEN_value_mask                 0x2
#define SSP2CON2_RSEN_clear_mask                 0xFD

#define RSEN2                                    0x1
#define RSEN2_address                            0xF6B
#define RSEN2_position                           0x1
#define RSEN2_size                               0x1
#define RSEN2_value_mask                         0x2
#define RSEN2_clear_mask                         0xFD

#define ADMSK22                                  0x2
#define ADMSK22_address                          0xF6B
#define ADMSK22_position                         0x2
#define ADMSK22_size                             0x1
#define ADMSK22_value_mask                       0x4
#define ADMSK22_clear_mask                       0xFB

#define PEN2                                     0x2
#define PEN2_address                             0xF6B
#define PEN2_position                            0x2
#define PEN2_size                                0x1
#define PEN2_value_mask                          0x4
#define PEN2_clear_mask                          0xFB

#define SSP2CON2_PEN                             0x2
#define SSP2CON2_PEN_address                     0xF6B
#define SSP2CON2_PEN_position                    0x2
#define SSP2CON2_PEN_size                        0x1
#define SSP2CON2_PEN_value_mask                  0x4
#define SSP2CON2_PEN_clear_mask                  0xFB

#define ADMSK32                                  0x3
#define ADMSK32_address                          0xF6B
#define ADMSK32_position                         0x3
#define ADMSK32_size                             0x1
#define ADMSK32_value_mask                       0x8
#define ADMSK32_clear_mask                       0xF7

#define SSP2CON2_RCEN                            0x3
#define SSP2CON2_RCEN_address                    0xF6B
#define SSP2CON2_RCEN_position                   0x3
#define SSP2CON2_RCEN_size                       0x1
#define SSP2CON2_RCEN_value_mask                 0x8
#define SSP2CON2_RCEN_clear_mask                 0xF7

#define RCEN2                                    0x3
#define RCEN2_address                            0xF6B
#define RCEN2_position                           0x3
#define RCEN2_size                               0x1
#define RCEN2_value_mask                         0x8
#define RCEN2_clear_mask                         0xF7

#define ACKEN2                                   0x4
#define ACKEN2_address                           0xF6B
#define ACKEN2_position                          0x4
#define ACKEN2_size                              0x1
#define ACKEN2_value_mask                        0x10
#define ACKEN2_clear_mask                        0xEF

#define ADMSK42                                  0x4
#define ADMSK42_address                          0xF6B
#define ADMSK42_position                         0x4
#define ADMSK42_size                             0x1
#define ADMSK42_value_mask                       0x10
#define ADMSK42_clear_mask                       0xEF

#define SSP2CON2_ACKEN                           0x4
#define SSP2CON2_ACKEN_address                   0xF6B
#define SSP2CON2_ACKEN_position                  0x4
#define SSP2CON2_ACKEN_size                      0x1
#define SSP2CON2_ACKEN_value_mask                0x10
#define SSP2CON2_ACKEN_clear_mask                0xEF

#define ACKDT2                                   0x5
#define ACKDT2_address                           0xF6B
#define ACKDT2_position                          0x5
#define ACKDT2_size                              0x1
#define ACKDT2_value_mask                        0x20
#define ACKDT2_clear_mask                        0xDF

#define ADMSK52                                  0x5
#define ADMSK52_address                          0xF6B
#define ADMSK52_position                         0x5
#define ADMSK52_size                             0x1
#define ADMSK52_value_mask                       0x20
#define ADMSK52_clear_mask                       0xDF

#define SSP2CON2_ACKDT                           0x5
#define SSP2CON2_ACKDT_address                   0xF6B
#define SSP2CON2_ACKDT_position                  0x5
#define SSP2CON2_ACKDT_size                      0x1
#define SSP2CON2_ACKDT_value_mask                0x20
#define SSP2CON2_ACKDT_clear_mask                0xDF

#define SSP2CON2_ACKSTAT                         0x6
#define SSP2CON2_ACKSTAT_address                 0xF6B
#define SSP2CON2_ACKSTAT_position                0x6
#define SSP2CON2_ACKSTAT_size                    0x1
#define SSP2CON2_ACKSTAT_value_mask              0x40
#define SSP2CON2_ACKSTAT_clear_mask              0xBF

#define ACKSTAT2                                 0x6
#define ACKSTAT2_address                         0xF6B
#define ACKSTAT2_position                        0x6
#define ACKSTAT2_size                            0x1
#define ACKSTAT2_value_mask                      0x40
#define ACKSTAT2_clear_mask                      0xBF

#define GCEN2                                    0x7
#define GCEN2_address                            0xF6B
#define GCEN2_position                           0x7
#define GCEN2_size                               0x1
#define GCEN2_value_mask                         0x80
#define GCEN2_clear_mask                         0x7F

#define SSP2CON2_GCEN                            0x7
#define SSP2CON2_GCEN_address                    0xF6B
#define SSP2CON2_GCEN_position                   0x7
#define SSP2CON2_GCEN_size                       0x1
#define SSP2CON2_GCEN_value_mask                 0x80
#define SSP2CON2_GCEN_clear_mask                 0x7F


/*---------------------------------------------------------------------------------------------------------------------------#
| SSP2CON1                                                                                                             0xF6C |
#----------------------------------------------------------------------------------------------------------------------------#
| WCOL2 | SSP2CON1_SSPOV | SSP2CON1_SSPEN | SSP2CON1_CKP | SSP2CON1_SSPM3 | SSP2CON1_SSPM2 | SSP2CON1_SSPM1 | SSP2CON1_SSPM0 |
#----------------------------------------------------------------------------------------------------------------------------#
| 7     | 6              | 5              | 4            | 3              | 2              | 1              | 0              |
#---------------------------------------------------------------------------------------------------------------------------*/

#define SSP2CON1                                 0x0
#define SSP2CON1_address                         0xF6C
#define SSP2CON1_position                        0x0
#define SSP2CON1_size                            0x8
#define SSP2CON1_value_mask                      0xFF
#define SSP2CON1_clear_mask                      0x0

#define SSP2CON1_SSPM                            0x0
#define SSP2CON1_SSPM_address                    0xF6C
#define SSP2CON1_SSPM_position                   0x0
#define SSP2CON1_SSPM_size                       0x4
#define SSP2CON1_SSPM_value_mask                 0xF
#define SSP2CON1_SSPM_clear_mask                 0xF0

#define SSP2CON1_SSPM0                           0x0
#define SSP2CON1_SSPM0_address                   0xF6C
#define SSP2CON1_SSPM0_position                  0x0
#define SSP2CON1_SSPM0_size                      0x1
#define SSP2CON1_SSPM0_value_mask                0x1
#define SSP2CON1_SSPM0_clear_mask                0xFE

#define SSPM02                                   0x0
#define SSPM02_address                           0xF6C
#define SSPM02_position                          0x0
#define SSPM02_size                              0x1
#define SSPM02_value_mask                        0x1
#define SSPM02_clear_mask                        0xFE

#define SSPM12                                   0x1
#define SSPM12_address                           0xF6C
#define SSPM12_position                          0x1
#define SSPM12_size                              0x1
#define SSPM12_value_mask                        0x2
#define SSPM12_clear_mask                        0xFD

#define SSP2CON1_SSPM1                           0x1
#define SSP2CON1_SSPM1_address                   0xF6C
#define SSP2CON1_SSPM1_position                  0x1
#define SSP2CON1_SSPM1_size                      0x1
#define SSP2CON1_SSPM1_value_mask                0x2
#define SSP2CON1_SSPM1_clear_mask                0xFD

#define SSP2CON1_SSPM2                           0x2
#define SSP2CON1_SSPM2_address                   0xF6C
#define SSP2CON1_SSPM2_position                  0x2
#define SSP2CON1_SSPM2_size                      0x1
#define SSP2CON1_SSPM2_value_mask                0x4
#define SSP2CON1_SSPM2_clear_mask                0xFB

#define SSPM22                                   0x2
#define SSPM22_address                           0xF6C
#define SSPM22_position                          0x2
#define SSPM22_size                              0x1
#define SSPM22_value_mask                        0x4
#define SSPM22_clear_mask                        0xFB

#define SSPM32                                   0x3
#define SSPM32_address                           0xF6C
#define SSPM32_position                          0x3
#define SSPM32_size                              0x1
#define SSPM32_value_mask                        0x8
#define SSPM32_clear_mask                        0xF7

#define SSP2CON1_SSPM3                           0x3
#define SSP2CON1_SSPM3_address                   0xF6C
#define SSP2CON1_SSPM3_position                  0x3
#define SSP2CON1_SSPM3_size                      0x1
#define SSP2CON1_SSPM3_value_mask                0x8
#define SSP2CON1_SSPM3_clear_mask                0xF7

#define SSP2CON1_CKP                             0x4
#define SSP2CON1_CKP_address                     0xF6C
#define SSP2CON1_CKP_position                    0x4
#define SSP2CON1_CKP_size                        0x1
#define SSP2CON1_CKP_value_mask                  0x10
#define SSP2CON1_CKP_clear_mask                  0xEF

#define CKP2                                     0x4
#define CKP2_address                             0xF6C
#define CKP2_position                            0x4
#define CKP2_size                                0x1
#define CKP2_value_mask                          0x10
#define CKP2_clear_mask                          0xEF

#define SSPEN2                                   0x5
#define SSPEN2_address                           0xF6C
#define SSPEN2_position                          0x5
#define SSPEN2_size                              0x1
#define SSPEN2_value_mask                        0x20
#define SSPEN2_clear_mask                        0xDF

#define SSP2CON1_SSPEN                           0x5
#define SSP2CON1_SSPEN_address                   0xF6C
#define SSP2CON1_SSPEN_position                  0x5
#define SSP2CON1_SSPEN_size                      0x1
#define SSP2CON1_SSPEN_value_mask                0x20
#define SSP2CON1_SSPEN_clear_mask                0xDF

#define SSPOV2                                   0x6
#define SSPOV2_address                           0xF6C
#define SSPOV2_position                          0x6
#define SSPOV2_size                              0x1
#define SSPOV2_value_mask                        0x40
#define SSPOV2_clear_mask                        0xBF

#define SSP2CON1_SSPOV                           0x6
#define SSP2CON1_SSPOV_address                   0xF6C
#define SSP2CON1_SSPOV_position                  0x6
#define SSP2CON1_SSPOV_size                      0x1
#define SSP2CON1_SSPOV_value_mask                0x40
#define SSP2CON1_SSPOV_clear_mask                0xBF

#define WCOL2                                    0x7
#define WCOL2_address                            0xF6C
#define WCOL2_position                           0x7
#define WCOL2_size                               0x1
#define WCOL2_value_mask                         0x80
#define WCOL2_clear_mask                         0x7F

#define SSP2CON1_WCOL                            0x7
#define SSP2CON1_WCOL_address                    0xF6C
#define SSP2CON1_WCOL_position                   0x7
#define SSP2CON1_WCOL_size                       0x1
#define SSP2CON1_WCOL_value_mask                 0x80
#define SSP2CON1_WCOL_clear_mask                 0x7F


/*----------------------------------------------------------------------------------------------#
| SSP2STAT                                                                                0xF6D |
#-----------------------------------------------------------------------------------------------#
| SMP2 | SSP2STAT_CKE | SSP2STAT_D | SSP2STAT_P | S2 | SSP2STAT_R_W | SSP2STAT_UA | SSP2STAT_BF |
#-----------------------------------------------------------------------------------------------#
| 7    | 6            | 5          | 4          | 3  | 2            | 1           | 0           |
#----------------------------------------------------------------------------------------------*/

#define SSP2STAT                                 0x0
#define SSP2STAT_address                         0xF6D
#define SSP2STAT_position                        0x0
#define SSP2STAT_size                            0x8
#define SSP2STAT_value_mask                      0xFF
#define SSP2STAT_clear_mask                      0x0

#define SSP2STAT_BF                              0x0
#define SSP2STAT_BF_address                      0xF6D
#define SSP2STAT_BF_position                     0x0
#define SSP2STAT_BF_size                         0x1
#define SSP2STAT_BF_value_mask                   0x1
#define SSP2STAT_BF_clear_mask                   0xFE

#define BF2                                      0x0
#define BF2_address                              0xF6D
#define BF2_position                             0x0
#define BF2_size                                 0x1
#define BF2_value_mask                           0x1
#define BF2_clear_mask                           0xFE

#define SSP2STAT_UA                              0x1
#define SSP2STAT_UA_address                      0xF6D
#define SSP2STAT_UA_position                     0x1
#define SSP2STAT_UA_size                         0x1
#define SSP2STAT_UA_value_mask                   0x2
#define SSP2STAT_UA_clear_mask                   0xFD

#define UA2                                      0x1
#define UA2_address                              0xF6D
#define UA2_position                             0x1
#define UA2_size                                 0x1
#define UA2_value_mask                           0x2
#define UA2_clear_mask                           0xFD

#define SSP2STAT_R_W                             0x2
#define SSP2STAT_R_W_address                     0xF6D
#define SSP2STAT_R_W_position                    0x2
#define SSP2STAT_R_W_size                        0x1
#define SSP2STAT_R_W_value_mask                  0x4
#define SSP2STAT_R_W_clear_mask                  0xFB

#define RW2                                      0x2
#define RW2_address                              0xF6D
#define RW2_position                             0x2
#define RW2_size                                 0x1
#define RW2_value_mask                           0x4
#define RW2_clear_mask                           0xFB

#define SSP2STAT_R                               0x2
#define SSP2STAT_R_address                       0xF6D
#define SSP2STAT_R_position                      0x2
#define SSP2STAT_R_size                          0x1
#define SSP2STAT_R_value_mask                    0x4
#define SSP2STAT_R_clear_mask                    0xFB

#define READ_WRITE2                              0x2
#define READ_WRITE2_address                      0xF6D
#define READ_WRITE2_position                     0x2
#define READ_WRITE2_size                         0x1
#define READ_WRITE2_value_mask                   0x4
#define READ_WRITE2_clear_mask                   0xFB

#define nW2                                      0x2
#define nW2_address                              0xF6D
#define nW2_position                             0x2
#define nW2_size                                 0x1
#define nW2_value_mask                           0x4
#define nW2_clear_mask                           0xFB

#define SSP2STAT_nW                              0x2
#define SSP2STAT_nW_address                      0xF6D
#define SSP2STAT_nW_position                     0x2
#define SSP2STAT_nW_size                         0x1
#define SSP2STAT_nW_value_mask                   0x4
#define SSP2STAT_nW_clear_mask                   0xFB

#define SSP2STAT_W                               0x2
#define SSP2STAT_W_address                       0xF6D
#define SSP2STAT_W_position                      0x2
#define SSP2STAT_W_size                          0x1
#define SSP2STAT_W_value_mask                    0x4
#define SSP2STAT_W_clear_mask                    0xFB

#define SSP2STAT_nWRITE                          0x2
#define SSP2STAT_nWRITE_address                  0xF6D
#define SSP2STAT_nWRITE_position                 0x2
#define SSP2STAT_nWRITE_size                     0x1
#define SSP2STAT_nWRITE_value_mask               0x4
#define SSP2STAT_nWRITE_clear_mask               0xFB

#define I2C_READ2                                0x2
#define I2C_READ2_address                        0xF6D
#define I2C_READ2_position                       0x2
#define I2C_READ2_size                           0x1
#define I2C_READ2_value_mask                     0x4
#define I2C_READ2_clear_mask                     0xFB

#define SSP2STAT_R_NOT_W                         0x2
#define SSP2STAT_R_NOT_W_address                 0xF6D
#define SSP2STAT_R_NOT_W_position                0x2
#define SSP2STAT_R_NOT_W_size                    0x1
#define SSP2STAT_R_NOT_W_value_mask              0x4
#define SSP2STAT_R_NOT_W_clear_mask              0xFB

#define R_nW2                                    0x2
#define R_nW2_address                            0xF6D
#define R_nW2_position                           0x2
#define R_nW2_size                               0x1
#define R_nW2_value_mask                         0x4
#define R_nW2_clear_mask                         0xFB

#define nWRITE2                                  0x2
#define nWRITE2_address                          0xF6D
#define nWRITE2_position                         0x2
#define nWRITE2_size                             0x1
#define nWRITE2_value_mask                       0x4
#define nWRITE2_clear_mask                       0xFB

#define R_W2                                     0x2
#define R_W2_address                             0xF6D
#define R_W2_position                            0x2
#define R_W2_size                                0x1
#define R_W2_value_mask                          0x4
#define R_W2_clear_mask                          0xFB

#define SSP2STAT_R_nW                            0x2
#define SSP2STAT_R_nW_address                    0xF6D
#define SSP2STAT_R_nW_position                   0x2
#define SSP2STAT_R_nW_size                       0x1
#define SSP2STAT_R_nW_value_mask                 0x4
#define SSP2STAT_R_nW_clear_mask                 0xFB

#define SSP2STAT_NOT_WRITE                       0x2
#define SSP2STAT_NOT_WRITE_address               0xF6D
#define SSP2STAT_NOT_WRITE_position              0x2
#define SSP2STAT_NOT_WRITE_size                  0x1
#define SSP2STAT_NOT_WRITE_value_mask            0x4
#define SSP2STAT_NOT_WRITE_clear_mask            0xFB

#define SSP2STAT_S                               0x3
#define SSP2STAT_S_address                       0xF6D
#define SSP2STAT_S_position                      0x3
#define SSP2STAT_S_size                          0x1
#define SSP2STAT_S_value_mask                    0x8
#define SSP2STAT_S_clear_mask                    0xF7

#define S2                                       0x3
#define S2_address                               0xF6D
#define S2_position                              0x3
#define S2_size                                  0x1
#define S2_value_mask                            0x8
#define S2_clear_mask                            0xF7

#define START2                                   0x3
#define START2_address                           0xF6D
#define START2_position                          0x3
#define START2_size                              0x1
#define START2_value_mask                        0x8
#define START2_clear_mask                        0xF7

#define I2C_START2                               0x3
#define I2C_START2_address                       0xF6D
#define I2C_START2_position                      0x3
#define I2C_START2_size                          0x1
#define I2C_START2_value_mask                    0x8
#define I2C_START2_clear_mask                    0xF7

#define SSP2STAT_P                               0x4
#define SSP2STAT_P_address                       0xF6D
#define SSP2STAT_P_position                      0x4
#define SSP2STAT_P_size                          0x1
#define SSP2STAT_P_value_mask                    0x10
#define SSP2STAT_P_clear_mask                    0xEF

#define P2                                       0x4
#define P2_address                               0xF6D
#define P2_position                              0x4
#define P2_size                                  0x1
#define P2_value_mask                            0x10
#define P2_clear_mask                            0xEF

#define STOP2                                    0x4
#define STOP2_address                            0xF6D
#define STOP2_position                           0x4
#define STOP2_size                               0x1
#define STOP2_value_mask                         0x10
#define STOP2_clear_mask                         0xEF

#define I2C_STOP2                                0x4
#define I2C_STOP2_address                        0xF6D
#define I2C_STOP2_position                       0x4
#define I2C_STOP2_size                           0x1
#define I2C_STOP2_value_mask                     0x10
#define I2C_STOP2_clear_mask                     0xEF

#define SSP2STAT_D                               0x5
#define SSP2STAT_D_address                       0xF6D
#define SSP2STAT_D_position                      0x5
#define SSP2STAT_D_size                          0x1
#define SSP2STAT_D_value_mask                    0x20
#define SSP2STAT_D_clear_mask                    0xDF

#define SSP2STAT_A                               0x5
#define SSP2STAT_A_address                       0xF6D
#define SSP2STAT_A_position                      0x5
#define SSP2STAT_A_size                          0x1
#define SSP2STAT_A_value_mask                    0x20
#define SSP2STAT_A_clear_mask                    0xDF

#define DA2                                      0x5
#define DA2_address                              0xF6D
#define DA2_position                             0x5
#define DA2_size                                 0x1
#define DA2_value_mask                           0x20
#define DA2_clear_mask                           0xDF

#define DATA_ADDRESS2                            0x5
#define DATA_ADDRESS2_address                    0xF6D
#define DATA_ADDRESS2_position                   0x5
#define DATA_ADDRESS2_size                       0x1
#define DATA_ADDRESS2_value_mask                 0x20
#define DATA_ADDRESS2_clear_mask                 0xDF

#define SSP2STAT_NOT_ADDRESS                     0x5
#define SSP2STAT_NOT_ADDRESS_address             0xF6D
#define SSP2STAT_NOT_ADDRESS_position            0x5
#define SSP2STAT_NOT_ADDRESS_size                0x1
#define SSP2STAT_NOT_ADDRESS_value_mask          0x20
#define SSP2STAT_NOT_ADDRESS_clear_mask          0xDF

#define SSP2STAT_D_NOT_A                         0x5
#define SSP2STAT_D_NOT_A_address                 0xF6D
#define SSP2STAT_D_NOT_A_position                0x5
#define SSP2STAT_D_NOT_A_size                    0x1
#define SSP2STAT_D_NOT_A_value_mask              0x20
#define SSP2STAT_D_NOT_A_clear_mask              0xDF

#define D_A2                                     0x5
#define D_A2_address                             0xF6D
#define D_A2_position                            0x5
#define D_A2_size                                0x1
#define D_A2_value_mask                          0x20
#define D_A2_clear_mask                          0xDF

#define SSP2STAT_D_nA                            0x5
#define SSP2STAT_D_nA_address                    0xF6D
#define SSP2STAT_D_nA_position                   0x5
#define SSP2STAT_D_nA_size                       0x1
#define SSP2STAT_D_nA_value_mask                 0x20
#define SSP2STAT_D_nA_clear_mask                 0xDF

#define SSP2STAT_nADDRESS                        0x5
#define SSP2STAT_nADDRESS_address                0xF6D
#define SSP2STAT_nADDRESS_position               0x5
#define SSP2STAT_nADDRESS_size                   0x1
#define SSP2STAT_nADDRESS_value_mask             0x20
#define SSP2STAT_nADDRESS_clear_mask             0xDF

#define nA2                                      0x5
#define nA2_address                              0xF6D
#define nA2_position                             0x5
#define nA2_size                                 0x1
#define nA2_value_mask                           0x20
#define nA2_clear_mask                           0xDF

#define I2C_DAT2                                 0x5
#define I2C_DAT2_address                         0xF6D
#define I2C_DAT2_position                        0x5
#define I2C_DAT2_size                            0x1
#define I2C_DAT2_value_mask                      0x20
#define I2C_DAT2_clear_mask                      0xDF

#define nADDRESS2                                0x5
#define nADDRESS2_address                        0xF6D
#define nADDRESS2_position                       0x5
#define nADDRESS2_size                           0x1
#define nADDRESS2_value_mask                     0x20
#define nADDRESS2_clear_mask                     0xDF

#define SSP2STAT_nA                              0x5
#define SSP2STAT_nA_address                      0xF6D
#define SSP2STAT_nA_position                     0x5
#define SSP2STAT_nA_size                         0x1
#define SSP2STAT_nA_value_mask                   0x20
#define SSP2STAT_nA_clear_mask                   0xDF

#define SSP2STAT_D_A                             0x5
#define SSP2STAT_D_A_address                     0xF6D
#define SSP2STAT_D_A_position                    0x5
#define SSP2STAT_D_A_size                        0x1
#define SSP2STAT_D_A_value_mask                  0x20
#define SSP2STAT_D_A_clear_mask                  0xDF

#define D_nA2                                    0x5
#define D_nA2_address                            0xF6D
#define D_nA2_position                           0x5
#define D_nA2_size                               0x1
#define D_nA2_value_mask                         0x20
#define D_nA2_clear_mask                         0xDF

#define SSP2STAT_CKE                             0x6
#define SSP2STAT_CKE_address                     0xF6D
#define SSP2STAT_CKE_position                    0x6
#define SSP2STAT_CKE_size                        0x1
#define SSP2STAT_CKE_value_mask                  0x40
#define SSP2STAT_CKE_clear_mask                  0xBF

#define CKE2                                     0x6
#define CKE2_address                             0xF6D
#define CKE2_position                            0x6
#define CKE2_size                                0x1
#define CKE2_value_mask                          0x40
#define CKE2_clear_mask                          0xBF

#define SSP2STAT_SMP                             0x7
#define SSP2STAT_SMP_address                     0xF6D
#define SSP2STAT_SMP_position                    0x7
#define SSP2STAT_SMP_size                        0x1
#define SSP2STAT_SMP_value_mask                  0x80
#define SSP2STAT_SMP_clear_mask                  0x7F

#define SMP2                                     0x7
#define SMP2_address                             0xF6D
#define SMP2_position                            0x7
#define SMP2_size                                0x1
#define SMP2_value_mask                          0x80
#define SMP2_clear_mask                          0x7F


/*--------------------------------------------------------------#
| SSP2ADD                                                 0xF6E |
#---------------------------------------------------------------#
| MSK72 | MSK62 | MSK52 | MSK42 | MSK32 | MSK22 | MSK12 | MSK02 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define SSP2ADD                                  0x0
#define SSP2ADD_address                          0xF6E
#define SSP2ADD_position                         0x0
#define SSP2ADD_size                             0x8
#define SSP2ADD_value_mask                       0xFF
#define SSP2ADD_clear_mask                       0x0

#define MSK02                                    0x0
#define MSK02_address                            0xF6E
#define MSK02_position                           0x0
#define MSK02_size                               0x1
#define MSK02_value_mask                         0x1
#define MSK02_clear_mask                         0xFE

#define SSP2ADD_SSPADD                           0x0
#define SSP2ADD_SSPADD_address                   0xF6E
#define SSP2ADD_SSPADD_position                  0x0
#define SSP2ADD_SSPADD_size                      0x8
#define SSP2ADD_SSPADD_value_mask                0xFF
#define SSP2ADD_SSPADD_clear_mask                0x0

#define MSK12                                    0x1
#define MSK12_address                            0xF6E
#define MSK12_position                           0x1
#define MSK12_size                               0x1
#define MSK12_value_mask                         0x2
#define MSK12_clear_mask                         0xFD

#define MSK22                                    0x2
#define MSK22_address                            0xF6E
#define MSK22_position                           0x2
#define MSK22_size                               0x1
#define MSK22_value_mask                         0x4
#define MSK22_clear_mask                         0xFB

#define MSK32                                    0x3
#define MSK32_address                            0xF6E
#define MSK32_position                           0x3
#define MSK32_size                               0x1
#define MSK32_value_mask                         0x8
#define MSK32_clear_mask                         0xF7

#define MSK42                                    0x4
#define MSK42_address                            0xF6E
#define MSK42_position                           0x4
#define MSK42_size                               0x1
#define MSK42_value_mask                         0x10
#define MSK42_clear_mask                         0xEF

#define MSK52                                    0x5
#define MSK52_address                            0xF6E
#define MSK52_position                           0x5
#define MSK52_size                               0x1
#define MSK52_value_mask                         0x20
#define MSK52_clear_mask                         0xDF

#define MSK62                                    0x6
#define MSK62_address                            0xF6E
#define MSK62_position                           0x6
#define MSK62_size                               0x1
#define MSK62_value_mask                         0x40
#define MSK62_clear_mask                         0xBF

#define MSK72                                    0x7
#define MSK72_address                            0xF6E
#define MSK72_position                           0x7
#define MSK72_size                               0x1
#define MSK72_value_mask                         0x80
#define MSK72_clear_mask                         0x7F


/*------------------------------#
| SSP2BUF                 0xF6F |
#-------------------------------#
| SSP2BUF_SSPBUF                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP2BUF                                  0x0
#define SSP2BUF_address                          0xF6F
#define SSP2BUF_position                         0x0
#define SSP2BUF_size                             0x8
#define SSP2BUF_value_mask                       0xFF
#define SSP2BUF_clear_mask                       0x0

#define SSP2BUF_SSPBUF                           0x0
#define SSP2BUF_SSPBUF_address                   0xF6F
#define SSP2BUF_SSPBUF_position                  0x0
#define SSP2BUF_SSPBUF_size                      0x8
#define SSP2BUF_SSPBUF_value_mask                0xFF
#define SSP2BUF_SSPBUF_clear_mask                0x0


/*------------------------------------------------------------------------------------------------#
| BAUDCON2                                                                                  0xF70 |
#-------------------------------------------------------------------------------------------------#
| BAUDCON2_ABDOVF | BAUDCON2_RCIDL | DTRXP2 | BAUDCON2_CKTXP | BAUDCON2_BRG16 | - | WUE2 | ABDEN2 |
#-------------------------------------------------------------------------------------------------#
| 7               | 6              | 5      | 4              | 3              | 2 | 1    | 0      |
#------------------------------------------------------------------------------------------------*/

#define BAUDCON2                                 0x0
#define BAUDCON2_address                         0xF70
#define BAUDCON2_position                        0x0
#define BAUDCON2_size                            0x8
#define BAUDCON2_value_mask                      0xFF
#define BAUDCON2_clear_mask                      0x0

#define BAUDCON2_ABDEN                           0x0
#define BAUDCON2_ABDEN_address                   0xF70
#define BAUDCON2_ABDEN_position                  0x0
#define BAUDCON2_ABDEN_size                      0x1
#define BAUDCON2_ABDEN_value_mask                0x1
#define BAUDCON2_ABDEN_clear_mask                0xFE

#define ABDEN2                                   0x0
#define ABDEN2_address                           0xF70
#define ABDEN2_position                          0x0
#define ABDEN2_size                              0x1
#define ABDEN2_value_mask                        0x1
#define ABDEN2_clear_mask                        0xFE

#define WUE2                                     0x1
#define WUE2_address                             0xF70
#define WUE2_position                            0x1
#define WUE2_size                                0x1
#define WUE2_value_mask                          0x2
#define WUE2_clear_mask                          0xFD

#define BAUDCON2_WUE                             0x1
#define BAUDCON2_WUE_address                     0xF70
#define BAUDCON2_WUE_position                    0x1
#define BAUDCON2_WUE_size                        0x1
#define BAUDCON2_WUE_value_mask                  0x2
#define BAUDCON2_WUE_clear_mask                  0xFD

#define BRG162                                   0x3
#define BRG162_address                           0xF70
#define BRG162_position                          0x3
#define BRG162_size                              0x1
#define BRG162_value_mask                        0x8
#define BRG162_clear_mask                        0xF7

#define BAUDCON2_BRG16                           0x3
#define BAUDCON2_BRG16_address                   0xF70
#define BAUDCON2_BRG16_position                  0x3
#define BAUDCON2_BRG16_size                      0x1
#define BAUDCON2_BRG16_value_mask                0x8
#define BAUDCON2_BRG16_clear_mask                0xF7

#define BAUDCON2_SCKP                            0x4
#define BAUDCON2_SCKP_address                    0xF70
#define BAUDCON2_SCKP_position                   0x4
#define BAUDCON2_SCKP_size                       0x1
#define BAUDCON2_SCKP_value_mask                 0x10
#define BAUDCON2_SCKP_clear_mask                 0xEF

#define SCKP2                                    0x4
#define SCKP2_address                            0xF70
#define SCKP2_position                           0x4
#define SCKP2_size                               0x1
#define SCKP2_value_mask                         0x10
#define SCKP2_clear_mask                         0xEF

#define BAUDCON2_CKTXP                           0x4
#define BAUDCON2_CKTXP_address                   0xF70
#define BAUDCON2_CKTXP_position                  0x4
#define BAUDCON2_CKTXP_size                      0x1
#define BAUDCON2_CKTXP_value_mask                0x10
#define BAUDCON2_CKTXP_clear_mask                0xEF

#define TXCKP2                                   0x4
#define TXCKP2_address                           0xF70
#define TXCKP2_position                          0x4
#define TXCKP2_size                              0x1
#define TXCKP2_value_mask                        0x10
#define TXCKP2_clear_mask                        0xEF

#define DTRXP2                                   0x5
#define DTRXP2_address                           0xF70
#define DTRXP2_position                          0x5
#define DTRXP2_size                              0x1
#define DTRXP2_value_mask                        0x20
#define DTRXP2_clear_mask                        0xDF

#define RXDTP2                                   0x5
#define RXDTP2_address                           0xF70
#define RXDTP2_position                          0x5
#define RXDTP2_size                              0x1
#define RXDTP2_value_mask                        0x20
#define RXDTP2_clear_mask                        0xDF

#define BAUDCON2_DTRXP                           0x5
#define BAUDCON2_DTRXP_address                   0xF70
#define BAUDCON2_DTRXP_position                  0x5
#define BAUDCON2_DTRXP_size                      0x1
#define BAUDCON2_DTRXP_value_mask                0x20
#define BAUDCON2_DTRXP_clear_mask                0xDF

#define RCMT2                                    0x6
#define RCMT2_address                            0xF70
#define RCMT2_position                           0x6
#define RCMT2_size                               0x1
#define RCMT2_value_mask                         0x40
#define RCMT2_clear_mask                         0xBF

#define RCIDL2                                   0x6
#define RCIDL2_address                           0xF70
#define RCIDL2_position                          0x6
#define RCIDL2_size                              0x1
#define RCIDL2_value_mask                        0x40
#define RCIDL2_clear_mask                        0xBF

#define BAUDCON2_RCIDL                           0x6
#define BAUDCON2_RCIDL_address                   0xF70
#define BAUDCON2_RCIDL_position                  0x6
#define BAUDCON2_RCIDL_size                      0x1
#define BAUDCON2_RCIDL_value_mask                0x40
#define BAUDCON2_RCIDL_clear_mask                0xBF

#define BAUDCON2_ABDOVF                          0x7
#define BAUDCON2_ABDOVF_address                  0xF70
#define BAUDCON2_ABDOVF_position                 0x7
#define BAUDCON2_ABDOVF_size                     0x1
#define BAUDCON2_ABDOVF_value_mask               0x80
#define BAUDCON2_ABDOVF_clear_mask               0x7F

#define ABDOVF2                                  0x7
#define ABDOVF2_address                          0xF70
#define ABDOVF2_position                         0x7
#define ABDOVF2_size                             0x1
#define ABDOVF2_value_mask                       0x80
#define ABDOVF2_clear_mask                       0x7F


/*----------------------------------------------------------------------------------#
| RCSTA2                                                                      0xF71 |
#-----------------------------------------------------------------------------------#
| SPEN2 | RC8_92 | SREN2 | RCSTA2_CREN | RCSTA2_ADDEN | FERR2 | RCSTA2_OERR | RX9D2 |
#-----------------------------------------------------------------------------------#
| 7     | 6      | 5     | 4           | 3            | 2     | 1           | 0     |
#----------------------------------------------------------------------------------*/

#define RCSTA2                                   0x0
#define RCSTA2_address                           0xF71
#define RCSTA2_position                          0x0
#define RCSTA2_size                              0x8
#define RCSTA2_value_mask                        0xFF
#define RCSTA2_clear_mask                        0x0

#define RCD82                                    0x0
#define RCD82_address                            0xF71
#define RCD82_position                           0x0
#define RCD82_size                               0x1
#define RCD82_value_mask                         0x1
#define RCD82_clear_mask                         0xFE

#define RX9D2                                    0x0
#define RX9D2_address                            0xF71
#define RX9D2_position                           0x0
#define RX9D2_size                               0x1
#define RX9D2_value_mask                         0x1
#define RX9D2_clear_mask                         0xFE

#define RCSTA2_RX9D                              0x0
#define RCSTA2_RX9D_address                      0xF71
#define RCSTA2_RX9D_position                     0x0
#define RCSTA2_RX9D_size                         0x1
#define RCSTA2_RX9D_value_mask                   0x1
#define RCSTA2_RX9D_clear_mask                   0xFE

#define RCSTA2_OERR                              0x1
#define RCSTA2_OERR_address                      0xF71
#define RCSTA2_OERR_position                     0x1
#define RCSTA2_OERR_size                         0x1
#define RCSTA2_OERR_value_mask                   0x2
#define RCSTA2_OERR_clear_mask                   0xFD

#define OERR2                                    0x1
#define OERR2_address                            0xF71
#define OERR2_position                           0x1
#define OERR2_size                               0x1
#define OERR2_value_mask                         0x2
#define OERR2_clear_mask                         0xFD

#define FERR2                                    0x2
#define FERR2_address                            0xF71
#define FERR2_position                           0x2
#define FERR2_size                               0x1
#define FERR2_value_mask                         0x4
#define FERR2_clear_mask                         0xFB

#define RCSTA2_FERR                              0x2
#define RCSTA2_FERR_address                      0xF71
#define RCSTA2_FERR_position                     0x2
#define RCSTA2_FERR_size                         0x1
#define RCSTA2_FERR_value_mask                   0x4
#define RCSTA2_FERR_clear_mask                   0xFB

#define RCSTA2_ADEN                              0x3
#define RCSTA2_ADEN_address                      0xF71
#define RCSTA2_ADEN_position                     0x3
#define RCSTA2_ADEN_size                         0x1
#define RCSTA2_ADEN_value_mask                   0x8
#define RCSTA2_ADEN_clear_mask                   0xF7

#define ADDEN2                                   0x3
#define ADDEN2_address                           0xF71
#define ADDEN2_position                          0x3
#define ADDEN2_size                              0x1
#define ADDEN2_value_mask                        0x8
#define ADDEN2_clear_mask                        0xF7

#define RCSTA2_ADDEN                             0x3
#define RCSTA2_ADDEN_address                     0xF71
#define RCSTA2_ADDEN_position                    0x3
#define RCSTA2_ADDEN_size                        0x1
#define RCSTA2_ADDEN_value_mask                  0x8
#define RCSTA2_ADDEN_clear_mask                  0xF7

#define RCSTA2_CREN                              0x4
#define RCSTA2_CREN_address                      0xF71
#define RCSTA2_CREN_position                     0x4
#define RCSTA2_CREN_size                         0x1
#define RCSTA2_CREN_value_mask                   0x10
#define RCSTA2_CREN_clear_mask                   0xEF

#define CREN2                                    0x4
#define CREN2_address                            0xF71
#define CREN2_position                           0x4
#define CREN2_size                               0x1
#define CREN2_value_mask                         0x10
#define CREN2_clear_mask                         0xEF

#define SREN2                                    0x5
#define SREN2_address                            0xF71
#define SREN2_position                           0x5
#define SREN2_size                               0x1
#define SREN2_value_mask                         0x20
#define SREN2_clear_mask                         0xDF

#define RCSTA2_SREN                              0x5
#define RCSTA2_SREN_address                      0xF71
#define RCSTA2_SREN_position                     0x5
#define RCSTA2_SREN_size                         0x1
#define RCSTA2_SREN_value_mask                   0x20
#define RCSTA2_SREN_clear_mask                   0xDF

#define RC92                                     0x6
#define RC92_address                             0xF71
#define RC92_position                            0x6
#define RC92_size                                0x1
#define RC92_value_mask                          0x40
#define RC92_clear_mask                          0xBF

#define RC8_92                                   0x6
#define RC8_92_address                           0xF71
#define RC8_92_position                          0x6
#define RC8_92_size                              0x1
#define RC8_92_value_mask                        0x40
#define RC8_92_clear_mask                        0xBF

#define RCSTA2_RX9                               0x6
#define RCSTA2_RX9_address                       0xF71
#define RCSTA2_RX9_position                      0x6
#define RCSTA2_RX9_size                          0x1
#define RCSTA2_RX9_value_mask                    0x40
#define RCSTA2_RX9_clear_mask                    0xBF

#define RX92                                     0x6
#define RX92_address                             0xF71
#define RX92_position                            0x6
#define RX92_size                                0x1
#define RX92_value_mask                          0x40
#define RX92_clear_mask                          0xBF

#define RCSTA2_SPEN                              0x7
#define RCSTA2_SPEN_address                      0xF71
#define RCSTA2_SPEN_position                     0x7
#define RCSTA2_SPEN_size                         0x1
#define RCSTA2_SPEN_value_mask                   0x80
#define RCSTA2_SPEN_clear_mask                   0x7F

#define SPEN2                                    0x7
#define SPEN2_address                            0xF71
#define SPEN2_position                           0x7
#define SPEN2_size                               0x1
#define SPEN2_value_mask                         0x80
#define SPEN2_clear_mask                         0x7F


/*----------------------------------------------------------------------------------------#
| TXSTA2                                                                            0xF72 |
#-----------------------------------------------------------------------------------------#
| TXSTA2_CSRC | TX8_92 | TXEN2 | TXSTA2_SYNC | SENDB2 | TXSTA2_BRGH | TXSTA2_TRMT | TX9D2 |
#-----------------------------------------------------------------------------------------#
| 7           | 6      | 5     | 4           | 3      | 2           | 1           | 0     |
#----------------------------------------------------------------------------------------*/

#define TXSTA2                                   0x0
#define TXSTA2_address                           0xF72
#define TXSTA2_position                          0x0
#define TXSTA2_size                              0x8
#define TXSTA2_value_mask                        0xFF
#define TXSTA2_clear_mask                        0x0

#define TX9D2                                    0x0
#define TX9D2_address                            0xF72
#define TX9D2_position                           0x0
#define TX9D2_size                               0x1
#define TX9D2_value_mask                         0x1
#define TX9D2_clear_mask                         0xFE

#define TXSTA2_TX9D                              0x0
#define TXSTA2_TX9D_address                      0xF72
#define TXSTA2_TX9D_position                     0x0
#define TXSTA2_TX9D_size                         0x1
#define TXSTA2_TX9D_value_mask                   0x1
#define TXSTA2_TX9D_clear_mask                   0xFE

#define TXD82                                    0x0
#define TXD82_address                            0xF72
#define TXD82_position                           0x0
#define TXD82_size                               0x1
#define TXD82_value_mask                         0x1
#define TXD82_clear_mask                         0xFE

#define TRMT2                                    0x1
#define TRMT2_address                            0xF72
#define TRMT2_position                           0x1
#define TRMT2_size                               0x1
#define TRMT2_value_mask                         0x2
#define TRMT2_clear_mask                         0xFD

#define TXSTA2_TRMT                              0x1
#define TXSTA2_TRMT_address                      0xF72
#define TXSTA2_TRMT_position                     0x1
#define TXSTA2_TRMT_size                         0x1
#define TXSTA2_TRMT_value_mask                   0x2
#define TXSTA2_TRMT_clear_mask                   0xFD

#define BRGH2                                    0x2
#define BRGH2_address                            0xF72
#define BRGH2_position                           0x2
#define BRGH2_size                               0x1
#define BRGH2_value_mask                         0x4
#define BRGH2_clear_mask                         0xFB

#define TXSTA2_BRGH                              0x2
#define TXSTA2_BRGH_address                      0xF72
#define TXSTA2_BRGH_position                     0x2
#define TXSTA2_BRGH_size                         0x1
#define TXSTA2_BRGH_value_mask                   0x4
#define TXSTA2_BRGH_clear_mask                   0xFB

#define SENDB2                                   0x3
#define SENDB2_address                           0xF72
#define SENDB2_position                          0x3
#define SENDB2_size                              0x1
#define SENDB2_value_mask                        0x8
#define SENDB2_clear_mask                        0xF7

#define TXSTA2_SENDB                             0x3
#define TXSTA2_SENDB_address                     0xF72
#define TXSTA2_SENDB_position                    0x3
#define TXSTA2_SENDB_size                        0x1
#define TXSTA2_SENDB_value_mask                  0x8
#define TXSTA2_SENDB_clear_mask                  0xF7

#define TXSTA2_SYNC                              0x4
#define TXSTA2_SYNC_address                      0xF72
#define TXSTA2_SYNC_position                     0x4
#define TXSTA2_SYNC_size                         0x1
#define TXSTA2_SYNC_value_mask                   0x10
#define TXSTA2_SYNC_clear_mask                   0xEF

#define SYNC2                                    0x4
#define SYNC2_address                            0xF72
#define SYNC2_position                           0x4
#define SYNC2_size                               0x1
#define SYNC2_value_mask                         0x10
#define SYNC2_clear_mask                         0xEF

#define TXEN2                                    0x5
#define TXEN2_address                            0xF72
#define TXEN2_position                           0x5
#define TXEN2_size                               0x1
#define TXEN2_value_mask                         0x20
#define TXEN2_clear_mask                         0xDF

#define TXSTA2_TXEN                              0x5
#define TXSTA2_TXEN_address                      0xF72
#define TXSTA2_TXEN_position                     0x5
#define TXSTA2_TXEN_size                         0x1
#define TXSTA2_TXEN_value_mask                   0x20
#define TXSTA2_TXEN_clear_mask                   0xDF

#define TX8_92                                   0x6
#define TX8_92_address                           0xF72
#define TX8_92_position                          0x6
#define TX8_92_size                              0x1
#define TX8_92_value_mask                        0x40
#define TX8_92_clear_mask                        0xBF

#define TX92                                     0x6
#define TX92_address                             0xF72
#define TX92_position                            0x6
#define TX92_size                                0x1
#define TX92_value_mask                          0x40
#define TX92_clear_mask                          0xBF

#define TXSTA2_TX9                               0x6
#define TXSTA2_TX9_address                       0xF72
#define TXSTA2_TX9_position                      0x6
#define TXSTA2_TX9_size                          0x1
#define TXSTA2_TX9_value_mask                    0x40
#define TXSTA2_TX9_clear_mask                    0xBF

#define TXSTA2_CSRC                              0x7
#define TXSTA2_CSRC_address                      0xF72
#define TXSTA2_CSRC_position                     0x7
#define TXSTA2_CSRC_size                         0x1
#define TXSTA2_CSRC_value_mask                   0x80
#define TXSTA2_CSRC_clear_mask                   0x7F

#define CSRC2                                    0x7
#define CSRC2_address                            0xF72
#define CSRC2_position                           0x7
#define CSRC2_size                               0x1
#define CSRC2_value_mask                         0x80
#define CSRC2_clear_mask                         0x7F


/*------------------------------#
| TXREG2                  0xF73 |
#-------------------------------#
| TX2REG                        |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TXREG2                                   0x0
#define TXREG2_address                           0xF73
#define TXREG2_position                          0x0
#define TXREG2_size                              0x8
#define TXREG2_value_mask                        0xFF
#define TXREG2_clear_mask                        0x0

#define TX2REG                                   0x0
#define TX2REG_address                           0xF73
#define TX2REG_position                          0x0
#define TX2REG_size                              0x8
#define TX2REG_value_mask                        0xFF
#define TX2REG_clear_mask                        0x0


/*------------------------------#
| RCREG2                  0xF74 |
#-------------------------------#
| RC2REG                        |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RCREG2                                   0x0
#define RCREG2_address                           0xF74
#define RCREG2_position                          0x0
#define RCREG2_size                              0x8
#define RCREG2_value_mask                        0xFF
#define RCREG2_clear_mask                        0x0

#define RC2REG                                   0x0
#define RC2REG_address                           0xF74
#define RC2REG_position                          0x0
#define RC2REG_size                              0x8
#define RC2REG_value_mask                        0xFF
#define RC2REG_clear_mask                        0x0


/*------------------------------#
| SPBRG2                  0xF75 |
#-------------------------------#
| SP2BRG                        |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SPBRG2                                   0x0
#define SPBRG2_address                           0xF75
#define SPBRG2_position                          0x0
#define SPBRG2_size                              0x8
#define SPBRG2_value_mask                        0xFF
#define SPBRG2_clear_mask                        0x0

#define SP2BRG                                   0x0
#define SP2BRG_address                           0xF75
#define SP2BRG_position                          0x0
#define SP2BRG_size                              0x8
#define SP2BRG_value_mask                        0xFF
#define SP2BRG_clear_mask                        0x0


/*------------------------------#
| SPBRGH2                 0xF76 |
#-------------------------------#
| SP2BRGH                       |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SPBRGH2                                  0x0
#define SPBRGH2_address                          0xF76
#define SPBRGH2_position                         0x0
#define SPBRGH2_size                             0x8
#define SPBRGH2_value_mask                       0xFF
#define SPBRGH2_clear_mask                       0x0

#define SP2BRGH                                  0x0
#define SP2BRGH_address                          0xF76
#define SP2BRGH_position                         0x0
#define SP2BRGH_size                             0x8
#define SP2BRGH_value_mask                       0xFF
#define SP2BRGH_clear_mask                       0x0


/*--------------------------------------------------------------------#
| CM2CON1                                                       0xF77 |
#---------------------------------------------------------------------#
| MC1OUT | MC2OUT | C1RSEL | C2RSEL | C1HYS | C2HYS | C1SYNC | C2SYNC |
#---------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3     | 2     | 1      | 0      |
#--------------------------------------------------------------------*/

#define CM2CON1                                  0x0
#define CM2CON1_address                          0xF77
#define CM2CON1_position                         0x0
#define CM2CON1_size                             0x8
#define CM2CON1_value_mask                       0xFF
#define CM2CON1_clear_mask                       0x0

#define C2SYNC                                   0x0
#define C2SYNC_address                           0xF77
#define C2SYNC_position                          0x0
#define C2SYNC_size                              0x1
#define C2SYNC_value_mask                        0x1
#define C2SYNC_clear_mask                        0xFE

#define C1SYNC                                   0x1
#define C1SYNC_address                           0xF77
#define C1SYNC_position                          0x1
#define C1SYNC_size                              0x1
#define C1SYNC_value_mask                        0x2
#define C1SYNC_clear_mask                        0xFD

#define C2HYS                                    0x2
#define C2HYS_address                            0xF77
#define C2HYS_position                           0x2
#define C2HYS_size                               0x1
#define C2HYS_value_mask                         0x4
#define C2HYS_clear_mask                         0xFB

#define C1HYS                                    0x3
#define C1HYS_address                            0xF77
#define C1HYS_position                           0x3
#define C1HYS_size                               0x1
#define C1HYS_value_mask                         0x8
#define C1HYS_clear_mask                         0xF7

#define C2RSEL                                   0x4
#define C2RSEL_address                           0xF77
#define C2RSEL_position                          0x4
#define C2RSEL_size                              0x1
#define C2RSEL_value_mask                        0x10
#define C2RSEL_clear_mask                        0xEF

#define C1RSEL                                   0x5
#define C1RSEL_address                           0xF77
#define C1RSEL_position                          0x5
#define C1RSEL_size                              0x1
#define C1RSEL_value_mask                        0x20
#define C1RSEL_clear_mask                        0xDF

#define MC2OUT                                   0x6
#define MC2OUT_address                           0xF77
#define MC2OUT_position                          0x6
#define MC2OUT_size                              0x1
#define MC2OUT_value_mask                        0x40
#define MC2OUT_clear_mask                        0xBF

#define MC1OUT                                   0x7
#define MC1OUT_address                           0xF77
#define MC1OUT_position                          0x7
#define MC1OUT_size                              0x1
#define MC1OUT_value_mask                        0x80
#define MC1OUT_clear_mask                        0x7F


/*--------------------------------------------------------------#
| CM2CON0                                                 0xF78 |
#---------------------------------------------------------------#
| CON2 | COE2 | CPOL2 | EVPOL12 | EVPOL02 | C2R | C2CH1 | CCH02 |
#---------------------------------------------------------------#
| 7    | 6    | 5     | 4       | 3       | 2   | 1     | 0     |
#--------------------------------------------------------------*/

#define CM2CON0                                  0x0
#define CM2CON0_address                          0xF78
#define CM2CON0_position                         0x0
#define CM2CON0_size                             0x8
#define CM2CON0_value_mask                       0xFF
#define CM2CON0_clear_mask                       0x0

#define CCH02                                    0x0
#define CCH02_address                            0xF78
#define CCH02_position                           0x0
#define CCH02_size                               0x1
#define CCH02_value_mask                         0x1
#define CCH02_clear_mask                         0xFE

#define C2CH0                                    0x0
#define C2CH0_address                            0xF78
#define C2CH0_position                           0x0
#define C2CH0_size                               0x1
#define C2CH0_value_mask                         0x1
#define C2CH0_clear_mask                         0xFE

#define C2CH                                     0x0
#define C2CH_address                             0xF78
#define C2CH_position                            0x0
#define C2CH_size                                0x2
#define C2CH_value_mask                          0x3
#define C2CH_clear_mask                          0xFC

#define C2CH1                                    0x1
#define C2CH1_address                            0xF78
#define C2CH1_position                           0x1
#define C2CH1_size                               0x1
#define C2CH1_value_mask                         0x2
#define C2CH1_clear_mask                         0xFD

#define CCH12                                    0x1
#define CCH12_address                            0xF78
#define CCH12_position                           0x1
#define CCH12_size                               0x1
#define CCH12_value_mask                         0x2
#define CCH12_clear_mask                         0xFD

#define C2R                                      0x2
#define C2R_address                              0xF78
#define C2R_position                             0x2
#define C2R_size                                 0x1
#define C2R_value_mask                           0x4
#define C2R_clear_mask                           0xFB

#define CREF2                                    0x2
#define CREF2_address                            0xF78
#define CREF2_position                           0x2
#define CREF2_size                               0x1
#define CREF2_value_mask                         0x4
#define CREF2_clear_mask                         0xFB

#define EVPOL02                                  0x3
#define EVPOL02_address                          0xF78
#define EVPOL02_position                         0x3
#define EVPOL02_size                             0x1
#define EVPOL02_value_mask                       0x8
#define EVPOL02_clear_mask                       0xF7

#define C2SP                                     0x3
#define C2SP_address                             0xF78
#define C2SP_position                            0x3
#define C2SP_size                                0x1
#define C2SP_value_mask                          0x8
#define C2SP_clear_mask                          0xF7

#define EVPOL12                                  0x4
#define EVPOL12_address                          0xF78
#define EVPOL12_position                         0x4
#define EVPOL12_size                             0x1
#define EVPOL12_value_mask                       0x10
#define EVPOL12_clear_mask                       0xEF

#define C2POL                                    0x4
#define C2POL_address                            0xF78
#define C2POL_position                           0x4
#define C2POL_size                               0x1
#define C2POL_value_mask                         0x10
#define C2POL_clear_mask                         0xEF

#define CPOL2                                    0x5
#define CPOL2_address                            0xF78
#define CPOL2_position                           0x5
#define CPOL2_size                               0x1
#define CPOL2_value_mask                         0x20
#define CPOL2_clear_mask                         0xDF

#define C2OE                                     0x5
#define C2OE_address                             0xF78
#define C2OE_position                            0x5
#define C2OE_size                                0x1
#define C2OE_value_mask                          0x20
#define C2OE_clear_mask                          0xDF

#define CM2CON0_C2OUT                            0x6
#define CM2CON0_C2OUT_address                    0xF78
#define CM2CON0_C2OUT_position                   0x6
#define CM2CON0_C2OUT_size                       0x1
#define CM2CON0_C2OUT_value_mask                 0x40
#define CM2CON0_C2OUT_clear_mask                 0xBF

#define COE2                                     0x6
#define COE2_address                             0xF78
#define COE2_position                            0x6
#define COE2_size                                0x1
#define COE2_value_mask                          0x40
#define COE2_clear_mask                          0xBF

#define CON2                                     0x7
#define CON2_address                             0xF78
#define CON2_position                            0x7
#define CON2_size                                0x1
#define CON2_value_mask                          0x80
#define CON2_clear_mask                          0x7F

#define C2ON                                     0x7
#define C2ON_address                             0xF78
#define C2ON_position                            0x7
#define C2ON_size                                0x1
#define C2ON_value_mask                          0x80
#define C2ON_clear_mask                          0x7F


/*------------------------------------------------------------#
| CM1CON0                                               0xF79 |
#-------------------------------------------------------------#
| CON | COE | C1OE | EVPOL1 | EVPOL01 | CREF1 | CCH11 | C1CH0 |
#-------------------------------------------------------------#
| 7   | 6   | 5    | 4      | 3       | 2     | 1     | 0     |
#------------------------------------------------------------*/

#define CM1CON0                                  0x0
#define CM1CON0_address                          0xF79
#define CM1CON0_position                         0x0
#define CM1CON0_size                             0x8
#define CM1CON0_value_mask                       0xFF
#define CM1CON0_clear_mask                       0x0

#define C1CH0                                    0x0
#define C1CH0_address                            0xF79
#define C1CH0_position                           0x0
#define C1CH0_size                               0x1
#define C1CH0_value_mask                         0x1
#define C1CH0_clear_mask                         0xFE

#define C1CH                                     0x0
#define C1CH_address                             0xF79
#define C1CH_position                            0x0
#define C1CH_size                                0x2
#define C1CH_value_mask                          0x3
#define C1CH_clear_mask                          0xFC

#define CCH01                                    0x0
#define CCH01_address                            0xF79
#define CCH01_position                           0x0
#define CCH01_size                               0x1
#define CCH01_value_mask                         0x1
#define CCH01_clear_mask                         0xFE

#define CCH0                                     0x0
#define CCH0_address                             0xF79
#define CCH0_position                            0x0
#define CCH0_size                                0x1
#define CCH0_value_mask                          0x1
#define CCH0_clear_mask                          0xFE

#define CCH11                                    0x1
#define CCH11_address                            0xF79
#define CCH11_position                           0x1
#define CCH11_size                               0x1
#define CCH11_value_mask                         0x2
#define CCH11_clear_mask                         0xFD

#define C1CH1                                    0x1
#define C1CH1_address                            0xF79
#define C1CH1_position                           0x1
#define C1CH1_size                               0x1
#define C1CH1_value_mask                         0x2
#define C1CH1_clear_mask                         0xFD

#define CCH1                                     0x1
#define CCH1_address                             0xF79
#define CCH1_position                            0x1
#define CCH1_size                                0x1
#define CCH1_value_mask                          0x2
#define CCH1_clear_mask                          0xFD

#define CREF1                                    0x2
#define CREF1_address                            0xF79
#define CREF1_position                           0x2
#define CREF1_size                               0x1
#define CREF1_value_mask                         0x4
#define CREF1_clear_mask                         0xFB

#define C1R                                      0x2
#define C1R_address                              0xF79
#define C1R_position                             0x2
#define C1R_size                                 0x1
#define C1R_value_mask                           0x4
#define C1R_clear_mask                           0xFB

#define CREF                                     0x2
#define CREF_address                             0xF79
#define CREF_position                            0x2
#define CREF_size                                0x1
#define CREF_value_mask                          0x4
#define CREF_clear_mask                          0xFB

#define EVPOL01                                  0x3
#define EVPOL01_address                          0xF79
#define EVPOL01_position                         0x3
#define EVPOL01_size                             0x1
#define EVPOL01_value_mask                       0x8
#define EVPOL01_clear_mask                       0xF7

#define EVPOL0                                   0x3
#define EVPOL0_address                           0xF79
#define EVPOL0_position                          0x3
#define EVPOL0_size                              0x1
#define EVPOL0_value_mask                        0x8
#define EVPOL0_clear_mask                        0xF7

#define C1SP                                     0x3
#define C1SP_address                             0xF79
#define C1SP_position                            0x3
#define C1SP_size                                0x1
#define C1SP_value_mask                          0x8
#define C1SP_clear_mask                          0xF7

#define EVPOL1                                   0x4
#define EVPOL1_address                           0xF79
#define EVPOL1_position                          0x4
#define EVPOL1_size                              0x1
#define EVPOL1_value_mask                        0x10
#define EVPOL1_clear_mask                        0xEF

#define EVPOL11                                  0x4
#define EVPOL11_address                          0xF79
#define EVPOL11_position                         0x4
#define EVPOL11_size                             0x1
#define EVPOL11_value_mask                       0x10
#define EVPOL11_clear_mask                       0xEF

#define C1POL                                    0x4
#define C1POL_address                            0xF79
#define C1POL_position                           0x4
#define C1POL_size                               0x1
#define C1POL_value_mask                         0x10
#define C1POL_clear_mask                         0xEF

#define C1OE                                     0x5
#define C1OE_address                             0xF79
#define C1OE_position                            0x5
#define C1OE_size                                0x1
#define C1OE_value_mask                          0x20
#define C1OE_clear_mask                          0xDF

#define CPOL                                     0x5
#define CPOL_address                             0xF79
#define CPOL_position                            0x5
#define CPOL_size                                0x1
#define CPOL_value_mask                          0x20
#define CPOL_clear_mask                          0xDF

#define CPOL1                                    0x5
#define CPOL1_address                            0xF79
#define CPOL1_position                           0x5
#define CPOL1_size                               0x1
#define CPOL1_value_mask                         0x20
#define CPOL1_clear_mask                         0xDF

#define COE                                      0x6
#define COE_address                              0xF79
#define COE_position                             0x6
#define COE_size                                 0x1
#define COE_value_mask                           0x40
#define COE_clear_mask                           0xBF

#define CM1CON0_C1OUT                            0x6
#define CM1CON0_C1OUT_address                    0xF79
#define CM1CON0_C1OUT_position                   0x6
#define CM1CON0_C1OUT_size                       0x1
#define CM1CON0_C1OUT_value_mask                 0x40
#define CM1CON0_C1OUT_clear_mask                 0xBF

#define COE1                                     0x6
#define COE1_address                             0xF79
#define COE1_position                            0x6
#define COE1_size                                0x1
#define COE1_value_mask                          0x40
#define COE1_clear_mask                          0xBF

#define CON                                      0x7
#define CON_address                              0xF79
#define CON_position                             0x7
#define CON_size                                 0x1
#define CON_value_mask                           0x80
#define CON_clear_mask                           0x7F

#define C1ON                                     0x7
#define C1ON_address                             0xF79
#define C1ON_position                            0x7
#define C1ON_size                                0x1
#define C1ON_value_mask                          0x80
#define C1ON_clear_mask                          0x7F

#define CON1                                     0x7
#define CON1_address                             0xF79
#define CON1_position                            0x7
#define CON1_size                                0x1
#define CON1_value_mask                          0x80
#define CON1_clear_mask                          0x7F


/*---------------------------------------------#
| PIE4                                   0xF7A |
#----------------------------------------------#
| - | - | - | - | - | CCP5IE | CCP4IE | CCP3IE |
#----------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1      | 0      |
#---------------------------------------------*/

#define PIE4                                     0x0
#define PIE4_address                             0xF7A
#define PIE4_position                            0x0
#define PIE4_size                                0x8
#define PIE4_value_mask                          0xFF
#define PIE4_clear_mask                          0x0

#define CCP3IE                                   0x0
#define CCP3IE_address                           0xF7A
#define CCP3IE_position                          0x0
#define CCP3IE_size                              0x1
#define CCP3IE_value_mask                        0x1
#define CCP3IE_clear_mask                        0xFE

#define CCP4IE                                   0x1
#define CCP4IE_address                           0xF7A
#define CCP4IE_position                          0x1
#define CCP4IE_size                              0x1
#define CCP4IE_value_mask                        0x2
#define CCP4IE_clear_mask                        0xFD

#define CCP5IE                                   0x2
#define CCP5IE_address                           0xF7A
#define CCP5IE_position                          0x2
#define CCP5IE_size                              0x1
#define CCP5IE_value_mask                        0x4
#define CCP5IE_clear_mask                        0xFB


/*---------------------------------------------#
| PIR4                                   0xF7B |
#----------------------------------------------#
| - | - | - | - | - | CCP5IF | CCP4IF | CCP3IF |
#----------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1      | 0      |
#---------------------------------------------*/

#define PIR4                                     0x0
#define PIR4_address                             0xF7B
#define PIR4_position                            0x0
#define PIR4_size                                0x8
#define PIR4_value_mask                          0xFF
#define PIR4_clear_mask                          0x0

#define CCP3IF                                   0x0
#define CCP3IF_address                           0xF7B
#define CCP3IF_position                          0x0
#define CCP3IF_size                              0x1
#define CCP3IF_value_mask                        0x1
#define CCP3IF_clear_mask                        0xFE

#define CCP4IF                                   0x1
#define CCP4IF_address                           0xF7B
#define CCP4IF_position                          0x1
#define CCP4IF_size                              0x1
#define CCP4IF_value_mask                        0x2
#define CCP4IF_clear_mask                        0xFD

#define CCP5IF                                   0x2
#define CCP5IF_address                           0xF7B
#define CCP5IF_position                          0x2
#define CCP5IF_size                              0x1
#define CCP5IF_value_mask                        0x4
#define CCP5IF_clear_mask                        0xFB


/*---------------------------------------------#
| IPR4                                   0xF7C |
#----------------------------------------------#
| - | - | - | - | - | CCP5IP | CCP4IP | CCP3IP |
#----------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1      | 0      |
#---------------------------------------------*/

#define IPR4                                     0x0
#define IPR4_address                             0xF7C
#define IPR4_position                            0x0
#define IPR4_size                                0x8
#define IPR4_value_mask                          0xFF
#define IPR4_clear_mask                          0x0

#define CCP3IP                                   0x0
#define CCP3IP_address                           0xF7C
#define CCP3IP_position                          0x0
#define CCP3IP_size                              0x1
#define CCP3IP_value_mask                        0x1
#define CCP3IP_clear_mask                        0xFE

#define CCIP3IP                                  0x0
#define CCIP3IP_address                          0xF7C
#define CCIP3IP_position                         0x0
#define CCIP3IP_size                             0x1
#define CCIP3IP_value_mask                       0x1
#define CCIP3IP_clear_mask                       0xFE

#define CCP4IP                                   0x1
#define CCP4IP_address                           0xF7C
#define CCP4IP_position                          0x1
#define CCP4IP_size                              0x1
#define CCP4IP_value_mask                        0x2
#define CCP4IP_clear_mask                        0xFD

#define CCP5IP                                   0x2
#define CCP5IP_address                           0xF7C
#define CCP5IP_position                          0x2
#define CCP5IP_size                              0x1
#define CCP5IP_value_mask                        0x4
#define CCP5IP_clear_mask                        0xFB


/*---------------------------------------------#
| PIE5                                   0xF7D |
#----------------------------------------------#
| - | - | - | - | - | TMR6IE | TMR5IE | TMR4IE |
#----------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1      | 0      |
#---------------------------------------------*/

#define PIE5                                     0x0
#define PIE5_address                             0xF7D
#define PIE5_position                            0x0
#define PIE5_size                                0x8
#define PIE5_value_mask                          0xFF
#define PIE5_clear_mask                          0x0

#define TMR4IE                                   0x0
#define TMR4IE_address                           0xF7D
#define TMR4IE_position                          0x0
#define TMR4IE_size                              0x1
#define TMR4IE_value_mask                        0x1
#define TMR4IE_clear_mask                        0xFE

#define TMR5IE                                   0x1
#define TMR5IE_address                           0xF7D
#define TMR5IE_position                          0x1
#define TMR5IE_size                              0x1
#define TMR5IE_value_mask                        0x2
#define TMR5IE_clear_mask                        0xFD

#define TMR6IE                                   0x2
#define TMR6IE_address                           0xF7D
#define TMR6IE_position                          0x2
#define TMR6IE_size                              0x1
#define TMR6IE_value_mask                        0x4
#define TMR6IE_clear_mask                        0xFB


/*---------------------------------------------#
| PIR5                                   0xF7E |
#----------------------------------------------#
| - | - | - | - | - | TMR6IF | TMR5IF | TMR4IF |
#----------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1      | 0      |
#---------------------------------------------*/

#define PIR5                                     0x0
#define PIR5_address                             0xF7E
#define PIR5_position                            0x0
#define PIR5_size                                0x8
#define PIR5_value_mask                          0xFF
#define PIR5_clear_mask                          0x0

#define TMR4IF                                   0x0
#define TMR4IF_address                           0xF7E
#define TMR4IF_position                          0x0
#define TMR4IF_size                              0x1
#define TMR4IF_value_mask                        0x1
#define TMR4IF_clear_mask                        0xFE

#define TMR5IF                                   0x1
#define TMR5IF_address                           0xF7E
#define TMR5IF_position                          0x1
#define TMR5IF_size                              0x1
#define TMR5IF_value_mask                        0x2
#define TMR5IF_clear_mask                        0xFD

#define TMR6IF                                   0x2
#define TMR6IF_address                           0xF7E
#define TMR6IF_position                          0x2
#define TMR6IF_size                              0x1
#define TMR6IF_value_mask                        0x4
#define TMR6IF_clear_mask                        0xFB


/*--------------------------------------------#
| IPR5                                  0xF7F |
#---------------------------------------------#
| - | - | - | - | - | TMR6IP | CCH15 | TMR4IP |
#---------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1     | 0      |
#--------------------------------------------*/

#define IPR5                                     0x0
#define IPR5_address                             0xF7F
#define IPR5_position                            0x0
#define IPR5_size                                0x8
#define IPR5_value_mask                          0xFF
#define IPR5_clear_mask                          0x0

#define TMR4IP                                   0x0
#define TMR4IP_address                           0xF7F
#define TMR4IP_position                          0x0
#define TMR4IP_size                              0x1
#define TMR4IP_value_mask                        0x1
#define TMR4IP_clear_mask                        0xFE

#define CCH05                                    0x0
#define CCH05_address                            0xF7F
#define CCH05_position                           0x0
#define CCH05_size                               0x1
#define CCH05_value_mask                         0x1
#define CCH05_clear_mask                         0xFE

#define CCH15                                    0x1
#define CCH15_address                            0xF7F
#define CCH15_position                           0x1
#define CCH15_size                               0x1
#define CCH15_value_mask                         0x2
#define CCH15_clear_mask                         0xFD

#define TMR5IP                                   0x1
#define TMR5IP_address                           0xF7F
#define TMR5IP_position                          0x1
#define TMR5IP_size                              0x1
#define TMR5IP_value_mask                        0x2
#define TMR5IP_clear_mask                        0xFD

#define TMR6IP                                   0x2
#define TMR6IP_address                           0xF7F
#define TMR6IP_position                          0x2
#define TMR6IP_size                              0x1
#define TMR6IP_value_mask                        0x4
#define TMR6IP_clear_mask                        0xFB


/*--------------------------------------------------------------------------------#
| PORTA                                                                     0xF80 |
#---------------------------------------------------------------------------------#
| PORTA_RA7 | PORTA_RA6 | PORTA_C2OUT | PORTA_C1OUT | C1INP | AN2 | AN1 | ULPWUIN |
#---------------------------------------------------------------------------------#
| 7         | 6         | 5           | 4           | 3     | 2   | 1   | 0       |
#--------------------------------------------------------------------------------*/

#define PORTA                                    0x0
#define PORTA_address                            0xF80
#define PORTA_position                           0x0
#define PORTA_size                               0x8
#define PORTA_value_mask                         0xFF
#define PORTA_clear_mask                         0x0

#define ULPWUIN                                  0x0
#define ULPWUIN_address                          0xF80
#define ULPWUIN_position                         0x0
#define ULPWUIN_size                             0x1
#define ULPWUIN_value_mask                       0x1
#define ULPWUIN_clear_mask                       0xFE

#define AN0                                      0x0
#define AN0_address                              0xF80
#define AN0_position                             0x0
#define AN0_size                                 0x1
#define AN0_value_mask                           0x1
#define AN0_clear_mask                           0xFE

#define PORTA_RA0                                0x0
#define PORTA_RA0_address                        0xF80
#define PORTA_RA0_position                       0x0
#define PORTA_RA0_size                           0x1
#define PORTA_RA0_value_mask                     0x1
#define PORTA_RA0_clear_mask                     0xFE

#define C12IN0M                                  0x0
#define C12IN0M_address                          0xF80
#define C12IN0M_position                         0x0
#define C12IN0M_size                             0x1
#define C12IN0M_value_mask                       0x1
#define C12IN0M_clear_mask                       0xFE

#define C12IN0N                                  0x0
#define C12IN0N_address                          0xF80
#define C12IN0N_position                         0x0
#define C12IN0N_size                             0x1
#define C12IN0N_value_mask                       0x1
#define C12IN0N_clear_mask                       0xFE

#define AN1                                      0x1
#define AN1_address                              0xF80
#define AN1_position                             0x1
#define AN1_size                                 0x1
#define AN1_value_mask                           0x2
#define AN1_clear_mask                           0xFD

#define C12IN1N                                  0x1
#define C12IN1N_address                          0xF80
#define C12IN1N_position                         0x1
#define C12IN1N_size                             0x1
#define C12IN1N_value_mask                       0x2
#define C12IN1N_clear_mask                       0xFD

#define C12IN1M                                  0x1
#define C12IN1M_address                          0xF80
#define C12IN1M_position                         0x1
#define C12IN1M_size                             0x1
#define C12IN1M_value_mask                       0x2
#define C12IN1M_clear_mask                       0xFD

#define PORTA_RA1                                0x1
#define PORTA_RA1_address                        0xF80
#define PORTA_RA1_position                       0x1
#define PORTA_RA1_size                           0x1
#define PORTA_RA1_value_mask                     0x2
#define PORTA_RA1_clear_mask                     0xFD

#define AN2                                      0x2
#define AN2_address                              0xF80
#define AN2_position                             0x2
#define AN2_size                                 0x1
#define AN2_value_mask                           0x4
#define AN2_clear_mask                           0xFB

#define DACOUT                                   0x2
#define DACOUT_address                           0xF80
#define DACOUT_position                          0x2
#define DACOUT_size                              0x1
#define DACOUT_value_mask                        0x4
#define DACOUT_clear_mask                        0xFB

#define PORTA_RA2                                0x2
#define PORTA_RA2_address                        0xF80
#define PORTA_RA2_position                       0x2
#define PORTA_RA2_size                           0x1
#define PORTA_RA2_value_mask                     0x4
#define PORTA_RA2_clear_mask                     0xFB

#define CVREF                                    0x2
#define CVREF_address                            0xF80
#define CVREF_position                           0x2
#define CVREF_size                               0x1
#define CVREF_value_mask                         0x4
#define CVREF_clear_mask                         0xFB

#define VREFN                                    0x2
#define VREFN_address                            0xF80
#define VREFN_position                           0x2
#define VREFN_size                               0x1
#define VREFN_value_mask                         0x4
#define VREFN_clear_mask                         0xFB

#define VREFM                                    0x2
#define VREFM_address                            0xF80
#define VREFM_position                           0x2
#define VREFM_size                               0x1
#define VREFM_value_mask                         0x4
#define VREFM_clear_mask                         0xFB

#define C2INP                                    0x2
#define C2INP_address                            0xF80
#define C2INP_position                           0x2
#define C2INP_size                               0x1
#define C2INP_value_mask                         0x4
#define C2INP_clear_mask                         0xFB

#define C1INP                                    0x3
#define C1INP_address                            0xF80
#define C1INP_position                           0x3
#define C1INP_size                               0x1
#define C1INP_value_mask                         0x8
#define C1INP_clear_mask                         0xF7

#define AN3                                      0x3
#define AN3_address                              0xF80
#define AN3_position                             0x3
#define AN3_size                                 0x1
#define AN3_value_mask                           0x8
#define AN3_clear_mask                           0xF7

#define PORTA_RA3                                0x3
#define PORTA_RA3_address                        0xF80
#define PORTA_RA3_position                       0x3
#define PORTA_RA3_size                           0x1
#define PORTA_RA3_value_mask                     0x8
#define PORTA_RA3_clear_mask                     0xF7

#define VREFP                                    0x3
#define VREFP_address                            0xF80
#define VREFP_position                           0x3
#define VREFP_size                               0x1
#define VREFP_value_mask                         0x8
#define VREFP_clear_mask                         0xF7

#define PORTA_C1OUT                              0x4
#define PORTA_C1OUT_address                      0xF80
#define PORTA_C1OUT_position                     0x4
#define PORTA_C1OUT_size                         0x1
#define PORTA_C1OUT_value_mask                   0x10
#define PORTA_C1OUT_clear_mask                   0xEF

#define PORTA_RA4                                0x4
#define PORTA_RA4_address                        0xF80
#define PORTA_RA4_position                       0x4
#define PORTA_RA4_size                           0x1
#define PORTA_RA4_value_mask                     0x10
#define PORTA_RA4_clear_mask                     0xEF

#define T0CKI                                    0x4
#define T0CKI_address                            0xF80
#define T0CKI_position                           0x4
#define T0CKI_size                               0x1
#define T0CKI_value_mask                         0x10
#define T0CKI_clear_mask                         0xEF

#define SRQ                                      0x4
#define SRQ_address                              0xF80
#define SRQ_position                             0x4
#define SRQ_size                                 0x1
#define SRQ_value_mask                           0x10
#define SRQ_clear_mask                           0xEF

#define PORTA_C2OUT                              0x5
#define PORTA_C2OUT_address                      0xF80
#define PORTA_C2OUT_position                     0x5
#define PORTA_C2OUT_size                         0x1
#define PORTA_C2OUT_value_mask                   0x20
#define PORTA_C2OUT_clear_mask                   0xDF

#define SS1                                      0x5
#define SS1_address                              0xF80
#define SS1_position                             0x5
#define SS1_size                                 0x1
#define SS1_value_mask                           0x20
#define SS1_clear_mask                           0xDF

#define AN4                                      0x5
#define AN4_address                              0xF80
#define AN4_position                             0x5
#define AN4_size                                 0x1
#define AN4_value_mask                           0x20
#define AN4_clear_mask                           0xDF

#define PORTA_RA5                                0x5
#define PORTA_RA5_address                        0xF80
#define PORTA_RA5_position                       0x5
#define PORTA_RA5_size                           0x1
#define PORTA_RA5_value_mask                     0x20
#define PORTA_RA5_clear_mask                     0xDF

#define NOT_SS                                   0x5
#define NOT_SS_address                           0xF80
#define NOT_SS_position                          0x5
#define NOT_SS_size                              0x1
#define NOT_SS_value_mask                        0x20
#define NOT_SS_clear_mask                        0xDF

#define nSS1                                     0x5
#define nSS1_address                             0xF80
#define nSS1_position                            0x5
#define nSS1_size                                0x1
#define nSS1_value_mask                          0x20
#define nSS1_clear_mask                          0xDF

#define NOT_SS1                                  0x5
#define NOT_SS1_address                          0xF80
#define NOT_SS1_position                         0x5
#define NOT_SS1_size                             0x1
#define NOT_SS1_value_mask                       0x20
#define NOT_SS1_clear_mask                       0xDF

#define LVDIN                                    0x5
#define LVDIN_address                            0xF80
#define LVDIN_position                           0x5
#define LVDIN_size                               0x1
#define LVDIN_value_mask                         0x20
#define LVDIN_clear_mask                         0xDF

#define nSS                                      0x5
#define nSS_address                              0xF80
#define nSS_position                             0x5
#define nSS_size                                 0x1
#define nSS_value_mask                           0x20
#define nSS_clear_mask                           0xDF

#define SS                                       0x5
#define SS_address                               0xF80
#define SS_position                              0x5
#define SS_size                                  0x1
#define SS_value_mask                            0x20
#define SS_clear_mask                            0xDF

#define SRNQ                                     0x5
#define SRNQ_address                             0xF80
#define SRNQ_position                            0x5
#define SRNQ_size                                0x1
#define SRNQ_value_mask                          0x20
#define SRNQ_clear_mask                          0xDF

#define HLVDIN                                   0x5
#define HLVDIN_address                           0xF80
#define HLVDIN_position                          0x5
#define HLVDIN_size                              0x1
#define HLVDIN_value_mask                        0x20
#define HLVDIN_clear_mask                        0xDF

#define PORTA_RA6                                0x6
#define PORTA_RA6_address                        0xF80
#define PORTA_RA6_position                       0x6
#define PORTA_RA6_size                           0x1
#define PORTA_RA6_value_mask                     0x40
#define PORTA_RA6_clear_mask                     0xBF

#define PORTA_RA7                                0x7
#define PORTA_RA7_address                        0xF80
#define PORTA_RA7_position                       0x7
#define PORTA_RA7_size                           0x1
#define PORTA_RA7_value_mask                     0x80
#define PORTA_RA7_clear_mask                     0x7F

#define RJPU                                     0x7
#define RJPU_address                             0xF80
#define RJPU_position                            0x7
#define RJPU_size                                0x1
#define RJPU_value_mask                          0x80
#define RJPU_clear_mask                          0x7F


/*-----------------------------------------------------------#
| PORTB                                                0xF81 |
#------------------------------------------------------------#
| PGD | PGC | PORTB_CCP3 | KBI0 | AN9 | AN8 | C12IN3M | FLT0 |
#------------------------------------------------------------#
| 7   | 6   | 5          | 4    | 3   | 2   | 1       | 0    |
#-----------------------------------------------------------*/

#define PORTB                                    0x0
#define PORTB_address                            0xF81
#define PORTB_position                           0x0
#define PORTB_size                               0x8
#define PORTB_value_mask                         0xFF
#define PORTB_clear_mask                         0x0

#define FLT0                                     0x0
#define FLT0_address                             0xF81
#define FLT0_position                            0x0
#define FLT0_size                                0x1
#define FLT0_value_mask                          0x1
#define FLT0_clear_mask                          0xFE

#define INT0                                     0x0
#define INT0_address                             0xF81
#define INT0_position                            0x0
#define INT0_size                                0x1
#define INT0_value_mask                          0x1
#define INT0_clear_mask                          0xFE

#define SRI                                      0x0
#define SRI_address                              0xF81
#define SRI_position                             0x0
#define SRI_size                                 0x1
#define SRI_value_mask                           0x1
#define SRI_clear_mask                           0xFE

#define PORTB_RB0                                0x0
#define PORTB_RB0_address                        0xF81
#define PORTB_RB0_position                       0x0
#define PORTB_RB0_size                           0x1
#define PORTB_RB0_value_mask                     0x1
#define PORTB_RB0_clear_mask                     0xFE

#define AN12                                     0x0
#define AN12_address                             0xF81
#define AN12_position                            0x0
#define AN12_size                                0x1
#define AN12_value_mask                          0x1
#define AN12_clear_mask                          0xFE

#define C12IN3M                                  0x1
#define C12IN3M_address                          0xF81
#define C12IN3M_position                         0x1
#define C12IN3M_size                             0x1
#define C12IN3M_value_mask                       0x2
#define C12IN3M_clear_mask                       0xFD

#define C12IN3N                                  0x1
#define C12IN3N_address                          0xF81
#define C12IN3N_position                         0x1
#define C12IN3N_size                             0x1
#define C12IN3N_value_mask                       0x2
#define C12IN3N_clear_mask                       0xFD

#define INT1                                     0x1
#define INT1_address                             0xF81
#define INT1_position                            0x1
#define INT1_size                                0x1
#define INT1_value_mask                          0x2
#define INT1_clear_mask                          0xFD

#define PORTB_RB1                                0x1
#define PORTB_RB1_address                        0xF81
#define PORTB_RB1_position                       0x1
#define PORTB_RB1_size                           0x1
#define PORTB_RB1_value_mask                     0x2
#define PORTB_RB1_clear_mask                     0xFD

#define AN10                                     0x1
#define AN10_address                             0xF81
#define AN10_position                            0x1
#define AN10_size                                0x1
#define AN10_value_mask                          0x2
#define AN10_clear_mask                          0xFD

#define AN8                                      0x2
#define AN8_address                              0xF81
#define AN8_position                             0x2
#define AN8_size                                 0x1
#define AN8_value_mask                           0x4
#define AN8_clear_mask                           0xFB

#define INT2                                     0x2
#define INT2_address                             0xF81
#define INT2_position                            0x2
#define INT2_size                                0x1
#define INT2_value_mask                          0x4
#define INT2_clear_mask                          0xFB

#define CTED1                                    0x2
#define CTED1_address                            0xF81
#define CTED1_position                           0x2
#define CTED1_size                               0x1
#define CTED1_value_mask                         0x4
#define CTED1_clear_mask                         0xFB

#define PORTB_RB2                                0x2
#define PORTB_RB2_address                        0xF81
#define PORTB_RB2_position                       0x2
#define PORTB_RB2_size                           0x1
#define PORTB_RB2_value_mask                     0x4
#define PORTB_RB2_clear_mask                     0xFB

#define AN9                                      0x3
#define AN9_address                              0xF81
#define AN9_position                             0x3
#define AN9_size                                 0x1
#define AN9_value_mask                           0x8
#define AN9_clear_mask                           0xF7

#define PORTB_CCP2                               0x3
#define PORTB_CCP2_address                       0xF81
#define PORTB_CCP2_position                      0x3
#define PORTB_CCP2_size                          0x1
#define PORTB_CCP2_value_mask                    0x8
#define PORTB_CCP2_clear_mask                    0xF7

#define CCP2_PA2                                 0x3
#define CCP2_PA2_address                         0xF81
#define CCP2_PA2_position                        0x3
#define CCP2_PA2_size                            0x1
#define CCP2_PA2_value_mask                      0x8
#define CCP2_PA2_clear_mask                      0xF7

#define C12IN2N                                  0x3
#define C12IN2N_address                          0xF81
#define C12IN2N_position                         0x3
#define C12IN2N_size                             0x1
#define C12IN2N_value_mask                       0x8
#define C12IN2N_clear_mask                       0xF7

#define CTED2                                    0x3
#define CTED2_address                            0xF81
#define CTED2_position                           0x3
#define CTED2_size                               0x1
#define CTED2_value_mask                         0x8
#define CTED2_clear_mask                         0xF7

#define C12IN2M                                  0x3
#define C12IN2M_address                          0xF81
#define C12IN2M_position                         0x3
#define C12IN2M_size                             0x1
#define C12IN2M_value_mask                       0x8
#define C12IN2M_clear_mask                       0xF7

#define PORTB_RB3                                0x3
#define PORTB_RB3_address                        0xF81
#define PORTB_RB3_position                       0x3
#define PORTB_RB3_size                           0x1
#define PORTB_RB3_value_mask                     0x8
#define PORTB_RB3_clear_mask                     0xF7

#define PORTB_P2A                                0x3
#define PORTB_P2A_address                        0xF81
#define PORTB_P2A_position                       0x3
#define PORTB_P2A_size                           0x1
#define PORTB_P2A_value_mask                     0x8
#define PORTB_P2A_clear_mask                     0xF7

#define PORTB_RB4                                0x4
#define PORTB_RB4_address                        0xF81
#define PORTB_RB4_position                       0x4
#define PORTB_RB4_size                           0x1
#define PORTB_RB4_value_mask                     0x10
#define PORTB_RB4_clear_mask                     0xEF

#define KBI0                                     0x4
#define KBI0_address                             0xF81
#define KBI0_position                            0x4
#define KBI0_size                                0x1
#define KBI0_value_mask                          0x10
#define KBI0_clear_mask                          0xEF

#define T5G                                      0x4
#define T5G_address                              0xF81
#define T5G_position                             0x4
#define T5G_size                                 0x1
#define T5G_value_mask                           0x10
#define T5G_clear_mask                           0xEF

#define AN11                                     0x4
#define AN11_address                             0xF81
#define AN11_position                            0x4
#define AN11_size                                0x1
#define AN11_value_mask                          0x10
#define AN11_clear_mask                          0xEF

#define PORTB_CCP3                               0x5
#define PORTB_CCP3_address                       0xF81
#define PORTB_CCP3_position                      0x5
#define PORTB_CCP3_size                          0x1
#define PORTB_CCP3_value_mask                    0x20
#define PORTB_CCP3_clear_mask                    0xDF

#define PORTB_RB5                                0x5
#define PORTB_RB5_address                        0xF81
#define PORTB_RB5_position                       0x5
#define PORTB_RB5_size                           0x1
#define PORTB_RB5_value_mask                     0x20
#define PORTB_RB5_clear_mask                     0xDF

#define PORTB_P3A                                0x5
#define PORTB_P3A_address                        0xF81
#define PORTB_P3A_position                       0x5
#define PORTB_P3A_size                           0x1
#define PORTB_P3A_value_mask                     0x20
#define PORTB_P3A_clear_mask                     0xDF

#define T1G                                      0x5
#define T1G_address                              0xF81
#define T1G_position                             0x5
#define T1G_size                                 0x1
#define T1G_value_mask                           0x20
#define T1G_clear_mask                           0xDF

#define KBI1                                     0x5
#define KBI1_address                             0xF81
#define KBI1_position                            0x5
#define KBI1_size                                0x1
#define KBI1_value_mask                          0x20
#define KBI1_clear_mask                          0xDF

#define AN13                                     0x5
#define AN13_address                             0xF81
#define AN13_position                            0x5
#define AN13_size                                0x1
#define AN13_value_mask                          0x20
#define AN13_clear_mask                          0xDF

#define PORTB_T3CKI                              0x5
#define PORTB_T3CKI_address                      0xF81
#define PORTB_T3CKI_position                     0x5
#define PORTB_T3CKI_size                         0x1
#define PORTB_T3CKI_value_mask                   0x20
#define PORTB_T3CKI_clear_mask                   0xDF

#define PORTB_RB6                                0x6
#define PORTB_RB6_address                        0xF81
#define PORTB_RB6_position                       0x6
#define PORTB_RB6_size                           0x1
#define PORTB_RB6_value_mask                     0x40
#define PORTB_RB6_clear_mask                     0xBF

#define PGC                                      0x6
#define PGC_address                              0xF81
#define PGC_position                             0x6
#define PGC_size                                 0x1
#define PGC_value_mask                           0x40
#define PGC_clear_mask                           0xBF

#define KBI2                                     0x6
#define KBI2_address                             0xF81
#define KBI2_position                            0x6
#define KBI2_size                                0x1
#define KBI2_value_mask                          0x40
#define KBI2_clear_mask                          0xBF

#define PGD                                      0x7
#define PGD_address                              0xF81
#define PGD_position                             0x7
#define PGD_size                                 0x1
#define PGD_value_mask                           0x80
#define PGD_clear_mask                           0x7F

#define PORTB_RB7                                0x7
#define PORTB_RB7_address                        0xF81
#define PORTB_RB7_position                       0x7
#define PORTB_RB7_size                           0x1
#define PORTB_RB7_value_mask                     0x80
#define PORTB_RB7_clear_mask                     0x7F

#define KBI3                                     0x7
#define KBI3_address                             0xF81
#define KBI3_position                            0x7
#define KBI3_size                                0x1
#define KBI3_value_mask                          0x80
#define KBI3_clear_mask                          0x7F


/*---------------------------------------------------------------#
| PORTC                                                    0xF82 |
#----------------------------------------------------------------#
| DT1 | AN18 | SDO1 | SDI1 | SCK1 | P1A | PORTC_CCP2 | PORTC_P2B |
#----------------------------------------------------------------#
| 7   | 6    | 5    | 4    | 3    | 2   | 1          | 0         |
#---------------------------------------------------------------*/

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

#define T1OSO                                    0x0
#define T1OSO_address                            0xF82
#define T1OSO_position                           0x0
#define T1OSO_size                               0x1
#define T1OSO_value_mask                         0x1
#define T1OSO_clear_mask                         0xFE

#define PORTC_T3CKI                              0x0
#define PORTC_T3CKI_address                      0xF82
#define PORTC_T3CKI_position                     0x0
#define PORTC_T3CKI_size                         0x1
#define PORTC_T3CKI_value_mask                   0x1
#define PORTC_T3CKI_clear_mask                   0xFE

#define PORTC_RC0                                0x0
#define PORTC_RC0_address                        0xF82
#define PORTC_RC0_position                       0x0
#define PORTC_RC0_size                           0x1
#define PORTC_RC0_value_mask                     0x1
#define PORTC_RC0_clear_mask                     0xFE

#define T3G                                      0x0
#define T3G_address                              0xF82
#define T3G_position                             0x0
#define T3G_size                                 0x1
#define T3G_value_mask                           0x1
#define T3G_clear_mask                           0xFE

#define PORTC_P2B                                0x0
#define PORTC_P2B_address                        0xF82
#define PORTC_P2B_position                       0x0
#define PORTC_P2B_size                           0x1
#define PORTC_P2B_value_mask                     0x1
#define PORTC_P2B_clear_mask                     0xFE

#define PORTC_CCP2                               0x1
#define PORTC_CCP2_address                       0xF82
#define PORTC_CCP2_position                      0x1
#define PORTC_CCP2_size                          0x1
#define PORTC_CCP2_value_mask                    0x2
#define PORTC_CCP2_clear_mask                    0xFD

#define PORTC_P2A                                0x1
#define PORTC_P2A_address                        0xF82
#define PORTC_P2A_position                       0x1
#define PORTC_P2A_size                           0x1
#define PORTC_P2A_value_mask                     0x2
#define PORTC_P2A_clear_mask                     0xFD

#define PORTC_RC1                                0x1
#define PORTC_RC1_address                        0xF82
#define PORTC_RC1_position                       0x1
#define PORTC_RC1_size                           0x1
#define PORTC_RC1_value_mask                     0x2
#define PORTC_RC1_clear_mask                     0xFD

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

#define CCP1                                     0x2
#define CCP1_address                             0xF82
#define CCP1_position                            0x2
#define CCP1_size                                0x1
#define CCP1_value_mask                          0x4
#define CCP1_clear_mask                          0xFB

#define CTPLS                                    0x2
#define CTPLS_address                            0xF82
#define CTPLS_position                           0x2
#define CTPLS_size                               0x1
#define CTPLS_value_mask                         0x4
#define CTPLS_clear_mask                         0xFB

#define P1A                                      0x2
#define P1A_address                              0xF82
#define P1A_position                             0x2
#define P1A_size                                 0x1
#define P1A_value_mask                           0x4
#define P1A_clear_mask                           0xFB

#define T5CKI                                    0x2
#define T5CKI_address                            0xF82
#define T5CKI_position                           0x2
#define T5CKI_size                               0x1
#define T5CKI_value_mask                         0x4
#define T5CKI_clear_mask                         0xFB

#define PA1                                      0x2
#define PA1_address                              0xF82
#define PA1_position                             0x2
#define PA1_size                                 0x1
#define PA1_value_mask                           0x4
#define PA1_clear_mask                           0xFB

#define AN14                                     0x2
#define AN14_address                             0xF82
#define AN14_position                            0x2
#define AN14_size                                0x1
#define AN14_value_mask                          0x4
#define AN14_clear_mask                          0xFB

#define PORTC_RC2                                0x2
#define PORTC_RC2_address                        0xF82
#define PORTC_RC2_position                       0x2
#define PORTC_RC2_size                           0x1
#define PORTC_RC2_value_mask                     0x4
#define PORTC_RC2_clear_mask                     0xFB

#define SCK1                                     0x3
#define SCK1_address                             0xF82
#define SCK1_position                            0x3
#define SCK1_size                                0x1
#define SCK1_value_mask                          0x8
#define SCK1_clear_mask                          0xF7

#define SCL                                      0x3
#define SCL_address                              0xF82
#define SCL_position                             0x3
#define SCL_size                                 0x1
#define SCL_value_mask                           0x8
#define SCL_clear_mask                           0xF7

#define SCK                                      0x3
#define SCK_address                              0xF82
#define SCK_position                             0x3
#define SCK_size                                 0x1
#define SCK_value_mask                           0x8
#define SCK_clear_mask                           0xF7

#define SCL1                                     0x3
#define SCL1_address                             0xF82
#define SCL1_position                            0x3
#define SCL1_size                                0x1
#define SCL1_value_mask                          0x8
#define SCL1_clear_mask                          0xF7

#define AN15                                     0x3
#define AN15_address                             0xF82
#define AN15_position                            0x3
#define AN15_size                                0x1
#define AN15_value_mask                          0x8
#define AN15_clear_mask                          0xF7

#define PORTC_RC3                                0x3
#define PORTC_RC3_address                        0xF82
#define PORTC_RC3_position                       0x3
#define PORTC_RC3_size                           0x1
#define PORTC_RC3_value_mask                     0x8
#define PORTC_RC3_clear_mask                     0xF7

#define PORTC_RC4                                0x4
#define PORTC_RC4_address                        0xF82
#define PORTC_RC4_position                       0x4
#define PORTC_RC4_size                           0x1
#define PORTC_RC4_value_mask                     0x10
#define PORTC_RC4_clear_mask                     0xEF

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

#define AN16                                     0x4
#define AN16_address                             0xF82
#define AN16_position                            0x4
#define AN16_size                                0x1
#define AN16_value_mask                          0x10
#define AN16_clear_mask                          0xEF

#define SDA                                      0x4
#define SDA_address                              0xF82
#define SDA_position                             0x4
#define SDA_size                                 0x1
#define SDA_value_mask                           0x10
#define SDA_clear_mask                           0xEF

#define SDI                                      0x4
#define SDI_address                              0xF82
#define SDI_position                             0x4
#define SDI_size                                 0x1
#define SDI_value_mask                           0x10
#define SDI_clear_mask                           0xEF

#define PORTC_RC5                                0x5
#define PORTC_RC5_address                        0xF82
#define PORTC_RC5_position                       0x5
#define PORTC_RC5_size                           0x1
#define PORTC_RC5_value_mask                     0x20
#define PORTC_RC5_clear_mask                     0xDF

#define SDO1                                     0x5
#define SDO1_address                             0xF82
#define SDO1_position                            0x5
#define SDO1_size                                0x1
#define SDO1_value_mask                          0x20
#define SDO1_clear_mask                          0xDF

#define AN17                                     0x5
#define AN17_address                             0xF82
#define AN17_position                            0x5
#define AN17_size                                0x1
#define AN17_value_mask                          0x20
#define AN17_clear_mask                          0xDF

#define SDO                                      0x5
#define SDO_address                              0xF82
#define SDO_position                             0x5
#define SDO_size                                 0x1
#define SDO_value_mask                           0x20
#define SDO_clear_mask                           0xDF

#define PORTC_RC6                                0x6
#define PORTC_RC6_address                        0xF82
#define PORTC_RC6_position                       0x6
#define PORTC_RC6_size                           0x1
#define PORTC_RC6_value_mask                     0x40
#define PORTC_RC6_clear_mask                     0xBF

#define CK                                       0x6
#define CK_address                               0xF82
#define CK_position                              0x6
#define CK_size                                  0x1
#define CK_value_mask                            0x40
#define CK_clear_mask                            0xBF

#define TX1                                      0x6
#define TX1_address                              0xF82
#define TX1_position                             0x6
#define TX1_size                                 0x1
#define TX1_value_mask                           0x40
#define TX1_clear_mask                           0xBF

#define TX                                       0x6
#define TX_address                               0xF82
#define TX_position                              0x6
#define TX_size                                  0x1
#define TX_value_mask                            0x40
#define TX_clear_mask                            0xBF

#define CK1                                      0x6
#define CK1_address                              0xF82
#define CK1_position                             0x6
#define CK1_size                                 0x1
#define CK1_value_mask                           0x40
#define CK1_clear_mask                           0xBF

#define AN18                                     0x6
#define AN18_address                             0xF82
#define AN18_position                            0x6
#define AN18_size                                0x1
#define AN18_value_mask                          0x40
#define AN18_clear_mask                          0xBF

#define DT                                       0x7
#define DT_address                               0xF82
#define DT_position                              0x7
#define DT_size                                  0x1
#define DT_value_mask                            0x80
#define DT_clear_mask                            0x7F

#define RX                                       0x7
#define RX_address                               0xF82
#define RX_position                              0x7
#define RX_size                                  0x1
#define RX_value_mask                            0x80
#define RX_clear_mask                            0x7F

#define RX1                                      0x7
#define RX1_address                              0xF82
#define RX1_position                             0x7
#define RX1_size                                 0x1
#define RX1_value_mask                           0x80
#define RX1_clear_mask                           0x7F

#define PORTC_RC7                                0x7
#define PORTC_RC7_address                        0xF82
#define PORTC_RC7_position                       0x7
#define PORTC_RC7_size                           0x1
#define PORTC_RC7_value_mask                     0x80
#define PORTC_RC7_clear_mask                     0x7F

#define DT1                                      0x7
#define DT1_address                              0xF82
#define DT1_position                             0x7
#define DT1_size                                 0x1
#define DT1_value_mask                           0x80
#define DT1_clear_mask                           0x7F

#define AN19                                     0x7
#define AN19_address                             0xF82
#define AN19_position                            0x7
#define AN19_size                                0x1
#define AN19_value_mask                          0x80
#define AN19_clear_mask                          0x7F


/*------------------------------------------------------#
| PORTD                                           0xF83 |
#-------------------------------------------------------#
| RX2 | P1C | P1B | P2D | P2C | PORTD_P2B | SDI2 | SCK2 |
#-------------------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2         | 1    | 0    |
#------------------------------------------------------*/

#define PORTD                                    0x0
#define PORTD_address                            0xF83
#define PORTD_position                           0x0
#define PORTD_size                               0x8
#define PORTD_value_mask                         0xFF
#define PORTD_clear_mask                         0x0

#define SCK2                                     0x0
#define SCK2_address                             0xF83
#define SCK2_position                            0x0
#define SCK2_size                                0x1
#define SCK2_value_mask                          0x1
#define SCK2_clear_mask                          0xFE

#define AN20                                     0x0
#define AN20_address                             0xF83
#define AN20_position                            0x0
#define AN20_size                                0x1
#define AN20_value_mask                          0x1
#define AN20_clear_mask                          0xFE

#define SCL2                                     0x0
#define SCL2_address                             0xF83
#define SCL2_position                            0x0
#define SCL2_size                                0x1
#define SCL2_value_mask                          0x1
#define SCL2_clear_mask                          0xFE

#define PORTD_RD0                                0x0
#define PORTD_RD0_address                        0xF83
#define PORTD_RD0_position                       0x0
#define PORTD_RD0_size                           0x1
#define PORTD_RD0_value_mask                     0x1
#define PORTD_RD0_clear_mask                     0xFE

#define CCP4                                     0x1
#define CCP4_address                             0xF83
#define CCP4_position                            0x1
#define CCP4_size                                0x1
#define CCP4_value_mask                          0x2
#define CCP4_clear_mask                          0xFD

#define AN21                                     0x1
#define AN21_address                             0xF83
#define AN21_position                            0x1
#define AN21_size                                0x1
#define AN21_value_mask                          0x2
#define AN21_clear_mask                          0xFD

#define SDI2                                     0x1
#define SDI2_address                             0xF83
#define SDI2_position                            0x1
#define SDI2_size                                0x1
#define SDI2_value_mask                          0x2
#define SDI2_clear_mask                          0xFD

#define SDA2                                     0x1
#define SDA2_address                             0xF83
#define SDA2_position                            0x1
#define SDA2_size                                0x1
#define SDA2_value_mask                          0x2
#define SDA2_clear_mask                          0xFD

#define PORTD_RD1                                0x1
#define PORTD_RD1_address                        0xF83
#define PORTD_RD1_position                       0x1
#define PORTD_RD1_size                           0x1
#define PORTD_RD1_value_mask                     0x2
#define PORTD_RD1_clear_mask                     0xFD

#define PORTD_P2B                                0x2
#define PORTD_P2B_address                        0xF83
#define PORTD_P2B_position                       0x2
#define PORTD_P2B_size                           0x1
#define PORTD_P2B_value_mask                     0x4
#define PORTD_P2B_clear_mask                     0xFB

#define AN22                                     0x2
#define AN22_address                             0xF83
#define AN22_position                            0x2
#define AN22_size                                0x1
#define AN22_value_mask                          0x4
#define AN22_clear_mask                          0xFB

#define PORTD_RD2                                0x2
#define PORTD_RD2_address                        0xF83
#define PORTD_RD2_position                       0x2
#define PORTD_RD2_size                           0x1
#define PORTD_RD2_value_mask                     0x4
#define PORTD_RD2_clear_mask                     0xFB

#define P2C                                      0x3
#define P2C_address                              0xF83
#define P2C_position                             0x3
#define P2C_size                                 0x1
#define P2C_value_mask                           0x8
#define P2C_clear_mask                           0xF7

#define SS2                                      0x3
#define SS2_address                              0xF83
#define SS2_position                             0x3
#define SS2_size                                 0x1
#define SS2_value_mask                           0x8
#define SS2_clear_mask                           0xF7

#define NOT_SS2                                  0x3
#define NOT_SS2_address                          0xF83
#define NOT_SS2_position                         0x3
#define NOT_SS2_size                             0x1
#define NOT_SS2_value_mask                       0x8
#define NOT_SS2_clear_mask                       0xF7

#define nSS2                                     0x3
#define nSS2_address                             0xF83
#define nSS2_position                            0x3
#define nSS2_size                                0x1
#define nSS2_value_mask                          0x8
#define nSS2_clear_mask                          0xF7

#define AN23                                     0x3
#define AN23_address                             0xF83
#define AN23_position                            0x3
#define AN23_size                                0x1
#define AN23_value_mask                          0x8
#define AN23_clear_mask                          0xF7

#define PORTD_RD3                                0x3
#define PORTD_RD3_address                        0xF83
#define PORTD_RD3_position                       0x3
#define PORTD_RD3_size                           0x1
#define PORTD_RD3_value_mask                     0x8
#define PORTD_RD3_clear_mask                     0xF7

#define P2D                                      0x4
#define P2D_address                              0xF83
#define P2D_position                             0x4
#define P2D_size                                 0x1
#define P2D_value_mask                           0x10
#define P2D_clear_mask                           0xEF

#define AN24                                     0x4
#define AN24_address                             0xF83
#define AN24_position                            0x4
#define AN24_size                                0x1
#define AN24_value_mask                          0x10
#define AN24_clear_mask                          0xEF

#define SDO2                                     0x4
#define SDO2_address                             0xF83
#define SDO2_position                            0x4
#define SDO2_size                                0x1
#define SDO2_value_mask                          0x10
#define SDO2_clear_mask                          0xEF

#define PORTD_RD4                                0x4
#define PORTD_RD4_address                        0xF83
#define PORTD_RD4_position                       0x4
#define PORTD_RD4_size                           0x1
#define PORTD_RD4_value_mask                     0x10
#define PORTD_RD4_clear_mask                     0xEF

#define P1B                                      0x5
#define P1B_address                              0xF83
#define P1B_position                             0x5
#define P1B_size                                 0x1
#define P1B_value_mask                           0x20
#define P1B_clear_mask                           0xDF

#define AN25                                     0x5
#define AN25_address                             0xF83
#define AN25_position                            0x5
#define AN25_size                                0x1
#define AN25_value_mask                          0x20
#define AN25_clear_mask                          0xDF

#define PORTD_RD5                                0x5
#define PORTD_RD5_address                        0xF83
#define PORTD_RD5_position                       0x5
#define PORTD_RD5_size                           0x1
#define PORTD_RD5_value_mask                     0x20
#define PORTD_RD5_clear_mask                     0xDF

#define P1C                                      0x6
#define P1C_address                              0xF83
#define P1C_position                             0x6
#define P1C_size                                 0x1
#define P1C_value_mask                           0x40
#define P1C_clear_mask                           0xBF

#define AN26                                     0x6
#define AN26_address                             0xF83
#define AN26_position                            0x6
#define AN26_size                                0x1
#define AN26_value_mask                          0x40
#define AN26_clear_mask                          0xBF

#define TX2                                      0x6
#define TX2_address                              0xF83
#define TX2_position                             0x6
#define TX2_size                                 0x1
#define TX2_value_mask                           0x40
#define TX2_clear_mask                           0xBF

#define PORTD_RD6                                0x6
#define PORTD_RD6_address                        0xF83
#define PORTD_RD6_position                       0x6
#define PORTD_RD6_size                           0x1
#define PORTD_RD6_value_mask                     0x40
#define PORTD_RD6_clear_mask                     0xBF

#define CK2                                      0x6
#define CK2_address                              0xF83
#define CK2_position                             0x6
#define CK2_size                                 0x1
#define CK2_value_mask                           0x40
#define CK2_clear_mask                           0xBF

#define AN27                                     0x7
#define AN27_address                             0xF83
#define AN27_position                            0x7
#define AN27_size                                0x1
#define AN27_value_mask                          0x80
#define AN27_clear_mask                          0x7F

#define RX2                                      0x7
#define RX2_address                              0xF83
#define RX2_position                             0x7
#define RX2_size                                 0x1
#define RX2_value_mask                           0x80
#define RX2_clear_mask                           0x7F

#define P1D                                      0x7
#define P1D_address                              0xF83
#define P1D_position                             0x7
#define P1D_size                                 0x1
#define P1D_value_mask                           0x80
#define P1D_clear_mask                           0x7F

#define PORTD_RD7                                0x7
#define PORTD_RD7_address                        0xF83
#define PORTD_RD7_position                       0x7
#define PORTD_RD7_size                           0x1
#define PORTD_RD7_value_mask                     0x80
#define PORTD_RD7_clear_mask                     0x7F

#define DT2                                      0x7
#define DT2_address                              0xF83
#define DT2_position                             0x7
#define DT2_size                                 0x1
#define DT2_value_mask                           0x80
#define DT2_clear_mask                           0x7F


/*---------------------------------------------#
| PORTE                                  0xF84 |
#----------------------------------------------#
| - | - | - | - | VPP | AN7 | AN6 | PORTE_CCP3 |
#----------------------------------------------#
| 7 | 6 | 5 | 4 | 3   | 2   | 1   | 0          |
#---------------------------------------------*/

#define PORTE                                    0x0
#define PORTE_address                            0xF84
#define PORTE_position                           0x0
#define PORTE_size                               0x8
#define PORTE_value_mask                         0xFF
#define PORTE_clear_mask                         0x0

#define PORTE_CCP3                               0x0
#define PORTE_CCP3_address                       0xF84
#define PORTE_CCP3_position                      0x0
#define PORTE_CCP3_size                          0x1
#define PORTE_CCP3_value_mask                    0x1
#define PORTE_CCP3_clear_mask                    0xFE

#define AN5                                      0x0
#define AN5_address                              0xF84
#define AN5_position                             0x0
#define AN5_size                                 0x1
#define AN5_value_mask                           0x1
#define AN5_clear_mask                           0xFE

#define PD2                                      0x0
#define PD2_address                              0xF84
#define PD2_position                             0x0
#define PD2_size                                 0x1
#define PD2_value_mask                           0x1
#define PD2_clear_mask                           0xFE

#define RDE                                      0x0
#define RDE_address                              0xF84
#define RDE_position                             0x0
#define RDE_size                                 0x1
#define RDE_value_mask                           0x1
#define RDE_clear_mask                           0xFE

#define PORTE_P3A                                0x0
#define PORTE_P3A_address                        0xF84
#define PORTE_P3A_position                       0x0
#define PORTE_P3A_size                           0x1
#define PORTE_P3A_value_mask                     0x1
#define PORTE_P3A_clear_mask                     0xFE

#define PORTE_RE0                                0x0
#define PORTE_RE0_address                        0xF84
#define PORTE_RE0_position                       0x0
#define PORTE_RE0_size                           0x1
#define PORTE_RE0_value_mask                     0x1
#define PORTE_RE0_clear_mask                     0xFE

#define AN6                                      0x1
#define AN6_address                              0xF84
#define AN6_position                             0x1
#define AN6_size                                 0x1
#define AN6_value_mask                           0x2
#define AN6_clear_mask                           0xFD

#define WRE                                      0x1
#define WRE_address                              0xF84
#define WRE_position                             0x1
#define WRE_size                                 0x1
#define WRE_value_mask                           0x2
#define WRE_clear_mask                           0xFD

#define P3B                                      0x1
#define P3B_address                              0xF84
#define P3B_position                             0x1
#define P3B_size                                 0x1
#define P3B_value_mask                           0x2
#define P3B_clear_mask                           0xFD

#define PORTE_RE1                                0x1
#define PORTE_RE1_address                        0xF84
#define PORTE_RE1_position                       0x1
#define PORTE_RE1_size                           0x1
#define PORTE_RE1_value_mask                     0x2
#define PORTE_RE1_clear_mask                     0xFD

#define PC2                                      0x1
#define PC2_address                              0xF84
#define PC2_position                             0x1
#define PC2_size                                 0x1
#define PC2_value_mask                           0x2
#define PC2_clear_mask                           0xFD

#define AN7                                      0x2
#define AN7_address                              0xF84
#define AN7_position                             0x2
#define AN7_size                                 0x1
#define AN7_value_mask                           0x4
#define AN7_clear_mask                           0xFB

#define CCP5                                     0x2
#define CCP5_address                             0xF84
#define CCP5_position                            0x2
#define CCP5_size                                0x1
#define CCP5_value_mask                          0x4
#define CCP5_clear_mask                          0xFB

#define CCP10                                    0x2
#define CCP10_address                            0xF84
#define CCP10_position                           0x2
#define CCP10_size                               0x1
#define CCP10_value_mask                         0x4
#define CCP10_clear_mask                         0xFB

#define PB2                                      0x2
#define PB2_address                              0xF84
#define PB2_position                             0x2
#define PB2_size                                 0x1
#define PB2_value_mask                           0x4
#define PB2_clear_mask                           0xFB

#define CS                                       0x2
#define CS_address                               0xF84
#define CS_position                              0x2
#define CS_size                                  0x1
#define CS_value_mask                            0x4
#define CS_clear_mask                            0xFB

#define PORTE_RE2                                0x2
#define PORTE_RE2_address                        0xF84
#define PORTE_RE2_position                       0x2
#define PORTE_RE2_size                           0x1
#define PORTE_RE2_value_mask                     0x4
#define PORTE_RE2_clear_mask                     0xFB

#define VPP                                      0x3
#define VPP_address                              0xF84
#define VPP_position                             0x3
#define VPP_size                                 0x1
#define VPP_value_mask                           0x8
#define VPP_clear_mask                           0xF7

#define CCP9E                                    0x3
#define CCP9E_address                            0xF84
#define CCP9E_position                           0x3
#define CCP9E_size                               0x1
#define CCP9E_value_mask                         0x8
#define CCP9E_clear_mask                         0xF7

#define RE3                                      0x3
#define RE3_address                              0xF84
#define RE3_position                             0x3
#define RE3_size                                 0x1
#define RE3_value_mask                           0x8
#define RE3_clear_mask                           0xF7

#define NOT_MCLR                                 0x3
#define NOT_MCLR_address                         0xF84
#define NOT_MCLR_position                        0x3
#define NOT_MCLR_size                            0x1
#define NOT_MCLR_value_mask                      0x8
#define NOT_MCLR_clear_mask                      0xF7

#define MCLR                                     0x3
#define MCLR_address                             0xF84
#define MCLR_position                            0x3
#define MCLR_size                                0x1
#define MCLR_value_mask                          0x8
#define MCLR_clear_mask                          0xF7

#define nMCLR                                    0x3
#define nMCLR_address                            0xF84
#define nMCLR_position                           0x3
#define nMCLR_size                               0x1
#define nMCLR_value_mask                         0x8
#define nMCLR_clear_mask                         0xF7

#define PC3E                                     0x3
#define PC3E_address                             0xF84
#define PC3E_position                            0x3
#define PC3E_size                                0x1
#define PC3E_value_mask                          0x8
#define PC3E_clear_mask                          0xF7


/*--------------------------------------------------------------#
| LATA                                                    0xF89 |
#---------------------------------------------------------------#
| LATA7 | LATA6 | LATA5 | LATA4 | LATA3 | LATA2 | LATA1 | LATA0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

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

#define LATA4                                    0x4
#define LATA4_address                            0xF89
#define LATA4_position                           0x4
#define LATA4_size                               0x1
#define LATA4_value_mask                         0x10
#define LATA4_clear_mask                         0xEF

#define LA4                                      0x4
#define LA4_address                              0xF89
#define LA4_position                             0x4
#define LA4_size                                 0x1
#define LA4_value_mask                           0x10
#define LA4_clear_mask                           0xEF

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


/*--------------------------------------------------------------#
| LATD                                                    0xF8C |
#---------------------------------------------------------------#
| LATD7 | LATD6 | LATD5 | LATD4 | LATD3 | LATD2 | LATD1 | LATD0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LATD                                     0x0
#define LATD_address                             0xF8C
#define LATD_position                            0x0
#define LATD_size                                0x8
#define LATD_value_mask                          0xFF
#define LATD_clear_mask                          0x0

#define LATD0                                    0x0
#define LATD0_address                            0xF8C
#define LATD0_position                           0x0
#define LATD0_size                               0x1
#define LATD0_value_mask                         0x1
#define LATD0_clear_mask                         0xFE

#define LD0                                      0x0
#define LD0_address                              0xF8C
#define LD0_position                             0x0
#define LD0_size                                 0x1
#define LD0_value_mask                           0x1
#define LD0_clear_mask                           0xFE

#define LATD1                                    0x1
#define LATD1_address                            0xF8C
#define LATD1_position                           0x1
#define LATD1_size                               0x1
#define LATD1_value_mask                         0x2
#define LATD1_clear_mask                         0xFD

#define LD1                                      0x1
#define LD1_address                              0xF8C
#define LD1_position                             0x1
#define LD1_size                                 0x1
#define LD1_value_mask                           0x2
#define LD1_clear_mask                           0xFD

#define LATD2                                    0x2
#define LATD2_address                            0xF8C
#define LATD2_position                           0x2
#define LATD2_size                               0x1
#define LATD2_value_mask                         0x4
#define LATD2_clear_mask                         0xFB

#define LD2                                      0x2
#define LD2_address                              0xF8C
#define LD2_position                             0x2
#define LD2_size                                 0x1
#define LD2_value_mask                           0x4
#define LD2_clear_mask                           0xFB

#define LATD3                                    0x3
#define LATD3_address                            0xF8C
#define LATD3_position                           0x3
#define LATD3_size                               0x1
#define LATD3_value_mask                         0x8
#define LATD3_clear_mask                         0xF7

#define LD3                                      0x3
#define LD3_address                              0xF8C
#define LD3_position                             0x3
#define LD3_size                                 0x1
#define LD3_value_mask                           0x8
#define LD3_clear_mask                           0xF7

#define LATD4                                    0x4
#define LATD4_address                            0xF8C
#define LATD4_position                           0x4
#define LATD4_size                               0x1
#define LATD4_value_mask                         0x10
#define LATD4_clear_mask                         0xEF

#define LD4                                      0x4
#define LD4_address                              0xF8C
#define LD4_position                             0x4
#define LD4_size                                 0x1
#define LD4_value_mask                           0x10
#define LD4_clear_mask                           0xEF

#define LATD5                                    0x5
#define LATD5_address                            0xF8C
#define LATD5_position                           0x5
#define LATD5_size                               0x1
#define LATD5_value_mask                         0x20
#define LATD5_clear_mask                         0xDF

#define LD5                                      0x5
#define LD5_address                              0xF8C
#define LD5_position                             0x5
#define LD5_size                                 0x1
#define LD5_value_mask                           0x20
#define LD5_clear_mask                           0xDF

#define LATD6                                    0x6
#define LATD6_address                            0xF8C
#define LATD6_position                           0x6
#define LATD6_size                               0x1
#define LATD6_value_mask                         0x40
#define LATD6_clear_mask                         0xBF

#define LD6                                      0x6
#define LD6_address                              0xF8C
#define LD6_position                             0x6
#define LD6_size                                 0x1
#define LD6_value_mask                           0x40
#define LD6_clear_mask                           0xBF

#define LATD7                                    0x7
#define LATD7_address                            0xF8C
#define LATD7_position                           0x7
#define LATD7_size                               0x1
#define LATD7_value_mask                         0x80
#define LATD7_clear_mask                         0x7F

#define LD7                                      0x7
#define LD7_address                              0xF8C
#define LD7_position                             0x7
#define LD7_size                                 0x1
#define LD7_value_mask                           0x80
#define LD7_clear_mask                           0x7F


/*------------------------------------------#
| LATE                                0xF8D |
#-------------------------------------------#
| - | - | - | - | - | LATE2 | LATE1 | LATE0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------*/

#define LATE                                     0x0
#define LATE_address                             0xF8D
#define LATE_position                            0x0
#define LATE_size                                0x8
#define LATE_value_mask                          0xFF
#define LATE_clear_mask                          0x0

#define LATE0                                    0x0
#define LATE0_address                            0xF8D
#define LATE0_position                           0x0
#define LATE0_size                               0x1
#define LATE0_value_mask                         0x1
#define LATE0_clear_mask                         0xFE

#define LE0                                      0x0
#define LE0_address                              0xF8D
#define LE0_position                             0x0
#define LE0_size                                 0x1
#define LE0_value_mask                           0x1
#define LE0_clear_mask                           0xFE

#define LATE1                                    0x1
#define LATE1_address                            0xF8D
#define LATE1_position                           0x1
#define LATE1_size                               0x1
#define LATE1_value_mask                         0x2
#define LATE1_clear_mask                         0xFD

#define LE1                                      0x1
#define LE1_address                              0xF8D
#define LE1_position                             0x1
#define LE1_size                                 0x1
#define LE1_value_mask                           0x2
#define LE1_clear_mask                           0xFD

#define LATE2                                    0x2
#define LATE2_address                            0xF8D
#define LATE2_position                           0x2
#define LATE2_size                               0x1
#define LATE2_value_mask                         0x4
#define LATE2_clear_mask                         0xFB

#define LE2                                      0x2
#define LE2_address                              0xF8D
#define LE2_position                             0x2
#define LE2_size                                 0x1
#define LE2_value_mask                           0x4
#define LE2_clear_mask                           0xFB


/*----------------------------------------------------------------------------------#
| TRISA                                                                       0xF92 |
#-----------------------------------------------------------------------------------#
| TRISA7 | TRISA6 | TRISA_RA5 | TRISA_RA4 | TRISA_RA3 | TRISA2 | TRISA_RA1 | TRISA0 |
#-----------------------------------------------------------------------------------#
| 7      | 6      | 5         | 4         | 3         | 2      | 1         | 0      |
#----------------------------------------------------------------------------------*/

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

#define TRISA_RA0                                0x0
#define TRISA_RA0_address                        0xF92
#define TRISA_RA0_position                       0x0
#define TRISA_RA0_size                           0x1
#define TRISA_RA0_value_mask                     0x1
#define TRISA_RA0_clear_mask                     0xFE

#define TRISA1                                   0x1
#define TRISA1_address                           0xF92
#define TRISA1_position                          0x1
#define TRISA1_size                              0x1
#define TRISA1_value_mask                        0x2
#define TRISA1_clear_mask                        0xFD

#define TRISA_RA1                                0x1
#define TRISA_RA1_address                        0xF92
#define TRISA_RA1_position                       0x1
#define TRISA_RA1_size                           0x1
#define TRISA_RA1_value_mask                     0x2
#define TRISA_RA1_clear_mask                     0xFD

#define TRISA2                                   0x2
#define TRISA2_address                           0xF92
#define TRISA2_position                          0x2
#define TRISA2_size                              0x1
#define TRISA2_value_mask                        0x4
#define TRISA2_clear_mask                        0xFB

#define TRISA_RA2                                0x2
#define TRISA_RA2_address                        0xF92
#define TRISA_RA2_position                       0x2
#define TRISA_RA2_size                           0x1
#define TRISA_RA2_value_mask                     0x4
#define TRISA_RA2_clear_mask                     0xFB

#define TRISA3                                   0x3
#define TRISA3_address                           0xF92
#define TRISA3_position                          0x3
#define TRISA3_size                              0x1
#define TRISA3_value_mask                        0x8
#define TRISA3_clear_mask                        0xF7

#define TRISA_RA3                                0x3
#define TRISA_RA3_address                        0xF92
#define TRISA_RA3_position                       0x3
#define TRISA_RA3_size                           0x1
#define TRISA_RA3_value_mask                     0x8
#define TRISA_RA3_clear_mask                     0xF7

#define TRISA_RA4                                0x4
#define TRISA_RA4_address                        0xF92
#define TRISA_RA4_position                       0x4
#define TRISA_RA4_size                           0x1
#define TRISA_RA4_value_mask                     0x10
#define TRISA_RA4_clear_mask                     0xEF

#define TRISA4                                   0x4
#define TRISA4_address                           0xF92
#define TRISA4_position                          0x4
#define TRISA4_size                              0x1
#define TRISA4_value_mask                        0x10
#define TRISA4_clear_mask                        0xEF

#define TRISA_RA5                                0x5
#define TRISA_RA5_address                        0xF92
#define TRISA_RA5_position                       0x5
#define TRISA_RA5_size                           0x1
#define TRISA_RA5_value_mask                     0x20
#define TRISA_RA5_clear_mask                     0xDF

#define TRISA5                                   0x5
#define TRISA5_address                           0xF92
#define TRISA5_position                          0x5
#define TRISA5_size                              0x1
#define TRISA5_value_mask                        0x20
#define TRISA5_clear_mask                        0xDF

#define TRISA_RA6                                0x6
#define TRISA_RA6_address                        0xF92
#define TRISA_RA6_position                       0x6
#define TRISA_RA6_size                           0x1
#define TRISA_RA6_value_mask                     0x40
#define TRISA_RA6_clear_mask                     0xBF

#define TRISA6                                   0x6
#define TRISA6_address                           0xF92
#define TRISA6_position                          0x6
#define TRISA6_size                              0x1
#define TRISA6_value_mask                        0x40
#define TRISA6_clear_mask                        0xBF

#define TRISA_RA7                                0x7
#define TRISA_RA7_address                        0xF92
#define TRISA_RA7_position                       0x7
#define TRISA_RA7_size                           0x1
#define TRISA_RA7_value_mask                     0x80
#define TRISA_RA7_clear_mask                     0x7F

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

#define TRISB_RB0                                0x0
#define TRISB_RB0_address                        0xF93
#define TRISB_RB0_position                       0x0
#define TRISB_RB0_size                           0x1
#define TRISB_RB0_value_mask                     0x1
#define TRISB_RB0_clear_mask                     0xFE

#define TRISB0                                   0x0
#define TRISB0_address                           0xF93
#define TRISB0_position                          0x0
#define TRISB0_size                              0x1
#define TRISB0_value_mask                        0x1
#define TRISB0_clear_mask                        0xFE

#define TRISB_RB1                                0x1
#define TRISB_RB1_address                        0xF93
#define TRISB_RB1_position                       0x1
#define TRISB_RB1_size                           0x1
#define TRISB_RB1_value_mask                     0x2
#define TRISB_RB1_clear_mask                     0xFD

#define TRISB1                                   0x1
#define TRISB1_address                           0xF93
#define TRISB1_position                          0x1
#define TRISB1_size                              0x1
#define TRISB1_value_mask                        0x2
#define TRISB1_clear_mask                        0xFD

#define TRISB_RB2                                0x2
#define TRISB_RB2_address                        0xF93
#define TRISB_RB2_position                       0x2
#define TRISB_RB2_size                           0x1
#define TRISB_RB2_value_mask                     0x4
#define TRISB_RB2_clear_mask                     0xFB

#define TRISB2                                   0x2
#define TRISB2_address                           0xF93
#define TRISB2_position                          0x2
#define TRISB2_size                              0x1
#define TRISB2_value_mask                        0x4
#define TRISB2_clear_mask                        0xFB

#define TRISB_RB3                                0x3
#define TRISB_RB3_address                        0xF93
#define TRISB_RB3_position                       0x3
#define TRISB_RB3_size                           0x1
#define TRISB_RB3_value_mask                     0x8
#define TRISB_RB3_clear_mask                     0xF7

#define TRISB3                                   0x3
#define TRISB3_address                           0xF93
#define TRISB3_position                          0x3
#define TRISB3_size                              0x1
#define TRISB3_value_mask                        0x8
#define TRISB3_clear_mask                        0xF7

#define TRISB_RB4                                0x4
#define TRISB_RB4_address                        0xF93
#define TRISB_RB4_position                       0x4
#define TRISB_RB4_size                           0x1
#define TRISB_RB4_value_mask                     0x10
#define TRISB_RB4_clear_mask                     0xEF

#define TRISB4                                   0x4
#define TRISB4_address                           0xF93
#define TRISB4_position                          0x4
#define TRISB4_size                              0x1
#define TRISB4_value_mask                        0x10
#define TRISB4_clear_mask                        0xEF

#define TRISB_RB5                                0x5
#define TRISB_RB5_address                        0xF93
#define TRISB_RB5_position                       0x5
#define TRISB_RB5_size                           0x1
#define TRISB_RB5_value_mask                     0x20
#define TRISB_RB5_clear_mask                     0xDF

#define TRISB5                                   0x5
#define TRISB5_address                           0xF93
#define TRISB5_position                          0x5
#define TRISB5_size                              0x1
#define TRISB5_value_mask                        0x20
#define TRISB5_clear_mask                        0xDF

#define TRISB_RB6                                0x6
#define TRISB_RB6_address                        0xF93
#define TRISB_RB6_position                       0x6
#define TRISB_RB6_size                           0x1
#define TRISB_RB6_value_mask                     0x40
#define TRISB_RB6_clear_mask                     0xBF

#define TRISB6                                   0x6
#define TRISB6_address                           0xF93
#define TRISB6_position                          0x6
#define TRISB6_size                              0x1
#define TRISB6_value_mask                        0x40
#define TRISB6_clear_mask                        0xBF

#define TRISB_RB7                                0x7
#define TRISB_RB7_address                        0xF93
#define TRISB_RB7_position                       0x7
#define TRISB_RB7_size                           0x1
#define TRISB_RB7_value_mask                     0x80
#define TRISB_RB7_clear_mask                     0x7F

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

#define TRISC_RC0                                0x0
#define TRISC_RC0_address                        0xF94
#define TRISC_RC0_position                       0x0
#define TRISC_RC0_size                           0x1
#define TRISC_RC0_value_mask                     0x1
#define TRISC_RC0_clear_mask                     0xFE

#define TRISC1                                   0x1
#define TRISC1_address                           0xF94
#define TRISC1_position                          0x1
#define TRISC1_size                              0x1
#define TRISC1_value_mask                        0x2
#define TRISC1_clear_mask                        0xFD

#define TRISC_RC1                                0x1
#define TRISC_RC1_address                        0xF94
#define TRISC_RC1_position                       0x1
#define TRISC_RC1_size                           0x1
#define TRISC_RC1_value_mask                     0x2
#define TRISC_RC1_clear_mask                     0xFD

#define TRISC2                                   0x2
#define TRISC2_address                           0xF94
#define TRISC2_position                          0x2
#define TRISC2_size                              0x1
#define TRISC2_value_mask                        0x4
#define TRISC2_clear_mask                        0xFB

#define TRISC_RC2                                0x2
#define TRISC_RC2_address                        0xF94
#define TRISC_RC2_position                       0x2
#define TRISC_RC2_size                           0x1
#define TRISC_RC2_value_mask                     0x4
#define TRISC_RC2_clear_mask                     0xFB

#define TRISC3                                   0x3
#define TRISC3_address                           0xF94
#define TRISC3_position                          0x3
#define TRISC3_size                              0x1
#define TRISC3_value_mask                        0x8
#define TRISC3_clear_mask                        0xF7

#define TRISC_RC3                                0x3
#define TRISC_RC3_address                        0xF94
#define TRISC_RC3_position                       0x3
#define TRISC_RC3_size                           0x1
#define TRISC_RC3_value_mask                     0x8
#define TRISC_RC3_clear_mask                     0xF7

#define TRISC4                                   0x4
#define TRISC4_address                           0xF94
#define TRISC4_position                          0x4
#define TRISC4_size                              0x1
#define TRISC4_value_mask                        0x10
#define TRISC4_clear_mask                        0xEF

#define TRISC_RC4                                0x4
#define TRISC_RC4_address                        0xF94
#define TRISC_RC4_position                       0x4
#define TRISC_RC4_size                           0x1
#define TRISC_RC4_value_mask                     0x10
#define TRISC_RC4_clear_mask                     0xEF

#define TRISC5                                   0x5
#define TRISC5_address                           0xF94
#define TRISC5_position                          0x5
#define TRISC5_size                              0x1
#define TRISC5_value_mask                        0x20
#define TRISC5_clear_mask                        0xDF

#define TRISC_RC5                                0x5
#define TRISC_RC5_address                        0xF94
#define TRISC_RC5_position                       0x5
#define TRISC_RC5_size                           0x1
#define TRISC_RC5_value_mask                     0x20
#define TRISC_RC5_clear_mask                     0xDF

#define TRISC6                                   0x6
#define TRISC6_address                           0xF94
#define TRISC6_position                          0x6
#define TRISC6_size                              0x1
#define TRISC6_value_mask                        0x40
#define TRISC6_clear_mask                        0xBF

#define TRISC_RC6                                0x6
#define TRISC_RC6_address                        0xF94
#define TRISC_RC6_position                       0x6
#define TRISC_RC6_size                           0x1
#define TRISC_RC6_value_mask                     0x40
#define TRISC_RC6_clear_mask                     0xBF

#define TRISC7                                   0x7
#define TRISC7_address                           0xF94
#define TRISC7_position                          0x7
#define TRISC7_size                              0x1
#define TRISC7_value_mask                        0x80
#define TRISC7_clear_mask                        0x7F

#define TRISC_RC7                                0x7
#define TRISC_RC7_address                        0xF94
#define TRISC_RC7_position                       0x7
#define TRISC_RC7_size                           0x1
#define TRISC_RC7_value_mask                     0x80
#define TRISC_RC7_clear_mask                     0x7F


/*----------------------------------------------------------------------#
| TRISD                                                           0xF95 |
#-----------------------------------------------------------------------#
| TRISD7 | TRISD6 | TRISD5 | TRISD4 | TRISD3 | TRISD2 | TRISD1 | TRISD0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISD                                    0x0
#define TRISD_address                            0xF95
#define TRISD_position                           0x0
#define TRISD_size                               0x8
#define TRISD_value_mask                         0xFF
#define TRISD_clear_mask                         0x0

#define TRISD_RD0                                0x0
#define TRISD_RD0_address                        0xF95
#define TRISD_RD0_position                       0x0
#define TRISD_RD0_size                           0x1
#define TRISD_RD0_value_mask                     0x1
#define TRISD_RD0_clear_mask                     0xFE

#define TRISD0                                   0x0
#define TRISD0_address                           0xF95
#define TRISD0_position                          0x0
#define TRISD0_size                              0x1
#define TRISD0_value_mask                        0x1
#define TRISD0_clear_mask                        0xFE

#define TRISD_RD1                                0x1
#define TRISD_RD1_address                        0xF95
#define TRISD_RD1_position                       0x1
#define TRISD_RD1_size                           0x1
#define TRISD_RD1_value_mask                     0x2
#define TRISD_RD1_clear_mask                     0xFD

#define TRISD1                                   0x1
#define TRISD1_address                           0xF95
#define TRISD1_position                          0x1
#define TRISD1_size                              0x1
#define TRISD1_value_mask                        0x2
#define TRISD1_clear_mask                        0xFD

#define TRISD_RD2                                0x2
#define TRISD_RD2_address                        0xF95
#define TRISD_RD2_position                       0x2
#define TRISD_RD2_size                           0x1
#define TRISD_RD2_value_mask                     0x4
#define TRISD_RD2_clear_mask                     0xFB

#define TRISD2                                   0x2
#define TRISD2_address                           0xF95
#define TRISD2_position                          0x2
#define TRISD2_size                              0x1
#define TRISD2_value_mask                        0x4
#define TRISD2_clear_mask                        0xFB

#define TRISD_RD3                                0x3
#define TRISD_RD3_address                        0xF95
#define TRISD_RD3_position                       0x3
#define TRISD_RD3_size                           0x1
#define TRISD_RD3_value_mask                     0x8
#define TRISD_RD3_clear_mask                     0xF7

#define TRISD3                                   0x3
#define TRISD3_address                           0xF95
#define TRISD3_position                          0x3
#define TRISD3_size                              0x1
#define TRISD3_value_mask                        0x8
#define TRISD3_clear_mask                        0xF7

#define TRISD_RD4                                0x4
#define TRISD_RD4_address                        0xF95
#define TRISD_RD4_position                       0x4
#define TRISD_RD4_size                           0x1
#define TRISD_RD4_value_mask                     0x10
#define TRISD_RD4_clear_mask                     0xEF

#define TRISD4                                   0x4
#define TRISD4_address                           0xF95
#define TRISD4_position                          0x4
#define TRISD4_size                              0x1
#define TRISD4_value_mask                        0x10
#define TRISD4_clear_mask                        0xEF

#define TRISD_RD5                                0x5
#define TRISD_RD5_address                        0xF95
#define TRISD_RD5_position                       0x5
#define TRISD_RD5_size                           0x1
#define TRISD_RD5_value_mask                     0x20
#define TRISD_RD5_clear_mask                     0xDF

#define TRISD5                                   0x5
#define TRISD5_address                           0xF95
#define TRISD5_position                          0x5
#define TRISD5_size                              0x1
#define TRISD5_value_mask                        0x20
#define TRISD5_clear_mask                        0xDF

#define TRISD_RD6                                0x6
#define TRISD_RD6_address                        0xF95
#define TRISD_RD6_position                       0x6
#define TRISD_RD6_size                           0x1
#define TRISD_RD6_value_mask                     0x40
#define TRISD_RD6_clear_mask                     0xBF

#define TRISD6                                   0x6
#define TRISD6_address                           0xF95
#define TRISD6_position                          0x6
#define TRISD6_size                              0x1
#define TRISD6_value_mask                        0x40
#define TRISD6_clear_mask                        0xBF

#define TRISD_RD7                                0x7
#define TRISD_RD7_address                        0xF95
#define TRISD_RD7_position                       0x7
#define TRISD_RD7_size                           0x1
#define TRISD_RD7_value_mask                     0x80
#define TRISD_RD7_clear_mask                     0x7F

#define TRISD7                                   0x7
#define TRISD7_address                           0xF95
#define TRISD7_position                          0x7
#define TRISD7_size                              0x1
#define TRISD7_value_mask                        0x80
#define TRISD7_clear_mask                        0x7F


/*----------------------------------------------------------#
| TRISE                                               0xF96 |
#-----------------------------------------------------------#
| WPUE3 | - | - | - | - | TRISE_RE2 | TRISE_RE1 | TRISE_RE0 |
#-----------------------------------------------------------#
| 7     | 6 | 5 | 4 | 3 | 2         | 1         | 0         |
#----------------------------------------------------------*/

#define TRISE                                    0x0
#define TRISE_address                            0xF96
#define TRISE_position                           0x0
#define TRISE_size                               0x8
#define TRISE_value_mask                         0xFF
#define TRISE_clear_mask                         0x0

#define TRISE_RE0                                0x0
#define TRISE_RE0_address                        0xF96
#define TRISE_RE0_position                       0x0
#define TRISE_RE0_size                           0x1
#define TRISE_RE0_value_mask                     0x1
#define TRISE_RE0_clear_mask                     0xFE

#define TRISE0                                   0x0
#define TRISE0_address                           0xF96
#define TRISE0_position                          0x0
#define TRISE0_size                              0x1
#define TRISE0_value_mask                        0x1
#define TRISE0_clear_mask                        0xFE

#define TRISE_RE1                                0x1
#define TRISE_RE1_address                        0xF96
#define TRISE_RE1_position                       0x1
#define TRISE_RE1_size                           0x1
#define TRISE_RE1_value_mask                     0x2
#define TRISE_RE1_clear_mask                     0xFD

#define TRISE1                                   0x1
#define TRISE1_address                           0xF96
#define TRISE1_position                          0x1
#define TRISE1_size                              0x1
#define TRISE1_value_mask                        0x2
#define TRISE1_clear_mask                        0xFD

#define TRISE_RE2                                0x2
#define TRISE_RE2_address                        0xF96
#define TRISE_RE2_position                       0x2
#define TRISE_RE2_size                           0x1
#define TRISE_RE2_value_mask                     0x4
#define TRISE_RE2_clear_mask                     0xFB

#define TRISE2                                   0x2
#define TRISE2_address                           0xF96
#define TRISE2_position                          0x2
#define TRISE2_size                              0x1
#define TRISE2_value_mask                        0x4
#define TRISE2_clear_mask                        0xFB

#define WPUE3                                    0x7
#define WPUE3_address                            0xF96
#define WPUE3_position                           0x7
#define WPUE3_size                               0x1
#define WPUE3_value_mask                         0x80
#define WPUE3_clear_mask                         0x7F


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


/*--------------------------------------------------------------------#
| HLVDCON                                                       0xF9C |
#---------------------------------------------------------------------#
| VDIRMAG | BGVST | BGST | HLVDEN | HLVDL3 | HLVDL2 | HLVDL1 | HLVDL0 |
#---------------------------------------------------------------------#
| 7       | 6     | 5    | 4      | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------------*/

#define HLVDCON                                  0x0
#define HLVDCON_address                          0xF9C
#define HLVDCON_position                         0x0
#define HLVDCON_size                             0x8
#define HLVDCON_value_mask                       0xFF
#define HLVDCON_clear_mask                       0x0

#define HLVDL                                    0x0
#define HLVDL_address                            0xF9C
#define HLVDL_position                           0x0
#define HLVDL_size                               0x4
#define HLVDL_value_mask                         0xF
#define HLVDL_clear_mask                         0xF0

#define HLVDL0                                   0x0
#define HLVDL0_address                           0xF9C
#define HLVDL0_position                          0x0
#define HLVDL0_size                              0x1
#define HLVDL0_value_mask                        0x1
#define HLVDL0_clear_mask                        0xFE

#define LVV0                                     0x0
#define LVV0_address                             0xF9C
#define LVV0_position                            0x0
#define LVV0_size                                0x1
#define LVV0_value_mask                          0x1
#define LVV0_clear_mask                          0xFE

#define LVDL0                                    0x0
#define LVDL0_address                            0xF9C
#define LVDL0_position                           0x0
#define LVDL0_size                               0x1
#define LVDL0_value_mask                         0x1
#define LVDL0_clear_mask                         0xFE

#define LVV1                                     0x1
#define LVV1_address                             0xF9C
#define LVV1_position                            0x1
#define LVV1_size                                0x1
#define LVV1_value_mask                          0x2
#define LVV1_clear_mask                          0xFD

#define HLVDL1                                   0x1
#define HLVDL1_address                           0xF9C
#define HLVDL1_position                          0x1
#define HLVDL1_size                              0x1
#define HLVDL1_value_mask                        0x2
#define HLVDL1_clear_mask                        0xFD

#define LVDL1                                    0x1
#define LVDL1_address                            0xF9C
#define LVDL1_position                           0x1
#define LVDL1_size                               0x1
#define LVDL1_value_mask                         0x2
#define LVDL1_clear_mask                         0xFD

#define HLVDL2                                   0x2
#define HLVDL2_address                           0xF9C
#define HLVDL2_position                          0x2
#define HLVDL2_size                              0x1
#define HLVDL2_value_mask                        0x4
#define HLVDL2_clear_mask                        0xFB

#define LVV2                                     0x2
#define LVV2_address                             0xF9C
#define LVV2_position                            0x2
#define LVV2_size                                0x1
#define LVV2_value_mask                          0x4
#define LVV2_clear_mask                          0xFB

#define LVDL2                                    0x2
#define LVDL2_address                            0xF9C
#define LVDL2_position                           0x2
#define LVDL2_size                               0x1
#define LVDL2_value_mask                         0x4
#define LVDL2_clear_mask                         0xFB

#define HLVDL3                                   0x3
#define HLVDL3_address                           0xF9C
#define HLVDL3_position                          0x3
#define HLVDL3_size                              0x1
#define HLVDL3_value_mask                        0x8
#define HLVDL3_clear_mask                        0xF7

#define LVV3                                     0x3
#define LVV3_address                             0xF9C
#define LVV3_position                            0x3
#define LVV3_size                                0x1
#define LVV3_value_mask                          0x8
#define LVV3_clear_mask                          0xF7

#define LVDL3                                    0x3
#define LVDL3_address                            0xF9C
#define LVDL3_position                           0x3
#define LVDL3_size                               0x1
#define LVDL3_value_mask                         0x8
#define LVDL3_clear_mask                         0xF7

#define HLVDEN                                   0x4
#define HLVDEN_address                           0xF9C
#define HLVDEN_position                          0x4
#define HLVDEN_size                              0x1
#define HLVDEN_value_mask                        0x10
#define HLVDEN_clear_mask                        0xEF

#define LVDEN                                    0x4
#define LVDEN_address                            0xF9C
#define LVDEN_position                           0x4
#define LVDEN_size                               0x1
#define LVDEN_value_mask                         0x10
#define LVDEN_clear_mask                         0xEF

#define BGST                                     0x5
#define BGST_address                             0xF9C
#define BGST_position                            0x5
#define BGST_size                                0x1
#define BGST_value_mask                          0x20
#define BGST_clear_mask                          0xDF

#define IRVST                                    0x5
#define IRVST_address                            0xF9C
#define IRVST_position                           0x5
#define IRVST_size                               0x1
#define IRVST_value_mask                         0x20
#define IRVST_clear_mask                         0xDF

#define IVRST                                    0x5
#define IVRST_address                            0xF9C
#define IVRST_position                           0x5
#define IVRST_size                               0x1
#define IVRST_value_mask                         0x20
#define IVRST_clear_mask                         0xDF

#define BGVST                                    0x6
#define BGVST_address                            0xF9C
#define BGVST_position                           0x6
#define BGVST_size                               0x1
#define BGVST_value_mask                         0x40
#define BGVST_clear_mask                         0xBF

#define VDIRMAG                                  0x7
#define VDIRMAG_address                          0xF9C
#define VDIRMAG_position                         0x7
#define VDIRMAG_size                             0x1
#define VDIRMAG_value_mask                       0x80
#define VDIRMAG_clear_mask                       0x7F


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


/*----------------------------------------------------------------#
| PIE2                                                      0xFA0 |
#-----------------------------------------------------------------#
| OSCFIE | C1IE | C2IE | EEIE | BCL1IE | HLVDIE | TMR3IE | CCP2IE |
#-----------------------------------------------------------------#
| 7      | 6    | 5    | 4    | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

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

#define EEIE                                     0x4
#define EEIE_address                             0xFA0
#define EEIE_position                            0x4
#define EEIE_size                                0x1
#define EEIE_value_mask                          0x10
#define EEIE_clear_mask                          0xEF

#define C2IE                                     0x5
#define C2IE_address                             0xFA0
#define C2IE_position                            0x5
#define C2IE_size                                0x1
#define C2IE_value_mask                          0x20
#define C2IE_clear_mask                          0xDF

#define C1IE                                     0x6
#define C1IE_address                             0xFA0
#define C1IE_position                            0x6
#define C1IE_size                                0x1
#define C1IE_value_mask                          0x40
#define C1IE_clear_mask                          0xBF

#define CMIE                                     0x6
#define CMIE_address                             0xFA0
#define CMIE_position                            0x6
#define CMIE_size                                0x1
#define CMIE_value_mask                          0x40
#define CMIE_clear_mask                          0xBF

#define OSCFIE                                   0x7
#define OSCFIE_address                           0xFA0
#define OSCFIE_position                          0x7
#define OSCFIE_size                              0x1
#define OSCFIE_value_mask                        0x80
#define OSCFIE_clear_mask                        0x7F


/*----------------------------------------------------------------#
| PIR2                                                      0xFA1 |
#-----------------------------------------------------------------#
| OSCFIF | C1IF | C2IF | EEIF | BCL1IF | HLVDIF | TMR3IF | CCP2IF |
#-----------------------------------------------------------------#
| 7      | 6    | 5    | 4    | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

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

#define EEIF                                     0x4
#define EEIF_address                             0xFA1
#define EEIF_position                            0x4
#define EEIF_size                                0x1
#define EEIF_value_mask                          0x10
#define EEIF_clear_mask                          0xEF

#define C2IF                                     0x5
#define C2IF_address                             0xFA1
#define C2IF_position                            0x5
#define C2IF_size                                0x1
#define C2IF_value_mask                          0x20
#define C2IF_clear_mask                          0xDF

#define C1IF                                     0x6
#define C1IF_address                             0xFA1
#define C1IF_position                            0x6
#define C1IF_size                                0x1
#define C1IF_value_mask                          0x40
#define C1IF_clear_mask                          0xBF

#define CMIF                                     0x6
#define CMIF_address                             0xFA1
#define CMIF_position                            0x6
#define CMIF_size                                0x1
#define CMIF_value_mask                          0x40
#define CMIF_clear_mask                          0xBF

#define OSCFIF                                   0x7
#define OSCFIF_address                           0xFA1
#define OSCFIF_position                          0x7
#define OSCFIF_size                              0x1
#define OSCFIF_value_mask                        0x80
#define OSCFIF_clear_mask                        0x7F


/*---------------------------------------------------------------#
| IPR2                                                     0xFA2 |
#----------------------------------------------------------------#
| OSCFIP | C1IP | C2IP | EEIP | BCLIP | HLVDIP | TMR3IP | CCP2IP |
#----------------------------------------------------------------#
| 7      | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
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

#define EEIP                                     0x4
#define EEIP_address                             0xFA2
#define EEIP_position                            0x4
#define EEIP_size                                0x1
#define EEIP_value_mask                          0x10
#define EEIP_clear_mask                          0xEF

#define C2IP                                     0x5
#define C2IP_address                             0xFA2
#define C2IP_position                            0x5
#define C2IP_size                                0x1
#define C2IP_value_mask                          0x20
#define C2IP_clear_mask                          0xDF

#define C1IP                                     0x6
#define C1IP_address                             0xFA2
#define C1IP_position                            0x6
#define C1IP_size                                0x1
#define C1IP_value_mask                          0x40
#define C1IP_clear_mask                          0xBF

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


/*----------------------------------------------------------------------#
| PIE3                                                            0xFA3 |
#-----------------------------------------------------------------------#
| SSP2IE | BCL2IE | RC2IE | TXB2IE | CTMUIE | TXB0IE | RXBNIE | TMR1GIE |
#-----------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3      | 2      | 1      | 0       |
#----------------------------------------------------------------------*/

#define PIE3                                     0x0
#define PIE3_address                             0xFA3
#define PIE3_position                            0x0
#define PIE3_size                                0x8
#define PIE3_value_mask                          0xFF
#define PIE3_clear_mask                          0x0

#define RXB0IE                                   0x0
#define RXB0IE_address                           0xFA3
#define RXB0IE_position                          0x0
#define RXB0IE_size                              0x1
#define RXB0IE_value_mask                        0x1
#define RXB0IE_clear_mask                        0xFE

#define TMR1GIE                                  0x0
#define TMR1GIE_address                          0xFA3
#define TMR1GIE_position                         0x0
#define TMR1GIE_size                             0x1
#define TMR1GIE_value_mask                       0x1
#define TMR1GIE_clear_mask                       0xFE

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

#define TMR5GIE                                  0x2
#define TMR5GIE_address                          0xFA3
#define TMR5GIE_position                         0x2
#define TMR5GIE_size                             0x1
#define TMR5GIE_value_mask                       0x4
#define TMR5GIE_clear_mask                       0xFB

#define TXB0IE                                   0x2
#define TXB0IE_address                           0xFA3
#define TXB0IE_position                          0x2
#define TXB0IE_size                              0x1
#define TXB0IE_value_mask                        0x4
#define TXB0IE_clear_mask                        0xFB

#define CTMUIE                                   0x3
#define CTMUIE_address                           0xFA3
#define CTMUIE_position                          0x3
#define CTMUIE_size                              0x1
#define CTMUIE_value_mask                        0x8
#define CTMUIE_clear_mask                        0xF7

#define TXB1IE                                   0x3
#define TXB1IE_address                           0xFA3
#define TXB1IE_position                          0x3
#define TXB1IE_size                              0x1
#define TXB1IE_value_mask                        0x8
#define TXB1IE_clear_mask                        0xF7

#define TXBNIE                                   0x4
#define TXBNIE_address                           0xFA3
#define TXBNIE_position                          0x4
#define TXBNIE_size                              0x1
#define TXBNIE_value_mask                        0x10
#define TXBNIE_clear_mask                        0xEF

#define TXB2IE                                   0x4
#define TXB2IE_address                           0xFA3
#define TXB2IE_position                          0x4
#define TXB2IE_size                              0x1
#define TXB2IE_value_mask                        0x10
#define TXB2IE_clear_mask                        0xEF

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


/*----------------------------------------------------------------------#
| PIR3                                                            0xFA4 |
#-----------------------------------------------------------------------#
| SSP2IF | BCL2IF | RC2IF | TX2IF | CTMUIF | TMR5GIF | RXBNIF | TMR1GIF |
#-----------------------------------------------------------------------#
| 7      | 6      | 5     | 4     | 3      | 2       | 1      | 0       |
#----------------------------------------------------------------------*/

#define PIR3                                     0x0
#define PIR3_address                             0xFA4
#define PIR3_position                            0x0
#define PIR3_size                                0x8
#define PIR3_value_mask                          0xFF
#define PIR3_clear_mask                          0x0

#define TMR1GIF                                  0x0
#define TMR1GIF_address                          0xFA4
#define TMR1GIF_position                         0x0
#define TMR1GIF_size                             0x1
#define TMR1GIF_value_mask                       0x1
#define TMR1GIF_clear_mask                       0xFE

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

#define TMR5GIF                                  0x2
#define TMR5GIF_address                          0xFA4
#define TMR5GIF_position                         0x2
#define TMR5GIF_size                             0x1
#define TMR5GIF_value_mask                       0x4
#define TMR5GIF_clear_mask                       0xFB

#define CTMUIF                                   0x3
#define CTMUIF_address                           0xFA4
#define CTMUIF_position                          0x3
#define CTMUIF_size                              0x1
#define CTMUIF_value_mask                        0x8
#define CTMUIF_clear_mask                        0xF7

#define TX2IF                                    0x4
#define TX2IF_address                            0xFA4
#define TX2IF_position                           0x4
#define TX2IF_size                               0x1
#define TX2IF_value_mask                         0x10
#define TX2IF_clear_mask                         0xEF

#define TXBNIF                                   0x4
#define TXBNIF_address                           0xFA4
#define TXBNIF_position                          0x4
#define TXBNIF_size                              0x1
#define TXBNIF_value_mask                        0x10
#define TXBNIF_clear_mask                        0xEF

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


/*-----------------------------------------------------------------------#
| IPR3                                                             0xFA5 |
#------------------------------------------------------------------------#
| SSP2IP | BCL2IP | RC2IP | TX2IP | CTMUIP | TMR5GIP | TMR3GIP | TMR1GIP |
#------------------------------------------------------------------------#
| 7      | 6      | 5     | 4     | 3      | 2       | 1       | 0       |
#-----------------------------------------------------------------------*/

#define IPR3                                     0x0
#define IPR3_address                             0xFA5
#define IPR3_position                            0x0
#define IPR3_size                                0x8
#define IPR3_value_mask                          0xFF
#define IPR3_clear_mask                          0x0

#define TMR1GIP                                  0x0
#define TMR1GIP_address                          0xFA5
#define TMR1GIP_position                         0x0
#define TMR1GIP_size                             0x1
#define TMR1GIP_value_mask                       0x1
#define TMR1GIP_clear_mask                       0xFE

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

#define TMR5GIP                                  0x2
#define TMR5GIP_address                          0xFA5
#define TMR5GIP_position                         0x2
#define TMR5GIP_size                             0x1
#define TMR5GIP_value_mask                       0x4
#define TMR5GIP_clear_mask                       0xFB

#define CTMUIP                                   0x3
#define CTMUIP_address                           0xFA5
#define CTMUIP_position                          0x3
#define CTMUIP_size                              0x1
#define CTMUIP_value_mask                        0x8
#define CTMUIP_clear_mask                        0xF7

#define TXBNIP                                   0x4
#define TXBNIP_address                           0xFA5
#define TXBNIP_position                          0x4
#define TXBNIP_size                              0x1
#define TXBNIP_value_mask                        0x10
#define TXBNIP_clear_mask                        0xEF

#define TX2IP                                    0x4
#define TX2IP_address                            0xFA5
#define TX2IP_position                           0x4
#define TX2IP_size                               0x1
#define TX2IP_value_mask                         0x10
#define TX2IP_clear_mask                         0xEF

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


/*-------------------------------------------------#
| EECON1                                     0xFA6 |
#--------------------------------------------------#
| EEPGD | CFGS | - | FREE | WRERR | WREN | WR | RD |
#--------------------------------------------------#
| 7     | 6    | 5 | 4    | 3     | 2    | 1  | 0  |
#-------------------------------------------------*/

#define EECON1                                   0x0
#define EECON1_address                           0xFA6
#define EECON1_position                          0x0
#define EECON1_size                              0x8
#define EECON1_value_mask                        0xFF
#define EECON1_clear_mask                        0x0

#define RD                                       0x0
#define RD_address                               0xFA6
#define RD_position                              0x0
#define RD_size                                  0x1
#define RD_value_mask                            0x1
#define RD_clear_mask                            0xFE

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

#define CFGS                                     0x6
#define CFGS_address                             0xFA6
#define CFGS_position                            0x6
#define CFGS_size                                0x1
#define CFGS_value_mask                          0x40
#define CFGS_clear_mask                          0xBF

#define EEFS                                     0x6
#define EEFS_address                             0xFA6
#define EEFS_position                            0x6
#define EEFS_size                                0x1
#define EEFS_value_mask                          0x40
#define EEFS_clear_mask                          0xBF

#define EEPGD                                    0x7
#define EEPGD_address                            0xFA6
#define EEPGD_position                           0x7
#define EEPGD_size                               0x1
#define EEPGD_value_mask                         0x80
#define EEPGD_clear_mask                         0x7F


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


/*------------------------------#
| EEDATA                  0xFA8 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EEDATA                                   0x0
#define EEDATA_address                           0xFA8
#define EEDATA_position                          0x0
#define EEDATA_size                              0x8
#define EEDATA_value_mask                        0xFF
#define EEDATA_clear_mask                        0x0


/*----------------------------------------------------------------------#
| EEADR                                                           0xFA9 |
#-----------------------------------------------------------------------#
| EEADR7 | EEADR6 | EEADR5 | EEADR4 | EEADR3 | EEADR2 | EEADR1 | EEADR0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define EEADR                                    0x0
#define EEADR_address                            0xFA9
#define EEADR_position                           0x0
#define EEADR_size                               0x8
#define EEADR_value_mask                         0xFF
#define EEADR_clear_mask                         0x0

#define EEADR0                                   0x0
#define EEADR0_address                           0xFA9
#define EEADR0_position                          0x0
#define EEADR0_size                              0x1
#define EEADR0_value_mask                        0x1
#define EEADR0_clear_mask                        0xFE

#define EEADR1                                   0x1
#define EEADR1_address                           0xFA9
#define EEADR1_position                          0x1
#define EEADR1_size                              0x1
#define EEADR1_value_mask                        0x2
#define EEADR1_clear_mask                        0xFD

#define EEADR2                                   0x2
#define EEADR2_address                           0xFA9
#define EEADR2_position                          0x2
#define EEADR2_size                              0x1
#define EEADR2_value_mask                        0x4
#define EEADR2_clear_mask                        0xFB

#define EEADR3                                   0x3
#define EEADR3_address                           0xFA9
#define EEADR3_position                          0x3
#define EEADR3_size                              0x1
#define EEADR3_value_mask                        0x8
#define EEADR3_clear_mask                        0xF7

#define EEADR4                                   0x4
#define EEADR4_address                           0xFA9
#define EEADR4_position                          0x4
#define EEADR4_size                              0x1
#define EEADR4_value_mask                        0x10
#define EEADR4_clear_mask                        0xEF

#define EEADR5                                   0x5
#define EEADR5_address                           0xFA9
#define EEADR5_position                          0x5
#define EEADR5_size                              0x1
#define EEADR5_value_mask                        0x20
#define EEADR5_clear_mask                        0xDF

#define EEADR6                                   0x6
#define EEADR6_address                           0xFA9
#define EEADR6_position                          0x6
#define EEADR6_size                              0x1
#define EEADR6_value_mask                        0x40
#define EEADR6_clear_mask                        0xBF

#define EEADR7                                   0x7
#define EEADR7_address                           0xFA9
#define EEADR7_position                          0x7
#define EEADR7_size                              0x1
#define EEADR7_value_mask                        0x80
#define EEADR7_clear_mask                        0x7F


/*----------------------------------------#
| EEADRH                            0xFAA |
#-----------------------------------------#
| - | - | - | - | - | - | EEADR9 | EEADR8 |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1      | 0      |
#----------------------------------------*/

#define EEADRH                                   0x0
#define EEADRH_address                           0xFAA
#define EEADRH_position                          0x0
#define EEADRH_size                              0x2
#define EEADRH_value_mask                        0x3
#define EEADRH_clear_mask                        0xFC

#define EEADR8                                   0x0
#define EEADR8_address                           0xFAA
#define EEADR8_position                          0x0
#define EEADR8_size                              0x1
#define EEADR8_value_mask                        0x1
#define EEADR8_clear_mask                        0xFE

#define EEADR9                                   0x1
#define EEADR9_address                           0xFAA
#define EEADR9_position                          0x1
#define EEADR9_size                              0x1
#define EEADR9_value_mask                        0x2
#define EEADR9_clear_mask                        0xFD


/*-------------------------------------------------------------------------------------#
| RCSTA1                                                                         0xFAB |
#--------------------------------------------------------------------------------------#
| SPEN1 | RX91 | RCSTA1_SREN | CREN1 | RCSTA1_ADEN | RCSTA1_FERR | RCSTA1_OERR | RX9D1 |
#--------------------------------------------------------------------------------------#
| 7     | 6    | 5           | 4     | 3           | 2           | 1           | 0     |
#-------------------------------------------------------------------------------------*/

#define RCSTA1                                   0x0
#define RCSTA1_address                           0xFAB
#define RCSTA1_position                          0x0
#define RCSTA1_size                              0x8
#define RCSTA1_value_mask                        0xFF
#define RCSTA1_clear_mask                        0x0

#define RCSTA1_RX9D                              0x0
#define RCSTA1_RX9D_address                      0xFAB
#define RCSTA1_RX9D_position                     0x0
#define RCSTA1_RX9D_size                         0x1
#define RCSTA1_RX9D_value_mask                   0x1
#define RCSTA1_RX9D_clear_mask                   0xFE

#define RX9D1                                    0x0
#define RX9D1_address                            0xFAB
#define RX9D1_position                           0x0
#define RX9D1_size                               0x1
#define RX9D1_value_mask                         0x1
#define RX9D1_clear_mask                         0xFE

#define RCD8                                     0x0
#define RCD8_address                             0xFAB
#define RCD8_position                            0x0
#define RCD8_size                                0x1
#define RCD8_value_mask                          0x1
#define RCD8_clear_mask                          0xFE

#define RCSTA1_OERR                              0x1
#define RCSTA1_OERR_address                      0xFAB
#define RCSTA1_OERR_position                     0x1
#define RCSTA1_OERR_size                         0x1
#define RCSTA1_OERR_value_mask                   0x2
#define RCSTA1_OERR_clear_mask                   0xFD

#define OERR1                                    0x1
#define OERR1_address                            0xFAB
#define OERR1_position                           0x1
#define OERR1_size                               0x1
#define OERR1_value_mask                         0x2
#define OERR1_clear_mask                         0xFD

#define RCSTA1_FERR                              0x2
#define RCSTA1_FERR_address                      0xFAB
#define RCSTA1_FERR_position                     0x2
#define RCSTA1_FERR_size                         0x1
#define RCSTA1_FERR_value_mask                   0x4
#define RCSTA1_FERR_clear_mask                   0xFB

#define FERR1                                    0x2
#define FERR1_address                            0xFAB
#define FERR1_position                           0x2
#define FERR1_size                               0x1
#define FERR1_value_mask                         0x4
#define FERR1_clear_mask                         0xFB

#define RCSTA1_ADDEN                             0x3
#define RCSTA1_ADDEN_address                     0xFAB
#define RCSTA1_ADDEN_position                    0x3
#define RCSTA1_ADDEN_size                        0x1
#define RCSTA1_ADDEN_value_mask                  0x8
#define RCSTA1_ADDEN_clear_mask                  0xF7

#define RCSTA1_ADEN                              0x3
#define RCSTA1_ADEN_address                      0xFAB
#define RCSTA1_ADEN_position                     0x3
#define RCSTA1_ADEN_size                         0x1
#define RCSTA1_ADEN_value_mask                   0x8
#define RCSTA1_ADEN_clear_mask                   0xF7

#define ADDEN1                                   0x3
#define ADDEN1_address                           0xFAB
#define ADDEN1_position                          0x3
#define ADDEN1_size                              0x1
#define ADDEN1_value_mask                        0x8
#define ADDEN1_clear_mask                        0xF7

#define RCSTA1_CREN                              0x4
#define RCSTA1_CREN_address                      0xFAB
#define RCSTA1_CREN_position                     0x4
#define RCSTA1_CREN_size                         0x1
#define RCSTA1_CREN_value_mask                   0x10
#define RCSTA1_CREN_clear_mask                   0xEF

#define CREN1                                    0x4
#define CREN1_address                            0xFAB
#define CREN1_position                           0x4
#define CREN1_size                               0x1
#define CREN1_value_mask                         0x10
#define CREN1_clear_mask                         0xEF

#define SRENA                                    0x5
#define SRENA_address                            0xFAB
#define SRENA_position                           0x5
#define SRENA_size                               0x1
#define SRENA_value_mask                         0x20
#define SRENA_clear_mask                         0xDF

#define SREN1                                    0x5
#define SREN1_address                            0xFAB
#define SREN1_position                           0x5
#define SREN1_size                               0x1
#define SREN1_value_mask                         0x20
#define SREN1_clear_mask                         0xDF

#define RCSTA1_SREN                              0x5
#define RCSTA1_SREN_address                      0xFAB
#define RCSTA1_SREN_position                     0x5
#define RCSTA1_SREN_size                         0x1
#define RCSTA1_SREN_value_mask                   0x20
#define RCSTA1_SREN_clear_mask                   0xDF

#define RC8_9                                    0x6
#define RC8_9_address                            0xFAB
#define RC8_9_position                           0x6
#define RC8_9_size                               0x1
#define RC8_9_value_mask                         0x40
#define RC8_9_clear_mask                         0xBF

#define RCSTA1_RX9                               0x6
#define RCSTA1_RX9_address                       0xFAB
#define RCSTA1_RX9_position                      0x6
#define RCSTA1_RX9_size                          0x1
#define RCSTA1_RX9_value_mask                    0x40
#define RCSTA1_RX9_clear_mask                    0xBF

#define RC9                                      0x6
#define RC9_address                              0xFAB
#define RC9_position                             0x6
#define RC9_size                                 0x1
#define RC9_value_mask                           0x40
#define RC9_clear_mask                           0xBF

#define RX91                                     0x6
#define RX91_address                             0xFAB
#define RX91_position                            0x6
#define RX91_size                                0x1
#define RX91_value_mask                          0x40
#define RX91_clear_mask                          0xBF

#define RCSTA1_SPEN                              0x7
#define RCSTA1_SPEN_address                      0xFAB
#define RCSTA1_SPEN_position                     0x7
#define RCSTA1_SPEN_size                         0x1
#define RCSTA1_SPEN_value_mask                   0x80
#define RCSTA1_SPEN_clear_mask                   0x7F

#define SPEN1                                    0x7
#define SPEN1_address                            0xFAB
#define SPEN1_position                           0x7
#define SPEN1_size                               0x1
#define SPEN1_value_mask                         0x80
#define SPEN1_clear_mask                         0x7F


/*-------------------------------------------------------------------------------------#
| TXSTA1                                                                         0xFAC |
#--------------------------------------------------------------------------------------#
| CSRC1 | TX91 | TXSTA1_TXEN | SYNC1 | TXSTA1_SENDB | TXSTA1_BRGH | TXSTA1_TRMT | TXD8 |
#--------------------------------------------------------------------------------------#
| 7     | 6    | 5           | 4     | 3            | 2           | 1           | 0    |
#-------------------------------------------------------------------------------------*/

#define TXSTA1                                   0x0
#define TXSTA1_address                           0xFAC
#define TXSTA1_position                          0x0
#define TXSTA1_size                              0x8
#define TXSTA1_value_mask                        0xFF
#define TXSTA1_clear_mask                        0x0

#define TX9D1                                    0x0
#define TX9D1_address                            0xFAC
#define TX9D1_position                           0x0
#define TX9D1_size                               0x1
#define TX9D1_value_mask                         0x1
#define TX9D1_clear_mask                         0xFE

#define TXSTA1_TX9D                              0x0
#define TXSTA1_TX9D_address                      0xFAC
#define TXSTA1_TX9D_position                     0x0
#define TXSTA1_TX9D_size                         0x1
#define TXSTA1_TX9D_value_mask                   0x1
#define TXSTA1_TX9D_clear_mask                   0xFE

#define TXD8                                     0x0
#define TXD8_address                             0xFAC
#define TXD8_position                            0x0
#define TXD8_size                                0x1
#define TXD8_value_mask                          0x1
#define TXD8_clear_mask                          0xFE

#define TRMT1                                    0x1
#define TRMT1_address                            0xFAC
#define TRMT1_position                           0x1
#define TRMT1_size                               0x1
#define TRMT1_value_mask                         0x2
#define TRMT1_clear_mask                         0xFD

#define TXSTA1_TRMT                              0x1
#define TXSTA1_TRMT_address                      0xFAC
#define TXSTA1_TRMT_position                     0x1
#define TXSTA1_TRMT_size                         0x1
#define TXSTA1_TRMT_value_mask                   0x2
#define TXSTA1_TRMT_clear_mask                   0xFD

#define BRGH1                                    0x2
#define BRGH1_address                            0xFAC
#define BRGH1_position                           0x2
#define BRGH1_size                               0x1
#define BRGH1_value_mask                         0x4
#define BRGH1_clear_mask                         0xFB

#define TXSTA1_BRGH                              0x2
#define TXSTA1_BRGH_address                      0xFAC
#define TXSTA1_BRGH_position                     0x2
#define TXSTA1_BRGH_size                         0x1
#define TXSTA1_BRGH_value_mask                   0x4
#define TXSTA1_BRGH_clear_mask                   0xFB

#define TXSTA1_SENDB                             0x3
#define TXSTA1_SENDB_address                     0xFAC
#define TXSTA1_SENDB_position                    0x3
#define TXSTA1_SENDB_size                        0x1
#define TXSTA1_SENDB_value_mask                  0x8
#define TXSTA1_SENDB_clear_mask                  0xF7

#define SENDB1                                   0x3
#define SENDB1_address                           0xFAC
#define SENDB1_position                          0x3
#define SENDB1_size                              0x1
#define SENDB1_value_mask                        0x8
#define SENDB1_clear_mask                        0xF7

#define TXSTA1_SYNC                              0x4
#define TXSTA1_SYNC_address                      0xFAC
#define TXSTA1_SYNC_position                     0x4
#define TXSTA1_SYNC_size                         0x1
#define TXSTA1_SYNC_value_mask                   0x10
#define TXSTA1_SYNC_clear_mask                   0xEF

#define SYNC1                                    0x4
#define SYNC1_address                            0xFAC
#define SYNC1_position                           0x4
#define SYNC1_size                               0x1
#define SYNC1_value_mask                         0x10
#define SYNC1_clear_mask                         0xEF

#define TXEN1                                    0x5
#define TXEN1_address                            0xFAC
#define TXEN1_position                           0x5
#define TXEN1_size                               0x1
#define TXEN1_value_mask                         0x20
#define TXEN1_clear_mask                         0xDF

#define TXSTA1_TXEN                              0x5
#define TXSTA1_TXEN_address                      0xFAC
#define TXSTA1_TXEN_position                     0x5
#define TXSTA1_TXEN_size                         0x1
#define TXSTA1_TXEN_value_mask                   0x20
#define TXSTA1_TXEN_clear_mask                   0xDF

#define TX91                                     0x6
#define TX91_address                             0xFAC
#define TX91_position                            0x6
#define TX91_size                                0x1
#define TX91_value_mask                          0x40
#define TX91_clear_mask                          0xBF

#define TX8_9                                    0x6
#define TX8_9_address                            0xFAC
#define TX8_9_position                           0x6
#define TX8_9_size                               0x1
#define TX8_9_value_mask                         0x40
#define TX8_9_clear_mask                         0xBF

#define TXSTA1_TX9                               0x6
#define TXSTA1_TX9_address                       0xFAC
#define TXSTA1_TX9_position                      0x6
#define TXSTA1_TX9_size                          0x1
#define TXSTA1_TX9_value_mask                    0x40
#define TXSTA1_TX9_clear_mask                    0xBF

#define TXSTA1_CSRC                              0x7
#define TXSTA1_CSRC_address                      0xFAC
#define TXSTA1_CSRC_position                     0x7
#define TXSTA1_CSRC_size                         0x1
#define TXSTA1_CSRC_value_mask                   0x80
#define TXSTA1_CSRC_clear_mask                   0x7F

#define CSRC1                                    0x7
#define CSRC1_address                            0xFAC
#define CSRC1_position                           0x7
#define CSRC1_size                               0x1
#define CSRC1_value_mask                         0x80
#define CSRC1_clear_mask                         0x7F


/*------------------------------#
| TXREG1                  0xFAD |
#-------------------------------#
| TX1REG                        |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TXREG1                                   0x0
#define TXREG1_address                           0xFAD
#define TXREG1_position                          0x0
#define TXREG1_size                              0x8
#define TXREG1_value_mask                        0xFF
#define TXREG1_clear_mask                        0x0

#define TXREG                                    0x0
#define TXREG_address                            0xFAD
#define TXREG_position                           0x0
#define TXREG_size                               0x8
#define TXREG_value_mask                         0xFF
#define TXREG_clear_mask                         0x0

#define TX1REG                                   0x0
#define TX1REG_address                           0xFAD
#define TX1REG_position                          0x0
#define TX1REG_size                              0x8
#define TX1REG_value_mask                        0xFF
#define TX1REG_clear_mask                        0x0


/*------------------------------#
| RCREG1                  0xFAE |
#-------------------------------#
| RCREG                         |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RCREG1                                   0x0
#define RCREG1_address                           0xFAE
#define RCREG1_position                          0x0
#define RCREG1_size                              0x8
#define RCREG1_value_mask                        0xFF
#define RCREG1_clear_mask                        0x0

#define RCREG                                    0x0
#define RCREG_address                            0xFAE
#define RCREG_position                           0x0
#define RCREG_size                               0x8
#define RCREG_value_mask                         0xFF
#define RCREG_clear_mask                         0x0

#define RC1REG                                   0x0
#define RC1REG_address                           0xFAE
#define RC1REG_position                          0x0
#define RC1REG_size                              0x8
#define RC1REG_value_mask                        0xFF
#define RC1REG_clear_mask                        0x0


/*------------------------------#
| SPBRG1                  0xFAF |
#-------------------------------#
| SPBRG                         |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SPBRG1                                   0x0
#define SPBRG1_address                           0xFAF
#define SPBRG1_position                          0x0
#define SPBRG1_size                              0x8
#define SPBRG1_value_mask                        0xFF
#define SPBRG1_clear_mask                        0x0

#define SPBRG                                    0x0
#define SPBRG_address                            0xFAF
#define SPBRG_position                           0x0
#define SPBRG_size                               0x8
#define SPBRG_value_mask                         0xFF
#define SPBRG_clear_mask                         0x0

#define SP1BRG                                   0x0
#define SP1BRG_address                           0xFAF
#define SP1BRG_position                          0x0
#define SP1BRG_size                              0x8
#define SP1BRG_value_mask                        0xFF
#define SP1BRG_clear_mask                        0x0


/*------------------------------#
| SPBRGH1                 0xFB0 |
#-------------------------------#
| SP1BRGH                       |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SPBRGH1                                  0x0
#define SPBRGH1_address                          0xFB0
#define SPBRGH1_position                         0x0
#define SPBRGH1_size                             0x8
#define SPBRGH1_value_mask                       0xFF
#define SPBRGH1_clear_mask                       0x0

#define SP1BRGH                                  0x0
#define SP1BRGH_address                          0xFB0
#define SP1BRGH_position                         0x0
#define SP1BRGH_size                             0x8
#define SP1BRGH_value_mask                       0xFF
#define SP1BRGH_clear_mask                       0x0

#define SPBRGH                                   0x0
#define SPBRGH_address                           0xFB0
#define SPBRGH_position                          0x0
#define SPBRGH_size                              0x8
#define SPBRGH_value_mask                        0xFF
#define SPBRGH_clear_mask                        0x0


/*----------------------------------------------------------------------------#
| T3CON                                                                 0xFB1 |
#-----------------------------------------------------------------------------#
| TMR3CS1 | TMR3CS0 | T3CKPS1 | T3CKPS0 | SOSCEN3 | nT3SYNC | T3RD16 | TMR3ON |
#-----------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1      | 0      |
#----------------------------------------------------------------------------*/

#define T3CON                                    0x0
#define T3CON_address                            0xFB1
#define T3CON_position                           0x0
#define T3CON_size                               0x8
#define T3CON_value_mask                         0xFF
#define T3CON_clear_mask                         0x0

#define TMR3ON                                   0x0
#define TMR3ON_address                           0xFB1
#define TMR3ON_position                          0x0
#define TMR3ON_size                              0x1
#define TMR3ON_value_mask                        0x1
#define TMR3ON_clear_mask                        0xFE

#define T3RD16                                   0x1
#define T3RD16_address                           0xFB1
#define T3RD16_position                          0x1
#define T3RD16_size                              0x1
#define T3RD16_value_mask                        0x2
#define T3RD16_clear_mask                        0xFD

#define nT3SYNC                                  0x2
#define nT3SYNC_address                          0xFB1
#define nT3SYNC_position                         0x2
#define nT3SYNC_size                             0x1
#define nT3SYNC_value_mask                       0x4
#define nT3SYNC_clear_mask                       0xFB

#define NOT_T3SYNC                               0x2
#define NOT_T3SYNC_address                       0xFB1
#define NOT_T3SYNC_position                      0x2
#define NOT_T3SYNC_size                          0x1
#define NOT_T3SYNC_value_mask                    0x4
#define NOT_T3SYNC_clear_mask                    0xFB

#define SOSCEN3                                  0x3
#define SOSCEN3_address                          0xFB1
#define SOSCEN3_position                         0x3
#define SOSCEN3_size                             0x1
#define SOSCEN3_value_mask                       0x8
#define SOSCEN3_clear_mask                       0xF7

#define T3SOSCEN                                 0x3
#define T3SOSCEN_address                         0xFB1
#define T3SOSCEN_position                        0x3
#define T3SOSCEN_size                            0x1
#define T3SOSCEN_value_mask                      0x8
#define T3SOSCEN_clear_mask                      0xF7

#define T3OSCEN                                  0x3
#define T3OSCEN_address                          0xFB1
#define T3OSCEN_position                         0x3
#define T3OSCEN_size                             0x1
#define T3OSCEN_value_mask                       0x8
#define T3OSCEN_clear_mask                       0xF7

#define T3CKPS                                   0x4
#define T3CKPS_address                           0xFB1
#define T3CKPS_position                          0x4
#define T3CKPS_size                              0x2
#define T3CKPS_value_mask                        0x30
#define T3CKPS_clear_mask                        0xCF

#define T3CKPS0                                  0x4
#define T3CKPS0_address                          0xFB1
#define T3CKPS0_position                         0x4
#define T3CKPS0_size                             0x1
#define T3CKPS0_value_mask                       0x10
#define T3CKPS0_clear_mask                       0xEF

#define T3CKPS1                                  0x5
#define T3CKPS1_address                          0xFB1
#define T3CKPS1_position                         0x5
#define T3CKPS1_size                             0x1
#define T3CKPS1_value_mask                       0x20
#define T3CKPS1_clear_mask                       0xDF

#define TMR3CS0                                  0x6
#define TMR3CS0_address                          0xFB1
#define TMR3CS0_position                         0x6
#define TMR3CS0_size                             0x1
#define TMR3CS0_value_mask                       0x40
#define TMR3CS0_clear_mask                       0xBF

#define TMR3CS                                   0x6
#define TMR3CS_address                           0xFB1
#define TMR3CS_position                          0x6
#define TMR3CS_size                              0x2
#define TMR3CS_value_mask                        0xC0
#define TMR3CS_clear_mask                        0x3F

#define TMR3CS1                                  0x7
#define TMR3CS1_address                          0xFB1
#define TMR3CS1_position                         0x7
#define TMR3CS1_size                             0x1
#define TMR3CS1_value_mask                       0x80
#define TMR3CS1_clear_mask                       0x7F

#define RD163                                    0x7
#define RD163_address                            0xFB1
#define RD163_position                           0x7
#define RD163_size                               0x1
#define RD163_value_mask                         0x80
#define RD163_clear_mask                         0x7F


/*------------------------------#
| TMR3L                   0xFB2 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR3L                                    0x0
#define TMR3L_address                            0xFB2
#define TMR3L_position                           0x0
#define TMR3L_size                               0x8
#define TMR3L_value_mask                         0xFF
#define TMR3L_clear_mask                         0x0


/*------------------------------#
| TMR3H                   0xFB3 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR3H                                    0x0
#define TMR3H_address                            0xFB3
#define TMR3H_position                           0x0
#define TMR3H_size                               0x8
#define TMR3H_value_mask                         0xFF
#define TMR3H_clear_mask                         0x0


/*-----------------------------------------------------------------------------#
| T3GCON                                                                 0xFB4 |
#------------------------------------------------------------------------------#
| TMR3GE | T3GPOL | T3GTM | T3GSPM | T3GGO_NOT_DONE | T3GVAL | T3GSS1 | T3GSS0 |
#------------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3              | 2      | 1      | 0      |
#-----------------------------------------------------------------------------*/

#define T3GCON                                   0x0
#define T3GCON_address                           0xFB4
#define T3GCON_position                          0x0
#define T3GCON_size                              0x8
#define T3GCON_value_mask                        0xFF
#define T3GCON_clear_mask                        0x0

#define T3GSS0                                   0x0
#define T3GSS0_address                           0xFB4
#define T3GSS0_position                          0x0
#define T3GSS0_size                              0x1
#define T3GSS0_value_mask                        0x1
#define T3GSS0_clear_mask                        0xFE

#define T3GSS                                    0x0
#define T3GSS_address                            0xFB4
#define T3GSS_position                           0x0
#define T3GSS_size                               0x2
#define T3GSS_value_mask                         0x3
#define T3GSS_clear_mask                         0xFC

#define T3GSS1                                   0x1
#define T3GSS1_address                           0xFB4
#define T3GSS1_position                          0x1
#define T3GSS1_size                              0x1
#define T3GSS1_value_mask                        0x2
#define T3GSS1_clear_mask                        0xFD

#define T3GVAL                                   0x2
#define T3GVAL_address                           0xFB4
#define T3GVAL_position                          0x2
#define T3GVAL_size                              0x1
#define T3GVAL_value_mask                        0x4
#define T3GVAL_clear_mask                        0xFB

#define T3GGO                                    0x3
#define T3GGO_address                            0xFB4
#define T3GGO_position                           0x3
#define T3GGO_size                               0x1
#define T3GGO_value_mask                         0x8
#define T3GGO_clear_mask                         0xF7

#define T3GGO_NOT_DONE                           0x3
#define T3GGO_NOT_DONE_address                   0xFB4
#define T3GGO_NOT_DONE_position                  0x3
#define T3GGO_NOT_DONE_size                      0x1
#define T3GGO_NOT_DONE_value_mask                0x8
#define T3GGO_NOT_DONE_clear_mask                0xF7

#define T3G_DONE                                 0x3
#define T3G_DONE_address                         0xFB4
#define T3G_DONE_position                        0x3
#define T3G_DONE_size                            0x1
#define T3G_DONE_value_mask                      0x8
#define T3G_DONE_clear_mask                      0xF7

#define T3GGO_nDONE                              0x3
#define T3GGO_nDONE_address                      0xFB4
#define T3GGO_nDONE_position                     0x3
#define T3GGO_nDONE_size                         0x1
#define T3GGO_nDONE_value_mask                   0x8
#define T3GGO_nDONE_clear_mask                   0xF7

#define T3GSPM                                   0x4
#define T3GSPM_address                           0xFB4
#define T3GSPM_position                          0x4
#define T3GSPM_size                              0x1
#define T3GSPM_value_mask                        0x10
#define T3GSPM_clear_mask                        0xEF

#define T3GTM                                    0x5
#define T3GTM_address                            0xFB4
#define T3GTM_position                           0x5
#define T3GTM_size                               0x1
#define T3GTM_value_mask                         0x20
#define T3GTM_clear_mask                         0xDF

#define T3GPOL                                   0x6
#define T3GPOL_address                           0xFB4
#define T3GPOL_position                          0x6
#define T3GPOL_size                              0x1
#define T3GPOL_value_mask                        0x40
#define T3GPOL_clear_mask                        0xBF

#define TMR3GE                                   0x7
#define TMR3GE_address                           0xFB4
#define TMR3GE_position                          0x7
#define TMR3GE_size                              0x1
#define TMR3GE_value_mask                        0x80
#define TMR3GE_clear_mask                        0x7F


/*------------------------------------------------------------------------------#
| ECCP1AS                                                                 0xFB6 |
#-------------------------------------------------------------------------------#
| ECCPASE | CCP1AS2 | CCP1AS1 | CCP1AS0 | P1SSAC1 | P1SSAC0 | P1SSBD1 | P1SSBD0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define ECCP1AS                                  0x0
#define ECCP1AS_address                          0xFB6
#define ECCP1AS_position                         0x0
#define ECCP1AS_size                             0x8
#define ECCP1AS_value_mask                       0xFF
#define ECCP1AS_clear_mask                       0x0

#define P1SSBD0                                  0x0
#define P1SSBD0_address                          0xFB6
#define P1SSBD0_position                         0x0
#define P1SSBD0_size                             0x1
#define P1SSBD0_value_mask                       0x1
#define P1SSBD0_clear_mask                       0xFE

#define PSS1BD                                   0x0
#define PSS1BD_address                           0xFB6
#define PSS1BD_position                          0x0
#define PSS1BD_size                              0x2
#define PSS1BD_value_mask                        0x3
#define PSS1BD_clear_mask                        0xFC

#define P1SSBD                                   0x0
#define P1SSBD_address                           0xFB6
#define P1SSBD_position                          0x0
#define P1SSBD_size                              0x2
#define P1SSBD_value_mask                        0x3
#define P1SSBD_clear_mask                        0xFC

#define PSSBD                                    0x0
#define PSSBD_address                            0xFB6
#define PSSBD_position                           0x0
#define PSSBD_size                               0x2
#define PSSBD_value_mask                         0x3
#define PSSBD_clear_mask                         0xFC

#define PSSBD0                                   0x0
#define PSSBD0_address                           0xFB6
#define PSSBD0_position                          0x0
#define PSSBD0_size                              0x1
#define PSSBD0_value_mask                        0x1
#define PSSBD0_clear_mask                        0xFE

#define PSS1BD0                                  0x0
#define PSS1BD0_address                          0xFB6
#define PSS1BD0_position                         0x0
#define PSS1BD0_size                             0x1
#define PSS1BD0_value_mask                       0x1
#define PSS1BD0_clear_mask                       0xFE

#define P1SSBD1                                  0x1
#define P1SSBD1_address                          0xFB6
#define P1SSBD1_position                         0x1
#define P1SSBD1_size                             0x1
#define P1SSBD1_value_mask                       0x2
#define P1SSBD1_clear_mask                       0xFD

#define PSSBD1                                   0x1
#define PSSBD1_address                           0xFB6
#define PSSBD1_position                          0x1
#define PSSBD1_size                              0x1
#define PSSBD1_value_mask                        0x2
#define PSSBD1_clear_mask                        0xFD

#define PSS1BD1                                  0x1
#define PSS1BD1_address                          0xFB6
#define PSS1BD1_position                         0x1
#define PSS1BD1_size                             0x1
#define PSS1BD1_value_mask                       0x2
#define PSS1BD1_clear_mask                       0xFD

#define P1SSAC0                                  0x2
#define P1SSAC0_address                          0xFB6
#define P1SSAC0_position                         0x2
#define P1SSAC0_size                             0x1
#define P1SSAC0_value_mask                       0x4
#define P1SSAC0_clear_mask                       0xFB

#define PSSAC                                    0x2
#define PSSAC_address                            0xFB6
#define PSSAC_position                           0x2
#define PSSAC_size                               0x2
#define PSSAC_value_mask                         0xC
#define PSSAC_clear_mask                         0xF3

#define PSS1AC                                   0x2
#define PSS1AC_address                           0xFB6
#define PSS1AC_position                          0x2
#define PSS1AC_size                              0x2
#define PSS1AC_value_mask                        0xC
#define PSS1AC_clear_mask                        0xF3

#define PSSAC0                                   0x2
#define PSSAC0_address                           0xFB6
#define PSSAC0_position                          0x2
#define PSSAC0_size                              0x1
#define PSSAC0_value_mask                        0x4
#define PSSAC0_clear_mask                        0xFB

#define PSS1AC0                                  0x2
#define PSS1AC0_address                          0xFB6
#define PSS1AC0_position                         0x2
#define PSS1AC0_size                             0x1
#define PSS1AC0_value_mask                       0x4
#define PSS1AC0_clear_mask                       0xFB

#define P1SSAC                                   0x2
#define P1SSAC_address                           0xFB6
#define P1SSAC_position                          0x2
#define P1SSAC_size                              0x2
#define P1SSAC_value_mask                        0xC
#define P1SSAC_clear_mask                        0xF3

#define P1SSAC1                                  0x3
#define P1SSAC1_address                          0xFB6
#define P1SSAC1_position                         0x3
#define P1SSAC1_size                             0x1
#define P1SSAC1_value_mask                       0x8
#define P1SSAC1_clear_mask                       0xF7

#define PSSAC1                                   0x3
#define PSSAC1_address                           0xFB6
#define PSSAC1_position                          0x3
#define PSSAC1_size                              0x1
#define PSSAC1_value_mask                        0x8
#define PSSAC1_clear_mask                        0xF7

#define PSS1AC1                                  0x3
#define PSS1AC1_address                          0xFB6
#define PSS1AC1_position                         0x3
#define PSS1AC1_size                             0x1
#define PSS1AC1_value_mask                       0x8
#define PSS1AC1_clear_mask                       0xF7

#define CCP1AS0                                  0x4
#define CCP1AS0_address                          0xFB6
#define CCP1AS0_position                         0x4
#define CCP1AS0_size                             0x1
#define CCP1AS0_value_mask                       0x10
#define CCP1AS0_clear_mask                       0xEF

#define CCP1AS                                   0x4
#define CCP1AS_address                           0xFB6
#define CCP1AS_position                          0x4
#define CCP1AS_size                              0x3
#define CCP1AS_value_mask                        0x70
#define CCP1AS_clear_mask                        0x8F

#define ECCPAS                                   0x4
#define ECCPAS_address                           0xFB6
#define ECCPAS_position                          0x4
#define ECCPAS_size                              0x3
#define ECCPAS_value_mask                        0x70
#define ECCPAS_clear_mask                        0x8F

#define ECCPAS0                                  0x4
#define ECCPAS0_address                          0xFB6
#define ECCPAS0_position                         0x4
#define ECCPAS0_size                             0x1
#define ECCPAS0_value_mask                       0x10
#define ECCPAS0_clear_mask                       0xEF

#define CCP1AS1                                  0x5
#define CCP1AS1_address                          0xFB6
#define CCP1AS1_position                         0x5
#define CCP1AS1_size                             0x1
#define CCP1AS1_value_mask                       0x20
#define CCP1AS1_clear_mask                       0xDF

#define ECCPAS1                                  0x5
#define ECCPAS1_address                          0xFB6
#define ECCPAS1_position                         0x5
#define ECCPAS1_size                             0x1
#define ECCPAS1_value_mask                       0x20
#define ECCPAS1_clear_mask                       0xDF

#define CCP1AS2                                  0x6
#define CCP1AS2_address                          0xFB6
#define CCP1AS2_position                         0x6
#define CCP1AS2_size                             0x1
#define CCP1AS2_value_mask                       0x40
#define CCP1AS2_clear_mask                       0xBF

#define ECCPAS2                                  0x6
#define ECCPAS2_address                          0xFB6
#define ECCPAS2_position                         0x6
#define ECCPAS2_size                             0x1
#define ECCPAS2_value_mask                       0x40
#define ECCPAS2_clear_mask                       0xBF

#define ECCPASE                                  0x7
#define ECCPASE_address                          0xFB6
#define ECCPASE_position                         0x7
#define ECCPASE_size                             0x1
#define ECCPASE_value_mask                       0x80
#define ECCPASE_clear_mask                       0x7F

#define CCP1ASE                                  0x7
#define CCP1ASE_address                          0xFB6
#define CCP1ASE_position                         0x7
#define CCP1ASE_size                             0x1
#define CCP1ASE_value_mask                       0x80
#define CCP1ASE_clear_mask                       0x7F


/*-------------------------------------------------------#
| PWM1CON                                          0xFB7 |
#--------------------------------------------------------#
| PRSEN | PDC6 | PDC5 | PDC4 | PDC3 | PDC2 | PDC1 | PDC0 |
#--------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#-------------------------------------------------------*/

#define PWM1CON                                  0x0
#define PWM1CON_address                          0xFB7
#define PWM1CON_position                         0x0
#define PWM1CON_size                             0x8
#define PWM1CON_value_mask                       0xFF
#define PWM1CON_clear_mask                       0x0

#define PDC0                                     0x0
#define PDC0_address                             0xFB7
#define PDC0_position                            0x0
#define PDC0_size                                0x1
#define PDC0_value_mask                          0x1
#define PDC0_clear_mask                          0xFE

#define P1DC                                     0x0
#define P1DC_address                             0xFB7
#define P1DC_position                            0x0
#define P1DC_size                                0x7
#define P1DC_value_mask                          0x7F
#define P1DC_clear_mask                          0x80

#define P1DC0                                    0x0
#define P1DC0_address                            0xFB7
#define P1DC0_position                           0x0
#define P1DC0_size                               0x1
#define P1DC0_value_mask                         0x1
#define P1DC0_clear_mask                         0xFE

#define PDC                                      0x0
#define PDC_address                              0xFB7
#define PDC_position                             0x0
#define PDC_size                                 0x7
#define PDC_value_mask                           0x7F
#define PDC_clear_mask                           0x80

#define PDC1                                     0x1
#define PDC1_address                             0xFB7
#define PDC1_position                            0x1
#define PDC1_size                                0x1
#define PDC1_value_mask                          0x2
#define PDC1_clear_mask                          0xFD

#define P1DC1                                    0x1
#define P1DC1_address                            0xFB7
#define P1DC1_position                           0x1
#define P1DC1_size                               0x1
#define P1DC1_value_mask                         0x2
#define P1DC1_clear_mask                         0xFD

#define PDC2                                     0x2
#define PDC2_address                             0xFB7
#define PDC2_position                            0x2
#define PDC2_size                                0x1
#define PDC2_value_mask                          0x4
#define PDC2_clear_mask                          0xFB

#define P1DC2                                    0x2
#define P1DC2_address                            0xFB7
#define P1DC2_position                           0x2
#define P1DC2_size                               0x1
#define P1DC2_value_mask                         0x4
#define P1DC2_clear_mask                         0xFB

#define PDC3                                     0x3
#define PDC3_address                             0xFB7
#define PDC3_position                            0x3
#define PDC3_size                                0x1
#define PDC3_value_mask                          0x8
#define PDC3_clear_mask                          0xF7

#define P1DC3                                    0x3
#define P1DC3_address                            0xFB7
#define P1DC3_position                           0x3
#define P1DC3_size                               0x1
#define P1DC3_value_mask                         0x8
#define P1DC3_clear_mask                         0xF7

#define PDC4                                     0x4
#define PDC4_address                             0xFB7
#define PDC4_position                            0x4
#define PDC4_size                                0x1
#define PDC4_value_mask                          0x10
#define PDC4_clear_mask                          0xEF

#define P1DC4                                    0x4
#define P1DC4_address                            0xFB7
#define P1DC4_position                           0x4
#define P1DC4_size                               0x1
#define P1DC4_value_mask                         0x10
#define P1DC4_clear_mask                         0xEF

#define PDC5                                     0x5
#define PDC5_address                             0xFB7
#define PDC5_position                            0x5
#define PDC5_size                                0x1
#define PDC5_value_mask                          0x20
#define PDC5_clear_mask                          0xDF

#define P1DC5                                    0x5
#define P1DC5_address                            0xFB7
#define P1DC5_position                           0x5
#define P1DC5_size                               0x1
#define P1DC5_value_mask                         0x20
#define P1DC5_clear_mask                         0xDF

#define P1DC6                                    0x6
#define P1DC6_address                            0xFB7
#define P1DC6_position                           0x6
#define P1DC6_size                               0x1
#define P1DC6_value_mask                         0x40
#define P1DC6_clear_mask                         0xBF

#define PDC6                                     0x6
#define PDC6_address                             0xFB7
#define PDC6_position                            0x6
#define PDC6_size                                0x1
#define PDC6_value_mask                          0x40
#define PDC6_clear_mask                          0xBF

#define PRSEN                                    0x7
#define PRSEN_address                            0xFB7
#define PRSEN_position                           0x7
#define PRSEN_size                               0x1
#define PRSEN_value_mask                         0x80
#define PRSEN_clear_mask                         0x7F

#define P1RSEN                                   0x7
#define P1RSEN_address                           0xFB7
#define P1RSEN_position                          0x7
#define P1RSEN_size                              0x1
#define P1RSEN_value_mask                        0x80
#define P1RSEN_clear_mask                        0x7F


/*---------------------------------------------------------------------------------------#
| BAUDCON1                                                                         0xFB8 |
#----------------------------------------------------------------------------------------#
| ABDOVF1 | RCMT1 | DTRXP1 | BAUDCON1_CKTXP | BRG161 | - | BAUDCON1_WUE | BAUDCON1_ABDEN |
#----------------------------------------------------------------------------------------#
| 7       | 6     | 5      | 4              | 3      | 2 | 1            | 0              |
#---------------------------------------------------------------------------------------*/

#define BAUDCON1                                 0x0
#define BAUDCON1_address                         0xFB8
#define BAUDCON1_position                        0x0
#define BAUDCON1_size                            0x8
#define BAUDCON1_value_mask                      0xFF
#define BAUDCON1_clear_mask                      0x0

#define BAUDCON1_ABDEN                           0x0
#define BAUDCON1_ABDEN_address                   0xFB8
#define BAUDCON1_ABDEN_position                  0x0
#define BAUDCON1_ABDEN_size                      0x1
#define BAUDCON1_ABDEN_value_mask                0x1
#define BAUDCON1_ABDEN_clear_mask                0xFE

#define ABDEN1                                   0x0
#define ABDEN1_address                           0xFB8
#define ABDEN1_position                          0x0
#define ABDEN1_size                              0x1
#define ABDEN1_value_mask                        0x1
#define ABDEN1_clear_mask                        0xFE

#define BAUDCON1_WUE                             0x1
#define BAUDCON1_WUE_address                     0xFB8
#define BAUDCON1_WUE_position                    0x1
#define BAUDCON1_WUE_size                        0x1
#define BAUDCON1_WUE_value_mask                  0x2
#define BAUDCON1_WUE_clear_mask                  0xFD

#define WUE1                                     0x1
#define WUE1_address                             0xFB8
#define WUE1_position                            0x1
#define WUE1_size                                0x1
#define WUE1_value_mask                          0x2
#define WUE1_clear_mask                          0xFD

#define W4E                                      0x1
#define W4E_address                              0xFB8
#define W4E_position                             0x1
#define W4E_size                                 0x1
#define W4E_value_mask                           0x2
#define W4E_clear_mask                           0xFD

#define BRG161                                   0x3
#define BRG161_address                           0xFB8
#define BRG161_position                          0x3
#define BRG161_size                              0x1
#define BRG161_value_mask                        0x8
#define BRG161_clear_mask                        0xF7

#define BAUDCON1_BRG16                           0x3
#define BAUDCON1_BRG16_address                   0xFB8
#define BAUDCON1_BRG16_position                  0x3
#define BAUDCON1_BRG16_size                      0x1
#define BAUDCON1_BRG16_value_mask                0x8
#define BAUDCON1_BRG16_clear_mask                0xF7

#define BAUDCON1_CKTXP                           0x4
#define BAUDCON1_CKTXP_address                   0xFB8
#define BAUDCON1_CKTXP_position                  0x4
#define BAUDCON1_CKTXP_size                      0x1
#define BAUDCON1_CKTXP_value_mask                0x10
#define BAUDCON1_CKTXP_clear_mask                0xEF

#define SCKP1                                    0x4
#define SCKP1_address                            0xFB8
#define SCKP1_position                           0x4
#define SCKP1_size                               0x1
#define SCKP1_value_mask                         0x10
#define SCKP1_clear_mask                         0xEF

#define TXCKP                                    0x4
#define TXCKP_address                            0xFB8
#define TXCKP_position                           0x4
#define TXCKP_size                               0x1
#define TXCKP_value_mask                         0x10
#define TXCKP_clear_mask                         0xEF

#define BAUDCON1_SCKP                            0x4
#define BAUDCON1_SCKP_address                    0xFB8
#define BAUDCON1_SCKP_position                   0x4
#define BAUDCON1_SCKP_size                       0x1
#define BAUDCON1_SCKP_value_mask                 0x10
#define BAUDCON1_SCKP_clear_mask                 0xEF

#define TXCKP1                                   0x4
#define TXCKP1_address                           0xFB8
#define TXCKP1_position                          0x4
#define TXCKP1_size                              0x1
#define TXCKP1_value_mask                        0x10
#define TXCKP1_clear_mask                        0xEF

#define DTRXP1                                   0x5
#define DTRXP1_address                           0xFB8
#define DTRXP1_position                          0x5
#define DTRXP1_size                              0x1
#define DTRXP1_value_mask                        0x20
#define DTRXP1_clear_mask                        0xDF

#define RXDTP1                                   0x5
#define RXDTP1_address                           0xFB8
#define RXDTP1_position                          0x5
#define RXDTP1_size                              0x1
#define RXDTP1_value_mask                        0x20
#define RXDTP1_clear_mask                        0xDF

#define RXCKP                                    0x5
#define RXCKP_address                            0xFB8
#define RXCKP_position                           0x5
#define RXCKP_size                               0x1
#define RXCKP_value_mask                         0x20
#define RXCKP_clear_mask                         0xDF

#define BAUDCON1_DTRXP                           0x5
#define BAUDCON1_DTRXP_address                   0xFB8
#define BAUDCON1_DTRXP_position                  0x5
#define BAUDCON1_DTRXP_size                      0x1
#define BAUDCON1_DTRXP_value_mask                0x20
#define BAUDCON1_DTRXP_clear_mask                0xDF

#define RXDTP                                    0x5
#define RXDTP_address                            0xFB8
#define RXDTP_position                           0x5
#define RXDTP_size                               0x1
#define RXDTP_value_mask                         0x20
#define RXDTP_clear_mask                         0xDF

#define RCMT1                                    0x6
#define RCMT1_address                            0xFB8
#define RCMT1_position                           0x6
#define RCMT1_size                               0x1
#define RCMT1_value_mask                         0x40
#define RCMT1_clear_mask                         0xBF

#define RCIDL1                                   0x6
#define RCIDL1_address                           0xFB8
#define RCIDL1_position                          0x6
#define RCIDL1_size                              0x1
#define RCIDL1_value_mask                        0x40
#define RCIDL1_clear_mask                        0xBF

#define BAUDCON1_RCIDL                           0x6
#define BAUDCON1_RCIDL_address                   0xFB8
#define BAUDCON1_RCIDL_position                  0x6
#define BAUDCON1_RCIDL_size                      0x1
#define BAUDCON1_RCIDL_value_mask                0x40
#define BAUDCON1_RCIDL_clear_mask                0xBF

#define RCMT                                     0x6
#define RCMT_address                             0xFB8
#define RCMT_position                            0x6
#define RCMT_size                                0x1
#define RCMT_value_mask                          0x40
#define RCMT_clear_mask                          0xBF

#define ABDOVF1                                  0x7
#define ABDOVF1_address                          0xFB8
#define ABDOVF1_position                         0x7
#define ABDOVF1_size                             0x1
#define ABDOVF1_value_mask                       0x80
#define ABDOVF1_clear_mask                       0x7F

#define BAUDCON1_ABDOVF                          0x7
#define BAUDCON1_ABDOVF_address                  0xFB8
#define BAUDCON1_ABDOVF_position                 0x7
#define BAUDCON1_ABDOVF_size                     0x1
#define BAUDCON1_ABDOVF_value_mask               0x80
#define BAUDCON1_ABDOVF_clear_mask               0x7F


/*-----------------------------------------------------#
| PSTR1CON                                       0xFB9 |
#------------------------------------------------------#
| - | - | - | STR1SYNC | STR1D | STR1C | STR1B | STR1A |
#------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3     | 2     | 1     | 0     |
#-----------------------------------------------------*/

#define PSTR1CON                                 0x0
#define PSTR1CON_address                         0xFB9
#define PSTR1CON_position                        0x0
#define PSTR1CON_size                            0x8
#define PSTR1CON_value_mask                      0xFF
#define PSTR1CON_clear_mask                      0x0

#define STR1A                                    0x0
#define STR1A_address                            0xFB9
#define STR1A_position                           0x0
#define STR1A_size                               0x1
#define STR1A_value_mask                         0x1
#define STR1A_clear_mask                         0xFE

#define STRA                                     0x0
#define STRA_address                             0xFB9
#define STRA_position                            0x0
#define STRA_size                                0x1
#define STRA_value_mask                          0x1
#define STRA_clear_mask                          0xFE

#define STR1B                                    0x1
#define STR1B_address                            0xFB9
#define STR1B_position                           0x1
#define STR1B_size                               0x1
#define STR1B_value_mask                         0x2
#define STR1B_clear_mask                         0xFD

#define STRB                                     0x1
#define STRB_address                             0xFB9
#define STRB_position                            0x1
#define STRB_size                                0x1
#define STRB_value_mask                          0x2
#define STRB_clear_mask                          0xFD

#define STR1C                                    0x2
#define STR1C_address                            0xFB9
#define STR1C_position                           0x2
#define STR1C_size                               0x1
#define STR1C_value_mask                         0x4
#define STR1C_clear_mask                         0xFB

#define STRC                                     0x2
#define STRC_address                             0xFB9
#define STRC_position                            0x2
#define STRC_size                                0x1
#define STRC_value_mask                          0x4
#define STRC_clear_mask                          0xFB

#define STR1D                                    0x3
#define STR1D_address                            0xFB9
#define STR1D_position                           0x3
#define STR1D_size                               0x1
#define STR1D_value_mask                         0x8
#define STR1D_clear_mask                         0xF7

#define STRD                                     0x3
#define STRD_address                             0xFB9
#define STRD_position                            0x3
#define STRD_size                                0x1
#define STRD_value_mask                          0x8
#define STRD_clear_mask                          0xF7

#define STR1SYNC                                 0x4
#define STR1SYNC_address                         0xFB9
#define STR1SYNC_position                        0x4
#define STR1SYNC_size                            0x1
#define STR1SYNC_value_mask                      0x10
#define STR1SYNC_clear_mask                      0xEF

#define STRSYNC                                  0x4
#define STRSYNC_address                          0xFB9
#define STRSYNC_position                         0x4
#define STRSYNC_size                             0x1
#define STRSYNC_value_mask                       0x10
#define STRSYNC_clear_mask                       0xEF


/*---------------------------------------------------------------------------#
| T2CON                                                                0xFBA |
#----------------------------------------------------------------------------#
| - | T2OUTPS3 | T2OUTPS2 | T2OUTPS1 | T2OUTPS0 | TMR2ON | T2CKPS1 | T2CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T2CON                                    0x0
#define T2CON_address                            0xFBA
#define T2CON_position                           0x0
#define T2CON_size                               0x8
#define T2CON_value_mask                         0xFF
#define T2CON_clear_mask                         0x0

#define T2CKPS0                                  0x0
#define T2CKPS0_address                          0xFBA
#define T2CKPS0_position                         0x0
#define T2CKPS0_size                             0x1
#define T2CKPS0_value_mask                       0x1
#define T2CKPS0_clear_mask                       0xFE

#define T2CKPS                                   0x0
#define T2CKPS_address                           0xFBA
#define T2CKPS_position                          0x0
#define T2CKPS_size                              0x2
#define T2CKPS_value_mask                        0x3
#define T2CKPS_clear_mask                        0xFC

#define T2CKPS1                                  0x1
#define T2CKPS1_address                          0xFBA
#define T2CKPS1_position                         0x1
#define T2CKPS1_size                             0x1
#define T2CKPS1_value_mask                       0x2
#define T2CKPS1_clear_mask                       0xFD

#define TMR2ON                                   0x2
#define TMR2ON_address                           0xFBA
#define TMR2ON_position                          0x2
#define TMR2ON_size                              0x1
#define TMR2ON_value_mask                        0x4
#define TMR2ON_clear_mask                        0xFB

#define T2OUTPS0                                 0x3
#define T2OUTPS0_address                         0xFBA
#define T2OUTPS0_position                        0x3
#define T2OUTPS0_size                            0x1
#define T2OUTPS0_value_mask                      0x8
#define T2OUTPS0_clear_mask                      0xF7

#define T2OUTPS                                  0x3
#define T2OUTPS_address                          0xFBA
#define T2OUTPS_position                         0x3
#define T2OUTPS_size                             0x4
#define T2OUTPS_value_mask                       0x78
#define T2OUTPS_clear_mask                       0x87

#define T2OUTPS1                                 0x4
#define T2OUTPS1_address                         0xFBA
#define T2OUTPS1_position                        0x4
#define T2OUTPS1_size                            0x1
#define T2OUTPS1_value_mask                      0x10
#define T2OUTPS1_clear_mask                      0xEF

#define T2OUTPS2                                 0x5
#define T2OUTPS2_address                         0xFBA
#define T2OUTPS2_position                        0x5
#define T2OUTPS2_size                            0x1
#define T2OUTPS2_value_mask                      0x20
#define T2OUTPS2_clear_mask                      0xDF

#define T2OUTPS3                                 0x6
#define T2OUTPS3_address                         0xFBA
#define T2OUTPS3_position                        0x6
#define T2OUTPS3_size                            0x1
#define T2OUTPS3_value_mask                      0x40
#define T2OUTPS3_clear_mask                      0xBF


/*------------------------------#
| PR2                     0xFBB |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR2                                      0x0
#define PR2_address                              0xFBB
#define PR2_position                             0x0
#define PR2_size                                 0x8
#define PR2_value_mask                           0xFF
#define PR2_clear_mask                           0x0


/*------------------------------#
| TMR2                    0xFBC |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR2                                     0x0
#define TMR2_address                             0xFBC
#define TMR2_position                            0x0
#define TMR2_size                                0x8
#define TMR2_value_mask                          0xFF
#define TMR2_clear_mask                          0x0


/*----------------------------------------------------------------#
| CCP1CON                                                   0xFBD |
#-----------------------------------------------------------------#
| P1M1 | P1M0 | DC1B1 | DC1B0 | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define CCP1CON                                  0x0
#define CCP1CON_address                          0xFBD
#define CCP1CON_position                         0x0
#define CCP1CON_size                             0x8
#define CCP1CON_value_mask                       0xFF
#define CCP1CON_clear_mask                       0x0

#define CCP1M0                                   0x0
#define CCP1M0_address                           0xFBD
#define CCP1M0_position                          0x0
#define CCP1M0_size                              0x1
#define CCP1M0_value_mask                        0x1
#define CCP1M0_clear_mask                        0xFE

#define CCP1M                                    0x0
#define CCP1M_address                            0xFBD
#define CCP1M_position                           0x0
#define CCP1M_size                               0x4
#define CCP1M_value_mask                         0xF
#define CCP1M_clear_mask                         0xF0

#define CCP1M1                                   0x1
#define CCP1M1_address                           0xFBD
#define CCP1M1_position                          0x1
#define CCP1M1_size                              0x1
#define CCP1M1_value_mask                        0x2
#define CCP1M1_clear_mask                        0xFD

#define CCP1M2                                   0x2
#define CCP1M2_address                           0xFBD
#define CCP1M2_position                          0x2
#define CCP1M2_size                              0x1
#define CCP1M2_value_mask                        0x4
#define CCP1M2_clear_mask                        0xFB

#define CCP1M3                                   0x3
#define CCP1M3_address                           0xFBD
#define CCP1M3_position                          0x3
#define CCP1M3_size                              0x1
#define CCP1M3_value_mask                        0x8
#define CCP1M3_clear_mask                        0xF7

#define DC1B                                     0x4
#define DC1B_address                             0xFBD
#define DC1B_position                            0x4
#define DC1B_size                                0x2
#define DC1B_value_mask                          0x30
#define DC1B_clear_mask                          0xCF

#define DC1B0                                    0x4
#define DC1B0_address                            0xFBD
#define DC1B0_position                           0x4
#define DC1B0_size                               0x1
#define DC1B0_value_mask                         0x10
#define DC1B0_clear_mask                         0xEF

#define DC1B1                                    0x5
#define DC1B1_address                            0xFBD
#define DC1B1_position                           0x5
#define DC1B1_size                               0x1
#define DC1B1_value_mask                         0x20
#define DC1B1_clear_mask                         0xDF

#define P1M                                      0x6
#define P1M_address                              0xFBD
#define P1M_position                             0x6
#define P1M_size                                 0x2
#define P1M_value_mask                           0xC0
#define P1M_clear_mask                           0x3F

#define P1M0                                     0x6
#define P1M0_address                             0xFBD
#define P1M0_position                            0x6
#define P1M0_size                                0x1
#define P1M0_value_mask                          0x40
#define P1M0_clear_mask                          0xBF

#define P1M1                                     0x7
#define P1M1_address                             0xFBD
#define P1M1_position                            0x7
#define P1M1_size                                0x1
#define P1M1_value_mask                          0x80
#define P1M1_clear_mask                          0x7F


/*------------------------------#
| CCPR1L                  0xFBE |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR1L                                   0x0
#define CCPR1L_address                           0xFBE
#define CCPR1L_position                          0x0
#define CCPR1L_size                              0x8
#define CCPR1L_value_mask                        0xFF
#define CCPR1L_clear_mask                        0x0


/*------------------------------#
| CCPR1H                  0xFBF |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR1H                                   0x0
#define CCPR1H_address                           0xFBF
#define CCPR1H_position                          0x0
#define CCPR1H_size                              0x8
#define CCPR1H_value_mask                        0xFF
#define CCPR1H_clear_mask                        0x0


/*---------------------------------------------------------#
| ADCON2                                             0xFC0 |
#----------------------------------------------------------#
| ADFM | - | ACQT2 | ACQT1 | ACQT0 | ADCS2 | ADCS1 | ADCS0 |
#----------------------------------------------------------#
| 7    | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#---------------------------------------------------------*/

#define ADCON2                                   0x0
#define ADCON2_address                           0xFC0
#define ADCON2_position                          0x0
#define ADCON2_size                              0x8
#define ADCON2_value_mask                        0xFF
#define ADCON2_clear_mask                        0x0

#define ADCS0                                    0x0
#define ADCS0_address                            0xFC0
#define ADCS0_position                           0x0
#define ADCS0_size                               0x1
#define ADCS0_value_mask                         0x1
#define ADCS0_clear_mask                         0xFE

#define ADCS                                     0x0
#define ADCS_address                             0xFC0
#define ADCS_position                            0x0
#define ADCS_size                                0x3
#define ADCS_value_mask                          0x7
#define ADCS_clear_mask                          0xF8

#define ADCS1                                    0x1
#define ADCS1_address                            0xFC0
#define ADCS1_position                           0x1
#define ADCS1_size                               0x1
#define ADCS1_value_mask                         0x2
#define ADCS1_clear_mask                         0xFD

#define ADCS2                                    0x2
#define ADCS2_address                            0xFC0
#define ADCS2_position                           0x2
#define ADCS2_size                               0x1
#define ADCS2_value_mask                         0x4
#define ADCS2_clear_mask                         0xFB

#define ACQT0                                    0x3
#define ACQT0_address                            0xFC0
#define ACQT0_position                           0x3
#define ACQT0_size                               0x1
#define ACQT0_value_mask                         0x8
#define ACQT0_clear_mask                         0xF7

#define ACQT                                     0x3
#define ACQT_address                             0xFC0
#define ACQT_position                            0x3
#define ACQT_size                                0x3
#define ACQT_value_mask                          0x38
#define ACQT_clear_mask                          0xC7

#define ACQT1                                    0x4
#define ACQT1_address                            0xFC0
#define ACQT1_position                           0x4
#define ACQT1_size                               0x1
#define ACQT1_value_mask                         0x10
#define ACQT1_clear_mask                         0xEF

#define ACQT2                                    0x5
#define ACQT2_address                            0xFC0
#define ACQT2_position                           0x5
#define ACQT2_size                               0x1
#define ACQT2_value_mask                         0x20
#define ACQT2_clear_mask                         0xDF

#define ADFM                                     0x7
#define ADFM_address                             0xFC0
#define ADFM_position                            0x7
#define ADFM_size                                0x1
#define ADFM_value_mask                          0x80
#define ADFM_clear_mask                          0x7F


/*-------------------------------------------------------#
| ADCON1                                           0xFC1 |
#--------------------------------------------------------#
| TRIGSEL | - | - | - | CHSN3 | PVCFG0 | NVCFG1 | NVCFG0 |
#--------------------------------------------------------#
| 7       | 6 | 5 | 4 | 3     | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define ADCON1                                   0x0
#define ADCON1_address                           0xFC1
#define ADCON1_position                          0x0
#define ADCON1_size                              0x8
#define ADCON1_value_mask                        0xFF
#define ADCON1_clear_mask                        0x0

#define NVCFG                                    0x0
#define NVCFG_address                            0xFC1
#define NVCFG_position                           0x0
#define NVCFG_size                               0x2
#define NVCFG_value_mask                         0x3
#define NVCFG_clear_mask                         0xFC

#define NVCFG0                                   0x0
#define NVCFG0_address                           0xFC1
#define NVCFG0_position                          0x0
#define NVCFG0_size                              0x1
#define NVCFG0_value_mask                        0x1
#define NVCFG0_clear_mask                        0xFE

#define NVCFG1                                   0x1
#define NVCFG1_address                           0xFC1
#define NVCFG1_position                          0x1
#define NVCFG1_size                              0x1
#define NVCFG1_value_mask                        0x2
#define NVCFG1_clear_mask                        0xFD

#define PVCFG                                    0x2
#define PVCFG_address                            0xFC1
#define PVCFG_position                           0x2
#define PVCFG_size                               0x2
#define PVCFG_value_mask                         0xC
#define PVCFG_clear_mask                         0xF3

#define PVCFG0                                   0x2
#define PVCFG0_address                           0xFC1
#define PVCFG0_position                          0x2
#define PVCFG0_size                              0x1
#define PVCFG0_value_mask                        0x4
#define PVCFG0_clear_mask                        0xFB

#define CHSN3                                    0x3
#define CHSN3_address                            0xFC1
#define CHSN3_position                           0x3
#define CHSN3_size                               0x1
#define CHSN3_value_mask                         0x8
#define CHSN3_clear_mask                         0xF7

#define PVCFG1                                   0x3
#define PVCFG1_address                           0xFC1
#define PVCFG1_position                          0x3
#define PVCFG1_size                              0x1
#define PVCFG1_value_mask                        0x8
#define PVCFG1_clear_mask                        0xF7

#define TRIGSEL                                  0x7
#define TRIGSEL_address                          0xFC1
#define TRIGSEL_position                         0x7
#define TRIGSEL_size                             0x1
#define TRIGSEL_value_mask                       0x80
#define TRIGSEL_clear_mask                       0x7F


/*----------------------------------------------------#
| ADCON0                                        0xFC2 |
#-----------------------------------------------------#
| - | CHS4 | CHS3 | CHS2 | CHS1 | CHS0 | nDONE | ADON |
#-----------------------------------------------------#
| 7 | 6    | 5    | 4    | 3    | 2    | 1     | 0    |
#----------------------------------------------------*/

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

#define GO_NOT_DONE                              0x1
#define GO_NOT_DONE_address                      0xFC2
#define GO_NOT_DONE_position                     0x1
#define GO_NOT_DONE_size                         0x1
#define GO_NOT_DONE_value_mask                   0x2
#define GO_NOT_DONE_clear_mask                   0xFD

#define GO                                       0x1
#define GO_address                               0xFC2
#define GO_position                              0x1
#define GO_size                                  0x1
#define GO_value_mask                            0x2
#define GO_clear_mask                            0xFD

#define CHS                                      0x2
#define CHS_address                              0xFC2
#define CHS_position                             0x2
#define CHS_size                                 0x5
#define CHS_value_mask                           0x7C
#define CHS_clear_mask                           0x83

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

#define CHS4                                     0x6
#define CHS4_address                             0xFC2
#define CHS4_position                            0x6
#define CHS4_size                                0x1
#define CHS4_value_mask                          0x40
#define CHS4_clear_mask                          0xBF


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

#define ADMSK1                                   0x1
#define ADMSK1_address                           0xFC5
#define ADMSK1_position                          0x1
#define ADMSK1_size                              0x1
#define ADMSK1_value_mask                        0x2
#define ADMSK1_clear_mask                        0xFD

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

#define ADMSK2                                   0x2
#define ADMSK2_address                           0xFC5
#define ADMSK2_position                          0x2
#define ADMSK2_size                              0x1
#define ADMSK2_value_mask                        0x4
#define ADMSK2_clear_mask                        0xFB

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

#define ADMSK3                                   0x3
#define ADMSK3_address                           0xFC5
#define ADMSK3_position                          0x3
#define ADMSK3_size                              0x1
#define ADMSK3_value_mask                        0x8
#define ADMSK3_clear_mask                        0xF7

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

#define ADMSK4                                   0x4
#define ADMSK4_address                           0xFC5
#define ADMSK4_position                          0x4
#define ADMSK4_size                              0x1
#define ADMSK4_value_mask                        0x10
#define ADMSK4_clear_mask                        0xEF

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

#define ADMSK5                                   0x5
#define ADMSK5_address                           0xFC5
#define ADMSK5_position                          0x5
#define ADMSK5_size                              0x1
#define ADMSK5_value_mask                        0x20
#define ADMSK5_clear_mask                        0xDF

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
| SSP1STAT_SMP | SSP1STAT_CKE | SSP1STAT_D | STOP | SSP1STAT_S | SSP1STAT_R_NOT_W | UA1 | BF1 |
#---------------------------------------------------------------------------------------------#
| 7            | 6            | 5          | 4    | 3          | 2                | 1   | 0   |
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

#define UA1                                      0x1
#define UA1_address                              0xFC7
#define UA1_position                             0x1
#define UA1_size                                 0x1
#define UA1_value_mask                           0x2
#define UA1_clear_mask                           0xFD

#define SSP1STAT_UA                              0x1
#define SSP1STAT_UA_address                      0xFC7
#define SSP1STAT_UA_position                     0x1
#define SSP1STAT_UA_size                         0x1
#define SSP1STAT_UA_value_mask                   0x2
#define SSP1STAT_UA_clear_mask                   0xFD

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

#define SSP1STAT_W                               0x2
#define SSP1STAT_W_address                       0xFC7
#define SSP1STAT_W_position                      0x2
#define SSP1STAT_W_size                          0x1
#define SSP1STAT_W_value_mask                    0x4
#define SSP1STAT_W_clear_mask                    0xFB

#define I2C_READ                                 0x2
#define I2C_READ_address                         0xFC7
#define I2C_READ_position                        0x2
#define I2C_READ_size                            0x1
#define I2C_READ_value_mask                      0x4
#define I2C_READ_clear_mask                      0xFB

#define SSP1STAT_R                               0x2
#define SSP1STAT_R_address                       0xFC7
#define SSP1STAT_R_position                      0x2
#define SSP1STAT_R_size                          0x1
#define SSP1STAT_R_value_mask                    0x4
#define SSP1STAT_R_clear_mask                    0xFB

#define SSP1STAT_nW                              0x2
#define SSP1STAT_nW_address                      0xFC7
#define SSP1STAT_nW_position                     0x2
#define SSP1STAT_nW_size                         0x1
#define SSP1STAT_nW_value_mask                   0x4
#define SSP1STAT_nW_clear_mask                   0xFB

#define RW                                       0x2
#define RW_address                               0xFC7
#define RW_position                              0x2
#define RW_size                                  0x1
#define RW_value_mask                            0x4
#define RW_clear_mask                            0xFB

#define SSP1STAT_NOT_WRITE                       0x2
#define SSP1STAT_NOT_WRITE_address               0xFC7
#define SSP1STAT_NOT_WRITE_position              0x2
#define SSP1STAT_NOT_WRITE_size                  0x1
#define SSP1STAT_NOT_WRITE_value_mask            0x4
#define SSP1STAT_NOT_WRITE_clear_mask            0xFB

#define SSP1STAT_nWRITE                          0x2
#define SSP1STAT_nWRITE_address                  0xFC7
#define SSP1STAT_nWRITE_position                 0x2
#define SSP1STAT_nWRITE_size                     0x1
#define SSP1STAT_nWRITE_value_mask               0x4
#define SSP1STAT_nWRITE_clear_mask               0xFB

#define SSP1STAT_R_W                             0x2
#define SSP1STAT_R_W_address                     0xFC7
#define SSP1STAT_R_W_position                    0x2
#define SSP1STAT_R_W_size                        0x1
#define SSP1STAT_R_W_value_mask                  0x4
#define SSP1STAT_R_W_clear_mask                  0xFB

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

#define SSP1STAT_D                               0x5
#define SSP1STAT_D_address                       0xFC7
#define SSP1STAT_D_position                      0x5
#define SSP1STAT_D_size                          0x1
#define SSP1STAT_D_value_mask                    0x20
#define SSP1STAT_D_clear_mask                    0xDF

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

#define SSP1STAT_D_A                             0x5
#define SSP1STAT_D_A_address                     0xFC7
#define SSP1STAT_D_A_position                    0x5
#define SSP1STAT_D_A_size                        0x1
#define SSP1STAT_D_A_value_mask                  0x20
#define SSP1STAT_D_A_clear_mask                  0xDF

#define SSP1STAT_D_nA                            0x5
#define SSP1STAT_D_nA_address                    0xFC7
#define SSP1STAT_D_nA_position                   0x5
#define SSP1STAT_D_nA_size                       0x1
#define SSP1STAT_D_nA_value_mask                 0x20
#define SSP1STAT_D_nA_clear_mask                 0xDF

#define SSP1STAT_NOT_ADDRESS                     0x5
#define SSP1STAT_NOT_ADDRESS_address             0xFC7
#define SSP1STAT_NOT_ADDRESS_position            0x5
#define SSP1STAT_NOT_ADDRESS_size                0x1
#define SSP1STAT_NOT_ADDRESS_value_mask          0x20
#define SSP1STAT_NOT_ADDRESS_clear_mask          0xDF

#define SSP1STAT_nA                              0x5
#define SSP1STAT_nA_address                      0xFC7
#define SSP1STAT_nA_position                     0x5
#define SSP1STAT_nA_size                         0x1
#define SSP1STAT_nA_value_mask                   0x20
#define SSP1STAT_nA_clear_mask                   0xDF

#define SSP1STAT_A                               0x5
#define SSP1STAT_A_address                       0xFC7
#define SSP1STAT_A_position                      0x5
#define SSP1STAT_A_size                          0x1
#define SSP1STAT_A_value_mask                    0x20
#define SSP1STAT_A_clear_mask                    0xDF

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

#define SSP1STAT_nADDRESS                        0x5
#define SSP1STAT_nADDRESS_address                0xFC7
#define SSP1STAT_nADDRESS_position               0x5
#define SSP1STAT_nADDRESS_size                   0x1
#define SSP1STAT_nADDRESS_value_mask             0x20
#define SSP1STAT_nADDRESS_clear_mask             0xDF

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


/*--------------------------------------------------------------------------------------------------------#
| SSP1ADD                                                                                           0xFC8 |
#---------------------------------------------------------------------------------------------------------#
| SSP1ADD_MSK7 | MSK61 | MSK51 | SSP1ADD_MSK4 | SSP1ADD_MSK3 | SSP1ADD_MSK2 | SSP1ADD_MSK1 | SSP1ADD_MSK0 |
#---------------------------------------------------------------------------------------------------------#
| 7            | 6     | 5     | 4            | 3            | 2            | 1            | 0            |
#--------------------------------------------------------------------------------------------------------*/

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

#define SSP1ADD                                  0x0
#define SSP1ADD_address                          0xFC8
#define SSP1ADD_position                         0x0
#define SSP1ADD_size                             0x8
#define SSP1ADD_value_mask                       0xFF
#define SSP1ADD_clear_mask                       0x0

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

#define MSK61                                    0x6
#define MSK61_address                            0xFC8
#define MSK61_position                           0x6
#define MSK61_size                               0x1
#define MSK61_value_mask                         0x40
#define MSK61_clear_mask                         0xBF

#define SSP1ADD_MSK6                             0x6
#define SSP1ADD_MSK6_address                     0xFC8
#define SSP1ADD_MSK6_position                    0x6
#define SSP1ADD_MSK6_size                        0x1
#define SSP1ADD_MSK6_value_mask                  0x40
#define SSP1ADD_MSK6_clear_mask                  0xBF

#define SSP1ADD_MSK7                             0x7
#define SSP1ADD_MSK7_address                     0xFC8
#define SSP1ADD_MSK7_position                    0x7
#define SSP1ADD_MSK7_size                        0x1
#define SSP1ADD_MSK7_value_mask                  0x80
#define SSP1ADD_MSK7_clear_mask                  0x7F

#define MSK71                                    0x7
#define MSK71_address                            0xFC8
#define MSK71_position                           0x7
#define MSK71_size                               0x1
#define MSK71_value_mask                         0x80
#define MSK71_clear_mask                         0x7F


/*------------------------------#
| SSP1BUF                 0xFC9 |
#-------------------------------#
| SSP1BUF_SSPBUF                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1BUF_SSPBUF                           0x0
#define SSP1BUF_SSPBUF_address                   0xFC9
#define SSP1BUF_SSPBUF_position                  0x0
#define SSP1BUF_SSPBUF_size                      0x8
#define SSP1BUF_SSPBUF_value_mask                0xFF
#define SSP1BUF_SSPBUF_clear_mask                0x0

#define SSP1BUF                                  0x0
#define SSP1BUF_address                          0xFC9
#define SSP1BUF_position                         0x0
#define SSP1BUF_size                             0x8
#define SSP1BUF_value_mask                       0xFF
#define SSP1BUF_clear_mask                       0x0


/*----------------------------------------------------------------------------------------------------------------------#
| SSP1MSK                                                                                                         0xFCA |
#-----------------------------------------------------------------------------------------------------------------------#
| SSP1MSK_MSK7 | SSP1MSK_MSK6 | SSP1MSK_MSK5 | SSP1MSK_MSK4 | SSP1MSK_MSK3 | SSP1MSK_MSK2 | SSP1MSK_MSK1 | SSP1MSK_MSK0 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define SSP1MSK                                  0x0
#define SSP1MSK_address                          0xFCA
#define SSP1MSK_position                         0x0
#define SSP1MSK_size                             0x8
#define SSP1MSK_value_mask                       0xFF
#define SSP1MSK_clear_mask                       0x0

#define SSP1MSK_MSK0                             0x0
#define SSP1MSK_MSK0_address                     0xFCA
#define SSP1MSK_MSK0_position                    0x0
#define SSP1MSK_MSK0_size                        0x1
#define SSP1MSK_MSK0_value_mask                  0x1
#define SSP1MSK_MSK0_clear_mask                  0xFE

#define SSP1MSK_MSK1                             0x1
#define SSP1MSK_MSK1_address                     0xFCA
#define SSP1MSK_MSK1_position                    0x1
#define SSP1MSK_MSK1_size                        0x1
#define SSP1MSK_MSK1_value_mask                  0x2
#define SSP1MSK_MSK1_clear_mask                  0xFD

#define SSP1MSK_MSK2                             0x2
#define SSP1MSK_MSK2_address                     0xFCA
#define SSP1MSK_MSK2_position                    0x2
#define SSP1MSK_MSK2_size                        0x1
#define SSP1MSK_MSK2_value_mask                  0x4
#define SSP1MSK_MSK2_clear_mask                  0xFB

#define SSP1MSK_MSK3                             0x3
#define SSP1MSK_MSK3_address                     0xFCA
#define SSP1MSK_MSK3_position                    0x3
#define SSP1MSK_MSK3_size                        0x1
#define SSP1MSK_MSK3_value_mask                  0x8
#define SSP1MSK_MSK3_clear_mask                  0xF7

#define SSP1MSK_MSK4                             0x4
#define SSP1MSK_MSK4_address                     0xFCA
#define SSP1MSK_MSK4_position                    0x4
#define SSP1MSK_MSK4_size                        0x1
#define SSP1MSK_MSK4_value_mask                  0x10
#define SSP1MSK_MSK4_clear_mask                  0xEF

#define SSP1MSK_MSK5                             0x5
#define SSP1MSK_MSK5_address                     0xFCA
#define SSP1MSK_MSK5_position                    0x5
#define SSP1MSK_MSK5_size                        0x1
#define SSP1MSK_MSK5_value_mask                  0x20
#define SSP1MSK_MSK5_clear_mask                  0xDF

#define SSP1MSK_MSK6                             0x6
#define SSP1MSK_MSK6_address                     0xFCA
#define SSP1MSK_MSK6_position                    0x6
#define SSP1MSK_MSK6_size                        0x1
#define SSP1MSK_MSK6_value_mask                  0x40
#define SSP1MSK_MSK6_clear_mask                  0xBF

#define SSP1MSK_MSK7                             0x7
#define SSP1MSK_MSK7_address                     0xFCA
#define SSP1MSK_MSK7_position                    0x7
#define SSP1MSK_MSK7_size                        0x1
#define SSP1MSK_MSK7_value_mask                  0x80
#define SSP1MSK_MSK7_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------------------#
| SSP1CON3                                                                                                                    0xFCB |
#-----------------------------------------------------------------------------------------------------------------------------------#
| SSP1CON3_ACKTIM | SSP1CON3_PCIE | SSP1CON3_SCIE | SSP1CON3_BOEN | SSP1CON3_SDAHT | SSP1CON3_SBCDE | SSP1CON3_AHEN | SSP1CON3_DHEN |
#-----------------------------------------------------------------------------------------------------------------------------------#
| 7               | 6             | 5             | 4             | 3              | 2              | 1             | 0             |
#----------------------------------------------------------------------------------------------------------------------------------*/

#define SSP1CON3                                 0x0
#define SSP1CON3_address                         0xFCB
#define SSP1CON3_position                        0x0
#define SSP1CON3_size                            0x8
#define SSP1CON3_value_mask                      0xFF
#define SSP1CON3_clear_mask                      0x0

#define SSP1CON3_DHEN                            0x0
#define SSP1CON3_DHEN_address                    0xFCB
#define SSP1CON3_DHEN_position                   0x0
#define SSP1CON3_DHEN_size                       0x1
#define SSP1CON3_DHEN_value_mask                 0x1
#define SSP1CON3_DHEN_clear_mask                 0xFE

#define SSP1CON3_AHEN                            0x1
#define SSP1CON3_AHEN_address                    0xFCB
#define SSP1CON3_AHEN_position                   0x1
#define SSP1CON3_AHEN_size                       0x1
#define SSP1CON3_AHEN_value_mask                 0x2
#define SSP1CON3_AHEN_clear_mask                 0xFD

#define SSP1CON3_SBCDE                           0x2
#define SSP1CON3_SBCDE_address                   0xFCB
#define SSP1CON3_SBCDE_position                  0x2
#define SSP1CON3_SBCDE_size                      0x1
#define SSP1CON3_SBCDE_value_mask                0x4
#define SSP1CON3_SBCDE_clear_mask                0xFB

#define SSP1CON3_SDAHT                           0x3
#define SSP1CON3_SDAHT_address                   0xFCB
#define SSP1CON3_SDAHT_position                  0x3
#define SSP1CON3_SDAHT_size                      0x1
#define SSP1CON3_SDAHT_value_mask                0x8
#define SSP1CON3_SDAHT_clear_mask                0xF7

#define SSP1CON3_BOEN                            0x4
#define SSP1CON3_BOEN_address                    0xFCB
#define SSP1CON3_BOEN_position                   0x4
#define SSP1CON3_BOEN_size                       0x1
#define SSP1CON3_BOEN_value_mask                 0x10
#define SSP1CON3_BOEN_clear_mask                 0xEF

#define SSP1CON3_SCIE                            0x5
#define SSP1CON3_SCIE_address                    0xFCB
#define SSP1CON3_SCIE_position                   0x5
#define SSP1CON3_SCIE_size                       0x1
#define SSP1CON3_SCIE_value_mask                 0x20
#define SSP1CON3_SCIE_clear_mask                 0xDF

#define SSP1CON3_PCIE                            0x6
#define SSP1CON3_PCIE_address                    0xFCB
#define SSP1CON3_PCIE_position                   0x6
#define SSP1CON3_PCIE_size                       0x1
#define SSP1CON3_PCIE_value_mask                 0x40
#define SSP1CON3_PCIE_clear_mask                 0xBF

#define SSP1CON3_ACKTIM                          0x7
#define SSP1CON3_ACKTIM_address                  0xFCB
#define SSP1CON3_ACKTIM_position                 0x7
#define SSP1CON3_ACKTIM_size                     0x1
#define SSP1CON3_ACKTIM_value_mask               0x80
#define SSP1CON3_ACKTIM_clear_mask               0x7F


/*-----------------------------------------------------------------------------#
| T1GCON                                                                 0xFCC |
#------------------------------------------------------------------------------#
| TMR1GE | T1GPOL | T1GTM | T1GSPM | T1GGO_NOT_DONE | T1GVAL | T1GSS1 | T1GSS0 |
#------------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3              | 2      | 1      | 0      |
#-----------------------------------------------------------------------------*/

#define T1GCON                                   0x0
#define T1GCON_address                           0xFCC
#define T1GCON_position                          0x0
#define T1GCON_size                              0x8
#define T1GCON_value_mask                        0xFF
#define T1GCON_clear_mask                        0x0

#define T1GSS0                                   0x0
#define T1GSS0_address                           0xFCC
#define T1GSS0_position                          0x0
#define T1GSS0_size                              0x1
#define T1GSS0_value_mask                        0x1
#define T1GSS0_clear_mask                        0xFE

#define T1GSS                                    0x0
#define T1GSS_address                            0xFCC
#define T1GSS_position                           0x0
#define T1GSS_size                               0x2
#define T1GSS_value_mask                         0x3
#define T1GSS_clear_mask                         0xFC

#define T1GSS1                                   0x1
#define T1GSS1_address                           0xFCC
#define T1GSS1_position                          0x1
#define T1GSS1_size                              0x1
#define T1GSS1_value_mask                        0x2
#define T1GSS1_clear_mask                        0xFD

#define T1GVAL                                   0x2
#define T1GVAL_address                           0xFCC
#define T1GVAL_position                          0x2
#define T1GVAL_size                              0x1
#define T1GVAL_value_mask                        0x4
#define T1GVAL_clear_mask                        0xFB

#define T1GGO_NOT_DONE                           0x3
#define T1GGO_NOT_DONE_address                   0xFCC
#define T1GGO_NOT_DONE_position                  0x3
#define T1GGO_NOT_DONE_size                      0x1
#define T1GGO_NOT_DONE_value_mask                0x8
#define T1GGO_NOT_DONE_clear_mask                0xF7

#define T1GGO_nDONE                              0x3
#define T1GGO_nDONE_address                      0xFCC
#define T1GGO_nDONE_position                     0x3
#define T1GGO_nDONE_size                         0x1
#define T1GGO_nDONE_value_mask                   0x8
#define T1GGO_nDONE_clear_mask                   0xF7

#define T1G_DONE                                 0x3
#define T1G_DONE_address                         0xFCC
#define T1G_DONE_position                        0x3
#define T1G_DONE_size                            0x1
#define T1G_DONE_value_mask                      0x8
#define T1G_DONE_clear_mask                      0xF7

#define T1GGO                                    0x3
#define T1GGO_address                            0xFCC
#define T1GGO_position                           0x3
#define T1GGO_size                               0x1
#define T1GGO_value_mask                         0x8
#define T1GGO_clear_mask                         0xF7

#define T1GSPM                                   0x4
#define T1GSPM_address                           0xFCC
#define T1GSPM_position                          0x4
#define T1GSPM_size                              0x1
#define T1GSPM_value_mask                        0x10
#define T1GSPM_clear_mask                        0xEF

#define T1GTM                                    0x5
#define T1GTM_address                            0xFCC
#define T1GTM_position                           0x5
#define T1GTM_size                               0x1
#define T1GTM_value_mask                         0x20
#define T1GTM_clear_mask                         0xDF

#define T1GPOL                                   0x6
#define T1GPOL_address                           0xFCC
#define T1GPOL_position                          0x6
#define T1GPOL_size                              0x1
#define T1GPOL_value_mask                        0x40
#define T1GPOL_clear_mask                        0xBF

#define TMR1GE                                   0x7
#define TMR1GE_address                           0xFCC
#define TMR1GE_position                          0x7
#define TMR1GE_size                              0x1
#define TMR1GE_value_mask                        0x80
#define TMR1GE_clear_mask                        0x7F


/*-----------------------------------------------------------------------------#
| T1CON                                                                  0xFCD |
#------------------------------------------------------------------------------#
| TMR1CS1 | TMR1CS0 | T1CKPS1 | T1CKPS0 | T1OSCEN | NOT_T1SYNC | RD16 | TMR1ON |
#------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2          | 1    | 0      |
#-----------------------------------------------------------------------------*/

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

#define RD16                                     0x1
#define RD16_address                             0xFCD
#define RD16_position                            0x1
#define RD16_size                                0x1
#define RD16_value_mask                          0x2
#define RD16_clear_mask                          0xFD

#define T1RD16                                   0x1
#define T1RD16_address                           0xFCD
#define T1RD16_position                          0x1
#define T1RD16_size                              0x1
#define T1RD16_value_mask                        0x2
#define T1RD16_clear_mask                        0xFD

#define NOT_T1SYNC                               0x2
#define NOT_T1SYNC_address                       0xFCD
#define NOT_T1SYNC_position                      0x2
#define NOT_T1SYNC_size                          0x1
#define NOT_T1SYNC_value_mask                    0x4
#define NOT_T1SYNC_clear_mask                    0xFB

#define T1SYNC                                   0x2
#define T1SYNC_address                           0xFCD
#define T1SYNC_position                          0x2
#define T1SYNC_size                              0x1
#define T1SYNC_value_mask                        0x4
#define T1SYNC_clear_mask                        0xFB

#define nT1SYNC                                  0x2
#define nT1SYNC_address                          0xFCD
#define nT1SYNC_position                         0x2
#define nT1SYNC_size                             0x1
#define nT1SYNC_value_mask                       0x4
#define nT1SYNC_clear_mask                       0xFB

#define T1SOSCEN                                 0x3
#define T1SOSCEN_address                         0xFCD
#define T1SOSCEN_position                        0x3
#define T1SOSCEN_size                            0x1
#define T1SOSCEN_value_mask                      0x8
#define T1SOSCEN_clear_mask                      0xF7

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
| IPEN | SBOREN | - | nRI | TO | NOT_PD | POR | BOR |
#---------------------------------------------------#
| 7    | 6      | 5 | 4   | 3  | 2      | 1   | 0   |
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

#define NOT_TO                                   0x3
#define NOT_TO_address                           0xFD0
#define NOT_TO_position                          0x3
#define NOT_TO_size                              0x1
#define NOT_TO_value_mask                        0x8
#define NOT_TO_clear_mask                        0xF7

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

#define SBOREN                                   0x6
#define SBOREN_address                           0xFD0
#define SBOREN_position                          0x6
#define SBOREN_size                              0x1
#define SBOREN_value_mask                        0x40
#define SBOREN_clear_mask                        0xBF

#define IPEN                                     0x7
#define IPEN_address                             0xFD0
#define IPEN_position                            0x7
#define IPEN_size                                0x1
#define IPEN_value_mask                          0x80
#define IPEN_clear_mask                          0x7F


/*----------------------------------#
| WDTCON                      0xFD1 |
#-----------------------------------#
| - | - | - | - | - | - | - | SWDTE |
#-----------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0     |
#----------------------------------*/

#define WDTCON                                   0x0
#define WDTCON_address                           0xFD1
#define WDTCON_position                          0x0
#define WDTCON_size                              0x8
#define WDTCON_value_mask                        0xFF
#define WDTCON_clear_mask                        0x0

#define SWDTE                                    0x0
#define SWDTE_address                            0xFD1
#define SWDTE_position                           0x0
#define SWDTE_size                               0x1
#define SWDTE_value_mask                         0x1
#define SWDTE_clear_mask                         0xFE

#define SWDTEN                                   0x0
#define SWDTEN_address                           0xFD1
#define SWDTEN_position                          0x0
#define SWDTEN_size                              0x1
#define SWDTEN_value_mask                        0x1
#define SWDTEN_clear_mask                        0xFE


/*------------------------------------------------------------------#
| OSCCON2                                                     0xFD2 |
#-------------------------------------------------------------------#
| PLLRDY | SOSCRUN | - | MFIOSEL | SOSCGO | PRISD | MFIOFS | LFIOFS |
#-------------------------------------------------------------------#
| 7      | 6       | 5 | 4       | 3      | 2     | 1      | 0      |
#------------------------------------------------------------------*/

#define OSCCON2                                  0x0
#define OSCCON2_address                          0xFD2
#define OSCCON2_position                         0x0
#define OSCCON2_size                             0x8
#define OSCCON2_value_mask                       0xFF
#define OSCCON2_clear_mask                       0x0

#define LFIOFS                                   0x0
#define LFIOFS_address                           0xFD2
#define LFIOFS_position                          0x0
#define LFIOFS_size                              0x1
#define LFIOFS_value_mask                        0x1
#define LFIOFS_clear_mask                        0xFE

#define MFIOFS                                   0x1
#define MFIOFS_address                           0xFD2
#define MFIOFS_position                          0x1
#define MFIOFS_size                              0x1
#define MFIOFS_value_mask                        0x2
#define MFIOFS_clear_mask                        0xFD

#define PRISD                                    0x2
#define PRISD_address                            0xFD2
#define PRISD_position                           0x2
#define PRISD_size                               0x1
#define PRISD_value_mask                         0x4
#define PRISD_clear_mask                         0xFB

#define SOSCGO                                   0x3
#define SOSCGO_address                           0xFD2
#define SOSCGO_position                          0x3
#define SOSCGO_size                              0x1
#define SOSCGO_value_mask                        0x8
#define SOSCGO_clear_mask                        0xF7

#define MFIOSEL                                  0x4
#define MFIOSEL_address                          0xFD2
#define MFIOSEL_position                         0x4
#define MFIOSEL_size                             0x1
#define MFIOSEL_value_mask                       0x10
#define MFIOSEL_clear_mask                       0xEF

#define SOSCRUN                                  0x6
#define SOSCRUN_address                          0xFD2
#define SOSCRUN_position                         0x6
#define SOSCRUN_size                             0x1
#define SOSCRUN_value_mask                       0x40
#define SOSCRUN_clear_mask                       0xBF

#define PLLRDY                                   0x7
#define PLLRDY_address                           0xFD2
#define PLLRDY_position                          0x7
#define PLLRDY_size                              0x1
#define PLLRDY_value_mask                        0x80
#define PLLRDY_clear_mask                        0x7F


/*------------------------------------------------------------#
| OSCCON                                                0xFD3 |
#-------------------------------------------------------------#
| IDLEN | IRCF2 | IRCF1 | IRCF0 | OSTS | HFIOFS | SCS1 | SCS0 |
#-------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3    | 2      | 1    | 0    |
#------------------------------------------------------------*/

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

#define IOFS                                     0x2
#define IOFS_address                             0xFD3
#define IOFS_position                            0x2
#define IOFS_size                                0x1
#define IOFS_value_mask                          0x4
#define IOFS_clear_mask                          0xFB

#define HFIOFS                                   0x2
#define HFIOFS_address                           0xFD3
#define HFIOFS_position                          0x2
#define HFIOFS_size                              0x1
#define HFIOFS_value_mask                        0x4
#define HFIOFS_clear_mask                        0xFB

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


/*-----------------------------------------------------------#
| INTCON3                                              0xFF0 |
#------------------------------------------------------------#
| INT2IP | INT1P | - | INT2IE | INT1IE | - | INT2IF | INT1IF |
#------------------------------------------------------------#
| 7      | 6     | 5 | 4      | 3      | 2 | 1      | 0      |
#-----------------------------------------------------------*/

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


/*-----------------------------------------------------------#
| INTCON2                                              0xFF1 |
#------------------------------------------------------------#
| RBPU | INTEDG0 | INTEDG1 | INTEDG2 | - | TMR0IP | - | RBIP |
#------------------------------------------------------------#
| 7    | 6       | 5       | 4       | 3 | 2      | 1 | 0    |
#-----------------------------------------------------------*/

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

#define TMR0IP                                   0x2
#define TMR0IP_address                           0xFF1
#define TMR0IP_position                          0x2
#define TMR0IP_size                              0x1
#define TMR0IP_value_mask                        0x4
#define TMR0IP_clear_mask                        0xFB

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


/*---------------------------------#
| TBLPTRU                    0xFF8 |
#----------------------------------#
| - | - | ACSS | TBLPTRU               |
#----------------------------------#
| 7 | 6 | 5    | 4 | 3 | 2 | 1 | 0 |
#---------------------------------*/

#define TBLPTRU                                  0x0
#define TBLPTRU_address                          0xFF8
#define TBLPTRU_position                         0x0
#define TBLPTRU_size                             0x6
#define TBLPTRU_value_mask                       0x3F
#define TBLPTRU_clear_mask                       0xC0

#define ACSS                                     0x5
#define ACSS_address                             0xFF8
#define ACSS_position                            0x5
#define ACSS_size                                0x1
#define ACSS_value_mask                          0x20
#define ACSS_clear_mask                          0xDF


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


/*----------------------------------------------------------------------#
| STKPTR                                                          0xFFC |
#-----------------------------------------------------------------------#
| STKOVF | STKUNF | - | STKPTR4 | STKPTR3 | STKPTR2 | STKPTR1 | STKPTR0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5 | 4       | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------------*/

#define STKPTR0                                  0x0
#define STKPTR0_address                          0xFFC
#define STKPTR0_position                         0x0
#define STKPTR0_size                             0x1
#define STKPTR0_value_mask                       0x1
#define STKPTR0_clear_mask                       0xFE

#define STKPTR                                   0x0
#define STKPTR_address                           0xFFC
#define STKPTR_position                          0x0
#define STKPTR_size                              0x5
#define STKPTR_value_mask                        0x1F
#define STKPTR_clear_mask                        0xE0

#define SP0                                      0x0
#define SP0_address                              0xFFC
#define SP0_position                             0x0
#define SP0_size                                 0x1
#define SP0_value_mask                           0x1
#define SP0_clear_mask                           0xFE

#define STKPTR1                                  0x1
#define STKPTR1_address                          0xFFC
#define STKPTR1_position                         0x1
#define STKPTR1_size                             0x1
#define STKPTR1_value_mask                       0x2
#define STKPTR1_clear_mask                       0xFD

#define SP1                                      0x1
#define SP1_address                              0xFFC
#define SP1_position                             0x1
#define SP1_size                                 0x1
#define SP1_value_mask                           0x2
#define SP1_clear_mask                           0xFD

#define STKPTR2                                  0x2
#define STKPTR2_address                          0xFFC
#define STKPTR2_position                         0x2
#define STKPTR2_size                             0x1
#define STKPTR2_value_mask                       0x4
#define STKPTR2_clear_mask                       0xFB

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

#define STKPTR3                                  0x3
#define STKPTR3_address                          0xFFC
#define STKPTR3_position                         0x3
#define STKPTR3_size                             0x1
#define STKPTR3_value_mask                       0x8
#define STKPTR3_clear_mask                       0xF7

#define STKPTR4                                  0x4
#define STKPTR4_address                          0xFFC
#define STKPTR4_position                         0x4
#define STKPTR4_size                             0x1
#define STKPTR4_value_mask                       0x10
#define STKPTR4_clear_mask                       0xEF

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

#endif // _PIC18F46K22_H_
