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

#ifndef _PIC16CR926_H_
#define _PIC16CR926_H_


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


/*----------------------------------------------#
| PORTE                                     0x9 |
#-----------------------------------------------#
| RE7 | RE6 | RE5 | RE4 | RE3 | RE2 | RE1 | RE0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

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

#define RE3                                      0x3
#define RE3_address                              0x009
#define RE3_position                             0x3
#define RE3_size                                 0x1
#define RE3_value_mask                           0x8
#define RE3_clear_mask                           0xF7

#define RE4                                      0x4
#define RE4_address                              0x009
#define RE4_position                             0x4
#define RE4_size                                 0x1
#define RE4_value_mask                           0x10
#define RE4_clear_mask                           0xEF

#define RE5                                      0x5
#define RE5_address                              0x009
#define RE5_position                             0x5
#define RE5_size                                 0x1
#define RE5_value_mask                           0x20
#define RE5_clear_mask                           0xDF

#define RE6                                      0x6
#define RE6_address                              0x009
#define RE6_position                             0x6
#define RE6_size                                 0x1
#define RE6_value_mask                           0x40
#define RE6_clear_mask                           0xBF

#define RE7                                      0x7
#define RE7_address                              0x009
#define RE7_position                             0x7
#define RE7_size                                 0x1
#define RE7_value_mask                           0x80
#define RE7_clear_mask                           0x7F


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


/*--------------------------------------------------------#
| PIR1                                                0xC |
#---------------------------------------------------------#
| LCDIF | ADIF | - | - | SSPIF | CCP1IF | TMR2IF | TMR1IF |
#---------------------------------------------------------#
| 7     | 6    | 5 | 4 | 3     | 2      | 1      | 0      |
#--------------------------------------------------------*/

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

#define SSPIF                                    0x3
#define SSPIF_address                            0x00C
#define SSPIF_position                           0x3
#define SSPIF_size                               0x1
#define SSPIF_value_mask                         0x8
#define SSPIF_clear_mask                         0xF7

#define ADIF                                     0x6
#define ADIF_address                             0x00C
#define ADIF_position                            0x6
#define ADIF_size                                0x1
#define ADIF_value_mask                          0x40
#define ADIF_clear_mask                          0xBF

#define LCDIF                                    0x7
#define LCDIF_address                            0x00C
#define LCDIF_position                           0x7
#define LCDIF_size                               0x1
#define LCDIF_value_mask                         0x80
#define LCDIF_clear_mask                         0x7F


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


/*----------------------------------------------------------#
| CCP1CON                                              0x17 |
#-----------------------------------------------------------#
| - | - | CCP1X | CCP1Y | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
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

#define CCP1Y                                    0x4
#define CCP1Y_address                            0x017
#define CCP1Y_position                           0x4
#define CCP1Y_size                               0x1
#define CCP1Y_value_mask                         0x10
#define CCP1Y_clear_mask                         0xEF

#define DC1B                                     0x4
#define DC1B_address                             0x017
#define DC1B_position                            0x4
#define DC1B_size                                0x2
#define DC1B_value_mask                          0x30
#define DC1B_clear_mask                          0xCF

#define CCP1X                                    0x5
#define CCP1X_address                            0x017
#define CCP1X_position                           0x5
#define CCP1X_size                               0x1
#define CCP1X_value_mask                         0x20
#define CCP1X_clear_mask                         0xDF


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


/*----------------------------------------------------------------#
| TRISE                                                      0x89 |
#-----------------------------------------------------------------#
| IBF | OBF | TRISE5 | TRISE4 | TRISE3 | TRISE2 | TRISE1 | TRISE0 |
#-----------------------------------------------------------------#
| 7   | 6   | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

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

#define TRISE3                                   0x3
#define TRISE3_address                           0x089
#define TRISE3_position                          0x3
#define TRISE3_size                              0x1
#define TRISE3_value_mask                        0x8
#define TRISE3_clear_mask                        0xF7

#define TRISE4                                   0x4
#define TRISE4_address                           0x089
#define TRISE4_position                          0x4
#define TRISE4_size                              0x1
#define TRISE4_value_mask                        0x10
#define TRISE4_clear_mask                        0xEF

#define PSPMODE                                  0x4
#define PSPMODE_address                          0x089
#define PSPMODE_position                         0x4
#define PSPMODE_size                             0x1
#define PSPMODE_value_mask                       0x10
#define PSPMODE_clear_mask                       0xEF

#define TRISE5                                   0x5
#define TRISE5_address                           0x089
#define TRISE5_position                          0x5
#define TRISE5_size                              0x1
#define TRISE5_value_mask                        0x20
#define TRISE5_clear_mask                        0xDF

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

#define TRISE6                                   0x6
#define TRISE6_address                           0x089
#define TRISE6_position                          0x6
#define TRISE6_size                              0x1
#define TRISE6_value_mask                        0x40
#define TRISE6_clear_mask                        0xBF

#define IBF                                      0x7
#define IBF_address                              0x089
#define IBF_position                             0x7
#define IBF_size                                 0x1
#define IBF_value_mask                           0x80
#define IBF_clear_mask                           0x7F

#define TRISE7                                   0x7
#define TRISE7_address                           0x089
#define TRISE7_position                          0x7
#define TRISE7_size                              0x1
#define TRISE7_value_mask                        0x80
#define TRISE7_clear_mask                        0x7F


/*--------------------------------------------------------#
| PIE1                                               0x8C |
#---------------------------------------------------------#
| LCDIE | ADIE | - | - | SSPIE | CCP1IE | TMR2IE | TMR1IE |
#---------------------------------------------------------#
| 7     | 6    | 5 | 4 | 3     | 2      | 1      | 0      |
#--------------------------------------------------------*/

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

#define SSPIE                                    0x3
#define SSPIE_address                            0x08C
#define SSPIE_position                           0x3
#define SSPIE_size                               0x1
#define SSPIE_value_mask                         0x8
#define SSPIE_clear_mask                         0xF7

#define ADIE                                     0x6
#define ADIE_address                             0x08C
#define ADIE_position                            0x6
#define ADIE_size                                0x1
#define ADIE_value_mask                          0x40
#define ADIE_clear_mask                          0xBF

#define LCDIE                                    0x7
#define LCDIE_address                            0x08C
#define LCDIE_position                           0x7
#define LCDIE_size                               0x1
#define LCDIE_value_mask                         0x80
#define LCDIE_clear_mask                         0x7F


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

#define nPOR                                     0x1
#define nPOR_address                             0x08E
#define nPOR_position                            0x1
#define nPOR_size                                0x1
#define nPOR_value_mask                          0x2
#define nPOR_clear_mask                          0xFD


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


/*-------------------------------------------------#
| ADCON1                                      0x9F |
#--------------------------------------------------#
| ADFM | - | - | - | PCFG3 | PCFG2 | PCFG1 | PCFG0 |
#--------------------------------------------------#
| 7    | 6 | 5 | 4 | 3     | 2     | 1     | 0     |
#-------------------------------------------------*/

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
#define PCFG_size                                0x4
#define PCFG_value_mask                          0xF
#define PCFG_clear_mask                          0xF0

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

#define PCFG3                                    0x3
#define PCFG3_address                            0x09F
#define PCFG3_position                           0x3
#define PCFG3_size                               0x1
#define PCFG3_value_mask                         0x8
#define PCFG3_clear_mask                         0xF7

#define ADFM                                     0x7
#define ADFM_address                             0x09F
#define ADFM_position                            0x7
#define ADFM_size                                0x1
#define ADFM_value_mask                          0x80
#define ADFM_clear_mask                          0x7F


/*----------------------------------------------#
| PORTF                                   0x107 |
#-----------------------------------------------#
| RF7 | RF6 | RF5 | RF4 | RF3 | RF2 | RF1 | RF0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define PORTF                                    0x0
#define PORTF_address                            0x107
#define PORTF_position                           0x0
#define PORTF_size                               0x8
#define PORTF_value_mask                         0xFF
#define PORTF_clear_mask                         0x0

#define RF0                                      0x0
#define RF0_address                              0x107
#define RF0_position                             0x0
#define RF0_size                                 0x1
#define RF0_value_mask                           0x1
#define RF0_clear_mask                           0xFE

#define RF1                                      0x1
#define RF1_address                              0x107
#define RF1_position                             0x1
#define RF1_size                                 0x1
#define RF1_value_mask                           0x2
#define RF1_clear_mask                           0xFD

#define RF2                                      0x2
#define RF2_address                              0x107
#define RF2_position                             0x2
#define RF2_size                                 0x1
#define RF2_value_mask                           0x4
#define RF2_clear_mask                           0xFB

#define RF3                                      0x3
#define RF3_address                              0x107
#define RF3_position                             0x3
#define RF3_size                                 0x1
#define RF3_value_mask                           0x8
#define RF3_clear_mask                           0xF7

#define RF4                                      0x4
#define RF4_address                              0x107
#define RF4_position                             0x4
#define RF4_size                                 0x1
#define RF4_value_mask                           0x10
#define RF4_clear_mask                           0xEF

#define RF5                                      0x5
#define RF5_address                              0x107
#define RF5_position                             0x5
#define RF5_size                                 0x1
#define RF5_value_mask                           0x20
#define RF5_clear_mask                           0xDF

#define RF6                                      0x6
#define RF6_address                              0x107
#define RF6_position                             0x6
#define RF6_size                                 0x1
#define RF6_value_mask                           0x40
#define RF6_clear_mask                           0xBF

#define RF7                                      0x7
#define RF7_address                              0x107
#define RF7_position                             0x7
#define RF7_size                                 0x1
#define RF7_value_mask                           0x80
#define RF7_clear_mask                           0x7F


/*----------------------------------------------#
| PORTG                                   0x108 |
#-----------------------------------------------#
| RG7 | RG6 | RG5 | RG4 | RG3 | RG2 | RG1 | RG0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define PORTG                                    0x0
#define PORTG_address                            0x108
#define PORTG_position                           0x0
#define PORTG_size                               0x8
#define PORTG_value_mask                         0xFF
#define PORTG_clear_mask                         0x0

#define RG0                                      0x0
#define RG0_address                              0x108
#define RG0_position                             0x0
#define RG0_size                                 0x1
#define RG0_value_mask                           0x1
#define RG0_clear_mask                           0xFE

#define RG1                                      0x1
#define RG1_address                              0x108
#define RG1_position                             0x1
#define RG1_size                                 0x1
#define RG1_value_mask                           0x2
#define RG1_clear_mask                           0xFD

#define RG2                                      0x2
#define RG2_address                              0x108
#define RG2_position                             0x2
#define RG2_size                                 0x1
#define RG2_value_mask                           0x4
#define RG2_clear_mask                           0xFB

#define RG3                                      0x3
#define RG3_address                              0x108
#define RG3_position                             0x3
#define RG3_size                                 0x1
#define RG3_value_mask                           0x8
#define RG3_clear_mask                           0xF7

#define RG4                                      0x4
#define RG4_address                              0x108
#define RG4_position                             0x4
#define RG4_size                                 0x1
#define RG4_value_mask                           0x10
#define RG4_clear_mask                           0xEF

#define RG5                                      0x5
#define RG5_address                              0x108
#define RG5_position                             0x5
#define RG5_size                                 0x1
#define RG5_value_mask                           0x20
#define RG5_clear_mask                           0xDF

#define RG6                                      0x6
#define RG6_address                              0x108
#define RG6_position                             0x6
#define RG6_size                                 0x1
#define RG6_value_mask                           0x40
#define RG6_clear_mask                           0xBF

#define RG7                                      0x7
#define RG7_address                              0x108
#define RG7_position                             0x7
#define RG7_size                                 0x1
#define RG7_value_mask                           0x80
#define RG7_clear_mask                           0x7F


/*-------------------------------#
| PMCON1                   0x10C |
#--------------------------------#
| - | - | - | - | - | - | - | RD |
#--------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0  |
#-------------------------------*/

#define PMCON1                                   0x0
#define PMCON1_address                           0x10C
#define PMCON1_position                          0x0
#define PMCON1_size                              0x8
#define PMCON1_value_mask                        0xFF
#define PMCON1_clear_mask                        0x0

#define RD                                       0x0
#define RD_address                               0x10C
#define RD_position                              0x0
#define RD_size                                  0x1
#define RD_value_mask                            0x1
#define RD_clear_mask                            0xFE


/*---------------------------------------------------#
| LCDSE                                        0x10D |
#----------------------------------------------------#
| SE29 | SE27 | SE20 | SE16 | SE12 | SE9 | SE5 | SE0 |
#----------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2   | 1   | 0   |
#---------------------------------------------------*/

#define LCDSE                                    0x0
#define LCDSE_address                            0x10D
#define LCDSE_position                           0x0
#define LCDSE_size                               0x8
#define LCDSE_value_mask                         0xFF
#define LCDSE_clear_mask                         0x0

#define SE0                                      0x0
#define SE0_address                              0x10D
#define SE0_position                             0x0
#define SE0_size                                 0x1
#define SE0_value_mask                           0x1
#define SE0_clear_mask                           0xFE

#define SE5                                      0x1
#define SE5_address                              0x10D
#define SE5_position                             0x1
#define SE5_size                                 0x1
#define SE5_value_mask                           0x2
#define SE5_clear_mask                           0xFD

#define SE9                                      0x2
#define SE9_address                              0x10D
#define SE9_position                             0x2
#define SE9_size                                 0x1
#define SE9_value_mask                           0x4
#define SE9_clear_mask                           0xFB

#define SE12                                     0x3
#define SE12_address                             0x10D
#define SE12_position                            0x3
#define SE12_size                                0x1
#define SE12_value_mask                          0x8
#define SE12_clear_mask                          0xF7

#define SE16                                     0x4
#define SE16_address                             0x10D
#define SE16_position                            0x4
#define SE16_size                                0x1
#define SE16_value_mask                          0x10
#define SE16_clear_mask                          0xEF

#define SE20                                     0x5
#define SE20_address                             0x10D
#define SE20_position                            0x5
#define SE20_size                                0x1
#define SE20_value_mask                          0x20
#define SE20_clear_mask                          0xDF

#define SE27                                     0x6
#define SE27_address                             0x10D
#define SE27_position                            0x6
#define SE27_size                                0x1
#define SE27_value_mask                          0x40
#define SE27_clear_mask                          0xBF

#define SE29                                     0x7
#define SE29_address                             0x10D
#define SE29_position                            0x7
#define SE29_size                                0x1
#define SE29_value_mask                          0x80
#define SE29_clear_mask                          0x7F


/*--------------------------------------#
| LCDPS                           0x10E |
#---------------------------------------#
| - | - | - | - | LP3 | LP2 | LP1 | LP0 |
#---------------------------------------#
| 7 | 6 | 5 | 4 | 3   | 2   | 1   | 0   |
#--------------------------------------*/

#define LCDPS                                    0x0
#define LCDPS_address                            0x10E
#define LCDPS_position                           0x0
#define LCDPS_size                               0x8
#define LCDPS_value_mask                         0xFF
#define LCDPS_clear_mask                         0x0

#define LP                                       0x0
#define LP_address                               0x10E
#define LP_position                              0x0
#define LP_size                                  0x4
#define LP_value_mask                            0xF
#define LP_clear_mask                            0xF0

#define LP0                                      0x0
#define LP0_address                              0x10E
#define LP0_position                             0x0
#define LP0_size                                 0x1
#define LP0_value_mask                           0x1
#define LP0_clear_mask                           0xFE

#define LP1                                      0x1
#define LP1_address                              0x10E
#define LP1_position                             0x1
#define LP1_size                                 0x1
#define LP1_value_mask                           0x2
#define LP1_clear_mask                           0xFD

#define LP2                                      0x2
#define LP2_address                              0x10E
#define LP2_position                             0x2
#define LP2_size                                 0x1
#define LP2_value_mask                           0x4
#define LP2_clear_mask                           0xFB

#define LP3                                      0x3
#define LP3_address                              0x10E
#define LP3_position                             0x3
#define LP3_size                                 0x1
#define LP3_value_mask                           0x8
#define LP3_clear_mask                           0xF7


/*--------------------------------------------------------#
| LCDCON                                            0x10F |
#---------------------------------------------------------#
| LCDEN | SLPEN | WERR | BIAS | CS1 | CS0 | LMUX1 | LMUX0 |
#---------------------------------------------------------#
| 7     | 6     | 5    | 4    | 3   | 2   | 1     | 0     |
#--------------------------------------------------------*/

#define LCDCON                                   0x0
#define LCDCON_address                           0x10F
#define LCDCON_position                          0x0
#define LCDCON_size                              0x8
#define LCDCON_value_mask                        0xFF
#define LCDCON_clear_mask                        0x0

#define LMUX0                                    0x0
#define LMUX0_address                            0x10F
#define LMUX0_position                           0x0
#define LMUX0_size                               0x1
#define LMUX0_value_mask                         0x1
#define LMUX0_clear_mask                         0xFE

#define LMUX                                     0x0
#define LMUX_address                             0x10F
#define LMUX_position                            0x0
#define LMUX_size                                0x2
#define LMUX_value_mask                          0x3
#define LMUX_clear_mask                          0xFC

#define LMUX1                                    0x1
#define LMUX1_address                            0x10F
#define LMUX1_position                           0x1
#define LMUX1_size                               0x1
#define LMUX1_value_mask                         0x2
#define LMUX1_clear_mask                         0xFD

#define CS                                       0x2
#define CS_address                               0x10F
#define CS_position                              0x2
#define CS_size                                  0x2
#define CS_value_mask                            0xC
#define CS_clear_mask                            0xF3

#define CS0                                      0x2
#define CS0_address                              0x10F
#define CS0_position                             0x2
#define CS0_size                                 0x1
#define CS0_value_mask                           0x4
#define CS0_clear_mask                           0xFB

#define CS1                                      0x3
#define CS1_address                              0x10F
#define CS1_position                             0x3
#define CS1_size                                 0x1
#define CS1_value_mask                           0x8
#define CS1_clear_mask                           0xF7

#define BIAS                                     0x4
#define BIAS_address                             0x10F
#define BIAS_position                            0x4
#define BIAS_size                                0x1
#define BIAS_value_mask                          0x10
#define BIAS_clear_mask                          0xEF

#define VGEN                                     0x4
#define VGEN_address                             0x10F
#define VGEN_position                            0x4
#define VGEN_size                                0x1
#define VGEN_value_mask                          0x10
#define VGEN_clear_mask                          0xEF

#define WERR                                     0x5
#define WERR_address                             0x10F
#define WERR_position                            0x5
#define WERR_size                                0x1
#define WERR_value_mask                          0x20
#define WERR_clear_mask                          0xDF

#define SLPEN                                    0x6
#define SLPEN_address                            0x10F
#define SLPEN_position                           0x6
#define SLPEN_size                               0x1
#define SLPEN_value_mask                         0x40
#define SLPEN_clear_mask                         0xBF

#define LCDEN                                    0x7
#define LCDEN_address                            0x10F
#define LCDEN_position                           0x7
#define LCDEN_size                               0x1
#define LCDEN_value_mask                         0x80
#define LCDEN_clear_mask                         0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| LCDD00                                                                                                          0x110 |
#-----------------------------------------------------------------------------------------------------------------------#
| LCDD00_SEG07 | LCDD00_SEG06 | LCDD00_SEG05 | LCDD00_SEG04 | LCDD00_SEG03 | LCDD00_SEG02 | LCDD00_SEG01 | LCDD00_SEG00 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define LCDD00                                   0x0
#define LCDD00_address                           0x110
#define LCDD00_position                          0x0
#define LCDD00_size                              0x8
#define LCDD00_value_mask                        0xFF
#define LCDD00_clear_mask                        0x0

#define LCDD00_SEG00                             0x0
#define LCDD00_SEG00_address                     0x110
#define LCDD00_SEG00_position                    0x0
#define LCDD00_SEG00_size                        0x1
#define LCDD00_SEG00_value_mask                  0x1
#define LCDD00_SEG00_clear_mask                  0xFE

#define LCDD00_SEG01                             0x1
#define LCDD00_SEG01_address                     0x110
#define LCDD00_SEG01_position                    0x1
#define LCDD00_SEG01_size                        0x1
#define LCDD00_SEG01_value_mask                  0x2
#define LCDD00_SEG01_clear_mask                  0xFD

#define LCDD00_SEG02                             0x2
#define LCDD00_SEG02_address                     0x110
#define LCDD00_SEG02_position                    0x2
#define LCDD00_SEG02_size                        0x1
#define LCDD00_SEG02_value_mask                  0x4
#define LCDD00_SEG02_clear_mask                  0xFB

#define LCDD00_SEG03                             0x3
#define LCDD00_SEG03_address                     0x110
#define LCDD00_SEG03_position                    0x3
#define LCDD00_SEG03_size                        0x1
#define LCDD00_SEG03_value_mask                  0x8
#define LCDD00_SEG03_clear_mask                  0xF7

#define LCDD00_SEG04                             0x4
#define LCDD00_SEG04_address                     0x110
#define LCDD00_SEG04_position                    0x4
#define LCDD00_SEG04_size                        0x1
#define LCDD00_SEG04_value_mask                  0x10
#define LCDD00_SEG04_clear_mask                  0xEF

#define LCDD00_SEG05                             0x5
#define LCDD00_SEG05_address                     0x110
#define LCDD00_SEG05_position                    0x5
#define LCDD00_SEG05_size                        0x1
#define LCDD00_SEG05_value_mask                  0x20
#define LCDD00_SEG05_clear_mask                  0xDF

#define LCDD00_SEG06                             0x6
#define LCDD00_SEG06_address                     0x110
#define LCDD00_SEG06_position                    0x6
#define LCDD00_SEG06_size                        0x1
#define LCDD00_SEG06_value_mask                  0x40
#define LCDD00_SEG06_clear_mask                  0xBF

#define LCDD00_SEG07                             0x7
#define LCDD00_SEG07_address                     0x110
#define LCDD00_SEG07_position                    0x7
#define LCDD00_SEG07_size                        0x1
#define LCDD00_SEG07_value_mask                  0x80
#define LCDD00_SEG07_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| LCDD01                                                                                                          0x111 |
#-----------------------------------------------------------------------------------------------------------------------#
| LCDD01_SEG15 | LCDD01_SEG14 | LCDD01_SEG13 | LCDD01_SEG12 | LCDD01_SEG11 | LCDD01_SEG10 | LCDD01_SEG09 | LCDD01_SEG08 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define LCDD01                                   0x0
#define LCDD01_address                           0x111
#define LCDD01_position                          0x0
#define LCDD01_size                              0x8
#define LCDD01_value_mask                        0xFF
#define LCDD01_clear_mask                        0x0

#define LCDD01_SEG08                             0x0
#define LCDD01_SEG08_address                     0x111
#define LCDD01_SEG08_position                    0x0
#define LCDD01_SEG08_size                        0x1
#define LCDD01_SEG08_value_mask                  0x1
#define LCDD01_SEG08_clear_mask                  0xFE

#define LCDD01_SEG09                             0x1
#define LCDD01_SEG09_address                     0x111
#define LCDD01_SEG09_position                    0x1
#define LCDD01_SEG09_size                        0x1
#define LCDD01_SEG09_value_mask                  0x2
#define LCDD01_SEG09_clear_mask                  0xFD

#define LCDD01_SEG10                             0x2
#define LCDD01_SEG10_address                     0x111
#define LCDD01_SEG10_position                    0x2
#define LCDD01_SEG10_size                        0x1
#define LCDD01_SEG10_value_mask                  0x4
#define LCDD01_SEG10_clear_mask                  0xFB

#define LCDD01_SEG11                             0x3
#define LCDD01_SEG11_address                     0x111
#define LCDD01_SEG11_position                    0x3
#define LCDD01_SEG11_size                        0x1
#define LCDD01_SEG11_value_mask                  0x8
#define LCDD01_SEG11_clear_mask                  0xF7

#define LCDD01_SEG12                             0x4
#define LCDD01_SEG12_address                     0x111
#define LCDD01_SEG12_position                    0x4
#define LCDD01_SEG12_size                        0x1
#define LCDD01_SEG12_value_mask                  0x10
#define LCDD01_SEG12_clear_mask                  0xEF

#define LCDD01_SEG13                             0x5
#define LCDD01_SEG13_address                     0x111
#define LCDD01_SEG13_position                    0x5
#define LCDD01_SEG13_size                        0x1
#define LCDD01_SEG13_value_mask                  0x20
#define LCDD01_SEG13_clear_mask                  0xDF

#define LCDD01_SEG14                             0x6
#define LCDD01_SEG14_address                     0x111
#define LCDD01_SEG14_position                    0x6
#define LCDD01_SEG14_size                        0x1
#define LCDD01_SEG14_value_mask                  0x40
#define LCDD01_SEG14_clear_mask                  0xBF

#define LCDD01_SEG15                             0x7
#define LCDD01_SEG15_address                     0x111
#define LCDD01_SEG15_position                    0x7
#define LCDD01_SEG15_size                        0x1
#define LCDD01_SEG15_value_mask                  0x80
#define LCDD01_SEG15_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| LCDD02                                                                                                          0x112 |
#-----------------------------------------------------------------------------------------------------------------------#
| LCDD02_SEG23 | LCDD02_SEG22 | LCDD02_SEG21 | LCDD02_SEG20 | LCDD02_SEG19 | LCDD02_SEG18 | LCDD02_SEG17 | LCDD02_SEG16 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define LCDD02                                   0x0
#define LCDD02_address                           0x112
#define LCDD02_position                          0x0
#define LCDD02_size                              0x8
#define LCDD02_value_mask                        0xFF
#define LCDD02_clear_mask                        0x0

#define LCDD02_SEG16                             0x0
#define LCDD02_SEG16_address                     0x112
#define LCDD02_SEG16_position                    0x0
#define LCDD02_SEG16_size                        0x1
#define LCDD02_SEG16_value_mask                  0x1
#define LCDD02_SEG16_clear_mask                  0xFE

#define LCDD02_SEG17                             0x1
#define LCDD02_SEG17_address                     0x112
#define LCDD02_SEG17_position                    0x1
#define LCDD02_SEG17_size                        0x1
#define LCDD02_SEG17_value_mask                  0x2
#define LCDD02_SEG17_clear_mask                  0xFD

#define LCDD02_SEG18                             0x2
#define LCDD02_SEG18_address                     0x112
#define LCDD02_SEG18_position                    0x2
#define LCDD02_SEG18_size                        0x1
#define LCDD02_SEG18_value_mask                  0x4
#define LCDD02_SEG18_clear_mask                  0xFB

#define LCDD02_SEG19                             0x3
#define LCDD02_SEG19_address                     0x112
#define LCDD02_SEG19_position                    0x3
#define LCDD02_SEG19_size                        0x1
#define LCDD02_SEG19_value_mask                  0x8
#define LCDD02_SEG19_clear_mask                  0xF7

#define LCDD02_SEG20                             0x4
#define LCDD02_SEG20_address                     0x112
#define LCDD02_SEG20_position                    0x4
#define LCDD02_SEG20_size                        0x1
#define LCDD02_SEG20_value_mask                  0x10
#define LCDD02_SEG20_clear_mask                  0xEF

#define LCDD02_SEG21                             0x5
#define LCDD02_SEG21_address                     0x112
#define LCDD02_SEG21_position                    0x5
#define LCDD02_SEG21_size                        0x1
#define LCDD02_SEG21_value_mask                  0x20
#define LCDD02_SEG21_clear_mask                  0xDF

#define LCDD02_SEG22                             0x6
#define LCDD02_SEG22_address                     0x112
#define LCDD02_SEG22_position                    0x6
#define LCDD02_SEG22_size                        0x1
#define LCDD02_SEG22_value_mask                  0x40
#define LCDD02_SEG22_clear_mask                  0xBF

#define LCDD02_SEG23                             0x7
#define LCDD02_SEG23_address                     0x112
#define LCDD02_SEG23_position                    0x7
#define LCDD02_SEG23_size                        0x1
#define LCDD02_SEG23_value_mask                  0x80
#define LCDD02_SEG23_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| LCDD03                                                                                                          0x113 |
#-----------------------------------------------------------------------------------------------------------------------#
| LCDD03_SEG31 | LCDD03_SEG30 | LCDD03_SEG29 | LCDD03_SEG28 | LCDD03_SEG27 | LCDD03_SEG26 | LCDD03_SEG25 | LCDD03_SEG24 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define LCDD03                                   0x0
#define LCDD03_address                           0x113
#define LCDD03_position                          0x0
#define LCDD03_size                              0x8
#define LCDD03_value_mask                        0xFF
#define LCDD03_clear_mask                        0x0

#define LCDD03_SEG24                             0x0
#define LCDD03_SEG24_address                     0x113
#define LCDD03_SEG24_position                    0x0
#define LCDD03_SEG24_size                        0x1
#define LCDD03_SEG24_value_mask                  0x1
#define LCDD03_SEG24_clear_mask                  0xFE

#define LCDD03_SEG25                             0x1
#define LCDD03_SEG25_address                     0x113
#define LCDD03_SEG25_position                    0x1
#define LCDD03_SEG25_size                        0x1
#define LCDD03_SEG25_value_mask                  0x2
#define LCDD03_SEG25_clear_mask                  0xFD

#define LCDD03_SEG26                             0x2
#define LCDD03_SEG26_address                     0x113
#define LCDD03_SEG26_position                    0x2
#define LCDD03_SEG26_size                        0x1
#define LCDD03_SEG26_value_mask                  0x4
#define LCDD03_SEG26_clear_mask                  0xFB

#define LCDD03_SEG27                             0x3
#define LCDD03_SEG27_address                     0x113
#define LCDD03_SEG27_position                    0x3
#define LCDD03_SEG27_size                        0x1
#define LCDD03_SEG27_value_mask                  0x8
#define LCDD03_SEG27_clear_mask                  0xF7

#define LCDD03_SEG28                             0x4
#define LCDD03_SEG28_address                     0x113
#define LCDD03_SEG28_position                    0x4
#define LCDD03_SEG28_size                        0x1
#define LCDD03_SEG28_value_mask                  0x10
#define LCDD03_SEG28_clear_mask                  0xEF

#define LCDD03_SEG29                             0x5
#define LCDD03_SEG29_address                     0x113
#define LCDD03_SEG29_position                    0x5
#define LCDD03_SEG29_size                        0x1
#define LCDD03_SEG29_value_mask                  0x20
#define LCDD03_SEG29_clear_mask                  0xDF

#define LCDD03_SEG30                             0x6
#define LCDD03_SEG30_address                     0x113
#define LCDD03_SEG30_position                    0x6
#define LCDD03_SEG30_size                        0x1
#define LCDD03_SEG30_value_mask                  0x40
#define LCDD03_SEG30_clear_mask                  0xBF

#define LCDD03_SEG31                             0x7
#define LCDD03_SEG31_address                     0x113
#define LCDD03_SEG31_position                    0x7
#define LCDD03_SEG31_size                        0x1
#define LCDD03_SEG31_value_mask                  0x80
#define LCDD03_SEG31_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| LCDD04                                                                                                          0x114 |
#-----------------------------------------------------------------------------------------------------------------------#
| LCDD04_SEG07 | LCDD04_SEG06 | LCDD04_SEG05 | LCDD04_SEG04 | LCDD04_SEG03 | LCDD04_SEG02 | LCDD04_SEG01 | LCDD04_SEG00 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define LCDD04                                   0x0
#define LCDD04_address                           0x114
#define LCDD04_position                          0x0
#define LCDD04_size                              0x8
#define LCDD04_value_mask                        0xFF
#define LCDD04_clear_mask                        0x0

#define LCDD04_SEG00                             0x0
#define LCDD04_SEG00_address                     0x114
#define LCDD04_SEG00_position                    0x0
#define LCDD04_SEG00_size                        0x1
#define LCDD04_SEG00_value_mask                  0x1
#define LCDD04_SEG00_clear_mask                  0xFE

#define LCDD04_SEG01                             0x1
#define LCDD04_SEG01_address                     0x114
#define LCDD04_SEG01_position                    0x1
#define LCDD04_SEG01_size                        0x1
#define LCDD04_SEG01_value_mask                  0x2
#define LCDD04_SEG01_clear_mask                  0xFD

#define LCDD04_SEG02                             0x2
#define LCDD04_SEG02_address                     0x114
#define LCDD04_SEG02_position                    0x2
#define LCDD04_SEG02_size                        0x1
#define LCDD04_SEG02_value_mask                  0x4
#define LCDD04_SEG02_clear_mask                  0xFB

#define LCDD04_SEG03                             0x3
#define LCDD04_SEG03_address                     0x114
#define LCDD04_SEG03_position                    0x3
#define LCDD04_SEG03_size                        0x1
#define LCDD04_SEG03_value_mask                  0x8
#define LCDD04_SEG03_clear_mask                  0xF7

#define LCDD04_SEG04                             0x4
#define LCDD04_SEG04_address                     0x114
#define LCDD04_SEG04_position                    0x4
#define LCDD04_SEG04_size                        0x1
#define LCDD04_SEG04_value_mask                  0x10
#define LCDD04_SEG04_clear_mask                  0xEF

#define LCDD04_SEG05                             0x5
#define LCDD04_SEG05_address                     0x114
#define LCDD04_SEG05_position                    0x5
#define LCDD04_SEG05_size                        0x1
#define LCDD04_SEG05_value_mask                  0x20
#define LCDD04_SEG05_clear_mask                  0xDF

#define LCDD04_SEG06                             0x6
#define LCDD04_SEG06_address                     0x114
#define LCDD04_SEG06_position                    0x6
#define LCDD04_SEG06_size                        0x1
#define LCDD04_SEG06_value_mask                  0x40
#define LCDD04_SEG06_clear_mask                  0xBF

#define LCDD04_SEG07                             0x7
#define LCDD04_SEG07_address                     0x114
#define LCDD04_SEG07_position                    0x7
#define LCDD04_SEG07_size                        0x1
#define LCDD04_SEG07_value_mask                  0x80
#define LCDD04_SEG07_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| LCDD05                                                                                                          0x115 |
#-----------------------------------------------------------------------------------------------------------------------#
| LCDD05_SEG15 | LCDD05_SEG14 | LCDD05_SEG13 | LCDD05_SEG12 | LCDD05_SEG11 | LCDD05_SEG10 | LCDD05_SEG09 | LCDD05_SEG08 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define LCDD05                                   0x0
#define LCDD05_address                           0x115
#define LCDD05_position                          0x0
#define LCDD05_size                              0x8
#define LCDD05_value_mask                        0xFF
#define LCDD05_clear_mask                        0x0

#define LCDD05_SEG08                             0x0
#define LCDD05_SEG08_address                     0x115
#define LCDD05_SEG08_position                    0x0
#define LCDD05_SEG08_size                        0x1
#define LCDD05_SEG08_value_mask                  0x1
#define LCDD05_SEG08_clear_mask                  0xFE

#define LCDD05_SEG09                             0x1
#define LCDD05_SEG09_address                     0x115
#define LCDD05_SEG09_position                    0x1
#define LCDD05_SEG09_size                        0x1
#define LCDD05_SEG09_value_mask                  0x2
#define LCDD05_SEG09_clear_mask                  0xFD

#define LCDD05_SEG10                             0x2
#define LCDD05_SEG10_address                     0x115
#define LCDD05_SEG10_position                    0x2
#define LCDD05_SEG10_size                        0x1
#define LCDD05_SEG10_value_mask                  0x4
#define LCDD05_SEG10_clear_mask                  0xFB

#define LCDD05_SEG11                             0x3
#define LCDD05_SEG11_address                     0x115
#define LCDD05_SEG11_position                    0x3
#define LCDD05_SEG11_size                        0x1
#define LCDD05_SEG11_value_mask                  0x8
#define LCDD05_SEG11_clear_mask                  0xF7

#define LCDD05_SEG12                             0x4
#define LCDD05_SEG12_address                     0x115
#define LCDD05_SEG12_position                    0x4
#define LCDD05_SEG12_size                        0x1
#define LCDD05_SEG12_value_mask                  0x10
#define LCDD05_SEG12_clear_mask                  0xEF

#define LCDD05_SEG13                             0x5
#define LCDD05_SEG13_address                     0x115
#define LCDD05_SEG13_position                    0x5
#define LCDD05_SEG13_size                        0x1
#define LCDD05_SEG13_value_mask                  0x20
#define LCDD05_SEG13_clear_mask                  0xDF

#define LCDD05_SEG14                             0x6
#define LCDD05_SEG14_address                     0x115
#define LCDD05_SEG14_position                    0x6
#define LCDD05_SEG14_size                        0x1
#define LCDD05_SEG14_value_mask                  0x40
#define LCDD05_SEG14_clear_mask                  0xBF

#define LCDD05_SEG15                             0x7
#define LCDD05_SEG15_address                     0x115
#define LCDD05_SEG15_position                    0x7
#define LCDD05_SEG15_size                        0x1
#define LCDD05_SEG15_value_mask                  0x80
#define LCDD05_SEG15_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| LCDD06                                                                                                          0x116 |
#-----------------------------------------------------------------------------------------------------------------------#
| LCDD06_SEG23 | LCDD06_SEG22 | LCDD06_SEG21 | LCDD06_SEG20 | LCDD06_SEG19 | LCDD06_SEG18 | LCDD06_SEG17 | LCDD06_SEG16 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define LCDD06                                   0x0
#define LCDD06_address                           0x116
#define LCDD06_position                          0x0
#define LCDD06_size                              0x8
#define LCDD06_value_mask                        0xFF
#define LCDD06_clear_mask                        0x0

#define LCDD06_SEG16                             0x0
#define LCDD06_SEG16_address                     0x116
#define LCDD06_SEG16_position                    0x0
#define LCDD06_SEG16_size                        0x1
#define LCDD06_SEG16_value_mask                  0x1
#define LCDD06_SEG16_clear_mask                  0xFE

#define LCDD06_SEG17                             0x1
#define LCDD06_SEG17_address                     0x116
#define LCDD06_SEG17_position                    0x1
#define LCDD06_SEG17_size                        0x1
#define LCDD06_SEG17_value_mask                  0x2
#define LCDD06_SEG17_clear_mask                  0xFD

#define LCDD06_SEG18                             0x2
#define LCDD06_SEG18_address                     0x116
#define LCDD06_SEG18_position                    0x2
#define LCDD06_SEG18_size                        0x1
#define LCDD06_SEG18_value_mask                  0x4
#define LCDD06_SEG18_clear_mask                  0xFB

#define LCDD06_SEG19                             0x3
#define LCDD06_SEG19_address                     0x116
#define LCDD06_SEG19_position                    0x3
#define LCDD06_SEG19_size                        0x1
#define LCDD06_SEG19_value_mask                  0x8
#define LCDD06_SEG19_clear_mask                  0xF7

#define LCDD06_SEG20                             0x4
#define LCDD06_SEG20_address                     0x116
#define LCDD06_SEG20_position                    0x4
#define LCDD06_SEG20_size                        0x1
#define LCDD06_SEG20_value_mask                  0x10
#define LCDD06_SEG20_clear_mask                  0xEF

#define LCDD06_SEG21                             0x5
#define LCDD06_SEG21_address                     0x116
#define LCDD06_SEG21_position                    0x5
#define LCDD06_SEG21_size                        0x1
#define LCDD06_SEG21_value_mask                  0x20
#define LCDD06_SEG21_clear_mask                  0xDF

#define LCDD06_SEG22                             0x6
#define LCDD06_SEG22_address                     0x116
#define LCDD06_SEG22_position                    0x6
#define LCDD06_SEG22_size                        0x1
#define LCDD06_SEG22_value_mask                  0x40
#define LCDD06_SEG22_clear_mask                  0xBF

#define LCDD06_SEG23                             0x7
#define LCDD06_SEG23_address                     0x116
#define LCDD06_SEG23_position                    0x7
#define LCDD06_SEG23_size                        0x1
#define LCDD06_SEG23_value_mask                  0x80
#define LCDD06_SEG23_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| LCDD07                                                                                                          0x117 |
#-----------------------------------------------------------------------------------------------------------------------#
| LCDD07_SEG31 | LCDD07_SEG30 | LCDD07_SEG29 | LCDD07_SEG28 | LCDD07_SEG27 | LCDD07_SEG26 | LCDD07_SEG25 | LCDD07_SEG24 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define LCDD07                                   0x0
#define LCDD07_address                           0x117
#define LCDD07_position                          0x0
#define LCDD07_size                              0x8
#define LCDD07_value_mask                        0xFF
#define LCDD07_clear_mask                        0x0

#define LCDD07_SEG24                             0x0
#define LCDD07_SEG24_address                     0x117
#define LCDD07_SEG24_position                    0x0
#define LCDD07_SEG24_size                        0x1
#define LCDD07_SEG24_value_mask                  0x1
#define LCDD07_SEG24_clear_mask                  0xFE

#define LCDD07_SEG25                             0x1
#define LCDD07_SEG25_address                     0x117
#define LCDD07_SEG25_position                    0x1
#define LCDD07_SEG25_size                        0x1
#define LCDD07_SEG25_value_mask                  0x2
#define LCDD07_SEG25_clear_mask                  0xFD

#define LCDD07_SEG26                             0x2
#define LCDD07_SEG26_address                     0x117
#define LCDD07_SEG26_position                    0x2
#define LCDD07_SEG26_size                        0x1
#define LCDD07_SEG26_value_mask                  0x4
#define LCDD07_SEG26_clear_mask                  0xFB

#define LCDD07_SEG27                             0x3
#define LCDD07_SEG27_address                     0x117
#define LCDD07_SEG27_position                    0x3
#define LCDD07_SEG27_size                        0x1
#define LCDD07_SEG27_value_mask                  0x8
#define LCDD07_SEG27_clear_mask                  0xF7

#define LCDD07_SEG28                             0x4
#define LCDD07_SEG28_address                     0x117
#define LCDD07_SEG28_position                    0x4
#define LCDD07_SEG28_size                        0x1
#define LCDD07_SEG28_value_mask                  0x10
#define LCDD07_SEG28_clear_mask                  0xEF

#define LCDD07_SEG29                             0x5
#define LCDD07_SEG29_address                     0x117
#define LCDD07_SEG29_position                    0x5
#define LCDD07_SEG29_size                        0x1
#define LCDD07_SEG29_value_mask                  0x20
#define LCDD07_SEG29_clear_mask                  0xDF

#define LCDD07_SEG30                             0x6
#define LCDD07_SEG30_address                     0x117
#define LCDD07_SEG30_position                    0x6
#define LCDD07_SEG30_size                        0x1
#define LCDD07_SEG30_value_mask                  0x40
#define LCDD07_SEG30_clear_mask                  0xBF

#define LCDD07_SEG31                             0x7
#define LCDD07_SEG31_address                     0x117
#define LCDD07_SEG31_position                    0x7
#define LCDD07_SEG31_size                        0x1
#define LCDD07_SEG31_value_mask                  0x80
#define LCDD07_SEG31_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| LCDD08                                                                                                          0x118 |
#-----------------------------------------------------------------------------------------------------------------------#
| LCDD08_SEG07 | LCDD08_SEG06 | LCDD08_SEG05 | LCDD08_SEG04 | LCDD08_SEG03 | LCDD08_SEG02 | LCDD08_SEG01 | LCDD08_SEG00 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define LCDD08                                   0x0
#define LCDD08_address                           0x118
#define LCDD08_position                          0x0
#define LCDD08_size                              0x8
#define LCDD08_value_mask                        0xFF
#define LCDD08_clear_mask                        0x0

#define LCDD08_SEG00                             0x0
#define LCDD08_SEG00_address                     0x118
#define LCDD08_SEG00_position                    0x0
#define LCDD08_SEG00_size                        0x1
#define LCDD08_SEG00_value_mask                  0x1
#define LCDD08_SEG00_clear_mask                  0xFE

#define LCDD08_SEG01                             0x1
#define LCDD08_SEG01_address                     0x118
#define LCDD08_SEG01_position                    0x1
#define LCDD08_SEG01_size                        0x1
#define LCDD08_SEG01_value_mask                  0x2
#define LCDD08_SEG01_clear_mask                  0xFD

#define LCDD08_SEG02                             0x2
#define LCDD08_SEG02_address                     0x118
#define LCDD08_SEG02_position                    0x2
#define LCDD08_SEG02_size                        0x1
#define LCDD08_SEG02_value_mask                  0x4
#define LCDD08_SEG02_clear_mask                  0xFB

#define LCDD08_SEG03                             0x3
#define LCDD08_SEG03_address                     0x118
#define LCDD08_SEG03_position                    0x3
#define LCDD08_SEG03_size                        0x1
#define LCDD08_SEG03_value_mask                  0x8
#define LCDD08_SEG03_clear_mask                  0xF7

#define LCDD08_SEG04                             0x4
#define LCDD08_SEG04_address                     0x118
#define LCDD08_SEG04_position                    0x4
#define LCDD08_SEG04_size                        0x1
#define LCDD08_SEG04_value_mask                  0x10
#define LCDD08_SEG04_clear_mask                  0xEF

#define LCDD08_SEG05                             0x5
#define LCDD08_SEG05_address                     0x118
#define LCDD08_SEG05_position                    0x5
#define LCDD08_SEG05_size                        0x1
#define LCDD08_SEG05_value_mask                  0x20
#define LCDD08_SEG05_clear_mask                  0xDF

#define LCDD08_SEG06                             0x6
#define LCDD08_SEG06_address                     0x118
#define LCDD08_SEG06_position                    0x6
#define LCDD08_SEG06_size                        0x1
#define LCDD08_SEG06_value_mask                  0x40
#define LCDD08_SEG06_clear_mask                  0xBF

#define LCDD08_SEG07                             0x7
#define LCDD08_SEG07_address                     0x118
#define LCDD08_SEG07_position                    0x7
#define LCDD08_SEG07_size                        0x1
#define LCDD08_SEG07_value_mask                  0x80
#define LCDD08_SEG07_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| LCDD09                                                                                                          0x119 |
#-----------------------------------------------------------------------------------------------------------------------#
| LCDD09_SEG15 | LCDD09_SEG14 | LCDD09_SEG13 | LCDD09_SEG12 | LCDD09_SEG11 | LCDD09_SEG10 | LCDD09_SEG09 | LCDD09_SEG08 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define LCDD09                                   0x0
#define LCDD09_address                           0x119
#define LCDD09_position                          0x0
#define LCDD09_size                              0x8
#define LCDD09_value_mask                        0xFF
#define LCDD09_clear_mask                        0x0

#define LCDD09_SEG08                             0x0
#define LCDD09_SEG08_address                     0x119
#define LCDD09_SEG08_position                    0x0
#define LCDD09_SEG08_size                        0x1
#define LCDD09_SEG08_value_mask                  0x1
#define LCDD09_SEG08_clear_mask                  0xFE

#define LCDD09_SEG09                             0x1
#define LCDD09_SEG09_address                     0x119
#define LCDD09_SEG09_position                    0x1
#define LCDD09_SEG09_size                        0x1
#define LCDD09_SEG09_value_mask                  0x2
#define LCDD09_SEG09_clear_mask                  0xFD

#define LCDD09_SEG10                             0x2
#define LCDD09_SEG10_address                     0x119
#define LCDD09_SEG10_position                    0x2
#define LCDD09_SEG10_size                        0x1
#define LCDD09_SEG10_value_mask                  0x4
#define LCDD09_SEG10_clear_mask                  0xFB

#define LCDD09_SEG11                             0x3
#define LCDD09_SEG11_address                     0x119
#define LCDD09_SEG11_position                    0x3
#define LCDD09_SEG11_size                        0x1
#define LCDD09_SEG11_value_mask                  0x8
#define LCDD09_SEG11_clear_mask                  0xF7

#define LCDD09_SEG12                             0x4
#define LCDD09_SEG12_address                     0x119
#define LCDD09_SEG12_position                    0x4
#define LCDD09_SEG12_size                        0x1
#define LCDD09_SEG12_value_mask                  0x10
#define LCDD09_SEG12_clear_mask                  0xEF

#define LCDD09_SEG13                             0x5
#define LCDD09_SEG13_address                     0x119
#define LCDD09_SEG13_position                    0x5
#define LCDD09_SEG13_size                        0x1
#define LCDD09_SEG13_value_mask                  0x20
#define LCDD09_SEG13_clear_mask                  0xDF

#define LCDD09_SEG14                             0x6
#define LCDD09_SEG14_address                     0x119
#define LCDD09_SEG14_position                    0x6
#define LCDD09_SEG14_size                        0x1
#define LCDD09_SEG14_value_mask                  0x40
#define LCDD09_SEG14_clear_mask                  0xBF

#define LCDD09_SEG15                             0x7
#define LCDD09_SEG15_address                     0x119
#define LCDD09_SEG15_position                    0x7
#define LCDD09_SEG15_size                        0x1
#define LCDD09_SEG15_value_mask                  0x80
#define LCDD09_SEG15_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| LCDD10                                                                                                          0x11A |
#-----------------------------------------------------------------------------------------------------------------------#
| LCDD10_SEG23 | LCDD10_SEG22 | LCDD10_SEG21 | LCDD10_SEG20 | LCDD10_SEG19 | LCDD10_SEG18 | LCDD10_SEG17 | LCDD10_SEG16 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define LCDD10                                   0x0
#define LCDD10_address                           0x11A
#define LCDD10_position                          0x0
#define LCDD10_size                              0x8
#define LCDD10_value_mask                        0xFF
#define LCDD10_clear_mask                        0x0

#define LCDD10_SEG16                             0x0
#define LCDD10_SEG16_address                     0x11A
#define LCDD10_SEG16_position                    0x0
#define LCDD10_SEG16_size                        0x1
#define LCDD10_SEG16_value_mask                  0x1
#define LCDD10_SEG16_clear_mask                  0xFE

#define LCDD10_SEG17                             0x1
#define LCDD10_SEG17_address                     0x11A
#define LCDD10_SEG17_position                    0x1
#define LCDD10_SEG17_size                        0x1
#define LCDD10_SEG17_value_mask                  0x2
#define LCDD10_SEG17_clear_mask                  0xFD

#define LCDD10_SEG18                             0x2
#define LCDD10_SEG18_address                     0x11A
#define LCDD10_SEG18_position                    0x2
#define LCDD10_SEG18_size                        0x1
#define LCDD10_SEG18_value_mask                  0x4
#define LCDD10_SEG18_clear_mask                  0xFB

#define LCDD10_SEG19                             0x3
#define LCDD10_SEG19_address                     0x11A
#define LCDD10_SEG19_position                    0x3
#define LCDD10_SEG19_size                        0x1
#define LCDD10_SEG19_value_mask                  0x8
#define LCDD10_SEG19_clear_mask                  0xF7

#define LCDD10_SEG20                             0x4
#define LCDD10_SEG20_address                     0x11A
#define LCDD10_SEG20_position                    0x4
#define LCDD10_SEG20_size                        0x1
#define LCDD10_SEG20_value_mask                  0x10
#define LCDD10_SEG20_clear_mask                  0xEF

#define LCDD10_SEG21                             0x5
#define LCDD10_SEG21_address                     0x11A
#define LCDD10_SEG21_position                    0x5
#define LCDD10_SEG21_size                        0x1
#define LCDD10_SEG21_value_mask                  0x20
#define LCDD10_SEG21_clear_mask                  0xDF

#define LCDD10_SEG22                             0x6
#define LCDD10_SEG22_address                     0x11A
#define LCDD10_SEG22_position                    0x6
#define LCDD10_SEG22_size                        0x1
#define LCDD10_SEG22_value_mask                  0x40
#define LCDD10_SEG22_clear_mask                  0xBF

#define LCDD10_SEG23                             0x7
#define LCDD10_SEG23_address                     0x11A
#define LCDD10_SEG23_position                    0x7
#define LCDD10_SEG23_size                        0x1
#define LCDD10_SEG23_value_mask                  0x80
#define LCDD10_SEG23_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| LCDD11                                                                                                          0x11B |
#-----------------------------------------------------------------------------------------------------------------------#
| LCDD11_SEG31 | LCDD11_SEG30 | LCDD11_SEG29 | LCDD11_SEG28 | LCDD11_SEG27 | LCDD11_SEG26 | LCDD11_SEG25 | LCDD11_SEG24 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define LCDD11                                   0x0
#define LCDD11_address                           0x11B
#define LCDD11_position                          0x0
#define LCDD11_size                              0x8
#define LCDD11_value_mask                        0xFF
#define LCDD11_clear_mask                        0x0

#define LCDD11_SEG24                             0x0
#define LCDD11_SEG24_address                     0x11B
#define LCDD11_SEG24_position                    0x0
#define LCDD11_SEG24_size                        0x1
#define LCDD11_SEG24_value_mask                  0x1
#define LCDD11_SEG24_clear_mask                  0xFE

#define LCDD11_SEG25                             0x1
#define LCDD11_SEG25_address                     0x11B
#define LCDD11_SEG25_position                    0x1
#define LCDD11_SEG25_size                        0x1
#define LCDD11_SEG25_value_mask                  0x2
#define LCDD11_SEG25_clear_mask                  0xFD

#define LCDD11_SEG26                             0x2
#define LCDD11_SEG26_address                     0x11B
#define LCDD11_SEG26_position                    0x2
#define LCDD11_SEG26_size                        0x1
#define LCDD11_SEG26_value_mask                  0x4
#define LCDD11_SEG26_clear_mask                  0xFB

#define LCDD11_SEG27                             0x3
#define LCDD11_SEG27_address                     0x11B
#define LCDD11_SEG27_position                    0x3
#define LCDD11_SEG27_size                        0x1
#define LCDD11_SEG27_value_mask                  0x8
#define LCDD11_SEG27_clear_mask                  0xF7

#define LCDD11_SEG28                             0x4
#define LCDD11_SEG28_address                     0x11B
#define LCDD11_SEG28_position                    0x4
#define LCDD11_SEG28_size                        0x1
#define LCDD11_SEG28_value_mask                  0x10
#define LCDD11_SEG28_clear_mask                  0xEF

#define LCDD11_SEG29                             0x5
#define LCDD11_SEG29_address                     0x11B
#define LCDD11_SEG29_position                    0x5
#define LCDD11_SEG29_size                        0x1
#define LCDD11_SEG29_value_mask                  0x20
#define LCDD11_SEG29_clear_mask                  0xDF

#define LCDD11_SEG30                             0x6
#define LCDD11_SEG30_address                     0x11B
#define LCDD11_SEG30_position                    0x6
#define LCDD11_SEG30_size                        0x1
#define LCDD11_SEG30_value_mask                  0x40
#define LCDD11_SEG30_clear_mask                  0xBF

#define LCDD11_SEG31                             0x7
#define LCDD11_SEG31_address                     0x11B
#define LCDD11_SEG31_position                    0x7
#define LCDD11_SEG31_size                        0x1
#define LCDD11_SEG31_value_mask                  0x80
#define LCDD11_SEG31_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| LCDD12                                                                                                          0x11C |
#-----------------------------------------------------------------------------------------------------------------------#
| LCDD12_SEG07 | LCDD12_SEG06 | LCDD12_SEG05 | LCDD12_SEG04 | LCDD12_SEG03 | LCDD12_SEG02 | LCDD12_SEG01 | LCDD12_SEG00 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define LCDD12                                   0x0
#define LCDD12_address                           0x11C
#define LCDD12_position                          0x0
#define LCDD12_size                              0x8
#define LCDD12_value_mask                        0xFF
#define LCDD12_clear_mask                        0x0

#define LCDD12_SEG00                             0x0
#define LCDD12_SEG00_address                     0x11C
#define LCDD12_SEG00_position                    0x0
#define LCDD12_SEG00_size                        0x1
#define LCDD12_SEG00_value_mask                  0x1
#define LCDD12_SEG00_clear_mask                  0xFE

#define LCDD12_SEG01                             0x1
#define LCDD12_SEG01_address                     0x11C
#define LCDD12_SEG01_position                    0x1
#define LCDD12_SEG01_size                        0x1
#define LCDD12_SEG01_value_mask                  0x2
#define LCDD12_SEG01_clear_mask                  0xFD

#define LCDD12_SEG02                             0x2
#define LCDD12_SEG02_address                     0x11C
#define LCDD12_SEG02_position                    0x2
#define LCDD12_SEG02_size                        0x1
#define LCDD12_SEG02_value_mask                  0x4
#define LCDD12_SEG02_clear_mask                  0xFB

#define LCDD12_SEG03                             0x3
#define LCDD12_SEG03_address                     0x11C
#define LCDD12_SEG03_position                    0x3
#define LCDD12_SEG03_size                        0x1
#define LCDD12_SEG03_value_mask                  0x8
#define LCDD12_SEG03_clear_mask                  0xF7

#define LCDD12_SEG04                             0x4
#define LCDD12_SEG04_address                     0x11C
#define LCDD12_SEG04_position                    0x4
#define LCDD12_SEG04_size                        0x1
#define LCDD12_SEG04_value_mask                  0x10
#define LCDD12_SEG04_clear_mask                  0xEF

#define LCDD12_SEG05                             0x5
#define LCDD12_SEG05_address                     0x11C
#define LCDD12_SEG05_position                    0x5
#define LCDD12_SEG05_size                        0x1
#define LCDD12_SEG05_value_mask                  0x20
#define LCDD12_SEG05_clear_mask                  0xDF

#define LCDD12_SEG06                             0x6
#define LCDD12_SEG06_address                     0x11C
#define LCDD12_SEG06_position                    0x6
#define LCDD12_SEG06_size                        0x1
#define LCDD12_SEG06_value_mask                  0x40
#define LCDD12_SEG06_clear_mask                  0xBF

#define LCDD12_SEG07                             0x7
#define LCDD12_SEG07_address                     0x11C
#define LCDD12_SEG07_position                    0x7
#define LCDD12_SEG07_size                        0x1
#define LCDD12_SEG07_value_mask                  0x80
#define LCDD12_SEG07_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| LCDD13                                                                                                          0x11D |
#-----------------------------------------------------------------------------------------------------------------------#
| LCDD13_SEG15 | LCDD13_SEG14 | LCDD13_SEG13 | LCDD13_SEG12 | LCDD13_SEG11 | LCDD13_SEG10 | LCDD13_SEG09 | LCDD13_SEG08 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define LCDD13                                   0x0
#define LCDD13_address                           0x11D
#define LCDD13_position                          0x0
#define LCDD13_size                              0x8
#define LCDD13_value_mask                        0xFF
#define LCDD13_clear_mask                        0x0

#define LCDD13_SEG08                             0x0
#define LCDD13_SEG08_address                     0x11D
#define LCDD13_SEG08_position                    0x0
#define LCDD13_SEG08_size                        0x1
#define LCDD13_SEG08_value_mask                  0x1
#define LCDD13_SEG08_clear_mask                  0xFE

#define LCDD13_SEG09                             0x1
#define LCDD13_SEG09_address                     0x11D
#define LCDD13_SEG09_position                    0x1
#define LCDD13_SEG09_size                        0x1
#define LCDD13_SEG09_value_mask                  0x2
#define LCDD13_SEG09_clear_mask                  0xFD

#define LCDD13_SEG10                             0x2
#define LCDD13_SEG10_address                     0x11D
#define LCDD13_SEG10_position                    0x2
#define LCDD13_SEG10_size                        0x1
#define LCDD13_SEG10_value_mask                  0x4
#define LCDD13_SEG10_clear_mask                  0xFB

#define LCDD13_SEG11                             0x3
#define LCDD13_SEG11_address                     0x11D
#define LCDD13_SEG11_position                    0x3
#define LCDD13_SEG11_size                        0x1
#define LCDD13_SEG11_value_mask                  0x8
#define LCDD13_SEG11_clear_mask                  0xF7

#define LCDD13_SEG12                             0x4
#define LCDD13_SEG12_address                     0x11D
#define LCDD13_SEG12_position                    0x4
#define LCDD13_SEG12_size                        0x1
#define LCDD13_SEG12_value_mask                  0x10
#define LCDD13_SEG12_clear_mask                  0xEF

#define LCDD13_SEG13                             0x5
#define LCDD13_SEG13_address                     0x11D
#define LCDD13_SEG13_position                    0x5
#define LCDD13_SEG13_size                        0x1
#define LCDD13_SEG13_value_mask                  0x20
#define LCDD13_SEG13_clear_mask                  0xDF

#define LCDD13_SEG14                             0x6
#define LCDD13_SEG14_address                     0x11D
#define LCDD13_SEG14_position                    0x6
#define LCDD13_SEG14_size                        0x1
#define LCDD13_SEG14_value_mask                  0x40
#define LCDD13_SEG14_clear_mask                  0xBF

#define LCDD13_SEG15                             0x7
#define LCDD13_SEG15_address                     0x11D
#define LCDD13_SEG15_position                    0x7
#define LCDD13_SEG15_size                        0x1
#define LCDD13_SEG15_value_mask                  0x80
#define LCDD13_SEG15_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| LCDD14                                                                                                          0x11E |
#-----------------------------------------------------------------------------------------------------------------------#
| LCDD14_SEG23 | LCDD14_SEG22 | LCDD14_SEG21 | LCDD14_SEG20 | LCDD14_SEG19 | LCDD14_SEG18 | LCDD14_SEG17 | LCDD14_SEG16 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define LCDD14                                   0x0
#define LCDD14_address                           0x11E
#define LCDD14_position                          0x0
#define LCDD14_size                              0x8
#define LCDD14_value_mask                        0xFF
#define LCDD14_clear_mask                        0x0

#define LCDD14_SEG16                             0x0
#define LCDD14_SEG16_address                     0x11E
#define LCDD14_SEG16_position                    0x0
#define LCDD14_SEG16_size                        0x1
#define LCDD14_SEG16_value_mask                  0x1
#define LCDD14_SEG16_clear_mask                  0xFE

#define LCDD14_SEG17                             0x1
#define LCDD14_SEG17_address                     0x11E
#define LCDD14_SEG17_position                    0x1
#define LCDD14_SEG17_size                        0x1
#define LCDD14_SEG17_value_mask                  0x2
#define LCDD14_SEG17_clear_mask                  0xFD

#define LCDD14_SEG18                             0x2
#define LCDD14_SEG18_address                     0x11E
#define LCDD14_SEG18_position                    0x2
#define LCDD14_SEG18_size                        0x1
#define LCDD14_SEG18_value_mask                  0x4
#define LCDD14_SEG18_clear_mask                  0xFB

#define LCDD14_SEG19                             0x3
#define LCDD14_SEG19_address                     0x11E
#define LCDD14_SEG19_position                    0x3
#define LCDD14_SEG19_size                        0x1
#define LCDD14_SEG19_value_mask                  0x8
#define LCDD14_SEG19_clear_mask                  0xF7

#define LCDD14_SEG20                             0x4
#define LCDD14_SEG20_address                     0x11E
#define LCDD14_SEG20_position                    0x4
#define LCDD14_SEG20_size                        0x1
#define LCDD14_SEG20_value_mask                  0x10
#define LCDD14_SEG20_clear_mask                  0xEF

#define LCDD14_SEG21                             0x5
#define LCDD14_SEG21_address                     0x11E
#define LCDD14_SEG21_position                    0x5
#define LCDD14_SEG21_size                        0x1
#define LCDD14_SEG21_value_mask                  0x20
#define LCDD14_SEG21_clear_mask                  0xDF

#define LCDD14_SEG22                             0x6
#define LCDD14_SEG22_address                     0x11E
#define LCDD14_SEG22_position                    0x6
#define LCDD14_SEG22_size                        0x1
#define LCDD14_SEG22_value_mask                  0x40
#define LCDD14_SEG22_clear_mask                  0xBF

#define LCDD14_SEG23                             0x7
#define LCDD14_SEG23_address                     0x11E
#define LCDD14_SEG23_position                    0x7
#define LCDD14_SEG23_size                        0x1
#define LCDD14_SEG23_value_mask                  0x80
#define LCDD14_SEG23_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| LCDD15                                                                                                          0x11F |
#-----------------------------------------------------------------------------------------------------------------------#
| LCDD15_SEG31 | LCDD15_SEG30 | LCDD15_SEG29 | LCDD15_SEG28 | LCDD15_SEG27 | LCDD15_SEG26 | LCDD15_SEG25 | LCDD15_SEG24 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define LCDD15                                   0x0
#define LCDD15_address                           0x11F
#define LCDD15_position                          0x0
#define LCDD15_size                              0x8
#define LCDD15_value_mask                        0xFF
#define LCDD15_clear_mask                        0x0

#define LCDD15_SEG24                             0x0
#define LCDD15_SEG24_address                     0x11F
#define LCDD15_SEG24_position                    0x0
#define LCDD15_SEG24_size                        0x1
#define LCDD15_SEG24_value_mask                  0x1
#define LCDD15_SEG24_clear_mask                  0xFE

#define LCDD15_SEG25                             0x1
#define LCDD15_SEG25_address                     0x11F
#define LCDD15_SEG25_position                    0x1
#define LCDD15_SEG25_size                        0x1
#define LCDD15_SEG25_value_mask                  0x2
#define LCDD15_SEG25_clear_mask                  0xFD

#define LCDD15_SEG26                             0x2
#define LCDD15_SEG26_address                     0x11F
#define LCDD15_SEG26_position                    0x2
#define LCDD15_SEG26_size                        0x1
#define LCDD15_SEG26_value_mask                  0x4
#define LCDD15_SEG26_clear_mask                  0xFB

#define LCDD15_SEG27                             0x3
#define LCDD15_SEG27_address                     0x11F
#define LCDD15_SEG27_position                    0x3
#define LCDD15_SEG27_size                        0x1
#define LCDD15_SEG27_value_mask                  0x8
#define LCDD15_SEG27_clear_mask                  0xF7

#define LCDD15_SEG28                             0x4
#define LCDD15_SEG28_address                     0x11F
#define LCDD15_SEG28_position                    0x4
#define LCDD15_SEG28_size                        0x1
#define LCDD15_SEG28_value_mask                  0x10
#define LCDD15_SEG28_clear_mask                  0xEF

#define LCDD15_SEG29                             0x5
#define LCDD15_SEG29_address                     0x11F
#define LCDD15_SEG29_position                    0x5
#define LCDD15_SEG29_size                        0x1
#define LCDD15_SEG29_value_mask                  0x20
#define LCDD15_SEG29_clear_mask                  0xDF

#define LCDD15_SEG30                             0x6
#define LCDD15_SEG30_address                     0x11F
#define LCDD15_SEG30_position                    0x6
#define LCDD15_SEG30_size                        0x1
#define LCDD15_SEG30_value_mask                  0x40
#define LCDD15_SEG30_clear_mask                  0xBF

#define LCDD15_SEG31                             0x7
#define LCDD15_SEG31_address                     0x11F
#define LCDD15_SEG31_position                    0x7
#define LCDD15_SEG31_size                        0x1
#define LCDD15_SEG31_value_mask                  0x80
#define LCDD15_SEG31_clear_mask                  0x7F


/*----------------------------------------------------------------------#
| TRISF                                                           0x187 |
#-----------------------------------------------------------------------#
| TRISF7 | TRISF6 | TRISF5 | TRISF4 | TRISF3 | TRISF2 | TRISF1 | TRISF0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISF                                    0x0
#define TRISF_address                            0x187
#define TRISF_position                           0x0
#define TRISF_size                               0x8
#define TRISF_value_mask                         0xFF
#define TRISF_clear_mask                         0x0

#define TRISF0                                   0x0
#define TRISF0_address                           0x187
#define TRISF0_position                          0x0
#define TRISF0_size                              0x1
#define TRISF0_value_mask                        0x1
#define TRISF0_clear_mask                        0xFE

#define TRISF1                                   0x1
#define TRISF1_address                           0x187
#define TRISF1_position                          0x1
#define TRISF1_size                              0x1
#define TRISF1_value_mask                        0x2
#define TRISF1_clear_mask                        0xFD

#define TRISF2                                   0x2
#define TRISF2_address                           0x187
#define TRISF2_position                          0x2
#define TRISF2_size                              0x1
#define TRISF2_value_mask                        0x4
#define TRISF2_clear_mask                        0xFB

#define TRISF3                                   0x3
#define TRISF3_address                           0x187
#define TRISF3_position                          0x3
#define TRISF3_size                              0x1
#define TRISF3_value_mask                        0x8
#define TRISF3_clear_mask                        0xF7

#define TRISF4                                   0x4
#define TRISF4_address                           0x187
#define TRISF4_position                          0x4
#define TRISF4_size                              0x1
#define TRISF4_value_mask                        0x10
#define TRISF4_clear_mask                        0xEF

#define TRISF5                                   0x5
#define TRISF5_address                           0x187
#define TRISF5_position                          0x5
#define TRISF5_size                              0x1
#define TRISF5_value_mask                        0x20
#define TRISF5_clear_mask                        0xDF

#define TRISF6                                   0x6
#define TRISF6_address                           0x187
#define TRISF6_position                          0x6
#define TRISF6_size                              0x1
#define TRISF6_value_mask                        0x40
#define TRISF6_clear_mask                        0xBF

#define TRISF7                                   0x7
#define TRISF7_address                           0x187
#define TRISF7_position                          0x7
#define TRISF7_size                              0x1
#define TRISF7_value_mask                        0x80
#define TRISF7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| TRISG                                                           0x188 |
#-----------------------------------------------------------------------#
| TRISG7 | TRISG6 | TRISG5 | TRISG4 | TRISG3 | TRISG2 | TRISG1 | TRISG0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISG                                    0x0
#define TRISG_address                            0x188
#define TRISG_position                           0x0
#define TRISG_size                               0x8
#define TRISG_value_mask                         0xFF
#define TRISG_clear_mask                         0x0

#define TRISG0                                   0x0
#define TRISG0_address                           0x188
#define TRISG0_position                          0x0
#define TRISG0_size                              0x1
#define TRISG0_value_mask                        0x1
#define TRISG0_clear_mask                        0xFE

#define TRISG1                                   0x1
#define TRISG1_address                           0x188
#define TRISG1_position                          0x1
#define TRISG1_size                              0x1
#define TRISG1_value_mask                        0x2
#define TRISG1_clear_mask                        0xFD

#define TRISG2                                   0x2
#define TRISG2_address                           0x188
#define TRISG2_position                          0x2
#define TRISG2_size                              0x1
#define TRISG2_value_mask                        0x4
#define TRISG2_clear_mask                        0xFB

#define TRISG3                                   0x3
#define TRISG3_address                           0x188
#define TRISG3_position                          0x3
#define TRISG3_size                              0x1
#define TRISG3_value_mask                        0x8
#define TRISG3_clear_mask                        0xF7

#define TRISG4                                   0x4
#define TRISG4_address                           0x188
#define TRISG4_position                          0x4
#define TRISG4_size                              0x1
#define TRISG4_value_mask                        0x10
#define TRISG4_clear_mask                        0xEF

#define TRISG5                                   0x5
#define TRISG5_address                           0x188
#define TRISG5_position                          0x5
#define TRISG5_size                              0x1
#define TRISG5_value_mask                        0x20
#define TRISG5_clear_mask                        0xDF

#define TRISG6                                   0x6
#define TRISG6_address                           0x188
#define TRISG6_position                          0x6
#define TRISG6_size                              0x1
#define TRISG6_value_mask                        0x40
#define TRISG6_clear_mask                        0xBF

#define TRISG7                                   0x7
#define TRISG7_address                           0x188
#define TRISG7_position                          0x7
#define TRISG7_size                              0x1
#define TRISG7_value_mask                        0x80
#define TRISG7_clear_mask                        0x7F

#endif // _PIC16CR926_H_
