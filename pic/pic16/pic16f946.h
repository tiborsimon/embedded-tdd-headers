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

#ifndef _PIC16F946_H_
#define _PIC16F946_H_


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


/*-------------------------------------------------------------#
| PIR1                                                     0xC |
#--------------------------------------------------------------#
| EEIF | ADIF | RCIF | TXIF | SSPIF | CCP1IF | TMR2IF | TMR1IF |
#--------------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#-------------------------------------------------------------*/

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

#define EEIF                                     0x7
#define EEIF_address                             0x00C
#define EEIF_position                            0x7
#define EEIF_size                                0x1
#define EEIF_value_mask                          0x80
#define EEIF_clear_mask                          0x7F


/*-----------------------------------------------------#
| PIR2                                             0xD |
#------------------------------------------------------#
| OSFIF | C2IF | C1IF | LCDIF | - | LVDIF | - | CCP2IF |
#------------------------------------------------------#
| 7     | 6    | 5    | 4     | 3 | 2     | 1 | 0      |
#-----------------------------------------------------*/

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

#define LVDIF                                    0x2
#define LVDIF_address                            0x00D
#define LVDIF_position                           0x2
#define LVDIF_size                               0x1
#define LVDIF_value_mask                         0x4
#define LVDIF_clear_mask                         0xFB

#define LCDIF                                    0x4
#define LCDIF_address                            0x00D
#define LCDIF_position                           0x4
#define LCDIF_size                               0x1
#define LCDIF_value_mask                         0x10
#define LCDIF_clear_mask                         0xEF

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


/*-----------------------------------------------------------------------#
| T1CON                                                             0x10 |
#------------------------------------------------------------------------#
| T1GINV | T1GE | T1CKPS1 | T1CKPS0 | T1OSCEN | T1SYNC | TMR1CS | TMR1ON |
#------------------------------------------------------------------------#
| 7      | 6    | 5       | 4       | 3       | 2      | 1      | 0      |
#-----------------------------------------------------------------------*/

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

#define T1SYNC                                   0x2
#define T1SYNC_address                           0x010
#define T1SYNC_position                          0x2
#define T1SYNC_size                              0x1
#define T1SYNC_value_mask                        0x4
#define T1SYNC_clear_mask                        0xFB

#define T1INSYNC                                 0x2
#define T1INSYNC_address                         0x010
#define T1INSYNC_position                        0x2
#define T1INSYNC_size                            0x1
#define T1INSYNC_value_mask                      0x4
#define T1INSYNC_clear_mask                      0xFB

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

#define CCP1X                                    0x5
#define CCP1X_address                            0x017
#define CCP1X_position                           0x5
#define CCP1X_size                               0x1
#define CCP1X_value_mask                         0x20
#define CCP1X_clear_mask                         0xDF


/*------------------------------------------------------#
| RCSTA                                            0x18 |
#-------------------------------------------------------#
| SPEN | RX9 | SREN | CREN | ADDEN | FERR | OERR | RCD8 |
#-------------------------------------------------------#
| 7    | 6   | 5    | 4    | 3     | 2    | 1    | 0    |
#------------------------------------------------------*/

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
| - | - | CCP2X | CCP2Y | CCP2M3 | CCP2M2 | CCP2M1 | CCP2M0 |
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

#define CCP2Y                                    0x4
#define CCP2Y_address                            0x01D
#define CCP2Y_position                           0x4
#define CCP2Y_size                               0x1
#define CCP2Y_value_mask                         0x10
#define CCP2Y_clear_mask                         0xEF

#define CCP2X                                    0x5
#define CCP2X_address                            0x01D
#define CCP2X_position                           0x5
#define CCP2X_size                               0x1
#define CCP2X_value_mask                         0x20
#define CCP2X_clear_mask                         0xDF


/*---------------------------------------------------------#
| ADCON0                                              0x1F |
#----------------------------------------------------------#
| ADFM | VCFG1 | VCFG0 | CHS2 | CHS1 | CHS0 | nDONE | ADON |
#----------------------------------------------------------#
| 7    | 6     | 5     | 4    | 3    | 2    | 1     | 0    |
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
#define CHS_size                                 0x3
#define CHS_value_mask                           0x1C
#define CHS_clear_mask                           0xE3

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

#define VCFG                                     0x5
#define VCFG_address                             0x01F
#define VCFG_position                            0x5
#define VCFG_size                                0x2
#define VCFG_value_mask                          0x60
#define VCFG_clear_mask                          0x9F

#define VCFG0                                    0x5
#define VCFG0_address                            0x01F
#define VCFG0_position                           0x5
#define VCFG0_size                               0x1
#define VCFG0_value_mask                         0x20
#define VCFG0_clear_mask                         0xDF

#define VCFG1                                    0x6
#define VCFG1_address                            0x01F
#define VCFG1_position                           0x6
#define VCFG1_size                               0x1
#define VCFG1_value_mask                         0x40
#define VCFG1_clear_mask                         0xBF

#define ADFM                                     0x7
#define ADFM_address                             0x01F
#define ADFM_position                            0x7
#define ADFM_size                                0x1
#define ADFM_value_mask                          0x80
#define ADFM_clear_mask                          0x7F


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


/*----------------------------------------------------------------------#
| TRISE                                                            0x89 |
#-----------------------------------------------------------------------#
| TRISE7 | TRISE6 | TRISE5 | TRISE4 | TRISE3 | TRISE2 | TRISE1 | TRISE0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

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

#define TRISE5                                   0x5
#define TRISE5_address                           0x089
#define TRISE5_position                          0x5
#define TRISE5_size                              0x1
#define TRISE5_value_mask                        0x20
#define TRISE5_clear_mask                        0xDF

#define TRISE6                                   0x6
#define TRISE6_address                           0x089
#define TRISE6_position                          0x6
#define TRISE6_size                              0x1
#define TRISE6_value_mask                        0x40
#define TRISE6_clear_mask                        0xBF

#define TRISE7                                   0x7
#define TRISE7_address                           0x089
#define TRISE7_position                          0x7
#define TRISE7_size                              0x1
#define TRISE7_value_mask                        0x80
#define TRISE7_clear_mask                        0x7F


/*-------------------------------------------------------------#
| PIE1                                                    0x8C |
#--------------------------------------------------------------#
| EEIE | ADIE | RCIE | TXIE | SSPIE | CCP1IE | TMR2IE | TMR1IE |
#--------------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#-------------------------------------------------------------*/

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

#define EEIE                                     0x7
#define EEIE_address                             0x08C
#define EEIE_position                            0x7
#define EEIE_size                                0x1
#define EEIE_value_mask                          0x80
#define EEIE_clear_mask                          0x7F


/*-----------------------------------------------------#
| PIE2                                            0x8D |
#------------------------------------------------------#
| OSFIE | C2IE | C1IE | LCDIE | - | LVDIE | - | CCP2IE |
#------------------------------------------------------#
| 7     | 6    | 5    | 4     | 3 | 2     | 1 | 0      |
#-----------------------------------------------------*/

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

#define LVDIE                                    0x2
#define LVDIE_address                            0x08D
#define LVDIE_position                           0x2
#define LVDIE_size                               0x1
#define LVDIE_value_mask                         0x4
#define LVDIE_clear_mask                         0xFB

#define LCDIE                                    0x4
#define LCDIE_address                            0x08D
#define LCDIE_position                           0x4
#define LCDIE_size                               0x1
#define LCDIE_value_mask                         0x10
#define LCDIE_clear_mask                         0xEF

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


/*-----------------------------------------------------#
| ANSEL                                           0x91 |
#------------------------------------------------------#
| AN7 | ANS6 | ANS5 | ANS4 | ANS3 | ANS2 | ANS1 | ANS0 |
#------------------------------------------------------#
| 7   | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#-----------------------------------------------------*/

#define ANSEL                                    0x0
#define ANSEL_address                            0x091
#define ANSEL_position                           0x0
#define ANSEL_size                               0x8
#define ANSEL_value_mask                         0xFF
#define ANSEL_clear_mask                         0x0

#define ANS0                                     0x0
#define ANS0_address                             0x091
#define ANS0_position                            0x0
#define ANS0_size                                0x1
#define ANS0_value_mask                          0x1
#define ANS0_clear_mask                          0xFE

#define AN                                       0x0
#define AN_address                               0x091
#define AN_position                              0x0
#define AN_size                                  0x8
#define AN_value_mask                            0xFF
#define AN_clear_mask                            0x0

#define AN0                                      0x0
#define AN0_address                              0x091
#define AN0_position                             0x0
#define AN0_size                                 0x1
#define AN0_value_mask                           0x1
#define AN0_clear_mask                           0xFE

#define ANS1                                     0x1
#define ANS1_address                             0x091
#define ANS1_position                            0x1
#define ANS1_size                                0x1
#define ANS1_value_mask                          0x2
#define ANS1_clear_mask                          0xFD

#define AN1                                      0x1
#define AN1_address                              0x091
#define AN1_position                             0x1
#define AN1_size                                 0x1
#define AN1_value_mask                           0x2
#define AN1_clear_mask                           0xFD

#define ANS2                                     0x2
#define ANS2_address                             0x091
#define ANS2_position                            0x2
#define ANS2_size                                0x1
#define ANS2_value_mask                          0x4
#define ANS2_clear_mask                          0xFB

#define AN2                                      0x2
#define AN2_address                              0x091
#define AN2_position                             0x2
#define AN2_size                                 0x1
#define AN2_value_mask                           0x4
#define AN2_clear_mask                           0xFB

#define ANS3                                     0x3
#define ANS3_address                             0x091
#define ANS3_position                            0x3
#define ANS3_size                                0x1
#define ANS3_value_mask                          0x8
#define ANS3_clear_mask                          0xF7

#define AN3                                      0x3
#define AN3_address                              0x091
#define AN3_position                             0x3
#define AN3_size                                 0x1
#define AN3_value_mask                           0x8
#define AN3_clear_mask                           0xF7

#define ANS4                                     0x4
#define ANS4_address                             0x091
#define ANS4_position                            0x4
#define ANS4_size                                0x1
#define ANS4_value_mask                          0x10
#define ANS4_clear_mask                          0xEF

#define AN4                                      0x4
#define AN4_address                              0x091
#define AN4_position                             0x4
#define AN4_size                                 0x1
#define AN4_value_mask                           0x10
#define AN4_clear_mask                           0xEF

#define ANS5                                     0x5
#define ANS5_address                             0x091
#define ANS5_position                            0x5
#define ANS5_size                                0x1
#define ANS5_value_mask                          0x20
#define ANS5_clear_mask                          0xDF

#define AN5                                      0x5
#define AN5_address                              0x091
#define AN5_position                             0x5
#define AN5_size                                 0x1
#define AN5_value_mask                           0x20
#define AN5_clear_mask                           0xDF

#define ANS6                                     0x6
#define ANS6_address                             0x091
#define ANS6_position                            0x6
#define ANS6_size                                0x1
#define ANS6_value_mask                          0x40
#define ANS6_clear_mask                          0xBF

#define AN6                                      0x6
#define AN6_address                              0x091
#define AN6_position                             0x6
#define AN6_size                                 0x1
#define AN6_value_mask                           0x40
#define AN6_clear_mask                           0xBF

#define AN7                                      0x7
#define AN7_address                              0x091
#define AN7_position                             0x7
#define AN7_size                                 0x1
#define AN7_value_mask                           0x80
#define AN7_clear_mask                           0x7F

#define ANS7                                     0x7
#define ANS7_address                             0x091
#define ANS7_position                            0x7
#define ANS7_size                                0x1
#define ANS7_value_mask                          0x80
#define ANS7_clear_mask                          0x7F


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


/*--------------------------------------------------------------#
| WPUB                                                     0x95 |
#---------------------------------------------------------------#
| WPUB7 | WPUB6 | WPUB5 | WPUB4 | WPUB3 | WPUB2 | WPUB1 | WPUB0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define WPUB0                                    0x0
#define WPUB0_address                            0x095
#define WPUB0_position                           0x0
#define WPUB0_size                               0x1
#define WPUB0_value_mask                         0x1
#define WPUB0_clear_mask                         0xFE

#define WPU0                                     0x0
#define WPU0_address                             0x095
#define WPU0_position                            0x0
#define WPU0_size                                0x1
#define WPU0_value_mask                          0x1
#define WPU0_clear_mask                          0xFE

#define WPUB                                     0x0
#define WPUB_address                             0x095
#define WPUB_position                            0x0
#define WPUB_size                                0x8
#define WPUB_value_mask                          0xFF
#define WPUB_clear_mask                          0x0

#define WPUB1                                    0x1
#define WPUB1_address                            0x095
#define WPUB1_position                           0x1
#define WPUB1_size                               0x1
#define WPUB1_value_mask                         0x2
#define WPUB1_clear_mask                         0xFD

#define WPU1                                     0x1
#define WPU1_address                             0x095
#define WPU1_position                            0x1
#define WPU1_size                                0x1
#define WPU1_value_mask                          0x2
#define WPU1_clear_mask                          0xFD

#define WPUB2                                    0x2
#define WPUB2_address                            0x095
#define WPUB2_position                           0x2
#define WPUB2_size                               0x1
#define WPUB2_value_mask                         0x4
#define WPUB2_clear_mask                         0xFB

#define WPU2                                     0x2
#define WPU2_address                             0x095
#define WPU2_position                            0x2
#define WPU2_size                                0x1
#define WPU2_value_mask                          0x4
#define WPU2_clear_mask                          0xFB

#define WPUB3                                    0x3
#define WPUB3_address                            0x095
#define WPUB3_position                           0x3
#define WPUB3_size                               0x1
#define WPUB3_value_mask                         0x8
#define WPUB3_clear_mask                         0xF7

#define WPU3                                     0x3
#define WPU3_address                             0x095
#define WPU3_position                            0x3
#define WPU3_size                                0x1
#define WPU3_value_mask                          0x8
#define WPU3_clear_mask                          0xF7

#define WPUB4                                    0x4
#define WPUB4_address                            0x095
#define WPUB4_position                           0x4
#define WPUB4_size                               0x1
#define WPUB4_value_mask                         0x10
#define WPUB4_clear_mask                         0xEF

#define WPU4                                     0x4
#define WPU4_address                             0x095
#define WPU4_position                            0x4
#define WPU4_size                                0x1
#define WPU4_value_mask                          0x10
#define WPU4_clear_mask                          0xEF

#define WPUB5                                    0x5
#define WPUB5_address                            0x095
#define WPUB5_position                           0x5
#define WPUB5_size                               0x1
#define WPUB5_value_mask                         0x20
#define WPUB5_clear_mask                         0xDF

#define WPU5                                     0x5
#define WPU5_address                             0x095
#define WPU5_position                            0x5
#define WPU5_size                                0x1
#define WPU5_value_mask                          0x20
#define WPU5_clear_mask                          0xDF

#define WPUB6                                    0x6
#define WPUB6_address                            0x095
#define WPUB6_position                           0x6
#define WPUB6_size                               0x1
#define WPUB6_value_mask                         0x40
#define WPUB6_clear_mask                         0xBF

#define WPU6                                     0x6
#define WPU6_address                             0x095
#define WPU6_position                            0x6
#define WPU6_size                                0x1
#define WPU6_value_mask                          0x40
#define WPU6_clear_mask                          0xBF

#define WPUB7                                    0x7
#define WPUB7_address                            0x095
#define WPUB7_position                           0x7
#define WPUB7_size                               0x1
#define WPUB7_value_mask                         0x80
#define WPUB7_clear_mask                         0x7F

#define WPU7                                     0x7
#define WPU7_address                             0x095
#define WPU7_position                            0x7
#define WPU7_size                                0x1
#define WPU7_value_mask                          0x80
#define WPU7_clear_mask                          0x7F


/*--------------------------------------------#
| IOCB                                   0x96 |
#---------------------------------------------#
| IOC7 | IOCB6 | IOC5 | IOCB4 | - | - | - | - |
#---------------------------------------------#
| 7    | 6     | 5    | 4     | 3 | 2 | 1 | 0 |
#--------------------------------------------*/

#define IOCB4                                    0x4
#define IOCB4_address                            0x096
#define IOCB4_position                           0x4
#define IOCB4_size                               0x1
#define IOCB4_value_mask                         0x10
#define IOCB4_clear_mask                         0xEF

#define IOC4                                     0x4
#define IOC4_address                             0x096
#define IOC4_position                            0x4
#define IOC4_size                                0x1
#define IOC4_value_mask                          0x10
#define IOC4_clear_mask                          0xEF

#define IOCB                                     0x4
#define IOCB_address                             0x096
#define IOCB_position                            0x4
#define IOCB_size                                0x4
#define IOCB_value_mask                          0xF0
#define IOCB_clear_mask                          0xF

#define IOC5                                     0x5
#define IOC5_address                             0x096
#define IOC5_position                            0x5
#define IOC5_size                                0x1
#define IOC5_value_mask                          0x20
#define IOC5_clear_mask                          0xDF

#define IOCB5                                    0x5
#define IOCB5_address                            0x096
#define IOCB5_position                           0x5
#define IOCB5_size                               0x1
#define IOCB5_value_mask                         0x20
#define IOCB5_clear_mask                         0xDF

#define IOC6                                     0x6
#define IOC6_address                             0x096
#define IOC6_position                            0x6
#define IOC6_size                                0x1
#define IOC6_value_mask                          0x40
#define IOC6_clear_mask                          0xBF

#define IOCB6                                    0x6
#define IOCB6_address                            0x096
#define IOCB6_position                           0x6
#define IOCB6_size                               0x1
#define IOCB6_value_mask                         0x40
#define IOCB6_clear_mask                         0xBF

#define IOC7                                     0x7
#define IOC7_address                             0x096
#define IOC7_position                            0x7
#define IOC7_size                                0x1
#define IOC7_value_mask                          0x80
#define IOC7_clear_mask                          0x7F

#define IOCB7                                    0x7
#define IOCB7_address                            0x096
#define IOCB7_position                           0x7
#define IOCB7_size                               0x1
#define IOCB7_value_mask                         0x80
#define IOCB7_clear_mask                         0x7F


/*---------------------------------------#
| CMCON1                            0x97 |
#----------------------------------------#
| - | - | - | - | - | - | T1GSS | C2SYNC |
#----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1     | 0      |
#---------------------------------------*/

#define CMCON1                                   0x0
#define CMCON1_address                           0x097
#define CMCON1_position                          0x0
#define CMCON1_size                              0x8
#define CMCON1_value_mask                        0xFF
#define CMCON1_clear_mask                        0x0

#define C2SYNC                                   0x0
#define C2SYNC_address                           0x097
#define C2SYNC_position                          0x0
#define C2SYNC_size                              0x1
#define C2SYNC_value_mask                        0x1
#define C2SYNC_clear_mask                        0xFE

#define T1GSS                                    0x1
#define T1GSS_address                            0x097
#define T1GSS_position                           0x1
#define T1GSS_size                               0x1
#define T1GSS_value_mask                         0x2
#define T1GSS_clear_mask                         0xFD


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


/*------------------------------------------------------#
| CMCON0                                           0x9C |
#-------------------------------------------------------#
| C2OUT | C1OUT | C2INV | C1INV | CIS | CM2 | CM1 | CM0 |
#-------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3   | 2   | 1   | 0   |
#------------------------------------------------------*/

#define CMCON0                                   0x0
#define CMCON0_address                           0x09C
#define CMCON0_position                          0x0
#define CMCON0_size                              0x8
#define CMCON0_value_mask                        0xFF
#define CMCON0_clear_mask                        0x0

#define CM                                       0x0
#define CM_address                               0x09C
#define CM_position                              0x0
#define CM_size                                  0x3
#define CM_value_mask                            0x7
#define CM_clear_mask                            0xF8

#define CM0                                      0x0
#define CM0_address                              0x09C
#define CM0_position                             0x0
#define CM0_size                                 0x1
#define CM0_value_mask                           0x1
#define CM0_clear_mask                           0xFE

#define CM1                                      0x1
#define CM1_address                              0x09C
#define CM1_position                             0x1
#define CM1_size                                 0x1
#define CM1_value_mask                           0x2
#define CM1_clear_mask                           0xFD

#define CM2                                      0x2
#define CM2_address                              0x09C
#define CM2_position                             0x2
#define CM2_size                                 0x1
#define CM2_value_mask                           0x4
#define CM2_clear_mask                           0xFB

#define CIS                                      0x3
#define CIS_address                              0x09C
#define CIS_position                             0x3
#define CIS_size                                 0x1
#define CIS_value_mask                           0x8
#define CIS_clear_mask                           0xF7

#define C1INV                                    0x4
#define C1INV_address                            0x09C
#define C1INV_position                           0x4
#define C1INV_size                               0x1
#define C1INV_value_mask                         0x10
#define C1INV_clear_mask                         0xEF

#define C2INV                                    0x5
#define C2INV_address                            0x09C
#define C2INV_position                           0x5
#define C2INV_size                               0x1
#define C2INV_value_mask                         0x20
#define C2INV_clear_mask                         0xDF

#define C1OUT                                    0x6
#define C1OUT_address                            0x09C
#define C1OUT_position                           0x6
#define C1OUT_size                               0x1
#define C1OUT_value_mask                         0x40
#define C1OUT_clear_mask                         0xBF

#define C2OUT                                    0x7
#define C2OUT_address                            0x09C
#define C2OUT_position                           0x7
#define C2OUT_size                               0x1
#define C2OUT_value_mask                         0x80
#define C2OUT_clear_mask                         0x7F


/*-------------------------------------------#
| VRCON                                 0x9D |
#--------------------------------------------#
| VREN | - | VRR | - | VR3 | VR2 | VR1 | VR0 |
#--------------------------------------------#
| 7    | 6 | 5   | 4 | 3   | 2   | 1   | 0   |
#-------------------------------------------*/

#define VRCON                                    0x0
#define VRCON_address                            0x09D
#define VRCON_position                           0x0
#define VRCON_size                               0x8
#define VRCON_value_mask                         0xFF
#define VRCON_clear_mask                         0x0

#define VR0                                      0x0
#define VR0_address                              0x09D
#define VR0_position                             0x0
#define VR0_size                                 0x1
#define VR0_value_mask                           0x1
#define VR0_clear_mask                           0xFE

#define VR                                       0x0
#define VR_address                               0x09D
#define VR_position                              0x0
#define VR_size                                  0x4
#define VR_value_mask                            0xF
#define VR_clear_mask                            0xF0

#define VR1                                      0x1
#define VR1_address                              0x09D
#define VR1_position                             0x1
#define VR1_size                                 0x1
#define VR1_value_mask                           0x2
#define VR1_clear_mask                           0xFD

#define VR2                                      0x2
#define VR2_address                              0x09D
#define VR2_position                             0x2
#define VR2_size                                 0x1
#define VR2_value_mask                           0x4
#define VR2_clear_mask                           0xFB

#define VR3                                      0x3
#define VR3_address                              0x09D
#define VR3_position                             0x3
#define VR3_size                                 0x1
#define VR3_value_mask                           0x8
#define VR3_clear_mask                           0xF7

#define VRR                                      0x5
#define VRR_address                              0x09D
#define VRR_position                             0x5
#define VRR_size                                 0x1
#define VRR_value_mask                           0x20
#define VRR_clear_mask                           0xDF

#define VREN                                     0x7
#define VREN_address                             0x09D
#define VREN_position                            0x7
#define VREN_size                                0x1
#define VREN_value_mask                          0x80
#define VREN_clear_mask                          0x7F


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


/*-------------------------------------------------------#
| WDTCON                                           0x105 |
#--------------------------------------------------------#
| - | - | - | WDTPS3 | WDTPS2 | WDTPS1 | WDTPS0 | SWDTEN |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define WDTCON                                   0x0
#define WDTCON_address                           0x105
#define WDTCON_position                          0x0
#define WDTCON_size                              0x8
#define WDTCON_value_mask                        0xFF
#define WDTCON_clear_mask                        0x0

#define SWDTEN                                   0x0
#define SWDTEN_address                           0x105
#define SWDTEN_position                          0x0
#define SWDTEN_size                              0x1
#define SWDTEN_value_mask                        0x1
#define SWDTEN_clear_mask                        0xFE

#define SWDTE                                    0x0
#define SWDTE_address                            0x105
#define SWDTE_position                           0x0
#define SWDTE_size                               0x1
#define SWDTE_value_mask                         0x1
#define SWDTE_clear_mask                         0xFE

#define WDTPS                                    0x1
#define WDTPS_address                            0x105
#define WDTPS_position                           0x1
#define WDTPS_size                               0x4
#define WDTPS_value_mask                         0x1E
#define WDTPS_clear_mask                         0xE1

#define WDTPS0                                   0x1
#define WDTPS0_address                           0x105
#define WDTPS0_position                          0x1
#define WDTPS0_size                              0x1
#define WDTPS0_value_mask                        0x2
#define WDTPS0_clear_mask                        0xFD

#define WDTPS1                                   0x2
#define WDTPS1_address                           0x105
#define WDTPS1_position                          0x2
#define WDTPS1_size                              0x1
#define WDTPS1_value_mask                        0x4
#define WDTPS1_clear_mask                        0xFB

#define WDTPS2                                   0x3
#define WDTPS2_address                           0x105
#define WDTPS2_position                          0x3
#define WDTPS2_size                              0x1
#define WDTPS2_value_mask                        0x8
#define WDTPS2_clear_mask                        0xF7

#define WDTPS3                                   0x4
#define WDTPS3_address                           0x105
#define WDTPS3_position                          0x4
#define WDTPS3_size                              0x1
#define WDTPS3_value_mask                        0x10
#define WDTPS3_clear_mask                        0xEF


/*----------------------------------------------------------#
| LCDCON                                              0x107 |
#-----------------------------------------------------------#
| LCDEN | SLPEN | WERR | VLCDEN | CS1 | CS0 | LMUX1 | LMUX0 |
#-----------------------------------------------------------#
| 7     | 6     | 5    | 4      | 3   | 2   | 1     | 0     |
#----------------------------------------------------------*/

#define LCDCON                                   0x0
#define LCDCON_address                           0x107
#define LCDCON_position                          0x0
#define LCDCON_size                              0x8
#define LCDCON_value_mask                        0xFF
#define LCDCON_clear_mask                        0x0

#define LMUX0                                    0x0
#define LMUX0_address                            0x107
#define LMUX0_position                           0x0
#define LMUX0_size                               0x1
#define LMUX0_value_mask                         0x1
#define LMUX0_clear_mask                         0xFE

#define LMUX                                     0x0
#define LMUX_address                             0x107
#define LMUX_position                            0x0
#define LMUX_size                                0x2
#define LMUX_value_mask                          0x3
#define LMUX_clear_mask                          0xFC

#define LMUX1                                    0x1
#define LMUX1_address                            0x107
#define LMUX1_position                           0x1
#define LMUX1_size                               0x1
#define LMUX1_value_mask                         0x2
#define LMUX1_clear_mask                         0xFD

#define CS                                       0x2
#define CS_address                               0x107
#define CS_position                              0x2
#define CS_size                                  0x2
#define CS_value_mask                            0xC
#define CS_clear_mask                            0xF3

#define CS0                                      0x2
#define CS0_address                              0x107
#define CS0_position                             0x2
#define CS0_size                                 0x1
#define CS0_value_mask                           0x4
#define CS0_clear_mask                           0xFB

#define CS1                                      0x3
#define CS1_address                              0x107
#define CS1_position                             0x3
#define CS1_size                                 0x1
#define CS1_value_mask                           0x8
#define CS1_clear_mask                           0xF7

#define VLCDEN                                   0x4
#define VLCDEN_address                           0x107
#define VLCDEN_position                          0x4
#define VLCDEN_size                              0x1
#define VLCDEN_value_mask                        0x10
#define VLCDEN_clear_mask                        0xEF

#define WERR                                     0x5
#define WERR_address                             0x107
#define WERR_position                            0x5
#define WERR_size                                0x1
#define WERR_value_mask                          0x20
#define WERR_clear_mask                          0xDF

#define SLPEN                                    0x6
#define SLPEN_address                            0x107
#define SLPEN_position                           0x6
#define SLPEN_size                               0x1
#define SLPEN_value_mask                         0x40
#define SLPEN_clear_mask                         0xBF

#define LCDEN                                    0x7
#define LCDEN_address                            0x107
#define LCDEN_position                           0x7
#define LCDEN_size                               0x1
#define LCDEN_value_mask                         0x80
#define LCDEN_clear_mask                         0x7F


/*-------------------------------------------------#
| LCDPS                                      0x108 |
#--------------------------------------------------#
| WFT | BIASMD | LCDA | WA | LP3 | LP2 | LP1 | LP0 |
#--------------------------------------------------#
| 7   | 6      | 5    | 4  | 3   | 2   | 1   | 0   |
#-------------------------------------------------*/

#define LCDPS                                    0x0
#define LCDPS_address                            0x108
#define LCDPS_position                           0x0
#define LCDPS_size                               0x8
#define LCDPS_value_mask                         0xFF
#define LCDPS_clear_mask                         0x0

#define LP                                       0x0
#define LP_address                               0x108
#define LP_position                              0x0
#define LP_size                                  0x4
#define LP_value_mask                            0xF
#define LP_clear_mask                            0xF0

#define LP0                                      0x0
#define LP0_address                              0x108
#define LP0_position                             0x0
#define LP0_size                                 0x1
#define LP0_value_mask                           0x1
#define LP0_clear_mask                           0xFE

#define LP1                                      0x1
#define LP1_address                              0x108
#define LP1_position                             0x1
#define LP1_size                                 0x1
#define LP1_value_mask                           0x2
#define LP1_clear_mask                           0xFD

#define LP2                                      0x2
#define LP2_address                              0x108
#define LP2_position                             0x2
#define LP2_size                                 0x1
#define LP2_value_mask                           0x4
#define LP2_clear_mask                           0xFB

#define LP3                                      0x3
#define LP3_address                              0x108
#define LP3_position                             0x3
#define LP3_size                                 0x1
#define LP3_value_mask                           0x8
#define LP3_clear_mask                           0xF7

#define WA                                       0x4
#define WA_address                               0x108
#define WA_position                              0x4
#define WA_size                                  0x1
#define WA_value_mask                            0x10
#define WA_clear_mask                            0xEF

#define LCDA                                     0x5
#define LCDA_address                             0x108
#define LCDA_position                            0x5
#define LCDA_size                                0x1
#define LCDA_value_mask                          0x20
#define LCDA_clear_mask                          0xDF

#define BIASMD                                   0x6
#define BIASMD_address                           0x108
#define BIASMD_position                          0x6
#define BIASMD_size                              0x1
#define BIASMD_value_mask                        0x40
#define BIASMD_clear_mask                        0xBF

#define WFT                                      0x7
#define WFT_address                              0x108
#define WFT_position                             0x7
#define WFT_size                                 0x1
#define WFT_value_mask                           0x80
#define WFT_clear_mask                           0x7F


/*--------------------------------------------------#
| LVDCON                                      0x109 |
#---------------------------------------------------#
| - | - | IRVST | LVDEN | - | LVDL2 | LVDL1 | LVDL0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2     | 1     | 0     |
#--------------------------------------------------*/

#define LVDCON                                   0x0
#define LVDCON_address                           0x109
#define LVDCON_position                          0x0
#define LVDCON_size                              0x8
#define LVDCON_value_mask                        0xFF
#define LVDCON_clear_mask                        0x0

#define LVDL0                                    0x0
#define LVDL0_address                            0x109
#define LVDL0_position                           0x0
#define LVDL0_size                               0x1
#define LVDL0_value_mask                         0x1
#define LVDL0_clear_mask                         0xFE

#define LVDL                                     0x0
#define LVDL_address                             0x109
#define LVDL_position                            0x0
#define LVDL_size                                0x3
#define LVDL_value_mask                          0x7
#define LVDL_clear_mask                          0xF8

#define LVDL1                                    0x1
#define LVDL1_address                            0x109
#define LVDL1_position                           0x1
#define LVDL1_size                               0x1
#define LVDL1_value_mask                         0x2
#define LVDL1_clear_mask                         0xFD

#define LVDL2                                    0x2
#define LVDL2_address                            0x109
#define LVDL2_position                           0x2
#define LVDL2_size                               0x1
#define LVDL2_value_mask                         0x4
#define LVDL2_clear_mask                         0xFB

#define LVDEN                                    0x4
#define LVDEN_address                            0x109
#define LVDEN_position                           0x4
#define LVDEN_size                               0x1
#define LVDEN_value_mask                         0x10
#define LVDEN_clear_mask                         0xEF

#define IRVST                                    0x5
#define IRVST_address                            0x109
#define IRVST_position                           0x5
#define IRVST_size                               0x1
#define IRVST_value_mask                         0x20
#define IRVST_clear_mask                         0xDF


/*------------------------------------------------------------------------------#
| EEDATL                                                                  0x10C |
#-------------------------------------------------------------------------------#
| EEDATL7 | EEDATL6 | EEDATL5 | EEDATL4 | EEDATL3 | EEDATL2 | EEDATL1 | EEDATL0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define EEDATL                                   0x0
#define EEDATL_address                           0x10C
#define EEDATL_position                          0x0
#define EEDATL_size                              0x8
#define EEDATL_value_mask                        0xFF
#define EEDATL_clear_mask                        0x0

#define EEDATL0                                  0x0
#define EEDATL0_address                          0x10C
#define EEDATL0_position                         0x0
#define EEDATL0_size                             0x1
#define EEDATL0_value_mask                       0x1
#define EEDATL0_clear_mask                       0xFE

#define EEDATL1                                  0x1
#define EEDATL1_address                          0x10C
#define EEDATL1_position                         0x1
#define EEDATL1_size                             0x1
#define EEDATL1_value_mask                       0x2
#define EEDATL1_clear_mask                       0xFD

#define EEDATL2                                  0x2
#define EEDATL2_address                          0x10C
#define EEDATL2_position                         0x2
#define EEDATL2_size                             0x1
#define EEDATL2_value_mask                       0x4
#define EEDATL2_clear_mask                       0xFB

#define EEDATL3                                  0x3
#define EEDATL3_address                          0x10C
#define EEDATL3_position                         0x3
#define EEDATL3_size                             0x1
#define EEDATL3_value_mask                       0x8
#define EEDATL3_clear_mask                       0xF7

#define EEDATL4                                  0x4
#define EEDATL4_address                          0x10C
#define EEDATL4_position                         0x4
#define EEDATL4_size                             0x1
#define EEDATL4_value_mask                       0x10
#define EEDATL4_clear_mask                       0xEF

#define EEDATL5                                  0x5
#define EEDATL5_address                          0x10C
#define EEDATL5_position                         0x5
#define EEDATL5_size                             0x1
#define EEDATL5_value_mask                       0x20
#define EEDATL5_clear_mask                       0xDF

#define EEDATL6                                  0x6
#define EEDATL6_address                          0x10C
#define EEDATL6_position                         0x6
#define EEDATL6_size                             0x1
#define EEDATL6_value_mask                       0x40
#define EEDATL6_clear_mask                       0xBF

#define EEDATL7                                  0x7
#define EEDATL7_address                          0x10C
#define EEDATL7_position                         0x7
#define EEDATL7_size                             0x1
#define EEDATL7_value_mask                       0x80
#define EEDATL7_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| EEADRL                                                                  0x10D |
#-------------------------------------------------------------------------------#
| EEADRL7 | EEADRL6 | EEADRL5 | EEADRL4 | EEADRL3 | EEADRL2 | EEADRL1 | EEADRL0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define EEADRL                                   0x0
#define EEADRL_address                           0x10D
#define EEADRL_position                          0x0
#define EEADRL_size                              0x8
#define EEADRL_value_mask                        0xFF
#define EEADRL_clear_mask                        0x0

#define EEADRL0                                  0x0
#define EEADRL0_address                          0x10D
#define EEADRL0_position                         0x0
#define EEADRL0_size                             0x1
#define EEADRL0_value_mask                       0x1
#define EEADRL0_clear_mask                       0xFE

#define EEADRL1                                  0x1
#define EEADRL1_address                          0x10D
#define EEADRL1_position                         0x1
#define EEADRL1_size                             0x1
#define EEADRL1_value_mask                       0x2
#define EEADRL1_clear_mask                       0xFD

#define EEADRL2                                  0x2
#define EEADRL2_address                          0x10D
#define EEADRL2_position                         0x2
#define EEADRL2_size                             0x1
#define EEADRL2_value_mask                       0x4
#define EEADRL2_clear_mask                       0xFB

#define EEADRL3                                  0x3
#define EEADRL3_address                          0x10D
#define EEADRL3_position                         0x3
#define EEADRL3_size                             0x1
#define EEADRL3_value_mask                       0x8
#define EEADRL3_clear_mask                       0xF7

#define EEADRL4                                  0x4
#define EEADRL4_address                          0x10D
#define EEADRL4_position                         0x4
#define EEADRL4_size                             0x1
#define EEADRL4_value_mask                       0x10
#define EEADRL4_clear_mask                       0xEF

#define EEADRL5                                  0x5
#define EEADRL5_address                          0x10D
#define EEADRL5_position                         0x5
#define EEADRL5_size                             0x1
#define EEADRL5_value_mask                       0x20
#define EEADRL5_clear_mask                       0xDF

#define EEADRL6                                  0x6
#define EEADRL6_address                          0x10D
#define EEADRL6_position                         0x6
#define EEADRL6_size                             0x1
#define EEADRL6_value_mask                       0x40
#define EEADRL6_clear_mask                       0xBF

#define EEADRL7                                  0x7
#define EEADRL7_address                          0x10D
#define EEADRL7_position                         0x7
#define EEADRL7_size                             0x1
#define EEADRL7_value_mask                       0x80
#define EEADRL7_clear_mask                       0x7F


/*------------------------------------------------------------------#
| EEDATH                                                      0x10E |
#-------------------------------------------------------------------#
| - | - | EEDATH5 | EEDATH4 | EEDATH3 | EEDATH2 | EEDATH1 | EEDATH0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define EEDATH                                   0x0
#define EEDATH_address                           0x10E
#define EEDATH_position                          0x0
#define EEDATH_size                              0x8
#define EEDATH_value_mask                        0xFF
#define EEDATH_clear_mask                        0x0

#define EEDATH0                                  0x0
#define EEDATH0_address                          0x10E
#define EEDATH0_position                         0x0
#define EEDATH0_size                             0x1
#define EEDATH0_value_mask                       0x1
#define EEDATH0_clear_mask                       0xFE

#define EEDATH1                                  0x1
#define EEDATH1_address                          0x10E
#define EEDATH1_position                         0x1
#define EEDATH1_size                             0x1
#define EEDATH1_value_mask                       0x2
#define EEDATH1_clear_mask                       0xFD

#define EEDATH2                                  0x2
#define EEDATH2_address                          0x10E
#define EEDATH2_position                         0x2
#define EEDATH2_size                             0x1
#define EEDATH2_value_mask                       0x4
#define EEDATH2_clear_mask                       0xFB

#define EEDATH3                                  0x3
#define EEDATH3_address                          0x10E
#define EEDATH3_position                         0x3
#define EEDATH3_size                             0x1
#define EEDATH3_value_mask                       0x8
#define EEDATH3_clear_mask                       0xF7

#define EEDATH4                                  0x4
#define EEDATH4_address                          0x10E
#define EEDATH4_position                         0x4
#define EEDATH4_size                             0x1
#define EEDATH4_value_mask                       0x10
#define EEDATH4_clear_mask                       0xEF

#define EEDATH5                                  0x5
#define EEDATH5_address                          0x10E
#define EEDATH5_position                         0x5
#define EEDATH5_size                             0x1
#define EEDATH5_value_mask                       0x20
#define EEDATH5_clear_mask                       0xDF


/*------------------------------------------------------------#
| EEADRH                                                0x10F |
#-------------------------------------------------------------#
| - | - | - | EEADRH4 | EEADRH3 | EEADRH2 | EEADRH1 | EEADRH0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define EEADRH                                   0x0
#define EEADRH_address                           0x10F
#define EEADRH_position                          0x0
#define EEADRH_size                              0x8
#define EEADRH_value_mask                        0xFF
#define EEADRH_clear_mask                        0x0

#define EEADRH0                                  0x0
#define EEADRH0_address                          0x10F
#define EEADRH0_position                         0x0
#define EEADRH0_size                             0x1
#define EEADRH0_value_mask                       0x1
#define EEADRH0_clear_mask                       0xFE

#define EEADRH1                                  0x1
#define EEADRH1_address                          0x10F
#define EEADRH1_position                         0x1
#define EEADRH1_size                             0x1
#define EEADRH1_value_mask                       0x2
#define EEADRH1_clear_mask                       0xFD

#define EEADRH2                                  0x2
#define EEADRH2_address                          0x10F
#define EEADRH2_position                         0x2
#define EEADRH2_size                             0x1
#define EEADRH2_value_mask                       0x4
#define EEADRH2_clear_mask                       0xFB

#define EEADRH3                                  0x3
#define EEADRH3_address                          0x10F
#define EEADRH3_position                         0x3
#define EEADRH3_size                             0x1
#define EEADRH3_value_mask                       0x8
#define EEADRH3_clear_mask                       0xF7

#define EEADRH4                                  0x4
#define EEADRH4_address                          0x10F
#define EEADRH4_position                         0x4
#define EEADRH4_size                             0x1
#define EEADRH4_value_mask                       0x10
#define EEADRH4_clear_mask                       0xEF


/*----------------------------------------------------------------------------------------------------------#
| LCDDATA0                                                                                            0x110 |
#-----------------------------------------------------------------------------------------------------------#
| SEG7COM0 | SEG6COM0 | LCDDATA0_SEG5 | LCDDATA0_SEG4 | SEG3COM0 | LCDDATA0_SEG2 | LCDDATA0_SEG1 | SEG0COM0 |
#-----------------------------------------------------------------------------------------------------------#
| 7        | 6        | 5             | 4             | 3        | 2             | 1             | 0        |
#----------------------------------------------------------------------------------------------------------*/

#define LCDDATA0                                 0x0
#define LCDDATA0_address                         0x110
#define LCDDATA0_position                        0x0
#define LCDDATA0_size                            0x8
#define LCDDATA0_value_mask                      0xFF
#define LCDDATA0_clear_mask                      0x0

#define SEG0COM0                                 0x0
#define SEG0COM0_address                         0x110
#define SEG0COM0_position                        0x0
#define SEG0COM0_size                            0x1
#define SEG0COM0_value_mask                      0x1
#define SEG0COM0_clear_mask                      0xFE

#define LCDDATA0_SEG0                            0x0
#define LCDDATA0_SEG0_address                    0x110
#define LCDDATA0_SEG0_position                   0x0
#define LCDDATA0_SEG0_size                       0x1
#define LCDDATA0_SEG0_value_mask                 0x1
#define LCDDATA0_SEG0_clear_mask                 0xFE

#define S0C0                                     0x0
#define S0C0_address                             0x110
#define S0C0_position                            0x0
#define S0C0_size                                0x1
#define S0C0_value_mask                          0x1
#define S0C0_clear_mask                          0xFE

#define LCDDATA0_SEG1                            0x1
#define LCDDATA0_SEG1_address                    0x110
#define LCDDATA0_SEG1_position                   0x1
#define LCDDATA0_SEG1_size                       0x1
#define LCDDATA0_SEG1_value_mask                 0x2
#define LCDDATA0_SEG1_clear_mask                 0xFD

#define SEG1COM0                                 0x1
#define SEG1COM0_address                         0x110
#define SEG1COM0_position                        0x1
#define SEG1COM0_size                            0x1
#define SEG1COM0_value_mask                      0x2
#define SEG1COM0_clear_mask                      0xFD

#define S1C0                                     0x1
#define S1C0_address                             0x110
#define S1C0_position                            0x1
#define S1C0_size                                0x1
#define S1C0_value_mask                          0x2
#define S1C0_clear_mask                          0xFD

#define LCDDATA0_SEG2                            0x2
#define LCDDATA0_SEG2_address                    0x110
#define LCDDATA0_SEG2_position                   0x2
#define LCDDATA0_SEG2_size                       0x1
#define LCDDATA0_SEG2_value_mask                 0x4
#define LCDDATA0_SEG2_clear_mask                 0xFB

#define S2C0                                     0x2
#define S2C0_address                             0x110
#define S2C0_position                            0x2
#define S2C0_size                                0x1
#define S2C0_value_mask                          0x4
#define S2C0_clear_mask                          0xFB

#define SEG2COM0                                 0x2
#define SEG2COM0_address                         0x110
#define SEG2COM0_position                        0x2
#define SEG2COM0_size                            0x1
#define SEG2COM0_value_mask                      0x4
#define SEG2COM0_clear_mask                      0xFB

#define SEG3COM0                                 0x3
#define SEG3COM0_address                         0x110
#define SEG3COM0_position                        0x3
#define SEG3COM0_size                            0x1
#define SEG3COM0_value_mask                      0x8
#define SEG3COM0_clear_mask                      0xF7

#define LCDDATA0_SEG3                            0x3
#define LCDDATA0_SEG3_address                    0x110
#define LCDDATA0_SEG3_position                   0x3
#define LCDDATA0_SEG3_size                       0x1
#define LCDDATA0_SEG3_value_mask                 0x8
#define LCDDATA0_SEG3_clear_mask                 0xF7

#define S3C0                                     0x3
#define S3C0_address                             0x110
#define S3C0_position                            0x3
#define S3C0_size                                0x1
#define S3C0_value_mask                          0x8
#define S3C0_clear_mask                          0xF7

#define LCDDATA0_SEG4                            0x4
#define LCDDATA0_SEG4_address                    0x110
#define LCDDATA0_SEG4_position                   0x4
#define LCDDATA0_SEG4_size                       0x1
#define LCDDATA0_SEG4_value_mask                 0x10
#define LCDDATA0_SEG4_clear_mask                 0xEF

#define SEG4COM0                                 0x4
#define SEG4COM0_address                         0x110
#define SEG4COM0_position                        0x4
#define SEG4COM0_size                            0x1
#define SEG4COM0_value_mask                      0x10
#define SEG4COM0_clear_mask                      0xEF

#define S4C0                                     0x4
#define S4C0_address                             0x110
#define S4C0_position                            0x4
#define S4C0_size                                0x1
#define S4C0_value_mask                          0x10
#define S4C0_clear_mask                          0xEF

#define LCDDATA0_SEG5                            0x5
#define LCDDATA0_SEG5_address                    0x110
#define LCDDATA0_SEG5_position                   0x5
#define LCDDATA0_SEG5_size                       0x1
#define LCDDATA0_SEG5_value_mask                 0x20
#define LCDDATA0_SEG5_clear_mask                 0xDF

#define S5C0                                     0x5
#define S5C0_address                             0x110
#define S5C0_position                            0x5
#define S5C0_size                                0x1
#define S5C0_value_mask                          0x20
#define S5C0_clear_mask                          0xDF

#define SEG5COM0                                 0x5
#define SEG5COM0_address                         0x110
#define SEG5COM0_position                        0x5
#define SEG5COM0_size                            0x1
#define SEG5COM0_value_mask                      0x20
#define SEG5COM0_clear_mask                      0xDF

#define SEG6COM0                                 0x6
#define SEG6COM0_address                         0x110
#define SEG6COM0_position                        0x6
#define SEG6COM0_size                            0x1
#define SEG6COM0_value_mask                      0x40
#define SEG6COM0_clear_mask                      0xBF

#define LCDDATA0_SEG6                            0x6
#define LCDDATA0_SEG6_address                    0x110
#define LCDDATA0_SEG6_position                   0x6
#define LCDDATA0_SEG6_size                       0x1
#define LCDDATA0_SEG6_value_mask                 0x40
#define LCDDATA0_SEG6_clear_mask                 0xBF

#define S6C0                                     0x6
#define S6C0_address                             0x110
#define S6C0_position                            0x6
#define S6C0_size                                0x1
#define S6C0_value_mask                          0x40
#define S6C0_clear_mask                          0xBF

#define SEG7COM0                                 0x7
#define SEG7COM0_address                         0x110
#define SEG7COM0_position                        0x7
#define SEG7COM0_size                            0x1
#define SEG7COM0_value_mask                      0x80
#define SEG7COM0_clear_mask                      0x7F

#define LCDDATA0_SEG7                            0x7
#define LCDDATA0_SEG7_address                    0x110
#define LCDDATA0_SEG7_position                   0x7
#define LCDDATA0_SEG7_size                       0x1
#define LCDDATA0_SEG7_value_mask                 0x80
#define LCDDATA0_SEG7_clear_mask                 0x7F

#define S7C0                                     0x7
#define S7C0_address                             0x110
#define S7C0_position                            0x7
#define S7C0_size                                0x1
#define S7C0_value_mask                          0x80
#define S7C0_clear_mask                          0x7F


/*----------------------------------------------------------------------------------------------------#
| LCDDATA1                                                                                      0x111 |
#-----------------------------------------------------------------------------------------------------#
| SEG15COM0 | S14C0 | S13C0 | LCDDATA1_SEG12 | LCDDATA1_SEG11 | LCDDATA1_SEG10 | LCDDATA1_SEG9 | S8C0 |
#-----------------------------------------------------------------------------------------------------#
| 7         | 6     | 5     | 4              | 3              | 2              | 1             | 0    |
#----------------------------------------------------------------------------------------------------*/

#define LCDDATA1                                 0x0
#define LCDDATA1_address                         0x111
#define LCDDATA1_position                        0x0
#define LCDDATA1_size                            0x8
#define LCDDATA1_value_mask                      0xFF
#define LCDDATA1_clear_mask                      0x0

#define LCDDATA1_SEG8                            0x0
#define LCDDATA1_SEG8_address                    0x111
#define LCDDATA1_SEG8_position                   0x0
#define LCDDATA1_SEG8_size                       0x1
#define LCDDATA1_SEG8_value_mask                 0x1
#define LCDDATA1_SEG8_clear_mask                 0xFE

#define S8C0                                     0x0
#define S8C0_address                             0x111
#define S8C0_position                            0x0
#define S8C0_size                                0x1
#define S8C0_value_mask                          0x1
#define S8C0_clear_mask                          0xFE

#define SEG8COM0                                 0x0
#define SEG8COM0_address                         0x111
#define SEG8COM0_position                        0x0
#define SEG8COM0_size                            0x1
#define SEG8COM0_value_mask                      0x1
#define SEG8COM0_clear_mask                      0xFE

#define LCDDATA1_SEG9                            0x1
#define LCDDATA1_SEG9_address                    0x111
#define LCDDATA1_SEG9_position                   0x1
#define LCDDATA1_SEG9_size                       0x1
#define LCDDATA1_SEG9_value_mask                 0x2
#define LCDDATA1_SEG9_clear_mask                 0xFD

#define S9C0                                     0x1
#define S9C0_address                             0x111
#define S9C0_position                            0x1
#define S9C0_size                                0x1
#define S9C0_value_mask                          0x2
#define S9C0_clear_mask                          0xFD

#define SEG9COM0                                 0x1
#define SEG9COM0_address                         0x111
#define SEG9COM0_position                        0x1
#define SEG9COM0_size                            0x1
#define SEG9COM0_value_mask                      0x2
#define SEG9COM0_clear_mask                      0xFD

#define LCDDATA1_SEG10                           0x2
#define LCDDATA1_SEG10_address                   0x111
#define LCDDATA1_SEG10_position                  0x2
#define LCDDATA1_SEG10_size                      0x1
#define LCDDATA1_SEG10_value_mask                0x4
#define LCDDATA1_SEG10_clear_mask                0xFB

#define SEG10COM0                                0x2
#define SEG10COM0_address                        0x111
#define SEG10COM0_position                       0x2
#define SEG10COM0_size                           0x1
#define SEG10COM0_value_mask                     0x4
#define SEG10COM0_clear_mask                     0xFB

#define S10C0                                    0x2
#define S10C0_address                            0x111
#define S10C0_position                           0x2
#define S10C0_size                               0x1
#define S10C0_value_mask                         0x4
#define S10C0_clear_mask                         0xFB

#define LCDDATA1_SEG11                           0x3
#define LCDDATA1_SEG11_address                   0x111
#define LCDDATA1_SEG11_position                  0x3
#define LCDDATA1_SEG11_size                      0x1
#define LCDDATA1_SEG11_value_mask                0x8
#define LCDDATA1_SEG11_clear_mask                0xF7

#define S11C0                                    0x3
#define S11C0_address                            0x111
#define S11C0_position                           0x3
#define S11C0_size                               0x1
#define S11C0_value_mask                         0x8
#define S11C0_clear_mask                         0xF7

#define SEG11COM0                                0x3
#define SEG11COM0_address                        0x111
#define SEG11COM0_position                       0x3
#define SEG11COM0_size                           0x1
#define SEG11COM0_value_mask                     0x8
#define SEG11COM0_clear_mask                     0xF7

#define LCDDATA1_SEG12                           0x4
#define LCDDATA1_SEG12_address                   0x111
#define LCDDATA1_SEG12_position                  0x4
#define LCDDATA1_SEG12_size                      0x1
#define LCDDATA1_SEG12_value_mask                0x10
#define LCDDATA1_SEG12_clear_mask                0xEF

#define S12C0                                    0x4
#define S12C0_address                            0x111
#define S12C0_position                           0x4
#define S12C0_size                               0x1
#define S12C0_value_mask                         0x10
#define S12C0_clear_mask                         0xEF

#define SEG12COM0                                0x4
#define SEG12COM0_address                        0x111
#define SEG12COM0_position                       0x4
#define SEG12COM0_size                           0x1
#define SEG12COM0_value_mask                     0x10
#define SEG12COM0_clear_mask                     0xEF

#define S13C0                                    0x5
#define S13C0_address                            0x111
#define S13C0_position                           0x5
#define S13C0_size                               0x1
#define S13C0_value_mask                         0x20
#define S13C0_clear_mask                         0xDF

#define LCDDATA1_SEG13                           0x5
#define LCDDATA1_SEG13_address                   0x111
#define LCDDATA1_SEG13_position                  0x5
#define LCDDATA1_SEG13_size                      0x1
#define LCDDATA1_SEG13_value_mask                0x20
#define LCDDATA1_SEG13_clear_mask                0xDF

#define SEG13COM0                                0x5
#define SEG13COM0_address                        0x111
#define SEG13COM0_position                       0x5
#define SEG13COM0_size                           0x1
#define SEG13COM0_value_mask                     0x20
#define SEG13COM0_clear_mask                     0xDF

#define S14C0                                    0x6
#define S14C0_address                            0x111
#define S14C0_position                           0x6
#define S14C0_size                               0x1
#define S14C0_value_mask                         0x40
#define S14C0_clear_mask                         0xBF

#define LCDDATA1_SEG14                           0x6
#define LCDDATA1_SEG14_address                   0x111
#define LCDDATA1_SEG14_position                  0x6
#define LCDDATA1_SEG14_size                      0x1
#define LCDDATA1_SEG14_value_mask                0x40
#define LCDDATA1_SEG14_clear_mask                0xBF

#define SEG14COM0                                0x6
#define SEG14COM0_address                        0x111
#define SEG14COM0_position                       0x6
#define SEG14COM0_size                           0x1
#define SEG14COM0_value_mask                     0x40
#define SEG14COM0_clear_mask                     0xBF

#define SEG15COM0                                0x7
#define SEG15COM0_address                        0x111
#define SEG15COM0_position                       0x7
#define SEG15COM0_size                           0x1
#define SEG15COM0_value_mask                     0x80
#define SEG15COM0_clear_mask                     0x7F

#define LCDDATA1_SEG15                           0x7
#define LCDDATA1_SEG15_address                   0x111
#define LCDDATA1_SEG15_position                  0x7
#define LCDDATA1_SEG15_size                      0x1
#define LCDDATA1_SEG15_value_mask                0x80
#define LCDDATA1_SEG15_clear_mask                0x7F

#define S15C0                                    0x7
#define S15C0_address                            0x111
#define S15C0_position                           0x7
#define S15C0_size                               0x1
#define S15C0_value_mask                         0x80
#define S15C0_clear_mask                         0x7F


/*------------------------------------------------------------------------------------------------------#
| LCDDATA2                                                                                        0x112 |
#-------------------------------------------------------------------------------------------------------#
| LCDDATA2_SEG23 | LCDDATA2_SEG22 | LCDDATA2_SEG21 | LCDDATA2_SEG20 | S19C0 | S18C0 | S17C0 | SEG16COM0 |
#-------------------------------------------------------------------------------------------------------#
| 7              | 6              | 5              | 4              | 3     | 2     | 1     | 0         |
#------------------------------------------------------------------------------------------------------*/

#define LCDDATA2                                 0x0
#define LCDDATA2_address                         0x112
#define LCDDATA2_position                        0x0
#define LCDDATA2_size                            0x8
#define LCDDATA2_value_mask                      0xFF
#define LCDDATA2_clear_mask                      0x0

#define S16C0                                    0x0
#define S16C0_address                            0x112
#define S16C0_position                           0x0
#define S16C0_size                               0x1
#define S16C0_value_mask                         0x1
#define S16C0_clear_mask                         0xFE

#define SEG16COM0                                0x0
#define SEG16COM0_address                        0x112
#define SEG16COM0_position                       0x0
#define SEG16COM0_size                           0x1
#define SEG16COM0_value_mask                     0x1
#define SEG16COM0_clear_mask                     0xFE

#define LCDDATA2_SEG16                           0x0
#define LCDDATA2_SEG16_address                   0x112
#define LCDDATA2_SEG16_position                  0x0
#define LCDDATA2_SEG16_size                      0x1
#define LCDDATA2_SEG16_value_mask                0x1
#define LCDDATA2_SEG16_clear_mask                0xFE

#define S17C0                                    0x1
#define S17C0_address                            0x112
#define S17C0_position                           0x1
#define S17C0_size                               0x1
#define S17C0_value_mask                         0x2
#define S17C0_clear_mask                         0xFD

#define LCDDATA2_SEG17                           0x1
#define LCDDATA2_SEG17_address                   0x112
#define LCDDATA2_SEG17_position                  0x1
#define LCDDATA2_SEG17_size                      0x1
#define LCDDATA2_SEG17_value_mask                0x2
#define LCDDATA2_SEG17_clear_mask                0xFD

#define SEG17COM0                                0x1
#define SEG17COM0_address                        0x112
#define SEG17COM0_position                       0x1
#define SEG17COM0_size                           0x1
#define SEG17COM0_value_mask                     0x2
#define SEG17COM0_clear_mask                     0xFD

#define S18C0                                    0x2
#define S18C0_address                            0x112
#define S18C0_position                           0x2
#define S18C0_size                               0x1
#define S18C0_value_mask                         0x4
#define S18C0_clear_mask                         0xFB

#define SEG18COM0                                0x2
#define SEG18COM0_address                        0x112
#define SEG18COM0_position                       0x2
#define SEG18COM0_size                           0x1
#define SEG18COM0_value_mask                     0x4
#define SEG18COM0_clear_mask                     0xFB

#define LCDDATA2_SEG18                           0x2
#define LCDDATA2_SEG18_address                   0x112
#define LCDDATA2_SEG18_position                  0x2
#define LCDDATA2_SEG18_size                      0x1
#define LCDDATA2_SEG18_value_mask                0x4
#define LCDDATA2_SEG18_clear_mask                0xFB

#define S19C0                                    0x3
#define S19C0_address                            0x112
#define S19C0_position                           0x3
#define S19C0_size                               0x1
#define S19C0_value_mask                         0x8
#define S19C0_clear_mask                         0xF7

#define SEG19COM0                                0x3
#define SEG19COM0_address                        0x112
#define SEG19COM0_position                       0x3
#define SEG19COM0_size                           0x1
#define SEG19COM0_value_mask                     0x8
#define SEG19COM0_clear_mask                     0xF7

#define LCDDATA2_SEG19                           0x3
#define LCDDATA2_SEG19_address                   0x112
#define LCDDATA2_SEG19_position                  0x3
#define LCDDATA2_SEG19_size                      0x1
#define LCDDATA2_SEG19_value_mask                0x8
#define LCDDATA2_SEG19_clear_mask                0xF7

#define LCDDATA2_SEG20                           0x4
#define LCDDATA2_SEG20_address                   0x112
#define LCDDATA2_SEG20_position                  0x4
#define LCDDATA2_SEG20_size                      0x1
#define LCDDATA2_SEG20_value_mask                0x10
#define LCDDATA2_SEG20_clear_mask                0xEF

#define S20C0                                    0x4
#define S20C0_address                            0x112
#define S20C0_position                           0x4
#define S20C0_size                               0x1
#define S20C0_value_mask                         0x10
#define S20C0_clear_mask                         0xEF

#define SEG20COM0                                0x4
#define SEG20COM0_address                        0x112
#define SEG20COM0_position                       0x4
#define SEG20COM0_size                           0x1
#define SEG20COM0_value_mask                     0x10
#define SEG20COM0_clear_mask                     0xEF

#define LCDDATA2_SEG21                           0x5
#define LCDDATA2_SEG21_address                   0x112
#define LCDDATA2_SEG21_position                  0x5
#define LCDDATA2_SEG21_size                      0x1
#define LCDDATA2_SEG21_value_mask                0x20
#define LCDDATA2_SEG21_clear_mask                0xDF

#define S21C0                                    0x5
#define S21C0_address                            0x112
#define S21C0_position                           0x5
#define S21C0_size                               0x1
#define S21C0_value_mask                         0x20
#define S21C0_clear_mask                         0xDF

#define SEG21COM0                                0x5
#define SEG21COM0_address                        0x112
#define SEG21COM0_position                       0x5
#define SEG21COM0_size                           0x1
#define SEG21COM0_value_mask                     0x20
#define SEG21COM0_clear_mask                     0xDF

#define LCDDATA2_SEG22                           0x6
#define LCDDATA2_SEG22_address                   0x112
#define LCDDATA2_SEG22_position                  0x6
#define LCDDATA2_SEG22_size                      0x1
#define LCDDATA2_SEG22_value_mask                0x40
#define LCDDATA2_SEG22_clear_mask                0xBF

#define SEG22COM0                                0x6
#define SEG22COM0_address                        0x112
#define SEG22COM0_position                       0x6
#define SEG22COM0_size                           0x1
#define SEG22COM0_value_mask                     0x40
#define SEG22COM0_clear_mask                     0xBF

#define S22C0                                    0x6
#define S22C0_address                            0x112
#define S22C0_position                           0x6
#define S22C0_size                               0x1
#define S22C0_value_mask                         0x40
#define S22C0_clear_mask                         0xBF

#define LCDDATA2_SEG23                           0x7
#define LCDDATA2_SEG23_address                   0x112
#define LCDDATA2_SEG23_position                  0x7
#define LCDDATA2_SEG23_size                      0x1
#define LCDDATA2_SEG23_value_mask                0x80
#define LCDDATA2_SEG23_clear_mask                0x7F

#define SEG23COM0                                0x7
#define SEG23COM0_address                        0x112
#define SEG23COM0_position                       0x7
#define SEG23COM0_size                           0x1
#define SEG23COM0_value_mask                     0x80
#define SEG23COM0_clear_mask                     0x7F

#define S23C0                                    0x7
#define S23C0_address                            0x112
#define S23C0_position                           0x7
#define S23C0_size                               0x1
#define S23C0_value_mask                         0x80
#define S23C0_clear_mask                         0x7F


/*--------------------------------------------------------------------------------------------------------------------#
| LCDDATA3                                                                                                      0x113 |
#---------------------------------------------------------------------------------------------------------------------#
| LCDDATA3_SEG7 | LCDDATA3_SEG6 | LCDDATA3_SEG5 | LCDDATA3_SEG4 | SEG3COM1 | LCDDATA3_SEG2 | LCDDATA3_SEG1 | SEG0COM1 |
#---------------------------------------------------------------------------------------------------------------------#
| 7             | 6             | 5             | 4             | 3        | 2             | 1             | 0        |
#--------------------------------------------------------------------------------------------------------------------*/

#define LCDDATA3                                 0x0
#define LCDDATA3_address                         0x113
#define LCDDATA3_position                        0x0
#define LCDDATA3_size                            0x8
#define LCDDATA3_value_mask                      0xFF
#define LCDDATA3_clear_mask                      0x0

#define SEG0COM1                                 0x0
#define SEG0COM1_address                         0x113
#define SEG0COM1_position                        0x0
#define SEG0COM1_size                            0x1
#define SEG0COM1_value_mask                      0x1
#define SEG0COM1_clear_mask                      0xFE

#define LCDDATA3_SEG0                            0x0
#define LCDDATA3_SEG0_address                    0x113
#define LCDDATA3_SEG0_position                   0x0
#define LCDDATA3_SEG0_size                       0x1
#define LCDDATA3_SEG0_value_mask                 0x1
#define LCDDATA3_SEG0_clear_mask                 0xFE

#define S0C1                                     0x0
#define S0C1_address                             0x113
#define S0C1_position                            0x0
#define S0C1_size                                0x1
#define S0C1_value_mask                          0x1
#define S0C1_clear_mask                          0xFE

#define LCDDATA3_SEG1                            0x1
#define LCDDATA3_SEG1_address                    0x113
#define LCDDATA3_SEG1_position                   0x1
#define LCDDATA3_SEG1_size                       0x1
#define LCDDATA3_SEG1_value_mask                 0x2
#define LCDDATA3_SEG1_clear_mask                 0xFD

#define SEG1COM1                                 0x1
#define SEG1COM1_address                         0x113
#define SEG1COM1_position                        0x1
#define SEG1COM1_size                            0x1
#define SEG1COM1_value_mask                      0x2
#define SEG1COM1_clear_mask                      0xFD

#define S1C1                                     0x1
#define S1C1_address                             0x113
#define S1C1_position                            0x1
#define S1C1_size                                0x1
#define S1C1_value_mask                          0x2
#define S1C1_clear_mask                          0xFD

#define LCDDATA3_SEG2                            0x2
#define LCDDATA3_SEG2_address                    0x113
#define LCDDATA3_SEG2_position                   0x2
#define LCDDATA3_SEG2_size                       0x1
#define LCDDATA3_SEG2_value_mask                 0x4
#define LCDDATA3_SEG2_clear_mask                 0xFB

#define S2C1                                     0x2
#define S2C1_address                             0x113
#define S2C1_position                            0x2
#define S2C1_size                                0x1
#define S2C1_value_mask                          0x4
#define S2C1_clear_mask                          0xFB

#define SEG2COM1                                 0x2
#define SEG2COM1_address                         0x113
#define SEG2COM1_position                        0x2
#define SEG2COM1_size                            0x1
#define SEG2COM1_value_mask                      0x4
#define SEG2COM1_clear_mask                      0xFB

#define SEG3COM1                                 0x3
#define SEG3COM1_address                         0x113
#define SEG3COM1_position                        0x3
#define SEG3COM1_size                            0x1
#define SEG3COM1_value_mask                      0x8
#define SEG3COM1_clear_mask                      0xF7

#define LCDDATA3_SEG3                            0x3
#define LCDDATA3_SEG3_address                    0x113
#define LCDDATA3_SEG3_position                   0x3
#define LCDDATA3_SEG3_size                       0x1
#define LCDDATA3_SEG3_value_mask                 0x8
#define LCDDATA3_SEG3_clear_mask                 0xF7

#define S3C1                                     0x3
#define S3C1_address                             0x113
#define S3C1_position                            0x3
#define S3C1_size                                0x1
#define S3C1_value_mask                          0x8
#define S3C1_clear_mask                          0xF7

#define SEG4COM1                                 0x4
#define SEG4COM1_address                         0x113
#define SEG4COM1_position                        0x4
#define SEG4COM1_size                            0x1
#define SEG4COM1_value_mask                      0x10
#define SEG4COM1_clear_mask                      0xEF

#define LCDDATA3_SEG4                            0x4
#define LCDDATA3_SEG4_address                    0x113
#define LCDDATA3_SEG4_position                   0x4
#define LCDDATA3_SEG4_size                       0x1
#define LCDDATA3_SEG4_value_mask                 0x10
#define LCDDATA3_SEG4_clear_mask                 0xEF

#define S4C1                                     0x4
#define S4C1_address                             0x113
#define S4C1_position                            0x4
#define S4C1_size                                0x1
#define S4C1_value_mask                          0x10
#define S4C1_clear_mask                          0xEF

#define LCDDATA3_SEG5                            0x5
#define LCDDATA3_SEG5_address                    0x113
#define LCDDATA3_SEG5_position                   0x5
#define LCDDATA3_SEG5_size                       0x1
#define LCDDATA3_SEG5_value_mask                 0x20
#define LCDDATA3_SEG5_clear_mask                 0xDF

#define S5C1                                     0x5
#define S5C1_address                             0x113
#define S5C1_position                            0x5
#define S5C1_size                                0x1
#define S5C1_value_mask                          0x20
#define S5C1_clear_mask                          0xDF

#define SEG5COM1                                 0x5
#define SEG5COM1_address                         0x113
#define SEG5COM1_position                        0x5
#define SEG5COM1_size                            0x1
#define SEG5COM1_value_mask                      0x20
#define SEG5COM1_clear_mask                      0xDF

#define LCDDATA3_SEG6                            0x6
#define LCDDATA3_SEG6_address                    0x113
#define LCDDATA3_SEG6_position                   0x6
#define LCDDATA3_SEG6_size                       0x1
#define LCDDATA3_SEG6_value_mask                 0x40
#define LCDDATA3_SEG6_clear_mask                 0xBF

#define SEG6COM1                                 0x6
#define SEG6COM1_address                         0x113
#define SEG6COM1_position                        0x6
#define SEG6COM1_size                            0x1
#define SEG6COM1_value_mask                      0x40
#define SEG6COM1_clear_mask                      0xBF

#define S6C1                                     0x6
#define S6C1_address                             0x113
#define S6C1_position                            0x6
#define S6C1_size                                0x1
#define S6C1_value_mask                          0x40
#define S6C1_clear_mask                          0xBF

#define LCDDATA3_SEG7                            0x7
#define LCDDATA3_SEG7_address                    0x113
#define LCDDATA3_SEG7_position                   0x7
#define LCDDATA3_SEG7_size                       0x1
#define LCDDATA3_SEG7_value_mask                 0x80
#define LCDDATA3_SEG7_clear_mask                 0x7F

#define SEG7COM1                                 0x7
#define SEG7COM1_address                         0x113
#define SEG7COM1_position                        0x7
#define SEG7COM1_size                            0x1
#define SEG7COM1_value_mask                      0x80
#define SEG7COM1_clear_mask                      0x7F

#define S7C1                                     0x7
#define S7C1_address                             0x113
#define S7C1_position                            0x7
#define S7C1_size                                0x1
#define S7C1_value_mask                          0x80
#define S7C1_clear_mask                          0x7F


/*-------------------------------------------------------------------------------------------#
| LCDDATA4                                                                             0x114 |
#--------------------------------------------------------------------------------------------#
| SEG15COM1 | S14C1 | S13C1 | LCDDATA4_SEG12 | LCDDATA4_SEG11 | LCDDATA4_SEG10 | S9C1 | S8C1 |
#--------------------------------------------------------------------------------------------#
| 7         | 6     | 5     | 4              | 3              | 2              | 1    | 0    |
#-------------------------------------------------------------------------------------------*/

#define LCDDATA4                                 0x0
#define LCDDATA4_address                         0x114
#define LCDDATA4_position                        0x0
#define LCDDATA4_size                            0x8
#define LCDDATA4_value_mask                      0xFF
#define LCDDATA4_clear_mask                      0x0

#define S8C1                                     0x0
#define S8C1_address                             0x114
#define S8C1_position                            0x0
#define S8C1_size                                0x1
#define S8C1_value_mask                          0x1
#define S8C1_clear_mask                          0xFE

#define SEG8COM1                                 0x0
#define SEG8COM1_address                         0x114
#define SEG8COM1_position                        0x0
#define SEG8COM1_size                            0x1
#define SEG8COM1_value_mask                      0x1
#define SEG8COM1_clear_mask                      0xFE

#define LCDDATA4_SEG8                            0x0
#define LCDDATA4_SEG8_address                    0x114
#define LCDDATA4_SEG8_position                   0x0
#define LCDDATA4_SEG8_size                       0x1
#define LCDDATA4_SEG8_value_mask                 0x1
#define LCDDATA4_SEG8_clear_mask                 0xFE

#define S9C1                                     0x1
#define S9C1_address                             0x114
#define S9C1_position                            0x1
#define S9C1_size                                0x1
#define S9C1_value_mask                          0x2
#define S9C1_clear_mask                          0xFD

#define SEG9COM1                                 0x1
#define SEG9COM1_address                         0x114
#define SEG9COM1_position                        0x1
#define SEG9COM1_size                            0x1
#define SEG9COM1_value_mask                      0x2
#define SEG9COM1_clear_mask                      0xFD

#define LCDDATA4_SEG9                            0x1
#define LCDDATA4_SEG9_address                    0x114
#define LCDDATA4_SEG9_position                   0x1
#define LCDDATA4_SEG9_size                       0x1
#define LCDDATA4_SEG9_value_mask                 0x2
#define LCDDATA4_SEG9_clear_mask                 0xFD

#define LCDDATA4_SEG10                           0x2
#define LCDDATA4_SEG10_address                   0x114
#define LCDDATA4_SEG10_position                  0x2
#define LCDDATA4_SEG10_size                      0x1
#define LCDDATA4_SEG10_value_mask                0x4
#define LCDDATA4_SEG10_clear_mask                0xFB

#define SEG10COM1                                0x2
#define SEG10COM1_address                        0x114
#define SEG10COM1_position                       0x2
#define SEG10COM1_size                           0x1
#define SEG10COM1_value_mask                     0x4
#define SEG10COM1_clear_mask                     0xFB

#define S10C1                                    0x2
#define S10C1_address                            0x114
#define S10C1_position                           0x2
#define S10C1_size                               0x1
#define S10C1_value_mask                         0x4
#define S10C1_clear_mask                         0xFB

#define LCDDATA4_SEG11                           0x3
#define LCDDATA4_SEG11_address                   0x114
#define LCDDATA4_SEG11_position                  0x3
#define LCDDATA4_SEG11_size                      0x1
#define LCDDATA4_SEG11_value_mask                0x8
#define LCDDATA4_SEG11_clear_mask                0xF7

#define S11C1                                    0x3
#define S11C1_address                            0x114
#define S11C1_position                           0x3
#define S11C1_size                               0x1
#define S11C1_value_mask                         0x8
#define S11C1_clear_mask                         0xF7

#define SEG11COM1                                0x3
#define SEG11COM1_address                        0x114
#define SEG11COM1_position                       0x3
#define SEG11COM1_size                           0x1
#define SEG11COM1_value_mask                     0x8
#define SEG11COM1_clear_mask                     0xF7

#define LCDDATA4_SEG12                           0x4
#define LCDDATA4_SEG12_address                   0x114
#define LCDDATA4_SEG12_position                  0x4
#define LCDDATA4_SEG12_size                      0x1
#define LCDDATA4_SEG12_value_mask                0x10
#define LCDDATA4_SEG12_clear_mask                0xEF

#define S12C1                                    0x4
#define S12C1_address                            0x114
#define S12C1_position                           0x4
#define S12C1_size                               0x1
#define S12C1_value_mask                         0x10
#define S12C1_clear_mask                         0xEF

#define SEG12COM1                                0x4
#define SEG12COM1_address                        0x114
#define SEG12COM1_position                       0x4
#define SEG12COM1_size                           0x1
#define SEG12COM1_value_mask                     0x10
#define SEG12COM1_clear_mask                     0xEF

#define S13C1                                    0x5
#define S13C1_address                            0x114
#define S13C1_position                           0x5
#define S13C1_size                               0x1
#define S13C1_value_mask                         0x20
#define S13C1_clear_mask                         0xDF

#define LCDDATA4_SEG13                           0x5
#define LCDDATA4_SEG13_address                   0x114
#define LCDDATA4_SEG13_position                  0x5
#define LCDDATA4_SEG13_size                      0x1
#define LCDDATA4_SEG13_value_mask                0x20
#define LCDDATA4_SEG13_clear_mask                0xDF

#define SEG13COM1                                0x5
#define SEG13COM1_address                        0x114
#define SEG13COM1_position                       0x5
#define SEG13COM1_size                           0x1
#define SEG13COM1_value_mask                     0x20
#define SEG13COM1_clear_mask                     0xDF

#define S14C1                                    0x6
#define S14C1_address                            0x114
#define S14C1_position                           0x6
#define S14C1_size                               0x1
#define S14C1_value_mask                         0x40
#define S14C1_clear_mask                         0xBF

#define LCDDATA4_SEG14                           0x6
#define LCDDATA4_SEG14_address                   0x114
#define LCDDATA4_SEG14_position                  0x6
#define LCDDATA4_SEG14_size                      0x1
#define LCDDATA4_SEG14_value_mask                0x40
#define LCDDATA4_SEG14_clear_mask                0xBF

#define SEG14COM1                                0x6
#define SEG14COM1_address                        0x114
#define SEG14COM1_position                       0x6
#define SEG14COM1_size                           0x1
#define SEG14COM1_value_mask                     0x40
#define SEG14COM1_clear_mask                     0xBF

#define SEG15COM1                                0x7
#define SEG15COM1_address                        0x114
#define SEG15COM1_position                       0x7
#define SEG15COM1_size                           0x1
#define SEG15COM1_value_mask                     0x80
#define SEG15COM1_clear_mask                     0x7F

#define S15C1                                    0x7
#define S15C1_address                            0x114
#define S15C1_position                           0x7
#define S15C1_size                               0x1
#define S15C1_value_mask                         0x80
#define S15C1_clear_mask                         0x7F

#define LCDDATA4_SEG15                           0x7
#define LCDDATA4_SEG15_address                   0x114
#define LCDDATA4_SEG15_position                  0x7
#define LCDDATA4_SEG15_size                      0x1
#define LCDDATA4_SEG15_value_mask                0x80
#define LCDDATA4_SEG15_clear_mask                0x7F


/*------------------------------------------------------------------------------------------------------#
| LCDDATA5                                                                                        0x115 |
#-------------------------------------------------------------------------------------------------------#
| LCDDATA5_SEG23 | LCDDATA5_SEG22 | LCDDATA5_SEG21 | LCDDATA5_SEG20 | S19C1 | S18C1 | S17C1 | SEG16COM1 |
#-------------------------------------------------------------------------------------------------------#
| 7              | 6              | 5              | 4              | 3     | 2     | 1     | 0         |
#------------------------------------------------------------------------------------------------------*/

#define LCDDATA5                                 0x0
#define LCDDATA5_address                         0x115
#define LCDDATA5_position                        0x0
#define LCDDATA5_size                            0x8
#define LCDDATA5_value_mask                      0xFF
#define LCDDATA5_clear_mask                      0x0

#define SEG16COM1                                0x0
#define SEG16COM1_address                        0x115
#define SEG16COM1_position                       0x0
#define SEG16COM1_size                           0x1
#define SEG16COM1_value_mask                     0x1
#define SEG16COM1_clear_mask                     0xFE

#define S16C1                                    0x0
#define S16C1_address                            0x115
#define S16C1_position                           0x0
#define S16C1_size                               0x1
#define S16C1_value_mask                         0x1
#define S16C1_clear_mask                         0xFE

#define LCDDATA5_SEG16                           0x0
#define LCDDATA5_SEG16_address                   0x115
#define LCDDATA5_SEG16_position                  0x0
#define LCDDATA5_SEG16_size                      0x1
#define LCDDATA5_SEG16_value_mask                0x1
#define LCDDATA5_SEG16_clear_mask                0xFE

#define S17C1                                    0x1
#define S17C1_address                            0x115
#define S17C1_position                           0x1
#define S17C1_size                               0x1
#define S17C1_value_mask                         0x2
#define S17C1_clear_mask                         0xFD

#define LCDDATA5_SEG17                           0x1
#define LCDDATA5_SEG17_address                   0x115
#define LCDDATA5_SEG17_position                  0x1
#define LCDDATA5_SEG17_size                      0x1
#define LCDDATA5_SEG17_value_mask                0x2
#define LCDDATA5_SEG17_clear_mask                0xFD

#define SEG17COM1                                0x1
#define SEG17COM1_address                        0x115
#define SEG17COM1_position                       0x1
#define SEG17COM1_size                           0x1
#define SEG17COM1_value_mask                     0x2
#define SEG17COM1_clear_mask                     0xFD

#define S18C1                                    0x2
#define S18C1_address                            0x115
#define S18C1_position                           0x2
#define S18C1_size                               0x1
#define S18C1_value_mask                         0x4
#define S18C1_clear_mask                         0xFB

#define SEG18COM1                                0x2
#define SEG18COM1_address                        0x115
#define SEG18COM1_position                       0x2
#define SEG18COM1_size                           0x1
#define SEG18COM1_value_mask                     0x4
#define SEG18COM1_clear_mask                     0xFB

#define LCDDATA5_SEG18                           0x2
#define LCDDATA5_SEG18_address                   0x115
#define LCDDATA5_SEG18_position                  0x2
#define LCDDATA5_SEG18_size                      0x1
#define LCDDATA5_SEG18_value_mask                0x4
#define LCDDATA5_SEG18_clear_mask                0xFB

#define S19C1                                    0x3
#define S19C1_address                            0x115
#define S19C1_position                           0x3
#define S19C1_size                               0x1
#define S19C1_value_mask                         0x8
#define S19C1_clear_mask                         0xF7

#define SEG19COM1                                0x3
#define SEG19COM1_address                        0x115
#define SEG19COM1_position                       0x3
#define SEG19COM1_size                           0x1
#define SEG19COM1_value_mask                     0x8
#define SEG19COM1_clear_mask                     0xF7

#define LCDDATA5_SEG19                           0x3
#define LCDDATA5_SEG19_address                   0x115
#define LCDDATA5_SEG19_position                  0x3
#define LCDDATA5_SEG19_size                      0x1
#define LCDDATA5_SEG19_value_mask                0x8
#define LCDDATA5_SEG19_clear_mask                0xF7

#define LCDDATA5_SEG20                           0x4
#define LCDDATA5_SEG20_address                   0x115
#define LCDDATA5_SEG20_position                  0x4
#define LCDDATA5_SEG20_size                      0x1
#define LCDDATA5_SEG20_value_mask                0x10
#define LCDDATA5_SEG20_clear_mask                0xEF

#define S20C1                                    0x4
#define S20C1_address                            0x115
#define S20C1_position                           0x4
#define S20C1_size                               0x1
#define S20C1_value_mask                         0x10
#define S20C1_clear_mask                         0xEF

#define SEG20COM1                                0x4
#define SEG20COM1_address                        0x115
#define SEG20COM1_position                       0x4
#define SEG20COM1_size                           0x1
#define SEG20COM1_value_mask                     0x10
#define SEG20COM1_clear_mask                     0xEF

#define LCDDATA5_SEG21                           0x5
#define LCDDATA5_SEG21_address                   0x115
#define LCDDATA5_SEG21_position                  0x5
#define LCDDATA5_SEG21_size                      0x1
#define LCDDATA5_SEG21_value_mask                0x20
#define LCDDATA5_SEG21_clear_mask                0xDF

#define S21C1                                    0x5
#define S21C1_address                            0x115
#define S21C1_position                           0x5
#define S21C1_size                               0x1
#define S21C1_value_mask                         0x20
#define S21C1_clear_mask                         0xDF

#define SEG21COM1                                0x5
#define SEG21COM1_address                        0x115
#define SEG21COM1_position                       0x5
#define SEG21COM1_size                           0x1
#define SEG21COM1_value_mask                     0x20
#define SEG21COM1_clear_mask                     0xDF

#define LCDDATA5_SEG22                           0x6
#define LCDDATA5_SEG22_address                   0x115
#define LCDDATA5_SEG22_position                  0x6
#define LCDDATA5_SEG22_size                      0x1
#define LCDDATA5_SEG22_value_mask                0x40
#define LCDDATA5_SEG22_clear_mask                0xBF

#define SEG22COM1                                0x6
#define SEG22COM1_address                        0x115
#define SEG22COM1_position                       0x6
#define SEG22COM1_size                           0x1
#define SEG22COM1_value_mask                     0x40
#define SEG22COM1_clear_mask                     0xBF

#define S22C1                                    0x6
#define S22C1_address                            0x115
#define S22C1_position                           0x6
#define S22C1_size                               0x1
#define S22C1_value_mask                         0x40
#define S22C1_clear_mask                         0xBF

#define LCDDATA5_SEG23                           0x7
#define LCDDATA5_SEG23_address                   0x115
#define LCDDATA5_SEG23_position                  0x7
#define LCDDATA5_SEG23_size                      0x1
#define LCDDATA5_SEG23_value_mask                0x80
#define LCDDATA5_SEG23_clear_mask                0x7F

#define SEG23COM1                                0x7
#define SEG23COM1_address                        0x115
#define SEG23COM1_position                       0x7
#define SEG23COM1_size                           0x1
#define SEG23COM1_value_mask                     0x80
#define SEG23COM1_clear_mask                     0x7F

#define S23C1                                    0x7
#define S23C1_address                            0x115
#define S23C1_position                           0x7
#define S23C1_size                               0x1
#define S23C1_value_mask                         0x80
#define S23C1_clear_mask                         0x7F


/*--------------------------------------------------------------------------------------------#
| LCDDATA6                                                                              0x116 |
#---------------------------------------------------------------------------------------------#
| SEG7COM2 | SEG6COM2 | S5C2 | SEG4COM2 | SEG3COM2 | LCDDATA6_SEG2 | LCDDATA6_SEG1 | SEG0COM2 |
#---------------------------------------------------------------------------------------------#
| 7        | 6        | 5    | 4        | 3        | 2             | 1             | 0        |
#--------------------------------------------------------------------------------------------*/

#define LCDDATA6                                 0x0
#define LCDDATA6_address                         0x116
#define LCDDATA6_position                        0x0
#define LCDDATA6_size                            0x8
#define LCDDATA6_value_mask                      0xFF
#define LCDDATA6_clear_mask                      0x0

#define SEG0COM2                                 0x0
#define SEG0COM2_address                         0x116
#define SEG0COM2_position                        0x0
#define SEG0COM2_size                            0x1
#define SEG0COM2_value_mask                      0x1
#define SEG0COM2_clear_mask                      0xFE

#define LCDDATA6_SEG0                            0x0
#define LCDDATA6_SEG0_address                    0x116
#define LCDDATA6_SEG0_position                   0x0
#define LCDDATA6_SEG0_size                       0x1
#define LCDDATA6_SEG0_value_mask                 0x1
#define LCDDATA6_SEG0_clear_mask                 0xFE

#define S0C2                                     0x0
#define S0C2_address                             0x116
#define S0C2_position                            0x0
#define S0C2_size                                0x1
#define S0C2_value_mask                          0x1
#define S0C2_clear_mask                          0xFE

#define LCDDATA6_SEG1                            0x1
#define LCDDATA6_SEG1_address                    0x116
#define LCDDATA6_SEG1_position                   0x1
#define LCDDATA6_SEG1_size                       0x1
#define LCDDATA6_SEG1_value_mask                 0x2
#define LCDDATA6_SEG1_clear_mask                 0xFD

#define SEG1COM2                                 0x1
#define SEG1COM2_address                         0x116
#define SEG1COM2_position                        0x1
#define SEG1COM2_size                            0x1
#define SEG1COM2_value_mask                      0x2
#define SEG1COM2_clear_mask                      0xFD

#define S1C2                                     0x1
#define S1C2_address                             0x116
#define S1C2_position                            0x1
#define S1C2_size                                0x1
#define S1C2_value_mask                          0x2
#define S1C2_clear_mask                          0xFD

#define LCDDATA6_SEG2                            0x2
#define LCDDATA6_SEG2_address                    0x116
#define LCDDATA6_SEG2_position                   0x2
#define LCDDATA6_SEG2_size                       0x1
#define LCDDATA6_SEG2_value_mask                 0x4
#define LCDDATA6_SEG2_clear_mask                 0xFB

#define S2C2                                     0x2
#define S2C2_address                             0x116
#define S2C2_position                            0x2
#define S2C2_size                                0x1
#define S2C2_value_mask                          0x4
#define S2C2_clear_mask                          0xFB

#define SEG2COM2                                 0x2
#define SEG2COM2_address                         0x116
#define SEG2COM2_position                        0x2
#define SEG2COM2_size                            0x1
#define SEG2COM2_value_mask                      0x4
#define SEG2COM2_clear_mask                      0xFB

#define SEG3COM2                                 0x3
#define SEG3COM2_address                         0x116
#define SEG3COM2_position                        0x3
#define SEG3COM2_size                            0x1
#define SEG3COM2_value_mask                      0x8
#define SEG3COM2_clear_mask                      0xF7

#define LCDDATA6_SEG3                            0x3
#define LCDDATA6_SEG3_address                    0x116
#define LCDDATA6_SEG3_position                   0x3
#define LCDDATA6_SEG3_size                       0x1
#define LCDDATA6_SEG3_value_mask                 0x8
#define LCDDATA6_SEG3_clear_mask                 0xF7

#define S3C2                                     0x3
#define S3C2_address                             0x116
#define S3C2_position                            0x3
#define S3C2_size                                0x1
#define S3C2_value_mask                          0x8
#define S3C2_clear_mask                          0xF7

#define SEG4COM2                                 0x4
#define SEG4COM2_address                         0x116
#define SEG4COM2_position                        0x4
#define SEG4COM2_size                            0x1
#define SEG4COM2_value_mask                      0x10
#define SEG4COM2_clear_mask                      0xEF

#define LCDDATA6_SEG4                            0x4
#define LCDDATA6_SEG4_address                    0x116
#define LCDDATA6_SEG4_position                   0x4
#define LCDDATA6_SEG4_size                       0x1
#define LCDDATA6_SEG4_value_mask                 0x10
#define LCDDATA6_SEG4_clear_mask                 0xEF

#define S4C2                                     0x4
#define S4C2_address                             0x116
#define S4C2_position                            0x4
#define S4C2_size                                0x1
#define S4C2_value_mask                          0x10
#define S4C2_clear_mask                          0xEF

#define S5C2                                     0x5
#define S5C2_address                             0x116
#define S5C2_position                            0x5
#define S5C2_size                                0x1
#define S5C2_value_mask                          0x20
#define S5C2_clear_mask                          0xDF

#define LCDDATA6_SEG5                            0x5
#define LCDDATA6_SEG5_address                    0x116
#define LCDDATA6_SEG5_position                   0x5
#define LCDDATA6_SEG5_size                       0x1
#define LCDDATA6_SEG5_value_mask                 0x20
#define LCDDATA6_SEG5_clear_mask                 0xDF

#define SEG5COM2                                 0x5
#define SEG5COM2_address                         0x116
#define SEG5COM2_position                        0x5
#define SEG5COM2_size                            0x1
#define SEG5COM2_value_mask                      0x20
#define SEG5COM2_clear_mask                      0xDF

#define SEG6COM2                                 0x6
#define SEG6COM2_address                         0x116
#define SEG6COM2_position                        0x6
#define SEG6COM2_size                            0x1
#define SEG6COM2_value_mask                      0x40
#define SEG6COM2_clear_mask                      0xBF

#define S6C2                                     0x6
#define S6C2_address                             0x116
#define S6C2_position                            0x6
#define S6C2_size                                0x1
#define S6C2_value_mask                          0x40
#define S6C2_clear_mask                          0xBF

#define LCDDATA6_SEG6                            0x6
#define LCDDATA6_SEG6_address                    0x116
#define LCDDATA6_SEG6_position                   0x6
#define LCDDATA6_SEG6_size                       0x1
#define LCDDATA6_SEG6_value_mask                 0x40
#define LCDDATA6_SEG6_clear_mask                 0xBF

#define SEG7COM2                                 0x7
#define SEG7COM2_address                         0x116
#define SEG7COM2_position                        0x7
#define SEG7COM2_size                            0x1
#define SEG7COM2_value_mask                      0x80
#define SEG7COM2_clear_mask                      0x7F

#define LCDDATA6_SEG7                            0x7
#define LCDDATA6_SEG7_address                    0x116
#define LCDDATA6_SEG7_position                   0x7
#define LCDDATA6_SEG7_size                       0x1
#define LCDDATA6_SEG7_value_mask                 0x80
#define LCDDATA6_SEG7_clear_mask                 0x7F

#define S7C2                                     0x7
#define S7C2_address                             0x116
#define S7C2_position                            0x7
#define S7C2_size                                0x1
#define S7C2_value_mask                          0x80
#define S7C2_clear_mask                          0x7F


/*-----------------------------------------------------------------------------#
| LCDDATA7                                                               0x117 |
#------------------------------------------------------------------------------#
| SEG15COM2 | S14C2 | S13C2 | S12C2 | S11C2 | SEG10COM2 | S9C2 | LCDDATA7_SEG8 |
#------------------------------------------------------------------------------#
| 7         | 6     | 5     | 4     | 3     | 2         | 1    | 0             |
#-----------------------------------------------------------------------------*/

#define LCDDATA7                                 0x0
#define LCDDATA7_address                         0x117
#define LCDDATA7_position                        0x0
#define LCDDATA7_size                            0x8
#define LCDDATA7_value_mask                      0xFF
#define LCDDATA7_clear_mask                      0x0

#define LCDDATA7_SEG8                            0x0
#define LCDDATA7_SEG8_address                    0x117
#define LCDDATA7_SEG8_position                   0x0
#define LCDDATA7_SEG8_size                       0x1
#define LCDDATA7_SEG8_value_mask                 0x1
#define LCDDATA7_SEG8_clear_mask                 0xFE

#define S8C2                                     0x0
#define S8C2_address                             0x117
#define S8C2_position                            0x0
#define S8C2_size                                0x1
#define S8C2_value_mask                          0x1
#define S8C2_clear_mask                          0xFE

#define SEG8COM2                                 0x0
#define SEG8COM2_address                         0x117
#define SEG8COM2_position                        0x0
#define SEG8COM2_size                            0x1
#define SEG8COM2_value_mask                      0x1
#define SEG8COM2_clear_mask                      0xFE

#define S9C2                                     0x1
#define S9C2_address                             0x117
#define S9C2_position                            0x1
#define S9C2_size                                0x1
#define S9C2_value_mask                          0x2
#define S9C2_clear_mask                          0xFD

#define SEG9COM2                                 0x1
#define SEG9COM2_address                         0x117
#define SEG9COM2_position                        0x1
#define SEG9COM2_size                            0x1
#define SEG9COM2_value_mask                      0x2
#define SEG9COM2_clear_mask                      0xFD

#define LCDDATA7_SEG9                            0x1
#define LCDDATA7_SEG9_address                    0x117
#define LCDDATA7_SEG9_position                   0x1
#define LCDDATA7_SEG9_size                       0x1
#define LCDDATA7_SEG9_value_mask                 0x2
#define LCDDATA7_SEG9_clear_mask                 0xFD

#define SEG10COM2                                0x2
#define SEG10COM2_address                        0x117
#define SEG10COM2_position                       0x2
#define SEG10COM2_size                           0x1
#define SEG10COM2_value_mask                     0x4
#define SEG10COM2_clear_mask                     0xFB

#define S10C2                                    0x2
#define S10C2_address                            0x117
#define S10C2_position                           0x2
#define S10C2_size                               0x1
#define S10C2_value_mask                         0x4
#define S10C2_clear_mask                         0xFB

#define LCDDATA7_SEG10                           0x2
#define LCDDATA7_SEG10_address                   0x117
#define LCDDATA7_SEG10_position                  0x2
#define LCDDATA7_SEG10_size                      0x1
#define LCDDATA7_SEG10_value_mask                0x4
#define LCDDATA7_SEG10_clear_mask                0xFB

#define S11C2                                    0x3
#define S11C2_address                            0x117
#define S11C2_position                           0x3
#define S11C2_size                               0x1
#define S11C2_value_mask                         0x8
#define S11C2_clear_mask                         0xF7

#define LCDDATA7_SEG11                           0x3
#define LCDDATA7_SEG11_address                   0x117
#define LCDDATA7_SEG11_position                  0x3
#define LCDDATA7_SEG11_size                      0x1
#define LCDDATA7_SEG11_value_mask                0x8
#define LCDDATA7_SEG11_clear_mask                0xF7

#define SEG11COM2                                0x3
#define SEG11COM2_address                        0x117
#define SEG11COM2_position                       0x3
#define SEG11COM2_size                           0x1
#define SEG11COM2_value_mask                     0x8
#define SEG11COM2_clear_mask                     0xF7

#define S12C2                                    0x4
#define S12C2_address                            0x117
#define S12C2_position                           0x4
#define S12C2_size                               0x1
#define S12C2_value_mask                         0x10
#define S12C2_clear_mask                         0xEF

#define LCDDATA7_SEG12                           0x4
#define LCDDATA7_SEG12_address                   0x117
#define LCDDATA7_SEG12_position                  0x4
#define LCDDATA7_SEG12_size                      0x1
#define LCDDATA7_SEG12_value_mask                0x10
#define LCDDATA7_SEG12_clear_mask                0xEF

#define SEG12COM2                                0x4
#define SEG12COM2_address                        0x117
#define SEG12COM2_position                       0x4
#define SEG12COM2_size                           0x1
#define SEG12COM2_value_mask                     0x10
#define SEG12COM2_clear_mask                     0xEF

#define S13C2                                    0x5
#define S13C2_address                            0x117
#define S13C2_position                           0x5
#define S13C2_size                               0x1
#define S13C2_value_mask                         0x20
#define S13C2_clear_mask                         0xDF

#define SEG13COM2                                0x5
#define SEG13COM2_address                        0x117
#define SEG13COM2_position                       0x5
#define SEG13COM2_size                           0x1
#define SEG13COM2_value_mask                     0x20
#define SEG13COM2_clear_mask                     0xDF

#define LCDDATA7_SEG13                           0x5
#define LCDDATA7_SEG13_address                   0x117
#define LCDDATA7_SEG13_position                  0x5
#define LCDDATA7_SEG13_size                      0x1
#define LCDDATA7_SEG13_value_mask                0x20
#define LCDDATA7_SEG13_clear_mask                0xDF

#define S14C2                                    0x6
#define S14C2_address                            0x117
#define S14C2_position                           0x6
#define S14C2_size                               0x1
#define S14C2_value_mask                         0x40
#define S14C2_clear_mask                         0xBF

#define SEG14COM2                                0x6
#define SEG14COM2_address                        0x117
#define SEG14COM2_position                       0x6
#define SEG14COM2_size                           0x1
#define SEG14COM2_value_mask                     0x40
#define SEG14COM2_clear_mask                     0xBF

#define LCDDATA7_SEG14                           0x6
#define LCDDATA7_SEG14_address                   0x117
#define LCDDATA7_SEG14_position                  0x6
#define LCDDATA7_SEG14_size                      0x1
#define LCDDATA7_SEG14_value_mask                0x40
#define LCDDATA7_SEG14_clear_mask                0xBF

#define SEG15COM2                                0x7
#define SEG15COM2_address                        0x117
#define SEG15COM2_position                       0x7
#define SEG15COM2_size                           0x1
#define SEG15COM2_value_mask                     0x80
#define SEG15COM2_clear_mask                     0x7F

#define S15C2                                    0x7
#define S15C2_address                            0x117
#define S15C2_position                           0x7
#define S15C2_size                               0x1
#define S15C2_value_mask                         0x80
#define S15C2_clear_mask                         0x7F

#define LCDDATA7_SEG15                           0x7
#define LCDDATA7_SEG15_address                   0x117
#define LCDDATA7_SEG15_position                  0x7
#define LCDDATA7_SEG15_size                      0x1
#define LCDDATA7_SEG15_value_mask                0x80
#define LCDDATA7_SEG15_clear_mask                0x7F


/*------------------------------------------------------------------------------------------------------#
| LCDDATA8                                                                                        0x118 |
#-------------------------------------------------------------------------------------------------------#
| LCDDATA8_SEG23 | LCDDATA8_SEG22 | LCDDATA8_SEG21 | LCDDATA8_SEG20 | S19C2 | S18C2 | S17C2 | SEG16COM2 |
#-------------------------------------------------------------------------------------------------------#
| 7              | 6              | 5              | 4              | 3     | 2     | 1     | 0         |
#------------------------------------------------------------------------------------------------------*/

#define LCDDATA8                                 0x0
#define LCDDATA8_address                         0x118
#define LCDDATA8_position                        0x0
#define LCDDATA8_size                            0x8
#define LCDDATA8_value_mask                      0xFF
#define LCDDATA8_clear_mask                      0x0

#define SEG16COM2                                0x0
#define SEG16COM2_address                        0x118
#define SEG16COM2_position                       0x0
#define SEG16COM2_size                           0x1
#define SEG16COM2_value_mask                     0x1
#define SEG16COM2_clear_mask                     0xFE

#define S16C2                                    0x0
#define S16C2_address                            0x118
#define S16C2_position                           0x0
#define S16C2_size                               0x1
#define S16C2_value_mask                         0x1
#define S16C2_clear_mask                         0xFE

#define LCDDATA8_SEG16                           0x0
#define LCDDATA8_SEG16_address                   0x118
#define LCDDATA8_SEG16_position                  0x0
#define LCDDATA8_SEG16_size                      0x1
#define LCDDATA8_SEG16_value_mask                0x1
#define LCDDATA8_SEG16_clear_mask                0xFE

#define S17C2                                    0x1
#define S17C2_address                            0x118
#define S17C2_position                           0x1
#define S17C2_size                               0x1
#define S17C2_value_mask                         0x2
#define S17C2_clear_mask                         0xFD

#define LCDDATA8_SEG17                           0x1
#define LCDDATA8_SEG17_address                   0x118
#define LCDDATA8_SEG17_position                  0x1
#define LCDDATA8_SEG17_size                      0x1
#define LCDDATA8_SEG17_value_mask                0x2
#define LCDDATA8_SEG17_clear_mask                0xFD

#define SEG17COM2                                0x1
#define SEG17COM2_address                        0x118
#define SEG17COM2_position                       0x1
#define SEG17COM2_size                           0x1
#define SEG17COM2_value_mask                     0x2
#define SEG17COM2_clear_mask                     0xFD

#define S18C2                                    0x2
#define S18C2_address                            0x118
#define S18C2_position                           0x2
#define S18C2_size                               0x1
#define S18C2_value_mask                         0x4
#define S18C2_clear_mask                         0xFB

#define SEG18COM2                                0x2
#define SEG18COM2_address                        0x118
#define SEG18COM2_position                       0x2
#define SEG18COM2_size                           0x1
#define SEG18COM2_value_mask                     0x4
#define SEG18COM2_clear_mask                     0xFB

#define LCDDATA8_SEG18                           0x2
#define LCDDATA8_SEG18_address                   0x118
#define LCDDATA8_SEG18_position                  0x2
#define LCDDATA8_SEG18_size                      0x1
#define LCDDATA8_SEG18_value_mask                0x4
#define LCDDATA8_SEG18_clear_mask                0xFB

#define S19C2                                    0x3
#define S19C2_address                            0x118
#define S19C2_position                           0x3
#define S19C2_size                               0x1
#define S19C2_value_mask                         0x8
#define S19C2_clear_mask                         0xF7

#define SEG19COM2                                0x3
#define SEG19COM2_address                        0x118
#define SEG19COM2_position                       0x3
#define SEG19COM2_size                           0x1
#define SEG19COM2_value_mask                     0x8
#define SEG19COM2_clear_mask                     0xF7

#define LCDDATA8_SEG19                           0x3
#define LCDDATA8_SEG19_address                   0x118
#define LCDDATA8_SEG19_position                  0x3
#define LCDDATA8_SEG19_size                      0x1
#define LCDDATA8_SEG19_value_mask                0x8
#define LCDDATA8_SEG19_clear_mask                0xF7

#define LCDDATA8_SEG20                           0x4
#define LCDDATA8_SEG20_address                   0x118
#define LCDDATA8_SEG20_position                  0x4
#define LCDDATA8_SEG20_size                      0x1
#define LCDDATA8_SEG20_value_mask                0x10
#define LCDDATA8_SEG20_clear_mask                0xEF

#define S20C2                                    0x4
#define S20C2_address                            0x118
#define S20C2_position                           0x4
#define S20C2_size                               0x1
#define S20C2_value_mask                         0x10
#define S20C2_clear_mask                         0xEF

#define SEG20COM2                                0x4
#define SEG20COM2_address                        0x118
#define SEG20COM2_position                       0x4
#define SEG20COM2_size                           0x1
#define SEG20COM2_value_mask                     0x10
#define SEG20COM2_clear_mask                     0xEF

#define LCDDATA8_SEG21                           0x5
#define LCDDATA8_SEG21_address                   0x118
#define LCDDATA8_SEG21_position                  0x5
#define LCDDATA8_SEG21_size                      0x1
#define LCDDATA8_SEG21_value_mask                0x20
#define LCDDATA8_SEG21_clear_mask                0xDF

#define S21C2                                    0x5
#define S21C2_address                            0x118
#define S21C2_position                           0x5
#define S21C2_size                               0x1
#define S21C2_value_mask                         0x20
#define S21C2_clear_mask                         0xDF

#define SEG21COM2                                0x5
#define SEG21COM2_address                        0x118
#define SEG21COM2_position                       0x5
#define SEG21COM2_size                           0x1
#define SEG21COM2_value_mask                     0x20
#define SEG21COM2_clear_mask                     0xDF

#define LCDDATA8_SEG22                           0x6
#define LCDDATA8_SEG22_address                   0x118
#define LCDDATA8_SEG22_position                  0x6
#define LCDDATA8_SEG22_size                      0x1
#define LCDDATA8_SEG22_value_mask                0x40
#define LCDDATA8_SEG22_clear_mask                0xBF

#define SEG22COM2                                0x6
#define SEG22COM2_address                        0x118
#define SEG22COM2_position                       0x6
#define SEG22COM2_size                           0x1
#define SEG22COM2_value_mask                     0x40
#define SEG22COM2_clear_mask                     0xBF

#define S22C2                                    0x6
#define S22C2_address                            0x118
#define S22C2_position                           0x6
#define S22C2_size                               0x1
#define S22C2_value_mask                         0x40
#define S22C2_clear_mask                         0xBF

#define SEG23COM2                                0x7
#define SEG23COM2_address                        0x118
#define SEG23COM2_position                       0x7
#define SEG23COM2_size                           0x1
#define SEG23COM2_value_mask                     0x80
#define SEG23COM2_clear_mask                     0x7F

#define LCDDATA8_SEG23                           0x7
#define LCDDATA8_SEG23_address                   0x118
#define LCDDATA8_SEG23_position                  0x7
#define LCDDATA8_SEG23_size                      0x1
#define LCDDATA8_SEG23_value_mask                0x80
#define LCDDATA8_SEG23_clear_mask                0x7F

#define S23C2                                    0x7
#define S23C2_address                            0x118
#define S23C2_position                           0x7
#define S23C2_size                               0x1
#define S23C2_value_mask                         0x80
#define S23C2_clear_mask                         0x7F


/*------------------------------------------------------------------------------#
| LCDDATA9                                                                0x119 |
#-------------------------------------------------------------------------------#
| SEG7COM3 | SEG6COM3 | S5C3 | SEG4COM3 | SEG3COM3 | S2C3 | SEG1COM3 | SEG0COM3 |
#-------------------------------------------------------------------------------#
| 7        | 6        | 5    | 4        | 3        | 2    | 1        | 0        |
#------------------------------------------------------------------------------*/

#define LCDDATA9                                 0x0
#define LCDDATA9_address                         0x119
#define LCDDATA9_position                        0x0
#define LCDDATA9_size                            0x8
#define LCDDATA9_value_mask                      0xFF
#define LCDDATA9_clear_mask                      0x0

#define SEG0COM3                                 0x0
#define SEG0COM3_address                         0x119
#define SEG0COM3_position                        0x0
#define SEG0COM3_size                            0x1
#define SEG0COM3_value_mask                      0x1
#define SEG0COM3_clear_mask                      0xFE

#define LCDDATA9_SEG0                            0x0
#define LCDDATA9_SEG0_address                    0x119
#define LCDDATA9_SEG0_position                   0x0
#define LCDDATA9_SEG0_size                       0x1
#define LCDDATA9_SEG0_value_mask                 0x1
#define LCDDATA9_SEG0_clear_mask                 0xFE

#define S0C3                                     0x0
#define S0C3_address                             0x119
#define S0C3_position                            0x0
#define S0C3_size                                0x1
#define S0C3_value_mask                          0x1
#define S0C3_clear_mask                          0xFE

#define SEG1COM3                                 0x1
#define SEG1COM3_address                         0x119
#define SEG1COM3_position                        0x1
#define SEG1COM3_size                            0x1
#define SEG1COM3_value_mask                      0x2
#define SEG1COM3_clear_mask                      0xFD

#define S1C3                                     0x1
#define S1C3_address                             0x119
#define S1C3_position                            0x1
#define S1C3_size                                0x1
#define S1C3_value_mask                          0x2
#define S1C3_clear_mask                          0xFD

#define LCDDATA9_SEG1                            0x1
#define LCDDATA9_SEG1_address                    0x119
#define LCDDATA9_SEG1_position                   0x1
#define LCDDATA9_SEG1_size                       0x1
#define LCDDATA9_SEG1_value_mask                 0x2
#define LCDDATA9_SEG1_clear_mask                 0xFD

#define S2C3                                     0x2
#define S2C3_address                             0x119
#define S2C3_position                            0x2
#define S2C3_size                                0x1
#define S2C3_value_mask                          0x4
#define S2C3_clear_mask                          0xFB

#define LCDDATA9_SEG2                            0x2
#define LCDDATA9_SEG2_address                    0x119
#define LCDDATA9_SEG2_position                   0x2
#define LCDDATA9_SEG2_size                       0x1
#define LCDDATA9_SEG2_value_mask                 0x4
#define LCDDATA9_SEG2_clear_mask                 0xFB

#define SEG2COM3                                 0x2
#define SEG2COM3_address                         0x119
#define SEG2COM3_position                        0x2
#define SEG2COM3_size                            0x1
#define SEG2COM3_value_mask                      0x4
#define SEG2COM3_clear_mask                      0xFB

#define SEG3COM3                                 0x3
#define SEG3COM3_address                         0x119
#define SEG3COM3_position                        0x3
#define SEG3COM3_size                            0x1
#define SEG3COM3_value_mask                      0x8
#define SEG3COM3_clear_mask                      0xF7

#define S3C3                                     0x3
#define S3C3_address                             0x119
#define S3C3_position                            0x3
#define S3C3_size                                0x1
#define S3C3_value_mask                          0x8
#define S3C3_clear_mask                          0xF7

#define LCDDATA9_SEG3                            0x3
#define LCDDATA9_SEG3_address                    0x119
#define LCDDATA9_SEG3_position                   0x3
#define LCDDATA9_SEG3_size                       0x1
#define LCDDATA9_SEG3_value_mask                 0x8
#define LCDDATA9_SEG3_clear_mask                 0xF7

#define SEG4COM3                                 0x4
#define SEG4COM3_address                         0x119
#define SEG4COM3_position                        0x4
#define SEG4COM3_size                            0x1
#define SEG4COM3_value_mask                      0x10
#define SEG4COM3_clear_mask                      0xEF

#define LCDDATA9_SEG4                            0x4
#define LCDDATA9_SEG4_address                    0x119
#define LCDDATA9_SEG4_position                   0x4
#define LCDDATA9_SEG4_size                       0x1
#define LCDDATA9_SEG4_value_mask                 0x10
#define LCDDATA9_SEG4_clear_mask                 0xEF

#define S4C3                                     0x4
#define S4C3_address                             0x119
#define S4C3_position                            0x4
#define S4C3_size                                0x1
#define S4C3_value_mask                          0x10
#define S4C3_clear_mask                          0xEF

#define S5C3                                     0x5
#define S5C3_address                             0x119
#define S5C3_position                            0x5
#define S5C3_size                                0x1
#define S5C3_value_mask                          0x20
#define S5C3_clear_mask                          0xDF

#define SEG5COM3                                 0x5
#define SEG5COM3_address                         0x119
#define SEG5COM3_position                        0x5
#define SEG5COM3_size                            0x1
#define SEG5COM3_value_mask                      0x20
#define SEG5COM3_clear_mask                      0xDF

#define LCDDATA9_SEG5                            0x5
#define LCDDATA9_SEG5_address                    0x119
#define LCDDATA9_SEG5_position                   0x5
#define LCDDATA9_SEG5_size                       0x1
#define LCDDATA9_SEG5_value_mask                 0x20
#define LCDDATA9_SEG5_clear_mask                 0xDF

#define SEG6COM3                                 0x6
#define SEG6COM3_address                         0x119
#define SEG6COM3_position                        0x6
#define SEG6COM3_size                            0x1
#define SEG6COM3_value_mask                      0x40
#define SEG6COM3_clear_mask                      0xBF

#define S6C3                                     0x6
#define S6C3_address                             0x119
#define S6C3_position                            0x6
#define S6C3_size                                0x1
#define S6C3_value_mask                          0x40
#define S6C3_clear_mask                          0xBF

#define LCDDATA9_SEG6                            0x6
#define LCDDATA9_SEG6_address                    0x119
#define LCDDATA9_SEG6_position                   0x6
#define LCDDATA9_SEG6_size                       0x1
#define LCDDATA9_SEG6_value_mask                 0x40
#define LCDDATA9_SEG6_clear_mask                 0xBF

#define SEG7COM3                                 0x7
#define SEG7COM3_address                         0x119
#define SEG7COM3_position                        0x7
#define SEG7COM3_size                            0x1
#define SEG7COM3_value_mask                      0x80
#define SEG7COM3_clear_mask                      0x7F

#define S7C3                                     0x7
#define S7C3_address                             0x119
#define S7C3_position                            0x7
#define S7C3_size                                0x1
#define S7C3_value_mask                          0x80
#define S7C3_clear_mask                          0x7F

#define LCDDATA9_SEG7                            0x7
#define LCDDATA9_SEG7_address                    0x119
#define LCDDATA9_SEG7_position                   0x7
#define LCDDATA9_SEG7_size                       0x1
#define LCDDATA9_SEG7_value_mask                 0x80
#define LCDDATA9_SEG7_clear_mask                 0x7F


/*--------------------------------------------------------------------#
| LCDDATA10                                                     0x11A |
#---------------------------------------------------------------------#
| SEG15COM3 | S14C3 | S13C3 | S12C3 | S11C3 | SEG10COM3 | S9C3 | S8C3 |
#---------------------------------------------------------------------#
| 7         | 6     | 5     | 4     | 3     | 2         | 1    | 0    |
#--------------------------------------------------------------------*/

#define LCDDATA10                                0x0
#define LCDDATA10_address                        0x11A
#define LCDDATA10_position                       0x0
#define LCDDATA10_size                           0x8
#define LCDDATA10_value_mask                     0xFF
#define LCDDATA10_clear_mask                     0x0

#define S8C3                                     0x0
#define S8C3_address                             0x11A
#define S8C3_position                            0x0
#define S8C3_size                                0x1
#define S8C3_value_mask                          0x1
#define S8C3_clear_mask                          0xFE

#define SEG8COM3                                 0x0
#define SEG8COM3_address                         0x11A
#define SEG8COM3_position                        0x0
#define SEG8COM3_size                            0x1
#define SEG8COM3_value_mask                      0x1
#define SEG8COM3_clear_mask                      0xFE

#define LCDDATA10_SEG8                           0x0
#define LCDDATA10_SEG8_address                   0x11A
#define LCDDATA10_SEG8_position                  0x0
#define LCDDATA10_SEG8_size                      0x1
#define LCDDATA10_SEG8_value_mask                0x1
#define LCDDATA10_SEG8_clear_mask                0xFE

#define S9C3                                     0x1
#define S9C3_address                             0x11A
#define S9C3_position                            0x1
#define S9C3_size                                0x1
#define S9C3_value_mask                          0x2
#define S9C3_clear_mask                          0xFD

#define SEG9COM3                                 0x1
#define SEG9COM3_address                         0x11A
#define SEG9COM3_position                        0x1
#define SEG9COM3_size                            0x1
#define SEG9COM3_value_mask                      0x2
#define SEG9COM3_clear_mask                      0xFD

#define LCDDATA10_SEG9                           0x1
#define LCDDATA10_SEG9_address                   0x11A
#define LCDDATA10_SEG9_position                  0x1
#define LCDDATA10_SEG9_size                      0x1
#define LCDDATA10_SEG9_value_mask                0x2
#define LCDDATA10_SEG9_clear_mask                0xFD

#define SEG10COM3                                0x2
#define SEG10COM3_address                        0x11A
#define SEG10COM3_position                       0x2
#define SEG10COM3_size                           0x1
#define SEG10COM3_value_mask                     0x4
#define SEG10COM3_clear_mask                     0xFB

#define S10C3                                    0x2
#define S10C3_address                            0x11A
#define S10C3_position                           0x2
#define S10C3_size                               0x1
#define S10C3_value_mask                         0x4
#define S10C3_clear_mask                         0xFB

#define LCDDATA10_SEG10                          0x2
#define LCDDATA10_SEG10_address                  0x11A
#define LCDDATA10_SEG10_position                 0x2
#define LCDDATA10_SEG10_size                     0x1
#define LCDDATA10_SEG10_value_mask               0x4
#define LCDDATA10_SEG10_clear_mask               0xFB

#define S11C3                                    0x3
#define S11C3_address                            0x11A
#define S11C3_position                           0x3
#define S11C3_size                               0x1
#define S11C3_value_mask                         0x8
#define S11C3_clear_mask                         0xF7

#define LCDDATA10_SEG11                          0x3
#define LCDDATA10_SEG11_address                  0x11A
#define LCDDATA10_SEG11_position                 0x3
#define LCDDATA10_SEG11_size                     0x1
#define LCDDATA10_SEG11_value_mask               0x8
#define LCDDATA10_SEG11_clear_mask               0xF7

#define SEG11COM3                                0x3
#define SEG11COM3_address                        0x11A
#define SEG11COM3_position                       0x3
#define SEG11COM3_size                           0x1
#define SEG11COM3_value_mask                     0x8
#define SEG11COM3_clear_mask                     0xF7

#define S12C3                                    0x4
#define S12C3_address                            0x11A
#define S12C3_position                           0x4
#define S12C3_size                               0x1
#define S12C3_value_mask                         0x10
#define S12C3_clear_mask                         0xEF

#define LCDDATA10_SEG12                          0x4
#define LCDDATA10_SEG12_address                  0x11A
#define LCDDATA10_SEG12_position                 0x4
#define LCDDATA10_SEG12_size                     0x1
#define LCDDATA10_SEG12_value_mask               0x10
#define LCDDATA10_SEG12_clear_mask               0xEF

#define SEG12COM3                                0x4
#define SEG12COM3_address                        0x11A
#define SEG12COM3_position                       0x4
#define SEG12COM3_size                           0x1
#define SEG12COM3_value_mask                     0x10
#define SEG12COM3_clear_mask                     0xEF

#define S13C3                                    0x5
#define S13C3_address                            0x11A
#define S13C3_position                           0x5
#define S13C3_size                               0x1
#define S13C3_value_mask                         0x20
#define S13C3_clear_mask                         0xDF

#define SEG13COM3                                0x5
#define SEG13COM3_address                        0x11A
#define SEG13COM3_position                       0x5
#define SEG13COM3_size                           0x1
#define SEG13COM3_value_mask                     0x20
#define SEG13COM3_clear_mask                     0xDF

#define LCDDATA10_SEG13                          0x5
#define LCDDATA10_SEG13_address                  0x11A
#define LCDDATA10_SEG13_position                 0x5
#define LCDDATA10_SEG13_size                     0x1
#define LCDDATA10_SEG13_value_mask               0x20
#define LCDDATA10_SEG13_clear_mask               0xDF

#define S14C3                                    0x6
#define S14C3_address                            0x11A
#define S14C3_position                           0x6
#define S14C3_size                               0x1
#define S14C3_value_mask                         0x40
#define S14C3_clear_mask                         0xBF

#define SEG14COM3                                0x6
#define SEG14COM3_address                        0x11A
#define SEG14COM3_position                       0x6
#define SEG14COM3_size                           0x1
#define SEG14COM3_value_mask                     0x40
#define SEG14COM3_clear_mask                     0xBF

#define LCDDATA10_SEG14                          0x6
#define LCDDATA10_SEG14_address                  0x11A
#define LCDDATA10_SEG14_position                 0x6
#define LCDDATA10_SEG14_size                     0x1
#define LCDDATA10_SEG14_value_mask               0x40
#define LCDDATA10_SEG14_clear_mask               0xBF

#define SEG15COM3                                0x7
#define SEG15COM3_address                        0x11A
#define SEG15COM3_position                       0x7
#define SEG15COM3_size                           0x1
#define SEG15COM3_value_mask                     0x80
#define SEG15COM3_clear_mask                     0x7F

#define S15C3                                    0x7
#define S15C3_address                            0x11A
#define S15C3_position                           0x7
#define S15C3_size                               0x1
#define S15C3_value_mask                         0x80
#define S15C3_clear_mask                         0x7F

#define LCDDATA10_SEG15                          0x7
#define LCDDATA10_SEG15_address                  0x11A
#define LCDDATA10_SEG15_position                 0x7
#define LCDDATA10_SEG15_size                     0x1
#define LCDDATA10_SEG15_value_mask               0x80
#define LCDDATA10_SEG15_clear_mask               0x7F


/*--------------------------------------------------------------------------------------------------------------#
| LCDDATA11                                                                                               0x11B |
#---------------------------------------------------------------------------------------------------------------#
| SEG23COM3 | LCDDATA11_SEG22 | LCDDATA11_SEG21 | LCDDATA11_SEG20 | LCDDATA11_SEG19 | S18C3 | S17C3 | SEG16COM3 |
#---------------------------------------------------------------------------------------------------------------#
| 7         | 6               | 5               | 4               | 3               | 2     | 1     | 0         |
#--------------------------------------------------------------------------------------------------------------*/

#define LCDDATA11                                0x0
#define LCDDATA11_address                        0x11B
#define LCDDATA11_position                       0x0
#define LCDDATA11_size                           0x8
#define LCDDATA11_value_mask                     0xFF
#define LCDDATA11_clear_mask                     0x0

#define SEG16COM3                                0x0
#define SEG16COM3_address                        0x11B
#define SEG16COM3_position                       0x0
#define SEG16COM3_size                           0x1
#define SEG16COM3_value_mask                     0x1
#define SEG16COM3_clear_mask                     0xFE

#define S16C3                                    0x0
#define S16C3_address                            0x11B
#define S16C3_position                           0x0
#define S16C3_size                               0x1
#define S16C3_value_mask                         0x1
#define S16C3_clear_mask                         0xFE

#define LCDDATA11_SEG16                          0x0
#define LCDDATA11_SEG16_address                  0x11B
#define LCDDATA11_SEG16_position                 0x0
#define LCDDATA11_SEG16_size                     0x1
#define LCDDATA11_SEG16_value_mask               0x1
#define LCDDATA11_SEG16_clear_mask               0xFE

#define S17C3                                    0x1
#define S17C3_address                            0x11B
#define S17C3_position                           0x1
#define S17C3_size                               0x1
#define S17C3_value_mask                         0x2
#define S17C3_clear_mask                         0xFD

#define LCDDATA11_SEG17                          0x1
#define LCDDATA11_SEG17_address                  0x11B
#define LCDDATA11_SEG17_position                 0x1
#define LCDDATA11_SEG17_size                     0x1
#define LCDDATA11_SEG17_value_mask               0x2
#define LCDDATA11_SEG17_clear_mask               0xFD

#define SEG17COM3                                0x1
#define SEG17COM3_address                        0x11B
#define SEG17COM3_position                       0x1
#define SEG17COM3_size                           0x1
#define SEG17COM3_value_mask                     0x2
#define SEG17COM3_clear_mask                     0xFD

#define S18C3                                    0x2
#define S18C3_address                            0x11B
#define S18C3_position                           0x2
#define S18C3_size                               0x1
#define S18C3_value_mask                         0x4
#define S18C3_clear_mask                         0xFB

#define SEG18COM3                                0x2
#define SEG18COM3_address                        0x11B
#define SEG18COM3_position                       0x2
#define SEG18COM3_size                           0x1
#define SEG18COM3_value_mask                     0x4
#define SEG18COM3_clear_mask                     0xFB

#define LCDDATA11_SEG18                          0x2
#define LCDDATA11_SEG18_address                  0x11B
#define LCDDATA11_SEG18_position                 0x2
#define LCDDATA11_SEG18_size                     0x1
#define LCDDATA11_SEG18_value_mask               0x4
#define LCDDATA11_SEG18_clear_mask               0xFB

#define LCDDATA11_SEG19                          0x3
#define LCDDATA11_SEG19_address                  0x11B
#define LCDDATA11_SEG19_position                 0x3
#define LCDDATA11_SEG19_size                     0x1
#define LCDDATA11_SEG19_value_mask               0x8
#define LCDDATA11_SEG19_clear_mask               0xF7

#define S19C3                                    0x3
#define S19C3_address                            0x11B
#define S19C3_position                           0x3
#define S19C3_size                               0x1
#define S19C3_value_mask                         0x8
#define S19C3_clear_mask                         0xF7

#define SEG19COM3                                0x3
#define SEG19COM3_address                        0x11B
#define SEG19COM3_position                       0x3
#define SEG19COM3_size                           0x1
#define SEG19COM3_value_mask                     0x8
#define SEG19COM3_clear_mask                     0xF7

#define LCDDATA11_SEG20                          0x4
#define LCDDATA11_SEG20_address                  0x11B
#define LCDDATA11_SEG20_position                 0x4
#define LCDDATA11_SEG20_size                     0x1
#define LCDDATA11_SEG20_value_mask               0x10
#define LCDDATA11_SEG20_clear_mask               0xEF

#define S20C3                                    0x4
#define S20C3_address                            0x11B
#define S20C3_position                           0x4
#define S20C3_size                               0x1
#define S20C3_value_mask                         0x10
#define S20C3_clear_mask                         0xEF

#define SEG20COM3                                0x4
#define SEG20COM3_address                        0x11B
#define SEG20COM3_position                       0x4
#define SEG20COM3_size                           0x1
#define SEG20COM3_value_mask                     0x10
#define SEG20COM3_clear_mask                     0xEF

#define LCDDATA11_SEG21                          0x5
#define LCDDATA11_SEG21_address                  0x11B
#define LCDDATA11_SEG21_position                 0x5
#define LCDDATA11_SEG21_size                     0x1
#define LCDDATA11_SEG21_value_mask               0x20
#define LCDDATA11_SEG21_clear_mask               0xDF

#define S21C3                                    0x5
#define S21C3_address                            0x11B
#define S21C3_position                           0x5
#define S21C3_size                               0x1
#define S21C3_value_mask                         0x20
#define S21C3_clear_mask                         0xDF

#define SEG21COM3                                0x5
#define SEG21COM3_address                        0x11B
#define SEG21COM3_position                       0x5
#define SEG21COM3_size                           0x1
#define SEG21COM3_value_mask                     0x20
#define SEG21COM3_clear_mask                     0xDF

#define LCDDATA11_SEG22                          0x6
#define LCDDATA11_SEG22_address                  0x11B
#define LCDDATA11_SEG22_position                 0x6
#define LCDDATA11_SEG22_size                     0x1
#define LCDDATA11_SEG22_value_mask               0x40
#define LCDDATA11_SEG22_clear_mask               0xBF

#define SEG22COM3                                0x6
#define SEG22COM3_address                        0x11B
#define SEG22COM3_position                       0x6
#define SEG22COM3_size                           0x1
#define SEG22COM3_value_mask                     0x40
#define SEG22COM3_clear_mask                     0xBF

#define S22C3                                    0x6
#define S22C3_address                            0x11B
#define S22C3_position                           0x6
#define S22C3_size                               0x1
#define S22C3_value_mask                         0x40
#define S22C3_clear_mask                         0xBF

#define LCDDATA11_SEG23                          0x7
#define LCDDATA11_SEG23_address                  0x11B
#define LCDDATA11_SEG23_position                 0x7
#define LCDDATA11_SEG23_size                     0x1
#define LCDDATA11_SEG23_value_mask               0x80
#define LCDDATA11_SEG23_clear_mask               0x7F

#define SEG23COM3                                0x7
#define SEG23COM3_address                        0x11B
#define SEG23COM3_position                       0x7
#define SEG23COM3_size                           0x1
#define SEG23COM3_value_mask                     0x80
#define SEG23COM3_clear_mask                     0x7F

#define S23C3                                    0x7
#define S23C3_address                            0x11B
#define S23C3_position                           0x7
#define S23C3_size                               0x1
#define S23C3_value_mask                         0x80
#define S23C3_clear_mask                         0x7F


/*--------------------------------------------------------------------------------------------------------------#
| LCDSE0                                                                                                  0x11C |
#---------------------------------------------------------------------------------------------------------------#
| LCDSE0_SEG7 | LCDSE0_SEG6 | LCDSE0_SEG5 | LCDSE0_SEG4 | LCDSE0_SEG3 | LCDSE0_SEG2 | LCDSE0_SEG1 | LCDSE0_SEG0 |
#---------------------------------------------------------------------------------------------------------------#
| 7           | 6           | 5           | 4           | 3           | 2           | 1           | 0           |
#--------------------------------------------------------------------------------------------------------------*/

#define LCDSE0                                   0x0
#define LCDSE0_address                           0x11C
#define LCDSE0_position                          0x0
#define LCDSE0_size                              0x8
#define LCDSE0_value_mask                        0xFF
#define LCDSE0_clear_mask                        0x0

#define LCDSE0_SEG0                              0x0
#define LCDSE0_SEG0_address                      0x11C
#define LCDSE0_SEG0_position                     0x0
#define LCDSE0_SEG0_size                         0x1
#define LCDSE0_SEG0_value_mask                   0x1
#define LCDSE0_SEG0_clear_mask                   0xFE

#define SE0                                      0x0
#define SE0_address                              0x11C
#define SE0_position                             0x0
#define SE0_size                                 0x1
#define SE0_value_mask                           0x1
#define SE0_clear_mask                           0xFE

#define SEGEN0                                   0x0
#define SEGEN0_address                           0x11C
#define SEGEN0_position                          0x0
#define SEGEN0_size                              0x1
#define SEGEN0_value_mask                        0x1
#define SEGEN0_clear_mask                        0xFE

#define LCDSE0_SEG1                              0x1
#define LCDSE0_SEG1_address                      0x11C
#define LCDSE0_SEG1_position                     0x1
#define LCDSE0_SEG1_size                         0x1
#define LCDSE0_SEG1_value_mask                   0x2
#define LCDSE0_SEG1_clear_mask                   0xFD

#define SE1                                      0x1
#define SE1_address                              0x11C
#define SE1_position                             0x1
#define SE1_size                                 0x1
#define SE1_value_mask                           0x2
#define SE1_clear_mask                           0xFD

#define SEGEN1                                   0x1
#define SEGEN1_address                           0x11C
#define SEGEN1_position                          0x1
#define SEGEN1_size                              0x1
#define SEGEN1_value_mask                        0x2
#define SEGEN1_clear_mask                        0xFD

#define LCDSE0_SEG2                              0x2
#define LCDSE0_SEG2_address                      0x11C
#define LCDSE0_SEG2_position                     0x2
#define LCDSE0_SEG2_size                         0x1
#define LCDSE0_SEG2_value_mask                   0x4
#define LCDSE0_SEG2_clear_mask                   0xFB

#define SE2                                      0x2
#define SE2_address                              0x11C
#define SE2_position                             0x2
#define SE2_size                                 0x1
#define SE2_value_mask                           0x4
#define SE2_clear_mask                           0xFB

#define SEGEN2                                   0x2
#define SEGEN2_address                           0x11C
#define SEGEN2_position                          0x2
#define SEGEN2_size                              0x1
#define SEGEN2_value_mask                        0x4
#define SEGEN2_clear_mask                        0xFB

#define LCDSE0_SEG3                              0x3
#define LCDSE0_SEG3_address                      0x11C
#define LCDSE0_SEG3_position                     0x3
#define LCDSE0_SEG3_size                         0x1
#define LCDSE0_SEG3_value_mask                   0x8
#define LCDSE0_SEG3_clear_mask                   0xF7

#define SE3                                      0x3
#define SE3_address                              0x11C
#define SE3_position                             0x3
#define SE3_size                                 0x1
#define SE3_value_mask                           0x8
#define SE3_clear_mask                           0xF7

#define SEGEN3                                   0x3
#define SEGEN3_address                           0x11C
#define SEGEN3_position                          0x3
#define SEGEN3_size                              0x1
#define SEGEN3_value_mask                        0x8
#define SEGEN3_clear_mask                        0xF7

#define LCDSE0_SEG4                              0x4
#define LCDSE0_SEG4_address                      0x11C
#define LCDSE0_SEG4_position                     0x4
#define LCDSE0_SEG4_size                         0x1
#define LCDSE0_SEG4_value_mask                   0x10
#define LCDSE0_SEG4_clear_mask                   0xEF

#define SE4                                      0x4
#define SE4_address                              0x11C
#define SE4_position                             0x4
#define SE4_size                                 0x1
#define SE4_value_mask                           0x10
#define SE4_clear_mask                           0xEF

#define SEGEN4                                   0x4
#define SEGEN4_address                           0x11C
#define SEGEN4_position                          0x4
#define SEGEN4_size                              0x1
#define SEGEN4_value_mask                        0x10
#define SEGEN4_clear_mask                        0xEF

#define LCDSE0_SEG5                              0x5
#define LCDSE0_SEG5_address                      0x11C
#define LCDSE0_SEG5_position                     0x5
#define LCDSE0_SEG5_size                         0x1
#define LCDSE0_SEG5_value_mask                   0x20
#define LCDSE0_SEG5_clear_mask                   0xDF

#define SE5                                      0x5
#define SE5_address                              0x11C
#define SE5_position                             0x5
#define SE5_size                                 0x1
#define SE5_value_mask                           0x20
#define SE5_clear_mask                           0xDF

#define SEGEN5                                   0x5
#define SEGEN5_address                           0x11C
#define SEGEN5_position                          0x5
#define SEGEN5_size                              0x1
#define SEGEN5_value_mask                        0x20
#define SEGEN5_clear_mask                        0xDF

#define LCDSE0_SEG6                              0x6
#define LCDSE0_SEG6_address                      0x11C
#define LCDSE0_SEG6_position                     0x6
#define LCDSE0_SEG6_size                         0x1
#define LCDSE0_SEG6_value_mask                   0x40
#define LCDSE0_SEG6_clear_mask                   0xBF

#define SE6                                      0x6
#define SE6_address                              0x11C
#define SE6_position                             0x6
#define SE6_size                                 0x1
#define SE6_value_mask                           0x40
#define SE6_clear_mask                           0xBF

#define SEGEN6                                   0x6
#define SEGEN6_address                           0x11C
#define SEGEN6_position                          0x6
#define SEGEN6_size                              0x1
#define SEGEN6_value_mask                        0x40
#define SEGEN6_clear_mask                        0xBF

#define LCDSE0_SEG7                              0x7
#define LCDSE0_SEG7_address                      0x11C
#define LCDSE0_SEG7_position                     0x7
#define LCDSE0_SEG7_size                         0x1
#define LCDSE0_SEG7_value_mask                   0x80
#define LCDSE0_SEG7_clear_mask                   0x7F

#define SE7                                      0x7
#define SE7_address                              0x11C
#define SE7_position                             0x7
#define SE7_size                                 0x1
#define SE7_value_mask                           0x80
#define SE7_clear_mask                           0x7F

#define SEGEN7                                   0x7
#define SEGEN7_address                           0x11C
#define SEGEN7_position                          0x7
#define SEGEN7_size                              0x1
#define SEGEN7_value_mask                        0x80
#define SEGEN7_clear_mask                        0x7F


/*--------------------------------------------------------------------------------#
| LCDSE1                                                                    0x11D |
#---------------------------------------------------------------------------------#
| SE15 | SE14 | SEGEN13 | SEGEN12 | SEGEN11 | SEGEN10 | LCDSE1_SEG9 | LCDSE1_SEG8 |
#---------------------------------------------------------------------------------#
| 7    | 6    | 5       | 4       | 3       | 2       | 1           | 0           |
#--------------------------------------------------------------------------------*/

#define LCDSE1                                   0x0
#define LCDSE1_address                           0x11D
#define LCDSE1_position                          0x0
#define LCDSE1_size                              0x8
#define LCDSE1_value_mask                        0xFF
#define LCDSE1_clear_mask                        0x0

#define LCDSE1_SEG8                              0x0
#define LCDSE1_SEG8_address                      0x11D
#define LCDSE1_SEG8_position                     0x0
#define LCDSE1_SEG8_size                         0x1
#define LCDSE1_SEG8_value_mask                   0x1
#define LCDSE1_SEG8_clear_mask                   0xFE

#define SE8                                      0x0
#define SE8_address                              0x11D
#define SE8_position                             0x0
#define SE8_size                                 0x1
#define SE8_value_mask                           0x1
#define SE8_clear_mask                           0xFE

#define SEGEN8                                   0x0
#define SEGEN8_address                           0x11D
#define SEGEN8_position                          0x0
#define SEGEN8_size                              0x1
#define SEGEN8_value_mask                        0x1
#define SEGEN8_clear_mask                        0xFE

#define LCDSE1_SEG9                              0x1
#define LCDSE1_SEG9_address                      0x11D
#define LCDSE1_SEG9_position                     0x1
#define LCDSE1_SEG9_size                         0x1
#define LCDSE1_SEG9_value_mask                   0x2
#define LCDSE1_SEG9_clear_mask                   0xFD

#define SE9                                      0x1
#define SE9_address                              0x11D
#define SE9_position                             0x1
#define SE9_size                                 0x1
#define SE9_value_mask                           0x2
#define SE9_clear_mask                           0xFD

#define SEGEN9                                   0x1
#define SEGEN9_address                           0x11D
#define SEGEN9_position                          0x1
#define SEGEN9_size                              0x1
#define SEGEN9_value_mask                        0x2
#define SEGEN9_clear_mask                        0xFD

#define SEGEN10                                  0x2
#define SEGEN10_address                          0x11D
#define SEGEN10_position                         0x2
#define SEGEN10_size                             0x1
#define SEGEN10_value_mask                       0x4
#define SEGEN10_clear_mask                       0xFB

#define LCDSE1_SEG10                             0x2
#define LCDSE1_SEG10_address                     0x11D
#define LCDSE1_SEG10_position                    0x2
#define LCDSE1_SEG10_size                        0x1
#define LCDSE1_SEG10_value_mask                  0x4
#define LCDSE1_SEG10_clear_mask                  0xFB

#define SE10                                     0x2
#define SE10_address                             0x11D
#define SE10_position                            0x2
#define SE10_size                                0x1
#define SE10_value_mask                          0x4
#define SE10_clear_mask                          0xFB

#define SEGEN11                                  0x3
#define SEGEN11_address                          0x11D
#define SEGEN11_position                         0x3
#define SEGEN11_size                             0x1
#define SEGEN11_value_mask                       0x8
#define SEGEN11_clear_mask                       0xF7

#define SE11                                     0x3
#define SE11_address                             0x11D
#define SE11_position                            0x3
#define SE11_size                                0x1
#define SE11_value_mask                          0x8
#define SE11_clear_mask                          0xF7

#define LCDSE1_SEG11                             0x3
#define LCDSE1_SEG11_address                     0x11D
#define LCDSE1_SEG11_position                    0x3
#define LCDSE1_SEG11_size                        0x1
#define LCDSE1_SEG11_value_mask                  0x8
#define LCDSE1_SEG11_clear_mask                  0xF7

#define SEGEN12                                  0x4
#define SEGEN12_address                          0x11D
#define SEGEN12_position                         0x4
#define SEGEN12_size                             0x1
#define SEGEN12_value_mask                       0x10
#define SEGEN12_clear_mask                       0xEF

#define SE12                                     0x4
#define SE12_address                             0x11D
#define SE12_position                            0x4
#define SE12_size                                0x1
#define SE12_value_mask                          0x10
#define SE12_clear_mask                          0xEF

#define LCDSE1_SEG12                             0x4
#define LCDSE1_SEG12_address                     0x11D
#define LCDSE1_SEG12_position                    0x4
#define LCDSE1_SEG12_size                        0x1
#define LCDSE1_SEG12_value_mask                  0x10
#define LCDSE1_SEG12_clear_mask                  0xEF

#define SEGEN13                                  0x5
#define SEGEN13_address                          0x11D
#define SEGEN13_position                         0x5
#define SEGEN13_size                             0x1
#define SEGEN13_value_mask                       0x20
#define SEGEN13_clear_mask                       0xDF

#define SE13                                     0x5
#define SE13_address                             0x11D
#define SE13_position                            0x5
#define SE13_size                                0x1
#define SE13_value_mask                          0x20
#define SE13_clear_mask                          0xDF

#define LCDSE1_SEG13                             0x5
#define LCDSE1_SEG13_address                     0x11D
#define LCDSE1_SEG13_position                    0x5
#define LCDSE1_SEG13_size                        0x1
#define LCDSE1_SEG13_value_mask                  0x20
#define LCDSE1_SEG13_clear_mask                  0xDF

#define SE14                                     0x6
#define SE14_address                             0x11D
#define SE14_position                            0x6
#define SE14_size                                0x1
#define SE14_value_mask                          0x40
#define SE14_clear_mask                          0xBF

#define SEGEN14                                  0x6
#define SEGEN14_address                          0x11D
#define SEGEN14_position                         0x6
#define SEGEN14_size                             0x1
#define SEGEN14_value_mask                       0x40
#define SEGEN14_clear_mask                       0xBF

#define LCDSE1_SEG14                             0x6
#define LCDSE1_SEG14_address                     0x11D
#define LCDSE1_SEG14_position                    0x6
#define LCDSE1_SEG14_size                        0x1
#define LCDSE1_SEG14_value_mask                  0x40
#define LCDSE1_SEG14_clear_mask                  0xBF

#define SE15                                     0x7
#define SE15_address                             0x11D
#define SE15_position                            0x7
#define SE15_size                                0x1
#define SE15_value_mask                          0x80
#define SE15_clear_mask                          0x7F

#define SEGEN15                                  0x7
#define SEGEN15_address                          0x11D
#define SEGEN15_position                         0x7
#define SEGEN15_size                             0x1
#define SEGEN15_value_mask                       0x80
#define SEGEN15_clear_mask                       0x7F

#define LCDSE1_SEG15                             0x7
#define LCDSE1_SEG15_address                     0x11D
#define LCDSE1_SEG15_position                    0x7
#define LCDSE1_SEG15_size                        0x1
#define LCDSE1_SEG15_value_mask                  0x80
#define LCDSE1_SEG15_clear_mask                  0x7F


/*--------------------------------------------------------------------------------------------------#
| LCDSE2                                                                                      0x11E |
#---------------------------------------------------------------------------------------------------#
| LCDSE2_SEG23 | LCDSE2_SEG22 | LCDSE2_SEG21 | LCDSE2_SEG20 | SEGEN19 | SEGEN18 | SEGEN17 | SEGEN16 |
#---------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3       | 2       | 1       | 0       |
#--------------------------------------------------------------------------------------------------*/

#define LCDSE2                                   0x0
#define LCDSE2_address                           0x11E
#define LCDSE2_position                          0x0
#define LCDSE2_size                              0x8
#define LCDSE2_value_mask                        0xFF
#define LCDSE2_clear_mask                        0x0

#define SEGEN16                                  0x0
#define SEGEN16_address                          0x11E
#define SEGEN16_position                         0x0
#define SEGEN16_size                             0x1
#define SEGEN16_value_mask                       0x1
#define SEGEN16_clear_mask                       0xFE

#define SE16                                     0x0
#define SE16_address                             0x11E
#define SE16_position                            0x0
#define SE16_size                                0x1
#define SE16_value_mask                          0x1
#define SE16_clear_mask                          0xFE

#define LCDSE2_SEG16                             0x0
#define LCDSE2_SEG16_address                     0x11E
#define LCDSE2_SEG16_position                    0x0
#define LCDSE2_SEG16_size                        0x1
#define LCDSE2_SEG16_value_mask                  0x1
#define LCDSE2_SEG16_clear_mask                  0xFE

#define SEGEN17                                  0x1
#define SEGEN17_address                          0x11E
#define SEGEN17_position                         0x1
#define SEGEN17_size                             0x1
#define SEGEN17_value_mask                       0x2
#define SEGEN17_clear_mask                       0xFD

#define SE17                                     0x1
#define SE17_address                             0x11E
#define SE17_position                            0x1
#define SE17_size                                0x1
#define SE17_value_mask                          0x2
#define SE17_clear_mask                          0xFD

#define LCDSE2_SEG17                             0x1
#define LCDSE2_SEG17_address                     0x11E
#define LCDSE2_SEG17_position                    0x1
#define LCDSE2_SEG17_size                        0x1
#define LCDSE2_SEG17_value_mask                  0x2
#define LCDSE2_SEG17_clear_mask                  0xFD

#define SEGEN18                                  0x2
#define SEGEN18_address                          0x11E
#define SEGEN18_position                         0x2
#define SEGEN18_size                             0x1
#define SEGEN18_value_mask                       0x4
#define SEGEN18_clear_mask                       0xFB

#define SE18                                     0x2
#define SE18_address                             0x11E
#define SE18_position                            0x2
#define SE18_size                                0x1
#define SE18_value_mask                          0x4
#define SE18_clear_mask                          0xFB

#define LCDSE2_SEG18                             0x2
#define LCDSE2_SEG18_address                     0x11E
#define LCDSE2_SEG18_position                    0x2
#define LCDSE2_SEG18_size                        0x1
#define LCDSE2_SEG18_value_mask                  0x4
#define LCDSE2_SEG18_clear_mask                  0xFB

#define SEGEN19                                  0x3
#define SEGEN19_address                          0x11E
#define SEGEN19_position                         0x3
#define SEGEN19_size                             0x1
#define SEGEN19_value_mask                       0x8
#define SEGEN19_clear_mask                       0xF7

#define SE19                                     0x3
#define SE19_address                             0x11E
#define SE19_position                            0x3
#define SE19_size                                0x1
#define SE19_value_mask                          0x8
#define SE19_clear_mask                          0xF7

#define LCDSE2_SEG19                             0x3
#define LCDSE2_SEG19_address                     0x11E
#define LCDSE2_SEG19_position                    0x3
#define LCDSE2_SEG19_size                        0x1
#define LCDSE2_SEG19_value_mask                  0x8
#define LCDSE2_SEG19_clear_mask                  0xF7

#define LCDSE2_SEG20                             0x4
#define LCDSE2_SEG20_address                     0x11E
#define LCDSE2_SEG20_position                    0x4
#define LCDSE2_SEG20_size                        0x1
#define LCDSE2_SEG20_value_mask                  0x10
#define LCDSE2_SEG20_clear_mask                  0xEF

#define SEGEN20                                  0x4
#define SEGEN20_address                          0x11E
#define SEGEN20_position                         0x4
#define SEGEN20_size                             0x1
#define SEGEN20_value_mask                       0x10
#define SEGEN20_clear_mask                       0xEF

#define SE20                                     0x4
#define SE20_address                             0x11E
#define SE20_position                            0x4
#define SE20_size                                0x1
#define SE20_value_mask                          0x10
#define SE20_clear_mask                          0xEF

#define LCDSE2_SEG21                             0x5
#define LCDSE2_SEG21_address                     0x11E
#define LCDSE2_SEG21_position                    0x5
#define LCDSE2_SEG21_size                        0x1
#define LCDSE2_SEG21_value_mask                  0x20
#define LCDSE2_SEG21_clear_mask                  0xDF

#define SEGEN21                                  0x5
#define SEGEN21_address                          0x11E
#define SEGEN21_position                         0x5
#define SEGEN21_size                             0x1
#define SEGEN21_value_mask                       0x20
#define SEGEN21_clear_mask                       0xDF

#define SE21                                     0x5
#define SE21_address                             0x11E
#define SE21_position                            0x5
#define SE21_size                                0x1
#define SE21_value_mask                          0x20
#define SE21_clear_mask                          0xDF

#define LCDSE2_SEG22                             0x6
#define LCDSE2_SEG22_address                     0x11E
#define LCDSE2_SEG22_position                    0x6
#define LCDSE2_SEG22_size                        0x1
#define LCDSE2_SEG22_value_mask                  0x40
#define LCDSE2_SEG22_clear_mask                  0xBF

#define SEGEN22                                  0x6
#define SEGEN22_address                          0x11E
#define SEGEN22_position                         0x6
#define SEGEN22_size                             0x1
#define SEGEN22_value_mask                       0x40
#define SEGEN22_clear_mask                       0xBF

#define SE22                                     0x6
#define SE22_address                             0x11E
#define SE22_position                            0x6
#define SE22_size                                0x1
#define SE22_value_mask                          0x40
#define SE22_clear_mask                          0xBF

#define LCDSE2_SEG23                             0x7
#define LCDSE2_SEG23_address                     0x11E
#define LCDSE2_SEG23_position                    0x7
#define LCDSE2_SEG23_size                        0x1
#define LCDSE2_SEG23_value_mask                  0x80
#define LCDSE2_SEG23_clear_mask                  0x7F

#define SEGEN23                                  0x7
#define SEGEN23_address                          0x11E
#define SEGEN23_position                         0x7
#define SEGEN23_size                             0x1
#define SEGEN23_value_mask                       0x80
#define SEGEN23_clear_mask                       0x7F

#define SE23                                     0x7
#define SE23_address                             0x11E
#define SE23_position                            0x7
#define SE23_size                                0x1
#define SE23_value_mask                          0x80
#define SE23_clear_mask                          0x7F


/*----------------------------------------------------------------------#
| TRISF                                                           0x185 |
#-----------------------------------------------------------------------#
| TRISF7 | TRISF6 | TRISF5 | TRISF4 | TRISF3 | TRISF2 | TRISF1 | TRISF0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISF                                    0x0
#define TRISF_address                            0x185
#define TRISF_position                           0x0
#define TRISF_size                               0x8
#define TRISF_value_mask                         0xFF
#define TRISF_clear_mask                         0x0

#define TRISF0                                   0x0
#define TRISF0_address                           0x185
#define TRISF0_position                          0x0
#define TRISF0_size                              0x1
#define TRISF0_value_mask                        0x1
#define TRISF0_clear_mask                        0xFE

#define TRISF1                                   0x1
#define TRISF1_address                           0x185
#define TRISF1_position                          0x1
#define TRISF1_size                              0x1
#define TRISF1_value_mask                        0x2
#define TRISF1_clear_mask                        0xFD

#define TRISF2                                   0x2
#define TRISF2_address                           0x185
#define TRISF2_position                          0x2
#define TRISF2_size                              0x1
#define TRISF2_value_mask                        0x4
#define TRISF2_clear_mask                        0xFB

#define TRISF3                                   0x3
#define TRISF3_address                           0x185
#define TRISF3_position                          0x3
#define TRISF3_size                              0x1
#define TRISF3_value_mask                        0x8
#define TRISF3_clear_mask                        0xF7

#define TRISF4                                   0x4
#define TRISF4_address                           0x185
#define TRISF4_position                          0x4
#define TRISF4_size                              0x1
#define TRISF4_value_mask                        0x10
#define TRISF4_clear_mask                        0xEF

#define TRISF5                                   0x5
#define TRISF5_address                           0x185
#define TRISF5_position                          0x5
#define TRISF5_size                              0x1
#define TRISF5_value_mask                        0x20
#define TRISF5_clear_mask                        0xDF

#define TRISF6                                   0x6
#define TRISF6_address                           0x185
#define TRISF6_position                          0x6
#define TRISF6_size                              0x1
#define TRISF6_value_mask                        0x40
#define TRISF6_clear_mask                        0xBF

#define TRISF7                                   0x7
#define TRISF7_address                           0x185
#define TRISF7_position                          0x7
#define TRISF7_size                              0x1
#define TRISF7_value_mask                        0x80
#define TRISF7_clear_mask                        0x7F


/*------------------------------------------------------------#
| TRISG                                                 0x187 |
#-------------------------------------------------------------#
| - | - | TRISG5 | TRISG4 | TRISG3 | TRISG2 | TRISG1 | TRISG0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define TRISG                                    0x0
#define TRISG_address                            0x187
#define TRISG_position                           0x0
#define TRISG_size                               0x8
#define TRISG_value_mask                         0xFF
#define TRISG_clear_mask                         0x0

#define TRISG0                                   0x0
#define TRISG0_address                           0x187
#define TRISG0_position                          0x0
#define TRISG0_size                              0x1
#define TRISG0_value_mask                        0x1
#define TRISG0_clear_mask                        0xFE

#define TRISG1                                   0x1
#define TRISG1_address                           0x187
#define TRISG1_position                          0x1
#define TRISG1_size                              0x1
#define TRISG1_value_mask                        0x2
#define TRISG1_clear_mask                        0xFD

#define TRISG2                                   0x2
#define TRISG2_address                           0x187
#define TRISG2_position                          0x2
#define TRISG2_size                              0x1
#define TRISG2_value_mask                        0x4
#define TRISG2_clear_mask                        0xFB

#define TRISG3                                   0x3
#define TRISG3_address                           0x187
#define TRISG3_position                          0x3
#define TRISG3_size                              0x1
#define TRISG3_value_mask                        0x8
#define TRISG3_clear_mask                        0xF7

#define TRISG4                                   0x4
#define TRISG4_address                           0x187
#define TRISG4_position                          0x4
#define TRISG4_size                              0x1
#define TRISG4_value_mask                        0x10
#define TRISG4_clear_mask                        0xEF

#define TRISG5                                   0x5
#define TRISG5_address                           0x187
#define TRISG5_position                          0x5
#define TRISG5_size                              0x1
#define TRISG5_value_mask                        0x20
#define TRISG5_clear_mask                        0xDF


/*----------------------------------------------#
| PORTF                                   0x188 |
#-----------------------------------------------#
| RF7 | RF6 | RF5 | RF4 | RF3 | RF2 | RF1 | RF0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define PORTF                                    0x0
#define PORTF_address                            0x188
#define PORTF_position                           0x0
#define PORTF_size                               0x8
#define PORTF_value_mask                         0xFF
#define PORTF_clear_mask                         0x0

#define RF0                                      0x0
#define RF0_address                              0x188
#define RF0_position                             0x0
#define RF0_size                                 0x1
#define RF0_value_mask                           0x1
#define RF0_clear_mask                           0xFE

#define RF1                                      0x1
#define RF1_address                              0x188
#define RF1_position                             0x1
#define RF1_size                                 0x1
#define RF1_value_mask                           0x2
#define RF1_clear_mask                           0xFD

#define RF2                                      0x2
#define RF2_address                              0x188
#define RF2_position                             0x2
#define RF2_size                                 0x1
#define RF2_value_mask                           0x4
#define RF2_clear_mask                           0xFB

#define RF3                                      0x3
#define RF3_address                              0x188
#define RF3_position                             0x3
#define RF3_size                                 0x1
#define RF3_value_mask                           0x8
#define RF3_clear_mask                           0xF7

#define RF4                                      0x4
#define RF4_address                              0x188
#define RF4_position                             0x4
#define RF4_size                                 0x1
#define RF4_value_mask                           0x10
#define RF4_clear_mask                           0xEF

#define RF5                                      0x5
#define RF5_address                              0x188
#define RF5_position                             0x5
#define RF5_size                                 0x1
#define RF5_value_mask                           0x20
#define RF5_clear_mask                           0xDF

#define RF6                                      0x6
#define RF6_address                              0x188
#define RF6_position                             0x6
#define RF6_size                                 0x1
#define RF6_value_mask                           0x40
#define RF6_clear_mask                           0xBF

#define RF7                                      0x7
#define RF7_address                              0x188
#define RF7_position                             0x7
#define RF7_size                                 0x1
#define RF7_value_mask                           0x80
#define RF7_clear_mask                           0x7F


/*------------------------------------------#
| PORTG                               0x189 |
#-------------------------------------------#
| - | - | RG5 | RG4 | RG3 | RG2 | RG1 | RG0 |
#-------------------------------------------#
| 7 | 6 | 5   | 4   | 3   | 2   | 1   | 0   |
#------------------------------------------*/

#define PORTG                                    0x0
#define PORTG_address                            0x189
#define PORTG_position                           0x0
#define PORTG_size                               0x8
#define PORTG_value_mask                         0xFF
#define PORTG_clear_mask                         0x0

#define RG0                                      0x0
#define RG0_address                              0x189
#define RG0_position                             0x0
#define RG0_size                                 0x1
#define RG0_value_mask                           0x1
#define RG0_clear_mask                           0xFE

#define RG1                                      0x1
#define RG1_address                              0x189
#define RG1_position                             0x1
#define RG1_size                                 0x1
#define RG1_value_mask                           0x2
#define RG1_clear_mask                           0xFD

#define RG2                                      0x2
#define RG2_address                              0x189
#define RG2_position                             0x2
#define RG2_size                                 0x1
#define RG2_value_mask                           0x4
#define RG2_clear_mask                           0xFB

#define RG3                                      0x3
#define RG3_address                              0x189
#define RG3_position                             0x3
#define RG3_size                                 0x1
#define RG3_value_mask                           0x8
#define RG3_clear_mask                           0xF7

#define RG4                                      0x4
#define RG4_address                              0x189
#define RG4_position                             0x4
#define RG4_size                                 0x1
#define RG4_value_mask                           0x10
#define RG4_clear_mask                           0xEF

#define RG5                                      0x5
#define RG5_address                              0x189
#define RG5_position                             0x5
#define RG5_size                                 0x1
#define RG5_value_mask                           0x20
#define RG5_clear_mask                           0xDF


/*-----------------------------------------------#
| EECON1                                   0x18C |
#------------------------------------------------#
| EEPGD | - | - | - | WRERR | WREN | EEWR | EERD |
#------------------------------------------------#
| 7     | 6 | 5 | 4 | 3     | 2    | 1    | 0    |
#-----------------------------------------------*/

#define EECON1                                   0x0
#define EECON1_address                           0x18C
#define EECON1_position                          0x0
#define EECON1_size                              0x8
#define EECON1_value_mask                        0xFF
#define EECON1_clear_mask                        0x0

#define EERD                                     0x0
#define EERD_address                             0x18C
#define EERD_position                            0x0
#define EERD_size                                0x1
#define EERD_value_mask                          0x1
#define EERD_clear_mask                          0xFE

#define RD                                       0x0
#define RD_address                               0x18C
#define RD_position                              0x0
#define RD_size                                  0x1
#define RD_value_mask                            0x1
#define RD_clear_mask                            0xFE

#define EEWR                                     0x1
#define EEWR_address                             0x18C
#define EEWR_position                            0x1
#define EEWR_size                                0x1
#define EEWR_value_mask                          0x2
#define EEWR_clear_mask                          0xFD

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


/*----------------------------------------------------------------------------------------------------#
| LCDDATA12                                                                                     0x190 |
#-----------------------------------------------------------------------------------------------------#
| LCDDATA12_SEG31 | SEG30COM0 | SEG29COM0 | SEG28COM0 | SEG27COM0 | SEG26COM0 | SEG25COM0 | SEG24COM0 |
#-----------------------------------------------------------------------------------------------------#
| 7               | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------------*/

#define LCDDATA12                                0x0
#define LCDDATA12_address                        0x190
#define LCDDATA12_position                       0x0
#define LCDDATA12_size                           0x8
#define LCDDATA12_value_mask                     0xFF
#define LCDDATA12_clear_mask                     0x0

#define S24C0                                    0x0
#define S24C0_address                            0x190
#define S24C0_position                           0x0
#define S24C0_size                               0x1
#define S24C0_value_mask                         0x1
#define S24C0_clear_mask                         0xFE

#define SEG24COM0                                0x0
#define SEG24COM0_address                        0x190
#define SEG24COM0_position                       0x0
#define SEG24COM0_size                           0x1
#define SEG24COM0_value_mask                     0x1
#define SEG24COM0_clear_mask                     0xFE

#define LCDDATA12_SEG24                          0x0
#define LCDDATA12_SEG24_address                  0x190
#define LCDDATA12_SEG24_position                 0x0
#define LCDDATA12_SEG24_size                     0x1
#define LCDDATA12_SEG24_value_mask               0x1
#define LCDDATA12_SEG24_clear_mask               0xFE

#define SEG25COM0                                0x1
#define SEG25COM0_address                        0x190
#define SEG25COM0_position                       0x1
#define SEG25COM0_size                           0x1
#define SEG25COM0_value_mask                     0x2
#define SEG25COM0_clear_mask                     0xFD

#define S25C0                                    0x1
#define S25C0_address                            0x190
#define S25C0_position                           0x1
#define S25C0_size                               0x1
#define S25C0_value_mask                         0x2
#define S25C0_clear_mask                         0xFD

#define LCDDATA12_SEG25                          0x1
#define LCDDATA12_SEG25_address                  0x190
#define LCDDATA12_SEG25_position                 0x1
#define LCDDATA12_SEG25_size                     0x1
#define LCDDATA12_SEG25_value_mask               0x2
#define LCDDATA12_SEG25_clear_mask               0xFD

#define SEG26COM0                                0x2
#define SEG26COM0_address                        0x190
#define SEG26COM0_position                       0x2
#define SEG26COM0_size                           0x1
#define SEG26COM0_value_mask                     0x4
#define SEG26COM0_clear_mask                     0xFB

#define S26C0                                    0x2
#define S26C0_address                            0x190
#define S26C0_position                           0x2
#define S26C0_size                               0x1
#define S26C0_value_mask                         0x4
#define S26C0_clear_mask                         0xFB

#define LCDDATA12_SEG26                          0x2
#define LCDDATA12_SEG26_address                  0x190
#define LCDDATA12_SEG26_position                 0x2
#define LCDDATA12_SEG26_size                     0x1
#define LCDDATA12_SEG26_value_mask               0x4
#define LCDDATA12_SEG26_clear_mask               0xFB

#define SEG27COM0                                0x3
#define SEG27COM0_address                        0x190
#define SEG27COM0_position                       0x3
#define SEG27COM0_size                           0x1
#define SEG27COM0_value_mask                     0x8
#define SEG27COM0_clear_mask                     0xF7

#define S27C0                                    0x3
#define S27C0_address                            0x190
#define S27C0_position                           0x3
#define S27C0_size                               0x1
#define S27C0_value_mask                         0x8
#define S27C0_clear_mask                         0xF7

#define LCDDATA12_SEG27                          0x3
#define LCDDATA12_SEG27_address                  0x190
#define LCDDATA12_SEG27_position                 0x3
#define LCDDATA12_SEG27_size                     0x1
#define LCDDATA12_SEG27_value_mask               0x8
#define LCDDATA12_SEG27_clear_mask               0xF7

#define S28C0                                    0x4
#define S28C0_address                            0x190
#define S28C0_position                           0x4
#define S28C0_size                               0x1
#define S28C0_value_mask                         0x10
#define S28C0_clear_mask                         0xEF

#define SEG28COM0                                0x4
#define SEG28COM0_address                        0x190
#define SEG28COM0_position                       0x4
#define SEG28COM0_size                           0x1
#define SEG28COM0_value_mask                     0x10
#define SEG28COM0_clear_mask                     0xEF

#define LCDDATA12_SEG28                          0x4
#define LCDDATA12_SEG28_address                  0x190
#define LCDDATA12_SEG28_position                 0x4
#define LCDDATA12_SEG28_size                     0x1
#define LCDDATA12_SEG28_value_mask               0x10
#define LCDDATA12_SEG28_clear_mask               0xEF

#define SEG29COM0                                0x5
#define SEG29COM0_address                        0x190
#define SEG29COM0_position                       0x5
#define SEG29COM0_size                           0x1
#define SEG29COM0_value_mask                     0x20
#define SEG29COM0_clear_mask                     0xDF

#define S29C0                                    0x5
#define S29C0_address                            0x190
#define S29C0_position                           0x5
#define S29C0_size                               0x1
#define S29C0_value_mask                         0x20
#define S29C0_clear_mask                         0xDF

#define LCDDATA12_SEG29                          0x5
#define LCDDATA12_SEG29_address                  0x190
#define LCDDATA12_SEG29_position                 0x5
#define LCDDATA12_SEG29_size                     0x1
#define LCDDATA12_SEG29_value_mask               0x20
#define LCDDATA12_SEG29_clear_mask               0xDF

#define SEG30COM0                                0x6
#define SEG30COM0_address                        0x190
#define SEG30COM0_position                       0x6
#define SEG30COM0_size                           0x1
#define SEG30COM0_value_mask                     0x40
#define SEG30COM0_clear_mask                     0xBF

#define S30C0                                    0x6
#define S30C0_address                            0x190
#define S30C0_position                           0x6
#define S30C0_size                               0x1
#define S30C0_value_mask                         0x40
#define S30C0_clear_mask                         0xBF

#define LCDDATA12_SEG30                          0x6
#define LCDDATA12_SEG30_address                  0x190
#define LCDDATA12_SEG30_position                 0x6
#define LCDDATA12_SEG30_size                     0x1
#define LCDDATA12_SEG30_value_mask               0x40
#define LCDDATA12_SEG30_clear_mask               0xBF

#define LCDDATA12_SEG31                          0x7
#define LCDDATA12_SEG31_address                  0x190
#define LCDDATA12_SEG31_position                 0x7
#define LCDDATA12_SEG31_size                     0x1
#define LCDDATA12_SEG31_value_mask               0x80
#define LCDDATA12_SEG31_clear_mask               0x7F

#define S31C0                                    0x7
#define S31C0_address                            0x190
#define S31C0_position                           0x7
#define S31C0_size                               0x1
#define S31C0_value_mask                         0x80
#define S31C0_clear_mask                         0x7F

#define SEG31COM0                                0x7
#define SEG31COM0_address                        0x190
#define SEG31COM0_position                       0x7
#define SEG31COM0_size                           0x1
#define SEG31COM0_value_mask                     0x80
#define SEG31COM0_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------------------------------------------------#
| LCDDATA13                                                                                                                         0x191 |
#-----------------------------------------------------------------------------------------------------------------------------------------#
| LCDDATA13_SEG39 | LCDDATA13_SEG38 | LCDDATA13_SEG37 | LCDDATA13_SEG36 | LCDDATA13_SEG35 | LCDDATA13_SEG34 | SEG33COM0 | LCDDATA13_SEG32 |
#-----------------------------------------------------------------------------------------------------------------------------------------#
| 7               | 6               | 5               | 4               | 3               | 2               | 1         | 0               |
#----------------------------------------------------------------------------------------------------------------------------------------*/

#define LCDDATA13                                0x0
#define LCDDATA13_address                        0x191
#define LCDDATA13_position                       0x0
#define LCDDATA13_size                           0x8
#define LCDDATA13_value_mask                     0xFF
#define LCDDATA13_clear_mask                     0x0

#define LCDDATA13_SEG32                          0x0
#define LCDDATA13_SEG32_address                  0x191
#define LCDDATA13_SEG32_position                 0x0
#define LCDDATA13_SEG32_size                     0x1
#define LCDDATA13_SEG32_value_mask               0x1
#define LCDDATA13_SEG32_clear_mask               0xFE

#define S32C0                                    0x0
#define S32C0_address                            0x191
#define S32C0_position                           0x0
#define S32C0_size                               0x1
#define S32C0_value_mask                         0x1
#define S32C0_clear_mask                         0xFE

#define SEG32COM0                                0x0
#define SEG32COM0_address                        0x191
#define SEG32COM0_position                       0x0
#define SEG32COM0_size                           0x1
#define SEG32COM0_value_mask                     0x1
#define SEG32COM0_clear_mask                     0xFE

#define SEG33COM0                                0x1
#define SEG33COM0_address                        0x191
#define SEG33COM0_position                       0x1
#define SEG33COM0_size                           0x1
#define SEG33COM0_value_mask                     0x2
#define SEG33COM0_clear_mask                     0xFD

#define LCDDATA13_SEG33                          0x1
#define LCDDATA13_SEG33_address                  0x191
#define LCDDATA13_SEG33_position                 0x1
#define LCDDATA13_SEG33_size                     0x1
#define LCDDATA13_SEG33_value_mask               0x2
#define LCDDATA13_SEG33_clear_mask               0xFD

#define S33C0                                    0x1
#define S33C0_address                            0x191
#define S33C0_position                           0x1
#define S33C0_size                               0x1
#define S33C0_value_mask                         0x2
#define S33C0_clear_mask                         0xFD

#define LCDDATA13_SEG34                          0x2
#define LCDDATA13_SEG34_address                  0x191
#define LCDDATA13_SEG34_position                 0x2
#define LCDDATA13_SEG34_size                     0x1
#define LCDDATA13_SEG34_value_mask               0x4
#define LCDDATA13_SEG34_clear_mask               0xFB

#define S34C0                                    0x2
#define S34C0_address                            0x191
#define S34C0_position                           0x2
#define S34C0_size                               0x1
#define S34C0_value_mask                         0x4
#define S34C0_clear_mask                         0xFB

#define SEG34COM0                                0x2
#define SEG34COM0_address                        0x191
#define SEG34COM0_position                       0x2
#define SEG34COM0_size                           0x1
#define SEG34COM0_value_mask                     0x4
#define SEG34COM0_clear_mask                     0xFB

#define LCDDATA13_SEG35                          0x3
#define LCDDATA13_SEG35_address                  0x191
#define LCDDATA13_SEG35_position                 0x3
#define LCDDATA13_SEG35_size                     0x1
#define LCDDATA13_SEG35_value_mask               0x8
#define LCDDATA13_SEG35_clear_mask               0xF7

#define S35C0                                    0x3
#define S35C0_address                            0x191
#define S35C0_position                           0x3
#define S35C0_size                               0x1
#define S35C0_value_mask                         0x8
#define S35C0_clear_mask                         0xF7

#define SEG35COM0                                0x3
#define SEG35COM0_address                        0x191
#define SEG35COM0_position                       0x3
#define SEG35COM0_size                           0x1
#define SEG35COM0_value_mask                     0x8
#define SEG35COM0_clear_mask                     0xF7

#define LCDDATA13_SEG36                          0x4
#define LCDDATA13_SEG36_address                  0x191
#define LCDDATA13_SEG36_position                 0x4
#define LCDDATA13_SEG36_size                     0x1
#define LCDDATA13_SEG36_value_mask               0x10
#define LCDDATA13_SEG36_clear_mask               0xEF

#define SEG36COM0                                0x4
#define SEG36COM0_address                        0x191
#define SEG36COM0_position                       0x4
#define SEG36COM0_size                           0x1
#define SEG36COM0_value_mask                     0x10
#define SEG36COM0_clear_mask                     0xEF

#define S36C0                                    0x4
#define S36C0_address                            0x191
#define S36C0_position                           0x4
#define S36C0_size                               0x1
#define S36C0_value_mask                         0x10
#define S36C0_clear_mask                         0xEF

#define LCDDATA13_SEG37                          0x5
#define LCDDATA13_SEG37_address                  0x191
#define LCDDATA13_SEG37_position                 0x5
#define LCDDATA13_SEG37_size                     0x1
#define LCDDATA13_SEG37_value_mask               0x20
#define LCDDATA13_SEG37_clear_mask               0xDF

#define S37C0                                    0x5
#define S37C0_address                            0x191
#define S37C0_position                           0x5
#define S37C0_size                               0x1
#define S37C0_value_mask                         0x20
#define S37C0_clear_mask                         0xDF

#define SEG37COM0                                0x5
#define SEG37COM0_address                        0x191
#define SEG37COM0_position                       0x5
#define SEG37COM0_size                           0x1
#define SEG37COM0_value_mask                     0x20
#define SEG37COM0_clear_mask                     0xDF

#define LCDDATA13_SEG38                          0x6
#define LCDDATA13_SEG38_address                  0x191
#define LCDDATA13_SEG38_position                 0x6
#define LCDDATA13_SEG38_size                     0x1
#define LCDDATA13_SEG38_value_mask               0x40
#define LCDDATA13_SEG38_clear_mask               0xBF

#define SEG38COM0                                0x6
#define SEG38COM0_address                        0x191
#define SEG38COM0_position                       0x6
#define SEG38COM0_size                           0x1
#define SEG38COM0_value_mask                     0x40
#define SEG38COM0_clear_mask                     0xBF

#define S38C0                                    0x6
#define S38C0_address                            0x191
#define S38C0_position                           0x6
#define S38C0_size                               0x1
#define S38C0_value_mask                         0x40
#define S38C0_clear_mask                         0xBF

#define LCDDATA13_SEG39                          0x7
#define LCDDATA13_SEG39_address                  0x191
#define LCDDATA13_SEG39_position                 0x7
#define LCDDATA13_SEG39_size                     0x1
#define LCDDATA13_SEG39_value_mask               0x80
#define LCDDATA13_SEG39_clear_mask               0x7F

#define SEG39COM0                                0x7
#define SEG39COM0_address                        0x191
#define SEG39COM0_position                       0x7
#define SEG39COM0_size                           0x1
#define SEG39COM0_value_mask                     0x80
#define SEG39COM0_clear_mask                     0x7F

#define S39C0                                    0x7
#define S39C0_address                            0x191
#define S39C0_position                           0x7
#define S39C0_size                               0x1
#define S39C0_value_mask                         0x80
#define S39C0_clear_mask                         0x7F


/*------------------------------------------#
| LCDDATA14                           0x192 |
#-------------------------------------------#
| - | - | - | - | - | - | SEG41COM0 | S40C0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1         | 0     |
#------------------------------------------*/

#define LCDDATA14                                0x0
#define LCDDATA14_address                        0x192
#define LCDDATA14_position                       0x0
#define LCDDATA14_size                           0x8
#define LCDDATA14_value_mask                     0xFF
#define LCDDATA14_clear_mask                     0x0

#define S40C0                                    0x0
#define S40C0_address                            0x192
#define S40C0_position                           0x0
#define S40C0_size                               0x1
#define S40C0_value_mask                         0x1
#define S40C0_clear_mask                         0xFE

#define LCDDATA14_SEG40                          0x0
#define LCDDATA14_SEG40_address                  0x192
#define LCDDATA14_SEG40_position                 0x0
#define LCDDATA14_SEG40_size                     0x1
#define LCDDATA14_SEG40_value_mask               0x1
#define LCDDATA14_SEG40_clear_mask               0xFE

#define SEG40COM0                                0x0
#define SEG40COM0_address                        0x192
#define SEG40COM0_position                       0x0
#define SEG40COM0_size                           0x1
#define SEG40COM0_value_mask                     0x1
#define SEG40COM0_clear_mask                     0xFE

#define SEG41COM0                                0x1
#define SEG41COM0_address                        0x192
#define SEG41COM0_position                       0x1
#define SEG41COM0_size                           0x1
#define SEG41COM0_value_mask                     0x2
#define SEG41COM0_clear_mask                     0xFD

#define LCDDATA14_SEG41                          0x1
#define LCDDATA14_SEG41_address                  0x192
#define LCDDATA14_SEG41_position                 0x1
#define LCDDATA14_SEG41_size                     0x1
#define LCDDATA14_SEG41_value_mask               0x2
#define LCDDATA14_SEG41_clear_mask               0xFD

#define S41C0                                    0x1
#define S41C0_address                            0x192
#define S41C0_position                           0x1
#define S41C0_size                               0x1
#define S41C0_value_mask                         0x2
#define S41C0_clear_mask                         0xFD


/*------------------------------------------------------------------------------------------#
| LCDDATA15                                                                           0x193 |
#-------------------------------------------------------------------------------------------#
| S31C1 | SEG30COM1 | SEG29COM1 | SEG28COM1 | SEG27COM1 | SEG26COM1 | SEG25COM1 | SEG24COM1 |
#-------------------------------------------------------------------------------------------#
| 7     | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#------------------------------------------------------------------------------------------*/

#define LCDDATA15                                0x0
#define LCDDATA15_address                        0x193
#define LCDDATA15_position                       0x0
#define LCDDATA15_size                           0x8
#define LCDDATA15_value_mask                     0xFF
#define LCDDATA15_clear_mask                     0x0

#define S24C1                                    0x0
#define S24C1_address                            0x193
#define S24C1_position                           0x0
#define S24C1_size                               0x1
#define S24C1_value_mask                         0x1
#define S24C1_clear_mask                         0xFE

#define SEG24COM1                                0x0
#define SEG24COM1_address                        0x193
#define SEG24COM1_position                       0x0
#define SEG24COM1_size                           0x1
#define SEG24COM1_value_mask                     0x1
#define SEG24COM1_clear_mask                     0xFE

#define LCDDATA15_SEG24                          0x0
#define LCDDATA15_SEG24_address                  0x193
#define LCDDATA15_SEG24_position                 0x0
#define LCDDATA15_SEG24_size                     0x1
#define LCDDATA15_SEG24_value_mask               0x1
#define LCDDATA15_SEG24_clear_mask               0xFE

#define SEG25COM1                                0x1
#define SEG25COM1_address                        0x193
#define SEG25COM1_position                       0x1
#define SEG25COM1_size                           0x1
#define SEG25COM1_value_mask                     0x2
#define SEG25COM1_clear_mask                     0xFD

#define LCDDATA15_SEG25                          0x1
#define LCDDATA15_SEG25_address                  0x193
#define LCDDATA15_SEG25_position                 0x1
#define LCDDATA15_SEG25_size                     0x1
#define LCDDATA15_SEG25_value_mask               0x2
#define LCDDATA15_SEG25_clear_mask               0xFD

#define S25C1                                    0x1
#define S25C1_address                            0x193
#define S25C1_position                           0x1
#define S25C1_size                               0x1
#define S25C1_value_mask                         0x2
#define S25C1_clear_mask                         0xFD

#define SEG26COM1                                0x2
#define SEG26COM1_address                        0x193
#define SEG26COM1_position                       0x2
#define SEG26COM1_size                           0x1
#define SEG26COM1_value_mask                     0x4
#define SEG26COM1_clear_mask                     0xFB

#define S26C1                                    0x2
#define S26C1_address                            0x193
#define S26C1_position                           0x2
#define S26C1_size                               0x1
#define S26C1_value_mask                         0x4
#define S26C1_clear_mask                         0xFB

#define LCDDATA15_SEG26                          0x2
#define LCDDATA15_SEG26_address                  0x193
#define LCDDATA15_SEG26_position                 0x2
#define LCDDATA15_SEG26_size                     0x1
#define LCDDATA15_SEG26_value_mask               0x4
#define LCDDATA15_SEG26_clear_mask               0xFB

#define SEG27COM1                                0x3
#define SEG27COM1_address                        0x193
#define SEG27COM1_position                       0x3
#define SEG27COM1_size                           0x1
#define SEG27COM1_value_mask                     0x8
#define SEG27COM1_clear_mask                     0xF7

#define S27C1                                    0x3
#define S27C1_address                            0x193
#define S27C1_position                           0x3
#define S27C1_size                               0x1
#define S27C1_value_mask                         0x8
#define S27C1_clear_mask                         0xF7

#define LCDDATA15_SEG27                          0x3
#define LCDDATA15_SEG27_address                  0x193
#define LCDDATA15_SEG27_position                 0x3
#define LCDDATA15_SEG27_size                     0x1
#define LCDDATA15_SEG27_value_mask               0x8
#define LCDDATA15_SEG27_clear_mask               0xF7

#define LCDDATA15_SEG28                          0x4
#define LCDDATA15_SEG28_address                  0x193
#define LCDDATA15_SEG28_position                 0x4
#define LCDDATA15_SEG28_size                     0x1
#define LCDDATA15_SEG28_value_mask               0x10
#define LCDDATA15_SEG28_clear_mask               0xEF

#define SEG28COM1                                0x4
#define SEG28COM1_address                        0x193
#define SEG28COM1_position                       0x4
#define SEG28COM1_size                           0x1
#define SEG28COM1_value_mask                     0x10
#define SEG28COM1_clear_mask                     0xEF

#define S28C1                                    0x4
#define S28C1_address                            0x193
#define S28C1_position                           0x4
#define S28C1_size                               0x1
#define S28C1_value_mask                         0x10
#define S28C1_clear_mask                         0xEF

#define SEG29COM1                                0x5
#define SEG29COM1_address                        0x193
#define SEG29COM1_position                       0x5
#define SEG29COM1_size                           0x1
#define SEG29COM1_value_mask                     0x20
#define SEG29COM1_clear_mask                     0xDF

#define S29C1                                    0x5
#define S29C1_address                            0x193
#define S29C1_position                           0x5
#define S29C1_size                               0x1
#define S29C1_value_mask                         0x20
#define S29C1_clear_mask                         0xDF

#define LCDDATA15_SEG29                          0x5
#define LCDDATA15_SEG29_address                  0x193
#define LCDDATA15_SEG29_position                 0x5
#define LCDDATA15_SEG29_size                     0x1
#define LCDDATA15_SEG29_value_mask               0x20
#define LCDDATA15_SEG29_clear_mask               0xDF

#define SEG30COM1                                0x6
#define SEG30COM1_address                        0x193
#define SEG30COM1_position                       0x6
#define SEG30COM1_size                           0x1
#define SEG30COM1_value_mask                     0x40
#define SEG30COM1_clear_mask                     0xBF

#define S30C1                                    0x6
#define S30C1_address                            0x193
#define S30C1_position                           0x6
#define S30C1_size                               0x1
#define S30C1_value_mask                         0x40
#define S30C1_clear_mask                         0xBF

#define LCDDATA15_SEG30                          0x6
#define LCDDATA15_SEG30_address                  0x193
#define LCDDATA15_SEG30_position                 0x6
#define LCDDATA15_SEG30_size                     0x1
#define LCDDATA15_SEG30_value_mask               0x40
#define LCDDATA15_SEG30_clear_mask               0xBF

#define S31C1                                    0x7
#define S31C1_address                            0x193
#define S31C1_position                           0x7
#define S31C1_size                               0x1
#define S31C1_value_mask                         0x80
#define S31C1_clear_mask                         0x7F

#define LCDDATA15_SEG31                          0x7
#define LCDDATA15_SEG31_address                  0x193
#define LCDDATA15_SEG31_position                 0x7
#define LCDDATA15_SEG31_size                     0x1
#define LCDDATA15_SEG31_value_mask               0x80
#define LCDDATA15_SEG31_clear_mask               0x7F

#define SEG31COM1                                0x7
#define SEG31COM1_address                        0x193
#define SEG31COM1_position                       0x7
#define SEG31COM1_size                           0x1
#define SEG31COM1_value_mask                     0x80
#define SEG31COM1_clear_mask                     0x7F


/*------------------------------------------------------------------------------#
| LCDDATA16                                                               0x194 |
#-------------------------------------------------------------------------------#
| SEG39COM1 | SEG38COM1 | S37C1 | SEG36COM1 | S35C1 | S34C1 | SEG33COM1 | S32C1 |
#-------------------------------------------------------------------------------#
| 7         | 6         | 5     | 4         | 3     | 2     | 1         | 0     |
#------------------------------------------------------------------------------*/

#define LCDDATA16                                0x0
#define LCDDATA16_address                        0x194
#define LCDDATA16_position                       0x0
#define LCDDATA16_size                           0x8
#define LCDDATA16_value_mask                     0xFF
#define LCDDATA16_clear_mask                     0x0

#define S32C1                                    0x0
#define S32C1_address                            0x194
#define S32C1_position                           0x0
#define S32C1_size                               0x1
#define S32C1_value_mask                         0x1
#define S32C1_clear_mask                         0xFE

#define SEG32COM1                                0x0
#define SEG32COM1_address                        0x194
#define SEG32COM1_position                       0x0
#define SEG32COM1_size                           0x1
#define SEG32COM1_value_mask                     0x1
#define SEG32COM1_clear_mask                     0xFE

#define LCDDATA16_SEG32                          0x0
#define LCDDATA16_SEG32_address                  0x194
#define LCDDATA16_SEG32_position                 0x0
#define LCDDATA16_SEG32_size                     0x1
#define LCDDATA16_SEG32_value_mask               0x1
#define LCDDATA16_SEG32_clear_mask               0xFE

#define SEG33COM1                                0x1
#define SEG33COM1_address                        0x194
#define SEG33COM1_position                       0x1
#define SEG33COM1_size                           0x1
#define SEG33COM1_value_mask                     0x2
#define SEG33COM1_clear_mask                     0xFD

#define S33C1                                    0x1
#define S33C1_address                            0x194
#define S33C1_position                           0x1
#define S33C1_size                               0x1
#define S33C1_value_mask                         0x2
#define S33C1_clear_mask                         0xFD

#define LCDDATA16_SEG33                          0x1
#define LCDDATA16_SEG33_address                  0x194
#define LCDDATA16_SEG33_position                 0x1
#define LCDDATA16_SEG33_size                     0x1
#define LCDDATA16_SEG33_value_mask               0x2
#define LCDDATA16_SEG33_clear_mask               0xFD

#define S34C1                                    0x2
#define S34C1_address                            0x194
#define S34C1_position                           0x2
#define S34C1_size                               0x1
#define S34C1_value_mask                         0x4
#define S34C1_clear_mask                         0xFB

#define LCDDATA16_SEG34                          0x2
#define LCDDATA16_SEG34_address                  0x194
#define LCDDATA16_SEG34_position                 0x2
#define LCDDATA16_SEG34_size                     0x1
#define LCDDATA16_SEG34_value_mask               0x4
#define LCDDATA16_SEG34_clear_mask               0xFB

#define SEG34COM1                                0x2
#define SEG34COM1_address                        0x194
#define SEG34COM1_position                       0x2
#define SEG34COM1_size                           0x1
#define SEG34COM1_value_mask                     0x4
#define SEG34COM1_clear_mask                     0xFB

#define S35C1                                    0x3
#define S35C1_address                            0x194
#define S35C1_position                           0x3
#define S35C1_size                               0x1
#define S35C1_value_mask                         0x8
#define S35C1_clear_mask                         0xF7

#define SEG35COM1                                0x3
#define SEG35COM1_address                        0x194
#define SEG35COM1_position                       0x3
#define SEG35COM1_size                           0x1
#define SEG35COM1_value_mask                     0x8
#define SEG35COM1_clear_mask                     0xF7

#define LCDDATA16_SEG35                          0x3
#define LCDDATA16_SEG35_address                  0x194
#define LCDDATA16_SEG35_position                 0x3
#define LCDDATA16_SEG35_size                     0x1
#define LCDDATA16_SEG35_value_mask               0x8
#define LCDDATA16_SEG35_clear_mask               0xF7

#define SEG36COM1                                0x4
#define SEG36COM1_address                        0x194
#define SEG36COM1_position                       0x4
#define SEG36COM1_size                           0x1
#define SEG36COM1_value_mask                     0x10
#define SEG36COM1_clear_mask                     0xEF

#define S36C1                                    0x4
#define S36C1_address                            0x194
#define S36C1_position                           0x4
#define S36C1_size                               0x1
#define S36C1_value_mask                         0x10
#define S36C1_clear_mask                         0xEF

#define LCDDATA16_SEG36                          0x4
#define LCDDATA16_SEG36_address                  0x194
#define LCDDATA16_SEG36_position                 0x4
#define LCDDATA16_SEG36_size                     0x1
#define LCDDATA16_SEG36_value_mask               0x10
#define LCDDATA16_SEG36_clear_mask               0xEF

#define S37C1                                    0x5
#define S37C1_address                            0x194
#define S37C1_position                           0x5
#define S37C1_size                               0x1
#define S37C1_value_mask                         0x20
#define S37C1_clear_mask                         0xDF

#define LCDDATA16_SEG37                          0x5
#define LCDDATA16_SEG37_address                  0x194
#define LCDDATA16_SEG37_position                 0x5
#define LCDDATA16_SEG37_size                     0x1
#define LCDDATA16_SEG37_value_mask               0x20
#define LCDDATA16_SEG37_clear_mask               0xDF

#define SEG37COM1                                0x5
#define SEG37COM1_address                        0x194
#define SEG37COM1_position                       0x5
#define SEG37COM1_size                           0x1
#define SEG37COM1_value_mask                     0x20
#define SEG37COM1_clear_mask                     0xDF

#define SEG38COM1                                0x6
#define SEG38COM1_address                        0x194
#define SEG38COM1_position                       0x6
#define SEG38COM1_size                           0x1
#define SEG38COM1_value_mask                     0x40
#define SEG38COM1_clear_mask                     0xBF

#define S38C1                                    0x6
#define S38C1_address                            0x194
#define S38C1_position                           0x6
#define S38C1_size                               0x1
#define S38C1_value_mask                         0x40
#define S38C1_clear_mask                         0xBF

#define LCDDATA16_SEG38                          0x6
#define LCDDATA16_SEG38_address                  0x194
#define LCDDATA16_SEG38_position                 0x6
#define LCDDATA16_SEG38_size                     0x1
#define LCDDATA16_SEG38_value_mask               0x40
#define LCDDATA16_SEG38_clear_mask               0xBF

#define SEG39COM1                                0x7
#define SEG39COM1_address                        0x194
#define SEG39COM1_position                       0x7
#define SEG39COM1_size                           0x1
#define SEG39COM1_value_mask                     0x80
#define SEG39COM1_clear_mask                     0x7F

#define S39C1                                    0x7
#define S39C1_address                            0x194
#define S39C1_position                           0x7
#define S39C1_size                               0x1
#define S39C1_value_mask                         0x80
#define S39C1_clear_mask                         0x7F

#define LCDDATA16_SEG39                          0x7
#define LCDDATA16_SEG39_address                  0x194
#define LCDDATA16_SEG39_position                 0x7
#define LCDDATA16_SEG39_size                     0x1
#define LCDDATA16_SEG39_value_mask               0x80
#define LCDDATA16_SEG39_clear_mask               0x7F


/*------------------------------------------#
| LCDDATA17                           0x195 |
#-------------------------------------------#
| - | - | - | - | - | - | SEG41COM1 | S40C1 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1         | 0     |
#------------------------------------------*/

#define LCDDATA17                                0x0
#define LCDDATA17_address                        0x195
#define LCDDATA17_position                       0x0
#define LCDDATA17_size                           0x8
#define LCDDATA17_value_mask                     0xFF
#define LCDDATA17_clear_mask                     0x0

#define S40C1                                    0x0
#define S40C1_address                            0x195
#define S40C1_position                           0x0
#define S40C1_size                               0x1
#define S40C1_value_mask                         0x1
#define S40C1_clear_mask                         0xFE

#define LCDDATA17_SEG40                          0x0
#define LCDDATA17_SEG40_address                  0x195
#define LCDDATA17_SEG40_position                 0x0
#define LCDDATA17_SEG40_size                     0x1
#define LCDDATA17_SEG40_value_mask               0x1
#define LCDDATA17_SEG40_clear_mask               0xFE

#define SEG40COM1                                0x0
#define SEG40COM1_address                        0x195
#define SEG40COM1_position                       0x0
#define SEG40COM1_size                           0x1
#define SEG40COM1_value_mask                     0x1
#define SEG40COM1_clear_mask                     0xFE

#define SEG41COM1                                0x1
#define SEG41COM1_address                        0x195
#define SEG41COM1_position                       0x1
#define SEG41COM1_size                           0x1
#define SEG41COM1_value_mask                     0x2
#define SEG41COM1_clear_mask                     0xFD

#define LCDDATA17_SEG41                          0x1
#define LCDDATA17_SEG41_address                  0x195
#define LCDDATA17_SEG41_position                 0x1
#define LCDDATA17_SEG41_size                     0x1
#define LCDDATA17_SEG41_value_mask               0x2
#define LCDDATA17_SEG41_clear_mask               0xFD

#define S41C1                                    0x1
#define S41C1_address                            0x195
#define S41C1_position                           0x1
#define S41C1_size                               0x1
#define S41C1_value_mask                         0x2
#define S41C1_clear_mask                         0xFD


/*------------------------------------------------------------------------------------------#
| LCDDATA18                                                                           0x196 |
#-------------------------------------------------------------------------------------------#
| S31C2 | SEG30COM2 | SEG29COM2 | SEG28COM2 | SEG27COM2 | SEG26COM2 | SEG25COM2 | SEG24COM2 |
#-------------------------------------------------------------------------------------------#
| 7     | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#------------------------------------------------------------------------------------------*/

#define LCDDATA18                                0x0
#define LCDDATA18_address                        0x196
#define LCDDATA18_position                       0x0
#define LCDDATA18_size                           0x8
#define LCDDATA18_value_mask                     0xFF
#define LCDDATA18_clear_mask                     0x0

#define S24C2                                    0x0
#define S24C2_address                            0x196
#define S24C2_position                           0x0
#define S24C2_size                               0x1
#define S24C2_value_mask                         0x1
#define S24C2_clear_mask                         0xFE

#define SEG24COM2                                0x0
#define SEG24COM2_address                        0x196
#define SEG24COM2_position                       0x0
#define SEG24COM2_size                           0x1
#define SEG24COM2_value_mask                     0x1
#define SEG24COM2_clear_mask                     0xFE

#define LCDDATA18_SEG24                          0x0
#define LCDDATA18_SEG24_address                  0x196
#define LCDDATA18_SEG24_position                 0x0
#define LCDDATA18_SEG24_size                     0x1
#define LCDDATA18_SEG24_value_mask               0x1
#define LCDDATA18_SEG24_clear_mask               0xFE

#define SEG25COM2                                0x1
#define SEG25COM2_address                        0x196
#define SEG25COM2_position                       0x1
#define SEG25COM2_size                           0x1
#define SEG25COM2_value_mask                     0x2
#define SEG25COM2_clear_mask                     0xFD

#define S25C2                                    0x1
#define S25C2_address                            0x196
#define S25C2_position                           0x1
#define S25C2_size                               0x1
#define S25C2_value_mask                         0x2
#define S25C2_clear_mask                         0xFD

#define LCDDATA18_SEG25                          0x1
#define LCDDATA18_SEG25_address                  0x196
#define LCDDATA18_SEG25_position                 0x1
#define LCDDATA18_SEG25_size                     0x1
#define LCDDATA18_SEG25_value_mask               0x2
#define LCDDATA18_SEG25_clear_mask               0xFD

#define SEG26COM2                                0x2
#define SEG26COM2_address                        0x196
#define SEG26COM2_position                       0x2
#define SEG26COM2_size                           0x1
#define SEG26COM2_value_mask                     0x4
#define SEG26COM2_clear_mask                     0xFB

#define S26C2                                    0x2
#define S26C2_address                            0x196
#define S26C2_position                           0x2
#define S26C2_size                               0x1
#define S26C2_value_mask                         0x4
#define S26C2_clear_mask                         0xFB

#define LCDDATA18_SEG26                          0x2
#define LCDDATA18_SEG26_address                  0x196
#define LCDDATA18_SEG26_position                 0x2
#define LCDDATA18_SEG26_size                     0x1
#define LCDDATA18_SEG26_value_mask               0x4
#define LCDDATA18_SEG26_clear_mask               0xFB

#define SEG27COM2                                0x3
#define SEG27COM2_address                        0x196
#define SEG27COM2_position                       0x3
#define SEG27COM2_size                           0x1
#define SEG27COM2_value_mask                     0x8
#define SEG27COM2_clear_mask                     0xF7

#define S27C2                                    0x3
#define S27C2_address                            0x196
#define S27C2_position                           0x3
#define S27C2_size                               0x1
#define S27C2_value_mask                         0x8
#define S27C2_clear_mask                         0xF7

#define LCDDATA18_SEG27                          0x3
#define LCDDATA18_SEG27_address                  0x196
#define LCDDATA18_SEG27_position                 0x3
#define LCDDATA18_SEG27_size                     0x1
#define LCDDATA18_SEG27_value_mask               0x8
#define LCDDATA18_SEG27_clear_mask               0xF7

#define S28C2                                    0x4
#define S28C2_address                            0x196
#define S28C2_position                           0x4
#define S28C2_size                               0x1
#define S28C2_value_mask                         0x10
#define S28C2_clear_mask                         0xEF

#define SEG28COM2                                0x4
#define SEG28COM2_address                        0x196
#define SEG28COM2_position                       0x4
#define SEG28COM2_size                           0x1
#define SEG28COM2_value_mask                     0x10
#define SEG28COM2_clear_mask                     0xEF

#define LCDDATA18_SEG28                          0x4
#define LCDDATA18_SEG28_address                  0x196
#define LCDDATA18_SEG28_position                 0x4
#define LCDDATA18_SEG28_size                     0x1
#define LCDDATA18_SEG28_value_mask               0x10
#define LCDDATA18_SEG28_clear_mask               0xEF

#define SEG29COM2                                0x5
#define SEG29COM2_address                        0x196
#define SEG29COM2_position                       0x5
#define SEG29COM2_size                           0x1
#define SEG29COM2_value_mask                     0x20
#define SEG29COM2_clear_mask                     0xDF

#define S29C2                                    0x5
#define S29C2_address                            0x196
#define S29C2_position                           0x5
#define S29C2_size                               0x1
#define S29C2_value_mask                         0x20
#define S29C2_clear_mask                         0xDF

#define LCDDATA18_SEG29                          0x5
#define LCDDATA18_SEG29_address                  0x196
#define LCDDATA18_SEG29_position                 0x5
#define LCDDATA18_SEG29_size                     0x1
#define LCDDATA18_SEG29_value_mask               0x20
#define LCDDATA18_SEG29_clear_mask               0xDF

#define SEG30COM2                                0x6
#define SEG30COM2_address                        0x196
#define SEG30COM2_position                       0x6
#define SEG30COM2_size                           0x1
#define SEG30COM2_value_mask                     0x40
#define SEG30COM2_clear_mask                     0xBF

#define S30C2                                    0x6
#define S30C2_address                            0x196
#define S30C2_position                           0x6
#define S30C2_size                               0x1
#define S30C2_value_mask                         0x40
#define S30C2_clear_mask                         0xBF

#define LCDDATA18_SEG30                          0x6
#define LCDDATA18_SEG30_address                  0x196
#define LCDDATA18_SEG30_position                 0x6
#define LCDDATA18_SEG30_size                     0x1
#define LCDDATA18_SEG30_value_mask               0x40
#define LCDDATA18_SEG30_clear_mask               0xBF

#define S31C2                                    0x7
#define S31C2_address                            0x196
#define S31C2_position                           0x7
#define S31C2_size                               0x1
#define S31C2_value_mask                         0x80
#define S31C2_clear_mask                         0x7F

#define LCDDATA18_SEG31                          0x7
#define LCDDATA18_SEG31_address                  0x196
#define LCDDATA18_SEG31_position                 0x7
#define LCDDATA18_SEG31_size                     0x1
#define LCDDATA18_SEG31_value_mask               0x80
#define LCDDATA18_SEG31_clear_mask               0x7F

#define SEG31COM2                                0x7
#define SEG31COM2_address                        0x196
#define SEG31COM2_position                       0x7
#define SEG31COM2_size                           0x1
#define SEG31COM2_value_mask                     0x80
#define SEG31COM2_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------------------------------------------------------#
| LCDDATA19                                                                                                                               0x197 |
#-----------------------------------------------------------------------------------------------------------------------------------------------#
| LCDDATA19_SEG39 | LCDDATA19_SEG38 | LCDDATA19_SEG37 | LCDDATA19_SEG36 | LCDDATA19_SEG35 | LCDDATA19_SEG34 | LCDDATA19_SEG33 | LCDDATA19_SEG32 |
#-----------------------------------------------------------------------------------------------------------------------------------------------#
| 7               | 6               | 5               | 4               | 3               | 2               | 1               | 0               |
#----------------------------------------------------------------------------------------------------------------------------------------------*/

#define LCDDATA19                                0x0
#define LCDDATA19_address                        0x197
#define LCDDATA19_position                       0x0
#define LCDDATA19_size                           0x8
#define LCDDATA19_value_mask                     0xFF
#define LCDDATA19_clear_mask                     0x0

#define S32C2                                    0x0
#define S32C2_address                            0x197
#define S32C2_position                           0x0
#define S32C2_size                               0x1
#define S32C2_value_mask                         0x1
#define S32C2_clear_mask                         0xFE

#define LCDDATA19_SEG32                          0x0
#define LCDDATA19_SEG32_address                  0x197
#define LCDDATA19_SEG32_position                 0x0
#define LCDDATA19_SEG32_size                     0x1
#define LCDDATA19_SEG32_value_mask               0x1
#define LCDDATA19_SEG32_clear_mask               0xFE

#define SEG32COM2                                0x0
#define SEG32COM2_address                        0x197
#define SEG32COM2_position                       0x0
#define SEG32COM2_size                           0x1
#define SEG32COM2_value_mask                     0x1
#define SEG32COM2_clear_mask                     0xFE

#define SEG33COM2                                0x1
#define SEG33COM2_address                        0x197
#define SEG33COM2_position                       0x1
#define SEG33COM2_size                           0x1
#define SEG33COM2_value_mask                     0x2
#define SEG33COM2_clear_mask                     0xFD

#define S33C2                                    0x1
#define S33C2_address                            0x197
#define S33C2_position                           0x1
#define S33C2_size                               0x1
#define S33C2_value_mask                         0x2
#define S33C2_clear_mask                         0xFD

#define LCDDATA19_SEG33                          0x1
#define LCDDATA19_SEG33_address                  0x197
#define LCDDATA19_SEG33_position                 0x1
#define LCDDATA19_SEG33_size                     0x1
#define LCDDATA19_SEG33_value_mask               0x2
#define LCDDATA19_SEG33_clear_mask               0xFD

#define LCDDATA19_SEG34                          0x2
#define LCDDATA19_SEG34_address                  0x197
#define LCDDATA19_SEG34_position                 0x2
#define LCDDATA19_SEG34_size                     0x1
#define LCDDATA19_SEG34_value_mask               0x4
#define LCDDATA19_SEG34_clear_mask               0xFB

#define S34C2                                    0x2
#define S34C2_address                            0x197
#define S34C2_position                           0x2
#define S34C2_size                               0x1
#define S34C2_value_mask                         0x4
#define S34C2_clear_mask                         0xFB

#define SEG34COM2                                0x2
#define SEG34COM2_address                        0x197
#define SEG34COM2_position                       0x2
#define SEG34COM2_size                           0x1
#define SEG34COM2_value_mask                     0x4
#define SEG34COM2_clear_mask                     0xFB

#define LCDDATA19_SEG35                          0x3
#define LCDDATA19_SEG35_address                  0x197
#define LCDDATA19_SEG35_position                 0x3
#define LCDDATA19_SEG35_size                     0x1
#define LCDDATA19_SEG35_value_mask               0x8
#define LCDDATA19_SEG35_clear_mask               0xF7

#define S35C2                                    0x3
#define S35C2_address                            0x197
#define S35C2_position                           0x3
#define S35C2_size                               0x1
#define S35C2_value_mask                         0x8
#define S35C2_clear_mask                         0xF7

#define SEG35COM2                                0x3
#define SEG35COM2_address                        0x197
#define SEG35COM2_position                       0x3
#define SEG35COM2_size                           0x1
#define SEG35COM2_value_mask                     0x8
#define SEG35COM2_clear_mask                     0xF7

#define LCDDATA19_SEG36                          0x4
#define LCDDATA19_SEG36_address                  0x197
#define LCDDATA19_SEG36_position                 0x4
#define LCDDATA19_SEG36_size                     0x1
#define LCDDATA19_SEG36_value_mask               0x10
#define LCDDATA19_SEG36_clear_mask               0xEF

#define SEG36COM2                                0x4
#define SEG36COM2_address                        0x197
#define SEG36COM2_position                       0x4
#define SEG36COM2_size                           0x1
#define SEG36COM2_value_mask                     0x10
#define SEG36COM2_clear_mask                     0xEF

#define S36C2                                    0x4
#define S36C2_address                            0x197
#define S36C2_position                           0x4
#define S36C2_size                               0x1
#define S36C2_value_mask                         0x10
#define S36C2_clear_mask                         0xEF

#define LCDDATA19_SEG37                          0x5
#define LCDDATA19_SEG37_address                  0x197
#define LCDDATA19_SEG37_position                 0x5
#define LCDDATA19_SEG37_size                     0x1
#define LCDDATA19_SEG37_value_mask               0x20
#define LCDDATA19_SEG37_clear_mask               0xDF

#define S37C2                                    0x5
#define S37C2_address                            0x197
#define S37C2_position                           0x5
#define S37C2_size                               0x1
#define S37C2_value_mask                         0x20
#define S37C2_clear_mask                         0xDF

#define SEG37COM2                                0x5
#define SEG37COM2_address                        0x197
#define SEG37COM2_position                       0x5
#define SEG37COM2_size                           0x1
#define SEG37COM2_value_mask                     0x20
#define SEG37COM2_clear_mask                     0xDF

#define LCDDATA19_SEG38                          0x6
#define LCDDATA19_SEG38_address                  0x197
#define LCDDATA19_SEG38_position                 0x6
#define LCDDATA19_SEG38_size                     0x1
#define LCDDATA19_SEG38_value_mask               0x40
#define LCDDATA19_SEG38_clear_mask               0xBF

#define SEG38COM2                                0x6
#define SEG38COM2_address                        0x197
#define SEG38COM2_position                       0x6
#define SEG38COM2_size                           0x1
#define SEG38COM2_value_mask                     0x40
#define SEG38COM2_clear_mask                     0xBF

#define S38C2                                    0x6
#define S38C2_address                            0x197
#define S38C2_position                           0x6
#define S38C2_size                               0x1
#define S38C2_value_mask                         0x40
#define S38C2_clear_mask                         0xBF

#define LCDDATA19_SEG39                          0x7
#define LCDDATA19_SEG39_address                  0x197
#define LCDDATA19_SEG39_position                 0x7
#define LCDDATA19_SEG39_size                     0x1
#define LCDDATA19_SEG39_value_mask               0x80
#define LCDDATA19_SEG39_clear_mask               0x7F

#define SEG39COM2                                0x7
#define SEG39COM2_address                        0x197
#define SEG39COM2_position                       0x7
#define SEG39COM2_size                           0x1
#define SEG39COM2_value_mask                     0x80
#define SEG39COM2_clear_mask                     0x7F

#define S39C2                                    0x7
#define S39C2_address                            0x197
#define S39C2_position                           0x7
#define S39C2_size                               0x1
#define S39C2_value_mask                         0x80
#define S39C2_clear_mask                         0x7F


/*------------------------------------------#
| LCDDATA20                           0x198 |
#-------------------------------------------#
| - | - | - | - | - | - | SEG41COM2 | S40C2 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1         | 0     |
#------------------------------------------*/

#define LCDDATA20                                0x0
#define LCDDATA20_address                        0x198
#define LCDDATA20_position                       0x0
#define LCDDATA20_size                           0x8
#define LCDDATA20_value_mask                     0xFF
#define LCDDATA20_clear_mask                     0x0

#define S40C2                                    0x0
#define S40C2_address                            0x198
#define S40C2_position                           0x0
#define S40C2_size                               0x1
#define S40C2_value_mask                         0x1
#define S40C2_clear_mask                         0xFE

#define SEG40COM2                                0x0
#define SEG40COM2_address                        0x198
#define SEG40COM2_position                       0x0
#define SEG40COM2_size                           0x1
#define SEG40COM2_value_mask                     0x1
#define SEG40COM2_clear_mask                     0xFE

#define LCDDATA20_SEG40                          0x0
#define LCDDATA20_SEG40_address                  0x198
#define LCDDATA20_SEG40_position                 0x0
#define LCDDATA20_SEG40_size                     0x1
#define LCDDATA20_SEG40_value_mask               0x1
#define LCDDATA20_SEG40_clear_mask               0xFE

#define SEG41COM2                                0x1
#define SEG41COM2_address                        0x198
#define SEG41COM2_position                       0x1
#define SEG41COM2_size                           0x1
#define SEG41COM2_value_mask                     0x2
#define SEG41COM2_clear_mask                     0xFD

#define S41C2                                    0x1
#define S41C2_address                            0x198
#define S41C2_position                           0x1
#define S41C2_size                               0x1
#define S41C2_value_mask                         0x2
#define S41C2_clear_mask                         0xFD

#define LCDDATA20_SEG41                          0x1
#define LCDDATA20_SEG41_address                  0x198
#define LCDDATA20_SEG41_position                 0x1
#define LCDDATA20_SEG41_size                     0x1
#define LCDDATA20_SEG41_value_mask               0x2
#define LCDDATA20_SEG41_clear_mask               0xFD


/*----------------------------------------------------------------------------------#
| LCDDATA21                                                                   0x199 |
#-----------------------------------------------------------------------------------#
| S31C3 | SEG30COM3 | SEG29COM3 | S28C3 | SEG27COM3 | SEG26COM3 | SEG25COM3 | S24C3 |
#-----------------------------------------------------------------------------------#
| 7     | 6         | 5         | 4     | 3         | 2         | 1         | 0     |
#----------------------------------------------------------------------------------*/

#define LCDDATA21                                0x0
#define LCDDATA21_address                        0x199
#define LCDDATA21_position                       0x0
#define LCDDATA21_size                           0x8
#define LCDDATA21_value_mask                     0xFF
#define LCDDATA21_clear_mask                     0x0

#define S24C3                                    0x0
#define S24C3_address                            0x199
#define S24C3_position                           0x0
#define S24C3_size                               0x1
#define S24C3_value_mask                         0x1
#define S24C3_clear_mask                         0xFE

#define SEG24COM3                                0x0
#define SEG24COM3_address                        0x199
#define SEG24COM3_position                       0x0
#define SEG24COM3_size                           0x1
#define SEG24COM3_value_mask                     0x1
#define SEG24COM3_clear_mask                     0xFE

#define LCDDATA21_SEG24                          0x0
#define LCDDATA21_SEG24_address                  0x199
#define LCDDATA21_SEG24_position                 0x0
#define LCDDATA21_SEG24_size                     0x1
#define LCDDATA21_SEG24_value_mask               0x1
#define LCDDATA21_SEG24_clear_mask               0xFE

#define SEG25COM3                                0x1
#define SEG25COM3_address                        0x199
#define SEG25COM3_position                       0x1
#define SEG25COM3_size                           0x1
#define SEG25COM3_value_mask                     0x2
#define SEG25COM3_clear_mask                     0xFD

#define S25C3                                    0x1
#define S25C3_address                            0x199
#define S25C3_position                           0x1
#define S25C3_size                               0x1
#define S25C3_value_mask                         0x2
#define S25C3_clear_mask                         0xFD

#define LCDDATA21_SEG25                          0x1
#define LCDDATA21_SEG25_address                  0x199
#define LCDDATA21_SEG25_position                 0x1
#define LCDDATA21_SEG25_size                     0x1
#define LCDDATA21_SEG25_value_mask               0x2
#define LCDDATA21_SEG25_clear_mask               0xFD

#define SEG26COM3                                0x2
#define SEG26COM3_address                        0x199
#define SEG26COM3_position                       0x2
#define SEG26COM3_size                           0x1
#define SEG26COM3_value_mask                     0x4
#define SEG26COM3_clear_mask                     0xFB

#define S26C3                                    0x2
#define S26C3_address                            0x199
#define S26C3_position                           0x2
#define S26C3_size                               0x1
#define S26C3_value_mask                         0x4
#define S26C3_clear_mask                         0xFB

#define LCDDATA21_SEG26                          0x2
#define LCDDATA21_SEG26_address                  0x199
#define LCDDATA21_SEG26_position                 0x2
#define LCDDATA21_SEG26_size                     0x1
#define LCDDATA21_SEG26_value_mask               0x4
#define LCDDATA21_SEG26_clear_mask               0xFB

#define SEG27COM3                                0x3
#define SEG27COM3_address                        0x199
#define SEG27COM3_position                       0x3
#define SEG27COM3_size                           0x1
#define SEG27COM3_value_mask                     0x8
#define SEG27COM3_clear_mask                     0xF7

#define S27C3                                    0x3
#define S27C3_address                            0x199
#define S27C3_position                           0x3
#define S27C3_size                               0x1
#define S27C3_value_mask                         0x8
#define S27C3_clear_mask                         0xF7

#define LCDDATA21_SEG27                          0x3
#define LCDDATA21_SEG27_address                  0x199
#define LCDDATA21_SEG27_position                 0x3
#define LCDDATA21_SEG27_size                     0x1
#define LCDDATA21_SEG27_value_mask               0x8
#define LCDDATA21_SEG27_clear_mask               0xF7

#define S28C3                                    0x4
#define S28C3_address                            0x199
#define S28C3_position                           0x4
#define S28C3_size                               0x1
#define S28C3_value_mask                         0x10
#define S28C3_clear_mask                         0xEF

#define SEG28COM3                                0x4
#define SEG28COM3_address                        0x199
#define SEG28COM3_position                       0x4
#define SEG28COM3_size                           0x1
#define SEG28COM3_value_mask                     0x10
#define SEG28COM3_clear_mask                     0xEF

#define LCDDATA21_SEG28                          0x4
#define LCDDATA21_SEG28_address                  0x199
#define LCDDATA21_SEG28_position                 0x4
#define LCDDATA21_SEG28_size                     0x1
#define LCDDATA21_SEG28_value_mask               0x10
#define LCDDATA21_SEG28_clear_mask               0xEF

#define SEG29COM3                                0x5
#define SEG29COM3_address                        0x199
#define SEG29COM3_position                       0x5
#define SEG29COM3_size                           0x1
#define SEG29COM3_value_mask                     0x20
#define SEG29COM3_clear_mask                     0xDF

#define S29C3                                    0x5
#define S29C3_address                            0x199
#define S29C3_position                           0x5
#define S29C3_size                               0x1
#define S29C3_value_mask                         0x20
#define S29C3_clear_mask                         0xDF

#define LCDDATA21_SEG29                          0x5
#define LCDDATA21_SEG29_address                  0x199
#define LCDDATA21_SEG29_position                 0x5
#define LCDDATA21_SEG29_size                     0x1
#define LCDDATA21_SEG29_value_mask               0x20
#define LCDDATA21_SEG29_clear_mask               0xDF

#define SEG30COM3                                0x6
#define SEG30COM3_address                        0x199
#define SEG30COM3_position                       0x6
#define SEG30COM3_size                           0x1
#define SEG30COM3_value_mask                     0x40
#define SEG30COM3_clear_mask                     0xBF

#define LCDDATA21_SEG30                          0x6
#define LCDDATA21_SEG30_address                  0x199
#define LCDDATA21_SEG30_position                 0x6
#define LCDDATA21_SEG30_size                     0x1
#define LCDDATA21_SEG30_value_mask               0x40
#define LCDDATA21_SEG30_clear_mask               0xBF

#define S30C3                                    0x6
#define S30C3_address                            0x199
#define S30C3_position                           0x6
#define S30C3_size                               0x1
#define S30C3_value_mask                         0x40
#define S30C3_clear_mask                         0xBF

#define S31C3                                    0x7
#define S31C3_address                            0x199
#define S31C3_position                           0x7
#define S31C3_size                               0x1
#define S31C3_value_mask                         0x80
#define S31C3_clear_mask                         0x7F

#define LCDDATA21_SEG31                          0x7
#define LCDDATA21_SEG31_address                  0x199
#define LCDDATA21_SEG31_position                 0x7
#define LCDDATA21_SEG31_size                     0x1
#define LCDDATA21_SEG31_value_mask               0x80
#define LCDDATA21_SEG31_clear_mask               0x7F

#define SEG31COM3                                0x7
#define SEG31COM3_address                        0x199
#define SEG31COM3_position                       0x7
#define SEG31COM3_size                           0x1
#define SEG31COM3_value_mask                     0x80
#define SEG31COM3_clear_mask                     0x7F


/*------------------------------------------------------------------------------------------------------------------------#
| LCDDATA22                                                                                                         0x19A |
#-------------------------------------------------------------------------------------------------------------------------#
| LCDDATA22_SEG39 | LCDDATA22_SEG38 | LCDDATA22_SEG37 | SEG36COM3 | LCDDATA22_SEG35 | LCDDATA22_SEG34 | SEG33COM3 | S32C3 |
#-------------------------------------------------------------------------------------------------------------------------#
| 7               | 6               | 5               | 4         | 3               | 2               | 1         | 0     |
#------------------------------------------------------------------------------------------------------------------------*/

#define LCDDATA22                                0x0
#define LCDDATA22_address                        0x19A
#define LCDDATA22_position                       0x0
#define LCDDATA22_size                           0x8
#define LCDDATA22_value_mask                     0xFF
#define LCDDATA22_clear_mask                     0x0

#define S32C3                                    0x0
#define S32C3_address                            0x19A
#define S32C3_position                           0x0
#define S32C3_size                               0x1
#define S32C3_value_mask                         0x1
#define S32C3_clear_mask                         0xFE

#define LCDDATA22_SEG32                          0x0
#define LCDDATA22_SEG32_address                  0x19A
#define LCDDATA22_SEG32_position                 0x0
#define LCDDATA22_SEG32_size                     0x1
#define LCDDATA22_SEG32_value_mask               0x1
#define LCDDATA22_SEG32_clear_mask               0xFE

#define SEG32COM3                                0x0
#define SEG32COM3_address                        0x19A
#define SEG32COM3_position                       0x0
#define SEG32COM3_size                           0x1
#define SEG32COM3_value_mask                     0x1
#define SEG32COM3_clear_mask                     0xFE

#define SEG33COM3                                0x1
#define SEG33COM3_address                        0x19A
#define SEG33COM3_position                       0x1
#define SEG33COM3_size                           0x1
#define SEG33COM3_value_mask                     0x2
#define SEG33COM3_clear_mask                     0xFD

#define LCDDATA22_SEG33                          0x1
#define LCDDATA22_SEG33_address                  0x19A
#define LCDDATA22_SEG33_position                 0x1
#define LCDDATA22_SEG33_size                     0x1
#define LCDDATA22_SEG33_value_mask               0x2
#define LCDDATA22_SEG33_clear_mask               0xFD

#define S33C3                                    0x1
#define S33C3_address                            0x19A
#define S33C3_position                           0x1
#define S33C3_size                               0x1
#define S33C3_value_mask                         0x2
#define S33C3_clear_mask                         0xFD

#define LCDDATA22_SEG34                          0x2
#define LCDDATA22_SEG34_address                  0x19A
#define LCDDATA22_SEG34_position                 0x2
#define LCDDATA22_SEG34_size                     0x1
#define LCDDATA22_SEG34_value_mask               0x4
#define LCDDATA22_SEG34_clear_mask               0xFB

#define S34C3                                    0x2
#define S34C3_address                            0x19A
#define S34C3_position                           0x2
#define S34C3_size                               0x1
#define S34C3_value_mask                         0x4
#define S34C3_clear_mask                         0xFB

#define SEG34COM3                                0x2
#define SEG34COM3_address                        0x19A
#define SEG34COM3_position                       0x2
#define SEG34COM3_size                           0x1
#define SEG34COM3_value_mask                     0x4
#define SEG34COM3_clear_mask                     0xFB

#define LCDDATA22_SEG35                          0x3
#define LCDDATA22_SEG35_address                  0x19A
#define LCDDATA22_SEG35_position                 0x3
#define LCDDATA22_SEG35_size                     0x1
#define LCDDATA22_SEG35_value_mask               0x8
#define LCDDATA22_SEG35_clear_mask               0xF7

#define S35C3                                    0x3
#define S35C3_address                            0x19A
#define S35C3_position                           0x3
#define S35C3_size                               0x1
#define S35C3_value_mask                         0x8
#define S35C3_clear_mask                         0xF7

#define SEG35COM3                                0x3
#define SEG35COM3_address                        0x19A
#define SEG35COM3_position                       0x3
#define SEG35COM3_size                           0x1
#define SEG35COM3_value_mask                     0x8
#define SEG35COM3_clear_mask                     0xF7

#define SEG36COM3                                0x4
#define SEG36COM3_address                        0x19A
#define SEG36COM3_position                       0x4
#define SEG36COM3_size                           0x1
#define SEG36COM3_value_mask                     0x10
#define SEG36COM3_clear_mask                     0xEF

#define LCDDATA22_SEG36                          0x4
#define LCDDATA22_SEG36_address                  0x19A
#define LCDDATA22_SEG36_position                 0x4
#define LCDDATA22_SEG36_size                     0x1
#define LCDDATA22_SEG36_value_mask               0x10
#define LCDDATA22_SEG36_clear_mask               0xEF

#define S36C3                                    0x4
#define S36C3_address                            0x19A
#define S36C3_position                           0x4
#define S36C3_size                               0x1
#define S36C3_value_mask                         0x10
#define S36C3_clear_mask                         0xEF

#define LCDDATA22_SEG37                          0x5
#define LCDDATA22_SEG37_address                  0x19A
#define LCDDATA22_SEG37_position                 0x5
#define LCDDATA22_SEG37_size                     0x1
#define LCDDATA22_SEG37_value_mask               0x20
#define LCDDATA22_SEG37_clear_mask               0xDF

#define S37C3                                    0x5
#define S37C3_address                            0x19A
#define S37C3_position                           0x5
#define S37C3_size                               0x1
#define S37C3_value_mask                         0x20
#define S37C3_clear_mask                         0xDF

#define SEG37COM3                                0x5
#define SEG37COM3_address                        0x19A
#define SEG37COM3_position                       0x5
#define SEG37COM3_size                           0x1
#define SEG37COM3_value_mask                     0x20
#define SEG37COM3_clear_mask                     0xDF

#define LCDDATA22_SEG38                          0x6
#define LCDDATA22_SEG38_address                  0x19A
#define LCDDATA22_SEG38_position                 0x6
#define LCDDATA22_SEG38_size                     0x1
#define LCDDATA22_SEG38_value_mask               0x40
#define LCDDATA22_SEG38_clear_mask               0xBF

#define SEG38COM3                                0x6
#define SEG38COM3_address                        0x19A
#define SEG38COM3_position                       0x6
#define SEG38COM3_size                           0x1
#define SEG38COM3_value_mask                     0x40
#define SEG38COM3_clear_mask                     0xBF

#define S38C3                                    0x6
#define S38C3_address                            0x19A
#define S38C3_position                           0x6
#define S38C3_size                               0x1
#define S38C3_value_mask                         0x40
#define S38C3_clear_mask                         0xBF

#define LCDDATA22_SEG39                          0x7
#define LCDDATA22_SEG39_address                  0x19A
#define LCDDATA22_SEG39_position                 0x7
#define LCDDATA22_SEG39_size                     0x1
#define LCDDATA22_SEG39_value_mask               0x80
#define LCDDATA22_SEG39_clear_mask               0x7F

#define SEG39COM3                                0x7
#define SEG39COM3_address                        0x19A
#define SEG39COM3_position                       0x7
#define SEG39COM3_size                           0x1
#define SEG39COM3_value_mask                     0x80
#define SEG39COM3_clear_mask                     0x7F

#define S39C3                                    0x7
#define S39C3_address                            0x19A
#define S39C3_position                           0x7
#define S39C3_size                               0x1
#define S39C3_value_mask                         0x80
#define S39C3_clear_mask                         0x7F


/*------------------------------------------#
| LCDDATA23                           0x19B |
#-------------------------------------------#
| - | - | - | - | - | - | SEG41COM3 | S40C3 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1         | 0     |
#------------------------------------------*/

#define LCDDATA23                                0x0
#define LCDDATA23_address                        0x19B
#define LCDDATA23_position                       0x0
#define LCDDATA23_size                           0x8
#define LCDDATA23_value_mask                     0xFF
#define LCDDATA23_clear_mask                     0x0

#define S40C3                                    0x0
#define S40C3_address                            0x19B
#define S40C3_position                           0x0
#define S40C3_size                               0x1
#define S40C3_value_mask                         0x1
#define S40C3_clear_mask                         0xFE

#define LCDDATA23_SEG40                          0x0
#define LCDDATA23_SEG40_address                  0x19B
#define LCDDATA23_SEG40_position                 0x0
#define LCDDATA23_SEG40_size                     0x1
#define LCDDATA23_SEG40_value_mask               0x1
#define LCDDATA23_SEG40_clear_mask               0xFE

#define SEG40COM3                                0x0
#define SEG40COM3_address                        0x19B
#define SEG40COM3_position                       0x0
#define SEG40COM3_size                           0x1
#define SEG40COM3_value_mask                     0x1
#define SEG40COM3_clear_mask                     0xFE

#define SEG41COM3                                0x1
#define SEG41COM3_address                        0x19B
#define SEG41COM3_position                       0x1
#define SEG41COM3_size                           0x1
#define SEG41COM3_value_mask                     0x2
#define SEG41COM3_clear_mask                     0xFD

#define LCDDATA23_SEG41                          0x1
#define LCDDATA23_SEG41_address                  0x19B
#define LCDDATA23_SEG41_position                 0x1
#define LCDDATA23_SEG41_size                     0x1
#define LCDDATA23_SEG41_value_mask               0x2
#define LCDDATA23_SEG41_clear_mask               0xFD

#define S41C3                                    0x1
#define S41C3_address                            0x19B
#define S41C3_position                           0x1
#define S41C3_size                               0x1
#define S41C3_value_mask                         0x2
#define S41C3_clear_mask                         0xFD


/*--------------------------------------------------------------------------------------------------#
| LCDSE3                                                                                      0x19C |
#---------------------------------------------------------------------------------------------------#
| SEGEN31 | SEGEN30 | SEGEN29 | SEGEN28 | LCDSE3_SEG27 | LCDSE3_SEG26 | LCDSE3_SEG25 | LCDSE3_SEG24 |
#---------------------------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3            | 2            | 1            | 0            |
#--------------------------------------------------------------------------------------------------*/

#define LCDSE3                                   0x0
#define LCDSE3_address                           0x19C
#define LCDSE3_position                          0x0
#define LCDSE3_size                              0x8
#define LCDSE3_value_mask                        0xFF
#define LCDSE3_clear_mask                        0x0

#define LCDSE3_SEG24                             0x0
#define LCDSE3_SEG24_address                     0x19C
#define LCDSE3_SEG24_position                    0x0
#define LCDSE3_SEG24_size                        0x1
#define LCDSE3_SEG24_value_mask                  0x1
#define LCDSE3_SEG24_clear_mask                  0xFE

#define SEGEN24                                  0x0
#define SEGEN24_address                          0x19C
#define SEGEN24_position                         0x0
#define SEGEN24_size                             0x1
#define SEGEN24_value_mask                       0x1
#define SEGEN24_clear_mask                       0xFE

#define SE24                                     0x0
#define SE24_address                             0x19C
#define SE24_position                            0x0
#define SE24_size                                0x1
#define SE24_value_mask                          0x1
#define SE24_clear_mask                          0xFE

#define LCDSE3_SEG25                             0x1
#define LCDSE3_SEG25_address                     0x19C
#define LCDSE3_SEG25_position                    0x1
#define LCDSE3_SEG25_size                        0x1
#define LCDSE3_SEG25_value_mask                  0x2
#define LCDSE3_SEG25_clear_mask                  0xFD

#define SEGEN25                                  0x1
#define SEGEN25_address                          0x19C
#define SEGEN25_position                         0x1
#define SEGEN25_size                             0x1
#define SEGEN25_value_mask                       0x2
#define SEGEN25_clear_mask                       0xFD

#define SE25                                     0x1
#define SE25_address                             0x19C
#define SE25_position                            0x1
#define SE25_size                                0x1
#define SE25_value_mask                          0x2
#define SE25_clear_mask                          0xFD

#define LCDSE3_SEG26                             0x2
#define LCDSE3_SEG26_address                     0x19C
#define LCDSE3_SEG26_position                    0x2
#define LCDSE3_SEG26_size                        0x1
#define LCDSE3_SEG26_value_mask                  0x4
#define LCDSE3_SEG26_clear_mask                  0xFB

#define SEGEN26                                  0x2
#define SEGEN26_address                          0x19C
#define SEGEN26_position                         0x2
#define SEGEN26_size                             0x1
#define SEGEN26_value_mask                       0x4
#define SEGEN26_clear_mask                       0xFB

#define SE26                                     0x2
#define SE26_address                             0x19C
#define SE26_position                            0x2
#define SE26_size                                0x1
#define SE26_value_mask                          0x4
#define SE26_clear_mask                          0xFB

#define LCDSE3_SEG27                             0x3
#define LCDSE3_SEG27_address                     0x19C
#define LCDSE3_SEG27_position                    0x3
#define LCDSE3_SEG27_size                        0x1
#define LCDSE3_SEG27_value_mask                  0x8
#define LCDSE3_SEG27_clear_mask                  0xF7

#define SEGEN27                                  0x3
#define SEGEN27_address                          0x19C
#define SEGEN27_position                         0x3
#define SEGEN27_size                             0x1
#define SEGEN27_value_mask                       0x8
#define SEGEN27_clear_mask                       0xF7

#define SE27                                     0x3
#define SE27_address                             0x19C
#define SE27_position                            0x3
#define SE27_size                                0x1
#define SE27_value_mask                          0x8
#define SE27_clear_mask                          0xF7

#define SEGEN28                                  0x4
#define SEGEN28_address                          0x19C
#define SEGEN28_position                         0x4
#define SEGEN28_size                             0x1
#define SEGEN28_value_mask                       0x10
#define SEGEN28_clear_mask                       0xEF

#define LCDSE3_SEG28                             0x4
#define LCDSE3_SEG28_address                     0x19C
#define LCDSE3_SEG28_position                    0x4
#define LCDSE3_SEG28_size                        0x1
#define LCDSE3_SEG28_value_mask                  0x10
#define LCDSE3_SEG28_clear_mask                  0xEF

#define SE28                                     0x4
#define SE28_address                             0x19C
#define SE28_position                            0x4
#define SE28_size                                0x1
#define SE28_value_mask                          0x10
#define SE28_clear_mask                          0xEF

#define SEGEN29                                  0x5
#define SEGEN29_address                          0x19C
#define SEGEN29_position                         0x5
#define SEGEN29_size                             0x1
#define SEGEN29_value_mask                       0x20
#define SEGEN29_clear_mask                       0xDF

#define LCDSE3_SEG29                             0x5
#define LCDSE3_SEG29_address                     0x19C
#define LCDSE3_SEG29_position                    0x5
#define LCDSE3_SEG29_size                        0x1
#define LCDSE3_SEG29_value_mask                  0x20
#define LCDSE3_SEG29_clear_mask                  0xDF

#define SE29                                     0x5
#define SE29_address                             0x19C
#define SE29_position                            0x5
#define SE29_size                                0x1
#define SE29_value_mask                          0x20
#define SE29_clear_mask                          0xDF

#define SEGEN30                                  0x6
#define SEGEN30_address                          0x19C
#define SEGEN30_position                         0x6
#define SEGEN30_size                             0x1
#define SEGEN30_value_mask                       0x40
#define SEGEN30_clear_mask                       0xBF

#define LCDSE3_SEG30                             0x6
#define LCDSE3_SEG30_address                     0x19C
#define LCDSE3_SEG30_position                    0x6
#define LCDSE3_SEG30_size                        0x1
#define LCDSE3_SEG30_value_mask                  0x40
#define LCDSE3_SEG30_clear_mask                  0xBF

#define SE30                                     0x6
#define SE30_address                             0x19C
#define SE30_position                            0x6
#define SE30_size                                0x1
#define SE30_value_mask                          0x40
#define SE30_clear_mask                          0xBF

#define SEGEN31                                  0x7
#define SEGEN31_address                          0x19C
#define SEGEN31_position                         0x7
#define SEGEN31_size                             0x1
#define SEGEN31_value_mask                       0x80
#define SEGEN31_clear_mask                       0x7F

#define LCDSE3_SEG31                             0x7
#define LCDSE3_SEG31_address                     0x19C
#define LCDSE3_SEG31_position                    0x7
#define LCDSE3_SEG31_size                        0x1
#define LCDSE3_SEG31_value_mask                  0x80
#define LCDSE3_SEG31_clear_mask                  0x7F

#define SE31                                     0x7
#define SE31_address                             0x19C
#define SE31_position                            0x7
#define SE31_size                                0x1
#define SE31_value_mask                          0x80
#define SE31_clear_mask                          0x7F


/*------------------------------------------------------------------------------#
| LCDSE4                                                                  0x19D |
#-------------------------------------------------------------------------------#
| SEGEN39 | SEGEN38 | SEGEN37 | SEGEN36 | SEGEN35 | SEGEN34 | SEGEN33 | SEGEN32 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define LCDSE4                                   0x0
#define LCDSE4_address                           0x19D
#define LCDSE4_position                          0x0
#define LCDSE4_size                              0x8
#define LCDSE4_value_mask                        0xFF
#define LCDSE4_clear_mask                        0x0

#define SEGEN32                                  0x0
#define SEGEN32_address                          0x19D
#define SEGEN32_position                         0x0
#define SEGEN32_size                             0x1
#define SEGEN32_value_mask                       0x1
#define SEGEN32_clear_mask                       0xFE

#define SE32                                     0x0
#define SE32_address                             0x19D
#define SE32_position                            0x0
#define SE32_size                                0x1
#define SE32_value_mask                          0x1
#define SE32_clear_mask                          0xFE

#define LCDSE4_SEG32                             0x0
#define LCDSE4_SEG32_address                     0x19D
#define LCDSE4_SEG32_position                    0x0
#define LCDSE4_SEG32_size                        0x1
#define LCDSE4_SEG32_value_mask                  0x1
#define LCDSE4_SEG32_clear_mask                  0xFE

#define SEGEN33                                  0x1
#define SEGEN33_address                          0x19D
#define SEGEN33_position                         0x1
#define SEGEN33_size                             0x1
#define SEGEN33_value_mask                       0x2
#define SEGEN33_clear_mask                       0xFD

#define SE33                                     0x1
#define SE33_address                             0x19D
#define SE33_position                            0x1
#define SE33_size                                0x1
#define SE33_value_mask                          0x2
#define SE33_clear_mask                          0xFD

#define LCDSE4_SEG33                             0x1
#define LCDSE4_SEG33_address                     0x19D
#define LCDSE4_SEG33_position                    0x1
#define LCDSE4_SEG33_size                        0x1
#define LCDSE4_SEG33_value_mask                  0x2
#define LCDSE4_SEG33_clear_mask                  0xFD

#define SEGEN34                                  0x2
#define SEGEN34_address                          0x19D
#define SEGEN34_position                         0x2
#define SEGEN34_size                             0x1
#define SEGEN34_value_mask                       0x4
#define SEGEN34_clear_mask                       0xFB

#define SE34                                     0x2
#define SE34_address                             0x19D
#define SE34_position                            0x2
#define SE34_size                                0x1
#define SE34_value_mask                          0x4
#define SE34_clear_mask                          0xFB

#define LCDSE4_SEG34                             0x2
#define LCDSE4_SEG34_address                     0x19D
#define LCDSE4_SEG34_position                    0x2
#define LCDSE4_SEG34_size                        0x1
#define LCDSE4_SEG34_value_mask                  0x4
#define LCDSE4_SEG34_clear_mask                  0xFB

#define SEGEN35                                  0x3
#define SEGEN35_address                          0x19D
#define SEGEN35_position                         0x3
#define SEGEN35_size                             0x1
#define SEGEN35_value_mask                       0x8
#define SEGEN35_clear_mask                       0xF7

#define SE35                                     0x3
#define SE35_address                             0x19D
#define SE35_position                            0x3
#define SE35_size                                0x1
#define SE35_value_mask                          0x8
#define SE35_clear_mask                          0xF7

#define LCDSE4_SEG35                             0x3
#define LCDSE4_SEG35_address                     0x19D
#define LCDSE4_SEG35_position                    0x3
#define LCDSE4_SEG35_size                        0x1
#define LCDSE4_SEG35_value_mask                  0x8
#define LCDSE4_SEG35_clear_mask                  0xF7

#define SEGEN36                                  0x4
#define SEGEN36_address                          0x19D
#define SEGEN36_position                         0x4
#define SEGEN36_size                             0x1
#define SEGEN36_value_mask                       0x10
#define SEGEN36_clear_mask                       0xEF

#define SE36                                     0x4
#define SE36_address                             0x19D
#define SE36_position                            0x4
#define SE36_size                                0x1
#define SE36_value_mask                          0x10
#define SE36_clear_mask                          0xEF

#define LCDSE4_SEG36                             0x4
#define LCDSE4_SEG36_address                     0x19D
#define LCDSE4_SEG36_position                    0x4
#define LCDSE4_SEG36_size                        0x1
#define LCDSE4_SEG36_value_mask                  0x10
#define LCDSE4_SEG36_clear_mask                  0xEF

#define SEGEN37                                  0x5
#define SEGEN37_address                          0x19D
#define SEGEN37_position                         0x5
#define SEGEN37_size                             0x1
#define SEGEN37_value_mask                       0x20
#define SEGEN37_clear_mask                       0xDF

#define SE37                                     0x5
#define SE37_address                             0x19D
#define SE37_position                            0x5
#define SE37_size                                0x1
#define SE37_value_mask                          0x20
#define SE37_clear_mask                          0xDF

#define LCDSE4_SEG37                             0x5
#define LCDSE4_SEG37_address                     0x19D
#define LCDSE4_SEG37_position                    0x5
#define LCDSE4_SEG37_size                        0x1
#define LCDSE4_SEG37_value_mask                  0x20
#define LCDSE4_SEG37_clear_mask                  0xDF

#define SE38                                     0x6
#define SE38_address                             0x19D
#define SE38_position                            0x6
#define SE38_size                                0x1
#define SE38_value_mask                          0x40
#define SE38_clear_mask                          0xBF

#define SEGEN38                                  0x6
#define SEGEN38_address                          0x19D
#define SEGEN38_position                         0x6
#define SEGEN38_size                             0x1
#define SEGEN38_value_mask                       0x40
#define SEGEN38_clear_mask                       0xBF

#define LCDSE4_SEG38                             0x6
#define LCDSE4_SEG38_address                     0x19D
#define LCDSE4_SEG38_position                    0x6
#define LCDSE4_SEG38_size                        0x1
#define LCDSE4_SEG38_value_mask                  0x40
#define LCDSE4_SEG38_clear_mask                  0xBF

#define SE39                                     0x7
#define SE39_address                             0x19D
#define SE39_position                            0x7
#define SE39_size                                0x1
#define SE39_value_mask                          0x80
#define SE39_clear_mask                          0x7F

#define SEGEN39                                  0x7
#define SEGEN39_address                          0x19D
#define SEGEN39_position                         0x7
#define SEGEN39_size                             0x1
#define SEGEN39_value_mask                       0x80
#define SEGEN39_clear_mask                       0x7F

#define LCDSE4_SEG39                             0x7
#define LCDSE4_SEG39_address                     0x19D
#define LCDSE4_SEG39_position                    0x7
#define LCDSE4_SEG39_size                        0x1
#define LCDSE4_SEG39_value_mask                  0x80
#define LCDSE4_SEG39_clear_mask                  0x7F


/*---------------------------------------#
| LCDSE5                           0x19E |
#----------------------------------------#
| - | - | - | - | - | - | SEGEN41 | SE40 |
#----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1       | 0    |
#---------------------------------------*/

#define LCDSE5                                   0x0
#define LCDSE5_address                           0x19E
#define LCDSE5_position                          0x0
#define LCDSE5_size                              0x8
#define LCDSE5_value_mask                        0xFF
#define LCDSE5_clear_mask                        0x0

#define LCDSE5_SEG40                             0x0
#define LCDSE5_SEG40_address                     0x19E
#define LCDSE5_SEG40_position                    0x0
#define LCDSE5_SEG40_size                        0x1
#define LCDSE5_SEG40_value_mask                  0x1
#define LCDSE5_SEG40_clear_mask                  0xFE

#define SE40                                     0x0
#define SE40_address                             0x19E
#define SE40_position                            0x0
#define SE40_size                                0x1
#define SE40_value_mask                          0x1
#define SE40_clear_mask                          0xFE

#define SEGEN40                                  0x0
#define SEGEN40_address                          0x19E
#define SEGEN40_position                         0x0
#define SEGEN40_size                             0x1
#define SEGEN40_value_mask                       0x1
#define SEGEN40_clear_mask                       0xFE

#define SE41                                     0x1
#define SE41_address                             0x19E
#define SE41_position                            0x1
#define SE41_size                                0x1
#define SE41_value_mask                          0x2
#define SE41_clear_mask                          0xFD

#define LCDSE5_SEG41                             0x1
#define LCDSE5_SEG41_address                     0x19E
#define LCDSE5_SEG41_position                    0x1
#define LCDSE5_SEG41_size                        0x1
#define LCDSE5_SEG41_value_mask                  0x2
#define LCDSE5_SEG41_clear_mask                  0xFD

#define SEGEN41                                  0x1
#define SEGEN41_address                          0x19E
#define SEGEN41_position                         0x1
#define SEGEN41_size                             0x1
#define SEGEN41_value_mask                       0x2
#define SEGEN41_clear_mask                       0xFD

#endif // _PIC16F946_H_
