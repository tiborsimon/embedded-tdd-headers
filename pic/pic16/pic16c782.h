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

#ifndef _PIC16C782_H_
#define _PIC16C782_H_


/*---------------------------------------------------#
| STATUS                                         0x3 |
#----------------------------------------------------#
| IRP | RP1 | RP0 | nTO | nPD | ZERO | STATUS_DC | C |
#----------------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2    | 1         | 0 |
#---------------------------------------------------*/

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

#define STATUS_DC                                0x1
#define STATUS_DC_address                        0x003
#define STATUS_DC_position                       0x1
#define STATUS_DC_size                           0x1
#define STATUS_DC_value_mask                     0x2
#define STATUS_DC_clear_mask                     0xFD

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

#define IRP                                      0x7
#define IRP_address                              0x003
#define IRP_position                             0x7
#define IRP_size                                 0x1
#define IRP_value_mask                           0x80
#define IRP_clear_mask                           0x7F


/*----------------------------------------------#
| PORTA                                     0x5 |
#-----------------------------------------------#
| RA7 | RA6 | RA5 | RA4 | RA3 | RA2 | RA1 | RA0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define PORTA                                    0x0
#define PORTA_address                            0x005
#define PORTA_position                           0x0
#define PORTA_size                               0x8
#define PORTA_value_mask                         0xFF
#define PORTA_clear_mask                         0x0

#define RA0                                      0x0
#define RA0_address                              0x005
#define RA0_position                             0x0
#define RA0_size                                 0x1
#define RA0_value_mask                           0x1
#define RA0_clear_mask                           0xFE

#define RA1                                      0x1
#define RA1_address                              0x005
#define RA1_position                             0x1
#define RA1_size                                 0x1
#define RA1_value_mask                           0x2
#define RA1_clear_mask                           0xFD

#define RA2                                      0x2
#define RA2_address                              0x005
#define RA2_position                             0x2
#define RA2_size                                 0x1
#define RA2_value_mask                           0x4
#define RA2_clear_mask                           0xFB

#define RA3                                      0x3
#define RA3_address                              0x005
#define RA3_position                             0x3
#define RA3_size                                 0x1
#define RA3_value_mask                           0x8
#define RA3_clear_mask                           0xF7

#define RA4                                      0x4
#define RA4_address                              0x005
#define RA4_position                             0x4
#define RA4_size                                 0x1
#define RA4_value_mask                           0x10
#define RA4_clear_mask                           0xEF

#define RA5                                      0x5
#define RA5_address                              0x005
#define RA5_position                             0x5
#define RA5_size                                 0x1
#define RA5_value_mask                           0x20
#define RA5_clear_mask                           0xDF

#define RA6                                      0x6
#define RA6_address                              0x005
#define RA6_position                             0x6
#define RA6_size                                 0x1
#define RA6_value_mask                           0x40
#define RA6_clear_mask                           0xBF

#define RA7                                      0x7
#define RA7_address                              0x005
#define RA7_position                             0x7
#define RA7_size                                 0x1
#define RA7_value_mask                           0x80
#define RA7_clear_mask                           0x7F


/*----------------------------------------------#
| PORTB                                     0x6 |
#-----------------------------------------------#
| RB7 | RB6 | RB5 | RB4 | RB3 | RB2 | RB1 | RB0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define PORTB                                    0x0
#define PORTB_address                            0x006
#define PORTB_position                           0x0
#define PORTB_size                               0x8
#define PORTB_value_mask                         0xFF
#define PORTB_clear_mask                         0x0

#define RB0                                      0x0
#define RB0_address                              0x006
#define RB0_position                             0x0
#define RB0_size                                 0x1
#define RB0_value_mask                           0x1
#define RB0_clear_mask                           0xFE

#define RB1                                      0x1
#define RB1_address                              0x006
#define RB1_position                             0x1
#define RB1_size                                 0x1
#define RB1_value_mask                           0x2
#define RB1_clear_mask                           0xFD

#define RB2                                      0x2
#define RB2_address                              0x006
#define RB2_position                             0x2
#define RB2_size                                 0x1
#define RB2_value_mask                           0x4
#define RB2_clear_mask                           0xFB

#define RB3                                      0x3
#define RB3_address                              0x006
#define RB3_position                             0x3
#define RB3_size                                 0x1
#define RB3_value_mask                           0x8
#define RB3_clear_mask                           0xF7

#define RB4                                      0x4
#define RB4_address                              0x006
#define RB4_position                             0x4
#define RB4_size                                 0x1
#define RB4_value_mask                           0x10
#define RB4_clear_mask                           0xEF

#define RB5                                      0x5
#define RB5_address                              0x006
#define RB5_position                             0x5
#define RB5_size                                 0x1
#define RB5_value_mask                           0x20
#define RB5_clear_mask                           0xDF

#define RB6                                      0x6
#define RB6_address                              0x006
#define RB6_position                             0x6
#define RB6_size                                 0x1
#define RB6_value_mask                           0x40
#define RB6_clear_mask                           0xBF

#define RB7                                      0x7
#define RB7_address                              0x006
#define RB7_position                             0x7
#define RB7_size                                 0x1
#define RB7_value_mask                           0x80
#define RB7_clear_mask                           0x7F


/*-----------------------------------------------------#
| INTCON                                           0xB |
#------------------------------------------------------#
| GIE | PEIE | T0IE | INTE | RBIE | T0IF | INTF | RBIF |
#------------------------------------------------------#
| 7   | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#-----------------------------------------------------*/

#define INTCON                                   0x0
#define INTCON_address                           0x00B
#define INTCON_position                          0x0
#define INTCON_size                              0x8
#define INTCON_value_mask                        0xFF
#define INTCON_clear_mask                        0x0

#define RBIF                                     0x0
#define RBIF_address                             0x00B
#define RBIF_position                            0x0
#define RBIF_size                                0x1
#define RBIF_value_mask                          0x1
#define RBIF_clear_mask                          0xFE

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

#define RBIE                                     0x3
#define RBIE_address                             0x00B
#define RBIE_position                            0x3
#define RBIE_size                                0x1
#define RBIE_value_mask                          0x8
#define RBIE_clear_mask                          0xF7

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


/*------------------------------------------------#
| PIR1                                        0xC |
#-------------------------------------------------#
| LVDIF | ADIF | C2IF | C1IF | - | - | - | TMR1IF |
#-------------------------------------------------#
| 7     | 6    | 5    | 4    | 3 | 2 | 1 | 0      |
#------------------------------------------------*/

#define PIR1                                     0x0
#define PIR1_address                             0x00C
#define PIR1_position                            0x0
#define PIR1_size                                0x8
#define PIR1_value_mask                          0xFF
#define PIR1_clear_mask                          0x0

#define TMR1IF                                   0x0
#define TMR1IF_address                           0x00C
#define TMR1IF_position                          0x0
#define TMR1IF_size                              0x1
#define TMR1IF_value_mask                        0x1
#define TMR1IF_clear_mask                        0xFE

#define C1IF                                     0x4
#define C1IF_address                             0x00C
#define C1IF_position                            0x4
#define C1IF_size                                0x1
#define C1IF_value_mask                          0x10
#define C1IF_clear_mask                          0xEF

#define C2IF                                     0x5
#define C2IF_address                             0x00C
#define C2IF_position                            0x5
#define C2IF_size                                0x1
#define C2IF_value_mask                          0x20
#define C2IF_clear_mask                          0xDF

#define ADIF                                     0x6
#define ADIF_address                             0x00C
#define ADIF_position                            0x6
#define ADIF_size                                0x1
#define ADIF_value_mask                          0x40
#define ADIF_clear_mask                          0xBF

#define LVDIF                                    0x7
#define LVDIF_address                            0x00C
#define LVDIF_position                           0x7
#define LVDIF_size                               0x1
#define LVDIF_value_mask                         0x80
#define LVDIF_clear_mask                         0x7F


/*----------------------------------------------------------------------#
| T1CON                                                            0x10 |
#-----------------------------------------------------------------------#
| - | TMR1GE | T1CKPS1 | T1CKPS0 | T1OSCEN | T1INSYNC | TMR1CS | TMR1ON |
#-----------------------------------------------------------------------#
| 7 | 6      | 5       | 4       | 3       | 2        | 1      | 0      |
#----------------------------------------------------------------------*/

#define T1CON                                    0x0
#define T1CON_address                            0x010
#define T1CON_position                           0x0
#define T1CON_size                               0x8
#define T1CON_value_mask                         0xFF
#define T1CON_clear_mask                         0x0

#define TMR1ON                                   0x0
#define TMR1ON_address                           0x010
#define TMR1ON_position                          0x0
#define TMR1ON_size                              0x1
#define TMR1ON_value_mask                        0x1
#define TMR1ON_clear_mask                        0xFE

#define TMR1CS                                   0x1
#define TMR1CS_address                           0x010
#define TMR1CS_position                          0x1
#define TMR1CS_size                              0x1
#define TMR1CS_value_mask                        0x2
#define TMR1CS_clear_mask                        0xFD

#define nT1SYNC                                  0x2
#define nT1SYNC_address                          0x010
#define nT1SYNC_position                         0x2
#define nT1SYNC_size                             0x1
#define nT1SYNC_value_mask                       0x4
#define nT1SYNC_clear_mask                       0xFB

#define T1INSYNC                                 0x2
#define T1INSYNC_address                         0x010
#define T1INSYNC_position                        0x2
#define T1INSYNC_size                            0x1
#define T1INSYNC_value_mask                      0x4
#define T1INSYNC_clear_mask                      0xFB

#define T1OSCEN                                  0x3
#define T1OSCEN_address                          0x010
#define T1OSCEN_position                         0x3
#define T1OSCEN_size                             0x1
#define T1OSCEN_value_mask                       0x8
#define T1OSCEN_clear_mask                       0xF7

#define T1CKPS0                                  0x4
#define T1CKPS0_address                          0x010
#define T1CKPS0_position                         0x4
#define T1CKPS0_size                             0x1
#define T1CKPS0_value_mask                       0x10
#define T1CKPS0_clear_mask                       0xEF

#define T1CKPS                                   0x4
#define T1CKPS_address                           0x010
#define T1CKPS_position                          0x4
#define T1CKPS_size                              0x2
#define T1CKPS_value_mask                        0x30
#define T1CKPS_clear_mask                        0xCF

#define T1CKPS1                                  0x5
#define T1CKPS1_address                          0x010
#define T1CKPS1_position                         0x5
#define T1CKPS1_size                             0x1
#define T1CKPS1_value_mask                       0x20
#define T1CKPS1_clear_mask                       0xDF

#define TMR1GE                                   0x6
#define TMR1GE_address                           0x010
#define TMR1GE_position                          0x6
#define TMR1GE_size                              0x1
#define TMR1GE_value_mask                        0x40
#define TMR1GE_clear_mask                        0xBF


/*---------------------------------------------------------#
| ADCON0                                              0x1F |
#----------------------------------------------------------#
| ADCS1 | ADCS0 | CHS2 | CHS1 | CHS0 | nDONE | CHS3 | ADON |
#----------------------------------------------------------#
| 7     | 6     | 5    | 4    | 3    | 2     | 1    | 0    |
#---------------------------------------------------------*/

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

#define CHS3                                     0x1
#define CHS3_address                             0x01F
#define CHS3_position                            0x1
#define CHS3_size                                0x1
#define CHS3_value_mask                          0x2
#define CHS3_clear_mask                          0xFD

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
#define CHS_size                                 0x3
#define CHS_value_mask                           0x38
#define CHS_clear_mask                           0xC7

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

#define CHS2                                     0x5
#define CHS2_address                             0x01F
#define CHS2_position                            0x5
#define CHS2_size                                0x1
#define CHS2_value_mask                          0x20
#define CHS2_clear_mask                          0xDF

#define ADCS                                     0x6
#define ADCS_address                             0x01F
#define ADCS_position                            0x6
#define ADCS_size                                0x2
#define ADCS_value_mask                          0xC0
#define ADCS_clear_mask                          0x3F

#define ADCS0                                    0x6
#define ADCS0_address                            0x01F
#define ADCS0_position                           0x6
#define ADCS0_size                               0x1
#define ADCS0_value_mask                         0x40
#define ADCS0_clear_mask                         0xBF

#define ADCS1                                    0x7
#define ADCS1_address                            0x01F
#define ADCS1_position                           0x7
#define ADCS1_size                               0x1
#define ADCS1_value_mask                         0x80
#define ADCS1_clear_mask                         0x7F


/*-----------------------------------------------------#
| OPTION_REG                                      0x81 |
#------------------------------------------------------#
| nRBPU | INTEDG | T0CS | T0SE | PSA | PS2 | PS1 | PS0 |
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

#define nRBPU                                    0x7
#define nRBPU_address                            0x081
#define nRBPU_position                           0x7
#define nRBPU_size                               0x1
#define nRBPU_value_mask                         0x80
#define nRBPU_clear_mask                         0x7F


/*----------------------------------------------------------------------#
| TRISA                                                            0x85 |
#-----------------------------------------------------------------------#
| TRISA7 | TRISA6 | TRISA5 | TRISA4 | TRISA3 | TRISA2 | TRISA1 | TRISA0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISA                                    0x0
#define TRISA_address                            0x085
#define TRISA_position                           0x0
#define TRISA_size                               0x8
#define TRISA_value_mask                         0xFF
#define TRISA_clear_mask                         0x0

#define TRISA0                                   0x0
#define TRISA0_address                           0x085
#define TRISA0_position                          0x0
#define TRISA0_size                              0x1
#define TRISA0_value_mask                        0x1
#define TRISA0_clear_mask                        0xFE

#define TRISA1                                   0x1
#define TRISA1_address                           0x085
#define TRISA1_position                          0x1
#define TRISA1_size                              0x1
#define TRISA1_value_mask                        0x2
#define TRISA1_clear_mask                        0xFD

#define TRISA2                                   0x2
#define TRISA2_address                           0x085
#define TRISA2_position                          0x2
#define TRISA2_size                              0x1
#define TRISA2_value_mask                        0x4
#define TRISA2_clear_mask                        0xFB

#define TRISA3                                   0x3
#define TRISA3_address                           0x085
#define TRISA3_position                          0x3
#define TRISA3_size                              0x1
#define TRISA3_value_mask                        0x8
#define TRISA3_clear_mask                        0xF7

#define TRISA4                                   0x4
#define TRISA4_address                           0x085
#define TRISA4_position                          0x4
#define TRISA4_size                              0x1
#define TRISA4_value_mask                        0x10
#define TRISA4_clear_mask                        0xEF

#define TRISA5                                   0x5
#define TRISA5_address                           0x085
#define TRISA5_position                          0x5
#define TRISA5_size                              0x1
#define TRISA5_value_mask                        0x20
#define TRISA5_clear_mask                        0xDF

#define TRISA6                                   0x6
#define TRISA6_address                           0x085
#define TRISA6_position                          0x6
#define TRISA6_size                              0x1
#define TRISA6_value_mask                        0x40
#define TRISA6_clear_mask                        0xBF

#define TRISA7                                   0x7
#define TRISA7_address                           0x085
#define TRISA7_position                          0x7
#define TRISA7_size                              0x1
#define TRISA7_value_mask                        0x80
#define TRISA7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| TRISB                                                            0x86 |
#-----------------------------------------------------------------------#
| TRISB7 | TRISB6 | TRISB5 | TRISB4 | TRISB3 | TRISB2 | TRISB1 | TRISB0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISB                                    0x0
#define TRISB_address                            0x086
#define TRISB_position                           0x0
#define TRISB_size                               0x8
#define TRISB_value_mask                         0xFF
#define TRISB_clear_mask                         0x0

#define TRISB0                                   0x0
#define TRISB0_address                           0x086
#define TRISB0_position                          0x0
#define TRISB0_size                              0x1
#define TRISB0_value_mask                        0x1
#define TRISB0_clear_mask                        0xFE

#define TRISB1                                   0x1
#define TRISB1_address                           0x086
#define TRISB1_position                          0x1
#define TRISB1_size                              0x1
#define TRISB1_value_mask                        0x2
#define TRISB1_clear_mask                        0xFD

#define TRISB2                                   0x2
#define TRISB2_address                           0x086
#define TRISB2_position                          0x2
#define TRISB2_size                              0x1
#define TRISB2_value_mask                        0x4
#define TRISB2_clear_mask                        0xFB

#define TRISB3                                   0x3
#define TRISB3_address                           0x086
#define TRISB3_position                          0x3
#define TRISB3_size                              0x1
#define TRISB3_value_mask                        0x8
#define TRISB3_clear_mask                        0xF7

#define TRISB4                                   0x4
#define TRISB4_address                           0x086
#define TRISB4_position                          0x4
#define TRISB4_size                              0x1
#define TRISB4_value_mask                        0x10
#define TRISB4_clear_mask                        0xEF

#define TRISB5                                   0x5
#define TRISB5_address                           0x086
#define TRISB5_position                          0x5
#define TRISB5_size                              0x1
#define TRISB5_value_mask                        0x20
#define TRISB5_clear_mask                        0xDF

#define TRISB6                                   0x6
#define TRISB6_address                           0x086
#define TRISB6_position                          0x6
#define TRISB6_size                              0x1
#define TRISB6_value_mask                        0x40
#define TRISB6_clear_mask                        0xBF

#define TRISB7                                   0x7
#define TRISB7_address                           0x086
#define TRISB7_position                          0x7
#define TRISB7_size                              0x1
#define TRISB7_value_mask                        0x80
#define TRISB7_clear_mask                        0x7F


/*------------------------------------------------#
| PIE1                                       0x8C |
#-------------------------------------------------#
| LVDIE | ADIE | C2IE | C1IE | - | - | - | TMR1IE |
#-------------------------------------------------#
| 7     | 6    | 5    | 4    | 3 | 2 | 1 | 0      |
#------------------------------------------------*/

#define PIE1                                     0x0
#define PIE1_address                             0x08C
#define PIE1_position                            0x0
#define PIE1_size                                0x8
#define PIE1_value_mask                          0xFF
#define PIE1_clear_mask                          0x0

#define TMR1IE                                   0x0
#define TMR1IE_address                           0x08C
#define TMR1IE_position                          0x0
#define TMR1IE_size                              0x1
#define TMR1IE_value_mask                        0x1
#define TMR1IE_clear_mask                        0xFE

#define C1IE                                     0x4
#define C1IE_address                             0x08C
#define C1IE_position                            0x4
#define C1IE_size                                0x1
#define C1IE_value_mask                          0x10
#define C1IE_clear_mask                          0xEF

#define C2IE                                     0x5
#define C2IE_address                             0x08C
#define C2IE_position                            0x5
#define C2IE_size                                0x1
#define C2IE_value_mask                          0x20
#define C2IE_clear_mask                          0xDF

#define ADIE                                     0x6
#define ADIE_address                             0x08C
#define ADIE_position                            0x6
#define ADIE_size                                0x1
#define ADIE_value_mask                          0x40
#define ADIE_clear_mask                          0xBF

#define LVDIE                                    0x7
#define LVDIE_address                            0x08C
#define LVDIE_position                           0x7
#define LVDIE_size                               0x1
#define LVDIE_value_mask                         0x80
#define LVDIE_clear_mask                         0x7F


/*-------------------------------------------#
| PCON                                  0x8E |
#--------------------------------------------#
| - | - | - | WDTON | OSCF | - | nPOR | nBOR |
#--------------------------------------------#
| 7 | 6 | 5 | 4     | 3    | 2 | 1    | 0    |
#-------------------------------------------*/

#define PCON                                     0x0
#define PCON_address                             0x08E
#define PCON_position                            0x0
#define PCON_size                                0x8
#define PCON_value_mask                          0xFF
#define PCON_clear_mask                          0x0

#define nBOR                                     0x0
#define nBOR_address                             0x08E
#define nBOR_position                            0x0
#define nBOR_size                                0x1
#define nBOR_value_mask                          0x1
#define nBOR_clear_mask                          0xFE

#define nBO                                      0x0
#define nBO_address                              0x08E
#define nBO_position                             0x0
#define nBO_size                                 0x1
#define nBO_value_mask                           0x1
#define nBO_clear_mask                           0xFE

#define nPOR                                     0x1
#define nPOR_address                             0x08E
#define nPOR_position                            0x1
#define nPOR_size                                0x1
#define nPOR_value_mask                          0x2
#define nPOR_clear_mask                          0xFD

#define OSCF                                     0x3
#define OSCF_address                             0x08E
#define OSCF_position                            0x3
#define OSCF_size                                0x1
#define OSCF_value_mask                          0x8
#define OSCF_clear_mask                          0xF7

#define WDTON                                    0x4
#define WDTON_address                            0x08E
#define WDTON_position                           0x4
#define WDTON_size                               0x1
#define WDTON_value_mask                         0x10
#define WDTON_clear_mask                         0xEF


/*--------------------------------------------------------------#
| WPUB                                                     0x95 |
#---------------------------------------------------------------#
| WPUB7 | WPUB6 | WPUB5 | WPUB4 | WPUB3 | WPUB2 | WPUB1 | WPUB0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define WPUB                                     0x0
#define WPUB_address                             0x095
#define WPUB_position                            0x0
#define WPUB_size                                0x8
#define WPUB_value_mask                          0xFF
#define WPUB_clear_mask                          0x0

#define WPUB0                                    0x0
#define WPUB0_address                            0x095
#define WPUB0_position                           0x0
#define WPUB0_size                               0x1
#define WPUB0_value_mask                         0x1
#define WPUB0_clear_mask                         0xFE

#define WPUB1                                    0x1
#define WPUB1_address                            0x095
#define WPUB1_position                           0x1
#define WPUB1_size                               0x1
#define WPUB1_value_mask                         0x2
#define WPUB1_clear_mask                         0xFD

#define WPUB2                                    0x2
#define WPUB2_address                            0x095
#define WPUB2_position                           0x2
#define WPUB2_size                               0x1
#define WPUB2_value_mask                         0x4
#define WPUB2_clear_mask                         0xFB

#define WPUB3                                    0x3
#define WPUB3_address                            0x095
#define WPUB3_position                           0x3
#define WPUB3_size                               0x1
#define WPUB3_value_mask                         0x8
#define WPUB3_clear_mask                         0xF7

#define WPUB4                                    0x4
#define WPUB4_address                            0x095
#define WPUB4_position                           0x4
#define WPUB4_size                               0x1
#define WPUB4_value_mask                         0x10
#define WPUB4_clear_mask                         0xEF

#define WPUB5                                    0x5
#define WPUB5_address                            0x095
#define WPUB5_position                           0x5
#define WPUB5_size                               0x1
#define WPUB5_value_mask                         0x20
#define WPUB5_clear_mask                         0xDF

#define WPUB6                                    0x6
#define WPUB6_address                            0x095
#define WPUB6_position                           0x6
#define WPUB6_size                               0x1
#define WPUB6_value_mask                         0x40
#define WPUB6_clear_mask                         0xBF

#define WPUB7                                    0x7
#define WPUB7_address                            0x095
#define WPUB7_position                           0x7
#define WPUB7_size                               0x1
#define WPUB7_value_mask                         0x80
#define WPUB7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| IOCB                                                     0x96 |
#---------------------------------------------------------------#
| IOCB7 | IOCB6 | IOCB5 | IOCB4 | IOCB3 | IOCB2 | IOCB1 | IOCB0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define IOCB                                     0x0
#define IOCB_address                             0x096
#define IOCB_position                            0x0
#define IOCB_size                                0x8
#define IOCB_value_mask                          0xFF
#define IOCB_clear_mask                          0x0

#define IOCB0                                    0x0
#define IOCB0_address                            0x096
#define IOCB0_position                           0x0
#define IOCB0_size                               0x1
#define IOCB0_value_mask                         0x1
#define IOCB0_clear_mask                         0xFE

#define IOCB1                                    0x1
#define IOCB1_address                            0x096
#define IOCB1_position                           0x1
#define IOCB1_size                               0x1
#define IOCB1_value_mask                         0x2
#define IOCB1_clear_mask                         0xFD

#define IOCB2                                    0x2
#define IOCB2_address                            0x096
#define IOCB2_position                           0x2
#define IOCB2_size                               0x1
#define IOCB2_value_mask                         0x4
#define IOCB2_clear_mask                         0xFB

#define IOCB3                                    0x3
#define IOCB3_address                            0x096
#define IOCB3_position                           0x3
#define IOCB3_size                               0x1
#define IOCB3_value_mask                         0x8
#define IOCB3_clear_mask                         0xF7

#define IOCB4                                    0x4
#define IOCB4_address                            0x096
#define IOCB4_position                           0x4
#define IOCB4_size                               0x1
#define IOCB4_value_mask                         0x10
#define IOCB4_clear_mask                         0xEF

#define IOCB5                                    0x5
#define IOCB5_address                            0x096
#define IOCB5_position                           0x5
#define IOCB5_size                               0x1
#define IOCB5_value_mask                         0x20
#define IOCB5_clear_mask                         0xDF

#define IOCB6                                    0x6
#define IOCB6_address                            0x096
#define IOCB6_position                           0x6
#define IOCB6_size                               0x1
#define IOCB6_value_mask                         0x40
#define IOCB6_clear_mask                         0xBF

#define IOCB7                                    0x7
#define IOCB7_address                            0x096
#define IOCB7_position                           0x7
#define IOCB7_size                               0x1
#define IOCB7_value_mask                         0x80
#define IOCB7_clear_mask                         0x7F


/*--------------------------------------#
| REFCON                           0x9B |
#---------------------------------------#
| - | - | - | - | VREFEN | VROE | - | - |
#---------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2    | 1 | 0 |
#--------------------------------------*/

#define REFCON                                   0x0
#define REFCON_address                           0x09B
#define REFCON_position                          0x0
#define REFCON_size                              0x8
#define REFCON_value_mask                        0xFF
#define REFCON_clear_mask                        0x0

#define VROE                                     0x2
#define VROE_address                             0x09B
#define VROE_position                            0x2
#define VROE_size                                0x1
#define VROE_value_mask                          0x4
#define VROE_clear_mask                          0xFB

#define VREFOE                                   0x2
#define VREFOE_address                           0x09B
#define VREFOE_position                          0x2
#define VREFOE_size                              0x1
#define VREFOE_value_mask                        0x4
#define VREFOE_clear_mask                        0xFB

#define VREFEN                                   0x3
#define VREFEN_address                           0x09B
#define VREFEN_position                          0x3
#define VREFEN_size                              0x1
#define VREFEN_value_mask                        0x8
#define VREFEN_clear_mask                        0xF7

#define VREN                                     0x3
#define VREN_address                             0x09B
#define VREN_position                            0x3
#define VREN_size                                0x1
#define VREN_value_mask                          0x8
#define VREN_clear_mask                          0xF7


/*---------------------------------------------#
| LVDCON                                  0x9C |
#----------------------------------------------#
| - | - | BGST | LVDEN | LV3 | LV2 | LV1 | LV0 |
#----------------------------------------------#
| 7 | 6 | 5    | 4     | 3   | 2   | 1   | 0   |
#---------------------------------------------*/

#define LVDCON                                   0x0
#define LVDCON_address                           0x09C
#define LVDCON_position                          0x0
#define LVDCON_size                              0x8
#define LVDCON_value_mask                        0xFF
#define LVDCON_clear_mask                        0x0

#define LV0                                      0x0
#define LV0_address                              0x09C
#define LV0_position                             0x0
#define LV0_size                                 0x1
#define LV0_value_mask                           0x1
#define LV0_clear_mask                           0xFE

#define LV                                       0x0
#define LV_address                               0x09C
#define LV_position                              0x0
#define LV_size                                  0x4
#define LV_value_mask                            0xF
#define LV_clear_mask                            0xF0

#define LV1                                      0x1
#define LV1_address                              0x09C
#define LV1_position                             0x1
#define LV1_size                                 0x1
#define LV1_value_mask                           0x2
#define LV1_clear_mask                           0xFD

#define LV2                                      0x2
#define LV2_address                              0x09C
#define LV2_position                             0x2
#define LV2_size                                 0x1
#define LV2_value_mask                           0x4
#define LV2_clear_mask                           0xFB

#define LV3                                      0x3
#define LV3_address                              0x09C
#define LV3_position                             0x3
#define LV3_size                                 0x1
#define LV3_value_mask                           0x8
#define LV3_clear_mask                           0xF7

#define LVDEN                                    0x4
#define LVDEN_address                            0x09C
#define LVDEN_position                           0x4
#define LVDEN_size                               0x1
#define LVDEN_value_mask                         0x10
#define LVDEN_clear_mask                         0xEF

#define BGST                                     0x5
#define BGST_address                             0x09C
#define BGST_position                            0x5
#define BGST_size                                0x1
#define BGST_value_mask                          0x20
#define BGST_clear_mask                          0xDF


/*------------------------------------------------------#
| ANSEL                                            0x9D |
#-------------------------------------------------------#
| ANS7 | ANS6 | ANS5 | ANS4 | ANS3 | ANS2 | ANS1 | ANS0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define ANSEL                                    0x0
#define ANSEL_address                            0x09D
#define ANSEL_position                           0x0
#define ANSEL_size                               0x8
#define ANSEL_value_mask                         0xFF
#define ANSEL_clear_mask                         0x0

#define ANS0                                     0x0
#define ANS0_address                             0x09D
#define ANS0_position                            0x0
#define ANS0_size                                0x1
#define ANS0_value_mask                          0x1
#define ANS0_clear_mask                          0xFE

#define ANS1                                     0x1
#define ANS1_address                             0x09D
#define ANS1_position                            0x1
#define ANS1_size                                0x1
#define ANS1_value_mask                          0x2
#define ANS1_clear_mask                          0xFD

#define ANS2                                     0x2
#define ANS2_address                             0x09D
#define ANS2_position                            0x2
#define ANS2_size                                0x1
#define ANS2_value_mask                          0x4
#define ANS2_clear_mask                          0xFB

#define ANS3                                     0x3
#define ANS3_address                             0x09D
#define ANS3_position                            0x3
#define ANS3_size                                0x1
#define ANS3_value_mask                          0x8
#define ANS3_clear_mask                          0xF7

#define ANS4                                     0x4
#define ANS4_address                             0x09D
#define ANS4_position                            0x4
#define ANS4_size                                0x1
#define ANS4_value_mask                          0x10
#define ANS4_clear_mask                          0xEF

#define ANS5                                     0x5
#define ANS5_address                             0x09D
#define ANS5_position                            0x5
#define ANS5_size                                0x1
#define ANS5_value_mask                          0x20
#define ANS5_clear_mask                          0xDF

#define ANS6                                     0x6
#define ANS6_address                             0x09D
#define ANS6_position                            0x6
#define ANS6_size                                0x1
#define ANS6_value_mask                          0x40
#define ANS6_clear_mask                          0xBF

#define ANS7                                     0x7
#define ANS7_address                             0x09D
#define ANS7_position                            0x7
#define ANS7_size                                0x1
#define ANS7_value_mask                          0x80
#define ANS7_clear_mask                          0x7F


/*--------------------------------------#
| ADCON1                           0x9F |
#---------------------------------------#
| - | - | VCFG1 | VCFG0 | - | - | - | - |
#---------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2 | 1 | 0 |
#--------------------------------------*/

#define ADCON1                                   0x0
#define ADCON1_address                           0x09F
#define ADCON1_position                          0x0
#define ADCON1_size                              0x8
#define ADCON1_value_mask                        0xFF
#define ADCON1_clear_mask                        0x0

#define VCFG                                     0x4
#define VCFG_address                             0x09F
#define VCFG_position                            0x4
#define VCFG_size                                0x2
#define VCFG_value_mask                          0x30
#define VCFG_clear_mask                          0xCF

#define VCFG0                                    0x4
#define VCFG0_address                            0x09F
#define VCFG0_position                           0x4
#define VCFG0_size                               0x1
#define VCFG0_value_mask                         0x10
#define VCFG0_clear_mask                         0xEF

#define VCFG1                                    0x5
#define VCFG1_address                            0x09F
#define VCFG1_position                           0x5
#define VCFG1_size                               0x1
#define VCFG1_value_mask                         0x20
#define VCFG1_clear_mask                         0xDF


/*------------------------------------------#
| CALCON                              0x110 |
#-------------------------------------------#
| CAL | CALERR | CALREF | - | - | - | - | - |
#-------------------------------------------#
| 7   | 6      | 5      | 4 | 3 | 2 | 1 | 0 |
#------------------------------------------*/

#define CALCON                                   0x0
#define CALCON_address                           0x110
#define CALCON_position                          0x0
#define CALCON_size                              0x8
#define CALCON_value_mask                        0xFF
#define CALCON_clear_mask                        0x0

#define CALREF                                   0x5
#define CALREF_address                           0x110
#define CALREF_position                          0x5
#define CALREF_size                              0x1
#define CALREF_value_mask                        0x20
#define CALREF_clear_mask                        0xDF

#define CALERR                                   0x6
#define CALERR_address                           0x110
#define CALERR_position                          0x6
#define CALERR_size                              0x1
#define CALERR_value_mask                        0x40
#define CALERR_clear_mask                        0xBF

#define CAL                                      0x7
#define CAL_address                              0x110
#define CAL_position                             0x7
#define CAL_size                                 0x1
#define CAL_value_mask                           0x80
#define CAL_clear_mask                           0x7F


/*----------------------------------------------------------------#
| PSMCCON0                                                  0x111 |
#-----------------------------------------------------------------#
| SMCCL1 | SMCCL0 | MINDC1 | MINDC0 | MAXDC1 | MAXDC0 | DC1 | DC0 |
#-----------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1   | 0   |
#----------------------------------------------------------------*/

#define PSMCCON0                                 0x0
#define PSMCCON0_address                         0x111
#define PSMCCON0_position                        0x0
#define PSMCCON0_size                            0x8
#define PSMCCON0_value_mask                      0xFF
#define PSMCCON0_clear_mask                      0x0

#define PSMCCON0_DC                              0x0
#define PSMCCON0_DC_address                      0x111
#define PSMCCON0_DC_position                     0x0
#define PSMCCON0_DC_size                         0x2
#define PSMCCON0_DC_value_mask                   0x3
#define PSMCCON0_DC_clear_mask                   0xFC

#define DC0                                      0x0
#define DC0_address                              0x111
#define DC0_position                             0x0
#define DC0_size                                 0x1
#define DC0_value_mask                           0x1
#define DC0_clear_mask                           0xFE

#define DC1                                      0x1
#define DC1_address                              0x111
#define DC1_position                             0x1
#define DC1_size                                 0x1
#define DC1_value_mask                           0x2
#define DC1_clear_mask                           0xFD

#define MAXDC                                    0x2
#define MAXDC_address                            0x111
#define MAXDC_position                           0x2
#define MAXDC_size                               0x2
#define MAXDC_value_mask                         0xC
#define MAXDC_clear_mask                         0xF3

#define MAXDC0                                   0x2
#define MAXDC0_address                           0x111
#define MAXDC0_position                          0x2
#define MAXDC0_size                              0x1
#define MAXDC0_value_mask                        0x4
#define MAXDC0_clear_mask                        0xFB

#define MAXDC1                                   0x3
#define MAXDC1_address                           0x111
#define MAXDC1_position                          0x3
#define MAXDC1_size                              0x1
#define MAXDC1_value_mask                        0x8
#define MAXDC1_clear_mask                        0xF7

#define MINDC0                                   0x4
#define MINDC0_address                           0x111
#define MINDC0_position                          0x4
#define MINDC0_size                              0x1
#define MINDC0_value_mask                        0x10
#define MINDC0_clear_mask                        0xEF

#define MINDC                                    0x4
#define MINDC_address                            0x111
#define MINDC_position                           0x4
#define MINDC_size                               0x2
#define MINDC_value_mask                         0x30
#define MINDC_clear_mask                         0xCF

#define MINDC1                                   0x5
#define MINDC1_address                           0x111
#define MINDC1_position                          0x5
#define MINDC1_size                              0x1
#define MINDC1_value_mask                        0x20
#define MINDC1_clear_mask                        0xDF

#define SMCCL                                    0x6
#define SMCCL_address                            0x111
#define SMCCL_position                           0x6
#define SMCCL_size                               0x2
#define SMCCL_value_mask                         0xC0
#define SMCCL_clear_mask                         0x3F

#define SMCCL0                                   0x6
#define SMCCL0_address                           0x111
#define SMCCL0_position                          0x6
#define SMCCL0_size                              0x1
#define SMCCL0_value_mask                        0x40
#define SMCCL0_clear_mask                        0xBF

#define SMCCL1                                   0x7
#define SMCCL1_address                           0x111
#define SMCCL1_position                          0x7
#define SMCCL1_size                              0x1
#define SMCCL1_value_mask                        0x80
#define SMCCL1_clear_mask                        0x7F


/*--------------------------------------------------------------#
| PSMCCON1                                                0x112 |
#---------------------------------------------------------------#
| SMCON | S1APOL | S1BPOL | - | SCEN | SMCOM | PWM_nPSM | SMCCS |
#---------------------------------------------------------------#
| 7     | 6      | 5      | 4 | 3    | 2     | 1        | 0     |
#--------------------------------------------------------------*/

#define PSMCCON1                                 0x0
#define PSMCCON1_address                         0x112
#define PSMCCON1_position                        0x0
#define PSMCCON1_size                            0x8
#define PSMCCON1_value_mask                      0xFF
#define PSMCCON1_clear_mask                      0x0

#define SMCCS                                    0x0
#define SMCCS_address                            0x112
#define SMCCS_position                           0x0
#define SMCCS_size                               0x1
#define SMCCS_value_mask                         0x1
#define SMCCS_clear_mask                         0xFE

#define PWM_nPSM                                 0x1
#define PWM_nPSM_address                         0x112
#define PWM_nPSM_position                        0x1
#define PWM_nPSM_size                            0x1
#define PWM_nPSM_value_mask                      0x2
#define PWM_nPSM_clear_mask                      0xFD

#define PSM                                      0x1
#define PSM_address                              0x112
#define PSM_position                             0x1
#define PSM_size                                 0x1
#define PSM_value_mask                           0x2
#define PSM_clear_mask                           0xFD

#define nPSM                                     0x1
#define nPSM_address                             0x112
#define nPSM_position                            0x1
#define nPSM_size                                0x1
#define nPSM_value_mask                          0x2
#define nPSM_clear_mask                          0xFD

#define PWM                                      0x1
#define PWM_address                              0x112
#define PWM_position                             0x1
#define PWM_size                                 0x1
#define PWM_value_mask                           0x2
#define PWM_clear_mask                           0xFD

#define SMCOM                                    0x2
#define SMCOM_address                            0x112
#define SMCOM_position                           0x2
#define SMCOM_size                               0x1
#define SMCOM_value_mask                         0x4
#define SMCOM_clear_mask                         0xFB

#define SCEN                                     0x3
#define SCEN_address                             0x112
#define SCEN_position                            0x3
#define SCEN_size                                0x1
#define SCEN_value_mask                          0x8
#define SCEN_clear_mask                          0xF7

#define S1BPOL                                   0x5
#define S1BPOL_address                           0x112
#define S1BPOL_position                          0x5
#define S1BPOL_size                              0x1
#define S1BPOL_value_mask                        0x20
#define S1BPOL_clear_mask                        0xDF

#define S1APOL                                   0x6
#define S1APOL_address                           0x112
#define S1APOL_position                          0x6
#define S1APOL_size                              0x1
#define S1APOL_value_mask                        0x40
#define S1APOL_clear_mask                        0xBF

#define SMCON                                    0x7
#define SMCON_address                            0x112
#define SMCON_position                           0x7
#define SMCON_size                               0x1
#define SMCON_value_mask                         0x80
#define SMCON_clear_mask                         0x7F


/*---------------------------------------------------------#
| CM1CON0                                            0x119 |
#----------------------------------------------------------#
| C1ON | C1OUT | C1OE | C1POL | C1SP | C1R | C1CH1 | C1CH0 |
#----------------------------------------------------------#
| 7    | 6     | 5    | 4     | 3    | 2   | 1     | 0     |
#---------------------------------------------------------*/

#define CM1CON0                                  0x0
#define CM1CON0_address                          0x119
#define CM1CON0_position                         0x0
#define CM1CON0_size                             0x8
#define CM1CON0_value_mask                       0xFF
#define CM1CON0_clear_mask                       0x0

#define C1CH                                     0x0
#define C1CH_address                             0x119
#define C1CH_position                            0x0
#define C1CH_size                                0x2
#define C1CH_value_mask                          0x3
#define C1CH_clear_mask                          0xFC

#define C1CH0                                    0x0
#define C1CH0_address                            0x119
#define C1CH0_position                           0x0
#define C1CH0_size                               0x1
#define C1CH0_value_mask                         0x1
#define C1CH0_clear_mask                         0xFE

#define C1CH1                                    0x1
#define C1CH1_address                            0x119
#define C1CH1_position                           0x1
#define C1CH1_size                               0x1
#define C1CH1_value_mask                         0x2
#define C1CH1_clear_mask                         0xFD

#define C1R                                      0x2
#define C1R_address                              0x119
#define C1R_position                             0x2
#define C1R_size                                 0x1
#define C1R_value_mask                           0x4
#define C1R_clear_mask                           0xFB

#define C1SP                                     0x3
#define C1SP_address                             0x119
#define C1SP_position                            0x3
#define C1SP_size                                0x1
#define C1SP_value_mask                          0x8
#define C1SP_clear_mask                          0xF7

#define C1POL                                    0x4
#define C1POL_address                            0x119
#define C1POL_position                           0x4
#define C1POL_size                               0x1
#define C1POL_value_mask                         0x10
#define C1POL_clear_mask                         0xEF

#define C1OE                                     0x5
#define C1OE_address                             0x119
#define C1OE_position                            0x5
#define C1OE_size                                0x1
#define C1OE_value_mask                          0x20
#define C1OE_clear_mask                          0xDF

#define C1OUT                                    0x6
#define C1OUT_address                            0x119
#define C1OUT_position                           0x6
#define C1OUT_size                               0x1
#define C1OUT_value_mask                         0x40
#define C1OUT_clear_mask                         0xBF

#define C1ON                                     0x7
#define C1ON_address                             0x119
#define C1ON_position                            0x7
#define C1ON_size                                0x1
#define C1ON_value_mask                          0x80
#define C1ON_clear_mask                          0x7F


/*---------------------------------------------------------#
| CM2CON0                                            0x11A |
#----------------------------------------------------------#
| C2ON | C2OUT | C2OE | C2POL | C2SP | C2R | C2CH1 | C2CH0 |
#----------------------------------------------------------#
| 7    | 6     | 5    | 4     | 3    | 2   | 1     | 0     |
#---------------------------------------------------------*/

#define CM2CON0                                  0x0
#define CM2CON0_address                          0x11A
#define CM2CON0_position                         0x0
#define CM2CON0_size                             0x8
#define CM2CON0_value_mask                       0xFF
#define CM2CON0_clear_mask                       0x0

#define C2CH0                                    0x0
#define C2CH0_address                            0x11A
#define C2CH0_position                           0x0
#define C2CH0_size                               0x1
#define C2CH0_value_mask                         0x1
#define C2CH0_clear_mask                         0xFE

#define C2CH                                     0x0
#define C2CH_address                             0x11A
#define C2CH_position                            0x0
#define C2CH_size                                0x2
#define C2CH_value_mask                          0x3
#define C2CH_clear_mask                          0xFC

#define C2CH1                                    0x1
#define C2CH1_address                            0x11A
#define C2CH1_position                           0x1
#define C2CH1_size                               0x1
#define C2CH1_value_mask                         0x2
#define C2CH1_clear_mask                         0xFD

#define C2R                                      0x2
#define C2R_address                              0x11A
#define C2R_position                             0x2
#define C2R_size                                 0x1
#define C2R_value_mask                           0x4
#define C2R_clear_mask                           0xFB

#define C2SP                                     0x3
#define C2SP_address                             0x11A
#define C2SP_position                            0x3
#define C2SP_size                                0x1
#define C2SP_value_mask                          0x8
#define C2SP_clear_mask                          0xF7

#define C2POL                                    0x4
#define C2POL_address                            0x11A
#define C2POL_position                           0x4
#define C2POL_size                               0x1
#define C2POL_value_mask                         0x10
#define C2POL_clear_mask                         0xEF

#define C2OE                                     0x5
#define C2OE_address                             0x11A
#define C2OE_position                            0x5
#define C2OE_size                                0x1
#define C2OE_value_mask                          0x20
#define C2OE_clear_mask                          0xDF

#define C2OUT                                    0x6
#define C2OUT_address                            0x11A
#define C2OUT_position                           0x6
#define C2OUT_size                               0x1
#define C2OUT_value_mask                         0x40
#define C2OUT_clear_mask                         0xBF

#define C2ON                                     0x7
#define C2ON_address                             0x11A
#define C2ON_position                            0x7
#define C2ON_size                                0x1
#define C2ON_value_mask                          0x80
#define C2ON_clear_mask                          0x7F


/*---------------------------------------------#
| CM2CON1                                0x11B |
#----------------------------------------------#
| MC1OUT | MC2OUT | - | - | - | - | - | C2SYNC |
#----------------------------------------------#
| 7      | 6      | 5 | 4 | 3 | 2 | 1 | 0      |
#---------------------------------------------*/

#define CM2CON1                                  0x0
#define CM2CON1_address                          0x11B
#define CM2CON1_position                         0x0
#define CM2CON1_size                             0x8
#define CM2CON1_value_mask                       0xFF
#define CM2CON1_clear_mask                       0x0

#define C2SYNC                                   0x0
#define C2SYNC_address                           0x11B
#define C2SYNC_position                          0x0
#define C2SYNC_size                              0x1
#define C2SYNC_value_mask                        0x1
#define C2SYNC_clear_mask                        0xFE

#define MC2OUT                                   0x6
#define MC2OUT_address                           0x11B
#define MC2OUT_position                          0x6
#define MC2OUT_size                              0x1
#define MC2OUT_value_mask                        0x40
#define MC2OUT_clear_mask                        0xBF

#define MC1OUT                                   0x7
#define MC1OUT_address                           0x11B
#define MC1OUT_position                          0x7
#define MC1OUT_size                              0x1
#define MC1OUT_value_mask                        0x80
#define MC1OUT_clear_mask                        0x7F


/*-----------------------------------------#
| OPACON                             0x11C |
#------------------------------------------#
| OPAON | CMPEN | - | - | - | - | - | GBWP |
#------------------------------------------#
| 7     | 6     | 5 | 4 | 3 | 2 | 1 | 0    |
#-----------------------------------------*/

#define OPACON                                   0x0
#define OPACON_address                           0x11C
#define OPACON_position                          0x0
#define OPACON_size                              0x8
#define OPACON_value_mask                        0xFF
#define OPACON_clear_mask                        0x0

#define GBWP                                     0x0
#define GBWP_address                             0x11C
#define GBWP_position                            0x0
#define GBWP_size                                0x1
#define GBWP_value_mask                          0x1
#define GBWP_clear_mask                          0xFE

#define CMPEN                                    0x6
#define CMPEN_address                            0x11C
#define CMPEN_position                           0x6
#define CMPEN_size                               0x1
#define CMPEN_value_mask                         0x40
#define CMPEN_clear_mask                         0xBF

#define OPAON                                    0x7
#define OPAON_address                            0x11C
#define OPAON_position                           0x7
#define OPAON_size                               0x1
#define OPAON_value_mask                         0x80
#define OPAON_clear_mask                         0x7F


/*----------------------------------------------#
| DAC                                     0x11E |
#-----------------------------------------------#
| DA7 | DA6 | DA5 | DA4 | DA3 | DA2 | DA1 | DA0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define DAC                                      0x0
#define DAC_address                              0x11E
#define DAC_position                             0x0
#define DAC_size                                 0x8
#define DAC_value_mask                           0xFF
#define DAC_clear_mask                           0x0

#define DA0                                      0x0
#define DA0_address                              0x11E
#define DA0_position                             0x0
#define DA0_size                                 0x1
#define DA0_value_mask                           0x1
#define DA0_clear_mask                           0xFE

#define DA1                                      0x1
#define DA1_address                              0x11E
#define DA1_position                             0x1
#define DA1_size                                 0x1
#define DA1_value_mask                           0x2
#define DA1_clear_mask                           0xFD

#define DA2                                      0x2
#define DA2_address                              0x11E
#define DA2_position                             0x2
#define DA2_size                                 0x1
#define DA2_value_mask                           0x4
#define DA2_clear_mask                           0xFB

#define DA3                                      0x3
#define DA3_address                              0x11E
#define DA3_position                             0x3
#define DA3_size                                 0x1
#define DA3_value_mask                           0x8
#define DA3_clear_mask                           0xF7

#define DA4                                      0x4
#define DA4_address                              0x11E
#define DA4_position                             0x4
#define DA4_size                                 0x1
#define DA4_value_mask                           0x10
#define DA4_clear_mask                           0xEF

#define DA5                                      0x5
#define DA5_address                              0x11E
#define DA5_position                             0x5
#define DA5_size                                 0x1
#define DA5_value_mask                           0x20
#define DA5_clear_mask                           0xDF

#define DA6                                      0x6
#define DA6_address                              0x11E
#define DA6_position                             0x6
#define DA6_size                                 0x1
#define DA6_value_mask                           0x40
#define DA6_clear_mask                           0xBF

#define DA7                                      0x7
#define DA7_address                              0x11E
#define DA7_position                             0x7
#define DA7_size                                 0x1
#define DA7_value_mask                           0x80
#define DA7_clear_mask                           0x7F


/*--------------------------------------------#
| DACON0                                0x11F |
#---------------------------------------------#
| DAON | DAOE | - | - | - | - | DARS1 | DARS0 |
#---------------------------------------------#
| 7    | 6    | 5 | 4 | 3 | 2 | 1     | 0     |
#--------------------------------------------*/

#define DACON0                                   0x0
#define DACON0_address                           0x11F
#define DACON0_position                          0x0
#define DACON0_size                              0x8
#define DACON0_value_mask                        0xFF
#define DACON0_clear_mask                        0x0

#define DARS                                     0x0
#define DARS_address                             0x11F
#define DARS_position                            0x0
#define DARS_size                                0x2
#define DARS_value_mask                          0x3
#define DARS_clear_mask                          0xFC

#define DARS0                                    0x0
#define DARS0_address                            0x11F
#define DARS0_position                           0x0
#define DARS0_size                               0x1
#define DARS0_value_mask                         0x1
#define DARS0_clear_mask                         0xFE

#define DARS1                                    0x1
#define DARS1_address                            0x11F
#define DARS1_position                           0x1
#define DARS1_size                               0x1
#define DARS1_value_mask                         0x2
#define DARS1_clear_mask                         0xFD

#define DAOE                                     0x6
#define DAOE_address                             0x11F
#define DAOE_position                            0x6
#define DAOE_size                                0x1
#define DAOE_value_mask                          0x40
#define DAOE_clear_mask                          0xBF

#define DAON                                     0x7
#define DAON_address                             0x11F
#define DAON_position                            0x7
#define DAON_size                                0x1
#define DAON_value_mask                          0x80
#define DAON_clear_mask                          0x7F


/*-------------------------------#
| PMCON1                   0x18C |
#--------------------------------#
| - | - | - | - | - | - | - | RD |
#--------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0  |
#-------------------------------*/

#define PMCON1                                   0x0
#define PMCON1_address                           0x18C
#define PMCON1_position                          0x0
#define PMCON1_size                              0x8
#define PMCON1_value_mask                        0xFF
#define PMCON1_clear_mask                        0x0

#define RD                                       0x0
#define RD_address                               0x18C
#define RD_position                              0x0
#define RD_size                                  0x1
#define RD_value_mask                            0x1
#define RD_clear_mask                            0xFE

#endif // _PIC16C782_H_
