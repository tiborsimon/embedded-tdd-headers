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

#ifndef _PIC16LF1567_H_
#define _PIC16LF1567_H_


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


/*--------------------------------------#
| PORTE                            0x10 |
#---------------------------------------#
| - | - | - | - | RE3 | RE2 | RE1 | RE0 |
#---------------------------------------#
| 7 | 6 | 5 | 4 | 3   | 2   | 1   | 0   |
#--------------------------------------*/

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


/*------------------------------------------------------------------#
| PIR1                                                         0x11 |
#-------------------------------------------------------------------#
| TMR1GIF | AD1IF | RCIF | TXIF | SSP1IF | SSP2IF | TMR2IF | TMR1IF |
#-------------------------------------------------------------------#
| 7       | 6     | 5    | 4    | 3      | 2      | 1      | 0      |
#------------------------------------------------------------------*/

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

#define SSP2IF                                   0x2
#define SSP2IF_address                           0x011
#define SSP2IF_position                          0x2
#define SSP2IF_size                              0x1
#define SSP2IF_value_mask                        0x4
#define SSP2IF_clear_mask                        0xFB

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

#define RCIF                                     0x5
#define RCIF_address                             0x011
#define RCIF_position                            0x5
#define RCIF_size                                0x1
#define RCIF_value_mask                          0x20
#define RCIF_clear_mask                          0xDF

#define AD1IF                                    0x6
#define AD1IF_address                            0x011
#define AD1IF_position                           0x6
#define AD1IF_size                               0x1
#define AD1IF_value_mask                         0x40
#define AD1IF_clear_mask                         0xBF

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


/*-------------------------------------------------#
| PIR2                                        0x12 |
#--------------------------------------------------#
| - | AD2IF | - | - | BCL1IF | BCL2IF | TMR4IF | - |
#--------------------------------------------------#
| 7 | 6     | 5 | 4 | 3      | 2      | 1      | 0 |
#-------------------------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0x012
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

#define TMR4IF                                   0x1
#define TMR4IF_address                           0x012
#define TMR4IF_position                          0x1
#define TMR4IF_size                              0x1
#define TMR4IF_value_mask                        0x2
#define TMR4IF_clear_mask                        0xFD

#define BCL2IF                                   0x2
#define BCL2IF_address                           0x012
#define BCL2IF_position                          0x2
#define BCL2IF_size                              0x1
#define BCL2IF_value_mask                        0x4
#define BCL2IF_clear_mask                        0xFB

#define BCL1IF                                   0x3
#define BCL1IF_address                           0x012
#define BCL1IF_position                          0x3
#define BCL1IF_size                              0x1
#define BCL1IF_value_mask                        0x8
#define BCL1IF_clear_mask                        0xF7

#define AD2IF                                    0x6
#define AD2IF_address                            0x012
#define AD2IF_position                           0x6
#define AD2IF_size                               0x1
#define AD2IF_value_mask                         0x40
#define AD2IF_clear_mask                         0xBF


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


/*-----------------------------------------------------------------#
| T1CON                                                       0x18 |
#------------------------------------------------------------------#
| TMR1CS1 | TMR1CS0 | T1CKPS1 | T1CKPS0 | - | nT1SYNC | - | TMR1ON |
#------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3 | 2       | 1 | 0      |
#-----------------------------------------------------------------*/

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


/*---------------------------------------------------------------------#
| T1GCON                                                          0x19 |
#----------------------------------------------------------------------#
| TMR1GE | T1GPOL | T1GTM | T1GSPM | T1GGO_nDONE | T1GVAL | - | T1GSS0 |
#----------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3           | 2      | 1 | 0      |
#---------------------------------------------------------------------*/

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
#define T1GSS_size                               0x1
#define T1GSS_value_mask                         0x1
#define T1GSS_clear_mask                         0xFE

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

#define T1GCON_GO                                0x3
#define T1GCON_GO_address                        0x019
#define T1GCON_GO_position                       0x3
#define T1GCON_GO_size                           0x1
#define T1GCON_GO_value_mask                     0x8
#define T1GCON_GO_clear_mask                     0xF7

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


/*--------------------------------------------------#
| TRISE                                        0x90 |
#---------------------------------------------------#
| - | - | - | - | TRISE3 | TRISE2 | TRISE1 | TRISE0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

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


/*-----------------------------------------------------------------#
| PIE1                                                        0x91 |
#------------------------------------------------------------------#
| TMR1GIE | AD1IE | RCIE | TXIE | SSPIE | SSP2IE | TMR2IE | TMR1IE |
#------------------------------------------------------------------#
| 7       | 6     | 5    | 4    | 3     | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

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

#define SSP2IE                                   0x2
#define SSP2IE_address                           0x091
#define SSP2IE_position                          0x2
#define SSP2IE_size                              0x1
#define SSP2IE_value_mask                        0x4
#define SSP2IE_clear_mask                        0xFB

#define SSPIE                                    0x3
#define SSPIE_address                            0x091
#define SSPIE_position                           0x3
#define SSPIE_size                               0x1
#define SSPIE_value_mask                         0x8
#define SSPIE_clear_mask                         0xF7

#define SSP1IE                                   0x3
#define SSP1IE_address                           0x091
#define SSP1IE_position                          0x3
#define SSP1IE_size                              0x1
#define SSP1IE_value_mask                        0x8
#define SSP1IE_clear_mask                        0xF7

#define TXIE                                     0x4
#define TXIE_address                             0x091
#define TXIE_position                            0x4
#define TXIE_size                                0x1
#define TXIE_value_mask                          0x10
#define TXIE_clear_mask                          0xEF

#define RCIE                                     0x5
#define RCIE_address                             0x091
#define RCIE_position                            0x5
#define RCIE_size                                0x1
#define RCIE_value_mask                          0x20
#define RCIE_clear_mask                          0xDF

#define AD1IE                                    0x6
#define AD1IE_address                            0x091
#define AD1IE_position                           0x6
#define AD1IE_size                               0x1
#define AD1IE_value_mask                         0x40
#define AD1IE_clear_mask                         0xBF

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


/*-------------------------------------------------#
| PIE2                                        0x92 |
#--------------------------------------------------#
| - | AD2IE | - | - | BCL1IE | BCL2IE | TMR4IE | - |
#--------------------------------------------------#
| 7 | 6     | 5 | 4 | 3      | 2      | 1      | 0 |
#-------------------------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0x092
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

#define TMR4IE                                   0x1
#define TMR4IE_address                           0x092
#define TMR4IE_position                          0x1
#define TMR4IE_size                              0x1
#define TMR4IE_value_mask                        0x2
#define TMR4IE_clear_mask                        0xFD

#define BCL2IE                                   0x2
#define BCL2IE_address                           0x092
#define BCL2IE_position                          0x2
#define BCL2IE_size                              0x1
#define BCL2IE_value_mask                        0x4
#define BCL2IE_clear_mask                        0xFB

#define BCL1IE                                   0x3
#define BCL1IE_address                           0x092
#define BCL1IE_position                          0x3
#define BCL1IE_size                              0x1
#define BCL1IE_value_mask                        0x8
#define BCL1IE_clear_mask                        0xF7

#define AD2IE                                    0x6
#define AD2IE_address                            0x092
#define AD2IE_position                           0x6
#define AD2IE_size                               0x1
#define AD2IE_value_mask                         0x40
#define AD2IE_clear_mask                         0xBF


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


/*-------------------------------------------------#
| OSCSTAT                                     0x9A |
#--------------------------------------------------#
| - | PLLSR | - | HFIOFR | - | - | LFIOFR | HFIOFS |
#--------------------------------------------------#
| 7 | 6     | 5 | 4      | 3 | 2 | 1      | 0      |
#-------------------------------------------------*/

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

#define PLLSR                                    0x6
#define PLLSR_address                            0x09A
#define PLLSR_position                           0x6
#define PLLSR_size                               0x1
#define PLLSR_value_mask                         0x40
#define PLLSR_clear_mask                         0xBF


/*------------------------------#
| ADRESL                   0x9B |
#-------------------------------#
| ADRESL_ADRESL                 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ADRESL                                   0x0
#define ADRESL_address                           0x09B
#define ADRESL_position                          0x0
#define ADRESL_size                              0x8
#define ADRESL_value_mask                        0xFF
#define ADRESL_clear_mask                        0x0

#define ADRESL_ADRESL                            0x0
#define ADRESL_ADRESL_address                    0x09B
#define ADRESL_ADRESL_position                   0x0
#define ADRESL_ADRESL_size                       0x8
#define ADRESL_ADRESL_value_mask                 0xFF
#define ADRESL_ADRESL_clear_mask                 0x0


/*------------------------------#
| ADRESH                   0x9C |
#-------------------------------#
| ADRESH_ADRESH                 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ADRESH                                   0x0
#define ADRESH_address                           0x09C
#define ADRESH_position                          0x0
#define ADRESH_size                              0x8
#define ADRESH_value_mask                        0xFF
#define ADRESH_clear_mask                        0x0

#define ADRESH_ADRESH                            0x0
#define ADRESH_ADRESH_address                    0x09C
#define ADRESH_ADRESH_position                   0x0
#define ADRESH_ADRESH_size                       0x8
#define ADRESH_ADRESH_value_mask                 0xFF
#define ADRESH_ADRESH_clear_mask                 0x0


/*-------------------------------------------------------------------------------------------------------------------#
| ADCON0                                                                                                        0x9D |
#--------------------------------------------------------------------------------------------------------------------#
| ADCON0_CHS5 | ADCON0_CHS4 | ADCON0_CHS3 | ADCON0_CHS2 | ADCON0_CHS1 | ADCON0_CHS0 | ADCON0_GO_nDONE | ADCON0_AD1ON |
#--------------------------------------------------------------------------------------------------------------------#
| 7           | 6           | 5           | 4           | 3           | 2           | 1               | 0            |
#-------------------------------------------------------------------------------------------------------------------*/

#define ADCON0                                   0x0
#define ADCON0_address                           0x09D
#define ADCON0_position                          0x0
#define ADCON0_size                              0x8
#define ADCON0_value_mask                        0xFF
#define ADCON0_clear_mask                        0x0

#define ADCON0_AD1ON                             0x0
#define ADCON0_AD1ON_address                     0x09D
#define ADCON0_AD1ON_position                    0x0
#define ADCON0_AD1ON_size                        0x1
#define ADCON0_AD1ON_value_mask                  0x1
#define ADCON0_AD1ON_clear_mask                  0xFE

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

#define ADCON0_GO                                0x1
#define ADCON0_GO_address                        0x09D
#define ADCON0_GO_position                       0x1
#define ADCON0_GO_size                           0x1
#define ADCON0_GO_value_mask                     0x2
#define ADCON0_GO_clear_mask                     0xFD

#define ADGO                                     0x1
#define ADGO_address                             0x09D
#define ADGO_position                            0x1
#define ADGO_size                                0x1
#define ADGO_value_mask                          0x2
#define ADGO_clear_mask                          0xFD

#define ADCON0_CHS                               0x2
#define ADCON0_CHS_address                       0x09D
#define ADCON0_CHS_position                      0x2
#define ADCON0_CHS_size                          0x6
#define ADCON0_CHS_value_mask                    0xFC
#define ADCON0_CHS_clear_mask                    0x3

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

#define ADCON0_CHS5                              0x7
#define ADCON0_CHS5_address                      0x09D
#define ADCON0_CHS5_position                     0x7
#define ADCON0_CHS5_size                         0x1
#define ADCON0_CHS5_value_mask                   0x80
#define ADCON0_CHS5_clear_mask                   0x7F


/*--------------------------------------------------------------------------------------------------#
| ADCON1                                                                                       0x9E |
#---------------------------------------------------------------------------------------------------#
| ADCON1_ADFM | ADCON1_ADCS | ADCON1_ADNREF | ADCON1_GO_nDONE_ALL | ADCON1_ADPREF1 | ADCON1_ADPREF0 |
#---------------------------------------------------------------------------------------------------#
| 7           | 6 | 5 | 4   | 3             | 2                   | 1              | 0              |
#--------------------------------------------------------------------------------------------------*/

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

#define ADCON1_GO_nDONE_ALL                      0x2
#define ADCON1_GO_nDONE_ALL_address              0x09E
#define ADCON1_GO_nDONE_ALL_position             0x2
#define ADCON1_GO_nDONE_ALL_size                 0x1
#define ADCON1_GO_nDONE_ALL_value_mask           0x4
#define ADCON1_GO_nDONE_ALL_clear_mask           0xFB

#define ADCON1_GO_ALL                            0x2
#define ADCON1_GO_ALL_address                    0x09E
#define ADCON1_GO_ALL_position                   0x2
#define ADCON1_GO_ALL_size                       0x1
#define ADCON1_GO_ALL_value_mask                 0x4
#define ADCON1_GO_ALL_clear_mask                 0xFB

#define ADCON1_ADNREF                            0x3
#define ADCON1_ADNREF_address                    0x09E
#define ADCON1_ADNREF_position                   0x3
#define ADCON1_ADNREF_size                       0x1
#define ADCON1_ADNREF_value_mask                 0x8
#define ADCON1_ADNREF_clear_mask                 0xF7

#define ADCON1_ADCS                              0x4
#define ADCON1_ADCS_address                      0x09E
#define ADCON1_ADCS_position                     0x4
#define ADCON1_ADCS_size                         0x3
#define ADCON1_ADCS_value_mask                   0x70
#define ADCON1_ADCS_clear_mask                   0x8F

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

#define LATD                                     0x0
#define LATD_address                             0x10F
#define LATD_position                            0x0
#define LATD_size                                0x8
#define LATD_value_mask                          0xFF
#define LATD_clear_mask                          0x0

#define LATD0                                    0x0
#define LATD0_address                            0x10F
#define LATD0_position                           0x0
#define LATD0_size                               0x1
#define LATD0_value_mask                         0x1
#define LATD0_clear_mask                         0xFE

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


/*------------------------------------------#
| LATE                                0x110 |
#-------------------------------------------#
| - | - | - | - | - | LATE2 | LATE1 | LATE0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------*/

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


/*----------------------------------------------#
| APFCON                                  0x11D |
#-----------------------------------------------#
| - | - | SSSEL | - | - | - | GRDBSEL | GRDASEL |
#-----------------------------------------------#
| 7 | 6 | 5     | 4 | 3 | 2 | 1       | 0       |
#----------------------------------------------*/

#define APFCON                                   0x0
#define APFCON_address                           0x11D
#define APFCON_position                          0x0
#define APFCON_size                              0x8
#define APFCON_value_mask                        0xFF
#define APFCON_clear_mask                        0x0

#define GRDASEL                                  0x0
#define GRDASEL_address                          0x11D
#define GRDASEL_position                         0x0
#define GRDASEL_size                             0x1
#define GRDASEL_value_mask                       0x1
#define GRDASEL_clear_mask                       0xFE

#define GRDBSEL                                  0x1
#define GRDBSEL_address                          0x11D
#define GRDBSEL_position                         0x1
#define GRDBSEL_size                             0x1
#define GRDBSEL_value_mask                       0x2
#define GRDBSEL_clear_mask                       0xFD

#define SSSEL                                    0x5
#define SSSEL_address                            0x11D
#define SSSEL_position                           0x5
#define SSSEL_size                               0x1
#define SSSEL_value_mask                         0x20
#define SSSEL_clear_mask                         0xDF


/*--------------------------------------------------------------#
| ANSELA                                                  0x18C |
#---------------------------------------------------------------#
| ANSA7 | ANSA6 | ANSA5 | ANSA4 | ANSA3 | ANSA2 | ANSA1 | ANSA0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define ANSA0                                    0x0
#define ANSA0_address                            0x18C
#define ANSA0_position                           0x0
#define ANSA0_size                               0x1
#define ANSA0_value_mask                         0x1
#define ANSA0_clear_mask                         0xFE

#define ANSELA                                   0x0
#define ANSELA_address                           0x18C
#define ANSELA_position                          0x0
#define ANSELA_size                              0x8
#define ANSELA_value_mask                        0xFF
#define ANSELA_clear_mask                        0x0

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

#define ANSA6                                    0x6
#define ANSA6_address                            0x18C
#define ANSA6_position                           0x6
#define ANSA6_size                               0x1
#define ANSA6_value_mask                         0x40
#define ANSA6_clear_mask                         0xBF

#define ANSA7                                    0x7
#define ANSA7_address                            0x18C
#define ANSA7_position                           0x7
#define ANSA7_size                               0x1
#define ANSA7_value_mask                         0x80
#define ANSA7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| ANSELB                                                  0x18D |
#---------------------------------------------------------------#
| ANSB7 | ANSB6 | ANSB5 | ANSB4 | ANSB3 | ANSB2 | ANSB1 | ANSB0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define ANSB0                                    0x0
#define ANSB0_address                            0x18D
#define ANSB0_position                           0x0
#define ANSB0_size                               0x1
#define ANSB0_value_mask                         0x1
#define ANSB0_clear_mask                         0xFE

#define ANSELB                                   0x0
#define ANSELB_address                           0x18D
#define ANSELB_position                          0x0
#define ANSELB_size                              0x8
#define ANSELB_value_mask                        0xFF
#define ANSELB_clear_mask                        0x0

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

#define ANSB6                                    0x6
#define ANSB6_address                            0x18D
#define ANSB6_position                           0x6
#define ANSB6_size                               0x1
#define ANSB6_value_mask                         0x40
#define ANSB6_clear_mask                         0xBF

#define ANSB7                                    0x7
#define ANSB7_address                            0x18D
#define ANSB7_position                           0x7
#define ANSB7_size                               0x1
#define ANSB7_value_mask                         0x80
#define ANSB7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| ANSELC                                                  0x18E |
#---------------------------------------------------------------#
| ANSC7 | ANSC6 | ANSC5 | ANSC4 | ANSC3 | ANSC2 | ANSC1 | ANSC0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define ANSC0                                    0x0
#define ANSC0_address                            0x18E
#define ANSC0_position                           0x0
#define ANSC0_size                               0x1
#define ANSC0_value_mask                         0x1
#define ANSC0_clear_mask                         0xFE

#define ANSELC                                   0x0
#define ANSELC_address                           0x18E
#define ANSELC_position                          0x0
#define ANSELC_size                              0x8
#define ANSELC_value_mask                        0xFF
#define ANSELC_clear_mask                        0x0

#define ANSC1                                    0x1
#define ANSC1_address                            0x18E
#define ANSC1_position                           0x1
#define ANSC1_size                               0x1
#define ANSC1_value_mask                         0x2
#define ANSC1_clear_mask                         0xFD

#define ANSC2                                    0x2
#define ANSC2_address                            0x18E
#define ANSC2_position                           0x2
#define ANSC2_size                               0x1
#define ANSC2_value_mask                         0x4
#define ANSC2_clear_mask                         0xFB

#define ANSC3                                    0x3
#define ANSC3_address                            0x18E
#define ANSC3_position                           0x3
#define ANSC3_size                               0x1
#define ANSC3_value_mask                         0x8
#define ANSC3_clear_mask                         0xF7

#define ANSC4                                    0x4
#define ANSC4_address                            0x18E
#define ANSC4_position                           0x4
#define ANSC4_size                               0x1
#define ANSC4_value_mask                         0x10
#define ANSC4_clear_mask                         0xEF

#define ANSC5                                    0x5
#define ANSC5_address                            0x18E
#define ANSC5_position                           0x5
#define ANSC5_size                               0x1
#define ANSC5_value_mask                         0x20
#define ANSC5_clear_mask                         0xDF

#define ANSC6                                    0x6
#define ANSC6_address                            0x18E
#define ANSC6_position                           0x6
#define ANSC6_size                               0x1
#define ANSC6_value_mask                         0x40
#define ANSC6_clear_mask                         0xBF

#define ANSC7                                    0x7
#define ANSC7_address                            0x18E
#define ANSC7_position                           0x7
#define ANSC7_size                               0x1
#define ANSC7_value_mask                         0x80
#define ANSC7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| ANSELD                                                  0x18F |
#---------------------------------------------------------------#
| ANSD7 | ANSD6 | ANSD5 | ANSD4 | ANSD3 | ANSD2 | ANSD1 | ANSD0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

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

#define ANSD4                                    0x4
#define ANSD4_address                            0x18F
#define ANSD4_position                           0x4
#define ANSD4_size                               0x1
#define ANSD4_value_mask                         0x10
#define ANSD4_clear_mask                         0xEF

#define ANSD5                                    0x5
#define ANSD5_address                            0x18F
#define ANSD5_position                           0x5
#define ANSD5_size                               0x1
#define ANSD5_value_mask                         0x20
#define ANSD5_clear_mask                         0xDF

#define ANSD6                                    0x6
#define ANSD6_address                            0x18F
#define ANSD6_position                           0x6
#define ANSD6_size                               0x1
#define ANSD6_value_mask                         0x40
#define ANSD6_clear_mask                         0xBF

#define ANSD7                                    0x7
#define ANSD7_address                            0x18F
#define ANSD7_position                           0x7
#define ANSD7_size                               0x1
#define ANSD7_value_mask                         0x80
#define ANSD7_clear_mask                         0x7F


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
#define ANSELE_size                              0x8
#define ANSELE_value_mask                        0xFF
#define ANSELE_clear_mask                        0x0

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


/*------------------------------#
| RCREG                   0x199 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RCREG                                    0x0
#define RCREG_address                            0x199
#define RCREG_position                           0x0
#define RCREG_size                               0x8
#define RCREG_value_mask                         0xFF
#define RCREG_clear_mask                         0x0


/*------------------------------#
| TXREG                   0x19A |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TXREG                                    0x0
#define TXREG_address                            0x19A
#define TXREG_position                           0x0
#define TXREG_size                               0x8
#define TXREG_value_mask                         0xFF
#define TXREG_clear_mask                         0x0


/*------------------------------#
| SPBRGL                  0x19B |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SPBRGL                                   0x0
#define SPBRGL_address                           0x19B
#define SPBRGL_position                          0x0
#define SPBRGL_size                              0x8
#define SPBRGL_value_mask                        0xFF
#define SPBRGL_clear_mask                        0x0


/*------------------------------#
| SPBRGH                  0x19C |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SPBRGH                                   0x0
#define SPBRGH_address                           0x19C
#define SPBRGH_position                          0x0
#define SPBRGH_size                              0x8
#define SPBRGH_value_mask                        0xFF
#define SPBRGH_clear_mask                        0x0


/*------------------------------------------------------#
| RCSTA                                           0x19D |
#-------------------------------------------------------#
| SPEN | RX9 | SREN | CREN | ADDEN | FERR | OERR | RX9D |
#-------------------------------------------------------#
| 7    | 6   | 5    | 4    | 3     | 2    | 1    | 0    |
#------------------------------------------------------*/

#define RCSTA                                    0x0
#define RCSTA_address                            0x19D
#define RCSTA_position                           0x0
#define RCSTA_size                               0x8
#define RCSTA_value_mask                         0xFF
#define RCSTA_clear_mask                         0x0

#define RX9D                                     0x0
#define RX9D_address                             0x19D
#define RX9D_position                            0x0
#define RX9D_size                                0x1
#define RX9D_value_mask                          0x1
#define RX9D_clear_mask                          0xFE

#define OERR                                     0x1
#define OERR_address                             0x19D
#define OERR_position                            0x1
#define OERR_size                                0x1
#define OERR_value_mask                          0x2
#define OERR_clear_mask                          0xFD

#define FERR                                     0x2
#define FERR_address                             0x19D
#define FERR_position                            0x2
#define FERR_size                                0x1
#define FERR_value_mask                          0x4
#define FERR_clear_mask                          0xFB

#define ADDEN                                    0x3
#define ADDEN_address                            0x19D
#define ADDEN_position                           0x3
#define ADDEN_size                               0x1
#define ADDEN_value_mask                         0x8
#define ADDEN_clear_mask                         0xF7

#define CREN                                     0x4
#define CREN_address                             0x19D
#define CREN_position                            0x4
#define CREN_size                                0x1
#define CREN_value_mask                          0x10
#define CREN_clear_mask                          0xEF

#define SREN                                     0x5
#define SREN_address                             0x19D
#define SREN_position                            0x5
#define SREN_size                                0x1
#define SREN_value_mask                          0x20
#define SREN_clear_mask                          0xDF

#define RX9                                      0x6
#define RX9_address                              0x19D
#define RX9_position                             0x6
#define RX9_size                                 0x1
#define RX9_value_mask                           0x40
#define RX9_clear_mask                           0xBF

#define SPEN                                     0x7
#define SPEN_address                             0x19D
#define SPEN_position                            0x7
#define SPEN_size                                0x1
#define SPEN_value_mask                          0x80
#define SPEN_clear_mask                          0x7F


/*------------------------------------------------------#
| TXSTA                                           0x19E |
#-------------------------------------------------------#
| CSRC | TX9 | TXEN | SYNC | SENDB | BRGH | TRMT | TX9D |
#-------------------------------------------------------#
| 7    | 6   | 5    | 4    | 3     | 2    | 1    | 0    |
#------------------------------------------------------*/

#define TXSTA                                    0x0
#define TXSTA_address                            0x19E
#define TXSTA_position                           0x0
#define TXSTA_size                               0x8
#define TXSTA_value_mask                         0xFF
#define TXSTA_clear_mask                         0x0

#define TX9D                                     0x0
#define TX9D_address                             0x19E
#define TX9D_position                            0x0
#define TX9D_size                                0x1
#define TX9D_value_mask                          0x1
#define TX9D_clear_mask                          0xFE

#define TRMT                                     0x1
#define TRMT_address                             0x19E
#define TRMT_position                            0x1
#define TRMT_size                                0x1
#define TRMT_value_mask                          0x2
#define TRMT_clear_mask                          0xFD

#define BRGH                                     0x2
#define BRGH_address                             0x19E
#define BRGH_position                            0x2
#define BRGH_size                                0x1
#define BRGH_value_mask                          0x4
#define BRGH_clear_mask                          0xFB

#define SENDB                                    0x3
#define SENDB_address                            0x19E
#define SENDB_position                           0x3
#define SENDB_size                               0x1
#define SENDB_value_mask                         0x8
#define SENDB_clear_mask                         0xF7

#define SYNC                                     0x4
#define SYNC_address                             0x19E
#define SYNC_position                            0x4
#define SYNC_size                                0x1
#define SYNC_value_mask                          0x10
#define SYNC_clear_mask                          0xEF

#define TXEN                                     0x5
#define TXEN_address                             0x19E
#define TXEN_position                            0x5
#define TXEN_size                                0x1
#define TXEN_value_mask                          0x20
#define TXEN_clear_mask                          0xDF

#define TX9                                      0x6
#define TX9_address                              0x19E
#define TX9_position                             0x6
#define TX9_size                                 0x1
#define TX9_value_mask                           0x40
#define TX9_clear_mask                           0xBF

#define CSRC                                     0x7
#define CSRC_address                             0x19E
#define CSRC_position                            0x7
#define CSRC_size                                0x1
#define CSRC_value_mask                          0x80
#define CSRC_clear_mask                          0x7F


/*----------------------------------------------------#
| BAUDCON                                       0x19F |
#-----------------------------------------------------#
| ABDOVF | RCIDL | - | SCKP | BRG16 | - | WUE | ABDEN |
#-----------------------------------------------------#
| 7      | 6     | 5 | 4    | 3     | 2 | 1   | 0     |
#----------------------------------------------------*/

#define BAUDCON                                  0x0
#define BAUDCON_address                          0x19F
#define BAUDCON_position                         0x0
#define BAUDCON_size                             0x8
#define BAUDCON_value_mask                       0xFF
#define BAUDCON_clear_mask                       0x0

#define ABDEN                                    0x0
#define ABDEN_address                            0x19F
#define ABDEN_position                           0x0
#define ABDEN_size                               0x1
#define ABDEN_value_mask                         0x1
#define ABDEN_clear_mask                         0xFE

#define WUE                                      0x1
#define WUE_address                              0x19F
#define WUE_position                             0x1
#define WUE_size                                 0x1
#define WUE_value_mask                           0x2
#define WUE_clear_mask                           0xFD

#define BRG16                                    0x3
#define BRG16_address                            0x19F
#define BRG16_position                           0x3
#define BRG16_size                               0x1
#define BRG16_value_mask                         0x8
#define BRG16_clear_mask                         0xF7

#define SCKP                                     0x4
#define SCKP_address                             0x19F
#define SCKP_position                            0x4
#define SCKP_size                                0x1
#define SCKP_value_mask                          0x10
#define SCKP_clear_mask                          0xEF

#define RCIDL                                    0x6
#define RCIDL_address                            0x19F
#define RCIDL_position                           0x6
#define RCIDL_size                               0x1
#define RCIDL_value_mask                         0x40
#define RCIDL_clear_mask                         0xBF

#define ABDOVF                                   0x7
#define ABDOVF_address                           0x19F
#define ABDOVF_position                          0x7
#define ABDOVF_size                              0x1
#define ABDOVF_value_mask                        0x80
#define ABDOVF_clear_mask                        0x7F


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


/*----------------------------------#
| WPUE                        0x210 |
#-----------------------------------#
| WPUE3 | WPUE                          |
#-----------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2 | 1 | 0 |
#----------------------------------*/

#define WPUE                                     0x0
#define WPUE_address                             0x210
#define WPUE_position                            0x0
#define WPUE_size                                0x8
#define WPUE_value_mask                          0xFF
#define WPUE_clear_mask                          0x0

#define WPUE3                                    0x3
#define WPUE3_address                            0x210
#define WPUE3_position                           0x3
#define WPUE3_size                               0x1
#define WPUE3_value_mask                         0x8
#define WPUE3_clear_mask                         0xF7


/*--------------------------------------------------------------------------------------#
| SSP1BUF                                                                         0x211 |
#---------------------------------------------------------------------------------------#
| SSP1BUF7 | SSP1BUF6 | SSP1BUF5 | SSP1BUF4 | SSP1BUF3 | SSP1BUF2 | SSP1BUF1 | SSP1BUF0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define SSP1BUF_BUF                              0x0
#define SSP1BUF_BUF_address                      0x211
#define SSP1BUF_BUF_position                     0x0
#define SSP1BUF_BUF_size                         0x8
#define SSP1BUF_BUF_value_mask                   0xFF
#define SSP1BUF_BUF_clear_mask                   0x0

#define SSP1BUF_BUF0                             0x0
#define SSP1BUF_BUF0_address                     0x211
#define SSP1BUF_BUF0_position                    0x0
#define SSP1BUF_BUF0_size                        0x1
#define SSP1BUF_BUF0_value_mask                  0x1
#define SSP1BUF_BUF0_clear_mask                  0xFE

#define SSP1BUF                                  0x0
#define SSP1BUF_address                          0x211
#define SSP1BUF_position                         0x0
#define SSP1BUF_size                             0x8
#define SSP1BUF_value_mask                       0xFF
#define SSP1BUF_clear_mask                       0x0

#define SSP1BUF0                                 0x0
#define SSP1BUF0_address                         0x211
#define SSP1BUF0_position                        0x0
#define SSP1BUF0_size                            0x1
#define SSP1BUF0_value_mask                      0x1
#define SSP1BUF0_clear_mask                      0xFE

#define SSP1BUF_BUF1                             0x1
#define SSP1BUF_BUF1_address                     0x211
#define SSP1BUF_BUF1_position                    0x1
#define SSP1BUF_BUF1_size                        0x1
#define SSP1BUF_BUF1_value_mask                  0x2
#define SSP1BUF_BUF1_clear_mask                  0xFD

#define SSP1BUF1                                 0x1
#define SSP1BUF1_address                         0x211
#define SSP1BUF1_position                        0x1
#define SSP1BUF1_size                            0x1
#define SSP1BUF1_value_mask                      0x2
#define SSP1BUF1_clear_mask                      0xFD

#define SSP1BUF_BUF2                             0x2
#define SSP1BUF_BUF2_address                     0x211
#define SSP1BUF_BUF2_position                    0x2
#define SSP1BUF_BUF2_size                        0x1
#define SSP1BUF_BUF2_value_mask                  0x4
#define SSP1BUF_BUF2_clear_mask                  0xFB

#define SSP1BUF2                                 0x2
#define SSP1BUF2_address                         0x211
#define SSP1BUF2_position                        0x2
#define SSP1BUF2_size                            0x1
#define SSP1BUF2_value_mask                      0x4
#define SSP1BUF2_clear_mask                      0xFB

#define SSP1BUF_BUF3                             0x3
#define SSP1BUF_BUF3_address                     0x211
#define SSP1BUF_BUF3_position                    0x3
#define SSP1BUF_BUF3_size                        0x1
#define SSP1BUF_BUF3_value_mask                  0x8
#define SSP1BUF_BUF3_clear_mask                  0xF7

#define SSP1BUF3                                 0x3
#define SSP1BUF3_address                         0x211
#define SSP1BUF3_position                        0x3
#define SSP1BUF3_size                            0x1
#define SSP1BUF3_value_mask                      0x8
#define SSP1BUF3_clear_mask                      0xF7

#define SSP1BUF_BUF4                             0x4
#define SSP1BUF_BUF4_address                     0x211
#define SSP1BUF_BUF4_position                    0x4
#define SSP1BUF_BUF4_size                        0x1
#define SSP1BUF_BUF4_value_mask                  0x10
#define SSP1BUF_BUF4_clear_mask                  0xEF

#define SSP1BUF4                                 0x4
#define SSP1BUF4_address                         0x211
#define SSP1BUF4_position                        0x4
#define SSP1BUF4_size                            0x1
#define SSP1BUF4_value_mask                      0x10
#define SSP1BUF4_clear_mask                      0xEF

#define SSP1BUF_BUF5                             0x5
#define SSP1BUF_BUF5_address                     0x211
#define SSP1BUF_BUF5_position                    0x5
#define SSP1BUF_BUF5_size                        0x1
#define SSP1BUF_BUF5_value_mask                  0x20
#define SSP1BUF_BUF5_clear_mask                  0xDF

#define SSP1BUF5                                 0x5
#define SSP1BUF5_address                         0x211
#define SSP1BUF5_position                        0x5
#define SSP1BUF5_size                            0x1
#define SSP1BUF5_value_mask                      0x20
#define SSP1BUF5_clear_mask                      0xDF

#define SSP1BUF_BUF6                             0x6
#define SSP1BUF_BUF6_address                     0x211
#define SSP1BUF_BUF6_position                    0x6
#define SSP1BUF_BUF6_size                        0x1
#define SSP1BUF_BUF6_value_mask                  0x40
#define SSP1BUF_BUF6_clear_mask                  0xBF

#define SSP1BUF6                                 0x6
#define SSP1BUF6_address                         0x211
#define SSP1BUF6_position                        0x6
#define SSP1BUF6_size                            0x1
#define SSP1BUF6_value_mask                      0x40
#define SSP1BUF6_clear_mask                      0xBF

#define SSP1BUF_BUF7                             0x7
#define SSP1BUF_BUF7_address                     0x211
#define SSP1BUF_BUF7_position                    0x7
#define SSP1BUF_BUF7_size                        0x1
#define SSP1BUF_BUF7_value_mask                  0x80
#define SSP1BUF_BUF7_clear_mask                  0x7F

#define SSP1BUF7                                 0x7
#define SSP1BUF7_address                         0x211
#define SSP1BUF7_position                        0x7
#define SSP1BUF7_size                            0x1
#define SSP1BUF7_value_mask                      0x80
#define SSP1BUF7_clear_mask                      0x7F


/*------------------------------------------------------------------------------------------------------------------#
| SSP1ADD                                                                                                     0x212 |
#-------------------------------------------------------------------------------------------------------------------#
| SSP1ADD7 | SSP1ADD_ADD6 | SSP1ADD_ADD5 | SSP1ADD_ADD4 | SSP1ADD_ADD3 | SSP1ADD_ADD2 | SSP1ADD_ADD1 | SSP1ADD_ADD0 |
#-------------------------------------------------------------------------------------------------------------------#
| 7        | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#------------------------------------------------------------------------------------------------------------------*/

#define SSP1ADD_ADD0                             0x0
#define SSP1ADD_ADD0_address                     0x212
#define SSP1ADD_ADD0_position                    0x0
#define SSP1ADD_ADD0_size                        0x1
#define SSP1ADD_ADD0_value_mask                  0x1
#define SSP1ADD_ADD0_clear_mask                  0xFE

#define SSP1ADD_ADD                              0x0
#define SSP1ADD_ADD_address                      0x212
#define SSP1ADD_ADD_position                     0x0
#define SSP1ADD_ADD_size                         0x8
#define SSP1ADD_ADD_value_mask                   0xFF
#define SSP1ADD_ADD_clear_mask                   0x0

#define SSP1ADD0                                 0x0
#define SSP1ADD0_address                         0x212
#define SSP1ADD0_position                        0x0
#define SSP1ADD0_size                            0x1
#define SSP1ADD0_value_mask                      0x1
#define SSP1ADD0_clear_mask                      0xFE

#define SSP1ADD                                  0x0
#define SSP1ADD_address                          0x212
#define SSP1ADD_position                         0x0
#define SSP1ADD_size                             0x8
#define SSP1ADD_value_mask                       0xFF
#define SSP1ADD_clear_mask                       0x0

#define SSP1ADD_ADD1                             0x1
#define SSP1ADD_ADD1_address                     0x212
#define SSP1ADD_ADD1_position                    0x1
#define SSP1ADD_ADD1_size                        0x1
#define SSP1ADD_ADD1_value_mask                  0x2
#define SSP1ADD_ADD1_clear_mask                  0xFD

#define SSP1ADD1                                 0x1
#define SSP1ADD1_address                         0x212
#define SSP1ADD1_position                        0x1
#define SSP1ADD1_size                            0x1
#define SSP1ADD1_value_mask                      0x2
#define SSP1ADD1_clear_mask                      0xFD

#define SSP1ADD_ADD2                             0x2
#define SSP1ADD_ADD2_address                     0x212
#define SSP1ADD_ADD2_position                    0x2
#define SSP1ADD_ADD2_size                        0x1
#define SSP1ADD_ADD2_value_mask                  0x4
#define SSP1ADD_ADD2_clear_mask                  0xFB

#define SSP1ADD2                                 0x2
#define SSP1ADD2_address                         0x212
#define SSP1ADD2_position                        0x2
#define SSP1ADD2_size                            0x1
#define SSP1ADD2_value_mask                      0x4
#define SSP1ADD2_clear_mask                      0xFB

#define SSP1ADD_ADD3                             0x3
#define SSP1ADD_ADD3_address                     0x212
#define SSP1ADD_ADD3_position                    0x3
#define SSP1ADD_ADD3_size                        0x1
#define SSP1ADD_ADD3_value_mask                  0x8
#define SSP1ADD_ADD3_clear_mask                  0xF7

#define SSP1ADD3                                 0x3
#define SSP1ADD3_address                         0x212
#define SSP1ADD3_position                        0x3
#define SSP1ADD3_size                            0x1
#define SSP1ADD3_value_mask                      0x8
#define SSP1ADD3_clear_mask                      0xF7

#define SSP1ADD_ADD4                             0x4
#define SSP1ADD_ADD4_address                     0x212
#define SSP1ADD_ADD4_position                    0x4
#define SSP1ADD_ADD4_size                        0x1
#define SSP1ADD_ADD4_value_mask                  0x10
#define SSP1ADD_ADD4_clear_mask                  0xEF

#define SSP1ADD4                                 0x4
#define SSP1ADD4_address                         0x212
#define SSP1ADD4_position                        0x4
#define SSP1ADD4_size                            0x1
#define SSP1ADD4_value_mask                      0x10
#define SSP1ADD4_clear_mask                      0xEF

#define SSP1ADD_ADD5                             0x5
#define SSP1ADD_ADD5_address                     0x212
#define SSP1ADD_ADD5_position                    0x5
#define SSP1ADD_ADD5_size                        0x1
#define SSP1ADD_ADD5_value_mask                  0x20
#define SSP1ADD_ADD5_clear_mask                  0xDF

#define SSP1ADD5                                 0x5
#define SSP1ADD5_address                         0x212
#define SSP1ADD5_position                        0x5
#define SSP1ADD5_size                            0x1
#define SSP1ADD5_value_mask                      0x20
#define SSP1ADD5_clear_mask                      0xDF

#define SSP1ADD_ADD6                             0x6
#define SSP1ADD_ADD6_address                     0x212
#define SSP1ADD_ADD6_position                    0x6
#define SSP1ADD_ADD6_size                        0x1
#define SSP1ADD_ADD6_value_mask                  0x40
#define SSP1ADD_ADD6_clear_mask                  0xBF

#define SSP1ADD6                                 0x6
#define SSP1ADD6_address                         0x212
#define SSP1ADD6_position                        0x6
#define SSP1ADD6_size                            0x1
#define SSP1ADD6_value_mask                      0x40
#define SSP1ADD6_clear_mask                      0xBF

#define SSP1ADD_ADD7                             0x7
#define SSP1ADD_ADD7_address                     0x212
#define SSP1ADD_ADD7_position                    0x7
#define SSP1ADD_ADD7_size                        0x1
#define SSP1ADD_ADD7_value_mask                  0x80
#define SSP1ADD_ADD7_clear_mask                  0x7F

#define SSP1ADD7                                 0x7
#define SSP1ADD7_address                         0x212
#define SSP1ADD7_position                        0x7
#define SSP1ADD7_size                            0x1
#define SSP1ADD7_value_mask                      0x80
#define SSP1ADD7_clear_mask                      0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| SSP1MSK                                                                                                         0x213 |
#-----------------------------------------------------------------------------------------------------------------------#
| SSP1MSK_MSK7 | SSP1MSK_MSK6 | SSP1MSK_MSK5 | SSP1MSK_MSK4 | SSP1MSK_MSK3 | SSP1MSK_MSK2 | SSP1MSK_MSK1 | SSP1MSK_MSK0 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define SSP1MSK_MSK0                             0x0
#define SSP1MSK_MSK0_address                     0x213
#define SSP1MSK_MSK0_position                    0x0
#define SSP1MSK_MSK0_size                        0x1
#define SSP1MSK_MSK0_value_mask                  0x1
#define SSP1MSK_MSK0_clear_mask                  0xFE

#define SSP1MSK0                                 0x0
#define SSP1MSK0_address                         0x213
#define SSP1MSK0_position                        0x0
#define SSP1MSK0_size                            0x1
#define SSP1MSK0_value_mask                      0x1
#define SSP1MSK0_clear_mask                      0xFE

#define SSP1MSK_MSK                              0x0
#define SSP1MSK_MSK_address                      0x213
#define SSP1MSK_MSK_position                     0x0
#define SSP1MSK_MSK_size                         0x8
#define SSP1MSK_MSK_value_mask                   0xFF
#define SSP1MSK_MSK_clear_mask                   0x0

#define SSP1MSK                                  0x0
#define SSP1MSK_address                          0x213
#define SSP1MSK_position                         0x0
#define SSP1MSK_size                             0x8
#define SSP1MSK_value_mask                       0xFF
#define SSP1MSK_clear_mask                       0x0

#define SSP1MSK_MSK1                             0x1
#define SSP1MSK_MSK1_address                     0x213
#define SSP1MSK_MSK1_position                    0x1
#define SSP1MSK_MSK1_size                        0x1
#define SSP1MSK_MSK1_value_mask                  0x2
#define SSP1MSK_MSK1_clear_mask                  0xFD

#define SSP1MSK1                                 0x1
#define SSP1MSK1_address                         0x213
#define SSP1MSK1_position                        0x1
#define SSP1MSK1_size                            0x1
#define SSP1MSK1_value_mask                      0x2
#define SSP1MSK1_clear_mask                      0xFD

#define SSP1MSK_MSK2                             0x2
#define SSP1MSK_MSK2_address                     0x213
#define SSP1MSK_MSK2_position                    0x2
#define SSP1MSK_MSK2_size                        0x1
#define SSP1MSK_MSK2_value_mask                  0x4
#define SSP1MSK_MSK2_clear_mask                  0xFB

#define SSP1MSK2                                 0x2
#define SSP1MSK2_address                         0x213
#define SSP1MSK2_position                        0x2
#define SSP1MSK2_size                            0x1
#define SSP1MSK2_value_mask                      0x4
#define SSP1MSK2_clear_mask                      0xFB

#define SSP1MSK_MSK3                             0x3
#define SSP1MSK_MSK3_address                     0x213
#define SSP1MSK_MSK3_position                    0x3
#define SSP1MSK_MSK3_size                        0x1
#define SSP1MSK_MSK3_value_mask                  0x8
#define SSP1MSK_MSK3_clear_mask                  0xF7

#define SSP1MSK3                                 0x3
#define SSP1MSK3_address                         0x213
#define SSP1MSK3_position                        0x3
#define SSP1MSK3_size                            0x1
#define SSP1MSK3_value_mask                      0x8
#define SSP1MSK3_clear_mask                      0xF7

#define SSP1MSK_MSK4                             0x4
#define SSP1MSK_MSK4_address                     0x213
#define SSP1MSK_MSK4_position                    0x4
#define SSP1MSK_MSK4_size                        0x1
#define SSP1MSK_MSK4_value_mask                  0x10
#define SSP1MSK_MSK4_clear_mask                  0xEF

#define SSP1MSK4                                 0x4
#define SSP1MSK4_address                         0x213
#define SSP1MSK4_position                        0x4
#define SSP1MSK4_size                            0x1
#define SSP1MSK4_value_mask                      0x10
#define SSP1MSK4_clear_mask                      0xEF

#define SSP1MSK_MSK5                             0x5
#define SSP1MSK_MSK5_address                     0x213
#define SSP1MSK_MSK5_position                    0x5
#define SSP1MSK_MSK5_size                        0x1
#define SSP1MSK_MSK5_value_mask                  0x20
#define SSP1MSK_MSK5_clear_mask                  0xDF

#define SSP1MSK5                                 0x5
#define SSP1MSK5_address                         0x213
#define SSP1MSK5_position                        0x5
#define SSP1MSK5_size                            0x1
#define SSP1MSK5_value_mask                      0x20
#define SSP1MSK5_clear_mask                      0xDF

#define SSP1MSK_MSK6                             0x6
#define SSP1MSK_MSK6_address                     0x213
#define SSP1MSK_MSK6_position                    0x6
#define SSP1MSK_MSK6_size                        0x1
#define SSP1MSK_MSK6_value_mask                  0x40
#define SSP1MSK_MSK6_clear_mask                  0xBF

#define SSP1MSK6                                 0x6
#define SSP1MSK6_address                         0x213
#define SSP1MSK6_position                        0x6
#define SSP1MSK6_size                            0x1
#define SSP1MSK6_value_mask                      0x40
#define SSP1MSK6_clear_mask                      0xBF

#define SSP1MSK_MSK7                             0x7
#define SSP1MSK_MSK7_address                     0x213
#define SSP1MSK_MSK7_position                    0x7
#define SSP1MSK_MSK7_size                        0x1
#define SSP1MSK_MSK7_value_mask                  0x80
#define SSP1MSK_MSK7_clear_mask                  0x7F

#define SSP1MSK7                                 0x7
#define SSP1MSK7_address                         0x213
#define SSP1MSK7_position                        0x7
#define SSP1MSK7_size                            0x1
#define SSP1MSK7_value_mask                      0x80
#define SSP1MSK7_clear_mask                      0x7F


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


/*--------------------------------------#
| SSPLVL                          0x218 |
#---------------------------------------#
| - | - | - | S2ILS | - | - | - | S1ILS |
#---------------------------------------#
| 7 | 6 | 5 | 4     | 3 | 2 | 1 | 0     |
#--------------------------------------*/

#define SSPLVL                                   0x0
#define SSPLVL_address                           0x218
#define SSPLVL_position                          0x0
#define SSPLVL_size                              0x8
#define SSPLVL_value_mask                        0xFF
#define SSPLVL_clear_mask                        0x0

#define S1ILS                                    0x0
#define S1ILS_address                            0x218
#define S1ILS_position                           0x0
#define S1ILS_size                               0x1
#define S1ILS_value_mask                         0x1
#define S1ILS_clear_mask                         0xFE

#define S2ILS                                    0x4
#define S2ILS_address                            0x218
#define S2ILS_position                           0x4
#define S2ILS_size                               0x1
#define S2ILS_value_mask                         0x10
#define S2ILS_clear_mask                         0xEF


/*------------------------------------------------------------------------------------------#
| SSP2BUF                                                                             0x219 |
#-------------------------------------------------------------------------------------------#
| SSP2BUF7 | SSP2BUF6 | SSP2BUF5 | SSP2BUF4 | SSP2BUF_BUF3 | SSP2BUF2 | SSP2BUF1 | SSP2BUF0 |
#-------------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3            | 2        | 1        | 0        |
#------------------------------------------------------------------------------------------*/

#define SSP2BUF                                  0x0
#define SSP2BUF_address                          0x219
#define SSP2BUF_position                         0x0
#define SSP2BUF_size                             0x8
#define SSP2BUF_value_mask                       0xFF
#define SSP2BUF_clear_mask                       0x0

#define SSP2BUF_BUF0                             0x0
#define SSP2BUF_BUF0_address                     0x219
#define SSP2BUF_BUF0_position                    0x0
#define SSP2BUF_BUF0_size                        0x1
#define SSP2BUF_BUF0_value_mask                  0x1
#define SSP2BUF_BUF0_clear_mask                  0xFE

#define SSP2BUF_BUF                              0x0
#define SSP2BUF_BUF_address                      0x219
#define SSP2BUF_BUF_position                     0x0
#define SSP2BUF_BUF_size                         0x8
#define SSP2BUF_BUF_value_mask                   0xFF
#define SSP2BUF_BUF_clear_mask                   0x0

#define SSP2BUF0                                 0x0
#define SSP2BUF0_address                         0x219
#define SSP2BUF0_position                        0x0
#define SSP2BUF0_size                            0x1
#define SSP2BUF0_value_mask                      0x1
#define SSP2BUF0_clear_mask                      0xFE

#define SSP2BUF_BUF1                             0x1
#define SSP2BUF_BUF1_address                     0x219
#define SSP2BUF_BUF1_position                    0x1
#define SSP2BUF_BUF1_size                        0x1
#define SSP2BUF_BUF1_value_mask                  0x2
#define SSP2BUF_BUF1_clear_mask                  0xFD

#define SSP2BUF1                                 0x1
#define SSP2BUF1_address                         0x219
#define SSP2BUF1_position                        0x1
#define SSP2BUF1_size                            0x1
#define SSP2BUF1_value_mask                      0x2
#define SSP2BUF1_clear_mask                      0xFD

#define SSP2BUF_BUF2                             0x2
#define SSP2BUF_BUF2_address                     0x219
#define SSP2BUF_BUF2_position                    0x2
#define SSP2BUF_BUF2_size                        0x1
#define SSP2BUF_BUF2_value_mask                  0x4
#define SSP2BUF_BUF2_clear_mask                  0xFB

#define SSP2BUF2                                 0x2
#define SSP2BUF2_address                         0x219
#define SSP2BUF2_position                        0x2
#define SSP2BUF2_size                            0x1
#define SSP2BUF2_value_mask                      0x4
#define SSP2BUF2_clear_mask                      0xFB

#define SSP2BUF_BUF3                             0x3
#define SSP2BUF_BUF3_address                     0x219
#define SSP2BUF_BUF3_position                    0x3
#define SSP2BUF_BUF3_size                        0x1
#define SSP2BUF_BUF3_value_mask                  0x8
#define SSP2BUF_BUF3_clear_mask                  0xF7

#define SSP2BUF3                                 0x3
#define SSP2BUF3_address                         0x219
#define SSP2BUF3_position                        0x3
#define SSP2BUF3_size                            0x1
#define SSP2BUF3_value_mask                      0x8
#define SSP2BUF3_clear_mask                      0xF7

#define SSP2BUF_BUF4                             0x4
#define SSP2BUF_BUF4_address                     0x219
#define SSP2BUF_BUF4_position                    0x4
#define SSP2BUF_BUF4_size                        0x1
#define SSP2BUF_BUF4_value_mask                  0x10
#define SSP2BUF_BUF4_clear_mask                  0xEF

#define SSP2BUF4                                 0x4
#define SSP2BUF4_address                         0x219
#define SSP2BUF4_position                        0x4
#define SSP2BUF4_size                            0x1
#define SSP2BUF4_value_mask                      0x10
#define SSP2BUF4_clear_mask                      0xEF

#define SSP2BUF_BUF5                             0x5
#define SSP2BUF_BUF5_address                     0x219
#define SSP2BUF_BUF5_position                    0x5
#define SSP2BUF_BUF5_size                        0x1
#define SSP2BUF_BUF5_value_mask                  0x20
#define SSP2BUF_BUF5_clear_mask                  0xDF

#define SSP2BUF5                                 0x5
#define SSP2BUF5_address                         0x219
#define SSP2BUF5_position                        0x5
#define SSP2BUF5_size                            0x1
#define SSP2BUF5_value_mask                      0x20
#define SSP2BUF5_clear_mask                      0xDF

#define SSP2BUF_BUF6                             0x6
#define SSP2BUF_BUF6_address                     0x219
#define SSP2BUF_BUF6_position                    0x6
#define SSP2BUF_BUF6_size                        0x1
#define SSP2BUF_BUF6_value_mask                  0x40
#define SSP2BUF_BUF6_clear_mask                  0xBF

#define SSP2BUF6                                 0x6
#define SSP2BUF6_address                         0x219
#define SSP2BUF6_position                        0x6
#define SSP2BUF6_size                            0x1
#define SSP2BUF6_value_mask                      0x40
#define SSP2BUF6_clear_mask                      0xBF

#define SSP2BUF_BUF7                             0x7
#define SSP2BUF_BUF7_address                     0x219
#define SSP2BUF_BUF7_position                    0x7
#define SSP2BUF_BUF7_size                        0x1
#define SSP2BUF_BUF7_value_mask                  0x80
#define SSP2BUF_BUF7_clear_mask                  0x7F

#define SSP2BUF7                                 0x7
#define SSP2BUF7_address                         0x219
#define SSP2BUF7_position                        0x7
#define SSP2BUF7_size                            0x1
#define SSP2BUF7_value_mask                      0x80
#define SSP2BUF7_clear_mask                      0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| SSP2ADD                                                                                                         0x21A |
#-----------------------------------------------------------------------------------------------------------------------#
| SSP2ADD_ADD7 | SSP2ADD_ADD6 | SSP2ADD_ADD5 | SSP2ADD_ADD4 | SSP2ADD_ADD3 | SSP2ADD_ADD2 | SSP2ADD_ADD1 | SSP2ADD_ADD0 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define SSP2ADD_ADD0                             0x0
#define SSP2ADD_ADD0_address                     0x21A
#define SSP2ADD_ADD0_position                    0x0
#define SSP2ADD_ADD0_size                        0x1
#define SSP2ADD_ADD0_value_mask                  0x1
#define SSP2ADD_ADD0_clear_mask                  0xFE

#define SSP2ADD0                                 0x0
#define SSP2ADD0_address                         0x21A
#define SSP2ADD0_position                        0x0
#define SSP2ADD0_size                            0x1
#define SSP2ADD0_value_mask                      0x1
#define SSP2ADD0_clear_mask                      0xFE

#define SSP2ADD_ADD                              0x0
#define SSP2ADD_ADD_address                      0x21A
#define SSP2ADD_ADD_position                     0x0
#define SSP2ADD_ADD_size                         0x8
#define SSP2ADD_ADD_value_mask                   0xFF
#define SSP2ADD_ADD_clear_mask                   0x0

#define SSP2ADD                                  0x0
#define SSP2ADD_address                          0x21A
#define SSP2ADD_position                         0x0
#define SSP2ADD_size                             0x8
#define SSP2ADD_value_mask                       0xFF
#define SSP2ADD_clear_mask                       0x0

#define SSP2ADD_ADD1                             0x1
#define SSP2ADD_ADD1_address                     0x21A
#define SSP2ADD_ADD1_position                    0x1
#define SSP2ADD_ADD1_size                        0x1
#define SSP2ADD_ADD1_value_mask                  0x2
#define SSP2ADD_ADD1_clear_mask                  0xFD

#define SSP2ADD1                                 0x1
#define SSP2ADD1_address                         0x21A
#define SSP2ADD1_position                        0x1
#define SSP2ADD1_size                            0x1
#define SSP2ADD1_value_mask                      0x2
#define SSP2ADD1_clear_mask                      0xFD

#define SSP2ADD_ADD2                             0x2
#define SSP2ADD_ADD2_address                     0x21A
#define SSP2ADD_ADD2_position                    0x2
#define SSP2ADD_ADD2_size                        0x1
#define SSP2ADD_ADD2_value_mask                  0x4
#define SSP2ADD_ADD2_clear_mask                  0xFB

#define SSP2ADD2                                 0x2
#define SSP2ADD2_address                         0x21A
#define SSP2ADD2_position                        0x2
#define SSP2ADD2_size                            0x1
#define SSP2ADD2_value_mask                      0x4
#define SSP2ADD2_clear_mask                      0xFB

#define SSP2ADD_ADD3                             0x3
#define SSP2ADD_ADD3_address                     0x21A
#define SSP2ADD_ADD3_position                    0x3
#define SSP2ADD_ADD3_size                        0x1
#define SSP2ADD_ADD3_value_mask                  0x8
#define SSP2ADD_ADD3_clear_mask                  0xF7

#define SSP2ADD3                                 0x3
#define SSP2ADD3_address                         0x21A
#define SSP2ADD3_position                        0x3
#define SSP2ADD3_size                            0x1
#define SSP2ADD3_value_mask                      0x8
#define SSP2ADD3_clear_mask                      0xF7

#define SSP2ADD_ADD4                             0x4
#define SSP2ADD_ADD4_address                     0x21A
#define SSP2ADD_ADD4_position                    0x4
#define SSP2ADD_ADD4_size                        0x1
#define SSP2ADD_ADD4_value_mask                  0x10
#define SSP2ADD_ADD4_clear_mask                  0xEF

#define SSP2ADD4                                 0x4
#define SSP2ADD4_address                         0x21A
#define SSP2ADD4_position                        0x4
#define SSP2ADD4_size                            0x1
#define SSP2ADD4_value_mask                      0x10
#define SSP2ADD4_clear_mask                      0xEF

#define SSP2ADD_ADD5                             0x5
#define SSP2ADD_ADD5_address                     0x21A
#define SSP2ADD_ADD5_position                    0x5
#define SSP2ADD_ADD5_size                        0x1
#define SSP2ADD_ADD5_value_mask                  0x20
#define SSP2ADD_ADD5_clear_mask                  0xDF

#define SSP2ADD5                                 0x5
#define SSP2ADD5_address                         0x21A
#define SSP2ADD5_position                        0x5
#define SSP2ADD5_size                            0x1
#define SSP2ADD5_value_mask                      0x20
#define SSP2ADD5_clear_mask                      0xDF

#define SSP2ADD_ADD6                             0x6
#define SSP2ADD_ADD6_address                     0x21A
#define SSP2ADD_ADD6_position                    0x6
#define SSP2ADD_ADD6_size                        0x1
#define SSP2ADD_ADD6_value_mask                  0x40
#define SSP2ADD_ADD6_clear_mask                  0xBF

#define SSP2ADD6                                 0x6
#define SSP2ADD6_address                         0x21A
#define SSP2ADD6_position                        0x6
#define SSP2ADD6_size                            0x1
#define SSP2ADD6_value_mask                      0x40
#define SSP2ADD6_clear_mask                      0xBF

#define SSP2ADD_ADD7                             0x7
#define SSP2ADD_ADD7_address                     0x21A
#define SSP2ADD_ADD7_position                    0x7
#define SSP2ADD_ADD7_size                        0x1
#define SSP2ADD_ADD7_value_mask                  0x80
#define SSP2ADD_ADD7_clear_mask                  0x7F

#define SSP2ADD7                                 0x7
#define SSP2ADD7_address                         0x21A
#define SSP2ADD7_position                        0x7
#define SSP2ADD7_size                            0x1
#define SSP2ADD7_value_mask                      0x80
#define SSP2ADD7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| SSP2MSK                                                                         0x21B |
#---------------------------------------------------------------------------------------#
| SSP2MSK7 | SSP2MSK6 | SSP2MSK5 | SSP2MSK4 | SSP2MSK3 | SSP2MSK2 | SSP2MSK1 | SSP2MSK0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define SSP2MSK_MSK0                             0x0
#define SSP2MSK_MSK0_address                     0x21B
#define SSP2MSK_MSK0_position                    0x0
#define SSP2MSK_MSK0_size                        0x1
#define SSP2MSK_MSK0_value_mask                  0x1
#define SSP2MSK_MSK0_clear_mask                  0xFE

#define SSP2MSK                                  0x0
#define SSP2MSK_address                          0x21B
#define SSP2MSK_position                         0x0
#define SSP2MSK_size                             0x8
#define SSP2MSK_value_mask                       0xFF
#define SSP2MSK_clear_mask                       0x0

#define SSP2MSK0                                 0x0
#define SSP2MSK0_address                         0x21B
#define SSP2MSK0_position                        0x0
#define SSP2MSK0_size                            0x1
#define SSP2MSK0_value_mask                      0x1
#define SSP2MSK0_clear_mask                      0xFE

#define SSP2MSK_MSK                              0x0
#define SSP2MSK_MSK_address                      0x21B
#define SSP2MSK_MSK_position                     0x0
#define SSP2MSK_MSK_size                         0x8
#define SSP2MSK_MSK_value_mask                   0xFF
#define SSP2MSK_MSK_clear_mask                   0x0

#define SSP2MSK_MSK1                             0x1
#define SSP2MSK_MSK1_address                     0x21B
#define SSP2MSK_MSK1_position                    0x1
#define SSP2MSK_MSK1_size                        0x1
#define SSP2MSK_MSK1_value_mask                  0x2
#define SSP2MSK_MSK1_clear_mask                  0xFD

#define SSP2MSK1                                 0x1
#define SSP2MSK1_address                         0x21B
#define SSP2MSK1_position                        0x1
#define SSP2MSK1_size                            0x1
#define SSP2MSK1_value_mask                      0x2
#define SSP2MSK1_clear_mask                      0xFD

#define SSP2MSK_MSK2                             0x2
#define SSP2MSK_MSK2_address                     0x21B
#define SSP2MSK_MSK2_position                    0x2
#define SSP2MSK_MSK2_size                        0x1
#define SSP2MSK_MSK2_value_mask                  0x4
#define SSP2MSK_MSK2_clear_mask                  0xFB

#define SSP2MSK2                                 0x2
#define SSP2MSK2_address                         0x21B
#define SSP2MSK2_position                        0x2
#define SSP2MSK2_size                            0x1
#define SSP2MSK2_value_mask                      0x4
#define SSP2MSK2_clear_mask                      0xFB

#define SSP2MSK_MSK3                             0x3
#define SSP2MSK_MSK3_address                     0x21B
#define SSP2MSK_MSK3_position                    0x3
#define SSP2MSK_MSK3_size                        0x1
#define SSP2MSK_MSK3_value_mask                  0x8
#define SSP2MSK_MSK3_clear_mask                  0xF7

#define SSP2MSK3                                 0x3
#define SSP2MSK3_address                         0x21B
#define SSP2MSK3_position                        0x3
#define SSP2MSK3_size                            0x1
#define SSP2MSK3_value_mask                      0x8
#define SSP2MSK3_clear_mask                      0xF7

#define SSP2MSK_MSK4                             0x4
#define SSP2MSK_MSK4_address                     0x21B
#define SSP2MSK_MSK4_position                    0x4
#define SSP2MSK_MSK4_size                        0x1
#define SSP2MSK_MSK4_value_mask                  0x10
#define SSP2MSK_MSK4_clear_mask                  0xEF

#define SSP2MSK4                                 0x4
#define SSP2MSK4_address                         0x21B
#define SSP2MSK4_position                        0x4
#define SSP2MSK4_size                            0x1
#define SSP2MSK4_value_mask                      0x10
#define SSP2MSK4_clear_mask                      0xEF

#define SSP2MSK_MSK5                             0x5
#define SSP2MSK_MSK5_address                     0x21B
#define SSP2MSK_MSK5_position                    0x5
#define SSP2MSK_MSK5_size                        0x1
#define SSP2MSK_MSK5_value_mask                  0x20
#define SSP2MSK_MSK5_clear_mask                  0xDF

#define SSP2MSK5                                 0x5
#define SSP2MSK5_address                         0x21B
#define SSP2MSK5_position                        0x5
#define SSP2MSK5_size                            0x1
#define SSP2MSK5_value_mask                      0x20
#define SSP2MSK5_clear_mask                      0xDF

#define SSP2MSK_MSK6                             0x6
#define SSP2MSK_MSK6_address                     0x21B
#define SSP2MSK_MSK6_position                    0x6
#define SSP2MSK_MSK6_size                        0x1
#define SSP2MSK_MSK6_value_mask                  0x40
#define SSP2MSK_MSK6_clear_mask                  0xBF

#define SSP2MSK6                                 0x6
#define SSP2MSK6_address                         0x21B
#define SSP2MSK6_position                        0x6
#define SSP2MSK6_size                            0x1
#define SSP2MSK6_value_mask                      0x40
#define SSP2MSK6_clear_mask                      0xBF

#define SSP2MSK_MSK7                             0x7
#define SSP2MSK_MSK7_address                     0x21B
#define SSP2MSK_MSK7_position                    0x7
#define SSP2MSK_MSK7_size                        0x1
#define SSP2MSK_MSK7_value_mask                  0x80
#define SSP2MSK_MSK7_clear_mask                  0x7F

#define SSP2MSK7                                 0x7
#define SSP2MSK7_address                         0x21B
#define SSP2MSK7_position                        0x7
#define SSP2MSK7_size                            0x1
#define SSP2MSK7_value_mask                      0x80
#define SSP2MSK7_clear_mask                      0x7F


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


/*--------------------------------------------#
| PWM1DCL                               0x611 |
#---------------------------------------------#
| PWM1DCL1 | PWM1DCL0 | - | - | - | - | - | - |
#---------------------------------------------#
| 7        | 6        | 5 | 4 | 3 | 2 | 1 | 0 |
#--------------------------------------------*/

#define PWM1DCL                                  0x6
#define PWM1DCL_address                          0x611
#define PWM1DCL_position                         0x6
#define PWM1DCL_size                             0x2
#define PWM1DCL_value_mask                       0xC0
#define PWM1DCL_clear_mask                       0x3F

#define PWM1DCL0                                 0x6
#define PWM1DCL0_address                         0x611
#define PWM1DCL0_position                        0x6
#define PWM1DCL0_size                            0x1
#define PWM1DCL0_value_mask                      0x40
#define PWM1DCL0_clear_mask                      0xBF

#define PWM1DCL1                                 0x7
#define PWM1DCL1_address                         0x611
#define PWM1DCL1_position                        0x7
#define PWM1DCL1_size                            0x1
#define PWM1DCL1_value_mask                      0x80
#define PWM1DCL1_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM1DCH                                                                         0x612 |
#---------------------------------------------------------------------------------------#
| PWM1DCH7 | PWM1DCH6 | PWM1DCH5 | PWM1DCH4 | PWM1DCH3 | PWM1DCH2 | PWM1DCH1 | PWM1DCH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM1DCH                                  0x0
#define PWM1DCH_address                          0x612
#define PWM1DCH_position                         0x0
#define PWM1DCH_size                             0x8
#define PWM1DCH_value_mask                       0xFF
#define PWM1DCH_clear_mask                       0x0

#define PWM1DCH0                                 0x0
#define PWM1DCH0_address                         0x612
#define PWM1DCH0_position                        0x0
#define PWM1DCH0_size                            0x1
#define PWM1DCH0_value_mask                      0x1
#define PWM1DCH0_clear_mask                      0xFE

#define PWM1DCH1                                 0x1
#define PWM1DCH1_address                         0x612
#define PWM1DCH1_position                        0x1
#define PWM1DCH1_size                            0x1
#define PWM1DCH1_value_mask                      0x2
#define PWM1DCH1_clear_mask                      0xFD

#define PWM1DCH2                                 0x2
#define PWM1DCH2_address                         0x612
#define PWM1DCH2_position                        0x2
#define PWM1DCH2_size                            0x1
#define PWM1DCH2_value_mask                      0x4
#define PWM1DCH2_clear_mask                      0xFB

#define PWM1DCH3                                 0x3
#define PWM1DCH3_address                         0x612
#define PWM1DCH3_position                        0x3
#define PWM1DCH3_size                            0x1
#define PWM1DCH3_value_mask                      0x8
#define PWM1DCH3_clear_mask                      0xF7

#define PWM1DCH4                                 0x4
#define PWM1DCH4_address                         0x612
#define PWM1DCH4_position                        0x4
#define PWM1DCH4_size                            0x1
#define PWM1DCH4_value_mask                      0x10
#define PWM1DCH4_clear_mask                      0xEF

#define PWM1DCH5                                 0x5
#define PWM1DCH5_address                         0x612
#define PWM1DCH5_position                        0x5
#define PWM1DCH5_size                            0x1
#define PWM1DCH5_value_mask                      0x20
#define PWM1DCH5_clear_mask                      0xDF

#define PWM1DCH6                                 0x6
#define PWM1DCH6_address                         0x612
#define PWM1DCH6_position                        0x6
#define PWM1DCH6_size                            0x1
#define PWM1DCH6_value_mask                      0x40
#define PWM1DCH6_clear_mask                      0xBF

#define PWM1DCH7                                 0x7
#define PWM1DCH7_address                         0x612
#define PWM1DCH7_position                        0x7
#define PWM1DCH7_size                            0x1
#define PWM1DCH7_value_mask                      0x80
#define PWM1DCH7_clear_mask                      0x7F


/*------------------------------------------------------------#
| PWM1CON                                               0x613 |
#-------------------------------------------------------------#
| PWM1EN | PWM1CON_PWM1OE | PWM1OUT | PWM1POL | - | - | - | - |
#-------------------------------------------------------------#
| 7      | 6              | 5       | 4       | 3 | 2 | 1 | 0 |
#------------------------------------------------------------*/

#define PWM1CON                                  0x0
#define PWM1CON_address                          0x613
#define PWM1CON_position                         0x0
#define PWM1CON_size                             0x8
#define PWM1CON_value_mask                       0xFF
#define PWM1CON_clear_mask                       0x0

#define PWM1POL                                  0x4
#define PWM1POL_address                          0x613
#define PWM1POL_position                         0x4
#define PWM1POL_size                             0x1
#define PWM1POL_value_mask                       0x10
#define PWM1POL_clear_mask                       0xEF

#define PWM1OUT                                  0x5
#define PWM1OUT_address                          0x613
#define PWM1OUT_position                         0x5
#define PWM1OUT_size                             0x1
#define PWM1OUT_value_mask                       0x20
#define PWM1OUT_clear_mask                       0xDF

#define PWM1CON_PWM1OE                           0x6
#define PWM1CON_PWM1OE_address                   0x613
#define PWM1CON_PWM1OE_position                  0x6
#define PWM1CON_PWM1OE_size                      0x1
#define PWM1CON_PWM1OE_value_mask                0x40
#define PWM1CON_PWM1OE_clear_mask                0xBF

#define PWM1EN                                   0x7
#define PWM1EN_address                           0x613
#define PWM1EN_position                          0x7
#define PWM1EN_size                              0x1
#define PWM1EN_value_mask                        0x80
#define PWM1EN_clear_mask                        0x7F


/*--------------------------------------------#
| PWM2DCL                               0x614 |
#---------------------------------------------#
| PWM2DCL1 | PWM2DCL0 | - | - | - | - | - | - |
#---------------------------------------------#
| 7        | 6        | 5 | 4 | 3 | 2 | 1 | 0 |
#--------------------------------------------*/

#define PWM2DCL0                                 0x6
#define PWM2DCL0_address                         0x614
#define PWM2DCL0_position                        0x6
#define PWM2DCL0_size                            0x1
#define PWM2DCL0_value_mask                      0x40
#define PWM2DCL0_clear_mask                      0xBF

#define PWM2DCL                                  0x6
#define PWM2DCL_address                          0x614
#define PWM2DCL_position                         0x6
#define PWM2DCL_size                             0x2
#define PWM2DCL_value_mask                       0xC0
#define PWM2DCL_clear_mask                       0x3F

#define PWM2DCL1                                 0x7
#define PWM2DCL1_address                         0x614
#define PWM2DCL1_position                        0x7
#define PWM2DCL1_size                            0x1
#define PWM2DCL1_value_mask                      0x80
#define PWM2DCL1_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM2DCH                                                                         0x615 |
#---------------------------------------------------------------------------------------#
| PWM2DCH7 | PWM2DCH6 | PWM2DCH5 | PWM2DCH4 | PWM2DCH3 | PWM2DCH2 | PWM2DCH1 | PWM2DCH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM2DCH0                                 0x0
#define PWM2DCH0_address                         0x615
#define PWM2DCH0_position                        0x0
#define PWM2DCH0_size                            0x1
#define PWM2DCH0_value_mask                      0x1
#define PWM2DCH0_clear_mask                      0xFE

#define PWM2DCH                                  0x0
#define PWM2DCH_address                          0x615
#define PWM2DCH_position                         0x0
#define PWM2DCH_size                             0x8
#define PWM2DCH_value_mask                       0xFF
#define PWM2DCH_clear_mask                       0x0

#define PWM2DCH1                                 0x1
#define PWM2DCH1_address                         0x615
#define PWM2DCH1_position                        0x1
#define PWM2DCH1_size                            0x1
#define PWM2DCH1_value_mask                      0x2
#define PWM2DCH1_clear_mask                      0xFD

#define PWM2DCH2                                 0x2
#define PWM2DCH2_address                         0x615
#define PWM2DCH2_position                        0x2
#define PWM2DCH2_size                            0x1
#define PWM2DCH2_value_mask                      0x4
#define PWM2DCH2_clear_mask                      0xFB

#define PWM2DCH3                                 0x3
#define PWM2DCH3_address                         0x615
#define PWM2DCH3_position                        0x3
#define PWM2DCH3_size                            0x1
#define PWM2DCH3_value_mask                      0x8
#define PWM2DCH3_clear_mask                      0xF7

#define PWM2DCH4                                 0x4
#define PWM2DCH4_address                         0x615
#define PWM2DCH4_position                        0x4
#define PWM2DCH4_size                            0x1
#define PWM2DCH4_value_mask                      0x10
#define PWM2DCH4_clear_mask                      0xEF

#define PWM2DCH5                                 0x5
#define PWM2DCH5_address                         0x615
#define PWM2DCH5_position                        0x5
#define PWM2DCH5_size                            0x1
#define PWM2DCH5_value_mask                      0x20
#define PWM2DCH5_clear_mask                      0xDF

#define PWM2DCH6                                 0x6
#define PWM2DCH6_address                         0x615
#define PWM2DCH6_position                        0x6
#define PWM2DCH6_size                            0x1
#define PWM2DCH6_value_mask                      0x40
#define PWM2DCH6_clear_mask                      0xBF

#define PWM2DCH7                                 0x7
#define PWM2DCH7_address                         0x615
#define PWM2DCH7_position                        0x7
#define PWM2DCH7_size                            0x1
#define PWM2DCH7_value_mask                      0x80
#define PWM2DCH7_clear_mask                      0x7F


/*------------------------------------------------------------#
| PWM2CON                                               0x616 |
#-------------------------------------------------------------#
| PWM2EN | PWM2CON_PWM2OE | PWM2OUT | PWM2POL | - | - | - | - |
#-------------------------------------------------------------#
| 7      | 6              | 5       | 4       | 3 | 2 | 1 | 0 |
#------------------------------------------------------------*/

#define PWM2CON                                  0x0
#define PWM2CON_address                          0x616
#define PWM2CON_position                         0x0
#define PWM2CON_size                             0x8
#define PWM2CON_value_mask                       0xFF
#define PWM2CON_clear_mask                       0x0

#define PWM2POL                                  0x4
#define PWM2POL_address                          0x616
#define PWM2POL_position                         0x4
#define PWM2POL_size                             0x1
#define PWM2POL_value_mask                       0x10
#define PWM2POL_clear_mask                       0xEF

#define PWM2OUT                                  0x5
#define PWM2OUT_address                          0x616
#define PWM2OUT_position                         0x5
#define PWM2OUT_size                             0x1
#define PWM2OUT_value_mask                       0x20
#define PWM2OUT_clear_mask                       0xDF

#define PWM2CON_PWM2OE                           0x6
#define PWM2CON_PWM2OE_address                   0x616
#define PWM2CON_PWM2OE_position                  0x6
#define PWM2CON_PWM2OE_size                      0x1
#define PWM2CON_PWM2OE_value_mask                0x40
#define PWM2CON_PWM2OE_clear_mask                0xBF

#define PWM2EN                                   0x7
#define PWM2EN_address                           0x616
#define PWM2EN_position                          0x7
#define PWM2EN_size                              0x1
#define PWM2EN_value_mask                        0x80
#define PWM2EN_clear_mask                        0x7F


/*----------------------------------------#
| PWMTMRS                           0x61D |
#-----------------------------------------#
| - | - | - | - | - | P2TSEL | - | P1TSEL |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1 | 0      |
#----------------------------------------*/

#define PWMTMRS                                  0x0
#define PWMTMRS_address                          0x61D
#define PWMTMRS_position                         0x0
#define PWMTMRS_size                             0x8
#define PWMTMRS_value_mask                       0xFF
#define PWMTMRS_clear_mask                       0x0

#define P1TSEL                                   0x0
#define P1TSEL_address                           0x61D
#define P1TSEL_position                          0x0
#define P1TSEL_size                              0x1
#define P1TSEL_value_mask                        0x1
#define P1TSEL_clear_mask                        0xFE

#define P2TSEL                                   0x2
#define P2TSEL_address                           0x61D
#define P2TSEL_position                          0x2
#define P2TSEL_size                              0x1
#define P2TSEL_value_mask                        0x4
#define P2TSEL_clear_mask                        0xFB


/*------------------------------------------------------#
| PWM1AOE                                         0x61E |
#-------------------------------------------------------#
| - | - | - | - | PWM1OE3 | PWM1OE2 | PWM1OE1 | PWM1OE0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define PWM1AOE                                  0x0
#define PWM1AOE_address                          0x61E
#define PWM1AOE_position                         0x0
#define PWM1AOE_size                             0x8
#define PWM1AOE_value_mask                       0xFF
#define PWM1AOE_clear_mask                       0x0

#define PWM1OE0                                  0x0
#define PWM1OE0_address                          0x61E
#define PWM1OE0_position                         0x0
#define PWM1OE0_size                             0x1
#define PWM1OE0_value_mask                       0x1
#define PWM1OE0_clear_mask                       0xFE

#define PWM1AOE_PWM1OE                           0x0
#define PWM1AOE_PWM1OE_address                   0x61E
#define PWM1AOE_PWM1OE_position                  0x0
#define PWM1AOE_PWM1OE_size                      0x4
#define PWM1AOE_PWM1OE_value_mask                0xF
#define PWM1AOE_PWM1OE_clear_mask                0xF0

#define PWM1OE1                                  0x1
#define PWM1OE1_address                          0x61E
#define PWM1OE1_position                         0x1
#define PWM1OE1_size                             0x1
#define PWM1OE1_value_mask                       0x2
#define PWM1OE1_clear_mask                       0xFD

#define PWM1OE2                                  0x2
#define PWM1OE2_address                          0x61E
#define PWM1OE2_position                         0x2
#define PWM1OE2_size                             0x1
#define PWM1OE2_value_mask                       0x4
#define PWM1OE2_clear_mask                       0xFB

#define PWM1OE3                                  0x3
#define PWM1OE3_address                          0x61E
#define PWM1OE3_position                         0x3
#define PWM1OE3_size                             0x1
#define PWM1OE3_value_mask                       0x8
#define PWM1OE3_clear_mask                       0xF7


/*------------------------------------------------------#
| PWM2AOE                                         0x61F |
#-------------------------------------------------------#
| - | - | - | - | PWM2OE3 | PWM2OE2 | PWM2OE1 | PWM2OE0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define PWM2AOE                                  0x0
#define PWM2AOE_address                          0x61F
#define PWM2AOE_position                         0x0
#define PWM2AOE_size                             0x8
#define PWM2AOE_value_mask                       0xFF
#define PWM2AOE_clear_mask                       0x0

#define PWM2OE0                                  0x0
#define PWM2OE0_address                          0x61F
#define PWM2OE0_position                         0x0
#define PWM2OE0_size                             0x1
#define PWM2OE0_value_mask                       0x1
#define PWM2OE0_clear_mask                       0xFE

#define PWM2AOE_PWM2OE                           0x0
#define PWM2AOE_PWM2OE_address                   0x61F
#define PWM2AOE_PWM2OE_position                  0x0
#define PWM2AOE_PWM2OE_size                      0x4
#define PWM2AOE_PWM2OE_value_mask                0xF
#define PWM2AOE_PWM2OE_clear_mask                0xF0

#define PWM2OE1                                  0x1
#define PWM2OE1_address                          0x61F
#define PWM2OE1_position                         0x1
#define PWM2OE1_size                             0x1
#define PWM2OE1_value_mask                       0x2
#define PWM2OE1_clear_mask                       0xFD

#define PWM2OE2                                  0x2
#define PWM2OE2_address                          0x61F
#define PWM2OE2_position                         0x2
#define PWM2OE2_size                             0x1
#define PWM2OE2_value_mask                       0x4
#define PWM2OE2_clear_mask                       0xFB

#define PWM2OE3                                  0x3
#define PWM2OE3_address                          0x61F
#define PWM2OE3_position                         0x3
#define PWM2OE3_size                             0x1
#define PWM2OE3_value_mask                       0x8
#define PWM2OE3_clear_mask                       0xF7


/*------------------------------------------------------#
| ADCTX                                           0x691 |
#-------------------------------------------------------#
| - | A2TX2 | A2TX1 | A2TX0 | - | A1TX2 | A1TX1 | A1TX0 |
#-------------------------------------------------------#
| 7 | 6     | 5     | 4     | 3 | 2     | 1     | 0     |
#------------------------------------------------------*/

#define ADCTX                                    0x0
#define ADCTX_address                            0x691
#define ADCTX_position                           0x0
#define ADCTX_size                               0x8
#define ADCTX_value_mask                         0xFF
#define ADCTX_clear_mask                         0x0

#define A1TX0                                    0x0
#define A1TX0_address                            0x691
#define A1TX0_position                           0x0
#define A1TX0_size                               0x1
#define A1TX0_value_mask                         0x1
#define A1TX0_clear_mask                         0xFE

#define A1TX1                                    0x1
#define A1TX1_address                            0x691
#define A1TX1_position                           0x1
#define A1TX1_size                               0x1
#define A1TX1_value_mask                         0x2
#define A1TX1_clear_mask                         0xFD

#define A1TX2                                    0x2
#define A1TX2_address                            0x691
#define A1TX2_position                           0x2
#define A1TX2_size                               0x1
#define A1TX2_value_mask                         0x4
#define A1TX2_clear_mask                         0xFB

#define A2TX0                                    0x4
#define A2TX0_address                            0x691
#define A2TX0_position                           0x4
#define A2TX0_size                               0x1
#define A2TX0_value_mask                         0x10
#define A2TX0_clear_mask                         0xEF

#define A2TX1                                    0x5
#define A2TX1_address                            0x691
#define A2TX1_position                           0x5
#define A2TX1_size                               0x1
#define A2TX1_value_mask                         0x20
#define A2TX1_clear_mask                         0xDF

#define A2TX2                                    0x6
#define A2TX2_address                            0x691
#define A2TX2_position                           0x6
#define A2TX2_size                               0x1
#define A2TX2_value_mask                         0x40
#define A2TX2_clear_mask                         0xBF


/*------------------------------------------------------#
| AD1TX0                                          0x692 |
#-------------------------------------------------------#
| TX17 | TX16 | TX15 | TX14 | TX13 | TX12 | TX11 | TX10 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define AD1TX0                                   0x0
#define AD1TX0_address                           0x692
#define AD1TX0_position                          0x0
#define AD1TX0_size                              0x8
#define AD1TX0_value_mask                        0xFF
#define AD1TX0_clear_mask                        0x0

#define TX10                                     0x0
#define TX10_address                             0x692
#define TX10_position                            0x0
#define TX10_size                                0x1
#define TX10_value_mask                          0x1
#define TX10_clear_mask                          0xFE

#define TX11                                     0x1
#define TX11_address                             0x692
#define TX11_position                            0x1
#define TX11_size                                0x1
#define TX11_value_mask                          0x2
#define TX11_clear_mask                          0xFD

#define TX12                                     0x2
#define TX12_address                             0x692
#define TX12_position                            0x2
#define TX12_size                                0x1
#define TX12_value_mask                          0x4
#define TX12_clear_mask                          0xFB

#define TX13                                     0x3
#define TX13_address                             0x692
#define TX13_position                            0x3
#define TX13_size                                0x1
#define TX13_value_mask                          0x8
#define TX13_clear_mask                          0xF7

#define TX14                                     0x4
#define TX14_address                             0x692
#define TX14_position                            0x4
#define TX14_size                                0x1
#define TX14_value_mask                          0x10
#define TX14_clear_mask                          0xEF

#define TX15                                     0x5
#define TX15_address                             0x692
#define TX15_position                            0x5
#define TX15_size                                0x1
#define TX15_value_mask                          0x20
#define TX15_clear_mask                          0xDF

#define TX16                                     0x6
#define TX16_address                             0x692
#define TX16_position                            0x6
#define TX16_size                                0x1
#define TX16_value_mask                          0x40
#define TX16_clear_mask                          0xBF

#define TX17                                     0x7
#define TX17_address                             0x692
#define TX17_position                            0x7
#define TX17_size                                0x1
#define TX17_value_mask                          0x80
#define TX17_clear_mask                          0x7F


/*------------------------------------------------------#
| AD1TX1                                          0x693 |
#-------------------------------------------------------#
| TX35 | TX34 | TX33 | TX32 | TX31 | TX30 | TX19 | TX18 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define AD1TX1                                   0x0
#define AD1TX1_address                           0x693
#define AD1TX1_position                          0x0
#define AD1TX1_size                              0x8
#define AD1TX1_value_mask                        0xFF
#define AD1TX1_clear_mask                        0x0

#define TX18                                     0x0
#define TX18_address                             0x693
#define TX18_position                            0x0
#define TX18_size                                0x1
#define TX18_value_mask                          0x1
#define TX18_clear_mask                          0xFE

#define TX19                                     0x1
#define TX19_address                             0x693
#define TX19_position                            0x1
#define TX19_size                                0x1
#define TX19_value_mask                          0x2
#define TX19_clear_mask                          0xFD

#define TX30                                     0x2
#define TX30_address                             0x693
#define TX30_position                            0x2
#define TX30_size                                0x1
#define TX30_value_mask                          0x4
#define TX30_clear_mask                          0xFB

#define TX31                                     0x3
#define TX31_address                             0x693
#define TX31_position                            0x3
#define TX31_size                                0x1
#define TX31_value_mask                          0x8
#define TX31_clear_mask                          0xF7

#define TX32                                     0x4
#define TX32_address                             0x693
#define TX32_position                            0x4
#define TX32_size                                0x1
#define TX32_value_mask                          0x10
#define TX32_clear_mask                          0xEF

#define TX33                                     0x5
#define TX33_address                             0x693
#define TX33_position                            0x5
#define TX33_size                                0x1
#define TX33_value_mask                          0x20
#define TX33_clear_mask                          0xDF

#define TX34                                     0x6
#define TX34_address                             0x693
#define TX34_position                            0x6
#define TX34_size                                0x1
#define TX34_value_mask                          0x40
#define TX34_clear_mask                          0xBF

#define TX35                                     0x7
#define TX35_address                             0x693
#define TX35_position                            0x7
#define TX35_size                                0x1
#define TX35_value_mask                          0x80
#define TX35_clear_mask                          0x7F


/*------------------------------------------------------#
| AD2TX0                                          0x694 |
#-------------------------------------------------------#
| TX27 | TX26 | TX25 | TX24 | TX23 | TX22 | TX21 | TX20 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define AD2TX0                                   0x0
#define AD2TX0_address                           0x694
#define AD2TX0_position                          0x0
#define AD2TX0_size                              0x8
#define AD2TX0_value_mask                        0xFF
#define AD2TX0_clear_mask                        0x0

#define TX20                                     0x0
#define TX20_address                             0x694
#define TX20_position                            0x0
#define TX20_size                                0x1
#define TX20_value_mask                          0x1
#define TX20_clear_mask                          0xFE

#define TX21                                     0x1
#define TX21_address                             0x694
#define TX21_position                            0x1
#define TX21_size                                0x1
#define TX21_value_mask                          0x2
#define TX21_clear_mask                          0xFD

#define TX22                                     0x2
#define TX22_address                             0x694
#define TX22_position                            0x2
#define TX22_size                                0x1
#define TX22_value_mask                          0x4
#define TX22_clear_mask                          0xFB

#define TX23                                     0x3
#define TX23_address                             0x694
#define TX23_position                            0x3
#define TX23_size                                0x1
#define TX23_value_mask                          0x8
#define TX23_clear_mask                          0xF7

#define TX24                                     0x4
#define TX24_address                             0x694
#define TX24_position                            0x4
#define TX24_size                                0x1
#define TX24_value_mask                          0x10
#define TX24_clear_mask                          0xEF

#define TX25                                     0x5
#define TX25_address                             0x694
#define TX25_position                            0x5
#define TX25_size                                0x1
#define TX25_value_mask                          0x20
#define TX25_clear_mask                          0xDF

#define TX26                                     0x6
#define TX26_address                             0x694
#define TX26_position                            0x6
#define TX26_size                                0x1
#define TX26_value_mask                          0x40
#define TX26_clear_mask                          0xBF

#define TX27                                     0x7
#define TX27_address                             0x694
#define TX27_position                            0x7
#define TX27_size                                0x1
#define TX27_value_mask                          0x80
#define TX27_clear_mask                          0x7F


/*------------------------------------------------------#
| AD2TX1                                          0x695 |
#-------------------------------------------------------#
| TX45 | TX44 | TX43 | TX42 | TX41 | TX40 | TX29 | TX28 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define AD2TX1                                   0x0
#define AD2TX1_address                           0x695
#define AD2TX1_position                          0x0
#define AD2TX1_size                              0x8
#define AD2TX1_value_mask                        0xFF
#define AD2TX1_clear_mask                        0x0

#define TX28                                     0x0
#define TX28_address                             0x695
#define TX28_position                            0x0
#define TX28_size                                0x1
#define TX28_value_mask                          0x1
#define TX28_clear_mask                          0xFE

#define TX29                                     0x1
#define TX29_address                             0x695
#define TX29_position                            0x1
#define TX29_size                                0x1
#define TX29_value_mask                          0x2
#define TX29_clear_mask                          0xFD

#define TX40                                     0x2
#define TX40_address                             0x695
#define TX40_position                            0x2
#define TX40_size                                0x1
#define TX40_value_mask                          0x4
#define TX40_clear_mask                          0xFB

#define TX41                                     0x3
#define TX41_address                             0x695
#define TX41_position                            0x3
#define TX41_size                                0x1
#define TX41_value_mask                          0x8
#define TX41_clear_mask                          0xF7

#define TX42                                     0x4
#define TX42_address                             0x695
#define TX42_position                            0x4
#define TX42_size                                0x1
#define TX42_value_mask                          0x10
#define TX42_clear_mask                          0xEF

#define TX43                                     0x5
#define TX43_address                             0x695
#define TX43_position                            0x5
#define TX43_size                                0x1
#define TX43_value_mask                          0x20
#define TX43_clear_mask                          0xDF

#define TX44                                     0x6
#define TX44_address                             0x695
#define TX44_position                            0x6
#define TX44_size                                0x1
#define TX44_value_mask                          0x40
#define TX44_clear_mask                          0xBF

#define TX45                                     0x7
#define TX45_address                             0x695
#define TX45_position                            0x7
#define TX45_size                                0x1
#define TX45_value_mask                          0x80
#define TX45_clear_mask                          0x7F


/*--------------------------------------------------------------------------------------------------------------------#
| AD1CON0                                                                                                       0x711 |
#---------------------------------------------------------------------------------------------------------------------#
| AD1CON0_CHS5 | AD1CON0_CHS4 | AD1CON0_CHS3 | AD1CON0_CHS2 | AD1CON0_CHS1 | AD1CON0_CHS0 | GO_nDONE1 | AD1CON0_AD1ON |
#---------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1         | 0             |
#--------------------------------------------------------------------------------------------------------------------*/

#define AD1CON0                                  0x0
#define AD1CON0_address                          0x711
#define AD1CON0_position                         0x0
#define AD1CON0_size                             0x8
#define AD1CON0_value_mask                       0xFF
#define AD1CON0_clear_mask                       0x0

#define AD1CON0_AD1ON                            0x0
#define AD1CON0_AD1ON_address                    0x711
#define AD1CON0_AD1ON_position                   0x0
#define AD1CON0_AD1ON_size                       0x1
#define AD1CON0_AD1ON_value_mask                 0x1
#define AD1CON0_AD1ON_clear_mask                 0xFE

#define AD1CON0_ADON                             0x0
#define AD1CON0_ADON_address                     0x711
#define AD1CON0_ADON_position                    0x0
#define AD1CON0_ADON_size                        0x1
#define AD1CON0_ADON_value_mask                  0x1
#define AD1CON0_ADON_clear_mask                  0xFE

#define AD1CON0_GO                               0x1
#define AD1CON0_GO_address                       0x711
#define AD1CON0_GO_position                      0x1
#define AD1CON0_GO_size                          0x1
#define AD1CON0_GO_value_mask                    0x2
#define AD1CON0_GO_clear_mask                    0xFD

#define GO_nDONE1                                0x1
#define GO_nDONE1_address                        0x711
#define GO_nDONE1_position                       0x1
#define GO_nDONE1_size                           0x1
#define GO_nDONE1_value_mask                     0x2
#define GO_nDONE1_clear_mask                     0xFD

#define AD1CON0_GO_nDONE                         0x1
#define AD1CON0_GO_nDONE_address                 0x711
#define AD1CON0_GO_nDONE_position                0x1
#define AD1CON0_GO_nDONE_size                    0x1
#define AD1CON0_GO_nDONE_value_mask              0x2
#define AD1CON0_GO_nDONE_clear_mask              0xFD

#define AD1CON0_CHS0                             0x2
#define AD1CON0_CHS0_address                     0x711
#define AD1CON0_CHS0_position                    0x2
#define AD1CON0_CHS0_size                        0x1
#define AD1CON0_CHS0_value_mask                  0x4
#define AD1CON0_CHS0_clear_mask                  0xFB

#define AD1CON0_CHS                              0x2
#define AD1CON0_CHS_address                      0x711
#define AD1CON0_CHS_position                     0x2
#define AD1CON0_CHS_size                         0x6
#define AD1CON0_CHS_value_mask                   0xFC
#define AD1CON0_CHS_clear_mask                   0x3

#define AD1CON0_CHS1                             0x3
#define AD1CON0_CHS1_address                     0x711
#define AD1CON0_CHS1_position                    0x3
#define AD1CON0_CHS1_size                        0x1
#define AD1CON0_CHS1_value_mask                  0x8
#define AD1CON0_CHS1_clear_mask                  0xF7

#define AD1CON0_CHS2                             0x4
#define AD1CON0_CHS2_address                     0x711
#define AD1CON0_CHS2_position                    0x4
#define AD1CON0_CHS2_size                        0x1
#define AD1CON0_CHS2_value_mask                  0x10
#define AD1CON0_CHS2_clear_mask                  0xEF

#define AD1CON0_CHS3                             0x5
#define AD1CON0_CHS3_address                     0x711
#define AD1CON0_CHS3_position                    0x5
#define AD1CON0_CHS3_size                        0x1
#define AD1CON0_CHS3_value_mask                  0x20
#define AD1CON0_CHS3_clear_mask                  0xDF

#define AD1CON0_CHS4                             0x6
#define AD1CON0_CHS4_address                     0x711
#define AD1CON0_CHS4_position                    0x6
#define AD1CON0_CHS4_size                        0x1
#define AD1CON0_CHS4_value_mask                  0x40
#define AD1CON0_CHS4_clear_mask                  0xBF

#define AD1CON0_CHS5                             0x7
#define AD1CON0_CHS5_address                     0x711
#define AD1CON0_CHS5_position                    0x7
#define AD1CON0_CHS5_size                        0x1
#define AD1CON0_CHS5_value_mask                  0x80
#define AD1CON0_CHS5_clear_mask                  0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| ADCOMCON                                                                                                        0x712 |
#-----------------------------------------------------------------------------------------------------------------------#
| ADCOMCON_ADFM | ADCS2 | ADCS1 | ADCS0 | ADCOMCON_ADNREF | ADCOMCON_GO_nDONE_ALL | ADCOMCON_ADPREF1 | ADCOMCON_ADPREF0 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7             | 6     | 5     | 4     | 3               | 2                     | 1                | 0                |
#----------------------------------------------------------------------------------------------------------------------*/

#define ADCOMCON                                 0x0
#define ADCOMCON_address                         0x712
#define ADCOMCON_position                        0x0
#define ADCOMCON_size                            0x8
#define ADCOMCON_value_mask                      0xFF
#define ADCOMCON_clear_mask                      0x0

#define ADCOMCON_ADPREF                          0x0
#define ADCOMCON_ADPREF_address                  0x712
#define ADCOMCON_ADPREF_position                 0x0
#define ADCOMCON_ADPREF_size                     0x2
#define ADCOMCON_ADPREF_value_mask               0x3
#define ADCOMCON_ADPREF_clear_mask               0xFC

#define ADCOMCON_ADPREF0                         0x0
#define ADCOMCON_ADPREF0_address                 0x712
#define ADCOMCON_ADPREF0_position                0x0
#define ADCOMCON_ADPREF0_size                    0x1
#define ADCOMCON_ADPREF0_value_mask              0x1
#define ADCOMCON_ADPREF0_clear_mask              0xFE

#define ADCOMCON_ADPREF1                         0x1
#define ADCOMCON_ADPREF1_address                 0x712
#define ADCOMCON_ADPREF1_position                0x1
#define ADCOMCON_ADPREF1_size                    0x1
#define ADCOMCON_ADPREF1_value_mask              0x2
#define ADCOMCON_ADPREF1_clear_mask              0xFD

#define ADCOMCON_GO_nDONE_ALL                    0x2
#define ADCOMCON_GO_nDONE_ALL_address            0x712
#define ADCOMCON_GO_nDONE_ALL_position           0x2
#define ADCOMCON_GO_nDONE_ALL_size               0x1
#define ADCOMCON_GO_nDONE_ALL_value_mask         0x4
#define ADCOMCON_GO_nDONE_ALL_clear_mask         0xFB

#define ADCOMCON_GO_ALL                          0x2
#define ADCOMCON_GO_ALL_address                  0x712
#define ADCOMCON_GO_ALL_position                 0x2
#define ADCOMCON_GO_ALL_size                     0x1
#define ADCOMCON_GO_ALL_value_mask               0x4
#define ADCOMCON_GO_ALL_clear_mask               0xFB

#define ADCOMCON_ADNREF                          0x3
#define ADCOMCON_ADNREF_address                  0x712
#define ADCOMCON_ADNREF_position                 0x3
#define ADCOMCON_ADNREF_size                     0x1
#define ADCOMCON_ADNREF_value_mask               0x8
#define ADCOMCON_ADNREF_clear_mask               0xF7

#define ADCS0                                    0x4
#define ADCS0_address                            0x712
#define ADCS0_position                           0x4
#define ADCS0_size                               0x1
#define ADCS0_value_mask                         0x10
#define ADCS0_clear_mask                         0xEF

#define ADCOMCON_ADCS                            0x4
#define ADCOMCON_ADCS_address                    0x712
#define ADCOMCON_ADCS_position                   0x4
#define ADCOMCON_ADCS_size                       0x3
#define ADCOMCON_ADCS_value_mask                 0x70
#define ADCOMCON_ADCS_clear_mask                 0x8F

#define ADCS1                                    0x5
#define ADCS1_address                            0x712
#define ADCS1_position                           0x5
#define ADCS1_size                               0x1
#define ADCS1_value_mask                         0x20
#define ADCS1_clear_mask                         0xDF

#define ADCS2                                    0x6
#define ADCS2_address                            0x712
#define ADCS2_position                           0x6
#define ADCS2_size                               0x1
#define ADCS2_value_mask                         0x40
#define ADCS2_clear_mask                         0xBF

#define ADCOMCON_ADFM                            0x7
#define ADCOMCON_ADFM_address                    0x712
#define ADCOMCON_ADFM_position                   0x7
#define ADCOMCON_ADFM_size                       0x1
#define ADCOMCON_ADFM_value_mask                 0x80
#define ADCOMCON_ADFM_clear_mask                 0x7F


/*---------------------------------------------------------------------------#
| AD1CON2                                                              0x713 |
#----------------------------------------------------------------------------#
| - | AD1CON2_TRIGSEL2 | AD1CON2_TRIGSEL1 | AD1CON2_TRIGSEL0 | - | - | - | - |
#----------------------------------------------------------------------------#
| 7 | 6                | 5                | 4                | 3 | 2 | 1 | 0 |
#---------------------------------------------------------------------------*/

#define AD1CON2                                  0x0
#define AD1CON2_address                          0x713
#define AD1CON2_position                         0x0
#define AD1CON2_size                             0x8
#define AD1CON2_value_mask                       0xFF
#define AD1CON2_clear_mask                       0x0

#define AD1CON2_TRIGSEL                          0x4
#define AD1CON2_TRIGSEL_address                  0x713
#define AD1CON2_TRIGSEL_position                 0x4
#define AD1CON2_TRIGSEL_size                     0x3
#define AD1CON2_TRIGSEL_value_mask               0x70
#define AD1CON2_TRIGSEL_clear_mask               0x8F

#define AD1CON2_TRIGSEL0                         0x4
#define AD1CON2_TRIGSEL0_address                 0x713
#define AD1CON2_TRIGSEL0_position                0x4
#define AD1CON2_TRIGSEL0_size                    0x1
#define AD1CON2_TRIGSEL0_value_mask              0x10
#define AD1CON2_TRIGSEL0_clear_mask              0xEF

#define AD1CON2_TRIGSEL1                         0x5
#define AD1CON2_TRIGSEL1_address                 0x713
#define AD1CON2_TRIGSEL1_position                0x5
#define AD1CON2_TRIGSEL1_size                    0x1
#define AD1CON2_TRIGSEL1_value_mask              0x20
#define AD1CON2_TRIGSEL1_clear_mask              0xDF

#define AD1CON2_TRIGSEL2                         0x6
#define AD1CON2_TRIGSEL2_address                 0x713
#define AD1CON2_TRIGSEL2_position                0x6
#define AD1CON2_TRIGSEL2_size                    0x1
#define AD1CON2_TRIGSEL2_value_mask              0x40
#define AD1CON2_TRIGSEL2_clear_mask              0xBF


/*---------------------------------------------------------------#
| AD1CON3                                                  0x714 |
#----------------------------------------------------------------#
| AD1EPPOL | AD1CON3_ADIPPOL | - | - | - | - | AD1IPEN | AD1DSEN |
#----------------------------------------------------------------#
| 7        | 6               | 5 | 4 | 3 | 2 | 1       | 0       |
#---------------------------------------------------------------*/

#define AD1CON3                                  0x0
#define AD1CON3_address                          0x714
#define AD1CON3_position                         0x0
#define AD1CON3_size                             0x8
#define AD1CON3_value_mask                       0xFF
#define AD1CON3_clear_mask                       0x0

#define AD1DSEN                                  0x0
#define AD1DSEN_address                          0x714
#define AD1DSEN_position                         0x0
#define AD1DSEN_size                             0x1
#define AD1DSEN_value_mask                       0x1
#define AD1DSEN_clear_mask                       0xFE

#define AD1CON3_ADDSEN                           0x0
#define AD1CON3_ADDSEN_address                   0x714
#define AD1CON3_ADDSEN_position                  0x0
#define AD1CON3_ADDSEN_size                      0x1
#define AD1CON3_ADDSEN_value_mask                0x1
#define AD1CON3_ADDSEN_clear_mask                0xFE

#define AD1IPEN                                  0x1
#define AD1IPEN_address                          0x714
#define AD1IPEN_position                         0x1
#define AD1IPEN_size                             0x1
#define AD1IPEN_value_mask                       0x2
#define AD1IPEN_clear_mask                       0xFD

#define AD1CON3_ADIPEN                           0x1
#define AD1CON3_ADIPEN_address                   0x714
#define AD1CON3_ADIPEN_position                  0x1
#define AD1CON3_ADIPEN_size                      0x1
#define AD1CON3_ADIPEN_value_mask                0x2
#define AD1CON3_ADIPEN_clear_mask                0xFD

#define AD1CON3_ADIPPOL                          0x6
#define AD1CON3_ADIPPOL_address                  0x714
#define AD1CON3_ADIPPOL_position                 0x6
#define AD1CON3_ADIPPOL_size                     0x1
#define AD1CON3_ADIPPOL_value_mask               0x40
#define AD1CON3_ADIPPOL_clear_mask               0xBF

#define AD1IPPOL                                 0x6
#define AD1IPPOL_address                         0x714
#define AD1IPPOL_position                        0x6
#define AD1IPPOL_size                            0x1
#define AD1IPPOL_value_mask                      0x40
#define AD1IPPOL_clear_mask                      0xBF

#define AD1EPPOL                                 0x7
#define AD1EPPOL_address                         0x714
#define AD1EPPOL_position                        0x7
#define AD1EPPOL_size                            0x1
#define AD1EPPOL_value_mask                      0x80
#define AD1EPPOL_clear_mask                      0x7F

#define AD1CON3_ADEPPOL                          0x7
#define AD1CON3_ADEPPOL_address                  0x714
#define AD1CON3_ADEPPOL_position                 0x7
#define AD1CON3_ADEPPOL_size                     0x1
#define AD1CON3_ADEPPOL_value_mask               0x80
#define AD1CON3_ADEPPOL_clear_mask               0x7F


/*------------------------------------------------------------------#
| ADSTAT                                                      0x715 |
#-------------------------------------------------------------------#
| - | AD2CONV | AD2STG1 | AD2STG0 | - | AD1CONV | AD1STG1 | AD1STG0 |
#-------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3 | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define ADSTAT                                   0x0
#define ADSTAT_address                           0x715
#define ADSTAT_position                          0x0
#define ADSTAT_size                              0x8
#define ADSTAT_value_mask                        0xFF
#define ADSTAT_clear_mask                        0x0

#define AD1STG0                                  0x0
#define AD1STG0_address                          0x715
#define AD1STG0_position                         0x0
#define AD1STG0_size                             0x1
#define AD1STG0_value_mask                       0x1
#define AD1STG0_clear_mask                       0xFE

#define ADSTG                                    0x0
#define ADSTG_address                            0x715
#define ADSTG_position                           0x0
#define ADSTG_size                               0x2
#define ADSTG_value_mask                         0x3
#define ADSTG_clear_mask                         0xFC

#define AD1STG                                   0x0
#define AD1STG_address                           0x715
#define AD1STG_position                          0x0
#define AD1STG_size                              0x2
#define AD1STG_value_mask                        0x3
#define AD1STG_clear_mask                        0xFC

#define AD1STG1                                  0x1
#define AD1STG1_address                          0x715
#define AD1STG1_position                         0x1
#define AD1STG1_size                             0x1
#define AD1STG1_value_mask                       0x2
#define AD1STG1_clear_mask                       0xFD

#define AD1CONV                                  0x2
#define AD1CONV_address                          0x715
#define AD1CONV_position                         0x2
#define AD1CONV_size                             0x1
#define AD1CONV_value_mask                       0x4
#define AD1CONV_clear_mask                       0xFB

#define ADCONV                                   0x2
#define ADCONV_address                           0x715
#define ADCONV_position                          0x2
#define ADCONV_size                              0x1
#define ADCONV_value_mask                        0x4
#define ADCONV_clear_mask                        0xFB

#define AD2STG0                                  0x4
#define AD2STG0_address                          0x715
#define AD2STG0_position                         0x4
#define AD2STG0_size                             0x1
#define AD2STG0_value_mask                       0x10
#define AD2STG0_clear_mask                       0xEF

#define AD2STG                                   0x4
#define AD2STG_address                           0x715
#define AD2STG_position                          0x4
#define AD2STG_size                              0x2
#define AD2STG_value_mask                        0x30
#define AD2STG_clear_mask                        0xCF

#define AD2STG1                                  0x5
#define AD2STG1_address                          0x715
#define AD2STG1_position                         0x5
#define AD2STG1_size                             0x1
#define AD2STG1_value_mask                       0x20
#define AD2STG1_clear_mask                       0xDF

#define AD2CONV                                  0x6
#define AD2CONV_address                          0x715
#define AD2CONV_position                         0x6
#define AD2CONV_size                             0x1
#define AD2CONV_value_mask                       0x40
#define AD2CONV_clear_mask                       0xBF


/*---------------------------------------------------------------------------------------------------------------------------------------#
| AD1PRECON                                                                                                                        0x716 |
#----------------------------------------------------------------------------------------------------------------------------------------#
| - | AD1PRECON_ADPRE6 | AD1PRECON_ADPRE5 | AD1PRECON_ADPRE4 | AD1PRECON_ADPRE3 | AD1PRECON_ADPRE2 | AD1PRECON_ADPRE1 | AD1PRECON_ADPRE0 |
#----------------------------------------------------------------------------------------------------------------------------------------#
| 7 | 6                | 5                | 4                | 3                | 2                | 1                | 0                |
#---------------------------------------------------------------------------------------------------------------------------------------*/

#define AD1PRECON                                0x0
#define AD1PRECON_address                        0x716
#define AD1PRECON_position                       0x0
#define AD1PRECON_size                           0x8
#define AD1PRECON_value_mask                     0xFF
#define AD1PRECON_clear_mask                     0x0

#define AD1PRECON_ADPRE                          0x0
#define AD1PRECON_ADPRE_address                  0x716
#define AD1PRECON_ADPRE_position                 0x0
#define AD1PRECON_ADPRE_size                     0x7
#define AD1PRECON_ADPRE_value_mask               0x7F
#define AD1PRECON_ADPRE_clear_mask               0x80

#define AD1PRECON_ADPRE0                         0x0
#define AD1PRECON_ADPRE0_address                 0x716
#define AD1PRECON_ADPRE0_position                0x0
#define AD1PRECON_ADPRE0_size                    0x1
#define AD1PRECON_ADPRE0_value_mask              0x1
#define AD1PRECON_ADPRE0_clear_mask              0xFE

#define AD1PRECON_ADPRE1                         0x1
#define AD1PRECON_ADPRE1_address                 0x716
#define AD1PRECON_ADPRE1_position                0x1
#define AD1PRECON_ADPRE1_size                    0x1
#define AD1PRECON_ADPRE1_value_mask              0x2
#define AD1PRECON_ADPRE1_clear_mask              0xFD

#define AD1PRECON_ADPRE2                         0x2
#define AD1PRECON_ADPRE2_address                 0x716
#define AD1PRECON_ADPRE2_position                0x2
#define AD1PRECON_ADPRE2_size                    0x1
#define AD1PRECON_ADPRE2_value_mask              0x4
#define AD1PRECON_ADPRE2_clear_mask              0xFB

#define AD1PRECON_ADPRE3                         0x3
#define AD1PRECON_ADPRE3_address                 0x716
#define AD1PRECON_ADPRE3_position                0x3
#define AD1PRECON_ADPRE3_size                    0x1
#define AD1PRECON_ADPRE3_value_mask              0x8
#define AD1PRECON_ADPRE3_clear_mask              0xF7

#define AD1PRECON_ADPRE4                         0x4
#define AD1PRECON_ADPRE4_address                 0x716
#define AD1PRECON_ADPRE4_position                0x4
#define AD1PRECON_ADPRE4_size                    0x1
#define AD1PRECON_ADPRE4_value_mask              0x10
#define AD1PRECON_ADPRE4_clear_mask              0xEF

#define AD1PRECON_ADPRE5                         0x5
#define AD1PRECON_ADPRE5_address                 0x716
#define AD1PRECON_ADPRE5_position                0x5
#define AD1PRECON_ADPRE5_size                    0x1
#define AD1PRECON_ADPRE5_value_mask              0x20
#define AD1PRECON_ADPRE5_clear_mask              0xDF

#define AD1PRECON_ADPRE6                         0x6
#define AD1PRECON_ADPRE6_address                 0x716
#define AD1PRECON_ADPRE6_position                0x6
#define AD1PRECON_ADPRE6_size                    0x1
#define AD1PRECON_ADPRE6_value_mask              0x40
#define AD1PRECON_ADPRE6_clear_mask              0xBF


/*---------------------------------------------------------------------------------------------------------------------------------------#
| AD1ACQCON                                                                                                                        0x717 |
#----------------------------------------------------------------------------------------------------------------------------------------#
| - | AD1ACQCON_ADACQ6 | AD1ACQCON_ADACQ5 | AD1ACQCON_ADACQ4 | AD1ACQCON_ADACQ3 | AD1ACQCON_ADACQ2 | AD1ACQCON_ADACQ1 | AD1ACQCON_ADACQ0 |
#----------------------------------------------------------------------------------------------------------------------------------------#
| 7 | 6                | 5                | 4                | 3                | 2                | 1                | 0                |
#---------------------------------------------------------------------------------------------------------------------------------------*/

#define AD1ACQCON                                0x0
#define AD1ACQCON_address                        0x717
#define AD1ACQCON_position                       0x0
#define AD1ACQCON_size                           0x8
#define AD1ACQCON_value_mask                     0xFF
#define AD1ACQCON_clear_mask                     0x0

#define AD1ACQCON_ADACQ0                         0x0
#define AD1ACQCON_ADACQ0_address                 0x717
#define AD1ACQCON_ADACQ0_position                0x0
#define AD1ACQCON_ADACQ0_size                    0x1
#define AD1ACQCON_ADACQ0_value_mask              0x1
#define AD1ACQCON_ADACQ0_clear_mask              0xFE

#define AD1ACQCON_ADACQ                          0x0
#define AD1ACQCON_ADACQ_address                  0x717
#define AD1ACQCON_ADACQ_position                 0x0
#define AD1ACQCON_ADACQ_size                     0x7
#define AD1ACQCON_ADACQ_value_mask               0x7F
#define AD1ACQCON_ADACQ_clear_mask               0x80

#define AD1ACQCON_ADACQ1                         0x1
#define AD1ACQCON_ADACQ1_address                 0x717
#define AD1ACQCON_ADACQ1_position                0x1
#define AD1ACQCON_ADACQ1_size                    0x1
#define AD1ACQCON_ADACQ1_value_mask              0x2
#define AD1ACQCON_ADACQ1_clear_mask              0xFD

#define AD1ACQCON_ADACQ2                         0x2
#define AD1ACQCON_ADACQ2_address                 0x717
#define AD1ACQCON_ADACQ2_position                0x2
#define AD1ACQCON_ADACQ2_size                    0x1
#define AD1ACQCON_ADACQ2_value_mask              0x4
#define AD1ACQCON_ADACQ2_clear_mask              0xFB

#define AD1ACQCON_ADACQ3                         0x3
#define AD1ACQCON_ADACQ3_address                 0x717
#define AD1ACQCON_ADACQ3_position                0x3
#define AD1ACQCON_ADACQ3_size                    0x1
#define AD1ACQCON_ADACQ3_value_mask              0x8
#define AD1ACQCON_ADACQ3_clear_mask              0xF7

#define AD1ACQCON_ADACQ4                         0x4
#define AD1ACQCON_ADACQ4_address                 0x717
#define AD1ACQCON_ADACQ4_position                0x4
#define AD1ACQCON_ADACQ4_size                    0x1
#define AD1ACQCON_ADACQ4_value_mask              0x10
#define AD1ACQCON_ADACQ4_clear_mask              0xEF

#define AD1ACQCON_ADACQ5                         0x5
#define AD1ACQCON_ADACQ5_address                 0x717
#define AD1ACQCON_ADACQ5_position                0x5
#define AD1ACQCON_ADACQ5_size                    0x1
#define AD1ACQCON_ADACQ5_value_mask              0x20
#define AD1ACQCON_ADACQ5_clear_mask              0xDF

#define AD1ACQCON_ADACQ6                         0x6
#define AD1ACQCON_ADACQ6_address                 0x717
#define AD1ACQCON_ADACQ6_position                0x6
#define AD1ACQCON_ADACQ6_size                    0x1
#define AD1ACQCON_ADACQ6_value_mask              0x40
#define AD1ACQCON_ADACQ6_clear_mask              0xBF


/*-----------------------------------------------------------#
| AD1GRD                                               0x718 |
#------------------------------------------------------------#
| GRD1BOE | AD1GRD_GRDAOE | GRD1POL | - | - | - | - | TX1POL |
#------------------------------------------------------------#
| 7       | 6             | 5       | 4 | 3 | 2 | 1 | 0      |
#-----------------------------------------------------------*/

#define AD1GRD                                   0x0
#define AD1GRD_address                           0x718
#define AD1GRD_position                          0x0
#define AD1GRD_size                              0x8
#define AD1GRD_value_mask                        0xFF
#define AD1GRD_clear_mask                        0x0

#define TX1POL                                   0x0
#define TX1POL_address                           0x718
#define TX1POL_position                          0x0
#define TX1POL_size                              0x1
#define TX1POL_value_mask                        0x1
#define TX1POL_clear_mask                        0xFE

#define AD1GRD_TXPOL                             0x0
#define AD1GRD_TXPOL_address                     0x718
#define AD1GRD_TXPOL_position                    0x0
#define AD1GRD_TXPOL_size                        0x1
#define AD1GRD_TXPOL_value_mask                  0x1
#define AD1GRD_TXPOL_clear_mask                  0xFE

#define GRD1POL                                  0x5
#define GRD1POL_address                          0x718
#define GRD1POL_position                         0x5
#define GRD1POL_size                             0x1
#define GRD1POL_value_mask                       0x20
#define GRD1POL_clear_mask                       0xDF

#define AD1GRD_GRDPOL                            0x5
#define AD1GRD_GRDPOL_address                    0x718
#define AD1GRD_GRDPOL_position                   0x5
#define AD1GRD_GRDPOL_size                       0x1
#define AD1GRD_GRDPOL_value_mask                 0x20
#define AD1GRD_GRDPOL_clear_mask                 0xDF

#define AD1GRD_GRDAOE                            0x6
#define AD1GRD_GRDAOE_address                    0x718
#define AD1GRD_GRDAOE_position                   0x6
#define AD1GRD_GRDAOE_size                       0x1
#define AD1GRD_GRDAOE_value_mask                 0x40
#define AD1GRD_GRDAOE_clear_mask                 0xBF

#define GRD1AOE                                  0x6
#define GRD1AOE_address                          0x718
#define GRD1AOE_position                         0x6
#define GRD1AOE_size                             0x1
#define GRD1AOE_value_mask                       0x40
#define GRD1AOE_clear_mask                       0xBF

#define GRD1BOE                                  0x7
#define GRD1BOE_address                          0x718
#define GRD1BOE_position                         0x7
#define GRD1BOE_size                             0x1
#define GRD1BOE_value_mask                       0x80
#define GRD1BOE_clear_mask                       0x7F

#define AD1GRD_GRDBOE                            0x7
#define AD1GRD_GRDBOE_address                    0x718
#define AD1GRD_GRDBOE_position                   0x7
#define AD1GRD_GRDBOE_size                       0x1
#define AD1GRD_GRDBOE_value_mask                 0x80
#define AD1GRD_GRDBOE_clear_mask                 0x7F


/*----------------------------------------------------------------------------------------------#
| AD1CAPCON                                                                               0x719 |
#-----------------------------------------------------------------------------------------------#
| - | - | - | - | AD1CAPCON_ADDCAP3 | AD1CAPCON_ADDCAP2 | AD1CAPCON_ADDCAP1 | AD1CAPCON_ADDCAP0 |
#-----------------------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3                 | 2                 | 1                 | 0                 |
#----------------------------------------------------------------------------------------------*/

#define AD1CAPCON                                0x0
#define AD1CAPCON_address                        0x719
#define AD1CAPCON_position                       0x0
#define AD1CAPCON_size                           0x8
#define AD1CAPCON_value_mask                     0xFF
#define AD1CAPCON_clear_mask                     0x0

#define AD1CAPCON_ADDCAP                         0x0
#define AD1CAPCON_ADDCAP_address                 0x719
#define AD1CAPCON_ADDCAP_position                0x0
#define AD1CAPCON_ADDCAP_size                    0x4
#define AD1CAPCON_ADDCAP_value_mask              0xF
#define AD1CAPCON_ADDCAP_clear_mask              0xF0

#define ADD1CAP                                  0x0
#define ADD1CAP_address                          0x719
#define ADD1CAP_position                         0x0
#define ADD1CAP_size                             0x4
#define ADD1CAP_value_mask                       0xF
#define ADD1CAP_clear_mask                       0xF0

#define AD1CAPCON_ADDCAP0                        0x0
#define AD1CAPCON_ADDCAP0_address                0x719
#define AD1CAPCON_ADDCAP0_position               0x0
#define AD1CAPCON_ADDCAP0_size                   0x1
#define AD1CAPCON_ADDCAP0_value_mask             0x1
#define AD1CAPCON_ADDCAP0_clear_mask             0xFE

#define AD1CAPCON_ADCAP                          0x0
#define AD1CAPCON_ADCAP_address                  0x719
#define AD1CAPCON_ADCAP_position                 0x0
#define AD1CAPCON_ADCAP_size                     0x4
#define AD1CAPCON_ADCAP_value_mask               0xF
#define AD1CAPCON_ADCAP_clear_mask               0xF0

#define AD1CAPCON_ADDCAP1                        0x1
#define AD1CAPCON_ADDCAP1_address                0x719
#define AD1CAPCON_ADDCAP1_position               0x1
#define AD1CAPCON_ADDCAP1_size                   0x1
#define AD1CAPCON_ADDCAP1_value_mask             0x2
#define AD1CAPCON_ADDCAP1_clear_mask             0xFD

#define AD1CAPCON_ADDCAP2                        0x2
#define AD1CAPCON_ADDCAP2_address                0x719
#define AD1CAPCON_ADDCAP2_position               0x2
#define AD1CAPCON_ADDCAP2_size                   0x1
#define AD1CAPCON_ADDCAP2_value_mask             0x4
#define AD1CAPCON_ADDCAP2_clear_mask             0xFB

#define AD1CAPCON_ADDCAP3                        0x3
#define AD1CAPCON_ADDCAP3_address                0x719
#define AD1CAPCON_ADDCAP3_position               0x3
#define AD1CAPCON_ADDCAP3_size                   0x1
#define AD1CAPCON_ADDCAP3_value_mask             0x8
#define AD1CAPCON_ADDCAP3_clear_mask             0xF7


/*------------------------------#
| AAD1RES0L               0x71A |
#-------------------------------#
| AAD1RES0L_ADRESL              |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define AAD1RES0L                                0x0
#define AAD1RES0L_address                        0x71A
#define AAD1RES0L_position                       0x0
#define AAD1RES0L_size                           0x8
#define AAD1RES0L_value_mask                     0xFF
#define AAD1RES0L_clear_mask                     0x0

#define AAD1RES0L_ADRESL                         0x0
#define AAD1RES0L_ADRESL_address                 0x71A
#define AAD1RES0L_ADRESL_position                0x0
#define AAD1RES0L_ADRESL_size                    0x8
#define AAD1RES0L_ADRESL_value_mask              0xFF
#define AAD1RES0L_ADRESL_clear_mask              0x0


/*------------------------------#
| AAD1RES0H               0x71B |
#-------------------------------#
| AAD1RES0H_ADRESH              |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define AAD1RES0H                                0x0
#define AAD1RES0H_address                        0x71B
#define AAD1RES0H_position                       0x0
#define AAD1RES0H_size                           0x8
#define AAD1RES0H_value_mask                     0xFF
#define AAD1RES0H_clear_mask                     0x0

#define AAD1RES0H_ADRESH                         0x0
#define AAD1RES0H_ADRESH_address                 0x71B
#define AAD1RES0H_ADRESH_position                0x0
#define AAD1RES0H_ADRESH_size                    0x8
#define AAD1RES0H_ADRESH_value_mask              0xFF
#define AAD1RES0H_ADRESH_clear_mask              0x0


/*------------------------------#
| AAD1RES1L               0x71C |
#-------------------------------#
| AAD1RES1L_ADRESL              |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define AAD1RES1L                                0x0
#define AAD1RES1L_address                        0x71C
#define AAD1RES1L_position                       0x0
#define AAD1RES1L_size                           0x8
#define AAD1RES1L_value_mask                     0xFF
#define AAD1RES1L_clear_mask                     0x0

#define AAD1RES1L_ADRESL                         0x0
#define AAD1RES1L_ADRESL_address                 0x71C
#define AAD1RES1L_ADRESL_position                0x0
#define AAD1RES1L_ADRESL_size                    0x8
#define AAD1RES1L_ADRESL_value_mask              0xFF
#define AAD1RES1L_ADRESL_clear_mask              0x0


/*------------------------------#
| AAD1RES1H               0x71D |
#-------------------------------#
| AAD1RES1H_ADRESH              |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define AAD1RES1H                                0x0
#define AAD1RES1H_address                        0x71D
#define AAD1RES1H_position                       0x0
#define AAD1RES1H_size                           0x8
#define AAD1RES1H_value_mask                     0xFF
#define AAD1RES1H_clear_mask                     0x0

#define AAD1RES1H_ADRESH                         0x0
#define AAD1RES1H_ADRESH_address                 0x71D
#define AAD1RES1H_ADRESH_position                0x0
#define AAD1RES1H_ADRESH_size                    0x8
#define AAD1RES1H_ADRESH_value_mask              0xFF
#define AAD1RES1H_ADRESH_clear_mask              0x0


/*-------------------------------------------------------#
| AD1CH0                                           0x71E |
#--------------------------------------------------------#
| CHS17 | CH16 | CH15 | CH14 | CH13 | CH12 | CH11 | CH10 |
#--------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#-------------------------------------------------------*/

#define AD1CH0                                   0x0
#define AD1CH0_address                           0x71E
#define AD1CH0_position                          0x0
#define AD1CH0_size                              0x8
#define AD1CH0_value_mask                        0xFF
#define AD1CH0_clear_mask                        0x0

#define CH10                                     0x0
#define CH10_address                             0x71E
#define CH10_position                            0x0
#define CH10_size                                0x1
#define CH10_value_mask                          0x1
#define CH10_clear_mask                          0xFE

#define CH11                                     0x1
#define CH11_address                             0x71E
#define CH11_position                            0x1
#define CH11_size                                0x1
#define CH11_value_mask                          0x2
#define CH11_clear_mask                          0xFD

#define CH12                                     0x2
#define CH12_address                             0x71E
#define CH12_position                            0x2
#define CH12_size                                0x1
#define CH12_value_mask                          0x4
#define CH12_clear_mask                          0xFB

#define CH13                                     0x3
#define CH13_address                             0x71E
#define CH13_position                            0x3
#define CH13_size                                0x1
#define CH13_value_mask                          0x8
#define CH13_clear_mask                          0xF7

#define CH14                                     0x4
#define CH14_address                             0x71E
#define CH14_position                            0x4
#define CH14_size                                0x1
#define CH14_value_mask                          0x10
#define CH14_clear_mask                          0xEF

#define CH15                                     0x5
#define CH15_address                             0x71E
#define CH15_position                            0x5
#define CH15_size                                0x1
#define CH15_value_mask                          0x20
#define CH15_clear_mask                          0xDF

#define CH16                                     0x6
#define CH16_address                             0x71E
#define CH16_position                            0x6
#define CH16_size                                0x1
#define CH16_value_mask                          0x40
#define CH16_clear_mask                          0xBF

#define CHS17                                    0x7
#define CHS17_address                            0x71E
#define CHS17_position                           0x7
#define CHS17_size                               0x1
#define CHS17_value_mask                         0x80
#define CHS17_clear_mask                         0x7F


/*------------------------------------------------------#
| AD1CH1                                          0x71F |
#-------------------------------------------------------#
| CH35 | CH34 | CH33 | CH32 | CH31 | CH30 | CH19 | CH18 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define AD1CH1                                   0x0
#define AD1CH1_address                           0x71F
#define AD1CH1_position                          0x0
#define AD1CH1_size                              0x8
#define AD1CH1_value_mask                        0xFF
#define AD1CH1_clear_mask                        0x0

#define CH18                                     0x0
#define CH18_address                             0x71F
#define CH18_position                            0x0
#define CH18_size                                0x1
#define CH18_value_mask                          0x1
#define CH18_clear_mask                          0xFE

#define CH19                                     0x1
#define CH19_address                             0x71F
#define CH19_position                            0x1
#define CH19_size                                0x1
#define CH19_value_mask                          0x2
#define CH19_clear_mask                          0xFD

#define CH30                                     0x2
#define CH30_address                             0x71F
#define CH30_position                            0x2
#define CH30_size                                0x1
#define CH30_value_mask                          0x4
#define CH30_clear_mask                          0xFB

#define CH31                                     0x3
#define CH31_address                             0x71F
#define CH31_position                            0x3
#define CH31_size                                0x1
#define CH31_value_mask                          0x8
#define CH31_clear_mask                          0xF7

#define CH32                                     0x4
#define CH32_address                             0x71F
#define CH32_position                            0x4
#define CH32_size                                0x1
#define CH32_value_mask                          0x10
#define CH32_clear_mask                          0xEF

#define CH33                                     0x5
#define CH33_address                             0x71F
#define CH33_position                            0x5
#define CH33_size                                0x1
#define CH33_value_mask                          0x20
#define CH33_clear_mask                          0xDF

#define CH34                                     0x6
#define CH34_address                             0x71F
#define CH34_position                            0x6
#define CH34_size                                0x1
#define CH34_value_mask                          0x40
#define CH34_clear_mask                          0xBF

#define CH35                                     0x7
#define CH35_address                             0x71F
#define CH35_position                            0x7
#define CH35_size                                0x1
#define CH35_value_mask                          0x80
#define CH35_clear_mask                          0x7F


/*------------------------------------------------------------------------------------------------------------#
| AD2CON0                                                                                               0x791 |
#-------------------------------------------------------------------------------------------------------------#
| AD2CON0_CHS5 | AD2CON0_CHS4 | AD2CON0_CHS3 | AD2CON0_CHS2 | AD2CON0_CHS1 | AD2CON0_CHS0 | GO_nDONE2 | AD2ON |
#-------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1         | 0     |
#------------------------------------------------------------------------------------------------------------*/

#define AD2CON0                                  0x0
#define AD2CON0_address                          0x791
#define AD2CON0_position                         0x0
#define AD2CON0_size                             0x8
#define AD2CON0_value_mask                       0xFF
#define AD2CON0_clear_mask                       0x0

#define AD2ON                                    0x0
#define AD2ON_address                            0x791
#define AD2ON_position                           0x0
#define AD2ON_size                               0x1
#define AD2ON_value_mask                         0x1
#define AD2ON_clear_mask                         0xFE

#define AD2CON0_ADON                             0x0
#define AD2CON0_ADON_address                     0x791
#define AD2CON0_ADON_position                    0x0
#define AD2CON0_ADON_size                        0x1
#define AD2CON0_ADON_value_mask                  0x1
#define AD2CON0_ADON_clear_mask                  0xFE

#define GO_nDONE2                                0x1
#define GO_nDONE2_address                        0x791
#define GO_nDONE2_position                       0x1
#define GO_nDONE2_size                           0x1
#define GO_nDONE2_value_mask                     0x2
#define GO_nDONE2_clear_mask                     0xFD

#define AD2CON0_GO                               0x1
#define AD2CON0_GO_address                       0x791
#define AD2CON0_GO_position                      0x1
#define AD2CON0_GO_size                          0x1
#define AD2CON0_GO_value_mask                    0x2
#define AD2CON0_GO_clear_mask                    0xFD

#define AD2CON0_GO_nDONE                         0x1
#define AD2CON0_GO_nDONE_address                 0x791
#define AD2CON0_GO_nDONE_position                0x1
#define AD2CON0_GO_nDONE_size                    0x1
#define AD2CON0_GO_nDONE_value_mask              0x2
#define AD2CON0_GO_nDONE_clear_mask              0xFD

#define AD2CON0_CHS                              0x2
#define AD2CON0_CHS_address                      0x791
#define AD2CON0_CHS_position                     0x2
#define AD2CON0_CHS_size                         0x6
#define AD2CON0_CHS_value_mask                   0xFC
#define AD2CON0_CHS_clear_mask                   0x3

#define AD2CON0_CHS0                             0x2
#define AD2CON0_CHS0_address                     0x791
#define AD2CON0_CHS0_position                    0x2
#define AD2CON0_CHS0_size                        0x1
#define AD2CON0_CHS0_value_mask                  0x4
#define AD2CON0_CHS0_clear_mask                  0xFB

#define AD2CON0_CHS1                             0x3
#define AD2CON0_CHS1_address                     0x791
#define AD2CON0_CHS1_position                    0x3
#define AD2CON0_CHS1_size                        0x1
#define AD2CON0_CHS1_value_mask                  0x8
#define AD2CON0_CHS1_clear_mask                  0xF7

#define AD2CON0_CHS2                             0x4
#define AD2CON0_CHS2_address                     0x791
#define AD2CON0_CHS2_position                    0x4
#define AD2CON0_CHS2_size                        0x1
#define AD2CON0_CHS2_value_mask                  0x10
#define AD2CON0_CHS2_clear_mask                  0xEF

#define AD2CON0_CHS3                             0x5
#define AD2CON0_CHS3_address                     0x791
#define AD2CON0_CHS3_position                    0x5
#define AD2CON0_CHS3_size                        0x1
#define AD2CON0_CHS3_value_mask                  0x20
#define AD2CON0_CHS3_clear_mask                  0xDF

#define AD2CON0_CHS4                             0x6
#define AD2CON0_CHS4_address                     0x791
#define AD2CON0_CHS4_position                    0x6
#define AD2CON0_CHS4_size                        0x1
#define AD2CON0_CHS4_value_mask                  0x40
#define AD2CON0_CHS4_clear_mask                  0xBF

#define AD2CON0_CHS5                             0x7
#define AD2CON0_CHS5_address                     0x791
#define AD2CON0_CHS5_position                    0x7
#define AD2CON0_CHS5_size                        0x1
#define AD2CON0_CHS5_value_mask                  0x80
#define AD2CON0_CHS5_clear_mask                  0x7F


/*---------------------------------------------------------------------------#
| AD2CON2                                                              0x793 |
#----------------------------------------------------------------------------#
| - | AD2CON2_TRIGSEL2 | AD2CON2_TRIGSEL1 | AD2CON2_TRIGSEL0 | - | - | - | - |
#----------------------------------------------------------------------------#
| 7 | 6                | 5                | 4                | 3 | 2 | 1 | 0 |
#---------------------------------------------------------------------------*/

#define AD2CON2                                  0x0
#define AD2CON2_address                          0x793
#define AD2CON2_position                         0x0
#define AD2CON2_size                             0x8
#define AD2CON2_value_mask                       0xFF
#define AD2CON2_clear_mask                       0x0

#define AD2CON2_TRIGSEL0                         0x4
#define AD2CON2_TRIGSEL0_address                 0x793
#define AD2CON2_TRIGSEL0_position                0x4
#define AD2CON2_TRIGSEL0_size                    0x1
#define AD2CON2_TRIGSEL0_value_mask              0x10
#define AD2CON2_TRIGSEL0_clear_mask              0xEF

#define AD2CON2_TRIGSEL                          0x4
#define AD2CON2_TRIGSEL_address                  0x793
#define AD2CON2_TRIGSEL_position                 0x4
#define AD2CON2_TRIGSEL_size                     0x3
#define AD2CON2_TRIGSEL_value_mask               0x70
#define AD2CON2_TRIGSEL_clear_mask               0x8F

#define AD2CON2_TRIGSEL1                         0x5
#define AD2CON2_TRIGSEL1_address                 0x793
#define AD2CON2_TRIGSEL1_position                0x5
#define AD2CON2_TRIGSEL1_size                    0x1
#define AD2CON2_TRIGSEL1_value_mask              0x20
#define AD2CON2_TRIGSEL1_clear_mask              0xDF

#define AD2CON2_TRIGSEL2                         0x6
#define AD2CON2_TRIGSEL2_address                 0x793
#define AD2CON2_TRIGSEL2_position                0x6
#define AD2CON2_TRIGSEL2_size                    0x1
#define AD2CON2_TRIGSEL2_value_mask              0x40
#define AD2CON2_TRIGSEL2_clear_mask              0xBF


/*----------------------------------------------------------------------#
| AD2CON3                                                         0x794 |
#-----------------------------------------------------------------------#
| AD2CON3_ADEPPOL | AD2IPPOL | - | - | - | - | AD2IPEN | AD2CON3_ADDSEN |
#-----------------------------------------------------------------------#
| 7               | 6        | 5 | 4 | 3 | 2 | 1       | 0              |
#----------------------------------------------------------------------*/

#define AD2CON3                                  0x0
#define AD2CON3_address                          0x794
#define AD2CON3_position                         0x0
#define AD2CON3_size                             0x8
#define AD2CON3_value_mask                       0xFF
#define AD2CON3_clear_mask                       0x0

#define AD2CON3_ADDSEN                           0x0
#define AD2CON3_ADDSEN_address                   0x794
#define AD2CON3_ADDSEN_position                  0x0
#define AD2CON3_ADDSEN_size                      0x1
#define AD2CON3_ADDSEN_value_mask                0x1
#define AD2CON3_ADDSEN_clear_mask                0xFE

#define AD2DSEN                                  0x0
#define AD2DSEN_address                          0x794
#define AD2DSEN_position                         0x0
#define AD2DSEN_size                             0x1
#define AD2DSEN_value_mask                       0x1
#define AD2DSEN_clear_mask                       0xFE

#define AD2IPEN                                  0x1
#define AD2IPEN_address                          0x794
#define AD2IPEN_position                         0x1
#define AD2IPEN_size                             0x1
#define AD2IPEN_value_mask                       0x2
#define AD2IPEN_clear_mask                       0xFD

#define AD2CON3_ADIPEN                           0x1
#define AD2CON3_ADIPEN_address                   0x794
#define AD2CON3_ADIPEN_position                  0x1
#define AD2CON3_ADIPEN_size                      0x1
#define AD2CON3_ADIPEN_value_mask                0x2
#define AD2CON3_ADIPEN_clear_mask                0xFD

#define AD2IPPOL                                 0x6
#define AD2IPPOL_address                         0x794
#define AD2IPPOL_position                        0x6
#define AD2IPPOL_size                            0x1
#define AD2IPPOL_value_mask                      0x40
#define AD2IPPOL_clear_mask                      0xBF

#define AD2CON3_ADIPPOL                          0x6
#define AD2CON3_ADIPPOL_address                  0x794
#define AD2CON3_ADIPPOL_position                 0x6
#define AD2CON3_ADIPPOL_size                     0x1
#define AD2CON3_ADIPPOL_value_mask               0x40
#define AD2CON3_ADIPPOL_clear_mask               0xBF

#define AD2CON3_ADEPPOL                          0x7
#define AD2CON3_ADEPPOL_address                  0x794
#define AD2CON3_ADEPPOL_position                 0x7
#define AD2CON3_ADEPPOL_size                     0x1
#define AD2CON3_ADEPPOL_value_mask               0x80
#define AD2CON3_ADEPPOL_clear_mask               0x7F

#define AD2EPPOL                                 0x7
#define AD2EPPOL_address                         0x794
#define AD2EPPOL_position                        0x7
#define AD2EPPOL_size                            0x1
#define AD2EPPOL_value_mask                      0x80
#define AD2EPPOL_clear_mask                      0x7F


/*---------------------------------------------------------------------------------------------------------------------------------------#
| AD2PRECON                                                                                                                        0x796 |
#----------------------------------------------------------------------------------------------------------------------------------------#
| - | AD2PRECON_ADPRE6 | AD2PRECON_ADPRE5 | AD2PRECON_ADPRE4 | AD2PRECON_ADPRE3 | AD2PRECON_ADPRE2 | AD2PRECON_ADPRE1 | AD2PRECON_ADPRE0 |
#----------------------------------------------------------------------------------------------------------------------------------------#
| 7 | 6                | 5                | 4                | 3                | 2                | 1                | 0                |
#---------------------------------------------------------------------------------------------------------------------------------------*/

#define AD2PRECON                                0x0
#define AD2PRECON_address                        0x796
#define AD2PRECON_position                       0x0
#define AD2PRECON_size                           0x8
#define AD2PRECON_value_mask                     0xFF
#define AD2PRECON_clear_mask                     0x0

#define AD2PRECON_ADPRE0                         0x0
#define AD2PRECON_ADPRE0_address                 0x796
#define AD2PRECON_ADPRE0_position                0x0
#define AD2PRECON_ADPRE0_size                    0x1
#define AD2PRECON_ADPRE0_value_mask              0x1
#define AD2PRECON_ADPRE0_clear_mask              0xFE

#define AD2PRECON_ADPRE                          0x0
#define AD2PRECON_ADPRE_address                  0x796
#define AD2PRECON_ADPRE_position                 0x0
#define AD2PRECON_ADPRE_size                     0x7
#define AD2PRECON_ADPRE_value_mask               0x7F
#define AD2PRECON_ADPRE_clear_mask               0x80

#define AD2PRECON_ADPRE1                         0x1
#define AD2PRECON_ADPRE1_address                 0x796
#define AD2PRECON_ADPRE1_position                0x1
#define AD2PRECON_ADPRE1_size                    0x1
#define AD2PRECON_ADPRE1_value_mask              0x2
#define AD2PRECON_ADPRE1_clear_mask              0xFD

#define AD2PRECON_ADPRE2                         0x2
#define AD2PRECON_ADPRE2_address                 0x796
#define AD2PRECON_ADPRE2_position                0x2
#define AD2PRECON_ADPRE2_size                    0x1
#define AD2PRECON_ADPRE2_value_mask              0x4
#define AD2PRECON_ADPRE2_clear_mask              0xFB

#define AD2PRECON_ADPRE3                         0x3
#define AD2PRECON_ADPRE3_address                 0x796
#define AD2PRECON_ADPRE3_position                0x3
#define AD2PRECON_ADPRE3_size                    0x1
#define AD2PRECON_ADPRE3_value_mask              0x8
#define AD2PRECON_ADPRE3_clear_mask              0xF7

#define AD2PRECON_ADPRE4                         0x4
#define AD2PRECON_ADPRE4_address                 0x796
#define AD2PRECON_ADPRE4_position                0x4
#define AD2PRECON_ADPRE4_size                    0x1
#define AD2PRECON_ADPRE4_value_mask              0x10
#define AD2PRECON_ADPRE4_clear_mask              0xEF

#define AD2PRECON_ADPRE5                         0x5
#define AD2PRECON_ADPRE5_address                 0x796
#define AD2PRECON_ADPRE5_position                0x5
#define AD2PRECON_ADPRE5_size                    0x1
#define AD2PRECON_ADPRE5_value_mask              0x20
#define AD2PRECON_ADPRE5_clear_mask              0xDF

#define AD2PRECON_ADPRE6                         0x6
#define AD2PRECON_ADPRE6_address                 0x796
#define AD2PRECON_ADPRE6_position                0x6
#define AD2PRECON_ADPRE6_size                    0x1
#define AD2PRECON_ADPRE6_value_mask              0x40
#define AD2PRECON_ADPRE6_clear_mask              0xBF


/*---------------------------------------------------------------------------------------------------------------------------------------#
| AD2ACQCON                                                                                                                        0x797 |
#----------------------------------------------------------------------------------------------------------------------------------------#
| - | AD2ACQCON_ADACQ6 | AD2ACQCON_ADACQ5 | AD2ACQCON_ADACQ4 | AD2ACQCON_ADACQ3 | AD2ACQCON_ADACQ2 | AD2ACQCON_ADACQ1 | AD2ACQCON_ADACQ0 |
#----------------------------------------------------------------------------------------------------------------------------------------#
| 7 | 6                | 5                | 4                | 3                | 2                | 1                | 0                |
#---------------------------------------------------------------------------------------------------------------------------------------*/

#define AD2ACQCON                                0x0
#define AD2ACQCON_address                        0x797
#define AD2ACQCON_position                       0x0
#define AD2ACQCON_size                           0x8
#define AD2ACQCON_value_mask                     0xFF
#define AD2ACQCON_clear_mask                     0x0

#define AD2ACQCON_ADACQ0                         0x0
#define AD2ACQCON_ADACQ0_address                 0x797
#define AD2ACQCON_ADACQ0_position                0x0
#define AD2ACQCON_ADACQ0_size                    0x1
#define AD2ACQCON_ADACQ0_value_mask              0x1
#define AD2ACQCON_ADACQ0_clear_mask              0xFE

#define AD2ACQCON_ADACQ                          0x0
#define AD2ACQCON_ADACQ_address                  0x797
#define AD2ACQCON_ADACQ_position                 0x0
#define AD2ACQCON_ADACQ_size                     0x7
#define AD2ACQCON_ADACQ_value_mask               0x7F
#define AD2ACQCON_ADACQ_clear_mask               0x80

#define AD2ACQCON_ADACQ1                         0x1
#define AD2ACQCON_ADACQ1_address                 0x797
#define AD2ACQCON_ADACQ1_position                0x1
#define AD2ACQCON_ADACQ1_size                    0x1
#define AD2ACQCON_ADACQ1_value_mask              0x2
#define AD2ACQCON_ADACQ1_clear_mask              0xFD

#define AD2ACQCON_ADACQ2                         0x2
#define AD2ACQCON_ADACQ2_address                 0x797
#define AD2ACQCON_ADACQ2_position                0x2
#define AD2ACQCON_ADACQ2_size                    0x1
#define AD2ACQCON_ADACQ2_value_mask              0x4
#define AD2ACQCON_ADACQ2_clear_mask              0xFB

#define AD2ACQCON_ADACQ3                         0x3
#define AD2ACQCON_ADACQ3_address                 0x797
#define AD2ACQCON_ADACQ3_position                0x3
#define AD2ACQCON_ADACQ3_size                    0x1
#define AD2ACQCON_ADACQ3_value_mask              0x8
#define AD2ACQCON_ADACQ3_clear_mask              0xF7

#define AD2ACQCON_ADACQ4                         0x4
#define AD2ACQCON_ADACQ4_address                 0x797
#define AD2ACQCON_ADACQ4_position                0x4
#define AD2ACQCON_ADACQ4_size                    0x1
#define AD2ACQCON_ADACQ4_value_mask              0x10
#define AD2ACQCON_ADACQ4_clear_mask              0xEF

#define AD2ACQCON_ADACQ5                         0x5
#define AD2ACQCON_ADACQ5_address                 0x797
#define AD2ACQCON_ADACQ5_position                0x5
#define AD2ACQCON_ADACQ5_size                    0x1
#define AD2ACQCON_ADACQ5_value_mask              0x20
#define AD2ACQCON_ADACQ5_clear_mask              0xDF

#define AD2ACQCON_ADACQ6                         0x6
#define AD2ACQCON_ADACQ6_address                 0x797
#define AD2ACQCON_ADACQ6_position                0x6
#define AD2ACQCON_ADACQ6_size                    0x1
#define AD2ACQCON_ADACQ6_value_mask              0x40
#define AD2ACQCON_ADACQ6_clear_mask              0xBF


/*-----------------------------------------------------------#
| AD2GRD                                               0x798 |
#------------------------------------------------------------#
| GRD2BOE | AD2GRD_GRDAOE | GRD2POL | - | - | - | - | TX2POL |
#------------------------------------------------------------#
| 7       | 6             | 5       | 4 | 3 | 2 | 1 | 0      |
#-----------------------------------------------------------*/

#define AD2GRD                                   0x0
#define AD2GRD_address                           0x798
#define AD2GRD_position                          0x0
#define AD2GRD_size                              0x8
#define AD2GRD_value_mask                        0xFF
#define AD2GRD_clear_mask                        0x0

#define AD2GRD_TXPOL                             0x0
#define AD2GRD_TXPOL_address                     0x798
#define AD2GRD_TXPOL_position                    0x0
#define AD2GRD_TXPOL_size                        0x1
#define AD2GRD_TXPOL_value_mask                  0x1
#define AD2GRD_TXPOL_clear_mask                  0xFE

#define TX2POL                                   0x0
#define TX2POL_address                           0x798
#define TX2POL_position                          0x0
#define TX2POL_size                              0x1
#define TX2POL_value_mask                        0x1
#define TX2POL_clear_mask                        0xFE

#define AD2GRD_GRDPOL                            0x5
#define AD2GRD_GRDPOL_address                    0x798
#define AD2GRD_GRDPOL_position                   0x5
#define AD2GRD_GRDPOL_size                       0x1
#define AD2GRD_GRDPOL_value_mask                 0x20
#define AD2GRD_GRDPOL_clear_mask                 0xDF

#define GRD2POL                                  0x5
#define GRD2POL_address                          0x798
#define GRD2POL_position                         0x5
#define GRD2POL_size                             0x1
#define GRD2POL_value_mask                       0x20
#define GRD2POL_clear_mask                       0xDF

#define AD2GRD_GRDAOE                            0x6
#define AD2GRD_GRDAOE_address                    0x798
#define AD2GRD_GRDAOE_position                   0x6
#define AD2GRD_GRDAOE_size                       0x1
#define AD2GRD_GRDAOE_value_mask                 0x40
#define AD2GRD_GRDAOE_clear_mask                 0xBF

#define GRD2AOE                                  0x6
#define GRD2AOE_address                          0x798
#define GRD2AOE_position                         0x6
#define GRD2AOE_size                             0x1
#define GRD2AOE_value_mask                       0x40
#define GRD2AOE_clear_mask                       0xBF

#define AD2GRD_GRDBOE                            0x7
#define AD2GRD_GRDBOE_address                    0x798
#define AD2GRD_GRDBOE_position                   0x7
#define AD2GRD_GRDBOE_size                       0x1
#define AD2GRD_GRDBOE_value_mask                 0x80
#define AD2GRD_GRDBOE_clear_mask                 0x7F

#define GRD2BOE                                  0x7
#define GRD2BOE_address                          0x798
#define GRD2BOE_position                         0x7
#define GRD2BOE_size                             0x1
#define GRD2BOE_value_mask                       0x80
#define GRD2BOE_clear_mask                       0x7F


/*----------------------------------------------------------------------------------------------#
| AD2CAPCON                                                                               0x799 |
#-----------------------------------------------------------------------------------------------#
| - | - | - | - | AD2CAPCON_ADDCAP3 | AD2CAPCON_ADDCAP2 | AD2CAPCON_ADDCAP1 | AD2CAPCON_ADDCAP0 |
#-----------------------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3                 | 2                 | 1                 | 0                 |
#----------------------------------------------------------------------------------------------*/

#define AD2CAPCON                                0x0
#define AD2CAPCON_address                        0x799
#define AD2CAPCON_position                       0x0
#define AD2CAPCON_size                           0x8
#define AD2CAPCON_value_mask                     0xFF
#define AD2CAPCON_clear_mask                     0x0

#define AD2CAPCON_ADDCAP                         0x0
#define AD2CAPCON_ADDCAP_address                 0x799
#define AD2CAPCON_ADDCAP_position                0x0
#define AD2CAPCON_ADDCAP_size                    0x4
#define AD2CAPCON_ADDCAP_value_mask              0xF
#define AD2CAPCON_ADDCAP_clear_mask              0xF0

#define AD2CAPCON_ADCAP                          0x0
#define AD2CAPCON_ADCAP_address                  0x799
#define AD2CAPCON_ADCAP_position                 0x0
#define AD2CAPCON_ADCAP_size                     0x4
#define AD2CAPCON_ADCAP_value_mask               0xF
#define AD2CAPCON_ADCAP_clear_mask               0xF0

#define ADD2CAP                                  0x0
#define ADD2CAP_address                          0x799
#define ADD2CAP_position                         0x0
#define ADD2CAP_size                             0x4
#define ADD2CAP_value_mask                       0xF
#define ADD2CAP_clear_mask                       0xF0

#define AD2CAPCON_ADDCAP0                        0x0
#define AD2CAPCON_ADDCAP0_address                0x799
#define AD2CAPCON_ADDCAP0_position               0x0
#define AD2CAPCON_ADDCAP0_size                   0x1
#define AD2CAPCON_ADDCAP0_value_mask             0x1
#define AD2CAPCON_ADDCAP0_clear_mask             0xFE

#define AD2CAPCON_ADDCAP1                        0x1
#define AD2CAPCON_ADDCAP1_address                0x799
#define AD2CAPCON_ADDCAP1_position               0x1
#define AD2CAPCON_ADDCAP1_size                   0x1
#define AD2CAPCON_ADDCAP1_value_mask             0x2
#define AD2CAPCON_ADDCAP1_clear_mask             0xFD

#define AD2CAPCON_ADDCAP2                        0x2
#define AD2CAPCON_ADDCAP2_address                0x799
#define AD2CAPCON_ADDCAP2_position               0x2
#define AD2CAPCON_ADDCAP2_size                   0x1
#define AD2CAPCON_ADDCAP2_value_mask             0x4
#define AD2CAPCON_ADDCAP2_clear_mask             0xFB

#define AD2CAPCON_ADDCAP3                        0x3
#define AD2CAPCON_ADDCAP3_address                0x799
#define AD2CAPCON_ADDCAP3_position               0x3
#define AD2CAPCON_ADDCAP3_size                   0x1
#define AD2CAPCON_ADDCAP3_value_mask             0x8
#define AD2CAPCON_ADDCAP3_clear_mask             0xF7


/*------------------------------#
| AAD2RES0L               0x79A |
#-------------------------------#
| AAD2RES0L_ADRESL              |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define AAD2RES0L                                0x0
#define AAD2RES0L_address                        0x79A
#define AAD2RES0L_position                       0x0
#define AAD2RES0L_size                           0x8
#define AAD2RES0L_value_mask                     0xFF
#define AAD2RES0L_clear_mask                     0x0

#define AAD2RES0L_ADRESL                         0x0
#define AAD2RES0L_ADRESL_address                 0x79A
#define AAD2RES0L_ADRESL_position                0x0
#define AAD2RES0L_ADRESL_size                    0x8
#define AAD2RES0L_ADRESL_value_mask              0xFF
#define AAD2RES0L_ADRESL_clear_mask              0x0


/*------------------------------#
| AAD2RES0H               0x79B |
#-------------------------------#
| AAD2RES0H_ADRESH              |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define AAD2RES0H                                0x0
#define AAD2RES0H_address                        0x79B
#define AAD2RES0H_position                       0x0
#define AAD2RES0H_size                           0x8
#define AAD2RES0H_value_mask                     0xFF
#define AAD2RES0H_clear_mask                     0x0

#define AAD2RES0H_ADRESH                         0x0
#define AAD2RES0H_ADRESH_address                 0x79B
#define AAD2RES0H_ADRESH_position                0x0
#define AAD2RES0H_ADRESH_size                    0x8
#define AAD2RES0H_ADRESH_value_mask              0xFF
#define AAD2RES0H_ADRESH_clear_mask              0x0


/*------------------------------#
| AAD2RES1L               0x79C |
#-------------------------------#
| AAD2RES1L_ADRESL              |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define AAD2RES1L                                0x0
#define AAD2RES1L_address                        0x79C
#define AAD2RES1L_position                       0x0
#define AAD2RES1L_size                           0x8
#define AAD2RES1L_value_mask                     0xFF
#define AAD2RES1L_clear_mask                     0x0

#define AAD2RES1L_ADRESL                         0x0
#define AAD2RES1L_ADRESL_address                 0x79C
#define AAD2RES1L_ADRESL_position                0x0
#define AAD2RES1L_ADRESL_size                    0x8
#define AAD2RES1L_ADRESL_value_mask              0xFF
#define AAD2RES1L_ADRESL_clear_mask              0x0


/*------------------------------#
| AAD2RES1H               0x79D |
#-------------------------------#
| AAD2RES1H_ADRESH              |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define AAD2RES1H                                0x0
#define AAD2RES1H_address                        0x79D
#define AAD2RES1H_position                       0x0
#define AAD2RES1H_size                           0x8
#define AAD2RES1H_value_mask                     0xFF
#define AAD2RES1H_clear_mask                     0x0

#define AAD2RES1H_ADRESH                         0x0
#define AAD2RES1H_ADRESH_address                 0x79D
#define AAD2RES1H_ADRESH_position                0x0
#define AAD2RES1H_ADRESH_size                    0x8
#define AAD2RES1H_ADRESH_value_mask              0xFF
#define AAD2RES1H_ADRESH_clear_mask              0x0


/*------------------------------------------------------#
| AD2CH0                                          0x79E |
#-------------------------------------------------------#
| CH27 | CH26 | CH25 | CH24 | CH23 | CH22 | CH21 | CH20 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define AD2CH0                                   0x0
#define AD2CH0_address                           0x79E
#define AD2CH0_position                          0x0
#define AD2CH0_size                              0x8
#define AD2CH0_value_mask                        0xFF
#define AD2CH0_clear_mask                        0x0

#define CH20                                     0x0
#define CH20_address                             0x79E
#define CH20_position                            0x0
#define CH20_size                                0x1
#define CH20_value_mask                          0x1
#define CH20_clear_mask                          0xFE

#define CH21                                     0x1
#define CH21_address                             0x79E
#define CH21_position                            0x1
#define CH21_size                                0x1
#define CH21_value_mask                          0x2
#define CH21_clear_mask                          0xFD

#define CH22                                     0x2
#define CH22_address                             0x79E
#define CH22_position                            0x2
#define CH22_size                                0x1
#define CH22_value_mask                          0x4
#define CH22_clear_mask                          0xFB

#define CH23                                     0x3
#define CH23_address                             0x79E
#define CH23_position                            0x3
#define CH23_size                                0x1
#define CH23_value_mask                          0x8
#define CH23_clear_mask                          0xF7

#define CH24                                     0x4
#define CH24_address                             0x79E
#define CH24_position                            0x4
#define CH24_size                                0x1
#define CH24_value_mask                          0x10
#define CH24_clear_mask                          0xEF

#define CH25                                     0x5
#define CH25_address                             0x79E
#define CH25_position                            0x5
#define CH25_size                                0x1
#define CH25_value_mask                          0x20
#define CH25_clear_mask                          0xDF

#define CH26                                     0x6
#define CH26_address                             0x79E
#define CH26_position                            0x6
#define CH26_size                                0x1
#define CH26_value_mask                          0x40
#define CH26_clear_mask                          0xBF

#define CH27                                     0x7
#define CH27_address                             0x79E
#define CH27_position                            0x7
#define CH27_size                                0x1
#define CH27_value_mask                          0x80
#define CH27_clear_mask                          0x7F


/*------------------------------------------------------#
| AD2CH1                                          0x79F |
#-------------------------------------------------------#
| CH45 | CH44 | CH43 | CH42 | CH41 | CH40 | CH29 | CH28 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define AD2CH1                                   0x0
#define AD2CH1_address                           0x79F
#define AD2CH1_position                          0x0
#define AD2CH1_size                              0x8
#define AD2CH1_value_mask                        0xFF
#define AD2CH1_clear_mask                        0x0

#define CH28                                     0x0
#define CH28_address                             0x79F
#define CH28_position                            0x0
#define CH28_size                                0x1
#define CH28_value_mask                          0x1
#define CH28_clear_mask                          0xFE

#define CH29                                     0x1
#define CH29_address                             0x79F
#define CH29_position                            0x1
#define CH29_size                                0x1
#define CH29_value_mask                          0x2
#define CH29_clear_mask                          0xFD

#define CH40                                     0x2
#define CH40_address                             0x79F
#define CH40_position                            0x2
#define CH40_size                                0x1
#define CH40_value_mask                          0x4
#define CH40_clear_mask                          0xFB

#define CH41                                     0x3
#define CH41_address                             0x79F
#define CH41_position                            0x3
#define CH41_size                                0x1
#define CH41_value_mask                          0x8
#define CH41_clear_mask                          0xF7

#define CH42                                     0x4
#define CH42_address                             0x79F
#define CH42_position                            0x4
#define CH42_size                                0x1
#define CH42_value_mask                          0x10
#define CH42_clear_mask                          0xEF

#define CH43                                     0x5
#define CH43_address                             0x79F
#define CH43_position                            0x5
#define CH43_size                                0x1
#define CH43_value_mask                          0x20
#define CH43_clear_mask                          0xDF

#define CH44                                     0x6
#define CH44_address                             0x79F
#define CH44_position                            0x6
#define CH44_size                                0x1
#define CH44_value_mask                          0x40
#define CH44_clear_mask                          0xBF

#define CH45                                     0x7
#define CH45_address                             0x79F
#define CH45_position                            0x7
#define CH45_size                                0x1
#define CH45_value_mask                          0x80
#define CH45_clear_mask                          0x7F


/*----------------------------------------------------------------------------------------#
| ICDIO                                                                             0xF8C |
#-----------------------------------------------------------------------------------------#
| PORT_ICDDAT | PORT_ICDCLK | LAT_ICDDAT | LAT_ICDCLK | TRIS_ICDDAT | TRIS_ICDCLK | - | - |
#-----------------------------------------------------------------------------------------#
| 7           | 6           | 5          | 4          | 3           | 2           | 1 | 0 |
#----------------------------------------------------------------------------------------*/

#define ICDIO                                    0x0
#define ICDIO_address                            0xF8C
#define ICDIO_position                           0x0
#define ICDIO_size                               0x8
#define ICDIO_value_mask                         0xFF
#define ICDIO_clear_mask                         0x0

#define TRIS_ICDCLK                              0x2
#define TRIS_ICDCLK_address                      0xF8C
#define TRIS_ICDCLK_position                     0x2
#define TRIS_ICDCLK_size                         0x1
#define TRIS_ICDCLK_value_mask                   0x4
#define TRIS_ICDCLK_clear_mask                   0xFB

#define TRIS_ICDDAT                              0x3
#define TRIS_ICDDAT_address                      0xF8C
#define TRIS_ICDDAT_position                     0x3
#define TRIS_ICDDAT_size                         0x1
#define TRIS_ICDDAT_value_mask                   0x8
#define TRIS_ICDDAT_clear_mask                   0xF7

#define LAT_ICDCLK                               0x4
#define LAT_ICDCLK_address                       0xF8C
#define LAT_ICDCLK_position                      0x4
#define LAT_ICDCLK_size                          0x1
#define LAT_ICDCLK_value_mask                    0x10
#define LAT_ICDCLK_clear_mask                    0xEF

#define LAT_ICDDAT                               0x5
#define LAT_ICDDAT_address                       0xF8C
#define LAT_ICDDAT_position                      0x5
#define LAT_ICDDAT_size                          0x1
#define LAT_ICDDAT_value_mask                    0x20
#define LAT_ICDDAT_clear_mask                    0xDF

#define PORT_ICDCLK                              0x6
#define PORT_ICDCLK_address                      0xF8C
#define PORT_ICDCLK_position                     0x6
#define PORT_ICDCLK_size                         0x1
#define PORT_ICDCLK_value_mask                   0x40
#define PORT_ICDCLK_clear_mask                   0xBF

#define PORT_ICDDAT                              0x7
#define PORT_ICDDAT_address                      0xF8C
#define PORT_ICDDAT_position                     0x7
#define PORT_ICDDAT_size                         0x1
#define PORT_ICDDAT_value_mask                   0x80
#define PORT_ICDDAT_clear_mask                   0x7F


/*-----------------------------------------------------#
| ICDCON0                                        0xF8D |
#------------------------------------------------------#
| INBUG | FREEZ | SSTEP | - | DBGINEX | - | - | RSTVEC |
#------------------------------------------------------#
| 7     | 6     | 5     | 4 | 3       | 2 | 1 | 0      |
#-----------------------------------------------------*/

#define ICDCON0                                  0x0
#define ICDCON0_address                          0xF8D
#define ICDCON0_position                         0x0
#define ICDCON0_size                             0x8
#define ICDCON0_value_mask                       0xFF
#define ICDCON0_clear_mask                       0x0

#define RSTVEC                                   0x0
#define RSTVEC_address                           0xF8D
#define RSTVEC_position                          0x0
#define RSTVEC_size                              0x1
#define RSTVEC_value_mask                        0x1
#define RSTVEC_clear_mask                        0xFE

#define DBGINEX                                  0x3
#define DBGINEX_address                          0xF8D
#define DBGINEX_position                         0x3
#define DBGINEX_size                             0x1
#define DBGINEX_value_mask                       0x8
#define DBGINEX_clear_mask                       0xF7

#define SSTEP                                    0x5
#define SSTEP_address                            0xF8D
#define SSTEP_position                           0x5
#define SSTEP_size                               0x1
#define SSTEP_value_mask                         0x20
#define SSTEP_clear_mask                         0xDF

#define FREEZ                                    0x6
#define FREEZ_address                            0xF8D
#define FREEZ_position                           0x6
#define FREEZ_size                               0x1
#define FREEZ_value_mask                         0x40
#define FREEZ_clear_mask                         0xBF

#define INBUG                                    0x7
#define INBUG_address                            0xF8D
#define INBUG_position                           0x7
#define INBUG_size                               0x1
#define INBUG_value_mask                         0x80
#define INBUG_clear_mask                         0x7F


/*--------------------------------------------------#
| ICDSTAT                                     0xF91 |
#---------------------------------------------------#
| TRP1HLTF | TRP0HLTF | - | - | - | - | USRHLTF | - |
#---------------------------------------------------#
| 7        | 6        | 5 | 4 | 3 | 2 | 1       | 0 |
#--------------------------------------------------*/

#define ICDSTAT                                  0x0
#define ICDSTAT_address                          0xF91
#define ICDSTAT_position                         0x0
#define ICDSTAT_size                             0x8
#define ICDSTAT_value_mask                       0xFF
#define ICDSTAT_clear_mask                       0x0

#define USRHLTF                                  0x1
#define USRHLTF_address                          0xF91
#define USRHLTF_position                         0x1
#define USRHLTF_size                             0x1
#define USRHLTF_value_mask                       0x2
#define USRHLTF_clear_mask                       0xFD

#define TRP0HLTF                                 0x6
#define TRP0HLTF_address                         0xF91
#define TRP0HLTF_position                        0x6
#define TRP0HLTF_size                            0x1
#define TRP0HLTF_value_mask                      0x40
#define TRP0HLTF_clear_mask                      0xBF

#define TRP1HLTF                                 0x7
#define TRP1HLTF_address                         0xF91
#define TRP1HLTF_position                        0x7
#define TRP1HLTF_size                            0x1
#define TRP1HLTF_value_mask                      0x80
#define TRP1HLTF_clear_mask                      0x7F


/*----------------------------------------------------------------------#
| ICDINSTL                                                        0xF96 |
#-----------------------------------------------------------------------#
| DBGIN7 | DBGIN6 | DBGIN5 | DBGIN4 | DBGIN3 | DBGIN2 | DBGIN1 | DBGIN0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define ICDINSTL                                 0x0
#define ICDINSTL_address                         0xF96
#define ICDINSTL_position                        0x0
#define ICDINSTL_size                            0x8
#define ICDINSTL_value_mask                      0xFF
#define ICDINSTL_clear_mask                      0x0

#define DBGIN0                                   0x0
#define DBGIN0_address                           0xF96
#define DBGIN0_position                          0x0
#define DBGIN0_size                              0x1
#define DBGIN0_value_mask                        0x1
#define DBGIN0_clear_mask                        0xFE

#define DBGIN1                                   0x1
#define DBGIN1_address                           0xF96
#define DBGIN1_position                          0x1
#define DBGIN1_size                              0x1
#define DBGIN1_value_mask                        0x2
#define DBGIN1_clear_mask                        0xFD

#define DBGIN2                                   0x2
#define DBGIN2_address                           0xF96
#define DBGIN2_position                          0x2
#define DBGIN2_size                              0x1
#define DBGIN2_value_mask                        0x4
#define DBGIN2_clear_mask                        0xFB

#define DBGIN3                                   0x3
#define DBGIN3_address                           0xF96
#define DBGIN3_position                          0x3
#define DBGIN3_size                              0x1
#define DBGIN3_value_mask                        0x8
#define DBGIN3_clear_mask                        0xF7

#define DBGIN4                                   0x4
#define DBGIN4_address                           0xF96
#define DBGIN4_position                          0x4
#define DBGIN4_size                              0x1
#define DBGIN4_value_mask                        0x10
#define DBGIN4_clear_mask                        0xEF

#define DBGIN5                                   0x5
#define DBGIN5_address                           0xF96
#define DBGIN5_position                          0x5
#define DBGIN5_size                              0x1
#define DBGIN5_value_mask                        0x20
#define DBGIN5_clear_mask                        0xDF

#define DBGIN6                                   0x6
#define DBGIN6_address                           0xF96
#define DBGIN6_position                          0x6
#define DBGIN6_size                              0x1
#define DBGIN6_value_mask                        0x40
#define DBGIN6_clear_mask                        0xBF

#define DBGIN7                                   0x7
#define DBGIN7_address                           0xF96
#define DBGIN7_position                          0x7
#define DBGIN7_size                              0x1
#define DBGIN7_value_mask                        0x80
#define DBGIN7_clear_mask                        0x7F


/*----------------------------------------------------------------#
| ICDINSTH                                                  0xF97 |
#-----------------------------------------------------------------#
| - | - | DBGIN13 | DBGIN12 | DBGIN11 | DBGIN10 | DBGIN9 | DBGIN8 |
#-----------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1      | 0      |
#----------------------------------------------------------------*/

#define ICDINSTH                                 0x0
#define ICDINSTH_address                         0xF97
#define ICDINSTH_position                        0x0
#define ICDINSTH_size                            0x8
#define ICDINSTH_value_mask                      0xFF
#define ICDINSTH_clear_mask                      0x0

#define DBGIN8                                   0x0
#define DBGIN8_address                           0xF97
#define DBGIN8_position                          0x0
#define DBGIN8_size                              0x1
#define DBGIN8_value_mask                        0x1
#define DBGIN8_clear_mask                        0xFE

#define DBGIN9                                   0x1
#define DBGIN9_address                           0xF97
#define DBGIN9_position                          0x1
#define DBGIN9_size                              0x1
#define DBGIN9_value_mask                        0x2
#define DBGIN9_clear_mask                        0xFD

#define DBGIN10                                  0x2
#define DBGIN10_address                          0xF97
#define DBGIN10_position                         0x2
#define DBGIN10_size                             0x1
#define DBGIN10_value_mask                       0x4
#define DBGIN10_clear_mask                       0xFB

#define DBGIN11                                  0x3
#define DBGIN11_address                          0xF97
#define DBGIN11_position                         0x3
#define DBGIN11_size                             0x1
#define DBGIN11_value_mask                       0x8
#define DBGIN11_clear_mask                       0xF7

#define DBGIN12                                  0x4
#define DBGIN12_address                          0xF97
#define DBGIN12_position                         0x4
#define DBGIN12_size                             0x1
#define DBGIN12_value_mask                       0x10
#define DBGIN12_clear_mask                       0xEF

#define DBGIN13                                  0x5
#define DBGIN13_address                          0xF97
#define DBGIN13_position                         0x5
#define DBGIN13_size                             0x1
#define DBGIN13_value_mask                       0x20
#define DBGIN13_clear_mask                       0xDF


/*-------------------------------------#
| ICDBK0CON                      0xF9C |
#--------------------------------------#
| BKEN | - | - | - | - | - | - | BKHLT |
#--------------------------------------#
| 7    | 6 | 5 | 4 | 3 | 2 | 1 | 0     |
#-------------------------------------*/

#define ICDBK0CON                                0x0
#define ICDBK0CON_address                        0xF9C
#define ICDBK0CON_position                       0x0
#define ICDBK0CON_size                           0x8
#define ICDBK0CON_value_mask                     0xFF
#define ICDBK0CON_clear_mask                     0x0

#define BKHLT                                    0x0
#define BKHLT_address                            0xF9C
#define BKHLT_position                           0x0
#define BKHLT_size                               0x1
#define BKHLT_value_mask                         0x1
#define BKHLT_clear_mask                         0xFE

#define BKEN                                     0x7
#define BKEN_address                             0xF9C
#define BKEN_position                            0x7
#define BKEN_size                                0x1
#define BKEN_value_mask                          0x80
#define BKEN_clear_mask                          0x7F


/*------------------------------------------------------#
| ICDBK0L                                         0xF9D |
#-------------------------------------------------------#
| BKA7 | BKA6 | BKA5 | BKA4 | BKA3 | BKA2 | BKA1 | BKA0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define ICDBK0L                                  0x0
#define ICDBK0L_address                          0xF9D
#define ICDBK0L_position                         0x0
#define ICDBK0L_size                             0x8
#define ICDBK0L_value_mask                       0xFF
#define ICDBK0L_clear_mask                       0x0

#define BKA0                                     0x0
#define BKA0_address                             0xF9D
#define BKA0_position                            0x0
#define BKA0_size                                0x1
#define BKA0_value_mask                          0x1
#define BKA0_clear_mask                          0xFE

#define BKA1                                     0x1
#define BKA1_address                             0xF9D
#define BKA1_position                            0x1
#define BKA1_size                                0x1
#define BKA1_value_mask                          0x2
#define BKA1_clear_mask                          0xFD

#define BKA2                                     0x2
#define BKA2_address                             0xF9D
#define BKA2_position                            0x2
#define BKA2_size                                0x1
#define BKA2_value_mask                          0x4
#define BKA2_clear_mask                          0xFB

#define BKA3                                     0x3
#define BKA3_address                             0xF9D
#define BKA3_position                            0x3
#define BKA3_size                                0x1
#define BKA3_value_mask                          0x8
#define BKA3_clear_mask                          0xF7

#define BKA4                                     0x4
#define BKA4_address                             0xF9D
#define BKA4_position                            0x4
#define BKA4_size                                0x1
#define BKA4_value_mask                          0x10
#define BKA4_clear_mask                          0xEF

#define BKA5                                     0x5
#define BKA5_address                             0xF9D
#define BKA5_position                            0x5
#define BKA5_size                                0x1
#define BKA5_value_mask                          0x20
#define BKA5_clear_mask                          0xDF

#define BKA6                                     0x6
#define BKA6_address                             0xF9D
#define BKA6_position                            0x6
#define BKA6_size                                0x1
#define BKA6_value_mask                          0x40
#define BKA6_clear_mask                          0xBF

#define BKA7                                     0x7
#define BKA7_address                             0xF9D
#define BKA7_position                            0x7
#define BKA7_size                                0x1
#define BKA7_value_mask                          0x80
#define BKA7_clear_mask                          0x7F


/*--------------------------------------------------------#
| ICDBK0H                                           0xF9E |
#---------------------------------------------------------#
| - | BKA14 | BKA13 | BKA12 | BKA11 | BKA10 | BKA9 | BKA8 |
#---------------------------------------------------------#
| 7 | 6     | 5     | 4     | 3     | 2     | 1    | 0    |
#--------------------------------------------------------*/

#define ICDBK0H                                  0x0
#define ICDBK0H_address                          0xF9E
#define ICDBK0H_position                         0x0
#define ICDBK0H_size                             0x8
#define ICDBK0H_value_mask                       0xFF
#define ICDBK0H_clear_mask                       0x0

#define BKA8                                     0x0
#define BKA8_address                             0xF9E
#define BKA8_position                            0x0
#define BKA8_size                                0x1
#define BKA8_value_mask                          0x1
#define BKA8_clear_mask                          0xFE

#define BKA9                                     0x1
#define BKA9_address                             0xF9E
#define BKA9_position                            0x1
#define BKA9_size                                0x1
#define BKA9_value_mask                          0x2
#define BKA9_clear_mask                          0xFD

#define BKA10                                    0x2
#define BKA10_address                            0xF9E
#define BKA10_position                           0x2
#define BKA10_size                               0x1
#define BKA10_value_mask                         0x4
#define BKA10_clear_mask                         0xFB

#define BKA11                                    0x3
#define BKA11_address                            0xF9E
#define BKA11_position                           0x3
#define BKA11_size                               0x1
#define BKA11_value_mask                         0x8
#define BKA11_clear_mask                         0xF7

#define BKA12                                    0x4
#define BKA12_address                            0xF9E
#define BKA12_position                           0x4
#define BKA12_size                               0x1
#define BKA12_value_mask                         0x10
#define BKA12_clear_mask                         0xEF

#define BKA13                                    0x5
#define BKA13_address                            0xF9E
#define BKA13_position                           0x5
#define BKA13_size                               0x1
#define BKA13_value_mask                         0x20
#define BKA13_clear_mask                         0xDF

#define BKA14                                    0x6
#define BKA14_address                            0xF9E
#define BKA14_position                           0x6
#define BKA14_size                               0x1
#define BKA14_value_mask                         0x40
#define BKA14_clear_mask                         0xBF


/*------------------------------#
| BSRICDSHAD              0xFE3 |
#-------------------------------#
| - | - | - | BSR_ICDSHAD       |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define BSRICDSHAD                               0x0
#define BSRICDSHAD_address                       0xFE3
#define BSRICDSHAD_position                      0x0
#define BSRICDSHAD_size                          0x8
#define BSRICDSHAD_value_mask                    0xFF
#define BSRICDSHAD_clear_mask                    0x0

#define BSR_ICDSHAD                              0x0
#define BSR_ICDSHAD_address                      0xFE3
#define BSR_ICDSHAD_position                     0x0
#define BSR_ICDSHAD_size                         0x5
#define BSR_ICDSHAD_value_mask                   0x1F
#define BSR_ICDSHAD_clear_mask                   0xE0


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

#endif // _PIC16LF1567_H_
