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

#ifndef _PIC16F1526_H_
#define _PIC16F1526_H_


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


/*----------------------------------------------#
| PORTA                                     0xC |
#-----------------------------------------------#
| RA7 | RA6 | RA5 | RA4 | RA3 | RA2 | RA1 | RA0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

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

#define RA6                                      0x6
#define RA6_address                              0x00C
#define RA6_position                             0x6
#define RA6_size                                 0x1
#define RA6_value_mask                           0x40
#define RA6_clear_mask                           0xBF

#define RA7                                      0x7
#define RA7_address                              0x00C
#define RA7_position                             0x7
#define RA7_size                                 0x1
#define RA7_value_mask                           0x80
#define RA7_clear_mask                           0x7F


/*----------------------------------------------#
| PORTB                                     0xD |
#-----------------------------------------------#
| RB7 | RB6 | RB5 | RB4 | RB3 | RB2 | RB1 | RB0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define PORTB                                    0x0
#define PORTB_address                            0x00D
#define PORTB_position                           0x0
#define PORTB_size                               0x8
#define PORTB_value_mask                         0xFF
#define PORTB_clear_mask                         0x0

#define RB0                                      0x0
#define RB0_address                              0x00D
#define RB0_position                             0x0
#define RB0_size                                 0x1
#define RB0_value_mask                           0x1
#define RB0_clear_mask                           0xFE

#define RB1                                      0x1
#define RB1_address                              0x00D
#define RB1_position                             0x1
#define RB1_size                                 0x1
#define RB1_value_mask                           0x2
#define RB1_clear_mask                           0xFD

#define RB2                                      0x2
#define RB2_address                              0x00D
#define RB2_position                             0x2
#define RB2_size                                 0x1
#define RB2_value_mask                           0x4
#define RB2_clear_mask                           0xFB

#define RB3                                      0x3
#define RB3_address                              0x00D
#define RB3_position                             0x3
#define RB3_size                                 0x1
#define RB3_value_mask                           0x8
#define RB3_clear_mask                           0xF7

#define RB4                                      0x4
#define RB4_address                              0x00D
#define RB4_position                             0x4
#define RB4_size                                 0x1
#define RB4_value_mask                           0x10
#define RB4_clear_mask                           0xEF

#define RB5                                      0x5
#define RB5_address                              0x00D
#define RB5_position                             0x5
#define RB5_size                                 0x1
#define RB5_value_mask                           0x20
#define RB5_clear_mask                           0xDF

#define RB6                                      0x6
#define RB6_address                              0x00D
#define RB6_position                             0x6
#define RB6_size                                 0x1
#define RB6_value_mask                           0x40
#define RB6_clear_mask                           0xBF

#define RB7                                      0x7
#define RB7_address                              0x00D
#define RB7_position                             0x7
#define RB7_size                                 0x1
#define RB7_value_mask                           0x80
#define RB7_clear_mask                           0x7F


/*----------------------------------------------#
| PORTC                                     0xE |
#-----------------------------------------------#
| RC7 | RC6 | RC5 | RC4 | RC3 | RC2 | RC1 | RC0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define PORTC                                    0x0
#define PORTC_address                            0x00E
#define PORTC_position                           0x0
#define PORTC_size                               0x8
#define PORTC_value_mask                         0xFF
#define PORTC_clear_mask                         0x0

#define RC0                                      0x0
#define RC0_address                              0x00E
#define RC0_position                             0x0
#define RC0_size                                 0x1
#define RC0_value_mask                           0x1
#define RC0_clear_mask                           0xFE

#define RC1                                      0x1
#define RC1_address                              0x00E
#define RC1_position                             0x1
#define RC1_size                                 0x1
#define RC1_value_mask                           0x2
#define RC1_clear_mask                           0xFD

#define RC2                                      0x2
#define RC2_address                              0x00E
#define RC2_position                             0x2
#define RC2_size                                 0x1
#define RC2_value_mask                           0x4
#define RC2_clear_mask                           0xFB

#define RC3                                      0x3
#define RC3_address                              0x00E
#define RC3_position                             0x3
#define RC3_size                                 0x1
#define RC3_value_mask                           0x8
#define RC3_clear_mask                           0xF7

#define RC4                                      0x4
#define RC4_address                              0x00E
#define RC4_position                             0x4
#define RC4_size                                 0x1
#define RC4_value_mask                           0x10
#define RC4_clear_mask                           0xEF

#define RC5                                      0x5
#define RC5_address                              0x00E
#define RC5_position                             0x5
#define RC5_size                                 0x1
#define RC5_value_mask                           0x20
#define RC5_clear_mask                           0xDF

#define RC6                                      0x6
#define RC6_address                              0x00E
#define RC6_position                             0x6
#define RC6_size                                 0x1
#define RC6_value_mask                           0x40
#define RC6_clear_mask                           0xBF

#define RC7                                      0x7
#define RC7_address                              0x00E
#define RC7_position                             0x7
#define RC7_size                                 0x1
#define RC7_value_mask                           0x80
#define RC7_clear_mask                           0x7F


/*----------------------------------------------#
| PORTD                                     0xF |
#-----------------------------------------------#
| RD7 | RD6 | RD5 | RD4 | RD3 | RD2 | RD1 | RD0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define PORTD                                    0x0
#define PORTD_address                            0x00F
#define PORTD_position                           0x0
#define PORTD_size                               0x8
#define PORTD_value_mask                         0xFF
#define PORTD_clear_mask                         0x0

#define RD0                                      0x0
#define RD0_address                              0x00F
#define RD0_position                             0x0
#define RD0_size                                 0x1
#define RD0_value_mask                           0x1
#define RD0_clear_mask                           0xFE

#define RD1                                      0x1
#define RD1_address                              0x00F
#define RD1_position                             0x1
#define RD1_size                                 0x1
#define RD1_value_mask                           0x2
#define RD1_clear_mask                           0xFD

#define RD2                                      0x2
#define RD2_address                              0x00F
#define RD2_position                             0x2
#define RD2_size                                 0x1
#define RD2_value_mask                           0x4
#define RD2_clear_mask                           0xFB

#define RD3                                      0x3
#define RD3_address                              0x00F
#define RD3_position                             0x3
#define RD3_size                                 0x1
#define RD3_value_mask                           0x8
#define RD3_clear_mask                           0xF7

#define RD4                                      0x4
#define RD4_address                              0x00F
#define RD4_position                             0x4
#define RD4_size                                 0x1
#define RD4_value_mask                           0x10
#define RD4_clear_mask                           0xEF

#define RD5                                      0x5
#define RD5_address                              0x00F
#define RD5_position                             0x5
#define RD5_size                                 0x1
#define RD5_value_mask                           0x20
#define RD5_clear_mask                           0xDF

#define RD6                                      0x6
#define RD6_address                              0x00F
#define RD6_position                             0x6
#define RD6_size                                 0x1
#define RD6_value_mask                           0x40
#define RD6_clear_mask                           0xBF

#define RD7                                      0x7
#define RD7_address                              0x00F
#define RD7_position                             0x7
#define RD7_size                                 0x1
#define RD7_value_mask                           0x80
#define RD7_clear_mask                           0x7F


/*----------------------------------------------#
| PORTE                                    0x10 |
#-----------------------------------------------#
| RE7 | RE6 | RE5 | RE4 | RE3 | RE2 | RE1 | RE0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define PORTE                                    0x0
#define PORTE_address                            0x010
#define PORTE_position                           0x0
#define PORTE_size                               0x8
#define PORTE_value_mask                         0xFF
#define PORTE_clear_mask                         0x0

#define RE0                                      0x0
#define RE0_address                              0x010
#define RE0_position                             0x0
#define RE0_size                                 0x1
#define RE0_value_mask                           0x1
#define RE0_clear_mask                           0xFE

#define RE1                                      0x1
#define RE1_address                              0x010
#define RE1_position                             0x1
#define RE1_size                                 0x1
#define RE1_value_mask                           0x2
#define RE1_clear_mask                           0xFD

#define RE2                                      0x2
#define RE2_address                              0x010
#define RE2_position                             0x2
#define RE2_size                                 0x1
#define RE2_value_mask                           0x4
#define RE2_clear_mask                           0xFB

#define RE3                                      0x3
#define RE3_address                              0x010
#define RE3_position                             0x3
#define RE3_size                                 0x1
#define RE3_value_mask                           0x8
#define RE3_clear_mask                           0xF7

#define RE4                                      0x4
#define RE4_address                              0x010
#define RE4_position                             0x4
#define RE4_size                                 0x1
#define RE4_value_mask                           0x10
#define RE4_clear_mask                           0xEF

#define RE5                                      0x5
#define RE5_address                              0x010
#define RE5_position                             0x5
#define RE5_size                                 0x1
#define RE5_value_mask                           0x20
#define RE5_clear_mask                           0xDF

#define RE6                                      0x6
#define RE6_address                              0x010
#define RE6_position                             0x6
#define RE6_size                                 0x1
#define RE6_value_mask                           0x40
#define RE6_clear_mask                           0xBF

#define RE7                                      0x7
#define RE7_address                              0x010
#define RE7_position                             0x7
#define RE7_size                                 0x1
#define RE7_value_mask                           0x80
#define RE7_clear_mask                           0x7F


/*----------------------------------------------------------------#
| PIR1                                                       0x11 |
#-----------------------------------------------------------------#
| TMR1GIF | ADIF | RCIF | TXIF | SSPIF | CCP1IF | TMR2IF | TMR1IF |
#-----------------------------------------------------------------#
| 7       | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define PIR1                                     0x0
#define PIR1_address                             0x011
#define PIR1_position                            0x0
#define PIR1_size                                0x8
#define PIR1_value_mask                          0xFF
#define PIR1_clear_mask                          0x0

#define TMR1IF                                   0x0
#define TMR1IF_address                           0x011
#define TMR1IF_position                          0x0
#define TMR1IF_size                              0x1
#define TMR1IF_value_mask                        0x1
#define TMR1IF_clear_mask                        0xFE

#define TMR2IF                                   0x1
#define TMR2IF_address                           0x011
#define TMR2IF_position                          0x1
#define TMR2IF_size                              0x1
#define TMR2IF_value_mask                        0x2
#define TMR2IF_clear_mask                        0xFD

#define CCP1IF                                   0x2
#define CCP1IF_address                           0x011
#define CCP1IF_position                          0x2
#define CCP1IF_size                              0x1
#define CCP1IF_value_mask                        0x4
#define CCP1IF_clear_mask                        0xFB

#define SSPIF                                    0x3
#define SSPIF_address                            0x011
#define SSPIF_position                           0x3
#define SSPIF_size                               0x1
#define SSPIF_value_mask                         0x8
#define SSPIF_clear_mask                         0xF7

#define SSP1IF                                   0x3
#define SSP1IF_address                           0x011
#define SSP1IF_position                          0x3
#define SSP1IF_size                              0x1
#define SSP1IF_value_mask                        0x8
#define SSP1IF_clear_mask                        0xF7

#define TXIF                                     0x4
#define TXIF_address                             0x011
#define TXIF_position                            0x4
#define TXIF_size                                0x1
#define TXIF_value_mask                          0x10
#define TXIF_clear_mask                          0xEF

#define TX1IF                                    0x4
#define TX1IF_address                            0x011
#define TX1IF_position                           0x4
#define TX1IF_size                               0x1
#define TX1IF_value_mask                         0x10
#define TX1IF_clear_mask                         0xEF

#define RCIF                                     0x5
#define RCIF_address                             0x011
#define RCIF_position                            0x5
#define RCIF_size                                0x1
#define RCIF_value_mask                          0x20
#define RCIF_clear_mask                          0xDF

#define RC1IF                                    0x5
#define RC1IF_address                            0x011
#define RC1IF_position                           0x5
#define RC1IF_size                               0x1
#define RC1IF_value_mask                         0x20
#define RC1IF_clear_mask                         0xDF

#define ADIF                                     0x6
#define ADIF_address                             0x011
#define ADIF_position                            0x6
#define ADIF_size                                0x1
#define ADIF_value_mask                          0x40
#define ADIF_clear_mask                          0xBF

#define TMR1GIF                                  0x7
#define TMR1GIF_address                          0x011
#define TMR1GIF_position                         0x7
#define TMR1GIF_size                             0x1
#define TMR1GIF_value_mask                       0x80
#define TMR1GIF_clear_mask                       0x7F


/*-------------------------------------------------------------------#
| PIR2                                                          0x12 |
#--------------------------------------------------------------------#
| OSFIF | TMR5GIF | TMR3GIF | - | BCL1IF | TMR10IF | TMR8IF | CCP2IF |
#--------------------------------------------------------------------#
| 7     | 6       | 5       | 4 | 3      | 2       | 1      | 0      |
#-------------------------------------------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0x012
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

#define CCP2IF                                   0x0
#define CCP2IF_address                           0x012
#define CCP2IF_position                          0x0
#define CCP2IF_size                              0x1
#define CCP2IF_value_mask                        0x1
#define CCP2IF_clear_mask                        0xFE

#define TMR8IF                                   0x1
#define TMR8IF_address                           0x012
#define TMR8IF_position                          0x1
#define TMR8IF_size                              0x1
#define TMR8IF_value_mask                        0x2
#define TMR8IF_clear_mask                        0xFD

#define TMR10IF                                  0x2
#define TMR10IF_address                          0x012
#define TMR10IF_position                         0x2
#define TMR10IF_size                             0x1
#define TMR10IF_value_mask                       0x4
#define TMR10IF_clear_mask                       0xFB

#define BCLIF                                    0x3
#define BCLIF_address                            0x012
#define BCLIF_position                           0x3
#define BCLIF_size                               0x1
#define BCLIF_value_mask                         0x8
#define BCLIF_clear_mask                         0xF7

#define BCL1IF                                   0x3
#define BCL1IF_address                           0x012
#define BCL1IF_position                          0x3
#define BCL1IF_size                              0x1
#define BCL1IF_value_mask                        0x8
#define BCL1IF_clear_mask                        0xF7

#define TMR3GIF                                  0x5
#define TMR3GIF_address                          0x012
#define TMR3GIF_position                         0x5
#define TMR3GIF_size                             0x1
#define TMR3GIF_value_mask                       0x20
#define TMR3GIF_clear_mask                       0xDF

#define TMR5GIF                                  0x6
#define TMR5GIF_address                          0x012
#define TMR5GIF_position                         0x6
#define TMR5GIF_size                             0x1
#define TMR5GIF_value_mask                       0x40
#define TMR5GIF_clear_mask                       0xBF

#define OSFIF                                    0x7
#define OSFIF_address                            0x012
#define OSFIF_position                           0x7
#define OSFIF_size                               0x1
#define OSFIF_value_mask                         0x80
#define OSFIF_clear_mask                         0x7F


/*----------------------------------------------------------------------#
| PIR3                                                             0x13 |
#-----------------------------------------------------------------------#
| CCP6IF | CCP5IF | CCP4IF | CCP3IF | TMR6IF | TMR5IF | TMR4IF | TMR3IF |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define PIR3                                     0x0
#define PIR3_address                             0x013
#define PIR3_position                            0x0
#define PIR3_size                                0x8
#define PIR3_value_mask                          0xFF
#define PIR3_clear_mask                          0x0

#define TMR3IF                                   0x0
#define TMR3IF_address                           0x013
#define TMR3IF_position                          0x0
#define TMR3IF_size                              0x1
#define TMR3IF_value_mask                        0x1
#define TMR3IF_clear_mask                        0xFE

#define TMR4IF                                   0x1
#define TMR4IF_address                           0x013
#define TMR4IF_position                          0x1
#define TMR4IF_size                              0x1
#define TMR4IF_value_mask                        0x2
#define TMR4IF_clear_mask                        0xFD

#define TMR5IF                                   0x2
#define TMR5IF_address                           0x013
#define TMR5IF_position                          0x2
#define TMR5IF_size                              0x1
#define TMR5IF_value_mask                        0x4
#define TMR5IF_clear_mask                        0xFB

#define TMR6IF                                   0x3
#define TMR6IF_address                           0x013
#define TMR6IF_position                          0x3
#define TMR6IF_size                              0x1
#define TMR6IF_value_mask                        0x8
#define TMR6IF_clear_mask                        0xF7

#define CCP3IF                                   0x4
#define CCP3IF_address                           0x013
#define CCP3IF_position                          0x4
#define CCP3IF_size                              0x1
#define CCP3IF_value_mask                        0x10
#define CCP3IF_clear_mask                        0xEF

#define CCP4IF                                   0x5
#define CCP4IF_address                           0x013
#define CCP4IF_position                          0x5
#define CCP4IF_size                              0x1
#define CCP4IF_value_mask                        0x20
#define CCP4IF_clear_mask                        0xDF

#define CCP5IF                                   0x6
#define CCP5IF_address                           0x013
#define CCP5IF_position                          0x6
#define CCP5IF_size                              0x1
#define CCP5IF_value_mask                        0x40
#define CCP5IF_clear_mask                        0xBF

#define CCP6IF                                   0x7
#define CCP6IF_address                           0x013
#define CCP6IF_position                          0x7
#define CCP6IF_size                              0x1
#define CCP6IF_value_mask                        0x80
#define CCP6IF_clear_mask                        0x7F


/*---------------------------------------------------------------------#
| PIR4                                                            0x14 |
#----------------------------------------------------------------------#
| CCP10IF | CCP9IF | RC2IF | TX2IF | CCP8IF | CCP7IF | BCL2IF | SSP2IF |
#----------------------------------------------------------------------#
| 7       | 6      | 5     | 4     | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------------*/

#define PIR4                                     0x0
#define PIR4_address                             0x014
#define PIR4_position                            0x0
#define PIR4_size                                0x8
#define PIR4_value_mask                          0xFF
#define PIR4_clear_mask                          0x0

#define SSP2IF                                   0x0
#define SSP2IF_address                           0x014
#define SSP2IF_position                          0x0
#define SSP2IF_size                              0x1
#define SSP2IF_value_mask                        0x1
#define SSP2IF_clear_mask                        0xFE

#define BCL2IF                                   0x1
#define BCL2IF_address                           0x014
#define BCL2IF_position                          0x1
#define BCL2IF_size                              0x1
#define BCL2IF_value_mask                        0x2
#define BCL2IF_clear_mask                        0xFD

#define CCP7IF                                   0x2
#define CCP7IF_address                           0x014
#define CCP7IF_position                          0x2
#define CCP7IF_size                              0x1
#define CCP7IF_value_mask                        0x4
#define CCP7IF_clear_mask                        0xFB

#define CCP8IF                                   0x3
#define CCP8IF_address                           0x014
#define CCP8IF_position                          0x3
#define CCP8IF_size                              0x1
#define CCP8IF_value_mask                        0x8
#define CCP8IF_clear_mask                        0xF7

#define TX2IF                                    0x4
#define TX2IF_address                            0x014
#define TX2IF_position                           0x4
#define TX2IF_size                               0x1
#define TX2IF_value_mask                         0x10
#define TX2IF_clear_mask                         0xEF

#define RC2IF                                    0x5
#define RC2IF_address                            0x014
#define RC2IF_position                           0x5
#define RC2IF_size                               0x1
#define RC2IF_value_mask                         0x20
#define RC2IF_clear_mask                         0xDF

#define CCP9IF                                   0x6
#define CCP9IF_address                           0x014
#define CCP9IF_position                          0x6
#define CCP9IF_size                              0x1
#define CCP9IF_value_mask                        0x40
#define CCP9IF_clear_mask                        0xBF

#define CCP10IF                                  0x7
#define CCP10IF_address                          0x014
#define CCP10IF_position                         0x7
#define CCP10IF_size                             0x1
#define CCP10IF_value_mask                       0x80
#define CCP10IF_clear_mask                       0x7F


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


/*------------------------------#
| TMR1L                    0x16 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR1L                                    0x0
#define TMR1L_address                            0x016
#define TMR1L_position                           0x0
#define TMR1L_size                               0x8
#define TMR1L_value_mask                         0xFF
#define TMR1L_clear_mask                         0x0


/*------------------------------#
| TMR1H                    0x17 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR1H                                    0x0
#define TMR1H_address                            0x017
#define TMR1H_position                           0x0
#define TMR1H_size                               0x8
#define TMR1H_value_mask                         0xFF
#define TMR1H_clear_mask                         0x0


/*-----------------------------------------------------------------------#
| T1CON                                                             0x18 |
#------------------------------------------------------------------------#
| TMR1CS1 | TMR1CS0 | T1CKPS1 | T1CKPS0 | T1OSCEN | nT1SYNC | - | TMR1ON |
#------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1 | 0      |
#-----------------------------------------------------------------------*/

#define T1CON                                    0x0
#define T1CON_address                            0x018
#define T1CON_position                           0x0
#define T1CON_size                               0x8
#define T1CON_value_mask                         0xFF
#define T1CON_clear_mask                         0x0

#define TMR1ON                                   0x0
#define TMR1ON_address                           0x018
#define TMR1ON_position                          0x0
#define TMR1ON_size                              0x1
#define TMR1ON_value_mask                        0x1
#define TMR1ON_clear_mask                        0xFE

#define nT1SYNC                                  0x2
#define nT1SYNC_address                          0x018
#define nT1SYNC_position                         0x2
#define nT1SYNC_size                             0x1
#define nT1SYNC_value_mask                       0x4
#define nT1SYNC_clear_mask                       0xFB

#define T1OSCEN                                  0x3
#define T1OSCEN_address                          0x018
#define T1OSCEN_position                         0x3
#define T1OSCEN_size                             0x1
#define T1OSCEN_value_mask                       0x8
#define T1OSCEN_clear_mask                       0xF7

#define T1CON_SOSCEN                             0x3
#define T1CON_SOSCEN_address                     0x018
#define T1CON_SOSCEN_position                    0x3
#define T1CON_SOSCEN_size                        0x1
#define T1CON_SOSCEN_value_mask                  0x8
#define T1CON_SOSCEN_clear_mask                  0xF7

#define T1CKPS0                                  0x4
#define T1CKPS0_address                          0x018
#define T1CKPS0_position                         0x4
#define T1CKPS0_size                             0x1
#define T1CKPS0_value_mask                       0x10
#define T1CKPS0_clear_mask                       0xEF

#define T1CKPS                                   0x4
#define T1CKPS_address                           0x018
#define T1CKPS_position                          0x4
#define T1CKPS_size                              0x2
#define T1CKPS_value_mask                        0x30
#define T1CKPS_clear_mask                        0xCF

#define T1CKPS1                                  0x5
#define T1CKPS1_address                          0x018
#define T1CKPS1_position                         0x5
#define T1CKPS1_size                             0x1
#define T1CKPS1_value_mask                       0x20
#define T1CKPS1_clear_mask                       0xDF

#define TMR1CS0                                  0x6
#define TMR1CS0_address                          0x018
#define TMR1CS0_position                         0x6
#define TMR1CS0_size                             0x1
#define TMR1CS0_value_mask                       0x40
#define TMR1CS0_clear_mask                       0xBF

#define TMR1CS                                   0x6
#define TMR1CS_address                           0x018
#define TMR1CS_position                          0x6
#define TMR1CS_size                              0x2
#define TMR1CS_value_mask                        0xC0
#define TMR1CS_clear_mask                        0x3F

#define TMR1CS1                                  0x7
#define TMR1CS1_address                          0x018
#define TMR1CS1_position                         0x7
#define TMR1CS1_size                             0x1
#define TMR1CS1_value_mask                       0x80
#define TMR1CS1_clear_mask                       0x7F


/*--------------------------------------------------------------------------#
| T1GCON                                                               0x19 |
#---------------------------------------------------------------------------#
| TMR1GE | T1GPOL | T1GTM | T1GSPM | T1GGO_nDONE | T1GVAL | T1GSS1 | T1GSS0 |
#---------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3           | 2      | 1      | 0      |
#--------------------------------------------------------------------------*/

#define T1GCON                                   0x0
#define T1GCON_address                           0x019
#define T1GCON_position                          0x0
#define T1GCON_size                              0x8
#define T1GCON_value_mask                        0xFF
#define T1GCON_clear_mask                        0x0

#define T1GSS0                                   0x0
#define T1GSS0_address                           0x019
#define T1GSS0_position                          0x0
#define T1GSS0_size                              0x1
#define T1GSS0_value_mask                        0x1
#define T1GSS0_clear_mask                        0xFE

#define T1GSS                                    0x0
#define T1GSS_address                            0x019
#define T1GSS_position                           0x0
#define T1GSS_size                               0x2
#define T1GSS_value_mask                         0x3
#define T1GSS_clear_mask                         0xFC

#define T1GSS1                                   0x1
#define T1GSS1_address                           0x019
#define T1GSS1_position                          0x1
#define T1GSS1_size                              0x1
#define T1GSS1_value_mask                        0x2
#define T1GSS1_clear_mask                        0xFD

#define T1GVAL                                   0x2
#define T1GVAL_address                           0x019
#define T1GVAL_position                          0x2
#define T1GVAL_size                              0x1
#define T1GVAL_value_mask                        0x4
#define T1GVAL_clear_mask                        0xFB

#define T1GGO_nDONE                              0x3
#define T1GGO_nDONE_address                      0x019
#define T1GGO_nDONE_position                     0x3
#define T1GGO_nDONE_size                         0x1
#define T1GGO_nDONE_value_mask                   0x8
#define T1GGO_nDONE_clear_mask                   0xF7

#define T1GSPM                                   0x4
#define T1GSPM_address                           0x019
#define T1GSPM_position                          0x4
#define T1GSPM_size                              0x1
#define T1GSPM_value_mask                        0x10
#define T1GSPM_clear_mask                        0xEF

#define T1GTM                                    0x5
#define T1GTM_address                            0x019
#define T1GTM_position                           0x5
#define T1GTM_size                               0x1
#define T1GTM_value_mask                         0x20
#define T1GTM_clear_mask                         0xDF

#define T1GPOL                                   0x6
#define T1GPOL_address                           0x019
#define T1GPOL_position                          0x6
#define T1GPOL_size                              0x1
#define T1GPOL_value_mask                        0x40
#define T1GPOL_clear_mask                        0xBF

#define TMR1GE                                   0x7
#define TMR1GE_address                           0x019
#define TMR1GE_position                          0x7
#define TMR1GE_size                              0x1
#define TMR1GE_value_mask                        0x80
#define TMR1GE_clear_mask                        0x7F


/*------------------------------#
| TMR2                     0x1A |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR2                                     0x0
#define TMR2_address                             0x01A
#define TMR2_position                            0x0
#define TMR2_size                                0x8
#define TMR2_value_mask                          0xFF
#define TMR2_clear_mask                          0x0


/*------------------------------#
| PR2                      0x1B |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR2                                      0x0
#define PR2_address                              0x01B
#define PR2_position                             0x0
#define PR2_size                                 0x8
#define PR2_value_mask                           0xFF
#define PR2_clear_mask                           0x0


/*---------------------------------------------------------------------------#
| T2CON                                                                 0x1C |
#----------------------------------------------------------------------------#
| - | T2OUTPS3 | T2OUTPS2 | T2OUTPS1 | T2OUTPS0 | TMR2ON | T2CKPS1 | T2CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T2CON                                    0x0
#define T2CON_address                            0x01C
#define T2CON_position                           0x0
#define T2CON_size                               0x8
#define T2CON_value_mask                         0xFF
#define T2CON_clear_mask                         0x0

#define T2CKPS0                                  0x0
#define T2CKPS0_address                          0x01C
#define T2CKPS0_position                         0x0
#define T2CKPS0_size                             0x1
#define T2CKPS0_value_mask                       0x1
#define T2CKPS0_clear_mask                       0xFE

#define T2CKPS                                   0x0
#define T2CKPS_address                           0x01C
#define T2CKPS_position                          0x0
#define T2CKPS_size                              0x2
#define T2CKPS_value_mask                        0x3
#define T2CKPS_clear_mask                        0xFC

#define T2CKPS1                                  0x1
#define T2CKPS1_address                          0x01C
#define T2CKPS1_position                         0x1
#define T2CKPS1_size                             0x1
#define T2CKPS1_value_mask                       0x2
#define T2CKPS1_clear_mask                       0xFD

#define TMR2ON                                   0x2
#define TMR2ON_address                           0x01C
#define TMR2ON_position                          0x2
#define TMR2ON_size                              0x1
#define TMR2ON_value_mask                        0x4
#define TMR2ON_clear_mask                        0xFB

#define T2OUTPS0                                 0x3
#define T2OUTPS0_address                         0x01C
#define T2OUTPS0_position                        0x3
#define T2OUTPS0_size                            0x1
#define T2OUTPS0_value_mask                      0x8
#define T2OUTPS0_clear_mask                      0xF7

#define T2OUTPS                                  0x3
#define T2OUTPS_address                          0x01C
#define T2OUTPS_position                         0x3
#define T2OUTPS_size                             0x4
#define T2OUTPS_value_mask                       0x78
#define T2OUTPS_clear_mask                       0x87

#define T2OUTPS1                                 0x4
#define T2OUTPS1_address                         0x01C
#define T2OUTPS1_position                        0x4
#define T2OUTPS1_size                            0x1
#define T2OUTPS1_value_mask                      0x10
#define T2OUTPS1_clear_mask                      0xEF

#define T2OUTPS2                                 0x5
#define T2OUTPS2_address                         0x01C
#define T2OUTPS2_position                        0x5
#define T2OUTPS2_size                            0x1
#define T2OUTPS2_value_mask                      0x20
#define T2OUTPS2_clear_mask                      0xDF

#define T2OUTPS3                                 0x6
#define T2OUTPS3_address                         0x01C
#define T2OUTPS3_position                        0x6
#define T2OUTPS3_size                            0x1
#define T2OUTPS3_value_mask                      0x40
#define T2OUTPS3_clear_mask                      0xBF


/*----------------------------------------------------------------------#
| TRISA                                                            0x8C |
#-----------------------------------------------------------------------#
| TRISA7 | TRISA6 | TRISA5 | TRISA4 | TRISA3 | TRISA2 | TRISA1 | TRISA0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

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

#define TRISA6                                   0x6
#define TRISA6_address                           0x08C
#define TRISA6_position                          0x6
#define TRISA6_size                              0x1
#define TRISA6_value_mask                        0x40
#define TRISA6_clear_mask                        0xBF

#define TRISA7                                   0x7
#define TRISA7_address                           0x08C
#define TRISA7_position                          0x7
#define TRISA7_size                              0x1
#define TRISA7_value_mask                        0x80
#define TRISA7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| TRISB                                                            0x8D |
#-----------------------------------------------------------------------#
| TRISB7 | TRISB6 | TRISB5 | TRISB4 | TRISB3 | TRISB2 | TRISB1 | TRISB0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISB                                    0x0
#define TRISB_address                            0x08D
#define TRISB_position                           0x0
#define TRISB_size                               0x8
#define TRISB_value_mask                         0xFF
#define TRISB_clear_mask                         0x0

#define TRISB0                                   0x0
#define TRISB0_address                           0x08D
#define TRISB0_position                          0x0
#define TRISB0_size                              0x1
#define TRISB0_value_mask                        0x1
#define TRISB0_clear_mask                        0xFE

#define TRISB1                                   0x1
#define TRISB1_address                           0x08D
#define TRISB1_position                          0x1
#define TRISB1_size                              0x1
#define TRISB1_value_mask                        0x2
#define TRISB1_clear_mask                        0xFD

#define TRISB2                                   0x2
#define TRISB2_address                           0x08D
#define TRISB2_position                          0x2
#define TRISB2_size                              0x1
#define TRISB2_value_mask                        0x4
#define TRISB2_clear_mask                        0xFB

#define TRISB3                                   0x3
#define TRISB3_address                           0x08D
#define TRISB3_position                          0x3
#define TRISB3_size                              0x1
#define TRISB3_value_mask                        0x8
#define TRISB3_clear_mask                        0xF7

#define TRISB4                                   0x4
#define TRISB4_address                           0x08D
#define TRISB4_position                          0x4
#define TRISB4_size                              0x1
#define TRISB4_value_mask                        0x10
#define TRISB4_clear_mask                        0xEF

#define TRISB5                                   0x5
#define TRISB5_address                           0x08D
#define TRISB5_position                          0x5
#define TRISB5_size                              0x1
#define TRISB5_value_mask                        0x20
#define TRISB5_clear_mask                        0xDF

#define TRISB6                                   0x6
#define TRISB6_address                           0x08D
#define TRISB6_position                          0x6
#define TRISB6_size                              0x1
#define TRISB6_value_mask                        0x40
#define TRISB6_clear_mask                        0xBF

#define TRISB7                                   0x7
#define TRISB7_address                           0x08D
#define TRISB7_position                          0x7
#define TRISB7_size                              0x1
#define TRISB7_value_mask                        0x80
#define TRISB7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| TRISC                                                            0x8E |
#-----------------------------------------------------------------------#
| TRISC7 | TRISC6 | TRISC5 | TRISC4 | TRISC3 | TRISC2 | TRISC1 | TRISC0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISC                                    0x0
#define TRISC_address                            0x08E
#define TRISC_position                           0x0
#define TRISC_size                               0x8
#define TRISC_value_mask                         0xFF
#define TRISC_clear_mask                         0x0

#define TRISC0                                   0x0
#define TRISC0_address                           0x08E
#define TRISC0_position                          0x0
#define TRISC0_size                              0x1
#define TRISC0_value_mask                        0x1
#define TRISC0_clear_mask                        0xFE

#define TRISC1                                   0x1
#define TRISC1_address                           0x08E
#define TRISC1_position                          0x1
#define TRISC1_size                              0x1
#define TRISC1_value_mask                        0x2
#define TRISC1_clear_mask                        0xFD

#define TRISC2                                   0x2
#define TRISC2_address                           0x08E
#define TRISC2_position                          0x2
#define TRISC2_size                              0x1
#define TRISC2_value_mask                        0x4
#define TRISC2_clear_mask                        0xFB

#define TRISC3                                   0x3
#define TRISC3_address                           0x08E
#define TRISC3_position                          0x3
#define TRISC3_size                              0x1
#define TRISC3_value_mask                        0x8
#define TRISC3_clear_mask                        0xF7

#define TRISC4                                   0x4
#define TRISC4_address                           0x08E
#define TRISC4_position                          0x4
#define TRISC4_size                              0x1
#define TRISC4_value_mask                        0x10
#define TRISC4_clear_mask                        0xEF

#define TRISC5                                   0x5
#define TRISC5_address                           0x08E
#define TRISC5_position                          0x5
#define TRISC5_size                              0x1
#define TRISC5_value_mask                        0x20
#define TRISC5_clear_mask                        0xDF

#define TRISC6                                   0x6
#define TRISC6_address                           0x08E
#define TRISC6_position                          0x6
#define TRISC6_size                              0x1
#define TRISC6_value_mask                        0x40
#define TRISC6_clear_mask                        0xBF

#define TRISC7                                   0x7
#define TRISC7_address                           0x08E
#define TRISC7_position                          0x7
#define TRISC7_size                              0x1
#define TRISC7_value_mask                        0x80
#define TRISC7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| TRISD                                                            0x8F |
#-----------------------------------------------------------------------#
| TRISD7 | TRISD6 | TRISD5 | TRISD4 | TRISD3 | TRISD2 | TRISD1 | TRISD0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISD                                    0x0
#define TRISD_address                            0x08F
#define TRISD_position                           0x0
#define TRISD_size                               0x8
#define TRISD_value_mask                         0xFF
#define TRISD_clear_mask                         0x0

#define TRISD0                                   0x0
#define TRISD0_address                           0x08F
#define TRISD0_position                          0x0
#define TRISD0_size                              0x1
#define TRISD0_value_mask                        0x1
#define TRISD0_clear_mask                        0xFE

#define TRISD1                                   0x1
#define TRISD1_address                           0x08F
#define TRISD1_position                          0x1
#define TRISD1_size                              0x1
#define TRISD1_value_mask                        0x2
#define TRISD1_clear_mask                        0xFD

#define TRISD2                                   0x2
#define TRISD2_address                           0x08F
#define TRISD2_position                          0x2
#define TRISD2_size                              0x1
#define TRISD2_value_mask                        0x4
#define TRISD2_clear_mask                        0xFB

#define TRISD3                                   0x3
#define TRISD3_address                           0x08F
#define TRISD3_position                          0x3
#define TRISD3_size                              0x1
#define TRISD3_value_mask                        0x8
#define TRISD3_clear_mask                        0xF7

#define TRISD4                                   0x4
#define TRISD4_address                           0x08F
#define TRISD4_position                          0x4
#define TRISD4_size                              0x1
#define TRISD4_value_mask                        0x10
#define TRISD4_clear_mask                        0xEF

#define TRISD5                                   0x5
#define TRISD5_address                           0x08F
#define TRISD5_position                          0x5
#define TRISD5_size                              0x1
#define TRISD5_value_mask                        0x20
#define TRISD5_clear_mask                        0xDF

#define TRISD6                                   0x6
#define TRISD6_address                           0x08F
#define TRISD6_position                          0x6
#define TRISD6_size                              0x1
#define TRISD6_value_mask                        0x40
#define TRISD6_clear_mask                        0xBF

#define TRISD7                                   0x7
#define TRISD7_address                           0x08F
#define TRISD7_position                          0x7
#define TRISD7_size                              0x1
#define TRISD7_value_mask                        0x80
#define TRISD7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| TRISE                                                            0x90 |
#-----------------------------------------------------------------------#
| TRISE7 | TRISE6 | TRISE5 | TRISE4 | TRISE3 | TRISE2 | TRISE1 | TRISE0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISE                                    0x0
#define TRISE_address                            0x090
#define TRISE_position                           0x0
#define TRISE_size                               0x8
#define TRISE_value_mask                         0xFF
#define TRISE_clear_mask                         0x0

#define TRISE0                                   0x0
#define TRISE0_address                           0x090
#define TRISE0_position                          0x0
#define TRISE0_size                              0x1
#define TRISE0_value_mask                        0x1
#define TRISE0_clear_mask                        0xFE

#define TRISE1                                   0x1
#define TRISE1_address                           0x090
#define TRISE1_position                          0x1
#define TRISE1_size                              0x1
#define TRISE1_value_mask                        0x2
#define TRISE1_clear_mask                        0xFD

#define TRISE2                                   0x2
#define TRISE2_address                           0x090
#define TRISE2_position                          0x2
#define TRISE2_size                              0x1
#define TRISE2_value_mask                        0x4
#define TRISE2_clear_mask                        0xFB

#define TRISE3                                   0x3
#define TRISE3_address                           0x090
#define TRISE3_position                          0x3
#define TRISE3_size                              0x1
#define TRISE3_value_mask                        0x8
#define TRISE3_clear_mask                        0xF7

#define TRISE4                                   0x4
#define TRISE4_address                           0x090
#define TRISE4_position                          0x4
#define TRISE4_size                              0x1
#define TRISE4_value_mask                        0x10
#define TRISE4_clear_mask                        0xEF

#define TRISE5                                   0x5
#define TRISE5_address                           0x090
#define TRISE5_position                          0x5
#define TRISE5_size                              0x1
#define TRISE5_value_mask                        0x20
#define TRISE5_clear_mask                        0xDF

#define TRISE6                                   0x6
#define TRISE6_address                           0x090
#define TRISE6_position                          0x6
#define TRISE6_size                              0x1
#define TRISE6_value_mask                        0x40
#define TRISE6_clear_mask                        0xBF

#define TRISE7                                   0x7
#define TRISE7_address                           0x090
#define TRISE7_position                          0x7
#define TRISE7_size                              0x1
#define TRISE7_value_mask                        0x80
#define TRISE7_clear_mask                        0x7F


/*------------------------------------------------------------------#
| PIE1                                                         0x91 |
#-------------------------------------------------------------------#
| TMR1GIE | ADIE | RC1IE | TXIE | SSP1IE | CCP1IE | TMR2IE | TMR1IE |
#-------------------------------------------------------------------#
| 7       | 6    | 5     | 4    | 3      | 2      | 1      | 0      |
#------------------------------------------------------------------*/

#define PIE1                                     0x0
#define PIE1_address                             0x091
#define PIE1_position                            0x0
#define PIE1_size                                0x8
#define PIE1_value_mask                          0xFF
#define PIE1_clear_mask                          0x0

#define TMR1IE                                   0x0
#define TMR1IE_address                           0x091
#define TMR1IE_position                          0x0
#define TMR1IE_size                              0x1
#define TMR1IE_value_mask                        0x1
#define TMR1IE_clear_mask                        0xFE

#define TMR2IE                                   0x1
#define TMR2IE_address                           0x091
#define TMR2IE_position                          0x1
#define TMR2IE_size                              0x1
#define TMR2IE_value_mask                        0x2
#define TMR2IE_clear_mask                        0xFD

#define CCP1IE                                   0x2
#define CCP1IE_address                           0x091
#define CCP1IE_position                          0x2
#define CCP1IE_size                              0x1
#define CCP1IE_value_mask                        0x4
#define CCP1IE_clear_mask                        0xFB

#define SSP1IE                                   0x3
#define SSP1IE_address                           0x091
#define SSP1IE_position                          0x3
#define SSP1IE_size                              0x1
#define SSP1IE_value_mask                        0x8
#define SSP1IE_clear_mask                        0xF7

#define SSPIE                                    0x3
#define SSPIE_address                            0x091
#define SSPIE_position                           0x3
#define SSPIE_size                               0x1
#define SSPIE_value_mask                         0x8
#define SSPIE_clear_mask                         0xF7

#define TXIE                                     0x4
#define TXIE_address                             0x091
#define TXIE_position                            0x4
#define TXIE_size                                0x1
#define TXIE_value_mask                          0x10
#define TXIE_clear_mask                          0xEF

#define TX1IE                                    0x4
#define TX1IE_address                            0x091
#define TX1IE_position                           0x4
#define TX1IE_size                               0x1
#define TX1IE_value_mask                         0x10
#define TX1IE_clear_mask                         0xEF

#define RC1IE                                    0x5
#define RC1IE_address                            0x091
#define RC1IE_position                           0x5
#define RC1IE_size                               0x1
#define RC1IE_value_mask                         0x20
#define RC1IE_clear_mask                         0xDF

#define RCIE                                     0x5
#define RCIE_address                             0x091
#define RCIE_position                            0x5
#define RCIE_size                                0x1
#define RCIE_value_mask                          0x20
#define RCIE_clear_mask                          0xDF

#define ADIE                                     0x6
#define ADIE_address                             0x091
#define ADIE_position                            0x6
#define ADIE_size                                0x1
#define ADIE_value_mask                          0x40
#define ADIE_clear_mask                          0xBF

#define TMR1GIE                                  0x7
#define TMR1GIE_address                          0x091
#define TMR1GIE_position                         0x7
#define TMR1GIE_size                             0x1
#define TMR1GIE_value_mask                       0x80
#define TMR1GIE_clear_mask                       0x7F


/*-------------------------------------------------------------------#
| PIE2                                                          0x92 |
#--------------------------------------------------------------------#
| OSFIE | TMR5GIE | TMR3GIE | - | BCL1IE | TMR10IE | TMR8IE | CCP2IE |
#--------------------------------------------------------------------#
| 7     | 6       | 5       | 4 | 3      | 2       | 1      | 0      |
#-------------------------------------------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0x092
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

#define CCP2IE                                   0x0
#define CCP2IE_address                           0x092
#define CCP2IE_position                          0x0
#define CCP2IE_size                              0x1
#define CCP2IE_value_mask                        0x1
#define CCP2IE_clear_mask                        0xFE

#define TMR8IE                                   0x1
#define TMR8IE_address                           0x092
#define TMR8IE_position                          0x1
#define TMR8IE_size                              0x1
#define TMR8IE_value_mask                        0x2
#define TMR8IE_clear_mask                        0xFD

#define TMR10IE                                  0x2
#define TMR10IE_address                          0x092
#define TMR10IE_position                         0x2
#define TMR10IE_size                             0x1
#define TMR10IE_value_mask                       0x4
#define TMR10IE_clear_mask                       0xFB

#define BCL1IE                                   0x3
#define BCL1IE_address                           0x092
#define BCL1IE_position                          0x3
#define BCL1IE_size                              0x1
#define BCL1IE_value_mask                        0x8
#define BCL1IE_clear_mask                        0xF7

#define BCLIE                                    0x3
#define BCLIE_address                            0x092
#define BCLIE_position                           0x3
#define BCLIE_size                               0x1
#define BCLIE_value_mask                         0x8
#define BCLIE_clear_mask                         0xF7

#define TMR3GIE                                  0x5
#define TMR3GIE_address                          0x092
#define TMR3GIE_position                         0x5
#define TMR3GIE_size                             0x1
#define TMR3GIE_value_mask                       0x20
#define TMR3GIE_clear_mask                       0xDF

#define TMR5GIE                                  0x6
#define TMR5GIE_address                          0x092
#define TMR5GIE_position                         0x6
#define TMR5GIE_size                             0x1
#define TMR5GIE_value_mask                       0x40
#define TMR5GIE_clear_mask                       0xBF

#define OSFIE                                    0x7
#define OSFIE_address                            0x092
#define OSFIE_position                           0x7
#define OSFIE_size                               0x1
#define OSFIE_value_mask                         0x80
#define OSFIE_clear_mask                         0x7F


/*----------------------------------------------------------------------#
| PIE3                                                             0x93 |
#-----------------------------------------------------------------------#
| CCP6IE | CCP5IE | CCP4IE | CCP3IE | TMR6IE | TMR5IE | TMR4IE | TMR3IE |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define PIE3                                     0x0
#define PIE3_address                             0x093
#define PIE3_position                            0x0
#define PIE3_size                                0x8
#define PIE3_value_mask                          0xFF
#define PIE3_clear_mask                          0x0

#define TMR3IE                                   0x0
#define TMR3IE_address                           0x093
#define TMR3IE_position                          0x0
#define TMR3IE_size                              0x1
#define TMR3IE_value_mask                        0x1
#define TMR3IE_clear_mask                        0xFE

#define TMR4IE                                   0x1
#define TMR4IE_address                           0x093
#define TMR4IE_position                          0x1
#define TMR4IE_size                              0x1
#define TMR4IE_value_mask                        0x2
#define TMR4IE_clear_mask                        0xFD

#define TMR5IE                                   0x2
#define TMR5IE_address                           0x093
#define TMR5IE_position                          0x2
#define TMR5IE_size                              0x1
#define TMR5IE_value_mask                        0x4
#define TMR5IE_clear_mask                        0xFB

#define TMR6IE                                   0x3
#define TMR6IE_address                           0x093
#define TMR6IE_position                          0x3
#define TMR6IE_size                              0x1
#define TMR6IE_value_mask                        0x8
#define TMR6IE_clear_mask                        0xF7

#define CCP3IE                                   0x4
#define CCP3IE_address                           0x093
#define CCP3IE_position                          0x4
#define CCP3IE_size                              0x1
#define CCP3IE_value_mask                        0x10
#define CCP3IE_clear_mask                        0xEF

#define CCP4IE                                   0x5
#define CCP4IE_address                           0x093
#define CCP4IE_position                          0x5
#define CCP4IE_size                              0x1
#define CCP4IE_value_mask                        0x20
#define CCP4IE_clear_mask                        0xDF

#define CCP5IE                                   0x6
#define CCP5IE_address                           0x093
#define CCP5IE_position                          0x6
#define CCP5IE_size                              0x1
#define CCP5IE_value_mask                        0x40
#define CCP5IE_clear_mask                        0xBF

#define CCP6IE                                   0x7
#define CCP6IE_address                           0x093
#define CCP6IE_position                          0x7
#define CCP6IE_size                              0x1
#define CCP6IE_value_mask                        0x80
#define CCP6IE_clear_mask                        0x7F


/*---------------------------------------------------------------------#
| PIE4                                                            0x94 |
#----------------------------------------------------------------------#
| CCP10IE | CCP9IE | RC2IE | TX2IE | CCP8IE | CCP7IE | BCL2IE | SSP2IE |
#----------------------------------------------------------------------#
| 7       | 6      | 5     | 4     | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------------*/

#define PIE4                                     0x0
#define PIE4_address                             0x094
#define PIE4_position                            0x0
#define PIE4_size                                0x8
#define PIE4_value_mask                          0xFF
#define PIE4_clear_mask                          0x0

#define SSP2IE                                   0x0
#define SSP2IE_address                           0x094
#define SSP2IE_position                          0x0
#define SSP2IE_size                              0x1
#define SSP2IE_value_mask                        0x1
#define SSP2IE_clear_mask                        0xFE

#define BCL2IE                                   0x1
#define BCL2IE_address                           0x094
#define BCL2IE_position                          0x1
#define BCL2IE_size                              0x1
#define BCL2IE_value_mask                        0x2
#define BCL2IE_clear_mask                        0xFD

#define CCP7IE                                   0x2
#define CCP7IE_address                           0x094
#define CCP7IE_position                          0x2
#define CCP7IE_size                              0x1
#define CCP7IE_value_mask                        0x4
#define CCP7IE_clear_mask                        0xFB

#define CCP8IE                                   0x3
#define CCP8IE_address                           0x094
#define CCP8IE_position                          0x3
#define CCP8IE_size                              0x1
#define CCP8IE_value_mask                        0x8
#define CCP8IE_clear_mask                        0xF7

#define TX2IE                                    0x4
#define TX2IE_address                            0x094
#define TX2IE_position                           0x4
#define TX2IE_size                               0x1
#define TX2IE_value_mask                         0x10
#define TX2IE_clear_mask                         0xEF

#define RC2IE                                    0x5
#define RC2IE_address                            0x094
#define RC2IE_position                           0x5
#define RC2IE_size                               0x1
#define RC2IE_value_mask                         0x20
#define RC2IE_clear_mask                         0xDF

#define CCP9IE                                   0x6
#define CCP9IE_address                           0x094
#define CCP9IE_position                          0x6
#define CCP9IE_size                              0x1
#define CCP9IE_value_mask                        0x40
#define CCP9IE_clear_mask                        0xBF

#define CCP10IE                                  0x7
#define CCP10IE_address                          0x094
#define CCP10IE_position                         0x7
#define CCP10IE_size                             0x1
#define CCP10IE_value_mask                       0x80
#define CCP10IE_clear_mask                       0x7F


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


/*----------------------------------------------------#
| OSCCON                                         0x99 |
#-----------------------------------------------------#
| - | IRCF3 | IRCF2 | IRCF1 | IRCF0 | - | SCS1 | SCS0 |
#-----------------------------------------------------#
| 7 | 6     | 5     | 4     | 3     | 2 | 1    | 0    |
#----------------------------------------------------*/

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


/*----------------------------------------------------#
| OSCSTAT                                        0x9A |
#-----------------------------------------------------#
| SOSCR | - | OSTS | HFIOFR | - | - | LFIOFR | HFIOFS |
#-----------------------------------------------------#
| 7     | 6 | 5    | 4      | 3 | 2 | 1      | 0      |
#----------------------------------------------------*/

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

#define SOSCR                                    0x7
#define SOSCR_address                            0x09A
#define SOSCR_position                           0x7
#define SOSCR_size                               0x1
#define SOSCR_value_mask                         0x80
#define SOSCR_clear_mask                         0x7F

#define T1OSCR                                   0x7
#define T1OSCR_address                           0x09A
#define T1OSCR_position                          0x7
#define T1OSCR_size                              0x1
#define T1OSCR_value_mask                        0x80
#define T1OSCR_clear_mask                        0x7F


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


/*-------------------------------------------------------#
| ADCON0                                            0x9D |
#--------------------------------------------------------#
| - | CHS4 | CHS3 | CHS2 | CHS1 | CHS0 | GO_nDONE | ADON |
#--------------------------------------------------------#
| 7 | 6    | 5    | 4    | 3    | 2    | 1        | 0    |
#-------------------------------------------------------*/

#define ADCON0                                   0x0
#define ADCON0_address                           0x09D
#define ADCON0_position                          0x0
#define ADCON0_size                              0x8
#define ADCON0_value_mask                        0xFF
#define ADCON0_clear_mask                        0x0

#define ADON                                     0x0
#define ADON_address                             0x09D
#define ADON_position                            0x0
#define ADON_size                                0x1
#define ADON_value_mask                          0x1
#define ADON_clear_mask                          0xFE

#define GO_nDONE                                 0x1
#define GO_nDONE_address                         0x09D
#define GO_nDONE_position                        0x1
#define GO_nDONE_size                            0x1
#define GO_nDONE_value_mask                      0x2
#define GO_nDONE_clear_mask                      0xFD

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

#define CHS0                                     0x2
#define CHS0_address                             0x09D
#define CHS0_position                            0x2
#define CHS0_size                                0x1
#define CHS0_value_mask                          0x4
#define CHS0_clear_mask                          0xFB

#define CHS                                      0x2
#define CHS_address                              0x09D
#define CHS_position                             0x2
#define CHS_size                                 0x5
#define CHS_value_mask                           0x7C
#define CHS_clear_mask                           0x83

#define CHS1                                     0x3
#define CHS1_address                             0x09D
#define CHS1_position                            0x3
#define CHS1_size                                0x1
#define CHS1_value_mask                          0x8
#define CHS1_clear_mask                          0xF7

#define CHS2                                     0x4
#define CHS2_address                             0x09D
#define CHS2_position                            0x4
#define CHS2_size                                0x1
#define CHS2_value_mask                          0x10
#define CHS2_clear_mask                          0xEF

#define CHS3                                     0x5
#define CHS3_address                             0x09D
#define CHS3_position                            0x5
#define CHS3_size                                0x1
#define CHS3_value_mask                          0x20
#define CHS3_clear_mask                          0xDF

#define CHS4                                     0x6
#define CHS4_address                             0x09D
#define CHS4_position                            0x6
#define CHS4_size                                0x1
#define CHS4_value_mask                          0x40
#define CHS4_clear_mask                          0xBF


/*---------------------------------------------------------#
| ADCON1                                              0x9E |
#----------------------------------------------------------#
| ADFM | ADCS2 | ADCS1 | ADCS0 | - | - | ADPREF1 | ADPREF0 |
#----------------------------------------------------------#
| 7    | 6     | 5     | 4     | 3 | 2 | 1       | 0       |
#---------------------------------------------------------*/

#define ADCON1                                   0x0
#define ADCON1_address                           0x09E
#define ADCON1_position                          0x0
#define ADCON1_size                              0x8
#define ADCON1_value_mask                        0xFF
#define ADCON1_clear_mask                        0x0

#define ADPREF0                                  0x0
#define ADPREF0_address                          0x09E
#define ADPREF0_position                         0x0
#define ADPREF0_size                             0x1
#define ADPREF0_value_mask                       0x1
#define ADPREF0_clear_mask                       0xFE

#define ADPREF                                   0x0
#define ADPREF_address                           0x09E
#define ADPREF_position                          0x0
#define ADPREF_size                              0x2
#define ADPREF_value_mask                        0x3
#define ADPREF_clear_mask                        0xFC

#define ADPREF1                                  0x1
#define ADPREF1_address                          0x09E
#define ADPREF1_position                         0x1
#define ADPREF1_size                             0x1
#define ADPREF1_value_mask                       0x2
#define ADPREF1_clear_mask                       0xFD

#define ADCS0                                    0x4
#define ADCS0_address                            0x09E
#define ADCS0_position                           0x4
#define ADCS0_size                               0x1
#define ADCS0_value_mask                         0x10
#define ADCS0_clear_mask                         0xEF

#define ADCS                                     0x4
#define ADCS_address                             0x09E
#define ADCS_position                            0x4
#define ADCS_size                                0x3
#define ADCS_value_mask                          0x70
#define ADCS_clear_mask                          0x8F

#define ADCS1                                    0x5
#define ADCS1_address                            0x09E
#define ADCS1_position                           0x5
#define ADCS1_size                               0x1
#define ADCS1_value_mask                         0x20
#define ADCS1_clear_mask                         0xDF

#define ADCS2                                    0x6
#define ADCS2_address                            0x09E
#define ADCS2_position                           0x6
#define ADCS2_size                               0x1
#define ADCS2_value_mask                         0x40
#define ADCS2_clear_mask                         0xBF

#define ADFM                                     0x7
#define ADFM_address                             0x09E
#define ADFM_position                            0x7
#define ADFM_size                                0x1
#define ADFM_value_mask                          0x80
#define ADFM_clear_mask                          0x7F


/*--------------------------------------------------------------#
| LATA                                                    0x10C |
#---------------------------------------------------------------#
| LATA7 | LATA6 | LATA5 | LATA4 | LATA3 | LATA2 | LATA1 | LATA0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

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

#define LATA3                                    0x3
#define LATA3_address                            0x10C
#define LATA3_position                           0x3
#define LATA3_size                               0x1
#define LATA3_value_mask                         0x8
#define LATA3_clear_mask                         0xF7

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

#define LATA6                                    0x6
#define LATA6_address                            0x10C
#define LATA6_position                           0x6
#define LATA6_size                               0x1
#define LATA6_value_mask                         0x40
#define LATA6_clear_mask                         0xBF

#define LATA7                                    0x7
#define LATA7_address                            0x10C
#define LATA7_position                           0x7
#define LATA7_size                               0x1
#define LATA7_value_mask                         0x80
#define LATA7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LATB                                                    0x10D |
#---------------------------------------------------------------#
| LATB7 | LATB6 | LATB5 | LATB4 | LATB3 | LATB2 | LATB1 | LATB0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LATB                                     0x0
#define LATB_address                             0x10D
#define LATB_position                            0x0
#define LATB_size                                0x8
#define LATB_value_mask                          0xFF
#define LATB_clear_mask                          0x0

#define LATB0                                    0x0
#define LATB0_address                            0x10D
#define LATB0_position                           0x0
#define LATB0_size                               0x1
#define LATB0_value_mask                         0x1
#define LATB0_clear_mask                         0xFE

#define LATB1                                    0x1
#define LATB1_address                            0x10D
#define LATB1_position                           0x1
#define LATB1_size                               0x1
#define LATB1_value_mask                         0x2
#define LATB1_clear_mask                         0xFD

#define LATB2                                    0x2
#define LATB2_address                            0x10D
#define LATB2_position                           0x2
#define LATB2_size                               0x1
#define LATB2_value_mask                         0x4
#define LATB2_clear_mask                         0xFB

#define LATB3                                    0x3
#define LATB3_address                            0x10D
#define LATB3_position                           0x3
#define LATB3_size                               0x1
#define LATB3_value_mask                         0x8
#define LATB3_clear_mask                         0xF7

#define LATB4                                    0x4
#define LATB4_address                            0x10D
#define LATB4_position                           0x4
#define LATB4_size                               0x1
#define LATB4_value_mask                         0x10
#define LATB4_clear_mask                         0xEF

#define LATB5                                    0x5
#define LATB5_address                            0x10D
#define LATB5_position                           0x5
#define LATB5_size                               0x1
#define LATB5_value_mask                         0x20
#define LATB5_clear_mask                         0xDF

#define LATB6                                    0x6
#define LATB6_address                            0x10D
#define LATB6_position                           0x6
#define LATB6_size                               0x1
#define LATB6_value_mask                         0x40
#define LATB6_clear_mask                         0xBF

#define LATB7                                    0x7
#define LATB7_address                            0x10D
#define LATB7_position                           0x7
#define LATB7_size                               0x1
#define LATB7_value_mask                         0x80
#define LATB7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LATC                                                    0x10E |
#---------------------------------------------------------------#
| LATC7 | LATC6 | LATC5 | LATC4 | LATC3 | LATC2 | LATC1 | LATC0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LATC                                     0x0
#define LATC_address                             0x10E
#define LATC_position                            0x0
#define LATC_size                                0x8
#define LATC_value_mask                          0xFF
#define LATC_clear_mask                          0x0

#define LATC0                                    0x0
#define LATC0_address                            0x10E
#define LATC0_position                           0x0
#define LATC0_size                               0x1
#define LATC0_value_mask                         0x1
#define LATC0_clear_mask                         0xFE

#define LATC1                                    0x1
#define LATC1_address                            0x10E
#define LATC1_position                           0x1
#define LATC1_size                               0x1
#define LATC1_value_mask                         0x2
#define LATC1_clear_mask                         0xFD

#define LATC2                                    0x2
#define LATC2_address                            0x10E
#define LATC2_position                           0x2
#define LATC2_size                               0x1
#define LATC2_value_mask                         0x4
#define LATC2_clear_mask                         0xFB

#define LATC3                                    0x3
#define LATC3_address                            0x10E
#define LATC3_position                           0x3
#define LATC3_size                               0x1
#define LATC3_value_mask                         0x8
#define LATC3_clear_mask                         0xF7

#define LATC4                                    0x4
#define LATC4_address                            0x10E
#define LATC4_position                           0x4
#define LATC4_size                               0x1
#define LATC4_value_mask                         0x10
#define LATC4_clear_mask                         0xEF

#define LATC5                                    0x5
#define LATC5_address                            0x10E
#define LATC5_position                           0x5
#define LATC5_size                               0x1
#define LATC5_value_mask                         0x20
#define LATC5_clear_mask                         0xDF

#define LATC6                                    0x6
#define LATC6_address                            0x10E
#define LATC6_position                           0x6
#define LATC6_size                               0x1
#define LATC6_value_mask                         0x40
#define LATC6_clear_mask                         0xBF

#define LATC7                                    0x7
#define LATC7_address                            0x10E
#define LATC7_position                           0x7
#define LATC7_size                               0x1
#define LATC7_value_mask                         0x80
#define LATC7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LATD                                                    0x10F |
#---------------------------------------------------------------#
| LATD7 | LATD6 | LATD5 | LATD4 | LATD3 | LATD2 | LATD1 | LATD0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LATD0                                    0x0
#define LATD0_address                            0x10F
#define LATD0_position                           0x0
#define LATD0_size                               0x1
#define LATD0_value_mask                         0x1
#define LATD0_clear_mask                         0xFE

#define LATD                                     0x0
#define LATD_address                             0x10F
#define LATD_position                            0x0
#define LATD_size                                0x8
#define LATD_value_mask                          0xFF
#define LATD_clear_mask                          0x0

#define LATD1                                    0x1
#define LATD1_address                            0x10F
#define LATD1_position                           0x1
#define LATD1_size                               0x1
#define LATD1_value_mask                         0x2
#define LATD1_clear_mask                         0xFD

#define LATD2                                    0x2
#define LATD2_address                            0x10F
#define LATD2_position                           0x2
#define LATD2_size                               0x1
#define LATD2_value_mask                         0x4
#define LATD2_clear_mask                         0xFB

#define LATD3                                    0x3
#define LATD3_address                            0x10F
#define LATD3_position                           0x3
#define LATD3_size                               0x1
#define LATD3_value_mask                         0x8
#define LATD3_clear_mask                         0xF7

#define LATD4                                    0x4
#define LATD4_address                            0x10F
#define LATD4_position                           0x4
#define LATD4_size                               0x1
#define LATD4_value_mask                         0x10
#define LATD4_clear_mask                         0xEF

#define LATD5                                    0x5
#define LATD5_address                            0x10F
#define LATD5_position                           0x5
#define LATD5_size                               0x1
#define LATD5_value_mask                         0x20
#define LATD5_clear_mask                         0xDF

#define LATD6                                    0x6
#define LATD6_address                            0x10F
#define LATD6_position                           0x6
#define LATD6_size                               0x1
#define LATD6_value_mask                         0x40
#define LATD6_clear_mask                         0xBF

#define LATD7                                    0x7
#define LATD7_address                            0x10F
#define LATD7_position                           0x7
#define LATD7_size                               0x1
#define LATD7_value_mask                         0x80
#define LATD7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LATE                                                    0x110 |
#---------------------------------------------------------------#
| LATE7 | LATE6 | LATE5 | LATE4 | LATE3 | LATE2 | LATE1 | LATE0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LATE                                     0x0
#define LATE_address                             0x110
#define LATE_position                            0x0
#define LATE_size                                0x8
#define LATE_value_mask                          0xFF
#define LATE_clear_mask                          0x0

#define LATE0                                    0x0
#define LATE0_address                            0x110
#define LATE0_position                           0x0
#define LATE0_size                               0x1
#define LATE0_value_mask                         0x1
#define LATE0_clear_mask                         0xFE

#define LATE1                                    0x1
#define LATE1_address                            0x110
#define LATE1_position                           0x1
#define LATE1_size                               0x1
#define LATE1_value_mask                         0x2
#define LATE1_clear_mask                         0xFD

#define LATE2                                    0x2
#define LATE2_address                            0x110
#define LATE2_position                           0x2
#define LATE2_size                               0x1
#define LATE2_value_mask                         0x4
#define LATE2_clear_mask                         0xFB

#define LATE3                                    0x3
#define LATE3_address                            0x110
#define LATE3_position                           0x3
#define LATE3_size                               0x1
#define LATE3_value_mask                         0x8
#define LATE3_clear_mask                         0xF7

#define LATE4                                    0x4
#define LATE4_address                            0x110
#define LATE4_position                           0x4
#define LATE4_size                               0x1
#define LATE4_value_mask                         0x10
#define LATE4_clear_mask                         0xEF

#define LATE5                                    0x5
#define LATE5_address                            0x110
#define LATE5_position                           0x5
#define LATE5_size                               0x1
#define LATE5_value_mask                         0x20
#define LATE5_clear_mask                         0xDF

#define LATE6                                    0x6
#define LATE6_address                            0x110
#define LATE6_position                           0x6
#define LATE6_size                               0x1
#define LATE6_value_mask                         0x40
#define LATE6_clear_mask                         0xBF

#define LATE7                                    0x7
#define LATE7_address                            0x110
#define LATE7_position                           0x7
#define LATE7_size                               0x1
#define LATE7_value_mask                         0x80
#define LATE7_clear_mask                         0x7F


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


/*-------------------------------------------#
| APFCON                               0x11D |
#--------------------------------------------#
| - | - | - | - | - | - | T3CKISEL | CCP2SEL |
#--------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1        | 0       |
#-------------------------------------------*/

#define APFCON                                   0x0
#define APFCON_address                           0x11D
#define APFCON_position                          0x0
#define APFCON_size                              0x8
#define APFCON_value_mask                        0xFF
#define APFCON_clear_mask                        0x0

#define CCP2SEL                                  0x0
#define CCP2SEL_address                          0x11D
#define CCP2SEL_position                         0x0
#define CCP2SEL_size                             0x1
#define CCP2SEL_value_mask                       0x1
#define CCP2SEL_clear_mask                       0xFE

#define T3CKISEL                                 0x1
#define T3CKISEL_address                         0x11D
#define T3CKISEL_position                        0x1
#define T3CKISEL_size                            0x1
#define T3CKISEL_value_mask                      0x2
#define T3CKISEL_clear_mask                      0xFD


/*--------------------------------------------------#
| ANSELA                                      0x18C |
#---------------------------------------------------#
| - | - | ANSA5 | - | ANSA3 | ANSA2 | ANSA1 | ANSA0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4 | 3     | 2     | 1     | 0     |
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
#define ANSELA_size                              0x6
#define ANSELA_value_mask                        0x3F
#define ANSELA_clear_mask                        0xC0

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

#define ANSA3                                    0x3
#define ANSA3_address                            0x18C
#define ANSA3_position                           0x3
#define ANSA3_size                               0x1
#define ANSA3_value_mask                         0x8
#define ANSA3_clear_mask                         0xF7

#define ANSA5                                    0x5
#define ANSA5_address                            0x18C
#define ANSA5_position                           0x5
#define ANSA5_size                               0x1
#define ANSA5_value_mask                         0x20
#define ANSA5_clear_mask                         0xDF


/*------------------------------------------------------#
| ANSELB                                          0x18D |
#-------------------------------------------------------#
| - | - | ANSB5 | ANSB4 | ANSB3 | ANSB2 | ANSB1 | ANSB0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define ANSB0                                    0x0
#define ANSB0_address                            0x18D
#define ANSB0_position                           0x0
#define ANSB0_size                               0x1
#define ANSB0_value_mask                         0x1
#define ANSB0_clear_mask                         0xFE

#define ANSELB                                   0x0
#define ANSELB_address                           0x18D
#define ANSELB_position                          0x0
#define ANSELB_size                              0x6
#define ANSELB_value_mask                        0x3F
#define ANSELB_clear_mask                        0xC0

#define ANSB1                                    0x1
#define ANSB1_address                            0x18D
#define ANSB1_position                           0x1
#define ANSB1_size                               0x1
#define ANSB1_value_mask                         0x2
#define ANSB1_clear_mask                         0xFD

#define ANSB2                                    0x2
#define ANSB2_address                            0x18D
#define ANSB2_position                           0x2
#define ANSB2_size                               0x1
#define ANSB2_value_mask                         0x4
#define ANSB2_clear_mask                         0xFB

#define ANSB3                                    0x3
#define ANSB3_address                            0x18D
#define ANSB3_position                           0x3
#define ANSB3_size                               0x1
#define ANSB3_value_mask                         0x8
#define ANSB3_clear_mask                         0xF7

#define ANSB4                                    0x4
#define ANSB4_address                            0x18D
#define ANSB4_position                           0x4
#define ANSB4_size                               0x1
#define ANSB4_value_mask                         0x10
#define ANSB4_clear_mask                         0xEF

#define ANSB5                                    0x5
#define ANSB5_address                            0x18D
#define ANSB5_position                           0x5
#define ANSB5_size                               0x1
#define ANSB5_value_mask                         0x20
#define ANSB5_clear_mask                         0xDF


/*----------------------------------------------#
| ANSELD                                  0x18F |
#-----------------------------------------------#
| - | - | - | - | ANSD3 | ANSD2 | ANSD1 | ANSD0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------*/

#define ANSELD                                   0x0
#define ANSELD_address                           0x18F
#define ANSELD_position                          0x0
#define ANSELD_size                              0x8
#define ANSELD_value_mask                        0xFF
#define ANSELD_clear_mask                        0x0

#define ANSD0                                    0x0
#define ANSD0_address                            0x18F
#define ANSD0_position                           0x0
#define ANSD0_size                               0x1
#define ANSD0_value_mask                         0x1
#define ANSD0_clear_mask                         0xFE

#define ANSD1                                    0x1
#define ANSD1_address                            0x18F
#define ANSD1_position                           0x1
#define ANSD1_size                               0x1
#define ANSD1_value_mask                         0x2
#define ANSD1_clear_mask                         0xFD

#define ANSD2                                    0x2
#define ANSD2_address                            0x18F
#define ANSD2_position                           0x2
#define ANSD2_size                               0x1
#define ANSD2_value_mask                         0x4
#define ANSD2_clear_mask                         0xFB

#define ANSD3                                    0x3
#define ANSD3_address                            0x18F
#define ANSD3_position                           0x3
#define ANSD3_size                               0x1
#define ANSD3_value_mask                         0x8
#define ANSD3_clear_mask                         0xF7


/*------------------------------------------#
| ANSELE                              0x190 |
#-------------------------------------------#
| - | - | - | - | - | ANSE2 | ANSE1 | ANSE0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------*/

#define ANSELE                                   0x0
#define ANSELE_address                           0x190
#define ANSELE_position                          0x0
#define ANSELE_size                              0x3
#define ANSELE_value_mask                        0x7
#define ANSELE_clear_mask                        0xF8

#define ANSE0                                    0x0
#define ANSE0_address                            0x190
#define ANSE0_position                           0x0
#define ANSE0_size                               0x1
#define ANSE0_value_mask                         0x1
#define ANSE0_clear_mask                         0xFE

#define ANSE1                                    0x1
#define ANSE1_address                            0x190
#define ANSE1_position                           0x1
#define ANSE1_size                               0x1
#define ANSE1_value_mask                         0x2
#define ANSE1_clear_mask                         0xFD

#define ANSE2                                    0x2
#define ANSE2_address                            0x190
#define ANSE2_position                           0x2
#define ANSE2_size                               0x1
#define ANSE2_value_mask                         0x4
#define ANSE2_clear_mask                         0xFB


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


/*-----------------------------------#
| VREGCON                      0x197 |
#------------------------------------#
| - | - | - | - | - | - | VREGPM | - |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1      | 0 |
#-----------------------------------*/

#define VREGCON                                  0x0
#define VREGCON_address                          0x197
#define VREGCON_position                         0x0
#define VREGCON_size                             0x8
#define VREGCON_value_mask                       0xFF
#define VREGCON_clear_mask                       0x0

#define VREGPM                                   0x1
#define VREGPM_address                           0x197
#define VREGPM_position                          0x1
#define VREGPM_size                              0x1
#define VREGPM_value_mask                        0x2
#define VREGPM_clear_mask                        0xFD


/*------------------------------#
| RC1REG                  0x199 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RC1REG                                   0x0
#define RC1REG_address                           0x199
#define RC1REG_position                          0x0
#define RC1REG_size                              0x8
#define RC1REG_value_mask                        0xFF
#define RC1REG_clear_mask                        0x0


/*------------------------------#
| TX1REG                  0x19A |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TX1REG                                   0x0
#define TX1REG_address                           0x19A
#define TX1REG_position                          0x0
#define TX1REG_size                              0x8
#define TX1REG_value_mask                        0xFF
#define TX1REG_clear_mask                        0x0


/*------------------------------#
| SP1BRGL                 0x19B |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SP1BRGL                                  0x0
#define SP1BRGL_address                          0x19B
#define SP1BRGL_position                         0x0
#define SP1BRGL_size                             0x8
#define SP1BRGL_value_mask                       0xFF
#define SP1BRGL_clear_mask                       0x0


/*------------------------------#
| SP1BRGH                 0x19C |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SP1BRGH                                  0x0
#define SP1BRGH_address                          0x19C
#define SP1BRGH_position                         0x0
#define SP1BRGH_size                             0x8
#define SP1BRGH_value_mask                       0xFF
#define SP1BRGH_clear_mask                       0x0


/*--------------------------------------------------------------------------------------------------------------#
| RC1STA                                                                                                  0x19D |
#---------------------------------------------------------------------------------------------------------------#
| RC1STA_SPEN | RC1STA_RX9 | RC1STA_SREN | RC1STA_CREN | RC1STA_ADDEN | RC1STA_FERR | RC1STA_OERR | RC1STA_RX9D |
#---------------------------------------------------------------------------------------------------------------#
| 7           | 6          | 5           | 4           | 3            | 2           | 1           | 0           |
#--------------------------------------------------------------------------------------------------------------*/

#define RC1STA                                   0x0
#define RC1STA_address                           0x19D
#define RC1STA_position                          0x0
#define RC1STA_size                              0x8
#define RC1STA_value_mask                        0xFF
#define RC1STA_clear_mask                        0x0

#define RC1STA_RX9D                              0x0
#define RC1STA_RX9D_address                      0x19D
#define RC1STA_RX9D_position                     0x0
#define RC1STA_RX9D_size                         0x1
#define RC1STA_RX9D_value_mask                   0x1
#define RC1STA_RX9D_clear_mask                   0xFE

#define RC1STA_OERR                              0x1
#define RC1STA_OERR_address                      0x19D
#define RC1STA_OERR_position                     0x1
#define RC1STA_OERR_size                         0x1
#define RC1STA_OERR_value_mask                   0x2
#define RC1STA_OERR_clear_mask                   0xFD

#define RC1STA_FERR                              0x2
#define RC1STA_FERR_address                      0x19D
#define RC1STA_FERR_position                     0x2
#define RC1STA_FERR_size                         0x1
#define RC1STA_FERR_value_mask                   0x4
#define RC1STA_FERR_clear_mask                   0xFB

#define RC1STA_ADDEN                             0x3
#define RC1STA_ADDEN_address                     0x19D
#define RC1STA_ADDEN_position                    0x3
#define RC1STA_ADDEN_size                        0x1
#define RC1STA_ADDEN_value_mask                  0x8
#define RC1STA_ADDEN_clear_mask                  0xF7

#define RC1STA_CREN                              0x4
#define RC1STA_CREN_address                      0x19D
#define RC1STA_CREN_position                     0x4
#define RC1STA_CREN_size                         0x1
#define RC1STA_CREN_value_mask                   0x10
#define RC1STA_CREN_clear_mask                   0xEF

#define RC1STA_SREN                              0x5
#define RC1STA_SREN_address                      0x19D
#define RC1STA_SREN_position                     0x5
#define RC1STA_SREN_size                         0x1
#define RC1STA_SREN_value_mask                   0x20
#define RC1STA_SREN_clear_mask                   0xDF

#define RC1STA_RX9                               0x6
#define RC1STA_RX9_address                       0x19D
#define RC1STA_RX9_position                      0x6
#define RC1STA_RX9_size                          0x1
#define RC1STA_RX9_value_mask                    0x40
#define RC1STA_RX9_clear_mask                    0xBF

#define RC1STA_SPEN                              0x7
#define RC1STA_SPEN_address                      0x19D
#define RC1STA_SPEN_position                     0x7
#define RC1STA_SPEN_size                         0x1
#define RC1STA_SPEN_value_mask                   0x80
#define RC1STA_SPEN_clear_mask                   0x7F


/*--------------------------------------------------------------------------------------------------------------#
| TX1STA                                                                                                  0x19E |
#---------------------------------------------------------------------------------------------------------------#
| TX1STA_CSRC | TX1STA_TX9 | TX1STA_TXEN | TX1STA_SYNC | TX1STA_SENDB | TX1STA_BRGH | TX1STA_TRMT | TX1STA_TX9D |
#---------------------------------------------------------------------------------------------------------------#
| 7           | 6          | 5           | 4           | 3            | 2           | 1           | 0           |
#--------------------------------------------------------------------------------------------------------------*/

#define TX1STA                                   0x0
#define TX1STA_address                           0x19E
#define TX1STA_position                          0x0
#define TX1STA_size                              0x8
#define TX1STA_value_mask                        0xFF
#define TX1STA_clear_mask                        0x0

#define TX1STA_TX9D                              0x0
#define TX1STA_TX9D_address                      0x19E
#define TX1STA_TX9D_position                     0x0
#define TX1STA_TX9D_size                         0x1
#define TX1STA_TX9D_value_mask                   0x1
#define TX1STA_TX9D_clear_mask                   0xFE

#define TX1STA_TRMT                              0x1
#define TX1STA_TRMT_address                      0x19E
#define TX1STA_TRMT_position                     0x1
#define TX1STA_TRMT_size                         0x1
#define TX1STA_TRMT_value_mask                   0x2
#define TX1STA_TRMT_clear_mask                   0xFD

#define TX1STA_BRGH                              0x2
#define TX1STA_BRGH_address                      0x19E
#define TX1STA_BRGH_position                     0x2
#define TX1STA_BRGH_size                         0x1
#define TX1STA_BRGH_value_mask                   0x4
#define TX1STA_BRGH_clear_mask                   0xFB

#define TX1STA_SENDB                             0x3
#define TX1STA_SENDB_address                     0x19E
#define TX1STA_SENDB_position                    0x3
#define TX1STA_SENDB_size                        0x1
#define TX1STA_SENDB_value_mask                  0x8
#define TX1STA_SENDB_clear_mask                  0xF7

#define TX1STA_SYNC                              0x4
#define TX1STA_SYNC_address                      0x19E
#define TX1STA_SYNC_position                     0x4
#define TX1STA_SYNC_size                         0x1
#define TX1STA_SYNC_value_mask                   0x10
#define TX1STA_SYNC_clear_mask                   0xEF

#define TX1STA_TXEN                              0x5
#define TX1STA_TXEN_address                      0x19E
#define TX1STA_TXEN_position                     0x5
#define TX1STA_TXEN_size                         0x1
#define TX1STA_TXEN_value_mask                   0x20
#define TX1STA_TXEN_clear_mask                   0xDF

#define TX1STA_TX9                               0x6
#define TX1STA_TX9_address                       0x19E
#define TX1STA_TX9_position                      0x6
#define TX1STA_TX9_size                          0x1
#define TX1STA_TX9_value_mask                    0x40
#define TX1STA_TX9_clear_mask                    0xBF

#define TX1STA_CSRC                              0x7
#define TX1STA_CSRC_address                      0x19E
#define TX1STA_CSRC_position                     0x7
#define TX1STA_CSRC_size                         0x1
#define TX1STA_CSRC_value_mask                   0x80
#define TX1STA_CSRC_clear_mask                   0x7F


/*----------------------------------------------------------------------------------------------------------#
| BAUD1CON                                                                                            0x19F |
#-----------------------------------------------------------------------------------------------------------#
| BAUD1CON_ABDOVF | BAUD1CON_RCIDL | - | BAUD1CON_SCKP | BAUD1CON_BRG16 | - | BAUD1CON_WUE | BAUD1CON_ABDEN |
#-----------------------------------------------------------------------------------------------------------#
| 7               | 6              | 5 | 4             | 3              | 2 | 1            | 0              |
#----------------------------------------------------------------------------------------------------------*/

#define BAUD1CON                                 0x0
#define BAUD1CON_address                         0x19F
#define BAUD1CON_position                        0x0
#define BAUD1CON_size                            0x8
#define BAUD1CON_value_mask                      0xFF
#define BAUD1CON_clear_mask                      0x0

#define BAUD1CON_ABDEN                           0x0
#define BAUD1CON_ABDEN_address                   0x19F
#define BAUD1CON_ABDEN_position                  0x0
#define BAUD1CON_ABDEN_size                      0x1
#define BAUD1CON_ABDEN_value_mask                0x1
#define BAUD1CON_ABDEN_clear_mask                0xFE

#define BAUD1CON_WUE                             0x1
#define BAUD1CON_WUE_address                     0x19F
#define BAUD1CON_WUE_position                    0x1
#define BAUD1CON_WUE_size                        0x1
#define BAUD1CON_WUE_value_mask                  0x2
#define BAUD1CON_WUE_clear_mask                  0xFD

#define BAUD1CON_BRG16                           0x3
#define BAUD1CON_BRG16_address                   0x19F
#define BAUD1CON_BRG16_position                  0x3
#define BAUD1CON_BRG16_size                      0x1
#define BAUD1CON_BRG16_value_mask                0x8
#define BAUD1CON_BRG16_clear_mask                0xF7

#define BAUD1CON_SCKP                            0x4
#define BAUD1CON_SCKP_address                    0x19F
#define BAUD1CON_SCKP_position                   0x4
#define BAUD1CON_SCKP_size                       0x1
#define BAUD1CON_SCKP_value_mask                 0x10
#define BAUD1CON_SCKP_clear_mask                 0xEF

#define BAUD1CON_RCIDL                           0x6
#define BAUD1CON_RCIDL_address                   0x19F
#define BAUD1CON_RCIDL_position                  0x6
#define BAUD1CON_RCIDL_size                      0x1
#define BAUD1CON_RCIDL_value_mask                0x40
#define BAUD1CON_RCIDL_clear_mask                0xBF

#define BAUD1CON_ABDOVF                          0x7
#define BAUD1CON_ABDOVF_address                  0x19F
#define BAUD1CON_ABDOVF_position                 0x7
#define BAUD1CON_ABDOVF_size                     0x1
#define BAUD1CON_ABDOVF_value_mask               0x80
#define BAUD1CON_ABDOVF_clear_mask               0x7F


/*--------------------------------------------------------------#
| WPUB                                                    0x20D |
#---------------------------------------------------------------#
| WPUB7 | WPUB6 | WPUB5 | WPUB4 | WPUB3 | WPUB2 | WPUB1 | WPUB0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define WPUB0                                    0x0
#define WPUB0_address                            0x20D
#define WPUB0_position                           0x0
#define WPUB0_size                               0x1
#define WPUB0_value_mask                         0x1
#define WPUB0_clear_mask                         0xFE

#define WPUB                                     0x0
#define WPUB_address                             0x20D
#define WPUB_position                            0x0
#define WPUB_size                                0x8
#define WPUB_value_mask                          0xFF
#define WPUB_clear_mask                          0x0

#define WPUB1                                    0x1
#define WPUB1_address                            0x20D
#define WPUB1_position                           0x1
#define WPUB1_size                               0x1
#define WPUB1_value_mask                         0x2
#define WPUB1_clear_mask                         0xFD

#define WPUB2                                    0x2
#define WPUB2_address                            0x20D
#define WPUB2_position                           0x2
#define WPUB2_size                               0x1
#define WPUB2_value_mask                         0x4
#define WPUB2_clear_mask                         0xFB

#define WPUB3                                    0x3
#define WPUB3_address                            0x20D
#define WPUB3_position                           0x3
#define WPUB3_size                               0x1
#define WPUB3_value_mask                         0x8
#define WPUB3_clear_mask                         0xF7

#define WPUB4                                    0x4
#define WPUB4_address                            0x20D
#define WPUB4_position                           0x4
#define WPUB4_size                               0x1
#define WPUB4_value_mask                         0x10
#define WPUB4_clear_mask                         0xEF

#define WPUB5                                    0x5
#define WPUB5_address                            0x20D
#define WPUB5_position                           0x5
#define WPUB5_size                               0x1
#define WPUB5_value_mask                         0x20
#define WPUB5_clear_mask                         0xDF

#define WPUB6                                    0x6
#define WPUB6_address                            0x20D
#define WPUB6_position                           0x6
#define WPUB6_size                               0x1
#define WPUB6_value_mask                         0x40
#define WPUB6_clear_mask                         0xBF

#define WPUB7                                    0x7
#define WPUB7_address                            0x20D
#define WPUB7_position                           0x7
#define WPUB7_size                               0x1
#define WPUB7_value_mask                         0x80
#define WPUB7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| WPUD                                                    0x20F |
#---------------------------------------------------------------#
| WPUD7 | WPUD6 | WPUD5 | WPUD4 | WPUD3 | WPUD2 | WPUD1 | WPUD0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define WPUD                                     0x0
#define WPUD_address                             0x20F
#define WPUD_position                            0x0
#define WPUD_size                                0x8
#define WPUD_value_mask                          0xFF
#define WPUD_clear_mask                          0x0

#define WPUD0                                    0x0
#define WPUD0_address                            0x20F
#define WPUD0_position                           0x0
#define WPUD0_size                               0x1
#define WPUD0_value_mask                         0x1
#define WPUD0_clear_mask                         0xFE

#define WPUD1                                    0x1
#define WPUD1_address                            0x20F
#define WPUD1_position                           0x1
#define WPUD1_size                               0x1
#define WPUD1_value_mask                         0x2
#define WPUD1_clear_mask                         0xFD

#define WPUD2                                    0x2
#define WPUD2_address                            0x20F
#define WPUD2_position                           0x2
#define WPUD2_size                               0x1
#define WPUD2_value_mask                         0x4
#define WPUD2_clear_mask                         0xFB

#define WPUD3                                    0x3
#define WPUD3_address                            0x20F
#define WPUD3_position                           0x3
#define WPUD3_size                               0x1
#define WPUD3_value_mask                         0x8
#define WPUD3_clear_mask                         0xF7

#define WPUD4                                    0x4
#define WPUD4_address                            0x20F
#define WPUD4_position                           0x4
#define WPUD4_size                               0x1
#define WPUD4_value_mask                         0x10
#define WPUD4_clear_mask                         0xEF

#define WPUD5                                    0x5
#define WPUD5_address                            0x20F
#define WPUD5_position                           0x5
#define WPUD5_size                               0x1
#define WPUD5_value_mask                         0x20
#define WPUD5_clear_mask                         0xDF

#define WPUD6                                    0x6
#define WPUD6_address                            0x20F
#define WPUD6_position                           0x6
#define WPUD6_size                               0x1
#define WPUD6_value_mask                         0x40
#define WPUD6_clear_mask                         0xBF

#define WPUD7                                    0x7
#define WPUD7_address                            0x20F
#define WPUD7_position                           0x7
#define WPUD7_size                               0x1
#define WPUD7_value_mask                         0x80
#define WPUD7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| WPUE                                                    0x210 |
#---------------------------------------------------------------#
| WPUE7 | WPUE6 | WPUE5 | WPUE4 | WPUE3 | WPUE2 | WPUE1 | WPUE0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define WPUE                                     0x0
#define WPUE_address                             0x210
#define WPUE_position                            0x0
#define WPUE_size                                0x8
#define WPUE_value_mask                          0xFF
#define WPUE_clear_mask                          0x0

#define WPUE0                                    0x0
#define WPUE0_address                            0x210
#define WPUE0_position                           0x0
#define WPUE0_size                               0x1
#define WPUE0_value_mask                         0x1
#define WPUE0_clear_mask                         0xFE

#define WPUE1                                    0x1
#define WPUE1_address                            0x210
#define WPUE1_position                           0x1
#define WPUE1_size                               0x1
#define WPUE1_value_mask                         0x2
#define WPUE1_clear_mask                         0xFD

#define WPUE2                                    0x2
#define WPUE2_address                            0x210
#define WPUE2_position                           0x2
#define WPUE2_size                               0x1
#define WPUE2_value_mask                         0x4
#define WPUE2_clear_mask                         0xFB

#define WPUE3                                    0x3
#define WPUE3_address                            0x210
#define WPUE3_position                           0x3
#define WPUE3_size                               0x1
#define WPUE3_value_mask                         0x8
#define WPUE3_clear_mask                         0xF7

#define WPUE4                                    0x4
#define WPUE4_address                            0x210
#define WPUE4_position                           0x4
#define WPUE4_size                               0x1
#define WPUE4_value_mask                         0x10
#define WPUE4_clear_mask                         0xEF

#define WPUE5                                    0x5
#define WPUE5_address                            0x210
#define WPUE5_position                           0x5
#define WPUE5_size                               0x1
#define WPUE5_value_mask                         0x20
#define WPUE5_clear_mask                         0xDF

#define WPUE6                                    0x6
#define WPUE6_address                            0x210
#define WPUE6_position                           0x6
#define WPUE6_size                               0x1
#define WPUE6_value_mask                         0x40
#define WPUE6_clear_mask                         0xBF

#define WPUE7                                    0x7
#define WPUE7_address                            0x210
#define WPUE7_position                           0x7
#define WPUE7_size                               0x1
#define WPUE7_value_mask                         0x80
#define WPUE7_clear_mask                         0x7F


/*------------------------------#
| SSP1BUF                 0x211 |
#-------------------------------#
| SSP1BUF_SSPBUF                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1BUF                                  0x0
#define SSP1BUF_address                          0x211
#define SSP1BUF_position                         0x0
#define SSP1BUF_size                             0x8
#define SSP1BUF_value_mask                       0xFF
#define SSP1BUF_clear_mask                       0x0

#define SSP1BUF_SSPBUF                           0x0
#define SSP1BUF_SSPBUF_address                   0x211
#define SSP1BUF_SSPBUF_position                  0x0
#define SSP1BUF_SSPBUF_size                      0x8
#define SSP1BUF_SSPBUF_value_mask                0xFF
#define SSP1BUF_SSPBUF_clear_mask                0x0


/*------------------------------#
| SSP1ADD                 0x212 |
#-------------------------------#
| SSP1ADD_SSPADD                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1ADD                                  0x0
#define SSP1ADD_address                          0x212
#define SSP1ADD_position                         0x0
#define SSP1ADD_size                             0x8
#define SSP1ADD_value_mask                       0xFF
#define SSP1ADD_clear_mask                       0x0

#define SSP1ADD_SSPADD                           0x0
#define SSP1ADD_SSPADD_address                   0x212
#define SSP1ADD_SSPADD_position                  0x0
#define SSP1ADD_SSPADD_size                      0x8
#define SSP1ADD_SSPADD_value_mask                0xFF
#define SSP1ADD_SSPADD_clear_mask                0x0


/*------------------------------#
| SSP1MSK                 0x213 |
#-------------------------------#
| SSP1MSK_SSPMSK                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1MSK                                  0x0
#define SSP1MSK_address                          0x213
#define SSP1MSK_position                         0x0
#define SSP1MSK_size                             0x8
#define SSP1MSK_value_mask                       0xFF
#define SSP1MSK_clear_mask                       0x0

#define SSP1MSK_SSPMSK                           0x0
#define SSP1MSK_SSPMSK_address                   0x213
#define SSP1MSK_SSPMSK_position                  0x0
#define SSP1MSK_SSPMSK_size                      0x8
#define SSP1MSK_SSPMSK_value_mask                0xFF
#define SSP1MSK_SSPMSK_clear_mask                0x0


/*------------------------------------------------------------------------------------------------------------------#
| SSP1STAT                                                                                                    0x214 |
#-------------------------------------------------------------------------------------------------------------------#
| SSP1STAT_SMP | SSP1STAT_CKE | SSP1STAT_D_nA | SSP1STAT_P | SSP1STAT_S | SSP1STAT_R_nW | SSP1STAT_UA | SSP1STAT_BF |
#-------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5             | 4          | 3          | 2             | 1           | 0           |
#------------------------------------------------------------------------------------------------------------------*/

#define SSP1STAT                                 0x0
#define SSP1STAT_address                         0x214
#define SSP1STAT_position                        0x0
#define SSP1STAT_size                            0x8
#define SSP1STAT_value_mask                      0xFF
#define SSP1STAT_clear_mask                      0x0

#define SSP1STAT_BF                              0x0
#define SSP1STAT_BF_address                      0x214
#define SSP1STAT_BF_position                     0x0
#define SSP1STAT_BF_size                         0x1
#define SSP1STAT_BF_value_mask                   0x1
#define SSP1STAT_BF_clear_mask                   0xFE

#define SSP1STAT_UA                              0x1
#define SSP1STAT_UA_address                      0x214
#define SSP1STAT_UA_position                     0x1
#define SSP1STAT_UA_size                         0x1
#define SSP1STAT_UA_value_mask                   0x2
#define SSP1STAT_UA_clear_mask                   0xFD

#define SSP1STAT_R_nW                            0x2
#define SSP1STAT_R_nW_address                    0x214
#define SSP1STAT_R_nW_position                   0x2
#define SSP1STAT_R_nW_size                       0x1
#define SSP1STAT_R_nW_value_mask                 0x4
#define SSP1STAT_R_nW_clear_mask                 0xFB

#define SSP1STAT_S                               0x3
#define SSP1STAT_S_address                       0x214
#define SSP1STAT_S_position                      0x3
#define SSP1STAT_S_size                          0x1
#define SSP1STAT_S_value_mask                    0x8
#define SSP1STAT_S_clear_mask                    0xF7

#define SSP1STAT_P                               0x4
#define SSP1STAT_P_address                       0x214
#define SSP1STAT_P_position                      0x4
#define SSP1STAT_P_size                          0x1
#define SSP1STAT_P_value_mask                    0x10
#define SSP1STAT_P_clear_mask                    0xEF

#define SSP1STAT_D_nA                            0x5
#define SSP1STAT_D_nA_address                    0x214
#define SSP1STAT_D_nA_position                   0x5
#define SSP1STAT_D_nA_size                       0x1
#define SSP1STAT_D_nA_value_mask                 0x20
#define SSP1STAT_D_nA_clear_mask                 0xDF

#define SSP1STAT_CKE                             0x6
#define SSP1STAT_CKE_address                     0x214
#define SSP1STAT_CKE_position                    0x6
#define SSP1STAT_CKE_size                        0x1
#define SSP1STAT_CKE_value_mask                  0x40
#define SSP1STAT_CKE_clear_mask                  0xBF

#define SSP1STAT_SMP                             0x7
#define SSP1STAT_SMP_address                     0x214
#define SSP1STAT_SMP_position                    0x7
#define SSP1STAT_SMP_size                        0x1
#define SSP1STAT_SMP_value_mask                  0x80
#define SSP1STAT_SMP_clear_mask                  0x7F


/*-----------------------------------------------------------------------------------------------------------------------------------#
| SSP1CON1                                                                                                                     0x215 |
#------------------------------------------------------------------------------------------------------------------------------------#
| SSP1CON1_WCOL | SSP1CON1_SSPOV | SSP1CON1_SSPEN | SSP1CON1_CKP | SSP1CON1_SSPM3 | SSP1CON1_SSPM2 | SSP1CON1_SSPM1 | SSP1CON1_SSPM0 |
#------------------------------------------------------------------------------------------------------------------------------------#
| 7             | 6              | 5              | 4            | 3              | 2              | 1              | 0              |
#-----------------------------------------------------------------------------------------------------------------------------------*/

#define SSP1CON1                                 0x0
#define SSP1CON1_address                         0x215
#define SSP1CON1_position                        0x0
#define SSP1CON1_size                            0x8
#define SSP1CON1_value_mask                      0xFF
#define SSP1CON1_clear_mask                      0x0

#define SSP1CON1_SSPM                            0x0
#define SSP1CON1_SSPM_address                    0x215
#define SSP1CON1_SSPM_position                   0x0
#define SSP1CON1_SSPM_size                       0x4
#define SSP1CON1_SSPM_value_mask                 0xF
#define SSP1CON1_SSPM_clear_mask                 0xF0

#define SSP1CON1_SSPM0                           0x0
#define SSP1CON1_SSPM0_address                   0x215
#define SSP1CON1_SSPM0_position                  0x0
#define SSP1CON1_SSPM0_size                      0x1
#define SSP1CON1_SSPM0_value_mask                0x1
#define SSP1CON1_SSPM0_clear_mask                0xFE

#define SSP1CON1_SSPM1                           0x1
#define SSP1CON1_SSPM1_address                   0x215
#define SSP1CON1_SSPM1_position                  0x1
#define SSP1CON1_SSPM1_size                      0x1
#define SSP1CON1_SSPM1_value_mask                0x2
#define SSP1CON1_SSPM1_clear_mask                0xFD

#define SSP1CON1_SSPM2                           0x2
#define SSP1CON1_SSPM2_address                   0x215
#define SSP1CON1_SSPM2_position                  0x2
#define SSP1CON1_SSPM2_size                      0x1
#define SSP1CON1_SSPM2_value_mask                0x4
#define SSP1CON1_SSPM2_clear_mask                0xFB

#define SSP1CON1_SSPM3                           0x3
#define SSP1CON1_SSPM3_address                   0x215
#define SSP1CON1_SSPM3_position                  0x3
#define SSP1CON1_SSPM3_size                      0x1
#define SSP1CON1_SSPM3_value_mask                0x8
#define SSP1CON1_SSPM3_clear_mask                0xF7

#define SSP1CON1_CKP                             0x4
#define SSP1CON1_CKP_address                     0x215
#define SSP1CON1_CKP_position                    0x4
#define SSP1CON1_CKP_size                        0x1
#define SSP1CON1_CKP_value_mask                  0x10
#define SSP1CON1_CKP_clear_mask                  0xEF

#define SSP1CON1_SSPEN                           0x5
#define SSP1CON1_SSPEN_address                   0x215
#define SSP1CON1_SSPEN_position                  0x5
#define SSP1CON1_SSPEN_size                      0x1
#define SSP1CON1_SSPEN_value_mask                0x20
#define SSP1CON1_SSPEN_clear_mask                0xDF

#define SSP1CON1_SSPOV                           0x6
#define SSP1CON1_SSPOV_address                   0x215
#define SSP1CON1_SSPOV_position                  0x6
#define SSP1CON1_SSPOV_size                      0x1
#define SSP1CON1_SSPOV_value_mask                0x40
#define SSP1CON1_SSPOV_clear_mask                0xBF

#define SSP1CON1_WCOL                            0x7
#define SSP1CON1_WCOL_address                    0x215
#define SSP1CON1_WCOL_position                   0x7
#define SSP1CON1_WCOL_size                       0x1
#define SSP1CON1_WCOL_value_mask                 0x80
#define SSP1CON1_WCOL_clear_mask                 0x7F


/*---------------------------------------------------------------------------------------------------------------------------------#
| SSP1CON2                                                                                                                   0x216 |
#----------------------------------------------------------------------------------------------------------------------------------#
| SSP1CON2_GCEN | SSP1CON2_ACKSTAT | SSP1CON2_ACKDT | SSP1CON2_ACKEN | SSP1CON2_RCEN | SSP1CON2_PEN | SSP1CON2_RSEN | SSP1CON2_SEN |
#----------------------------------------------------------------------------------------------------------------------------------#
| 7             | 6                | 5              | 4              | 3             | 2            | 1             | 0            |
#---------------------------------------------------------------------------------------------------------------------------------*/

#define SSP1CON2                                 0x0
#define SSP1CON2_address                         0x216
#define SSP1CON2_position                        0x0
#define SSP1CON2_size                            0x8
#define SSP1CON2_value_mask                      0xFF
#define SSP1CON2_clear_mask                      0x0

#define SSP1CON2_SEN                             0x0
#define SSP1CON2_SEN_address                     0x216
#define SSP1CON2_SEN_position                    0x0
#define SSP1CON2_SEN_size                        0x1
#define SSP1CON2_SEN_value_mask                  0x1
#define SSP1CON2_SEN_clear_mask                  0xFE

#define SSP1CON2_RSEN                            0x1
#define SSP1CON2_RSEN_address                    0x216
#define SSP1CON2_RSEN_position                   0x1
#define SSP1CON2_RSEN_size                       0x1
#define SSP1CON2_RSEN_value_mask                 0x2
#define SSP1CON2_RSEN_clear_mask                 0xFD

#define SSP1CON2_PEN                             0x2
#define SSP1CON2_PEN_address                     0x216
#define SSP1CON2_PEN_position                    0x2
#define SSP1CON2_PEN_size                        0x1
#define SSP1CON2_PEN_value_mask                  0x4
#define SSP1CON2_PEN_clear_mask                  0xFB

#define SSP1CON2_RCEN                            0x3
#define SSP1CON2_RCEN_address                    0x216
#define SSP1CON2_RCEN_position                   0x3
#define SSP1CON2_RCEN_size                       0x1
#define SSP1CON2_RCEN_value_mask                 0x8
#define SSP1CON2_RCEN_clear_mask                 0xF7

#define SSP1CON2_ACKEN                           0x4
#define SSP1CON2_ACKEN_address                   0x216
#define SSP1CON2_ACKEN_position                  0x4
#define SSP1CON2_ACKEN_size                      0x1
#define SSP1CON2_ACKEN_value_mask                0x10
#define SSP1CON2_ACKEN_clear_mask                0xEF

#define SSP1CON2_ACKDT                           0x5
#define SSP1CON2_ACKDT_address                   0x216
#define SSP1CON2_ACKDT_position                  0x5
#define SSP1CON2_ACKDT_size                      0x1
#define SSP1CON2_ACKDT_value_mask                0x20
#define SSP1CON2_ACKDT_clear_mask                0xDF

#define SSP1CON2_ACKSTAT                         0x6
#define SSP1CON2_ACKSTAT_address                 0x216
#define SSP1CON2_ACKSTAT_position                0x6
#define SSP1CON2_ACKSTAT_size                    0x1
#define SSP1CON2_ACKSTAT_value_mask              0x40
#define SSP1CON2_ACKSTAT_clear_mask              0xBF

#define SSP1CON2_GCEN                            0x7
#define SSP1CON2_GCEN_address                    0x216
#define SSP1CON2_GCEN_position                   0x7
#define SSP1CON2_GCEN_size                       0x1
#define SSP1CON2_GCEN_value_mask                 0x80
#define SSP1CON2_GCEN_clear_mask                 0x7F


/*----------------------------------------------------------------------------------------------------------------------------------#
| SSP1CON3                                                                                                                    0x217 |
#-----------------------------------------------------------------------------------------------------------------------------------#
| SSP1CON3_ACKTIM | SSP1CON3_PCIE | SSP1CON3_SCIE | SSP1CON3_BOEN | SSP1CON3_SDAHT | SSP1CON3_SBCDE | SSP1CON3_AHEN | SSP1CON3_DHEN |
#-----------------------------------------------------------------------------------------------------------------------------------#
| 7               | 6             | 5             | 4             | 3              | 2              | 1             | 0             |
#----------------------------------------------------------------------------------------------------------------------------------*/

#define SSP1CON3                                 0x0
#define SSP1CON3_address                         0x217
#define SSP1CON3_position                        0x0
#define SSP1CON3_size                            0x8
#define SSP1CON3_value_mask                      0xFF
#define SSP1CON3_clear_mask                      0x0

#define SSP1CON3_DHEN                            0x0
#define SSP1CON3_DHEN_address                    0x217
#define SSP1CON3_DHEN_position                   0x0
#define SSP1CON3_DHEN_size                       0x1
#define SSP1CON3_DHEN_value_mask                 0x1
#define SSP1CON3_DHEN_clear_mask                 0xFE

#define SSP1CON3_AHEN                            0x1
#define SSP1CON3_AHEN_address                    0x217
#define SSP1CON3_AHEN_position                   0x1
#define SSP1CON3_AHEN_size                       0x1
#define SSP1CON3_AHEN_value_mask                 0x2
#define SSP1CON3_AHEN_clear_mask                 0xFD

#define SSP1CON3_SBCDE                           0x2
#define SSP1CON3_SBCDE_address                   0x217
#define SSP1CON3_SBCDE_position                  0x2
#define SSP1CON3_SBCDE_size                      0x1
#define SSP1CON3_SBCDE_value_mask                0x4
#define SSP1CON3_SBCDE_clear_mask                0xFB

#define SSP1CON3_SDAHT                           0x3
#define SSP1CON3_SDAHT_address                   0x217
#define SSP1CON3_SDAHT_position                  0x3
#define SSP1CON3_SDAHT_size                      0x1
#define SSP1CON3_SDAHT_value_mask                0x8
#define SSP1CON3_SDAHT_clear_mask                0xF7

#define SSP1CON3_BOEN                            0x4
#define SSP1CON3_BOEN_address                    0x217
#define SSP1CON3_BOEN_position                   0x4
#define SSP1CON3_BOEN_size                       0x1
#define SSP1CON3_BOEN_value_mask                 0x10
#define SSP1CON3_BOEN_clear_mask                 0xEF

#define SSP1CON3_SCIE                            0x5
#define SSP1CON3_SCIE_address                    0x217
#define SSP1CON3_SCIE_position                   0x5
#define SSP1CON3_SCIE_size                       0x1
#define SSP1CON3_SCIE_value_mask                 0x20
#define SSP1CON3_SCIE_clear_mask                 0xDF

#define SSP1CON3_PCIE                            0x6
#define SSP1CON3_PCIE_address                    0x217
#define SSP1CON3_PCIE_position                   0x6
#define SSP1CON3_PCIE_size                       0x1
#define SSP1CON3_PCIE_value_mask                 0x40
#define SSP1CON3_PCIE_clear_mask                 0xBF

#define SSP1CON3_ACKTIM                          0x7
#define SSP1CON3_ACKTIM_address                  0x217
#define SSP1CON3_ACKTIM_position                 0x7
#define SSP1CON3_ACKTIM_size                     0x1
#define SSP1CON3_ACKTIM_value_mask               0x80
#define SSP1CON3_ACKTIM_clear_mask               0x7F


/*------------------------------#
| SSP2BUF                 0x219 |
#-------------------------------#
| SSP2BUF_SSPBUF                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP2BUF                                  0x0
#define SSP2BUF_address                          0x219
#define SSP2BUF_position                         0x0
#define SSP2BUF_size                             0x8
#define SSP2BUF_value_mask                       0xFF
#define SSP2BUF_clear_mask                       0x0

#define SSP2BUF_SSPBUF                           0x0
#define SSP2BUF_SSPBUF_address                   0x219
#define SSP2BUF_SSPBUF_position                  0x0
#define SSP2BUF_SSPBUF_size                      0x8
#define SSP2BUF_SSPBUF_value_mask                0xFF
#define SSP2BUF_SSPBUF_clear_mask                0x0


/*------------------------------#
| SSP2ADD                 0x21A |
#-------------------------------#
| SSP2ADD_SSPADD                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP2ADD                                  0x0
#define SSP2ADD_address                          0x21A
#define SSP2ADD_position                         0x0
#define SSP2ADD_size                             0x8
#define SSP2ADD_value_mask                       0xFF
#define SSP2ADD_clear_mask                       0x0

#define SSP2ADD_SSPADD                           0x0
#define SSP2ADD_SSPADD_address                   0x21A
#define SSP2ADD_SSPADD_position                  0x0
#define SSP2ADD_SSPADD_size                      0x8
#define SSP2ADD_SSPADD_value_mask                0xFF
#define SSP2ADD_SSPADD_clear_mask                0x0


/*------------------------------#
| SSP2MSK                 0x21B |
#-------------------------------#
| SSP2MSK_SSPMSK                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP2MSK                                  0x0
#define SSP2MSK_address                          0x21B
#define SSP2MSK_position                         0x0
#define SSP2MSK_size                             0x8
#define SSP2MSK_value_mask                       0xFF
#define SSP2MSK_clear_mask                       0x0

#define SSP2MSK_SSPMSK                           0x0
#define SSP2MSK_SSPMSK_address                   0x21B
#define SSP2MSK_SSPMSK_position                  0x0
#define SSP2MSK_SSPMSK_size                      0x8
#define SSP2MSK_SSPMSK_value_mask                0xFF
#define SSP2MSK_SSPMSK_clear_mask                0x0


/*------------------------------------------------------------------------------------------------------------------#
| SSP2STAT                                                                                                    0x21C |
#-------------------------------------------------------------------------------------------------------------------#
| SSP2STAT_SMP | SSP2STAT_CKE | SSP2STAT_D_nA | SSP2STAT_P | SSP2STAT_S | SSP2STAT_R_nW | SSP2STAT_UA | SSP2STAT_BF |
#-------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5             | 4          | 3          | 2             | 1           | 0           |
#------------------------------------------------------------------------------------------------------------------*/

#define SSP2STAT                                 0x0
#define SSP2STAT_address                         0x21C
#define SSP2STAT_position                        0x0
#define SSP2STAT_size                            0x8
#define SSP2STAT_value_mask                      0xFF
#define SSP2STAT_clear_mask                      0x0

#define SSP2STAT_BF                              0x0
#define SSP2STAT_BF_address                      0x21C
#define SSP2STAT_BF_position                     0x0
#define SSP2STAT_BF_size                         0x1
#define SSP2STAT_BF_value_mask                   0x1
#define SSP2STAT_BF_clear_mask                   0xFE

#define SSP2STAT_UA                              0x1
#define SSP2STAT_UA_address                      0x21C
#define SSP2STAT_UA_position                     0x1
#define SSP2STAT_UA_size                         0x1
#define SSP2STAT_UA_value_mask                   0x2
#define SSP2STAT_UA_clear_mask                   0xFD

#define SSP2STAT_R_nW                            0x2
#define SSP2STAT_R_nW_address                    0x21C
#define SSP2STAT_R_nW_position                   0x2
#define SSP2STAT_R_nW_size                       0x1
#define SSP2STAT_R_nW_value_mask                 0x4
#define SSP2STAT_R_nW_clear_mask                 0xFB

#define SSP2STAT_S                               0x3
#define SSP2STAT_S_address                       0x21C
#define SSP2STAT_S_position                      0x3
#define SSP2STAT_S_size                          0x1
#define SSP2STAT_S_value_mask                    0x8
#define SSP2STAT_S_clear_mask                    0xF7

#define SSP2STAT_P                               0x4
#define SSP2STAT_P_address                       0x21C
#define SSP2STAT_P_position                      0x4
#define SSP2STAT_P_size                          0x1
#define SSP2STAT_P_value_mask                    0x10
#define SSP2STAT_P_clear_mask                    0xEF

#define SSP2STAT_D_nA                            0x5
#define SSP2STAT_D_nA_address                    0x21C
#define SSP2STAT_D_nA_position                   0x5
#define SSP2STAT_D_nA_size                       0x1
#define SSP2STAT_D_nA_value_mask                 0x20
#define SSP2STAT_D_nA_clear_mask                 0xDF

#define SSP2STAT_CKE                             0x6
#define SSP2STAT_CKE_address                     0x21C
#define SSP2STAT_CKE_position                    0x6
#define SSP2STAT_CKE_size                        0x1
#define SSP2STAT_CKE_value_mask                  0x40
#define SSP2STAT_CKE_clear_mask                  0xBF

#define SSP2STAT_SMP                             0x7
#define SSP2STAT_SMP_address                     0x21C
#define SSP2STAT_SMP_position                    0x7
#define SSP2STAT_SMP_size                        0x1
#define SSP2STAT_SMP_value_mask                  0x80
#define SSP2STAT_SMP_clear_mask                  0x7F


/*-----------------------------------------------------------------------------------------------------------------------------------#
| SSP2CON1                                                                                                                     0x21D |
#------------------------------------------------------------------------------------------------------------------------------------#
| SSP2CON1_WCOL | SSP2CON1_SSPOV | SSP2CON1_SSPEN | SSP2CON1_CKP | SSP2CON1_SSPM3 | SSP2CON1_SSPM2 | SSP2CON1_SSPM1 | SSP2CON1_SSPM0 |
#------------------------------------------------------------------------------------------------------------------------------------#
| 7             | 6              | 5              | 4            | 3              | 2              | 1              | 0              |
#-----------------------------------------------------------------------------------------------------------------------------------*/

#define SSP2CON1                                 0x0
#define SSP2CON1_address                         0x21D
#define SSP2CON1_position                        0x0
#define SSP2CON1_size                            0x8
#define SSP2CON1_value_mask                      0xFF
#define SSP2CON1_clear_mask                      0x0

#define SSP2CON1_SSPM                            0x0
#define SSP2CON1_SSPM_address                    0x21D
#define SSP2CON1_SSPM_position                   0x0
#define SSP2CON1_SSPM_size                       0x4
#define SSP2CON1_SSPM_value_mask                 0xF
#define SSP2CON1_SSPM_clear_mask                 0xF0

#define SSP2CON1_SSPM0                           0x0
#define SSP2CON1_SSPM0_address                   0x21D
#define SSP2CON1_SSPM0_position                  0x0
#define SSP2CON1_SSPM0_size                      0x1
#define SSP2CON1_SSPM0_value_mask                0x1
#define SSP2CON1_SSPM0_clear_mask                0xFE

#define SSP2CON1_SSPM1                           0x1
#define SSP2CON1_SSPM1_address                   0x21D
#define SSP2CON1_SSPM1_position                  0x1
#define SSP2CON1_SSPM1_size                      0x1
#define SSP2CON1_SSPM1_value_mask                0x2
#define SSP2CON1_SSPM1_clear_mask                0xFD

#define SSP2CON1_SSPM2                           0x2
#define SSP2CON1_SSPM2_address                   0x21D
#define SSP2CON1_SSPM2_position                  0x2
#define SSP2CON1_SSPM2_size                      0x1
#define SSP2CON1_SSPM2_value_mask                0x4
#define SSP2CON1_SSPM2_clear_mask                0xFB

#define SSP2CON1_SSPM3                           0x3
#define SSP2CON1_SSPM3_address                   0x21D
#define SSP2CON1_SSPM3_position                  0x3
#define SSP2CON1_SSPM3_size                      0x1
#define SSP2CON1_SSPM3_value_mask                0x8
#define SSP2CON1_SSPM3_clear_mask                0xF7

#define SSP2CON1_CKP                             0x4
#define SSP2CON1_CKP_address                     0x21D
#define SSP2CON1_CKP_position                    0x4
#define SSP2CON1_CKP_size                        0x1
#define SSP2CON1_CKP_value_mask                  0x10
#define SSP2CON1_CKP_clear_mask                  0xEF

#define SSP2CON1_SSPEN                           0x5
#define SSP2CON1_SSPEN_address                   0x21D
#define SSP2CON1_SSPEN_position                  0x5
#define SSP2CON1_SSPEN_size                      0x1
#define SSP2CON1_SSPEN_value_mask                0x20
#define SSP2CON1_SSPEN_clear_mask                0xDF

#define SSP2CON1_SSPOV                           0x6
#define SSP2CON1_SSPOV_address                   0x21D
#define SSP2CON1_SSPOV_position                  0x6
#define SSP2CON1_SSPOV_size                      0x1
#define SSP2CON1_SSPOV_value_mask                0x40
#define SSP2CON1_SSPOV_clear_mask                0xBF

#define SSP2CON1_WCOL                            0x7
#define SSP2CON1_WCOL_address                    0x21D
#define SSP2CON1_WCOL_position                   0x7
#define SSP2CON1_WCOL_size                       0x1
#define SSP2CON1_WCOL_value_mask                 0x80
#define SSP2CON1_WCOL_clear_mask                 0x7F


/*---------------------------------------------------------------------------------------------------------------------------------#
| SSP2CON2                                                                                                                   0x21E |
#----------------------------------------------------------------------------------------------------------------------------------#
| SSP2CON2_GCEN | SSP2CON2_ACKSTAT | SSP2CON2_ACKDT | SSP2CON2_ACKEN | SSP2CON2_RCEN | SSP2CON2_PEN | SSP2CON2_RSEN | SSP2CON2_SEN |
#----------------------------------------------------------------------------------------------------------------------------------#
| 7             | 6                | 5              | 4              | 3             | 2            | 1             | 0            |
#---------------------------------------------------------------------------------------------------------------------------------*/

#define SSP2CON2                                 0x0
#define SSP2CON2_address                         0x21E
#define SSP2CON2_position                        0x0
#define SSP2CON2_size                            0x8
#define SSP2CON2_value_mask                      0xFF
#define SSP2CON2_clear_mask                      0x0

#define SSP2CON2_SEN                             0x0
#define SSP2CON2_SEN_address                     0x21E
#define SSP2CON2_SEN_position                    0x0
#define SSP2CON2_SEN_size                        0x1
#define SSP2CON2_SEN_value_mask                  0x1
#define SSP2CON2_SEN_clear_mask                  0xFE

#define SSP2CON2_RSEN                            0x1
#define SSP2CON2_RSEN_address                    0x21E
#define SSP2CON2_RSEN_position                   0x1
#define SSP2CON2_RSEN_size                       0x1
#define SSP2CON2_RSEN_value_mask                 0x2
#define SSP2CON2_RSEN_clear_mask                 0xFD

#define SSP2CON2_PEN                             0x2
#define SSP2CON2_PEN_address                     0x21E
#define SSP2CON2_PEN_position                    0x2
#define SSP2CON2_PEN_size                        0x1
#define SSP2CON2_PEN_value_mask                  0x4
#define SSP2CON2_PEN_clear_mask                  0xFB

#define SSP2CON2_RCEN                            0x3
#define SSP2CON2_RCEN_address                    0x21E
#define SSP2CON2_RCEN_position                   0x3
#define SSP2CON2_RCEN_size                       0x1
#define SSP2CON2_RCEN_value_mask                 0x8
#define SSP2CON2_RCEN_clear_mask                 0xF7

#define SSP2CON2_ACKEN                           0x4
#define SSP2CON2_ACKEN_address                   0x21E
#define SSP2CON2_ACKEN_position                  0x4
#define SSP2CON2_ACKEN_size                      0x1
#define SSP2CON2_ACKEN_value_mask                0x10
#define SSP2CON2_ACKEN_clear_mask                0xEF

#define SSP2CON2_ACKDT                           0x5
#define SSP2CON2_ACKDT_address                   0x21E
#define SSP2CON2_ACKDT_position                  0x5
#define SSP2CON2_ACKDT_size                      0x1
#define SSP2CON2_ACKDT_value_mask                0x20
#define SSP2CON2_ACKDT_clear_mask                0xDF

#define SSP2CON2_ACKSTAT                         0x6
#define SSP2CON2_ACKSTAT_address                 0x21E
#define SSP2CON2_ACKSTAT_position                0x6
#define SSP2CON2_ACKSTAT_size                    0x1
#define SSP2CON2_ACKSTAT_value_mask              0x40
#define SSP2CON2_ACKSTAT_clear_mask              0xBF

#define SSP2CON2_GCEN                            0x7
#define SSP2CON2_GCEN_address                    0x21E
#define SSP2CON2_GCEN_position                   0x7
#define SSP2CON2_GCEN_size                       0x1
#define SSP2CON2_GCEN_value_mask                 0x80
#define SSP2CON2_GCEN_clear_mask                 0x7F


/*----------------------------------------------------------------------------------------------------------------------------------#
| SSP2CON3                                                                                                                    0x21F |
#-----------------------------------------------------------------------------------------------------------------------------------#
| SSP2CON3_ACKTIM | SSP2CON3_PCIE | SSP2CON3_SCIE | SSP2CON3_BOEN | SSP2CON3_SDAHT | SSP2CON3_SBCDE | SSP2CON3_AHEN | SSP2CON3_DHEN |
#-----------------------------------------------------------------------------------------------------------------------------------#
| 7               | 6             | 5             | 4             | 3              | 2              | 1             | 0             |
#----------------------------------------------------------------------------------------------------------------------------------*/

#define SSP2CON3                                 0x0
#define SSP2CON3_address                         0x21F
#define SSP2CON3_position                        0x0
#define SSP2CON3_size                            0x8
#define SSP2CON3_value_mask                      0xFF
#define SSP2CON3_clear_mask                      0x0

#define SSP2CON3_DHEN                            0x0
#define SSP2CON3_DHEN_address                    0x21F
#define SSP2CON3_DHEN_position                   0x0
#define SSP2CON3_DHEN_size                       0x1
#define SSP2CON3_DHEN_value_mask                 0x1
#define SSP2CON3_DHEN_clear_mask                 0xFE

#define SSP2CON3_AHEN                            0x1
#define SSP2CON3_AHEN_address                    0x21F
#define SSP2CON3_AHEN_position                   0x1
#define SSP2CON3_AHEN_size                       0x1
#define SSP2CON3_AHEN_value_mask                 0x2
#define SSP2CON3_AHEN_clear_mask                 0xFD

#define SSP2CON3_SBCDE                           0x2
#define SSP2CON3_SBCDE_address                   0x21F
#define SSP2CON3_SBCDE_position                  0x2
#define SSP2CON3_SBCDE_size                      0x1
#define SSP2CON3_SBCDE_value_mask                0x4
#define SSP2CON3_SBCDE_clear_mask                0xFB

#define SSP2CON3_SDAHT                           0x3
#define SSP2CON3_SDAHT_address                   0x21F
#define SSP2CON3_SDAHT_position                  0x3
#define SSP2CON3_SDAHT_size                      0x1
#define SSP2CON3_SDAHT_value_mask                0x8
#define SSP2CON3_SDAHT_clear_mask                0xF7

#define SSP2CON3_BOEN                            0x4
#define SSP2CON3_BOEN_address                    0x21F
#define SSP2CON3_BOEN_position                   0x4
#define SSP2CON3_BOEN_size                       0x1
#define SSP2CON3_BOEN_value_mask                 0x10
#define SSP2CON3_BOEN_clear_mask                 0xEF

#define SSP2CON3_SCIE                            0x5
#define SSP2CON3_SCIE_address                    0x21F
#define SSP2CON3_SCIE_position                   0x5
#define SSP2CON3_SCIE_size                       0x1
#define SSP2CON3_SCIE_value_mask                 0x20
#define SSP2CON3_SCIE_clear_mask                 0xDF

#define SSP2CON3_PCIE                            0x6
#define SSP2CON3_PCIE_address                    0x21F
#define SSP2CON3_PCIE_position                   0x6
#define SSP2CON3_PCIE_size                       0x1
#define SSP2CON3_PCIE_value_mask                 0x40
#define SSP2CON3_PCIE_clear_mask                 0xBF

#define SSP2CON3_ACKTIM                          0x7
#define SSP2CON3_ACKTIM_address                  0x21F
#define SSP2CON3_ACKTIM_position                 0x7
#define SSP2CON3_ACKTIM_size                     0x1
#define SSP2CON3_ACKTIM_value_mask               0x80
#define SSP2CON3_ACKTIM_clear_mask               0x7F


/*----------------------------------------------#
| PORTF                                   0x28C |
#-----------------------------------------------#
| RF7 | RF6 | RF5 | RF4 | RF3 | RF2 | RF1 | RF0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define PORTF                                    0x0
#define PORTF_address                            0x28C
#define PORTF_position                           0x0
#define PORTF_size                               0x8
#define PORTF_value_mask                         0xFF
#define PORTF_clear_mask                         0x0

#define RF0                                      0x0
#define RF0_address                              0x28C
#define RF0_position                             0x0
#define RF0_size                                 0x1
#define RF0_value_mask                           0x1
#define RF0_clear_mask                           0xFE

#define RF1                                      0x1
#define RF1_address                              0x28C
#define RF1_position                             0x1
#define RF1_size                                 0x1
#define RF1_value_mask                           0x2
#define RF1_clear_mask                           0xFD

#define RF2                                      0x2
#define RF2_address                              0x28C
#define RF2_position                             0x2
#define RF2_size                                 0x1
#define RF2_value_mask                           0x4
#define RF2_clear_mask                           0xFB

#define RF3                                      0x3
#define RF3_address                              0x28C
#define RF3_position                             0x3
#define RF3_size                                 0x1
#define RF3_value_mask                           0x8
#define RF3_clear_mask                           0xF7

#define RF4                                      0x4
#define RF4_address                              0x28C
#define RF4_position                             0x4
#define RF4_size                                 0x1
#define RF4_value_mask                           0x10
#define RF4_clear_mask                           0xEF

#define RF5                                      0x5
#define RF5_address                              0x28C
#define RF5_position                             0x5
#define RF5_size                                 0x1
#define RF5_value_mask                           0x20
#define RF5_clear_mask                           0xDF

#define RF6                                      0x6
#define RF6_address                              0x28C
#define RF6_position                             0x6
#define RF6_size                                 0x1
#define RF6_value_mask                           0x40
#define RF6_clear_mask                           0xBF

#define RF7                                      0x7
#define RF7_address                              0x28C
#define RF7_position                             0x7
#define RF7_size                                 0x1
#define RF7_value_mask                           0x80
#define RF7_clear_mask                           0x7F


/*------------------------------------------#
| PORTG                               0x28D |
#-------------------------------------------#
| - | - | RG5 | RG4 | RG3 | RG2 | RG1 | RG0 |
#-------------------------------------------#
| 7 | 6 | 5   | 4   | 3   | 2   | 1   | 0   |
#------------------------------------------*/

#define PORTG                                    0x0
#define PORTG_address                            0x28D
#define PORTG_position                           0x0
#define PORTG_size                               0x8
#define PORTG_value_mask                         0xFF
#define PORTG_clear_mask                         0x0

#define RG0                                      0x0
#define RG0_address                              0x28D
#define RG0_position                             0x0
#define RG0_size                                 0x1
#define RG0_value_mask                           0x1
#define RG0_clear_mask                           0xFE

#define RG1                                      0x1
#define RG1_address                              0x28D
#define RG1_position                             0x1
#define RG1_size                                 0x1
#define RG1_value_mask                           0x2
#define RG1_clear_mask                           0xFD

#define RG2                                      0x2
#define RG2_address                              0x28D
#define RG2_position                             0x2
#define RG2_size                                 0x1
#define RG2_value_mask                           0x4
#define RG2_clear_mask                           0xFB

#define RG3                                      0x3
#define RG3_address                              0x28D
#define RG3_position                             0x3
#define RG3_size                                 0x1
#define RG3_value_mask                           0x8
#define RG3_clear_mask                           0xF7

#define RG4                                      0x4
#define RG4_address                              0x28D
#define RG4_position                             0x4
#define RG4_size                                 0x1
#define RG4_value_mask                           0x10
#define RG4_clear_mask                           0xEF

#define RG5                                      0x5
#define RG5_address                              0x28D
#define RG5_position                             0x5
#define RG5_size                                 0x1
#define RG5_value_mask                           0x20
#define RG5_clear_mask                           0xDF


/*------------------------------#
| CCPR1L                  0x291 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR1L                                   0x0
#define CCPR1L_address                           0x291
#define CCPR1L_position                          0x0
#define CCPR1L_size                              0x8
#define CCPR1L_value_mask                        0xFF
#define CCPR1L_clear_mask                        0x0


/*------------------------------#
| CCPR1H                  0x292 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR1H                                   0x0
#define CCPR1H_address                           0x292
#define CCPR1H_position                          0x0
#define CCPR1H_size                              0x8
#define CCPR1H_value_mask                        0xFF
#define CCPR1H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP1CON                                             0x293 |
#-----------------------------------------------------------#
| - | - | DC1B1 | DC1B0 | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP1CON                                  0x0
#define CCP1CON_address                          0x293
#define CCP1CON_position                         0x0
#define CCP1CON_size                             0x8
#define CCP1CON_value_mask                       0xFF
#define CCP1CON_clear_mask                       0x0

#define CCP1M0                                   0x0
#define CCP1M0_address                           0x293
#define CCP1M0_position                          0x0
#define CCP1M0_size                              0x1
#define CCP1M0_value_mask                        0x1
#define CCP1M0_clear_mask                        0xFE

#define CCP1M                                    0x0
#define CCP1M_address                            0x293
#define CCP1M_position                           0x0
#define CCP1M_size                               0x4
#define CCP1M_value_mask                         0xF
#define CCP1M_clear_mask                         0xF0

#define CCP1M1                                   0x1
#define CCP1M1_address                           0x293
#define CCP1M1_position                          0x1
#define CCP1M1_size                              0x1
#define CCP1M1_value_mask                        0x2
#define CCP1M1_clear_mask                        0xFD

#define CCP1M2                                   0x2
#define CCP1M2_address                           0x293
#define CCP1M2_position                          0x2
#define CCP1M2_size                              0x1
#define CCP1M2_value_mask                        0x4
#define CCP1M2_clear_mask                        0xFB

#define CCP1M3                                   0x3
#define CCP1M3_address                           0x293
#define CCP1M3_position                          0x3
#define CCP1M3_size                              0x1
#define CCP1M3_value_mask                        0x8
#define CCP1M3_clear_mask                        0xF7

#define DC1B                                     0x4
#define DC1B_address                             0x293
#define DC1B_position                            0x4
#define DC1B_size                                0x2
#define DC1B_value_mask                          0x30
#define DC1B_clear_mask                          0xCF

#define DC1B0                                    0x4
#define DC1B0_address                            0x293
#define DC1B0_position                           0x4
#define DC1B0_size                               0x1
#define DC1B0_value_mask                         0x10
#define DC1B0_clear_mask                         0xEF

#define DC1B1                                    0x5
#define DC1B1_address                            0x293
#define DC1B1_position                           0x5
#define DC1B1_size                               0x1
#define DC1B1_value_mask                         0x20
#define DC1B1_clear_mask                         0xDF


/*------------------------------#
| CCPR2L                  0x298 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR2L                                   0x0
#define CCPR2L_address                           0x298
#define CCPR2L_position                          0x0
#define CCPR2L_size                              0x8
#define CCPR2L_value_mask                        0xFF
#define CCPR2L_clear_mask                        0x0


/*------------------------------#
| CCPR2H                  0x299 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR2H                                   0x0
#define CCPR2H_address                           0x299
#define CCPR2H_position                          0x0
#define CCPR2H_size                              0x8
#define CCPR2H_value_mask                        0xFF
#define CCPR2H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP2CON                                             0x29A |
#-----------------------------------------------------------#
| - | - | DC2B1 | DC2B0 | CCP2M3 | CCP2M2 | CCP2M1 | CCP2M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP2CON                                  0x0
#define CCP2CON_address                          0x29A
#define CCP2CON_position                         0x0
#define CCP2CON_size                             0x8
#define CCP2CON_value_mask                       0xFF
#define CCP2CON_clear_mask                       0x0

#define CCP2M                                    0x0
#define CCP2M_address                            0x29A
#define CCP2M_position                           0x0
#define CCP2M_size                               0x4
#define CCP2M_value_mask                         0xF
#define CCP2M_clear_mask                         0xF0

#define CCP2M0                                   0x0
#define CCP2M0_address                           0x29A
#define CCP2M0_position                          0x0
#define CCP2M0_size                              0x1
#define CCP2M0_value_mask                        0x1
#define CCP2M0_clear_mask                        0xFE

#define CCP2M1                                   0x1
#define CCP2M1_address                           0x29A
#define CCP2M1_position                          0x1
#define CCP2M1_size                              0x1
#define CCP2M1_value_mask                        0x2
#define CCP2M1_clear_mask                        0xFD

#define CCP2M2                                   0x2
#define CCP2M2_address                           0x29A
#define CCP2M2_position                          0x2
#define CCP2M2_size                              0x1
#define CCP2M2_value_mask                        0x4
#define CCP2M2_clear_mask                        0xFB

#define CCP2M3                                   0x3
#define CCP2M3_address                           0x29A
#define CCP2M3_position                          0x3
#define CCP2M3_size                              0x1
#define CCP2M3_value_mask                        0x8
#define CCP2M3_clear_mask                        0xF7

#define DC2B0                                    0x4
#define DC2B0_address                            0x29A
#define DC2B0_position                           0x4
#define DC2B0_size                               0x1
#define DC2B0_value_mask                         0x10
#define DC2B0_clear_mask                         0xEF

#define DC2B                                     0x4
#define DC2B_address                             0x29A
#define DC2B_position                            0x4
#define DC2B_size                                0x2
#define DC2B_value_mask                          0x30
#define DC2B_clear_mask                          0xCF

#define DC2B1                                    0x5
#define DC2B1_address                            0x29A
#define DC2B1_position                           0x5
#define DC2B1_size                               0x1
#define DC2B1_value_mask                         0x20
#define DC2B1_clear_mask                         0xDF


/*------------------------------------------------------------------------------#
| CCPTMRS0                                                                0x29D |
#-------------------------------------------------------------------------------#
| C4TSEL1 | C4TSEL0 | C3TSEL1 | C3TSEL0 | C2TSEL1 | C2TSEL0 | C1TSEL1 | C1TSEL0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define CCPTMRS0                                 0x0
#define CCPTMRS0_address                         0x29D
#define CCPTMRS0_position                        0x0
#define CCPTMRS0_size                            0x8
#define CCPTMRS0_value_mask                      0xFF
#define CCPTMRS0_clear_mask                      0x0

#define C1TSEL0                                  0x0
#define C1TSEL0_address                          0x29D
#define C1TSEL0_position                         0x0
#define C1TSEL0_size                             0x1
#define C1TSEL0_value_mask                       0x1
#define C1TSEL0_clear_mask                       0xFE

#define C1TSEL                                   0x0
#define C1TSEL_address                           0x29D
#define C1TSEL_position                          0x0
#define C1TSEL_size                              0x2
#define C1TSEL_value_mask                        0x3
#define C1TSEL_clear_mask                        0xFC

#define C1TSEL1                                  0x1
#define C1TSEL1_address                          0x29D
#define C1TSEL1_position                         0x1
#define C1TSEL1_size                             0x1
#define C1TSEL1_value_mask                       0x2
#define C1TSEL1_clear_mask                       0xFD

#define C2TSEL0                                  0x2
#define C2TSEL0_address                          0x29D
#define C2TSEL0_position                         0x2
#define C2TSEL0_size                             0x1
#define C2TSEL0_value_mask                       0x4
#define C2TSEL0_clear_mask                       0xFB

#define C2TSEL                                   0x2
#define C2TSEL_address                           0x29D
#define C2TSEL_position                          0x2
#define C2TSEL_size                              0x2
#define C2TSEL_value_mask                        0xC
#define C2TSEL_clear_mask                        0xF3

#define C2TSEL1                                  0x3
#define C2TSEL1_address                          0x29D
#define C2TSEL1_position                         0x3
#define C2TSEL1_size                             0x1
#define C2TSEL1_value_mask                       0x8
#define C2TSEL1_clear_mask                       0xF7

#define C3TSEL0                                  0x4
#define C3TSEL0_address                          0x29D
#define C3TSEL0_position                         0x4
#define C3TSEL0_size                             0x1
#define C3TSEL0_value_mask                       0x10
#define C3TSEL0_clear_mask                       0xEF

#define C3TSEL                                   0x4
#define C3TSEL_address                           0x29D
#define C3TSEL_position                          0x4
#define C3TSEL_size                              0x2
#define C3TSEL_value_mask                        0x30
#define C3TSEL_clear_mask                        0xCF

#define C3TSEL1                                  0x5
#define C3TSEL1_address                          0x29D
#define C3TSEL1_position                         0x5
#define C3TSEL1_size                             0x1
#define C3TSEL1_value_mask                       0x20
#define C3TSEL1_clear_mask                       0xDF

#define C4TSEL                                   0x6
#define C4TSEL_address                           0x29D
#define C4TSEL_position                          0x6
#define C4TSEL_size                              0x2
#define C4TSEL_value_mask                        0xC0
#define C4TSEL_clear_mask                        0x3F

#define C4TSEL0                                  0x6
#define C4TSEL0_address                          0x29D
#define C4TSEL0_position                         0x6
#define C4TSEL0_size                             0x1
#define C4TSEL0_value_mask                       0x40
#define C4TSEL0_clear_mask                       0xBF

#define C4TSEL1                                  0x7
#define C4TSEL1_address                          0x29D
#define C4TSEL1_position                         0x7
#define C4TSEL1_size                             0x1
#define C4TSEL1_value_mask                       0x80
#define C4TSEL1_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| CCPTMRS1                                                                0x29E |
#-------------------------------------------------------------------------------#
| C8TSEL1 | C8TSEL0 | C7TSEL1 | C7TSEL0 | C6TSEL1 | C6TSEL0 | C5TSEL1 | C5TSEL0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define CCPTMRS1                                 0x0
#define CCPTMRS1_address                         0x29E
#define CCPTMRS1_position                        0x0
#define CCPTMRS1_size                            0x8
#define CCPTMRS1_value_mask                      0xFF
#define CCPTMRS1_clear_mask                      0x0

#define C5TSEL                                   0x0
#define C5TSEL_address                           0x29E
#define C5TSEL_position                          0x0
#define C5TSEL_size                              0x2
#define C5TSEL_value_mask                        0x3
#define C5TSEL_clear_mask                        0xFC

#define C5TSEL0                                  0x0
#define C5TSEL0_address                          0x29E
#define C5TSEL0_position                         0x0
#define C5TSEL0_size                             0x1
#define C5TSEL0_value_mask                       0x1
#define C5TSEL0_clear_mask                       0xFE

#define C5TSEL1                                  0x1
#define C5TSEL1_address                          0x29E
#define C5TSEL1_position                         0x1
#define C5TSEL1_size                             0x1
#define C5TSEL1_value_mask                       0x2
#define C5TSEL1_clear_mask                       0xFD

#define C6TSEL0                                  0x2
#define C6TSEL0_address                          0x29E
#define C6TSEL0_position                         0x2
#define C6TSEL0_size                             0x1
#define C6TSEL0_value_mask                       0x4
#define C6TSEL0_clear_mask                       0xFB

#define C6TSEL                                   0x2
#define C6TSEL_address                           0x29E
#define C6TSEL_position                          0x2
#define C6TSEL_size                              0x2
#define C6TSEL_value_mask                        0xC
#define C6TSEL_clear_mask                        0xF3

#define C6TSEL1                                  0x3
#define C6TSEL1_address                          0x29E
#define C6TSEL1_position                         0x3
#define C6TSEL1_size                             0x1
#define C6TSEL1_value_mask                       0x8
#define C6TSEL1_clear_mask                       0xF7

#define C7TSEL                                   0x4
#define C7TSEL_address                           0x29E
#define C7TSEL_position                          0x4
#define C7TSEL_size                              0x2
#define C7TSEL_value_mask                        0x30
#define C7TSEL_clear_mask                        0xCF

#define C7TSEL0                                  0x4
#define C7TSEL0_address                          0x29E
#define C7TSEL0_position                         0x4
#define C7TSEL0_size                             0x1
#define C7TSEL0_value_mask                       0x10
#define C7TSEL0_clear_mask                       0xEF

#define C7TSEL1                                  0x5
#define C7TSEL1_address                          0x29E
#define C7TSEL1_position                         0x5
#define C7TSEL1_size                             0x1
#define C7TSEL1_value_mask                       0x20
#define C7TSEL1_clear_mask                       0xDF

#define C8TSEL0                                  0x6
#define C8TSEL0_address                          0x29E
#define C8TSEL0_position                         0x6
#define C8TSEL0_size                             0x1
#define C8TSEL0_value_mask                       0x40
#define C8TSEL0_clear_mask                       0xBF

#define C8TSEL                                   0x6
#define C8TSEL_address                           0x29E
#define C8TSEL_position                          0x6
#define C8TSEL_size                              0x2
#define C8TSEL_value_mask                        0xC0
#define C8TSEL_clear_mask                        0x3F

#define C8TSEL1                                  0x7
#define C8TSEL1_address                          0x29E
#define C8TSEL1_position                         0x7
#define C8TSEL1_size                             0x1
#define C8TSEL1_value_mask                       0x80
#define C8TSEL1_clear_mask                       0x7F


/*--------------------------------------------------------#
| CCPTMRS2                                          0x29F |
#---------------------------------------------------------#
| - | - | - | - | C10TSEL1 | C10TSEL0 | C9TSEL1 | C9TSEL0 |
#---------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2        | 1       | 0       |
#--------------------------------------------------------*/

#define CCPTMRS2                                 0x0
#define CCPTMRS2_address                         0x29F
#define CCPTMRS2_position                        0x0
#define CCPTMRS2_size                            0x8
#define CCPTMRS2_value_mask                      0xFF
#define CCPTMRS2_clear_mask                      0x0

#define C9TSEL                                   0x0
#define C9TSEL_address                           0x29F
#define C9TSEL_position                          0x0
#define C9TSEL_size                              0x2
#define C9TSEL_value_mask                        0x3
#define C9TSEL_clear_mask                        0xFC

#define C9TSEL0                                  0x0
#define C9TSEL0_address                          0x29F
#define C9TSEL0_position                         0x0
#define C9TSEL0_size                             0x1
#define C9TSEL0_value_mask                       0x1
#define C9TSEL0_clear_mask                       0xFE

#define C9TSEL1                                  0x1
#define C9TSEL1_address                          0x29F
#define C9TSEL1_position                         0x1
#define C9TSEL1_size                             0x1
#define C9TSEL1_value_mask                       0x2
#define C9TSEL1_clear_mask                       0xFD

#define C10TSEL0                                 0x2
#define C10TSEL0_address                         0x29F
#define C10TSEL0_position                        0x2
#define C10TSEL0_size                            0x1
#define C10TSEL0_value_mask                      0x4
#define C10TSEL0_clear_mask                      0xFB

#define C10TSEL                                  0x2
#define C10TSEL_address                          0x29F
#define C10TSEL_position                         0x2
#define C10TSEL_size                             0x2
#define C10TSEL_value_mask                       0xC
#define C10TSEL_clear_mask                       0xF3

#define C10TSEL1                                 0x3
#define C10TSEL1_address                         0x29F
#define C10TSEL1_position                        0x3
#define C10TSEL1_size                            0x1
#define C10TSEL1_value_mask                      0x8
#define C10TSEL1_clear_mask                      0xF7


/*----------------------------------------------------------------------#
| TRISF                                                           0x30C |
#-----------------------------------------------------------------------#
| TRISF7 | TRISF6 | TRISF5 | TRISF4 | TRISF3 | TRISF2 | TRISF1 | TRISF0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISF                                    0x0
#define TRISF_address                            0x30C
#define TRISF_position                           0x0
#define TRISF_size                               0x8
#define TRISF_value_mask                         0xFF
#define TRISF_clear_mask                         0x0

#define TRISF0                                   0x0
#define TRISF0_address                           0x30C
#define TRISF0_position                          0x0
#define TRISF0_size                              0x1
#define TRISF0_value_mask                        0x1
#define TRISF0_clear_mask                        0xFE

#define TRISF1                                   0x1
#define TRISF1_address                           0x30C
#define TRISF1_position                          0x1
#define TRISF1_size                              0x1
#define TRISF1_value_mask                        0x2
#define TRISF1_clear_mask                        0xFD

#define TRISF2                                   0x2
#define TRISF2_address                           0x30C
#define TRISF2_position                          0x2
#define TRISF2_size                              0x1
#define TRISF2_value_mask                        0x4
#define TRISF2_clear_mask                        0xFB

#define TRISF3                                   0x3
#define TRISF3_address                           0x30C
#define TRISF3_position                          0x3
#define TRISF3_size                              0x1
#define TRISF3_value_mask                        0x8
#define TRISF3_clear_mask                        0xF7

#define TRISF4                                   0x4
#define TRISF4_address                           0x30C
#define TRISF4_position                          0x4
#define TRISF4_size                              0x1
#define TRISF4_value_mask                        0x10
#define TRISF4_clear_mask                        0xEF

#define TRISF5                                   0x5
#define TRISF5_address                           0x30C
#define TRISF5_position                          0x5
#define TRISF5_size                              0x1
#define TRISF5_value_mask                        0x20
#define TRISF5_clear_mask                        0xDF

#define TRISF6                                   0x6
#define TRISF6_address                           0x30C
#define TRISF6_position                          0x6
#define TRISF6_size                              0x1
#define TRISF6_value_mask                        0x40
#define TRISF6_clear_mask                        0xBF

#define TRISF7                                   0x7
#define TRISF7_address                           0x30C
#define TRISF7_position                          0x7
#define TRISF7_size                              0x1
#define TRISF7_value_mask                        0x80
#define TRISF7_clear_mask                        0x7F


/*-------------------------------------------------------#
| TRISG                                            0x30D |
#--------------------------------------------------------#
| - | - | - | TRISG4 | TRISG3 | TRISG2 | TRISG1 | TRISG0 |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define TRISG                                    0x0
#define TRISG_address                            0x30D
#define TRISG_position                           0x0
#define TRISG_size                               0x8
#define TRISG_value_mask                         0xFF
#define TRISG_clear_mask                         0x0

#define TRISG0                                   0x0
#define TRISG0_address                           0x30D
#define TRISG0_position                          0x0
#define TRISG0_size                              0x1
#define TRISG0_value_mask                        0x1
#define TRISG0_clear_mask                        0xFE

#define TRISG1                                   0x1
#define TRISG1_address                           0x30D
#define TRISG1_position                          0x1
#define TRISG1_size                              0x1
#define TRISG1_value_mask                        0x2
#define TRISG1_clear_mask                        0xFD

#define TRISG2                                   0x2
#define TRISG2_address                           0x30D
#define TRISG2_position                          0x2
#define TRISG2_size                              0x1
#define TRISG2_value_mask                        0x4
#define TRISG2_clear_mask                        0xFB

#define TRISG3                                   0x3
#define TRISG3_address                           0x30D
#define TRISG3_position                          0x3
#define TRISG3_size                              0x1
#define TRISG3_value_mask                        0x8
#define TRISG3_clear_mask                        0xF7

#define TRISG4                                   0x4
#define TRISG4_address                           0x30D
#define TRISG4_position                          0x4
#define TRISG4_size                              0x1
#define TRISG4_value_mask                        0x10
#define TRISG4_clear_mask                        0xEF


/*------------------------------#
| CCPR3L                  0x311 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR3L                                   0x0
#define CCPR3L_address                           0x311
#define CCPR3L_position                          0x0
#define CCPR3L_size                              0x8
#define CCPR3L_value_mask                        0xFF
#define CCPR3L_clear_mask                        0x0


/*------------------------------#
| CCPR3H                  0x312 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR3H                                   0x0
#define CCPR3H_address                           0x312
#define CCPR3H_position                          0x0
#define CCPR3H_size                              0x8
#define CCPR3H_value_mask                        0xFF
#define CCPR3H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP3CON                                             0x313 |
#-----------------------------------------------------------#
| - | - | DC3B1 | DC3B0 | CCP3M3 | CCP3M2 | CCP3M1 | CCP3M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP3CON                                  0x0
#define CCP3CON_address                          0x313
#define CCP3CON_position                         0x0
#define CCP3CON_size                             0x8
#define CCP3CON_value_mask                       0xFF
#define CCP3CON_clear_mask                       0x0

#define CCP3M                                    0x0
#define CCP3M_address                            0x313
#define CCP3M_position                           0x0
#define CCP3M_size                               0x4
#define CCP3M_value_mask                         0xF
#define CCP3M_clear_mask                         0xF0

#define CCP3M0                                   0x0
#define CCP3M0_address                           0x313
#define CCP3M0_position                          0x0
#define CCP3M0_size                              0x1
#define CCP3M0_value_mask                        0x1
#define CCP3M0_clear_mask                        0xFE

#define CCP3M1                                   0x1
#define CCP3M1_address                           0x313
#define CCP3M1_position                          0x1
#define CCP3M1_size                              0x1
#define CCP3M1_value_mask                        0x2
#define CCP3M1_clear_mask                        0xFD

#define CCP3M2                                   0x2
#define CCP3M2_address                           0x313
#define CCP3M2_position                          0x2
#define CCP3M2_size                              0x1
#define CCP3M2_value_mask                        0x4
#define CCP3M2_clear_mask                        0xFB

#define CCP3M3                                   0x3
#define CCP3M3_address                           0x313
#define CCP3M3_position                          0x3
#define CCP3M3_size                              0x1
#define CCP3M3_value_mask                        0x8
#define CCP3M3_clear_mask                        0xF7

#define DC3B                                     0x4
#define DC3B_address                             0x313
#define DC3B_position                            0x4
#define DC3B_size                                0x2
#define DC3B_value_mask                          0x30
#define DC3B_clear_mask                          0xCF

#define DC3B0                                    0x4
#define DC3B0_address                            0x313
#define DC3B0_position                           0x4
#define DC3B0_size                               0x1
#define DC3B0_value_mask                         0x10
#define DC3B0_clear_mask                         0xEF

#define DC3B1                                    0x5
#define DC3B1_address                            0x313
#define DC3B1_position                           0x5
#define DC3B1_size                               0x1
#define DC3B1_value_mask                         0x20
#define DC3B1_clear_mask                         0xDF


/*------------------------------#
| CCPR4L                  0x318 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR4L                                   0x0
#define CCPR4L_address                           0x318
#define CCPR4L_position                          0x0
#define CCPR4L_size                              0x8
#define CCPR4L_value_mask                        0xFF
#define CCPR4L_clear_mask                        0x0


/*------------------------------#
| CCPR4H                  0x319 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR4H                                   0x0
#define CCPR4H_address                           0x319
#define CCPR4H_position                          0x0
#define CCPR4H_size                              0x8
#define CCPR4H_value_mask                        0xFF
#define CCPR4H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP4CON                                             0x31A |
#-----------------------------------------------------------#
| - | - | DC4B1 | DC4B0 | CCP4M3 | CCP4M2 | CCP4M1 | CCP4M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP4CON                                  0x0
#define CCP4CON_address                          0x31A
#define CCP4CON_position                         0x0
#define CCP4CON_size                             0x8
#define CCP4CON_value_mask                       0xFF
#define CCP4CON_clear_mask                       0x0

#define CCP4M                                    0x0
#define CCP4M_address                            0x31A
#define CCP4M_position                           0x0
#define CCP4M_size                               0x4
#define CCP4M_value_mask                         0xF
#define CCP4M_clear_mask                         0xF0

#define CCP4M0                                   0x0
#define CCP4M0_address                           0x31A
#define CCP4M0_position                          0x0
#define CCP4M0_size                              0x1
#define CCP4M0_value_mask                        0x1
#define CCP4M0_clear_mask                        0xFE

#define CCP4M1                                   0x1
#define CCP4M1_address                           0x31A
#define CCP4M1_position                          0x1
#define CCP4M1_size                              0x1
#define CCP4M1_value_mask                        0x2
#define CCP4M1_clear_mask                        0xFD

#define CCP4M2                                   0x2
#define CCP4M2_address                           0x31A
#define CCP4M2_position                          0x2
#define CCP4M2_size                              0x1
#define CCP4M2_value_mask                        0x4
#define CCP4M2_clear_mask                        0xFB

#define CCP4M3                                   0x3
#define CCP4M3_address                           0x31A
#define CCP4M3_position                          0x3
#define CCP4M3_size                              0x1
#define CCP4M3_value_mask                        0x8
#define CCP4M3_clear_mask                        0xF7

#define DC4B0                                    0x4
#define DC4B0_address                            0x31A
#define DC4B0_position                           0x4
#define DC4B0_size                               0x1
#define DC4B0_value_mask                         0x10
#define DC4B0_clear_mask                         0xEF

#define DC4B                                     0x4
#define DC4B_address                             0x31A
#define DC4B_position                            0x4
#define DC4B_size                                0x2
#define DC4B_value_mask                          0x30
#define DC4B_clear_mask                          0xCF

#define DC4B1                                    0x5
#define DC4B1_address                            0x31A
#define DC4B1_position                           0x5
#define DC4B1_size                               0x1
#define DC4B1_value_mask                         0x20
#define DC4B1_clear_mask                         0xDF


/*------------------------------#
| CCPR5L                  0x31C |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR5L                                   0x0
#define CCPR5L_address                           0x31C
#define CCPR5L_position                          0x0
#define CCPR5L_size                              0x8
#define CCPR5L_value_mask                        0xFF
#define CCPR5L_clear_mask                        0x0


/*------------------------------#
| CCPR5H                  0x31D |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR5H                                   0x0
#define CCPR5H_address                           0x31D
#define CCPR5H_position                          0x0
#define CCPR5H_size                              0x8
#define CCPR5H_value_mask                        0xFF
#define CCPR5H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP5CON                                             0x31E |
#-----------------------------------------------------------#
| - | - | DC5B1 | DC5B0 | CCP5M3 | CCP5M2 | CCP5M1 | CCP5M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP5CON                                  0x0
#define CCP5CON_address                          0x31E
#define CCP5CON_position                         0x0
#define CCP5CON_size                             0x8
#define CCP5CON_value_mask                       0xFF
#define CCP5CON_clear_mask                       0x0

#define CCP5M0                                   0x0
#define CCP5M0_address                           0x31E
#define CCP5M0_position                          0x0
#define CCP5M0_size                              0x1
#define CCP5M0_value_mask                        0x1
#define CCP5M0_clear_mask                        0xFE

#define CCP5M                                    0x0
#define CCP5M_address                            0x31E
#define CCP5M_position                           0x0
#define CCP5M_size                               0x4
#define CCP5M_value_mask                         0xF
#define CCP5M_clear_mask                         0xF0

#define CCP5M1                                   0x1
#define CCP5M1_address                           0x31E
#define CCP5M1_position                          0x1
#define CCP5M1_size                              0x1
#define CCP5M1_value_mask                        0x2
#define CCP5M1_clear_mask                        0xFD

#define CCP5M2                                   0x2
#define CCP5M2_address                           0x31E
#define CCP5M2_position                          0x2
#define CCP5M2_size                              0x1
#define CCP5M2_value_mask                        0x4
#define CCP5M2_clear_mask                        0xFB

#define CCP5M3                                   0x3
#define CCP5M3_address                           0x31E
#define CCP5M3_position                          0x3
#define CCP5M3_size                              0x1
#define CCP5M3_value_mask                        0x8
#define CCP5M3_clear_mask                        0xF7

#define DC5B0                                    0x4
#define DC5B0_address                            0x31E
#define DC5B0_position                           0x4
#define DC5B0_size                               0x1
#define DC5B0_value_mask                         0x10
#define DC5B0_clear_mask                         0xEF

#define DC5B                                     0x4
#define DC5B_address                             0x31E
#define DC5B_position                            0x4
#define DC5B_size                                0x2
#define DC5B_value_mask                          0x30
#define DC5B_clear_mask                          0xCF

#define DC5B1                                    0x5
#define DC5B1_address                            0x31E
#define DC5B1_position                           0x5
#define DC5B1_size                               0x1
#define DC5B1_value_mask                         0x20
#define DC5B1_clear_mask                         0xDF


/*--------------------------------------------------------------#
| LATF                                                    0x38C |
#---------------------------------------------------------------#
| LATF7 | LATF6 | LATF5 | LATF4 | LATF3 | LATF2 | LATF1 | LATF0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LATF                                     0x0
#define LATF_address                             0x38C
#define LATF_position                            0x0
#define LATF_size                                0x8
#define LATF_value_mask                          0xFF
#define LATF_clear_mask                          0x0

#define LATF0                                    0x0
#define LATF0_address                            0x38C
#define LATF0_position                           0x0
#define LATF0_size                               0x1
#define LATF0_value_mask                         0x1
#define LATF0_clear_mask                         0xFE

#define LATF1                                    0x1
#define LATF1_address                            0x38C
#define LATF1_position                           0x1
#define LATF1_size                               0x1
#define LATF1_value_mask                         0x2
#define LATF1_clear_mask                         0xFD

#define LATF2                                    0x2
#define LATF2_address                            0x38C
#define LATF2_position                           0x2
#define LATF2_size                               0x1
#define LATF2_value_mask                         0x4
#define LATF2_clear_mask                         0xFB

#define LATF3                                    0x3
#define LATF3_address                            0x38C
#define LATF3_position                           0x3
#define LATF3_size                               0x1
#define LATF3_value_mask                         0x8
#define LATF3_clear_mask                         0xF7

#define LATF4                                    0x4
#define LATF4_address                            0x38C
#define LATF4_position                           0x4
#define LATF4_size                               0x1
#define LATF4_value_mask                         0x10
#define LATF4_clear_mask                         0xEF

#define LATF5                                    0x5
#define LATF5_address                            0x38C
#define LATF5_position                           0x5
#define LATF5_size                               0x1
#define LATF5_value_mask                         0x20
#define LATF5_clear_mask                         0xDF

#define LATF6                                    0x6
#define LATF6_address                            0x38C
#define LATF6_position                           0x6
#define LATF6_size                               0x1
#define LATF6_value_mask                         0x40
#define LATF6_clear_mask                         0xBF

#define LATF7                                    0x7
#define LATF7_address                            0x38C
#define LATF7_position                           0x7
#define LATF7_size                               0x1
#define LATF7_value_mask                         0x80
#define LATF7_clear_mask                         0x7F


/*--------------------------------------------------#
| LATG                                        0x38D |
#---------------------------------------------------#
| - | - | - | LATG4 | LATG3 | LATG2 | LATG1 | LATG0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------*/

#define LATG                                     0x0
#define LATG_address                             0x38D
#define LATG_position                            0x0
#define LATG_size                                0x8
#define LATG_value_mask                          0xFF
#define LATG_clear_mask                          0x0

#define LATG0                                    0x0
#define LATG0_address                            0x38D
#define LATG0_position                           0x0
#define LATG0_size                               0x1
#define LATG0_value_mask                         0x1
#define LATG0_clear_mask                         0xFE

#define LATG1                                    0x1
#define LATG1_address                            0x38D
#define LATG1_position                           0x1
#define LATG1_size                               0x1
#define LATG1_value_mask                         0x2
#define LATG1_clear_mask                         0xFD

#define LATG2                                    0x2
#define LATG2_address                            0x38D
#define LATG2_position                           0x2
#define LATG2_size                               0x1
#define LATG2_value_mask                         0x4
#define LATG2_clear_mask                         0xFB

#define LATG3                                    0x3
#define LATG3_address                            0x38D
#define LATG3_position                           0x3
#define LATG3_size                               0x1
#define LATG3_value_mask                         0x8
#define LATG3_clear_mask                         0xF7

#define LATG4                                    0x4
#define LATG4_address                            0x38D
#define LATG4_position                           0x4
#define LATG4_size                               0x1
#define LATG4_value_mask                         0x10
#define LATG4_clear_mask                         0xEF


/*----------------------------------------------------------------------#
| IOCBP                                                           0x394 |
#-----------------------------------------------------------------------#
| IOCBP7 | IOCBP6 | IOCBP5 | IOCBP4 | IOCBP3 | IOCBP2 | IOCBP1 | IOCBP0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define IOCBP                                    0x0
#define IOCBP_address                            0x394
#define IOCBP_position                           0x0
#define IOCBP_size                               0x8
#define IOCBP_value_mask                         0xFF
#define IOCBP_clear_mask                         0x0

#define IOCBP0                                   0x0
#define IOCBP0_address                           0x394
#define IOCBP0_position                          0x0
#define IOCBP0_size                              0x1
#define IOCBP0_value_mask                        0x1
#define IOCBP0_clear_mask                        0xFE

#define IOCBP1                                   0x1
#define IOCBP1_address                           0x394
#define IOCBP1_position                          0x1
#define IOCBP1_size                              0x1
#define IOCBP1_value_mask                        0x2
#define IOCBP1_clear_mask                        0xFD

#define IOCBP2                                   0x2
#define IOCBP2_address                           0x394
#define IOCBP2_position                          0x2
#define IOCBP2_size                              0x1
#define IOCBP2_value_mask                        0x4
#define IOCBP2_clear_mask                        0xFB

#define IOCBP3                                   0x3
#define IOCBP3_address                           0x394
#define IOCBP3_position                          0x3
#define IOCBP3_size                              0x1
#define IOCBP3_value_mask                        0x8
#define IOCBP3_clear_mask                        0xF7

#define IOCBP4                                   0x4
#define IOCBP4_address                           0x394
#define IOCBP4_position                          0x4
#define IOCBP4_size                              0x1
#define IOCBP4_value_mask                        0x10
#define IOCBP4_clear_mask                        0xEF

#define IOCBP5                                   0x5
#define IOCBP5_address                           0x394
#define IOCBP5_position                          0x5
#define IOCBP5_size                              0x1
#define IOCBP5_value_mask                        0x20
#define IOCBP5_clear_mask                        0xDF

#define IOCBP6                                   0x6
#define IOCBP6_address                           0x394
#define IOCBP6_position                          0x6
#define IOCBP6_size                              0x1
#define IOCBP6_value_mask                        0x40
#define IOCBP6_clear_mask                        0xBF

#define IOCBP7                                   0x7
#define IOCBP7_address                           0x394
#define IOCBP7_position                          0x7
#define IOCBP7_size                              0x1
#define IOCBP7_value_mask                        0x80
#define IOCBP7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| IOCBN                                                           0x395 |
#-----------------------------------------------------------------------#
| IOCBN7 | IOCBN6 | IOCBN5 | IOCBN4 | IOCBN3 | IOCBN2 | IOCBN1 | IOCBN0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define IOCBN0                                   0x0
#define IOCBN0_address                           0x395
#define IOCBN0_position                          0x0
#define IOCBN0_size                              0x1
#define IOCBN0_value_mask                        0x1
#define IOCBN0_clear_mask                        0xFE

#define IOCBN                                    0x0
#define IOCBN_address                            0x395
#define IOCBN_position                           0x0
#define IOCBN_size                               0x8
#define IOCBN_value_mask                         0xFF
#define IOCBN_clear_mask                         0x0

#define IOCBN1                                   0x1
#define IOCBN1_address                           0x395
#define IOCBN1_position                          0x1
#define IOCBN1_size                              0x1
#define IOCBN1_value_mask                        0x2
#define IOCBN1_clear_mask                        0xFD

#define IOCBN2                                   0x2
#define IOCBN2_address                           0x395
#define IOCBN2_position                          0x2
#define IOCBN2_size                              0x1
#define IOCBN2_value_mask                        0x4
#define IOCBN2_clear_mask                        0xFB

#define IOCBN3                                   0x3
#define IOCBN3_address                           0x395
#define IOCBN3_position                          0x3
#define IOCBN3_size                              0x1
#define IOCBN3_value_mask                        0x8
#define IOCBN3_clear_mask                        0xF7

#define IOCBN4                                   0x4
#define IOCBN4_address                           0x395
#define IOCBN4_position                          0x4
#define IOCBN4_size                              0x1
#define IOCBN4_value_mask                        0x10
#define IOCBN4_clear_mask                        0xEF

#define IOCBN5                                   0x5
#define IOCBN5_address                           0x395
#define IOCBN5_position                          0x5
#define IOCBN5_size                              0x1
#define IOCBN5_value_mask                        0x20
#define IOCBN5_clear_mask                        0xDF

#define IOCBN6                                   0x6
#define IOCBN6_address                           0x395
#define IOCBN6_position                          0x6
#define IOCBN6_size                              0x1
#define IOCBN6_value_mask                        0x40
#define IOCBN6_clear_mask                        0xBF

#define IOCBN7                                   0x7
#define IOCBN7_address                           0x395
#define IOCBN7_position                          0x7
#define IOCBN7_size                              0x1
#define IOCBN7_value_mask                        0x80
#define IOCBN7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| IOCBF                                                           0x396 |
#-----------------------------------------------------------------------#
| IOCBF7 | IOCBF6 | IOCBF5 | IOCBF4 | IOCBF3 | IOCBF2 | IOCBF1 | IOCBF0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define IOCBF0                                   0x0
#define IOCBF0_address                           0x396
#define IOCBF0_position                          0x0
#define IOCBF0_size                              0x1
#define IOCBF0_value_mask                        0x1
#define IOCBF0_clear_mask                        0xFE

#define IOCBF                                    0x0
#define IOCBF_address                            0x396
#define IOCBF_position                           0x0
#define IOCBF_size                               0x8
#define IOCBF_value_mask                         0xFF
#define IOCBF_clear_mask                         0x0

#define IOCBF1                                   0x1
#define IOCBF1_address                           0x396
#define IOCBF1_position                          0x1
#define IOCBF1_size                              0x1
#define IOCBF1_value_mask                        0x2
#define IOCBF1_clear_mask                        0xFD

#define IOCBF2                                   0x2
#define IOCBF2_address                           0x396
#define IOCBF2_position                          0x2
#define IOCBF2_size                              0x1
#define IOCBF2_value_mask                        0x4
#define IOCBF2_clear_mask                        0xFB

#define IOCBF3                                   0x3
#define IOCBF3_address                           0x396
#define IOCBF3_position                          0x3
#define IOCBF3_size                              0x1
#define IOCBF3_value_mask                        0x8
#define IOCBF3_clear_mask                        0xF7

#define IOCBF4                                   0x4
#define IOCBF4_address                           0x396
#define IOCBF4_position                          0x4
#define IOCBF4_size                              0x1
#define IOCBF4_value_mask                        0x10
#define IOCBF4_clear_mask                        0xEF

#define IOCBF5                                   0x5
#define IOCBF5_address                           0x396
#define IOCBF5_position                          0x5
#define IOCBF5_size                              0x1
#define IOCBF5_value_mask                        0x20
#define IOCBF5_clear_mask                        0xDF

#define IOCBF6                                   0x6
#define IOCBF6_address                           0x396
#define IOCBF6_position                          0x6
#define IOCBF6_size                              0x1
#define IOCBF6_value_mask                        0x40
#define IOCBF6_clear_mask                        0xBF

#define IOCBF7                                   0x7
#define IOCBF7_address                           0x396
#define IOCBF7_position                          0x7
#define IOCBF7_size                              0x1
#define IOCBF7_value_mask                        0x80
#define IOCBF7_clear_mask                        0x7F


/*--------------------------------------------------------------#
| ANSELF                                                  0x40C |
#---------------------------------------------------------------#
| ANSF7 | ANSF6 | ANSF5 | ANSF4 | ANSF3 | ANSF2 | ANSF1 | ANSF0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define ANSELF                                   0x0
#define ANSELF_address                           0x40C
#define ANSELF_position                          0x0
#define ANSELF_size                              0x8
#define ANSELF_value_mask                        0xFF
#define ANSELF_clear_mask                        0x0

#define ANSF0                                    0x0
#define ANSF0_address                            0x40C
#define ANSF0_position                           0x0
#define ANSF0_size                               0x1
#define ANSF0_value_mask                         0x1
#define ANSF0_clear_mask                         0xFE

#define ANSF1                                    0x1
#define ANSF1_address                            0x40C
#define ANSF1_position                           0x1
#define ANSF1_size                               0x1
#define ANSF1_value_mask                         0x2
#define ANSF1_clear_mask                         0xFD

#define ANSF2                                    0x2
#define ANSF2_address                            0x40C
#define ANSF2_position                           0x2
#define ANSF2_size                               0x1
#define ANSF2_value_mask                         0x4
#define ANSF2_clear_mask                         0xFB

#define ANSF3                                    0x3
#define ANSF3_address                            0x40C
#define ANSF3_position                           0x3
#define ANSF3_size                               0x1
#define ANSF3_value_mask                         0x8
#define ANSF3_clear_mask                         0xF7

#define ANSF4                                    0x4
#define ANSF4_address                            0x40C
#define ANSF4_position                           0x4
#define ANSF4_size                               0x1
#define ANSF4_value_mask                         0x10
#define ANSF4_clear_mask                         0xEF

#define ANSF5                                    0x5
#define ANSF5_address                            0x40C
#define ANSF5_position                           0x5
#define ANSF5_size                               0x1
#define ANSF5_value_mask                         0x20
#define ANSF5_clear_mask                         0xDF

#define ANSF6                                    0x6
#define ANSF6_address                            0x40C
#define ANSF6_position                           0x6
#define ANSF6_size                               0x1
#define ANSF6_value_mask                         0x40
#define ANSF6_clear_mask                         0xBF

#define ANSF7                                    0x7
#define ANSF7_address                            0x40C
#define ANSF7_position                           0x7
#define ANSF7_size                               0x1
#define ANSF7_value_mask                         0x80
#define ANSF7_clear_mask                         0x7F


/*----------------------------------------------#
| ANSELG                                  0x40D |
#-----------------------------------------------#
| - | - | - | ANSG4 | ANSG3 | ANSG2 | ANSG1 | - |
#-----------------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2     | 1     | 0 |
#----------------------------------------------*/

#define ANSELG                                   0x0
#define ANSELG_address                           0x40D
#define ANSELG_position                          0x0
#define ANSELG_size                              0x8
#define ANSELG_value_mask                        0xFF
#define ANSELG_clear_mask                        0x0

#define ANSG1                                    0x1
#define ANSG1_address                            0x40D
#define ANSG1_position                           0x1
#define ANSG1_size                               0x1
#define ANSG1_value_mask                         0x2
#define ANSG1_clear_mask                         0xFD

#define ANSG2                                    0x2
#define ANSG2_address                            0x40D
#define ANSG2_position                           0x2
#define ANSG2_size                               0x1
#define ANSG2_value_mask                         0x4
#define ANSG2_clear_mask                         0xFB

#define ANSG3                                    0x3
#define ANSG3_address                            0x40D
#define ANSG3_position                           0x3
#define ANSG3_size                               0x1
#define ANSG3_value_mask                         0x8
#define ANSG3_clear_mask                         0xF7

#define ANSG4                                    0x4
#define ANSG4_address                            0x40D
#define ANSG4_position                           0x4
#define ANSG4_size                               0x1
#define ANSG4_value_mask                         0x10
#define ANSG4_clear_mask                         0xEF


/*------------------------------#
| TMR3L                   0x411 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR3L                                    0x0
#define TMR3L_address                            0x411
#define TMR3L_position                           0x0
#define TMR3L_size                               0x8
#define TMR3L_value_mask                         0xFF
#define TMR3L_clear_mask                         0x0


/*------------------------------#
| TMR3H                   0x412 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR3H                                    0x0
#define TMR3H_address                            0x412
#define TMR3H_position                           0x0
#define TMR3H_size                               0x8
#define TMR3H_value_mask                         0xFF
#define TMR3H_clear_mask                         0x0


/*-----------------------------------------------------------------------#
| T3CON                                                            0x413 |
#------------------------------------------------------------------------#
| TMR3CS1 | TMR3CS0 | T3CKPS1 | T3CKPS0 | T3OSCEN | nT3SYNC | - | TMR3ON |
#------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1 | 0      |
#-----------------------------------------------------------------------*/

#define T3CON                                    0x0
#define T3CON_address                            0x413
#define T3CON_position                           0x0
#define T3CON_size                               0x8
#define T3CON_value_mask                         0xFF
#define T3CON_clear_mask                         0x0

#define TMR3ON                                   0x0
#define TMR3ON_address                           0x413
#define TMR3ON_position                          0x0
#define TMR3ON_size                              0x1
#define TMR3ON_value_mask                        0x1
#define TMR3ON_clear_mask                        0xFE

#define nT3SYNC                                  0x2
#define nT3SYNC_address                          0x413
#define nT3SYNC_position                         0x2
#define nT3SYNC_size                             0x1
#define nT3SYNC_value_mask                       0x4
#define nT3SYNC_clear_mask                       0xFB

#define T3OSCEN                                  0x3
#define T3OSCEN_address                          0x413
#define T3OSCEN_position                         0x3
#define T3OSCEN_size                             0x1
#define T3OSCEN_value_mask                       0x8
#define T3OSCEN_clear_mask                       0xF7

#define T3CON_SOSCEN                             0x3
#define T3CON_SOSCEN_address                     0x413
#define T3CON_SOSCEN_position                    0x3
#define T3CON_SOSCEN_size                        0x1
#define T3CON_SOSCEN_value_mask                  0x8
#define T3CON_SOSCEN_clear_mask                  0xF7

#define T3CKPS                                   0x4
#define T3CKPS_address                           0x413
#define T3CKPS_position                          0x4
#define T3CKPS_size                              0x2
#define T3CKPS_value_mask                        0x30
#define T3CKPS_clear_mask                        0xCF

#define T3CKPS0                                  0x4
#define T3CKPS0_address                          0x413
#define T3CKPS0_position                         0x4
#define T3CKPS0_size                             0x1
#define T3CKPS0_value_mask                       0x10
#define T3CKPS0_clear_mask                       0xEF

#define T3CKPS1                                  0x5
#define T3CKPS1_address                          0x413
#define T3CKPS1_position                         0x5
#define T3CKPS1_size                             0x1
#define T3CKPS1_value_mask                       0x20
#define T3CKPS1_clear_mask                       0xDF

#define TMR3CS0                                  0x6
#define TMR3CS0_address                          0x413
#define TMR3CS0_position                         0x6
#define TMR3CS0_size                             0x1
#define TMR3CS0_value_mask                       0x40
#define TMR3CS0_clear_mask                       0xBF

#define TMR3CS                                   0x6
#define TMR3CS_address                           0x413
#define TMR3CS_position                          0x6
#define TMR3CS_size                              0x2
#define TMR3CS_value_mask                        0xC0
#define TMR3CS_clear_mask                        0x3F

#define TMR3CS1                                  0x7
#define TMR3CS1_address                          0x413
#define TMR3CS1_position                         0x7
#define TMR3CS1_size                             0x1
#define TMR3CS1_value_mask                       0x80
#define TMR3CS1_clear_mask                       0x7F


/*--------------------------------------------------------------------------#
| T3GCON                                                              0x414 |
#---------------------------------------------------------------------------#
| TMR3GE | T3GPOL | T3GTM | T3GSPM | T3GGO_nDONE | T3GVAL | T3GSS1 | T3GSS0 |
#---------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3           | 2      | 1      | 0      |
#--------------------------------------------------------------------------*/

#define T3GCON                                   0x0
#define T3GCON_address                           0x414
#define T3GCON_position                          0x0
#define T3GCON_size                              0x8
#define T3GCON_value_mask                        0xFF
#define T3GCON_clear_mask                        0x0

#define T3GSS0                                   0x0
#define T3GSS0_address                           0x414
#define T3GSS0_position                          0x0
#define T3GSS0_size                              0x1
#define T3GSS0_value_mask                        0x1
#define T3GSS0_clear_mask                        0xFE

#define T3GSS                                    0x0
#define T3GSS_address                            0x414
#define T3GSS_position                           0x0
#define T3GSS_size                               0x2
#define T3GSS_value_mask                         0x3
#define T3GSS_clear_mask                         0xFC

#define T3GSS1                                   0x1
#define T3GSS1_address                           0x414
#define T3GSS1_position                          0x1
#define T3GSS1_size                              0x1
#define T3GSS1_value_mask                        0x2
#define T3GSS1_clear_mask                        0xFD

#define T3GVAL                                   0x2
#define T3GVAL_address                           0x414
#define T3GVAL_position                          0x2
#define T3GVAL_size                              0x1
#define T3GVAL_value_mask                        0x4
#define T3GVAL_clear_mask                        0xFB

#define T3GGO_nDONE                              0x3
#define T3GGO_nDONE_address                      0x414
#define T3GGO_nDONE_position                     0x3
#define T3GGO_nDONE_size                         0x1
#define T3GGO_nDONE_value_mask                   0x8
#define T3GGO_nDONE_clear_mask                   0xF7

#define T3GSPM                                   0x4
#define T3GSPM_address                           0x414
#define T3GSPM_position                          0x4
#define T3GSPM_size                              0x1
#define T3GSPM_value_mask                        0x10
#define T3GSPM_clear_mask                        0xEF

#define T3GTM                                    0x5
#define T3GTM_address                            0x414
#define T3GTM_position                           0x5
#define T3GTM_size                               0x1
#define T3GTM_value_mask                         0x20
#define T3GTM_clear_mask                         0xDF

#define T3GPOL                                   0x6
#define T3GPOL_address                           0x414
#define T3GPOL_position                          0x6
#define T3GPOL_size                              0x1
#define T3GPOL_value_mask                        0x40
#define T3GPOL_clear_mask                        0xBF

#define TMR3GE                                   0x7
#define TMR3GE_address                           0x414
#define TMR3GE_position                          0x7
#define TMR3GE_size                              0x1
#define TMR3GE_value_mask                        0x80
#define TMR3GE_clear_mask                        0x7F


/*------------------------------#
| TMR4                    0x415 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR4                                     0x0
#define TMR4_address                             0x415
#define TMR4_position                            0x0
#define TMR4_size                                0x8
#define TMR4_value_mask                          0xFF
#define TMR4_clear_mask                          0x0


/*------------------------------#
| PR4                     0x416 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR4                                      0x0
#define PR4_address                              0x416
#define PR4_position                             0x0
#define PR4_size                                 0x8
#define PR4_value_mask                           0xFF
#define PR4_clear_mask                           0x0


/*---------------------------------------------------------------------------#
| T4CON                                                                0x417 |
#----------------------------------------------------------------------------#
| - | T4OUTPS3 | T4OUTPS2 | T4OUTPS1 | T4OUTPS0 | TMR4ON | T4CKPS1 | T4CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T4CON                                    0x0
#define T4CON_address                            0x417
#define T4CON_position                           0x0
#define T4CON_size                               0x8
#define T4CON_value_mask                         0xFF
#define T4CON_clear_mask                         0x0

#define T4CKPS0                                  0x0
#define T4CKPS0_address                          0x417
#define T4CKPS0_position                         0x0
#define T4CKPS0_size                             0x1
#define T4CKPS0_value_mask                       0x1
#define T4CKPS0_clear_mask                       0xFE

#define T4CKPS                                   0x0
#define T4CKPS_address                           0x417
#define T4CKPS_position                          0x0
#define T4CKPS_size                              0x2
#define T4CKPS_value_mask                        0x3
#define T4CKPS_clear_mask                        0xFC

#define T4CKPS1                                  0x1
#define T4CKPS1_address                          0x417
#define T4CKPS1_position                         0x1
#define T4CKPS1_size                             0x1
#define T4CKPS1_value_mask                       0x2
#define T4CKPS1_clear_mask                       0xFD

#define TMR4ON                                   0x2
#define TMR4ON_address                           0x417
#define TMR4ON_position                          0x2
#define TMR4ON_size                              0x1
#define TMR4ON_value_mask                        0x4
#define TMR4ON_clear_mask                        0xFB

#define T4OUTPS                                  0x3
#define T4OUTPS_address                          0x417
#define T4OUTPS_position                         0x3
#define T4OUTPS_size                             0x4
#define T4OUTPS_value_mask                       0x78
#define T4OUTPS_clear_mask                       0x87

#define T4OUTPS0                                 0x3
#define T4OUTPS0_address                         0x417
#define T4OUTPS0_position                        0x3
#define T4OUTPS0_size                            0x1
#define T4OUTPS0_value_mask                      0x8
#define T4OUTPS0_clear_mask                      0xF7

#define T4OUTPS1                                 0x4
#define T4OUTPS1_address                         0x417
#define T4OUTPS1_position                        0x4
#define T4OUTPS1_size                            0x1
#define T4OUTPS1_value_mask                      0x10
#define T4OUTPS1_clear_mask                      0xEF

#define T4OUTPS2                                 0x5
#define T4OUTPS2_address                         0x417
#define T4OUTPS2_position                        0x5
#define T4OUTPS2_size                            0x1
#define T4OUTPS2_value_mask                      0x20
#define T4OUTPS2_clear_mask                      0xDF

#define T4OUTPS3                                 0x6
#define T4OUTPS3_address                         0x417
#define T4OUTPS3_position                        0x6
#define T4OUTPS3_size                            0x1
#define T4OUTPS3_value_mask                      0x40
#define T4OUTPS3_clear_mask                      0xBF


/*------------------------------#
| TMR5L                   0x418 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR5L                                    0x0
#define TMR5L_address                            0x418
#define TMR5L_position                           0x0
#define TMR5L_size                               0x8
#define TMR5L_value_mask                         0xFF
#define TMR5L_clear_mask                         0x0


/*------------------------------#
| TMR5H                   0x419 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR5H                                    0x0
#define TMR5H_address                            0x419
#define TMR5H_position                           0x0
#define TMR5H_size                               0x8
#define TMR5H_value_mask                         0xFF
#define TMR5H_clear_mask                         0x0


/*-----------------------------------------------------------------------#
| T5CON                                                            0x41A |
#------------------------------------------------------------------------#
| TMR5CS1 | TMR5CS0 | T5CKPS1 | T5CKPS0 | T5OSCEN | nT5SYNC | - | TMR5ON |
#------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1 | 0      |
#-----------------------------------------------------------------------*/

#define T5CON                                    0x0
#define T5CON_address                            0x41A
#define T5CON_position                           0x0
#define T5CON_size                               0x8
#define T5CON_value_mask                         0xFF
#define T5CON_clear_mask                         0x0

#define TMR5ON                                   0x0
#define TMR5ON_address                           0x41A
#define TMR5ON_position                          0x0
#define TMR5ON_size                              0x1
#define TMR5ON_value_mask                        0x1
#define TMR5ON_clear_mask                        0xFE

#define nT5SYNC                                  0x2
#define nT5SYNC_address                          0x41A
#define nT5SYNC_position                         0x2
#define nT5SYNC_size                             0x1
#define nT5SYNC_value_mask                       0x4
#define nT5SYNC_clear_mask                       0xFB

#define T5OSCEN                                  0x3
#define T5OSCEN_address                          0x41A
#define T5OSCEN_position                         0x3
#define T5OSCEN_size                             0x1
#define T5OSCEN_value_mask                       0x8
#define T5OSCEN_clear_mask                       0xF7

#define T5CON_SOSCEN                             0x3
#define T5CON_SOSCEN_address                     0x41A
#define T5CON_SOSCEN_position                    0x3
#define T5CON_SOSCEN_size                        0x1
#define T5CON_SOSCEN_value_mask                  0x8
#define T5CON_SOSCEN_clear_mask                  0xF7

#define T5CKPS                                   0x4
#define T5CKPS_address                           0x41A
#define T5CKPS_position                          0x4
#define T5CKPS_size                              0x2
#define T5CKPS_value_mask                        0x30
#define T5CKPS_clear_mask                        0xCF

#define T5CKPS0                                  0x4
#define T5CKPS0_address                          0x41A
#define T5CKPS0_position                         0x4
#define T5CKPS0_size                             0x1
#define T5CKPS0_value_mask                       0x10
#define T5CKPS0_clear_mask                       0xEF

#define T5CKPS1                                  0x5
#define T5CKPS1_address                          0x41A
#define T5CKPS1_position                         0x5
#define T5CKPS1_size                             0x1
#define T5CKPS1_value_mask                       0x20
#define T5CKPS1_clear_mask                       0xDF

#define TMR5CS0                                  0x6
#define TMR5CS0_address                          0x41A
#define TMR5CS0_position                         0x6
#define TMR5CS0_size                             0x1
#define TMR5CS0_value_mask                       0x40
#define TMR5CS0_clear_mask                       0xBF

#define TMR5CS                                   0x6
#define TMR5CS_address                           0x41A
#define TMR5CS_position                          0x6
#define TMR5CS_size                              0x2
#define TMR5CS_value_mask                        0xC0
#define TMR5CS_clear_mask                        0x3F

#define TMR5CS1                                  0x7
#define TMR5CS1_address                          0x41A
#define TMR5CS1_position                         0x7
#define TMR5CS1_size                             0x1
#define TMR5CS1_value_mask                       0x80
#define TMR5CS1_clear_mask                       0x7F


/*--------------------------------------------------------------------------#
| T5GCON                                                              0x41B |
#---------------------------------------------------------------------------#
| TMR5GE | T5GPOL | T5GTM | T5GSPM | T5GGO_nDONE | T5GVAL | T5GSS1 | T5GSS0 |
#---------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3           | 2      | 1      | 0      |
#--------------------------------------------------------------------------*/

#define T5GCON                                   0x0
#define T5GCON_address                           0x41B
#define T5GCON_position                          0x0
#define T5GCON_size                              0x8
#define T5GCON_value_mask                        0xFF
#define T5GCON_clear_mask                        0x0

#define T5GSS                                    0x0
#define T5GSS_address                            0x41B
#define T5GSS_position                           0x0
#define T5GSS_size                               0x2
#define T5GSS_value_mask                         0x3
#define T5GSS_clear_mask                         0xFC

#define T5GSS0                                   0x0
#define T5GSS0_address                           0x41B
#define T5GSS0_position                          0x0
#define T5GSS0_size                              0x1
#define T5GSS0_value_mask                        0x1
#define T5GSS0_clear_mask                        0xFE

#define T5GSS1                                   0x1
#define T5GSS1_address                           0x41B
#define T5GSS1_position                          0x1
#define T5GSS1_size                              0x1
#define T5GSS1_value_mask                        0x2
#define T5GSS1_clear_mask                        0xFD

#define T5GVAL                                   0x2
#define T5GVAL_address                           0x41B
#define T5GVAL_position                          0x2
#define T5GVAL_size                              0x1
#define T5GVAL_value_mask                        0x4
#define T5GVAL_clear_mask                        0xFB

#define T5GGO_nDONE                              0x3
#define T5GGO_nDONE_address                      0x41B
#define T5GGO_nDONE_position                     0x3
#define T5GGO_nDONE_size                         0x1
#define T5GGO_nDONE_value_mask                   0x8
#define T5GGO_nDONE_clear_mask                   0xF7

#define T5GSPM                                   0x4
#define T5GSPM_address                           0x41B
#define T5GSPM_position                          0x4
#define T5GSPM_size                              0x1
#define T5GSPM_value_mask                        0x10
#define T5GSPM_clear_mask                        0xEF

#define T5GTM                                    0x5
#define T5GTM_address                            0x41B
#define T5GTM_position                           0x5
#define T5GTM_size                               0x1
#define T5GTM_value_mask                         0x20
#define T5GTM_clear_mask                         0xDF

#define T5GPOL                                   0x6
#define T5GPOL_address                           0x41B
#define T5GPOL_position                          0x6
#define T5GPOL_size                              0x1
#define T5GPOL_value_mask                        0x40
#define T5GPOL_clear_mask                        0xBF

#define TMR5GE                                   0x7
#define TMR5GE_address                           0x41B
#define TMR5GE_position                          0x7
#define TMR5GE_size                              0x1
#define TMR5GE_value_mask                        0x80
#define TMR5GE_clear_mask                        0x7F


/*------------------------------#
| TMR6                    0x41C |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR6                                     0x0
#define TMR6_address                             0x41C
#define TMR6_position                            0x0
#define TMR6_size                                0x8
#define TMR6_value_mask                          0xFF
#define TMR6_clear_mask                          0x0


/*------------------------------#
| PR6                     0x41D |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR6                                      0x0
#define PR6_address                              0x41D
#define PR6_position                             0x0
#define PR6_size                                 0x8
#define PR6_value_mask                           0xFF
#define PR6_clear_mask                           0x0


/*---------------------------------------------------------------------------#
| T6CON                                                                0x41E |
#----------------------------------------------------------------------------#
| - | T6OUTPS3 | T6OUTPS2 | T6OUTPS1 | T6OUTPS0 | TMR6ON | T6CKPS1 | T6CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T6CON                                    0x0
#define T6CON_address                            0x41E
#define T6CON_position                           0x0
#define T6CON_size                               0x8
#define T6CON_value_mask                         0xFF
#define T6CON_clear_mask                         0x0

#define T6CKPS0                                  0x0
#define T6CKPS0_address                          0x41E
#define T6CKPS0_position                         0x0
#define T6CKPS0_size                             0x1
#define T6CKPS0_value_mask                       0x1
#define T6CKPS0_clear_mask                       0xFE

#define T6CKPS                                   0x0
#define T6CKPS_address                           0x41E
#define T6CKPS_position                          0x0
#define T6CKPS_size                              0x2
#define T6CKPS_value_mask                        0x3
#define T6CKPS_clear_mask                        0xFC

#define T6CKPS1                                  0x1
#define T6CKPS1_address                          0x41E
#define T6CKPS1_position                         0x1
#define T6CKPS1_size                             0x1
#define T6CKPS1_value_mask                       0x2
#define T6CKPS1_clear_mask                       0xFD

#define TMR6ON                                   0x2
#define TMR6ON_address                           0x41E
#define TMR6ON_position                          0x2
#define TMR6ON_size                              0x1
#define TMR6ON_value_mask                        0x4
#define TMR6ON_clear_mask                        0xFB

#define T6OUTPS0                                 0x3
#define T6OUTPS0_address                         0x41E
#define T6OUTPS0_position                        0x3
#define T6OUTPS0_size                            0x1
#define T6OUTPS0_value_mask                      0x8
#define T6OUTPS0_clear_mask                      0xF7

#define T6OUTPS                                  0x3
#define T6OUTPS_address                          0x41E
#define T6OUTPS_position                         0x3
#define T6OUTPS_size                             0x4
#define T6OUTPS_value_mask                       0x78
#define T6OUTPS_clear_mask                       0x87

#define T6OUTPS1                                 0x4
#define T6OUTPS1_address                         0x41E
#define T6OUTPS1_position                        0x4
#define T6OUTPS1_size                            0x1
#define T6OUTPS1_value_mask                      0x10
#define T6OUTPS1_clear_mask                      0xEF

#define T6OUTPS2                                 0x5
#define T6OUTPS2_address                         0x41E
#define T6OUTPS2_position                        0x5
#define T6OUTPS2_size                            0x1
#define T6OUTPS2_value_mask                      0x20
#define T6OUTPS2_clear_mask                      0xDF

#define T6OUTPS3                                 0x6
#define T6OUTPS3_address                         0x41E
#define T6OUTPS3_position                        0x6
#define T6OUTPS3_size                            0x1
#define T6OUTPS3_value_mask                      0x40
#define T6OUTPS3_clear_mask                      0xBF


/*----------------------------------#
| WPUG                        0x48D |
#-----------------------------------#
| - | - | WPUG5 | - | - | - | - | - |
#-----------------------------------#
| 7 | 6 | 5     | 4 | 3 | 2 | 1 | 0 |
#----------------------------------*/

#define WPUG                                     0x0
#define WPUG_address                             0x48D
#define WPUG_position                            0x0
#define WPUG_size                                0x8
#define WPUG_value_mask                          0xFF
#define WPUG_clear_mask                          0x0

#define WPUG5                                    0x5
#define WPUG5_address                            0x48D
#define WPUG5_position                           0x5
#define WPUG5_size                               0x1
#define WPUG5_value_mask                         0x20
#define WPUG5_clear_mask                         0xDF


/*------------------------------#
| RC2REG                  0x491 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RC2REG                                   0x0
#define RC2REG_address                           0x491
#define RC2REG_position                          0x0
#define RC2REG_size                              0x8
#define RC2REG_value_mask                        0xFF
#define RC2REG_clear_mask                        0x0


/*------------------------------#
| TX2REG                  0x492 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TX2REG                                   0x0
#define TX2REG_address                           0x492
#define TX2REG_position                          0x0
#define TX2REG_size                              0x8
#define TX2REG_value_mask                        0xFF
#define TX2REG_clear_mask                        0x0


/*------------------------------#
| SP2BRGL                 0x493 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SP2BRGL                                  0x0
#define SP2BRGL_address                          0x493
#define SP2BRGL_position                         0x0
#define SP2BRGL_size                             0x8
#define SP2BRGL_value_mask                       0xFF
#define SP2BRGL_clear_mask                       0x0


/*------------------------------#
| SP2BRGH                 0x494 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SP2BRGH                                  0x0
#define SP2BRGH_address                          0x494
#define SP2BRGH_position                         0x0
#define SP2BRGH_size                             0x8
#define SP2BRGH_value_mask                       0xFF
#define SP2BRGH_clear_mask                       0x0


/*--------------------------------------------------------------------------------------------------------------#
| RC2STA                                                                                                  0x495 |
#---------------------------------------------------------------------------------------------------------------#
| RC2STA_SPEN | RC2STA_RX9 | RC2STA_SREN | RC2STA_CREN | RC2STA_ADDEN | RC2STA_FERR | RC2STA_OERR | RC2STA_RX9D |
#---------------------------------------------------------------------------------------------------------------#
| 7           | 6          | 5           | 4           | 3            | 2           | 1           | 0           |
#--------------------------------------------------------------------------------------------------------------*/

#define RC2STA                                   0x0
#define RC2STA_address                           0x495
#define RC2STA_position                          0x0
#define RC2STA_size                              0x8
#define RC2STA_value_mask                        0xFF
#define RC2STA_clear_mask                        0x0

#define RC2STA_RX9D                              0x0
#define RC2STA_RX9D_address                      0x495
#define RC2STA_RX9D_position                     0x0
#define RC2STA_RX9D_size                         0x1
#define RC2STA_RX9D_value_mask                   0x1
#define RC2STA_RX9D_clear_mask                   0xFE

#define RC2STA_OERR                              0x1
#define RC2STA_OERR_address                      0x495
#define RC2STA_OERR_position                     0x1
#define RC2STA_OERR_size                         0x1
#define RC2STA_OERR_value_mask                   0x2
#define RC2STA_OERR_clear_mask                   0xFD

#define RC2STA_FERR                              0x2
#define RC2STA_FERR_address                      0x495
#define RC2STA_FERR_position                     0x2
#define RC2STA_FERR_size                         0x1
#define RC2STA_FERR_value_mask                   0x4
#define RC2STA_FERR_clear_mask                   0xFB

#define RC2STA_ADDEN                             0x3
#define RC2STA_ADDEN_address                     0x495
#define RC2STA_ADDEN_position                    0x3
#define RC2STA_ADDEN_size                        0x1
#define RC2STA_ADDEN_value_mask                  0x8
#define RC2STA_ADDEN_clear_mask                  0xF7

#define RC2STA_CREN                              0x4
#define RC2STA_CREN_address                      0x495
#define RC2STA_CREN_position                     0x4
#define RC2STA_CREN_size                         0x1
#define RC2STA_CREN_value_mask                   0x10
#define RC2STA_CREN_clear_mask                   0xEF

#define RC2STA_SREN                              0x5
#define RC2STA_SREN_address                      0x495
#define RC2STA_SREN_position                     0x5
#define RC2STA_SREN_size                         0x1
#define RC2STA_SREN_value_mask                   0x20
#define RC2STA_SREN_clear_mask                   0xDF

#define RC2STA_RX9                               0x6
#define RC2STA_RX9_address                       0x495
#define RC2STA_RX9_position                      0x6
#define RC2STA_RX9_size                          0x1
#define RC2STA_RX9_value_mask                    0x40
#define RC2STA_RX9_clear_mask                    0xBF

#define RC2STA_SPEN                              0x7
#define RC2STA_SPEN_address                      0x495
#define RC2STA_SPEN_position                     0x7
#define RC2STA_SPEN_size                         0x1
#define RC2STA_SPEN_value_mask                   0x80
#define RC2STA_SPEN_clear_mask                   0x7F


/*--------------------------------------------------------------------------------------------------------------#
| TX2STA                                                                                                  0x496 |
#---------------------------------------------------------------------------------------------------------------#
| TX2STA_CSRC | TX2STA_TX9 | TX2STA_TXEN | TX2STA_SYNC | TX2STA_SENDB | TX2STA_BRGH | TX2STA_TRMT | TX2STA_TX9D |
#---------------------------------------------------------------------------------------------------------------#
| 7           | 6          | 5           | 4           | 3            | 2           | 1           | 0           |
#--------------------------------------------------------------------------------------------------------------*/

#define TX2STA                                   0x0
#define TX2STA_address                           0x496
#define TX2STA_position                          0x0
#define TX2STA_size                              0x8
#define TX2STA_value_mask                        0xFF
#define TX2STA_clear_mask                        0x0

#define TX2STA_TX9D                              0x0
#define TX2STA_TX9D_address                      0x496
#define TX2STA_TX9D_position                     0x0
#define TX2STA_TX9D_size                         0x1
#define TX2STA_TX9D_value_mask                   0x1
#define TX2STA_TX9D_clear_mask                   0xFE

#define TX2STA_TRMT                              0x1
#define TX2STA_TRMT_address                      0x496
#define TX2STA_TRMT_position                     0x1
#define TX2STA_TRMT_size                         0x1
#define TX2STA_TRMT_value_mask                   0x2
#define TX2STA_TRMT_clear_mask                   0xFD

#define TX2STA_BRGH                              0x2
#define TX2STA_BRGH_address                      0x496
#define TX2STA_BRGH_position                     0x2
#define TX2STA_BRGH_size                         0x1
#define TX2STA_BRGH_value_mask                   0x4
#define TX2STA_BRGH_clear_mask                   0xFB

#define TX2STA_SENDB                             0x3
#define TX2STA_SENDB_address                     0x496
#define TX2STA_SENDB_position                    0x3
#define TX2STA_SENDB_size                        0x1
#define TX2STA_SENDB_value_mask                  0x8
#define TX2STA_SENDB_clear_mask                  0xF7

#define TX2STA_SYNC                              0x4
#define TX2STA_SYNC_address                      0x496
#define TX2STA_SYNC_position                     0x4
#define TX2STA_SYNC_size                         0x1
#define TX2STA_SYNC_value_mask                   0x10
#define TX2STA_SYNC_clear_mask                   0xEF

#define TX2STA_TXEN                              0x5
#define TX2STA_TXEN_address                      0x496
#define TX2STA_TXEN_position                     0x5
#define TX2STA_TXEN_size                         0x1
#define TX2STA_TXEN_value_mask                   0x20
#define TX2STA_TXEN_clear_mask                   0xDF

#define TX2STA_TX9                               0x6
#define TX2STA_TX9_address                       0x496
#define TX2STA_TX9_position                      0x6
#define TX2STA_TX9_size                          0x1
#define TX2STA_TX9_value_mask                    0x40
#define TX2STA_TX9_clear_mask                    0xBF

#define TX2STA_CSRC                              0x7
#define TX2STA_CSRC_address                      0x496
#define TX2STA_CSRC_position                     0x7
#define TX2STA_CSRC_size                         0x1
#define TX2STA_CSRC_value_mask                   0x80
#define TX2STA_CSRC_clear_mask                   0x7F


/*----------------------------------------------------------------------------------------------------------#
| BAUD2CON                                                                                            0x497 |
#-----------------------------------------------------------------------------------------------------------#
| BAUD2CON_ABDOVF | BAUD2CON_RCIDL | - | BAUD2CON_SCKP | BAUD2CON_BRG16 | - | BAUD2CON_WUE | BAUD2CON_ABDEN |
#-----------------------------------------------------------------------------------------------------------#
| 7               | 6              | 5 | 4             | 3              | 2 | 1            | 0              |
#----------------------------------------------------------------------------------------------------------*/

#define BAUD2CON                                 0x0
#define BAUD2CON_address                         0x497
#define BAUD2CON_position                        0x0
#define BAUD2CON_size                            0x8
#define BAUD2CON_value_mask                      0xFF
#define BAUD2CON_clear_mask                      0x0

#define BAUD2CON_ABDEN                           0x0
#define BAUD2CON_ABDEN_address                   0x497
#define BAUD2CON_ABDEN_position                  0x0
#define BAUD2CON_ABDEN_size                      0x1
#define BAUD2CON_ABDEN_value_mask                0x1
#define BAUD2CON_ABDEN_clear_mask                0xFE

#define BAUD2CON_WUE                             0x1
#define BAUD2CON_WUE_address                     0x497
#define BAUD2CON_WUE_position                    0x1
#define BAUD2CON_WUE_size                        0x1
#define BAUD2CON_WUE_value_mask                  0x2
#define BAUD2CON_WUE_clear_mask                  0xFD

#define BAUD2CON_BRG16                           0x3
#define BAUD2CON_BRG16_address                   0x497
#define BAUD2CON_BRG16_position                  0x3
#define BAUD2CON_BRG16_size                      0x1
#define BAUD2CON_BRG16_value_mask                0x8
#define BAUD2CON_BRG16_clear_mask                0xF7

#define BAUD2CON_SCKP                            0x4
#define BAUD2CON_SCKP_address                    0x497
#define BAUD2CON_SCKP_position                   0x4
#define BAUD2CON_SCKP_size                       0x1
#define BAUD2CON_SCKP_value_mask                 0x10
#define BAUD2CON_SCKP_clear_mask                 0xEF

#define BAUD2CON_RCIDL                           0x6
#define BAUD2CON_RCIDL_address                   0x497
#define BAUD2CON_RCIDL_position                  0x6
#define BAUD2CON_RCIDL_size                      0x1
#define BAUD2CON_RCIDL_value_mask                0x40
#define BAUD2CON_RCIDL_clear_mask                0xBF

#define BAUD2CON_ABDOVF                          0x7
#define BAUD2CON_ABDOVF_address                  0x497
#define BAUD2CON_ABDOVF_position                 0x7
#define BAUD2CON_ABDOVF_size                     0x1
#define BAUD2CON_ABDOVF_value_mask               0x80
#define BAUD2CON_ABDOVF_clear_mask               0x7F


/*------------------------------#
| TMR8                    0x595 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR8                                     0x0
#define TMR8_address                             0x595
#define TMR8_position                            0x0
#define TMR8_size                                0x8
#define TMR8_value_mask                          0xFF
#define TMR8_clear_mask                          0x0


/*------------------------------#
| PR8                     0x596 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR8                                      0x0
#define PR8_address                              0x596
#define PR8_position                             0x0
#define PR8_size                                 0x8
#define PR8_value_mask                           0xFF
#define PR8_clear_mask                           0x0


/*---------------------------------------------------------------------------#
| T8CON                                                                0x597 |
#----------------------------------------------------------------------------#
| - | T8OUTPS3 | T8OUTPS2 | T8OUTPS1 | T8OUTPS0 | TMR8ON | T8CKPS1 | T8CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T8CON                                    0x0
#define T8CON_address                            0x597
#define T8CON_position                           0x0
#define T8CON_size                               0x8
#define T8CON_value_mask                         0xFF
#define T8CON_clear_mask                         0x0

#define T8CKPS0                                  0x0
#define T8CKPS0_address                          0x597
#define T8CKPS0_position                         0x0
#define T8CKPS0_size                             0x1
#define T8CKPS0_value_mask                       0x1
#define T8CKPS0_clear_mask                       0xFE

#define T8CKPS                                   0x0
#define T8CKPS_address                           0x597
#define T8CKPS_position                          0x0
#define T8CKPS_size                              0x2
#define T8CKPS_value_mask                        0x3
#define T8CKPS_clear_mask                        0xFC

#define T8CKPS1                                  0x1
#define T8CKPS1_address                          0x597
#define T8CKPS1_position                         0x1
#define T8CKPS1_size                             0x1
#define T8CKPS1_value_mask                       0x2
#define T8CKPS1_clear_mask                       0xFD

#define TMR8ON                                   0x2
#define TMR8ON_address                           0x597
#define TMR8ON_position                          0x2
#define TMR8ON_size                              0x1
#define TMR8ON_value_mask                        0x4
#define TMR8ON_clear_mask                        0xFB

#define T8OUTPS                                  0x3
#define T8OUTPS_address                          0x597
#define T8OUTPS_position                         0x3
#define T8OUTPS_size                             0x4
#define T8OUTPS_value_mask                       0x78
#define T8OUTPS_clear_mask                       0x87

#define T8OUTPS0                                 0x3
#define T8OUTPS0_address                         0x597
#define T8OUTPS0_position                        0x3
#define T8OUTPS0_size                            0x1
#define T8OUTPS0_value_mask                      0x8
#define T8OUTPS0_clear_mask                      0xF7

#define T8OUTPS1                                 0x4
#define T8OUTPS1_address                         0x597
#define T8OUTPS1_position                        0x4
#define T8OUTPS1_size                            0x1
#define T8OUTPS1_value_mask                      0x10
#define T8OUTPS1_clear_mask                      0xEF

#define T8OUTPS2                                 0x5
#define T8OUTPS2_address                         0x597
#define T8OUTPS2_position                        0x5
#define T8OUTPS2_size                            0x1
#define T8OUTPS2_value_mask                      0x20
#define T8OUTPS2_clear_mask                      0xDF

#define T8OUTPS3                                 0x6
#define T8OUTPS3_address                         0x597
#define T8OUTPS3_position                        0x6
#define T8OUTPS3_size                            0x1
#define T8OUTPS3_value_mask                      0x40
#define T8OUTPS3_clear_mask                      0xBF


/*------------------------------#
| TMR10                   0x59C |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR10                                    0x0
#define TMR10_address                            0x59C
#define TMR10_position                           0x0
#define TMR10_size                               0x8
#define TMR10_value_mask                         0xFF
#define TMR10_clear_mask                         0x0


/*------------------------------#
| PR10                    0x59D |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR10                                     0x0
#define PR10_address                             0x59D
#define PR10_position                            0x0
#define PR10_size                                0x8
#define PR10_value_mask                          0xFF
#define PR10_clear_mask                          0x0


/*----------------------------------------------------------------------------------#
| T10CON                                                                      0x59E |
#-----------------------------------------------------------------------------------#
| - | T10OUTPS3 | T10OUTPS2 | T10OUTPS1 | T10OUTPS0 | TMR10ON | T10CKPS1 | T10CKPS0 |
#-----------------------------------------------------------------------------------#
| 7 | 6         | 5         | 4         | 3         | 2       | 1        | 0        |
#----------------------------------------------------------------------------------*/

#define T10CON                                   0x0
#define T10CON_address                           0x59E
#define T10CON_position                          0x0
#define T10CON_size                              0x8
#define T10CON_value_mask                        0xFF
#define T10CON_clear_mask                        0x0

#define T10CKPS                                  0x0
#define T10CKPS_address                          0x59E
#define T10CKPS_position                         0x0
#define T10CKPS_size                             0x2
#define T10CKPS_value_mask                       0x3
#define T10CKPS_clear_mask                       0xFC

#define T10CKPS0                                 0x0
#define T10CKPS0_address                         0x59E
#define T10CKPS0_position                        0x0
#define T10CKPS0_size                            0x1
#define T10CKPS0_value_mask                      0x1
#define T10CKPS0_clear_mask                      0xFE

#define T10CKPS1                                 0x1
#define T10CKPS1_address                         0x59E
#define T10CKPS1_position                        0x1
#define T10CKPS1_size                            0x1
#define T10CKPS1_value_mask                      0x2
#define T10CKPS1_clear_mask                      0xFD

#define TMR10ON                                  0x2
#define TMR10ON_address                          0x59E
#define TMR10ON_position                         0x2
#define TMR10ON_size                             0x1
#define TMR10ON_value_mask                       0x4
#define TMR10ON_clear_mask                       0xFB

#define T10OUTPS0                                0x3
#define T10OUTPS0_address                        0x59E
#define T10OUTPS0_position                       0x3
#define T10OUTPS0_size                           0x1
#define T10OUTPS0_value_mask                     0x8
#define T10OUTPS0_clear_mask                     0xF7

#define T10OUTPS                                 0x3
#define T10OUTPS_address                         0x59E
#define T10OUTPS_position                        0x3
#define T10OUTPS_size                            0x4
#define T10OUTPS_value_mask                      0x78
#define T10OUTPS_clear_mask                      0x87

#define T10OUTPS1                                0x4
#define T10OUTPS1_address                        0x59E
#define T10OUTPS1_position                       0x4
#define T10OUTPS1_size                           0x1
#define T10OUTPS1_value_mask                     0x10
#define T10OUTPS1_clear_mask                     0xEF

#define T10OUTPS2                                0x5
#define T10OUTPS2_address                        0x59E
#define T10OUTPS2_position                       0x5
#define T10OUTPS2_size                           0x1
#define T10OUTPS2_value_mask                     0x20
#define T10OUTPS2_clear_mask                     0xDF

#define T10OUTPS3                                0x6
#define T10OUTPS3_address                        0x59E
#define T10OUTPS3_position                       0x6
#define T10OUTPS3_size                           0x1
#define T10OUTPS3_value_mask                     0x40
#define T10OUTPS3_clear_mask                     0xBF


/*------------------------------#
| CCPR6L                  0x611 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR6L                                   0x0
#define CCPR6L_address                           0x611
#define CCPR6L_position                          0x0
#define CCPR6L_size                              0x8
#define CCPR6L_value_mask                        0xFF
#define CCPR6L_clear_mask                        0x0


/*------------------------------#
| CCPR6H                  0x612 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR6H                                   0x0
#define CCPR6H_address                           0x612
#define CCPR6H_position                          0x0
#define CCPR6H_size                              0x8
#define CCPR6H_value_mask                        0xFF
#define CCPR6H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP6CON                                             0x613 |
#-----------------------------------------------------------#
| - | - | DC6B1 | DC6B0 | CCP6M3 | CCP6M2 | CCP6M1 | CCP6M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP6CON                                  0x0
#define CCP6CON_address                          0x613
#define CCP6CON_position                         0x0
#define CCP6CON_size                             0x8
#define CCP6CON_value_mask                       0xFF
#define CCP6CON_clear_mask                       0x0

#define CCP6M                                    0x0
#define CCP6M_address                            0x613
#define CCP6M_position                           0x0
#define CCP6M_size                               0x4
#define CCP6M_value_mask                         0xF
#define CCP6M_clear_mask                         0xF0

#define CCP6M0                                   0x0
#define CCP6M0_address                           0x613
#define CCP6M0_position                          0x0
#define CCP6M0_size                              0x1
#define CCP6M0_value_mask                        0x1
#define CCP6M0_clear_mask                        0xFE

#define CCP6M1                                   0x1
#define CCP6M1_address                           0x613
#define CCP6M1_position                          0x1
#define CCP6M1_size                              0x1
#define CCP6M1_value_mask                        0x2
#define CCP6M1_clear_mask                        0xFD

#define CCP6M2                                   0x2
#define CCP6M2_address                           0x613
#define CCP6M2_position                          0x2
#define CCP6M2_size                              0x1
#define CCP6M2_value_mask                        0x4
#define CCP6M2_clear_mask                        0xFB

#define CCP6M3                                   0x3
#define CCP6M3_address                           0x613
#define CCP6M3_position                          0x3
#define CCP6M3_size                              0x1
#define CCP6M3_value_mask                        0x8
#define CCP6M3_clear_mask                        0xF7

#define DC6B0                                    0x4
#define DC6B0_address                            0x613
#define DC6B0_position                           0x4
#define DC6B0_size                               0x1
#define DC6B0_value_mask                         0x10
#define DC6B0_clear_mask                         0xEF

#define DC6B                                     0x4
#define DC6B_address                             0x613
#define DC6B_position                            0x4
#define DC6B_size                                0x2
#define DC6B_value_mask                          0x30
#define DC6B_clear_mask                          0xCF

#define DC6B1                                    0x5
#define DC6B1_address                            0x613
#define DC6B1_position                           0x5
#define DC6B1_size                               0x1
#define DC6B1_value_mask                         0x20
#define DC6B1_clear_mask                         0xDF


/*------------------------------#
| CCPR7L                  0x614 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR7L                                   0x0
#define CCPR7L_address                           0x614
#define CCPR7L_position                          0x0
#define CCPR7L_size                              0x8
#define CCPR7L_value_mask                        0xFF
#define CCPR7L_clear_mask                        0x0


/*------------------------------#
| CCPR7H                  0x615 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR7H                                   0x0
#define CCPR7H_address                           0x615
#define CCPR7H_position                          0x0
#define CCPR7H_size                              0x8
#define CCPR7H_value_mask                        0xFF
#define CCPR7H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP7CON                                             0x616 |
#-----------------------------------------------------------#
| - | - | DC7B1 | DC7B0 | CCP7M3 | CCP7M2 | CCP7M1 | CCP7M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP7CON                                  0x0
#define CCP7CON_address                          0x616
#define CCP7CON_position                         0x0
#define CCP7CON_size                             0x8
#define CCP7CON_value_mask                       0xFF
#define CCP7CON_clear_mask                       0x0

#define CCP7M0                                   0x0
#define CCP7M0_address                           0x616
#define CCP7M0_position                          0x0
#define CCP7M0_size                              0x1
#define CCP7M0_value_mask                        0x1
#define CCP7M0_clear_mask                        0xFE

#define CCP7M                                    0x0
#define CCP7M_address                            0x616
#define CCP7M_position                           0x0
#define CCP7M_size                               0x4
#define CCP7M_value_mask                         0xF
#define CCP7M_clear_mask                         0xF0

#define CCP7M1                                   0x1
#define CCP7M1_address                           0x616
#define CCP7M1_position                          0x1
#define CCP7M1_size                              0x1
#define CCP7M1_value_mask                        0x2
#define CCP7M1_clear_mask                        0xFD

#define CCP7M2                                   0x2
#define CCP7M2_address                           0x616
#define CCP7M2_position                          0x2
#define CCP7M2_size                              0x1
#define CCP7M2_value_mask                        0x4
#define CCP7M2_clear_mask                        0xFB

#define CCP7M3                                   0x3
#define CCP7M3_address                           0x616
#define CCP7M3_position                          0x3
#define CCP7M3_size                              0x1
#define CCP7M3_value_mask                        0x8
#define CCP7M3_clear_mask                        0xF7

#define DC7B                                     0x4
#define DC7B_address                             0x616
#define DC7B_position                            0x4
#define DC7B_size                                0x2
#define DC7B_value_mask                          0x30
#define DC7B_clear_mask                          0xCF

#define DC7B0                                    0x4
#define DC7B0_address                            0x616
#define DC7B0_position                           0x4
#define DC7B0_size                               0x1
#define DC7B0_value_mask                         0x10
#define DC7B0_clear_mask                         0xEF

#define DC7B1                                    0x5
#define DC7B1_address                            0x616
#define DC7B1_position                           0x5
#define DC7B1_size                               0x1
#define DC7B1_value_mask                         0x20
#define DC7B1_clear_mask                         0xDF


/*------------------------------#
| CCPR8L                  0x617 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR8L                                   0x0
#define CCPR8L_address                           0x617
#define CCPR8L_position                          0x0
#define CCPR8L_size                              0x8
#define CCPR8L_value_mask                        0xFF
#define CCPR8L_clear_mask                        0x0


/*------------------------------#
| CCPR8H                  0x618 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR8H                                   0x0
#define CCPR8H_address                           0x618
#define CCPR8H_position                          0x0
#define CCPR8H_size                              0x8
#define CCPR8H_value_mask                        0xFF
#define CCPR8H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP8CON                                             0x619 |
#-----------------------------------------------------------#
| - | - | DC8B1 | DC8B0 | CCP8M3 | CCP8M2 | CCP8M1 | CCP8M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP8CON                                  0x0
#define CCP8CON_address                          0x619
#define CCP8CON_position                         0x0
#define CCP8CON_size                             0x8
#define CCP8CON_value_mask                       0xFF
#define CCP8CON_clear_mask                       0x0

#define CCP8M0                                   0x0
#define CCP8M0_address                           0x619
#define CCP8M0_position                          0x0
#define CCP8M0_size                              0x1
#define CCP8M0_value_mask                        0x1
#define CCP8M0_clear_mask                        0xFE

#define CCP8M                                    0x0
#define CCP8M_address                            0x619
#define CCP8M_position                           0x0
#define CCP8M_size                               0x4
#define CCP8M_value_mask                         0xF
#define CCP8M_clear_mask                         0xF0

#define CCP8M1                                   0x1
#define CCP8M1_address                           0x619
#define CCP8M1_position                          0x1
#define CCP8M1_size                              0x1
#define CCP8M1_value_mask                        0x2
#define CCP8M1_clear_mask                        0xFD

#define CCP8M2                                   0x2
#define CCP8M2_address                           0x619
#define CCP8M2_position                          0x2
#define CCP8M2_size                              0x1
#define CCP8M2_value_mask                        0x4
#define CCP8M2_clear_mask                        0xFB

#define CCP8M3                                   0x3
#define CCP8M3_address                           0x619
#define CCP8M3_position                          0x3
#define CCP8M3_size                              0x1
#define CCP8M3_value_mask                        0x8
#define CCP8M3_clear_mask                        0xF7

#define DC8B0                                    0x4
#define DC8B0_address                            0x619
#define DC8B0_position                           0x4
#define DC8B0_size                               0x1
#define DC8B0_value_mask                         0x10
#define DC8B0_clear_mask                         0xEF

#define DC8B                                     0x4
#define DC8B_address                             0x619
#define DC8B_position                            0x4
#define DC8B_size                                0x2
#define DC8B_value_mask                          0x30
#define DC8B_clear_mask                          0xCF

#define DC8B1                                    0x5
#define DC8B1_address                            0x619
#define DC8B1_position                           0x5
#define DC8B1_size                               0x1
#define DC8B1_value_mask                         0x20
#define DC8B1_clear_mask                         0xDF


/*------------------------------#
| CCPR9L                  0x61A |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR9L                                   0x0
#define CCPR9L_address                           0x61A
#define CCPR9L_position                          0x0
#define CCPR9L_size                              0x8
#define CCPR9L_value_mask                        0xFF
#define CCPR9L_clear_mask                        0x0


/*------------------------------#
| CCPR9H                  0x61B |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR9H                                   0x0
#define CCPR9H_address                           0x61B
#define CCPR9H_position                          0x0
#define CCPR9H_size                              0x8
#define CCPR9H_value_mask                        0xFF
#define CCPR9H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP9CON                                             0x61C |
#-----------------------------------------------------------#
| - | - | DC9B1 | DC9B0 | CCP9M3 | CCP9M2 | CCP9M1 | CCP9M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP9CON                                  0x0
#define CCP9CON_address                          0x61C
#define CCP9CON_position                         0x0
#define CCP9CON_size                             0x8
#define CCP9CON_value_mask                       0xFF
#define CCP9CON_clear_mask                       0x0

#define CCP9M0                                   0x0
#define CCP9M0_address                           0x61C
#define CCP9M0_position                          0x0
#define CCP9M0_size                              0x1
#define CCP9M0_value_mask                        0x1
#define CCP9M0_clear_mask                        0xFE

#define CCP9M                                    0x0
#define CCP9M_address                            0x61C
#define CCP9M_position                           0x0
#define CCP9M_size                               0x4
#define CCP9M_value_mask                         0xF
#define CCP9M_clear_mask                         0xF0

#define CCP9M1                                   0x1
#define CCP9M1_address                           0x61C
#define CCP9M1_position                          0x1
#define CCP9M1_size                              0x1
#define CCP9M1_value_mask                        0x2
#define CCP9M1_clear_mask                        0xFD

#define CCP9M2                                   0x2
#define CCP9M2_address                           0x61C
#define CCP9M2_position                          0x2
#define CCP9M2_size                              0x1
#define CCP9M2_value_mask                        0x4
#define CCP9M2_clear_mask                        0xFB

#define CCP9M3                                   0x3
#define CCP9M3_address                           0x61C
#define CCP9M3_position                          0x3
#define CCP9M3_size                              0x1
#define CCP9M3_value_mask                        0x8
#define CCP9M3_clear_mask                        0xF7

#define DC9B0                                    0x4
#define DC9B0_address                            0x61C
#define DC9B0_position                           0x4
#define DC9B0_size                               0x1
#define DC9B0_value_mask                         0x10
#define DC9B0_clear_mask                         0xEF

#define DC9B                                     0x4
#define DC9B_address                             0x61C
#define DC9B_position                            0x4
#define DC9B_size                                0x2
#define DC9B_value_mask                          0x30
#define DC9B_clear_mask                          0xCF

#define DC9B1                                    0x5
#define DC9B1_address                            0x61C
#define DC9B1_position                           0x5
#define DC9B1_size                               0x1
#define DC9B1_value_mask                         0x20
#define DC9B1_clear_mask                         0xDF


/*------------------------------#
| CCPR10L                 0x61D |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR10L                                  0x0
#define CCPR10L_address                          0x61D
#define CCPR10L_position                         0x0
#define CCPR10L_size                             0x8
#define CCPR10L_value_mask                       0xFF
#define CCPR10L_clear_mask                       0x0


/*------------------------------#
| CCPR10H                 0x61E |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR10H                                  0x0
#define CCPR10H_address                          0x61E
#define CCPR10H_position                         0x0
#define CCPR10H_size                             0x8
#define CCPR10H_value_mask                       0xFF
#define CCPR10H_clear_mask                       0x0


/*----------------------------------------------------------------#
| CCP10CON                                                  0x61F |
#-----------------------------------------------------------------#
| - | - | DC10B1 | DC10B0 | CCP10M3 | CCP10M2 | CCP10M1 | CCP10M0 |
#-----------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------*/

#define CCP10CON                                 0x0
#define CCP10CON_address                         0x61F
#define CCP10CON_position                        0x0
#define CCP10CON_size                            0x8
#define CCP10CON_value_mask                      0xFF
#define CCP10CON_clear_mask                      0x0

#define CCP10M                                   0x0
#define CCP10M_address                           0x61F
#define CCP10M_position                          0x0
#define CCP10M_size                              0x4
#define CCP10M_value_mask                        0xF
#define CCP10M_clear_mask                        0xF0

#define CCP10M0                                  0x0
#define CCP10M0_address                          0x61F
#define CCP10M0_position                         0x0
#define CCP10M0_size                             0x1
#define CCP10M0_value_mask                       0x1
#define CCP10M0_clear_mask                       0xFE

#define CCP10M1                                  0x1
#define CCP10M1_address                          0x61F
#define CCP10M1_position                         0x1
#define CCP10M1_size                             0x1
#define CCP10M1_value_mask                       0x2
#define CCP10M1_clear_mask                       0xFD

#define CCP10M2                                  0x2
#define CCP10M2_address                          0x61F
#define CCP10M2_position                         0x2
#define CCP10M2_size                             0x1
#define CCP10M2_value_mask                       0x4
#define CCP10M2_clear_mask                       0xFB

#define CCP10M3                                  0x3
#define CCP10M3_address                          0x61F
#define CCP10M3_position                         0x3
#define CCP10M3_size                             0x1
#define CCP10M3_value_mask                       0x8
#define CCP10M3_clear_mask                       0xF7

#define DC10B0                                   0x4
#define DC10B0_address                           0x61F
#define DC10B0_position                          0x4
#define DC10B0_size                              0x1
#define DC10B0_value_mask                        0x10
#define DC10B0_clear_mask                        0xEF

#define DC10B                                    0x4
#define DC10B_address                            0x61F
#define DC10B_position                           0x4
#define DC10B_size                               0x2
#define DC10B_value_mask                         0x30
#define DC10B_clear_mask                         0xCF

#define DC10B1                                   0x5
#define DC10B1_address                           0x61F
#define DC10B1_position                          0x5
#define DC10B1_size                              0x1
#define DC10B1_value_mask                        0x20
#define DC10B1_clear_mask                        0xDF


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

#endif // _PIC16F1526_H_
