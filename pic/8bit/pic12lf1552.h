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

#ifndef _PIC12LF1552_H_
#define _PIC12LF1552_H_


/*------------------------------#
| INDF0                     0x0 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define INDF0                                    0x0
#define INDF0_address                            0x000
#define INDF0_position                           0x0
#define INDF0_size                               0x8
#define INDF0_value_mask                         0xFF
#define INDF0_clear_mask                         0x0


/*------------------------------#
| INDF1                     0x1 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define INDF1                                    0x0
#define INDF1_address                            0x001
#define INDF1_position                           0x0
#define INDF1_size                               0x8
#define INDF1_value_mask                         0xFF
#define INDF1_clear_mask                         0x0


/*------------------------------#
| PCL                       0x2 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PCL                                      0x0
#define PCL_address                              0x002
#define PCL_position                             0x0
#define PCL_size                                 0x8
#define PCL_value_mask                           0xFF
#define PCL_clear_mask                           0x0


/*--------------------------------------#
| STATUS                            0x3 |
#---------------------------------------#
| - | - | - | nTO | nPD | ZERO | DC | C |
#---------------------------------------#
| 7 | 6 | 5 | 4   | 3   | 2    | 1  | 0 |
#--------------------------------------*/

#define STATUS                                   0x0
#define STATUS_address                           0x003
#define STATUS_position                          0x0
#define STATUS_size                              0x8
#define STATUS_value_mask                        0xFF
#define STATUS_clear_mask                        0x0

#define C                                        0x0
#define C_address                                0x003
#define C_position                               0x0
#define C_size                                   0x1
#define C_value_mask                             0x1
#define C_clear_mask                             0xFE

#define CARRY                                    0x0
#define CARRY_address                            0x003
#define CARRY_position                           0x0
#define CARRY_size                               0x1
#define CARRY_value_mask                         0x1
#define CARRY_clear_mask                         0xFE

#define DC                                       0x1
#define DC_address                               0x003
#define DC_position                              0x1
#define DC_size                                  0x1
#define DC_value_mask                            0x2
#define DC_clear_mask                            0xFD

#define ZERO                                     0x2
#define ZERO_address                             0x003
#define ZERO_position                            0x2
#define ZERO_size                                0x1
#define ZERO_value_mask                          0x4
#define ZERO_clear_mask                          0xFB

#define Z                                        0x2
#define Z_address                                0x003
#define Z_position                               0x2
#define Z_size                                   0x1
#define Z_value_mask                             0x4
#define Z_clear_mask                             0xFB

#define nPD                                      0x3
#define nPD_address                              0x003
#define nPD_position                             0x3
#define nPD_size                                 0x1
#define nPD_value_mask                           0x8
#define nPD_clear_mask                           0xF7

#define nTO                                      0x4
#define nTO_address                              0x003
#define nTO_position                             0x4
#define nTO_size                                 0x1
#define nTO_value_mask                           0x10
#define nTO_clear_mask                           0xEF


/*------------------------------#
| FSR0L                     0x4 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define FSR0L                                    0x0
#define FSR0L_address                            0x004
#define FSR0L_position                           0x0
#define FSR0L_size                               0x8
#define FSR0L_value_mask                         0xFF
#define FSR0L_clear_mask                         0x0


/*------------------------------#
| FSR0H                     0x5 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define FSR0H                                    0x0
#define FSR0H_address                            0x005
#define FSR0H_position                           0x0
#define FSR0H_size                               0x8
#define FSR0H_value_mask                         0xFF
#define FSR0H_clear_mask                         0x0


/*------------------------------#
| FSR1L                     0x6 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define FSR1L                                    0x0
#define FSR1L_address                            0x006
#define FSR1L_position                           0x0
#define FSR1L_size                               0x8
#define FSR1L_value_mask                         0xFF
#define FSR1L_clear_mask                         0x0


/*------------------------------#
| FSR1H                     0x7 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define FSR1H                                    0x0
#define FSR1H_address                            0x007
#define FSR1H_position                           0x0
#define FSR1H_size                               0x8
#define FSR1H_value_mask                         0xFF
#define FSR1H_clear_mask                         0x0


/*---------------------------------------------#
| BSR                                      0x8 |
#----------------------------------------------#
| - | - | - | BSR4 | BSR3 | BSR2 | BSR1 | BSR0 |
#----------------------------------------------#
| 7 | 6 | 5 | 4    | 3    | 2    | 1    | 0    |
#---------------------------------------------*/

#define BSR                                      0x0
#define BSR_address                              0x008
#define BSR_position                             0x0
#define BSR_size                                 0x5
#define BSR_value_mask                           0x1F
#define BSR_clear_mask                           0xE0

#define BSR0                                     0x0
#define BSR0_address                             0x008
#define BSR0_position                            0x0
#define BSR0_size                                0x1
#define BSR0_value_mask                          0x1
#define BSR0_clear_mask                          0xFE

#define BSR1                                     0x1
#define BSR1_address                             0x008
#define BSR1_position                            0x1
#define BSR1_size                                0x1
#define BSR1_value_mask                          0x2
#define BSR1_clear_mask                          0xFD

#define BSR2                                     0x2
#define BSR2_address                             0x008
#define BSR2_position                            0x2
#define BSR2_size                                0x1
#define BSR2_value_mask                          0x4
#define BSR2_clear_mask                          0xFB

#define BSR3                                     0x3
#define BSR3_address                             0x008
#define BSR3_position                            0x3
#define BSR3_size                                0x1
#define BSR3_value_mask                          0x8
#define BSR3_clear_mask                          0xF7

#define BSR4                                     0x4
#define BSR4_address                             0x008
#define BSR4_position                            0x4
#define BSR4_size                                0x1
#define BSR4_value_mask                          0x10
#define BSR4_clear_mask                          0xEF


/*------------------------------#
| WREG                      0x9 |
#-------------------------------#
| WREG0                         |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define WREG                                     0x0
#define WREG_address                             0x009
#define WREG_position                            0x0
#define WREG_size                                0x8
#define WREG_value_mask                          0xFF
#define WREG_clear_mask                          0x0

#define WREG0                                    0x0
#define WREG0_address                            0x009
#define WREG0_position                           0x0
#define WREG0_size                               0x8
#define WREG0_value_mask                         0xFF
#define WREG0_clear_mask                         0x0


/*------------------------------#
| PCLATH                    0xA |
#-------------------------------#
| - | PCLATH                    |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PCLATH                                   0x0
#define PCLATH_address                           0x00A
#define PCLATH_position                          0x0
#define PCLATH_size                              0x7
#define PCLATH_value_mask                        0x7F
#define PCLATH_clear_mask                        0x80


/*-------------------------------------------------------#
| INTCON                                             0xB |
#--------------------------------------------------------#
| GIE | PEIE | T0IE | INTE | IOCIE | T0IF | INTF | IOCIF |
#--------------------------------------------------------#
| 7   | 6    | 5    | 4    | 3     | 2    | 1    | 0     |
#-------------------------------------------------------*/

#define INTCON                                   0x0
#define INTCON_address                           0x00B
#define INTCON_position                          0x0
#define INTCON_size                              0x8
#define INTCON_value_mask                        0xFF
#define INTCON_clear_mask                        0x0

#define IOCIF                                    0x0
#define IOCIF_address                            0x00B
#define IOCIF_position                           0x0
#define IOCIF_size                               0x1
#define IOCIF_value_mask                         0x1
#define IOCIF_clear_mask                         0xFE

#define INTF                                     0x1
#define INTF_address                             0x00B
#define INTF_position                            0x1
#define INTF_size                                0x1
#define INTF_value_mask                          0x2
#define INTF_clear_mask                          0xFD

#define T0IF                                     0x2
#define T0IF_address                             0x00B
#define T0IF_position                            0x2
#define T0IF_size                                0x1
#define T0IF_value_mask                          0x4
#define T0IF_clear_mask                          0xFB

#define TMR0IF                                   0x2
#define TMR0IF_address                           0x00B
#define TMR0IF_position                          0x2
#define TMR0IF_size                              0x1
#define TMR0IF_value_mask                        0x4
#define TMR0IF_clear_mask                        0xFB

#define IOCIE                                    0x3
#define IOCIE_address                            0x00B
#define IOCIE_position                           0x3
#define IOCIE_size                               0x1
#define IOCIE_value_mask                         0x8
#define IOCIE_clear_mask                         0xF7

#define INTE                                     0x4
#define INTE_address                             0x00B
#define INTE_position                            0x4
#define INTE_size                                0x1
#define INTE_value_mask                          0x10
#define INTE_clear_mask                          0xEF

#define T0IE                                     0x5
#define T0IE_address                             0x00B
#define T0IE_position                            0x5
#define T0IE_size                                0x1
#define T0IE_value_mask                          0x20
#define T0IE_clear_mask                          0xDF

#define TMR0IE                                   0x5
#define TMR0IE_address                           0x00B
#define TMR0IE_position                          0x5
#define TMR0IE_size                              0x1
#define TMR0IE_value_mask                        0x20
#define TMR0IE_clear_mask                        0xDF

#define PEIE                                     0x6
#define PEIE_address                             0x00B
#define PEIE_position                            0x6
#define PEIE_size                                0x1
#define PEIE_value_mask                          0x40
#define PEIE_clear_mask                          0xBF

#define GIE                                      0x7
#define GIE_address                              0x00B
#define GIE_position                             0x7
#define GIE_size                                 0x1
#define GIE_value_mask                           0x80
#define GIE_clear_mask                           0x7F


/*------------------------------------------#
| PORTA                                 0xC |
#-------------------------------------------#
| - | - | RA5 | RA4 | RA3 | RA2 | RA1 | RA0 |
#-------------------------------------------#
| 7 | 6 | 5   | 4   | 3   | 2   | 1   | 0   |
#------------------------------------------*/

#define PORTA                                    0x0
#define PORTA_address                            0x00C
#define PORTA_position                           0x0
#define PORTA_size                               0x8
#define PORTA_value_mask                         0xFF
#define PORTA_clear_mask                         0x0

#define RA0                                      0x0
#define RA0_address                              0x00C
#define RA0_position                             0x0
#define RA0_size                                 0x1
#define RA0_value_mask                           0x1
#define RA0_clear_mask                           0xFE

#define RA1                                      0x1
#define RA1_address                              0x00C
#define RA1_position                             0x1
#define RA1_size                                 0x1
#define RA1_value_mask                           0x2
#define RA1_clear_mask                           0xFD

#define RA2                                      0x2
#define RA2_address                              0x00C
#define RA2_position                             0x2
#define RA2_size                                 0x1
#define RA2_value_mask                           0x4
#define RA2_clear_mask                           0xFB

#define RA3                                      0x3
#define RA3_address                              0x00C
#define RA3_position                             0x3
#define RA3_size                                 0x1
#define RA3_value_mask                           0x8
#define RA3_clear_mask                           0xF7

#define RA4                                      0x4
#define RA4_address                              0x00C
#define RA4_position                             0x4
#define RA4_size                                 0x1
#define RA4_value_mask                           0x10
#define RA4_clear_mask                           0xEF

#define RA5                                      0x5
#define RA5_address                              0x00C
#define RA5_position                             0x5
#define RA5_size                                 0x1
#define RA5_value_mask                           0x20
#define RA5_clear_mask                           0xDF


/*--------------------------------------#
| PIR1                             0x11 |
#---------------------------------------#
| - | ADIF | - | - | SSP1IF | - | - | - |
#---------------------------------------#
| 7 | 6    | 5 | 4 | 3      | 2 | 1 | 0 |
#--------------------------------------*/

#define PIR1                                     0x0
#define PIR1_address                             0x011
#define PIR1_position                            0x0
#define PIR1_size                                0x8
#define PIR1_value_mask                          0xFF
#define PIR1_clear_mask                          0x0

#define SSP1IF                                   0x3
#define SSP1IF_address                           0x011
#define SSP1IF_position                          0x3
#define SSP1IF_size                              0x1
#define SSP1IF_value_mask                        0x8
#define SSP1IF_clear_mask                        0xF7

#define ADIF                                     0x6
#define ADIF_address                             0x011
#define ADIF_position                            0x6
#define ADIF_size                                0x1
#define ADIF_value_mask                          0x40
#define ADIF_clear_mask                          0xBF


/*-----------------------------------#
| PIR2                          0x12 |
#------------------------------------#
| - | - | - | - | BCL1IF | - | - | - |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2 | 1 | 0 |
#-----------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0x012
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

#define BCL1IF                                   0x3
#define BCL1IF_address                           0x012
#define BCL1IF_position                          0x3
#define BCL1IF_size                              0x1
#define BCL1IF_value_mask                        0x8
#define BCL1IF_clear_mask                        0xF7


/*------------------------------#
| TMR0                     0x15 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR0                                     0x0
#define TMR0_address                             0x015
#define TMR0_position                            0x0
#define TMR0_size                                0x8
#define TMR0_value_mask                          0xFF
#define TMR0_clear_mask                          0x0


/*------------------------------------------------------------#
| TRISA                                                  0x8C |
#-------------------------------------------------------------#
| - | - | TRISA5 | TRISA4 | TRISA3 | TRISA2 | TRISA1 | TRISA0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define TRISA                                    0x0
#define TRISA_address                            0x08C
#define TRISA_position                           0x0
#define TRISA_size                               0x8
#define TRISA_value_mask                         0xFF
#define TRISA_clear_mask                         0x0

#define TRISA0                                   0x0
#define TRISA0_address                           0x08C
#define TRISA0_position                          0x0
#define TRISA0_size                              0x1
#define TRISA0_value_mask                        0x1
#define TRISA0_clear_mask                        0xFE

#define TRISA1                                   0x1
#define TRISA1_address                           0x08C
#define TRISA1_position                          0x1
#define TRISA1_size                              0x1
#define TRISA1_value_mask                        0x2
#define TRISA1_clear_mask                        0xFD

#define TRISA2                                   0x2
#define TRISA2_address                           0x08C
#define TRISA2_position                          0x2
#define TRISA2_size                              0x1
#define TRISA2_value_mask                        0x4
#define TRISA2_clear_mask                        0xFB

#define TRISA3                                   0x3
#define TRISA3_address                           0x08C
#define TRISA3_position                          0x3
#define TRISA3_size                              0x1
#define TRISA3_value_mask                        0x8
#define TRISA3_clear_mask                        0xF7

#define TRISA4                                   0x4
#define TRISA4_address                           0x08C
#define TRISA4_position                          0x4
#define TRISA4_size                              0x1
#define TRISA4_value_mask                        0x10
#define TRISA4_clear_mask                        0xEF

#define TRISA5                                   0x5
#define TRISA5_address                           0x08C
#define TRISA5_position                          0x5
#define TRISA5_size                              0x1
#define TRISA5_value_mask                        0x20
#define TRISA5_clear_mask                        0xDF


/*--------------------------------------#
| PIE1                             0x91 |
#---------------------------------------#
| - | ADIE | - | - | SSP1IE | - | - | - |
#---------------------------------------#
| 7 | 6    | 5 | 4 | 3      | 2 | 1 | 0 |
#--------------------------------------*/

#define PIE1                                     0x0
#define PIE1_address                             0x091
#define PIE1_position                            0x0
#define PIE1_size                                0x8
#define PIE1_value_mask                          0xFF
#define PIE1_clear_mask                          0x0

#define SSP1IE                                   0x3
#define SSP1IE_address                           0x091
#define SSP1IE_position                          0x3
#define SSP1IE_size                              0x1
#define SSP1IE_value_mask                        0x8
#define SSP1IE_clear_mask                        0xF7

#define ADIE                                     0x6
#define ADIE_address                             0x091
#define ADIE_position                            0x6
#define ADIE_size                                0x1
#define ADIE_value_mask                          0x40
#define ADIE_clear_mask                          0xBF


/*-----------------------------------#
| PIE2                          0x92 |
#------------------------------------#
| - | - | - | - | BCL1IE | - | - | - |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2 | 1 | 0 |
#-----------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0x092
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

#define BCL1IE                                   0x3
#define BCL1IE_address                           0x092
#define BCL1IE_position                          0x3
#define BCL1IE_size                              0x1
#define BCL1IE_value_mask                        0x8
#define BCL1IE_clear_mask                        0xF7


/*------------------------------------------------------#
| OPTION_REG                                       0x95 |
#-------------------------------------------------------#
| nWPUEN | INTEDG | T0CS | T0SE | PSA | PS2 | PS1 | PS0 |
#-------------------------------------------------------#
| 7      | 6      | 5    | 4    | 3   | 2   | 1   | 0   |
#------------------------------------------------------*/

#define OPTION_REG                               0x0
#define OPTION_REG_address                       0x095
#define OPTION_REG_position                      0x0
#define OPTION_REG_size                          0x8
#define OPTION_REG_value_mask                    0xFF
#define OPTION_REG_clear_mask                    0x0

#define PS                                       0x0
#define PS_address                               0x095
#define PS_position                              0x0
#define PS_size                                  0x3
#define PS_value_mask                            0x7
#define PS_clear_mask                            0xF8

#define PS0                                      0x0
#define PS0_address                              0x095
#define PS0_position                             0x0
#define PS0_size                                 0x1
#define PS0_value_mask                           0x1
#define PS0_clear_mask                           0xFE

#define PS1                                      0x1
#define PS1_address                              0x095
#define PS1_position                             0x1
#define PS1_size                                 0x1
#define PS1_value_mask                           0x2
#define PS1_clear_mask                           0xFD

#define PS2                                      0x2
#define PS2_address                              0x095
#define PS2_position                             0x2
#define PS2_size                                 0x1
#define PS2_value_mask                           0x4
#define PS2_clear_mask                           0xFB

#define PSA                                      0x3
#define PSA_address                              0x095
#define PSA_position                             0x3
#define PSA_size                                 0x1
#define PSA_value_mask                           0x8
#define PSA_clear_mask                           0xF7

#define T0SE                                     0x4
#define T0SE_address                             0x095
#define T0SE_position                            0x4
#define T0SE_size                                0x1
#define T0SE_value_mask                          0x10
#define T0SE_clear_mask                          0xEF

#define TMR0SE                                   0x4
#define TMR0SE_address                           0x095
#define TMR0SE_position                          0x4
#define TMR0SE_size                              0x1
#define TMR0SE_value_mask                        0x10
#define TMR0SE_clear_mask                        0xEF

#define T0CS                                     0x5
#define T0CS_address                             0x095
#define T0CS_position                            0x5
#define T0CS_size                                0x1
#define T0CS_value_mask                          0x20
#define T0CS_clear_mask                          0xDF

#define TMR0CS                                   0x5
#define TMR0CS_address                           0x095
#define TMR0CS_position                          0x5
#define TMR0CS_size                              0x1
#define TMR0CS_value_mask                        0x20
#define TMR0CS_clear_mask                        0xDF

#define INTEDG                                   0x6
#define INTEDG_address                           0x095
#define INTEDG_position                          0x6
#define INTEDG_size                              0x1
#define INTEDG_value_mask                        0x40
#define INTEDG_clear_mask                        0xBF

#define nWPUEN                                   0x7
#define nWPUEN_address                           0x095
#define nWPUEN_position                          0x7
#define nWPUEN_size                              0x1
#define nWPUEN_value_mask                        0x80
#define nWPUEN_clear_mask                        0x7F


/*---------------------------------------------------------#
| PCON                                                0x96 |
#----------------------------------------------------------#
| STKOVF | STKUNF | - | nRWDT | nRMCLR | nRI | nPOR | nBOR |
#----------------------------------------------------------#
| 7      | 6      | 5 | 4     | 3      | 2   | 1    | 0    |
#---------------------------------------------------------*/

#define PCON                                     0x0
#define PCON_address                             0x096
#define PCON_position                            0x0
#define PCON_size                                0x8
#define PCON_value_mask                          0xFF
#define PCON_clear_mask                          0x0

#define nBOR                                     0x0
#define nBOR_address                             0x096
#define nBOR_position                            0x0
#define nBOR_size                                0x1
#define nBOR_value_mask                          0x1
#define nBOR_clear_mask                          0xFE

#define nPOR                                     0x1
#define nPOR_address                             0x096
#define nPOR_position                            0x1
#define nPOR_size                                0x1
#define nPOR_value_mask                          0x2
#define nPOR_clear_mask                          0xFD

#define nRI                                      0x2
#define nRI_address                              0x096
#define nRI_position                             0x2
#define nRI_size                                 0x1
#define nRI_value_mask                           0x4
#define nRI_clear_mask                           0xFB

#define nRMCLR                                   0x3
#define nRMCLR_address                           0x096
#define nRMCLR_position                          0x3
#define nRMCLR_size                              0x1
#define nRMCLR_value_mask                        0x8
#define nRMCLR_clear_mask                        0xF7

#define nRWDT                                    0x4
#define nRWDT_address                            0x096
#define nRWDT_position                           0x4
#define nRWDT_size                               0x1
#define nRWDT_value_mask                         0x10
#define nRWDT_clear_mask                         0xEF

#define STKUNF                                   0x6
#define STKUNF_address                           0x096
#define STKUNF_position                          0x6
#define STKUNF_size                              0x1
#define STKUNF_value_mask                        0x40
#define STKUNF_clear_mask                        0xBF

#define STKOVF                                   0x7
#define STKOVF_address                           0x096
#define STKOVF_position                          0x7
#define STKOVF_size                              0x1
#define STKOVF_value_mask                        0x80
#define STKOVF_clear_mask                        0x7F


/*------------------------------------------------------------#
| WDTCON                                                 0x97 |
#-------------------------------------------------------------#
| - | - | WDTPS4 | WDTPS3 | WDTPS2 | WDTPS1 | WDTPS0 | SWDTEN |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define WDTCON                                   0x0
#define WDTCON_address                           0x097
#define WDTCON_position                          0x0
#define WDTCON_size                              0x8
#define WDTCON_value_mask                        0xFF
#define WDTCON_clear_mask                        0x0

#define SWDTEN                                   0x0
#define SWDTEN_address                           0x097
#define SWDTEN_position                          0x0
#define SWDTEN_size                              0x1
#define SWDTEN_value_mask                        0x1
#define SWDTEN_clear_mask                        0xFE

#define WDTPS                                    0x1
#define WDTPS_address                            0x097
#define WDTPS_position                           0x1
#define WDTPS_size                               0x5
#define WDTPS_value_mask                         0x3E
#define WDTPS_clear_mask                         0xC1

#define WDTPS0                                   0x1
#define WDTPS0_address                           0x097
#define WDTPS0_position                          0x1
#define WDTPS0_size                              0x1
#define WDTPS0_value_mask                        0x2
#define WDTPS0_clear_mask                        0xFD

#define WDTPS1                                   0x2
#define WDTPS1_address                           0x097
#define WDTPS1_position                          0x2
#define WDTPS1_size                              0x1
#define WDTPS1_value_mask                        0x4
#define WDTPS1_clear_mask                        0xFB

#define WDTPS2                                   0x3
#define WDTPS2_address                           0x097
#define WDTPS2_position                          0x3
#define WDTPS2_size                              0x1
#define WDTPS2_value_mask                        0x8
#define WDTPS2_clear_mask                        0xF7

#define WDTPS3                                   0x4
#define WDTPS3_address                           0x097
#define WDTPS3_position                          0x4
#define WDTPS3_size                              0x1
#define WDTPS3_value_mask                        0x10
#define WDTPS3_clear_mask                        0xEF

#define WDTPS4                                   0x5
#define WDTPS4_address                           0x097
#define WDTPS4_position                          0x5
#define WDTPS4_size                              0x1
#define WDTPS4_value_mask                        0x20
#define WDTPS4_clear_mask                        0xDF


/*---------------------------------------------------------#
| OSCCON                                              0x99 |
#----------------------------------------------------------#
| SPLLEN | IRCF3 | IRCF2 | IRCF1 | IRCF0 | - | SCS1 | SCS0 |
#----------------------------------------------------------#
| 7      | 6     | 5     | 4     | 3     | 2 | 1    | 0    |
#---------------------------------------------------------*/

#define OSCCON                                   0x0
#define OSCCON_address                           0x099
#define OSCCON_position                          0x0
#define OSCCON_size                              0x8
#define OSCCON_value_mask                        0xFF
#define OSCCON_clear_mask                        0x0

#define SCS0                                     0x0
#define SCS0_address                             0x099
#define SCS0_position                            0x0
#define SCS0_size                                0x1
#define SCS0_value_mask                          0x1
#define SCS0_clear_mask                          0xFE

#define SCS                                      0x0
#define SCS_address                              0x099
#define SCS_position                             0x0
#define SCS_size                                 0x2
#define SCS_value_mask                           0x3
#define SCS_clear_mask                           0xFC

#define SCS1                                     0x1
#define SCS1_address                             0x099
#define SCS1_position                            0x1
#define SCS1_size                                0x1
#define SCS1_value_mask                          0x2
#define SCS1_clear_mask                          0xFD

#define IRCF                                     0x3
#define IRCF_address                             0x099
#define IRCF_position                            0x3
#define IRCF_size                                0x4
#define IRCF_value_mask                          0x78
#define IRCF_clear_mask                          0x87

#define IRCF0                                    0x3
#define IRCF0_address                            0x099
#define IRCF0_position                           0x3
#define IRCF0_size                               0x1
#define IRCF0_value_mask                         0x8
#define IRCF0_clear_mask                         0xF7

#define IRCF1                                    0x4
#define IRCF1_address                            0x099
#define IRCF1_position                           0x4
#define IRCF1_size                               0x1
#define IRCF1_value_mask                         0x10
#define IRCF1_clear_mask                         0xEF

#define IRCF2                                    0x5
#define IRCF2_address                            0x099
#define IRCF2_position                           0x5
#define IRCF2_size                               0x1
#define IRCF2_value_mask                         0x20
#define IRCF2_clear_mask                         0xDF

#define IRCF3                                    0x6
#define IRCF3_address                            0x099
#define IRCF3_position                           0x6
#define IRCF3_size                               0x1
#define IRCF3_value_mask                         0x40
#define IRCF3_clear_mask                         0xBF

#define SPLLEN                                   0x7
#define SPLLEN_address                           0x099
#define SPLLEN_position                          0x7
#define SPLLEN_size                              0x1
#define SPLLEN_value_mask                        0x80
#define SPLLEN_clear_mask                        0x7F


/*---------------------------------------------------#
| OSCSTAT                                       0x9A |
#----------------------------------------------------#
| - | PLLR | OSTS | HFIOFR | - | - | LFIOFR | HFIOFS |
#----------------------------------------------------#
| 7 | 6    | 5    | 4      | 3 | 2 | 1      | 0      |
#---------------------------------------------------*/

#define OSCSTAT                                  0x0
#define OSCSTAT_address                          0x09A
#define OSCSTAT_position                         0x0
#define OSCSTAT_size                             0x8
#define OSCSTAT_value_mask                       0xFF
#define OSCSTAT_clear_mask                       0x0

#define HFIOFS                                   0x0
#define HFIOFS_address                           0x09A
#define HFIOFS_position                          0x0
#define HFIOFS_size                              0x1
#define HFIOFS_value_mask                        0x1
#define HFIOFS_clear_mask                        0xFE

#define LFIOFR                                   0x1
#define LFIOFR_address                           0x09A
#define LFIOFR_position                          0x1
#define LFIOFR_size                              0x1
#define LFIOFR_value_mask                        0x2
#define LFIOFR_clear_mask                        0xFD

#define HFIOFR                                   0x4
#define HFIOFR_address                           0x09A
#define HFIOFR_position                          0x4
#define HFIOFR_size                              0x1
#define HFIOFR_value_mask                        0x10
#define HFIOFR_clear_mask                        0xEF

#define OSTS                                     0x5
#define OSTS_address                             0x09A
#define OSTS_position                            0x5
#define OSTS_size                                0x1
#define OSTS_value_mask                          0x20
#define OSTS_clear_mask                          0xDF

#define PLLR                                     0x6
#define PLLR_address                             0x09A
#define PLLR_position                            0x6
#define PLLR_size                                0x1
#define PLLR_value_mask                          0x40
#define PLLR_clear_mask                          0xBF


/*------------------------------#
| ADRESL                   0x9B |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ADRESL                                   0x0
#define ADRESL_address                           0x09B
#define ADRESL_position                          0x0
#define ADRESL_size                              0x8
#define ADRESL_value_mask                        0xFF
#define ADRESL_clear_mask                        0x0


/*------------------------------#
| ADRESH                   0x9C |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ADRESH                                   0x0
#define ADRESH_address                           0x09C
#define ADRESH_position                          0x0
#define ADRESH_size                              0x8
#define ADRESH_value_mask                        0xFF
#define ADRESH_clear_mask                        0x0


/*--------------------------------------------------------------------------------------------------------#
| ADCON0                                                                                             0x9D |
#---------------------------------------------------------------------------------------------------------#
| - | ADCON0_CHS4 | ADCON0_CHS3 | ADCON0_CHS2 | ADCON0_CHS1 | ADCON0_CHS0 | ADCON0_GO_nDONE | ADCON0_ADON |
#---------------------------------------------------------------------------------------------------------#
| 7 | 6           | 5           | 4           | 3           | 2           | 1               | 0           |
#--------------------------------------------------------------------------------------------------------*/

#define ADCON0                                   0x0
#define ADCON0_address                           0x09D
#define ADCON0_position                          0x0
#define ADCON0_size                              0x8
#define ADCON0_value_mask                        0xFF
#define ADCON0_clear_mask                        0x0

#define ADCON0_ADON                              0x0
#define ADCON0_ADON_address                      0x09D
#define ADCON0_ADON_position                     0x0
#define ADCON0_ADON_size                         0x1
#define ADCON0_ADON_value_mask                   0x1
#define ADCON0_ADON_clear_mask                   0xFE

#define ADCON0_GO_nDONE                          0x1
#define ADCON0_GO_nDONE_address                  0x09D
#define ADCON0_GO_nDONE_position                 0x1
#define ADCON0_GO_nDONE_size                     0x1
#define ADCON0_GO_nDONE_value_mask               0x2
#define ADCON0_GO_nDONE_clear_mask               0xFD

#define GO                                       0x1
#define GO_address                               0x09D
#define GO_position                              0x1
#define GO_size                                  0x1
#define GO_value_mask                            0x2
#define GO_clear_mask                            0xFD

#define ADGO                                     0x1
#define ADGO_address                             0x09D
#define ADGO_position                            0x1
#define ADGO_size                                0x1
#define ADGO_value_mask                          0x2
#define ADGO_clear_mask                          0xFD

#define ADCON0_CHS                               0x2
#define ADCON0_CHS_address                       0x09D
#define ADCON0_CHS_position                      0x2
#define ADCON0_CHS_size                          0x5
#define ADCON0_CHS_value_mask                    0x7C
#define ADCON0_CHS_clear_mask                    0x83

#define ADCON0_CHS0                              0x2
#define ADCON0_CHS0_address                      0x09D
#define ADCON0_CHS0_position                     0x2
#define ADCON0_CHS0_size                         0x1
#define ADCON0_CHS0_value_mask                   0x4
#define ADCON0_CHS0_clear_mask                   0xFB

#define ADCON0_CHS1                              0x3
#define ADCON0_CHS1_address                      0x09D
#define ADCON0_CHS1_position                     0x3
#define ADCON0_CHS1_size                         0x1
#define ADCON0_CHS1_value_mask                   0x8
#define ADCON0_CHS1_clear_mask                   0xF7

#define ADCON0_CHS2                              0x4
#define ADCON0_CHS2_address                      0x09D
#define ADCON0_CHS2_position                     0x4
#define ADCON0_CHS2_size                         0x1
#define ADCON0_CHS2_value_mask                   0x10
#define ADCON0_CHS2_clear_mask                   0xEF

#define ADCON0_CHS3                              0x5
#define ADCON0_CHS3_address                      0x09D
#define ADCON0_CHS3_position                     0x5
#define ADCON0_CHS3_size                         0x1
#define ADCON0_CHS3_value_mask                   0x20
#define ADCON0_CHS3_clear_mask                   0xDF

#define ADCON0_CHS4                              0x6
#define ADCON0_CHS4_address                      0x09D
#define ADCON0_CHS4_position                     0x6
#define ADCON0_CHS4_size                         0x1
#define ADCON0_CHS4_value_mask                   0x40
#define ADCON0_CHS4_clear_mask                   0xBF


/*---------------------------------------------------------------------------------------------------#
| ADCON1                                                                                        0x9E |
#----------------------------------------------------------------------------------------------------#
| ADCON1_ADFM | ADCON1_ADCS2 | ADCON1_ADCS1 | ADCON1_ADCS0 | - | - | ADCON1_ADPREF1 | ADCON1_ADPREF0 |
#----------------------------------------------------------------------------------------------------#
| 7           | 6            | 5            | 4            | 3 | 2 | 1              | 0              |
#---------------------------------------------------------------------------------------------------*/

#define ADCON1                                   0x0
#define ADCON1_address                           0x09E
#define ADCON1_position                          0x0
#define ADCON1_size                              0x8
#define ADCON1_value_mask                        0xFF
#define ADCON1_clear_mask                        0x0

#define ADCON1_ADPREF                            0x0
#define ADCON1_ADPREF_address                    0x09E
#define ADCON1_ADPREF_position                   0x0
#define ADCON1_ADPREF_size                       0x2
#define ADCON1_ADPREF_value_mask                 0x3
#define ADCON1_ADPREF_clear_mask                 0xFC

#define ADCON1_ADPREF0                           0x0
#define ADCON1_ADPREF0_address                   0x09E
#define ADCON1_ADPREF0_position                  0x0
#define ADCON1_ADPREF0_size                      0x1
#define ADCON1_ADPREF0_value_mask                0x1
#define ADCON1_ADPREF0_clear_mask                0xFE

#define ADCON1_ADPREF1                           0x1
#define ADCON1_ADPREF1_address                   0x09E
#define ADCON1_ADPREF1_position                  0x1
#define ADCON1_ADPREF1_size                      0x1
#define ADCON1_ADPREF1_value_mask                0x2
#define ADCON1_ADPREF1_clear_mask                0xFD

#define ADCON1_ADCS0                             0x4
#define ADCON1_ADCS0_address                     0x09E
#define ADCON1_ADCS0_position                    0x4
#define ADCON1_ADCS0_size                        0x1
#define ADCON1_ADCS0_value_mask                  0x10
#define ADCON1_ADCS0_clear_mask                  0xEF

#define ADCON1_ADCS                              0x4
#define ADCON1_ADCS_address                      0x09E
#define ADCON1_ADCS_position                     0x4
#define ADCON1_ADCS_size                         0x3
#define ADCON1_ADCS_value_mask                   0x70
#define ADCON1_ADCS_clear_mask                   0x8F

#define ADCON1_ADCS1                             0x5
#define ADCON1_ADCS1_address                     0x09E
#define ADCON1_ADCS1_position                    0x5
#define ADCON1_ADCS1_size                        0x1
#define ADCON1_ADCS1_value_mask                  0x20
#define ADCON1_ADCS1_clear_mask                  0xDF

#define ADCON1_ADCS2                             0x6
#define ADCON1_ADCS2_address                     0x09E
#define ADCON1_ADCS2_position                    0x6
#define ADCON1_ADCS2_size                        0x1
#define ADCON1_ADCS2_value_mask                  0x40
#define ADCON1_ADCS2_clear_mask                  0xBF

#define ADCON1_ADFM                              0x7
#define ADCON1_ADFM_address                      0x09E
#define ADCON1_ADFM_position                     0x7
#define ADCON1_ADFM_size                         0x1
#define ADCON1_ADFM_value_mask                   0x80
#define ADCON1_ADFM_clear_mask                   0x7F


/*------------------------------------------------------------------------#
| ADCON2                                                             0x9F |
#-------------------------------------------------------------------------#
| - | ADCON2_TRIGSEL2 | ADCON2_TRIGSEL1 | ADCON2_TRIGSEL0 | - | - | - | - |
#-------------------------------------------------------------------------#
| 7 | 6               | 5               | 4               | 3 | 2 | 1 | 0 |
#------------------------------------------------------------------------*/

#define ADCON2                                   0x0
#define ADCON2_address                           0x09F
#define ADCON2_position                          0x0
#define ADCON2_size                              0x8
#define ADCON2_value_mask                        0xFF
#define ADCON2_clear_mask                        0x0

#define ADCON2_TRIGSEL0                          0x4
#define ADCON2_TRIGSEL0_address                  0x09F
#define ADCON2_TRIGSEL0_position                 0x4
#define ADCON2_TRIGSEL0_size                     0x1
#define ADCON2_TRIGSEL0_value_mask               0x10
#define ADCON2_TRIGSEL0_clear_mask               0xEF

#define ADCON2_TRIGSEL                           0x4
#define ADCON2_TRIGSEL_address                   0x09F
#define ADCON2_TRIGSEL_position                  0x4
#define ADCON2_TRIGSEL_size                      0x3
#define ADCON2_TRIGSEL_value_mask                0x70
#define ADCON2_TRIGSEL_clear_mask                0x8F

#define ADCON2_TRIGSEL1                          0x5
#define ADCON2_TRIGSEL1_address                  0x09F
#define ADCON2_TRIGSEL1_position                 0x5
#define ADCON2_TRIGSEL1_size                     0x1
#define ADCON2_TRIGSEL1_value_mask               0x20
#define ADCON2_TRIGSEL1_clear_mask               0xDF

#define ADCON2_TRIGSEL2                          0x6
#define ADCON2_TRIGSEL2_address                  0x09F
#define ADCON2_TRIGSEL2_position                 0x6
#define ADCON2_TRIGSEL2_size                     0x1
#define ADCON2_TRIGSEL2_value_mask               0x40
#define ADCON2_TRIGSEL2_clear_mask               0xBF


/*--------------------------------------------------#
| LATA                                        0x10C |
#---------------------------------------------------#
| - | - | LATA5 | LATA4 | - | LATA2 | LATA1 | LATA0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2     | 1     | 0     |
#--------------------------------------------------*/

#define LATA                                     0x0
#define LATA_address                             0x10C
#define LATA_position                            0x0
#define LATA_size                                0x8
#define LATA_value_mask                          0xFF
#define LATA_clear_mask                          0x0

#define LATA0                                    0x0
#define LATA0_address                            0x10C
#define LATA0_position                           0x0
#define LATA0_size                               0x1
#define LATA0_value_mask                         0x1
#define LATA0_clear_mask                         0xFE

#define LATA1                                    0x1
#define LATA1_address                            0x10C
#define LATA1_position                           0x1
#define LATA1_size                               0x1
#define LATA1_value_mask                         0x2
#define LATA1_clear_mask                         0xFD

#define LATA2                                    0x2
#define LATA2_address                            0x10C
#define LATA2_position                           0x2
#define LATA2_size                               0x1
#define LATA2_value_mask                         0x4
#define LATA2_clear_mask                         0xFB

#define LATA4                                    0x4
#define LATA4_address                            0x10C
#define LATA4_position                           0x4
#define LATA4_size                               0x1
#define LATA4_value_mask                         0x10
#define LATA4_clear_mask                         0xEF

#define LATA5                                    0x5
#define LATA5_address                            0x10C
#define LATA5_position                           0x5
#define LATA5_size                               0x1
#define LATA5_value_mask                         0x20
#define LATA5_clear_mask                         0xDF


/*--------------------------------------------#
| BORCON                                0x116 |
#---------------------------------------------#
| SBOREN | BORFS | - | - | - | - | - | BORRDY |
#---------------------------------------------#
| 7      | 6     | 5 | 4 | 3 | 2 | 1 | 0      |
#--------------------------------------------*/

#define BORCON                                   0x0
#define BORCON_address                           0x116
#define BORCON_position                          0x0
#define BORCON_size                              0x8
#define BORCON_value_mask                        0xFF
#define BORCON_clear_mask                        0x0

#define BORRDY                                   0x0
#define BORRDY_address                           0x116
#define BORRDY_position                          0x0
#define BORRDY_size                              0x1
#define BORRDY_value_mask                        0x1
#define BORRDY_clear_mask                        0xFE

#define BORFS                                    0x6
#define BORFS_address                            0x116
#define BORFS_position                           0x6
#define BORFS_size                               0x1
#define BORFS_value_mask                         0x40
#define BORFS_clear_mask                         0xBF

#define SBOREN                                   0x7
#define SBOREN_address                           0x116
#define SBOREN_position                          0x7
#define SBOREN_size                              0x1
#define SBOREN_value_mask                        0x80
#define SBOREN_clear_mask                        0x7F


/*--------------------------------------------------------#
| FVRCON                                            0x117 |
#---------------------------------------------------------#
| FVREN | FVRRDY | TSEN | TSRNG | - | - | ADFVR1 | ADFVR0 |
#---------------------------------------------------------#
| 7     | 6      | 5    | 4     | 3 | 2 | 1      | 0      |
#--------------------------------------------------------*/

#define FVRCON                                   0x0
#define FVRCON_address                           0x117
#define FVRCON_position                          0x0
#define FVRCON_size                              0x8
#define FVRCON_value_mask                        0xFF
#define FVRCON_clear_mask                        0x0

#define ADFVR0                                   0x0
#define ADFVR0_address                           0x117
#define ADFVR0_position                          0x0
#define ADFVR0_size                              0x1
#define ADFVR0_value_mask                        0x1
#define ADFVR0_clear_mask                        0xFE

#define ADFVR                                    0x0
#define ADFVR_address                            0x117
#define ADFVR_position                           0x0
#define ADFVR_size                               0x2
#define ADFVR_value_mask                         0x3
#define ADFVR_clear_mask                         0xFC

#define ADFVR1                                   0x1
#define ADFVR1_address                           0x117
#define ADFVR1_position                          0x1
#define ADFVR1_size                              0x1
#define ADFVR1_value_mask                        0x2
#define ADFVR1_clear_mask                        0xFD

#define TSRNG                                    0x4
#define TSRNG_address                            0x117
#define TSRNG_position                           0x4
#define TSRNG_size                               0x1
#define TSRNG_value_mask                         0x10
#define TSRNG_clear_mask                         0xEF

#define TSEN                                     0x5
#define TSEN_address                             0x117
#define TSEN_position                            0x5
#define TSEN_size                                0x1
#define TSEN_value_mask                          0x20
#define TSEN_clear_mask                          0xDF

#define FVRRDY                                   0x6
#define FVRRDY_address                           0x117
#define FVRRDY_position                          0x6
#define FVRRDY_size                              0x1
#define FVRRDY_value_mask                        0x40
#define FVRRDY_clear_mask                        0xBF

#define FVREN                                    0x7
#define FVREN_address                            0x117
#define FVREN_position                           0x7
#define FVREN_size                               0x1
#define FVREN_value_mask                         0x80
#define FVREN_clear_mask                         0x7F


/*--------------------------------------------#
| APFCON                                0x11D |
#---------------------------------------------#
| - | SDO1SEL | SSSEL | SDSEL | - | - | - | - |
#---------------------------------------------#
| 7 | 6       | 5     | 4     | 3 | 2 | 1 | 0 |
#--------------------------------------------*/

#define APFCON                                   0x0
#define APFCON_address                           0x11D
#define APFCON_position                          0x0
#define APFCON_size                              0x8
#define APFCON_value_mask                        0xFF
#define APFCON_clear_mask                        0x0

#define SDSEL                                    0x4
#define SDSEL_address                            0x11D
#define SDSEL_position                           0x4
#define SDSEL_size                               0x1
#define SDSEL_value_mask                         0x10
#define SDSEL_clear_mask                         0xEF

#define SS1SEL                                   0x5
#define SS1SEL_address                           0x11D
#define SS1SEL_position                          0x5
#define SS1SEL_size                              0x1
#define SS1SEL_value_mask                        0x20
#define SS1SEL_clear_mask                        0xDF

#define SSSEL                                    0x5
#define SSSEL_address                            0x11D
#define SSSEL_position                           0x5
#define SSSEL_size                               0x1
#define SSSEL_value_mask                         0x20
#define SSSEL_clear_mask                         0xDF

#define SDO1SEL                                  0x6
#define SDO1SEL_address                          0x11D
#define SDO1SEL_position                         0x6
#define SDO1SEL_size                             0x1
#define SDO1SEL_value_mask                       0x40
#define SDO1SEL_clear_mask                       0xBF

#define SDOSEL                                   0x6
#define SDOSEL_address                           0x11D
#define SDOSEL_position                          0x6
#define SDOSEL_size                              0x1
#define SDOSEL_value_mask                        0x40
#define SDOSEL_clear_mask                        0xBF


/*--------------------------------------------------#
| ANSELA                                      0x18C |
#---------------------------------------------------#
| - | - | ANSA5 | ANSA4 | - | ANSA2 | ANSA1 | ANSA0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2     | 1     | 0     |
#--------------------------------------------------*/

#define ANSA0                                    0x0
#define ANSA0_address                            0x18C
#define ANSA0_position                           0x0
#define ANSA0_size                               0x1
#define ANSA0_value_mask                         0x1
#define ANSA0_clear_mask                         0xFE

#define ANSELA                                   0x0
#define ANSELA_address                           0x18C
#define ANSELA_position                          0x0
#define ANSELA_size                              0x5
#define ANSELA_value_mask                        0x1F
#define ANSELA_clear_mask                        0xE0

#define ANSA1                                    0x1
#define ANSA1_address                            0x18C
#define ANSA1_position                           0x1
#define ANSA1_size                               0x1
#define ANSA1_value_mask                         0x2
#define ANSA1_clear_mask                         0xFD

#define ANSA2                                    0x2
#define ANSA2_address                            0x18C
#define ANSA2_position                           0x2
#define ANSA2_size                               0x1
#define ANSA2_value_mask                         0x4
#define ANSA2_clear_mask                         0xFB

#define ANSA4                                    0x4
#define ANSA4_address                            0x18C
#define ANSA4_position                           0x4
#define ANSA4_size                               0x1
#define ANSA4_value_mask                         0x10
#define ANSA4_clear_mask                         0xEF

#define ANSA5                                    0x5
#define ANSA5_address                            0x18C
#define ANSA5_position                           0x5
#define ANSA5_size                               0x1
#define ANSA5_value_mask                         0x20
#define ANSA5_clear_mask                         0xDF


/*------------------------------#
| PMADRL                  0x191 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PMADRL                                   0x0
#define PMADRL_address                           0x191
#define PMADRL_position                          0x0
#define PMADRL_size                              0x8
#define PMADRL_value_mask                        0xFF
#define PMADRL_clear_mask                        0x0


/*------------------------------#
| PMADRH                  0x192 |
#-------------------------------#
| - | PMADRH                    |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PMADRH                                   0x0
#define PMADRH_address                           0x192
#define PMADRH_position                          0x0
#define PMADRH_size                              0x7
#define PMADRH_value_mask                        0x7F
#define PMADRH_clear_mask                        0x80


/*------------------------------#
| PMDATL                  0x193 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PMDATL                                   0x0
#define PMDATL_address                           0x193
#define PMDATL_position                          0x0
#define PMDATL_size                              0x8
#define PMDATL_value_mask                        0xFF
#define PMDATL_clear_mask                        0x0


/*------------------------------#
| PMDATH                  0x194 |
#-------------------------------#
| - | - | PMDATH                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PMDATH                                   0x0
#define PMDATH_address                           0x194
#define PMDATH_position                          0x0
#define PMDATH_size                              0x6
#define PMDATH_value_mask                        0x3F
#define PMDATH_clear_mask                        0xC0


/*------------------------------------------------#
| PMCON1                                    0x195 |
#-------------------------------------------------#
| - | CFGS | LWLO | FREE | WRERR | WREN | WR | RD |
#-------------------------------------------------#
| 7 | 6    | 5    | 4    | 3     | 2    | 1  | 0  |
#------------------------------------------------*/

#define PMCON1                                   0x0
#define PMCON1_address                           0x195
#define PMCON1_position                          0x0
#define PMCON1_size                              0x8
#define PMCON1_value_mask                        0xFF
#define PMCON1_clear_mask                        0x0

#define RD                                       0x0
#define RD_address                               0x195
#define RD_position                              0x0
#define RD_size                                  0x1
#define RD_value_mask                            0x1
#define RD_clear_mask                            0xFE

#define WR                                       0x1
#define WR_address                               0x195
#define WR_position                              0x1
#define WR_size                                  0x1
#define WR_value_mask                            0x2
#define WR_clear_mask                            0xFD

#define WREN                                     0x2
#define WREN_address                             0x195
#define WREN_position                            0x2
#define WREN_size                                0x1
#define WREN_value_mask                          0x4
#define WREN_clear_mask                          0xFB

#define WRERR                                    0x3
#define WRERR_address                            0x195
#define WRERR_position                           0x3
#define WRERR_size                               0x1
#define WRERR_value_mask                         0x8
#define WRERR_clear_mask                         0xF7

#define FREE                                     0x4
#define FREE_address                             0x195
#define FREE_position                            0x4
#define FREE_size                                0x1
#define FREE_value_mask                          0x10
#define FREE_clear_mask                          0xEF

#define LWLO                                     0x5
#define LWLO_address                             0x195
#define LWLO_position                            0x5
#define LWLO_size                                0x1
#define LWLO_value_mask                          0x20
#define LWLO_clear_mask                          0xDF

#define CFGS                                     0x6
#define CFGS_address                             0x195
#define CFGS_position                            0x6
#define CFGS_size                                0x1
#define CFGS_value_mask                          0x40
#define CFGS_clear_mask                          0xBF


/*------------------------------#
| PMCON2                  0x196 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PMCON2                                   0x0
#define PMCON2_address                           0x196
#define PMCON2_position                          0x0
#define PMCON2_size                              0x8
#define PMCON2_value_mask                        0xFF
#define PMCON2_clear_mask                        0x0


/*------------------------------------------------------#
| WPUA                                            0x20C |
#-------------------------------------------------------#
| - | - | WPUA5 | WPUA4 | WPUA3 | WPUA2 | WPUA1 | WPUA0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define WPUA0                                    0x0
#define WPUA0_address                            0x20C
#define WPUA0_position                           0x0
#define WPUA0_size                               0x1
#define WPUA0_value_mask                         0x1
#define WPUA0_clear_mask                         0xFE

#define WPUA                                     0x0
#define WPUA_address                             0x20C
#define WPUA_position                            0x0
#define WPUA_size                                0x6
#define WPUA_value_mask                          0x3F
#define WPUA_clear_mask                          0xC0

#define WPUA1                                    0x1
#define WPUA1_address                            0x20C
#define WPUA1_position                           0x1
#define WPUA1_size                               0x1
#define WPUA1_value_mask                         0x2
#define WPUA1_clear_mask                         0xFD

#define WPUA2                                    0x2
#define WPUA2_address                            0x20C
#define WPUA2_position                           0x2
#define WPUA2_size                               0x1
#define WPUA2_value_mask                         0x4
#define WPUA2_clear_mask                         0xFB

#define WPUA3                                    0x3
#define WPUA3_address                            0x20C
#define WPUA3_position                           0x3
#define WPUA3_size                               0x1
#define WPUA3_value_mask                         0x8
#define WPUA3_clear_mask                         0xF7

#define WPUA4                                    0x4
#define WPUA4_address                            0x20C
#define WPUA4_position                           0x4
#define WPUA4_size                               0x1
#define WPUA4_value_mask                         0x10
#define WPUA4_clear_mask                         0xEF

#define WPUA5                                    0x5
#define WPUA5_address                            0x20C
#define WPUA5_position                           0x5
#define WPUA5_size                               0x1
#define WPUA5_value_mask                         0x20
#define WPUA5_clear_mask                         0xDF


/*------------------------------#
| SSP1BUF                 0x211 |
#-------------------------------#
| SSPBUF                        |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1BUF                                  0x0
#define SSP1BUF_address                          0x211
#define SSP1BUF_position                         0x0
#define SSP1BUF_size                             0x8
#define SSP1BUF_value_mask                       0xFF
#define SSP1BUF_clear_mask                       0x0

#define SSPBUF                                   0x0
#define SSPBUF_address                           0x211
#define SSPBUF_position                          0x0
#define SSPBUF_size                              0x8
#define SSPBUF_value_mask                        0xFF
#define SSPBUF_clear_mask                        0x0


/*------------------------------#
| SSP1ADD                 0x212 |
#-------------------------------#
| SSPADD                        |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1ADD                                  0x0
#define SSP1ADD_address                          0x212
#define SSP1ADD_position                         0x0
#define SSP1ADD_size                             0x8
#define SSP1ADD_value_mask                       0xFF
#define SSP1ADD_clear_mask                       0x0

#define SSPADD                                   0x0
#define SSPADD_address                           0x212
#define SSPADD_position                          0x0
#define SSPADD_size                              0x8
#define SSPADD_value_mask                        0xFF
#define SSPADD_clear_mask                        0x0


/*------------------------------#
| SSP1MSK                 0x213 |
#-------------------------------#
| SSPMSK                        |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1MSK                                  0x0
#define SSP1MSK_address                          0x213
#define SSP1MSK_position                         0x0
#define SSP1MSK_size                             0x8
#define SSP1MSK_value_mask                       0xFF
#define SSP1MSK_clear_mask                       0x0

#define SSPMSK                                   0x0
#define SSPMSK_address                           0x213
#define SSPMSK_position                          0x0
#define SSPMSK_size                              0x8
#define SSPMSK_value_mask                        0xFF
#define SSPMSK_clear_mask                        0x0


/*------------------------------------------#
| SSP1STAT                            0x214 |
#-------------------------------------------#
| SMP | CKE | D_nA | P | S | R_nW | UA | BF |
#-------------------------------------------#
| 7   | 6   | 5    | 4 | 3 | 2    | 1  | 0  |
#------------------------------------------*/

#define SSP1STAT                                 0x0
#define SSP1STAT_address                         0x214
#define SSP1STAT_position                        0x0
#define SSP1STAT_size                            0x8
#define SSP1STAT_value_mask                      0xFF
#define SSP1STAT_clear_mask                      0x0

#define BF                                       0x0
#define BF_address                               0x214
#define BF_position                              0x0
#define BF_size                                  0x1
#define BF_value_mask                            0x1
#define BF_clear_mask                            0xFE

#define UA                                       0x1
#define UA_address                               0x214
#define UA_position                              0x1
#define UA_size                                  0x1
#define UA_value_mask                            0x2
#define UA_clear_mask                            0xFD

#define R_nW                                     0x2
#define R_nW_address                             0x214
#define R_nW_position                            0x2
#define R_nW_size                                0x1
#define R_nW_value_mask                          0x4
#define R_nW_clear_mask                          0xFB

#define S                                        0x3
#define S_address                                0x214
#define S_position                               0x3
#define S_size                                   0x1
#define S_value_mask                             0x8
#define S_clear_mask                             0xF7

#define P                                        0x4
#define P_address                                0x214
#define P_position                               0x4
#define P_size                                   0x1
#define P_value_mask                             0x10
#define P_clear_mask                             0xEF

#define D_nA                                     0x5
#define D_nA_address                             0x214
#define D_nA_position                            0x5
#define D_nA_size                                0x1
#define D_nA_value_mask                          0x20
#define D_nA_clear_mask                          0xDF

#define CKE                                      0x6
#define CKE_address                              0x214
#define CKE_position                             0x6
#define CKE_size                                 0x1
#define CKE_value_mask                           0x40
#define CKE_clear_mask                           0xBF

#define SMP                                      0x7
#define SMP_address                              0x214
#define SMP_position                             0x7
#define SMP_size                                 0x1
#define SMP_value_mask                           0x80
#define SMP_clear_mask                           0x7F


/*-----------------------------------------------------------#
| SSP1CON1                                             0x215 |
#------------------------------------------------------------#
| WCOL | SSPOV | SSPEN | CKP | SSPM3 | SSPM2 | SSPM1 | SSPM0 |
#------------------------------------------------------------#
| 7    | 6     | 5     | 4   | 3     | 2     | 1     | 0     |
#-----------------------------------------------------------*/

#define SSP1CON1                                 0x0
#define SSP1CON1_address                         0x215
#define SSP1CON1_position                        0x0
#define SSP1CON1_size                            0x8
#define SSP1CON1_value_mask                      0xFF
#define SSP1CON1_clear_mask                      0x0

#define SSPM0                                    0x0
#define SSPM0_address                            0x215
#define SSPM0_position                           0x0
#define SSPM0_size                               0x1
#define SSPM0_value_mask                         0x1
#define SSPM0_clear_mask                         0xFE

#define SSPM                                     0x0
#define SSPM_address                             0x215
#define SSPM_position                            0x0
#define SSPM_size                                0x4
#define SSPM_value_mask                          0xF
#define SSPM_clear_mask                          0xF0

#define SSPM1                                    0x1
#define SSPM1_address                            0x215
#define SSPM1_position                           0x1
#define SSPM1_size                               0x1
#define SSPM1_value_mask                         0x2
#define SSPM1_clear_mask                         0xFD

#define SSPM2                                    0x2
#define SSPM2_address                            0x215
#define SSPM2_position                           0x2
#define SSPM2_size                               0x1
#define SSPM2_value_mask                         0x4
#define SSPM2_clear_mask                         0xFB

#define SSPM3                                    0x3
#define SSPM3_address                            0x215
#define SSPM3_position                           0x3
#define SSPM3_size                               0x1
#define SSPM3_value_mask                         0x8
#define SSPM3_clear_mask                         0xF7

#define CKP                                      0x4
#define CKP_address                              0x215
#define CKP_position                             0x4
#define CKP_size                                 0x1
#define CKP_value_mask                           0x10
#define CKP_clear_mask                           0xEF

#define SSPEN                                    0x5
#define SSPEN_address                            0x215
#define SSPEN_position                           0x5
#define SSPEN_size                               0x1
#define SSPEN_value_mask                         0x20
#define SSPEN_clear_mask                         0xDF

#define SSPOV                                    0x6
#define SSPOV_address                            0x215
#define SSPOV_position                           0x6
#define SSPOV_size                               0x1
#define SSPOV_value_mask                         0x40
#define SSPOV_clear_mask                         0xBF

#define WCOL                                     0x7
#define WCOL_address                             0x215
#define WCOL_position                            0x7
#define WCOL_size                                0x1
#define WCOL_value_mask                          0x80
#define WCOL_clear_mask                          0x7F


/*---------------------------------------------------------#
| SSP1CON2                                           0x216 |
#----------------------------------------------------------#
| GCEN | ACKSTAT | ACKDT | ACKEN | RCEN | PEN | RSEN | SEN |
#----------------------------------------------------------#
| 7    | 6       | 5     | 4     | 3    | 2   | 1    | 0   |
#---------------------------------------------------------*/

#define SSP1CON2                                 0x0
#define SSP1CON2_address                         0x216
#define SSP1CON2_position                        0x0
#define SSP1CON2_size                            0x8
#define SSP1CON2_value_mask                      0xFF
#define SSP1CON2_clear_mask                      0x0

#define SEN                                      0x0
#define SEN_address                              0x216
#define SEN_position                             0x0
#define SEN_size                                 0x1
#define SEN_value_mask                           0x1
#define SEN_clear_mask                           0xFE

#define RSEN                                     0x1
#define RSEN_address                             0x216
#define RSEN_position                            0x1
#define RSEN_size                                0x1
#define RSEN_value_mask                          0x2
#define RSEN_clear_mask                          0xFD

#define PEN                                      0x2
#define PEN_address                              0x216
#define PEN_position                             0x2
#define PEN_size                                 0x1
#define PEN_value_mask                           0x4
#define PEN_clear_mask                           0xFB

#define RCEN                                     0x3
#define RCEN_address                             0x216
#define RCEN_position                            0x3
#define RCEN_size                                0x1
#define RCEN_value_mask                          0x8
#define RCEN_clear_mask                          0xF7

#define ACKEN                                    0x4
#define ACKEN_address                            0x216
#define ACKEN_position                           0x4
#define ACKEN_size                               0x1
#define ACKEN_value_mask                         0x10
#define ACKEN_clear_mask                         0xEF

#define ACKDT                                    0x5
#define ACKDT_address                            0x216
#define ACKDT_position                           0x5
#define ACKDT_size                               0x1
#define ACKDT_value_mask                         0x20
#define ACKDT_clear_mask                         0xDF

#define ACKSTAT                                  0x6
#define ACKSTAT_address                          0x216
#define ACKSTAT_position                         0x6
#define ACKSTAT_size                             0x1
#define ACKSTAT_value_mask                       0x40
#define ACKSTAT_clear_mask                       0xBF

#define GCEN                                     0x7
#define GCEN_address                             0x216
#define GCEN_position                            0x7
#define GCEN_size                                0x1
#define GCEN_value_mask                          0x80
#define GCEN_clear_mask                          0x7F


/*----------------------------------------------------------#
| SSP1CON3                                            0x217 |
#-----------------------------------------------------------#
| ACKTIM | PCIE | SCIE | BOEN | SDAHT | SBCDE | AHEN | DHEN |
#-----------------------------------------------------------#
| 7      | 6    | 5    | 4    | 3     | 2     | 1    | 0    |
#----------------------------------------------------------*/

#define SSP1CON3                                 0x0
#define SSP1CON3_address                         0x217
#define SSP1CON3_position                        0x0
#define SSP1CON3_size                            0x8
#define SSP1CON3_value_mask                      0xFF
#define SSP1CON3_clear_mask                      0x0

#define DHEN                                     0x0
#define DHEN_address                             0x217
#define DHEN_position                            0x0
#define DHEN_size                                0x1
#define DHEN_value_mask                          0x1
#define DHEN_clear_mask                          0xFE

#define AHEN                                     0x1
#define AHEN_address                             0x217
#define AHEN_position                            0x1
#define AHEN_size                                0x1
#define AHEN_value_mask                          0x2
#define AHEN_clear_mask                          0xFD

#define SBCDE                                    0x2
#define SBCDE_address                            0x217
#define SBCDE_position                           0x2
#define SBCDE_size                               0x1
#define SBCDE_value_mask                         0x4
#define SBCDE_clear_mask                         0xFB

#define SDAHT                                    0x3
#define SDAHT_address                            0x217
#define SDAHT_position                           0x3
#define SDAHT_size                               0x1
#define SDAHT_value_mask                         0x8
#define SDAHT_clear_mask                         0xF7

#define BOEN                                     0x4
#define BOEN_address                             0x217
#define BOEN_position                            0x4
#define BOEN_size                                0x1
#define BOEN_value_mask                          0x10
#define BOEN_clear_mask                          0xEF

#define SCIE                                     0x5
#define SCIE_address                             0x217
#define SCIE_position                            0x5
#define SCIE_size                                0x1
#define SCIE_value_mask                          0x20
#define SCIE_clear_mask                          0xDF

#define PCIE                                     0x6
#define PCIE_address                             0x217
#define PCIE_position                            0x6
#define PCIE_size                                0x1
#define PCIE_value_mask                          0x40
#define PCIE_clear_mask                          0xBF

#define ACKTIM                                   0x7
#define ACKTIM_address                           0x217
#define ACKTIM_position                          0x7
#define ACKTIM_size                              0x1
#define ACKTIM_value_mask                        0x80
#define ACKTIM_clear_mask                        0x7F


/*------------------------------------------------------------#
| IOCAP                                                 0x391 |
#-------------------------------------------------------------#
| - | - | IOCAP5 | IOCAP4 | IOCAP3 | IOCAP2 | IOCAP1 | IOCAP0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define IOCAP                                    0x0
#define IOCAP_address                            0x391
#define IOCAP_position                           0x0
#define IOCAP_size                               0x6
#define IOCAP_value_mask                         0x3F
#define IOCAP_clear_mask                         0xC0

#define IOCAP0                                   0x0
#define IOCAP0_address                           0x391
#define IOCAP0_position                          0x0
#define IOCAP0_size                              0x1
#define IOCAP0_value_mask                        0x1
#define IOCAP0_clear_mask                        0xFE

#define IOCAP1                                   0x1
#define IOCAP1_address                           0x391
#define IOCAP1_position                          0x1
#define IOCAP1_size                              0x1
#define IOCAP1_value_mask                        0x2
#define IOCAP1_clear_mask                        0xFD

#define IOCAP2                                   0x2
#define IOCAP2_address                           0x391
#define IOCAP2_position                          0x2
#define IOCAP2_size                              0x1
#define IOCAP2_value_mask                        0x4
#define IOCAP2_clear_mask                        0xFB

#define IOCAP3                                   0x3
#define IOCAP3_address                           0x391
#define IOCAP3_position                          0x3
#define IOCAP3_size                              0x1
#define IOCAP3_value_mask                        0x8
#define IOCAP3_clear_mask                        0xF7

#define IOCAP4                                   0x4
#define IOCAP4_address                           0x391
#define IOCAP4_position                          0x4
#define IOCAP4_size                              0x1
#define IOCAP4_value_mask                        0x10
#define IOCAP4_clear_mask                        0xEF

#define IOCAP5                                   0x5
#define IOCAP5_address                           0x391
#define IOCAP5_position                          0x5
#define IOCAP5_size                              0x1
#define IOCAP5_value_mask                        0x20
#define IOCAP5_clear_mask                        0xDF


/*------------------------------------------------------------#
| IOCAN                                                 0x392 |
#-------------------------------------------------------------#
| - | - | IOCAN5 | IOCAN4 | IOCAN3 | IOCAN2 | IOCAN1 | IOCAN0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define IOCAN0                                   0x0
#define IOCAN0_address                           0x392
#define IOCAN0_position                          0x0
#define IOCAN0_size                              0x1
#define IOCAN0_value_mask                        0x1
#define IOCAN0_clear_mask                        0xFE

#define IOCAN                                    0x0
#define IOCAN_address                            0x392
#define IOCAN_position                           0x0
#define IOCAN_size                               0x6
#define IOCAN_value_mask                         0x3F
#define IOCAN_clear_mask                         0xC0

#define IOCAN1                                   0x1
#define IOCAN1_address                           0x392
#define IOCAN1_position                          0x1
#define IOCAN1_size                              0x1
#define IOCAN1_value_mask                        0x2
#define IOCAN1_clear_mask                        0xFD

#define IOCAN2                                   0x2
#define IOCAN2_address                           0x392
#define IOCAN2_position                          0x2
#define IOCAN2_size                              0x1
#define IOCAN2_value_mask                        0x4
#define IOCAN2_clear_mask                        0xFB

#define IOCAN3                                   0x3
#define IOCAN3_address                           0x392
#define IOCAN3_position                          0x3
#define IOCAN3_size                              0x1
#define IOCAN3_value_mask                        0x8
#define IOCAN3_clear_mask                        0xF7

#define IOCAN4                                   0x4
#define IOCAN4_address                           0x392
#define IOCAN4_position                          0x4
#define IOCAN4_size                              0x1
#define IOCAN4_value_mask                        0x10
#define IOCAN4_clear_mask                        0xEF

#define IOCAN5                                   0x5
#define IOCAN5_address                           0x392
#define IOCAN5_position                          0x5
#define IOCAN5_size                              0x1
#define IOCAN5_value_mask                        0x20
#define IOCAN5_clear_mask                        0xDF


/*------------------------------------------------------------#
| IOCAF                                                 0x393 |
#-------------------------------------------------------------#
| - | - | IOCAF5 | IOCAF4 | IOCAF3 | IOCAF2 | IOCAF1 | IOCAF0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define IOCAF0                                   0x0
#define IOCAF0_address                           0x393
#define IOCAF0_position                          0x0
#define IOCAF0_size                              0x1
#define IOCAF0_value_mask                        0x1
#define IOCAF0_clear_mask                        0xFE

#define IOCAF                                    0x0
#define IOCAF_address                            0x393
#define IOCAF_position                           0x0
#define IOCAF_size                               0x6
#define IOCAF_value_mask                         0x3F
#define IOCAF_clear_mask                         0xC0

#define IOCAF1                                   0x1
#define IOCAF1_address                           0x393
#define IOCAF1_position                          0x1
#define IOCAF1_size                              0x1
#define IOCAF1_value_mask                        0x2
#define IOCAF1_clear_mask                        0xFD

#define IOCAF2                                   0x2
#define IOCAF2_address                           0x393
#define IOCAF2_position                          0x2
#define IOCAF2_size                              0x1
#define IOCAF2_value_mask                        0x4
#define IOCAF2_clear_mask                        0xFB

#define IOCAF3                                   0x3
#define IOCAF3_address                           0x393
#define IOCAF3_position                          0x3
#define IOCAF3_size                              0x1
#define IOCAF3_value_mask                        0x8
#define IOCAF3_clear_mask                        0xF7

#define IOCAF4                                   0x4
#define IOCAF4_address                           0x393
#define IOCAF4_position                          0x4
#define IOCAF4_size                              0x1
#define IOCAF4_value_mask                        0x10
#define IOCAF4_clear_mask                        0xEF

#define IOCAF5                                   0x5
#define IOCAF5_address                           0x393
#define IOCAF5_position                          0x5
#define IOCAF5_size                              0x1
#define IOCAF5_value_mask                        0x20
#define IOCAF5_clear_mask                        0xDF


/*----------------------------------------------#
| STATUS_SHAD                             0xFE4 |
#-----------------------------------------------#
| - | - | - | - | - | Z_SHAD | DC_SHAD | C_SHAD |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1       | 0      |
#----------------------------------------------*/

#define STATUS_SHAD                              0x0
#define STATUS_SHAD_address                      0xFE4
#define STATUS_SHAD_position                     0x0
#define STATUS_SHAD_size                         0x8
#define STATUS_SHAD_value_mask                   0xFF
#define STATUS_SHAD_clear_mask                   0x0

#define C_SHAD                                   0x0
#define C_SHAD_address                           0xFE4
#define C_SHAD_position                          0x0
#define C_SHAD_size                              0x1
#define C_SHAD_value_mask                        0x1
#define C_SHAD_clear_mask                        0xFE

#define DC_SHAD                                  0x1
#define DC_SHAD_address                          0xFE4
#define DC_SHAD_position                         0x1
#define DC_SHAD_size                             0x1
#define DC_SHAD_value_mask                       0x2
#define DC_SHAD_clear_mask                       0xFD

#define Z_SHAD                                   0x2
#define Z_SHAD_address                           0xFE4
#define Z_SHAD_position                          0x2
#define Z_SHAD_size                              0x1
#define Z_SHAD_value_mask                        0x4
#define Z_SHAD_clear_mask                        0xFB


/*------------------------------#
| WREG_SHAD               0xFE5 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define WREG_SHAD                                0x0
#define WREG_SHAD_address                        0xFE5
#define WREG_SHAD_position                       0x0
#define WREG_SHAD_size                           0x8
#define WREG_SHAD_value_mask                     0xFF
#define WREG_SHAD_clear_mask                     0x0


/*------------------------------#
| BSR_SHAD                0xFE6 |
#-------------------------------#
| - | - | - | BSR_SHAD          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define BSR_SHAD                                 0x0
#define BSR_SHAD_address                         0xFE6
#define BSR_SHAD_position                        0x0
#define BSR_SHAD_size                            0x5
#define BSR_SHAD_value_mask                      0x1F
#define BSR_SHAD_clear_mask                      0xE0


/*------------------------------#
| PCLATH_SHAD             0xFE7 |
#-------------------------------#
| - | PCLATH_SHAD               |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PCLATH_SHAD                              0x0
#define PCLATH_SHAD_address                      0xFE7
#define PCLATH_SHAD_position                     0x0
#define PCLATH_SHAD_size                         0x7
#define PCLATH_SHAD_value_mask                   0x7F
#define PCLATH_SHAD_clear_mask                   0x80


/*------------------------------#
| FSR0L_SHAD              0xFE8 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define FSR0L_SHAD                               0x0
#define FSR0L_SHAD_address                       0xFE8
#define FSR0L_SHAD_position                      0x0
#define FSR0L_SHAD_size                          0x8
#define FSR0L_SHAD_value_mask                    0xFF
#define FSR0L_SHAD_clear_mask                    0x0


/*------------------------------#
| FSR0H_SHAD              0xFE9 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define FSR0H_SHAD                               0x0
#define FSR0H_SHAD_address                       0xFE9
#define FSR0H_SHAD_position                      0x0
#define FSR0H_SHAD_size                          0x8
#define FSR0H_SHAD_value_mask                    0xFF
#define FSR0H_SHAD_clear_mask                    0x0


/*------------------------------#
| FSR1L_SHAD              0xFEA |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define FSR1L_SHAD                               0x0
#define FSR1L_SHAD_address                       0xFEA
#define FSR1L_SHAD_position                      0x0
#define FSR1L_SHAD_size                          0x8
#define FSR1L_SHAD_value_mask                    0xFF
#define FSR1L_SHAD_clear_mask                    0x0


/*------------------------------#
| FSR1H_SHAD              0xFEB |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define FSR1H_SHAD                               0x0
#define FSR1H_SHAD_address                       0xFEB
#define FSR1H_SHAD_position                      0x0
#define FSR1H_SHAD_size                          0x8
#define FSR1H_SHAD_value_mask                    0xFF
#define FSR1H_SHAD_clear_mask                    0x0


/*------------------------------#
| STKPTR                  0xFED |
#-------------------------------#
| - | - | - | STKPTR            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define STKPTR                                   0x0
#define STKPTR_address                           0xFED
#define STKPTR_position                          0x0
#define STKPTR_size                              0x5
#define STKPTR_value_mask                        0x1F
#define STKPTR_clear_mask                        0xE0


/*------------------------------#
| TOSL                    0xFEE |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TOSL                                     0x0
#define TOSL_address                             0xFEE
#define TOSL_position                            0x0
#define TOSL_size                                0x8
#define TOSL_value_mask                          0xFF
#define TOSL_clear_mask                          0x0


/*------------------------------#
| TOSH                    0xFEF |
#-------------------------------#
| - | TOSH                      |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TOSH                                     0x0
#define TOSH_address                             0xFEF
#define TOSH_position                            0x0
#define TOSH_size                                0x7
#define TOSH_value_mask                          0x7F
#define TOSH_clear_mask                          0x80


/*---------------------------------------------------------------------------------------------------------------#
| AADCON0                                                                                                  0x711 |
#----------------------------------------------------------------------------------------------------------------#
| - | AADCON0_CHS4 | AADCON0_CHS3 | AADCON0_CHS2 | AADCON0_CHS1 | AADCON0_CHS0 | AADCON0_GO_nDONE | AADCON0_ADON |
#----------------------------------------------------------------------------------------------------------------#
| 7 | 6            | 5            | 4            | 3            | 2            | 1                | 0            |
#---------------------------------------------------------------------------------------------------------------*/

#define AADCON0                                  0x0
#define AADCON0_address                          0x711
#define AADCON0_position                         0x0
#define AADCON0_size                             0x8
#define AADCON0_value_mask                       0xFF
#define AADCON0_clear_mask                       0x0

#define AADCON0_ADON                             0x0
#define AADCON0_ADON_address                     0x711
#define AADCON0_ADON_position                    0x0
#define AADCON0_ADON_size                        0x1
#define AADCON0_ADON_value_mask                  0x1
#define AADCON0_ADON_clear_mask                  0xFE

#define AADCON0_GO_nDONE                         0x1
#define AADCON0_GO_nDONE_address                 0x711
#define AADCON0_GO_nDONE_position                0x1
#define AADCON0_GO_nDONE_size                    0x1
#define AADCON0_GO_nDONE_value_mask              0x2
#define AADCON0_GO_nDONE_clear_mask              0xFD

#define AADCON0_CHS0                             0x2
#define AADCON0_CHS0_address                     0x711
#define AADCON0_CHS0_position                    0x2
#define AADCON0_CHS0_size                        0x1
#define AADCON0_CHS0_value_mask                  0x4
#define AADCON0_CHS0_clear_mask                  0xFB

#define AADCON0_CHS                              0x2
#define AADCON0_CHS_address                      0x711
#define AADCON0_CHS_position                     0x2
#define AADCON0_CHS_size                         0x5
#define AADCON0_CHS_value_mask                   0x7C
#define AADCON0_CHS_clear_mask                   0x83

#define AADCON0_CHS1                             0x3
#define AADCON0_CHS1_address                     0x711
#define AADCON0_CHS1_position                    0x3
#define AADCON0_CHS1_size                        0x1
#define AADCON0_CHS1_value_mask                  0x8
#define AADCON0_CHS1_clear_mask                  0xF7

#define AADCON0_CHS2                             0x4
#define AADCON0_CHS2_address                     0x711
#define AADCON0_CHS2_position                    0x4
#define AADCON0_CHS2_size                        0x1
#define AADCON0_CHS2_value_mask                  0x10
#define AADCON0_CHS2_clear_mask                  0xEF

#define AADCON0_CHS3                             0x5
#define AADCON0_CHS3_address                     0x711
#define AADCON0_CHS3_position                    0x5
#define AADCON0_CHS3_size                        0x1
#define AADCON0_CHS3_value_mask                  0x20
#define AADCON0_CHS3_clear_mask                  0xDF

#define AADCON0_CHS4                             0x6
#define AADCON0_CHS4_address                     0x711
#define AADCON0_CHS4_position                    0x6
#define AADCON0_CHS4_size                        0x1
#define AADCON0_CHS4_value_mask                  0x40
#define AADCON0_CHS4_clear_mask                  0xBF


/*---------------------------------------------------------------------------------------------------------#
| AADCON1                                                                                            0x712 |
#----------------------------------------------------------------------------------------------------------#
| AADCON1_ADFM | AADCON1_ADCS2 | AADCON1_ADCS1 | AADCON1_ADCS0 | - | - | AADCON1_ADPREF1 | AADCON1_ADPREF0 |
#----------------------------------------------------------------------------------------------------------#
| 7            | 6             | 5             | 4             | 3 | 2 | 1               | 0               |
#---------------------------------------------------------------------------------------------------------*/

#define AADCON1                                  0x0
#define AADCON1_address                          0x712
#define AADCON1_position                         0x0
#define AADCON1_size                             0x8
#define AADCON1_value_mask                       0xFF
#define AADCON1_clear_mask                       0x0

#define AADCON1_ADPREF0                          0x0
#define AADCON1_ADPREF0_address                  0x712
#define AADCON1_ADPREF0_position                 0x0
#define AADCON1_ADPREF0_size                     0x1
#define AADCON1_ADPREF0_value_mask               0x1
#define AADCON1_ADPREF0_clear_mask               0xFE

#define AADCON1_ADPREF                           0x0
#define AADCON1_ADPREF_address                   0x712
#define AADCON1_ADPREF_position                  0x0
#define AADCON1_ADPREF_size                      0x2
#define AADCON1_ADPREF_value_mask                0x3
#define AADCON1_ADPREF_clear_mask                0xFC

#define AADCON1_ADPREF1                          0x1
#define AADCON1_ADPREF1_address                  0x712
#define AADCON1_ADPREF1_position                 0x1
#define AADCON1_ADPREF1_size                     0x1
#define AADCON1_ADPREF1_value_mask               0x2
#define AADCON1_ADPREF1_clear_mask               0xFD

#define AADCON1_ADCS0                            0x4
#define AADCON1_ADCS0_address                    0x712
#define AADCON1_ADCS0_position                   0x4
#define AADCON1_ADCS0_size                       0x1
#define AADCON1_ADCS0_value_mask                 0x10
#define AADCON1_ADCS0_clear_mask                 0xEF

#define AADCON1_ADCS                             0x4
#define AADCON1_ADCS_address                     0x712
#define AADCON1_ADCS_position                    0x4
#define AADCON1_ADCS_size                        0x3
#define AADCON1_ADCS_value_mask                  0x70
#define AADCON1_ADCS_clear_mask                  0x8F

#define AADCON1_ADCS1                            0x5
#define AADCON1_ADCS1_address                    0x712
#define AADCON1_ADCS1_position                   0x5
#define AADCON1_ADCS1_size                       0x1
#define AADCON1_ADCS1_value_mask                 0x20
#define AADCON1_ADCS1_clear_mask                 0xDF

#define AADCON1_ADCS2                            0x6
#define AADCON1_ADCS2_address                    0x712
#define AADCON1_ADCS2_position                   0x6
#define AADCON1_ADCS2_size                       0x1
#define AADCON1_ADCS2_value_mask                 0x40
#define AADCON1_ADCS2_clear_mask                 0xBF

#define AADCON1_ADFM                             0x7
#define AADCON1_ADFM_address                     0x712
#define AADCON1_ADFM_position                    0x7
#define AADCON1_ADFM_size                        0x1
#define AADCON1_ADFM_value_mask                  0x80
#define AADCON1_ADFM_clear_mask                  0x7F


/*---------------------------------------------------------------------------#
| AADCON2                                                              0x713 |
#----------------------------------------------------------------------------#
| - | AADCON2_TRIGSEL2 | AADCON2_TRIGSEL1 | AADCON2_TRIGSEL0 | - | - | - | - |
#----------------------------------------------------------------------------#
| 7 | 6                | 5                | 4                | 3 | 2 | 1 | 0 |
#---------------------------------------------------------------------------*/

#define AADCON2                                  0x0
#define AADCON2_address                          0x713
#define AADCON2_position                         0x0
#define AADCON2_size                             0x8
#define AADCON2_value_mask                       0xFF
#define AADCON2_clear_mask                       0x0

#define AADCON2_TRIGSEL                          0x4
#define AADCON2_TRIGSEL_address                  0x713
#define AADCON2_TRIGSEL_position                 0x4
#define AADCON2_TRIGSEL_size                     0x3
#define AADCON2_TRIGSEL_value_mask               0x70
#define AADCON2_TRIGSEL_clear_mask               0x8F

#define AADCON2_TRIGSEL0                         0x4
#define AADCON2_TRIGSEL0_address                 0x713
#define AADCON2_TRIGSEL0_position                0x4
#define AADCON2_TRIGSEL0_size                    0x1
#define AADCON2_TRIGSEL0_value_mask              0x10
#define AADCON2_TRIGSEL0_clear_mask              0xEF

#define AADCON2_TRIGSEL1                         0x5
#define AADCON2_TRIGSEL1_address                 0x713
#define AADCON2_TRIGSEL1_position                0x5
#define AADCON2_TRIGSEL1_size                    0x1
#define AADCON2_TRIGSEL1_value_mask              0x20
#define AADCON2_TRIGSEL1_clear_mask              0xDF

#define AADCON2_TRIGSEL2                         0x6
#define AADCON2_TRIGSEL2_address                 0x713
#define AADCON2_TRIGSEL2_position                0x6
#define AADCON2_TRIGSEL2_size                    0x1
#define AADCON2_TRIGSEL2_value_mask              0x40
#define AADCON2_TRIGSEL2_clear_mask              0xBF


/*-------------------------------------------------------------#
| AADCON3                                                0x714 |
#--------------------------------------------------------------#
| ADEPPOL | ADIPPOL | - | ADOEN | ADOOEN | - | ADIPEN | ADDSEN |
#--------------------------------------------------------------#
| 7       | 6       | 5 | 4     | 3      | 2 | 1      | 0      |
#-------------------------------------------------------------*/

#define AADCON3                                  0x0
#define AADCON3_address                          0x714
#define AADCON3_position                         0x0
#define AADCON3_size                             0x8
#define AADCON3_value_mask                       0xFF
#define AADCON3_clear_mask                       0x0

#define ADDSEN                                   0x0
#define ADDSEN_address                           0x714
#define ADDSEN_position                          0x0
#define ADDSEN_size                              0x1
#define ADDSEN_value_mask                        0x1
#define ADDSEN_clear_mask                        0xFE

#define ADIPEN                                   0x1
#define ADIPEN_address                           0x714
#define ADIPEN_position                          0x1
#define ADIPEN_size                              0x1
#define ADIPEN_value_mask                        0x2
#define ADIPEN_clear_mask                        0xFD

#define ADOOEN                                   0x3
#define ADOOEN_address                           0x714
#define ADOOEN_position                          0x3
#define ADOOEN_size                              0x1
#define ADOOEN_value_mask                        0x8
#define ADOOEN_clear_mask                        0xF7

#define ADOEN                                    0x4
#define ADOEN_address                            0x714
#define ADOEN_position                           0x4
#define ADOEN_size                               0x1
#define ADOEN_value_mask                         0x10
#define ADOEN_clear_mask                         0xEF

#define ADIPPOL                                  0x6
#define ADIPPOL_address                          0x714
#define ADIPPOL_position                         0x6
#define ADIPPOL_size                             0x1
#define ADIPPOL_value_mask                       0x40
#define ADIPPOL_clear_mask                       0xBF

#define ADEPPOL                                  0x7
#define ADEPPOL_address                          0x714
#define ADEPPOL_position                         0x7
#define ADEPPOL_size                             0x1
#define ADEPPOL_value_mask                       0x80
#define ADEPPOL_clear_mask                       0x7F


/*---------------------------------------------#
| AADSTAT                                0x715 |
#----------------------------------------------#
| - | - | - | - | - | ADCONV | ADSTG1 | ADSTG0 |
#----------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1      | 0      |
#---------------------------------------------*/

#define AADSTAT                                  0x0
#define AADSTAT_address                          0x715
#define AADSTAT_position                         0x0
#define AADSTAT_size                             0x8
#define AADSTAT_value_mask                       0xFF
#define AADSTAT_clear_mask                       0x0

#define ADSTG                                    0x0
#define ADSTG_address                            0x715
#define ADSTG_position                           0x0
#define ADSTG_size                               0x2
#define ADSTG_value_mask                         0x3
#define ADSTG_clear_mask                         0xFC

#define ADSTG0                                   0x0
#define ADSTG0_address                           0x715
#define ADSTG0_position                          0x0
#define ADSTG0_size                              0x1
#define ADSTG0_value_mask                        0x1
#define ADSTG0_clear_mask                        0xFE

#define ADSTG1                                   0x1
#define ADSTG1_address                           0x715
#define ADSTG1_position                          0x1
#define ADSTG1_size                              0x1
#define ADSTG1_value_mask                        0x2
#define ADSTG1_clear_mask                        0xFD

#define ADCONV                                   0x2
#define ADCONV_address                           0x715
#define ADCONV_position                          0x2
#define ADCONV_size                              0x1
#define ADCONV_value_mask                        0x4
#define ADCONV_clear_mask                        0xFB


/*-----------------------------------------------------------------#
| AADPRE                                                     0x716 |
#------------------------------------------------------------------#
| - | ADPRE6 | ADPRE5 | ADPRE4 | ADPRE3 | ADPRE2 | ADPRE1 | ADPRE0 |
#------------------------------------------------------------------#
| 7 | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

#define AADPRE                                   0x0
#define AADPRE_address                           0x716
#define AADPRE_position                          0x0
#define AADPRE_size                              0x8
#define AADPRE_value_mask                        0xFF
#define AADPRE_clear_mask                        0x0

#define ADPRE0                                   0x0
#define ADPRE0_address                           0x716
#define ADPRE0_position                          0x0
#define ADPRE0_size                              0x1
#define ADPRE0_value_mask                        0x1
#define ADPRE0_clear_mask                        0xFE

#define ADPRE                                    0x0
#define ADPRE_address                            0x716
#define ADPRE_position                           0x0
#define ADPRE_size                               0x7
#define ADPRE_value_mask                         0x7F
#define ADPRE_clear_mask                         0x80

#define ADPRE1                                   0x1
#define ADPRE1_address                           0x716
#define ADPRE1_position                          0x1
#define ADPRE1_size                              0x1
#define ADPRE1_value_mask                        0x2
#define ADPRE1_clear_mask                        0xFD

#define ADPRE2                                   0x2
#define ADPRE2_address                           0x716
#define ADPRE2_position                          0x2
#define ADPRE2_size                              0x1
#define ADPRE2_value_mask                        0x4
#define ADPRE2_clear_mask                        0xFB

#define ADPRE3                                   0x3
#define ADPRE3_address                           0x716
#define ADPRE3_position                          0x3
#define ADPRE3_size                              0x1
#define ADPRE3_value_mask                        0x8
#define ADPRE3_clear_mask                        0xF7

#define ADPRE4                                   0x4
#define ADPRE4_address                           0x716
#define ADPRE4_position                          0x4
#define ADPRE4_size                              0x1
#define ADPRE4_value_mask                        0x10
#define ADPRE4_clear_mask                        0xEF

#define ADPRE5                                   0x5
#define ADPRE5_address                           0x716
#define ADPRE5_position                          0x5
#define ADPRE5_size                              0x1
#define ADPRE5_value_mask                        0x20
#define ADPRE5_clear_mask                        0xDF

#define ADPRE6                                   0x6
#define ADPRE6_address                           0x716
#define ADPRE6_position                          0x6
#define ADPRE6_size                              0x1
#define ADPRE6_value_mask                        0x40
#define ADPRE6_clear_mask                        0xBF


/*-----------------------------------------------------------------#
| AADACQ                                                     0x717 |
#------------------------------------------------------------------#
| - | ADACQ6 | ADACQ5 | ADACQ4 | ADACQ3 | ADACQ2 | ADACQ1 | ADACQ0 |
#------------------------------------------------------------------#
| 7 | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

#define AADACQ                                   0x0
#define AADACQ_address                           0x717
#define AADACQ_position                          0x0
#define AADACQ_size                              0x8
#define AADACQ_value_mask                        0xFF
#define AADACQ_clear_mask                        0x0

#define ADACQ                                    0x0
#define ADACQ_address                            0x717
#define ADACQ_position                           0x0
#define ADACQ_size                               0x7
#define ADACQ_value_mask                         0x7F
#define ADACQ_clear_mask                         0x80

#define ADACQ0                                   0x0
#define ADACQ0_address                           0x717
#define ADACQ0_position                          0x0
#define ADACQ0_size                              0x1
#define ADACQ0_value_mask                        0x1
#define ADACQ0_clear_mask                        0xFE

#define ADACQ1                                   0x1
#define ADACQ1_address                           0x717
#define ADACQ1_position                          0x1
#define ADACQ1_size                              0x1
#define ADACQ1_value_mask                        0x2
#define ADACQ1_clear_mask                        0xFD

#define ADACQ2                                   0x2
#define ADACQ2_address                           0x717
#define ADACQ2_position                          0x2
#define ADACQ2_size                              0x1
#define ADACQ2_value_mask                        0x4
#define ADACQ2_clear_mask                        0xFB

#define ADACQ3                                   0x3
#define ADACQ3_address                           0x717
#define ADACQ3_position                          0x3
#define ADACQ3_size                              0x1
#define ADACQ3_value_mask                        0x8
#define ADACQ3_clear_mask                        0xF7

#define ADACQ4                                   0x4
#define ADACQ4_address                           0x717
#define ADACQ4_position                          0x4
#define ADACQ4_size                              0x1
#define ADACQ4_value_mask                        0x10
#define ADACQ4_clear_mask                        0xEF

#define ADACQ5                                   0x5
#define ADACQ5_address                           0x717
#define ADACQ5_position                          0x5
#define ADACQ5_size                              0x1
#define ADACQ5_value_mask                        0x20
#define ADACQ5_clear_mask                        0xDF

#define ADACQ6                                   0x6
#define ADACQ6_address                           0x717
#define ADACQ6_position                          0x6
#define ADACQ6_size                              0x1
#define ADACQ6_value_mask                        0x40
#define ADACQ6_clear_mask                        0xBF


/*---------------------------------------------#
| AADGRD                                 0x718 |
#----------------------------------------------#
| GRDBOE | GRDAOE | GRDPOL | - | - | - | - | - |
#----------------------------------------------#
| 7      | 6      | 5      | 4 | 3 | 2 | 1 | 0 |
#---------------------------------------------*/

#define AADGRD                                   0x0
#define AADGRD_address                           0x718
#define AADGRD_position                          0x0
#define AADGRD_size                              0x8
#define AADGRD_value_mask                        0xFF
#define AADGRD_clear_mask                        0x0

#define GRDPOL                                   0x5
#define GRDPOL_address                           0x718
#define GRDPOL_position                          0x5
#define GRDPOL_size                              0x1
#define GRDPOL_value_mask                        0x20
#define GRDPOL_clear_mask                        0xDF

#define GRDAOE                                   0x6
#define GRDAOE_address                           0x718
#define GRDAOE_position                          0x6
#define GRDAOE_size                              0x1
#define GRDAOE_value_mask                        0x40
#define GRDAOE_clear_mask                        0xBF

#define GRDBOE                                   0x7
#define GRDBOE_address                           0x718
#define GRDBOE_position                          0x7
#define GRDBOE_size                              0x1
#define GRDBOE_value_mask                        0x80
#define GRDBOE_clear_mask                        0x7F


/*------------------------------------------------#
| AADCAP                                    0x719 |
#-------------------------------------------------#
| - | - | - | - | - | ADDCAP2 | ADDCAP1 | ADDCAP0 |
#-------------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2       | 1       | 0       |
#------------------------------------------------*/

#define AADCAP                                   0x0
#define AADCAP_address                           0x719
#define AADCAP_position                          0x0
#define AADCAP_size                              0x8
#define AADCAP_value_mask                        0xFF
#define AADCAP_clear_mask                        0x0

#define ADDCAP                                   0x0
#define ADDCAP_address                           0x719
#define ADDCAP_position                          0x0
#define ADDCAP_size                              0x3
#define ADDCAP_value_mask                        0x7
#define ADDCAP_clear_mask                        0xF8

#define ADDCAP0                                  0x0
#define ADDCAP0_address                          0x719
#define ADDCAP0_position                         0x0
#define ADDCAP0_size                             0x1
#define ADDCAP0_value_mask                       0x1
#define ADDCAP0_clear_mask                       0xFE

#define ADDCAP1                                  0x1
#define ADDCAP1_address                          0x719
#define ADDCAP1_position                         0x1
#define ADDCAP1_size                             0x1
#define ADDCAP1_value_mask                       0x2
#define ADDCAP1_clear_mask                       0xFD

#define ADDCAP2                                  0x2
#define ADDCAP2_address                          0x719
#define ADDCAP2_position                         0x2
#define ADDCAP2_size                             0x1
#define ADDCAP2_value_mask                       0x4
#define ADDCAP2_clear_mask                       0xFB


/*------------------------------#
| AADRES0L                0x71A |
#-------------------------------#
| ADRES0L                       |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define AADRES0L                                 0x0
#define AADRES0L_address                         0x71A
#define AADRES0L_position                        0x0
#define AADRES0L_size                            0x8
#define AADRES0L_value_mask                      0xFF
#define AADRES0L_clear_mask                      0x0

#define ADRES0L                                  0x0
#define ADRES0L_address                          0x71A
#define ADRES0L_position                         0x0
#define ADRES0L_size                             0x8
#define ADRES0L_value_mask                       0xFF
#define ADRES0L_clear_mask                       0x0


/*------------------------------#
| AADRES0H                0x71B |
#-------------------------------#
| ADRES0H                       |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define AADRES0H                                 0x0
#define AADRES0H_address                         0x71B
#define AADRES0H_position                        0x0
#define AADRES0H_size                            0x8
#define AADRES0H_value_mask                      0xFF
#define AADRES0H_clear_mask                      0x0

#define ADRES0H                                  0x0
#define ADRES0H_address                          0x71B
#define ADRES0H_position                         0x0
#define ADRES0H_size                             0x8
#define ADRES0H_value_mask                       0xFF
#define ADRES0H_clear_mask                       0x0


/*------------------------------#
| AADRES1L                0x71C |
#-------------------------------#
| ADRES1L                       |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define AADRES1L                                 0x0
#define AADRES1L_address                         0x71C
#define AADRES1L_position                        0x0
#define AADRES1L_size                            0x8
#define AADRES1L_value_mask                      0xFF
#define AADRES1L_clear_mask                      0x0

#define ADRES1L                                  0x0
#define ADRES1L_address                          0x71C
#define ADRES1L_position                         0x0
#define ADRES1L_size                             0x8
#define ADRES1L_value_mask                       0xFF
#define ADRES1L_clear_mask                       0x0


/*------------------------------#
| AADRES1H                0x71D |
#-------------------------------#
| ADRES1H                       |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define AADRES1H                                 0x0
#define AADRES1H_address                         0x71D
#define AADRES1H_position                        0x0
#define AADRES1H_size                            0x8
#define AADRES1H_value_mask                      0xFF
#define AADRES1H_clear_mask                      0x0

#define ADRES1H                                  0x0
#define ADRES1H_address                          0x71D
#define ADRES1H_position                         0x0
#define ADRES1H_size                             0x8
#define ADRES1H_value_mask                       0xFF
#define ADRES1H_clear_mask                       0x0

#endif // _PIC12LF1552_H_
