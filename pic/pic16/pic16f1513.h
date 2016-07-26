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

#ifndef _PIC16F1513_H_
#define _PIC16F1513_H_


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


/*--------------------------------#
| PORTE                      0x10 |
#---------------------------------#
| - | - | - | - | RE3 | - | - | - |
#---------------------------------#
| 7 | 6 | 5 | 4 | 3   | 2 | 1 | 0 |
#--------------------------------*/

#define PORTE                                    0x0
#define PORTE_address                            0x010
#define PORTE_position                           0x0
#define PORTE_size                               0x8
#define PORTE_value_mask                         0xFF
#define PORTE_clear_mask                         0x0

#define RE3                                      0x3
#define RE3_address                              0x010
#define RE3_position                             0x3
#define RE3_size                                 0x1
#define RE3_value_mask                           0x8
#define RE3_clear_mask                           0xF7


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


/*-------------------------------------------#
| PIR2                                  0x12 |
#--------------------------------------------#
| OSFIF | - | - | - | BCLIF | - | - | CCP2IF |
#--------------------------------------------#
| 7     | 6 | 5 | 4 | 3     | 2 | 1 | 0      |
#-------------------------------------------*/

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

#define BCLIF                                    0x3
#define BCLIF_address                            0x012
#define BCLIF_position                           0x3
#define BCLIF_size                               0x1
#define BCLIF_value_mask                         0x8
#define BCLIF_clear_mask                         0xF7

#define OSFIF                                    0x7
#define OSFIF_address                            0x012
#define OSFIF_position                           0x7
#define OSFIF_size                               0x1
#define OSFIF_value_mask                         0x80
#define OSFIF_clear_mask                         0x7F


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


/*----------------------------------------------------------------#
| PIE1                                                       0x91 |
#-----------------------------------------------------------------#
| TMR1GIE | ADIE | RCIE | TXIE | SSPIE | CCP1IE | TMR2IE | TMR1IE |
#-----------------------------------------------------------------#
| 7       | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#----------------------------------------------------------------*/

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


/*-------------------------------------------#
| PIE2                                  0x92 |
#--------------------------------------------#
| OSFIE | - | - | - | BCLIE | - | - | CCP2IE |
#--------------------------------------------#
| 7     | 6 | 5 | 4 | 3     | 2 | 1 | 0      |
#-------------------------------------------*/

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

#define BCLIE                                    0x3
#define BCLIE_address                            0x092
#define BCLIE_position                           0x3
#define BCLIE_size                               0x1
#define BCLIE_value_mask                         0x8
#define BCLIE_clear_mask                         0xF7

#define OSFIE                                    0x7
#define OSFIE_address                            0x092
#define OSFIE_position                           0x7
#define OSFIE_size                               0x1
#define OSFIE_value_mask                         0x80
#define OSFIE_clear_mask                         0x7F


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
| ADRES0L                  0x9B |
#-------------------------------#
| ADRES0L_ADRES0L               |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ADRES0L                                  0x0
#define ADRES0L_address                          0x09B
#define ADRES0L_position                         0x0
#define ADRES0L_size                             0x8
#define ADRES0L_value_mask                       0xFF
#define ADRES0L_clear_mask                       0x0

#define ADRES0L_ADRES0L                          0x0
#define ADRES0L_ADRES0L_address                  0x09B
#define ADRES0L_ADRES0L_position                 0x0
#define ADRES0L_ADRES0L_size                     0x8
#define ADRES0L_ADRES0L_value_mask               0xFF
#define ADRES0L_ADRES0L_clear_mask               0x0


/*------------------------------#
| ADRES0H                  0x9C |
#-------------------------------#
| ADRES0H_ADRES0H               |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ADRES0H                                  0x0
#define ADRES0H_address                          0x09C
#define ADRES0H_position                         0x0
#define ADRES0H_size                             0x8
#define ADRES0H_value_mask                       0xFF
#define ADRES0H_clear_mask                       0x0

#define ADRES0H_ADRES0H                          0x0
#define ADRES0H_ADRES0H_address                  0x09C
#define ADRES0H_ADRES0H_position                 0x0
#define ADRES0H_ADRES0H_size                     0x8
#define ADRES0H_ADRES0H_value_mask               0xFF
#define ADRES0H_ADRES0H_clear_mask               0x0


/*--------------------------------------------------------------------------------------------------------#
| ADCON0                                                                                             0x9D |
#---------------------------------------------------------------------------------------------------------#
| - | ADCON0_CHS4 | ADCON0_CHS3 | ADCON0_CHS2 | ADCON0_CHS1 | ADCON0_CHS0 | ADCON0_GO_nDONE | ADCON0_ADON |
#---------------------------------------------------------------------------------------------------------#
| 7 | 6           | 5           | 4           | 3           | 2           | 1               | 0           |
#--------------------------------------------------------------------------------------------------------*/

#define ADCON0                                   0x0
#define ADCON0_address                           0x09D
#define ADCON0_position                          0x0
#define ADCON0_size                              0x8
#define ADCON0_value_mask                        0xFF
#define ADCON0_clear_mask                        0x0

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

#define ADCON0_CHS                               0x2
#define ADCON0_CHS_address                       0x09D
#define ADCON0_CHS_position                      0x2
#define ADCON0_CHS_size                          0x5
#define ADCON0_CHS_value_mask                    0x7C
#define ADCON0_CHS_clear_mask                    0x83

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


/*---------------------------------------------------------------------------------------------------#
| ADCON1                                                                                        0x9E |
#----------------------------------------------------------------------------------------------------#
| ADCON1_ADFM | ADCON1_ADCS2 | ADCON1_ADCS1 | ADCON1_ADCS0 | - | - | ADCON1_ADPREF1 | ADCON1_ADPREF0 |
#----------------------------------------------------------------------------------------------------#
| 7           | 6            | 5            | 4            | 3 | 2 | 1              | 0              |
#---------------------------------------------------------------------------------------------------*/

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

#define ADCON1_ADCS0                             0x4
#define ADCON1_ADCS0_address                     0x09E
#define ADCON1_ADCS0_position                    0x4
#define ADCON1_ADCS0_size                        0x1
#define ADCON1_ADCS0_value_mask                  0x10
#define ADCON1_ADCS0_clear_mask                  0xEF

#define ADCON1_ADCS                              0x4
#define ADCON1_ADCS_address                      0x09E
#define ADCON1_ADCS_position                     0x4
#define ADCON1_ADCS_size                         0x3
#define ADCON1_ADCS_value_mask                   0x70
#define ADCON1_ADCS_clear_mask                   0x8F

#define ADCON1_ADCS1                             0x5
#define ADCON1_ADCS1_address                     0x09E
#define ADCON1_ADCS1_position                    0x5
#define ADCON1_ADCS1_size                        0x1
#define ADCON1_ADCS1_value_mask                  0x20
#define ADCON1_ADCS1_clear_mask                  0xDF

#define ADCON1_ADCS2                             0x6
#define ADCON1_ADCS2_address                     0x09E
#define ADCON1_ADCS2_position                    0x6
#define ADCON1_ADCS2_size                        0x1
#define ADCON1_ADCS2_value_mask                  0x40
#define ADCON1_ADCS2_clear_mask                  0xBF

#define ADCON1_ADFM                              0x7
#define ADCON1_ADFM_address                      0x09E
#define ADCON1_ADFM_position                     0x7
#define ADCON1_ADFM_size                         0x1
#define ADCON1_ADFM_value_mask                   0x80
#define ADCON1_ADFM_clear_mask                   0x7F


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


/*----------------------------------------#
| APFCON                            0x11D |
#-----------------------------------------#
| - | - | - | - | - | - | SSSEL | CCP2SEL |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1     | 0       |
#----------------------------------------*/

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

#define SSSEL                                    0x1
#define SSSEL_address                            0x11D
#define SSSEL_position                           0x1
#define SSSEL_size                               0x1
#define SSSEL_value_mask                         0x2
#define SSSEL_clear_mask                         0xFD


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


/*------------------------------------------------------#
| ANSELC                                          0x18E |
#-------------------------------------------------------#
| ANSC7 | ANSC6 | ANSC5 | ANSC4 | ANSC3 | ANSC2 | - | - |
#-------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1 | 0 |
#------------------------------------------------------*/

#define ANSELC                                   0x0
#define ANSELC_address                           0x18E
#define ANSELC_position                          0x0
#define ANSELC_size                              0x8
#define ANSELC_value_mask                        0xFF
#define ANSELC_clear_mask                        0x0

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
| SP1BRGL                 0x19B |
#-------------------------------#
| SPBRGL                        |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SP1BRGL                                  0x0
#define SP1BRGL_address                          0x19B
#define SP1BRGL_position                         0x0
#define SP1BRGL_size                             0x8
#define SP1BRGL_value_mask                       0xFF
#define SP1BRGL_clear_mask                       0x0

#define SPBRGL                                   0x0
#define SPBRGL_address                           0x19B
#define SPBRGL_position                          0x0
#define SPBRGL_size                              0x8
#define SPBRGL_value_mask                        0xFF
#define SPBRGL_clear_mask                        0x0


/*------------------------------#
| SP1BRGH                 0x19C |
#-------------------------------#
| SPBRGH                        |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SP1BRGH                                  0x0
#define SP1BRGH_address                          0x19C
#define SP1BRGH_position                         0x0
#define SP1BRGH_size                             0x8
#define SP1BRGH_value_mask                       0xFF
#define SP1BRGH_clear_mask                       0x0

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
| - | - | - | - | WPUE3 | - | - | - |
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


/*------------------------------#
| SSPBUF                  0x211 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSPBUF                                   0x0
#define SSPBUF_address                           0x211
#define SSPBUF_position                          0x0
#define SSPBUF_size                              0x8
#define SSPBUF_value_mask                        0xFF
#define SSPBUF_clear_mask                        0x0


/*------------------------------#
| SSPADD                  0x212 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSPADD                                   0x0
#define SSPADD_address                           0x212
#define SSPADD_position                          0x0
#define SSPADD_size                              0x8
#define SSPADD_value_mask                        0xFF
#define SSPADD_clear_mask                        0x0


/*------------------------------#
| SSPMSK                  0x213 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSPMSK                                   0x0
#define SSPMSK_address                           0x213
#define SSPMSK_position                          0x0
#define SSPMSK_size                              0x8
#define SSPMSK_value_mask                        0xFF
#define SSPMSK_clear_mask                        0x0


/*------------------------------------------#
| SSPSTAT                             0x214 |
#-------------------------------------------#
| SMP | CKE | D_nA | P | S | R_nW | UA | BF |
#-------------------------------------------#
| 7   | 6   | 5    | 4 | 3 | 2    | 1  | 0  |
#------------------------------------------*/

#define SSPSTAT                                  0x0
#define SSPSTAT_address                          0x214
#define SSPSTAT_position                         0x0
#define SSPSTAT_size                             0x8
#define SSPSTAT_value_mask                       0xFF
#define SSPSTAT_clear_mask                       0x0

#define BF                                       0x0
#define BF_address                               0x214
#define BF_position                              0x0
#define BF_size                                  0x1
#define BF_value_mask                            0x1
#define BF_clear_mask                            0xFE

#define UA                                       0x1
#define UA_address                               0x214
#define UA_position                              0x1
#define UA_size                                  0x1
#define UA_value_mask                            0x2
#define UA_clear_mask                            0xFD

#define R_nW                                     0x2
#define R_nW_address                             0x214
#define R_nW_position                            0x2
#define R_nW_size                                0x1
#define R_nW_value_mask                          0x4
#define R_nW_clear_mask                          0xFB

#define S                                        0x3
#define S_address                                0x214
#define S_position                               0x3
#define S_size                                   0x1
#define S_value_mask                             0x8
#define S_clear_mask                             0xF7

#define P                                        0x4
#define P_address                                0x214
#define P_position                               0x4
#define P_size                                   0x1
#define P_value_mask                             0x10
#define P_clear_mask                             0xEF

#define D_nA                                     0x5
#define D_nA_address                             0x214
#define D_nA_position                            0x5
#define D_nA_size                                0x1
#define D_nA_value_mask                          0x20
#define D_nA_clear_mask                          0xDF

#define CKE                                      0x6
#define CKE_address                              0x214
#define CKE_position                             0x6
#define CKE_size                                 0x1
#define CKE_value_mask                           0x40
#define CKE_clear_mask                           0xBF

#define SMP                                      0x7
#define SMP_address                              0x214
#define SMP_position                             0x7
#define SMP_size                                 0x1
#define SMP_value_mask                           0x80
#define SMP_clear_mask                           0x7F


/*-----------------------------------------------------------#
| SSPCON1                                              0x215 |
#------------------------------------------------------------#
| WCOL | SSPOV | SSPEN | CKP | SSPM3 | SSPM2 | SSPM1 | SSPM0 |
#------------------------------------------------------------#
| 7    | 6     | 5     | 4   | 3     | 2     | 1     | 0     |
#-----------------------------------------------------------*/

#define SSPCON1                                  0x0
#define SSPCON1_address                          0x215
#define SSPCON1_position                         0x0
#define SSPCON1_size                             0x8
#define SSPCON1_value_mask                       0xFF
#define SSPCON1_clear_mask                       0x0

#define SSPM0                                    0x0
#define SSPM0_address                            0x215
#define SSPM0_position                           0x0
#define SSPM0_size                               0x1
#define SSPM0_value_mask                         0x1
#define SSPM0_clear_mask                         0xFE

#define SSPM                                     0x0
#define SSPM_address                             0x215
#define SSPM_position                            0x0
#define SSPM_size                                0x4
#define SSPM_value_mask                          0xF
#define SSPM_clear_mask                          0xF0

#define SSPM1                                    0x1
#define SSPM1_address                            0x215
#define SSPM1_position                           0x1
#define SSPM1_size                               0x1
#define SSPM1_value_mask                         0x2
#define SSPM1_clear_mask                         0xFD

#define SSPM2                                    0x2
#define SSPM2_address                            0x215
#define SSPM2_position                           0x2
#define SSPM2_size                               0x1
#define SSPM2_value_mask                         0x4
#define SSPM2_clear_mask                         0xFB

#define SSPM3                                    0x3
#define SSPM3_address                            0x215
#define SSPM3_position                           0x3
#define SSPM3_size                               0x1
#define SSPM3_value_mask                         0x8
#define SSPM3_clear_mask                         0xF7

#define CKP                                      0x4
#define CKP_address                              0x215
#define CKP_position                             0x4
#define CKP_size                                 0x1
#define CKP_value_mask                           0x10
#define CKP_clear_mask                           0xEF

#define SSPEN                                    0x5
#define SSPEN_address                            0x215
#define SSPEN_position                           0x5
#define SSPEN_size                               0x1
#define SSPEN_value_mask                         0x20
#define SSPEN_clear_mask                         0xDF

#define SSPOV                                    0x6
#define SSPOV_address                            0x215
#define SSPOV_position                           0x6
#define SSPOV_size                               0x1
#define SSPOV_value_mask                         0x40
#define SSPOV_clear_mask                         0xBF

#define WCOL                                     0x7
#define WCOL_address                             0x215
#define WCOL_position                            0x7
#define WCOL_size                                0x1
#define WCOL_value_mask                          0x80
#define WCOL_clear_mask                          0x7F


/*---------------------------------------------------------#
| SSPCON2                                            0x216 |
#----------------------------------------------------------#
| GCEN | ACKSTAT | ACKDT | ACKEN | RCEN | PEN | RSEN | SEN |
#----------------------------------------------------------#
| 7    | 6       | 5     | 4     | 3    | 2   | 1    | 0   |
#---------------------------------------------------------*/

#define SSPCON2                                  0x0
#define SSPCON2_address                          0x216
#define SSPCON2_position                         0x0
#define SSPCON2_size                             0x8
#define SSPCON2_value_mask                       0xFF
#define SSPCON2_clear_mask                       0x0

#define SEN                                      0x0
#define SEN_address                              0x216
#define SEN_position                             0x0
#define SEN_size                                 0x1
#define SEN_value_mask                           0x1
#define SEN_clear_mask                           0xFE

#define RSEN                                     0x1
#define RSEN_address                             0x216
#define RSEN_position                            0x1
#define RSEN_size                                0x1
#define RSEN_value_mask                          0x2
#define RSEN_clear_mask                          0xFD

#define PEN                                      0x2
#define PEN_address                              0x216
#define PEN_position                             0x2
#define PEN_size                                 0x1
#define PEN_value_mask                           0x4
#define PEN_clear_mask                           0xFB

#define RCEN                                     0x3
#define RCEN_address                             0x216
#define RCEN_position                            0x3
#define RCEN_size                                0x1
#define RCEN_value_mask                          0x8
#define RCEN_clear_mask                          0xF7

#define ACKEN                                    0x4
#define ACKEN_address                            0x216
#define ACKEN_position                           0x4
#define ACKEN_size                               0x1
#define ACKEN_value_mask                         0x10
#define ACKEN_clear_mask                         0xEF

#define ACKDT                                    0x5
#define ACKDT_address                            0x216
#define ACKDT_position                           0x5
#define ACKDT_size                               0x1
#define ACKDT_value_mask                         0x20
#define ACKDT_clear_mask                         0xDF

#define ACKSTAT                                  0x6
#define ACKSTAT_address                          0x216
#define ACKSTAT_position                         0x6
#define ACKSTAT_size                             0x1
#define ACKSTAT_value_mask                       0x40
#define ACKSTAT_clear_mask                       0xBF

#define GCEN                                     0x7
#define GCEN_address                             0x216
#define GCEN_position                            0x7
#define GCEN_size                                0x1
#define GCEN_value_mask                          0x80
#define GCEN_clear_mask                          0x7F


/*----------------------------------------------------------#
| SSPCON3                                             0x217 |
#-----------------------------------------------------------#
| ACKTIM | PCIE | SCIE | BOEN | SDAHT | SBCDE | AHEN | DHEN |
#-----------------------------------------------------------#
| 7      | 6    | 5    | 4    | 3     | 2     | 1    | 0    |
#----------------------------------------------------------*/

#define SSPCON3                                  0x0
#define SSPCON3_address                          0x217
#define SSPCON3_position                         0x0
#define SSPCON3_size                             0x8
#define SSPCON3_value_mask                       0xFF
#define SSPCON3_clear_mask                       0x0

#define DHEN                                     0x0
#define DHEN_address                             0x217
#define DHEN_position                            0x0
#define DHEN_size                                0x1
#define DHEN_value_mask                          0x1
#define DHEN_clear_mask                          0xFE

#define AHEN                                     0x1
#define AHEN_address                             0x217
#define AHEN_position                            0x1
#define AHEN_size                                0x1
#define AHEN_value_mask                          0x2
#define AHEN_clear_mask                          0xFD

#define SBCDE                                    0x2
#define SBCDE_address                            0x217
#define SBCDE_position                           0x2
#define SBCDE_size                               0x1
#define SBCDE_value_mask                         0x4
#define SBCDE_clear_mask                         0xFB

#define SDAHT                                    0x3
#define SDAHT_address                            0x217
#define SDAHT_position                           0x3
#define SDAHT_size                               0x1
#define SDAHT_value_mask                         0x8
#define SDAHT_clear_mask                         0xF7

#define BOEN                                     0x4
#define BOEN_address                             0x217
#define BOEN_position                            0x4
#define BOEN_size                                0x1
#define BOEN_value_mask                          0x10
#define BOEN_clear_mask                          0xEF

#define SCIE                                     0x5
#define SCIE_address                             0x217
#define SCIE_position                            0x5
#define SCIE_size                                0x1
#define SCIE_value_mask                          0x20
#define SCIE_clear_mask                          0xDF

#define PCIE                                     0x6
#define PCIE_address                             0x217
#define PCIE_position                            0x6
#define PCIE_size                                0x1
#define PCIE_value_mask                          0x40
#define PCIE_clear_mask                          0xBF

#define ACKTIM                                   0x7
#define ACKTIM_address                           0x217
#define ACKTIM_position                          0x7
#define ACKTIM_size                              0x1
#define ACKTIM_value_mask                        0x80
#define ACKTIM_clear_mask                        0x7F


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


/*---------------------------------------------------------------------------------------------------------------#
| AADCON0                                                                                                  0x711 |
#----------------------------------------------------------------------------------------------------------------#
| - | AADCON0_CHS4 | AADCON0_CHS3 | AADCON0_CHS2 | AADCON0_CHS1 | AADCON0_CHS0 | AADCON0_GO_nDONE | AADCON0_ADON |
#----------------------------------------------------------------------------------------------------------------#
| 7 | 6            | 5            | 4            | 3            | 2            | 1                | 0            |
#---------------------------------------------------------------------------------------------------------------*/

#define AADCON0                                  0x0
#define AADCON0_address                          0x711
#define AADCON0_position                         0x0
#define AADCON0_size                             0x8
#define AADCON0_value_mask                       0xFF
#define AADCON0_clear_mask                       0x0

#define AADCON0_ADON                             0x0
#define AADCON0_ADON_address                     0x711
#define AADCON0_ADON_position                    0x0
#define AADCON0_ADON_size                        0x1
#define AADCON0_ADON_value_mask                  0x1
#define AADCON0_ADON_clear_mask                  0xFE

#define AADCON0_GO_nDONE                         0x1
#define AADCON0_GO_nDONE_address                 0x711
#define AADCON0_GO_nDONE_position                0x1
#define AADCON0_GO_nDONE_size                    0x1
#define AADCON0_GO_nDONE_value_mask              0x2
#define AADCON0_GO_nDONE_clear_mask              0xFD

#define AADCON0_CHS0                             0x2
#define AADCON0_CHS0_address                     0x711
#define AADCON0_CHS0_position                    0x2
#define AADCON0_CHS0_size                        0x1
#define AADCON0_CHS0_value_mask                  0x4
#define AADCON0_CHS0_clear_mask                  0xFB

#define AADCON0_CHS                              0x2
#define AADCON0_CHS_address                      0x711
#define AADCON0_CHS_position                     0x2
#define AADCON0_CHS_size                         0x5
#define AADCON0_CHS_value_mask                   0x7C
#define AADCON0_CHS_clear_mask                   0x83

#define AADCON0_CHS1                             0x3
#define AADCON0_CHS1_address                     0x711
#define AADCON0_CHS1_position                    0x3
#define AADCON0_CHS1_size                        0x1
#define AADCON0_CHS1_value_mask                  0x8
#define AADCON0_CHS1_clear_mask                  0xF7

#define AADCON0_CHS2                             0x4
#define AADCON0_CHS2_address                     0x711
#define AADCON0_CHS2_position                    0x4
#define AADCON0_CHS2_size                        0x1
#define AADCON0_CHS2_value_mask                  0x10
#define AADCON0_CHS2_clear_mask                  0xEF

#define AADCON0_CHS3                             0x5
#define AADCON0_CHS3_address                     0x711
#define AADCON0_CHS3_position                    0x5
#define AADCON0_CHS3_size                        0x1
#define AADCON0_CHS3_value_mask                  0x20
#define AADCON0_CHS3_clear_mask                  0xDF

#define AADCON0_CHS4                             0x6
#define AADCON0_CHS4_address                     0x711
#define AADCON0_CHS4_position                    0x6
#define AADCON0_CHS4_size                        0x1
#define AADCON0_CHS4_value_mask                  0x40
#define AADCON0_CHS4_clear_mask                  0xBF


/*---------------------------------------------------------------------------------------------------------#
| AADCON1                                                                                            0x712 |
#----------------------------------------------------------------------------------------------------------#
| AADCON1_ADFM | AADCON1_ADCS2 | AADCON1_ADCS1 | AADCON1_ADCS0 | - | - | AADCON1_ADPREF1 | AADCON1_ADPREF0 |
#----------------------------------------------------------------------------------------------------------#
| 7            | 6             | 5             | 4             | 3 | 2 | 1               | 0               |
#---------------------------------------------------------------------------------------------------------*/

#define AADCON1                                  0x0
#define AADCON1_address                          0x712
#define AADCON1_position                         0x0
#define AADCON1_size                             0x8
#define AADCON1_value_mask                       0xFF
#define AADCON1_clear_mask                       0x0

#define AADCON1_ADPREF0                          0x0
#define AADCON1_ADPREF0_address                  0x712
#define AADCON1_ADPREF0_position                 0x0
#define AADCON1_ADPREF0_size                     0x1
#define AADCON1_ADPREF0_value_mask               0x1
#define AADCON1_ADPREF0_clear_mask               0xFE

#define AADCON1_ADPREF                           0x0
#define AADCON1_ADPREF_address                   0x712
#define AADCON1_ADPREF_position                  0x0
#define AADCON1_ADPREF_size                      0x2
#define AADCON1_ADPREF_value_mask                0x3
#define AADCON1_ADPREF_clear_mask                0xFC

#define AADCON1_ADPREF1                          0x1
#define AADCON1_ADPREF1_address                  0x712
#define AADCON1_ADPREF1_position                 0x1
#define AADCON1_ADPREF1_size                     0x1
#define AADCON1_ADPREF1_value_mask               0x2
#define AADCON1_ADPREF1_clear_mask               0xFD

#define AADCON1_ADCS0                            0x4
#define AADCON1_ADCS0_address                    0x712
#define AADCON1_ADCS0_position                   0x4
#define AADCON1_ADCS0_size                       0x1
#define AADCON1_ADCS0_value_mask                 0x10
#define AADCON1_ADCS0_clear_mask                 0xEF

#define AADCON1_ADCS                             0x4
#define AADCON1_ADCS_address                     0x712
#define AADCON1_ADCS_position                    0x4
#define AADCON1_ADCS_size                        0x3
#define AADCON1_ADCS_value_mask                  0x70
#define AADCON1_ADCS_clear_mask                  0x8F

#define AADCON1_ADCS1                            0x5
#define AADCON1_ADCS1_address                    0x712
#define AADCON1_ADCS1_position                   0x5
#define AADCON1_ADCS1_size                       0x1
#define AADCON1_ADCS1_value_mask                 0x20
#define AADCON1_ADCS1_clear_mask                 0xDF

#define AADCON1_ADCS2                            0x6
#define AADCON1_ADCS2_address                    0x712
#define AADCON1_ADCS2_position                   0x6
#define AADCON1_ADCS2_size                       0x1
#define AADCON1_ADCS2_value_mask                 0x40
#define AADCON1_ADCS2_clear_mask                 0xBF

#define AADCON1_ADFM                             0x7
#define AADCON1_ADFM_address                     0x712
#define AADCON1_ADFM_position                    0x7
#define AADCON1_ADFM_size                        0x1
#define AADCON1_ADFM_value_mask                  0x80
#define AADCON1_ADFM_clear_mask                  0x7F


/*---------------------------------------------------#
| AADCON2                                      0x713 |
#----------------------------------------------------#
| - | TRIGSEL2 | TRIGSEL1 | TRIGSEL0 | - | - | - | - |
#----------------------------------------------------#
| 7 | 6        | 5        | 4        | 3 | 2 | 1 | 0 |
#---------------------------------------------------*/

#define AADCON2                                  0x0
#define AADCON2_address                          0x713
#define AADCON2_position                         0x0
#define AADCON2_size                             0x8
#define AADCON2_value_mask                       0xFF
#define AADCON2_clear_mask                       0x0

#define TRIGSEL                                  0x4
#define TRIGSEL_address                          0x713
#define TRIGSEL_position                         0x4
#define TRIGSEL_size                             0x3
#define TRIGSEL_value_mask                       0x70
#define TRIGSEL_clear_mask                       0x8F

#define TRIGSEL0                                 0x4
#define TRIGSEL0_address                         0x713
#define TRIGSEL0_position                        0x4
#define TRIGSEL0_size                            0x1
#define TRIGSEL0_value_mask                      0x10
#define TRIGSEL0_clear_mask                      0xEF

#define TRIGSEL1                                 0x5
#define TRIGSEL1_address                         0x713
#define TRIGSEL1_position                        0x5
#define TRIGSEL1_size                            0x1
#define TRIGSEL1_value_mask                      0x20
#define TRIGSEL1_clear_mask                      0xDF

#define TRIGSEL2                                 0x6
#define TRIGSEL2_address                         0x713
#define TRIGSEL2_position                        0x6
#define TRIGSEL2_size                            0x1
#define TRIGSEL2_value_mask                      0x40
#define TRIGSEL2_clear_mask                      0xBF


/*------------------------------------------------------------------#
| AADCON3                                                     0x714 |
#-------------------------------------------------------------------#
| ADEPPOL | ADIPPOL | ADOLEN | ADOEN | ADOOEN | - | ADIPEN | ADDSEN |
#-------------------------------------------------------------------#
| 7       | 6       | 5      | 4     | 3      | 2 | 1      | 0      |
#------------------------------------------------------------------*/

#define AADCON3                                  0x0
#define AADCON3_address                          0x714
#define AADCON3_position                         0x0
#define AADCON3_size                             0x8
#define AADCON3_value_mask                       0xFF
#define AADCON3_clear_mask                       0x0

#define ADDSEN                                   0x0
#define ADDSEN_address                           0x714
#define ADDSEN_position                          0x0
#define ADDSEN_size                              0x1
#define ADDSEN_value_mask                        0x1
#define ADDSEN_clear_mask                        0xFE

#define ADIPEN                                   0x1
#define ADIPEN_address                           0x714
#define ADIPEN_position                          0x1
#define ADIPEN_size                              0x1
#define ADIPEN_value_mask                        0x2
#define ADIPEN_clear_mask                        0xFD

#define ADOOEN                                   0x3
#define ADOOEN_address                           0x714
#define ADOOEN_position                          0x3
#define ADOOEN_size                              0x1
#define ADOOEN_value_mask                        0x8
#define ADOOEN_clear_mask                        0xF7

#define ADOEN                                    0x4
#define ADOEN_address                            0x714
#define ADOEN_position                           0x4
#define ADOEN_size                               0x1
#define ADOEN_value_mask                         0x10
#define ADOEN_clear_mask                         0xEF

#define ADOLEN                                   0x5
#define ADOLEN_address                           0x714
#define ADOLEN_position                          0x5
#define ADOLEN_size                              0x1
#define ADOLEN_value_mask                        0x20
#define ADOLEN_clear_mask                        0xDF

#define ADIPPOL                                  0x6
#define ADIPPOL_address                          0x714
#define ADIPPOL_position                         0x6
#define ADIPPOL_size                             0x1
#define ADIPPOL_value_mask                       0x40
#define ADIPPOL_clear_mask                       0xBF

#define ADEPPOL                                  0x7
#define ADEPPOL_address                          0x714
#define ADEPPOL_position                         0x7
#define ADEPPOL_size                             0x1
#define ADEPPOL_value_mask                       0x80
#define ADEPPOL_clear_mask                       0x7F


/*---------------------------------------------#
| AADSTAT                                0x715 |
#----------------------------------------------#
| - | - | - | - | - | ADCONV | ADSTG1 | ADSTG0 |
#----------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1      | 0      |
#---------------------------------------------*/

#define AADSTAT                                  0x0
#define AADSTAT_address                          0x715
#define AADSTAT_position                         0x0
#define AADSTAT_size                             0x8
#define AADSTAT_value_mask                       0xFF
#define AADSTAT_clear_mask                       0x0

#define ADSTG0                                   0x0
#define ADSTG0_address                           0x715
#define ADSTG0_position                          0x0
#define ADSTG0_size                              0x1
#define ADSTG0_value_mask                        0x1
#define ADSTG0_clear_mask                        0xFE

#define ADSTG                                    0x0
#define ADSTG_address                            0x715
#define ADSTG_position                           0x0
#define ADSTG_size                               0x2
#define ADSTG_value_mask                         0x3
#define ADSTG_clear_mask                         0xFC

#define ADSTG1                                   0x1
#define ADSTG1_address                           0x715
#define ADSTG1_position                          0x1
#define ADSTG1_size                              0x1
#define ADSTG1_value_mask                        0x2
#define ADSTG1_clear_mask                        0xFD

#define ADCONV                                   0x2
#define ADCONV_address                           0x715
#define ADCONV_position                          0x2
#define ADCONV_size                              0x1
#define ADCONV_value_mask                        0x4
#define ADCONV_clear_mask                        0xFB


/*-----------------------------------------------------------------#
| AADPRE                                                     0x716 |
#------------------------------------------------------------------#
| - | ADPRE6 | ADPRE5 | ADPRE4 | ADPRE3 | ADPRE2 | ADPRE1 | ADPRE0 |
#------------------------------------------------------------------#
| 7 | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

#define AADPRE                                   0x0
#define AADPRE_address                           0x716
#define AADPRE_position                          0x0
#define AADPRE_size                              0x8
#define AADPRE_value_mask                        0xFF
#define AADPRE_clear_mask                        0x0

#define ADPRE0                                   0x0
#define ADPRE0_address                           0x716
#define ADPRE0_position                          0x0
#define ADPRE0_size                              0x1
#define ADPRE0_value_mask                        0x1
#define ADPRE0_clear_mask                        0xFE

#define ADPRE                                    0x0
#define ADPRE_address                            0x716
#define ADPRE_position                           0x0
#define ADPRE_size                               0x7
#define ADPRE_value_mask                         0x7F
#define ADPRE_clear_mask                         0x80

#define ADPRE1                                   0x1
#define ADPRE1_address                           0x716
#define ADPRE1_position                          0x1
#define ADPRE1_size                              0x1
#define ADPRE1_value_mask                        0x2
#define ADPRE1_clear_mask                        0xFD

#define ADPRE2                                   0x2
#define ADPRE2_address                           0x716
#define ADPRE2_position                          0x2
#define ADPRE2_size                              0x1
#define ADPRE2_value_mask                        0x4
#define ADPRE2_clear_mask                        0xFB

#define ADPRE3                                   0x3
#define ADPRE3_address                           0x716
#define ADPRE3_position                          0x3
#define ADPRE3_size                              0x1
#define ADPRE3_value_mask                        0x8
#define ADPRE3_clear_mask                        0xF7

#define ADPRE4                                   0x4
#define ADPRE4_address                           0x716
#define ADPRE4_position                          0x4
#define ADPRE4_size                              0x1
#define ADPRE4_value_mask                        0x10
#define ADPRE4_clear_mask                        0xEF

#define ADPRE5                                   0x5
#define ADPRE5_address                           0x716
#define ADPRE5_position                          0x5
#define ADPRE5_size                              0x1
#define ADPRE5_value_mask                        0x20
#define ADPRE5_clear_mask                        0xDF

#define ADPRE6                                   0x6
#define ADPRE6_address                           0x716
#define ADPRE6_position                          0x6
#define ADPRE6_size                              0x1
#define ADPRE6_value_mask                        0x40
#define ADPRE6_clear_mask                        0xBF


/*-----------------------------------------------------------------#
| AADACQ                                                     0x717 |
#------------------------------------------------------------------#
| - | ADACQ6 | ADACQ5 | ADACQ4 | ADACQ3 | ADACQ2 | ADACQ1 | ADACQ0 |
#------------------------------------------------------------------#
| 7 | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

#define AADACQ                                   0x0
#define AADACQ_address                           0x717
#define AADACQ_position                          0x0
#define AADACQ_size                              0x8
#define AADACQ_value_mask                        0xFF
#define AADACQ_clear_mask                        0x0

#define ADACQ                                    0x0
#define ADACQ_address                            0x717
#define ADACQ_position                           0x0
#define ADACQ_size                               0x7
#define ADACQ_value_mask                         0x7F
#define ADACQ_clear_mask                         0x80

#define ADACQ0                                   0x0
#define ADACQ0_address                           0x717
#define ADACQ0_position                          0x0
#define ADACQ0_size                              0x1
#define ADACQ0_value_mask                        0x1
#define ADACQ0_clear_mask                        0xFE

#define ADACQ1                                   0x1
#define ADACQ1_address                           0x717
#define ADACQ1_position                          0x1
#define ADACQ1_size                              0x1
#define ADACQ1_value_mask                        0x2
#define ADACQ1_clear_mask                        0xFD

#define ADACQ2                                   0x2
#define ADACQ2_address                           0x717
#define ADACQ2_position                          0x2
#define ADACQ2_size                              0x1
#define ADACQ2_value_mask                        0x4
#define ADACQ2_clear_mask                        0xFB

#define ADACQ3                                   0x3
#define ADACQ3_address                           0x717
#define ADACQ3_position                          0x3
#define ADACQ3_size                              0x1
#define ADACQ3_value_mask                        0x8
#define ADACQ3_clear_mask                        0xF7

#define ADACQ4                                   0x4
#define ADACQ4_address                           0x717
#define ADACQ4_position                          0x4
#define ADACQ4_size                              0x1
#define ADACQ4_value_mask                        0x10
#define ADACQ4_clear_mask                        0xEF

#define ADACQ5                                   0x5
#define ADACQ5_address                           0x717
#define ADACQ5_position                          0x5
#define ADACQ5_size                              0x1
#define ADACQ5_value_mask                        0x20
#define ADACQ5_clear_mask                        0xDF

#define ADACQ6                                   0x6
#define ADACQ6_address                           0x717
#define ADACQ6_position                          0x6
#define ADACQ6_size                              0x1
#define ADACQ6_value_mask                        0x40
#define ADACQ6_clear_mask                        0xBF


/*---------------------------------------------#
| AADGRD                                 0x718 |
#----------------------------------------------#
| GRDBOE | GRDAOE | GRDPOL | - | - | - | - | - |
#----------------------------------------------#
| 7      | 6      | 5      | 4 | 3 | 2 | 1 | 0 |
#---------------------------------------------*/

#define AADGRD                                   0x0
#define AADGRD_address                           0x718
#define AADGRD_position                          0x0
#define AADGRD_size                              0x8
#define AADGRD_value_mask                        0xFF
#define AADGRD_clear_mask                        0x0

#define GRDPOL                                   0x5
#define GRDPOL_address                           0x718
#define GRDPOL_position                          0x5
#define GRDPOL_size                              0x1
#define GRDPOL_value_mask                        0x20
#define GRDPOL_clear_mask                        0xDF

#define GRDAOE                                   0x6
#define GRDAOE_address                           0x718
#define GRDAOE_position                          0x6
#define GRDAOE_size                              0x1
#define GRDAOE_value_mask                        0x40
#define GRDAOE_clear_mask                        0xBF

#define GRDBOE                                   0x7
#define GRDBOE_address                           0x718
#define GRDBOE_position                          0x7
#define GRDBOE_size                              0x1
#define GRDBOE_value_mask                        0x80
#define GRDBOE_clear_mask                        0x7F


/*------------------------------------------------#
| AADCAP                                    0x719 |
#-------------------------------------------------#
| - | - | - | - | - | ADDCAP2 | ADDCAP1 | ADDCAP0 |
#-------------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2       | 1       | 0       |
#------------------------------------------------*/

#define AADCAP                                   0x0
#define AADCAP_address                           0x719
#define AADCAP_position                          0x0
#define AADCAP_size                              0x8
#define AADCAP_value_mask                        0xFF
#define AADCAP_clear_mask                        0x0

#define ADDCAP                                   0x0
#define ADDCAP_address                           0x719
#define ADDCAP_position                          0x0
#define ADDCAP_size                              0x3
#define ADDCAP_value_mask                        0x7
#define ADDCAP_clear_mask                        0xF8

#define ADDCAP0                                  0x0
#define ADDCAP0_address                          0x719
#define ADDCAP0_position                         0x0
#define ADDCAP0_size                             0x1
#define ADDCAP0_value_mask                       0x1
#define ADDCAP0_clear_mask                       0xFE

#define ADDCAP1                                  0x1
#define ADDCAP1_address                          0x719
#define ADDCAP1_position                         0x1
#define ADDCAP1_size                             0x1
#define ADDCAP1_value_mask                       0x2
#define ADDCAP1_clear_mask                       0xFD

#define ADDCAP2                                  0x2
#define ADDCAP2_address                          0x719
#define ADDCAP2_position                         0x2
#define ADDCAP2_size                             0x1
#define ADDCAP2_value_mask                       0x4
#define ADDCAP2_clear_mask                       0xFB


/*------------------------------#
| AADRES0L                0x71A |
#-------------------------------#
| AADRES0L_ADRES0L              |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define AADRES0L                                 0x0
#define AADRES0L_address                         0x71A
#define AADRES0L_position                        0x0
#define AADRES0L_size                            0x8
#define AADRES0L_value_mask                      0xFF
#define AADRES0L_clear_mask                      0x0

#define AADRES0L_ADRES0L                         0x0
#define AADRES0L_ADRES0L_address                 0x71A
#define AADRES0L_ADRES0L_position                0x0
#define AADRES0L_ADRES0L_size                    0x8
#define AADRES0L_ADRES0L_value_mask              0xFF
#define AADRES0L_ADRES0L_clear_mask              0x0


/*------------------------------#
| AADRES0H                0x71B |
#-------------------------------#
| AADRES0H_ADRES0H              |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define AADRES0H                                 0x0
#define AADRES0H_address                         0x71B
#define AADRES0H_position                        0x0
#define AADRES0H_size                            0x8
#define AADRES0H_value_mask                      0xFF
#define AADRES0H_clear_mask                      0x0

#define AADRES0H_ADRES0H                         0x0
#define AADRES0H_ADRES0H_address                 0x71B
#define AADRES0H_ADRES0H_position                0x0
#define AADRES0H_ADRES0H_size                    0x8
#define AADRES0H_ADRES0H_value_mask              0xFF
#define AADRES0H_ADRES0H_clear_mask              0x0


/*------------------------------#
| AADRES1L                0x71C |
#-------------------------------#
| ADRES1L                       |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define AADRES1L                                 0x0
#define AADRES1L_address                         0x71C
#define AADRES1L_position                        0x0
#define AADRES1L_size                            0x8
#define AADRES1L_value_mask                      0xFF
#define AADRES1L_clear_mask                      0x0

#define ADRES1L                                  0x0
#define ADRES1L_address                          0x71C
#define ADRES1L_position                         0x0
#define ADRES1L_size                             0x8
#define ADRES1L_value_mask                       0xFF
#define ADRES1L_clear_mask                       0x0


/*------------------------------#
| AADRES1H                0x71D |
#-------------------------------#
| ADRES1H                       |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define AADRES1H                                 0x0
#define AADRES1H_address                         0x71D
#define AADRES1H_position                        0x0
#define AADRES1H_size                            0x8
#define AADRES1H_value_mask                      0xFF
#define AADRES1H_clear_mask                      0x0

#define ADRES1H                                  0x0
#define ADRES1H_address                          0x71D
#define ADRES1H_position                         0x0
#define ADRES1H_size                             0x8
#define ADRES1H_value_mask                       0xFF
#define ADRES1H_clear_mask                       0x0


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

#endif // _PIC16F1513_H_
