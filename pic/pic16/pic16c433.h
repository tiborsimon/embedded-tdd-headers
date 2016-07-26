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

#ifndef _PIC16C433_H_
#define _PIC16C433_H_


/*--------------------------------------------#
| STATUS                                  0x3 |
#---------------------------------------------#
| IRP | RP1 | RP0 | nTO | nPD | ZERO | DC | C |
#---------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2    | 1  | 0 |
#--------------------------------------------*/

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

#define RP0                                      0x5
#define RP0_address                              0x003
#define RP0_position                             0x5
#define RP0_size                                 0x1
#define RP0_value_mask                           0x20
#define RP0_clear_mask                           0xDF

#define RP                                       0x5
#define RP_address                               0x003
#define RP_position                              0x5
#define RP_size                                  0x2
#define RP_value_mask                            0x60
#define RP_clear_mask                            0x9F

#define RP1                                      0x6
#define RP1_address                              0x003
#define RP1_position                             0x6
#define RP1_size                                 0x1
#define RP1_value_mask                           0x40
#define RP1_clear_mask                           0xBF

#define STATUS_LINRX                             0x6
#define STATUS_LINRX_address                     0x003
#define STATUS_LINRX_position                    0x6
#define STATUS_LINRX_size                        0x1
#define STATUS_LINRX_value_mask                  0x40
#define STATUS_LINRX_clear_mask                  0xBF

#define STATUS_LINTX                             0x7
#define STATUS_LINTX_address                     0x003
#define STATUS_LINTX_position                    0x7
#define STATUS_LINTX_size                        0x1
#define STATUS_LINTX_value_mask                  0x80
#define STATUS_LINTX_clear_mask                  0x7F

#define IRP                                      0x7
#define IRP_address                              0x003
#define IRP_position                             0x7
#define IRP_size                                 0x1
#define IRP_value_mask                           0x80
#define IRP_clear_mask                           0x7F


/*------------------------------------------------------------#
| GPIO                                                    0x5 |
#-------------------------------------------------------------#
| GPIO_LINTX | GPIO_LINRX | GP5 | GP4 | GP3 | GP2 | GP1 | GP0 |
#-------------------------------------------------------------#
| 7          | 6          | 5   | 4   | 3   | 2   | 1   | 0   |
#------------------------------------------------------------*/

#define GPIO                                     0x0
#define GPIO_address                             0x005
#define GPIO_position                            0x0
#define GPIO_size                                0x8
#define GPIO_value_mask                          0xFF
#define GPIO_clear_mask                          0x0

#define GP0                                      0x0
#define GP0_address                              0x005
#define GP0_position                             0x0
#define GP0_size                                 0x1
#define GP0_value_mask                           0x1
#define GP0_clear_mask                           0xFE

#define GP1                                      0x1
#define GP1_address                              0x005
#define GP1_position                             0x1
#define GP1_size                                 0x1
#define GP1_value_mask                           0x2
#define GP1_clear_mask                           0xFD

#define GP2                                      0x2
#define GP2_address                              0x005
#define GP2_position                             0x2
#define GP2_size                                 0x1
#define GP2_value_mask                           0x4
#define GP2_clear_mask                           0xFB

#define GP3                                      0x3
#define GP3_address                              0x005
#define GP3_position                             0x3
#define GP3_size                                 0x1
#define GP3_value_mask                           0x8
#define GP3_clear_mask                           0xF7

#define GP4                                      0x4
#define GP4_address                              0x005
#define GP4_position                             0x4
#define GP4_size                                 0x1
#define GP4_value_mask                           0x10
#define GP4_clear_mask                           0xEF

#define GP5                                      0x5
#define GP5_address                              0x005
#define GP5_position                             0x5
#define GP5_size                                 0x1
#define GP5_value_mask                           0x20
#define GP5_clear_mask                           0xDF

#define GPIO_LINRX                               0x6
#define GPIO_LINRX_address                       0x005
#define GPIO_LINRX_position                      0x6
#define GPIO_LINRX_size                          0x1
#define GPIO_LINRX_value_mask                    0x40
#define GPIO_LINRX_clear_mask                    0xBF

#define GPIO_LINTX                               0x7
#define GPIO_LINTX_address                       0x005
#define GPIO_LINTX_position                      0x7
#define GPIO_LINTX_size                          0x1
#define GPIO_LINTX_value_mask                    0x80
#define GPIO_LINTX_clear_mask                    0x7F


/*-----------------------------------------------------#
| INTCON                                           0xB |
#------------------------------------------------------#
| GIE | PEIE | T0IE | INTE | GPIE | T0IF | INTF | GPIF |
#------------------------------------------------------#
| 7   | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#-----------------------------------------------------*/

#define INTCON                                   0x0
#define INTCON_address                           0x00B
#define INTCON_position                          0x0
#define INTCON_size                              0x8
#define INTCON_value_mask                        0xFF
#define INTCON_clear_mask                        0x0

#define GPIF                                     0x0
#define GPIF_address                             0x00B
#define GPIF_position                            0x0
#define GPIF_size                                0x1
#define GPIF_value_mask                          0x1
#define GPIF_clear_mask                          0xFE

#define INTF                                     0x1
#define INTF_address                             0x00B
#define INTF_position                            0x1
#define INTF_size                                0x1
#define INTF_value_mask                          0x2
#define INTF_clear_mask                          0xFD

#define TMR0IF                                   0x2
#define TMR0IF_address                           0x00B
#define TMR0IF_position                          0x2
#define TMR0IF_size                              0x1
#define TMR0IF_value_mask                        0x4
#define TMR0IF_clear_mask                        0xFB

#define T0IF                                     0x2
#define T0IF_address                             0x00B
#define T0IF_position                            0x2
#define T0IF_size                                0x1
#define T0IF_value_mask                          0x4
#define T0IF_clear_mask                          0xFB

#define GPIE                                     0x3
#define GPIE_address                             0x00B
#define GPIE_position                            0x3
#define GPIE_size                                0x1
#define GPIE_value_mask                          0x8
#define GPIE_clear_mask                          0xF7

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


/*---------------------------------#
| PIR1                         0xC |
#----------------------------------#
| - | ADIF | - | - | - | - | - | - |
#----------------------------------#
| 7 | 6    | 5 | 4 | 3 | 2 | 1 | 0 |
#---------------------------------*/

#define PIR1                                     0x0
#define PIR1_address                             0x00C
#define PIR1_position                            0x0
#define PIR1_size                                0x8
#define PIR1_value_mask                          0xFF
#define PIR1_clear_mask                          0x0

#define ADIF                                     0x6
#define ADIF_address                             0x00C
#define ADIF_position                            0x6
#define ADIF_size                                0x1
#define ADIF_value_mask                          0x40
#define ADIF_clear_mask                          0xBF


/*---------------------------------------------------#
| ADCON0                                        0x1F |
#----------------------------------------------------#
| ADCS1 | ADCS0 | - | CHS1 | CHS0 | nDONE | - | ADON |
#----------------------------------------------------#
| 7     | 6     | 5 | 4    | 3    | 2     | 1 | 0    |
#---------------------------------------------------*/

#define ADCON0                                   0x0
#define ADCON0_address                           0x01F
#define ADCON0_position                          0x0
#define ADCON0_size                              0x8
#define ADCON0_value_mask                        0xFF
#define ADCON0_clear_mask                        0x0

#define ADON                                     0x0
#define ADON_address                             0x01F
#define ADON_position                            0x0
#define ADON_size                                0x1
#define ADON_value_mask                          0x1
#define ADON_clear_mask                          0xFE

#define nDONE                                    0x2
#define nDONE_address                            0x01F
#define nDONE_position                           0x2
#define nDONE_size                               0x1
#define nDONE_value_mask                         0x4
#define nDONE_clear_mask                         0xFB

#define GO_nDONE                                 0x2
#define GO_nDONE_address                         0x01F
#define GO_nDONE_position                        0x2
#define GO_nDONE_size                            0x1
#define GO_nDONE_value_mask                      0x4
#define GO_nDONE_clear_mask                      0xFB

#define GO_DONE                                  0x2
#define GO_DONE_address                          0x01F
#define GO_DONE_position                         0x2
#define GO_DONE_size                             0x1
#define GO_DONE_value_mask                       0x4
#define GO_DONE_clear_mask                       0xFB

#define GO                                       0x2
#define GO_address                               0x01F
#define GO_position                              0x2
#define GO_size                                  0x1
#define GO_value_mask                            0x4
#define GO_clear_mask                            0xFB

#define CHS                                      0x3
#define CHS_address                              0x01F
#define CHS_position                             0x3
#define CHS_size                                 0x2
#define CHS_value_mask                           0x18
#define CHS_clear_mask                           0xE7

#define CHS0                                     0x3
#define CHS0_address                             0x01F
#define CHS0_position                            0x3
#define CHS0_size                                0x1
#define CHS0_value_mask                          0x8
#define CHS0_clear_mask                          0xF7

#define CHS1                                     0x4
#define CHS1_address                             0x01F
#define CHS1_position                            0x4
#define CHS1_size                                0x1
#define CHS1_value_mask                          0x10
#define CHS1_clear_mask                          0xEF

#define ADCS0                                    0x6
#define ADCS0_address                            0x01F
#define ADCS0_position                           0x6
#define ADCS0_size                               0x1
#define ADCS0_value_mask                         0x40
#define ADCS0_clear_mask                         0xBF

#define ADCS                                     0x6
#define ADCS_address                             0x01F
#define ADCS_position                            0x6
#define ADCS_size                                0x2
#define ADCS_value_mask                          0xC0
#define ADCS_clear_mask                          0x3F

#define ADCS1                                    0x7
#define ADCS1_address                            0x01F
#define ADCS1_position                           0x7
#define ADCS1_size                               0x1
#define ADCS1_value_mask                         0x80
#define ADCS1_clear_mask                         0x7F


/*-----------------------------------------------------#
| OPTION_REG                                      0x81 |
#------------------------------------------------------#
| nGPPU | INTEDG | T0CS | T0SE | PSA | PS2 | PS1 | PS0 |
#------------------------------------------------------#
| 7     | 6      | 5    | 4    | 3   | 2   | 1   | 0   |
#-----------------------------------------------------*/

#define OPTION_REG                               0x0
#define OPTION_REG_address                       0x081
#define OPTION_REG_position                      0x0
#define OPTION_REG_size                          0x8
#define OPTION_REG_value_mask                    0xFF
#define OPTION_REG_clear_mask                    0x0

#define PS                                       0x0
#define PS_address                               0x081
#define PS_position                              0x0
#define PS_size                                  0x3
#define PS_value_mask                            0x7
#define PS_clear_mask                            0xF8

#define PS0                                      0x0
#define PS0_address                              0x081
#define PS0_position                             0x0
#define PS0_size                                 0x1
#define PS0_value_mask                           0x1
#define PS0_clear_mask                           0xFE

#define PS1                                      0x1
#define PS1_address                              0x081
#define PS1_position                             0x1
#define PS1_size                                 0x1
#define PS1_value_mask                           0x2
#define PS1_clear_mask                           0xFD

#define PS2                                      0x2
#define PS2_address                              0x081
#define PS2_position                             0x2
#define PS2_size                                 0x1
#define PS2_value_mask                           0x4
#define PS2_clear_mask                           0xFB

#define PSA                                      0x3
#define PSA_address                              0x081
#define PSA_position                             0x3
#define PSA_size                                 0x1
#define PSA_value_mask                           0x8
#define PSA_clear_mask                           0xF7

#define T0SE                                     0x4
#define T0SE_address                             0x081
#define T0SE_position                            0x4
#define T0SE_size                                0x1
#define T0SE_value_mask                          0x10
#define T0SE_clear_mask                          0xEF

#define T0CS                                     0x5
#define T0CS_address                             0x081
#define T0CS_position                            0x5
#define T0CS_size                                0x1
#define T0CS_value_mask                          0x20
#define T0CS_clear_mask                          0xDF

#define INTEDG                                   0x6
#define INTEDG_address                           0x081
#define INTEDG_position                          0x6
#define INTEDG_size                              0x1
#define INTEDG_value_mask                        0x40
#define INTEDG_clear_mask                        0xBF

#define nGPPU                                    0x7
#define nGPPU_address                            0x081
#define nGPPU_position                           0x7
#define nGPPU_size                               0x1
#define nGPPU_value_mask                         0x80
#define nGPPU_clear_mask                         0x7F


/*------------------------------------------------------#
| TRIS                                             0x85 |
#-------------------------------------------------------#
| - | - | TRIS5 | TRIS4 | TRIS3 | TRIS2 | TRIS1 | TRIS0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define TRIS                                     0x0
#define TRIS_address                             0x085
#define TRIS_position                            0x0
#define TRIS_size                                0x8
#define TRIS_value_mask                          0xFF
#define TRIS_clear_mask                          0x0

#define TRIS0                                    0x0
#define TRIS0_address                            0x085
#define TRIS0_position                           0x0
#define TRIS0_size                               0x1
#define TRIS0_value_mask                         0x1
#define TRIS0_clear_mask                         0xFE

#define TRIS1                                    0x1
#define TRIS1_address                            0x085
#define TRIS1_position                           0x1
#define TRIS1_size                               0x1
#define TRIS1_value_mask                         0x2
#define TRIS1_clear_mask                         0xFD

#define TRIS2                                    0x2
#define TRIS2_address                            0x085
#define TRIS2_position                           0x2
#define TRIS2_size                               0x1
#define TRIS2_value_mask                         0x4
#define TRIS2_clear_mask                         0xFB

#define TRIS3                                    0x3
#define TRIS3_address                            0x085
#define TRIS3_position                           0x3
#define TRIS3_size                               0x1
#define TRIS3_value_mask                         0x8
#define TRIS3_clear_mask                         0xF7

#define TRIS4                                    0x4
#define TRIS4_address                            0x085
#define TRIS4_position                           0x4
#define TRIS4_size                               0x1
#define TRIS4_value_mask                         0x10
#define TRIS4_clear_mask                         0xEF

#define TRIS5                                    0x5
#define TRIS5_address                            0x085
#define TRIS5_position                           0x5
#define TRIS5_size                               0x1
#define TRIS5_value_mask                         0x20
#define TRIS5_clear_mask                         0xDF


/*---------------------------------#
| PIE1                        0x8C |
#----------------------------------#
| - | ADIE | - | - | - | - | - | - |
#----------------------------------#
| 7 | 6    | 5 | 4 | 3 | 2 | 1 | 0 |
#---------------------------------*/

#define PIE1                                     0x0
#define PIE1_address                             0x08C
#define PIE1_position                            0x0
#define PIE1_size                                0x8
#define PIE1_value_mask                          0xFF
#define PIE1_clear_mask                          0x0

#define ADIE                                     0x6
#define ADIE_address                             0x08C
#define ADIE_position                            0x6
#define ADIE_size                                0x1
#define ADIE_value_mask                          0x40
#define ADIE_clear_mask                          0xBF


/*---------------------------------#
| PCON                        0x8E |
#----------------------------------#
| - | - | - | - | - | - | nPOR | - |
#----------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1    | 0 |
#---------------------------------*/

#define PCON                                     0x0
#define PCON_address                             0x08E
#define PCON_position                            0x0
#define PCON_size                                0x8
#define PCON_value_mask                          0xFF
#define PCON_clear_mask                          0x0

#define nPOR                                     0x1
#define nPOR_address                             0x08E
#define nPOR_position                            0x1
#define nPOR_size                                0x1
#define nPOR_value_mask                          0x2
#define nPOR_clear_mask                          0xFD


/*----------------------------------------------------#
| OSCCAL                                         0x8F |
#-----------------------------------------------------#
| CAL3 | CAL2 | CAL1 | CAL0 | CALFST | CALSLW | - | - |
#-----------------------------------------------------#
| 7    | 6    | 5    | 4    | 3      | 2      | 1 | 0 |
#----------------------------------------------------*/

#define OSCCAL                                   0x0
#define OSCCAL_address                           0x08F
#define OSCCAL_position                          0x0
#define OSCCAL_size                              0x8
#define OSCCAL_value_mask                        0xFF
#define OSCCAL_clear_mask                        0x0

#define CALSLW                                   0x2
#define CALSLW_address                           0x08F
#define CALSLW_position                          0x2
#define CALSLW_size                              0x1
#define CALSLW_value_mask                        0x4
#define CALSLW_clear_mask                        0xFB

#define CALFST                                   0x3
#define CALFST_address                           0x08F
#define CALFST_position                          0x3
#define CALFST_size                              0x1
#define CALFST_value_mask                        0x8
#define CALFST_clear_mask                        0xF7

#define CAL0                                     0x4
#define CAL0_address                             0x08F
#define CAL0_position                            0x4
#define CAL0_size                                0x1
#define CAL0_value_mask                          0x10
#define CAL0_clear_mask                          0xEF

#define CAL                                      0x4
#define CAL_address                              0x08F
#define CAL_position                             0x4
#define CAL_size                                 0x4
#define CAL_value_mask                           0xF0
#define CAL_clear_mask                           0xF

#define CAL1                                     0x5
#define CAL1_address                             0x08F
#define CAL1_position                            0x5
#define CAL1_size                                0x1
#define CAL1_value_mask                          0x20
#define CAL1_clear_mask                          0xDF

#define CAL2                                     0x6
#define CAL2_address                             0x08F
#define CAL2_position                            0x6
#define CAL2_size                                0x1
#define CAL2_value_mask                          0x40
#define CAL2_clear_mask                          0xBF

#define CAL3                                     0x7
#define CAL3_address                             0x08F
#define CAL3_position                            0x7
#define CAL3_size                                0x1
#define CAL3_value_mask                          0x80
#define CAL3_clear_mask                          0x7F


/*------------------------------------------#
| ADCON1                               0x9F |
#-------------------------------------------#
| - | - | - | - | - | PCFG2 | PCFG1 | PCFG0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------*/

#define ADCON1                                   0x0
#define ADCON1_address                           0x09F
#define ADCON1_position                          0x0
#define ADCON1_size                              0x8
#define ADCON1_value_mask                        0xFF
#define ADCON1_clear_mask                        0x0

#define PCFG0                                    0x0
#define PCFG0_address                            0x09F
#define PCFG0_position                           0x0
#define PCFG0_size                               0x1
#define PCFG0_value_mask                         0x1
#define PCFG0_clear_mask                         0xFE

#define PCFG                                     0x0
#define PCFG_address                             0x09F
#define PCFG_position                            0x0
#define PCFG_size                                0x3
#define PCFG_value_mask                          0x7
#define PCFG_clear_mask                          0xF8

#define PCFG1                                    0x1
#define PCFG1_address                            0x09F
#define PCFG1_position                           0x1
#define PCFG1_size                               0x1
#define PCFG1_value_mask                         0x2
#define PCFG1_clear_mask                         0xFD

#define PCFG2                                    0x2
#define PCFG2_address                            0x09F
#define PCFG2_position                           0x2
#define PCFG2_size                               0x1
#define PCFG2_value_mask                         0x4
#define PCFG2_clear_mask                         0xFB

#endif // _PIC16C433_H_
