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

#ifndef _PIC16HV785_H_
#define _PIC16HV785_H_


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


/*--------------------------------------#
| PORTB                             0x6 |
#---------------------------------------#
| RB7 | RB6 | RB5 | RB4 | - | - | - | - |
#---------------------------------------#
| 7   | 6   | 5   | 4   | 3 | 2 | 1 | 0 |
#--------------------------------------*/

#define PORTB                                    0x0
#define PORTB_address                            0x006
#define PORTB_position                           0x0
#define PORTB_size                               0x8
#define PORTB_value_mask                         0xFF
#define PORTB_clear_mask                         0x0

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


/*----------------------------------------------#
| PORTC                                     0x7 |
#-----------------------------------------------#
| RC7 | RC6 | RC5 | RC4 | RC3 | RC2 | RC1 | RC0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

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

#define RC6                                      0x6
#define RC6_address                              0x007
#define RC6_position                             0x6
#define RC6_size                                 0x1
#define RC6_value_mask                           0x40
#define RC6_clear_mask                           0xBF

#define RC7                                      0x7
#define RC7_address                              0x007
#define RC7_position                             0x7
#define RC7_size                                 0x1
#define RC7_value_mask                           0x80
#define RC7_clear_mask                           0x7F


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

#define TMR0IF                                   0x2
#define TMR0IF_address                           0x00B
#define TMR0IF_position                          0x2
#define TMR0IF_size                              0x1
#define TMR0IF_value_mask                        0x4
#define TMR0IF_clear_mask                        0xFB

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


/*---------------------------------------------------------#
| PIR1                                                 0xC |
#----------------------------------------------------------#
| EEIF | ADIF | CCP1IF | C2IF | C1IF | OSFIF | T2IF | T1IF |
#----------------------------------------------------------#
| 7    | 6    | 5      | 4    | 3    | 2     | 1    | 0    |
#---------------------------------------------------------*/

#define PIR1                                     0x0
#define PIR1_address                             0x00C
#define PIR1_position                            0x0
#define PIR1_size                                0x8
#define PIR1_value_mask                          0xFF
#define PIR1_clear_mask                          0x0

#define T1IF                                     0x0
#define T1IF_address                             0x00C
#define T1IF_position                            0x0
#define T1IF_size                                0x1
#define T1IF_value_mask                          0x1
#define T1IF_clear_mask                          0xFE

#define TMR1IF                                   0x0
#define TMR1IF_address                           0x00C
#define TMR1IF_position                          0x0
#define TMR1IF_size                              0x1
#define TMR1IF_value_mask                        0x1
#define TMR1IF_clear_mask                        0xFE

#define T2IF                                     0x1
#define T2IF_address                             0x00C
#define T2IF_position                            0x1
#define T2IF_size                                0x1
#define T2IF_value_mask                          0x2
#define T2IF_clear_mask                          0xFD

#define TMR2IF                                   0x1
#define TMR2IF_address                           0x00C
#define TMR2IF_position                          0x1
#define TMR2IF_size                              0x1
#define TMR2IF_value_mask                        0x2
#define TMR2IF_clear_mask                        0xFD

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

#define CCP1IF                                   0x5
#define CCP1IF_address                           0x00C
#define CCP1IF_position                          0x5
#define CCP1IF_size                              0x1
#define CCP1IF_value_mask                        0x20
#define CCP1IF_clear_mask                        0xDF

#define ADIF                                     0x6
#define ADIF_address                             0x00C
#define ADIF_position                            0x6
#define ADIF_size                                0x1
#define ADIF_value_mask                          0x40
#define ADIF_clear_mask                          0xBF

#define EEIF                                     0x7
#define EEIF_address                             0x00C
#define EEIF_position                            0x7
#define EEIF_size                                0x1
#define EEIF_value_mask                          0x80
#define EEIF_clear_mask                          0x7F


/*------------------------------------------------------------------------#
| T1CON                                                              0x10 |
#-------------------------------------------------------------------------#
| T1GINV | T1GE | T1CKPS1 | T1CKPS0 | T1OSCEN | nT1SYNC | TMR1CS | TMR1ON |
#-------------------------------------------------------------------------#
| 7      | 6    | 5       | 4       | 3       | 2       | 1      | 0      |
#------------------------------------------------------------------------*/

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

#define T1GE                                     0x6
#define T1GE_address                             0x010
#define T1GE_position                            0x6
#define T1GE_size                                0x1
#define T1GE_value_mask                          0x40
#define T1GE_clear_mask                          0xBF

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


/*-----------------------------------------------------------------------#
| T2CON                                                             0x12 |
#------------------------------------------------------------------------#
| - | TOUTPS3 | TOUTPS2 | TOUTPS1 | TOUTPS0 | TMR2ON | T2CKPS1 | T2CKPS0 |
#------------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3       | 2      | 1       | 0       |
#-----------------------------------------------------------------------*/

#define T2CON                                    0x0
#define T2CON_address                            0x012
#define T2CON_position                           0x0
#define T2CON_size                               0x8
#define T2CON_value_mask                         0xFF
#define T2CON_clear_mask                         0x0

#define T2CKPS0                                  0x0
#define T2CKPS0_address                          0x012
#define T2CKPS0_position                         0x0
#define T2CKPS0_size                             0x1
#define T2CKPS0_value_mask                       0x1
#define T2CKPS0_clear_mask                       0xFE

#define T2CKPS                                   0x0
#define T2CKPS_address                           0x012
#define T2CKPS_position                          0x0
#define T2CKPS_size                              0x2
#define T2CKPS_value_mask                        0x3
#define T2CKPS_clear_mask                        0xFC

#define T2CKPS1                                  0x1
#define T2CKPS1_address                          0x012
#define T2CKPS1_position                         0x1
#define T2CKPS1_size                             0x1
#define T2CKPS1_value_mask                       0x2
#define T2CKPS1_clear_mask                       0xFD

#define TMR2ON                                   0x2
#define TMR2ON_address                           0x012
#define TMR2ON_position                          0x2
#define TMR2ON_size                              0x1
#define TMR2ON_value_mask                        0x4
#define TMR2ON_clear_mask                        0xFB

#define TOUTPS0                                  0x3
#define TOUTPS0_address                          0x012
#define TOUTPS0_position                         0x3
#define TOUTPS0_size                             0x1
#define TOUTPS0_value_mask                       0x8
#define TOUTPS0_clear_mask                       0xF7

#define TOUTPS                                   0x3
#define TOUTPS_address                           0x012
#define TOUTPS_position                          0x3
#define TOUTPS_size                              0x4
#define TOUTPS_value_mask                        0x78
#define TOUTPS_clear_mask                        0x87

#define TOUTPS1                                  0x4
#define TOUTPS1_address                          0x012
#define TOUTPS1_position                         0x4
#define TOUTPS1_size                             0x1
#define TOUTPS1_value_mask                       0x10
#define TOUTPS1_clear_mask                       0xEF

#define TOUTPS2                                  0x5
#define TOUTPS2_address                          0x012
#define TOUTPS2_position                         0x5
#define TOUTPS2_size                             0x1
#define TOUTPS2_value_mask                       0x20
#define TOUTPS2_clear_mask                       0xDF

#define TOUTPS3                                  0x6
#define TOUTPS3_address                          0x012
#define TOUTPS3_position                         0x6
#define TOUTPS3_size                             0x1
#define TOUTPS3_value_mask                       0x40
#define TOUTPS3_clear_mask                       0xBF


/*----------------------------------------------------------#
| CCP1CON                                              0x15 |
#-----------------------------------------------------------#
| - | - | DC1B1 | DC1B0 | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP1CON                                  0x0
#define CCP1CON_address                          0x015
#define CCP1CON_position                         0x0
#define CCP1CON_size                             0x8
#define CCP1CON_value_mask                       0xFF
#define CCP1CON_clear_mask                       0x0

#define CCP1M0                                   0x0
#define CCP1M0_address                           0x015
#define CCP1M0_position                          0x0
#define CCP1M0_size                              0x1
#define CCP1M0_value_mask                        0x1
#define CCP1M0_clear_mask                        0xFE

#define CCP1M                                    0x0
#define CCP1M_address                            0x015
#define CCP1M_position                           0x0
#define CCP1M_size                               0x4
#define CCP1M_value_mask                         0xF
#define CCP1M_clear_mask                         0xF0

#define CCP1M1                                   0x1
#define CCP1M1_address                           0x015
#define CCP1M1_position                          0x1
#define CCP1M1_size                              0x1
#define CCP1M1_value_mask                        0x2
#define CCP1M1_clear_mask                        0xFD

#define CCP1M2                                   0x2
#define CCP1M2_address                           0x015
#define CCP1M2_position                          0x2
#define CCP1M2_size                              0x1
#define CCP1M2_value_mask                        0x4
#define CCP1M2_clear_mask                        0xFB

#define CCP1M3                                   0x3
#define CCP1M3_address                           0x015
#define CCP1M3_position                          0x3
#define CCP1M3_size                              0x1
#define CCP1M3_value_mask                        0x8
#define CCP1M3_clear_mask                        0xF7

#define DCB                                      0x4
#define DCB_address                              0x015
#define DCB_position                             0x4
#define DCB_size                                 0x2
#define DCB_value_mask                           0x30
#define DCB_clear_mask                           0xCF

#define DC1B0                                    0x4
#define DC1B0_address                            0x015
#define DC1B0_position                           0x4
#define DC1B0_size                               0x1
#define DC1B0_value_mask                         0x10
#define DC1B0_clear_mask                         0xEF

#define DC1B1                                    0x5
#define DC1B1_address                            0x015
#define DC1B1_position                           0x5
#define DC1B1_size                               0x1
#define DC1B1_value_mask                         0x20
#define DC1B1_clear_mask                         0xDF


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


/*-------------------------------------------------------#
| ADCON0                                            0x1F |
#--------------------------------------------------------#
| ADFM | VCFG | CHS3 | CHS2 | CHS1 | CHS0 | nDONE | ADON |
#--------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1     | 0    |
#-------------------------------------------------------*/

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

#define nDONE                                    0x1
#define nDONE_address                            0x01F
#define nDONE_position                           0x1
#define nDONE_size                               0x1
#define nDONE_value_mask                         0x2
#define nDONE_clear_mask                         0xFD

#define GO_nDONE                                 0x1
#define GO_nDONE_address                         0x01F
#define GO_nDONE_position                        0x1
#define GO_nDONE_size                            0x1
#define GO_nDONE_value_mask                      0x2
#define GO_nDONE_clear_mask                      0xFD

#define GO_DONE                                  0x1
#define GO_DONE_address                          0x01F
#define GO_DONE_position                         0x1
#define GO_DONE_size                             0x1
#define GO_DONE_value_mask                       0x2
#define GO_DONE_clear_mask                       0xFD

#define GO                                       0x1
#define GO_address                               0x01F
#define GO_position                              0x1
#define GO_size                                  0x1
#define GO_value_mask                            0x2
#define GO_clear_mask                            0xFD

#define CHS                                      0x2
#define CHS_address                              0x01F
#define CHS_position                             0x2
#define CHS_size                                 0x4
#define CHS_value_mask                           0x3C
#define CHS_clear_mask                           0xC3

#define CHS0                                     0x2
#define CHS0_address                             0x01F
#define CHS0_position                            0x2
#define CHS0_size                                0x1
#define CHS0_value_mask                          0x4
#define CHS0_clear_mask                          0xFB

#define CHS1                                     0x3
#define CHS1_address                             0x01F
#define CHS1_position                            0x3
#define CHS1_size                                0x1
#define CHS1_value_mask                          0x8
#define CHS1_clear_mask                          0xF7

#define CHS2                                     0x4
#define CHS2_address                             0x01F
#define CHS2_position                            0x4
#define CHS2_size                                0x1
#define CHS2_value_mask                          0x10
#define CHS2_clear_mask                          0xEF

#define CHS3                                     0x5
#define CHS3_address                             0x01F
#define CHS3_position                            0x5
#define CHS3_size                                0x1
#define CHS3_value_mask                          0x20
#define CHS3_clear_mask                          0xDF

#define VCFG                                     0x6
#define VCFG_address                             0x01F
#define VCFG_position                            0x6
#define VCFG_size                                0x1
#define VCFG_value_mask                          0x40
#define VCFG_clear_mask                          0xBF

#define ADFM                                     0x7
#define ADFM_address                             0x01F
#define ADFM_position                            0x7
#define ADFM_size                                0x1
#define ADFM_value_mask                          0x80
#define ADFM_clear_mask                          0x7F


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


/*--------------------------------------------------#
| TRISB                                        0x86 |
#---------------------------------------------------#
| TRISB7 | TRISB6 | TRISB5 | TRISB4 | - | - | - | - |
#---------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2 | 1 | 0 |
#--------------------------------------------------*/

#define TRISB                                    0x0
#define TRISB_address                            0x086
#define TRISB_position                           0x0
#define TRISB_size                               0x8
#define TRISB_value_mask                         0xFF
#define TRISB_clear_mask                         0x0

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


/*----------------------------------------------------------------------#
| TRISC                                                            0x87 |
#-----------------------------------------------------------------------#
| TRISC7 | TRISC6 | TRISC5 | TRISC4 | TRISC3 | TRISC2 | TRISC1 | TRISC0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

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

#define TRISC6                                   0x6
#define TRISC6_address                           0x087
#define TRISC6_position                          0x6
#define TRISC6_size                              0x1
#define TRISC6_value_mask                        0x40
#define TRISC6_clear_mask                        0xBF

#define TRISC7                                   0x7
#define TRISC7_address                           0x087
#define TRISC7_position                          0x7
#define TRISC7_size                              0x1
#define TRISC7_value_mask                        0x80
#define TRISC7_clear_mask                        0x7F


/*---------------------------------------------------------#
| PIE1                                                0x8C |
#----------------------------------------------------------#
| EEIE | ADIE | CCP1IE | C2IE | C1IE | OSFIE | T2IE | T1IE |
#----------------------------------------------------------#
| 7    | 6    | 5      | 4    | 3    | 2     | 1    | 0    |
#---------------------------------------------------------*/

#define PIE1                                     0x0
#define PIE1_address                             0x08C
#define PIE1_position                            0x0
#define PIE1_size                                0x8
#define PIE1_value_mask                          0xFF
#define PIE1_clear_mask                          0x0

#define T1IE                                     0x0
#define T1IE_address                             0x08C
#define T1IE_position                            0x0
#define T1IE_size                                0x1
#define T1IE_value_mask                          0x1
#define T1IE_clear_mask                          0xFE

#define TMR1IE                                   0x0
#define TMR1IE_address                           0x08C
#define TMR1IE_position                          0x0
#define TMR1IE_size                              0x1
#define TMR1IE_value_mask                        0x1
#define TMR1IE_clear_mask                        0xFE

#define T2IE                                     0x1
#define T2IE_address                             0x08C
#define T2IE_position                            0x1
#define T2IE_size                                0x1
#define T2IE_value_mask                          0x2
#define T2IE_clear_mask                          0xFD

#define TMR2IE                                   0x1
#define TMR2IE_address                           0x08C
#define TMR2IE_position                          0x1
#define TMR2IE_size                              0x1
#define TMR2IE_value_mask                        0x2
#define TMR2IE_clear_mask                        0xFD

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

#define CCP1IE                                   0x5
#define CCP1IE_address                           0x08C
#define CCP1IE_position                          0x5
#define CCP1IE_size                              0x1
#define CCP1IE_value_mask                        0x20
#define CCP1IE_clear_mask                        0xDF

#define ADIE                                     0x6
#define ADIE_address                             0x08C
#define ADIE_position                            0x6
#define ADIE_size                                0x1
#define ADIE_value_mask                          0x40
#define ADIE_clear_mask                          0xBF

#define EEIE                                     0x7
#define EEIE_address                             0x08C
#define EEIE_position                            0x7
#define EEIE_size                                0x1
#define EEIE_value_mask                          0x80
#define EEIE_clear_mask                          0x7F


/*-----------------------------------------#
| PCON                                0x8E |
#------------------------------------------#
| - | - | - | SBOREN | - | - | nPOR | nBOR |
#------------------------------------------#
| 7 | 6 | 5 | 4      | 3 | 2 | 1    | 0    |
#-----------------------------------------*/

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

#define nBOD                                     0x0
#define nBOD_address                             0x08E
#define nBOD_position                            0x0
#define nBOD_size                                0x1
#define nBOD_value_mask                          0x1
#define nBOD_clear_mask                          0xFE

#define nPOR                                     0x1
#define nPOR_address                             0x08E
#define nPOR_position                            0x1
#define nPOR_size                                0x1
#define nPOR_value_mask                          0x2
#define nPOR_clear_mask                          0xFD

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

#define IRCF                                     0x4
#define IRCF_address                             0x08F
#define IRCF_position                            0x4
#define IRCF_size                                0x3
#define IRCF_value_mask                          0x70
#define IRCF_clear_mask                          0x8F

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


/*------------------------------------------------------#
| ANSEL0                                           0x91 |
#-------------------------------------------------------#
| ANS7 | ANS6 | ANS5 | ANS4 | ANS3 | ANS2 | ANS1 | ANS0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define ANSEL0                                   0x0
#define ANSEL0_address                           0x091
#define ANSEL0_position                          0x0
#define ANSEL0_size                              0x8
#define ANSEL0_value_mask                        0xFF
#define ANSEL0_clear_mask                        0x0

#define ANS0                                     0x0
#define ANS0_address                             0x091
#define ANS0_position                            0x0
#define ANS0_size                                0x1
#define ANS0_value_mask                          0x1
#define ANS0_clear_mask                          0xFE

#define ANS1                                     0x1
#define ANS1_address                             0x091
#define ANS1_position                            0x1
#define ANS1_size                                0x1
#define ANS1_value_mask                          0x2
#define ANS1_clear_mask                          0xFD

#define ANS2                                     0x2
#define ANS2_address                             0x091
#define ANS2_position                            0x2
#define ANS2_size                                0x1
#define ANS2_value_mask                          0x4
#define ANS2_clear_mask                          0xFB

#define ANS3                                     0x3
#define ANS3_address                             0x091
#define ANS3_position                            0x3
#define ANS3_size                                0x1
#define ANS3_value_mask                          0x8
#define ANS3_clear_mask                          0xF7

#define ANS4                                     0x4
#define ANS4_address                             0x091
#define ANS4_position                            0x4
#define ANS4_size                                0x1
#define ANS4_value_mask                          0x10
#define ANS4_clear_mask                          0xEF

#define ANS5                                     0x5
#define ANS5_address                             0x091
#define ANS5_position                            0x5
#define ANS5_size                                0x1
#define ANS5_value_mask                          0x20
#define ANS5_clear_mask                          0xDF

#define ANS6                                     0x6
#define ANS6_address                             0x091
#define ANS6_position                            0x6
#define ANS6_size                                0x1
#define ANS6_value_mask                          0x40
#define ANS6_clear_mask                          0xBF

#define ANS7                                     0x7
#define ANS7_address                             0x091
#define ANS7_position                            0x7
#define ANS7_size                                0x1
#define ANS7_value_mask                          0x80
#define ANS7_clear_mask                          0x7F


/*--------------------------------------------#
| ANSEL1                                 0x93 |
#---------------------------------------------#
| - | - | - | - | ANS11 | ANS10 | ANS9 | ANS8 |
#---------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1    | 0    |
#--------------------------------------------*/

#define ANSEL1                                   0x0
#define ANSEL1_address                           0x093
#define ANSEL1_position                          0x0
#define ANSEL1_size                              0x8
#define ANSEL1_value_mask                        0xFF
#define ANSEL1_clear_mask                        0x0

#define ANS8                                     0x0
#define ANS8_address                             0x093
#define ANS8_position                            0x0
#define ANS8_size                                0x1
#define ANS8_value_mask                          0x1
#define ANS8_clear_mask                          0xFE

#define ANS9                                     0x1
#define ANS9_address                             0x093
#define ANS9_position                            0x1
#define ANS9_size                                0x1
#define ANS9_value_mask                          0x2
#define ANS9_clear_mask                          0xFD

#define ANS10                                    0x2
#define ANS10_address                            0x093
#define ANS10_position                           0x2
#define ANS10_size                               0x1
#define ANS10_value_mask                         0x4
#define ANS10_clear_mask                         0xFB

#define ANS11                                    0x3
#define ANS11_address                            0x093
#define ANS11_position                           0x3
#define ANS11_size                               0x1
#define ANS11_value_mask                         0x8
#define ANS11_clear_mask                         0xF7


/*------------------------------------------------------#
| WPUA                                             0x95 |
#-------------------------------------------------------#
| - | - | WPUA5 | WPUA4 | WPUA3 | WPUA2 | WPUA1 | WPUA0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define WPUA                                     0x0
#define WPUA_address                             0x095
#define WPUA_position                            0x0
#define WPUA_size                                0x8
#define WPUA_value_mask                          0xFF
#define WPUA_clear_mask                          0x0

#define WPUA0                                    0x0
#define WPUA0_address                            0x095
#define WPUA0_position                           0x0
#define WPUA0_size                               0x1
#define WPUA0_value_mask                         0x1
#define WPUA0_clear_mask                         0xFE

#define WPU0                                     0x0
#define WPU0_address                             0x095
#define WPU0_position                            0x0
#define WPU0_size                                0x1
#define WPU0_value_mask                          0x1
#define WPU0_clear_mask                          0xFE

#define WPU1                                     0x1
#define WPU1_address                             0x095
#define WPU1_position                            0x1
#define WPU1_size                                0x1
#define WPU1_value_mask                          0x2
#define WPU1_clear_mask                          0xFD

#define WPUA1                                    0x1
#define WPUA1_address                            0x095
#define WPUA1_position                           0x1
#define WPUA1_size                               0x1
#define WPUA1_value_mask                         0x2
#define WPUA1_clear_mask                         0xFD

#define WPUA2                                    0x2
#define WPUA2_address                            0x095
#define WPUA2_position                           0x2
#define WPUA2_size                               0x1
#define WPUA2_value_mask                         0x4
#define WPUA2_clear_mask                         0xFB

#define WPU2                                     0x2
#define WPU2_address                             0x095
#define WPU2_position                            0x2
#define WPU2_size                                0x1
#define WPU2_value_mask                          0x4
#define WPU2_clear_mask                          0xFB

#define WPUA3                                    0x3
#define WPUA3_address                            0x095
#define WPUA3_position                           0x3
#define WPUA3_size                               0x1
#define WPUA3_value_mask                         0x8
#define WPUA3_clear_mask                         0xF7

#define WPU3                                     0x3
#define WPU3_address                             0x095
#define WPU3_position                            0x3
#define WPU3_size                                0x1
#define WPU3_value_mask                          0x8
#define WPU3_clear_mask                          0xF7

#define WPUA4                                    0x4
#define WPUA4_address                            0x095
#define WPUA4_position                           0x4
#define WPUA4_size                               0x1
#define WPUA4_value_mask                         0x10
#define WPUA4_clear_mask                         0xEF

#define WPU4                                     0x4
#define WPU4_address                             0x095
#define WPU4_position                            0x4
#define WPU4_size                                0x1
#define WPU4_value_mask                          0x10
#define WPU4_clear_mask                          0xEF

#define WPUA5                                    0x5
#define WPUA5_address                            0x095
#define WPUA5_position                           0x5
#define WPUA5_size                               0x1
#define WPUA5_value_mask                         0x20
#define WPUA5_clear_mask                         0xDF

#define WPU5                                     0x5
#define WPU5_address                             0x095
#define WPU5_position                            0x5
#define WPU5_size                                0x1
#define WPU5_value_mask                          0x20
#define WPU5_clear_mask                          0xDF


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

#define IOC0                                     0x0
#define IOC0_address                             0x096
#define IOC0_position                            0x0
#define IOC0_size                                0x1
#define IOC0_value_mask                          0x1
#define IOC0_clear_mask                          0xFE

#define IOCA1                                    0x1
#define IOCA1_address                            0x096
#define IOCA1_position                           0x1
#define IOCA1_size                               0x1
#define IOCA1_value_mask                         0x2
#define IOCA1_clear_mask                         0xFD

#define IOC1                                     0x1
#define IOC1_address                             0x096
#define IOC1_position                            0x1
#define IOC1_size                                0x1
#define IOC1_value_mask                          0x2
#define IOC1_clear_mask                          0xFD

#define IOCA2                                    0x2
#define IOCA2_address                            0x096
#define IOCA2_position                           0x2
#define IOCA2_size                               0x1
#define IOCA2_value_mask                         0x4
#define IOCA2_clear_mask                         0xFB

#define IOC2                                     0x2
#define IOC2_address                             0x096
#define IOC2_position                            0x2
#define IOC2_size                                0x1
#define IOC2_value_mask                          0x4
#define IOC2_clear_mask                          0xFB

#define IOCA3                                    0x3
#define IOCA3_address                            0x096
#define IOCA3_position                           0x3
#define IOCA3_size                               0x1
#define IOCA3_value_mask                         0x8
#define IOCA3_clear_mask                         0xF7

#define IOC3                                     0x3
#define IOC3_address                             0x096
#define IOC3_position                            0x3
#define IOC3_size                                0x1
#define IOC3_value_mask                          0x8
#define IOC3_clear_mask                          0xF7

#define IOCA4                                    0x4
#define IOCA4_address                            0x096
#define IOCA4_position                           0x4
#define IOCA4_size                               0x1
#define IOCA4_value_mask                         0x10
#define IOCA4_clear_mask                         0xEF

#define IOC4                                     0x4
#define IOC4_address                             0x096
#define IOC4_position                            0x4
#define IOC4_size                                0x1
#define IOC4_value_mask                          0x10
#define IOC4_clear_mask                          0xEF

#define IOCA5                                    0x5
#define IOCA5_address                            0x096
#define IOCA5_position                           0x5
#define IOCA5_size                               0x1
#define IOCA5_value_mask                         0x20
#define IOCA5_clear_mask                         0xDF

#define IOC5                                     0x5
#define IOC5_address                             0x096
#define IOC5_position                            0x5
#define IOC5_size                                0x1
#define IOC5_value_mask                          0x20
#define IOC5_clear_mask                          0xDF


/*----------------------------------------------#
| REFCON                                   0x98 |
#-----------------------------------------------#
| - | - | BGST | VRBB | VREN | VROE | CVROE | - |
#-----------------------------------------------#
| 7 | 6 | 5    | 4    | 3    | 2    | 1     | 0 |
#----------------------------------------------*/

#define REFCON                                   0x0
#define REFCON_address                           0x098
#define REFCON_position                          0x0
#define REFCON_size                              0x8
#define REFCON_value_mask                        0xFF
#define REFCON_clear_mask                        0x0

#define CVROE                                    0x1
#define CVROE_address                            0x098
#define CVROE_position                           0x1
#define CVROE_size                               0x1
#define CVROE_value_mask                         0x2
#define CVROE_clear_mask                         0xFD

#define VROE                                     0x2
#define VROE_address                             0x098
#define VROE_position                            0x2
#define VROE_size                                0x1
#define VROE_value_mask                          0x4
#define VROE_clear_mask                          0xFB

#define VREN                                     0x3
#define VREN_address                             0x098
#define VREN_position                            0x3
#define VREN_size                                0x1
#define VREN_value_mask                          0x8
#define VREN_clear_mask                          0xF7

#define VRBB                                     0x4
#define VRBB_address                             0x098
#define VRBB_position                            0x4
#define VRBB_size                                0x1
#define VRBB_value_mask                          0x10
#define VRBB_clear_mask                          0xEF

#define BGST                                     0x5
#define BGST_address                             0x098
#define BGST_position                            0x5
#define BGST_size                                0x1
#define BGST_value_mask                          0x20
#define BGST_clear_mask                          0xDF


/*--------------------------------------------------#
| VRCON                                        0x99 |
#---------------------------------------------------#
| C1VREN | C2VREN | VRR | - | VR3 | VR2 | VR1 | VR0 |
#---------------------------------------------------#
| 7      | 6      | 5   | 4 | 3   | 2   | 1   | 0   |
#--------------------------------------------------*/

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

#define C2VREN                                   0x6
#define C2VREN_address                           0x099
#define C2VREN_position                          0x6
#define C2VREN_size                              0x1
#define C2VREN_value_mask                        0x40
#define C2VREN_clear_mask                        0xBF

#define C1VREN                                   0x7
#define C1VREN_address                           0x099
#define C1VREN_position                          0x7
#define C1VREN_size                              0x1
#define C1VREN_value_mask                        0x80
#define C1VREN_clear_mask                        0x7F


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


/*------------------------------------------#
| ADCON1                               0x9F |
#-------------------------------------------#
| - | ADCS2 | ADCS1 | ADCS0 | - | - | - | - |
#-------------------------------------------#
| 7 | 6     | 5     | 4     | 3 | 2 | 1 | 0 |
#------------------------------------------*/

#define ADCON1                                   0x0
#define ADCON1_address                           0x09F
#define ADCON1_position                          0x0
#define ADCON1_size                              0x8
#define ADCON1_value_mask                        0xFF
#define ADCON1_clear_mask                        0x0

#define ADCS                                     0x4
#define ADCS_address                             0x09F
#define ADCS_position                            0x4
#define ADCS_size                                0x3
#define ADCS_value_mask                          0x70
#define ADCS_clear_mask                          0x8F

#define ADCS0                                    0x4
#define ADCS0_address                            0x09F
#define ADCS0_position                           0x4
#define ADCS0_size                               0x1
#define ADCS0_value_mask                         0x10
#define ADCS0_clear_mask                         0xEF

#define ADCS1                                    0x5
#define ADCS1_address                            0x09F
#define ADCS1_position                           0x5
#define ADCS1_size                               0x1
#define ADCS1_value_mask                         0x20
#define ADCS1_clear_mask                         0xDF

#define ADCS2                                    0x6
#define ADCS2_address                            0x09F
#define ADCS2_position                           0x6
#define ADCS2_size                               0x1
#define ADCS2_value_mask                         0x40
#define ADCS2_clear_mask                         0xBF


/*---------------------------------------------------------------------#
| PWMCON1                                                        0x110 |
#----------------------------------------------------------------------#
| OVRLP | COMOD1 | COMOD0 | CMDLY4 | CMDLY3 | CMDLY2 | CMDLY1 | CMDLY0 |
#----------------------------------------------------------------------#
| 7     | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------------*/

#define PWMCON1                                  0x0
#define PWMCON1_address                          0x110
#define PWMCON1_position                         0x0
#define PWMCON1_size                             0x8
#define PWMCON1_value_mask                       0xFF
#define PWMCON1_clear_mask                       0x0

#define CMDLY                                    0x0
#define CMDLY_address                            0x110
#define CMDLY_position                           0x0
#define CMDLY_size                               0x5
#define CMDLY_value_mask                         0x1F
#define CMDLY_clear_mask                         0xE0

#define CMDLY0                                   0x0
#define CMDLY0_address                           0x110
#define CMDLY0_position                          0x0
#define CMDLY0_size                              0x1
#define CMDLY0_value_mask                        0x1
#define CMDLY0_clear_mask                        0xFE

#define CMDLY1                                   0x1
#define CMDLY1_address                           0x110
#define CMDLY1_position                          0x1
#define CMDLY1_size                              0x1
#define CMDLY1_value_mask                        0x2
#define CMDLY1_clear_mask                        0xFD

#define CMDLY2                                   0x2
#define CMDLY2_address                           0x110
#define CMDLY2_position                          0x2
#define CMDLY2_size                              0x1
#define CMDLY2_value_mask                        0x4
#define CMDLY2_clear_mask                        0xFB

#define CMDLY3                                   0x3
#define CMDLY3_address                           0x110
#define CMDLY3_position                          0x3
#define CMDLY3_size                              0x1
#define CMDLY3_value_mask                        0x8
#define CMDLY3_clear_mask                        0xF7

#define CMDLY4                                   0x4
#define CMDLY4_address                           0x110
#define CMDLY4_position                          0x4
#define CMDLY4_size                              0x1
#define CMDLY4_value_mask                        0x10
#define CMDLY4_clear_mask                        0xEF

#define COMOD0                                   0x5
#define COMOD0_address                           0x110
#define COMOD0_position                          0x5
#define COMOD0_size                              0x1
#define COMOD0_value_mask                        0x20
#define COMOD0_clear_mask                        0xDF

#define COMOD                                    0x5
#define COMOD_address                            0x110
#define COMOD_position                           0x5
#define COMOD_size                               0x2
#define COMOD_value_mask                         0x60
#define COMOD_clear_mask                         0x9F

#define COMOD1                                   0x6
#define COMOD1_address                           0x110
#define COMOD1_position                          0x6
#define COMOD1_size                              0x1
#define COMOD1_value_mask                        0x40
#define COMOD1_clear_mask                        0xBF

#define OVRLP                                    0x7
#define OVRLP_address                            0x110
#define OVRLP_position                           0x7
#define OVRLP_size                               0x1
#define OVRLP_value_mask                         0x80
#define OVRLP_clear_mask                         0x7F


/*----------------------------------------------------------------#
| PWMCON0                                                   0x111 |
#-----------------------------------------------------------------#
| PRSEN | PASEN | BLANK2 | BLANK1 | SYNC1 | SYNC0 | PH2EN | PH1EN |
#-----------------------------------------------------------------#
| 7     | 6     | 5      | 4      | 3     | 2     | 1     | 0     |
#----------------------------------------------------------------*/

#define PWMCON0                                  0x0
#define PWMCON0_address                          0x111
#define PWMCON0_position                         0x0
#define PWMCON0_size                             0x8
#define PWMCON0_value_mask                       0xFF
#define PWMCON0_clear_mask                       0x0

#define PH1EN                                    0x0
#define PH1EN_address                            0x111
#define PH1EN_position                           0x0
#define PH1EN_size                               0x1
#define PH1EN_value_mask                         0x1
#define PH1EN_clear_mask                         0xFE

#define PH2EN                                    0x1
#define PH2EN_address                            0x111
#define PH2EN_position                           0x1
#define PH2EN_size                               0x1
#define PH2EN_value_mask                         0x2
#define PH2EN_clear_mask                         0xFD

#define SYNC                                     0x2
#define SYNC_address                             0x111
#define SYNC_position                            0x2
#define SYNC_size                                0x2
#define SYNC_value_mask                          0xC
#define SYNC_clear_mask                          0xF3

#define SYNC0                                    0x2
#define SYNC0_address                            0x111
#define SYNC0_position                           0x2
#define SYNC0_size                               0x1
#define SYNC0_value_mask                         0x4
#define SYNC0_clear_mask                         0xFB

#define SYNC1                                    0x3
#define SYNC1_address                            0x111
#define SYNC1_position                           0x3
#define SYNC1_size                               0x1
#define SYNC1_value_mask                         0x8
#define SYNC1_clear_mask                         0xF7

#define BLANK1                                   0x4
#define BLANK1_address                           0x111
#define BLANK1_position                          0x4
#define BLANK1_size                              0x1
#define BLANK1_value_mask                        0x10
#define BLANK1_clear_mask                        0xEF

#define BLANK2                                   0x5
#define BLANK2_address                           0x111
#define BLANK2_position                          0x5
#define BLANK2_size                              0x1
#define BLANK2_value_mask                        0x20
#define BLANK2_clear_mask                        0xDF

#define PASEN                                    0x6
#define PASEN_address                            0x111
#define PASEN_position                           0x6
#define PASEN_size                               0x1
#define PASEN_value_mask                         0x40
#define PASEN_clear_mask                         0xBF

#define PRSEN                                    0x7
#define PRSEN_address                            0x111
#define PRSEN_position                           0x7
#define PRSEN_size                               0x1
#define PRSEN_value_mask                         0x80
#define PRSEN_clear_mask                         0x7F


/*----------------------------------------------------------#
| PWMCLK                                              0x112 |
#-----------------------------------------------------------#
| PWMASE | PWMP1 | PWMP0 | PER4 | PER3 | PER2 | PER1 | PER0 |
#-----------------------------------------------------------#
| 7      | 6     | 5     | 4    | 3    | 2    | 1    | 0    |
#----------------------------------------------------------*/

#define PWMCLK                                   0x0
#define PWMCLK_address                           0x112
#define PWMCLK_position                          0x0
#define PWMCLK_size                              0x8
#define PWMCLK_value_mask                        0xFF
#define PWMCLK_clear_mask                        0x0

#define PER                                      0x0
#define PER_address                              0x112
#define PER_position                             0x0
#define PER_size                                 0x5
#define PER_value_mask                           0x1F
#define PER_clear_mask                           0xE0

#define PER0                                     0x0
#define PER0_address                             0x112
#define PER0_position                            0x0
#define PER0_size                                0x1
#define PER0_value_mask                          0x1
#define PER0_clear_mask                          0xFE

#define PER1                                     0x1
#define PER1_address                             0x112
#define PER1_position                            0x1
#define PER1_size                                0x1
#define PER1_value_mask                          0x2
#define PER1_clear_mask                          0xFD

#define PER2                                     0x2
#define PER2_address                             0x112
#define PER2_position                            0x2
#define PER2_size                                0x1
#define PER2_value_mask                          0x4
#define PER2_clear_mask                          0xFB

#define PER3                                     0x3
#define PER3_address                             0x112
#define PER3_position                            0x3
#define PER3_size                                0x1
#define PER3_value_mask                          0x8
#define PER3_clear_mask                          0xF7

#define PER4                                     0x4
#define PER4_address                             0x112
#define PER4_position                            0x4
#define PER4_size                                0x1
#define PER4_value_mask                          0x10
#define PER4_clear_mask                          0xEF

#define PWMP                                     0x5
#define PWMP_address                             0x112
#define PWMP_position                            0x5
#define PWMP_size                                0x2
#define PWMP_value_mask                          0x60
#define PWMP_clear_mask                          0x9F

#define PWMP0                                    0x5
#define PWMP0_address                            0x112
#define PWMP0_position                           0x5
#define PWMP0_size                               0x1
#define PWMP0_value_mask                         0x20
#define PWMP0_clear_mask                         0xDF

#define PWMP1                                    0x6
#define PWMP1_address                            0x112
#define PWMP1_position                           0x6
#define PWMP1_size                               0x1
#define PWMP1_value_mask                         0x40
#define PWMP1_clear_mask                         0xBF

#define PWMASE                                   0x7
#define PWMASE_address                           0x112
#define PWMASE_position                          0x7
#define PWMASE_size                              0x1
#define PWMASE_value_mask                        0x80
#define PWMASE_clear_mask                        0x7F


/*--------------------------------------------------------------------------------------------------------#
| PWMPH1                                                                                            0x113 |
#---------------------------------------------------------------------------------------------------------#
| PWMPH1_POL | PWMPH1_C2EN | PWMPH1_C1EN | PWMPH1_PH4 | PWMPH1_PH3 | PWMPH1_PH2 | PWMPH1_PH1 | PWMPH1_PH0 |
#---------------------------------------------------------------------------------------------------------#
| 7          | 6           | 5           | 4          | 3          | 2          | 1          | 0          |
#--------------------------------------------------------------------------------------------------------*/

#define PWMPH1                                   0x0
#define PWMPH1_address                           0x113
#define PWMPH1_position                          0x0
#define PWMPH1_size                              0x8
#define PWMPH1_value_mask                        0xFF
#define PWMPH1_clear_mask                        0x0

#define PWMPH1_PH0                               0x0
#define PWMPH1_PH0_address                       0x113
#define PWMPH1_PH0_position                      0x0
#define PWMPH1_PH0_size                          0x1
#define PWMPH1_PH0_value_mask                    0x1
#define PWMPH1_PH0_clear_mask                    0xFE

#define PWMPH1_PH                                0x0
#define PWMPH1_PH_address                        0x113
#define PWMPH1_PH_position                       0x0
#define PWMPH1_PH_size                           0x5
#define PWMPH1_PH_value_mask                     0x1F
#define PWMPH1_PH_clear_mask                     0xE0

#define PWMPH1_PH1                               0x1
#define PWMPH1_PH1_address                       0x113
#define PWMPH1_PH1_position                      0x1
#define PWMPH1_PH1_size                          0x1
#define PWMPH1_PH1_value_mask                    0x2
#define PWMPH1_PH1_clear_mask                    0xFD

#define PWMPH1_PH2                               0x2
#define PWMPH1_PH2_address                       0x113
#define PWMPH1_PH2_position                      0x2
#define PWMPH1_PH2_size                          0x1
#define PWMPH1_PH2_value_mask                    0x4
#define PWMPH1_PH2_clear_mask                    0xFB

#define PWMPH1_PH3                               0x3
#define PWMPH1_PH3_address                       0x113
#define PWMPH1_PH3_position                      0x3
#define PWMPH1_PH3_size                          0x1
#define PWMPH1_PH3_value_mask                    0x8
#define PWMPH1_PH3_clear_mask                    0xF7

#define PWMPH1_PH4                               0x4
#define PWMPH1_PH4_address                       0x113
#define PWMPH1_PH4_position                      0x4
#define PWMPH1_PH4_size                          0x1
#define PWMPH1_PH4_value_mask                    0x10
#define PWMPH1_PH4_clear_mask                    0xEF

#define PWMPH1_C1EN                              0x5
#define PWMPH1_C1EN_address                      0x113
#define PWMPH1_C1EN_position                     0x5
#define PWMPH1_C1EN_size                         0x1
#define PWMPH1_C1EN_value_mask                   0x20
#define PWMPH1_C1EN_clear_mask                   0xDF

#define PWMPH1_C2EN                              0x6
#define PWMPH1_C2EN_address                      0x113
#define PWMPH1_C2EN_position                     0x6
#define PWMPH1_C2EN_size                         0x1
#define PWMPH1_C2EN_value_mask                   0x40
#define PWMPH1_C2EN_clear_mask                   0xBF

#define PWMPH1_POL                               0x7
#define PWMPH1_POL_address                       0x113
#define PWMPH1_POL_position                      0x7
#define PWMPH1_POL_size                          0x1
#define PWMPH1_POL_value_mask                    0x80
#define PWMPH1_POL_clear_mask                    0x7F


/*--------------------------------------------------------------------------------------------------------#
| PWMPH2                                                                                            0x114 |
#---------------------------------------------------------------------------------------------------------#
| PWMPH2_POL | PWMPH2_C2EN | PWMPH2_C1EN | PWMPH2_PH4 | PWMPH2_PH3 | PWMPH2_PH2 | PWMPH2_PH1 | PWMPH2_PH0 |
#---------------------------------------------------------------------------------------------------------#
| 7          | 6           | 5           | 4          | 3          | 2          | 1          | 0          |
#--------------------------------------------------------------------------------------------------------*/

#define PWMPH2                                   0x0
#define PWMPH2_address                           0x114
#define PWMPH2_position                          0x0
#define PWMPH2_size                              0x8
#define PWMPH2_value_mask                        0xFF
#define PWMPH2_clear_mask                        0x0

#define PWMPH2_PH0                               0x0
#define PWMPH2_PH0_address                       0x114
#define PWMPH2_PH0_position                      0x0
#define PWMPH2_PH0_size                          0x1
#define PWMPH2_PH0_value_mask                    0x1
#define PWMPH2_PH0_clear_mask                    0xFE

#define PWMPH2_PH                                0x0
#define PWMPH2_PH_address                        0x114
#define PWMPH2_PH_position                       0x0
#define PWMPH2_PH_size                           0x5
#define PWMPH2_PH_value_mask                     0x1F
#define PWMPH2_PH_clear_mask                     0xE0

#define PWMPH2_PH1                               0x1
#define PWMPH2_PH1_address                       0x114
#define PWMPH2_PH1_position                      0x1
#define PWMPH2_PH1_size                          0x1
#define PWMPH2_PH1_value_mask                    0x2
#define PWMPH2_PH1_clear_mask                    0xFD

#define PWMPH2_PH2                               0x2
#define PWMPH2_PH2_address                       0x114
#define PWMPH2_PH2_position                      0x2
#define PWMPH2_PH2_size                          0x1
#define PWMPH2_PH2_value_mask                    0x4
#define PWMPH2_PH2_clear_mask                    0xFB

#define PWMPH2_PH3                               0x3
#define PWMPH2_PH3_address                       0x114
#define PWMPH2_PH3_position                      0x3
#define PWMPH2_PH3_size                          0x1
#define PWMPH2_PH3_value_mask                    0x8
#define PWMPH2_PH3_clear_mask                    0xF7

#define PWMPH2_PH4                               0x4
#define PWMPH2_PH4_address                       0x114
#define PWMPH2_PH4_position                      0x4
#define PWMPH2_PH4_size                          0x1
#define PWMPH2_PH4_value_mask                    0x10
#define PWMPH2_PH4_clear_mask                    0xEF

#define PWMPH2_C1EN                              0x5
#define PWMPH2_C1EN_address                      0x114
#define PWMPH2_C1EN_position                     0x5
#define PWMPH2_C1EN_size                         0x1
#define PWMPH2_C1EN_value_mask                   0x20
#define PWMPH2_C1EN_clear_mask                   0xDF

#define PWMPH2_C2EN                              0x6
#define PWMPH2_C2EN_address                      0x114
#define PWMPH2_C2EN_position                     0x6
#define PWMPH2_C2EN_size                         0x1
#define PWMPH2_C2EN_value_mask                   0x40
#define PWMPH2_C2EN_clear_mask                   0xBF

#define PWMPH2_POL                               0x7
#define PWMPH2_POL_address                       0x114
#define PWMPH2_POL_position                      0x7
#define PWMPH2_POL_size                          0x1
#define PWMPH2_POL_value_mask                    0x80
#define PWMPH2_POL_clear_mask                    0x7F


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


/*-------------------------------------------------#
| CM2CON1                                    0x11B |
#--------------------------------------------------#
| MC1OUT | MC2OUT | - | - | - | - | T1GSS | C2SYNC |
#--------------------------------------------------#
| 7      | 6      | 5 | 4 | 3 | 2 | 1     | 0      |
#-------------------------------------------------*/

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

#define T1GSS                                    0x1
#define T1GSS_address                            0x11B
#define T1GSS_position                           0x1
#define T1GSS_size                               0x1
#define T1GSS_value_mask                         0x2
#define T1GSS_clear_mask                         0xFD

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


/*------------------------------------------#
| OPA1CON                             0x11C |
#-------------------------------------------#
| OPA1CON_OPAON | - | - | - | - | - | - | - |
#-------------------------------------------#
| 7             | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------------------*/

#define OPA1CON                                  0x0
#define OPA1CON_address                          0x11C
#define OPA1CON_position                         0x0
#define OPA1CON_size                             0x8
#define OPA1CON_value_mask                       0xFF
#define OPA1CON_clear_mask                       0x0

#define OPA1CON_OPAON                            0x7
#define OPA1CON_OPAON_address                    0x11C
#define OPA1CON_OPAON_position                   0x7
#define OPA1CON_OPAON_size                       0x1
#define OPA1CON_OPAON_value_mask                 0x80
#define OPA1CON_OPAON_clear_mask                 0x7F


/*------------------------------------------#
| OPA2CON                             0x11D |
#-------------------------------------------#
| OPA2CON_OPAON | - | - | - | - | - | - | - |
#-------------------------------------------#
| 7             | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------------------*/

#define OPA2CON                                  0x0
#define OPA2CON_address                          0x11D
#define OPA2CON_position                         0x0
#define OPA2CON_size                             0x8
#define OPA2CON_value_mask                       0xFF
#define OPA2CON_clear_mask                       0x0

#define OPA2CON_OPAON                            0x7
#define OPA2CON_OPAON_address                    0x11D
#define OPA2CON_OPAON_position                   0x7
#define OPA2CON_OPAON_size                       0x1
#define OPA2CON_OPAON_value_mask                 0x80
#define OPA2CON_OPAON_clear_mask                 0x7F

#endif // _PIC16HV785_H_
