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

#ifndef _PIC16C765_H_
#define _PIC16C765_H_


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


/*----------------------------------------#
| PORTC                               0x7 |
#-----------------------------------------#
| RC7 | RC6 | - | - | - | RC2 | RC1 | RC0 |
#-----------------------------------------#
| 7   | 6   | 5 | 4 | 3 | 2   | 1   | 0   |
#----------------------------------------*/

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


/*----------------------------------------------#
| PORTD                                     0x8 |
#-----------------------------------------------#
| RD7 | RD6 | RD5 | RD4 | RD3 | RD2 | RD1 | RD0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define PORTD                                    0x0
#define PORTD_address                            0x008
#define PORTD_position                           0x0
#define PORTD_size                               0x8
#define PORTD_value_mask                         0xFF
#define PORTD_clear_mask                         0x0

#define RD0                                      0x0
#define RD0_address                              0x008
#define RD0_position                             0x0
#define RD0_size                                 0x1
#define RD0_value_mask                           0x1
#define RD0_clear_mask                           0xFE

#define RD1                                      0x1
#define RD1_address                              0x008
#define RD1_position                             0x1
#define RD1_size                                 0x1
#define RD1_value_mask                           0x2
#define RD1_clear_mask                           0xFD

#define RD2                                      0x2
#define RD2_address                              0x008
#define RD2_position                             0x2
#define RD2_size                                 0x1
#define RD2_value_mask                           0x4
#define RD2_clear_mask                           0xFB

#define RD3                                      0x3
#define RD3_address                              0x008
#define RD3_position                             0x3
#define RD3_size                                 0x1
#define RD3_value_mask                           0x8
#define RD3_clear_mask                           0xF7

#define RD4                                      0x4
#define RD4_address                              0x008
#define RD4_position                             0x4
#define RD4_size                                 0x1
#define RD4_value_mask                           0x10
#define RD4_clear_mask                           0xEF

#define RD5                                      0x5
#define RD5_address                              0x008
#define RD5_position                             0x5
#define RD5_size                                 0x1
#define RD5_value_mask                           0x20
#define RD5_clear_mask                           0xDF

#define RD6                                      0x6
#define RD6_address                              0x008
#define RD6_position                             0x6
#define RD6_size                                 0x1
#define RD6_value_mask                           0x40
#define RD6_clear_mask                           0xBF

#define RD7                                      0x7
#define RD7_address                              0x008
#define RD7_position                             0x7
#define RD7_size                                 0x1
#define RD7_value_mask                           0x80
#define RD7_clear_mask                           0x7F


/*------------------------------------#
| PORTE                           0x9 |
#-------------------------------------#
| - | - | - | - | - | RE2 | RE1 | RE0 |
#-------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2   | 1   | 0   |
#------------------------------------*/

#define PORTE                                    0x0
#define PORTE_address                            0x009
#define PORTE_position                           0x0
#define PORTE_size                               0x8
#define PORTE_value_mask                         0xFF
#define PORTE_clear_mask                         0x0

#define RE0                                      0x0
#define RE0_address                              0x009
#define RE0_position                             0x0
#define RE0_size                                 0x1
#define RE0_value_mask                           0x1
#define RE0_clear_mask                           0xFE

#define RE1                                      0x1
#define RE1_address                              0x009
#define RE1_position                             0x1
#define RE1_size                                 0x1
#define RE1_value_mask                           0x2
#define RE1_clear_mask                           0xFD

#define RE2                                      0x2
#define RE2_address                              0x009
#define RE2_position                             0x2
#define RE2_size                                 0x1
#define RE2_value_mask                           0x4
#define RE2_clear_mask                           0xFB


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

#define TMR0IF                                   0x2
#define TMR0IF_address                           0x00B
#define TMR0IF_position                          0x2
#define TMR0IF_size                              0x1
#define TMR0IF_value_mask                        0x4
#define TMR0IF_clear_mask                        0xFB

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


/*--------------------------------------------------------------#
| PIR1                                                      0xC |
#---------------------------------------------------------------#
| PSPIF | ADIF | RCIF | TXIF | USBIF | CCP1IF | TMR2IF | TMR1IF |
#---------------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#--------------------------------------------------------------*/

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

#define USBIF                                    0x3
#define USBIF_address                            0x00C
#define USBIF_position                           0x3
#define USBIF_size                               0x1
#define USBIF_value_mask                         0x8
#define USBIF_clear_mask                         0xF7

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

#define PSPIF                                    0x7
#define PSPIF_address                            0x00C
#define PSPIF_position                           0x7
#define PSPIF_size                               0x1
#define PSPIF_value_mask                         0x80
#define PSPIF_clear_mask                         0x7F


/*-----------------------------------#
| PIR2                           0xD |
#------------------------------------#
| - | - | - | - | - | - | - | CCP2IF |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0      |
#-----------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0x00D
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

#define CCP2IF                                   0x0
#define CCP2IF_address                           0x00D
#define CCP2IF_position                          0x0
#define CCP2IF_size                              0x1
#define CCP2IF_value_mask                        0x1
#define CCP2IF_clear_mask                        0xFE


/*-----------------------------------------------------------------#
| T1CON                                                       0x10 |
#------------------------------------------------------------------#
| - | - | T1CKPS1 | T1CKPS0 | T1OSCEN | T1INSYNC | TMR1CS | TMR1ON |
#------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2        | 1      | 0      |
#-----------------------------------------------------------------*/

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
| CCP1CON                                              0x17 |
#-----------------------------------------------------------#
| - | - | DC1B1 | DC1B0 | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

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


/*--------------------------------------------------#
| RCSTA                                        0x18 |
#---------------------------------------------------#
| SPEN | RX9 | SREN | CREN | - | FERR | OERR | RCD8 |
#---------------------------------------------------#
| 7    | 6   | 5    | 4    | 3 | 2    | 1    | 0    |
#--------------------------------------------------*/

#define RCSTA                                    0x0
#define RCSTA_address                            0x018
#define RCSTA_position                           0x0
#define RCSTA_size                               0x8
#define RCSTA_value_mask                         0xFF
#define RCSTA_clear_mask                         0x0

#define RCD8                                     0x0
#define RCD8_address                             0x018
#define RCD8_position                            0x0
#define RCD8_size                                0x1
#define RCD8_value_mask                          0x1
#define RCD8_clear_mask                          0xFE

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

#define RC8_9                                    0x6
#define RC8_9_address                            0x018
#define RC8_9_position                           0x6
#define RC8_9_size                               0x1
#define RC8_9_value_mask                         0x40
#define RC8_9_clear_mask                         0xBF

#define RC9                                      0x6
#define RC9_address                              0x018
#define RC9_position                             0x6
#define RC9_size                                 0x1
#define RC9_value_mask                           0x40
#define RC9_clear_mask                           0xBF

#define RX9                                      0x6
#define RX9_address                              0x018
#define RX9_position                             0x6
#define RX9_size                                 0x1
#define RX9_value_mask                           0x40
#define RX9_clear_mask                           0xBF

#define nRC8                                     0x6
#define nRC8_address                             0x018
#define nRC8_position                            0x6
#define nRC8_size                                0x1
#define nRC8_value_mask                          0x40
#define nRC8_clear_mask                          0xBF

#define SPEN                                     0x7
#define SPEN_address                             0x018
#define SPEN_position                            0x7
#define SPEN_size                                0x1
#define SPEN_value_mask                          0x80
#define SPEN_clear_mask                          0x7F


/*----------------------------------------------------------#
| CCP2CON                                              0x1D |
#-----------------------------------------------------------#
| - | - | DC2B1 | DC2B0 | CCP2M3 | CCP2M2 | CCP2M1 | CCP2M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP2CON                                  0x0
#define CCP2CON_address                          0x01D
#define CCP2CON_position                         0x0
#define CCP2CON_size                             0x8
#define CCP2CON_value_mask                       0xFF
#define CCP2CON_clear_mask                       0x0

#define CCP2M                                    0x0
#define CCP2M_address                            0x01D
#define CCP2M_position                           0x0
#define CCP2M_size                               0x4
#define CCP2M_value_mask                         0xF
#define CCP2M_clear_mask                         0xF0

#define CCP2M0                                   0x0
#define CCP2M0_address                           0x01D
#define CCP2M0_position                          0x0
#define CCP2M0_size                              0x1
#define CCP2M0_value_mask                        0x1
#define CCP2M0_clear_mask                        0xFE

#define CCP2M1                                   0x1
#define CCP2M1_address                           0x01D
#define CCP2M1_position                          0x1
#define CCP2M1_size                              0x1
#define CCP2M1_value_mask                        0x2
#define CCP2M1_clear_mask                        0xFD

#define CCP2M2                                   0x2
#define CCP2M2_address                           0x01D
#define CCP2M2_position                          0x2
#define CCP2M2_size                              0x1
#define CCP2M2_value_mask                        0x4
#define CCP2M2_clear_mask                        0xFB

#define CCP2M3                                   0x3
#define CCP2M3_address                           0x01D
#define CCP2M3_position                          0x3
#define CCP2M3_size                              0x1
#define CCP2M3_value_mask                        0x8
#define CCP2M3_clear_mask                        0xF7

#define DC2B0                                    0x4
#define DC2B0_address                            0x01D
#define DC2B0_position                           0x4
#define DC2B0_size                               0x1
#define DC2B0_value_mask                         0x10
#define DC2B0_clear_mask                         0xEF

#define DC2B                                     0x4
#define DC2B_address                             0x01D
#define DC2B_position                            0x4
#define DC2B_size                                0x2
#define DC2B_value_mask                          0x30
#define DC2B_clear_mask                          0xCF

#define DC2B1                                    0x5
#define DC2B1_address                            0x01D
#define DC2B1_position                           0x5
#define DC2B1_size                               0x1
#define DC2B1_value_mask                         0x20
#define DC2B1_clear_mask                         0xDF


/*------------------------------------------------------#
| ADCON0                                           0x1F |
#-------------------------------------------------------#
| ADCS1 | ADCS0 | CHS2 | CHS1 | CHS0 | nDONE | - | ADON |
#-------------------------------------------------------#
| 7     | 6     | 5    | 4    | 3    | 2     | 1 | 0    |
#------------------------------------------------------*/

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


/*-------------------------------------------------------#
| TRISC                                             0x87 |
#--------------------------------------------------------#
| TRISC7 | TRISC6 | - | - | - | TRISC2 | TRISC1 | TRISC0 |
#--------------------------------------------------------#
| 7      | 6      | 5 | 4 | 3 | 2      | 1      | 0      |
#-------------------------------------------------------*/

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


/*----------------------------------------------------------------------#
| TRISD                                                            0x88 |
#-----------------------------------------------------------------------#
| TRISD7 | TRISD6 | TRISD5 | TRISD4 | TRISD3 | TRISD2 | TRISD1 | TRISD0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISD                                    0x0
#define TRISD_address                            0x088
#define TRISD_position                           0x0
#define TRISD_size                               0x8
#define TRISD_value_mask                         0xFF
#define TRISD_clear_mask                         0x0

#define TRISD0                                   0x0
#define TRISD0_address                           0x088
#define TRISD0_position                          0x0
#define TRISD0_size                              0x1
#define TRISD0_value_mask                        0x1
#define TRISD0_clear_mask                        0xFE

#define TRISD1                                   0x1
#define TRISD1_address                           0x088
#define TRISD1_position                          0x1
#define TRISD1_size                              0x1
#define TRISD1_value_mask                        0x2
#define TRISD1_clear_mask                        0xFD

#define TRISD2                                   0x2
#define TRISD2_address                           0x088
#define TRISD2_position                          0x2
#define TRISD2_size                              0x1
#define TRISD2_value_mask                        0x4
#define TRISD2_clear_mask                        0xFB

#define TRISD3                                   0x3
#define TRISD3_address                           0x088
#define TRISD3_position                          0x3
#define TRISD3_size                              0x1
#define TRISD3_value_mask                        0x8
#define TRISD3_clear_mask                        0xF7

#define TRISD4                                   0x4
#define TRISD4_address                           0x088
#define TRISD4_position                          0x4
#define TRISD4_size                              0x1
#define TRISD4_value_mask                        0x10
#define TRISD4_clear_mask                        0xEF

#define TRISD5                                   0x5
#define TRISD5_address                           0x088
#define TRISD5_position                          0x5
#define TRISD5_size                              0x1
#define TRISD5_value_mask                        0x20
#define TRISD5_clear_mask                        0xDF

#define TRISD6                                   0x6
#define TRISD6_address                           0x088
#define TRISD6_position                          0x6
#define TRISD6_size                              0x1
#define TRISD6_value_mask                        0x40
#define TRISD6_clear_mask                        0xBF

#define TRISD7                                   0x7
#define TRISD7_address                           0x088
#define TRISD7_position                          0x7
#define TRISD7_size                              0x1
#define TRISD7_value_mask                        0x80
#define TRISD7_clear_mask                        0x7F


/*----------------------------------------------------------#
| TRISE                                                0x89 |
#-----------------------------------------------------------#
| IBF | OBF | IBOV | PSPMODE | - | TRISE2 | TRISE1 | TRISE0 |
#-----------------------------------------------------------#
| 7   | 6   | 5    | 4       | 3 | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define TRISE                                    0x0
#define TRISE_address                            0x089
#define TRISE_position                           0x0
#define TRISE_size                               0x8
#define TRISE_value_mask                         0xFF
#define TRISE_clear_mask                         0x0

#define TRISE0                                   0x0
#define TRISE0_address                           0x089
#define TRISE0_position                          0x0
#define TRISE0_size                              0x1
#define TRISE0_value_mask                        0x1
#define TRISE0_clear_mask                        0xFE

#define TRISE1                                   0x1
#define TRISE1_address                           0x089
#define TRISE1_position                          0x1
#define TRISE1_size                              0x1
#define TRISE1_value_mask                        0x2
#define TRISE1_clear_mask                        0xFD

#define TRISE2                                   0x2
#define TRISE2_address                           0x089
#define TRISE2_position                          0x2
#define TRISE2_size                              0x1
#define TRISE2_value_mask                        0x4
#define TRISE2_clear_mask                        0xFB

#define PSPMODE                                  0x4
#define PSPMODE_address                          0x089
#define PSPMODE_position                         0x4
#define PSPMODE_size                             0x1
#define PSPMODE_value_mask                       0x10
#define PSPMODE_clear_mask                       0xEF

#define IBOV                                     0x5
#define IBOV_address                             0x089
#define IBOV_position                            0x5
#define IBOV_size                                0x1
#define IBOV_value_mask                          0x20
#define IBOV_clear_mask                          0xDF

#define OBF                                      0x6
#define OBF_address                              0x089
#define OBF_position                             0x6
#define OBF_size                                 0x1
#define OBF_value_mask                           0x40
#define OBF_clear_mask                           0xBF

#define IBF                                      0x7
#define IBF_address                              0x089
#define IBF_position                             0x7
#define IBF_size                                 0x1
#define IBF_value_mask                           0x80
#define IBF_clear_mask                           0x7F


/*--------------------------------------------------------------#
| PIE1                                                     0x8C |
#---------------------------------------------------------------#
| PSPIE | ADIE | RCIE | TXIE | USBIE | CCP1IE | TMR2IE | TMR1IE |
#---------------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#--------------------------------------------------------------*/

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

#define USBIE                                    0x3
#define USBIE_address                            0x08C
#define USBIE_position                           0x3
#define USBIE_size                               0x1
#define USBIE_value_mask                         0x8
#define USBIE_clear_mask                         0xF7

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

#define PSPIE                                    0x7
#define PSPIE_address                            0x08C
#define PSPIE_position                           0x7
#define PSPIE_size                               0x1
#define PSPIE_value_mask                         0x80
#define PSPIE_clear_mask                         0x7F


/*-----------------------------------#
| PIE2                          0x8D |
#------------------------------------#
| - | - | - | - | - | - | - | CCP2IE |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0      |
#-----------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0x08D
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

#define CCP2IE                                   0x0
#define CCP2IE_address                           0x08D
#define CCP2IE_position                          0x0
#define CCP2IE_size                              0x1
#define CCP2IE_value_mask                        0x1
#define CCP2IE_clear_mask                        0xFE


/*------------------------------------#
| PCON                           0x8E |
#-------------------------------------#
| - | - | - | - | - | - | nPOR | nBOR |
#-------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1    | 0    |
#------------------------------------*/

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


/*------------------------------#
| PR2                      0x92 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR2                                      0x0
#define PR2_address                              0x092
#define PR2_position                             0x0
#define PR2_size                                 0x8
#define PR2_value_mask                           0xFF
#define PR2_clear_mask                           0x0


/*----------------------------------------------------#
| TXSTA                                          0x98 |
#-----------------------------------------------------#
| CSRC | TX8_9 | TXEN | SYNC | - | BRGH | TRMT | TXD8 |
#-----------------------------------------------------#
| 7    | 6     | 5    | 4    | 3 | 2    | 1    | 0    |
#----------------------------------------------------*/

#define TXSTA                                    0x0
#define TXSTA_address                            0x098
#define TXSTA_position                           0x0
#define TXSTA_size                               0x8
#define TXSTA_value_mask                         0xFF
#define TXSTA_clear_mask                         0x0

#define TXD8                                     0x0
#define TXD8_address                             0x098
#define TXD8_position                            0x0
#define TXD8_size                                0x1
#define TXD8_value_mask                          0x1
#define TXD8_clear_mask                          0xFE

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

#define TX8_9                                    0x6
#define TX8_9_address                            0x098
#define TX8_9_position                           0x6
#define TX8_9_size                               0x1
#define TX8_9_value_mask                         0x40
#define TX8_9_clear_mask                         0xBF

#define TX9                                      0x6
#define TX9_address                              0x098
#define TX9_position                             0x6
#define TX9_size                                 0x1
#define TX9_value_mask                           0x40
#define TX9_clear_mask                           0xBF

#define nTX8                                     0x6
#define nTX8_address                             0x098
#define nTX8_position                            0x6
#define nTX8_size                                0x1
#define nTX8_value_mask                          0x40
#define nTX8_clear_mask                          0xBF

#define CSRC                                     0x7
#define CSRC_address                             0x098
#define CSRC_position                            0x7
#define CSRC_size                                0x1
#define CSRC_value_mask                          0x80
#define CSRC_clear_mask                          0x7F


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


/*------------------------------------------------------------------------------------#
| UIR                                                                           0x190 |
#-------------------------------------------------------------------------------------#
| - | - | UIR_STALL | UIR_UIDLE | UIR_TOK_DNE | UIR_ACTIVITY | UIR_UERR | UIR_USB_RST |
#-------------------------------------------------------------------------------------#
| 7 | 6 | 5         | 4         | 3           | 2            | 1        | 0           |
#------------------------------------------------------------------------------------*/

#define UIR                                      0x0
#define UIR_address                              0x190
#define UIR_position                             0x0
#define UIR_size                                 0x8
#define UIR_value_mask                           0xFF
#define UIR_clear_mask                           0x0

#define UIR_USB_RST                              0x0
#define UIR_USB_RST_address                      0x190
#define UIR_USB_RST_position                     0x0
#define UIR_USB_RST_size                         0x1
#define UIR_USB_RST_value_mask                   0x1
#define UIR_USB_RST_clear_mask                   0xFE

#define UIR_UERR                                 0x1
#define UIR_UERR_address                         0x190
#define UIR_UERR_position                        0x1
#define UIR_UERR_size                            0x1
#define UIR_UERR_value_mask                      0x2
#define UIR_UERR_clear_mask                      0xFD

#define UIR_ACTIVITY                             0x2
#define UIR_ACTIVITY_address                     0x190
#define UIR_ACTIVITY_position                    0x2
#define UIR_ACTIVITY_size                        0x1
#define UIR_ACTIVITY_value_mask                  0x4
#define UIR_ACTIVITY_clear_mask                  0xFB

#define UIR_TOK_DNE                              0x3
#define UIR_TOK_DNE_address                      0x190
#define UIR_TOK_DNE_position                     0x3
#define UIR_TOK_DNE_size                         0x1
#define UIR_TOK_DNE_value_mask                   0x8
#define UIR_TOK_DNE_clear_mask                   0xF7

#define UIR_UIDLE                                0x4
#define UIR_UIDLE_address                        0x190
#define UIR_UIDLE_position                       0x4
#define UIR_UIDLE_size                           0x1
#define UIR_UIDLE_value_mask                     0x10
#define UIR_UIDLE_clear_mask                     0xEF

#define UIR_STALL                                0x5
#define UIR_STALL_address                        0x190
#define UIR_STALL_position                       0x5
#define UIR_STALL_size                           0x1
#define UIR_STALL_value_mask                     0x20
#define UIR_STALL_clear_mask                     0xDF


/*------------------------------------------------------------------------------------#
| UIE                                                                           0x191 |
#-------------------------------------------------------------------------------------#
| - | - | UIE_STALL | UIE_UIDLE | UIE_TOK_DNE | UIE_ACTIVITY | UIE_UERR | UIE_USB_RST |
#-------------------------------------------------------------------------------------#
| 7 | 6 | 5         | 4         | 3           | 2            | 1        | 0           |
#------------------------------------------------------------------------------------*/

#define UIE                                      0x0
#define UIE_address                              0x191
#define UIE_position                             0x0
#define UIE_size                                 0x8
#define UIE_value_mask                           0xFF
#define UIE_clear_mask                           0x0

#define UIE_USB_RST                              0x0
#define UIE_USB_RST_address                      0x191
#define UIE_USB_RST_position                     0x0
#define UIE_USB_RST_size                         0x1
#define UIE_USB_RST_value_mask                   0x1
#define UIE_USB_RST_clear_mask                   0xFE

#define UIE_UERR                                 0x1
#define UIE_UERR_address                         0x191
#define UIE_UERR_position                        0x1
#define UIE_UERR_size                            0x1
#define UIE_UERR_value_mask                      0x2
#define UIE_UERR_clear_mask                      0xFD

#define UIE_ACTIVITY                             0x2
#define UIE_ACTIVITY_address                     0x191
#define UIE_ACTIVITY_position                    0x2
#define UIE_ACTIVITY_size                        0x1
#define UIE_ACTIVITY_value_mask                  0x4
#define UIE_ACTIVITY_clear_mask                  0xFB

#define UIE_TOK_DNE                              0x3
#define UIE_TOK_DNE_address                      0x191
#define UIE_TOK_DNE_position                     0x3
#define UIE_TOK_DNE_size                         0x1
#define UIE_TOK_DNE_value_mask                   0x8
#define UIE_TOK_DNE_clear_mask                   0xF7

#define UIE_UIDLE                                0x4
#define UIE_UIDLE_address                        0x191
#define UIE_UIDLE_position                       0x4
#define UIE_UIDLE_size                           0x1
#define UIE_UIDLE_value_mask                     0x10
#define UIE_UIDLE_clear_mask                     0xEF

#define UIE_STALL                                0x5
#define UIE_STALL_address                        0x191
#define UIE_STALL_position                       0x5
#define UIE_STALL_size                           0x1
#define UIE_STALL_value_mask                     0x20
#define UIE_STALL_clear_mask                     0xDF


/*--------------------------------------------------------------------------------------------------------------#
| UEIR                                                                                                    0x192 |
#---------------------------------------------------------------------------------------------------------------#
| UEIR_BTS_ERR | UEIR_OWN_ERR | UEIR_WRT_ERR | UEIR_BTO_ERR | UEIR_DFN8 | UEIR_CRC16 | UEIR_CRC5 | UEIR_PID_ERR |
#---------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3         | 2          | 1         | 0            |
#--------------------------------------------------------------------------------------------------------------*/

#define UEIR                                     0x0
#define UEIR_address                             0x192
#define UEIR_position                            0x0
#define UEIR_size                                0x8
#define UEIR_value_mask                          0xFF
#define UEIR_clear_mask                          0x0

#define UEIR_PID_ERR                             0x0
#define UEIR_PID_ERR_address                     0x192
#define UEIR_PID_ERR_position                    0x0
#define UEIR_PID_ERR_size                        0x1
#define UEIR_PID_ERR_value_mask                  0x1
#define UEIR_PID_ERR_clear_mask                  0xFE

#define UEIR_CRC5                                0x1
#define UEIR_CRC5_address                        0x192
#define UEIR_CRC5_position                       0x1
#define UEIR_CRC5_size                           0x1
#define UEIR_CRC5_value_mask                     0x2
#define UEIR_CRC5_clear_mask                     0xFD

#define UEIR_CRC16                               0x2
#define UEIR_CRC16_address                       0x192
#define UEIR_CRC16_position                      0x2
#define UEIR_CRC16_size                          0x1
#define UEIR_CRC16_value_mask                    0x4
#define UEIR_CRC16_clear_mask                    0xFB

#define UEIR_DFN8                                0x3
#define UEIR_DFN8_address                        0x192
#define UEIR_DFN8_position                       0x3
#define UEIR_DFN8_size                           0x1
#define UEIR_DFN8_value_mask                     0x8
#define UEIR_DFN8_clear_mask                     0xF7

#define UEIR_BTO_ERR                             0x4
#define UEIR_BTO_ERR_address                     0x192
#define UEIR_BTO_ERR_position                    0x4
#define UEIR_BTO_ERR_size                        0x1
#define UEIR_BTO_ERR_value_mask                  0x10
#define UEIR_BTO_ERR_clear_mask                  0xEF

#define UEIR_WRT_ERR                             0x5
#define UEIR_WRT_ERR_address                     0x192
#define UEIR_WRT_ERR_position                    0x5
#define UEIR_WRT_ERR_size                        0x1
#define UEIR_WRT_ERR_value_mask                  0x20
#define UEIR_WRT_ERR_clear_mask                  0xDF

#define UEIR_OWN_ERR                             0x6
#define UEIR_OWN_ERR_address                     0x192
#define UEIR_OWN_ERR_position                    0x6
#define UEIR_OWN_ERR_size                        0x1
#define UEIR_OWN_ERR_value_mask                  0x40
#define UEIR_OWN_ERR_clear_mask                  0xBF

#define UEIR_BTS_ERR                             0x7
#define UEIR_BTS_ERR_address                     0x192
#define UEIR_BTS_ERR_position                    0x7
#define UEIR_BTS_ERR_size                        0x1
#define UEIR_BTS_ERR_value_mask                  0x80
#define UEIR_BTS_ERR_clear_mask                  0x7F


/*--------------------------------------------------------------------------------------------------------------#
| UEIE                                                                                                    0x193 |
#---------------------------------------------------------------------------------------------------------------#
| UEIE_BTS_ERR | UEIE_OWN_ERR | UEIE_WRT_ERR | UEIE_BTO_ERR | UEIE_DFN8 | UEIE_CRC16 | UEIE_CRC5 | UEIE_PID_ERR |
#---------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3         | 2          | 1         | 0            |
#--------------------------------------------------------------------------------------------------------------*/

#define UEIE                                     0x0
#define UEIE_address                             0x193
#define UEIE_position                            0x0
#define UEIE_size                                0x8
#define UEIE_value_mask                          0xFF
#define UEIE_clear_mask                          0x0

#define UEIE_PID_ERR                             0x0
#define UEIE_PID_ERR_address                     0x193
#define UEIE_PID_ERR_position                    0x0
#define UEIE_PID_ERR_size                        0x1
#define UEIE_PID_ERR_value_mask                  0x1
#define UEIE_PID_ERR_clear_mask                  0xFE

#define UEIE_CRC5                                0x1
#define UEIE_CRC5_address                        0x193
#define UEIE_CRC5_position                       0x1
#define UEIE_CRC5_size                           0x1
#define UEIE_CRC5_value_mask                     0x2
#define UEIE_CRC5_clear_mask                     0xFD

#define UEIE_CRC16                               0x2
#define UEIE_CRC16_address                       0x193
#define UEIE_CRC16_position                      0x2
#define UEIE_CRC16_size                          0x1
#define UEIE_CRC16_value_mask                    0x4
#define UEIE_CRC16_clear_mask                    0xFB

#define UEIE_DFN8                                0x3
#define UEIE_DFN8_address                        0x193
#define UEIE_DFN8_position                       0x3
#define UEIE_DFN8_size                           0x1
#define UEIE_DFN8_value_mask                     0x8
#define UEIE_DFN8_clear_mask                     0xF7

#define UEIE_BTO_ERR                             0x4
#define UEIE_BTO_ERR_address                     0x193
#define UEIE_BTO_ERR_position                    0x4
#define UEIE_BTO_ERR_size                        0x1
#define UEIE_BTO_ERR_value_mask                  0x10
#define UEIE_BTO_ERR_clear_mask                  0xEF

#define UEIE_WRT_ERR                             0x5
#define UEIE_WRT_ERR_address                     0x193
#define UEIE_WRT_ERR_position                    0x5
#define UEIE_WRT_ERR_size                        0x1
#define UEIE_WRT_ERR_value_mask                  0x20
#define UEIE_WRT_ERR_clear_mask                  0xDF

#define UEIE_OWN_ERR                             0x6
#define UEIE_OWN_ERR_address                     0x193
#define UEIE_OWN_ERR_position                    0x6
#define UEIE_OWN_ERR_size                        0x1
#define UEIE_OWN_ERR_value_mask                  0x40
#define UEIE_OWN_ERR_clear_mask                  0xBF

#define UEIE_BTS_ERR                             0x7
#define UEIE_BTS_ERR_address                     0x193
#define UEIE_BTS_ERR_position                    0x7
#define UEIE_BTS_ERR_size                        0x1
#define UEIE_BTS_ERR_value_mask                  0x80
#define UEIE_BTS_ERR_clear_mask                  0x7F


/*---------------------------------------#
| USTAT                            0x194 |
#----------------------------------------#
| - | - | - | ENDP1 | ENDP0 | IN | - | - |
#----------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2  | 1 | 0 |
#---------------------------------------*/

#define USTAT                                    0x0
#define USTAT_address                            0x194
#define USTAT_position                           0x0
#define USTAT_size                               0x8
#define USTAT_value_mask                         0xFF
#define USTAT_clear_mask                         0x0

#define IN                                       0x2
#define IN_address                               0x194
#define IN_position                              0x2
#define IN_size                                  0x1
#define IN_value_mask                            0x4
#define IN_clear_mask                            0xFB

#define ENDP                                     0x3
#define ENDP_address                             0x194
#define ENDP_position                            0x3
#define ENDP_size                                0x2
#define ENDP_value_mask                          0x18
#define ENDP_clear_mask                          0xE7

#define ENDP0                                    0x3
#define ENDP0_address                            0x194
#define ENDP0_position                           0x3
#define ENDP0_size                               0x1
#define ENDP0_value_mask                         0x8
#define ENDP0_clear_mask                         0xF7

#define ENDP1                                    0x4
#define ENDP1_address                            0x194
#define ENDP1_position                           0x4
#define ENDP1_size                               0x1
#define ENDP1_value_mask                         0x10
#define ENDP1_clear_mask                         0xEF


/*------------------------------------------------------#
| UCTRL                                           0x195 |
#-------------------------------------------------------#
| - | - | SE0 | PKT_DIS | DEV_ATT | RESUME | SUSPND | - |
#-------------------------------------------------------#
| 7 | 6 | 5   | 4       | 3       | 2      | 1      | 0 |
#------------------------------------------------------*/

#define UCTRL                                    0x0
#define UCTRL_address                            0x195
#define UCTRL_position                           0x0
#define UCTRL_size                               0x8
#define UCTRL_value_mask                         0xFF
#define UCTRL_clear_mask                         0x0

#define SUSPND                                   0x1
#define SUSPND_address                           0x195
#define SUSPND_position                          0x1
#define SUSPND_size                              0x1
#define SUSPND_value_mask                        0x2
#define SUSPND_clear_mask                        0xFD

#define RESUME                                   0x2
#define RESUME_address                           0x195
#define RESUME_position                          0x2
#define RESUME_size                              0x1
#define RESUME_value_mask                        0x4
#define RESUME_clear_mask                        0xFB

#define DEV_ATT                                  0x3
#define DEV_ATT_address                          0x195
#define DEV_ATT_position                         0x3
#define DEV_ATT_size                             0x1
#define DEV_ATT_value_mask                       0x8
#define DEV_ATT_clear_mask                       0xF7

#define PKT_DIS                                  0x4
#define PKT_DIS_address                          0x195
#define PKT_DIS_position                         0x4
#define PKT_DIS_size                             0x1
#define PKT_DIS_value_mask                       0x10
#define PKT_DIS_clear_mask                       0xEF

#define SE0                                      0x5
#define SE0_address                              0x195
#define SE0_position                             0x5
#define SE0_size                                 0x1
#define SE0_value_mask                           0x20
#define SE0_clear_mask                           0xDF


/*---------------------------------------------------------------------------------#
| UEP0                                                                       0x198 |
#----------------------------------------------------------------------------------#
| - | - | - | - | UEP0_EP_CTL_DIS | UEP0_EP_OUT_EN | UEP0_EP_IN_EN | UEP0_EP_STALL |
#----------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3               | 2              | 1             | 0             |
#---------------------------------------------------------------------------------*/

#define UEP0                                     0x0
#define UEP0_address                             0x198
#define UEP0_position                            0x0
#define UEP0_size                                0x8
#define UEP0_value_mask                          0xFF
#define UEP0_clear_mask                          0x0

#define UEP0_EP_STALL                            0x0
#define UEP0_EP_STALL_address                    0x198
#define UEP0_EP_STALL_position                   0x0
#define UEP0_EP_STALL_size                       0x1
#define UEP0_EP_STALL_value_mask                 0x1
#define UEP0_EP_STALL_clear_mask                 0xFE

#define UEP0_EP_IN_EN                            0x1
#define UEP0_EP_IN_EN_address                    0x198
#define UEP0_EP_IN_EN_position                   0x1
#define UEP0_EP_IN_EN_size                       0x1
#define UEP0_EP_IN_EN_value_mask                 0x2
#define UEP0_EP_IN_EN_clear_mask                 0xFD

#define UEP0_EP_OUT_EN                           0x2
#define UEP0_EP_OUT_EN_address                   0x198
#define UEP0_EP_OUT_EN_position                  0x2
#define UEP0_EP_OUT_EN_size                      0x1
#define UEP0_EP_OUT_EN_value_mask                0x4
#define UEP0_EP_OUT_EN_clear_mask                0xFB

#define UEP0_EP_CTL_DIS                          0x3
#define UEP0_EP_CTL_DIS_address                  0x198
#define UEP0_EP_CTL_DIS_position                 0x3
#define UEP0_EP_CTL_DIS_size                     0x1
#define UEP0_EP_CTL_DIS_value_mask               0x8
#define UEP0_EP_CTL_DIS_clear_mask               0xF7


/*---------------------------------------------------------------------------------#
| UEP1                                                                       0x199 |
#----------------------------------------------------------------------------------#
| - | - | - | - | UEP1_EP_CTL_DIS | UEP1_EP_OUT_EN | UEP1_EP_IN_EN | UEP1_EP_STALL |
#----------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3               | 2              | 1             | 0             |
#---------------------------------------------------------------------------------*/

#define UEP1                                     0x0
#define UEP1_address                             0x199
#define UEP1_position                            0x0
#define UEP1_size                                0x8
#define UEP1_value_mask                          0xFF
#define UEP1_clear_mask                          0x0

#define UEP1_EP_STALL                            0x0
#define UEP1_EP_STALL_address                    0x199
#define UEP1_EP_STALL_position                   0x0
#define UEP1_EP_STALL_size                       0x1
#define UEP1_EP_STALL_value_mask                 0x1
#define UEP1_EP_STALL_clear_mask                 0xFE

#define UEP1_EP_IN_EN                            0x1
#define UEP1_EP_IN_EN_address                    0x199
#define UEP1_EP_IN_EN_position                   0x1
#define UEP1_EP_IN_EN_size                       0x1
#define UEP1_EP_IN_EN_value_mask                 0x2
#define UEP1_EP_IN_EN_clear_mask                 0xFD

#define UEP1_EP_OUT_EN                           0x2
#define UEP1_EP_OUT_EN_address                   0x199
#define UEP1_EP_OUT_EN_position                  0x2
#define UEP1_EP_OUT_EN_size                      0x1
#define UEP1_EP_OUT_EN_value_mask                0x4
#define UEP1_EP_OUT_EN_clear_mask                0xFB

#define UEP1_EP_CTL_DIS                          0x3
#define UEP1_EP_CTL_DIS_address                  0x199
#define UEP1_EP_CTL_DIS_position                 0x3
#define UEP1_EP_CTL_DIS_size                     0x1
#define UEP1_EP_CTL_DIS_value_mask               0x8
#define UEP1_EP_CTL_DIS_clear_mask               0xF7


/*---------------------------------------------------------------------------------#
| UEP2                                                                       0x19A |
#----------------------------------------------------------------------------------#
| - | - | - | - | UEP2_EP_CTL_DIS | UEP2_EP_OUT_EN | UEP2_EP_IN_EN | UEP2_EP_STALL |
#----------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3               | 2              | 1             | 0             |
#---------------------------------------------------------------------------------*/

#define UEP2                                     0x0
#define UEP2_address                             0x19A
#define UEP2_position                            0x0
#define UEP2_size                                0x8
#define UEP2_value_mask                          0xFF
#define UEP2_clear_mask                          0x0

#define UEP2_EP_STALL                            0x0
#define UEP2_EP_STALL_address                    0x19A
#define UEP2_EP_STALL_position                   0x0
#define UEP2_EP_STALL_size                       0x1
#define UEP2_EP_STALL_value_mask                 0x1
#define UEP2_EP_STALL_clear_mask                 0xFE

#define UEP2_EP_IN_EN                            0x1
#define UEP2_EP_IN_EN_address                    0x19A
#define UEP2_EP_IN_EN_position                   0x1
#define UEP2_EP_IN_EN_size                       0x1
#define UEP2_EP_IN_EN_value_mask                 0x2
#define UEP2_EP_IN_EN_clear_mask                 0xFD

#define UEP2_EP_OUT_EN                           0x2
#define UEP2_EP_OUT_EN_address                   0x19A
#define UEP2_EP_OUT_EN_position                  0x2
#define UEP2_EP_OUT_EN_size                      0x1
#define UEP2_EP_OUT_EN_value_mask                0x4
#define UEP2_EP_OUT_EN_clear_mask                0xFB

#define UEP2_EP_CTL_DIS                          0x3
#define UEP2_EP_CTL_DIS_address                  0x19A
#define UEP2_EP_CTL_DIS_position                 0x3
#define UEP2_EP_CTL_DIS_size                     0x1
#define UEP2_EP_CTL_DIS_value_mask               0x8
#define UEP2_EP_CTL_DIS_clear_mask               0xF7


/*--------------------------------------------------------------------------------------------------#
| BD0OST                                                                                      0x1A0 |
#---------------------------------------------------------------------------------------------------#
| BD0OST_OWN | BD0OST_DATA0_1 | BD0OST_PID3 | BD0OST_PID2 | BD0OST_DTS | BD0OST_PID0_BSTALL | - | - |
#---------------------------------------------------------------------------------------------------#
| 7          | 6              | 5           | 4           | 3          | 2                  | 1 | 0 |
#--------------------------------------------------------------------------------------------------*/

#define BD0OST                                   0x0
#define BD0OST_address                           0x1A0
#define BD0OST_position                          0x0
#define BD0OST_size                              0x8
#define BD0OST_value_mask                        0xFF
#define BD0OST_clear_mask                        0x0

#define BD0OST_PID0                              0x2
#define BD0OST_PID0_address                      0x1A0
#define BD0OST_PID0_position                     0x2
#define BD0OST_PID0_size                         0x1
#define BD0OST_PID0_value_mask                   0x4
#define BD0OST_PID0_clear_mask                   0xFB

#define BD0OST_PID0_BSTALL                       0x2
#define BD0OST_PID0_BSTALL_address               0x1A0
#define BD0OST_PID0_BSTALL_position              0x2
#define BD0OST_PID0_BSTALL_size                  0x1
#define BD0OST_PID0_BSTALL_value_mask            0x4
#define BD0OST_PID0_BSTALL_clear_mask            0xFB

#define BD0OST_BSTALL                            0x2
#define BD0OST_BSTALL_address                    0x1A0
#define BD0OST_BSTALL_position                   0x2
#define BD0OST_BSTALL_size                       0x1
#define BD0OST_BSTALL_value_mask                 0x4
#define BD0OST_BSTALL_clear_mask                 0xFB

#define BD0OST_DTS                               0x3
#define BD0OST_DTS_address                       0x1A0
#define BD0OST_DTS_position                      0x3
#define BD0OST_DTS_size                          0x1
#define BD0OST_DTS_value_mask                    0x8
#define BD0OST_DTS_clear_mask                    0xF7

#define BD0OST_PID1                              0x3
#define BD0OST_PID1_address                      0x1A0
#define BD0OST_PID1_position                     0x3
#define BD0OST_PID1_size                         0x1
#define BD0OST_PID1_value_mask                   0x8
#define BD0OST_PID1_clear_mask                   0xF7

#define BD0OST_PID1_DTS                          0x3
#define BD0OST_PID1_DTS_address                  0x1A0
#define BD0OST_PID1_DTS_position                 0x3
#define BD0OST_PID1_DTS_size                     0x1
#define BD0OST_PID1_DTS_value_mask               0x8
#define BD0OST_PID1_DTS_clear_mask               0xF7

#define BD0OST_PID2                              0x4
#define BD0OST_PID2_address                      0x1A0
#define BD0OST_PID2_position                     0x4
#define BD0OST_PID2_size                         0x1
#define BD0OST_PID2_value_mask                   0x10
#define BD0OST_PID2_clear_mask                   0xEF

#define BD0OST_PID3                              0x5
#define BD0OST_PID3_address                      0x1A0
#define BD0OST_PID3_position                     0x5
#define BD0OST_PID3_size                         0x1
#define BD0OST_PID3_value_mask                   0x20
#define BD0OST_PID3_clear_mask                   0xDF

#define BD0OST_DATA0_1                           0x6
#define BD0OST_DATA0_1_address                   0x1A0
#define BD0OST_DATA0_1_position                  0x6
#define BD0OST_DATA0_1_size                      0x1
#define BD0OST_DATA0_1_value_mask                0x40
#define BD0OST_DATA0_1_clear_mask                0xBF

#define BD0OST_DATA01                            0x6
#define BD0OST_DATA01_address                    0x1A0
#define BD0OST_DATA01_position                   0x6
#define BD0OST_DATA01_size                       0x1
#define BD0OST_DATA01_value_mask                 0x40
#define BD0OST_DATA01_clear_mask                 0xBF

#define BD0OST_UOWN                              0x7
#define BD0OST_UOWN_address                      0x1A0
#define BD0OST_UOWN_position                     0x7
#define BD0OST_UOWN_size                         0x1
#define BD0OST_UOWN_value_mask                   0x80
#define BD0OST_UOWN_clear_mask                   0x7F

#define BD0OST_OWN                               0x7
#define BD0OST_OWN_address                       0x1A0
#define BD0OST_OWN_position                      0x7
#define BD0OST_OWN_size                          0x1
#define BD0OST_OWN_value_mask                    0x80
#define BD0OST_OWN_clear_mask                    0x7F


/*------------------------------------------------------------------#
| BD0OBC                                                      0x1A1 |
#-------------------------------------------------------------------#
| - | - | - | - | BD0OBC_BC3 | BD0OBC_BC2 | BD0OBC_BC1 | BD0OBC_BC0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3          | 2          | 1          | 0          |
#------------------------------------------------------------------*/

#define BD0OBC                                   0x0
#define BD0OBC_address                           0x1A1
#define BD0OBC_position                          0x0
#define BD0OBC_size                              0x8
#define BD0OBC_value_mask                        0xFF
#define BD0OBC_clear_mask                        0x0

#define BD0OBC_BC                                0x0
#define BD0OBC_BC_address                        0x1A1
#define BD0OBC_BC_position                       0x0
#define BD0OBC_BC_size                           0x4
#define BD0OBC_BC_value_mask                     0xF
#define BD0OBC_BC_clear_mask                     0xF0

#define BD0OBC_BC0                               0x0
#define BD0OBC_BC0_address                       0x1A1
#define BD0OBC_BC0_position                      0x0
#define BD0OBC_BC0_size                          0x1
#define BD0OBC_BC0_value_mask                    0x1
#define BD0OBC_BC0_clear_mask                    0xFE

#define BD0OBC_BC1                               0x1
#define BD0OBC_BC1_address                       0x1A1
#define BD0OBC_BC1_position                      0x1
#define BD0OBC_BC1_size                          0x1
#define BD0OBC_BC1_value_mask                    0x2
#define BD0OBC_BC1_clear_mask                    0xFD

#define BD0OBC_BC2                               0x2
#define BD0OBC_BC2_address                       0x1A1
#define BD0OBC_BC2_position                      0x2
#define BD0OBC_BC2_size                          0x1
#define BD0OBC_BC2_value_mask                    0x4
#define BD0OBC_BC2_clear_mask                    0xFB

#define BD0OBC_BC3                               0x3
#define BD0OBC_BC3_address                       0x1A1
#define BD0OBC_BC3_position                      0x3
#define BD0OBC_BC3_size                          0x1
#define BD0OBC_BC3_value_mask                    0x8
#define BD0OBC_BC3_clear_mask                    0xF7


/*---------------------------------------------------------------------------------------------#
| BD0IST                                                                                 0x1A4 |
#----------------------------------------------------------------------------------------------#
| BD0IST_UOWN | BD0IST_DATA01 | BD0IST_PID3 | BD0IST_PID2 | BD0IST_DTS | BD0IST_BSTALL | - | - |
#----------------------------------------------------------------------------------------------#
| 7           | 6             | 5           | 4           | 3          | 2             | 1 | 0 |
#---------------------------------------------------------------------------------------------*/

#define BD0IST                                   0x0
#define BD0IST_address                           0x1A4
#define BD0IST_position                          0x0
#define BD0IST_size                              0x8
#define BD0IST_value_mask                        0xFF
#define BD0IST_clear_mask                        0x0

#define BD0IST_BSTALL                            0x2
#define BD0IST_BSTALL_address                    0x1A4
#define BD0IST_BSTALL_position                   0x2
#define BD0IST_BSTALL_size                       0x1
#define BD0IST_BSTALL_value_mask                 0x4
#define BD0IST_BSTALL_clear_mask                 0xFB

#define BD0IST_PID0_BSTALL                       0x2
#define BD0IST_PID0_BSTALL_address               0x1A4
#define BD0IST_PID0_BSTALL_position              0x2
#define BD0IST_PID0_BSTALL_size                  0x1
#define BD0IST_PID0_BSTALL_value_mask            0x4
#define BD0IST_PID0_BSTALL_clear_mask            0xFB

#define BD0IST_PID0                              0x2
#define BD0IST_PID0_address                      0x1A4
#define BD0IST_PID0_position                     0x2
#define BD0IST_PID0_size                         0x1
#define BD0IST_PID0_value_mask                   0x4
#define BD0IST_PID0_clear_mask                   0xFB

#define BD0IST_DTS                               0x3
#define BD0IST_DTS_address                       0x1A4
#define BD0IST_DTS_position                      0x3
#define BD0IST_DTS_size                          0x1
#define BD0IST_DTS_value_mask                    0x8
#define BD0IST_DTS_clear_mask                    0xF7

#define BD0IST_PID1_DTS                          0x3
#define BD0IST_PID1_DTS_address                  0x1A4
#define BD0IST_PID1_DTS_position                 0x3
#define BD0IST_PID1_DTS_size                     0x1
#define BD0IST_PID1_DTS_value_mask               0x8
#define BD0IST_PID1_DTS_clear_mask               0xF7

#define BD0IST_PID1                              0x3
#define BD0IST_PID1_address                      0x1A4
#define BD0IST_PID1_position                     0x3
#define BD0IST_PID1_size                         0x1
#define BD0IST_PID1_value_mask                   0x8
#define BD0IST_PID1_clear_mask                   0xF7

#define BD0IST_PID2                              0x4
#define BD0IST_PID2_address                      0x1A4
#define BD0IST_PID2_position                     0x4
#define BD0IST_PID2_size                         0x1
#define BD0IST_PID2_value_mask                   0x10
#define BD0IST_PID2_clear_mask                   0xEF

#define BD0IST_PID3                              0x5
#define BD0IST_PID3_address                      0x1A4
#define BD0IST_PID3_position                     0x5
#define BD0IST_PID3_size                         0x1
#define BD0IST_PID3_value_mask                   0x20
#define BD0IST_PID3_clear_mask                   0xDF

#define BD0IST_DATA01                            0x6
#define BD0IST_DATA01_address                    0x1A4
#define BD0IST_DATA01_position                   0x6
#define BD0IST_DATA01_size                       0x1
#define BD0IST_DATA01_value_mask                 0x40
#define BD0IST_DATA01_clear_mask                 0xBF

#define BD0IST_DATA0_1                           0x6
#define BD0IST_DATA0_1_address                   0x1A4
#define BD0IST_DATA0_1_position                  0x6
#define BD0IST_DATA0_1_size                      0x1
#define BD0IST_DATA0_1_value_mask                0x40
#define BD0IST_DATA0_1_clear_mask                0xBF

#define BD0IST_UOWN                              0x7
#define BD0IST_UOWN_address                      0x1A4
#define BD0IST_UOWN_position                     0x7
#define BD0IST_UOWN_size                         0x1
#define BD0IST_UOWN_value_mask                   0x80
#define BD0IST_UOWN_clear_mask                   0x7F

#define BD0IST_OWN                               0x7
#define BD0IST_OWN_address                       0x1A4
#define BD0IST_OWN_position                      0x7
#define BD0IST_OWN_size                          0x1
#define BD0IST_OWN_value_mask                    0x80
#define BD0IST_OWN_clear_mask                    0x7F


/*------------------------------------------------------------------#
| BD0IBC                                                      0x1A5 |
#-------------------------------------------------------------------#
| - | - | - | - | BD0IBC_BC3 | BD0IBC_BC2 | BD0IBC_BC1 | BD0IBC_BC0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3          | 2          | 1          | 0          |
#------------------------------------------------------------------*/

#define BD0IBC                                   0x0
#define BD0IBC_address                           0x1A5
#define BD0IBC_position                          0x0
#define BD0IBC_size                              0x8
#define BD0IBC_value_mask                        0xFF
#define BD0IBC_clear_mask                        0x0

#define BD0IBC_BC                                0x0
#define BD0IBC_BC_address                        0x1A5
#define BD0IBC_BC_position                       0x0
#define BD0IBC_BC_size                           0x4
#define BD0IBC_BC_value_mask                     0xF
#define BD0IBC_BC_clear_mask                     0xF0

#define BD0IBC_BC0                               0x0
#define BD0IBC_BC0_address                       0x1A5
#define BD0IBC_BC0_position                      0x0
#define BD0IBC_BC0_size                          0x1
#define BD0IBC_BC0_value_mask                    0x1
#define BD0IBC_BC0_clear_mask                    0xFE

#define BD0IBC_BC1                               0x1
#define BD0IBC_BC1_address                       0x1A5
#define BD0IBC_BC1_position                      0x1
#define BD0IBC_BC1_size                          0x1
#define BD0IBC_BC1_value_mask                    0x2
#define BD0IBC_BC1_clear_mask                    0xFD

#define BD0IBC_BC2                               0x2
#define BD0IBC_BC2_address                       0x1A5
#define BD0IBC_BC2_position                      0x2
#define BD0IBC_BC2_size                          0x1
#define BD0IBC_BC2_value_mask                    0x4
#define BD0IBC_BC2_clear_mask                    0xFB

#define BD0IBC_BC3                               0x3
#define BD0IBC_BC3_address                       0x1A5
#define BD0IBC_BC3_position                      0x3
#define BD0IBC_BC3_size                          0x1
#define BD0IBC_BC3_value_mask                    0x8
#define BD0IBC_BC3_clear_mask                    0xF7


/*---------------------------------------------------------------------------------------------#
| BD1OST                                                                                 0x1A8 |
#----------------------------------------------------------------------------------------------#
| BD1OST_UOWN | BD1OST_DATA0_1 | BD1OST_PID3 | BD1OST_PID2 | BD1OST_PID1 | BD1OST_PID0 | - | - |
#----------------------------------------------------------------------------------------------#
| 7           | 6              | 5           | 4           | 3           | 2           | 1 | 0 |
#---------------------------------------------------------------------------------------------*/

#define BD1OST                                   0x0
#define BD1OST_address                           0x1A8
#define BD1OST_position                          0x0
#define BD1OST_size                              0x8
#define BD1OST_value_mask                        0xFF
#define BD1OST_clear_mask                        0x0

#define BD1OST_BSTALL                            0x2
#define BD1OST_BSTALL_address                    0x1A8
#define BD1OST_BSTALL_position                   0x2
#define BD1OST_BSTALL_size                       0x1
#define BD1OST_BSTALL_value_mask                 0x4
#define BD1OST_BSTALL_clear_mask                 0xFB

#define BD1OST_PID0_BSTALL                       0x2
#define BD1OST_PID0_BSTALL_address               0x1A8
#define BD1OST_PID0_BSTALL_position              0x2
#define BD1OST_PID0_BSTALL_size                  0x1
#define BD1OST_PID0_BSTALL_value_mask            0x4
#define BD1OST_PID0_BSTALL_clear_mask            0xFB

#define BD1OST_PID0                              0x2
#define BD1OST_PID0_address                      0x1A8
#define BD1OST_PID0_position                     0x2
#define BD1OST_PID0_size                         0x1
#define BD1OST_PID0_value_mask                   0x4
#define BD1OST_PID0_clear_mask                   0xFB

#define BD1OST_PID1                              0x3
#define BD1OST_PID1_address                      0x1A8
#define BD1OST_PID1_position                     0x3
#define BD1OST_PID1_size                         0x1
#define BD1OST_PID1_value_mask                   0x8
#define BD1OST_PID1_clear_mask                   0xF7

#define BD1OST_DTS                               0x3
#define BD1OST_DTS_address                       0x1A8
#define BD1OST_DTS_position                      0x3
#define BD1OST_DTS_size                          0x1
#define BD1OST_DTS_value_mask                    0x8
#define BD1OST_DTS_clear_mask                    0xF7

#define BD1OST_PID1_DTS                          0x3
#define BD1OST_PID1_DTS_address                  0x1A8
#define BD1OST_PID1_DTS_position                 0x3
#define BD1OST_PID1_DTS_size                     0x1
#define BD1OST_PID1_DTS_value_mask               0x8
#define BD1OST_PID1_DTS_clear_mask               0xF7

#define BD1OST_PID2                              0x4
#define BD1OST_PID2_address                      0x1A8
#define BD1OST_PID2_position                     0x4
#define BD1OST_PID2_size                         0x1
#define BD1OST_PID2_value_mask                   0x10
#define BD1OST_PID2_clear_mask                   0xEF

#define BD1OST_PID3                              0x5
#define BD1OST_PID3_address                      0x1A8
#define BD1OST_PID3_position                     0x5
#define BD1OST_PID3_size                         0x1
#define BD1OST_PID3_value_mask                   0x20
#define BD1OST_PID3_clear_mask                   0xDF

#define BD1OST_DATA0_1                           0x6
#define BD1OST_DATA0_1_address                   0x1A8
#define BD1OST_DATA0_1_position                  0x6
#define BD1OST_DATA0_1_size                      0x1
#define BD1OST_DATA0_1_value_mask                0x40
#define BD1OST_DATA0_1_clear_mask                0xBF

#define BD1OST_DATA01                            0x6
#define BD1OST_DATA01_address                    0x1A8
#define BD1OST_DATA01_position                   0x6
#define BD1OST_DATA01_size                       0x1
#define BD1OST_DATA01_value_mask                 0x40
#define BD1OST_DATA01_clear_mask                 0xBF

#define BD1OST_OWN                               0x7
#define BD1OST_OWN_address                       0x1A8
#define BD1OST_OWN_position                      0x7
#define BD1OST_OWN_size                          0x1
#define BD1OST_OWN_value_mask                    0x80
#define BD1OST_OWN_clear_mask                    0x7F

#define BD1OST_UOWN                              0x7
#define BD1OST_UOWN_address                      0x1A8
#define BD1OST_UOWN_position                     0x7
#define BD1OST_UOWN_size                         0x1
#define BD1OST_UOWN_value_mask                   0x80
#define BD1OST_UOWN_clear_mask                   0x7F


/*------------------------------------------------------------------#
| BD1OBC                                                      0x1A9 |
#-------------------------------------------------------------------#
| - | - | - | - | BD1OBC_BC3 | BD1OBC_BC2 | BD1OBC_BC1 | BD1OBC_BC0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3          | 2          | 1          | 0          |
#------------------------------------------------------------------*/

#define BD1OBC                                   0x0
#define BD1OBC_address                           0x1A9
#define BD1OBC_position                          0x0
#define BD1OBC_size                              0x8
#define BD1OBC_value_mask                        0xFF
#define BD1OBC_clear_mask                        0x0

#define BD1OBC_BC                                0x0
#define BD1OBC_BC_address                        0x1A9
#define BD1OBC_BC_position                       0x0
#define BD1OBC_BC_size                           0x4
#define BD1OBC_BC_value_mask                     0xF
#define BD1OBC_BC_clear_mask                     0xF0

#define BD1OBC_BC0                               0x0
#define BD1OBC_BC0_address                       0x1A9
#define BD1OBC_BC0_position                      0x0
#define BD1OBC_BC0_size                          0x1
#define BD1OBC_BC0_value_mask                    0x1
#define BD1OBC_BC0_clear_mask                    0xFE

#define BD1OBC_BC1                               0x1
#define BD1OBC_BC1_address                       0x1A9
#define BD1OBC_BC1_position                      0x1
#define BD1OBC_BC1_size                          0x1
#define BD1OBC_BC1_value_mask                    0x2
#define BD1OBC_BC1_clear_mask                    0xFD

#define BD1OBC_BC2                               0x2
#define BD1OBC_BC2_address                       0x1A9
#define BD1OBC_BC2_position                      0x2
#define BD1OBC_BC2_size                          0x1
#define BD1OBC_BC2_value_mask                    0x4
#define BD1OBC_BC2_clear_mask                    0xFB

#define BD1OBC_BC3                               0x3
#define BD1OBC_BC3_address                       0x1A9
#define BD1OBC_BC3_position                      0x3
#define BD1OBC_BC3_size                          0x1
#define BD1OBC_BC3_value_mask                    0x8
#define BD1OBC_BC3_clear_mask                    0xF7


/*-------------------------------------------------------------------------------------------------#
| BD1IST                                                                                     0x1AC |
#--------------------------------------------------------------------------------------------------#
| BD1IST_OWN | BD1IST_DATA01 | BD1IST_PID3 | BD1IST_PID2 | BD1IST_PID1_DTS | BD1IST_BSTALL | - | - |
#--------------------------------------------------------------------------------------------------#
| 7          | 6             | 5           | 4           | 3               | 2             | 1 | 0 |
#-------------------------------------------------------------------------------------------------*/

#define BD1IST                                   0x0
#define BD1IST_address                           0x1AC
#define BD1IST_position                          0x0
#define BD1IST_size                              0x8
#define BD1IST_value_mask                        0xFF
#define BD1IST_clear_mask                        0x0

#define BD1IST_BSTALL                            0x2
#define BD1IST_BSTALL_address                    0x1AC
#define BD1IST_BSTALL_position                   0x2
#define BD1IST_BSTALL_size                       0x1
#define BD1IST_BSTALL_value_mask                 0x4
#define BD1IST_BSTALL_clear_mask                 0xFB

#define BD1IST_PID0                              0x2
#define BD1IST_PID0_address                      0x1AC
#define BD1IST_PID0_position                     0x2
#define BD1IST_PID0_size                         0x1
#define BD1IST_PID0_value_mask                   0x4
#define BD1IST_PID0_clear_mask                   0xFB

#define BD1IST_PID0_BSTALL                       0x2
#define BD1IST_PID0_BSTALL_address               0x1AC
#define BD1IST_PID0_BSTALL_position              0x2
#define BD1IST_PID0_BSTALL_size                  0x1
#define BD1IST_PID0_BSTALL_value_mask            0x4
#define BD1IST_PID0_BSTALL_clear_mask            0xFB

#define BD1IST_PID1_DTS                          0x3
#define BD1IST_PID1_DTS_address                  0x1AC
#define BD1IST_PID1_DTS_position                 0x3
#define BD1IST_PID1_DTS_size                     0x1
#define BD1IST_PID1_DTS_value_mask               0x8
#define BD1IST_PID1_DTS_clear_mask               0xF7

#define BD1IST_DTS                               0x3
#define BD1IST_DTS_address                       0x1AC
#define BD1IST_DTS_position                      0x3
#define BD1IST_DTS_size                          0x1
#define BD1IST_DTS_value_mask                    0x8
#define BD1IST_DTS_clear_mask                    0xF7

#define BD1IST_PID1                              0x3
#define BD1IST_PID1_address                      0x1AC
#define BD1IST_PID1_position                     0x3
#define BD1IST_PID1_size                         0x1
#define BD1IST_PID1_value_mask                   0x8
#define BD1IST_PID1_clear_mask                   0xF7

#define BD1IST_PID2                              0x4
#define BD1IST_PID2_address                      0x1AC
#define BD1IST_PID2_position                     0x4
#define BD1IST_PID2_size                         0x1
#define BD1IST_PID2_value_mask                   0x10
#define BD1IST_PID2_clear_mask                   0xEF

#define BD1IST_PID3                              0x5
#define BD1IST_PID3_address                      0x1AC
#define BD1IST_PID3_position                     0x5
#define BD1IST_PID3_size                         0x1
#define BD1IST_PID3_value_mask                   0x20
#define BD1IST_PID3_clear_mask                   0xDF

#define BD1IST_DATA01                            0x6
#define BD1IST_DATA01_address                    0x1AC
#define BD1IST_DATA01_position                   0x6
#define BD1IST_DATA01_size                       0x1
#define BD1IST_DATA01_value_mask                 0x40
#define BD1IST_DATA01_clear_mask                 0xBF

#define BD1IST_DATA0_1                           0x6
#define BD1IST_DATA0_1_address                   0x1AC
#define BD1IST_DATA0_1_position                  0x6
#define BD1IST_DATA0_1_size                      0x1
#define BD1IST_DATA0_1_value_mask                0x40
#define BD1IST_DATA0_1_clear_mask                0xBF

#define BD1IST_OWN                               0x7
#define BD1IST_OWN_address                       0x1AC
#define BD1IST_OWN_position                      0x7
#define BD1IST_OWN_size                          0x1
#define BD1IST_OWN_value_mask                    0x80
#define BD1IST_OWN_clear_mask                    0x7F

#define BD1IST_UOWN                              0x7
#define BD1IST_UOWN_address                      0x1AC
#define BD1IST_UOWN_position                     0x7
#define BD1IST_UOWN_size                         0x1
#define BD1IST_UOWN_value_mask                   0x80
#define BD1IST_UOWN_clear_mask                   0x7F


/*------------------------------------------------------------------#
| BD1IBC                                                      0x1AD |
#-------------------------------------------------------------------#
| - | - | - | - | BD1IBC_BC3 | BD1IBC_BC2 | BD1IBC_BC1 | BD1IBC_BC0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3          | 2          | 1          | 0          |
#------------------------------------------------------------------*/

#define BD1IBC                                   0x0
#define BD1IBC_address                           0x1AD
#define BD1IBC_position                          0x0
#define BD1IBC_size                              0x8
#define BD1IBC_value_mask                        0xFF
#define BD1IBC_clear_mask                        0x0

#define BD1IBC_BC0                               0x0
#define BD1IBC_BC0_address                       0x1AD
#define BD1IBC_BC0_position                      0x0
#define BD1IBC_BC0_size                          0x1
#define BD1IBC_BC0_value_mask                    0x1
#define BD1IBC_BC0_clear_mask                    0xFE

#define BD1IBC_BC                                0x0
#define BD1IBC_BC_address                        0x1AD
#define BD1IBC_BC_position                       0x0
#define BD1IBC_BC_size                           0x4
#define BD1IBC_BC_value_mask                     0xF
#define BD1IBC_BC_clear_mask                     0xF0

#define BD1IBC_BC1                               0x1
#define BD1IBC_BC1_address                       0x1AD
#define BD1IBC_BC1_position                      0x1
#define BD1IBC_BC1_size                          0x1
#define BD1IBC_BC1_value_mask                    0x2
#define BD1IBC_BC1_clear_mask                    0xFD

#define BD1IBC_BC2                               0x2
#define BD1IBC_BC2_address                       0x1AD
#define BD1IBC_BC2_position                      0x2
#define BD1IBC_BC2_size                          0x1
#define BD1IBC_BC2_value_mask                    0x4
#define BD1IBC_BC2_clear_mask                    0xFB

#define BD1IBC_BC3                               0x3
#define BD1IBC_BC3_address                       0x1AD
#define BD1IBC_BC3_position                      0x3
#define BD1IBC_BC3_size                          0x1
#define BD1IBC_BC3_value_mask                    0x8
#define BD1IBC_BC3_clear_mask                    0xF7


/*---------------------------------------------------------------------------------------------#
| BD2OST                                                                                 0x1B0 |
#----------------------------------------------------------------------------------------------#
| BD2OST_OWN | BD2OST_DATA01 | BD2OST_PID3 | BD2OST_PID2 | BD2OST_PID1 | BD2OST_BSTALL | - | - |
#----------------------------------------------------------------------------------------------#
| 7          | 6             | 5           | 4           | 3           | 2             | 1 | 0 |
#---------------------------------------------------------------------------------------------*/

#define BD2OST                                   0x0
#define BD2OST_address                           0x1B0
#define BD2OST_position                          0x0
#define BD2OST_size                              0x8
#define BD2OST_value_mask                        0xFF
#define BD2OST_clear_mask                        0x0

#define BD2OST_BSTALL                            0x2
#define BD2OST_BSTALL_address                    0x1B0
#define BD2OST_BSTALL_position                   0x2
#define BD2OST_BSTALL_size                       0x1
#define BD2OST_BSTALL_value_mask                 0x4
#define BD2OST_BSTALL_clear_mask                 0xFB

#define BD2OST_PID0_BSTALL                       0x2
#define BD2OST_PID0_BSTALL_address               0x1B0
#define BD2OST_PID0_BSTALL_position              0x2
#define BD2OST_PID0_BSTALL_size                  0x1
#define BD2OST_PID0_BSTALL_value_mask            0x4
#define BD2OST_PID0_BSTALL_clear_mask            0xFB

#define BD2OST_PID0                              0x2
#define BD2OST_PID0_address                      0x1B0
#define BD2OST_PID0_position                     0x2
#define BD2OST_PID0_size                         0x1
#define BD2OST_PID0_value_mask                   0x4
#define BD2OST_PID0_clear_mask                   0xFB

#define BD2OST_PID1_DTS                          0x3
#define BD2OST_PID1_DTS_address                  0x1B0
#define BD2OST_PID1_DTS_position                 0x3
#define BD2OST_PID1_DTS_size                     0x1
#define BD2OST_PID1_DTS_value_mask               0x8
#define BD2OST_PID1_DTS_clear_mask               0xF7

#define BD2OST_PID1                              0x3
#define BD2OST_PID1_address                      0x1B0
#define BD2OST_PID1_position                     0x3
#define BD2OST_PID1_size                         0x1
#define BD2OST_PID1_value_mask                   0x8
#define BD2OST_PID1_clear_mask                   0xF7

#define BD2OST_DTS                               0x3
#define BD2OST_DTS_address                       0x1B0
#define BD2OST_DTS_position                      0x3
#define BD2OST_DTS_size                          0x1
#define BD2OST_DTS_value_mask                    0x8
#define BD2OST_DTS_clear_mask                    0xF7

#define BD2OST_PID2                              0x4
#define BD2OST_PID2_address                      0x1B0
#define BD2OST_PID2_position                     0x4
#define BD2OST_PID2_size                         0x1
#define BD2OST_PID2_value_mask                   0x10
#define BD2OST_PID2_clear_mask                   0xEF

#define BD2OST_PID3                              0x5
#define BD2OST_PID3_address                      0x1B0
#define BD2OST_PID3_position                     0x5
#define BD2OST_PID3_size                         0x1
#define BD2OST_PID3_value_mask                   0x20
#define BD2OST_PID3_clear_mask                   0xDF

#define BD2OST_DATA01                            0x6
#define BD2OST_DATA01_address                    0x1B0
#define BD2OST_DATA01_position                   0x6
#define BD2OST_DATA01_size                       0x1
#define BD2OST_DATA01_value_mask                 0x40
#define BD2OST_DATA01_clear_mask                 0xBF

#define BD2OST_DATA0_1                           0x6
#define BD2OST_DATA0_1_address                   0x1B0
#define BD2OST_DATA0_1_position                  0x6
#define BD2OST_DATA0_1_size                      0x1
#define BD2OST_DATA0_1_value_mask                0x40
#define BD2OST_DATA0_1_clear_mask                0xBF

#define BD2OST_OWN                               0x7
#define BD2OST_OWN_address                       0x1B0
#define BD2OST_OWN_position                      0x7
#define BD2OST_OWN_size                          0x1
#define BD2OST_OWN_value_mask                    0x80
#define BD2OST_OWN_clear_mask                    0x7F

#define BD2OST_UOWN                              0x7
#define BD2OST_UOWN_address                      0x1B0
#define BD2OST_UOWN_position                     0x7
#define BD2OST_UOWN_size                         0x1
#define BD2OST_UOWN_value_mask                   0x80
#define BD2OST_UOWN_clear_mask                   0x7F


/*------------------------------------------------------------------#
| BD2OBC                                                      0x1B1 |
#-------------------------------------------------------------------#
| - | - | - | - | BD2OBC_BC3 | BD2OBC_BC2 | BD2OBC_BC1 | BD2OBC_BC0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3          | 2          | 1          | 0          |
#------------------------------------------------------------------*/

#define BD2OBC                                   0x0
#define BD2OBC_address                           0x1B1
#define BD2OBC_position                          0x0
#define BD2OBC_size                              0x8
#define BD2OBC_value_mask                        0xFF
#define BD2OBC_clear_mask                        0x0

#define BD2OBC_BC0                               0x0
#define BD2OBC_BC0_address                       0x1B1
#define BD2OBC_BC0_position                      0x0
#define BD2OBC_BC0_size                          0x1
#define BD2OBC_BC0_value_mask                    0x1
#define BD2OBC_BC0_clear_mask                    0xFE

#define BD2OBC_BC                                0x0
#define BD2OBC_BC_address                        0x1B1
#define BD2OBC_BC_position                       0x0
#define BD2OBC_BC_size                           0x4
#define BD2OBC_BC_value_mask                     0xF
#define BD2OBC_BC_clear_mask                     0xF0

#define BD2OBC_BC1                               0x1
#define BD2OBC_BC1_address                       0x1B1
#define BD2OBC_BC1_position                      0x1
#define BD2OBC_BC1_size                          0x1
#define BD2OBC_BC1_value_mask                    0x2
#define BD2OBC_BC1_clear_mask                    0xFD

#define BD2OBC_BC2                               0x2
#define BD2OBC_BC2_address                       0x1B1
#define BD2OBC_BC2_position                      0x2
#define BD2OBC_BC2_size                          0x1
#define BD2OBC_BC2_value_mask                    0x4
#define BD2OBC_BC2_clear_mask                    0xFB

#define BD2OBC_BC3                               0x3
#define BD2OBC_BC3_address                       0x1B1
#define BD2OBC_BC3_position                      0x3
#define BD2OBC_BC3_size                          0x1
#define BD2OBC_BC3_value_mask                    0x8
#define BD2OBC_BC3_clear_mask                    0xF7


/*---------------------------------------------------------------------------------------------#
| BD2IST                                                                                 0x1B4 |
#----------------------------------------------------------------------------------------------#
| BD2IST_UOWN | BD2IST_DATA0_1 | BD2IST_PID3 | BD2IST_PID2 | BD2IST_PID1 | BD2IST_PID0 | - | - |
#----------------------------------------------------------------------------------------------#
| 7           | 6              | 5           | 4           | 3           | 2           | 1 | 0 |
#---------------------------------------------------------------------------------------------*/

#define BD2IST                                   0x0
#define BD2IST_address                           0x1B4
#define BD2IST_position                          0x0
#define BD2IST_size                              0x8
#define BD2IST_value_mask                        0xFF
#define BD2IST_clear_mask                        0x0

#define BD2IST_BSTALL                            0x2
#define BD2IST_BSTALL_address                    0x1B4
#define BD2IST_BSTALL_position                   0x2
#define BD2IST_BSTALL_size                       0x1
#define BD2IST_BSTALL_value_mask                 0x4
#define BD2IST_BSTALL_clear_mask                 0xFB

#define BD2IST_PID0_BSTALL                       0x2
#define BD2IST_PID0_BSTALL_address               0x1B4
#define BD2IST_PID0_BSTALL_position              0x2
#define BD2IST_PID0_BSTALL_size                  0x1
#define BD2IST_PID0_BSTALL_value_mask            0x4
#define BD2IST_PID0_BSTALL_clear_mask            0xFB

#define BD2IST_PID0                              0x2
#define BD2IST_PID0_address                      0x1B4
#define BD2IST_PID0_position                     0x2
#define BD2IST_PID0_size                         0x1
#define BD2IST_PID0_value_mask                   0x4
#define BD2IST_PID0_clear_mask                   0xFB

#define BD2IST_PID1                              0x3
#define BD2IST_PID1_address                      0x1B4
#define BD2IST_PID1_position                     0x3
#define BD2IST_PID1_size                         0x1
#define BD2IST_PID1_value_mask                   0x8
#define BD2IST_PID1_clear_mask                   0xF7

#define BD2IST_DTS                               0x3
#define BD2IST_DTS_address                       0x1B4
#define BD2IST_DTS_position                      0x3
#define BD2IST_DTS_size                          0x1
#define BD2IST_DTS_value_mask                    0x8
#define BD2IST_DTS_clear_mask                    0xF7

#define BD2IST_PID1_DTS                          0x3
#define BD2IST_PID1_DTS_address                  0x1B4
#define BD2IST_PID1_DTS_position                 0x3
#define BD2IST_PID1_DTS_size                     0x1
#define BD2IST_PID1_DTS_value_mask               0x8
#define BD2IST_PID1_DTS_clear_mask               0xF7

#define BD2IST_PID2                              0x4
#define BD2IST_PID2_address                      0x1B4
#define BD2IST_PID2_position                     0x4
#define BD2IST_PID2_size                         0x1
#define BD2IST_PID2_value_mask                   0x10
#define BD2IST_PID2_clear_mask                   0xEF

#define BD2IST_PID3                              0x5
#define BD2IST_PID3_address                      0x1B4
#define BD2IST_PID3_position                     0x5
#define BD2IST_PID3_size                         0x1
#define BD2IST_PID3_value_mask                   0x20
#define BD2IST_PID3_clear_mask                   0xDF

#define BD2IST_DATA0_1                           0x6
#define BD2IST_DATA0_1_address                   0x1B4
#define BD2IST_DATA0_1_position                  0x6
#define BD2IST_DATA0_1_size                      0x1
#define BD2IST_DATA0_1_value_mask                0x40
#define BD2IST_DATA0_1_clear_mask                0xBF

#define BD2IST_DATA01                            0x6
#define BD2IST_DATA01_address                    0x1B4
#define BD2IST_DATA01_position                   0x6
#define BD2IST_DATA01_size                       0x1
#define BD2IST_DATA01_value_mask                 0x40
#define BD2IST_DATA01_clear_mask                 0xBF

#define BD2IST_UOWN                              0x7
#define BD2IST_UOWN_address                      0x1B4
#define BD2IST_UOWN_position                     0x7
#define BD2IST_UOWN_size                         0x1
#define BD2IST_UOWN_value_mask                   0x80
#define BD2IST_UOWN_clear_mask                   0x7F

#define BD2IST_OWN                               0x7
#define BD2IST_OWN_address                       0x1B4
#define BD2IST_OWN_position                      0x7
#define BD2IST_OWN_size                          0x1
#define BD2IST_OWN_value_mask                    0x80
#define BD2IST_OWN_clear_mask                    0x7F


/*------------------------------------------------------------------#
| BD2IBC                                                      0x1B5 |
#-------------------------------------------------------------------#
| - | - | - | - | BD2IBC_BC3 | BD2IBC_BC2 | BD2IBC_BC1 | BD2IBC_BC0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3          | 2          | 1          | 0          |
#------------------------------------------------------------------*/

#define BD2IBC                                   0x0
#define BD2IBC_address                           0x1B5
#define BD2IBC_position                          0x0
#define BD2IBC_size                              0x8
#define BD2IBC_value_mask                        0xFF
#define BD2IBC_clear_mask                        0x0

#define BD2IBC_BC0                               0x0
#define BD2IBC_BC0_address                       0x1B5
#define BD2IBC_BC0_position                      0x0
#define BD2IBC_BC0_size                          0x1
#define BD2IBC_BC0_value_mask                    0x1
#define BD2IBC_BC0_clear_mask                    0xFE

#define BD2IBC_BC                                0x0
#define BD2IBC_BC_address                        0x1B5
#define BD2IBC_BC_position                       0x0
#define BD2IBC_BC_size                           0x4
#define BD2IBC_BC_value_mask                     0xF
#define BD2IBC_BC_clear_mask                     0xF0

#define BD2IBC_BC1                               0x1
#define BD2IBC_BC1_address                       0x1B5
#define BD2IBC_BC1_position                      0x1
#define BD2IBC_BC1_size                          0x1
#define BD2IBC_BC1_value_mask                    0x2
#define BD2IBC_BC1_clear_mask                    0xFD

#define BD2IBC_BC2                               0x2
#define BD2IBC_BC2_address                       0x1B5
#define BD2IBC_BC2_position                      0x2
#define BD2IBC_BC2_size                          0x1
#define BD2IBC_BC2_value_mask                    0x4
#define BD2IBC_BC2_clear_mask                    0xFB

#define BD2IBC_BC3                               0x3
#define BD2IBC_BC3_address                       0x1B5
#define BD2IBC_BC3_position                      0x3
#define BD2IBC_BC3_size                          0x1
#define BD2IBC_BC3_value_mask                    0x8
#define BD2IBC_BC3_clear_mask                    0xF7

#endif // _PIC16C765_H_
