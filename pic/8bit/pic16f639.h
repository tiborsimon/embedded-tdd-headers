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

#ifndef _PIC16F639_H_
#define _PIC16F639_H_


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

#define IRP                                      0x7
#define IRP_address                              0x003
#define IRP_position                             0x7
#define IRP_size                                 0x1
#define IRP_value_mask                           0x80
#define IRP_clear_mask                           0x7F


/*------------------------------------------#
| PORTA                                 0x5 |
#-------------------------------------------#
| - | - | RA5 | RA4 | RA3 | RA2 | RA1 | RA0 |
#-------------------------------------------#
| 7 | 6 | 5   | 4   | 3   | 2   | 1   | 0   |
#------------------------------------------*/

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


/*------------------------------------------#
| PORTC                                 0x7 |
#-------------------------------------------#
| - | - | RC5 | RC4 | RC3 | RC2 | RC1 | RC0 |
#-------------------------------------------#
| 7 | 6 | 5   | 4   | 3   | 2   | 1   | 0   |
#------------------------------------------*/

#define PORTC                                    0x0
#define PORTC_address                            0x007
#define PORTC_position                           0x0
#define PORTC_size                               0x8
#define PORTC_value_mask                         0xFF
#define PORTC_clear_mask                         0x0

#define RC0                                      0x0
#define RC0_address                              0x007
#define RC0_position                             0x0
#define RC0_size                                 0x1
#define RC0_value_mask                           0x1
#define RC0_clear_mask                           0xFE

#define RC1                                      0x1
#define RC1_address                              0x007
#define RC1_position                             0x1
#define RC1_size                                 0x1
#define RC1_value_mask                           0x2
#define RC1_clear_mask                           0xFD

#define RC2                                      0x2
#define RC2_address                              0x007
#define RC2_position                             0x2
#define RC2_size                                 0x1
#define RC2_value_mask                           0x4
#define RC2_clear_mask                           0xFB

#define RC3                                      0x3
#define RC3_address                              0x007
#define RC3_position                             0x3
#define RC3_size                                 0x1
#define RC3_value_mask                           0x8
#define RC3_clear_mask                           0xF7

#define RC4                                      0x4
#define RC4_address                              0x007
#define RC4_position                             0x4
#define RC4_size                                 0x1
#define RC4_value_mask                           0x10
#define RC4_clear_mask                           0xEF

#define RC5                                      0x5
#define RC5_address                              0x007
#define RC5_position                             0x5
#define RC5_size                                 0x1
#define RC5_value_mask                           0x20
#define RC5_clear_mask                           0xDF


/*------------------------------#
| PCLATH                    0xA |
#-------------------------------#
| - | - | - | PCLATH            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PCLATH                                   0x0
#define PCLATH_address                           0x00A
#define PCLATH_position                          0x0
#define PCLATH_size                              0x5
#define PCLATH_value_mask                        0x1F
#define PCLATH_clear_mask                        0xE0


/*-----------------------------------------------------#
| INTCON                                           0xB |
#------------------------------------------------------#
| GIE | PEIE | T0IE | INTE | RAIE | T0IF | INTF | RAIF |
#------------------------------------------------------#
| 7   | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#-----------------------------------------------------*/

#define INTCON                                   0x0
#define INTCON_address                           0x00B
#define INTCON_position                          0x0
#define INTCON_size                              0x8
#define INTCON_value_mask                        0xFF
#define INTCON_clear_mask                        0x0

#define RAIF                                     0x0
#define RAIF_address                             0x00B
#define RAIF_position                            0x0
#define RAIF_size                                0x1
#define RAIF_value_mask                          0x1
#define RAIF_clear_mask                          0xFE

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

#define RAIE                                     0x3
#define RAIE_address                             0x00B
#define RAIE_position                            0x3
#define RAIE_size                                0x1
#define RAIE_value_mask                          0x8
#define RAIE_clear_mask                          0xF7

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


/*-------------------------------------------------------#
| PIR1                                               0xC |
#--------------------------------------------------------#
| EEIF | LVDIF | CRIF | C2IF | C1IF | OSFIF | - | TMR1IF |
#--------------------------------------------------------#
| 7    | 6     | 5    | 4    | 3    | 2     | 1 | 0      |
#-------------------------------------------------------*/

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

#define OSFIF                                    0x2
#define OSFIF_address                            0x00C
#define OSFIF_position                           0x2
#define OSFIF_size                               0x1
#define OSFIF_value_mask                         0x4
#define OSFIF_clear_mask                         0xFB

#define C1IF                                     0x3
#define C1IF_address                             0x00C
#define C1IF_position                            0x3
#define C1IF_size                                0x1
#define C1IF_value_mask                          0x8
#define C1IF_clear_mask                          0xF7

#define C2IF                                     0x4
#define C2IF_address                             0x00C
#define C2IF_position                            0x4
#define C2IF_size                                0x1
#define C2IF_value_mask                          0x10
#define C2IF_clear_mask                          0xEF

#define CRIF                                     0x5
#define CRIF_address                             0x00C
#define CRIF_position                            0x5
#define CRIF_size                                0x1
#define CRIF_value_mask                          0x20
#define CRIF_clear_mask                          0xDF

#define LVDIF                                    0x6
#define LVDIF_address                            0x00C
#define LVDIF_position                           0x6
#define LVDIF_size                               0x1
#define LVDIF_value_mask                         0x40
#define LVDIF_clear_mask                         0xBF

#define EEIF                                     0x7
#define EEIF_address                             0x00C
#define EEIF_position                            0x7
#define EEIF_size                                0x1
#define EEIF_value_mask                          0x80
#define EEIF_clear_mask                          0x7F


/*--------------------------------------------------------------------------#
| T1CON                                                                0x10 |
#---------------------------------------------------------------------------#
| T1GINV | TMR1GE | T1CKPS1 | T1CKPS0 | T1OSCEN | nT1SYNC | TMR1CS | TMR1ON |
#---------------------------------------------------------------------------#
| 7      | 6      | 5       | 4       | 3       | 2       | 1      | 0      |
#--------------------------------------------------------------------------*/

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

#define T1GINV                                   0x7
#define T1GINV_address                           0x010
#define T1GINV_position                          0x7
#define T1GINV_size                              0x1
#define T1GINV_value_mask                        0x80
#define T1GINV_clear_mask                        0x7F


/*-------------------------------------------------------#
| WDTCON                                            0x18 |
#--------------------------------------------------------#
| - | - | - | WDTPS3 | WDTPS2 | WDTPS1 | WDTPS0 | SWDTEN |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define WDTCON                                   0x0
#define WDTCON_address                           0x018
#define WDTCON_position                          0x0
#define WDTCON_size                              0x8
#define WDTCON_value_mask                        0xFF
#define WDTCON_clear_mask                        0x0

#define SWDTEN                                   0x0
#define SWDTEN_address                           0x018
#define SWDTEN_position                          0x0
#define SWDTEN_size                              0x1
#define SWDTEN_value_mask                        0x1
#define SWDTEN_clear_mask                        0xFE

#define WDTPS                                    0x1
#define WDTPS_address                            0x018
#define WDTPS_position                           0x1
#define WDTPS_size                               0x4
#define WDTPS_value_mask                         0x1E
#define WDTPS_clear_mask                         0xE1

#define WDTPS0                                   0x1
#define WDTPS0_address                           0x018
#define WDTPS0_position                          0x1
#define WDTPS0_size                              0x1
#define WDTPS0_value_mask                        0x2
#define WDTPS0_clear_mask                        0xFD

#define WDTPS1                                   0x2
#define WDTPS1_address                           0x018
#define WDTPS1_position                          0x2
#define WDTPS1_size                              0x1
#define WDTPS1_value_mask                        0x4
#define WDTPS1_clear_mask                        0xFB

#define WDTPS2                                   0x3
#define WDTPS2_address                           0x018
#define WDTPS2_position                          0x3
#define WDTPS2_size                              0x1
#define WDTPS2_value_mask                        0x8
#define WDTPS2_clear_mask                        0xF7

#define WDTPS3                                   0x4
#define WDTPS3_address                           0x018
#define WDTPS3_position                          0x4
#define WDTPS3_size                              0x1
#define WDTPS3_value_mask                        0x10
#define WDTPS3_clear_mask                        0xEF


/*------------------------------------------------------#
| CMCON0                                           0x19 |
#-------------------------------------------------------#
| C2OUT | C1OUT | C2INV | C1INV | CIS | CM2 | CM1 | CM0 |
#-------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3   | 2   | 1   | 0   |
#------------------------------------------------------*/

#define CMCON0                                   0x0
#define CMCON0_address                           0x019
#define CMCON0_position                          0x0
#define CMCON0_size                              0x8
#define CMCON0_value_mask                        0xFF
#define CMCON0_clear_mask                        0x0

#define CM                                       0x0
#define CM_address                               0x019
#define CM_position                              0x0
#define CM_size                                  0x3
#define CM_value_mask                            0x7
#define CM_clear_mask                            0xF8

#define CM0                                      0x0
#define CM0_address                              0x019
#define CM0_position                             0x0
#define CM0_size                                 0x1
#define CM0_value_mask                           0x1
#define CM0_clear_mask                           0xFE

#define CM1                                      0x1
#define CM1_address                              0x019
#define CM1_position                             0x1
#define CM1_size                                 0x1
#define CM1_value_mask                           0x2
#define CM1_clear_mask                           0xFD

#define CM2                                      0x2
#define CM2_address                              0x019
#define CM2_position                             0x2
#define CM2_size                                 0x1
#define CM2_value_mask                           0x4
#define CM2_clear_mask                           0xFB

#define CIS                                      0x3
#define CIS_address                              0x019
#define CIS_position                             0x3
#define CIS_size                                 0x1
#define CIS_value_mask                           0x8
#define CIS_clear_mask                           0xF7

#define C1INV                                    0x4
#define C1INV_address                            0x019
#define C1INV_position                           0x4
#define C1INV_size                               0x1
#define C1INV_value_mask                         0x10
#define C1INV_clear_mask                         0xEF

#define C2INV                                    0x5
#define C2INV_address                            0x019
#define C2INV_position                           0x5
#define C2INV_size                               0x1
#define C2INV_value_mask                         0x20
#define C2INV_clear_mask                         0xDF

#define C1OUT                                    0x6
#define C1OUT_address                            0x019
#define C1OUT_position                           0x6
#define C1OUT_size                               0x1
#define C1OUT_value_mask                         0x40
#define C1OUT_clear_mask                         0xBF

#define C2OUT                                    0x7
#define C2OUT_address                            0x019
#define C2OUT_position                           0x7
#define C2OUT_size                               0x1
#define C2OUT_value_mask                         0x80
#define C2OUT_clear_mask                         0x7F


/*---------------------------------------#
| CMCON1                            0x1A |
#----------------------------------------#
| - | - | - | - | - | - | T1GSS | C2SYNC |
#----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1     | 0      |
#---------------------------------------*/

#define CMCON1                                   0x0
#define CMCON1_address                           0x01A
#define CMCON1_position                          0x0
#define CMCON1_size                              0x8
#define CMCON1_value_mask                        0xFF
#define CMCON1_clear_mask                        0x0

#define C2SYNC                                   0x0
#define C2SYNC_address                           0x01A
#define C2SYNC_position                          0x0
#define C2SYNC_size                              0x1
#define C2SYNC_value_mask                        0x1
#define C2SYNC_clear_mask                        0xFE

#define T1GSS                                    0x1
#define T1GSS_address                            0x01A
#define T1GSS_position                           0x1
#define T1GSS_size                               0x1
#define T1GSS_value_mask                         0x2
#define T1GSS_clear_mask                         0xFD


/*-----------------------------------------------------#
| OPTION_REG                                      0x81 |
#------------------------------------------------------#
| nRAPU | INTEDG | T0CS | T0SE | PSA | PS2 | PS1 | PS0 |
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

#define nRAPU                                    0x7
#define nRAPU_address                            0x081
#define nRAPU_position                           0x7
#define nRAPU_size                               0x1
#define nRAPU_value_mask                         0x80
#define nRAPU_clear_mask                         0x7F


/*------------------------------------------------------------#
| TRISA                                                  0x85 |
#-------------------------------------------------------------#
| - | - | TRISA5 | TRISA4 | TRISA3 | TRISA2 | TRISA1 | TRISA0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

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


/*------------------------------------------------------------#
| TRISC                                                  0x87 |
#-------------------------------------------------------------#
| - | - | TRISC5 | TRISC4 | TRISC3 | TRISC2 | TRISC1 | TRISC0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define TRISC                                    0x0
#define TRISC_address                            0x087
#define TRISC_position                           0x0
#define TRISC_size                               0x8
#define TRISC_value_mask                         0xFF
#define TRISC_clear_mask                         0x0

#define TRISC0                                   0x0
#define TRISC0_address                           0x087
#define TRISC0_position                          0x0
#define TRISC0_size                              0x1
#define TRISC0_value_mask                        0x1
#define TRISC0_clear_mask                        0xFE

#define TRISC1                                   0x1
#define TRISC1_address                           0x087
#define TRISC1_position                          0x1
#define TRISC1_size                              0x1
#define TRISC1_value_mask                        0x2
#define TRISC1_clear_mask                        0xFD

#define TRISC2                                   0x2
#define TRISC2_address                           0x087
#define TRISC2_position                          0x2
#define TRISC2_size                              0x1
#define TRISC2_value_mask                        0x4
#define TRISC2_clear_mask                        0xFB

#define TRISC3                                   0x3
#define TRISC3_address                           0x087
#define TRISC3_position                          0x3
#define TRISC3_size                              0x1
#define TRISC3_value_mask                        0x8
#define TRISC3_clear_mask                        0xF7

#define TRISC4                                   0x4
#define TRISC4_address                           0x087
#define TRISC4_position                          0x4
#define TRISC4_size                              0x1
#define TRISC4_value_mask                        0x10
#define TRISC4_clear_mask                        0xEF

#define TRISC5                                   0x5
#define TRISC5_address                           0x087
#define TRISC5_position                          0x5
#define TRISC5_size                              0x1
#define TRISC5_value_mask                        0x20
#define TRISC5_clear_mask                        0xDF


/*-------------------------------------------------------#
| PIE1                                              0x8C |
#--------------------------------------------------------#
| EEIE | LVDIE | CRIE | C2IE | C1IE | OSFIE | - | TMR1IE |
#--------------------------------------------------------#
| 7    | 6     | 5    | 4    | 3    | 2     | 1 | 0      |
#-------------------------------------------------------*/

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

#define OSFIE                                    0x2
#define OSFIE_address                            0x08C
#define OSFIE_position                           0x2
#define OSFIE_size                               0x1
#define OSFIE_value_mask                         0x4
#define OSFIE_clear_mask                         0xFB

#define C1IE                                     0x3
#define C1IE_address                             0x08C
#define C1IE_position                            0x3
#define C1IE_size                                0x1
#define C1IE_value_mask                          0x8
#define C1IE_clear_mask                          0xF7

#define C2IE                                     0x4
#define C2IE_address                             0x08C
#define C2IE_position                            0x4
#define C2IE_size                                0x1
#define C2IE_value_mask                          0x10
#define C2IE_clear_mask                          0xEF

#define CRIE                                     0x5
#define CRIE_address                             0x08C
#define CRIE_position                            0x5
#define CRIE_size                                0x1
#define CRIE_value_mask                          0x20
#define CRIE_clear_mask                          0xDF

#define LVDIE                                    0x6
#define LVDIE_address                            0x08C
#define LVDIE_position                           0x6
#define LVDIE_size                               0x1
#define LVDIE_value_mask                         0x40
#define LVDIE_clear_mask                         0xBF

#define EEIE                                     0x7
#define EEIE_address                             0x08C
#define EEIE_position                            0x7
#define EEIE_size                                0x1
#define EEIE_value_mask                          0x80
#define EEIE_clear_mask                          0x7F


/*-------------------------------------------------#
| PCON                                        0x8E |
#--------------------------------------------------#
| - | - | ULPWUE | SBOREN | nWUR | - | nPOR | nBOD |
#--------------------------------------------------#
| 7 | 6 | 5      | 4      | 3    | 2 | 1    | 0    |
#-------------------------------------------------*/

#define PCON                                     0x0
#define PCON_address                             0x08E
#define PCON_position                            0x0
#define PCON_size                                0x8
#define PCON_value_mask                          0xFF
#define PCON_clear_mask                          0x0

#define nBOD                                     0x0
#define nBOD_address                             0x08E
#define nBOD_position                            0x0
#define nBOD_size                                0x1
#define nBOD_value_mask                          0x1
#define nBOD_clear_mask                          0xFE

#define nBOR                                     0x0
#define nBOR_address                             0x08E
#define nBOR_position                            0x0
#define nBOR_size                                0x1
#define nBOR_value_mask                          0x1
#define nBOR_clear_mask                          0xFE

#define nPOR                                     0x1
#define nPOR_address                             0x08E
#define nPOR_position                            0x1
#define nPOR_size                                0x1
#define nPOR_value_mask                          0x2
#define nPOR_clear_mask                          0xFD

#define nWUR                                     0x3
#define nWUR_address                             0x08E
#define nWUR_position                            0x3
#define nWUR_size                                0x1
#define nWUR_value_mask                          0x8
#define nWUR_clear_mask                          0xF7

#define SBODEN                                   0x4
#define SBODEN_address                           0x08E
#define SBODEN_position                          0x4
#define SBODEN_size                              0x1
#define SBODEN_value_mask                        0x10
#define SBODEN_clear_mask                        0xEF

#define SBOREN                                   0x4
#define SBOREN_address                           0x08E
#define SBOREN_position                          0x4
#define SBOREN_size                              0x1
#define SBOREN_value_mask                        0x10
#define SBOREN_clear_mask                        0xEF

#define ULPWUE                                   0x5
#define ULPWUE_address                           0x08E
#define ULPWUE_position                          0x5
#define ULPWUE_size                              0x1
#define ULPWUE_value_mask                        0x20
#define ULPWUE_clear_mask                        0xDF


/*---------------------------------------------------#
| OSCCON                                        0x8F |
#----------------------------------------------------#
| - | IRCF2 | IRCF1 | IRCF0 | OSTS | HTS | LTS | SCS |
#----------------------------------------------------#
| 7 | 6     | 5     | 4     | 3    | 2   | 1   | 0   |
#---------------------------------------------------*/

#define OSCCON                                   0x0
#define OSCCON_address                           0x08F
#define OSCCON_position                          0x0
#define OSCCON_size                              0x8
#define OSCCON_value_mask                        0xFF
#define OSCCON_clear_mask                        0x0

#define SCS                                      0x0
#define SCS_address                              0x08F
#define SCS_position                             0x0
#define SCS_size                                 0x1
#define SCS_value_mask                           0x1
#define SCS_clear_mask                           0xFE

#define LTS                                      0x1
#define LTS_address                              0x08F
#define LTS_position                             0x1
#define LTS_size                                 0x1
#define LTS_value_mask                           0x2
#define LTS_clear_mask                           0xFD

#define HTS                                      0x2
#define HTS_address                              0x08F
#define HTS_position                             0x2
#define HTS_size                                 0x1
#define HTS_value_mask                           0x4
#define HTS_clear_mask                           0xFB

#define OSTS                                     0x3
#define OSTS_address                             0x08F
#define OSTS_position                            0x3
#define OSTS_size                                0x1
#define OSTS_value_mask                          0x8
#define OSTS_clear_mask                          0xF7

#define IOSCF                                    0x4
#define IOSCF_address                            0x08F
#define IOSCF_position                           0x4
#define IOSCF_size                               0x3
#define IOSCF_value_mask                         0x70
#define IOSCF_clear_mask                         0x8F

#define IRCF0                                    0x4
#define IRCF0_address                            0x08F
#define IRCF0_position                           0x4
#define IRCF0_size                               0x1
#define IRCF0_value_mask                         0x10
#define IRCF0_clear_mask                         0xEF

#define IRCF1                                    0x5
#define IRCF1_address                            0x08F
#define IRCF1_position                           0x5
#define IRCF1_size                               0x1
#define IRCF1_value_mask                         0x20
#define IRCF1_clear_mask                         0xDF

#define IRCF2                                    0x6
#define IRCF2_address                            0x08F
#define IRCF2_position                           0x6
#define IRCF2_size                               0x1
#define IRCF2_value_mask                         0x40
#define IRCF2_clear_mask                         0xBF


/*---------------------------------------------#
| OSCTUNE                                 0x90 |
#----------------------------------------------#
| - | - | - | TUN4 | TUN3 | TUN2 | TUN1 | TUN0 |
#----------------------------------------------#
| 7 | 6 | 5 | 4    | 3    | 2    | 1    | 0    |
#---------------------------------------------*/

#define OSCTUNE                                  0x0
#define OSCTUNE_address                          0x090
#define OSCTUNE_position                         0x0
#define OSCTUNE_size                             0x8
#define OSCTUNE_value_mask                       0xFF
#define OSCTUNE_clear_mask                       0x0

#define TUN0                                     0x0
#define TUN0_address                             0x090
#define TUN0_position                            0x0
#define TUN0_size                                0x1
#define TUN0_value_mask                          0x1
#define TUN0_clear_mask                          0xFE

#define TUN                                      0x0
#define TUN_address                              0x090
#define TUN_position                             0x0
#define TUN_size                                 0x5
#define TUN_value_mask                           0x1F
#define TUN_clear_mask                           0xE0

#define TUN1                                     0x1
#define TUN1_address                             0x090
#define TUN1_position                            0x1
#define TUN1_size                                0x1
#define TUN1_value_mask                          0x2
#define TUN1_clear_mask                          0xFD

#define TUN2                                     0x2
#define TUN2_address                             0x090
#define TUN2_position                            0x2
#define TUN2_size                                0x1
#define TUN2_value_mask                          0x4
#define TUN2_clear_mask                          0xFB

#define TUN3                                     0x3
#define TUN3_address                             0x090
#define TUN3_position                            0x3
#define TUN3_size                                0x1
#define TUN3_value_mask                          0x8
#define TUN3_clear_mask                          0xF7

#define TUN4                                     0x4
#define TUN4_address                             0x090
#define TUN4_position                            0x4
#define TUN4_size                                0x1
#define TUN4_value_mask                          0x10
#define TUN4_clear_mask                          0xEF


/*--------------------------------------------------#
| LVDCON                                       0x94 |
#---------------------------------------------------#
| - | - | IRVST | LVDEN | - | LVDL2 | LVDL1 | LVDL0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2     | 1     | 0     |
#--------------------------------------------------*/

#define LVDCON                                   0x0
#define LVDCON_address                           0x094
#define LVDCON_position                          0x0
#define LVDCON_size                              0x8
#define LVDCON_value_mask                        0xFF
#define LVDCON_clear_mask                        0x0

#define LVDL0                                    0x0
#define LVDL0_address                            0x094
#define LVDL0_position                           0x0
#define LVDL0_size                               0x1
#define LVDL0_value_mask                         0x1
#define LVDL0_clear_mask                         0xFE

#define LVDL                                     0x0
#define LVDL_address                             0x094
#define LVDL_position                            0x0
#define LVDL_size                                0x3
#define LVDL_value_mask                          0x7
#define LVDL_clear_mask                          0xF8

#define LVDL1                                    0x1
#define LVDL1_address                            0x094
#define LVDL1_position                           0x1
#define LVDL1_size                               0x1
#define LVDL1_value_mask                         0x2
#define LVDL1_clear_mask                         0xFD

#define LVDL2                                    0x2
#define LVDL2_address                            0x094
#define LVDL2_position                           0x2
#define LVDL2_size                               0x1
#define LVDL2_value_mask                         0x4
#define LVDL2_clear_mask                         0xFB

#define LVDEN                                    0x4
#define LVDEN_address                            0x094
#define LVDEN_position                           0x4
#define LVDEN_size                               0x1
#define LVDEN_value_mask                         0x10
#define LVDEN_clear_mask                         0xEF

#define IRVST                                    0x5
#define IRVST_address                            0x094
#define IRVST_position                           0x5
#define IRVST_size                               0x1
#define IRVST_value_mask                         0x20
#define IRVST_clear_mask                         0xDF


/*-------------------------------------------------------#
| WPUDA                                             0x95 |
#--------------------------------------------------------#
| - | - | WPUDA5 | WPUDA4 | - | WPUDA2 | WPUDA1 | WPUDA0 |
#--------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3 | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define WPUDA                                    0x0
#define WPUDA_address                            0x095
#define WPUDA_position                           0x0
#define WPUDA_size                               0x8
#define WPUDA_value_mask                         0xFF
#define WPUDA_clear_mask                         0x0

#define WPUDA0                                   0x0
#define WPUDA0_address                           0x095
#define WPUDA0_position                          0x0
#define WPUDA0_size                              0x1
#define WPUDA0_value_mask                        0x1
#define WPUDA0_clear_mask                        0xFE

#define WPUDA1                                   0x1
#define WPUDA1_address                           0x095
#define WPUDA1_position                          0x1
#define WPUDA1_size                              0x1
#define WPUDA1_value_mask                        0x2
#define WPUDA1_clear_mask                        0xFD

#define WPUDA2                                   0x2
#define WPUDA2_address                           0x095
#define WPUDA2_position                          0x2
#define WPUDA2_size                              0x1
#define WPUDA2_value_mask                        0x4
#define WPUDA2_clear_mask                        0xFB

#define WPUDA4                                   0x4
#define WPUDA4_address                           0x095
#define WPUDA4_position                          0x4
#define WPUDA4_size                              0x1
#define WPUDA4_value_mask                        0x10
#define WPUDA4_clear_mask                        0xEF

#define WPUDA5                                   0x5
#define WPUDA5_address                           0x095
#define WPUDA5_position                          0x5
#define WPUDA5_size                              0x1
#define WPUDA5_value_mask                        0x20
#define WPUDA5_clear_mask                        0xDF


/*------------------------------------------------------#
| IOCA                                             0x96 |
#-------------------------------------------------------#
| - | - | IOCA5 | IOCA4 | IOCA3 | IOCA2 | IOCA1 | IOCA0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define IOCA                                     0x0
#define IOCA_address                             0x096
#define IOCA_position                            0x0
#define IOCA_size                                0x8
#define IOCA_value_mask                          0xFF
#define IOCA_clear_mask                          0x0

#define IOCA0                                    0x0
#define IOCA0_address                            0x096
#define IOCA0_position                           0x0
#define IOCA0_size                               0x1
#define IOCA0_value_mask                         0x1
#define IOCA0_clear_mask                         0xFE

#define IOCA1                                    0x1
#define IOCA1_address                            0x096
#define IOCA1_position                           0x1
#define IOCA1_size                               0x1
#define IOCA1_value_mask                         0x2
#define IOCA1_clear_mask                         0xFD

#define IOCA2                                    0x2
#define IOCA2_address                            0x096
#define IOCA2_position                           0x2
#define IOCA2_size                               0x1
#define IOCA2_value_mask                         0x4
#define IOCA2_clear_mask                         0xFB

#define IOCA3                                    0x3
#define IOCA3_address                            0x096
#define IOCA3_position                           0x3
#define IOCA3_size                               0x1
#define IOCA3_value_mask                         0x8
#define IOCA3_clear_mask                         0xF7

#define IOCA4                                    0x4
#define IOCA4_address                            0x096
#define IOCA4_position                           0x4
#define IOCA4_size                               0x1
#define IOCA4_value_mask                         0x10
#define IOCA4_clear_mask                         0xEF

#define IOCA5                                    0x5
#define IOCA5_address                            0x096
#define IOCA5_position                           0x5
#define IOCA5_size                               0x1
#define IOCA5_value_mask                         0x20
#define IOCA5_clear_mask                         0xDF


/*---------------------------------------------#
| WDA                                     0x97 |
#----------------------------------------------#
| - | - | WDA5 | WDA4 | - | WDA2 | WDA1 | WDA0 |
#----------------------------------------------#
| 7 | 6 | 5    | 4    | 3 | 2    | 1    | 0    |
#---------------------------------------------*/

#define WDA                                      0x0
#define WDA_address                              0x097
#define WDA_position                             0x0
#define WDA_size                                 0x8
#define WDA_value_mask                           0xFF
#define WDA_clear_mask                           0x0

#define WDA0                                     0x0
#define WDA0_address                             0x097
#define WDA0_position                            0x0
#define WDA0_size                                0x1
#define WDA0_value_mask                          0x1
#define WDA0_clear_mask                          0xFE

#define WDA1                                     0x1
#define WDA1_address                             0x097
#define WDA1_position                            0x1
#define WDA1_size                                0x1
#define WDA1_value_mask                          0x2
#define WDA1_clear_mask                          0xFD

#define WDA2                                     0x2
#define WDA2_address                             0x097
#define WDA2_position                            0x2
#define WDA2_size                                0x1
#define WDA2_value_mask                          0x4
#define WDA2_clear_mask                          0xFB

#define WDA4                                     0x4
#define WDA4_address                             0x097
#define WDA4_position                            0x4
#define WDA4_size                                0x1
#define WDA4_value_mask                          0x10
#define WDA4_clear_mask                          0xEF

#define WDA5                                     0x5
#define WDA5_address                             0x097
#define WDA5_position                            0x5
#define WDA5_size                                0x1
#define WDA5_value_mask                          0x20
#define WDA5_clear_mask                          0xDF


/*-------------------------------------------#
| VRCON                                 0x99 |
#--------------------------------------------#
| VREN | - | VRR | - | VR3 | VR2 | VR1 | VR0 |
#--------------------------------------------#
| 7    | 6 | 5   | 4 | 3   | 2   | 1   | 0   |
#-------------------------------------------*/

#define VRCON                                    0x0
#define VRCON_address                            0x099
#define VRCON_position                           0x0
#define VRCON_size                               0x8
#define VRCON_value_mask                         0xFF
#define VRCON_clear_mask                         0x0

#define VR0                                      0x0
#define VR0_address                              0x099
#define VR0_position                             0x0
#define VR0_size                                 0x1
#define VR0_value_mask                           0x1
#define VR0_clear_mask                           0xFE

#define VR                                       0x0
#define VR_address                               0x099
#define VR_position                              0x0
#define VR_size                                  0x4
#define VR_value_mask                            0xF
#define VR_clear_mask                            0xF0

#define VR1                                      0x1
#define VR1_address                              0x099
#define VR1_position                             0x1
#define VR1_size                                 0x1
#define VR1_value_mask                           0x2
#define VR1_clear_mask                           0xFD

#define VR2                                      0x2
#define VR2_address                              0x099
#define VR2_position                             0x2
#define VR2_size                                 0x1
#define VR2_value_mask                           0x4
#define VR2_clear_mask                           0xFB

#define VR3                                      0x3
#define VR3_address                              0x099
#define VR3_position                             0x3
#define VR3_size                                 0x1
#define VR3_value_mask                           0x8
#define VR3_clear_mask                           0xF7

#define VRR                                      0x5
#define VRR_address                              0x099
#define VRR_position                             0x5
#define VRR_size                                 0x1
#define VRR_value_mask                           0x20
#define VRR_clear_mask                           0xDF

#define VREN                                     0x7
#define VREN_address                             0x099
#define VREN_position                            0x7
#define VREN_size                                0x1
#define VREN_value_mask                          0x80
#define VREN_clear_mask                          0x7F


/*---------------------------------------#
| EECON1                            0x9C |
#----------------------------------------#
| - | - | - | - | WRERR | WREN | WR | RD |
#----------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2    | 1  | 0  |
#---------------------------------------*/

#define EECON1                                   0x0
#define EECON1_address                           0x09C
#define EECON1_position                          0x0
#define EECON1_size                              0x8
#define EECON1_value_mask                        0xFF
#define EECON1_clear_mask                        0x0

#define RD                                       0x0
#define RD_address                               0x09C
#define RD_position                              0x0
#define RD_size                                  0x1
#define RD_value_mask                            0x1
#define RD_clear_mask                            0xFE

#define WR                                       0x1
#define WR_address                               0x09C
#define WR_position                              0x1
#define WR_size                                  0x1
#define WR_value_mask                            0x2
#define WR_clear_mask                            0xFD

#define WREN                                     0x2
#define WREN_address                             0x09C
#define WREN_position                            0x2
#define WREN_size                                0x1
#define WREN_value_mask                          0x4
#define WREN_clear_mask                          0xFB

#define WRERR                                    0x3
#define WRERR_address                            0x09C
#define WRERR_position                           0x3
#define WRERR_size                               0x1
#define WRERR_value_mask                         0x8
#define WRERR_clear_mask                         0xF7


/*-----------------------------------------------------#
| CRCON                                          0x110 |
#------------------------------------------------------#
| GO_nDONE | ENC_DEC | - | - | - | - | CRREG1 | CRREG0 |
#------------------------------------------------------#
| 7        | 6       | 5 | 4 | 3 | 2 | 1      | 0      |
#-----------------------------------------------------*/

#define CRCON                                    0x0
#define CRCON_address                            0x110
#define CRCON_position                           0x0
#define CRCON_size                               0x8
#define CRCON_value_mask                         0xFF
#define CRCON_clear_mask                         0x0

#define CRREG                                    0x0
#define CRREG_address                            0x110
#define CRREG_position                           0x0
#define CRREG_size                               0x2
#define CRREG_value_mask                         0x3
#define CRREG_clear_mask                         0xFC

#define CRREG0                                   0x0
#define CRREG0_address                           0x110
#define CRREG0_position                          0x0
#define CRREG0_size                              0x1
#define CRREG0_value_mask                        0x1
#define CRREG0_clear_mask                        0xFE

#define CRREG1                                   0x1
#define CRREG1_address                           0x110
#define CRREG1_position                          0x1
#define CRREG1_size                              0x1
#define CRREG1_value_mask                        0x2
#define CRREG1_clear_mask                        0xFD

#define ENC_DEC                                  0x6
#define ENC_DEC_address                          0x110
#define ENC_DEC_position                         0x6
#define ENC_DEC_size                             0x1
#define ENC_DEC_value_mask                       0x40
#define ENC_DEC_clear_mask                       0xBF

#define ENC_nDEC                                 0x6
#define ENC_nDEC_address                         0x110
#define ENC_nDEC_position                        0x6
#define ENC_nDEC_size                            0x1
#define ENC_nDEC_value_mask                      0x40
#define ENC_nDEC_clear_mask                      0xBF

#define GO_nDONE                                 0x7
#define GO_nDONE_address                         0x110
#define GO_nDONE_position                        0x7
#define GO_nDONE_size                            0x1
#define GO_nDONE_value_mask                      0x80
#define GO_nDONE_clear_mask                      0x7F

#define GO                                       0x7
#define GO_address                               0x110
#define GO_position                              0x7
#define GO_size                                  0x1
#define GO_value_mask                            0x80
#define GO_clear_mask                            0x7F


/*------------------------------#
| CRDAT0                  0x111 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CRDAT0                                   0x0
#define CRDAT0_address                           0x111
#define CRDAT0_position                          0x0
#define CRDAT0_size                              0x8
#define CRDAT0_value_mask                        0xFF
#define CRDAT0_clear_mask                        0x0


/*------------------------------#
| CRDAT1                  0x112 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CRDAT1                                   0x0
#define CRDAT1_address                           0x112
#define CRDAT1_position                          0x0
#define CRDAT1_size                              0x8
#define CRDAT1_value_mask                        0xFF
#define CRDAT1_clear_mask                        0x0


/*------------------------------#
| CRDAT2                  0x113 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CRDAT2                                   0x0
#define CRDAT2_address                           0x113
#define CRDAT2_position                          0x0
#define CRDAT2_size                              0x8
#define CRDAT2_value_mask                        0xFF
#define CRDAT2_clear_mask                        0x0


/*------------------------------#
| CRDAT3                  0x114 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CRDAT3                                   0x0
#define CRDAT3_address                           0x114
#define CRDAT3_position                          0x0
#define CRDAT3_size                              0x8
#define CRDAT3_value_mask                        0xFF
#define CRDAT3_clear_mask                        0x0

#endif // _PIC16F639_H_
