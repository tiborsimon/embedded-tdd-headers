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

#ifndef _PIC16F690_H_
#define _PIC16F690_H_


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


/*-------------------------------------------------------#
| INTCON                                             0xB |
#--------------------------------------------------------#
| GIE | PEIE | T0IE | INTE | RABIE | T0IF | INTF | RABIF |
#--------------------------------------------------------#
| 7   | 6    | 5    | 4    | 3     | 2    | 1    | 0     |
#-------------------------------------------------------*/

#define INTCON                                   0x0
#define INTCON_address                           0x00B
#define INTCON_position                          0x0
#define INTCON_size                              0x8
#define INTCON_value_mask                        0xFF
#define INTCON_clear_mask                        0x0

#define RABIF                                    0x0
#define RABIF_address                            0x00B
#define RABIF_position                           0x0
#define RABIF_size                               0x1
#define RABIF_value_mask                         0x1
#define RABIF_clear_mask                         0xFE

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

#define RABIE                                    0x3
#define RABIE_address                            0x00B
#define RABIE_position                           0x3
#define RABIE_size                               0x1
#define RABIE_value_mask                         0x8
#define RABIE_clear_mask                         0xF7

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


/*------------------------------------------------------#
| PIR1                                              0xC |
#-------------------------------------------------------#
| - | ADIF | RCIF | TXIF | SSPIF | CCP1IF | T2IF | T1IF |
#-------------------------------------------------------#
| 7 | 6    | 5    | 4    | 3     | 2      | 1    | 0    |
#------------------------------------------------------*/

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

#define CCP1IF                                   0x2
#define CCP1IF_address                           0x00C
#define CCP1IF_position                          0x2
#define CCP1IF_size                              0x1
#define CCP1IF_value_mask                        0x4
#define CCP1IF_clear_mask                        0xFB

#define SSPIF                                    0x3
#define SSPIF_address                            0x00C
#define SSPIF_position                           0x3
#define SSPIF_size                               0x1
#define SSPIF_value_mask                         0x8
#define SSPIF_clear_mask                         0xF7

#define TXIF                                     0x4
#define TXIF_address                             0x00C
#define TXIF_position                            0x4
#define TXIF_size                                0x1
#define TXIF_value_mask                          0x10
#define TXIF_clear_mask                          0xEF

#define RCIF                                     0x5
#define RCIF_address                             0x00C
#define RCIF_position                            0x5
#define RCIF_size                                0x1
#define RCIF_value_mask                          0x20
#define RCIF_clear_mask                          0xDF

#define ADIF                                     0x6
#define ADIF_address                             0x00C
#define ADIF_position                            0x6
#define ADIF_size                                0x1
#define ADIF_value_mask                          0x40
#define ADIF_clear_mask                          0xBF


/*-------------------------------------------#
| PIR2                                   0xD |
#--------------------------------------------#
| OSFIF | C2IF | C1IF | EEIF | - | - | - | - |
#--------------------------------------------#
| 7     | 6    | 5    | 4    | 3 | 2 | 1 | 0 |
#-------------------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0x00D
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

#define EEIF                                     0x4
#define EEIF_address                             0x00D
#define EEIF_position                            0x4
#define EEIF_size                                0x1
#define EEIF_value_mask                          0x10
#define EEIF_clear_mask                          0xEF

#define C1IF                                     0x5
#define C1IF_address                             0x00D
#define C1IF_position                            0x5
#define C1IF_size                                0x1
#define C1IF_value_mask                          0x20
#define C1IF_clear_mask                          0xDF

#define C2IF                                     0x6
#define C2IF_address                             0x00D
#define C2IF_position                            0x6
#define C2IF_size                                0x1
#define C2IF_value_mask                          0x40
#define C2IF_clear_mask                          0xBF

#define OSFIF                                    0x7
#define OSFIF_address                            0x00D
#define OSFIF_position                           0x7
#define OSFIF_size                               0x1
#define OSFIF_value_mask                         0x80
#define OSFIF_clear_mask                         0x7F


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


/*-----------------------------------------------------------#
| SSPCON                                                0x14 |
#------------------------------------------------------------#
| WCOL | SSPOV | SSPEN | CKP | SSPM3 | SSPM2 | SSPM1 | SSPM0 |
#------------------------------------------------------------#
| 7    | 6     | 5     | 4   | 3     | 2     | 1     | 0     |
#-----------------------------------------------------------*/

#define SSPCON                                   0x0
#define SSPCON_address                           0x014
#define SSPCON_position                          0x0
#define SSPCON_size                              0x8
#define SSPCON_value_mask                        0xFF
#define SSPCON_clear_mask                        0x0

#define SSPM0                                    0x0
#define SSPM0_address                            0x014
#define SSPM0_position                           0x0
#define SSPM0_size                               0x1
#define SSPM0_value_mask                         0x1
#define SSPM0_clear_mask                         0xFE

#define SSPM                                     0x0
#define SSPM_address                             0x014
#define SSPM_position                            0x0
#define SSPM_size                                0x4
#define SSPM_value_mask                          0xF
#define SSPM_clear_mask                          0xF0

#define SSPM1                                    0x1
#define SSPM1_address                            0x014
#define SSPM1_position                           0x1
#define SSPM1_size                               0x1
#define SSPM1_value_mask                         0x2
#define SSPM1_clear_mask                         0xFD

#define SSPM2                                    0x2
#define SSPM2_address                            0x014
#define SSPM2_position                           0x2
#define SSPM2_size                               0x1
#define SSPM2_value_mask                         0x4
#define SSPM2_clear_mask                         0xFB

#define SSPM3                                    0x3
#define SSPM3_address                            0x014
#define SSPM3_position                           0x3
#define SSPM3_size                               0x1
#define SSPM3_value_mask                         0x8
#define SSPM3_clear_mask                         0xF7

#define CKP                                      0x4
#define CKP_address                              0x014
#define CKP_position                             0x4
#define CKP_size                                 0x1
#define CKP_value_mask                           0x10
#define CKP_clear_mask                           0xEF

#define SSPEN                                    0x5
#define SSPEN_address                            0x014
#define SSPEN_position                           0x5
#define SSPEN_size                               0x1
#define SSPEN_value_mask                         0x20
#define SSPEN_clear_mask                         0xDF

#define SSPOV                                    0x6
#define SSPOV_address                            0x014
#define SSPOV_position                           0x6
#define SSPOV_size                               0x1
#define SSPOV_value_mask                         0x40
#define SSPOV_clear_mask                         0xBF

#define WCOL                                     0x7
#define WCOL_address                             0x014
#define WCOL_position                            0x7
#define WCOL_size                                0x1
#define WCOL_value_mask                          0x80
#define WCOL_clear_mask                          0x7F


/*----------------------------------------------------------------#
| CCP1CON                                                    0x17 |
#-----------------------------------------------------------------#
| P1M1 | P1M0 | DC1B1 | DC1B0 | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define CCP1CON                                  0x0
#define CCP1CON_address                          0x017
#define CCP1CON_position                         0x0
#define CCP1CON_size                             0x8
#define CCP1CON_value_mask                       0xFF
#define CCP1CON_clear_mask                       0x0

#define CCP1M0                                   0x0
#define CCP1M0_address                           0x017
#define CCP1M0_position                          0x0
#define CCP1M0_size                              0x1
#define CCP1M0_value_mask                        0x1
#define CCP1M0_clear_mask                        0xFE

#define CCP1M                                    0x0
#define CCP1M_address                            0x017
#define CCP1M_position                           0x0
#define CCP1M_size                               0x4
#define CCP1M_value_mask                         0xF
#define CCP1M_clear_mask                         0xF0

#define CCP1M1                                   0x1
#define CCP1M1_address                           0x017
#define CCP1M1_position                          0x1
#define CCP1M1_size                              0x1
#define CCP1M1_value_mask                        0x2
#define CCP1M1_clear_mask                        0xFD

#define CCP1M2                                   0x2
#define CCP1M2_address                           0x017
#define CCP1M2_position                          0x2
#define CCP1M2_size                              0x1
#define CCP1M2_value_mask                        0x4
#define CCP1M2_clear_mask                        0xFB

#define CCP1M3                                   0x3
#define CCP1M3_address                           0x017
#define CCP1M3_position                          0x3
#define CCP1M3_size                              0x1
#define CCP1M3_value_mask                        0x8
#define CCP1M3_clear_mask                        0xF7

#define DC1B                                     0x4
#define DC1B_address                             0x017
#define DC1B_position                            0x4
#define DC1B_size                                0x2
#define DC1B_value_mask                          0x30
#define DC1B_clear_mask                          0xCF

#define DC1B0                                    0x4
#define DC1B0_address                            0x017
#define DC1B0_position                           0x4
#define DC1B0_size                               0x1
#define DC1B0_value_mask                         0x10
#define DC1B0_clear_mask                         0xEF

#define DC1B1                                    0x5
#define DC1B1_address                            0x017
#define DC1B1_position                           0x5
#define DC1B1_size                               0x1
#define DC1B1_value_mask                         0x20
#define DC1B1_clear_mask                         0xDF

#define P1M                                      0x6
#define P1M_address                              0x017
#define P1M_position                             0x6
#define P1M_size                                 0x2
#define P1M_value_mask                           0xC0
#define P1M_clear_mask                           0x3F

#define P1M0                                     0x6
#define P1M0_address                             0x017
#define P1M0_position                            0x6
#define P1M0_size                                0x1
#define P1M0_value_mask                          0x40
#define P1M0_clear_mask                          0xBF

#define P1M1                                     0x7
#define P1M1_address                             0x017
#define P1M1_position                            0x7
#define P1M1_size                                0x1
#define P1M1_value_mask                          0x80
#define P1M1_clear_mask                          0x7F


/*------------------------------------------------------#
| RCSTA                                            0x18 |
#-------------------------------------------------------#
| SPEN | RX9 | SREN | CREN | ADDEN | FERR | OERR | RX9D |
#-------------------------------------------------------#
| 7    | 6   | 5    | 4    | 3     | 2    | 1    | 0    |
#------------------------------------------------------*/

#define RCSTA                                    0x0
#define RCSTA_address                            0x018
#define RCSTA_position                           0x0
#define RCSTA_size                               0x8
#define RCSTA_value_mask                         0xFF
#define RCSTA_clear_mask                         0x0

#define RX9D                                     0x0
#define RX9D_address                             0x018
#define RX9D_position                            0x0
#define RX9D_size                                0x1
#define RX9D_value_mask                          0x1
#define RX9D_clear_mask                          0xFE

#define OERR                                     0x1
#define OERR_address                             0x018
#define OERR_position                            0x1
#define OERR_size                                0x1
#define OERR_value_mask                          0x2
#define OERR_clear_mask                          0xFD

#define FERR                                     0x2
#define FERR_address                             0x018
#define FERR_position                            0x2
#define FERR_size                                0x1
#define FERR_value_mask                          0x4
#define FERR_clear_mask                          0xFB

#define ADDEN                                    0x3
#define ADDEN_address                            0x018
#define ADDEN_position                           0x3
#define ADDEN_size                               0x1
#define ADDEN_value_mask                         0x8
#define ADDEN_clear_mask                         0xF7

#define CREN                                     0x4
#define CREN_address                             0x018
#define CREN_position                            0x4
#define CREN_size                                0x1
#define CREN_value_mask                          0x10
#define CREN_clear_mask                          0xEF

#define SREN                                     0x5
#define SREN_address                             0x018
#define SREN_position                            0x5
#define SREN_size                                0x1
#define SREN_value_mask                          0x20
#define SREN_clear_mask                          0xDF

#define RX9                                      0x6
#define RX9_address                              0x018
#define RX9_position                             0x6
#define RX9_size                                 0x1
#define RX9_value_mask                           0x40
#define RX9_clear_mask                           0xBF

#define SPEN                                     0x7
#define SPEN_address                             0x018
#define SPEN_position                            0x7
#define SPEN_size                                0x1
#define SPEN_value_mask                          0x80
#define SPEN_clear_mask                          0x7F


/*-------------------------------------------------------#
| PWM1CON                                           0x1C |
#--------------------------------------------------------#
| PRSEN | PDC6 | PDC5 | PDC4 | PDC3 | PDC2 | PDC1 | PDC0 |
#--------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#-------------------------------------------------------*/

#define PWM1CON                                  0x0
#define PWM1CON_address                          0x01C
#define PWM1CON_position                         0x0
#define PWM1CON_size                             0x8
#define PWM1CON_value_mask                       0xFF
#define PWM1CON_clear_mask                       0x0

#define PDC0                                     0x0
#define PDC0_address                             0x01C
#define PDC0_position                            0x0
#define PDC0_size                                0x1
#define PDC0_value_mask                          0x1
#define PDC0_clear_mask                          0xFE

#define PDC                                      0x0
#define PDC_address                              0x01C
#define PDC_position                             0x0
#define PDC_size                                 0x7
#define PDC_value_mask                           0x7F
#define PDC_clear_mask                           0x80

#define PDC1                                     0x1
#define PDC1_address                             0x01C
#define PDC1_position                            0x1
#define PDC1_size                                0x1
#define PDC1_value_mask                          0x2
#define PDC1_clear_mask                          0xFD

#define PDC2                                     0x2
#define PDC2_address                             0x01C
#define PDC2_position                            0x2
#define PDC2_size                                0x1
#define PDC2_value_mask                          0x4
#define PDC2_clear_mask                          0xFB

#define PDC3                                     0x3
#define PDC3_address                             0x01C
#define PDC3_position                            0x3
#define PDC3_size                                0x1
#define PDC3_value_mask                          0x8
#define PDC3_clear_mask                          0xF7

#define PDC4                                     0x4
#define PDC4_address                             0x01C
#define PDC4_position                            0x4
#define PDC4_size                                0x1
#define PDC4_value_mask                          0x10
#define PDC4_clear_mask                          0xEF

#define PDC5                                     0x5
#define PDC5_address                             0x01C
#define PDC5_position                            0x5
#define PDC5_size                                0x1
#define PDC5_value_mask                          0x20
#define PDC5_clear_mask                          0xDF

#define PDC6                                     0x6
#define PDC6_address                             0x01C
#define PDC6_position                            0x6
#define PDC6_size                                0x1
#define PDC6_value_mask                          0x40
#define PDC6_clear_mask                          0xBF

#define PRSEN                                    0x7
#define PRSEN_address                            0x01C
#define PRSEN_position                           0x7
#define PRSEN_size                               0x1
#define PRSEN_value_mask                         0x80
#define PRSEN_clear_mask                         0x7F


/*--------------------------------------------------------------------------#
| ECCPAS                                                               0x1D |
#---------------------------------------------------------------------------#
| ECCPASE | ECCPAS2 | ECCPAS1 | ECCPAS0 | PSSAC1 | PSSAC0 | PSSBD1 | PSSBD0 |
#---------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------------------*/

#define PSSBD                                    0x0
#define PSSBD_address                            0x01D
#define PSSBD_position                           0x0
#define PSSBD_size                               0x2
#define PSSBD_value_mask                         0x3
#define PSSBD_clear_mask                         0xFC

#define PSSBD0                                   0x0
#define PSSBD0_address                           0x01D
#define PSSBD0_position                          0x0
#define PSSBD0_size                              0x1
#define PSSBD0_value_mask                        0x1
#define PSSBD0_clear_mask                        0xFE

#define PSSBD1                                   0x1
#define PSSBD1_address                           0x01D
#define PSSBD1_position                          0x1
#define PSSBD1_size                              0x1
#define PSSBD1_value_mask                        0x2
#define PSSBD1_clear_mask                        0xFD

#define PSSAC                                    0x2
#define PSSAC_address                            0x01D
#define PSSAC_position                           0x2
#define PSSAC_size                               0x2
#define PSSAC_value_mask                         0xC
#define PSSAC_clear_mask                         0xF3

#define PSSAC0                                   0x2
#define PSSAC0_address                           0x01D
#define PSSAC0_position                          0x2
#define PSSAC0_size                              0x1
#define PSSAC0_value_mask                        0x4
#define PSSAC0_clear_mask                        0xFB

#define PSSAC1                                   0x3
#define PSSAC1_address                           0x01D
#define PSSAC1_position                          0x3
#define PSSAC1_size                              0x1
#define PSSAC1_value_mask                        0x8
#define PSSAC1_clear_mask                        0xF7

#define ECCPAS0                                  0x4
#define ECCPAS0_address                          0x01D
#define ECCPAS0_position                         0x4
#define ECCPAS0_size                             0x1
#define ECCPAS0_value_mask                       0x10
#define ECCPAS0_clear_mask                       0xEF

#define ECCPAS                                   0x4
#define ECCPAS_address                           0x01D
#define ECCPAS_position                          0x4
#define ECCPAS_size                              0x3
#define ECCPAS_value_mask                        0x70
#define ECCPAS_clear_mask                        0x8F

#define ECCPAS1                                  0x5
#define ECCPAS1_address                          0x01D
#define ECCPAS1_position                         0x5
#define ECCPAS1_size                             0x1
#define ECCPAS1_value_mask                       0x20
#define ECCPAS1_clear_mask                       0xDF

#define ECCPAS2                                  0x6
#define ECCPAS2_address                          0x01D
#define ECCPAS2_position                         0x6
#define ECCPAS2_size                             0x1
#define ECCPAS2_value_mask                       0x40
#define ECCPAS2_clear_mask                       0xBF

#define ECCPASE                                  0x7
#define ECCPASE_address                          0x01D
#define ECCPASE_position                         0x7
#define ECCPASE_size                             0x1
#define ECCPASE_value_mask                       0x80
#define ECCPASE_clear_mask                       0x7F


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


/*------------------------------------------------------#
| OPTION_REG                                       0x81 |
#-------------------------------------------------------#
| nRABPU | INTEDG | T0CS | T0SE | PSA | PS2 | PS1 | PS0 |
#-------------------------------------------------------#
| 7      | 6      | 5    | 4    | 3   | 2   | 1   | 0   |
#------------------------------------------------------*/

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

#define nRABPU                                   0x7
#define nRABPU_address                           0x081
#define nRABPU_position                          0x7
#define nRABPU_size                              0x1
#define nRABPU_value_mask                        0x80
#define nRABPU_clear_mask                        0x7F


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


/*------------------------------------------------------#
| PIE1                                             0x8C |
#-------------------------------------------------------#
| - | ADIE | RCIE | TXIE | SSPIE | CCP1IE | T2IE | T1IE |
#-------------------------------------------------------#
| 7 | 6    | 5    | 4    | 3     | 2      | 1    | 0    |
#------------------------------------------------------*/

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

#define CCP1IE                                   0x2
#define CCP1IE_address                           0x08C
#define CCP1IE_position                          0x2
#define CCP1IE_size                              0x1
#define CCP1IE_value_mask                        0x4
#define CCP1IE_clear_mask                        0xFB

#define SSPIE                                    0x3
#define SSPIE_address                            0x08C
#define SSPIE_position                           0x3
#define SSPIE_size                               0x1
#define SSPIE_value_mask                         0x8
#define SSPIE_clear_mask                         0xF7

#define TXIE                                     0x4
#define TXIE_address                             0x08C
#define TXIE_position                            0x4
#define TXIE_size                                0x1
#define TXIE_value_mask                          0x10
#define TXIE_clear_mask                          0xEF

#define RCIE                                     0x5
#define RCIE_address                             0x08C
#define RCIE_position                            0x5
#define RCIE_size                                0x1
#define RCIE_value_mask                          0x20
#define RCIE_clear_mask                          0xDF

#define ADIE                                     0x6
#define ADIE_address                             0x08C
#define ADIE_position                            0x6
#define ADIE_size                                0x1
#define ADIE_value_mask                          0x40
#define ADIE_clear_mask                          0xBF


/*-------------------------------------------#
| PIE2                                  0x8D |
#--------------------------------------------#
| OSFIE | C2IE | C1IE | EEIE | - | - | - | - |
#--------------------------------------------#
| 7     | 6    | 5    | 4    | 3 | 2 | 1 | 0 |
#-------------------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0x08D
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

#define EEIE                                     0x4
#define EEIE_address                             0x08D
#define EEIE_position                            0x4
#define EEIE_size                                0x1
#define EEIE_value_mask                          0x10
#define EEIE_clear_mask                          0xEF

#define C1IE                                     0x5
#define C1IE_address                             0x08D
#define C1IE_position                            0x5
#define C1IE_size                                0x1
#define C1IE_value_mask                          0x20
#define C1IE_clear_mask                          0xDF

#define C2IE                                     0x6
#define C2IE_address                             0x08D
#define C2IE_position                            0x6
#define C2IE_size                                0x1
#define C2IE_value_mask                          0x40
#define C2IE_clear_mask                          0xBF

#define OSFIE                                    0x7
#define OSFIE_address                            0x08D
#define OSFIE_position                           0x7
#define OSFIE_size                               0x1
#define OSFIE_value_mask                         0x80
#define OSFIE_clear_mask                         0x7F


/*----------------------------------------------#
| PCON                                     0x8E |
#-----------------------------------------------#
| - | - | ULPWUE | SBOREN | - | - | nPOR | nBOR |
#-----------------------------------------------#
| 7 | 6 | 5      | 4      | 3 | 2 | 1    | 0    |
#----------------------------------------------*/

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

#define nPOR                                     0x1
#define nPOR_address                             0x08E
#define nPOR_position                            0x1
#define nPOR_size                                0x1
#define nPOR_value_mask                          0x2
#define nPOR_clear_mask                          0xFD

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
| SSPMSK                                           0x93 |
#-------------------------------------------------------#
| MSK7 | MSK6 | MSK5 | MSK4 | MSK3 | MSK2 | MSK1 | MSK0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define SSPMSK                                   0x0
#define SSPMSK_address                           0x093
#define SSPMSK_position                          0x0
#define SSPMSK_size                              0x8
#define SSPMSK_value_mask                        0xFF
#define SSPMSK_clear_mask                        0x0

#define MSK0                                     0x0
#define MSK0_address                             0x093
#define MSK0_position                            0x0
#define MSK0_size                                0x1
#define MSK0_value_mask                          0x1
#define MSK0_clear_mask                          0xFE

#define MSK1                                     0x1
#define MSK1_address                             0x093
#define MSK1_position                            0x1
#define MSK1_size                                0x1
#define MSK1_value_mask                          0x2
#define MSK1_clear_mask                          0xFD

#define MSK2                                     0x2
#define MSK2_address                             0x093
#define MSK2_position                            0x2
#define MSK2_size                                0x1
#define MSK2_value_mask                          0x4
#define MSK2_clear_mask                          0xFB

#define MSK3                                     0x3
#define MSK3_address                             0x093
#define MSK3_position                            0x3
#define MSK3_size                                0x1
#define MSK3_value_mask                          0x8
#define MSK3_clear_mask                          0xF7

#define MSK4                                     0x4
#define MSK4_address                             0x093
#define MSK4_position                            0x4
#define MSK4_size                                0x1
#define MSK4_value_mask                          0x10
#define MSK4_clear_mask                          0xEF

#define MSK5                                     0x5
#define MSK5_address                             0x093
#define MSK5_position                            0x5
#define MSK5_size                                0x1
#define MSK5_value_mask                          0x20
#define MSK5_clear_mask                          0xDF

#define MSK6                                     0x6
#define MSK6_address                             0x093
#define MSK6_position                            0x6
#define MSK6_size                                0x1
#define MSK6_value_mask                          0x40
#define MSK6_clear_mask                          0xBF

#define MSK7                                     0x7
#define MSK7_address                             0x093
#define MSK7_position                            0x7
#define MSK7_size                                0x1
#define MSK7_value_mask                          0x80
#define MSK7_clear_mask                          0x7F


/*-----------------------------------------------------#
| SSPSTAT                                         0x94 |
#------------------------------------------------------#
| SMP | CKE | nA | I2C_STOP | S | READ_WRITE | UA | BF |
#------------------------------------------------------#
| 7   | 6   | 5  | 4        | 3 | 2          | 1  | 0  |
#-----------------------------------------------------*/

#define SSPSTAT                                  0x0
#define SSPSTAT_address                          0x094
#define SSPSTAT_position                         0x0
#define SSPSTAT_size                             0x8
#define SSPSTAT_value_mask                       0xFF
#define SSPSTAT_clear_mask                       0x0

#define BF                                       0x0
#define BF_address                               0x094
#define BF_position                              0x0
#define BF_size                                  0x1
#define BF_value_mask                            0x1
#define BF_clear_mask                            0xFE

#define UA                                       0x1
#define UA_address                               0x094
#define UA_position                              0x1
#define UA_size                                  0x1
#define UA_value_mask                            0x2
#define UA_clear_mask                            0xFD

#define R_nW                                     0x2
#define R_nW_address                             0x094
#define R_nW_position                            0x2
#define R_nW_size                                0x1
#define R_nW_value_mask                          0x4
#define R_nW_clear_mask                          0xFB

#define READ_WRITE                               0x2
#define READ_WRITE_address                       0x094
#define READ_WRITE_position                      0x2
#define READ_WRITE_size                          0x1
#define READ_WRITE_value_mask                    0x4
#define READ_WRITE_clear_mask                    0xFB

#define I2C_READ                                 0x2
#define I2C_READ_address                         0x094
#define I2C_READ_position                        0x2
#define I2C_READ_size                            0x1
#define I2C_READ_value_mask                      0x4
#define I2C_READ_clear_mask                      0xFB

#define nW                                       0x2
#define nW_address                               0x094
#define nW_position                              0x2
#define nW_size                                  0x1
#define nW_value_mask                            0x4
#define nW_clear_mask                            0xFB

#define R                                        0x2
#define R_address                                0x094
#define R_position                               0x2
#define R_size                                   0x1
#define R_value_mask                             0x4
#define R_clear_mask                             0xFB

#define nWRITE                                   0x2
#define nWRITE_address                           0x094
#define nWRITE_position                          0x2
#define nWRITE_size                              0x1
#define nWRITE_value_mask                        0x4
#define nWRITE_clear_mask                        0xFB

#define R_W                                      0x2
#define R_W_address                              0x094
#define R_W_position                             0x2
#define R_W_size                                 0x1
#define R_W_value_mask                           0x4
#define R_W_clear_mask                           0xFB

#define S                                        0x3
#define S_address                                0x094
#define S_position                               0x3
#define S_size                                   0x1
#define S_value_mask                             0x8
#define S_clear_mask                             0xF7

#define I2C_START                                0x3
#define I2C_START_address                        0x094
#define I2C_START_position                       0x3
#define I2C_START_size                           0x1
#define I2C_START_value_mask                     0x8
#define I2C_START_clear_mask                     0xF7

#define I2C_STOP                                 0x4
#define I2C_STOP_address                         0x094
#define I2C_STOP_position                        0x4
#define I2C_STOP_size                            0x1
#define I2C_STOP_value_mask                      0x10
#define I2C_STOP_clear_mask                      0xEF

#define P                                        0x4
#define P_address                                0x094
#define P_position                               0x4
#define P_size                                   0x1
#define P_value_mask                             0x10
#define P_clear_mask                             0xEF

#define nA                                       0x5
#define nA_address                               0x094
#define nA_position                              0x5
#define nA_size                                  0x1
#define nA_value_mask                            0x20
#define nA_clear_mask                            0xDF

#define D_A                                      0x5
#define D_A_address                              0x094
#define D_A_position                             0x5
#define D_A_size                                 0x1
#define D_A_value_mask                           0x20
#define D_A_clear_mask                           0xDF

#define D_nA                                     0x5
#define D_nA_address                             0x094
#define D_nA_position                            0x5
#define D_nA_size                                0x1
#define D_nA_value_mask                          0x20
#define D_nA_clear_mask                          0xDF

#define D                                        0x5
#define D_address                                0x094
#define D_position                               0x5
#define D_size                                   0x1
#define D_value_mask                             0x20
#define D_clear_mask                             0xDF

#define DATA_ADDRESS                             0x5
#define DATA_ADDRESS_address                     0x094
#define DATA_ADDRESS_position                    0x5
#define DATA_ADDRESS_size                        0x1
#define DATA_ADDRESS_value_mask                  0x20
#define DATA_ADDRESS_clear_mask                  0xDF

#define nADDRESS                                 0x5
#define nADDRESS_address                         0x094
#define nADDRESS_position                        0x5
#define nADDRESS_size                            0x1
#define nADDRESS_value_mask                      0x20
#define nADDRESS_clear_mask                      0xDF

#define I2C_DATA                                 0x5
#define I2C_DATA_address                         0x094
#define I2C_DATA_position                        0x5
#define I2C_DATA_size                            0x1
#define I2C_DATA_value_mask                      0x20
#define I2C_DATA_clear_mask                      0xDF

#define CKE                                      0x6
#define CKE_address                              0x094
#define CKE_position                             0x6
#define CKE_size                                 0x1
#define CKE_value_mask                           0x40
#define CKE_clear_mask                           0xBF

#define SMP                                      0x7
#define SMP_address                              0x094
#define SMP_position                             0x7
#define SMP_size                                 0x1
#define SMP_value_mask                           0x80
#define SMP_clear_mask                           0x7F


/*--------------------------------------------------#
| WPUA                                         0x95 |
#---------------------------------------------------#
| - | - | WPUA5 | WPUA4 | - | WPUA2 | WPUA1 | WPUA0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2     | 1     | 0     |
#--------------------------------------------------*/

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

#define WPUA1                                    0x1
#define WPUA1_address                            0x095
#define WPUA1_position                           0x1
#define WPUA1_size                               0x1
#define WPUA1_value_mask                         0x2
#define WPUA1_clear_mask                         0xFD

#define WPU1                                     0x1
#define WPU1_address                             0x095
#define WPU1_position                            0x1
#define WPU1_size                                0x1
#define WPU1_value_mask                          0x2
#define WPU1_clear_mask                          0xFD

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


/*-------------------------------------------------------#
| WDTCON                                            0x97 |
#--------------------------------------------------------#
| - | - | - | WDTPS3 | WDTPS2 | WDTPS1 | WDTPS0 | SWDTEN |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------*/

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
#define WDTPS_size                               0x4
#define WDTPS_value_mask                         0x1E
#define WDTPS_clear_mask                         0xE1

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


/*-----------------------------------------------------#
| TXSTA                                           0x98 |
#------------------------------------------------------#
| CSRC | TX9 | TXEN | SYNC | SENB | BRGH | TRMT | TX9D |
#------------------------------------------------------#
| 7    | 6   | 5    | 4    | 3    | 2    | 1    | 0    |
#-----------------------------------------------------*/

#define TXSTA                                    0x0
#define TXSTA_address                            0x098
#define TXSTA_position                           0x0
#define TXSTA_size                               0x8
#define TXSTA_value_mask                         0xFF
#define TXSTA_clear_mask                         0x0

#define TX9D                                     0x0
#define TX9D_address                             0x098
#define TX9D_position                            0x0
#define TX9D_size                                0x1
#define TX9D_value_mask                          0x1
#define TX9D_clear_mask                          0xFE

#define TRMT                                     0x1
#define TRMT_address                             0x098
#define TRMT_position                            0x1
#define TRMT_size                                0x1
#define TRMT_value_mask                          0x2
#define TRMT_clear_mask                          0xFD

#define BRGH                                     0x2
#define BRGH_address                             0x098
#define BRGH_position                            0x2
#define BRGH_size                                0x1
#define BRGH_value_mask                          0x4
#define BRGH_clear_mask                          0xFB

#define SENB                                     0x3
#define SENB_address                             0x098
#define SENB_position                            0x3
#define SENB_size                                0x1
#define SENB_value_mask                          0x8
#define SENB_clear_mask                          0xF7

#define SENDB                                    0x3
#define SENDB_address                            0x098
#define SENDB_position                           0x3
#define SENDB_size                               0x1
#define SENDB_value_mask                         0x8
#define SENDB_clear_mask                         0xF7

#define SYNC                                     0x4
#define SYNC_address                             0x098
#define SYNC_position                            0x4
#define SYNC_size                                0x1
#define SYNC_value_mask                          0x10
#define SYNC_clear_mask                          0xEF

#define TXEN                                     0x5
#define TXEN_address                             0x098
#define TXEN_position                            0x5
#define TXEN_size                                0x1
#define TXEN_value_mask                          0x20
#define TXEN_clear_mask                          0xDF

#define TX9                                      0x6
#define TX9_address                              0x098
#define TX9_position                             0x6
#define TX9_size                                 0x1
#define TX9_value_mask                           0x40
#define TX9_clear_mask                           0xBF

#define CSRC                                     0x7
#define CSRC_address                             0x098
#define CSRC_position                            0x7
#define CSRC_size                                0x1
#define CSRC_value_mask                          0x80
#define CSRC_clear_mask                          0x7F


/*------------------------------------------------------#
| SPBRG                                            0x99 |
#-------------------------------------------------------#
| BRG7 | BRG6 | BRG5 | BRG4 | BRG3 | BRG2 | BRG1 | BRG0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define SPBRG                                    0x0
#define SPBRG_address                            0x099
#define SPBRG_position                           0x0
#define SPBRG_size                               0x8
#define SPBRG_value_mask                         0xFF
#define SPBRG_clear_mask                         0x0

#define BRG0                                     0x0
#define BRG0_address                             0x099
#define BRG0_position                            0x0
#define BRG0_size                                0x1
#define BRG0_value_mask                          0x1
#define BRG0_clear_mask                          0xFE

#define BRG1                                     0x1
#define BRG1_address                             0x099
#define BRG1_position                            0x1
#define BRG1_size                                0x1
#define BRG1_value_mask                          0x2
#define BRG1_clear_mask                          0xFD

#define BRG2                                     0x2
#define BRG2_address                             0x099
#define BRG2_position                            0x2
#define BRG2_size                                0x1
#define BRG2_value_mask                          0x4
#define BRG2_clear_mask                          0xFB

#define BRG3                                     0x3
#define BRG3_address                             0x099
#define BRG3_position                            0x3
#define BRG3_size                                0x1
#define BRG3_value_mask                          0x8
#define BRG3_clear_mask                          0xF7

#define BRG4                                     0x4
#define BRG4_address                             0x099
#define BRG4_position                            0x4
#define BRG4_size                                0x1
#define BRG4_value_mask                          0x10
#define BRG4_clear_mask                          0xEF

#define BRG5                                     0x5
#define BRG5_address                             0x099
#define BRG5_position                            0x5
#define BRG5_size                                0x1
#define BRG5_value_mask                          0x20
#define BRG5_clear_mask                          0xDF

#define BRG6                                     0x6
#define BRG6_address                             0x099
#define BRG6_position                            0x6
#define BRG6_size                                0x1
#define BRG6_value_mask                          0x40
#define BRG6_clear_mask                          0xBF

#define BRG7                                     0x7
#define BRG7_address                             0x099
#define BRG7_position                            0x7
#define BRG7_size                                0x1
#define BRG7_value_mask                          0x80
#define BRG7_clear_mask                          0x7F


/*------------------------------------------------------------#
| SPBRGH                                                 0x9A |
#-------------------------------------------------------------#
| BRG15 | BRG14 | BRG13 | BRG12 | BRG11 | BRG10 | BRG9 | BRG8 |
#-------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1    | 0    |
#------------------------------------------------------------*/

#define SPBRGH                                   0x0
#define SPBRGH_address                           0x09A
#define SPBRGH_position                          0x0
#define SPBRGH_size                              0x8
#define SPBRGH_value_mask                        0xFF
#define SPBRGH_clear_mask                        0x0

#define BRG8                                     0x0
#define BRG8_address                             0x09A
#define BRG8_position                            0x0
#define BRG8_size                                0x1
#define BRG8_value_mask                          0x1
#define BRG8_clear_mask                          0xFE

#define BRG9                                     0x1
#define BRG9_address                             0x09A
#define BRG9_position                            0x1
#define BRG9_size                                0x1
#define BRG9_value_mask                          0x2
#define BRG9_clear_mask                          0xFD

#define BRG10                                    0x2
#define BRG10_address                            0x09A
#define BRG10_position                           0x2
#define BRG10_size                               0x1
#define BRG10_value_mask                         0x4
#define BRG10_clear_mask                         0xFB

#define BRG11                                    0x3
#define BRG11_address                            0x09A
#define BRG11_position                           0x3
#define BRG11_size                               0x1
#define BRG11_value_mask                         0x8
#define BRG11_clear_mask                         0xF7

#define BRG12                                    0x4
#define BRG12_address                            0x09A
#define BRG12_position                           0x4
#define BRG12_size                               0x1
#define BRG12_value_mask                         0x10
#define BRG12_clear_mask                         0xEF

#define BRG13                                    0x5
#define BRG13_address                            0x09A
#define BRG13_position                           0x5
#define BRG13_size                               0x1
#define BRG13_value_mask                         0x20
#define BRG13_clear_mask                         0xDF

#define BRG14                                    0x6
#define BRG14_address                            0x09A
#define BRG14_position                           0x6
#define BRG14_size                               0x1
#define BRG14_value_mask                         0x40
#define BRG14_clear_mask                         0xBF

#define BRG15                                    0x7
#define BRG15_address                            0x09A
#define BRG15_position                           0x7
#define BRG15_size                               0x1
#define BRG15_value_mask                         0x80
#define BRG15_clear_mask                         0x7F


/*----------------------------------------------------#
| BAUDCTL                                        0x9B |
#-----------------------------------------------------#
| ABDOVF | RCIDL | - | SCKP | BRG16 | - | WUE | ABDEN |
#-----------------------------------------------------#
| 7      | 6     | 5 | 4    | 3     | 2 | 1   | 0     |
#----------------------------------------------------*/

#define BAUDCTL                                  0x0
#define BAUDCTL_address                          0x09B
#define BAUDCTL_position                         0x0
#define BAUDCTL_size                             0x8
#define BAUDCTL_value_mask                       0xFF
#define BAUDCTL_clear_mask                       0x0

#define ABDEN                                    0x0
#define ABDEN_address                            0x09B
#define ABDEN_position                           0x0
#define ABDEN_size                               0x1
#define ABDEN_value_mask                         0x1
#define ABDEN_clear_mask                         0xFE

#define WUE                                      0x1
#define WUE_address                              0x09B
#define WUE_position                             0x1
#define WUE_size                                 0x1
#define WUE_value_mask                           0x2
#define WUE_clear_mask                           0xFD

#define BRG16                                    0x3
#define BRG16_address                            0x09B
#define BRG16_position                           0x3
#define BRG16_size                               0x1
#define BRG16_value_mask                         0x8
#define BRG16_clear_mask                         0xF7

#define SCKP                                     0x4
#define SCKP_address                             0x09B
#define SCKP_position                            0x4
#define SCKP_size                                0x1
#define SCKP_value_mask                          0x10
#define SCKP_clear_mask                          0xEF

#define RCIDL                                    0x6
#define RCIDL_address                            0x09B
#define RCIDL_position                           0x6
#define RCIDL_size                               0x1
#define RCIDL_value_mask                         0x40
#define RCIDL_clear_mask                         0xBF

#define ABDOVF                                   0x7
#define ABDOVF_address                           0x09B
#define ABDOVF_position                          0x7
#define ABDOVF_size                              0x1
#define ABDOVF_value_mask                        0x80
#define ABDOVF_clear_mask                        0x7F


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


/*----------------------------------------------#
| WPUB                                    0x115 |
#-----------------------------------------------#
| WPUB7 | WPUB6 | WPUB5 | WPUB4 | - | - | - | - |
#-----------------------------------------------#
| 7     | 6     | 5     | 4     | 3 | 2 | 1 | 0 |
#----------------------------------------------*/

#define WPUB                                     0x4
#define WPUB_address                             0x115
#define WPUB_position                            0x4
#define WPUB_size                                0x4
#define WPUB_value_mask                          0xF0
#define WPUB_clear_mask                          0xF

#define WPUB4                                    0x4
#define WPUB4_address                            0x115
#define WPUB4_position                           0x4
#define WPUB4_size                               0x1
#define WPUB4_value_mask                         0x10
#define WPUB4_clear_mask                         0xEF

#define WPUB5                                    0x5
#define WPUB5_address                            0x115
#define WPUB5_position                           0x5
#define WPUB5_size                               0x1
#define WPUB5_value_mask                         0x20
#define WPUB5_clear_mask                         0xDF

#define WPUB6                                    0x6
#define WPUB6_address                            0x115
#define WPUB6_position                           0x6
#define WPUB6_size                               0x1
#define WPUB6_value_mask                         0x40
#define WPUB6_clear_mask                         0xBF

#define WPUB7                                    0x7
#define WPUB7_address                            0x115
#define WPUB7_position                           0x7
#define WPUB7_size                               0x1
#define WPUB7_value_mask                         0x80
#define WPUB7_clear_mask                         0x7F


/*----------------------------------------------#
| IOCB                                    0x116 |
#-----------------------------------------------#
| IOCB7 | IOCB6 | IOCB5 | IOCB4 | - | - | - | - |
#-----------------------------------------------#
| 7     | 6     | 5     | 4     | 3 | 2 | 1 | 0 |
#----------------------------------------------*/

#define IOCB                                     0x0
#define IOCB_address                             0x116
#define IOCB_position                            0x0
#define IOCB_size                                0x8
#define IOCB_value_mask                          0xFF
#define IOCB_clear_mask                          0x0

#define IOCB4                                    0x4
#define IOCB4_address                            0x116
#define IOCB4_position                           0x4
#define IOCB4_size                               0x1
#define IOCB4_value_mask                         0x10
#define IOCB4_clear_mask                         0xEF

#define IOCB5                                    0x5
#define IOCB5_address                            0x116
#define IOCB5_position                           0x5
#define IOCB5_size                               0x1
#define IOCB5_value_mask                         0x20
#define IOCB5_clear_mask                         0xDF

#define IOCB6                                    0x6
#define IOCB6_address                            0x116
#define IOCB6_position                           0x6
#define IOCB6_size                               0x1
#define IOCB6_value_mask                         0x40
#define IOCB6_clear_mask                         0xBF

#define IOCB7                                    0x7
#define IOCB7_address                            0x116
#define IOCB7_position                           0x7
#define IOCB7_size                               0x1
#define IOCB7_value_mask                         0x80
#define IOCB7_clear_mask                         0x7F


/*------------------------------------------------------#
| VRCON                                           0x118 |
#-------------------------------------------------------#
| C1VREN | C2VREN | VRR | VP6EN | VR3 | VR2 | VR1 | VR0 |
#-------------------------------------------------------#
| 7      | 6      | 5   | 4     | 3   | 2   | 1   | 0   |
#------------------------------------------------------*/

#define VRCON                                    0x0
#define VRCON_address                            0x118
#define VRCON_position                           0x0
#define VRCON_size                               0x8
#define VRCON_value_mask                         0xFF
#define VRCON_clear_mask                         0x0

#define VR0                                      0x0
#define VR0_address                              0x118
#define VR0_position                             0x0
#define VR0_size                                 0x1
#define VR0_value_mask                           0x1
#define VR0_clear_mask                           0xFE

#define VR                                       0x0
#define VR_address                               0x118
#define VR_position                              0x0
#define VR_size                                  0x4
#define VR_value_mask                            0xF
#define VR_clear_mask                            0xF0

#define VR1                                      0x1
#define VR1_address                              0x118
#define VR1_position                             0x1
#define VR1_size                                 0x1
#define VR1_value_mask                           0x2
#define VR1_clear_mask                           0xFD

#define VR2                                      0x2
#define VR2_address                              0x118
#define VR2_position                             0x2
#define VR2_size                                 0x1
#define VR2_value_mask                           0x4
#define VR2_clear_mask                           0xFB

#define VR3                                      0x3
#define VR3_address                              0x118
#define VR3_position                             0x3
#define VR3_size                                 0x1
#define VR3_value_mask                           0x8
#define VR3_clear_mask                           0xF7

#define VP6EN                                    0x4
#define VP6EN_address                            0x118
#define VP6EN_position                           0x4
#define VP6EN_size                               0x1
#define VP6EN_value_mask                         0x10
#define VP6EN_clear_mask                         0xEF

#define VRR                                      0x5
#define VRR_address                              0x118
#define VRR_position                             0x5
#define VRR_size                                 0x1
#define VRR_value_mask                           0x20
#define VRR_clear_mask                           0xDF

#define C2VREN                                   0x6
#define C2VREN_address                           0x118
#define C2VREN_position                          0x6
#define C2VREN_size                              0x1
#define C2VREN_value_mask                        0x40
#define C2VREN_clear_mask                        0xBF

#define C1VREN                                   0x7
#define C1VREN_address                           0x118
#define C1VREN_position                          0x7
#define C1VREN_size                              0x1
#define C1VREN_value_mask                        0x80
#define C1VREN_clear_mask                        0x7F


/*------------------------------------------------------#
| CM1CON0                                         0x119 |
#-------------------------------------------------------#
| C1ON | C1OUT | C1OE | C1POL | - | C1R | C1CH1 | C1CH0 |
#-------------------------------------------------------#
| 7    | 6     | 5    | 4     | 3 | 2   | 1     | 0     |
#------------------------------------------------------*/

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


/*------------------------------------------------------#
| CM2CON0                                         0x11A |
#-------------------------------------------------------#
| C2ON | C2OUT | C2OE | C2POL | - | C2R | C2CH1 | C2CH0 |
#-------------------------------------------------------#
| 7    | 6     | 5    | 4     | 3 | 2   | 1     | 0     |
#------------------------------------------------------*/

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


/*------------------------------------------------------#
| ANSEL                                           0x11E |
#-------------------------------------------------------#
| ANS7 | ANS6 | ANS5 | ANS4 | ANS3 | ANS2 | ANS1 | ANS0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define ANSEL                                    0x0
#define ANSEL_address                            0x11E
#define ANSEL_position                           0x0
#define ANSEL_size                               0x8
#define ANSEL_value_mask                         0xFF
#define ANSEL_clear_mask                         0x0

#define ANS0                                     0x0
#define ANS0_address                             0x11E
#define ANS0_position                            0x0
#define ANS0_size                                0x1
#define ANS0_value_mask                          0x1
#define ANS0_clear_mask                          0xFE

#define ANS1                                     0x1
#define ANS1_address                             0x11E
#define ANS1_position                            0x1
#define ANS1_size                                0x1
#define ANS1_value_mask                          0x2
#define ANS1_clear_mask                          0xFD

#define ANS2                                     0x2
#define ANS2_address                             0x11E
#define ANS2_position                            0x2
#define ANS2_size                                0x1
#define ANS2_value_mask                          0x4
#define ANS2_clear_mask                          0xFB

#define ANS3                                     0x3
#define ANS3_address                             0x11E
#define ANS3_position                            0x3
#define ANS3_size                                0x1
#define ANS3_value_mask                          0x8
#define ANS3_clear_mask                          0xF7

#define ANS4                                     0x4
#define ANS4_address                             0x11E
#define ANS4_position                            0x4
#define ANS4_size                                0x1
#define ANS4_value_mask                          0x10
#define ANS4_clear_mask                          0xEF

#define ANS5                                     0x5
#define ANS5_address                             0x11E
#define ANS5_position                            0x5
#define ANS5_size                                0x1
#define ANS5_value_mask                          0x20
#define ANS5_clear_mask                          0xDF

#define ANS6                                     0x6
#define ANS6_address                             0x11E
#define ANS6_position                            0x6
#define ANS6_size                                0x1
#define ANS6_value_mask                          0x40
#define ANS6_clear_mask                          0xBF

#define ANS7                                     0x7
#define ANS7_address                             0x11E
#define ANS7_position                            0x7
#define ANS7_size                                0x1
#define ANS7_value_mask                          0x80
#define ANS7_clear_mask                          0x7F


/*--------------------------------------------#
| ANSELH                                0x11F |
#---------------------------------------------#
| - | - | - | - | ANS11 | ANS10 | ANS9 | ANS8 |
#---------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1    | 0    |
#--------------------------------------------*/

#define ANSELH                                   0x0
#define ANSELH_address                           0x11F
#define ANSELH_position                          0x0
#define ANSELH_size                              0x8
#define ANSELH_value_mask                        0xFF
#define ANSELH_clear_mask                        0x0

#define ANS8                                     0x0
#define ANS8_address                             0x11F
#define ANS8_position                            0x0
#define ANS8_size                                0x1
#define ANS8_value_mask                          0x1
#define ANS8_clear_mask                          0xFE

#define ANS9                                     0x1
#define ANS9_address                             0x11F
#define ANS9_position                            0x1
#define ANS9_size                                0x1
#define ANS9_value_mask                          0x2
#define ANS9_clear_mask                          0xFD

#define ANS10                                    0x2
#define ANS10_address                            0x11F
#define ANS10_position                           0x2
#define ANS10_size                               0x1
#define ANS10_value_mask                         0x4
#define ANS10_clear_mask                         0xFB

#define ANS11                                    0x3
#define ANS11_address                            0x11F
#define ANS11_position                           0x3
#define ANS11_size                               0x1
#define ANS11_value_mask                         0x8
#define ANS11_clear_mask                         0xF7


/*-------------------------------------------#
| EECON1                               0x18C |
#--------------------------------------------#
| EEPGD | - | - | - | WRERR | WREN | WR | RD |
#--------------------------------------------#
| 7     | 6 | 5 | 4 | 3     | 2    | 1  | 0  |
#-------------------------------------------*/

#define EECON1                                   0x0
#define EECON1_address                           0x18C
#define EECON1_position                          0x0
#define EECON1_size                              0x8
#define EECON1_value_mask                        0xFF
#define EECON1_clear_mask                        0x0

#define RD                                       0x0
#define RD_address                               0x18C
#define RD_position                              0x0
#define RD_size                                  0x1
#define RD_value_mask                            0x1
#define RD_clear_mask                            0xFE

#define WR                                       0x1
#define WR_address                               0x18C
#define WR_position                              0x1
#define WR_size                                  0x1
#define WR_value_mask                            0x2
#define WR_clear_mask                            0xFD

#define WREN                                     0x2
#define WREN_address                             0x18C
#define WREN_position                            0x2
#define WREN_size                                0x1
#define WREN_value_mask                          0x4
#define WREN_clear_mask                          0xFB

#define WRERR                                    0x3
#define WRERR_address                            0x18C
#define WRERR_position                           0x3
#define WRERR_size                               0x1
#define WRERR_value_mask                         0x8
#define WRERR_clear_mask                         0xF7

#define EEPGD                                    0x7
#define EEPGD_address                            0x18C
#define EEPGD_position                           0x7
#define EEPGD_size                               0x1
#define EEPGD_value_mask                         0x80
#define EEPGD_clear_mask                         0x7F


/*------------------------------------------------#
| PSTRCON                                   0x19D |
#-------------------------------------------------#
| - | - | - | STRSYNC | STRD | STRC | STRB | STRA |
#-------------------------------------------------#
| 7 | 6 | 5 | 4       | 3    | 2    | 1    | 0    |
#------------------------------------------------*/

#define PSTRCON                                  0x0
#define PSTRCON_address                          0x19D
#define PSTRCON_position                         0x0
#define PSTRCON_size                             0x8
#define PSTRCON_value_mask                       0xFF
#define PSTRCON_clear_mask                       0x0

#define STRA                                     0x0
#define STRA_address                             0x19D
#define STRA_position                            0x0
#define STRA_size                                0x1
#define STRA_value_mask                          0x1
#define STRA_clear_mask                          0xFE

#define STRB                                     0x1
#define STRB_address                             0x19D
#define STRB_position                            0x1
#define STRB_size                                0x1
#define STRB_value_mask                          0x2
#define STRB_clear_mask                          0xFD

#define STRC                                     0x2
#define STRC_address                             0x19D
#define STRC_position                            0x2
#define STRC_size                                0x1
#define STRC_value_mask                          0x4
#define STRC_clear_mask                          0xFB

#define STRD                                     0x3
#define STRD_address                             0x19D
#define STRD_position                            0x3
#define STRD_size                                0x1
#define STRD_value_mask                          0x8
#define STRD_clear_mask                          0xF7

#define STRSYNC                                  0x4
#define STRSYNC_address                          0x19D
#define STRSYNC_position                         0x4
#define STRSYNC_size                             0x1
#define STRSYNC_value_mask                       0x10
#define STRSYNC_clear_mask                       0xEF


/*--------------------------------------------------#
| SRCON                                       0x19E |
#---------------------------------------------------#
| SR1 | SR0 | C1SEN | C2REN | PULSS | PULSR | - | - |
#---------------------------------------------------#
| 7   | 6   | 5     | 4     | 3     | 2     | 1 | 0 |
#--------------------------------------------------*/

#define SRCON                                    0x0
#define SRCON_address                            0x19E
#define SRCON_position                           0x0
#define SRCON_size                               0x8
#define SRCON_value_mask                         0xFF
#define SRCON_clear_mask                         0x0

#define PULSR                                    0x2
#define PULSR_address                            0x19E
#define PULSR_position                           0x2
#define PULSR_size                               0x1
#define PULSR_value_mask                         0x4
#define PULSR_clear_mask                         0xFB

#define PULSS                                    0x3
#define PULSS_address                            0x19E
#define PULSS_position                           0x3
#define PULSS_size                               0x1
#define PULSS_value_mask                         0x8
#define PULSS_clear_mask                         0xF7

#define C2REN                                    0x4
#define C2REN_address                            0x19E
#define C2REN_position                           0x4
#define C2REN_size                               0x1
#define C2REN_value_mask                         0x10
#define C2REN_clear_mask                         0xEF

#define C1SEN                                    0x5
#define C1SEN_address                            0x19E
#define C1SEN_position                           0x5
#define C1SEN_size                               0x1
#define C1SEN_value_mask                         0x20
#define C1SEN_clear_mask                         0xDF

#define SR                                       0x6
#define SR_address                               0x19E
#define SR_position                              0x6
#define SR_size                                  0x2
#define SR_value_mask                            0xC0
#define SR_clear_mask                            0x3F

#define SR0                                      0x6
#define SR0_address                              0x19E
#define SR0_position                             0x6
#define SR0_size                                 0x1
#define SR0_value_mask                           0x40
#define SR0_clear_mask                           0xBF

#define SR1                                      0x7
#define SR1_address                              0x19E
#define SR1_position                             0x7
#define SR1_size                                 0x1
#define SR1_value_mask                           0x80
#define SR1_clear_mask                           0x7F

#endif // _PIC16F690_H_
