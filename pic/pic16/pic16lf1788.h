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

#ifndef _PIC16LF1788_H_
#define _PIC16LF1788_H_


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

#define RC0                                      0x0
#define RC0_address                              0x00E
#define RC0_position                             0x0
#define RC0_size                                 0x1
#define RC0_value_mask                           0x1
#define RC0_clear_mask                           0xFE

#define PORTC                                    0x0
#define PORTC_address                            0x00E
#define PORTC_position                           0x0
#define PORTC_size                               0x8
#define PORTC_value_mask                         0xFF
#define PORTC_clear_mask                         0x0

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
| RE3 | PORTE                         |
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


/*-----------------------------------------------------------------#
| PIR1                                                        0x11 |
#------------------------------------------------------------------#
| TMR1GIF | ADIF | RCIF | TXIF | SSP1IF | CCP1IF | TMR2IF | TMR1IF |
#------------------------------------------------------------------#
| 7       | 6    | 5    | 4    | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

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


/*-----------------------------------------------------------#
| PIR2                                                  0x12 |
#------------------------------------------------------------#
| OSFIF | C2IF | C1IF | EEIF | BCL1IF | C4IF | C3IF | CCP2IF |
#------------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3      | 2    | 1    | 0      |
#-----------------------------------------------------------*/

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

#define C3IF                                     0x1
#define C3IF_address                             0x012
#define C3IF_position                            0x1
#define C3IF_size                                0x1
#define C3IF_value_mask                          0x2
#define C3IF_clear_mask                          0xFD

#define C4IF                                     0x2
#define C4IF_address                             0x012
#define C4IF_position                            0x2
#define C4IF_size                                0x1
#define C4IF_value_mask                          0x4
#define C4IF_clear_mask                          0xFB

#define BCL1IF                                   0x3
#define BCL1IF_address                           0x012
#define BCL1IF_position                          0x3
#define BCL1IF_size                              0x1
#define BCL1IF_value_mask                        0x8
#define BCL1IF_clear_mask                        0xF7

#define EEIF                                     0x4
#define EEIF_address                             0x012
#define EEIF_position                            0x4
#define EEIF_size                                0x1
#define EEIF_value_mask                          0x10
#define EEIF_clear_mask                          0xEF

#define C1IF                                     0x5
#define C1IF_address                             0x012
#define C1IF_position                            0x5
#define C1IF_size                                0x1
#define C1IF_value_mask                          0x20
#define C1IF_clear_mask                          0xDF

#define C2IF                                     0x6
#define C2IF_address                             0x012
#define C2IF_position                            0x6
#define C2IF_size                                0x1
#define C2IF_value_mask                          0x40
#define C2IF_clear_mask                          0xBF

#define OSFIF                                    0x7
#define OSFIF_address                            0x012
#define OSFIF_position                           0x7
#define OSFIF_size                               0x1
#define OSFIF_value_mask                         0x80
#define OSFIF_clear_mask                         0x7F


/*-----------------------------------#
| PIR3                          0x13 |
#------------------------------------#
| - | - | - | CCP3IF | - | - | - | - |
#------------------------------------#
| 7 | 6 | 5 | 4      | 3 | 2 | 1 | 0 |
#-----------------------------------*/

#define PIR3                                     0x0
#define PIR3_address                             0x013
#define PIR3_position                            0x0
#define PIR3_size                                0x8
#define PIR3_value_mask                          0xFF
#define PIR3_clear_mask                          0x0

#define CCP3IF                                   0x4
#define CCP3IF_address                           0x013
#define CCP3IF_position                          0x4
#define CCP3IF_size                              0x1
#define CCP3IF_value_mask                        0x10
#define CCP3IF_clear_mask                        0xEF


/*--------------------------------------------------------------------------------------#
| PIR4                                                                             0x14 |
#---------------------------------------------------------------------------------------#
| PSMC4TIF | PSMC3TIF | PSMC2TIF | PSMC1TIF | PSMC4SIF | PSMC3SIF | PSMC2SIF | PSMC1SIF |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PIR4                                     0x0
#define PIR4_address                             0x014
#define PIR4_position                            0x0
#define PIR4_size                                0x8
#define PIR4_value_mask                          0xFF
#define PIR4_clear_mask                          0x0

#define PSMC1SIF                                 0x0
#define PSMC1SIF_address                         0x014
#define PSMC1SIF_position                        0x0
#define PSMC1SIF_size                            0x1
#define PSMC1SIF_value_mask                      0x1
#define PSMC1SIF_clear_mask                      0xFE

#define PSMC2SIF                                 0x1
#define PSMC2SIF_address                         0x014
#define PSMC2SIF_position                        0x1
#define PSMC2SIF_size                            0x1
#define PSMC2SIF_value_mask                      0x2
#define PSMC2SIF_clear_mask                      0xFD

#define PSMC3SIF                                 0x2
#define PSMC3SIF_address                         0x014
#define PSMC3SIF_position                        0x2
#define PSMC3SIF_size                            0x1
#define PSMC3SIF_value_mask                      0x4
#define PSMC3SIF_clear_mask                      0xFB

#define PSMC4SIF                                 0x3
#define PSMC4SIF_address                         0x014
#define PSMC4SIF_position                        0x3
#define PSMC4SIF_size                            0x1
#define PSMC4SIF_value_mask                      0x8
#define PSMC4SIF_clear_mask                      0xF7

#define PSMC1TIF                                 0x4
#define PSMC1TIF_address                         0x014
#define PSMC1TIF_position                        0x4
#define PSMC1TIF_size                            0x1
#define PSMC1TIF_value_mask                      0x10
#define PSMC1TIF_clear_mask                      0xEF

#define PSMC2TIF                                 0x5
#define PSMC2TIF_address                         0x014
#define PSMC2TIF_position                        0x5
#define PSMC2TIF_size                            0x1
#define PSMC2TIF_value_mask                      0x20
#define PSMC2TIF_clear_mask                      0xDF

#define PSMC3TIF                                 0x6
#define PSMC3TIF_address                         0x014
#define PSMC3TIF_position                        0x6
#define PSMC3TIF_size                            0x1
#define PSMC3TIF_value_mask                      0x40
#define PSMC3TIF_clear_mask                      0xBF

#define PSMC4TIF                                 0x7
#define PSMC4TIF_address                         0x014
#define PSMC4TIF_position                        0x7
#define PSMC4TIF_size                            0x1
#define PSMC4TIF_value_mask                      0x80
#define PSMC4TIF_clear_mask                      0x7F


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

#define TMR1CS                                   0x6
#define TMR1CS_address                           0x018
#define TMR1CS_position                          0x6
#define TMR1CS_size                              0x2
#define TMR1CS_value_mask                        0xC0
#define TMR1CS_clear_mask                        0x3F

#define TMR1CS0                                  0x6
#define TMR1CS0_address                          0x018
#define TMR1CS0_position                         0x6
#define TMR1CS0_size                             0x1
#define TMR1CS0_value_mask                       0x40
#define TMR1CS0_clear_mask                       0xBF

#define TMR1CS1                                  0x7
#define TMR1CS1_address                          0x018
#define TMR1CS1_position                         0x7
#define TMR1CS1_size                             0x1
#define TMR1CS1_value_mask                       0x80
#define TMR1CS1_clear_mask                       0x7F


/*--------------------------------------------------------------------#
| T1GCON                                                         0x19 |
#---------------------------------------------------------------------#
| TMR1GE | T1GPOL | T1GTM | T1GSPM | T1GGO | T1GVAL | T1GSS1 | T1GSS0 |
#---------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3     | 2      | 1      | 0      |
#--------------------------------------------------------------------*/

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

#define T1GGO                                    0x3
#define T1GGO_address                            0x019
#define T1GGO_position                           0x3
#define T1GGO_size                               0x1
#define T1GGO_value_mask                         0x8
#define T1GGO_clear_mask                         0xF7

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


/*-----------------------------------#
| TRISE                         0x90 |
#------------------------------------#
| TRISE3 | TRISE                         |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2 | 1 | 0 |
#-----------------------------------*/

#define TRISE                                    0x0
#define TRISE_address                            0x090
#define TRISE_position                           0x0
#define TRISE_size                               0x8
#define TRISE_value_mask                         0xFF
#define TRISE_clear_mask                         0x0

#define TRISE3                                   0x3
#define TRISE3_address                           0x090
#define TRISE3_position                          0x3
#define TRISE3_size                              0x1
#define TRISE3_value_mask                        0x8
#define TRISE3_clear_mask                        0xF7


/*-----------------------------------------------------------------#
| PIE1                                                        0x91 |
#------------------------------------------------------------------#
| TMR1GIE | ADIE | RCIE | TXIE | SSP1IE | CCP1IE | TMR2IE | TMR1IE |
#------------------------------------------------------------------#
| 7       | 6    | 5    | 4    | 3      | 2      | 1      | 0      |
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


/*-----------------------------------------------------------#
| PIE2                                                  0x92 |
#------------------------------------------------------------#
| OSFIE | C2IE | C1IE | EEIE | BCL1IE | C4IE | C3IE | CCP2IE |
#------------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3      | 2    | 1    | 0      |
#-----------------------------------------------------------*/

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

#define C3IE                                     0x1
#define C3IE_address                             0x092
#define C3IE_position                            0x1
#define C3IE_size                                0x1
#define C3IE_value_mask                          0x2
#define C3IE_clear_mask                          0xFD

#define C4IE                                     0x2
#define C4IE_address                             0x092
#define C4IE_position                            0x2
#define C4IE_size                                0x1
#define C4IE_value_mask                          0x4
#define C4IE_clear_mask                          0xFB

#define BCL1IE                                   0x3
#define BCL1IE_address                           0x092
#define BCL1IE_position                          0x3
#define BCL1IE_size                              0x1
#define BCL1IE_value_mask                        0x8
#define BCL1IE_clear_mask                        0xF7

#define EEIE                                     0x4
#define EEIE_address                             0x092
#define EEIE_position                            0x4
#define EEIE_size                                0x1
#define EEIE_value_mask                          0x10
#define EEIE_clear_mask                          0xEF

#define C1IE                                     0x5
#define C1IE_address                             0x092
#define C1IE_position                            0x5
#define C1IE_size                                0x1
#define C1IE_value_mask                          0x20
#define C1IE_clear_mask                          0xDF

#define C2IE                                     0x6
#define C2IE_address                             0x092
#define C2IE_position                            0x6
#define C2IE_size                                0x1
#define C2IE_value_mask                          0x40
#define C2IE_clear_mask                          0xBF

#define OSFIE                                    0x7
#define OSFIE_address                            0x092
#define OSFIE_position                           0x7
#define OSFIE_size                               0x1
#define OSFIE_value_mask                         0x80
#define OSFIE_clear_mask                         0x7F


/*-----------------------------------#
| PIE3                          0x93 |
#------------------------------------#
| - | - | - | CCP3IE | - | - | - | - |
#------------------------------------#
| 7 | 6 | 5 | 4      | 3 | 2 | 1 | 0 |
#-----------------------------------*/

#define PIE3                                     0x0
#define PIE3_address                             0x093
#define PIE3_position                            0x0
#define PIE3_size                                0x8
#define PIE3_value_mask                          0xFF
#define PIE3_clear_mask                          0x0

#define CCP3IE                                   0x4
#define CCP3IE_address                           0x093
#define CCP3IE_position                          0x4
#define CCP3IE_size                              0x1
#define CCP3IE_value_mask                        0x10
#define CCP3IE_clear_mask                        0xEF


/*--------------------------------------------------------------------------------------#
| PIE4                                                                             0x94 |
#---------------------------------------------------------------------------------------#
| PSMC4TIE | PMSC3TIE | PSMC2TIE | PSMC1TIE | PSMC4SIE | PSMC3SIE | PSMC2SIE | PSMC1SIE |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PIE4                                     0x0
#define PIE4_address                             0x094
#define PIE4_position                            0x0
#define PIE4_size                                0x8
#define PIE4_value_mask                          0xFF
#define PIE4_clear_mask                          0x0

#define PSMC1SIE                                 0x0
#define PSMC1SIE_address                         0x094
#define PSMC1SIE_position                        0x0
#define PSMC1SIE_size                            0x1
#define PSMC1SIE_value_mask                      0x1
#define PSMC1SIE_clear_mask                      0xFE

#define PSMC2SIE                                 0x1
#define PSMC2SIE_address                         0x094
#define PSMC2SIE_position                        0x1
#define PSMC2SIE_size                            0x1
#define PSMC2SIE_value_mask                      0x2
#define PSMC2SIE_clear_mask                      0xFD

#define PSMC3SIE                                 0x2
#define PSMC3SIE_address                         0x094
#define PSMC3SIE_position                        0x2
#define PSMC3SIE_size                            0x1
#define PSMC3SIE_value_mask                      0x4
#define PSMC3SIE_clear_mask                      0xFB

#define PSMC4SIE                                 0x3
#define PSMC4SIE_address                         0x094
#define PSMC4SIE_position                        0x3
#define PSMC4SIE_size                            0x1
#define PSMC4SIE_value_mask                      0x8
#define PSMC4SIE_clear_mask                      0xF7

#define PSMC1TIE                                 0x4
#define PSMC1TIE_address                         0x094
#define PSMC1TIE_position                        0x4
#define PSMC1TIE_size                            0x1
#define PSMC1TIE_value_mask                      0x10
#define PSMC1TIE_clear_mask                      0xEF

#define PSMC2TIE                                 0x5
#define PSMC2TIE_address                         0x094
#define PSMC2TIE_position                        0x5
#define PSMC2TIE_size                            0x1
#define PSMC2TIE_value_mask                      0x20
#define PSMC2TIE_clear_mask                      0xDF

#define PMSC3TIE                                 0x6
#define PMSC3TIE_address                         0x094
#define PMSC3TIE_position                        0x6
#define PMSC3TIE_size                            0x1
#define PMSC3TIE_value_mask                      0x40
#define PMSC3TIE_clear_mask                      0xBF

#define PSMC3TIE                                 0x6
#define PSMC3TIE_address                         0x094
#define PSMC3TIE_position                        0x6
#define PSMC3TIE_size                            0x1
#define PSMC3TIE_value_mask                      0x40
#define PSMC3TIE_clear_mask                      0xBF

#define PSMC4TIE                                 0x7
#define PSMC4TIE_address                         0x094
#define PSMC4TIE_position                        0x7
#define PSMC4TIE_size                            0x1
#define PSMC4TIE_value_mask                      0x80
#define PSMC4TIE_clear_mask                      0x7F


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


/*------------------------------------------------#
| OSCTUNE                                    0x98 |
#-------------------------------------------------#
| - | - | TUN5 | TUN4 | TUN3 | TUN2 | TUN1 | TUN0 |
#-------------------------------------------------#
| 7 | 6 | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------*/

#define OSCTUNE                                  0x0
#define OSCTUNE_address                          0x098
#define OSCTUNE_position                         0x0
#define OSCTUNE_size                             0x8
#define OSCTUNE_value_mask                       0xFF
#define OSCTUNE_clear_mask                       0x0

#define TUN0                                     0x0
#define TUN0_address                             0x098
#define TUN0_position                            0x0
#define TUN0_size                                0x1
#define TUN0_value_mask                          0x1
#define TUN0_clear_mask                          0xFE

#define TUN                                      0x0
#define TUN_address                              0x098
#define TUN_position                             0x0
#define TUN_size                                 0x6
#define TUN_value_mask                           0x3F
#define TUN_clear_mask                           0xC0

#define TUN1                                     0x1
#define TUN1_address                             0x098
#define TUN1_position                            0x1
#define TUN1_size                                0x1
#define TUN1_value_mask                          0x2
#define TUN1_clear_mask                          0xFD

#define TUN2                                     0x2
#define TUN2_address                             0x098
#define TUN2_position                            0x2
#define TUN2_size                                0x1
#define TUN2_value_mask                          0x4
#define TUN2_clear_mask                          0xFB

#define TUN3                                     0x3
#define TUN3_address                             0x098
#define TUN3_position                            0x3
#define TUN3_size                                0x1
#define TUN3_value_mask                          0x8
#define TUN3_clear_mask                          0xF7

#define TUN4                                     0x4
#define TUN4_address                             0x098
#define TUN4_position                            0x4
#define TUN4_size                                0x1
#define TUN4_value_mask                          0x10
#define TUN4_clear_mask                          0xEF

#define TUN5                                     0x5
#define TUN5_address                             0x098
#define TUN5_position                            0x5
#define TUN5_size                                0x1
#define TUN5_value_mask                          0x20
#define TUN5_clear_mask                          0xDF


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


/*------------------------------------------------------------------#
| OSCSTAT                                                      0x9A |
#-------------------------------------------------------------------#
| T1OSCR | PLLR | OSTS | HFIOFR | HFIOFL | MFIOFR | LFIOFR | HFIOFS |
#-------------------------------------------------------------------#
| 7      | 6    | 5    | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------------*/

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

#define MFIOFR                                   0x2
#define MFIOFR_address                           0x09A
#define MFIOFR_position                          0x2
#define MFIOFR_size                              0x1
#define MFIOFR_value_mask                        0x4
#define MFIOFR_clear_mask                        0xFB

#define HFIOFL                                   0x3
#define HFIOFL_address                           0x09A
#define HFIOFL_position                          0x3
#define HFIOFL_size                              0x1
#define HFIOFL_value_mask                        0x8
#define HFIOFL_clear_mask                        0xF7

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

#define PLLR                                     0x6
#define PLLR_address                             0x09A
#define PLLR_position                            0x6
#define PLLR_size                                0x1
#define PLLR_value_mask                          0x40
#define PLLR_clear_mask                          0xBF

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


/*-----------------------------------------------------------#
| ADCON0                                                0x9D |
#------------------------------------------------------------#
| ADRMD | CHS4 | CHS3 | CHS2 | CHS1 | CHS0 | GO_nDONE | ADON |
#------------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3    | 2    | 1        | 0    |
#-----------------------------------------------------------*/

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

#define DONE                                     0x1
#define DONE_address                             0x09D
#define DONE_position                            0x1
#define DONE_size                                0x1
#define DONE_value_mask                          0x2
#define DONE_clear_mask                          0xFD

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

#define ADRMD                                    0x7
#define ADRMD_address                            0x09D
#define ADRMD_position                           0x7
#define ADRMD_size                               0x1
#define ADRMD_value_mask                         0x80
#define ADRMD_clear_mask                         0x7F


/*--------------------------------------------------------------#
| ADCON1                                                   0x9E |
#---------------------------------------------------------------#
| ADFM | ADCS2 | ADCS1 | ADCS0 | - | ADNREF | ADPREF1 | ADPREF0 |
#---------------------------------------------------------------#
| 7    | 6     | 5     | 4     | 3 | 2      | 1       | 0       |
#--------------------------------------------------------------*/

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

#define ADNREF                                   0x2
#define ADNREF_address                           0x09E
#define ADNREF_position                          0x2
#define ADNREF_size                              0x1
#define ADNREF_value_mask                        0x4
#define ADNREF_clear_mask                        0xFB

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


/*--------------------------------------------------------------------------#
| ADCON2                                                               0x9F |
#---------------------------------------------------------------------------#
| TRIGSEL3 | TRIGSEL2 | TRIGSEL1 | TRIGSEL0 | CHSN3 | CHSN2 | CHSN1 | CHSN0 |
#---------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------------------*/

#define ADCON2                                   0x0
#define ADCON2_address                           0x09F
#define ADCON2_position                          0x0
#define ADCON2_size                              0x8
#define ADCON2_value_mask                        0xFF
#define ADCON2_clear_mask                        0x0

#define CHSN0                                    0x0
#define CHSN0_address                            0x09F
#define CHSN0_position                           0x0
#define CHSN0_size                               0x1
#define CHSN0_value_mask                         0x1
#define CHSN0_clear_mask                         0xFE

#define CHSN                                     0x0
#define CHSN_address                             0x09F
#define CHSN_position                            0x0
#define CHSN_size                                0x4
#define CHSN_value_mask                          0xF
#define CHSN_clear_mask                          0xF0

#define CHSN1                                    0x1
#define CHSN1_address                            0x09F
#define CHSN1_position                           0x1
#define CHSN1_size                               0x1
#define CHSN1_value_mask                         0x2
#define CHSN1_clear_mask                         0xFD

#define CHSN2                                    0x2
#define CHSN2_address                            0x09F
#define CHSN2_position                           0x2
#define CHSN2_size                               0x1
#define CHSN2_value_mask                         0x4
#define CHSN2_clear_mask                         0xFB

#define CHSN3                                    0x3
#define CHSN3_address                            0x09F
#define CHSN3_position                           0x3
#define CHSN3_size                               0x1
#define CHSN3_value_mask                         0x8
#define CHSN3_clear_mask                         0xF7

#define TRIGSEL                                  0x4
#define TRIGSEL_address                          0x09F
#define TRIGSEL_position                         0x4
#define TRIGSEL_size                             0x4
#define TRIGSEL_value_mask                       0xF0
#define TRIGSEL_clear_mask                       0xF

#define TRIGSEL0                                 0x4
#define TRIGSEL0_address                         0x09F
#define TRIGSEL0_position                        0x4
#define TRIGSEL0_size                            0x1
#define TRIGSEL0_value_mask                      0x10
#define TRIGSEL0_clear_mask                      0xEF

#define TRIGSEL1                                 0x5
#define TRIGSEL1_address                         0x09F
#define TRIGSEL1_position                        0x5
#define TRIGSEL1_size                            0x1
#define TRIGSEL1_value_mask                      0x20
#define TRIGSEL1_clear_mask                      0xDF

#define TRIGSEL2                                 0x6
#define TRIGSEL2_address                         0x09F
#define TRIGSEL2_position                        0x6
#define TRIGSEL2_size                            0x1
#define TRIGSEL2_value_mask                      0x40
#define TRIGSEL2_clear_mask                      0xBF

#define TRIGSEL3                                 0x7
#define TRIGSEL3_address                         0x09F
#define TRIGSEL3_position                        0x7
#define TRIGSEL3_size                            0x1
#define TRIGSEL3_value_mask                      0x80
#define TRIGSEL3_clear_mask                      0x7F


/*--------------------------------------------------------------#
| LATA                                                    0x10C |
#---------------------------------------------------------------#
| LATA7 | LATA6 | LATA5 | LATA4 | LATA3 | LATA2 | LATA1 | LATA0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LATA0                                    0x0
#define LATA0_address                            0x10C
#define LATA0_position                           0x0
#define LATA0_size                               0x1
#define LATA0_value_mask                         0x1
#define LATA0_clear_mask                         0xFE

#define LATA                                     0x0
#define LATA_address                             0x10C
#define LATA_position                            0x0
#define LATA_size                                0x8
#define LATA_value_mask                          0xFF
#define LATA_clear_mask                          0x0

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

#define LATB0                                    0x0
#define LATB0_address                            0x10D
#define LATB0_position                           0x0
#define LATB0_size                               0x1
#define LATB0_value_mask                         0x1
#define LATB0_clear_mask                         0xFE

#define LATB                                     0x0
#define LATB_address                             0x10D
#define LATB_position                            0x0
#define LATB_size                                0x8
#define LATB_value_mask                          0xFF
#define LATB_clear_mask                          0x0

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

#define LATC0                                    0x0
#define LATC0_address                            0x10E
#define LATC0_position                           0x0
#define LATC0_size                               0x1
#define LATC0_value_mask                         0x1
#define LATC0_clear_mask                         0xFE

#define LATC                                     0x0
#define LATC_address                             0x10E
#define LATC_position                            0x0
#define LATC_size                                0x8
#define LATC_value_mask                          0xFF
#define LATC_clear_mask                          0x0

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


/*------------------------------------------------------------#
| CM1CON0                                               0x111 |
#-------------------------------------------------------------#
| C1ON | C1OUT | C1OE | C1POL | C1ZLF | C1SP | C1HYS | C1SYNC |
#-------------------------------------------------------------#
| 7    | 6     | 5    | 4     | 3     | 2    | 1     | 0      |
#------------------------------------------------------------*/

#define CM1CON0                                  0x0
#define CM1CON0_address                          0x111
#define CM1CON0_position                         0x0
#define CM1CON0_size                             0x8
#define CM1CON0_value_mask                       0xFF
#define CM1CON0_clear_mask                       0x0

#define C1SYNC                                   0x0
#define C1SYNC_address                           0x111
#define C1SYNC_position                          0x0
#define C1SYNC_size                              0x1
#define C1SYNC_value_mask                        0x1
#define C1SYNC_clear_mask                        0xFE

#define C1HYS                                    0x1
#define C1HYS_address                            0x111
#define C1HYS_position                           0x1
#define C1HYS_size                               0x1
#define C1HYS_value_mask                         0x2
#define C1HYS_clear_mask                         0xFD

#define C1SP                                     0x2
#define C1SP_address                             0x111
#define C1SP_position                            0x2
#define C1SP_size                                0x1
#define C1SP_value_mask                          0x4
#define C1SP_clear_mask                          0xFB

#define C1ZLF                                    0x3
#define C1ZLF_address                            0x111
#define C1ZLF_position                           0x3
#define C1ZLF_size                               0x1
#define C1ZLF_value_mask                         0x8
#define C1ZLF_clear_mask                         0xF7

#define C1POL                                    0x4
#define C1POL_address                            0x111
#define C1POL_position                           0x4
#define C1POL_size                               0x1
#define C1POL_value_mask                         0x10
#define C1POL_clear_mask                         0xEF

#define C1OE                                     0x5
#define C1OE_address                             0x111
#define C1OE_position                            0x5
#define C1OE_size                                0x1
#define C1OE_value_mask                          0x20
#define C1OE_clear_mask                          0xDF

#define C1OUT                                    0x6
#define C1OUT_address                            0x111
#define C1OUT_position                           0x6
#define C1OUT_size                               0x1
#define C1OUT_value_mask                         0x40
#define C1OUT_clear_mask                         0xBF

#define C1ON                                     0x7
#define C1ON_address                             0x111
#define C1ON_position                            0x7
#define C1ON_size                                0x1
#define C1ON_value_mask                          0x80
#define C1ON_clear_mask                          0x7F


/*----------------------------------------------------------------------#
| CM1CON1                                                         0x112 |
#-----------------------------------------------------------------------#
| C1INTP | C1INTN | C1PCH2 | C1PCH1 | C1PCH0 | C1NCH2 | C1NCH1 | C1NCH0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define CM1CON1                                  0x0
#define CM1CON1_address                          0x112
#define CM1CON1_position                         0x0
#define CM1CON1_size                             0x8
#define CM1CON1_value_mask                       0xFF
#define CM1CON1_clear_mask                       0x0

#define C1NCH0                                   0x0
#define C1NCH0_address                           0x112
#define C1NCH0_position                          0x0
#define C1NCH0_size                              0x1
#define C1NCH0_value_mask                        0x1
#define C1NCH0_clear_mask                        0xFE

#define C1NCH                                    0x0
#define C1NCH_address                            0x112
#define C1NCH_position                           0x0
#define C1NCH_size                               0x3
#define C1NCH_value_mask                         0x7
#define C1NCH_clear_mask                         0xF8

#define C1NCH1                                   0x1
#define C1NCH1_address                           0x112
#define C1NCH1_position                          0x1
#define C1NCH1_size                              0x1
#define C1NCH1_value_mask                        0x2
#define C1NCH1_clear_mask                        0xFD

#define C1NCH2                                   0x2
#define C1NCH2_address                           0x112
#define C1NCH2_position                          0x2
#define C1NCH2_size                              0x1
#define C1NCH2_value_mask                        0x4
#define C1NCH2_clear_mask                        0xFB

#define C1PCH                                    0x3
#define C1PCH_address                            0x112
#define C1PCH_position                           0x3
#define C1PCH_size                               0x3
#define C1PCH_value_mask                         0x38
#define C1PCH_clear_mask                         0xC7

#define C1PCH0                                   0x3
#define C1PCH0_address                           0x112
#define C1PCH0_position                          0x3
#define C1PCH0_size                              0x1
#define C1PCH0_value_mask                        0x8
#define C1PCH0_clear_mask                        0xF7

#define C1PCH1                                   0x4
#define C1PCH1_address                           0x112
#define C1PCH1_position                          0x4
#define C1PCH1_size                              0x1
#define C1PCH1_value_mask                        0x10
#define C1PCH1_clear_mask                        0xEF

#define C1PCH2                                   0x5
#define C1PCH2_address                           0x112
#define C1PCH2_position                          0x5
#define C1PCH2_size                              0x1
#define C1PCH2_value_mask                        0x20
#define C1PCH2_clear_mask                        0xDF

#define C1INTN                                   0x6
#define C1INTN_address                           0x112
#define C1INTN_position                          0x6
#define C1INTN_size                              0x1
#define C1INTN_value_mask                        0x40
#define C1INTN_clear_mask                        0xBF

#define C1INTP                                   0x7
#define C1INTP_address                           0x112
#define C1INTP_position                          0x7
#define C1INTP_size                              0x1
#define C1INTP_value_mask                        0x80
#define C1INTP_clear_mask                        0x7F


/*------------------------------------------------------------#
| CM2CON0                                               0x113 |
#-------------------------------------------------------------#
| C2ON | C2OUT | C2OE | C2POL | C2ZLF | C2SP | C2HYS | C2SYNC |
#-------------------------------------------------------------#
| 7    | 6     | 5    | 4     | 3     | 2    | 1     | 0      |
#------------------------------------------------------------*/

#define CM2CON0                                  0x0
#define CM2CON0_address                          0x113
#define CM2CON0_position                         0x0
#define CM2CON0_size                             0x8
#define CM2CON0_value_mask                       0xFF
#define CM2CON0_clear_mask                       0x0

#define C2SYNC                                   0x0
#define C2SYNC_address                           0x113
#define C2SYNC_position                          0x0
#define C2SYNC_size                              0x1
#define C2SYNC_value_mask                        0x1
#define C2SYNC_clear_mask                        0xFE

#define C2HYS                                    0x1
#define C2HYS_address                            0x113
#define C2HYS_position                           0x1
#define C2HYS_size                               0x1
#define C2HYS_value_mask                         0x2
#define C2HYS_clear_mask                         0xFD

#define C2SP                                     0x2
#define C2SP_address                             0x113
#define C2SP_position                            0x2
#define C2SP_size                                0x1
#define C2SP_value_mask                          0x4
#define C2SP_clear_mask                          0xFB

#define C2ZLF                                    0x3
#define C2ZLF_address                            0x113
#define C2ZLF_position                           0x3
#define C2ZLF_size                               0x1
#define C2ZLF_value_mask                         0x8
#define C2ZLF_clear_mask                         0xF7

#define C2POL                                    0x4
#define C2POL_address                            0x113
#define C2POL_position                           0x4
#define C2POL_size                               0x1
#define C2POL_value_mask                         0x10
#define C2POL_clear_mask                         0xEF

#define C2OE                                     0x5
#define C2OE_address                             0x113
#define C2OE_position                            0x5
#define C2OE_size                                0x1
#define C2OE_value_mask                          0x20
#define C2OE_clear_mask                          0xDF

#define C2OUT                                    0x6
#define C2OUT_address                            0x113
#define C2OUT_position                           0x6
#define C2OUT_size                               0x1
#define C2OUT_value_mask                         0x40
#define C2OUT_clear_mask                         0xBF

#define C2ON                                     0x7
#define C2ON_address                             0x113
#define C2ON_position                            0x7
#define C2ON_size                                0x1
#define C2ON_value_mask                          0x80
#define C2ON_clear_mask                          0x7F


/*----------------------------------------------------------------------#
| CM2CON1                                                         0x114 |
#-----------------------------------------------------------------------#
| C2INTP | C2INTN | C2PCH2 | C2PCH1 | C2PCH0 | C2NCH2 | C2NCH1 | C2NCH0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define CM2CON1                                  0x0
#define CM2CON1_address                          0x114
#define CM2CON1_position                         0x0
#define CM2CON1_size                             0x8
#define CM2CON1_value_mask                       0xFF
#define CM2CON1_clear_mask                       0x0

#define C2NCH0                                   0x0
#define C2NCH0_address                           0x114
#define C2NCH0_position                          0x0
#define C2NCH0_size                              0x1
#define C2NCH0_value_mask                        0x1
#define C2NCH0_clear_mask                        0xFE

#define C2NCH                                    0x0
#define C2NCH_address                            0x114
#define C2NCH_position                           0x0
#define C2NCH_size                               0x3
#define C2NCH_value_mask                         0x7
#define C2NCH_clear_mask                         0xF8

#define C2NCH1                                   0x1
#define C2NCH1_address                           0x114
#define C2NCH1_position                          0x1
#define C2NCH1_size                              0x1
#define C2NCH1_value_mask                        0x2
#define C2NCH1_clear_mask                        0xFD

#define C2NCH2                                   0x2
#define C2NCH2_address                           0x114
#define C2NCH2_position                          0x2
#define C2NCH2_size                              0x1
#define C2NCH2_value_mask                        0x4
#define C2NCH2_clear_mask                        0xFB

#define C2PCH                                    0x3
#define C2PCH_address                            0x114
#define C2PCH_position                           0x3
#define C2PCH_size                               0x3
#define C2PCH_value_mask                         0x38
#define C2PCH_clear_mask                         0xC7

#define C2PCH0                                   0x3
#define C2PCH0_address                           0x114
#define C2PCH0_position                          0x3
#define C2PCH0_size                              0x1
#define C2PCH0_value_mask                        0x8
#define C2PCH0_clear_mask                        0xF7

#define C2PCH1                                   0x4
#define C2PCH1_address                           0x114
#define C2PCH1_position                          0x4
#define C2PCH1_size                              0x1
#define C2PCH1_value_mask                        0x10
#define C2PCH1_clear_mask                        0xEF

#define C2PCH2                                   0x5
#define C2PCH2_address                           0x114
#define C2PCH2_position                          0x5
#define C2PCH2_size                              0x1
#define C2PCH2_value_mask                        0x20
#define C2PCH2_clear_mask                        0xDF

#define C2INTN                                   0x6
#define C2INTN_address                           0x114
#define C2INTN_position                          0x6
#define C2INTN_size                              0x1
#define C2INTN_value_mask                        0x40
#define C2INTN_clear_mask                        0xBF

#define C2INTP                                   0x7
#define C2INTP_address                           0x114
#define C2INTP_position                          0x7
#define C2INTP_size                              0x1
#define C2INTP_value_mask                        0x80
#define C2INTP_clear_mask                        0x7F


/*--------------------------------------------------#
| CMOUT                                       0x115 |
#---------------------------------------------------#
| - | - | - | - | MC4OUT | MC3OUT | MC2OUT | MC1OUT |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define CMOUT                                    0x0
#define CMOUT_address                            0x115
#define CMOUT_position                           0x0
#define CMOUT_size                               0x8
#define CMOUT_value_mask                         0xFF
#define CMOUT_clear_mask                         0x0

#define MC1OUT                                   0x0
#define MC1OUT_address                           0x115
#define MC1OUT_position                          0x0
#define MC1OUT_size                              0x1
#define MC1OUT_value_mask                        0x1
#define MC1OUT_clear_mask                        0xFE

#define MC2OUT                                   0x1
#define MC2OUT_address                           0x115
#define MC2OUT_position                          0x1
#define MC2OUT_size                              0x1
#define MC2OUT_value_mask                        0x2
#define MC2OUT_clear_mask                        0xFD

#define MC3OUT                                   0x2
#define MC3OUT_address                           0x115
#define MC3OUT_position                          0x2
#define MC3OUT_size                              0x1
#define MC3OUT_value_mask                        0x4
#define MC3OUT_clear_mask                        0xFB

#define MC4OUT                                   0x3
#define MC4OUT_address                           0x115
#define MC4OUT_position                          0x3
#define MC4OUT_size                              0x1
#define MC4OUT_value_mask                        0x8
#define MC4OUT_clear_mask                        0xF7


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


/*--------------------------------------------------------------------#
| FVRCON                                                        0x117 |
#---------------------------------------------------------------------#
| FVREN | FVRRDY | TSEN | TSRNG | CDAFVR1 | CDAFVR0 | ADFVR1 | ADFVR0 |
#---------------------------------------------------------------------#
| 7     | 6      | 5    | 4     | 3       | 2       | 1      | 0      |
#--------------------------------------------------------------------*/

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

#define CDAFVR0                                  0x2
#define CDAFVR0_address                          0x117
#define CDAFVR0_position                         0x2
#define CDAFVR0_size                             0x1
#define CDAFVR0_value_mask                       0x4
#define CDAFVR0_clear_mask                       0xFB

#define CDAFVR                                   0x2
#define CDAFVR_address                           0x117
#define CDAFVR_position                          0x2
#define CDAFVR_size                              0x2
#define CDAFVR_value_mask                        0xC
#define CDAFVR_clear_mask                        0xF3

#define CDAFVR1                                  0x3
#define CDAFVR1_address                          0x117
#define CDAFVR1_position                         0x3
#define CDAFVR1_size                             0x1
#define CDAFVR1_value_mask                       0x8
#define CDAFVR1_clear_mask                       0xF7

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


/*---------------------------------------------------------------#
| DAC1CON0                                                 0x118 |
#----------------------------------------------------------------#
| DACEN | - | DAC1OE1 | DAC1OE2 | DACPSS1 | DACPSS0 | - | DACNSS |
#----------------------------------------------------------------#
| 7     | 6 | 5       | 4       | 3       | 2       | 1 | 0      |
#---------------------------------------------------------------*/

#define DAC1CON0                                 0x0
#define DAC1CON0_address                         0x118
#define DAC1CON0_position                        0x0
#define DAC1CON0_size                            0x8
#define DAC1CON0_value_mask                      0xFF
#define DAC1CON0_clear_mask                      0x0

#define DACNSS                                   0x0
#define DACNSS_address                           0x118
#define DACNSS_position                          0x0
#define DACNSS_size                              0x1
#define DACNSS_value_mask                        0x1
#define DACNSS_clear_mask                        0xFE

#define DAC1NSS                                  0x0
#define DAC1NSS_address                          0x118
#define DAC1NSS_position                         0x0
#define DAC1NSS_size                             0x1
#define DAC1NSS_value_mask                       0x1
#define DAC1NSS_clear_mask                       0xFE

#define DACPSS                                   0x2
#define DACPSS_address                           0x118
#define DACPSS_position                          0x2
#define DACPSS_size                              0x2
#define DACPSS_value_mask                        0xC
#define DACPSS_clear_mask                        0xF3

#define DACPSS0                                  0x2
#define DACPSS0_address                          0x118
#define DACPSS0_position                         0x2
#define DACPSS0_size                             0x1
#define DACPSS0_value_mask                       0x4
#define DACPSS0_clear_mask                       0xFB

#define DAC1PSS                                  0x2
#define DAC1PSS_address                          0x118
#define DAC1PSS_position                         0x2
#define DAC1PSS_size                             0x2
#define DAC1PSS_value_mask                       0xC
#define DAC1PSS_clear_mask                       0xF3

#define DAC1PSS0                                 0x2
#define DAC1PSS0_address                         0x118
#define DAC1PSS0_position                        0x2
#define DAC1PSS0_size                            0x1
#define DAC1PSS0_value_mask                      0x4
#define DAC1PSS0_clear_mask                      0xFB

#define DACPSS1                                  0x3
#define DACPSS1_address                          0x118
#define DACPSS1_position                         0x3
#define DACPSS1_size                             0x1
#define DACPSS1_value_mask                       0x8
#define DACPSS1_clear_mask                       0xF7

#define DAC1PSS1                                 0x3
#define DAC1PSS1_address                         0x118
#define DAC1PSS1_position                        0x3
#define DAC1PSS1_size                            0x1
#define DAC1PSS1_value_mask                      0x8
#define DAC1PSS1_clear_mask                      0xF7

#define DACOE0                                   0x4
#define DACOE0_address                           0x118
#define DACOE0_position                          0x4
#define DACOE0_size                              0x1
#define DACOE0_value_mask                        0x10
#define DACOE0_clear_mask                        0xEF

#define DAC1OE2                                  0x4
#define DAC1OE2_address                          0x118
#define DAC1OE2_position                         0x4
#define DAC1OE2_size                             0x1
#define DAC1OE2_value_mask                       0x10
#define DAC1OE2_clear_mask                       0xEF

#define DAC1OE1                                  0x5
#define DAC1OE1_address                          0x118
#define DAC1OE1_position                         0x5
#define DAC1OE1_size                             0x1
#define DAC1OE1_value_mask                       0x20
#define DAC1OE1_clear_mask                       0xDF

#define DACOE1                                   0x5
#define DACOE1_address                           0x118
#define DACOE1_position                          0x5
#define DACOE1_size                              0x1
#define DACOE1_value_mask                        0x20
#define DACOE1_clear_mask                        0xDF

#define DACEN                                    0x7
#define DACEN_address                            0x118
#define DACEN_position                           0x7
#define DACEN_size                               0x1
#define DACEN_value_mask                         0x80
#define DACEN_clear_mask                         0x7F

#define DAC1EN                                   0x7
#define DAC1EN_address                           0x118
#define DAC1EN_position                          0x7
#define DAC1EN_size                              0x1
#define DAC1EN_value_mask                        0x80
#define DAC1EN_clear_mask                        0x7F


/*--------------------------------------------------------------#
| DAC1CON1                                                0x119 |
#---------------------------------------------------------------#
| DACR7 | DACR6 | DACR5 | DACR4 | DACR3 | DACR2 | DACR1 | DACR0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define DAC1CON1                                 0x0
#define DAC1CON1_address                         0x119
#define DAC1CON1_position                        0x0
#define DAC1CON1_size                            0x8
#define DAC1CON1_value_mask                      0xFF
#define DAC1CON1_clear_mask                      0x0

#define DAC1R                                    0x0
#define DAC1R_address                            0x119
#define DAC1R_position                           0x0
#define DAC1R_size                               0x8
#define DAC1R_value_mask                         0xFF
#define DAC1R_clear_mask                         0x0

#define DACR0                                    0x0
#define DACR0_address                            0x119
#define DACR0_position                           0x0
#define DACR0_size                               0x1
#define DACR0_value_mask                         0x1
#define DACR0_clear_mask                         0xFE

#define DAC1R0                                   0x0
#define DAC1R0_address                           0x119
#define DAC1R0_position                          0x0
#define DAC1R0_size                              0x1
#define DAC1R0_value_mask                        0x1
#define DAC1R0_clear_mask                        0xFE

#define DACR1                                    0x1
#define DACR1_address                            0x119
#define DACR1_position                           0x1
#define DACR1_size                               0x1
#define DACR1_value_mask                         0x2
#define DACR1_clear_mask                         0xFD

#define DAC1R1                                   0x1
#define DAC1R1_address                           0x119
#define DAC1R1_position                          0x1
#define DAC1R1_size                              0x1
#define DAC1R1_value_mask                        0x2
#define DAC1R1_clear_mask                        0xFD

#define DACR2                                    0x2
#define DACR2_address                            0x119
#define DACR2_position                           0x2
#define DACR2_size                               0x1
#define DACR2_value_mask                         0x4
#define DACR2_clear_mask                         0xFB

#define DAC1R2                                   0x2
#define DAC1R2_address                           0x119
#define DAC1R2_position                          0x2
#define DAC1R2_size                              0x1
#define DAC1R2_value_mask                        0x4
#define DAC1R2_clear_mask                        0xFB

#define DACR3                                    0x3
#define DACR3_address                            0x119
#define DACR3_position                           0x3
#define DACR3_size                               0x1
#define DACR3_value_mask                         0x8
#define DACR3_clear_mask                         0xF7

#define DAC1R3                                   0x3
#define DAC1R3_address                           0x119
#define DAC1R3_position                          0x3
#define DAC1R3_size                              0x1
#define DAC1R3_value_mask                        0x8
#define DAC1R3_clear_mask                        0xF7

#define DACR4                                    0x4
#define DACR4_address                            0x119
#define DACR4_position                           0x4
#define DACR4_size                               0x1
#define DACR4_value_mask                         0x10
#define DACR4_clear_mask                         0xEF

#define DAC1R4                                   0x4
#define DAC1R4_address                           0x119
#define DAC1R4_position                          0x4
#define DAC1R4_size                              0x1
#define DAC1R4_value_mask                        0x10
#define DAC1R4_clear_mask                        0xEF

#define DACR5                                    0x5
#define DACR5_address                            0x119
#define DACR5_position                           0x5
#define DACR5_size                               0x1
#define DACR5_value_mask                         0x20
#define DACR5_clear_mask                         0xDF

#define DAC1R5                                   0x5
#define DAC1R5_address                           0x119
#define DAC1R5_position                          0x5
#define DAC1R5_size                              0x1
#define DAC1R5_value_mask                        0x20
#define DAC1R5_clear_mask                        0xDF

#define DACR6                                    0x6
#define DACR6_address                            0x119
#define DACR6_position                           0x6
#define DACR6_size                               0x1
#define DACR6_value_mask                         0x40
#define DACR6_clear_mask                         0xBF

#define DAC1R6                                   0x6
#define DAC1R6_address                           0x119
#define DAC1R6_position                          0x6
#define DAC1R6_size                              0x1
#define DAC1R6_value_mask                        0x40
#define DAC1R6_clear_mask                        0xBF

#define DACR7                                    0x7
#define DACR7_address                            0x119
#define DACR7_position                           0x7
#define DACR7_size                               0x1
#define DACR7_value_mask                         0x80
#define DACR7_clear_mask                         0x7F

#define DAC1R7                                   0x7
#define DAC1R7_address                           0x119
#define DAC1R7_position                          0x7
#define DAC1R7_size                              0x1
#define DAC1R7_value_mask                        0x80
#define DAC1R7_clear_mask                        0x7F


/*------------------------------------------------------------#
| CM4CON0                                               0x11A |
#-------------------------------------------------------------#
| C4ON | C4OUT | C4OE | C4POL | C4ZLF | C4SP | C4HYS | C4SYNC |
#-------------------------------------------------------------#
| 7    | 6     | 5    | 4     | 3     | 2    | 1     | 0      |
#------------------------------------------------------------*/

#define CM4CON0                                  0x0
#define CM4CON0_address                          0x11A
#define CM4CON0_position                         0x0
#define CM4CON0_size                             0x8
#define CM4CON0_value_mask                       0xFF
#define CM4CON0_clear_mask                       0x0

#define C4SYNC                                   0x0
#define C4SYNC_address                           0x11A
#define C4SYNC_position                          0x0
#define C4SYNC_size                              0x1
#define C4SYNC_value_mask                        0x1
#define C4SYNC_clear_mask                        0xFE

#define C4HYS                                    0x1
#define C4HYS_address                            0x11A
#define C4HYS_position                           0x1
#define C4HYS_size                               0x1
#define C4HYS_value_mask                         0x2
#define C4HYS_clear_mask                         0xFD

#define C4SP                                     0x2
#define C4SP_address                             0x11A
#define C4SP_position                            0x2
#define C4SP_size                                0x1
#define C4SP_value_mask                          0x4
#define C4SP_clear_mask                          0xFB

#define C4ZLF                                    0x3
#define C4ZLF_address                            0x11A
#define C4ZLF_position                           0x3
#define C4ZLF_size                               0x1
#define C4ZLF_value_mask                         0x8
#define C4ZLF_clear_mask                         0xF7

#define C4POL                                    0x4
#define C4POL_address                            0x11A
#define C4POL_position                           0x4
#define C4POL_size                               0x1
#define C4POL_value_mask                         0x10
#define C4POL_clear_mask                         0xEF

#define C4OE                                     0x5
#define C4OE_address                             0x11A
#define C4OE_position                            0x5
#define C4OE_size                                0x1
#define C4OE_value_mask                          0x20
#define C4OE_clear_mask                          0xDF

#define C4OUT                                    0x6
#define C4OUT_address                            0x11A
#define C4OUT_position                           0x6
#define C4OUT_size                               0x1
#define C4OUT_value_mask                         0x40
#define C4OUT_clear_mask                         0xBF

#define C4ON                                     0x7
#define C4ON_address                             0x11A
#define C4ON_position                            0x7
#define C4ON_size                                0x1
#define C4ON_value_mask                          0x80
#define C4ON_clear_mask                          0x7F


/*----------------------------------------------------------------------#
| CM4CON1                                                         0x11B |
#-----------------------------------------------------------------------#
| C4INTP | C4INTN | C4PCH2 | C4PCH1 | C4PCH0 | C4NCH2 | C4NCH1 | C4NCH0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define CM4CON1                                  0x0
#define CM4CON1_address                          0x11B
#define CM4CON1_position                         0x0
#define CM4CON1_size                             0x8
#define CM4CON1_value_mask                       0xFF
#define CM4CON1_clear_mask                       0x0

#define C4NCH0                                   0x0
#define C4NCH0_address                           0x11B
#define C4NCH0_position                          0x0
#define C4NCH0_size                              0x1
#define C4NCH0_value_mask                        0x1
#define C4NCH0_clear_mask                        0xFE

#define C4NCH                                    0x0
#define C4NCH_address                            0x11B
#define C4NCH_position                           0x0
#define C4NCH_size                               0x3
#define C4NCH_value_mask                         0x7
#define C4NCH_clear_mask                         0xF8

#define C4NCH1                                   0x1
#define C4NCH1_address                           0x11B
#define C4NCH1_position                          0x1
#define C4NCH1_size                              0x1
#define C4NCH1_value_mask                        0x2
#define C4NCH1_clear_mask                        0xFD

#define C4NCH2                                   0x2
#define C4NCH2_address                           0x11B
#define C4NCH2_position                          0x2
#define C4NCH2_size                              0x1
#define C4NCH2_value_mask                        0x4
#define C4NCH2_clear_mask                        0xFB

#define C4PCH0                                   0x3
#define C4PCH0_address                           0x11B
#define C4PCH0_position                          0x3
#define C4PCH0_size                              0x1
#define C4PCH0_value_mask                        0x8
#define C4PCH0_clear_mask                        0xF7

#define C4PCH                                    0x3
#define C4PCH_address                            0x11B
#define C4PCH_position                           0x3
#define C4PCH_size                               0x3
#define C4PCH_value_mask                         0x38
#define C4PCH_clear_mask                         0xC7

#define C4PCH1                                   0x4
#define C4PCH1_address                           0x11B
#define C4PCH1_position                          0x4
#define C4PCH1_size                              0x1
#define C4PCH1_value_mask                        0x10
#define C4PCH1_clear_mask                        0xEF

#define C4PCH2                                   0x5
#define C4PCH2_address                           0x11B
#define C4PCH2_position                          0x5
#define C4PCH2_size                              0x1
#define C4PCH2_value_mask                        0x20
#define C4PCH2_clear_mask                        0xDF

#define C4INTN                                   0x6
#define C4INTN_address                           0x11B
#define C4INTN_position                          0x6
#define C4INTN_size                              0x1
#define C4INTN_value_mask                        0x40
#define C4INTN_clear_mask                        0xBF

#define C4INTP                                   0x7
#define C4INTP_address                           0x11B
#define C4INTP_position                          0x7
#define C4INTP_size                              0x1
#define C4INTP_value_mask                        0x80
#define C4INTP_clear_mask                        0x7F


/*------------------------------------#
| APFCON2                       0x11C |
#-------------------------------------#
| - | - | - | - | - | SSSEL | CCP3SEL |
#-------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0       |
#------------------------------------*/

#define APFCON2                                  0x0
#define APFCON2_address                          0x11C
#define APFCON2_position                         0x0
#define APFCON2_size                             0x8
#define APFCON2_value_mask                       0xFF
#define APFCON2_clear_mask                       0x0

#define CCP3SEL                                  0x0
#define CCP3SEL_address                          0x11C
#define CCP3SEL_position                         0x0
#define CCP3SEL_size                             0x1
#define CCP3SEL_value_mask                       0x1
#define CCP3SEL_clear_mask                       0xFE

#define SSSEL                                    0x1
#define SSSEL_address                            0x11C
#define SSSEL_position                           0x1
#define SSSEL_size                               0x2
#define SSSEL_value_mask                         0x6
#define SSSEL_clear_mask                         0xF9


/*------------------------------------------------------------------------#
| APFCON1                                                           0x11D |
#-------------------------------------------------------------------------#
| C2OUTSEL | CCP1SEL | SDOSEL | SCKSEL | SDISEL | TXSEL | RXSEL | CCP2SEL |
#-------------------------------------------------------------------------#
| 7        | 6       | 5      | 4      | 3      | 2     | 1     | 0       |
#------------------------------------------------------------------------*/

#define APFCON1                                  0x0
#define APFCON1_address                          0x11D
#define APFCON1_position                         0x0
#define APFCON1_size                             0x8
#define APFCON1_value_mask                       0xFF
#define APFCON1_clear_mask                       0x0

#define CCP2SEL                                  0x0
#define CCP2SEL_address                          0x11D
#define CCP2SEL_position                         0x0
#define CCP2SEL_size                             0x1
#define CCP2SEL_value_mask                       0x1
#define CCP2SEL_clear_mask                       0xFE

#define RXSEL                                    0x1
#define RXSEL_address                            0x11D
#define RXSEL_position                           0x1
#define RXSEL_size                               0x1
#define RXSEL_value_mask                         0x2
#define RXSEL_clear_mask                         0xFD

#define TXSEL                                    0x2
#define TXSEL_address                            0x11D
#define TXSEL_position                           0x2
#define TXSEL_size                               0x1
#define TXSEL_value_mask                         0x4
#define TXSEL_clear_mask                         0xFB

#define SDISEL                                   0x3
#define SDISEL_address                           0x11D
#define SDISEL_position                          0x3
#define SDISEL_size                              0x1
#define SDISEL_value_mask                        0x8
#define SDISEL_clear_mask                        0xF7

#define SCKSEL                                   0x4
#define SCKSEL_address                           0x11D
#define SCKSEL_position                          0x4
#define SCKSEL_size                              0x1
#define SCKSEL_value_mask                        0x10
#define SCKSEL_clear_mask                        0xEF

#define SDOSEL                                   0x5
#define SDOSEL_address                           0x11D
#define SDOSEL_position                          0x5
#define SDOSEL_size                              0x1
#define SDOSEL_value_mask                        0x20
#define SDOSEL_clear_mask                        0xDF

#define CCP1SEL                                  0x6
#define CCP1SEL_address                          0x11D
#define CCP1SEL_position                         0x6
#define CCP1SEL_size                             0x1
#define CCP1SEL_value_mask                       0x40
#define CCP1SEL_clear_mask                       0xBF

#define C2OUTSEL                                 0x7
#define C2OUTSEL_address                         0x11D
#define C2OUTSEL_position                        0x7
#define C2OUTSEL_size                            0x1
#define C2OUTSEL_value_mask                      0x80
#define C2OUTSEL_clear_mask                      0x7F


/*------------------------------------------------------------#
| CM3CON0                                               0x11E |
#-------------------------------------------------------------#
| C3ON | C3OUT | C3OE | C3POL | C3ZLF | C3SP | C3HYS | C3SYNC |
#-------------------------------------------------------------#
| 7    | 6     | 5    | 4     | 3     | 2    | 1     | 0      |
#------------------------------------------------------------*/

#define CM3CON0                                  0x0
#define CM3CON0_address                          0x11E
#define CM3CON0_position                         0x0
#define CM3CON0_size                             0x8
#define CM3CON0_value_mask                       0xFF
#define CM3CON0_clear_mask                       0x0

#define C3SYNC                                   0x0
#define C3SYNC_address                           0x11E
#define C3SYNC_position                          0x0
#define C3SYNC_size                              0x1
#define C3SYNC_value_mask                        0x1
#define C3SYNC_clear_mask                        0xFE

#define C3HYS                                    0x1
#define C3HYS_address                            0x11E
#define C3HYS_position                           0x1
#define C3HYS_size                               0x1
#define C3HYS_value_mask                         0x2
#define C3HYS_clear_mask                         0xFD

#define C3SP                                     0x2
#define C3SP_address                             0x11E
#define C3SP_position                            0x2
#define C3SP_size                                0x1
#define C3SP_value_mask                          0x4
#define C3SP_clear_mask                          0xFB

#define C3ZLF                                    0x3
#define C3ZLF_address                            0x11E
#define C3ZLF_position                           0x3
#define C3ZLF_size                               0x1
#define C3ZLF_value_mask                         0x8
#define C3ZLF_clear_mask                         0xF7

#define C3POL                                    0x4
#define C3POL_address                            0x11E
#define C3POL_position                           0x4
#define C3POL_size                               0x1
#define C3POL_value_mask                         0x10
#define C3POL_clear_mask                         0xEF

#define C3OE                                     0x5
#define C3OE_address                             0x11E
#define C3OE_position                            0x5
#define C3OE_size                                0x1
#define C3OE_value_mask                          0x20
#define C3OE_clear_mask                          0xDF

#define C3OUT                                    0x6
#define C3OUT_address                            0x11E
#define C3OUT_position                           0x6
#define C3OUT_size                               0x1
#define C3OUT_value_mask                         0x40
#define C3OUT_clear_mask                         0xBF

#define C3ON                                     0x7
#define C3ON_address                             0x11E
#define C3ON_position                            0x7
#define C3ON_size                                0x1
#define C3ON_value_mask                          0x80
#define C3ON_clear_mask                          0x7F


/*----------------------------------------------------------------------#
| CM3CON1                                                         0x11F |
#-----------------------------------------------------------------------#
| C3INTP | C3INTN | C3PCH2 | C3PCH1 | C3PCH0 | C3NCH2 | C3NCH1 | C3NCH0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define CM3CON1                                  0x0
#define CM3CON1_address                          0x11F
#define CM3CON1_position                         0x0
#define CM3CON1_size                             0x8
#define CM3CON1_value_mask                       0xFF
#define CM3CON1_clear_mask                       0x0

#define C3NCH                                    0x0
#define C3NCH_address                            0x11F
#define C3NCH_position                           0x0
#define C3NCH_size                               0x3
#define C3NCH_value_mask                         0x7
#define C3NCH_clear_mask                         0xF8

#define C3NCH0                                   0x0
#define C3NCH0_address                           0x11F
#define C3NCH0_position                          0x0
#define C3NCH0_size                              0x1
#define C3NCH0_value_mask                        0x1
#define C3NCH0_clear_mask                        0xFE

#define C3NCH1                                   0x1
#define C3NCH1_address                           0x11F
#define C3NCH1_position                          0x1
#define C3NCH1_size                              0x1
#define C3NCH1_value_mask                        0x2
#define C3NCH1_clear_mask                        0xFD

#define C3NCH2                                   0x2
#define C3NCH2_address                           0x11F
#define C3NCH2_position                          0x2
#define C3NCH2_size                              0x1
#define C3NCH2_value_mask                        0x4
#define C3NCH2_clear_mask                        0xFB

#define C3PCH                                    0x3
#define C3PCH_address                            0x11F
#define C3PCH_position                           0x3
#define C3PCH_size                               0x3
#define C3PCH_value_mask                         0x38
#define C3PCH_clear_mask                         0xC7

#define C3PCH0                                   0x3
#define C3PCH0_address                           0x11F
#define C3PCH0_position                          0x3
#define C3PCH0_size                              0x1
#define C3PCH0_value_mask                        0x8
#define C3PCH0_clear_mask                        0xF7

#define C3PCH1                                   0x4
#define C3PCH1_address                           0x11F
#define C3PCH1_position                          0x4
#define C3PCH1_size                              0x1
#define C3PCH1_value_mask                        0x10
#define C3PCH1_clear_mask                        0xEF

#define C3PCH2                                   0x5
#define C3PCH2_address                           0x11F
#define C3PCH2_position                          0x5
#define C3PCH2_size                              0x1
#define C3PCH2_value_mask                        0x20
#define C3PCH2_clear_mask                        0xDF

#define C3INTN                                   0x6
#define C3INTN_address                           0x11F
#define C3INTN_position                          0x6
#define C3INTN_size                              0x1
#define C3INTN_value_mask                        0x40
#define C3INTN_clear_mask                        0xBF

#define C3INTP                                   0x7
#define C3INTP_address                           0x11F
#define C3INTP_position                          0x7
#define C3INTP_size                              0x1
#define C3INTP_value_mask                        0x80
#define C3INTP_clear_mask                        0x7F


/*----------------------------------------------------------#
| ANSELA                                              0x18C |
#-----------------------------------------------------------#
| ANSA7 | - | ANSA5 | ANSA4 | ANSA3 | ANSA2 | ANSA1 | ANSA0 |
#-----------------------------------------------------------#
| 7     | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#----------------------------------------------------------*/

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

#define ANSA7                                    0x7
#define ANSA7_address                            0x18C
#define ANSA7_position                           0x7
#define ANSA7_size                               0x1
#define ANSA7_value_mask                         0x80
#define ANSA7_clear_mask                         0x7F


/*----------------------------------------------------------#
| ANSELB                                              0x18D |
#-----------------------------------------------------------#
| - | ANSB6 | ANSB5 | ANSB4 | ANSB3 | ANSB2 | ANSB1 | ANSB0 |
#-----------------------------------------------------------#
| 7 | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#----------------------------------------------------------*/

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

#define ANSB6                                    0x6
#define ANSB6_address                            0x18D
#define ANSB6_position                           0x6
#define ANSB6_size                               0x1
#define ANSB6_value_mask                         0x40
#define ANSB6_clear_mask                         0xBF


/*--------------------------------------------------------------#
| ANSELC                                                  0x18E |
#---------------------------------------------------------------#
| ANSC7 | ANSC6 | ANSC5 | ANSC4 | ANSC3 | ANSC2 | ANSC1 | ANSC0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define ANSELC                                   0x0
#define ANSELC_address                           0x18E
#define ANSELC_position                          0x0
#define ANSELC_size                              0x8
#define ANSELC_value_mask                        0xFF
#define ANSELC_clear_mask                        0x0

#define ANSC0                                    0x0
#define ANSC0_address                            0x18E
#define ANSC0_position                           0x0
#define ANSC0_size                               0x1
#define ANSC0_value_mask                         0x1
#define ANSC0_clear_mask                         0xFE

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


/*------------------------------#
| EEADRL                  0x191 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EEADRL                                   0x0
#define EEADRL_address                           0x191
#define EEADRL_position                          0x0
#define EEADRL_size                              0x8
#define EEADRL_value_mask                        0xFF
#define EEADRL_clear_mask                        0x0


/*------------------------------#
| EEADRH                  0x192 |
#-------------------------------#
| - | EEADRH                    |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EEADRH                                   0x0
#define EEADRH_address                           0x192
#define EEADRH_position                          0x0
#define EEADRH_size                              0x7
#define EEADRH_value_mask                        0x7F
#define EEADRH_clear_mask                        0x80


/*------------------------------#
| EEDATL                  0x193 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EEDATL                                   0x0
#define EEDATL_address                           0x193
#define EEDATL_position                          0x0
#define EEDATL_size                              0x8
#define EEDATL_value_mask                        0xFF
#define EEDATL_clear_mask                        0x0


/*------------------------------#
| EEDATH                  0x194 |
#-------------------------------#
| - | - | EEDATH                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EEDATH                                   0x0
#define EEDATH_address                           0x194
#define EEDATH_position                          0x0
#define EEDATH_size                              0x6
#define EEDATH_value_mask                        0x3F
#define EEDATH_clear_mask                        0xC0


/*----------------------------------------------------#
| EECON1                                        0x195 |
#-----------------------------------------------------#
| EEPGD | CFGS | LWLO | FREE | WRERR | WREN | WR | RD |
#-----------------------------------------------------#
| 7     | 6    | 5    | 4    | 3     | 2    | 1  | 0  |
#----------------------------------------------------*/

#define EECON1                                   0x0
#define EECON1_address                           0x195
#define EECON1_position                          0x0
#define EECON1_size                              0x8
#define EECON1_value_mask                        0xFF
#define EECON1_clear_mask                        0x0

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

#define EEPGD                                    0x7
#define EEPGD_address                            0x195
#define EEPGD_position                           0x7
#define EEPGD_size                               0x1
#define EEPGD_value_mask                         0x80
#define EEPGD_clear_mask                         0x7F


/*------------------------------#
| EECON2                  0x196 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EECON2                                   0x0
#define EECON2_address                           0x196
#define EECON2_position                          0x0
#define EECON2_size                              0x8
#define EECON2_value_mask                        0xFF
#define EECON2_clear_mask                        0x0


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


/*------------------------------------------------------#
| RC1STA                                          0x19D |
#-------------------------------------------------------#
| SPEN | RX9 | SREN | CREN | ADDEN | FERR | OERR | RX9D |
#-------------------------------------------------------#
| 7    | 6   | 5    | 4    | 3     | 2    | 1    | 0    |
#------------------------------------------------------*/

#define RC1STA                                   0x0
#define RC1STA_address                           0x19D
#define RC1STA_position                          0x0
#define RC1STA_size                              0x8
#define RC1STA_value_mask                        0xFF
#define RC1STA_clear_mask                        0x0

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
| TX1STA                                          0x19E |
#-------------------------------------------------------#
| CSRC | TX9 | TXEN | SYNC | SENDB | BRGH | TRMT | TX9D |
#-------------------------------------------------------#
| 7    | 6   | 5    | 4    | 3     | 2    | 1    | 0    |
#------------------------------------------------------*/

#define TX1STA                                   0x0
#define TX1STA_address                           0x19E
#define TX1STA_position                          0x0
#define TX1STA_size                              0x8
#define TX1STA_value_mask                        0xFF
#define TX1STA_clear_mask                        0x0

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
| BAUD1CON                                      0x19F |
#-----------------------------------------------------#
| ABDOVF | RCIDL | - | SCKP | BRG16 | - | WUE | ABDEN |
#-----------------------------------------------------#
| 7      | 6     | 5 | 4    | 3     | 2 | 1   | 0     |
#----------------------------------------------------*/

#define BAUD1CON                                 0x0
#define BAUD1CON_address                         0x19F
#define BAUD1CON_position                        0x0
#define BAUD1CON_size                            0x8
#define BAUD1CON_value_mask                      0xFF
#define BAUD1CON_clear_mask                      0x0

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
| WPUA                                                    0x20C |
#---------------------------------------------------------------#
| WPUA7 | WPUA6 | WPUA5 | WPUA4 | WPUA3 | WPUA2 | WPUA1 | WPUA0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define WPUA0                                    0x0
#define WPUA0_address                            0x20C
#define WPUA0_position                           0x0
#define WPUA0_size                               0x1
#define WPUA0_value_mask                         0x1
#define WPUA0_clear_mask                         0xFE

#define WPUA                                     0x0
#define WPUA_address                             0x20C
#define WPUA_position                            0x0
#define WPUA_size                                0x8
#define WPUA_value_mask                          0xFF
#define WPUA_clear_mask                          0x0

#define WPUA1                                    0x1
#define WPUA1_address                            0x20C
#define WPUA1_position                           0x1
#define WPUA1_size                               0x1
#define WPUA1_value_mask                         0x2
#define WPUA1_clear_mask                         0xFD

#define WPUA2                                    0x2
#define WPUA2_address                            0x20C
#define WPUA2_position                           0x2
#define WPUA2_size                               0x1
#define WPUA2_value_mask                         0x4
#define WPUA2_clear_mask                         0xFB

#define WPUA3                                    0x3
#define WPUA3_address                            0x20C
#define WPUA3_position                           0x3
#define WPUA3_size                               0x1
#define WPUA3_value_mask                         0x8
#define WPUA3_clear_mask                         0xF7

#define WPUA4                                    0x4
#define WPUA4_address                            0x20C
#define WPUA4_position                           0x4
#define WPUA4_size                               0x1
#define WPUA4_value_mask                         0x10
#define WPUA4_clear_mask                         0xEF

#define WPUA5                                    0x5
#define WPUA5_address                            0x20C
#define WPUA5_position                           0x5
#define WPUA5_size                               0x1
#define WPUA5_value_mask                         0x20
#define WPUA5_clear_mask                         0xDF

#define WPUA6                                    0x6
#define WPUA6_address                            0x20C
#define WPUA6_position                           0x6
#define WPUA6_size                               0x1
#define WPUA6_value_mask                         0x40
#define WPUA6_clear_mask                         0xBF

#define WPUA7                                    0x7
#define WPUA7_address                            0x20C
#define WPUA7_position                           0x7
#define WPUA7_size                               0x1
#define WPUA7_value_mask                         0x80
#define WPUA7_clear_mask                         0x7F


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
| WPUC                                                    0x20E |
#---------------------------------------------------------------#
| WPUC7 | WPUC6 | WPUC5 | WPUC4 | WPUC3 | WPUC2 | WPUC1 | WPUC0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define WPUC0                                    0x0
#define WPUC0_address                            0x20E
#define WPUC0_position                           0x0
#define WPUC0_size                               0x1
#define WPUC0_value_mask                         0x1
#define WPUC0_clear_mask                         0xFE

#define WPUC                                     0x0
#define WPUC_address                             0x20E
#define WPUC_position                            0x0
#define WPUC_size                                0x8
#define WPUC_value_mask                          0xFF
#define WPUC_clear_mask                          0x0

#define WPUC1                                    0x1
#define WPUC1_address                            0x20E
#define WPUC1_position                           0x1
#define WPUC1_size                               0x1
#define WPUC1_value_mask                         0x2
#define WPUC1_clear_mask                         0xFD

#define WPUC2                                    0x2
#define WPUC2_address                            0x20E
#define WPUC2_position                           0x2
#define WPUC2_size                               0x1
#define WPUC2_value_mask                         0x4
#define WPUC2_clear_mask                         0xFB

#define WPUC3                                    0x3
#define WPUC3_address                            0x20E
#define WPUC3_position                           0x3
#define WPUC3_size                               0x1
#define WPUC3_value_mask                         0x8
#define WPUC3_clear_mask                         0xF7

#define WPUC4                                    0x4
#define WPUC4_address                            0x20E
#define WPUC4_position                           0x4
#define WPUC4_size                               0x1
#define WPUC4_value_mask                         0x10
#define WPUC4_clear_mask                         0xEF

#define WPUC5                                    0x5
#define WPUC5_address                            0x20E
#define WPUC5_position                           0x5
#define WPUC5_size                               0x1
#define WPUC5_value_mask                         0x20
#define WPUC5_clear_mask                         0xDF

#define WPUC6                                    0x6
#define WPUC6_address                            0x20E
#define WPUC6_position                           0x6
#define WPUC6_size                               0x1
#define WPUC6_value_mask                         0x40
#define WPUC6_clear_mask                         0xBF

#define WPUC7                                    0x7
#define WPUC7_address                            0x20E
#define WPUC7_position                           0x7
#define WPUC7_size                               0x1
#define WPUC7_value_mask                         0x80
#define WPUC7_clear_mask                         0x7F


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


/*------------------------------------------------------#
| SSP1BUF                                         0x211 |
#-------------------------------------------------------#
| BUF7 | BUF6 | BUF5 | BUF4 | BUF3 | BUF2 | BUF1 | BUF0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define SSP1BUF                                  0x0
#define SSP1BUF_address                          0x211
#define SSP1BUF_position                         0x0
#define SSP1BUF_size                             0x8
#define SSP1BUF_value_mask                       0xFF
#define SSP1BUF_clear_mask                       0x0

#define BUF                                      0x0
#define BUF_address                              0x211
#define BUF_position                             0x0
#define BUF_size                                 0x8
#define BUF_value_mask                           0xFF
#define BUF_clear_mask                           0x0

#define BUF0                                     0x0
#define BUF0_address                             0x211
#define BUF0_position                            0x0
#define BUF0_size                                0x1
#define BUF0_value_mask                          0x1
#define BUF0_clear_mask                          0xFE

#define SSP1BUF0                                 0x0
#define SSP1BUF0_address                         0x211
#define SSP1BUF0_position                        0x0
#define SSP1BUF0_size                            0x1
#define SSP1BUF0_value_mask                      0x1
#define SSP1BUF0_clear_mask                      0xFE

#define BUF1                                     0x1
#define BUF1_address                             0x211
#define BUF1_position                            0x1
#define BUF1_size                                0x1
#define BUF1_value_mask                          0x2
#define BUF1_clear_mask                          0xFD

#define SSP1BUF1                                 0x1
#define SSP1BUF1_address                         0x211
#define SSP1BUF1_position                        0x1
#define SSP1BUF1_size                            0x1
#define SSP1BUF1_value_mask                      0x2
#define SSP1BUF1_clear_mask                      0xFD

#define BUF2                                     0x2
#define BUF2_address                             0x211
#define BUF2_position                            0x2
#define BUF2_size                                0x1
#define BUF2_value_mask                          0x4
#define BUF2_clear_mask                          0xFB

#define SSP1BUF2                                 0x2
#define SSP1BUF2_address                         0x211
#define SSP1BUF2_position                        0x2
#define SSP1BUF2_size                            0x1
#define SSP1BUF2_value_mask                      0x4
#define SSP1BUF2_clear_mask                      0xFB

#define BUF3                                     0x3
#define BUF3_address                             0x211
#define BUF3_position                            0x3
#define BUF3_size                                0x1
#define BUF3_value_mask                          0x8
#define BUF3_clear_mask                          0xF7

#define SSP1BUF3                                 0x3
#define SSP1BUF3_address                         0x211
#define SSP1BUF3_position                        0x3
#define SSP1BUF3_size                            0x1
#define SSP1BUF3_value_mask                      0x8
#define SSP1BUF3_clear_mask                      0xF7

#define BUF4                                     0x4
#define BUF4_address                             0x211
#define BUF4_position                            0x4
#define BUF4_size                                0x1
#define BUF4_value_mask                          0x10
#define BUF4_clear_mask                          0xEF

#define SSP1BUF4                                 0x4
#define SSP1BUF4_address                         0x211
#define SSP1BUF4_position                        0x4
#define SSP1BUF4_size                            0x1
#define SSP1BUF4_value_mask                      0x10
#define SSP1BUF4_clear_mask                      0xEF

#define BUF5                                     0x5
#define BUF5_address                             0x211
#define BUF5_position                            0x5
#define BUF5_size                                0x1
#define BUF5_value_mask                          0x20
#define BUF5_clear_mask                          0xDF

#define SSP1BUF5                                 0x5
#define SSP1BUF5_address                         0x211
#define SSP1BUF5_position                        0x5
#define SSP1BUF5_size                            0x1
#define SSP1BUF5_value_mask                      0x20
#define SSP1BUF5_clear_mask                      0xDF

#define BUF6                                     0x6
#define BUF6_address                             0x211
#define BUF6_position                            0x6
#define BUF6_size                                0x1
#define BUF6_value_mask                          0x40
#define BUF6_clear_mask                          0xBF

#define SSP1BUF6                                 0x6
#define SSP1BUF6_address                         0x211
#define SSP1BUF6_position                        0x6
#define SSP1BUF6_size                            0x1
#define SSP1BUF6_value_mask                      0x40
#define SSP1BUF6_clear_mask                      0xBF

#define BUF7                                     0x7
#define BUF7_address                             0x211
#define BUF7_position                            0x7
#define BUF7_size                                0x1
#define BUF7_value_mask                          0x80
#define BUF7_clear_mask                          0x7F

#define SSP1BUF7                                 0x7
#define SSP1BUF7_address                         0x211
#define SSP1BUF7_position                        0x7
#define SSP1BUF7_size                            0x1
#define SSP1BUF7_value_mask                      0x80
#define SSP1BUF7_clear_mask                      0x7F


/*------------------------------------------------------#
| SSP1ADD                                         0x212 |
#-------------------------------------------------------#
| ADD7 | ADD6 | ADD5 | ADD4 | ADD3 | ADD2 | ADD1 | ADD0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define ADD0                                     0x0
#define ADD0_address                             0x212
#define ADD0_position                            0x0
#define ADD0_size                                0x1
#define ADD0_value_mask                          0x1
#define ADD0_clear_mask                          0xFE

#define ADD                                      0x0
#define ADD_address                              0x212
#define ADD_position                             0x0
#define ADD_size                                 0x8
#define ADD_value_mask                           0xFF
#define ADD_clear_mask                           0x0

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

#define ADD1                                     0x1
#define ADD1_address                             0x212
#define ADD1_position                            0x1
#define ADD1_size                                0x1
#define ADD1_value_mask                          0x2
#define ADD1_clear_mask                          0xFD

#define SSP1ADD1                                 0x1
#define SSP1ADD1_address                         0x212
#define SSP1ADD1_position                        0x1
#define SSP1ADD1_size                            0x1
#define SSP1ADD1_value_mask                      0x2
#define SSP1ADD1_clear_mask                      0xFD

#define ADD2                                     0x2
#define ADD2_address                             0x212
#define ADD2_position                            0x2
#define ADD2_size                                0x1
#define ADD2_value_mask                          0x4
#define ADD2_clear_mask                          0xFB

#define SSP1ADD2                                 0x2
#define SSP1ADD2_address                         0x212
#define SSP1ADD2_position                        0x2
#define SSP1ADD2_size                            0x1
#define SSP1ADD2_value_mask                      0x4
#define SSP1ADD2_clear_mask                      0xFB

#define ADD3                                     0x3
#define ADD3_address                             0x212
#define ADD3_position                            0x3
#define ADD3_size                                0x1
#define ADD3_value_mask                          0x8
#define ADD3_clear_mask                          0xF7

#define SSP1ADD3                                 0x3
#define SSP1ADD3_address                         0x212
#define SSP1ADD3_position                        0x3
#define SSP1ADD3_size                            0x1
#define SSP1ADD3_value_mask                      0x8
#define SSP1ADD3_clear_mask                      0xF7

#define ADD4                                     0x4
#define ADD4_address                             0x212
#define ADD4_position                            0x4
#define ADD4_size                                0x1
#define ADD4_value_mask                          0x10
#define ADD4_clear_mask                          0xEF

#define SSP1ADD4                                 0x4
#define SSP1ADD4_address                         0x212
#define SSP1ADD4_position                        0x4
#define SSP1ADD4_size                            0x1
#define SSP1ADD4_value_mask                      0x10
#define SSP1ADD4_clear_mask                      0xEF

#define ADD5                                     0x5
#define ADD5_address                             0x212
#define ADD5_position                            0x5
#define ADD5_size                                0x1
#define ADD5_value_mask                          0x20
#define ADD5_clear_mask                          0xDF

#define SSP1ADD5                                 0x5
#define SSP1ADD5_address                         0x212
#define SSP1ADD5_position                        0x5
#define SSP1ADD5_size                            0x1
#define SSP1ADD5_value_mask                      0x20
#define SSP1ADD5_clear_mask                      0xDF

#define ADD6                                     0x6
#define ADD6_address                             0x212
#define ADD6_position                            0x6
#define ADD6_size                                0x1
#define ADD6_value_mask                          0x40
#define ADD6_clear_mask                          0xBF

#define SSP1ADD6                                 0x6
#define SSP1ADD6_address                         0x212
#define SSP1ADD6_position                        0x6
#define SSP1ADD6_size                            0x1
#define SSP1ADD6_value_mask                      0x40
#define SSP1ADD6_clear_mask                      0xBF

#define ADD7                                     0x7
#define ADD7_address                             0x212
#define ADD7_position                            0x7
#define ADD7_size                                0x1
#define ADD7_value_mask                          0x80
#define ADD7_clear_mask                          0x7F

#define SSP1ADD7                                 0x7
#define SSP1ADD7_address                         0x212
#define SSP1ADD7_position                        0x7
#define SSP1ADD7_size                            0x1
#define SSP1ADD7_value_mask                      0x80
#define SSP1ADD7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| SSP1MSK                                                                         0x213 |
#---------------------------------------------------------------------------------------#
| SSP1MSK7 | SSP1MSK6 | SSP1MSK5 | SSP1MSK4 | SSP1MSK3 | SSP1MSK2 | SSP1MSK1 | SSP1MSK0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define SSP1MSK0                                 0x0
#define SSP1MSK0_address                         0x213
#define SSP1MSK0_position                        0x0
#define SSP1MSK0_size                            0x1
#define SSP1MSK0_value_mask                      0x1
#define SSP1MSK0_clear_mask                      0xFE

#define SSP1MSK                                  0x0
#define SSP1MSK_address                          0x213
#define SSP1MSK_position                         0x0
#define SSP1MSK_size                             0x8
#define SSP1MSK_value_mask                       0xFF
#define SSP1MSK_clear_mask                       0x0

#define MSK0                                     0x0
#define MSK0_address                             0x213
#define MSK0_position                            0x0
#define MSK0_size                                0x1
#define MSK0_value_mask                          0x1
#define MSK0_clear_mask                          0xFE

#define MSK                                      0x0
#define MSK_address                              0x213
#define MSK_position                             0x0
#define MSK_size                                 0x8
#define MSK_value_mask                           0xFF
#define MSK_clear_mask                           0x0

#define SSP1MSK1                                 0x1
#define SSP1MSK1_address                         0x213
#define SSP1MSK1_position                        0x1
#define SSP1MSK1_size                            0x1
#define SSP1MSK1_value_mask                      0x2
#define SSP1MSK1_clear_mask                      0xFD

#define MSK1                                     0x1
#define MSK1_address                             0x213
#define MSK1_position                            0x1
#define MSK1_size                                0x1
#define MSK1_value_mask                          0x2
#define MSK1_clear_mask                          0xFD

#define SSP1MSK2                                 0x2
#define SSP1MSK2_address                         0x213
#define SSP1MSK2_position                        0x2
#define SSP1MSK2_size                            0x1
#define SSP1MSK2_value_mask                      0x4
#define SSP1MSK2_clear_mask                      0xFB

#define MSK2                                     0x2
#define MSK2_address                             0x213
#define MSK2_position                            0x2
#define MSK2_size                                0x1
#define MSK2_value_mask                          0x4
#define MSK2_clear_mask                          0xFB

#define SSP1MSK3                                 0x3
#define SSP1MSK3_address                         0x213
#define SSP1MSK3_position                        0x3
#define SSP1MSK3_size                            0x1
#define SSP1MSK3_value_mask                      0x8
#define SSP1MSK3_clear_mask                      0xF7

#define MSK3                                     0x3
#define MSK3_address                             0x213
#define MSK3_position                            0x3
#define MSK3_size                                0x1
#define MSK3_value_mask                          0x8
#define MSK3_clear_mask                          0xF7

#define SSP1MSK4                                 0x4
#define SSP1MSK4_address                         0x213
#define SSP1MSK4_position                        0x4
#define SSP1MSK4_size                            0x1
#define SSP1MSK4_value_mask                      0x10
#define SSP1MSK4_clear_mask                      0xEF

#define MSK4                                     0x4
#define MSK4_address                             0x213
#define MSK4_position                            0x4
#define MSK4_size                                0x1
#define MSK4_value_mask                          0x10
#define MSK4_clear_mask                          0xEF

#define SSP1MSK5                                 0x5
#define SSP1MSK5_address                         0x213
#define SSP1MSK5_position                        0x5
#define SSP1MSK5_size                            0x1
#define SSP1MSK5_value_mask                      0x20
#define SSP1MSK5_clear_mask                      0xDF

#define MSK5                                     0x5
#define MSK5_address                             0x213
#define MSK5_position                            0x5
#define MSK5_size                                0x1
#define MSK5_value_mask                          0x20
#define MSK5_clear_mask                          0xDF

#define SSP1MSK6                                 0x6
#define SSP1MSK6_address                         0x213
#define SSP1MSK6_position                        0x6
#define SSP1MSK6_size                            0x1
#define SSP1MSK6_value_mask                      0x40
#define SSP1MSK6_clear_mask                      0xBF

#define MSK6                                     0x6
#define MSK6_address                             0x213
#define MSK6_position                            0x6
#define MSK6_size                                0x1
#define MSK6_value_mask                          0x40
#define MSK6_clear_mask                          0xBF

#define SSP1MSK7                                 0x7
#define SSP1MSK7_address                         0x213
#define SSP1MSK7_position                        0x7
#define SSP1MSK7_size                            0x1
#define SSP1MSK7_value_mask                      0x80
#define SSP1MSK7_clear_mask                      0x7F

#define MSK7                                     0x7
#define MSK7_address                             0x213
#define MSK7_position                            0x7
#define MSK7_size                                0x1
#define MSK7_value_mask                          0x80
#define MSK7_clear_mask                          0x7F


/*------------------------------------------#
| SSP1STAT                            0x214 |
#-------------------------------------------#
| SMP | CKE | D_nA | P | S | R_nW | UA | BF |
#-------------------------------------------#
| 7   | 6   | 5    | 4 | 3 | 2    | 1  | 0  |
#------------------------------------------*/

#define SSP1STAT                                 0x0
#define SSP1STAT_address                         0x214
#define SSP1STAT_position                        0x0
#define SSP1STAT_size                            0x8
#define SSP1STAT_value_mask                      0xFF
#define SSP1STAT_clear_mask                      0x0

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
| SSP1CON1                                             0x215 |
#------------------------------------------------------------#
| WCOL | SSPOV | SSPEN | CKP | SSPM3 | SSPM2 | SSPM1 | SSPM0 |
#------------------------------------------------------------#
| 7    | 6     | 5     | 4   | 3     | 2     | 1     | 0     |
#-----------------------------------------------------------*/

#define SSP1CON1                                 0x0
#define SSP1CON1_address                         0x215
#define SSP1CON1_position                        0x0
#define SSP1CON1_size                            0x8
#define SSP1CON1_value_mask                      0xFF
#define SSP1CON1_clear_mask                      0x0

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
| SSP1CON2                                           0x216 |
#----------------------------------------------------------#
| GCEN | ACKSTAT | ACKDT | ACKEN | RCEN | PEN | RSEN | SEN |
#----------------------------------------------------------#
| 7    | 6       | 5     | 4     | 3    | 2   | 1    | 0   |
#---------------------------------------------------------*/

#define SSP1CON2                                 0x0
#define SSP1CON2_address                         0x216
#define SSP1CON2_position                        0x0
#define SSP1CON2_size                            0x8
#define SSP1CON2_value_mask                      0xFF
#define SSP1CON2_clear_mask                      0x0

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
| SSP1CON3                                            0x217 |
#-----------------------------------------------------------#
| ACKTIM | PCIE | SCIE | BOEN | SDAHT | SBCDE | AHEN | DHEN |
#-----------------------------------------------------------#
| 7      | 6    | 5    | 4    | 3     | 2     | 1    | 0    |
#----------------------------------------------------------*/

#define SSP1CON3                                 0x0
#define SSP1CON3_address                         0x217
#define SSP1CON3_position                        0x0
#define SSP1CON3_size                            0x8
#define SSP1CON3_value_mask                      0xFF
#define SSP1CON3_clear_mask                      0x0

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


/*------------------------------------------------------------------------------#
| ODCONA                                                                  0x28C |
#-------------------------------------------------------------------------------#
| ODCONA7 | ODCONA6 | ODCONA5 | ODCONA4 | ODCONA3 | ODCONA2 | ODCONA1 | ODCONA0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define ODCONA0                                  0x0
#define ODCONA0_address                          0x28C
#define ODCONA0_position                         0x0
#define ODCONA0_size                             0x1
#define ODCONA0_value_mask                       0x1
#define ODCONA0_clear_mask                       0xFE

#define ODCONA                                   0x0
#define ODCONA_address                           0x28C
#define ODCONA_position                          0x0
#define ODCONA_size                              0x8
#define ODCONA_value_mask                        0xFF
#define ODCONA_clear_mask                        0x0

#define ODCONA1                                  0x1
#define ODCONA1_address                          0x28C
#define ODCONA1_position                         0x1
#define ODCONA1_size                             0x1
#define ODCONA1_value_mask                       0x2
#define ODCONA1_clear_mask                       0xFD

#define ODCONA2                                  0x2
#define ODCONA2_address                          0x28C
#define ODCONA2_position                         0x2
#define ODCONA2_size                             0x1
#define ODCONA2_value_mask                       0x4
#define ODCONA2_clear_mask                       0xFB

#define ODCONA3                                  0x3
#define ODCONA3_address                          0x28C
#define ODCONA3_position                         0x3
#define ODCONA3_size                             0x1
#define ODCONA3_value_mask                       0x8
#define ODCONA3_clear_mask                       0xF7

#define ODCONA4                                  0x4
#define ODCONA4_address                          0x28C
#define ODCONA4_position                         0x4
#define ODCONA4_size                             0x1
#define ODCONA4_value_mask                       0x10
#define ODCONA4_clear_mask                       0xEF

#define ODCONA5                                  0x5
#define ODCONA5_address                          0x28C
#define ODCONA5_position                         0x5
#define ODCONA5_size                             0x1
#define ODCONA5_value_mask                       0x20
#define ODCONA5_clear_mask                       0xDF

#define ODCONA6                                  0x6
#define ODCONA6_address                          0x28C
#define ODCONA6_position                         0x6
#define ODCONA6_size                             0x1
#define ODCONA6_value_mask                       0x40
#define ODCONA6_clear_mask                       0xBF

#define ODCONA7                                  0x7
#define ODCONA7_address                          0x28C
#define ODCONA7_position                         0x7
#define ODCONA7_size                             0x1
#define ODCONA7_value_mask                       0x80
#define ODCONA7_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| ODCONB                                                                  0x28D |
#-------------------------------------------------------------------------------#
| ODCONB7 | ODCONB6 | ODCONB5 | ODCONB4 | ODCONB3 | ODCONB2 | ODCONB1 | ODCONB0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define ODCONB0                                  0x0
#define ODCONB0_address                          0x28D
#define ODCONB0_position                         0x0
#define ODCONB0_size                             0x1
#define ODCONB0_value_mask                       0x1
#define ODCONB0_clear_mask                       0xFE

#define ODCONB                                   0x0
#define ODCONB_address                           0x28D
#define ODCONB_position                          0x0
#define ODCONB_size                              0x8
#define ODCONB_value_mask                        0xFF
#define ODCONB_clear_mask                        0x0

#define ODCONB1                                  0x1
#define ODCONB1_address                          0x28D
#define ODCONB1_position                         0x1
#define ODCONB1_size                             0x1
#define ODCONB1_value_mask                       0x2
#define ODCONB1_clear_mask                       0xFD

#define ODCONB2                                  0x2
#define ODCONB2_address                          0x28D
#define ODCONB2_position                         0x2
#define ODCONB2_size                             0x1
#define ODCONB2_value_mask                       0x4
#define ODCONB2_clear_mask                       0xFB

#define ODCONB3                                  0x3
#define ODCONB3_address                          0x28D
#define ODCONB3_position                         0x3
#define ODCONB3_size                             0x1
#define ODCONB3_value_mask                       0x8
#define ODCONB3_clear_mask                       0xF7

#define ODCONB4                                  0x4
#define ODCONB4_address                          0x28D
#define ODCONB4_position                         0x4
#define ODCONB4_size                             0x1
#define ODCONB4_value_mask                       0x10
#define ODCONB4_clear_mask                       0xEF

#define ODCONB5                                  0x5
#define ODCONB5_address                          0x28D
#define ODCONB5_position                         0x5
#define ODCONB5_size                             0x1
#define ODCONB5_value_mask                       0x20
#define ODCONB5_clear_mask                       0xDF

#define ODCONB6                                  0x6
#define ODCONB6_address                          0x28D
#define ODCONB6_position                         0x6
#define ODCONB6_size                             0x1
#define ODCONB6_value_mask                       0x40
#define ODCONB6_clear_mask                       0xBF

#define ODCONB7                                  0x7
#define ODCONB7_address                          0x28D
#define ODCONB7_position                         0x7
#define ODCONB7_size                             0x1
#define ODCONB7_value_mask                       0x80
#define ODCONB7_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| ODCONC                                                                  0x28E |
#-------------------------------------------------------------------------------#
| ODCONC7 | ODCONC6 | ODCONC5 | ODCONC4 | ODCONC3 | ODCONC2 | ODCONC1 | ODCONC0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define ODCONC0                                  0x0
#define ODCONC0_address                          0x28E
#define ODCONC0_position                         0x0
#define ODCONC0_size                             0x1
#define ODCONC0_value_mask                       0x1
#define ODCONC0_clear_mask                       0xFE

#define ODCONC                                   0x0
#define ODCONC_address                           0x28E
#define ODCONC_position                          0x0
#define ODCONC_size                              0x8
#define ODCONC_value_mask                        0xFF
#define ODCONC_clear_mask                        0x0

#define ODCONC1                                  0x1
#define ODCONC1_address                          0x28E
#define ODCONC1_position                         0x1
#define ODCONC1_size                             0x1
#define ODCONC1_value_mask                       0x2
#define ODCONC1_clear_mask                       0xFD

#define ODCONC2                                  0x2
#define ODCONC2_address                          0x28E
#define ODCONC2_position                         0x2
#define ODCONC2_size                             0x1
#define ODCONC2_value_mask                       0x4
#define ODCONC2_clear_mask                       0xFB

#define ODCONC3                                  0x3
#define ODCONC3_address                          0x28E
#define ODCONC3_position                         0x3
#define ODCONC3_size                             0x1
#define ODCONC3_value_mask                       0x8
#define ODCONC3_clear_mask                       0xF7

#define ODCONC4                                  0x4
#define ODCONC4_address                          0x28E
#define ODCONC4_position                         0x4
#define ODCONC4_size                             0x1
#define ODCONC4_value_mask                       0x10
#define ODCONC4_clear_mask                       0xEF

#define ODCONC5                                  0x5
#define ODCONC5_address                          0x28E
#define ODCONC5_position                         0x5
#define ODCONC5_size                             0x1
#define ODCONC5_value_mask                       0x20
#define ODCONC5_clear_mask                       0xDF

#define ODCONC6                                  0x6
#define ODCONC6_address                          0x28E
#define ODCONC6_position                         0x6
#define ODCONC6_size                             0x1
#define ODCONC6_value_mask                       0x40
#define ODCONC6_clear_mask                       0xBF

#define ODCONC7                                  0x7
#define ODCONC7_address                          0x28E
#define ODCONC7_position                         0x7
#define ODCONC7_size                             0x1
#define ODCONC7_value_mask                       0x80
#define ODCONC7_clear_mask                       0x7F


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


/*--------------------------------------------------------------------------------------#
| SLRCONA                                                                         0x30C |
#---------------------------------------------------------------------------------------#
| SLRCONA7 | SLRCONA6 | SLRCONA5 | SLRCONA4 | SLRCONA3 | SLRCONA2 | SLRCONA1 | SLRCONA0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define SLRCONA0                                 0x0
#define SLRCONA0_address                         0x30C
#define SLRCONA0_position                        0x0
#define SLRCONA0_size                            0x1
#define SLRCONA0_value_mask                      0x1
#define SLRCONA0_clear_mask                      0xFE

#define SLRCONA                                  0x0
#define SLRCONA_address                          0x30C
#define SLRCONA_position                         0x0
#define SLRCONA_size                             0x8
#define SLRCONA_value_mask                       0xFF
#define SLRCONA_clear_mask                       0x0

#define SLRCONA1                                 0x1
#define SLRCONA1_address                         0x30C
#define SLRCONA1_position                        0x1
#define SLRCONA1_size                            0x1
#define SLRCONA1_value_mask                      0x2
#define SLRCONA1_clear_mask                      0xFD

#define SLRCONA2                                 0x2
#define SLRCONA2_address                         0x30C
#define SLRCONA2_position                        0x2
#define SLRCONA2_size                            0x1
#define SLRCONA2_value_mask                      0x4
#define SLRCONA2_clear_mask                      0xFB

#define SLRCONA3                                 0x3
#define SLRCONA3_address                         0x30C
#define SLRCONA3_position                        0x3
#define SLRCONA3_size                            0x1
#define SLRCONA3_value_mask                      0x8
#define SLRCONA3_clear_mask                      0xF7

#define SLRCONA4                                 0x4
#define SLRCONA4_address                         0x30C
#define SLRCONA4_position                        0x4
#define SLRCONA4_size                            0x1
#define SLRCONA4_value_mask                      0x10
#define SLRCONA4_clear_mask                      0xEF

#define SLRCONA5                                 0x5
#define SLRCONA5_address                         0x30C
#define SLRCONA5_position                        0x5
#define SLRCONA5_size                            0x1
#define SLRCONA5_value_mask                      0x20
#define SLRCONA5_clear_mask                      0xDF

#define SLRCONA6                                 0x6
#define SLRCONA6_address                         0x30C
#define SLRCONA6_position                        0x6
#define SLRCONA6_size                            0x1
#define SLRCONA6_value_mask                      0x40
#define SLRCONA6_clear_mask                      0xBF

#define SLRCONA7                                 0x7
#define SLRCONA7_address                         0x30C
#define SLRCONA7_position                        0x7
#define SLRCONA7_size                            0x1
#define SLRCONA7_value_mask                      0x80
#define SLRCONA7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| SLRCONB                                                                         0x30D |
#---------------------------------------------------------------------------------------#
| SLRCONB7 | SLRCONB6 | SLRCONB5 | SLRCONB4 | SLRCONB3 | SLRCONB2 | SLRCONB1 | SLRCONB0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define SLRCONB                                  0x0
#define SLRCONB_address                          0x30D
#define SLRCONB_position                         0x0
#define SLRCONB_size                             0x8
#define SLRCONB_value_mask                       0xFF
#define SLRCONB_clear_mask                       0x0

#define SLRCONB0                                 0x0
#define SLRCONB0_address                         0x30D
#define SLRCONB0_position                        0x0
#define SLRCONB0_size                            0x1
#define SLRCONB0_value_mask                      0x1
#define SLRCONB0_clear_mask                      0xFE

#define SLRCONB1                                 0x1
#define SLRCONB1_address                         0x30D
#define SLRCONB1_position                        0x1
#define SLRCONB1_size                            0x1
#define SLRCONB1_value_mask                      0x2
#define SLRCONB1_clear_mask                      0xFD

#define SLRCONB2                                 0x2
#define SLRCONB2_address                         0x30D
#define SLRCONB2_position                        0x2
#define SLRCONB2_size                            0x1
#define SLRCONB2_value_mask                      0x4
#define SLRCONB2_clear_mask                      0xFB

#define SLRCONB3                                 0x3
#define SLRCONB3_address                         0x30D
#define SLRCONB3_position                        0x3
#define SLRCONB3_size                            0x1
#define SLRCONB3_value_mask                      0x8
#define SLRCONB3_clear_mask                      0xF7

#define SLRCONB4                                 0x4
#define SLRCONB4_address                         0x30D
#define SLRCONB4_position                        0x4
#define SLRCONB4_size                            0x1
#define SLRCONB4_value_mask                      0x10
#define SLRCONB4_clear_mask                      0xEF

#define SLRCONB5                                 0x5
#define SLRCONB5_address                         0x30D
#define SLRCONB5_position                        0x5
#define SLRCONB5_size                            0x1
#define SLRCONB5_value_mask                      0x20
#define SLRCONB5_clear_mask                      0xDF

#define SLRCONB6                                 0x6
#define SLRCONB6_address                         0x30D
#define SLRCONB6_position                        0x6
#define SLRCONB6_size                            0x1
#define SLRCONB6_value_mask                      0x40
#define SLRCONB6_clear_mask                      0xBF

#define SLRCONB7                                 0x7
#define SLRCONB7_address                         0x30D
#define SLRCONB7_position                        0x7
#define SLRCONB7_size                            0x1
#define SLRCONB7_value_mask                      0x80
#define SLRCONB7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| SLRCONC                                                                         0x30E |
#---------------------------------------------------------------------------------------#
| SLRCONC7 | SLRCONC6 | SLRCONC5 | SLRCONC4 | SLRCONC3 | SLRCONC2 | SLRCONC1 | SLRCONC0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define SLRCONC                                  0x0
#define SLRCONC_address                          0x30E
#define SLRCONC_position                         0x0
#define SLRCONC_size                             0x8
#define SLRCONC_value_mask                       0xFF
#define SLRCONC_clear_mask                       0x0

#define SLRCONC0                                 0x0
#define SLRCONC0_address                         0x30E
#define SLRCONC0_position                        0x0
#define SLRCONC0_size                            0x1
#define SLRCONC0_value_mask                      0x1
#define SLRCONC0_clear_mask                      0xFE

#define SLRCONC1                                 0x1
#define SLRCONC1_address                         0x30E
#define SLRCONC1_position                        0x1
#define SLRCONC1_size                            0x1
#define SLRCONC1_value_mask                      0x2
#define SLRCONC1_clear_mask                      0xFD

#define SLRCONC2                                 0x2
#define SLRCONC2_address                         0x30E
#define SLRCONC2_position                        0x2
#define SLRCONC2_size                            0x1
#define SLRCONC2_value_mask                      0x4
#define SLRCONC2_clear_mask                      0xFB

#define SLRCONC3                                 0x3
#define SLRCONC3_address                         0x30E
#define SLRCONC3_position                        0x3
#define SLRCONC3_size                            0x1
#define SLRCONC3_value_mask                      0x8
#define SLRCONC3_clear_mask                      0xF7

#define SLRCONC4                                 0x4
#define SLRCONC4_address                         0x30E
#define SLRCONC4_position                        0x4
#define SLRCONC4_size                            0x1
#define SLRCONC4_value_mask                      0x10
#define SLRCONC4_clear_mask                      0xEF

#define SLRCONC5                                 0x5
#define SLRCONC5_address                         0x30E
#define SLRCONC5_position                        0x5
#define SLRCONC5_size                            0x1
#define SLRCONC5_value_mask                      0x20
#define SLRCONC5_clear_mask                      0xDF

#define SLRCONC6                                 0x6
#define SLRCONC6_address                         0x30E
#define SLRCONC6_position                        0x6
#define SLRCONC6_size                            0x1
#define SLRCONC6_value_mask                      0x40
#define SLRCONC6_clear_mask                      0xBF

#define SLRCONC7                                 0x7
#define SLRCONC7_address                         0x30E
#define SLRCONC7_position                        0x7
#define SLRCONC7_size                            0x1
#define SLRCONC7_value_mask                      0x80
#define SLRCONC7_clear_mask                      0x7F


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


/*------------------------------------------------------------------------------#
| INLVLA                                                                  0x38C |
#-------------------------------------------------------------------------------#
| INLVLA7 | INLVLA6 | INLVLA5 | INLVLA4 | INLVLA3 | INLVLA2 | INLVLA1 | INLVLA0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define INLVLA                                   0x0
#define INLVLA_address                           0x38C
#define INLVLA_position                          0x0
#define INLVLA_size                              0x8
#define INLVLA_value_mask                        0xFF
#define INLVLA_clear_mask                        0x0

#define INLVLA0                                  0x0
#define INLVLA0_address                          0x38C
#define INLVLA0_position                         0x0
#define INLVLA0_size                             0x1
#define INLVLA0_value_mask                       0x1
#define INLVLA0_clear_mask                       0xFE

#define INLVLA1                                  0x1
#define INLVLA1_address                          0x38C
#define INLVLA1_position                         0x1
#define INLVLA1_size                             0x1
#define INLVLA1_value_mask                       0x2
#define INLVLA1_clear_mask                       0xFD

#define INLVLA2                                  0x2
#define INLVLA2_address                          0x38C
#define INLVLA2_position                         0x2
#define INLVLA2_size                             0x1
#define INLVLA2_value_mask                       0x4
#define INLVLA2_clear_mask                       0xFB

#define INLVLA3                                  0x3
#define INLVLA3_address                          0x38C
#define INLVLA3_position                         0x3
#define INLVLA3_size                             0x1
#define INLVLA3_value_mask                       0x8
#define INLVLA3_clear_mask                       0xF7

#define INLVLA4                                  0x4
#define INLVLA4_address                          0x38C
#define INLVLA4_position                         0x4
#define INLVLA4_size                             0x1
#define INLVLA4_value_mask                       0x10
#define INLVLA4_clear_mask                       0xEF

#define INLVLA5                                  0x5
#define INLVLA5_address                          0x38C
#define INLVLA5_position                         0x5
#define INLVLA5_size                             0x1
#define INLVLA5_value_mask                       0x20
#define INLVLA5_clear_mask                       0xDF

#define INLVLA6                                  0x6
#define INLVLA6_address                          0x38C
#define INLVLA6_position                         0x6
#define INLVLA6_size                             0x1
#define INLVLA6_value_mask                       0x40
#define INLVLA6_clear_mask                       0xBF

#define INLVLA7                                  0x7
#define INLVLA7_address                          0x38C
#define INLVLA7_position                         0x7
#define INLVLA7_size                             0x1
#define INLVLA7_value_mask                       0x80
#define INLVLA7_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| INLVLB                                                                  0x38D |
#-------------------------------------------------------------------------------#
| INLVLB7 | INLVLB6 | INLVLB5 | INLVLB4 | INLVLB3 | INLVLB2 | INLVLB1 | INLVLB0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define INLVLB                                   0x0
#define INLVLB_address                           0x38D
#define INLVLB_position                          0x0
#define INLVLB_size                              0x8
#define INLVLB_value_mask                        0xFF
#define INLVLB_clear_mask                        0x0

#define INLVLB0                                  0x0
#define INLVLB0_address                          0x38D
#define INLVLB0_position                         0x0
#define INLVLB0_size                             0x1
#define INLVLB0_value_mask                       0x1
#define INLVLB0_clear_mask                       0xFE

#define INLVLB1                                  0x1
#define INLVLB1_address                          0x38D
#define INLVLB1_position                         0x1
#define INLVLB1_size                             0x1
#define INLVLB1_value_mask                       0x2
#define INLVLB1_clear_mask                       0xFD

#define INLVLB2                                  0x2
#define INLVLB2_address                          0x38D
#define INLVLB2_position                         0x2
#define INLVLB2_size                             0x1
#define INLVLB2_value_mask                       0x4
#define INLVLB2_clear_mask                       0xFB

#define INLVLB3                                  0x3
#define INLVLB3_address                          0x38D
#define INLVLB3_position                         0x3
#define INLVLB3_size                             0x1
#define INLVLB3_value_mask                       0x8
#define INLVLB3_clear_mask                       0xF7

#define INLVLB4                                  0x4
#define INLVLB4_address                          0x38D
#define INLVLB4_position                         0x4
#define INLVLB4_size                             0x1
#define INLVLB4_value_mask                       0x10
#define INLVLB4_clear_mask                       0xEF

#define INLVLB5                                  0x5
#define INLVLB5_address                          0x38D
#define INLVLB5_position                         0x5
#define INLVLB5_size                             0x1
#define INLVLB5_value_mask                       0x20
#define INLVLB5_clear_mask                       0xDF

#define INLVLB6                                  0x6
#define INLVLB6_address                          0x38D
#define INLVLB6_position                         0x6
#define INLVLB6_size                             0x1
#define INLVLB6_value_mask                       0x40
#define INLVLB6_clear_mask                       0xBF

#define INLVLB7                                  0x7
#define INLVLB7_address                          0x38D
#define INLVLB7_position                         0x7
#define INLVLB7_size                             0x1
#define INLVLB7_value_mask                       0x80
#define INLVLB7_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| INLVLC                                                                  0x38E |
#-------------------------------------------------------------------------------#
| INLVLC7 | INLVLC6 | INLVLC5 | INLVLC4 | INLVLC3 | INLVLC2 | INLVLC1 | INLVLC0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define INLVLC                                   0x0
#define INLVLC_address                           0x38E
#define INLVLC_position                          0x0
#define INLVLC_size                              0x8
#define INLVLC_value_mask                        0xFF
#define INLVLC_clear_mask                        0x0

#define INLVLC0                                  0x0
#define INLVLC0_address                          0x38E
#define INLVLC0_position                         0x0
#define INLVLC0_size                             0x1
#define INLVLC0_value_mask                       0x1
#define INLVLC0_clear_mask                       0xFE

#define INLVLC1                                  0x1
#define INLVLC1_address                          0x38E
#define INLVLC1_position                         0x1
#define INLVLC1_size                             0x1
#define INLVLC1_value_mask                       0x2
#define INLVLC1_clear_mask                       0xFD

#define INLVLC2                                  0x2
#define INLVLC2_address                          0x38E
#define INLVLC2_position                         0x2
#define INLVLC2_size                             0x1
#define INLVLC2_value_mask                       0x4
#define INLVLC2_clear_mask                       0xFB

#define INLVLC3                                  0x3
#define INLVLC3_address                          0x38E
#define INLVLC3_position                         0x3
#define INLVLC3_size                             0x1
#define INLVLC3_value_mask                       0x8
#define INLVLC3_clear_mask                       0xF7

#define INLVLC4                                  0x4
#define INLVLC4_address                          0x38E
#define INLVLC4_position                         0x4
#define INLVLC4_size                             0x1
#define INLVLC4_value_mask                       0x10
#define INLVLC4_clear_mask                       0xEF

#define INLVLC5                                  0x5
#define INLVLC5_address                          0x38E
#define INLVLC5_position                         0x5
#define INLVLC5_size                             0x1
#define INLVLC5_value_mask                       0x20
#define INLVLC5_clear_mask                       0xDF

#define INLVLC6                                  0x6
#define INLVLC6_address                          0x38E
#define INLVLC6_position                         0x6
#define INLVLC6_size                             0x1
#define INLVLC6_value_mask                       0x40
#define INLVLC6_clear_mask                       0xBF

#define INLVLC7                                  0x7
#define INLVLC7_address                          0x38E
#define INLVLC7_position                         0x7
#define INLVLC7_size                             0x1
#define INLVLC7_value_mask                       0x80
#define INLVLC7_clear_mask                       0x7F


/*------------------------------------#
| INLVLE                        0x390 |
#-------------------------------------#
| INLVLE3 | INLVLE                        |
#-------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2 | 1 | 0 |
#------------------------------------*/

#define INLVLE                                   0x0
#define INLVLE_address                           0x390
#define INLVLE_position                          0x0
#define INLVLE_size                              0x8
#define INLVLE_value_mask                        0xFF
#define INLVLE_clear_mask                        0x0

#define INLVLE3                                  0x3
#define INLVLE3_address                          0x390
#define INLVLE3_position                         0x3
#define INLVLE3_size                             0x1
#define INLVLE3_value_mask                       0x8
#define INLVLE3_clear_mask                       0xF7


/*----------------------------------------------------------------------#
| IOCAP                                                           0x391 |
#-----------------------------------------------------------------------#
| IOCAP7 | IOCAP6 | IOCAP5 | IOCAP4 | IOCAP3 | IOCAP2 | IOCAP1 | IOCAP0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define IOCAP                                    0x0
#define IOCAP_address                            0x391
#define IOCAP_position                           0x0
#define IOCAP_size                               0x8
#define IOCAP_value_mask                         0xFF
#define IOCAP_clear_mask                         0x0

#define IOCAP0                                   0x0
#define IOCAP0_address                           0x391
#define IOCAP0_position                          0x0
#define IOCAP0_size                              0x1
#define IOCAP0_value_mask                        0x1
#define IOCAP0_clear_mask                        0xFE

#define IOCAP1                                   0x1
#define IOCAP1_address                           0x391
#define IOCAP1_position                          0x1
#define IOCAP1_size                              0x1
#define IOCAP1_value_mask                        0x2
#define IOCAP1_clear_mask                        0xFD

#define IOCAP2                                   0x2
#define IOCAP2_address                           0x391
#define IOCAP2_position                          0x2
#define IOCAP2_size                              0x1
#define IOCAP2_value_mask                        0x4
#define IOCAP2_clear_mask                        0xFB

#define IOCAP3                                   0x3
#define IOCAP3_address                           0x391
#define IOCAP3_position                          0x3
#define IOCAP3_size                              0x1
#define IOCAP3_value_mask                        0x8
#define IOCAP3_clear_mask                        0xF7

#define IOCAP4                                   0x4
#define IOCAP4_address                           0x391
#define IOCAP4_position                          0x4
#define IOCAP4_size                              0x1
#define IOCAP4_value_mask                        0x10
#define IOCAP4_clear_mask                        0xEF

#define IOCAP5                                   0x5
#define IOCAP5_address                           0x391
#define IOCAP5_position                          0x5
#define IOCAP5_size                              0x1
#define IOCAP5_value_mask                        0x20
#define IOCAP5_clear_mask                        0xDF

#define IOCAP6                                   0x6
#define IOCAP6_address                           0x391
#define IOCAP6_position                          0x6
#define IOCAP6_size                              0x1
#define IOCAP6_value_mask                        0x40
#define IOCAP6_clear_mask                        0xBF

#define IOCAP7                                   0x7
#define IOCAP7_address                           0x391
#define IOCAP7_position                          0x7
#define IOCAP7_size                              0x1
#define IOCAP7_value_mask                        0x80
#define IOCAP7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| IOCAN                                                           0x392 |
#-----------------------------------------------------------------------#
| IOCAN7 | IOCAN6 | IOCAN5 | IOCAN4 | IOCAN3 | IOCAN2 | IOCAN1 | IOCAN0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define IOCAN                                    0x0
#define IOCAN_address                            0x392
#define IOCAN_position                           0x0
#define IOCAN_size                               0x8
#define IOCAN_value_mask                         0xFF
#define IOCAN_clear_mask                         0x0

#define IOCAN0                                   0x0
#define IOCAN0_address                           0x392
#define IOCAN0_position                          0x0
#define IOCAN0_size                              0x1
#define IOCAN0_value_mask                        0x1
#define IOCAN0_clear_mask                        0xFE

#define IOCAN1                                   0x1
#define IOCAN1_address                           0x392
#define IOCAN1_position                          0x1
#define IOCAN1_size                              0x1
#define IOCAN1_value_mask                        0x2
#define IOCAN1_clear_mask                        0xFD

#define IOCAN2                                   0x2
#define IOCAN2_address                           0x392
#define IOCAN2_position                          0x2
#define IOCAN2_size                              0x1
#define IOCAN2_value_mask                        0x4
#define IOCAN2_clear_mask                        0xFB

#define IOCAN3                                   0x3
#define IOCAN3_address                           0x392
#define IOCAN3_position                          0x3
#define IOCAN3_size                              0x1
#define IOCAN3_value_mask                        0x8
#define IOCAN3_clear_mask                        0xF7

#define IOCAN4                                   0x4
#define IOCAN4_address                           0x392
#define IOCAN4_position                          0x4
#define IOCAN4_size                              0x1
#define IOCAN4_value_mask                        0x10
#define IOCAN4_clear_mask                        0xEF

#define IOCAN5                                   0x5
#define IOCAN5_address                           0x392
#define IOCAN5_position                          0x5
#define IOCAN5_size                              0x1
#define IOCAN5_value_mask                        0x20
#define IOCAN5_clear_mask                        0xDF

#define IOCAN6                                   0x6
#define IOCAN6_address                           0x392
#define IOCAN6_position                          0x6
#define IOCAN6_size                              0x1
#define IOCAN6_value_mask                        0x40
#define IOCAN6_clear_mask                        0xBF

#define IOCAN7                                   0x7
#define IOCAN7_address                           0x392
#define IOCAN7_position                          0x7
#define IOCAN7_size                              0x1
#define IOCAN7_value_mask                        0x80
#define IOCAN7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| IOCAF                                                           0x393 |
#-----------------------------------------------------------------------#
| IOCAF7 | IOCAF6 | IOCAF5 | IOCAF4 | IOCAF3 | IOCAF2 | IOCAF1 | IOCAF0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define IOCAF0                                   0x0
#define IOCAF0_address                           0x393
#define IOCAF0_position                          0x0
#define IOCAF0_size                              0x1
#define IOCAF0_value_mask                        0x1
#define IOCAF0_clear_mask                        0xFE

#define IOCAF                                    0x0
#define IOCAF_address                            0x393
#define IOCAF_position                           0x0
#define IOCAF_size                               0x8
#define IOCAF_value_mask                         0xFF
#define IOCAF_clear_mask                         0x0

#define IOCAF1                                   0x1
#define IOCAF1_address                           0x393
#define IOCAF1_position                          0x1
#define IOCAF1_size                              0x1
#define IOCAF1_value_mask                        0x2
#define IOCAF1_clear_mask                        0xFD

#define IOCAF2                                   0x2
#define IOCAF2_address                           0x393
#define IOCAF2_position                          0x2
#define IOCAF2_size                              0x1
#define IOCAF2_value_mask                        0x4
#define IOCAF2_clear_mask                        0xFB

#define IOCAF3                                   0x3
#define IOCAF3_address                           0x393
#define IOCAF3_position                          0x3
#define IOCAF3_size                              0x1
#define IOCAF3_value_mask                        0x8
#define IOCAF3_clear_mask                        0xF7

#define IOCAF4                                   0x4
#define IOCAF4_address                           0x393
#define IOCAF4_position                          0x4
#define IOCAF4_size                              0x1
#define IOCAF4_value_mask                        0x10
#define IOCAF4_clear_mask                        0xEF

#define IOCAF5                                   0x5
#define IOCAF5_address                           0x393
#define IOCAF5_position                          0x5
#define IOCAF5_size                              0x1
#define IOCAF5_value_mask                        0x20
#define IOCAF5_clear_mask                        0xDF

#define IOCAF6                                   0x6
#define IOCAF6_address                           0x393
#define IOCAF6_position                          0x6
#define IOCAF6_size                              0x1
#define IOCAF6_value_mask                        0x40
#define IOCAF6_clear_mask                        0xBF

#define IOCAF7                                   0x7
#define IOCAF7_address                           0x393
#define IOCAF7_position                          0x7
#define IOCAF7_size                              0x1
#define IOCAF7_value_mask                        0x80
#define IOCAF7_clear_mask                        0x7F


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


/*----------------------------------------------------------------------#
| IOCCP                                                           0x397 |
#-----------------------------------------------------------------------#
| IOCCP7 | IOCCP6 | IOCCP5 | IOCCP4 | IOCCP3 | IOCCP2 | IOCCP1 | IOCCP0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define IOCCP0                                   0x0
#define IOCCP0_address                           0x397
#define IOCCP0_position                          0x0
#define IOCCP0_size                              0x1
#define IOCCP0_value_mask                        0x1
#define IOCCP0_clear_mask                        0xFE

#define IOCCP                                    0x0
#define IOCCP_address                            0x397
#define IOCCP_position                           0x0
#define IOCCP_size                               0x8
#define IOCCP_value_mask                         0xFF
#define IOCCP_clear_mask                         0x0

#define IOCCP1                                   0x1
#define IOCCP1_address                           0x397
#define IOCCP1_position                          0x1
#define IOCCP1_size                              0x1
#define IOCCP1_value_mask                        0x2
#define IOCCP1_clear_mask                        0xFD

#define IOCCP2                                   0x2
#define IOCCP2_address                           0x397
#define IOCCP2_position                          0x2
#define IOCCP2_size                              0x1
#define IOCCP2_value_mask                        0x4
#define IOCCP2_clear_mask                        0xFB

#define IOCCP3                                   0x3
#define IOCCP3_address                           0x397
#define IOCCP3_position                          0x3
#define IOCCP3_size                              0x1
#define IOCCP3_value_mask                        0x8
#define IOCCP3_clear_mask                        0xF7

#define IOCCP4                                   0x4
#define IOCCP4_address                           0x397
#define IOCCP4_position                          0x4
#define IOCCP4_size                              0x1
#define IOCCP4_value_mask                        0x10
#define IOCCP4_clear_mask                        0xEF

#define IOCCP5                                   0x5
#define IOCCP5_address                           0x397
#define IOCCP5_position                          0x5
#define IOCCP5_size                              0x1
#define IOCCP5_value_mask                        0x20
#define IOCCP5_clear_mask                        0xDF

#define IOCCP6                                   0x6
#define IOCCP6_address                           0x397
#define IOCCP6_position                          0x6
#define IOCCP6_size                              0x1
#define IOCCP6_value_mask                        0x40
#define IOCCP6_clear_mask                        0xBF

#define IOCCP7                                   0x7
#define IOCCP7_address                           0x397
#define IOCCP7_position                          0x7
#define IOCCP7_size                              0x1
#define IOCCP7_value_mask                        0x80
#define IOCCP7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| IOCCN                                                           0x398 |
#-----------------------------------------------------------------------#
| IOCCN7 | IOCCN6 | IOCCN5 | IOCCN4 | IOCCN3 | IOCCN2 | IOCCN1 | IOCCN0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define IOCCN0                                   0x0
#define IOCCN0_address                           0x398
#define IOCCN0_position                          0x0
#define IOCCN0_size                              0x1
#define IOCCN0_value_mask                        0x1
#define IOCCN0_clear_mask                        0xFE

#define IOCCN                                    0x0
#define IOCCN_address                            0x398
#define IOCCN_position                           0x0
#define IOCCN_size                               0x8
#define IOCCN_value_mask                         0xFF
#define IOCCN_clear_mask                         0x0

#define IOCCN1                                   0x1
#define IOCCN1_address                           0x398
#define IOCCN1_position                          0x1
#define IOCCN1_size                              0x1
#define IOCCN1_value_mask                        0x2
#define IOCCN1_clear_mask                        0xFD

#define IOCCN2                                   0x2
#define IOCCN2_address                           0x398
#define IOCCN2_position                          0x2
#define IOCCN2_size                              0x1
#define IOCCN2_value_mask                        0x4
#define IOCCN2_clear_mask                        0xFB

#define IOCCN3                                   0x3
#define IOCCN3_address                           0x398
#define IOCCN3_position                          0x3
#define IOCCN3_size                              0x1
#define IOCCN3_value_mask                        0x8
#define IOCCN3_clear_mask                        0xF7

#define IOCCN4                                   0x4
#define IOCCN4_address                           0x398
#define IOCCN4_position                          0x4
#define IOCCN4_size                              0x1
#define IOCCN4_value_mask                        0x10
#define IOCCN4_clear_mask                        0xEF

#define IOCCN5                                   0x5
#define IOCCN5_address                           0x398
#define IOCCN5_position                          0x5
#define IOCCN5_size                              0x1
#define IOCCN5_value_mask                        0x20
#define IOCCN5_clear_mask                        0xDF

#define IOCCN6                                   0x6
#define IOCCN6_address                           0x398
#define IOCCN6_position                          0x6
#define IOCCN6_size                              0x1
#define IOCCN6_value_mask                        0x40
#define IOCCN6_clear_mask                        0xBF

#define IOCCN7                                   0x7
#define IOCCN7_address                           0x398
#define IOCCN7_position                          0x7
#define IOCCN7_size                              0x1
#define IOCCN7_value_mask                        0x80
#define IOCCN7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| IOCCF                                                           0x399 |
#-----------------------------------------------------------------------#
| IOCCF7 | IOCCF6 | IOCCF5 | IOCCF4 | IOCCF3 | IOCCF2 | IOCCF1 | IOCCF0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define IOCCF0                                   0x0
#define IOCCF0_address                           0x399
#define IOCCF0_position                          0x0
#define IOCCF0_size                              0x1
#define IOCCF0_value_mask                        0x1
#define IOCCF0_clear_mask                        0xFE

#define IOCCF                                    0x0
#define IOCCF_address                            0x399
#define IOCCF_position                           0x0
#define IOCCF_size                               0x8
#define IOCCF_value_mask                         0xFF
#define IOCCF_clear_mask                         0x0

#define IOCCF1                                   0x1
#define IOCCF1_address                           0x399
#define IOCCF1_position                          0x1
#define IOCCF1_size                              0x1
#define IOCCF1_value_mask                        0x2
#define IOCCF1_clear_mask                        0xFD

#define IOCCF2                                   0x2
#define IOCCF2_address                           0x399
#define IOCCF2_position                          0x2
#define IOCCF2_size                              0x1
#define IOCCF2_value_mask                        0x4
#define IOCCF2_clear_mask                        0xFB

#define IOCCF3                                   0x3
#define IOCCF3_address                           0x399
#define IOCCF3_position                          0x3
#define IOCCF3_size                              0x1
#define IOCCF3_value_mask                        0x8
#define IOCCF3_clear_mask                        0xF7

#define IOCCF4                                   0x4
#define IOCCF4_address                           0x399
#define IOCCF4_position                          0x4
#define IOCCF4_size                              0x1
#define IOCCF4_value_mask                        0x10
#define IOCCF4_clear_mask                        0xEF

#define IOCCF5                                   0x5
#define IOCCF5_address                           0x399
#define IOCCF5_position                          0x5
#define IOCCF5_size                              0x1
#define IOCCF5_value_mask                        0x20
#define IOCCF5_clear_mask                        0xDF

#define IOCCF6                                   0x6
#define IOCCF6_address                           0x399
#define IOCCF6_position                          0x6
#define IOCCF6_size                              0x1
#define IOCCF6_value_mask                        0x40
#define IOCCF6_clear_mask                        0xBF

#define IOCCF7                                   0x7
#define IOCCF7_address                           0x399
#define IOCCF7_position                          0x7
#define IOCCF7_size                              0x1
#define IOCCF7_value_mask                        0x80
#define IOCCF7_clear_mask                        0x7F


/*-----------------------------------#
| IOCEP                        0x39D |
#------------------------------------#
| - | - | - | - | IOCEP3 | - | - | - |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2 | 1 | 0 |
#-----------------------------------*/

#define IOCEP                                    0x0
#define IOCEP_address                            0x39D
#define IOCEP_position                           0x0
#define IOCEP_size                               0x8
#define IOCEP_value_mask                         0xFF
#define IOCEP_clear_mask                         0x0

#define IOCEP3                                   0x3
#define IOCEP3_address                           0x39D
#define IOCEP3_position                          0x3
#define IOCEP3_size                              0x1
#define IOCEP3_value_mask                        0x8
#define IOCEP3_clear_mask                        0xF7


/*-----------------------------------#
| IOCEN                        0x39E |
#------------------------------------#
| - | - | - | - | IOCEN3 | - | - | - |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2 | 1 | 0 |
#-----------------------------------*/

#define IOCEN                                    0x0
#define IOCEN_address                            0x39E
#define IOCEN_position                           0x0
#define IOCEN_size                               0x8
#define IOCEN_value_mask                         0xFF
#define IOCEN_clear_mask                         0x0

#define IOCEN3                                   0x3
#define IOCEN3_address                           0x39E
#define IOCEN3_position                          0x3
#define IOCEN3_size                              0x1
#define IOCEN3_value_mask                        0x8
#define IOCEN3_clear_mask                        0xF7


/*-----------------------------------#
| IOCEF                        0x39F |
#------------------------------------#
| - | - | - | - | IOCEF3 | - | - | - |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2 | 1 | 0 |
#-----------------------------------*/

#define IOCEF                                    0x0
#define IOCEF_address                            0x39F
#define IOCEF_position                           0x0
#define IOCEF_size                               0x8
#define IOCEF_value_mask                         0xFF
#define IOCEF_clear_mask                         0x0

#define IOCEF3                                   0x3
#define IOCEF3_address                           0x39F
#define IOCEF3_position                          0x3
#define IOCEF3_size                              0x1
#define IOCEF3_value_mask                        0x8
#define IOCEF3_clear_mask                        0xF7


/*-----------------------------------------------------------------------------#
| OPA1CON                                                                0x511 |
#------------------------------------------------------------------------------#
| OPA1CON_EN | OPA1SP | - | - | - | OPA1CON_PCH2 | OPA1CON_PCH1 | OPA1CON_PCH0 |
#------------------------------------------------------------------------------#
| 7          | 6      | 5 | 4 | 3 | 2            | 1            | 0            |
#-----------------------------------------------------------------------------*/

#define OPA1CON                                  0x0
#define OPA1CON_address                          0x511
#define OPA1CON_position                         0x0
#define OPA1CON_size                             0x8
#define OPA1CON_value_mask                       0xFF
#define OPA1CON_clear_mask                       0x0

#define OPA1CON_PCH                              0x0
#define OPA1CON_PCH_address                      0x511
#define OPA1CON_PCH_position                     0x0
#define OPA1CON_PCH_size                         0x3
#define OPA1CON_PCH_value_mask                   0x7
#define OPA1CON_PCH_clear_mask                   0xF8

#define OPA1PCH                                  0x0
#define OPA1PCH_address                          0x511
#define OPA1PCH_position                         0x0
#define OPA1PCH_size                             0x3
#define OPA1PCH_value_mask                       0x7
#define OPA1PCH_clear_mask                       0xF8

#define OPA1CON_PCH0                             0x0
#define OPA1CON_PCH0_address                     0x511
#define OPA1CON_PCH0_position                    0x0
#define OPA1CON_PCH0_size                        0x1
#define OPA1CON_PCH0_value_mask                  0x1
#define OPA1CON_PCH0_clear_mask                  0xFE

#define OPA1PCH0                                 0x0
#define OPA1PCH0_address                         0x511
#define OPA1PCH0_position                        0x0
#define OPA1PCH0_size                            0x1
#define OPA1PCH0_value_mask                      0x1
#define OPA1PCH0_clear_mask                      0xFE

#define OPA1CON_PCH1                             0x1
#define OPA1CON_PCH1_address                     0x511
#define OPA1CON_PCH1_position                    0x1
#define OPA1CON_PCH1_size                        0x1
#define OPA1CON_PCH1_value_mask                  0x2
#define OPA1CON_PCH1_clear_mask                  0xFD

#define OPA1PCH1                                 0x1
#define OPA1PCH1_address                         0x511
#define OPA1PCH1_position                        0x1
#define OPA1PCH1_size                            0x1
#define OPA1PCH1_value_mask                      0x2
#define OPA1PCH1_clear_mask                      0xFD

#define OPA1PCH2                                 0x2
#define OPA1PCH2_address                         0x511
#define OPA1PCH2_position                        0x2
#define OPA1PCH2_size                            0x1
#define OPA1PCH2_value_mask                      0x4
#define OPA1PCH2_clear_mask                      0xFB

#define OPA1CON_PCH2                             0x2
#define OPA1CON_PCH2_address                     0x511
#define OPA1CON_PCH2_position                    0x2
#define OPA1CON_PCH2_size                        0x1
#define OPA1CON_PCH2_value_mask                  0x4
#define OPA1CON_PCH2_clear_mask                  0xFB

#define OPA1CON_SP                               0x6
#define OPA1CON_SP_address                       0x511
#define OPA1CON_SP_position                      0x6
#define OPA1CON_SP_size                          0x1
#define OPA1CON_SP_value_mask                    0x40
#define OPA1CON_SP_clear_mask                    0xBF

#define OPA1SP                                   0x6
#define OPA1SP_address                           0x511
#define OPA1SP_position                          0x6
#define OPA1SP_size                              0x1
#define OPA1SP_value_mask                        0x40
#define OPA1SP_clear_mask                        0xBF

#define OPA1CON_EN                               0x7
#define OPA1CON_EN_address                       0x511
#define OPA1CON_EN_position                      0x7
#define OPA1CON_EN_size                          0x1
#define OPA1CON_EN_value_mask                    0x80
#define OPA1CON_EN_clear_mask                    0x7F

#define OPA1EN                                   0x7
#define OPA1EN_address                           0x511
#define OPA1EN_position                          0x7
#define OPA1EN_size                              0x1
#define OPA1EN_value_mask                        0x80
#define OPA1EN_clear_mask                        0x7F


/*---------------------------------------------------------------------#
| OPA2CON                                                        0x513 |
#----------------------------------------------------------------------#
| OPA2EN | OPA2SP | - | - | - | OPA2CON_PCH2 | OPA2PCH1 | OPA2CON_PCH0 |
#----------------------------------------------------------------------#
| 7      | 6      | 5 | 4 | 3 | 2            | 1        | 0            |
#---------------------------------------------------------------------*/

#define OPA2CON                                  0x0
#define OPA2CON_address                          0x513
#define OPA2CON_position                         0x0
#define OPA2CON_size                             0x8
#define OPA2CON_value_mask                       0xFF
#define OPA2CON_clear_mask                       0x0

#define OPA2CON_PCH                              0x0
#define OPA2CON_PCH_address                      0x513
#define OPA2CON_PCH_position                     0x0
#define OPA2CON_PCH_size                         0x3
#define OPA2CON_PCH_value_mask                   0x7
#define OPA2CON_PCH_clear_mask                   0xF8

#define OPA2CON_PCH0                             0x0
#define OPA2CON_PCH0_address                     0x513
#define OPA2CON_PCH0_position                    0x0
#define OPA2CON_PCH0_size                        0x1
#define OPA2CON_PCH0_value_mask                  0x1
#define OPA2CON_PCH0_clear_mask                  0xFE

#define OPA2PCH                                  0x0
#define OPA2PCH_address                          0x513
#define OPA2PCH_position                         0x0
#define OPA2PCH_size                             0x3
#define OPA2PCH_value_mask                       0x7
#define OPA2PCH_clear_mask                       0xF8

#define OPA2PCH0                                 0x0
#define OPA2PCH0_address                         0x513
#define OPA2PCH0_position                        0x0
#define OPA2PCH0_size                            0x1
#define OPA2PCH0_value_mask                      0x1
#define OPA2PCH0_clear_mask                      0xFE

#define OPA2CON_PCH1                             0x1
#define OPA2CON_PCH1_address                     0x513
#define OPA2CON_PCH1_position                    0x1
#define OPA2CON_PCH1_size                        0x1
#define OPA2CON_PCH1_value_mask                  0x2
#define OPA2CON_PCH1_clear_mask                  0xFD

#define OPA2PCH1                                 0x1
#define OPA2PCH1_address                         0x513
#define OPA2PCH1_position                        0x1
#define OPA2PCH1_size                            0x1
#define OPA2PCH1_value_mask                      0x2
#define OPA2PCH1_clear_mask                      0xFD

#define OPA2CON_PCH2                             0x2
#define OPA2CON_PCH2_address                     0x513
#define OPA2CON_PCH2_position                    0x2
#define OPA2CON_PCH2_size                        0x1
#define OPA2CON_PCH2_value_mask                  0x4
#define OPA2CON_PCH2_clear_mask                  0xFB

#define OPA2PCH2                                 0x2
#define OPA2PCH2_address                         0x513
#define OPA2PCH2_position                        0x2
#define OPA2PCH2_size                            0x1
#define OPA2PCH2_value_mask                      0x4
#define OPA2PCH2_clear_mask                      0xFB

#define OPA2CON_SP                               0x6
#define OPA2CON_SP_address                       0x513
#define OPA2CON_SP_position                      0x6
#define OPA2CON_SP_size                          0x1
#define OPA2CON_SP_value_mask                    0x40
#define OPA2CON_SP_clear_mask                    0xBF

#define OPA2SP                                   0x6
#define OPA2SP_address                           0x513
#define OPA2SP_position                          0x6
#define OPA2SP_size                              0x1
#define OPA2SP_value_mask                        0x40
#define OPA2SP_clear_mask                        0xBF

#define OPA2EN                                   0x7
#define OPA2EN_address                           0x513
#define OPA2EN_position                          0x7
#define OPA2EN_size                              0x1
#define OPA2EN_value_mask                        0x80
#define OPA2EN_clear_mask                        0x7F

#define OPA2CON_EN                               0x7
#define OPA2CON_EN_address                       0x513
#define OPA2CON_EN_position                      0x7
#define OPA2CON_EN_size                          0x1
#define OPA2CON_EN_value_mask                    0x80
#define OPA2CON_EN_clear_mask                    0x7F


/*-------------------------------------------------------------------------------#
| CLKRCON                                                                  0x51A |
#--------------------------------------------------------------------------------#
| CLKREN | CLKROE | CLKRSLR | CLKRDC1 | CLKRDC0 | CLKRDIV2 | CLKRDIV1 | CLKRDIV0 |
#--------------------------------------------------------------------------------#
| 7      | 6      | 5       | 4       | 3       | 2        | 1        | 0        |
#-------------------------------------------------------------------------------*/

#define CLKRCON                                  0x0
#define CLKRCON_address                          0x51A
#define CLKRCON_position                         0x0
#define CLKRCON_size                             0x8
#define CLKRCON_value_mask                       0xFF
#define CLKRCON_clear_mask                       0x0

#define CLKRDIV                                  0x0
#define CLKRDIV_address                          0x51A
#define CLKRDIV_position                         0x0
#define CLKRDIV_size                             0x3
#define CLKRDIV_value_mask                       0x7
#define CLKRDIV_clear_mask                       0xF8

#define CLKRDIV0                                 0x0
#define CLKRDIV0_address                         0x51A
#define CLKRDIV0_position                        0x0
#define CLKRDIV0_size                            0x1
#define CLKRDIV0_value_mask                      0x1
#define CLKRDIV0_clear_mask                      0xFE

#define CLKRDIV1                                 0x1
#define CLKRDIV1_address                         0x51A
#define CLKRDIV1_position                        0x1
#define CLKRDIV1_size                            0x1
#define CLKRDIV1_value_mask                      0x2
#define CLKRDIV1_clear_mask                      0xFD

#define CLKRDIV2                                 0x2
#define CLKRDIV2_address                         0x51A
#define CLKRDIV2_position                        0x2
#define CLKRDIV2_size                            0x1
#define CLKRDIV2_value_mask                      0x4
#define CLKRDIV2_clear_mask                      0xFB

#define CLKRDC                                   0x3
#define CLKRDC_address                           0x51A
#define CLKRDC_position                          0x3
#define CLKRDC_size                              0x2
#define CLKRDC_value_mask                        0x18
#define CLKRDC_clear_mask                        0xE7

#define CLKRDC0                                  0x3
#define CLKRDC0_address                          0x51A
#define CLKRDC0_position                         0x3
#define CLKRDC0_size                             0x1
#define CLKRDC0_value_mask                       0x8
#define CLKRDC0_clear_mask                       0xF7

#define CLKRDC1                                  0x4
#define CLKRDC1_address                          0x51A
#define CLKRDC1_position                         0x4
#define CLKRDC1_size                             0x1
#define CLKRDC1_value_mask                       0x10
#define CLKRDC1_clear_mask                       0xEF

#define CLKRSLR                                  0x5
#define CLKRSLR_address                          0x51A
#define CLKRSLR_position                         0x5
#define CLKRSLR_size                             0x1
#define CLKRSLR_value_mask                       0x20
#define CLKRSLR_clear_mask                       0xDF

#define CLKROE                                   0x6
#define CLKROE_address                           0x51A
#define CLKROE_position                          0x6
#define CLKROE_size                              0x1
#define CLKROE_value_mask                        0x40
#define CLKROE_clear_mask                        0xBF

#define CLKREN                                   0x7
#define CLKREN_address                           0x51A
#define CLKREN_position                          0x7
#define CLKREN_size                              0x1
#define CLKREN_value_mask                        0x80
#define CLKREN_clear_mask                        0x7F


/*-------------------------------------------------#
| DAC2CON0                                   0x591 |
#--------------------------------------------------#
| DAC2EN | - | DAC2OE1 | DAC2OE2 | DAC2PSS | - | - |
#--------------------------------------------------#
| 7      | 6 | 5       | 4       | 3 | 2   | 1 | 0 |
#-------------------------------------------------*/

#define DAC2CON0                                 0x0
#define DAC2CON0_address                         0x591
#define DAC2CON0_position                        0x0
#define DAC2CON0_size                            0x8
#define DAC2CON0_value_mask                      0xFF
#define DAC2CON0_clear_mask                      0x0

#define DAC2PSS                                  0x2
#define DAC2PSS_address                          0x591
#define DAC2PSS_position                         0x2
#define DAC2PSS_size                             0x2
#define DAC2PSS_value_mask                       0xC
#define DAC2PSS_clear_mask                       0xF3

#define DAC2OE2                                  0x4
#define DAC2OE2_address                          0x591
#define DAC2OE2_position                         0x4
#define DAC2OE2_size                             0x1
#define DAC2OE2_value_mask                       0x10
#define DAC2OE2_clear_mask                       0xEF

#define DAC2OE1                                  0x5
#define DAC2OE1_address                          0x591
#define DAC2OE1_position                         0x5
#define DAC2OE1_size                             0x1
#define DAC2OE1_value_mask                       0x20
#define DAC2OE1_clear_mask                       0xDF

#define DAC2EN                                   0x7
#define DAC2EN_address                           0x591
#define DAC2EN_position                          0x7
#define DAC2EN_size                              0x1
#define DAC2EN_value_mask                        0x80
#define DAC2EN_clear_mask                        0x7F


/*------------------------------#
| DAC2REF                 0x592 |
#-------------------------------#
| - | - | - | DAC2R             |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define DAC2REF                                  0x0
#define DAC2REF_address                          0x592
#define DAC2REF_position                         0x0
#define DAC2REF_size                             0x8
#define DAC2REF_value_mask                       0xFF
#define DAC2REF_clear_mask                       0x0

#define DAC2R                                    0x0
#define DAC2R_address                            0x592
#define DAC2R_position                           0x0
#define DAC2R_size                               0x5
#define DAC2R_value_mask                         0x1F
#define DAC2R_clear_mask                         0xE0


/*-------------------------------------------------#
| DAC3CON0                                   0x593 |
#--------------------------------------------------#
| DAC3EN | - | DAC3OE1 | DAC3OE2 | DAC3PSS | - | - |
#--------------------------------------------------#
| 7      | 6 | 5       | 4       | 3 | 2   | 1 | 0 |
#-------------------------------------------------*/

#define DAC3CON0                                 0x0
#define DAC3CON0_address                         0x593
#define DAC3CON0_position                        0x0
#define DAC3CON0_size                            0x8
#define DAC3CON0_value_mask                      0xFF
#define DAC3CON0_clear_mask                      0x0

#define DAC3PSS                                  0x2
#define DAC3PSS_address                          0x593
#define DAC3PSS_position                         0x2
#define DAC3PSS_size                             0x2
#define DAC3PSS_value_mask                       0xC
#define DAC3PSS_clear_mask                       0xF3

#define DAC3OE2                                  0x4
#define DAC3OE2_address                          0x593
#define DAC3OE2_position                         0x4
#define DAC3OE2_size                             0x1
#define DAC3OE2_value_mask                       0x10
#define DAC3OE2_clear_mask                       0xEF

#define DAC3OE1                                  0x5
#define DAC3OE1_address                          0x593
#define DAC3OE1_position                         0x5
#define DAC3OE1_size                             0x1
#define DAC3OE1_value_mask                       0x20
#define DAC3OE1_clear_mask                       0xDF

#define DAC3EN                                   0x7
#define DAC3EN_address                           0x593
#define DAC3EN_position                          0x7
#define DAC3EN_size                              0x1
#define DAC3EN_value_mask                        0x80
#define DAC3EN_clear_mask                        0x7F


/*------------------------------#
| DAC3REF                 0x594 |
#-------------------------------#
| - | - | - | DAC3R             |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define DAC3REF                                  0x0
#define DAC3REF_address                          0x594
#define DAC3REF_position                         0x0
#define DAC3REF_size                             0x8
#define DAC3REF_value_mask                       0xFF
#define DAC3REF_clear_mask                       0x0

#define DAC3R                                    0x0
#define DAC3R_address                            0x594
#define DAC3R_position                           0x0
#define DAC3R_size                               0x5
#define DAC3R_value_mask                         0x1F
#define DAC3R_clear_mask                         0xE0


/*-------------------------------------------------#
| DAC4CON0                                   0x595 |
#--------------------------------------------------#
| DAC4EN | - | DAC4OE1 | DAC4OE2 | DAC4PSS | - | - |
#--------------------------------------------------#
| 7      | 6 | 5       | 4       | 3 | 2   | 1 | 0 |
#-------------------------------------------------*/

#define DAC4CON0                                 0x0
#define DAC4CON0_address                         0x595
#define DAC4CON0_position                        0x0
#define DAC4CON0_size                            0x8
#define DAC4CON0_value_mask                      0xFF
#define DAC4CON0_clear_mask                      0x0

#define DAC4PSS                                  0x2
#define DAC4PSS_address                          0x595
#define DAC4PSS_position                         0x2
#define DAC4PSS_size                             0x2
#define DAC4PSS_value_mask                       0xC
#define DAC4PSS_clear_mask                       0xF3

#define DAC4OE2                                  0x4
#define DAC4OE2_address                          0x595
#define DAC4OE2_position                         0x4
#define DAC4OE2_size                             0x1
#define DAC4OE2_value_mask                       0x10
#define DAC4OE2_clear_mask                       0xEF

#define DAC4OE1                                  0x5
#define DAC4OE1_address                          0x595
#define DAC4OE1_position                         0x5
#define DAC4OE1_size                             0x1
#define DAC4OE1_value_mask                       0x20
#define DAC4OE1_clear_mask                       0xDF

#define DAC4EN                                   0x7
#define DAC4EN_address                           0x595
#define DAC4EN_position                          0x7
#define DAC4EN_size                              0x1
#define DAC4EN_value_mask                        0x80
#define DAC4EN_clear_mask                        0x7F


/*------------------------------#
| DAC4REF                 0x596 |
#-------------------------------#
| - | - | - | DAC4R             |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define DAC4REF                                  0x0
#define DAC4REF_address                          0x596
#define DAC4REF_position                         0x0
#define DAC4REF_size                             0x8
#define DAC4REF_value_mask                       0xFF
#define DAC4REF_clear_mask                       0x0

#define DAC4R                                    0x0
#define DAC4R_address                            0x596
#define DAC4R_position                           0x0
#define DAC4R_size                               0x5
#define DAC4R_value_mask                         0x1F
#define DAC4R_clear_mask                         0xE0


/*----------------------------------------------------------------------------#
| PSMC1CON                                                              0xE91 |
#-----------------------------------------------------------------------------#
| PSMC1EN | PSMC1LD | P1DBFE | P1DBRE | P1MODE3 | P1MODE2 | P1MODE1 | P1MODE0 |
#-----------------------------------------------------------------------------#
| 7       | 6       | 5      | 4      | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------------------*/

#define PSMC1CON                                 0x0
#define PSMC1CON_address                         0xE91
#define PSMC1CON_position                        0x0
#define PSMC1CON_size                            0x8
#define PSMC1CON_value_mask                      0xFF
#define PSMC1CON_clear_mask                      0x0

#define P1MODE                                   0x0
#define P1MODE_address                           0xE91
#define P1MODE_position                          0x0
#define P1MODE_size                              0x4
#define P1MODE_value_mask                        0xF
#define P1MODE_clear_mask                        0xF0

#define P1MODE0                                  0x0
#define P1MODE0_address                          0xE91
#define P1MODE0_position                         0x0
#define P1MODE0_size                             0x1
#define P1MODE0_value_mask                       0x1
#define P1MODE0_clear_mask                       0xFE

#define P1MODE1                                  0x1
#define P1MODE1_address                          0xE91
#define P1MODE1_position                         0x1
#define P1MODE1_size                             0x1
#define P1MODE1_value_mask                       0x2
#define P1MODE1_clear_mask                       0xFD

#define P1MODE2                                  0x2
#define P1MODE2_address                          0xE91
#define P1MODE2_position                         0x2
#define P1MODE2_size                             0x1
#define P1MODE2_value_mask                       0x4
#define P1MODE2_clear_mask                       0xFB

#define P1MODE3                                  0x3
#define P1MODE3_address                          0xE91
#define P1MODE3_position                         0x3
#define P1MODE3_size                             0x1
#define P1MODE3_value_mask                       0x8
#define P1MODE3_clear_mask                       0xF7

#define P1DBRE                                   0x4
#define P1DBRE_address                           0xE91
#define P1DBRE_position                          0x4
#define P1DBRE_size                              0x1
#define P1DBRE_value_mask                        0x10
#define P1DBRE_clear_mask                        0xEF

#define P1DBFE                                   0x5
#define P1DBFE_address                           0xE91
#define P1DBFE_position                          0x5
#define P1DBFE_size                              0x1
#define P1DBFE_value_mask                        0x20
#define P1DBFE_clear_mask                        0xDF

#define PSMC1LD                                  0x6
#define PSMC1LD_address                          0xE91
#define PSMC1LD_position                         0x6
#define PSMC1LD_size                             0x1
#define PSMC1LD_value_mask                       0x40
#define PSMC1LD_clear_mask                       0xBF

#define PSMC1EN                                  0x7
#define PSMC1EN_address                          0xE91
#define PSMC1EN_position                         0x7
#define PSMC1EN_size                             0x1
#define PSMC1EN_value_mask                       0x80
#define PSMC1EN_clear_mask                       0x7F


/*--------------------------------------------------------------------------#
| PSMC1MDL                                                            0xE92 |
#---------------------------------------------------------------------------#
| P1MDLEN | P1MDLPOL | P1MDLBIT | - | P1MSRC3 | P1MSRC2 | P1MSRC1 | P1MSRC0 |
#---------------------------------------------------------------------------#
| 7       | 6        | 5        | 4 | 3       | 2       | 1       | 0       |
#--------------------------------------------------------------------------*/

#define PSMC1MDL                                 0x0
#define PSMC1MDL_address                         0xE92
#define PSMC1MDL_position                        0x0
#define PSMC1MDL_size                            0x8
#define PSMC1MDL_value_mask                      0xFF
#define PSMC1MDL_clear_mask                      0x0

#define P1MSRC0                                  0x0
#define P1MSRC0_address                          0xE92
#define P1MSRC0_position                         0x0
#define P1MSRC0_size                             0x1
#define P1MSRC0_value_mask                       0x1
#define P1MSRC0_clear_mask                       0xFE

#define P1MSRC                                   0x0
#define P1MSRC_address                           0xE92
#define P1MSRC_position                          0x0
#define P1MSRC_size                              0x4
#define P1MSRC_value_mask                        0xF
#define P1MSRC_clear_mask                        0xF0

#define P1MSRC1                                  0x1
#define P1MSRC1_address                          0xE92
#define P1MSRC1_position                         0x1
#define P1MSRC1_size                             0x1
#define P1MSRC1_value_mask                       0x2
#define P1MSRC1_clear_mask                       0xFD

#define P1MSRC2                                  0x2
#define P1MSRC2_address                          0xE92
#define P1MSRC2_position                         0x2
#define P1MSRC2_size                             0x1
#define P1MSRC2_value_mask                       0x4
#define P1MSRC2_clear_mask                       0xFB

#define P1MSRC3                                  0x3
#define P1MSRC3_address                          0xE92
#define P1MSRC3_position                         0x3
#define P1MSRC3_size                             0x1
#define P1MSRC3_value_mask                       0x8
#define P1MSRC3_clear_mask                       0xF7

#define P1MDLBIT                                 0x5
#define P1MDLBIT_address                         0xE92
#define P1MDLBIT_position                        0x5
#define P1MDLBIT_size                            0x1
#define P1MDLBIT_value_mask                      0x20
#define P1MDLBIT_clear_mask                      0xDF

#define P1MDLPOL                                 0x6
#define P1MDLPOL_address                         0xE92
#define P1MDLPOL_position                        0x6
#define P1MDLPOL_size                            0x1
#define P1MDLPOL_value_mask                      0x40
#define P1MDLPOL_clear_mask                      0xBF

#define P1MDLEN                                  0x7
#define P1MDLEN_address                          0xE92
#define P1MDLEN_position                         0x7
#define P1MDLEN_size                             0x1
#define P1MDLEN_value_mask                       0x80
#define P1MDLEN_clear_mask                       0x7F


/*------------------------------------------------------------------#
| PSMC1SYNC                                                   0xE93 |
#-------------------------------------------------------------------#
| P1POFST | P1PRPOL | P1DCPOL | - | - | P1SYNC2 | P1SYNC1 | P1SYNC0 |
#-------------------------------------------------------------------#
| 7       | 6       | 5       | 4 | 3 | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define PSMC1SYNC                                0x0
#define PSMC1SYNC_address                        0xE93
#define PSMC1SYNC_position                       0x0
#define PSMC1SYNC_size                           0x8
#define PSMC1SYNC_value_mask                     0xFF
#define PSMC1SYNC_clear_mask                     0x0

#define P1SYNC0                                  0x0
#define P1SYNC0_address                          0xE93
#define P1SYNC0_position                         0x0
#define P1SYNC0_size                             0x1
#define P1SYNC0_value_mask                       0x1
#define P1SYNC0_clear_mask                       0xFE

#define P1SYNC1                                  0x1
#define P1SYNC1_address                          0xE93
#define P1SYNC1_position                         0x1
#define P1SYNC1_size                             0x1
#define P1SYNC1_value_mask                       0x2
#define P1SYNC1_clear_mask                       0xFD

#define P1SYNC2                                  0x2
#define P1SYNC2_address                          0xE93
#define P1SYNC2_position                         0x2
#define P1SYNC2_size                             0x1
#define P1SYNC2_value_mask                       0x4
#define P1SYNC2_clear_mask                       0xFB

#define P1DCPOL                                  0x5
#define P1DCPOL_address                          0xE93
#define P1DCPOL_position                         0x5
#define P1DCPOL_size                             0x1
#define P1DCPOL_value_mask                       0x20
#define P1DCPOL_clear_mask                       0xDF

#define P1PRPOL                                  0x6
#define P1PRPOL_address                          0xE93
#define P1PRPOL_position                         0x6
#define P1PRPOL_size                             0x1
#define P1PRPOL_value_mask                       0x40
#define P1PRPOL_clear_mask                       0xBF

#define P1POFST                                  0x7
#define P1POFST_address                          0xE93
#define P1POFST_position                         0x7
#define P1POFST_size                             0x1
#define P1POFST_value_mask                       0x80
#define P1POFST_clear_mask                       0x7F


/*------------------------------------------------------#
| PSMC1CLK                                        0xE94 |
#-------------------------------------------------------#
| - | - | P1CPRE1 | P1CPRE0 | - | - | P1CSRC1 | P1CSRC0 |
#-------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3 | 2 | 1       | 0       |
#------------------------------------------------------*/

#define PSMC1CLK                                 0x0
#define PSMC1CLK_address                         0xE94
#define PSMC1CLK_position                        0x0
#define PSMC1CLK_size                            0x8
#define PSMC1CLK_value_mask                      0xFF
#define PSMC1CLK_clear_mask                      0x0

#define P1CSRC                                   0x0
#define P1CSRC_address                           0xE94
#define P1CSRC_position                          0x0
#define P1CSRC_size                              0x2
#define P1CSRC_value_mask                        0x3
#define P1CSRC_clear_mask                        0xFC

#define P1CSRC0                                  0x0
#define P1CSRC0_address                          0xE94
#define P1CSRC0_position                         0x0
#define P1CSRC0_size                             0x1
#define P1CSRC0_value_mask                       0x1
#define P1CSRC0_clear_mask                       0xFE

#define P1CSRC1                                  0x1
#define P1CSRC1_address                          0xE94
#define P1CSRC1_position                         0x1
#define P1CSRC1_size                             0x1
#define P1CSRC1_value_mask                       0x2
#define P1CSRC1_clear_mask                       0xFD

#define P1CPRE                                   0x4
#define P1CPRE_address                           0xE94
#define P1CPRE_position                          0x4
#define P1CPRE_size                              0x2
#define P1CPRE_value_mask                        0x30
#define P1CPRE_clear_mask                        0xCF

#define P1CPRE0                                  0x4
#define P1CPRE0_address                          0xE94
#define P1CPRE0_position                         0x4
#define P1CPRE0_size                             0x1
#define P1CPRE0_value_mask                       0x10
#define P1CPRE0_clear_mask                       0xEF

#define P1CPRE1                                  0x5
#define P1CPRE1_address                          0xE94
#define P1CPRE1_position                         0x5
#define P1CPRE1_size                             0x1
#define P1CPRE1_value_mask                       0x20
#define P1CPRE1_clear_mask                       0xDF


/*------------------------------------------------------#
| PSMC1OEN                                        0xE95 |
#-------------------------------------------------------#
| - | - | P1OEF | P1OEE | P1OED | P1OEC | P1OEB | P1OEA |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define PSMC1OEN                                 0x0
#define PSMC1OEN_address                         0xE95
#define PSMC1OEN_position                        0x0
#define PSMC1OEN_size                            0x8
#define PSMC1OEN_value_mask                      0xFF
#define PSMC1OEN_clear_mask                      0x0

#define P1OEA                                    0x0
#define P1OEA_address                            0xE95
#define P1OEA_position                           0x0
#define P1OEA_size                               0x1
#define P1OEA_value_mask                         0x1
#define P1OEA_clear_mask                         0xFE

#define P1OEB                                    0x1
#define P1OEB_address                            0xE95
#define P1OEB_position                           0x1
#define P1OEB_size                               0x1
#define P1OEB_value_mask                         0x2
#define P1OEB_clear_mask                         0xFD

#define P1OEC                                    0x2
#define P1OEC_address                            0xE95
#define P1OEC_position                           0x2
#define P1OEC_size                               0x1
#define P1OEC_value_mask                         0x4
#define P1OEC_clear_mask                         0xFB

#define P1OED                                    0x3
#define P1OED_address                            0xE95
#define P1OED_position                           0x3
#define P1OED_size                               0x1
#define P1OED_value_mask                         0x8
#define P1OED_clear_mask                         0xF7

#define P1OEE                                    0x4
#define P1OEE_address                            0xE95
#define P1OEE_position                           0x4
#define P1OEE_size                               0x1
#define P1OEE_value_mask                         0x10
#define P1OEE_clear_mask                         0xEF

#define P1OEF                                    0x5
#define P1OEF_address                            0xE95
#define P1OEF_position                           0x5
#define P1OEF_size                               0x1
#define P1OEF_value_mask                         0x20
#define P1OEF_clear_mask                         0xDF


/*------------------------------------------------------------------#
| PSMC1POL                                                    0xE96 |
#-------------------------------------------------------------------#
| - | P1INPOL | P1POLF | P1POLE | P1POLD | P1POLC | P1POLB | P1POLA |
#-------------------------------------------------------------------#
| 7 | 6       | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------------*/

#define PSMC1POL                                 0x0
#define PSMC1POL_address                         0xE96
#define PSMC1POL_position                        0x0
#define PSMC1POL_size                            0x8
#define PSMC1POL_value_mask                      0xFF
#define PSMC1POL_clear_mask                      0x0

#define P1POLA                                   0x0
#define P1POLA_address                           0xE96
#define P1POLA_position                          0x0
#define P1POLA_size                              0x1
#define P1POLA_value_mask                        0x1
#define P1POLA_clear_mask                        0xFE

#define P1POLB                                   0x1
#define P1POLB_address                           0xE96
#define P1POLB_position                          0x1
#define P1POLB_size                              0x1
#define P1POLB_value_mask                        0x2
#define P1POLB_clear_mask                        0xFD

#define P1POLC                                   0x2
#define P1POLC_address                           0xE96
#define P1POLC_position                          0x2
#define P1POLC_size                              0x1
#define P1POLC_value_mask                        0x4
#define P1POLC_clear_mask                        0xFB

#define P1POLD                                   0x3
#define P1POLD_address                           0xE96
#define P1POLD_position                          0x3
#define P1POLD_size                              0x1
#define P1POLD_value_mask                        0x8
#define P1POLD_clear_mask                        0xF7

#define P1POLE                                   0x4
#define P1POLE_address                           0xE96
#define P1POLE_position                          0x4
#define P1POLE_size                              0x1
#define P1POLE_value_mask                        0x10
#define P1POLE_clear_mask                        0xEF

#define P1POLF                                   0x5
#define P1POLF_address                           0xE96
#define P1POLF_position                          0x5
#define P1POLF_size                              0x1
#define P1POLF_value_mask                        0x20
#define P1POLF_clear_mask                        0xDF

#define P1INPOL                                  0x6
#define P1INPOL_address                          0xE96
#define P1INPOL_position                         0x6
#define P1INPOL_size                             0x1
#define P1INPOL_value_mask                       0x40
#define P1INPOL_clear_mask                       0xBF


/*------------------------------------------------------#
| PSMC1BLNK                                       0xE97 |
#-------------------------------------------------------#
| - | - | P1FEBM1 | P1FEBM0 | - | - | P1REBM1 | P1REBM0 |
#-------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3 | 2 | 1       | 0       |
#------------------------------------------------------*/

#define PSMC1BLNK                                0x0
#define PSMC1BLNK_address                        0xE97
#define PSMC1BLNK_position                       0x0
#define PSMC1BLNK_size                           0x8
#define PSMC1BLNK_value_mask                     0xFF
#define PSMC1BLNK_clear_mask                     0x0

#define P1REBM                                   0x0
#define P1REBM_address                           0xE97
#define P1REBM_position                          0x0
#define P1REBM_size                              0x2
#define P1REBM_value_mask                        0x3
#define P1REBM_clear_mask                        0xFC

#define P1REBM0                                  0x0
#define P1REBM0_address                          0xE97
#define P1REBM0_position                         0x0
#define P1REBM0_size                             0x1
#define P1REBM0_value_mask                       0x1
#define P1REBM0_clear_mask                       0xFE

#define P1REBM1                                  0x1
#define P1REBM1_address                          0xE97
#define P1REBM1_position                         0x1
#define P1REBM1_size                             0x1
#define P1REBM1_value_mask                       0x2
#define P1REBM1_clear_mask                       0xFD

#define P1FEBM0                                  0x4
#define P1FEBM0_address                          0xE97
#define P1FEBM0_position                         0x4
#define P1FEBM0_size                             0x1
#define P1FEBM0_value_mask                       0x10
#define P1FEBM0_clear_mask                       0xEF

#define P1FEBM                                   0x4
#define P1FEBM_address                           0xE97
#define P1FEBM_position                          0x4
#define P1FEBM_size                              0x2
#define P1FEBM_value_mask                        0x30
#define P1FEBM_clear_mask                        0xCF

#define P1FEBM1                                  0x5
#define P1FEBM1_address                          0xE97
#define P1FEBM1_position                         0x5
#define P1FEBM1_size                             0x1
#define P1FEBM1_value_mask                       0x20
#define P1FEBM1_clear_mask                       0xDF


/*-----------------------------------------------------------------#
| PSMC1REBS                                                  0xE98 |
#------------------------------------------------------------------#
| P1REBSIN | - | - | P1REBSC4 | P1REBSC3 | P1REBSC2 | P1REBSC1 | - |
#------------------------------------------------------------------#
| 7        | 6 | 5 | 4        | 3        | 2        | 1        | 0 |
#-----------------------------------------------------------------*/

#define PSMC1REBS                                0x0
#define PSMC1REBS_address                        0xE98
#define PSMC1REBS_position                       0x0
#define PSMC1REBS_size                           0x8
#define PSMC1REBS_value_mask                     0xFF
#define PSMC1REBS_clear_mask                     0x0

#define P1REBSC1                                 0x1
#define P1REBSC1_address                         0xE98
#define P1REBSC1_position                        0x1
#define P1REBSC1_size                            0x1
#define P1REBSC1_value_mask                      0x2
#define P1REBSC1_clear_mask                      0xFD

#define P1REBSC2                                 0x2
#define P1REBSC2_address                         0xE98
#define P1REBSC2_position                        0x2
#define P1REBSC2_size                            0x1
#define P1REBSC2_value_mask                      0x4
#define P1REBSC2_clear_mask                      0xFB

#define P1REBSC3                                 0x3
#define P1REBSC3_address                         0xE98
#define P1REBSC3_position                        0x3
#define P1REBSC3_size                            0x1
#define P1REBSC3_value_mask                      0x8
#define P1REBSC3_clear_mask                      0xF7

#define P1REBSC4                                 0x4
#define P1REBSC4_address                         0xE98
#define P1REBSC4_position                        0x4
#define P1REBSC4_size                            0x1
#define P1REBSC4_value_mask                      0x10
#define P1REBSC4_clear_mask                      0xEF

#define P1REBSIN                                 0x7
#define P1REBSIN_address                         0xE98
#define P1REBSIN_position                        0x7
#define P1REBSIN_size                            0x1
#define P1REBSIN_value_mask                      0x80
#define P1REBSIN_clear_mask                      0x7F


/*-----------------------------------------------------------------#
| PSMC1FEBS                                                  0xE99 |
#------------------------------------------------------------------#
| P1FEBSIN | - | - | P1FEBSC4 | P1FEBSC3 | P1FEBSC2 | P1FEBSC1 | - |
#------------------------------------------------------------------#
| 7        | 6 | 5 | 4        | 3        | 2        | 1        | 0 |
#-----------------------------------------------------------------*/

#define PSMC1FEBS                                0x0
#define PSMC1FEBS_address                        0xE99
#define PSMC1FEBS_position                       0x0
#define PSMC1FEBS_size                           0x8
#define PSMC1FEBS_value_mask                     0xFF
#define PSMC1FEBS_clear_mask                     0x0

#define P1FEBSC1                                 0x1
#define P1FEBSC1_address                         0xE99
#define P1FEBSC1_position                        0x1
#define P1FEBSC1_size                            0x1
#define P1FEBSC1_value_mask                      0x2
#define P1FEBSC1_clear_mask                      0xFD

#define P1FEBSC2                                 0x2
#define P1FEBSC2_address                         0xE99
#define P1FEBSC2_position                        0x2
#define P1FEBSC2_size                            0x1
#define P1FEBSC2_value_mask                      0x4
#define P1FEBSC2_clear_mask                      0xFB

#define P1FEBSC3                                 0x3
#define P1FEBSC3_address                         0xE99
#define P1FEBSC3_position                        0x3
#define P1FEBSC3_size                            0x1
#define P1FEBSC3_value_mask                      0x8
#define P1FEBSC3_clear_mask                      0xF7

#define P1FEBSC4                                 0x4
#define P1FEBSC4_address                         0xE99
#define P1FEBSC4_position                        0x4
#define P1FEBSC4_size                            0x1
#define P1FEBSC4_value_mask                      0x10
#define P1FEBSC4_clear_mask                      0xEF

#define P1FEBSIN                                 0x7
#define P1FEBSIN_address                         0xE99
#define P1FEBSIN_position                        0x7
#define P1FEBSIN_size                            0x1
#define P1FEBSIN_value_mask                      0x80
#define P1FEBSIN_clear_mask                      0x7F


/*-----------------------------------------------------------------#
| PSMC1PHS                                                   0xE9A |
#------------------------------------------------------------------#
| P1PHSIN | - | - | P1PHSC4 | P1PHSC3 | P1PHSC2 | P1PHSC1 | P1PHST |
#------------------------------------------------------------------#
| 7       | 6 | 5 | 4       | 3       | 2       | 1       | 0      |
#-----------------------------------------------------------------*/

#define PSMC1PHS                                 0x0
#define PSMC1PHS_address                         0xE9A
#define PSMC1PHS_position                        0x0
#define PSMC1PHS_size                            0x8
#define PSMC1PHS_value_mask                      0xFF
#define PSMC1PHS_clear_mask                      0x0

#define P1PHST                                   0x0
#define P1PHST_address                           0xE9A
#define P1PHST_position                          0x0
#define P1PHST_size                              0x1
#define P1PHST_value_mask                        0x1
#define P1PHST_clear_mask                        0xFE

#define P1PHSC1                                  0x1
#define P1PHSC1_address                          0xE9A
#define P1PHSC1_position                         0x1
#define P1PHSC1_size                             0x1
#define P1PHSC1_value_mask                       0x2
#define P1PHSC1_clear_mask                       0xFD

#define P1PHSC2                                  0x2
#define P1PHSC2_address                          0xE9A
#define P1PHSC2_position                         0x2
#define P1PHSC2_size                             0x1
#define P1PHSC2_value_mask                       0x4
#define P1PHSC2_clear_mask                       0xFB

#define P1PHSC3                                  0x3
#define P1PHSC3_address                          0xE9A
#define P1PHSC3_position                         0x3
#define P1PHSC3_size                             0x1
#define P1PHSC3_value_mask                       0x8
#define P1PHSC3_clear_mask                       0xF7

#define P1PHSC4                                  0x4
#define P1PHSC4_address                          0xE9A
#define P1PHSC4_position                         0x4
#define P1PHSC4_size                             0x1
#define P1PHSC4_value_mask                       0x10
#define P1PHSC4_clear_mask                       0xEF

#define P1PHSIN                                  0x7
#define P1PHSIN_address                          0xE9A
#define P1PHSIN_position                         0x7
#define P1PHSIN_size                             0x1
#define P1PHSIN_value_mask                       0x80
#define P1PHSIN_clear_mask                       0x7F


/*-----------------------------------------------------------------#
| PSMC1DCS                                                   0xE9B |
#------------------------------------------------------------------#
| P1DCSIN | - | - | P1DCSC4 | P1DCSC3 | P1DCSC2 | P1DCSC1 | P1DCST |
#------------------------------------------------------------------#
| 7       | 6 | 5 | 4       | 3       | 2       | 1       | 0      |
#-----------------------------------------------------------------*/

#define PSMC1DCS                                 0x0
#define PSMC1DCS_address                         0xE9B
#define PSMC1DCS_position                        0x0
#define PSMC1DCS_size                            0x8
#define PSMC1DCS_value_mask                      0xFF
#define PSMC1DCS_clear_mask                      0x0

#define P1DCST                                   0x0
#define P1DCST_address                           0xE9B
#define P1DCST_position                          0x0
#define P1DCST_size                              0x1
#define P1DCST_value_mask                        0x1
#define P1DCST_clear_mask                        0xFE

#define P1DCSC1                                  0x1
#define P1DCSC1_address                          0xE9B
#define P1DCSC1_position                         0x1
#define P1DCSC1_size                             0x1
#define P1DCSC1_value_mask                       0x2
#define P1DCSC1_clear_mask                       0xFD

#define P1DCSC2                                  0x2
#define P1DCSC2_address                          0xE9B
#define P1DCSC2_position                         0x2
#define P1DCSC2_size                             0x1
#define P1DCSC2_value_mask                       0x4
#define P1DCSC2_clear_mask                       0xFB

#define P1DCSC3                                  0x3
#define P1DCSC3_address                          0xE9B
#define P1DCSC3_position                         0x3
#define P1DCSC3_size                             0x1
#define P1DCSC3_value_mask                       0x8
#define P1DCSC3_clear_mask                       0xF7

#define P1DCSC4                                  0x4
#define P1DCSC4_address                          0xE9B
#define P1DCSC4_position                         0x4
#define P1DCSC4_size                             0x1
#define P1DCSC4_value_mask                       0x10
#define P1DCSC4_clear_mask                       0xEF

#define P1DCSIN                                  0x7
#define P1DCSIN_address                          0xE9B
#define P1DCSIN_position                         0x7
#define P1DCSIN_size                             0x1
#define P1DCSIN_value_mask                       0x80
#define P1DCSIN_clear_mask                       0x7F


/*-----------------------------------------------------------------#
| PSMC1PRS                                                   0xE9C |
#------------------------------------------------------------------#
| P1PRSIN | - | - | P1PRSC4 | P1PRSC3 | P1PRSC2 | P1PRSC1 | P1PRST |
#------------------------------------------------------------------#
| 7       | 6 | 5 | 4       | 3       | 2       | 1       | 0      |
#-----------------------------------------------------------------*/

#define PSMC1PRS                                 0x0
#define PSMC1PRS_address                         0xE9C
#define PSMC1PRS_position                        0x0
#define PSMC1PRS_size                            0x8
#define PSMC1PRS_value_mask                      0xFF
#define PSMC1PRS_clear_mask                      0x0

#define P1PRST                                   0x0
#define P1PRST_address                           0xE9C
#define P1PRST_position                          0x0
#define P1PRST_size                              0x1
#define P1PRST_value_mask                        0x1
#define P1PRST_clear_mask                        0xFE

#define P1PRSC1                                  0x1
#define P1PRSC1_address                          0xE9C
#define P1PRSC1_position                         0x1
#define P1PRSC1_size                             0x1
#define P1PRSC1_value_mask                       0x2
#define P1PRSC1_clear_mask                       0xFD

#define P1PRSC2                                  0x2
#define P1PRSC2_address                          0xE9C
#define P1PRSC2_position                         0x2
#define P1PRSC2_size                             0x1
#define P1PRSC2_value_mask                       0x4
#define P1PRSC2_clear_mask                       0xFB

#define P1PRSC3                                  0x3
#define P1PRSC3_address                          0xE9C
#define P1PRSC3_position                         0x3
#define P1PRSC3_size                             0x1
#define P1PRSC3_value_mask                       0x8
#define P1PRSC3_clear_mask                       0xF7

#define P1PRSC4                                  0x4
#define P1PRSC4_address                          0xE9C
#define P1PRSC4_position                         0x4
#define P1PRSC4_size                             0x1
#define P1PRSC4_value_mask                       0x10
#define P1PRSC4_clear_mask                       0xEF

#define P1PRSIN                                  0x7
#define P1PRSIN_address                          0xE9C
#define P1PRSIN_position                         0x7
#define P1PRSIN_size                             0x1
#define P1PRSIN_value_mask                       0x80
#define P1PRSIN_clear_mask                       0x7F


/*----------------------------------------------------#
| PSMC1ASDC                                     0xE9D |
#-----------------------------------------------------#
| P1ASE | P1ASDEN | P1ARSEN | - | - | - | - | P1ASDOV |
#-----------------------------------------------------#
| 7     | 6       | 5       | 4 | 3 | 2 | 1 | 0       |
#----------------------------------------------------*/

#define PSMC1ASDC                                0x0
#define PSMC1ASDC_address                        0xE9D
#define PSMC1ASDC_position                       0x0
#define PSMC1ASDC_size                           0x8
#define PSMC1ASDC_value_mask                     0xFF
#define PSMC1ASDC_clear_mask                     0x0

#define P1ASDOV                                  0x0
#define P1ASDOV_address                          0xE9D
#define P1ASDOV_position                         0x0
#define P1ASDOV_size                             0x1
#define P1ASDOV_value_mask                       0x1
#define P1ASDOV_clear_mask                       0xFE

#define P1ARSEN                                  0x5
#define P1ARSEN_address                          0xE9D
#define P1ARSEN_position                         0x5
#define P1ARSEN_size                             0x1
#define P1ARSEN_value_mask                       0x20
#define P1ARSEN_clear_mask                       0xDF

#define P1ASDEN                                  0x6
#define P1ASDEN_address                          0xE9D
#define P1ASDEN_position                         0x6
#define P1ASDEN_size                             0x1
#define P1ASDEN_value_mask                       0x40
#define P1ASDEN_clear_mask                       0xBF

#define P1ASE                                    0x7
#define P1ASE_address                            0xE9D
#define P1ASE_position                           0x7
#define P1ASE_size                               0x1
#define P1ASE_value_mask                         0x80
#define P1ASE_clear_mask                         0x7F


/*------------------------------------------------------------------#
| PSMC1ASDL                                                   0xE9E |
#-------------------------------------------------------------------#
| - | - | P1ASDLF | P1ASDLE | P1ASDLD | P1ASDLC | P1ASDLB | P1ASDLA |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define PSMC1ASDL                                0x0
#define PSMC1ASDL_address                        0xE9E
#define PSMC1ASDL_position                       0x0
#define PSMC1ASDL_size                           0x8
#define PSMC1ASDL_value_mask                     0xFF
#define PSMC1ASDL_clear_mask                     0x0

#define P1ASDLA                                  0x0
#define P1ASDLA_address                          0xE9E
#define P1ASDLA_position                         0x0
#define P1ASDLA_size                             0x1
#define P1ASDLA_value_mask                       0x1
#define P1ASDLA_clear_mask                       0xFE

#define P1ASDLB                                  0x1
#define P1ASDLB_address                          0xE9E
#define P1ASDLB_position                         0x1
#define P1ASDLB_size                             0x1
#define P1ASDLB_value_mask                       0x2
#define P1ASDLB_clear_mask                       0xFD

#define P1ASDLC                                  0x2
#define P1ASDLC_address                          0xE9E
#define P1ASDLC_position                         0x2
#define P1ASDLC_size                             0x1
#define P1ASDLC_value_mask                       0x4
#define P1ASDLC_clear_mask                       0xFB

#define P1ASDLD                                  0x3
#define P1ASDLD_address                          0xE9E
#define P1ASDLD_position                         0x3
#define P1ASDLD_size                             0x1
#define P1ASDLD_value_mask                       0x8
#define P1ASDLD_clear_mask                       0xF7

#define P1ASDLE                                  0x4
#define P1ASDLE_address                          0xE9E
#define P1ASDLE_position                         0x4
#define P1ASDLE_size                             0x1
#define P1ASDLE_value_mask                       0x10
#define P1ASDLE_clear_mask                       0xEF

#define P1ASDLF                                  0x5
#define P1ASDLF_address                          0xE9E
#define P1ASDLF_position                         0x5
#define P1ASDLF_size                             0x1
#define P1ASDLF_value_mask                       0x20
#define P1ASDLF_clear_mask                       0xDF


/*-----------------------------------------------------------------#
| PSMC1ASDS                                                  0xE9F |
#------------------------------------------------------------------#
| P1ASDSIN | - | - | P1ASDSC4 | P1ASDSC3 | P1ASDSC2 | P1ASDSC1 | - |
#------------------------------------------------------------------#
| 7        | 6 | 5 | 4        | 3        | 2        | 1        | 0 |
#-----------------------------------------------------------------*/

#define PSMC1ASDS                                0x0
#define PSMC1ASDS_address                        0xE9F
#define PSMC1ASDS_position                       0x0
#define PSMC1ASDS_size                           0x8
#define PSMC1ASDS_value_mask                     0xFF
#define PSMC1ASDS_clear_mask                     0x0

#define P1ASDSC1                                 0x1
#define P1ASDSC1_address                         0xE9F
#define P1ASDSC1_position                        0x1
#define P1ASDSC1_size                            0x1
#define P1ASDSC1_value_mask                      0x2
#define P1ASDSC1_clear_mask                      0xFD

#define P1ASDSC2                                 0x2
#define P1ASDSC2_address                         0xE9F
#define P1ASDSC2_position                        0x2
#define P1ASDSC2_size                            0x1
#define P1ASDSC2_value_mask                      0x4
#define P1ASDSC2_clear_mask                      0xFB

#define P1ASDSC3                                 0x3
#define P1ASDSC3_address                         0xE9F
#define P1ASDSC3_position                        0x3
#define P1ASDSC3_size                            0x1
#define P1ASDSC3_value_mask                      0x8
#define P1ASDSC3_clear_mask                      0xF7

#define P1ASDSC4                                 0x4
#define P1ASDSC4_address                         0xE9F
#define P1ASDSC4_position                        0x4
#define P1ASDSC4_size                            0x1
#define P1ASDSC4_value_mask                      0x10
#define P1ASDSC4_clear_mask                      0xEF

#define P1ASDSIN                                 0x7
#define P1ASDSIN_address                         0xE9F
#define P1ASDSIN_position                        0x7
#define P1ASDSIN_size                            0x1
#define P1ASDSIN_value_mask                      0x80
#define P1ASDSIN_clear_mask                      0x7F


/*------------------------------------------------------------------------------#
| PSMC1INT                                                                0xEA0 |
#-------------------------------------------------------------------------------#
| P1TOVIE | P1TPHIE | P1TDCIE | P1TPRIE | P1TOVIF | P1TPHIF | P1TDCIF | P1TPRIF |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define PSMC1INT                                 0x0
#define PSMC1INT_address                         0xEA0
#define PSMC1INT_position                        0x0
#define PSMC1INT_size                            0x8
#define PSMC1INT_value_mask                      0xFF
#define PSMC1INT_clear_mask                      0x0

#define P1TPRIF                                  0x0
#define P1TPRIF_address                          0xEA0
#define P1TPRIF_position                         0x0
#define P1TPRIF_size                             0x1
#define P1TPRIF_value_mask                       0x1
#define P1TPRIF_clear_mask                       0xFE

#define P1TDCIF                                  0x1
#define P1TDCIF_address                          0xEA0
#define P1TDCIF_position                         0x1
#define P1TDCIF_size                             0x1
#define P1TDCIF_value_mask                       0x2
#define P1TDCIF_clear_mask                       0xFD

#define P1TPHIF                                  0x2
#define P1TPHIF_address                          0xEA0
#define P1TPHIF_position                         0x2
#define P1TPHIF_size                             0x1
#define P1TPHIF_value_mask                       0x4
#define P1TPHIF_clear_mask                       0xFB

#define P1TOVIF                                  0x3
#define P1TOVIF_address                          0xEA0
#define P1TOVIF_position                         0x3
#define P1TOVIF_size                             0x1
#define P1TOVIF_value_mask                       0x8
#define P1TOVIF_clear_mask                       0xF7

#define P1TPRIE                                  0x4
#define P1TPRIE_address                          0xEA0
#define P1TPRIE_position                         0x4
#define P1TPRIE_size                             0x1
#define P1TPRIE_value_mask                       0x10
#define P1TPRIE_clear_mask                       0xEF

#define P1TDCIE                                  0x5
#define P1TDCIE_address                          0xEA0
#define P1TDCIE_position                         0x5
#define P1TDCIE_size                             0x1
#define P1TDCIE_value_mask                       0x20
#define P1TDCIE_clear_mask                       0xDF

#define P1TPHIE                                  0x6
#define P1TPHIE_address                          0xEA0
#define P1TPHIE_position                         0x6
#define P1TPHIE_size                             0x1
#define P1TPHIE_value_mask                       0x40
#define P1TPHIE_clear_mask                       0xBF

#define P1TOVIE                                  0x7
#define P1TOVIE_address                          0xEA0
#define P1TOVIE_position                         0x7
#define P1TOVIE_size                             0x1
#define P1TOVIE_value_mask                       0x80
#define P1TOVIE_clear_mask                       0x7F


/*--------------------------------------------------------------------------------------#
| PSMC1PHL                                                                        0xEA1 |
#---------------------------------------------------------------------------------------#
| PSMC1PH7 | PSMC1PH6 | PSMC1PH5 | PSMC1PH4 | PSMC1PH3 | PSMC1PH2 | PSMC1PH1 | PSMC1PH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PSMC1PHL                                 0x0
#define PSMC1PHL_address                         0xEA1
#define PSMC1PHL_position                        0x0
#define PSMC1PHL_size                            0x8
#define PSMC1PHL_value_mask                      0xFF
#define PSMC1PHL_clear_mask                      0x0

#define PSMC1PH0                                 0x0
#define PSMC1PH0_address                         0xEA1
#define PSMC1PH0_position                        0x0
#define PSMC1PH0_size                            0x1
#define PSMC1PH0_value_mask                      0x1
#define PSMC1PH0_clear_mask                      0xFE

#define PSMC1PH1                                 0x1
#define PSMC1PH1_address                         0xEA1
#define PSMC1PH1_position                        0x1
#define PSMC1PH1_size                            0x1
#define PSMC1PH1_value_mask                      0x2
#define PSMC1PH1_clear_mask                      0xFD

#define PSMC1PH2                                 0x2
#define PSMC1PH2_address                         0xEA1
#define PSMC1PH2_position                        0x2
#define PSMC1PH2_size                            0x1
#define PSMC1PH2_value_mask                      0x4
#define PSMC1PH2_clear_mask                      0xFB

#define PSMC1PH3                                 0x3
#define PSMC1PH3_address                         0xEA1
#define PSMC1PH3_position                        0x3
#define PSMC1PH3_size                            0x1
#define PSMC1PH3_value_mask                      0x8
#define PSMC1PH3_clear_mask                      0xF7

#define PSMC1PH4                                 0x4
#define PSMC1PH4_address                         0xEA1
#define PSMC1PH4_position                        0x4
#define PSMC1PH4_size                            0x1
#define PSMC1PH4_value_mask                      0x10
#define PSMC1PH4_clear_mask                      0xEF

#define PSMC1PH5                                 0x5
#define PSMC1PH5_address                         0xEA1
#define PSMC1PH5_position                        0x5
#define PSMC1PH5_size                            0x1
#define PSMC1PH5_value_mask                      0x20
#define PSMC1PH5_clear_mask                      0xDF

#define PSMC1PH6                                 0x6
#define PSMC1PH6_address                         0xEA1
#define PSMC1PH6_position                        0x6
#define PSMC1PH6_size                            0x1
#define PSMC1PH6_value_mask                      0x40
#define PSMC1PH6_clear_mask                      0xBF

#define PSMC1PH7                                 0x7
#define PSMC1PH7_address                         0xEA1
#define PSMC1PH7_position                        0x7
#define PSMC1PH7_size                            0x1
#define PSMC1PH7_value_mask                      0x80
#define PSMC1PH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| PSMC1PHH                                                                              0xEA2 |
#---------------------------------------------------------------------------------------------#
| PSMC1PH15 | PSMC1PH14 | PSMC1PH13 | PSMC1PH12 | PSMC1PH11 | PSMC1PH10 | PSMC1PH9 | PSMC1PH8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define PSMC1PHH                                 0x0
#define PSMC1PHH_address                         0xEA2
#define PSMC1PHH_position                        0x0
#define PSMC1PHH_size                            0x8
#define PSMC1PHH_value_mask                      0xFF
#define PSMC1PHH_clear_mask                      0x0

#define PSMC1PH8                                 0x0
#define PSMC1PH8_address                         0xEA2
#define PSMC1PH8_position                        0x0
#define PSMC1PH8_size                            0x1
#define PSMC1PH8_value_mask                      0x1
#define PSMC1PH8_clear_mask                      0xFE

#define PSMC1PH9                                 0x1
#define PSMC1PH9_address                         0xEA2
#define PSMC1PH9_position                        0x1
#define PSMC1PH9_size                            0x1
#define PSMC1PH9_value_mask                      0x2
#define PSMC1PH9_clear_mask                      0xFD

#define PSMC1PH10                                0x2
#define PSMC1PH10_address                        0xEA2
#define PSMC1PH10_position                       0x2
#define PSMC1PH10_size                           0x1
#define PSMC1PH10_value_mask                     0x4
#define PSMC1PH10_clear_mask                     0xFB

#define PSMC1PH11                                0x3
#define PSMC1PH11_address                        0xEA2
#define PSMC1PH11_position                       0x3
#define PSMC1PH11_size                           0x1
#define PSMC1PH11_value_mask                     0x8
#define PSMC1PH11_clear_mask                     0xF7

#define PSMC1PH12                                0x4
#define PSMC1PH12_address                        0xEA2
#define PSMC1PH12_position                       0x4
#define PSMC1PH12_size                           0x1
#define PSMC1PH12_value_mask                     0x10
#define PSMC1PH12_clear_mask                     0xEF

#define PSMC1PH13                                0x5
#define PSMC1PH13_address                        0xEA2
#define PSMC1PH13_position                       0x5
#define PSMC1PH13_size                           0x1
#define PSMC1PH13_value_mask                     0x20
#define PSMC1PH13_clear_mask                     0xDF

#define PSMC1PH14                                0x6
#define PSMC1PH14_address                        0xEA2
#define PSMC1PH14_position                       0x6
#define PSMC1PH14_size                           0x1
#define PSMC1PH14_value_mask                     0x40
#define PSMC1PH14_clear_mask                     0xBF

#define PSMC1PH15                                0x7
#define PSMC1PH15_address                        0xEA2
#define PSMC1PH15_position                       0x7
#define PSMC1PH15_size                           0x1
#define PSMC1PH15_value_mask                     0x80
#define PSMC1PH15_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| PSMC1DCL                                                                        0xEA3 |
#---------------------------------------------------------------------------------------#
| PSMC1DC7 | PSMC1DC6 | PSMC1DC5 | PSMC1DC4 | PSMC1DC3 | PSMC1DC2 | PSMC1DC1 | PSMC1DC0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PSMC1DCL                                 0x0
#define PSMC1DCL_address                         0xEA3
#define PSMC1DCL_position                        0x0
#define PSMC1DCL_size                            0x8
#define PSMC1DCL_value_mask                      0xFF
#define PSMC1DCL_clear_mask                      0x0

#define PSMC1DC0                                 0x0
#define PSMC1DC0_address                         0xEA3
#define PSMC1DC0_position                        0x0
#define PSMC1DC0_size                            0x1
#define PSMC1DC0_value_mask                      0x1
#define PSMC1DC0_clear_mask                      0xFE

#define PSMC1DC1                                 0x1
#define PSMC1DC1_address                         0xEA3
#define PSMC1DC1_position                        0x1
#define PSMC1DC1_size                            0x1
#define PSMC1DC1_value_mask                      0x2
#define PSMC1DC1_clear_mask                      0xFD

#define PSMC1DC2                                 0x2
#define PSMC1DC2_address                         0xEA3
#define PSMC1DC2_position                        0x2
#define PSMC1DC2_size                            0x1
#define PSMC1DC2_value_mask                      0x4
#define PSMC1DC2_clear_mask                      0xFB

#define PSMC1DC3                                 0x3
#define PSMC1DC3_address                         0xEA3
#define PSMC1DC3_position                        0x3
#define PSMC1DC3_size                            0x1
#define PSMC1DC3_value_mask                      0x8
#define PSMC1DC3_clear_mask                      0xF7

#define PSMC1DC4                                 0x4
#define PSMC1DC4_address                         0xEA3
#define PSMC1DC4_position                        0x4
#define PSMC1DC4_size                            0x1
#define PSMC1DC4_value_mask                      0x10
#define PSMC1DC4_clear_mask                      0xEF

#define PSMC1DC5                                 0x5
#define PSMC1DC5_address                         0xEA3
#define PSMC1DC5_position                        0x5
#define PSMC1DC5_size                            0x1
#define PSMC1DC5_value_mask                      0x20
#define PSMC1DC5_clear_mask                      0xDF

#define PSMC1DC6                                 0x6
#define PSMC1DC6_address                         0xEA3
#define PSMC1DC6_position                        0x6
#define PSMC1DC6_size                            0x1
#define PSMC1DC6_value_mask                      0x40
#define PSMC1DC6_clear_mask                      0xBF

#define PSMC1DC7                                 0x7
#define PSMC1DC7_address                         0xEA3
#define PSMC1DC7_position                        0x7
#define PSMC1DC7_size                            0x1
#define PSMC1DC7_value_mask                      0x80
#define PSMC1DC7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| PSMC1DCH                                                                              0xEA4 |
#---------------------------------------------------------------------------------------------#
| PSMC1DC15 | PSMC1DC14 | PSMC1DC13 | PSMC1DC12 | PSMC1DC11 | PSMC1DC10 | PSMC1DC9 | PSMC1DC8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define PSMC1DCH                                 0x0
#define PSMC1DCH_address                         0xEA4
#define PSMC1DCH_position                        0x0
#define PSMC1DCH_size                            0x8
#define PSMC1DCH_value_mask                      0xFF
#define PSMC1DCH_clear_mask                      0x0

#define PSMC1DC8                                 0x0
#define PSMC1DC8_address                         0xEA4
#define PSMC1DC8_position                        0x0
#define PSMC1DC8_size                            0x1
#define PSMC1DC8_value_mask                      0x1
#define PSMC1DC8_clear_mask                      0xFE

#define PSMC1DC9                                 0x1
#define PSMC1DC9_address                         0xEA4
#define PSMC1DC9_position                        0x1
#define PSMC1DC9_size                            0x1
#define PSMC1DC9_value_mask                      0x2
#define PSMC1DC9_clear_mask                      0xFD

#define PSMC1DC10                                0x2
#define PSMC1DC10_address                        0xEA4
#define PSMC1DC10_position                       0x2
#define PSMC1DC10_size                           0x1
#define PSMC1DC10_value_mask                     0x4
#define PSMC1DC10_clear_mask                     0xFB

#define PSMC1DC11                                0x3
#define PSMC1DC11_address                        0xEA4
#define PSMC1DC11_position                       0x3
#define PSMC1DC11_size                           0x1
#define PSMC1DC11_value_mask                     0x8
#define PSMC1DC11_clear_mask                     0xF7

#define PSMC1DC12                                0x4
#define PSMC1DC12_address                        0xEA4
#define PSMC1DC12_position                       0x4
#define PSMC1DC12_size                           0x1
#define PSMC1DC12_value_mask                     0x10
#define PSMC1DC12_clear_mask                     0xEF

#define PSMC1DC13                                0x5
#define PSMC1DC13_address                        0xEA4
#define PSMC1DC13_position                       0x5
#define PSMC1DC13_size                           0x1
#define PSMC1DC13_value_mask                     0x20
#define PSMC1DC13_clear_mask                     0xDF

#define PSMC1DC14                                0x6
#define PSMC1DC14_address                        0xEA4
#define PSMC1DC14_position                       0x6
#define PSMC1DC14_size                           0x1
#define PSMC1DC14_value_mask                     0x40
#define PSMC1DC14_clear_mask                     0xBF

#define PSMC1DC15                                0x7
#define PSMC1DC15_address                        0xEA4
#define PSMC1DC15_position                       0x7
#define PSMC1DC15_size                           0x1
#define PSMC1DC15_value_mask                     0x80
#define PSMC1DC15_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| PSMC1PRL                                                                        0xEA5 |
#---------------------------------------------------------------------------------------#
| PSMC1PR7 | PSMC1PR6 | PSMC1PR5 | PSMC1PR4 | PSMC1PR3 | PSMC1PR2 | PSMC1PR1 | PSMC1PR0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PSMC1PRL                                 0x0
#define PSMC1PRL_address                         0xEA5
#define PSMC1PRL_position                        0x0
#define PSMC1PRL_size                            0x8
#define PSMC1PRL_value_mask                      0xFF
#define PSMC1PRL_clear_mask                      0x0

#define PSMC1PR0                                 0x0
#define PSMC1PR0_address                         0xEA5
#define PSMC1PR0_position                        0x0
#define PSMC1PR0_size                            0x1
#define PSMC1PR0_value_mask                      0x1
#define PSMC1PR0_clear_mask                      0xFE

#define PSMC1PR1                                 0x1
#define PSMC1PR1_address                         0xEA5
#define PSMC1PR1_position                        0x1
#define PSMC1PR1_size                            0x1
#define PSMC1PR1_value_mask                      0x2
#define PSMC1PR1_clear_mask                      0xFD

#define PSMC1PR2                                 0x2
#define PSMC1PR2_address                         0xEA5
#define PSMC1PR2_position                        0x2
#define PSMC1PR2_size                            0x1
#define PSMC1PR2_value_mask                      0x4
#define PSMC1PR2_clear_mask                      0xFB

#define PSMC1PR3                                 0x3
#define PSMC1PR3_address                         0xEA5
#define PSMC1PR3_position                        0x3
#define PSMC1PR3_size                            0x1
#define PSMC1PR3_value_mask                      0x8
#define PSMC1PR3_clear_mask                      0xF7

#define PSMC1PR4                                 0x4
#define PSMC1PR4_address                         0xEA5
#define PSMC1PR4_position                        0x4
#define PSMC1PR4_size                            0x1
#define PSMC1PR4_value_mask                      0x10
#define PSMC1PR4_clear_mask                      0xEF

#define PSMC1PR5                                 0x5
#define PSMC1PR5_address                         0xEA5
#define PSMC1PR5_position                        0x5
#define PSMC1PR5_size                            0x1
#define PSMC1PR5_value_mask                      0x20
#define PSMC1PR5_clear_mask                      0xDF

#define PSMC1PR6                                 0x6
#define PSMC1PR6_address                         0xEA5
#define PSMC1PR6_position                        0x6
#define PSMC1PR6_size                            0x1
#define PSMC1PR6_value_mask                      0x40
#define PSMC1PR6_clear_mask                      0xBF

#define PSMC1PR7                                 0x7
#define PSMC1PR7_address                         0xEA5
#define PSMC1PR7_position                        0x7
#define PSMC1PR7_size                            0x1
#define PSMC1PR7_value_mask                      0x80
#define PSMC1PR7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| PSMC1PRH                                                                              0xEA6 |
#---------------------------------------------------------------------------------------------#
| PSMC1PR15 | PSMC1PR14 | PSMC1PR13 | PSMC1PR12 | PSMC1PR11 | PSMC1PR10 | PSMC1PR9 | PSMC1PR8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define PSMC1PRH                                 0x0
#define PSMC1PRH_address                         0xEA6
#define PSMC1PRH_position                        0x0
#define PSMC1PRH_size                            0x8
#define PSMC1PRH_value_mask                      0xFF
#define PSMC1PRH_clear_mask                      0x0

#define PSMC1PR8                                 0x0
#define PSMC1PR8_address                         0xEA6
#define PSMC1PR8_position                        0x0
#define PSMC1PR8_size                            0x1
#define PSMC1PR8_value_mask                      0x1
#define PSMC1PR8_clear_mask                      0xFE

#define PSMC1PR9                                 0x1
#define PSMC1PR9_address                         0xEA6
#define PSMC1PR9_position                        0x1
#define PSMC1PR9_size                            0x1
#define PSMC1PR9_value_mask                      0x2
#define PSMC1PR9_clear_mask                      0xFD

#define PSMC1PR10                                0x2
#define PSMC1PR10_address                        0xEA6
#define PSMC1PR10_position                       0x2
#define PSMC1PR10_size                           0x1
#define PSMC1PR10_value_mask                     0x4
#define PSMC1PR10_clear_mask                     0xFB

#define PSMC1PR11                                0x3
#define PSMC1PR11_address                        0xEA6
#define PSMC1PR11_position                       0x3
#define PSMC1PR11_size                           0x1
#define PSMC1PR11_value_mask                     0x8
#define PSMC1PR11_clear_mask                     0xF7

#define PSMC1PR12                                0x4
#define PSMC1PR12_address                        0xEA6
#define PSMC1PR12_position                       0x4
#define PSMC1PR12_size                           0x1
#define PSMC1PR12_value_mask                     0x10
#define PSMC1PR12_clear_mask                     0xEF

#define PSMC1PR13                                0x5
#define PSMC1PR13_address                        0xEA6
#define PSMC1PR13_position                       0x5
#define PSMC1PR13_size                           0x1
#define PSMC1PR13_value_mask                     0x20
#define PSMC1PR13_clear_mask                     0xDF

#define PSMC1PR14                                0x6
#define PSMC1PR14_address                        0xEA6
#define PSMC1PR14_position                       0x6
#define PSMC1PR14_size                           0x1
#define PSMC1PR14_value_mask                     0x40
#define PSMC1PR14_clear_mask                     0xBF

#define PSMC1PR15                                0x7
#define PSMC1PR15_address                        0xEA6
#define PSMC1PR15_position                       0x7
#define PSMC1PR15_size                           0x1
#define PSMC1PR15_value_mask                     0x80
#define PSMC1PR15_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| PSMC1TMRL                                                                               0xEA7 |
#-----------------------------------------------------------------------------------------------#
| PSMC1TMR7 | PSMC1TMR6 | PSMC1TMR5 | PSMC1TMR4 | PSMC1TMR3 | PSMC1TMR2 | PSMC1TMR1 | PSMC1TMR0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PSMC1TMRL                                0x0
#define PSMC1TMRL_address                        0xEA7
#define PSMC1TMRL_position                       0x0
#define PSMC1TMRL_size                           0x8
#define PSMC1TMRL_value_mask                     0xFF
#define PSMC1TMRL_clear_mask                     0x0

#define PSMC1TMR0                                0x0
#define PSMC1TMR0_address                        0xEA7
#define PSMC1TMR0_position                       0x0
#define PSMC1TMR0_size                           0x1
#define PSMC1TMR0_value_mask                     0x1
#define PSMC1TMR0_clear_mask                     0xFE

#define PSMC1TMR1                                0x1
#define PSMC1TMR1_address                        0xEA7
#define PSMC1TMR1_position                       0x1
#define PSMC1TMR1_size                           0x1
#define PSMC1TMR1_value_mask                     0x2
#define PSMC1TMR1_clear_mask                     0xFD

#define PSMC1TMR2                                0x2
#define PSMC1TMR2_address                        0xEA7
#define PSMC1TMR2_position                       0x2
#define PSMC1TMR2_size                           0x1
#define PSMC1TMR2_value_mask                     0x4
#define PSMC1TMR2_clear_mask                     0xFB

#define PSMC1TMR3                                0x3
#define PSMC1TMR3_address                        0xEA7
#define PSMC1TMR3_position                       0x3
#define PSMC1TMR3_size                           0x1
#define PSMC1TMR3_value_mask                     0x8
#define PSMC1TMR3_clear_mask                     0xF7

#define PSMC1TMR4                                0x4
#define PSMC1TMR4_address                        0xEA7
#define PSMC1TMR4_position                       0x4
#define PSMC1TMR4_size                           0x1
#define PSMC1TMR4_value_mask                     0x10
#define PSMC1TMR4_clear_mask                     0xEF

#define PSMC1TMR5                                0x5
#define PSMC1TMR5_address                        0xEA7
#define PSMC1TMR5_position                       0x5
#define PSMC1TMR5_size                           0x1
#define PSMC1TMR5_value_mask                     0x20
#define PSMC1TMR5_clear_mask                     0xDF

#define PSMC1TMR6                                0x6
#define PSMC1TMR6_address                        0xEA7
#define PSMC1TMR6_position                       0x6
#define PSMC1TMR6_size                           0x1
#define PSMC1TMR6_value_mask                     0x40
#define PSMC1TMR6_clear_mask                     0xBF

#define PSMC1TMR7                                0x7
#define PSMC1TMR7_address                        0xEA7
#define PSMC1TMR7_position                       0x7
#define PSMC1TMR7_size                           0x1
#define PSMC1TMR7_value_mask                     0x80
#define PSMC1TMR7_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------------#
| PSMC1TMRH                                                                                     0xEA8 |
#-----------------------------------------------------------------------------------------------------#
| PSMC1TMR15 | PSMC1TMR14 | PSMC1TMR13 | PSMC1TMR12 | PSMC1TMR11 | PSMC1TMR10 | PSMC1TMR9 | PSMC1TMR8 |
#-----------------------------------------------------------------------------------------------------#
| 7          | 6          | 5          | 4          | 3          | 2          | 1         | 0         |
#----------------------------------------------------------------------------------------------------*/

#define PSMC1TMRH                                0x0
#define PSMC1TMRH_address                        0xEA8
#define PSMC1TMRH_position                       0x0
#define PSMC1TMRH_size                           0x8
#define PSMC1TMRH_value_mask                     0xFF
#define PSMC1TMRH_clear_mask                     0x0

#define PSMC1TMR8                                0x0
#define PSMC1TMR8_address                        0xEA8
#define PSMC1TMR8_position                       0x0
#define PSMC1TMR8_size                           0x1
#define PSMC1TMR8_value_mask                     0x1
#define PSMC1TMR8_clear_mask                     0xFE

#define PSMC1TMR9                                0x1
#define PSMC1TMR9_address                        0xEA8
#define PSMC1TMR9_position                       0x1
#define PSMC1TMR9_size                           0x1
#define PSMC1TMR9_value_mask                     0x2
#define PSMC1TMR9_clear_mask                     0xFD

#define PSMC1TMR10                               0x2
#define PSMC1TMR10_address                       0xEA8
#define PSMC1TMR10_position                      0x2
#define PSMC1TMR10_size                          0x1
#define PSMC1TMR10_value_mask                    0x4
#define PSMC1TMR10_clear_mask                    0xFB

#define PSMC1TMR11                               0x3
#define PSMC1TMR11_address                       0xEA8
#define PSMC1TMR11_position                      0x3
#define PSMC1TMR11_size                          0x1
#define PSMC1TMR11_value_mask                    0x8
#define PSMC1TMR11_clear_mask                    0xF7

#define PSMC1TMR12                               0x4
#define PSMC1TMR12_address                       0xEA8
#define PSMC1TMR12_position                      0x4
#define PSMC1TMR12_size                          0x1
#define PSMC1TMR12_value_mask                    0x10
#define PSMC1TMR12_clear_mask                    0xEF

#define PSMC1TMR13                               0x5
#define PSMC1TMR13_address                       0xEA8
#define PSMC1TMR13_position                      0x5
#define PSMC1TMR13_size                          0x1
#define PSMC1TMR13_value_mask                    0x20
#define PSMC1TMR13_clear_mask                    0xDF

#define PSMC1TMR14                               0x6
#define PSMC1TMR14_address                       0xEA8
#define PSMC1TMR14_position                      0x6
#define PSMC1TMR14_size                          0x1
#define PSMC1TMR14_value_mask                    0x40
#define PSMC1TMR14_clear_mask                    0xBF

#define PSMC1TMR15                               0x7
#define PSMC1TMR15_address                       0xEA8
#define PSMC1TMR15_position                      0x7
#define PSMC1TMR15_size                          0x1
#define PSMC1TMR15_value_mask                    0x80
#define PSMC1TMR15_clear_mask                    0x7F


/*----------------------------------------------------------------------------------------------#
| PSMC1DBR                                                                                0xEA9 |
#-----------------------------------------------------------------------------------------------#
| PSMC1DBR7 | PSMC1DBR6 | PSMC1DBR5 | PSMC1DBR4 | PSMC1DBR3 | PSMC1DBR2 | PSMC1DBR1 | PSMC1DBR0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PSMC1DBR                                 0x0
#define PSMC1DBR_address                         0xEA9
#define PSMC1DBR_position                        0x0
#define PSMC1DBR_size                            0x8
#define PSMC1DBR_value_mask                      0xFF
#define PSMC1DBR_clear_mask                      0x0

#define PSMC1DBR0                                0x0
#define PSMC1DBR0_address                        0xEA9
#define PSMC1DBR0_position                       0x0
#define PSMC1DBR0_size                           0x1
#define PSMC1DBR0_value_mask                     0x1
#define PSMC1DBR0_clear_mask                     0xFE

#define PSMC1DBR1                                0x1
#define PSMC1DBR1_address                        0xEA9
#define PSMC1DBR1_position                       0x1
#define PSMC1DBR1_size                           0x1
#define PSMC1DBR1_value_mask                     0x2
#define PSMC1DBR1_clear_mask                     0xFD

#define PSMC1DBR2                                0x2
#define PSMC1DBR2_address                        0xEA9
#define PSMC1DBR2_position                       0x2
#define PSMC1DBR2_size                           0x1
#define PSMC1DBR2_value_mask                     0x4
#define PSMC1DBR2_clear_mask                     0xFB

#define PSMC1DBR3                                0x3
#define PSMC1DBR3_address                        0xEA9
#define PSMC1DBR3_position                       0x3
#define PSMC1DBR3_size                           0x1
#define PSMC1DBR3_value_mask                     0x8
#define PSMC1DBR3_clear_mask                     0xF7

#define PSMC1DBR4                                0x4
#define PSMC1DBR4_address                        0xEA9
#define PSMC1DBR4_position                       0x4
#define PSMC1DBR4_size                           0x1
#define PSMC1DBR4_value_mask                     0x10
#define PSMC1DBR4_clear_mask                     0xEF

#define PSMC1DBR5                                0x5
#define PSMC1DBR5_address                        0xEA9
#define PSMC1DBR5_position                       0x5
#define PSMC1DBR5_size                           0x1
#define PSMC1DBR5_value_mask                     0x20
#define PSMC1DBR5_clear_mask                     0xDF

#define PSMC1DBR6                                0x6
#define PSMC1DBR6_address                        0xEA9
#define PSMC1DBR6_position                       0x6
#define PSMC1DBR6_size                           0x1
#define PSMC1DBR6_value_mask                     0x40
#define PSMC1DBR6_clear_mask                     0xBF

#define PSMC1DBR7                                0x7
#define PSMC1DBR7_address                        0xEA9
#define PSMC1DBR7_position                       0x7
#define PSMC1DBR7_size                           0x1
#define PSMC1DBR7_value_mask                     0x80
#define PSMC1DBR7_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| PSMC1DBF                                                                                0xEAA |
#-----------------------------------------------------------------------------------------------#
| PSMC1DBF7 | PSMC1DBF6 | PSMC1DBF5 | PSMC1DBF4 | PSMC1DBF3 | PSMC1DBF2 | PSMC1DBF1 | PSMC1DBF0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PSMC1DBF                                 0x0
#define PSMC1DBF_address                         0xEAA
#define PSMC1DBF_position                        0x0
#define PSMC1DBF_size                            0x8
#define PSMC1DBF_value_mask                      0xFF
#define PSMC1DBF_clear_mask                      0x0

#define PSMC1DBF0                                0x0
#define PSMC1DBF0_address                        0xEAA
#define PSMC1DBF0_position                       0x0
#define PSMC1DBF0_size                           0x1
#define PSMC1DBF0_value_mask                     0x1
#define PSMC1DBF0_clear_mask                     0xFE

#define PSMC1DBF1                                0x1
#define PSMC1DBF1_address                        0xEAA
#define PSMC1DBF1_position                       0x1
#define PSMC1DBF1_size                           0x1
#define PSMC1DBF1_value_mask                     0x2
#define PSMC1DBF1_clear_mask                     0xFD

#define PSMC1DBF2                                0x2
#define PSMC1DBF2_address                        0xEAA
#define PSMC1DBF2_position                       0x2
#define PSMC1DBF2_size                           0x1
#define PSMC1DBF2_value_mask                     0x4
#define PSMC1DBF2_clear_mask                     0xFB

#define PSMC1DBF3                                0x3
#define PSMC1DBF3_address                        0xEAA
#define PSMC1DBF3_position                       0x3
#define PSMC1DBF3_size                           0x1
#define PSMC1DBF3_value_mask                     0x8
#define PSMC1DBF3_clear_mask                     0xF7

#define PSMC1DBF4                                0x4
#define PSMC1DBF4_address                        0xEAA
#define PSMC1DBF4_position                       0x4
#define PSMC1DBF4_size                           0x1
#define PSMC1DBF4_value_mask                     0x10
#define PSMC1DBF4_clear_mask                     0xEF

#define PSMC1DBF5                                0x5
#define PSMC1DBF5_address                        0xEAA
#define PSMC1DBF5_position                       0x5
#define PSMC1DBF5_size                           0x1
#define PSMC1DBF5_value_mask                     0x20
#define PSMC1DBF5_clear_mask                     0xDF

#define PSMC1DBF6                                0x6
#define PSMC1DBF6_address                        0xEAA
#define PSMC1DBF6_position                       0x6
#define PSMC1DBF6_size                           0x1
#define PSMC1DBF6_value_mask                     0x40
#define PSMC1DBF6_clear_mask                     0xBF

#define PSMC1DBF7                                0x7
#define PSMC1DBF7_address                        0xEAA
#define PSMC1DBF7_position                       0x7
#define PSMC1DBF7_size                           0x1
#define PSMC1DBF7_value_mask                     0x80
#define PSMC1DBF7_clear_mask                     0x7F


/*------------------------------------------------------------------------------------------------------#
| PSMC1BLKR                                                                                       0xEAB |
#-------------------------------------------------------------------------------------------------------#
| PSMC1BLKR7 | PSMC1BLKR6 | PSMC1BLKR5 | PSMC1BLKR4 | PSMC1BLKR3 | PSMC1BLKR2 | PSMC1BLKR1 | PSMC1BLKR0 |
#-------------------------------------------------------------------------------------------------------#
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
#------------------------------------------------------------------------------------------------------*/

#define PSMC1BLKR                                0x0
#define PSMC1BLKR_address                        0xEAB
#define PSMC1BLKR_position                       0x0
#define PSMC1BLKR_size                           0x8
#define PSMC1BLKR_value_mask                     0xFF
#define PSMC1BLKR_clear_mask                     0x0

#define PSMC1BLKR0                               0x0
#define PSMC1BLKR0_address                       0xEAB
#define PSMC1BLKR0_position                      0x0
#define PSMC1BLKR0_size                          0x1
#define PSMC1BLKR0_value_mask                    0x1
#define PSMC1BLKR0_clear_mask                    0xFE

#define PSMC1BLKR1                               0x1
#define PSMC1BLKR1_address                       0xEAB
#define PSMC1BLKR1_position                      0x1
#define PSMC1BLKR1_size                          0x1
#define PSMC1BLKR1_value_mask                    0x2
#define PSMC1BLKR1_clear_mask                    0xFD

#define PSMC1BLKR2                               0x2
#define PSMC1BLKR2_address                       0xEAB
#define PSMC1BLKR2_position                      0x2
#define PSMC1BLKR2_size                          0x1
#define PSMC1BLKR2_value_mask                    0x4
#define PSMC1BLKR2_clear_mask                    0xFB

#define PSMC1BLKR3                               0x3
#define PSMC1BLKR3_address                       0xEAB
#define PSMC1BLKR3_position                      0x3
#define PSMC1BLKR3_size                          0x1
#define PSMC1BLKR3_value_mask                    0x8
#define PSMC1BLKR3_clear_mask                    0xF7

#define PSMC1BLKR4                               0x4
#define PSMC1BLKR4_address                       0xEAB
#define PSMC1BLKR4_position                      0x4
#define PSMC1BLKR4_size                          0x1
#define PSMC1BLKR4_value_mask                    0x10
#define PSMC1BLKR4_clear_mask                    0xEF

#define PSMC1BLKR5                               0x5
#define PSMC1BLKR5_address                       0xEAB
#define PSMC1BLKR5_position                      0x5
#define PSMC1BLKR5_size                          0x1
#define PSMC1BLKR5_value_mask                    0x20
#define PSMC1BLKR5_clear_mask                    0xDF

#define PSMC1BLKR6                               0x6
#define PSMC1BLKR6_address                       0xEAB
#define PSMC1BLKR6_position                      0x6
#define PSMC1BLKR6_size                          0x1
#define PSMC1BLKR6_value_mask                    0x40
#define PSMC1BLKR6_clear_mask                    0xBF

#define PSMC1BLKR7                               0x7
#define PSMC1BLKR7_address                       0xEAB
#define PSMC1BLKR7_position                      0x7
#define PSMC1BLKR7_size                          0x1
#define PSMC1BLKR7_value_mask                    0x80
#define PSMC1BLKR7_clear_mask                    0x7F


/*------------------------------------------------------------------------------------------------------#
| PSMC1BLKF                                                                                       0xEAC |
#-------------------------------------------------------------------------------------------------------#
| PSMC1BLKF7 | PSMC1BLKF6 | PSMC1BLKF5 | PSMC1BLKF4 | PSMC1BLKF3 | PSMC1BLKF2 | PSMC1BLKF1 | PSMC1BLKF0 |
#-------------------------------------------------------------------------------------------------------#
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
#------------------------------------------------------------------------------------------------------*/

#define PSMC1BLKF                                0x0
#define PSMC1BLKF_address                        0xEAC
#define PSMC1BLKF_position                       0x0
#define PSMC1BLKF_size                           0x8
#define PSMC1BLKF_value_mask                     0xFF
#define PSMC1BLKF_clear_mask                     0x0

#define PSMC1BLKF0                               0x0
#define PSMC1BLKF0_address                       0xEAC
#define PSMC1BLKF0_position                      0x0
#define PSMC1BLKF0_size                          0x1
#define PSMC1BLKF0_value_mask                    0x1
#define PSMC1BLKF0_clear_mask                    0xFE

#define PSMC1BLKF1                               0x1
#define PSMC1BLKF1_address                       0xEAC
#define PSMC1BLKF1_position                      0x1
#define PSMC1BLKF1_size                          0x1
#define PSMC1BLKF1_value_mask                    0x2
#define PSMC1BLKF1_clear_mask                    0xFD

#define PSMC1BLKF2                               0x2
#define PSMC1BLKF2_address                       0xEAC
#define PSMC1BLKF2_position                      0x2
#define PSMC1BLKF2_size                          0x1
#define PSMC1BLKF2_value_mask                    0x4
#define PSMC1BLKF2_clear_mask                    0xFB

#define PSMC1BLKF3                               0x3
#define PSMC1BLKF3_address                       0xEAC
#define PSMC1BLKF3_position                      0x3
#define PSMC1BLKF3_size                          0x1
#define PSMC1BLKF3_value_mask                    0x8
#define PSMC1BLKF3_clear_mask                    0xF7

#define PSMC1BLKF4                               0x4
#define PSMC1BLKF4_address                       0xEAC
#define PSMC1BLKF4_position                      0x4
#define PSMC1BLKF4_size                          0x1
#define PSMC1BLKF4_value_mask                    0x10
#define PSMC1BLKF4_clear_mask                    0xEF

#define PSMC1BLKF5                               0x5
#define PSMC1BLKF5_address                       0xEAC
#define PSMC1BLKF5_position                      0x5
#define PSMC1BLKF5_size                          0x1
#define PSMC1BLKF5_value_mask                    0x20
#define PSMC1BLKF5_clear_mask                    0xDF

#define PSMC1BLKF6                               0x6
#define PSMC1BLKF6_address                       0xEAC
#define PSMC1BLKF6_position                      0x6
#define PSMC1BLKF6_size                          0x1
#define PSMC1BLKF6_value_mask                    0x40
#define PSMC1BLKF6_clear_mask                    0xBF

#define PSMC1BLKF7                               0x7
#define PSMC1BLKF7_address                       0xEAC
#define PSMC1BLKF7_position                      0x7
#define PSMC1BLKF7_size                          0x1
#define PSMC1BLKF7_value_mask                    0x80
#define PSMC1BLKF7_clear_mask                    0x7F


/*--------------------------------------------------------------#
| PSMC1FFA                                                0xEAD |
#---------------------------------------------------------------#
| - | - | - | - | PSMC1FFA3 | PSMC1FFA2 | PSMC1FFA1 | PSMC1FFA0 |
#---------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3         | 2         | 1         | 0         |
#--------------------------------------------------------------*/

#define PSMC1FFA                                 0x0
#define PSMC1FFA_address                         0xEAD
#define PSMC1FFA_position                        0x0
#define PSMC1FFA_size                            0x8
#define PSMC1FFA_value_mask                      0xFF
#define PSMC1FFA_clear_mask                      0x0

#define PSMC1FFA0                                0x0
#define PSMC1FFA0_address                        0xEAD
#define PSMC1FFA0_position                       0x0
#define PSMC1FFA0_size                           0x1
#define PSMC1FFA0_value_mask                     0x1
#define PSMC1FFA0_clear_mask                     0xFE

#define PSMC1FFA1                                0x1
#define PSMC1FFA1_address                        0xEAD
#define PSMC1FFA1_position                       0x1
#define PSMC1FFA1_size                           0x1
#define PSMC1FFA1_value_mask                     0x2
#define PSMC1FFA1_clear_mask                     0xFD

#define PSMC1FFA2                                0x2
#define PSMC1FFA2_address                        0xEAD
#define PSMC1FFA2_position                       0x2
#define PSMC1FFA2_size                           0x1
#define PSMC1FFA2_value_mask                     0x4
#define PSMC1FFA2_clear_mask                     0xFB

#define PSMC1FFA3                                0x3
#define PSMC1FFA3_address                        0xEAD
#define PSMC1FFA3_position                       0x3
#define PSMC1FFA3_size                           0x1
#define PSMC1FFA3_value_mask                     0x8
#define PSMC1FFA3_clear_mask                     0xF7


/*------------------------------------------------------------#
| PSMC1STR0                                             0xEAE |
#-------------------------------------------------------------#
| - | - | P1STRF | P1STRE | P1STRD | P1STRC | P1STRB | P1STRA |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define PSMC1STR0                                0x0
#define PSMC1STR0_address                        0xEAE
#define PSMC1STR0_position                       0x0
#define PSMC1STR0_size                           0x8
#define PSMC1STR0_value_mask                     0xFF
#define PSMC1STR0_clear_mask                     0x0

#define P1STRA                                   0x0
#define P1STRA_address                           0xEAE
#define P1STRA_position                          0x0
#define P1STRA_size                              0x1
#define P1STRA_value_mask                        0x1
#define P1STRA_clear_mask                        0xFE

#define P1STRB                                   0x1
#define P1STRB_address                           0xEAE
#define P1STRB_position                          0x1
#define P1STRB_size                              0x1
#define P1STRB_value_mask                        0x2
#define P1STRB_clear_mask                        0xFD

#define P1STRC                                   0x2
#define P1STRC_address                           0xEAE
#define P1STRC_position                          0x2
#define P1STRC_size                              0x1
#define P1STRC_value_mask                        0x4
#define P1STRC_clear_mask                        0xFB

#define P1STRD                                   0x3
#define P1STRD_address                           0xEAE
#define P1STRD_position                          0x3
#define P1STRD_size                              0x1
#define P1STRD_value_mask                        0x8
#define P1STRD_clear_mask                        0xF7

#define P1STRE                                   0x4
#define P1STRE_address                           0xEAE
#define P1STRE_position                          0x4
#define P1STRE_size                              0x1
#define P1STRE_value_mask                        0x10
#define P1STRE_clear_mask                        0xEF

#define P1STRF                                   0x5
#define P1STRF_address                           0xEAE
#define P1STRF_position                          0x5
#define P1STRF_size                              0x1
#define P1STRF_value_mask                        0x20
#define P1STRF_clear_mask                        0xDF


/*------------------------------------------------#
| PSMC1STR1                                 0xEAF |
#-------------------------------------------------#
| P1SSYNC | - | - | - | - | - | P1LSMEN | P1HSMEN |
#-------------------------------------------------#
| 7       | 6 | 5 | 4 | 3 | 2 | 1       | 0       |
#------------------------------------------------*/

#define PSMC1STR1                                0x0
#define PSMC1STR1_address                        0xEAF
#define PSMC1STR1_position                       0x0
#define PSMC1STR1_size                           0x8
#define PSMC1STR1_value_mask                     0xFF
#define PSMC1STR1_clear_mask                     0x0

#define P1HSMEN                                  0x0
#define P1HSMEN_address                          0xEAF
#define P1HSMEN_position                         0x0
#define P1HSMEN_size                             0x1
#define P1HSMEN_value_mask                       0x1
#define P1HSMEN_clear_mask                       0xFE

#define P1LSMEN                                  0x1
#define P1LSMEN_address                          0xEAF
#define P1LSMEN_position                         0x1
#define P1LSMEN_size                             0x1
#define P1LSMEN_value_mask                       0x2
#define P1LSMEN_clear_mask                       0xFD

#define P1SSYNC                                  0x7
#define P1SSYNC_address                          0xEAF
#define P1SSYNC_position                         0x7
#define P1SSYNC_size                             0x1
#define P1SSYNC_value_mask                       0x80
#define P1SSYNC_clear_mask                       0x7F


/*----------------------------------------------------------------------------#
| PSMC2CON                                                              0xEB1 |
#-----------------------------------------------------------------------------#
| PSMC2EN | PSMC2LD | P2DBFE | P2DBRE | P2MODE3 | P2MODE2 | P2MODE1 | P2MODE0 |
#-----------------------------------------------------------------------------#
| 7       | 6       | 5      | 4      | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------------------*/

#define PSMC2CON                                 0x0
#define PSMC2CON_address                         0xEB1
#define PSMC2CON_position                        0x0
#define PSMC2CON_size                            0x8
#define PSMC2CON_value_mask                      0xFF
#define PSMC2CON_clear_mask                      0x0

#define P2MODE                                   0x0
#define P2MODE_address                           0xEB1
#define P2MODE_position                          0x0
#define P2MODE_size                              0x4
#define P2MODE_value_mask                        0xF
#define P2MODE_clear_mask                        0xF0

#define P2MODE0                                  0x0
#define P2MODE0_address                          0xEB1
#define P2MODE0_position                         0x0
#define P2MODE0_size                             0x1
#define P2MODE0_value_mask                       0x1
#define P2MODE0_clear_mask                       0xFE

#define P2MODE1                                  0x1
#define P2MODE1_address                          0xEB1
#define P2MODE1_position                         0x1
#define P2MODE1_size                             0x1
#define P2MODE1_value_mask                       0x2
#define P2MODE1_clear_mask                       0xFD

#define P2MODE2                                  0x2
#define P2MODE2_address                          0xEB1
#define P2MODE2_position                         0x2
#define P2MODE2_size                             0x1
#define P2MODE2_value_mask                       0x4
#define P2MODE2_clear_mask                       0xFB

#define P2MODE3                                  0x3
#define P2MODE3_address                          0xEB1
#define P2MODE3_position                         0x3
#define P2MODE3_size                             0x1
#define P2MODE3_value_mask                       0x8
#define P2MODE3_clear_mask                       0xF7

#define P2DBRE                                   0x4
#define P2DBRE_address                           0xEB1
#define P2DBRE_position                          0x4
#define P2DBRE_size                              0x1
#define P2DBRE_value_mask                        0x10
#define P2DBRE_clear_mask                        0xEF

#define P2DBFE                                   0x5
#define P2DBFE_address                           0xEB1
#define P2DBFE_position                          0x5
#define P2DBFE_size                              0x1
#define P2DBFE_value_mask                        0x20
#define P2DBFE_clear_mask                        0xDF

#define PSMC2LD                                  0x6
#define PSMC2LD_address                          0xEB1
#define PSMC2LD_position                         0x6
#define PSMC2LD_size                             0x1
#define PSMC2LD_value_mask                       0x40
#define PSMC2LD_clear_mask                       0xBF

#define PSMC2EN                                  0x7
#define PSMC2EN_address                          0xEB1
#define PSMC2EN_position                         0x7
#define PSMC2EN_size                             0x1
#define PSMC2EN_value_mask                       0x80
#define PSMC2EN_clear_mask                       0x7F


/*--------------------------------------------------------------------------#
| PSMC2MDL                                                            0xEB2 |
#---------------------------------------------------------------------------#
| P2MDLEN | P2MDLPOL | P2MDLBIT | - | P2MSRC3 | P2MSRC2 | P2MSRC1 | P2MSRC0 |
#---------------------------------------------------------------------------#
| 7       | 6        | 5        | 4 | 3       | 2       | 1       | 0       |
#--------------------------------------------------------------------------*/

#define PSMC2MDL                                 0x0
#define PSMC2MDL_address                         0xEB2
#define PSMC2MDL_position                        0x0
#define PSMC2MDL_size                            0x8
#define PSMC2MDL_value_mask                      0xFF
#define PSMC2MDL_clear_mask                      0x0

#define P2MSRC                                   0x0
#define P2MSRC_address                           0xEB2
#define P2MSRC_position                          0x0
#define P2MSRC_size                              0x4
#define P2MSRC_value_mask                        0xF
#define P2MSRC_clear_mask                        0xF0

#define P2MSRC0                                  0x0
#define P2MSRC0_address                          0xEB2
#define P2MSRC0_position                         0x0
#define P2MSRC0_size                             0x1
#define P2MSRC0_value_mask                       0x1
#define P2MSRC0_clear_mask                       0xFE

#define P2MSRC1                                  0x1
#define P2MSRC1_address                          0xEB2
#define P2MSRC1_position                         0x1
#define P2MSRC1_size                             0x1
#define P2MSRC1_value_mask                       0x2
#define P2MSRC1_clear_mask                       0xFD

#define P2MSRC2                                  0x2
#define P2MSRC2_address                          0xEB2
#define P2MSRC2_position                         0x2
#define P2MSRC2_size                             0x1
#define P2MSRC2_value_mask                       0x4
#define P2MSRC2_clear_mask                       0xFB

#define P2MSRC3                                  0x3
#define P2MSRC3_address                          0xEB2
#define P2MSRC3_position                         0x3
#define P2MSRC3_size                             0x1
#define P2MSRC3_value_mask                       0x8
#define P2MSRC3_clear_mask                       0xF7

#define P2MDLBIT                                 0x5
#define P2MDLBIT_address                         0xEB2
#define P2MDLBIT_position                        0x5
#define P2MDLBIT_size                            0x1
#define P2MDLBIT_value_mask                      0x20
#define P2MDLBIT_clear_mask                      0xDF

#define P2MDLPOL                                 0x6
#define P2MDLPOL_address                         0xEB2
#define P2MDLPOL_position                        0x6
#define P2MDLPOL_size                            0x1
#define P2MDLPOL_value_mask                      0x40
#define P2MDLPOL_clear_mask                      0xBF

#define P2MDLEN                                  0x7
#define P2MDLEN_address                          0xEB2
#define P2MDLEN_position                         0x7
#define P2MDLEN_size                             0x1
#define P2MDLEN_value_mask                       0x80
#define P2MDLEN_clear_mask                       0x7F


/*------------------------------------------------------------------#
| PSMC2SYNC                                                   0xEB3 |
#-------------------------------------------------------------------#
| P2POFST | P2PRPOL | P2DCPOL | - | - | P2SYNC2 | P2SYNC1 | P2SYNC0 |
#-------------------------------------------------------------------#
| 7       | 6       | 5       | 4 | 3 | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define PSMC2SYNC                                0x0
#define PSMC2SYNC_address                        0xEB3
#define PSMC2SYNC_position                       0x0
#define PSMC2SYNC_size                           0x8
#define PSMC2SYNC_value_mask                     0xFF
#define PSMC2SYNC_clear_mask                     0x0

#define P2SYNC0                                  0x0
#define P2SYNC0_address                          0xEB3
#define P2SYNC0_position                         0x0
#define P2SYNC0_size                             0x1
#define P2SYNC0_value_mask                       0x1
#define P2SYNC0_clear_mask                       0xFE

#define P2SYNC1                                  0x1
#define P2SYNC1_address                          0xEB3
#define P2SYNC1_position                         0x1
#define P2SYNC1_size                             0x1
#define P2SYNC1_value_mask                       0x2
#define P2SYNC1_clear_mask                       0xFD

#define P2SYNC2                                  0x2
#define P2SYNC2_address                          0xEB3
#define P2SYNC2_position                         0x2
#define P2SYNC2_size                             0x1
#define P2SYNC2_value_mask                       0x4
#define P2SYNC2_clear_mask                       0xFB

#define P2DCPOL                                  0x5
#define P2DCPOL_address                          0xEB3
#define P2DCPOL_position                         0x5
#define P2DCPOL_size                             0x1
#define P2DCPOL_value_mask                       0x20
#define P2DCPOL_clear_mask                       0xDF

#define P2PRPOL                                  0x6
#define P2PRPOL_address                          0xEB3
#define P2PRPOL_position                         0x6
#define P2PRPOL_size                             0x1
#define P2PRPOL_value_mask                       0x40
#define P2PRPOL_clear_mask                       0xBF

#define P2POFST                                  0x7
#define P2POFST_address                          0xEB3
#define P2POFST_position                         0x7
#define P2POFST_size                             0x1
#define P2POFST_value_mask                       0x80
#define P2POFST_clear_mask                       0x7F


/*------------------------------------------------------#
| PSMC2CLK                                        0xEB4 |
#-------------------------------------------------------#
| - | - | P2CPRE1 | P2CPRE0 | - | - | P2CSRC1 | P2CSRC0 |
#-------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3 | 2 | 1       | 0       |
#------------------------------------------------------*/

#define PSMC2CLK                                 0x0
#define PSMC2CLK_address                         0xEB4
#define PSMC2CLK_position                        0x0
#define PSMC2CLK_size                            0x8
#define PSMC2CLK_value_mask                      0xFF
#define PSMC2CLK_clear_mask                      0x0

#define P2CSRC0                                  0x0
#define P2CSRC0_address                          0xEB4
#define P2CSRC0_position                         0x0
#define P2CSRC0_size                             0x1
#define P2CSRC0_value_mask                       0x1
#define P2CSRC0_clear_mask                       0xFE

#define P2CSRC                                   0x0
#define P2CSRC_address                           0xEB4
#define P2CSRC_position                          0x0
#define P2CSRC_size                              0x2
#define P2CSRC_value_mask                        0x3
#define P2CSRC_clear_mask                        0xFC

#define P2CSRC1                                  0x1
#define P2CSRC1_address                          0xEB4
#define P2CSRC1_position                         0x1
#define P2CSRC1_size                             0x1
#define P2CSRC1_value_mask                       0x2
#define P2CSRC1_clear_mask                       0xFD

#define P2CPRE                                   0x4
#define P2CPRE_address                           0xEB4
#define P2CPRE_position                          0x4
#define P2CPRE_size                              0x2
#define P2CPRE_value_mask                        0x30
#define P2CPRE_clear_mask                        0xCF

#define P2CPRE0                                  0x4
#define P2CPRE0_address                          0xEB4
#define P2CPRE0_position                         0x4
#define P2CPRE0_size                             0x1
#define P2CPRE0_value_mask                       0x10
#define P2CPRE0_clear_mask                       0xEF

#define P2CPRE1                                  0x5
#define P2CPRE1_address                          0xEB4
#define P2CPRE1_position                         0x5
#define P2CPRE1_size                             0x1
#define P2CPRE1_value_mask                       0x20
#define P2CPRE1_clear_mask                       0xDF


/*--------------------------------------#
| PSMC2OEN                        0xEB5 |
#---------------------------------------#
| - | - | - | - | - | - | P2OEB | P2OEA |
#---------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1     | 0     |
#--------------------------------------*/

#define PSMC2OEN                                 0x0
#define PSMC2OEN_address                         0xEB5
#define PSMC2OEN_position                        0x0
#define PSMC2OEN_size                            0x8
#define PSMC2OEN_value_mask                      0xFF
#define PSMC2OEN_clear_mask                      0x0

#define P2OEA                                    0x0
#define P2OEA_address                            0xEB5
#define P2OEA_position                           0x0
#define P2OEA_size                               0x1
#define P2OEA_value_mask                         0x1
#define P2OEA_clear_mask                         0xFE

#define P2OEB                                    0x1
#define P2OEB_address                            0xEB5
#define P2OEB_position                           0x1
#define P2OEB_size                               0x1
#define P2OEB_value_mask                         0x2
#define P2OEB_clear_mask                         0xFD


/*----------------------------------------------#
| PSMC2POL                                0xEB6 |
#-----------------------------------------------#
| - | P2INPOL | - | - | - | - | P2POLB | P2POLA |
#-----------------------------------------------#
| 7 | 6       | 5 | 4 | 3 | 2 | 1      | 0      |
#----------------------------------------------*/

#define PSMC2POL                                 0x0
#define PSMC2POL_address                         0xEB6
#define PSMC2POL_position                        0x0
#define PSMC2POL_size                            0x8
#define PSMC2POL_value_mask                      0xFF
#define PSMC2POL_clear_mask                      0x0

#define P2POLA                                   0x0
#define P2POLA_address                           0xEB6
#define P2POLA_position                          0x0
#define P2POLA_size                              0x1
#define P2POLA_value_mask                        0x1
#define P2POLA_clear_mask                        0xFE

#define P2POLB                                   0x1
#define P2POLB_address                           0xEB6
#define P2POLB_position                          0x1
#define P2POLB_size                              0x1
#define P2POLB_value_mask                        0x2
#define P2POLB_clear_mask                        0xFD

#define P2INPOL                                  0x6
#define P2INPOL_address                          0xEB6
#define P2INPOL_position                         0x6
#define P2INPOL_size                             0x1
#define P2INPOL_value_mask                       0x40
#define P2INPOL_clear_mask                       0xBF


/*------------------------------------------------------#
| PSMC2BLNK                                       0xEB7 |
#-------------------------------------------------------#
| - | - | P2FEBM1 | P2FEBM0 | - | - | P2REBM1 | P2REBM0 |
#-------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3 | 2 | 1       | 0       |
#------------------------------------------------------*/

#define PSMC2BLNK                                0x0
#define PSMC2BLNK_address                        0xEB7
#define PSMC2BLNK_position                       0x0
#define PSMC2BLNK_size                           0x8
#define PSMC2BLNK_value_mask                     0xFF
#define PSMC2BLNK_clear_mask                     0x0

#define P2REBM                                   0x0
#define P2REBM_address                           0xEB7
#define P2REBM_position                          0x0
#define P2REBM_size                              0x2
#define P2REBM_value_mask                        0x3
#define P2REBM_clear_mask                        0xFC

#define P2REBM0                                  0x0
#define P2REBM0_address                          0xEB7
#define P2REBM0_position                         0x0
#define P2REBM0_size                             0x1
#define P2REBM0_value_mask                       0x1
#define P2REBM0_clear_mask                       0xFE

#define P2REBM1                                  0x1
#define P2REBM1_address                          0xEB7
#define P2REBM1_position                         0x1
#define P2REBM1_size                             0x1
#define P2REBM1_value_mask                       0x2
#define P2REBM1_clear_mask                       0xFD

#define P2FEBM0                                  0x4
#define P2FEBM0_address                          0xEB7
#define P2FEBM0_position                         0x4
#define P2FEBM0_size                             0x1
#define P2FEBM0_value_mask                       0x10
#define P2FEBM0_clear_mask                       0xEF

#define P2FEBM                                   0x4
#define P2FEBM_address                           0xEB7
#define P2FEBM_position                          0x4
#define P2FEBM_size                              0x2
#define P2FEBM_value_mask                        0x30
#define P2FEBM_clear_mask                        0xCF

#define P2FEBM1                                  0x5
#define P2FEBM1_address                          0xEB7
#define P2FEBM1_position                         0x5
#define P2FEBM1_size                             0x1
#define P2FEBM1_value_mask                       0x20
#define P2FEBM1_clear_mask                       0xDF


/*-----------------------------------------------------------------#
| PSMC2REBS                                                  0xEB8 |
#------------------------------------------------------------------#
| P2REBSIN | - | - | P2REBSC4 | P2REBSC3 | P2REBSC2 | P2REBSC1 | - |
#------------------------------------------------------------------#
| 7        | 6 | 5 | 4        | 3        | 2        | 1        | 0 |
#-----------------------------------------------------------------*/

#define PSMC2REBS                                0x0
#define PSMC2REBS_address                        0xEB8
#define PSMC2REBS_position                       0x0
#define PSMC2REBS_size                           0x8
#define PSMC2REBS_value_mask                     0xFF
#define PSMC2REBS_clear_mask                     0x0

#define P2REBSC1                                 0x1
#define P2REBSC1_address                         0xEB8
#define P2REBSC1_position                        0x1
#define P2REBSC1_size                            0x1
#define P2REBSC1_value_mask                      0x2
#define P2REBSC1_clear_mask                      0xFD

#define P2REBSC2                                 0x2
#define P2REBSC2_address                         0xEB8
#define P2REBSC2_position                        0x2
#define P2REBSC2_size                            0x1
#define P2REBSC2_value_mask                      0x4
#define P2REBSC2_clear_mask                      0xFB

#define P2REBSC3                                 0x3
#define P2REBSC3_address                         0xEB8
#define P2REBSC3_position                        0x3
#define P2REBSC3_size                            0x1
#define P2REBSC3_value_mask                      0x8
#define P2REBSC3_clear_mask                      0xF7

#define P2REBSC4                                 0x4
#define P2REBSC4_address                         0xEB8
#define P2REBSC4_position                        0x4
#define P2REBSC4_size                            0x1
#define P2REBSC4_value_mask                      0x10
#define P2REBSC4_clear_mask                      0xEF

#define P2REBSIN                                 0x7
#define P2REBSIN_address                         0xEB8
#define P2REBSIN_position                        0x7
#define P2REBSIN_size                            0x1
#define P2REBSIN_value_mask                      0x80
#define P2REBSIN_clear_mask                      0x7F


/*-----------------------------------------------------------------#
| PSMC2FEBS                                                  0xEB9 |
#------------------------------------------------------------------#
| P2FEBSIN | - | - | P2FEBSC4 | P2FEBSC3 | P2FEBSC2 | P2FEBSC1 | - |
#------------------------------------------------------------------#
| 7        | 6 | 5 | 4        | 3        | 2        | 1        | 0 |
#-----------------------------------------------------------------*/

#define PSMC2FEBS                                0x0
#define PSMC2FEBS_address                        0xEB9
#define PSMC2FEBS_position                       0x0
#define PSMC2FEBS_size                           0x8
#define PSMC2FEBS_value_mask                     0xFF
#define PSMC2FEBS_clear_mask                     0x0

#define P2FEBSC1                                 0x1
#define P2FEBSC1_address                         0xEB9
#define P2FEBSC1_position                        0x1
#define P2FEBSC1_size                            0x1
#define P2FEBSC1_value_mask                      0x2
#define P2FEBSC1_clear_mask                      0xFD

#define P2FEBSC2                                 0x2
#define P2FEBSC2_address                         0xEB9
#define P2FEBSC2_position                        0x2
#define P2FEBSC2_size                            0x1
#define P2FEBSC2_value_mask                      0x4
#define P2FEBSC2_clear_mask                      0xFB

#define P2FEBSC3                                 0x3
#define P2FEBSC3_address                         0xEB9
#define P2FEBSC3_position                        0x3
#define P2FEBSC3_size                            0x1
#define P2FEBSC3_value_mask                      0x8
#define P2FEBSC3_clear_mask                      0xF7

#define P2FEBSC4                                 0x4
#define P2FEBSC4_address                         0xEB9
#define P2FEBSC4_position                        0x4
#define P2FEBSC4_size                            0x1
#define P2FEBSC4_value_mask                      0x10
#define P2FEBSC4_clear_mask                      0xEF

#define P2FEBSIN                                 0x7
#define P2FEBSIN_address                         0xEB9
#define P2FEBSIN_position                        0x7
#define P2FEBSIN_size                            0x1
#define P2FEBSIN_value_mask                      0x80
#define P2FEBSIN_clear_mask                      0x7F


/*-----------------------------------------------------------------#
| PSMC2PHS                                                   0xEBA |
#------------------------------------------------------------------#
| P2PHSIN | - | - | P2PHSC4 | P2PHSC3 | P2PHSC2 | P2PHSC1 | P2PHST |
#------------------------------------------------------------------#
| 7       | 6 | 5 | 4       | 3       | 2       | 1       | 0      |
#-----------------------------------------------------------------*/

#define PSMC2PHS                                 0x0
#define PSMC2PHS_address                         0xEBA
#define PSMC2PHS_position                        0x0
#define PSMC2PHS_size                            0x8
#define PSMC2PHS_value_mask                      0xFF
#define PSMC2PHS_clear_mask                      0x0

#define P2PHST                                   0x0
#define P2PHST_address                           0xEBA
#define P2PHST_position                          0x0
#define P2PHST_size                              0x1
#define P2PHST_value_mask                        0x1
#define P2PHST_clear_mask                        0xFE

#define P2PHSC1                                  0x1
#define P2PHSC1_address                          0xEBA
#define P2PHSC1_position                         0x1
#define P2PHSC1_size                             0x1
#define P2PHSC1_value_mask                       0x2
#define P2PHSC1_clear_mask                       0xFD

#define P2PHSC2                                  0x2
#define P2PHSC2_address                          0xEBA
#define P2PHSC2_position                         0x2
#define P2PHSC2_size                             0x1
#define P2PHSC2_value_mask                       0x4
#define P2PHSC2_clear_mask                       0xFB

#define P2PHSC3                                  0x3
#define P2PHSC3_address                          0xEBA
#define P2PHSC3_position                         0x3
#define P2PHSC3_size                             0x1
#define P2PHSC3_value_mask                       0x8
#define P2PHSC3_clear_mask                       0xF7

#define P2PHSC4                                  0x4
#define P2PHSC4_address                          0xEBA
#define P2PHSC4_position                         0x4
#define P2PHSC4_size                             0x1
#define P2PHSC4_value_mask                       0x10
#define P2PHSC4_clear_mask                       0xEF

#define P2PHSIN                                  0x7
#define P2PHSIN_address                          0xEBA
#define P2PHSIN_position                         0x7
#define P2PHSIN_size                             0x1
#define P2PHSIN_value_mask                       0x80
#define P2PHSIN_clear_mask                       0x7F


/*-----------------------------------------------------------------#
| PSMC2DCS                                                   0xEBB |
#------------------------------------------------------------------#
| P2DCSIN | - | - | P2DCSC4 | P2DCSC3 | P2DCSC2 | P2DCSC1 | P2DCST |
#------------------------------------------------------------------#
| 7       | 6 | 5 | 4       | 3       | 2       | 1       | 0      |
#-----------------------------------------------------------------*/

#define PSMC2DCS                                 0x0
#define PSMC2DCS_address                         0xEBB
#define PSMC2DCS_position                        0x0
#define PSMC2DCS_size                            0x8
#define PSMC2DCS_value_mask                      0xFF
#define PSMC2DCS_clear_mask                      0x0

#define P2DCST                                   0x0
#define P2DCST_address                           0xEBB
#define P2DCST_position                          0x0
#define P2DCST_size                              0x1
#define P2DCST_value_mask                        0x1
#define P2DCST_clear_mask                        0xFE

#define P2DCSC1                                  0x1
#define P2DCSC1_address                          0xEBB
#define P2DCSC1_position                         0x1
#define P2DCSC1_size                             0x1
#define P2DCSC1_value_mask                       0x2
#define P2DCSC1_clear_mask                       0xFD

#define P2DCSC2                                  0x2
#define P2DCSC2_address                          0xEBB
#define P2DCSC2_position                         0x2
#define P2DCSC2_size                             0x1
#define P2DCSC2_value_mask                       0x4
#define P2DCSC2_clear_mask                       0xFB

#define P2DCSC3                                  0x3
#define P2DCSC3_address                          0xEBB
#define P2DCSC3_position                         0x3
#define P2DCSC3_size                             0x1
#define P2DCSC3_value_mask                       0x8
#define P2DCSC3_clear_mask                       0xF7

#define P2DCSC4                                  0x4
#define P2DCSC4_address                          0xEBB
#define P2DCSC4_position                         0x4
#define P2DCSC4_size                             0x1
#define P2DCSC4_value_mask                       0x10
#define P2DCSC4_clear_mask                       0xEF

#define P2DCSIN                                  0x7
#define P2DCSIN_address                          0xEBB
#define P2DCSIN_position                         0x7
#define P2DCSIN_size                             0x1
#define P2DCSIN_value_mask                       0x80
#define P2DCSIN_clear_mask                       0x7F


/*-----------------------------------------------------------------#
| PSMC2PRS                                                   0xEBC |
#------------------------------------------------------------------#
| P2PRSIN | - | - | P2PRSC4 | P2PRSC3 | P2PRSC2 | P2PRSC1 | P2PRST |
#------------------------------------------------------------------#
| 7       | 6 | 5 | 4       | 3       | 2       | 1       | 0      |
#-----------------------------------------------------------------*/

#define PSMC2PRS                                 0x0
#define PSMC2PRS_address                         0xEBC
#define PSMC2PRS_position                        0x0
#define PSMC2PRS_size                            0x8
#define PSMC2PRS_value_mask                      0xFF
#define PSMC2PRS_clear_mask                      0x0

#define P2PRST                                   0x0
#define P2PRST_address                           0xEBC
#define P2PRST_position                          0x0
#define P2PRST_size                              0x1
#define P2PRST_value_mask                        0x1
#define P2PRST_clear_mask                        0xFE

#define P2PRSC1                                  0x1
#define P2PRSC1_address                          0xEBC
#define P2PRSC1_position                         0x1
#define P2PRSC1_size                             0x1
#define P2PRSC1_value_mask                       0x2
#define P2PRSC1_clear_mask                       0xFD

#define P2PRSC2                                  0x2
#define P2PRSC2_address                          0xEBC
#define P2PRSC2_position                         0x2
#define P2PRSC2_size                             0x1
#define P2PRSC2_value_mask                       0x4
#define P2PRSC2_clear_mask                       0xFB

#define P2PRSC3                                  0x3
#define P2PRSC3_address                          0xEBC
#define P2PRSC3_position                         0x3
#define P2PRSC3_size                             0x1
#define P2PRSC3_value_mask                       0x8
#define P2PRSC3_clear_mask                       0xF7

#define P2PRSC4                                  0x4
#define P2PRSC4_address                          0xEBC
#define P2PRSC4_position                         0x4
#define P2PRSC4_size                             0x1
#define P2PRSC4_value_mask                       0x10
#define P2PRSC4_clear_mask                       0xEF

#define P2PRSIN                                  0x7
#define P2PRSIN_address                          0xEBC
#define P2PRSIN_position                         0x7
#define P2PRSIN_size                             0x1
#define P2PRSIN_value_mask                       0x80
#define P2PRSIN_clear_mask                       0x7F


/*----------------------------------------------------#
| PSMC2ASDC                                     0xEBD |
#-----------------------------------------------------#
| P2ASE | P2ASDEN | P2ARSEN | - | - | - | - | P2ASDOV |
#-----------------------------------------------------#
| 7     | 6       | 5       | 4 | 3 | 2 | 1 | 0       |
#----------------------------------------------------*/

#define PSMC2ASDC                                0x0
#define PSMC2ASDC_address                        0xEBD
#define PSMC2ASDC_position                       0x0
#define PSMC2ASDC_size                           0x8
#define PSMC2ASDC_value_mask                     0xFF
#define PSMC2ASDC_clear_mask                     0x0

#define P2ASDOV                                  0x0
#define P2ASDOV_address                          0xEBD
#define P2ASDOV_position                         0x0
#define P2ASDOV_size                             0x1
#define P2ASDOV_value_mask                       0x1
#define P2ASDOV_clear_mask                       0xFE

#define P2ARSEN                                  0x5
#define P2ARSEN_address                          0xEBD
#define P2ARSEN_position                         0x5
#define P2ARSEN_size                             0x1
#define P2ARSEN_value_mask                       0x20
#define P2ARSEN_clear_mask                       0xDF

#define P2ASDEN                                  0x6
#define P2ASDEN_address                          0xEBD
#define P2ASDEN_position                         0x6
#define P2ASDEN_size                             0x1
#define P2ASDEN_value_mask                       0x40
#define P2ASDEN_clear_mask                       0xBF

#define P2ASE                                    0x7
#define P2ASE_address                            0xEBD
#define P2ASE_position                           0x7
#define P2ASE_size                               0x1
#define P2ASE_value_mask                         0x80
#define P2ASE_clear_mask                         0x7F


/*------------------------------------------#
| PSMC2ASDL                           0xEBE |
#-------------------------------------------#
| - | - | - | - | - | - | P2ASDLB | P2ASDLA |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1       | 0       |
#------------------------------------------*/

#define PSMC2ASDL                                0x0
#define PSMC2ASDL_address                        0xEBE
#define PSMC2ASDL_position                       0x0
#define PSMC2ASDL_size                           0x8
#define PSMC2ASDL_value_mask                     0xFF
#define PSMC2ASDL_clear_mask                     0x0

#define P2ASDLA                                  0x0
#define P2ASDLA_address                          0xEBE
#define P2ASDLA_position                         0x0
#define P2ASDLA_size                             0x1
#define P2ASDLA_value_mask                       0x1
#define P2ASDLA_clear_mask                       0xFE

#define P2ASDLB                                  0x1
#define P2ASDLB_address                          0xEBE
#define P2ASDLB_position                         0x1
#define P2ASDLB_size                             0x1
#define P2ASDLB_value_mask                       0x2
#define P2ASDLB_clear_mask                       0xFD


/*-----------------------------------------------------------------#
| PSMC2ASDS                                                  0xEBF |
#------------------------------------------------------------------#
| P2ASDSIN | - | - | P2ASDSC4 | P2ASDSC3 | P2ASDSC2 | P2ASDSC1 | - |
#------------------------------------------------------------------#
| 7        | 6 | 5 | 4        | 3        | 2        | 1        | 0 |
#-----------------------------------------------------------------*/

#define PSMC2ASDS                                0x0
#define PSMC2ASDS_address                        0xEBF
#define PSMC2ASDS_position                       0x0
#define PSMC2ASDS_size                           0x8
#define PSMC2ASDS_value_mask                     0xFF
#define PSMC2ASDS_clear_mask                     0x0

#define P2ASDSC1                                 0x1
#define P2ASDSC1_address                         0xEBF
#define P2ASDSC1_position                        0x1
#define P2ASDSC1_size                            0x1
#define P2ASDSC1_value_mask                      0x2
#define P2ASDSC1_clear_mask                      0xFD

#define P2ASDSC2                                 0x2
#define P2ASDSC2_address                         0xEBF
#define P2ASDSC2_position                        0x2
#define P2ASDSC2_size                            0x1
#define P2ASDSC2_value_mask                      0x4
#define P2ASDSC2_clear_mask                      0xFB

#define P2ASDSC3                                 0x3
#define P2ASDSC3_address                         0xEBF
#define P2ASDSC3_position                        0x3
#define P2ASDSC3_size                            0x1
#define P2ASDSC3_value_mask                      0x8
#define P2ASDSC3_clear_mask                      0xF7

#define P2ASDSC4                                 0x4
#define P2ASDSC4_address                         0xEBF
#define P2ASDSC4_position                        0x4
#define P2ASDSC4_size                            0x1
#define P2ASDSC4_value_mask                      0x10
#define P2ASDSC4_clear_mask                      0xEF

#define P2ASDSIN                                 0x7
#define P2ASDSIN_address                         0xEBF
#define P2ASDSIN_position                        0x7
#define P2ASDSIN_size                            0x1
#define P2ASDSIN_value_mask                      0x80
#define P2ASDSIN_clear_mask                      0x7F


/*------------------------------------------------------------------------------#
| PSMC2INT                                                                0xEC0 |
#-------------------------------------------------------------------------------#
| P2TOVIE | P2TPHIE | P2TDCIE | P2TPRIE | P2TOVIF | P2TPHIF | P2TDCIF | P2TPRIF |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define PSMC2INT                                 0x0
#define PSMC2INT_address                         0xEC0
#define PSMC2INT_position                        0x0
#define PSMC2INT_size                            0x8
#define PSMC2INT_value_mask                      0xFF
#define PSMC2INT_clear_mask                      0x0

#define P2TPRIF                                  0x0
#define P2TPRIF_address                          0xEC0
#define P2TPRIF_position                         0x0
#define P2TPRIF_size                             0x1
#define P2TPRIF_value_mask                       0x1
#define P2TPRIF_clear_mask                       0xFE

#define P2TDCIF                                  0x1
#define P2TDCIF_address                          0xEC0
#define P2TDCIF_position                         0x1
#define P2TDCIF_size                             0x1
#define P2TDCIF_value_mask                       0x2
#define P2TDCIF_clear_mask                       0xFD

#define P2TPHIF                                  0x2
#define P2TPHIF_address                          0xEC0
#define P2TPHIF_position                         0x2
#define P2TPHIF_size                             0x1
#define P2TPHIF_value_mask                       0x4
#define P2TPHIF_clear_mask                       0xFB

#define P2TOVIF                                  0x3
#define P2TOVIF_address                          0xEC0
#define P2TOVIF_position                         0x3
#define P2TOVIF_size                             0x1
#define P2TOVIF_value_mask                       0x8
#define P2TOVIF_clear_mask                       0xF7

#define P2TPRIE                                  0x4
#define P2TPRIE_address                          0xEC0
#define P2TPRIE_position                         0x4
#define P2TPRIE_size                             0x1
#define P2TPRIE_value_mask                       0x10
#define P2TPRIE_clear_mask                       0xEF

#define P2TDCIE                                  0x5
#define P2TDCIE_address                          0xEC0
#define P2TDCIE_position                         0x5
#define P2TDCIE_size                             0x1
#define P2TDCIE_value_mask                       0x20
#define P2TDCIE_clear_mask                       0xDF

#define P2TPHIE                                  0x6
#define P2TPHIE_address                          0xEC0
#define P2TPHIE_position                         0x6
#define P2TPHIE_size                             0x1
#define P2TPHIE_value_mask                       0x40
#define P2TPHIE_clear_mask                       0xBF

#define P2TOVIE                                  0x7
#define P2TOVIE_address                          0xEC0
#define P2TOVIE_position                         0x7
#define P2TOVIE_size                             0x1
#define P2TOVIE_value_mask                       0x80
#define P2TOVIE_clear_mask                       0x7F


/*--------------------------------------------------------------------------------------#
| PSMC2PHL                                                                        0xEC1 |
#---------------------------------------------------------------------------------------#
| PSMC2PH7 | PSMC2PH6 | PSMC2PH5 | PSMC2PH4 | PSMC2PH3 | PSMC2PH2 | PSMC2PH1 | PSMC2PH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PSMC2PHL                                 0x0
#define PSMC2PHL_address                         0xEC1
#define PSMC2PHL_position                        0x0
#define PSMC2PHL_size                            0x8
#define PSMC2PHL_value_mask                      0xFF
#define PSMC2PHL_clear_mask                      0x0

#define PSMC2PH0                                 0x0
#define PSMC2PH0_address                         0xEC1
#define PSMC2PH0_position                        0x0
#define PSMC2PH0_size                            0x1
#define PSMC2PH0_value_mask                      0x1
#define PSMC2PH0_clear_mask                      0xFE

#define PSMC2PH1                                 0x1
#define PSMC2PH1_address                         0xEC1
#define PSMC2PH1_position                        0x1
#define PSMC2PH1_size                            0x1
#define PSMC2PH1_value_mask                      0x2
#define PSMC2PH1_clear_mask                      0xFD

#define PSMC2PH2                                 0x2
#define PSMC2PH2_address                         0xEC1
#define PSMC2PH2_position                        0x2
#define PSMC2PH2_size                            0x1
#define PSMC2PH2_value_mask                      0x4
#define PSMC2PH2_clear_mask                      0xFB

#define PSMC2PH3                                 0x3
#define PSMC2PH3_address                         0xEC1
#define PSMC2PH3_position                        0x3
#define PSMC2PH3_size                            0x1
#define PSMC2PH3_value_mask                      0x8
#define PSMC2PH3_clear_mask                      0xF7

#define PSMC2PH4                                 0x4
#define PSMC2PH4_address                         0xEC1
#define PSMC2PH4_position                        0x4
#define PSMC2PH4_size                            0x1
#define PSMC2PH4_value_mask                      0x10
#define PSMC2PH4_clear_mask                      0xEF

#define PSMC2PH5                                 0x5
#define PSMC2PH5_address                         0xEC1
#define PSMC2PH5_position                        0x5
#define PSMC2PH5_size                            0x1
#define PSMC2PH5_value_mask                      0x20
#define PSMC2PH5_clear_mask                      0xDF

#define PSMC2PH6                                 0x6
#define PSMC2PH6_address                         0xEC1
#define PSMC2PH6_position                        0x6
#define PSMC2PH6_size                            0x1
#define PSMC2PH6_value_mask                      0x40
#define PSMC2PH6_clear_mask                      0xBF

#define PSMC2PH7                                 0x7
#define PSMC2PH7_address                         0xEC1
#define PSMC2PH7_position                        0x7
#define PSMC2PH7_size                            0x1
#define PSMC2PH7_value_mask                      0x80
#define PSMC2PH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| PSMC2PHH                                                                              0xEC2 |
#---------------------------------------------------------------------------------------------#
| PSMC2PH15 | PSMC2PH14 | PSMC2PH13 | PSMC2PH12 | PSMC2PH11 | PSMC2PH10 | PSMC2PH9 | PSMC2PH8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define PSMC2PHH                                 0x0
#define PSMC2PHH_address                         0xEC2
#define PSMC2PHH_position                        0x0
#define PSMC2PHH_size                            0x8
#define PSMC2PHH_value_mask                      0xFF
#define PSMC2PHH_clear_mask                      0x0

#define PSMC2PH8                                 0x0
#define PSMC2PH8_address                         0xEC2
#define PSMC2PH8_position                        0x0
#define PSMC2PH8_size                            0x1
#define PSMC2PH8_value_mask                      0x1
#define PSMC2PH8_clear_mask                      0xFE

#define PSMC2PH9                                 0x1
#define PSMC2PH9_address                         0xEC2
#define PSMC2PH9_position                        0x1
#define PSMC2PH9_size                            0x1
#define PSMC2PH9_value_mask                      0x2
#define PSMC2PH9_clear_mask                      0xFD

#define PSMC2PH10                                0x2
#define PSMC2PH10_address                        0xEC2
#define PSMC2PH10_position                       0x2
#define PSMC2PH10_size                           0x1
#define PSMC2PH10_value_mask                     0x4
#define PSMC2PH10_clear_mask                     0xFB

#define PSMC2PH11                                0x3
#define PSMC2PH11_address                        0xEC2
#define PSMC2PH11_position                       0x3
#define PSMC2PH11_size                           0x1
#define PSMC2PH11_value_mask                     0x8
#define PSMC2PH11_clear_mask                     0xF7

#define PSMC2PH12                                0x4
#define PSMC2PH12_address                        0xEC2
#define PSMC2PH12_position                       0x4
#define PSMC2PH12_size                           0x1
#define PSMC2PH12_value_mask                     0x10
#define PSMC2PH12_clear_mask                     0xEF

#define PSMC2PH13                                0x5
#define PSMC2PH13_address                        0xEC2
#define PSMC2PH13_position                       0x5
#define PSMC2PH13_size                           0x1
#define PSMC2PH13_value_mask                     0x20
#define PSMC2PH13_clear_mask                     0xDF

#define PSMC2PH14                                0x6
#define PSMC2PH14_address                        0xEC2
#define PSMC2PH14_position                       0x6
#define PSMC2PH14_size                           0x1
#define PSMC2PH14_value_mask                     0x40
#define PSMC2PH14_clear_mask                     0xBF

#define PSMC2PH15                                0x7
#define PSMC2PH15_address                        0xEC2
#define PSMC2PH15_position                       0x7
#define PSMC2PH15_size                           0x1
#define PSMC2PH15_value_mask                     0x80
#define PSMC2PH15_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| PSMC2DCL                                                                        0xEC3 |
#---------------------------------------------------------------------------------------#
| PSMC2DC7 | PSMC2DC6 | PSMC2DC5 | PSMC2DC4 | PSMC2DC3 | PSMC2DC2 | PSMC2DC1 | PSMC2DC0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PSMC2DCL                                 0x0
#define PSMC2DCL_address                         0xEC3
#define PSMC2DCL_position                        0x0
#define PSMC2DCL_size                            0x8
#define PSMC2DCL_value_mask                      0xFF
#define PSMC2DCL_clear_mask                      0x0

#define PSMC2DC0                                 0x0
#define PSMC2DC0_address                         0xEC3
#define PSMC2DC0_position                        0x0
#define PSMC2DC0_size                            0x1
#define PSMC2DC0_value_mask                      0x1
#define PSMC2DC0_clear_mask                      0xFE

#define PSMC2DC1                                 0x1
#define PSMC2DC1_address                         0xEC3
#define PSMC2DC1_position                        0x1
#define PSMC2DC1_size                            0x1
#define PSMC2DC1_value_mask                      0x2
#define PSMC2DC1_clear_mask                      0xFD

#define PSMC2DC2                                 0x2
#define PSMC2DC2_address                         0xEC3
#define PSMC2DC2_position                        0x2
#define PSMC2DC2_size                            0x1
#define PSMC2DC2_value_mask                      0x4
#define PSMC2DC2_clear_mask                      0xFB

#define PSMC2DC3                                 0x3
#define PSMC2DC3_address                         0xEC3
#define PSMC2DC3_position                        0x3
#define PSMC2DC3_size                            0x1
#define PSMC2DC3_value_mask                      0x8
#define PSMC2DC3_clear_mask                      0xF7

#define PSMC2DC4                                 0x4
#define PSMC2DC4_address                         0xEC3
#define PSMC2DC4_position                        0x4
#define PSMC2DC4_size                            0x1
#define PSMC2DC4_value_mask                      0x10
#define PSMC2DC4_clear_mask                      0xEF

#define PSMC2DC5                                 0x5
#define PSMC2DC5_address                         0xEC3
#define PSMC2DC5_position                        0x5
#define PSMC2DC5_size                            0x1
#define PSMC2DC5_value_mask                      0x20
#define PSMC2DC5_clear_mask                      0xDF

#define PSMC2DC6                                 0x6
#define PSMC2DC6_address                         0xEC3
#define PSMC2DC6_position                        0x6
#define PSMC2DC6_size                            0x1
#define PSMC2DC6_value_mask                      0x40
#define PSMC2DC6_clear_mask                      0xBF

#define PSMC2DC7                                 0x7
#define PSMC2DC7_address                         0xEC3
#define PSMC2DC7_position                        0x7
#define PSMC2DC7_size                            0x1
#define PSMC2DC7_value_mask                      0x80
#define PSMC2DC7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| PSMC2DCH                                                                              0xEC4 |
#---------------------------------------------------------------------------------------------#
| PSMC2DC15 | PSMC2DC14 | PSMC2DC13 | PSMC2DC12 | PSMC2DC11 | PSMC2DC10 | PSMC2DC9 | PSMC2DC8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define PSMC2DCH                                 0x0
#define PSMC2DCH_address                         0xEC4
#define PSMC2DCH_position                        0x0
#define PSMC2DCH_size                            0x8
#define PSMC2DCH_value_mask                      0xFF
#define PSMC2DCH_clear_mask                      0x0

#define PSMC2DC8                                 0x0
#define PSMC2DC8_address                         0xEC4
#define PSMC2DC8_position                        0x0
#define PSMC2DC8_size                            0x1
#define PSMC2DC8_value_mask                      0x1
#define PSMC2DC8_clear_mask                      0xFE

#define PSMC2DC9                                 0x1
#define PSMC2DC9_address                         0xEC4
#define PSMC2DC9_position                        0x1
#define PSMC2DC9_size                            0x1
#define PSMC2DC9_value_mask                      0x2
#define PSMC2DC9_clear_mask                      0xFD

#define PSMC2DC10                                0x2
#define PSMC2DC10_address                        0xEC4
#define PSMC2DC10_position                       0x2
#define PSMC2DC10_size                           0x1
#define PSMC2DC10_value_mask                     0x4
#define PSMC2DC10_clear_mask                     0xFB

#define PSMC2DC11                                0x3
#define PSMC2DC11_address                        0xEC4
#define PSMC2DC11_position                       0x3
#define PSMC2DC11_size                           0x1
#define PSMC2DC11_value_mask                     0x8
#define PSMC2DC11_clear_mask                     0xF7

#define PSMC2DC12                                0x4
#define PSMC2DC12_address                        0xEC4
#define PSMC2DC12_position                       0x4
#define PSMC2DC12_size                           0x1
#define PSMC2DC12_value_mask                     0x10
#define PSMC2DC12_clear_mask                     0xEF

#define PSMC2DC13                                0x5
#define PSMC2DC13_address                        0xEC4
#define PSMC2DC13_position                       0x5
#define PSMC2DC13_size                           0x1
#define PSMC2DC13_value_mask                     0x20
#define PSMC2DC13_clear_mask                     0xDF

#define PSMC2DC14                                0x6
#define PSMC2DC14_address                        0xEC4
#define PSMC2DC14_position                       0x6
#define PSMC2DC14_size                           0x1
#define PSMC2DC14_value_mask                     0x40
#define PSMC2DC14_clear_mask                     0xBF

#define PSMC2DC15                                0x7
#define PSMC2DC15_address                        0xEC4
#define PSMC2DC15_position                       0x7
#define PSMC2DC15_size                           0x1
#define PSMC2DC15_value_mask                     0x80
#define PSMC2DC15_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| PSMC2PRL                                                                        0xEC5 |
#---------------------------------------------------------------------------------------#
| PSMC2PR7 | PSMC2PR6 | PSMC2PR5 | PSMC2PR4 | PSMC2PR3 | PSMC2PR2 | PSMC2PR1 | PSMC2PR0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PSMC2PRL                                 0x0
#define PSMC2PRL_address                         0xEC5
#define PSMC2PRL_position                        0x0
#define PSMC2PRL_size                            0x8
#define PSMC2PRL_value_mask                      0xFF
#define PSMC2PRL_clear_mask                      0x0

#define PSMC2PR0                                 0x0
#define PSMC2PR0_address                         0xEC5
#define PSMC2PR0_position                        0x0
#define PSMC2PR0_size                            0x1
#define PSMC2PR0_value_mask                      0x1
#define PSMC2PR0_clear_mask                      0xFE

#define PSMC2PR1                                 0x1
#define PSMC2PR1_address                         0xEC5
#define PSMC2PR1_position                        0x1
#define PSMC2PR1_size                            0x1
#define PSMC2PR1_value_mask                      0x2
#define PSMC2PR1_clear_mask                      0xFD

#define PSMC2PR2                                 0x2
#define PSMC2PR2_address                         0xEC5
#define PSMC2PR2_position                        0x2
#define PSMC2PR2_size                            0x1
#define PSMC2PR2_value_mask                      0x4
#define PSMC2PR2_clear_mask                      0xFB

#define PSMC2PR3                                 0x3
#define PSMC2PR3_address                         0xEC5
#define PSMC2PR3_position                        0x3
#define PSMC2PR3_size                            0x1
#define PSMC2PR3_value_mask                      0x8
#define PSMC2PR3_clear_mask                      0xF7

#define PSMC2PR4                                 0x4
#define PSMC2PR4_address                         0xEC5
#define PSMC2PR4_position                        0x4
#define PSMC2PR4_size                            0x1
#define PSMC2PR4_value_mask                      0x10
#define PSMC2PR4_clear_mask                      0xEF

#define PSMC2PR5                                 0x5
#define PSMC2PR5_address                         0xEC5
#define PSMC2PR5_position                        0x5
#define PSMC2PR5_size                            0x1
#define PSMC2PR5_value_mask                      0x20
#define PSMC2PR5_clear_mask                      0xDF

#define PSMC2PR6                                 0x6
#define PSMC2PR6_address                         0xEC5
#define PSMC2PR6_position                        0x6
#define PSMC2PR6_size                            0x1
#define PSMC2PR6_value_mask                      0x40
#define PSMC2PR6_clear_mask                      0xBF

#define PSMC2PR7                                 0x7
#define PSMC2PR7_address                         0xEC5
#define PSMC2PR7_position                        0x7
#define PSMC2PR7_size                            0x1
#define PSMC2PR7_value_mask                      0x80
#define PSMC2PR7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| PSMC2PRH                                                                              0xEC6 |
#---------------------------------------------------------------------------------------------#
| PSMC2PR15 | PSMC2PR14 | PSMC2PR13 | PSMC2PR12 | PSMC2PR11 | PSMC2PR10 | PSMC2PR9 | PSMC2PR8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define PSMC2PRH                                 0x0
#define PSMC2PRH_address                         0xEC6
#define PSMC2PRH_position                        0x0
#define PSMC2PRH_size                            0x8
#define PSMC2PRH_value_mask                      0xFF
#define PSMC2PRH_clear_mask                      0x0

#define PSMC2PR8                                 0x0
#define PSMC2PR8_address                         0xEC6
#define PSMC2PR8_position                        0x0
#define PSMC2PR8_size                            0x1
#define PSMC2PR8_value_mask                      0x1
#define PSMC2PR8_clear_mask                      0xFE

#define PSMC2PR9                                 0x1
#define PSMC2PR9_address                         0xEC6
#define PSMC2PR9_position                        0x1
#define PSMC2PR9_size                            0x1
#define PSMC2PR9_value_mask                      0x2
#define PSMC2PR9_clear_mask                      0xFD

#define PSMC2PR10                                0x2
#define PSMC2PR10_address                        0xEC6
#define PSMC2PR10_position                       0x2
#define PSMC2PR10_size                           0x1
#define PSMC2PR10_value_mask                     0x4
#define PSMC2PR10_clear_mask                     0xFB

#define PSMC2PR11                                0x3
#define PSMC2PR11_address                        0xEC6
#define PSMC2PR11_position                       0x3
#define PSMC2PR11_size                           0x1
#define PSMC2PR11_value_mask                     0x8
#define PSMC2PR11_clear_mask                     0xF7

#define PSMC2PR12                                0x4
#define PSMC2PR12_address                        0xEC6
#define PSMC2PR12_position                       0x4
#define PSMC2PR12_size                           0x1
#define PSMC2PR12_value_mask                     0x10
#define PSMC2PR12_clear_mask                     0xEF

#define PSMC2PR13                                0x5
#define PSMC2PR13_address                        0xEC6
#define PSMC2PR13_position                       0x5
#define PSMC2PR13_size                           0x1
#define PSMC2PR13_value_mask                     0x20
#define PSMC2PR13_clear_mask                     0xDF

#define PSMC2PR14                                0x6
#define PSMC2PR14_address                        0xEC6
#define PSMC2PR14_position                       0x6
#define PSMC2PR14_size                           0x1
#define PSMC2PR14_value_mask                     0x40
#define PSMC2PR14_clear_mask                     0xBF

#define PSMC2PR15                                0x7
#define PSMC2PR15_address                        0xEC6
#define PSMC2PR15_position                       0x7
#define PSMC2PR15_size                           0x1
#define PSMC2PR15_value_mask                     0x80
#define PSMC2PR15_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| PSMC2TMRL                                                                               0xEC7 |
#-----------------------------------------------------------------------------------------------#
| PSMC2TMR7 | PSMC2TMR6 | PSMC2TMR5 | PSMC2TMR4 | PSMC2TMR3 | PSMC2TMR2 | PSMC2TMR1 | PSMC2TMR0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PSMC2TMRL                                0x0
#define PSMC2TMRL_address                        0xEC7
#define PSMC2TMRL_position                       0x0
#define PSMC2TMRL_size                           0x8
#define PSMC2TMRL_value_mask                     0xFF
#define PSMC2TMRL_clear_mask                     0x0

#define PSMC2TMR0                                0x0
#define PSMC2TMR0_address                        0xEC7
#define PSMC2TMR0_position                       0x0
#define PSMC2TMR0_size                           0x1
#define PSMC2TMR0_value_mask                     0x1
#define PSMC2TMR0_clear_mask                     0xFE

#define PSMC2TMR1                                0x1
#define PSMC2TMR1_address                        0xEC7
#define PSMC2TMR1_position                       0x1
#define PSMC2TMR1_size                           0x1
#define PSMC2TMR1_value_mask                     0x2
#define PSMC2TMR1_clear_mask                     0xFD

#define PSMC2TMR2                                0x2
#define PSMC2TMR2_address                        0xEC7
#define PSMC2TMR2_position                       0x2
#define PSMC2TMR2_size                           0x1
#define PSMC2TMR2_value_mask                     0x4
#define PSMC2TMR2_clear_mask                     0xFB

#define PSMC2TMR3                                0x3
#define PSMC2TMR3_address                        0xEC7
#define PSMC2TMR3_position                       0x3
#define PSMC2TMR3_size                           0x1
#define PSMC2TMR3_value_mask                     0x8
#define PSMC2TMR3_clear_mask                     0xF7

#define PSMC2TMR4                                0x4
#define PSMC2TMR4_address                        0xEC7
#define PSMC2TMR4_position                       0x4
#define PSMC2TMR4_size                           0x1
#define PSMC2TMR4_value_mask                     0x10
#define PSMC2TMR4_clear_mask                     0xEF

#define PSMC2TMR5                                0x5
#define PSMC2TMR5_address                        0xEC7
#define PSMC2TMR5_position                       0x5
#define PSMC2TMR5_size                           0x1
#define PSMC2TMR5_value_mask                     0x20
#define PSMC2TMR5_clear_mask                     0xDF

#define PSMC2TMR6                                0x6
#define PSMC2TMR6_address                        0xEC7
#define PSMC2TMR6_position                       0x6
#define PSMC2TMR6_size                           0x1
#define PSMC2TMR6_value_mask                     0x40
#define PSMC2TMR6_clear_mask                     0xBF

#define PSMC2TMR7                                0x7
#define PSMC2TMR7_address                        0xEC7
#define PSMC2TMR7_position                       0x7
#define PSMC2TMR7_size                           0x1
#define PSMC2TMR7_value_mask                     0x80
#define PSMC2TMR7_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------------#
| PSMC2TMRH                                                                                     0xEC8 |
#-----------------------------------------------------------------------------------------------------#
| PSMC2TMR15 | PSMC2TMR14 | PSMC2TMR13 | PSMC2TMR12 | PSMC2TMR11 | PSMC2TMR10 | PSMC2TMR9 | PSMC2TMR8 |
#-----------------------------------------------------------------------------------------------------#
| 7          | 6          | 5          | 4          | 3          | 2          | 1         | 0         |
#----------------------------------------------------------------------------------------------------*/

#define PSMC2TMRH                                0x0
#define PSMC2TMRH_address                        0xEC8
#define PSMC2TMRH_position                       0x0
#define PSMC2TMRH_size                           0x8
#define PSMC2TMRH_value_mask                     0xFF
#define PSMC2TMRH_clear_mask                     0x0

#define PSMC2TMR8                                0x0
#define PSMC2TMR8_address                        0xEC8
#define PSMC2TMR8_position                       0x0
#define PSMC2TMR8_size                           0x1
#define PSMC2TMR8_value_mask                     0x1
#define PSMC2TMR8_clear_mask                     0xFE

#define PSMC2TMR9                                0x1
#define PSMC2TMR9_address                        0xEC8
#define PSMC2TMR9_position                       0x1
#define PSMC2TMR9_size                           0x1
#define PSMC2TMR9_value_mask                     0x2
#define PSMC2TMR9_clear_mask                     0xFD

#define PSMC2TMR10                               0x2
#define PSMC2TMR10_address                       0xEC8
#define PSMC2TMR10_position                      0x2
#define PSMC2TMR10_size                          0x1
#define PSMC2TMR10_value_mask                    0x4
#define PSMC2TMR10_clear_mask                    0xFB

#define PSMC2TMR11                               0x3
#define PSMC2TMR11_address                       0xEC8
#define PSMC2TMR11_position                      0x3
#define PSMC2TMR11_size                          0x1
#define PSMC2TMR11_value_mask                    0x8
#define PSMC2TMR11_clear_mask                    0xF7

#define PSMC2TMR12                               0x4
#define PSMC2TMR12_address                       0xEC8
#define PSMC2TMR12_position                      0x4
#define PSMC2TMR12_size                          0x1
#define PSMC2TMR12_value_mask                    0x10
#define PSMC2TMR12_clear_mask                    0xEF

#define PSMC2TMR13                               0x5
#define PSMC2TMR13_address                       0xEC8
#define PSMC2TMR13_position                      0x5
#define PSMC2TMR13_size                          0x1
#define PSMC2TMR13_value_mask                    0x20
#define PSMC2TMR13_clear_mask                    0xDF

#define PSMC2TMR14                               0x6
#define PSMC2TMR14_address                       0xEC8
#define PSMC2TMR14_position                      0x6
#define PSMC2TMR14_size                          0x1
#define PSMC2TMR14_value_mask                    0x40
#define PSMC2TMR14_clear_mask                    0xBF

#define PSMC2TMR15                               0x7
#define PSMC2TMR15_address                       0xEC8
#define PSMC2TMR15_position                      0x7
#define PSMC2TMR15_size                          0x1
#define PSMC2TMR15_value_mask                    0x80
#define PSMC2TMR15_clear_mask                    0x7F


/*----------------------------------------------------------------------------------------------#
| PSMC2DBR                                                                                0xEC9 |
#-----------------------------------------------------------------------------------------------#
| PSMC2DBR7 | PSMC2DBR6 | PSMC2DBR5 | PSMC2DBR4 | PSMC2DBR3 | PSMC2DBR2 | PSMC2DBR1 | PSMC2DBR0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PSMC2DBR                                 0x0
#define PSMC2DBR_address                         0xEC9
#define PSMC2DBR_position                        0x0
#define PSMC2DBR_size                            0x8
#define PSMC2DBR_value_mask                      0xFF
#define PSMC2DBR_clear_mask                      0x0

#define PSMC2DBR0                                0x0
#define PSMC2DBR0_address                        0xEC9
#define PSMC2DBR0_position                       0x0
#define PSMC2DBR0_size                           0x1
#define PSMC2DBR0_value_mask                     0x1
#define PSMC2DBR0_clear_mask                     0xFE

#define PSMC2DBR1                                0x1
#define PSMC2DBR1_address                        0xEC9
#define PSMC2DBR1_position                       0x1
#define PSMC2DBR1_size                           0x1
#define PSMC2DBR1_value_mask                     0x2
#define PSMC2DBR1_clear_mask                     0xFD

#define PSMC2DBR2                                0x2
#define PSMC2DBR2_address                        0xEC9
#define PSMC2DBR2_position                       0x2
#define PSMC2DBR2_size                           0x1
#define PSMC2DBR2_value_mask                     0x4
#define PSMC2DBR2_clear_mask                     0xFB

#define PSMC2DBR3                                0x3
#define PSMC2DBR3_address                        0xEC9
#define PSMC2DBR3_position                       0x3
#define PSMC2DBR3_size                           0x1
#define PSMC2DBR3_value_mask                     0x8
#define PSMC2DBR3_clear_mask                     0xF7

#define PSMC2DBR4                                0x4
#define PSMC2DBR4_address                        0xEC9
#define PSMC2DBR4_position                       0x4
#define PSMC2DBR4_size                           0x1
#define PSMC2DBR4_value_mask                     0x10
#define PSMC2DBR4_clear_mask                     0xEF

#define PSMC2DBR5                                0x5
#define PSMC2DBR5_address                        0xEC9
#define PSMC2DBR5_position                       0x5
#define PSMC2DBR5_size                           0x1
#define PSMC2DBR5_value_mask                     0x20
#define PSMC2DBR5_clear_mask                     0xDF

#define PSMC2DBR6                                0x6
#define PSMC2DBR6_address                        0xEC9
#define PSMC2DBR6_position                       0x6
#define PSMC2DBR6_size                           0x1
#define PSMC2DBR6_value_mask                     0x40
#define PSMC2DBR6_clear_mask                     0xBF

#define PSMC2DBR7                                0x7
#define PSMC2DBR7_address                        0xEC9
#define PSMC2DBR7_position                       0x7
#define PSMC2DBR7_size                           0x1
#define PSMC2DBR7_value_mask                     0x80
#define PSMC2DBR7_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| PSMC2DBF                                                                                0xECA |
#-----------------------------------------------------------------------------------------------#
| PSMC2DBF7 | PSMC2DBF6 | PSMC2DBF5 | PSMC2DBF4 | PSMC2DBF3 | PSMC2DBF2 | PSMC2DBF1 | PSMC2DBF0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PSMC2DBF                                 0x0
#define PSMC2DBF_address                         0xECA
#define PSMC2DBF_position                        0x0
#define PSMC2DBF_size                            0x8
#define PSMC2DBF_value_mask                      0xFF
#define PSMC2DBF_clear_mask                      0x0

#define PSMC2DBF0                                0x0
#define PSMC2DBF0_address                        0xECA
#define PSMC2DBF0_position                       0x0
#define PSMC2DBF0_size                           0x1
#define PSMC2DBF0_value_mask                     0x1
#define PSMC2DBF0_clear_mask                     0xFE

#define PSMC2DBF1                                0x1
#define PSMC2DBF1_address                        0xECA
#define PSMC2DBF1_position                       0x1
#define PSMC2DBF1_size                           0x1
#define PSMC2DBF1_value_mask                     0x2
#define PSMC2DBF1_clear_mask                     0xFD

#define PSMC2DBF2                                0x2
#define PSMC2DBF2_address                        0xECA
#define PSMC2DBF2_position                       0x2
#define PSMC2DBF2_size                           0x1
#define PSMC2DBF2_value_mask                     0x4
#define PSMC2DBF2_clear_mask                     0xFB

#define PSMC2DBF3                                0x3
#define PSMC2DBF3_address                        0xECA
#define PSMC2DBF3_position                       0x3
#define PSMC2DBF3_size                           0x1
#define PSMC2DBF3_value_mask                     0x8
#define PSMC2DBF3_clear_mask                     0xF7

#define PSMC2DBF4                                0x4
#define PSMC2DBF4_address                        0xECA
#define PSMC2DBF4_position                       0x4
#define PSMC2DBF4_size                           0x1
#define PSMC2DBF4_value_mask                     0x10
#define PSMC2DBF4_clear_mask                     0xEF

#define PSMC2DBF5                                0x5
#define PSMC2DBF5_address                        0xECA
#define PSMC2DBF5_position                       0x5
#define PSMC2DBF5_size                           0x1
#define PSMC2DBF5_value_mask                     0x20
#define PSMC2DBF5_clear_mask                     0xDF

#define PSMC2DBF6                                0x6
#define PSMC2DBF6_address                        0xECA
#define PSMC2DBF6_position                       0x6
#define PSMC2DBF6_size                           0x1
#define PSMC2DBF6_value_mask                     0x40
#define PSMC2DBF6_clear_mask                     0xBF

#define PSMC2DBF7                                0x7
#define PSMC2DBF7_address                        0xECA
#define PSMC2DBF7_position                       0x7
#define PSMC2DBF7_size                           0x1
#define PSMC2DBF7_value_mask                     0x80
#define PSMC2DBF7_clear_mask                     0x7F


/*------------------------------------------------------------------------------------------------------#
| PSMC2BLKR                                                                                       0xECB |
#-------------------------------------------------------------------------------------------------------#
| PSMC2BLKR7 | PSMC2BLKR6 | PSMC2BLKR5 | PSMC2BLKR4 | PSMC2BLKR3 | PSMC2BLKR2 | PSMC2BLKR1 | PSMC2BLKR0 |
#-------------------------------------------------------------------------------------------------------#
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
#------------------------------------------------------------------------------------------------------*/

#define PSMC2BLKR                                0x0
#define PSMC2BLKR_address                        0xECB
#define PSMC2BLKR_position                       0x0
#define PSMC2BLKR_size                           0x8
#define PSMC2BLKR_value_mask                     0xFF
#define PSMC2BLKR_clear_mask                     0x0

#define PSMC2BLKR0                               0x0
#define PSMC2BLKR0_address                       0xECB
#define PSMC2BLKR0_position                      0x0
#define PSMC2BLKR0_size                          0x1
#define PSMC2BLKR0_value_mask                    0x1
#define PSMC2BLKR0_clear_mask                    0xFE

#define PSMC2BLKR1                               0x1
#define PSMC2BLKR1_address                       0xECB
#define PSMC2BLKR1_position                      0x1
#define PSMC2BLKR1_size                          0x1
#define PSMC2BLKR1_value_mask                    0x2
#define PSMC2BLKR1_clear_mask                    0xFD

#define PSMC2BLKR2                               0x2
#define PSMC2BLKR2_address                       0xECB
#define PSMC2BLKR2_position                      0x2
#define PSMC2BLKR2_size                          0x1
#define PSMC2BLKR2_value_mask                    0x4
#define PSMC2BLKR2_clear_mask                    0xFB

#define PSMC2BLKR3                               0x3
#define PSMC2BLKR3_address                       0xECB
#define PSMC2BLKR3_position                      0x3
#define PSMC2BLKR3_size                          0x1
#define PSMC2BLKR3_value_mask                    0x8
#define PSMC2BLKR3_clear_mask                    0xF7

#define PSMC2BLKR4                               0x4
#define PSMC2BLKR4_address                       0xECB
#define PSMC2BLKR4_position                      0x4
#define PSMC2BLKR4_size                          0x1
#define PSMC2BLKR4_value_mask                    0x10
#define PSMC2BLKR4_clear_mask                    0xEF

#define PSMC2BLKR5                               0x5
#define PSMC2BLKR5_address                       0xECB
#define PSMC2BLKR5_position                      0x5
#define PSMC2BLKR5_size                          0x1
#define PSMC2BLKR5_value_mask                    0x20
#define PSMC2BLKR5_clear_mask                    0xDF

#define PSMC2BLKR6                               0x6
#define PSMC2BLKR6_address                       0xECB
#define PSMC2BLKR6_position                      0x6
#define PSMC2BLKR6_size                          0x1
#define PSMC2BLKR6_value_mask                    0x40
#define PSMC2BLKR6_clear_mask                    0xBF

#define PSMC2BLKR7                               0x7
#define PSMC2BLKR7_address                       0xECB
#define PSMC2BLKR7_position                      0x7
#define PSMC2BLKR7_size                          0x1
#define PSMC2BLKR7_value_mask                    0x80
#define PSMC2BLKR7_clear_mask                    0x7F


/*------------------------------------------------------------------------------------------------------#
| PSMC2BLKF                                                                                       0xECC |
#-------------------------------------------------------------------------------------------------------#
| PSMC2BLKF7 | PSMC2BLKF6 | PSMC2BLKF5 | PSMC2BLKF4 | PSMC2BLKF3 | PSMC2BLKF2 | PSMC2BLKF1 | PSMC2BLKF0 |
#-------------------------------------------------------------------------------------------------------#
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
#------------------------------------------------------------------------------------------------------*/

#define PSMC2BLKF                                0x0
#define PSMC2BLKF_address                        0xECC
#define PSMC2BLKF_position                       0x0
#define PSMC2BLKF_size                           0x8
#define PSMC2BLKF_value_mask                     0xFF
#define PSMC2BLKF_clear_mask                     0x0

#define PSMC2BLKF0                               0x0
#define PSMC2BLKF0_address                       0xECC
#define PSMC2BLKF0_position                      0x0
#define PSMC2BLKF0_size                          0x1
#define PSMC2BLKF0_value_mask                    0x1
#define PSMC2BLKF0_clear_mask                    0xFE

#define PSMC2BLKF1                               0x1
#define PSMC2BLKF1_address                       0xECC
#define PSMC2BLKF1_position                      0x1
#define PSMC2BLKF1_size                          0x1
#define PSMC2BLKF1_value_mask                    0x2
#define PSMC2BLKF1_clear_mask                    0xFD

#define PSMC2BLKF2                               0x2
#define PSMC2BLKF2_address                       0xECC
#define PSMC2BLKF2_position                      0x2
#define PSMC2BLKF2_size                          0x1
#define PSMC2BLKF2_value_mask                    0x4
#define PSMC2BLKF2_clear_mask                    0xFB

#define PSMC2BLKF3                               0x3
#define PSMC2BLKF3_address                       0xECC
#define PSMC2BLKF3_position                      0x3
#define PSMC2BLKF3_size                          0x1
#define PSMC2BLKF3_value_mask                    0x8
#define PSMC2BLKF3_clear_mask                    0xF7

#define PSMC2BLKF4                               0x4
#define PSMC2BLKF4_address                       0xECC
#define PSMC2BLKF4_position                      0x4
#define PSMC2BLKF4_size                          0x1
#define PSMC2BLKF4_value_mask                    0x10
#define PSMC2BLKF4_clear_mask                    0xEF

#define PSMC2BLKF5                               0x5
#define PSMC2BLKF5_address                       0xECC
#define PSMC2BLKF5_position                      0x5
#define PSMC2BLKF5_size                          0x1
#define PSMC2BLKF5_value_mask                    0x20
#define PSMC2BLKF5_clear_mask                    0xDF

#define PSMC2BLKF6                               0x6
#define PSMC2BLKF6_address                       0xECC
#define PSMC2BLKF6_position                      0x6
#define PSMC2BLKF6_size                          0x1
#define PSMC2BLKF6_value_mask                    0x40
#define PSMC2BLKF6_clear_mask                    0xBF

#define PSMC2BLKF7                               0x7
#define PSMC2BLKF7_address                       0xECC
#define PSMC2BLKF7_position                      0x7
#define PSMC2BLKF7_size                          0x1
#define PSMC2BLKF7_value_mask                    0x80
#define PSMC2BLKF7_clear_mask                    0x7F


/*--------------------------------------------------------------#
| PSMC2FFA                                                0xECD |
#---------------------------------------------------------------#
| - | - | - | - | PSMC2FFA3 | PSMC2FFA2 | PSMC2FFA1 | PSMC2FFA0 |
#---------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3         | 2         | 1         | 0         |
#--------------------------------------------------------------*/

#define PSMC2FFA                                 0x0
#define PSMC2FFA_address                         0xECD
#define PSMC2FFA_position                        0x0
#define PSMC2FFA_size                            0x8
#define PSMC2FFA_value_mask                      0xFF
#define PSMC2FFA_clear_mask                      0x0

#define PSMC2FFA0                                0x0
#define PSMC2FFA0_address                        0xECD
#define PSMC2FFA0_position                       0x0
#define PSMC2FFA0_size                           0x1
#define PSMC2FFA0_value_mask                     0x1
#define PSMC2FFA0_clear_mask                     0xFE

#define PSMC2FFA1                                0x1
#define PSMC2FFA1_address                        0xECD
#define PSMC2FFA1_position                       0x1
#define PSMC2FFA1_size                           0x1
#define PSMC2FFA1_value_mask                     0x2
#define PSMC2FFA1_clear_mask                     0xFD

#define PSMC2FFA2                                0x2
#define PSMC2FFA2_address                        0xECD
#define PSMC2FFA2_position                       0x2
#define PSMC2FFA2_size                           0x1
#define PSMC2FFA2_value_mask                     0x4
#define PSMC2FFA2_clear_mask                     0xFB

#define PSMC2FFA3                                0x3
#define PSMC2FFA3_address                        0xECD
#define PSMC2FFA3_position                       0x3
#define PSMC2FFA3_size                           0x1
#define PSMC2FFA3_value_mask                     0x8
#define PSMC2FFA3_clear_mask                     0xF7


/*----------------------------------------#
| PSMC2STR0                         0xECE |
#-----------------------------------------#
| - | - | - | - | - | - | P2STRB | P2STRA |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1      | 0      |
#----------------------------------------*/

#define PSMC2STR0                                0x0
#define PSMC2STR0_address                        0xECE
#define PSMC2STR0_position                       0x0
#define PSMC2STR0_size                           0x8
#define PSMC2STR0_value_mask                     0xFF
#define PSMC2STR0_clear_mask                     0x0

#define P2STRA                                   0x0
#define P2STRA_address                           0xECE
#define P2STRA_position                          0x0
#define P2STRA_size                              0x1
#define P2STRA_value_mask                        0x1
#define P2STRA_clear_mask                        0xFE

#define P2STRB                                   0x1
#define P2STRB_address                           0xECE
#define P2STRB_position                          0x1
#define P2STRB_size                              0x1
#define P2STRB_value_mask                        0x2
#define P2STRB_clear_mask                        0xFD


/*------------------------------------------------#
| PSMC2STR1                                 0xECF |
#-------------------------------------------------#
| P2SSYNC | - | - | - | - | - | P2LSMEN | P2HSMEN |
#-------------------------------------------------#
| 7       | 6 | 5 | 4 | 3 | 2 | 1       | 0       |
#------------------------------------------------*/

#define PSMC2STR1                                0x0
#define PSMC2STR1_address                        0xECF
#define PSMC2STR1_position                       0x0
#define PSMC2STR1_size                           0x8
#define PSMC2STR1_value_mask                     0xFF
#define PSMC2STR1_clear_mask                     0x0

#define P2HSMEN                                  0x0
#define P2HSMEN_address                          0xECF
#define P2HSMEN_position                         0x0
#define P2HSMEN_size                             0x1
#define P2HSMEN_value_mask                       0x1
#define P2HSMEN_clear_mask                       0xFE

#define P2LSMEN                                  0x1
#define P2LSMEN_address                          0xECF
#define P2LSMEN_position                         0x1
#define P2LSMEN_size                             0x1
#define P2LSMEN_value_mask                       0x2
#define P2LSMEN_clear_mask                       0xFD

#define P2SSYNC                                  0x7
#define P2SSYNC_address                          0xECF
#define P2SSYNC_position                         0x7
#define P2SSYNC_size                             0x1
#define P2SSYNC_value_mask                       0x80
#define P2SSYNC_clear_mask                       0x7F


/*----------------------------------------------------------------------------#
| PSMC3CON                                                              0xED1 |
#-----------------------------------------------------------------------------#
| PSMC3EN | PSMC3LD | P3DBFE | P3DBRE | P3MODE3 | P3MODE2 | P3MODE1 | P3MODE0 |
#-----------------------------------------------------------------------------#
| 7       | 6       | 5      | 4      | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------------------*/

#define PSMC3CON                                 0x0
#define PSMC3CON_address                         0xED1
#define PSMC3CON_position                        0x0
#define PSMC3CON_size                            0x8
#define PSMC3CON_value_mask                      0xFF
#define PSMC3CON_clear_mask                      0x0

#define P3MODE                                   0x0
#define P3MODE_address                           0xED1
#define P3MODE_position                          0x0
#define P3MODE_size                              0x4
#define P3MODE_value_mask                        0xF
#define P3MODE_clear_mask                        0xF0

#define P3MODE0                                  0x0
#define P3MODE0_address                          0xED1
#define P3MODE0_position                         0x0
#define P3MODE0_size                             0x1
#define P3MODE0_value_mask                       0x1
#define P3MODE0_clear_mask                       0xFE

#define P3MODE1                                  0x1
#define P3MODE1_address                          0xED1
#define P3MODE1_position                         0x1
#define P3MODE1_size                             0x1
#define P3MODE1_value_mask                       0x2
#define P3MODE1_clear_mask                       0xFD

#define P3MODE2                                  0x2
#define P3MODE2_address                          0xED1
#define P3MODE2_position                         0x2
#define P3MODE2_size                             0x1
#define P3MODE2_value_mask                       0x4
#define P3MODE2_clear_mask                       0xFB

#define P3MODE3                                  0x3
#define P3MODE3_address                          0xED1
#define P3MODE3_position                         0x3
#define P3MODE3_size                             0x1
#define P3MODE3_value_mask                       0x8
#define P3MODE3_clear_mask                       0xF7

#define P3DBRE                                   0x4
#define P3DBRE_address                           0xED1
#define P3DBRE_position                          0x4
#define P3DBRE_size                              0x1
#define P3DBRE_value_mask                        0x10
#define P3DBRE_clear_mask                        0xEF

#define P3DBFE                                   0x5
#define P3DBFE_address                           0xED1
#define P3DBFE_position                          0x5
#define P3DBFE_size                              0x1
#define P3DBFE_value_mask                        0x20
#define P3DBFE_clear_mask                        0xDF

#define PSMC3LD                                  0x6
#define PSMC3LD_address                          0xED1
#define PSMC3LD_position                         0x6
#define PSMC3LD_size                             0x1
#define PSMC3LD_value_mask                       0x40
#define PSMC3LD_clear_mask                       0xBF

#define PSMC3EN                                  0x7
#define PSMC3EN_address                          0xED1
#define PSMC3EN_position                         0x7
#define PSMC3EN_size                             0x1
#define PSMC3EN_value_mask                       0x80
#define PSMC3EN_clear_mask                       0x7F


/*--------------------------------------------------------------------------#
| PSMC3MDL                                                            0xED2 |
#---------------------------------------------------------------------------#
| P3MDLEN | P3MDLPOL | P3MDLBIT | - | P3MSRC3 | P3MSRC2 | P3MSRC1 | P3MSRC0 |
#---------------------------------------------------------------------------#
| 7       | 6        | 5        | 4 | 3       | 2       | 1       | 0       |
#--------------------------------------------------------------------------*/

#define PSMC3MDL                                 0x0
#define PSMC3MDL_address                         0xED2
#define PSMC3MDL_position                        0x0
#define PSMC3MDL_size                            0x8
#define PSMC3MDL_value_mask                      0xFF
#define PSMC3MDL_clear_mask                      0x0

#define P3MSRC                                   0x0
#define P3MSRC_address                           0xED2
#define P3MSRC_position                          0x0
#define P3MSRC_size                              0x4
#define P3MSRC_value_mask                        0xF
#define P3MSRC_clear_mask                        0xF0

#define P3MSRC0                                  0x0
#define P3MSRC0_address                          0xED2
#define P3MSRC0_position                         0x0
#define P3MSRC0_size                             0x1
#define P3MSRC0_value_mask                       0x1
#define P3MSRC0_clear_mask                       0xFE

#define P3MSRC1                                  0x1
#define P3MSRC1_address                          0xED2
#define P3MSRC1_position                         0x1
#define P3MSRC1_size                             0x1
#define P3MSRC1_value_mask                       0x2
#define P3MSRC1_clear_mask                       0xFD

#define P3MSRC2                                  0x2
#define P3MSRC2_address                          0xED2
#define P3MSRC2_position                         0x2
#define P3MSRC2_size                             0x1
#define P3MSRC2_value_mask                       0x4
#define P3MSRC2_clear_mask                       0xFB

#define P3MSRC3                                  0x3
#define P3MSRC3_address                          0xED2
#define P3MSRC3_position                         0x3
#define P3MSRC3_size                             0x1
#define P3MSRC3_value_mask                       0x8
#define P3MSRC3_clear_mask                       0xF7

#define P3MDLBIT                                 0x5
#define P3MDLBIT_address                         0xED2
#define P3MDLBIT_position                        0x5
#define P3MDLBIT_size                            0x1
#define P3MDLBIT_value_mask                      0x20
#define P3MDLBIT_clear_mask                      0xDF

#define P3MDLPOL                                 0x6
#define P3MDLPOL_address                         0xED2
#define P3MDLPOL_position                        0x6
#define P3MDLPOL_size                            0x1
#define P3MDLPOL_value_mask                      0x40
#define P3MDLPOL_clear_mask                      0xBF

#define P3MDLEN                                  0x7
#define P3MDLEN_address                          0xED2
#define P3MDLEN_position                         0x7
#define P3MDLEN_size                             0x1
#define P3MDLEN_value_mask                       0x80
#define P3MDLEN_clear_mask                       0x7F


/*------------------------------------------------------------------#
| PSMC3SYNC                                                   0xED3 |
#-------------------------------------------------------------------#
| P3POFST | P3PRPOL | P3DCPOL | - | - | P3SYNC2 | P3SYNC1 | P3SYNC0 |
#-------------------------------------------------------------------#
| 7       | 6       | 5       | 4 | 3 | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define PSMC3SYNC                                0x0
#define PSMC3SYNC_address                        0xED3
#define PSMC3SYNC_position                       0x0
#define PSMC3SYNC_size                           0x8
#define PSMC3SYNC_value_mask                     0xFF
#define PSMC3SYNC_clear_mask                     0x0

#define P3SYNC0                                  0x0
#define P3SYNC0_address                          0xED3
#define P3SYNC0_position                         0x0
#define P3SYNC0_size                             0x1
#define P3SYNC0_value_mask                       0x1
#define P3SYNC0_clear_mask                       0xFE

#define P3SYNC1                                  0x1
#define P3SYNC1_address                          0xED3
#define P3SYNC1_position                         0x1
#define P3SYNC1_size                             0x1
#define P3SYNC1_value_mask                       0x2
#define P3SYNC1_clear_mask                       0xFD

#define P3SYNC2                                  0x2
#define P3SYNC2_address                          0xED3
#define P3SYNC2_position                         0x2
#define P3SYNC2_size                             0x1
#define P3SYNC2_value_mask                       0x4
#define P3SYNC2_clear_mask                       0xFB

#define P3DCPOL                                  0x5
#define P3DCPOL_address                          0xED3
#define P3DCPOL_position                         0x5
#define P3DCPOL_size                             0x1
#define P3DCPOL_value_mask                       0x20
#define P3DCPOL_clear_mask                       0xDF

#define P3PRPOL                                  0x6
#define P3PRPOL_address                          0xED3
#define P3PRPOL_position                         0x6
#define P3PRPOL_size                             0x1
#define P3PRPOL_value_mask                       0x40
#define P3PRPOL_clear_mask                       0xBF

#define P3POFST                                  0x7
#define P3POFST_address                          0xED3
#define P3POFST_position                         0x7
#define P3POFST_size                             0x1
#define P3POFST_value_mask                       0x80
#define P3POFST_clear_mask                       0x7F


/*------------------------------------------------------#
| PSMC3CLK                                        0xED4 |
#-------------------------------------------------------#
| - | - | P3CPRE1 | P3CPRE0 | - | - | P3CSRC1 | P3CSRC0 |
#-------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3 | 2 | 1       | 0       |
#------------------------------------------------------*/

#define PSMC3CLK                                 0x0
#define PSMC3CLK_address                         0xED4
#define PSMC3CLK_position                        0x0
#define PSMC3CLK_size                            0x8
#define PSMC3CLK_value_mask                      0xFF
#define PSMC3CLK_clear_mask                      0x0

#define P3CSRC0                                  0x0
#define P3CSRC0_address                          0xED4
#define P3CSRC0_position                         0x0
#define P3CSRC0_size                             0x1
#define P3CSRC0_value_mask                       0x1
#define P3CSRC0_clear_mask                       0xFE

#define P3CSRC                                   0x0
#define P3CSRC_address                           0xED4
#define P3CSRC_position                          0x0
#define P3CSRC_size                              0x2
#define P3CSRC_value_mask                        0x3
#define P3CSRC_clear_mask                        0xFC

#define P3CSRC1                                  0x1
#define P3CSRC1_address                          0xED4
#define P3CSRC1_position                         0x1
#define P3CSRC1_size                             0x1
#define P3CSRC1_value_mask                       0x2
#define P3CSRC1_clear_mask                       0xFD

#define P3CPRE                                   0x4
#define P3CPRE_address                           0xED4
#define P3CPRE_position                          0x4
#define P3CPRE_size                              0x2
#define P3CPRE_value_mask                        0x30
#define P3CPRE_clear_mask                        0xCF

#define P3CPRE0                                  0x4
#define P3CPRE0_address                          0xED4
#define P3CPRE0_position                         0x4
#define P3CPRE0_size                             0x1
#define P3CPRE0_value_mask                       0x10
#define P3CPRE0_clear_mask                       0xEF

#define P3CPRE1                                  0x5
#define P3CPRE1_address                          0xED4
#define P3CPRE1_position                         0x5
#define P3CPRE1_size                             0x1
#define P3CPRE1_value_mask                       0x20
#define P3CPRE1_clear_mask                       0xDF


/*--------------------------------------#
| PSMC3OEN                        0xED5 |
#---------------------------------------#
| - | - | - | - | - | - | P3OEB | P3OEA |
#---------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1     | 0     |
#--------------------------------------*/

#define PSMC3OEN                                 0x0
#define PSMC3OEN_address                         0xED5
#define PSMC3OEN_position                        0x0
#define PSMC3OEN_size                            0x8
#define PSMC3OEN_value_mask                      0xFF
#define PSMC3OEN_clear_mask                      0x0

#define P3OEA                                    0x0
#define P3OEA_address                            0xED5
#define P3OEA_position                           0x0
#define P3OEA_size                               0x1
#define P3OEA_value_mask                         0x1
#define P3OEA_clear_mask                         0xFE

#define P3OEB                                    0x1
#define P3OEB_address                            0xED5
#define P3OEB_position                           0x1
#define P3OEB_size                               0x1
#define P3OEB_value_mask                         0x2
#define P3OEB_clear_mask                         0xFD


/*----------------------------------------------#
| PSMC3POL                                0xED6 |
#-----------------------------------------------#
| - | P3INPOL | - | - | - | - | P3POLB | P3POLA |
#-----------------------------------------------#
| 7 | 6       | 5 | 4 | 3 | 2 | 1      | 0      |
#----------------------------------------------*/

#define PSMC3POL                                 0x0
#define PSMC3POL_address                         0xED6
#define PSMC3POL_position                        0x0
#define PSMC3POL_size                            0x8
#define PSMC3POL_value_mask                      0xFF
#define PSMC3POL_clear_mask                      0x0

#define P3POLA                                   0x0
#define P3POLA_address                           0xED6
#define P3POLA_position                          0x0
#define P3POLA_size                              0x1
#define P3POLA_value_mask                        0x1
#define P3POLA_clear_mask                        0xFE

#define P3POLB                                   0x1
#define P3POLB_address                           0xED6
#define P3POLB_position                          0x1
#define P3POLB_size                              0x1
#define P3POLB_value_mask                        0x2
#define P3POLB_clear_mask                        0xFD

#define P3INPOL                                  0x6
#define P3INPOL_address                          0xED6
#define P3INPOL_position                         0x6
#define P3INPOL_size                             0x1
#define P3INPOL_value_mask                       0x40
#define P3INPOL_clear_mask                       0xBF


/*------------------------------------------------------#
| PSMC3BLNK                                       0xED7 |
#-------------------------------------------------------#
| - | - | P3FEBM1 | P3FEBM0 | - | - | P3REBM1 | P3REBM0 |
#-------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3 | 2 | 1       | 0       |
#------------------------------------------------------*/

#define PSMC3BLNK                                0x0
#define PSMC3BLNK_address                        0xED7
#define PSMC3BLNK_position                       0x0
#define PSMC3BLNK_size                           0x8
#define PSMC3BLNK_value_mask                     0xFF
#define PSMC3BLNK_clear_mask                     0x0

#define P3REBM                                   0x0
#define P3REBM_address                           0xED7
#define P3REBM_position                          0x0
#define P3REBM_size                              0x2
#define P3REBM_value_mask                        0x3
#define P3REBM_clear_mask                        0xFC

#define P3REBM0                                  0x0
#define P3REBM0_address                          0xED7
#define P3REBM0_position                         0x0
#define P3REBM0_size                             0x1
#define P3REBM0_value_mask                       0x1
#define P3REBM0_clear_mask                       0xFE

#define P3REBM1                                  0x1
#define P3REBM1_address                          0xED7
#define P3REBM1_position                         0x1
#define P3REBM1_size                             0x1
#define P3REBM1_value_mask                       0x2
#define P3REBM1_clear_mask                       0xFD

#define P3FEBM                                   0x4
#define P3FEBM_address                           0xED7
#define P3FEBM_position                          0x4
#define P3FEBM_size                              0x2
#define P3FEBM_value_mask                        0x30
#define P3FEBM_clear_mask                        0xCF

#define P3FEBM0                                  0x4
#define P3FEBM0_address                          0xED7
#define P3FEBM0_position                         0x4
#define P3FEBM0_size                             0x1
#define P3FEBM0_value_mask                       0x10
#define P3FEBM0_clear_mask                       0xEF

#define P3FEBM1                                  0x5
#define P3FEBM1_address                          0xED7
#define P3FEBM1_position                         0x5
#define P3FEBM1_size                             0x1
#define P3FEBM1_value_mask                       0x20
#define P3FEBM1_clear_mask                       0xDF


/*-----------------------------------------------------------------#
| PSMC3REBS                                                  0xED8 |
#------------------------------------------------------------------#
| P3REBSIN | - | - | P3REBSC4 | P3REBSC3 | P3REBSC2 | P3REBSC1 | - |
#------------------------------------------------------------------#
| 7        | 6 | 5 | 4        | 3        | 2        | 1        | 0 |
#-----------------------------------------------------------------*/

#define PSMC3REBS                                0x0
#define PSMC3REBS_address                        0xED8
#define PSMC3REBS_position                       0x0
#define PSMC3REBS_size                           0x8
#define PSMC3REBS_value_mask                     0xFF
#define PSMC3REBS_clear_mask                     0x0

#define P3REBSC1                                 0x1
#define P3REBSC1_address                         0xED8
#define P3REBSC1_position                        0x1
#define P3REBSC1_size                            0x1
#define P3REBSC1_value_mask                      0x2
#define P3REBSC1_clear_mask                      0xFD

#define P3REBSC2                                 0x2
#define P3REBSC2_address                         0xED8
#define P3REBSC2_position                        0x2
#define P3REBSC2_size                            0x1
#define P3REBSC2_value_mask                      0x4
#define P3REBSC2_clear_mask                      0xFB

#define P3REBSC3                                 0x3
#define P3REBSC3_address                         0xED8
#define P3REBSC3_position                        0x3
#define P3REBSC3_size                            0x1
#define P3REBSC3_value_mask                      0x8
#define P3REBSC3_clear_mask                      0xF7

#define P3REBSC4                                 0x4
#define P3REBSC4_address                         0xED8
#define P3REBSC4_position                        0x4
#define P3REBSC4_size                            0x1
#define P3REBSC4_value_mask                      0x10
#define P3REBSC4_clear_mask                      0xEF

#define P3REBSIN                                 0x7
#define P3REBSIN_address                         0xED8
#define P3REBSIN_position                        0x7
#define P3REBSIN_size                            0x1
#define P3REBSIN_value_mask                      0x80
#define P3REBSIN_clear_mask                      0x7F


/*-----------------------------------------------------------------#
| PSMC3FEBS                                                  0xED9 |
#------------------------------------------------------------------#
| P3FEBSIN | - | - | P3FEBSC4 | P3FEBSC3 | P3FEBSC2 | P3FEBSC1 | - |
#------------------------------------------------------------------#
| 7        | 6 | 5 | 4        | 3        | 2        | 1        | 0 |
#-----------------------------------------------------------------*/

#define PSMC3FEBS                                0x0
#define PSMC3FEBS_address                        0xED9
#define PSMC3FEBS_position                       0x0
#define PSMC3FEBS_size                           0x8
#define PSMC3FEBS_value_mask                     0xFF
#define PSMC3FEBS_clear_mask                     0x0

#define P3FEBSC1                                 0x1
#define P3FEBSC1_address                         0xED9
#define P3FEBSC1_position                        0x1
#define P3FEBSC1_size                            0x1
#define P3FEBSC1_value_mask                      0x2
#define P3FEBSC1_clear_mask                      0xFD

#define P3FEBSC2                                 0x2
#define P3FEBSC2_address                         0xED9
#define P3FEBSC2_position                        0x2
#define P3FEBSC2_size                            0x1
#define P3FEBSC2_value_mask                      0x4
#define P3FEBSC2_clear_mask                      0xFB

#define P3FEBSC3                                 0x3
#define P3FEBSC3_address                         0xED9
#define P3FEBSC3_position                        0x3
#define P3FEBSC3_size                            0x1
#define P3FEBSC3_value_mask                      0x8
#define P3FEBSC3_clear_mask                      0xF7

#define P3FEBSC4                                 0x4
#define P3FEBSC4_address                         0xED9
#define P3FEBSC4_position                        0x4
#define P3FEBSC4_size                            0x1
#define P3FEBSC4_value_mask                      0x10
#define P3FEBSC4_clear_mask                      0xEF

#define P3FEBSIN                                 0x7
#define P3FEBSIN_address                         0xED9
#define P3FEBSIN_position                        0x7
#define P3FEBSIN_size                            0x1
#define P3FEBSIN_value_mask                      0x80
#define P3FEBSIN_clear_mask                      0x7F


/*-----------------------------------------------------------------#
| PSMC3PHS                                                   0xEDA |
#------------------------------------------------------------------#
| P3PHSIN | - | - | P3PHSC4 | P3PHSC3 | P3PHSC2 | P3PHSC1 | P3PHST |
#------------------------------------------------------------------#
| 7       | 6 | 5 | 4       | 3       | 2       | 1       | 0      |
#-----------------------------------------------------------------*/

#define PSMC3PHS                                 0x0
#define PSMC3PHS_address                         0xEDA
#define PSMC3PHS_position                        0x0
#define PSMC3PHS_size                            0x8
#define PSMC3PHS_value_mask                      0xFF
#define PSMC3PHS_clear_mask                      0x0

#define P3PHST                                   0x0
#define P3PHST_address                           0xEDA
#define P3PHST_position                          0x0
#define P3PHST_size                              0x1
#define P3PHST_value_mask                        0x1
#define P3PHST_clear_mask                        0xFE

#define P3PHSC1                                  0x1
#define P3PHSC1_address                          0xEDA
#define P3PHSC1_position                         0x1
#define P3PHSC1_size                             0x1
#define P3PHSC1_value_mask                       0x2
#define P3PHSC1_clear_mask                       0xFD

#define P3PHSC2                                  0x2
#define P3PHSC2_address                          0xEDA
#define P3PHSC2_position                         0x2
#define P3PHSC2_size                             0x1
#define P3PHSC2_value_mask                       0x4
#define P3PHSC2_clear_mask                       0xFB

#define P3PHSC3                                  0x3
#define P3PHSC3_address                          0xEDA
#define P3PHSC3_position                         0x3
#define P3PHSC3_size                             0x1
#define P3PHSC3_value_mask                       0x8
#define P3PHSC3_clear_mask                       0xF7

#define P3PHSC4                                  0x4
#define P3PHSC4_address                          0xEDA
#define P3PHSC4_position                         0x4
#define P3PHSC4_size                             0x1
#define P3PHSC4_value_mask                       0x10
#define P3PHSC4_clear_mask                       0xEF

#define P3PHSIN                                  0x7
#define P3PHSIN_address                          0xEDA
#define P3PHSIN_position                         0x7
#define P3PHSIN_size                             0x1
#define P3PHSIN_value_mask                       0x80
#define P3PHSIN_clear_mask                       0x7F


/*-----------------------------------------------------------------#
| PSMC3DCS                                                   0xEDB |
#------------------------------------------------------------------#
| P3DCSIN | - | - | P3DCSC4 | P3DCSC3 | P3DCSC2 | P3DCSC1 | P3DCST |
#------------------------------------------------------------------#
| 7       | 6 | 5 | 4       | 3       | 2       | 1       | 0      |
#-----------------------------------------------------------------*/

#define PSMC3DCS                                 0x0
#define PSMC3DCS_address                         0xEDB
#define PSMC3DCS_position                        0x0
#define PSMC3DCS_size                            0x8
#define PSMC3DCS_value_mask                      0xFF
#define PSMC3DCS_clear_mask                      0x0

#define P3DCST                                   0x0
#define P3DCST_address                           0xEDB
#define P3DCST_position                          0x0
#define P3DCST_size                              0x1
#define P3DCST_value_mask                        0x1
#define P3DCST_clear_mask                        0xFE

#define P3DCSC1                                  0x1
#define P3DCSC1_address                          0xEDB
#define P3DCSC1_position                         0x1
#define P3DCSC1_size                             0x1
#define P3DCSC1_value_mask                       0x2
#define P3DCSC1_clear_mask                       0xFD

#define P3DCSC2                                  0x2
#define P3DCSC2_address                          0xEDB
#define P3DCSC2_position                         0x2
#define P3DCSC2_size                             0x1
#define P3DCSC2_value_mask                       0x4
#define P3DCSC2_clear_mask                       0xFB

#define P3DCSC3                                  0x3
#define P3DCSC3_address                          0xEDB
#define P3DCSC3_position                         0x3
#define P3DCSC3_size                             0x1
#define P3DCSC3_value_mask                       0x8
#define P3DCSC3_clear_mask                       0xF7

#define P3DCSC4                                  0x4
#define P3DCSC4_address                          0xEDB
#define P3DCSC4_position                         0x4
#define P3DCSC4_size                             0x1
#define P3DCSC4_value_mask                       0x10
#define P3DCSC4_clear_mask                       0xEF

#define P3DCSIN                                  0x7
#define P3DCSIN_address                          0xEDB
#define P3DCSIN_position                         0x7
#define P3DCSIN_size                             0x1
#define P3DCSIN_value_mask                       0x80
#define P3DCSIN_clear_mask                       0x7F


/*-----------------------------------------------------------------#
| PSMC3PRS                                                   0xEDC |
#------------------------------------------------------------------#
| P3PRSIN | - | - | P3PRSC4 | P3PRSC3 | P3PRSC2 | P3PRSC1 | P3PRST |
#------------------------------------------------------------------#
| 7       | 6 | 5 | 4       | 3       | 2       | 1       | 0      |
#-----------------------------------------------------------------*/

#define PSMC3PRS                                 0x0
#define PSMC3PRS_address                         0xEDC
#define PSMC3PRS_position                        0x0
#define PSMC3PRS_size                            0x8
#define PSMC3PRS_value_mask                      0xFF
#define PSMC3PRS_clear_mask                      0x0

#define P3PRST                                   0x0
#define P3PRST_address                           0xEDC
#define P3PRST_position                          0x0
#define P3PRST_size                              0x1
#define P3PRST_value_mask                        0x1
#define P3PRST_clear_mask                        0xFE

#define P3PRSC1                                  0x1
#define P3PRSC1_address                          0xEDC
#define P3PRSC1_position                         0x1
#define P3PRSC1_size                             0x1
#define P3PRSC1_value_mask                       0x2
#define P3PRSC1_clear_mask                       0xFD

#define P3PRSC2                                  0x2
#define P3PRSC2_address                          0xEDC
#define P3PRSC2_position                         0x2
#define P3PRSC2_size                             0x1
#define P3PRSC2_value_mask                       0x4
#define P3PRSC2_clear_mask                       0xFB

#define P3PRSC3                                  0x3
#define P3PRSC3_address                          0xEDC
#define P3PRSC3_position                         0x3
#define P3PRSC3_size                             0x1
#define P3PRSC3_value_mask                       0x8
#define P3PRSC3_clear_mask                       0xF7

#define P3PRSC4                                  0x4
#define P3PRSC4_address                          0xEDC
#define P3PRSC4_position                         0x4
#define P3PRSC4_size                             0x1
#define P3PRSC4_value_mask                       0x10
#define P3PRSC4_clear_mask                       0xEF

#define P3PRSIN                                  0x7
#define P3PRSIN_address                          0xEDC
#define P3PRSIN_position                         0x7
#define P3PRSIN_size                             0x1
#define P3PRSIN_value_mask                       0x80
#define P3PRSIN_clear_mask                       0x7F


/*----------------------------------------------------#
| PSMC3ASDC                                     0xEDD |
#-----------------------------------------------------#
| P3ASE | P3ASDEN | P3ARSEN | - | - | - | - | P3ASDOV |
#-----------------------------------------------------#
| 7     | 6       | 5       | 4 | 3 | 2 | 1 | 0       |
#----------------------------------------------------*/

#define PSMC3ASDC                                0x0
#define PSMC3ASDC_address                        0xEDD
#define PSMC3ASDC_position                       0x0
#define PSMC3ASDC_size                           0x8
#define PSMC3ASDC_value_mask                     0xFF
#define PSMC3ASDC_clear_mask                     0x0

#define P3ASDOV                                  0x0
#define P3ASDOV_address                          0xEDD
#define P3ASDOV_position                         0x0
#define P3ASDOV_size                             0x1
#define P3ASDOV_value_mask                       0x1
#define P3ASDOV_clear_mask                       0xFE

#define P3ARSEN                                  0x5
#define P3ARSEN_address                          0xEDD
#define P3ARSEN_position                         0x5
#define P3ARSEN_size                             0x1
#define P3ARSEN_value_mask                       0x20
#define P3ARSEN_clear_mask                       0xDF

#define P3ASDEN                                  0x6
#define P3ASDEN_address                          0xEDD
#define P3ASDEN_position                         0x6
#define P3ASDEN_size                             0x1
#define P3ASDEN_value_mask                       0x40
#define P3ASDEN_clear_mask                       0xBF

#define P3ASE                                    0x7
#define P3ASE_address                            0xEDD
#define P3ASE_position                           0x7
#define P3ASE_size                               0x1
#define P3ASE_value_mask                         0x80
#define P3ASE_clear_mask                         0x7F


/*------------------------------------------#
| PSMC3ASDL                           0xEDE |
#-------------------------------------------#
| - | - | - | - | - | - | P3ASDLB | P3ASDLA |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1       | 0       |
#------------------------------------------*/

#define PSMC3ASDL                                0x0
#define PSMC3ASDL_address                        0xEDE
#define PSMC3ASDL_position                       0x0
#define PSMC3ASDL_size                           0x8
#define PSMC3ASDL_value_mask                     0xFF
#define PSMC3ASDL_clear_mask                     0x0

#define P3ASDLA                                  0x0
#define P3ASDLA_address                          0xEDE
#define P3ASDLA_position                         0x0
#define P3ASDLA_size                             0x1
#define P3ASDLA_value_mask                       0x1
#define P3ASDLA_clear_mask                       0xFE

#define P3ASDLB                                  0x1
#define P3ASDLB_address                          0xEDE
#define P3ASDLB_position                         0x1
#define P3ASDLB_size                             0x1
#define P3ASDLB_value_mask                       0x2
#define P3ASDLB_clear_mask                       0xFD


/*-----------------------------------------------------------------#
| PSMC3ASDS                                                  0xEDF |
#------------------------------------------------------------------#
| P3ASDSIN | - | - | P3ASDSC4 | P3ASDSC3 | P3ASDSC2 | P3ASDSC1 | - |
#------------------------------------------------------------------#
| 7        | 6 | 5 | 4        | 3        | 2        | 1        | 0 |
#-----------------------------------------------------------------*/

#define PSMC3ASDS                                0x0
#define PSMC3ASDS_address                        0xEDF
#define PSMC3ASDS_position                       0x0
#define PSMC3ASDS_size                           0x8
#define PSMC3ASDS_value_mask                     0xFF
#define PSMC3ASDS_clear_mask                     0x0

#define P3ASDSC1                                 0x1
#define P3ASDSC1_address                         0xEDF
#define P3ASDSC1_position                        0x1
#define P3ASDSC1_size                            0x1
#define P3ASDSC1_value_mask                      0x2
#define P3ASDSC1_clear_mask                      0xFD

#define P3ASDSC2                                 0x2
#define P3ASDSC2_address                         0xEDF
#define P3ASDSC2_position                        0x2
#define P3ASDSC2_size                            0x1
#define P3ASDSC2_value_mask                      0x4
#define P3ASDSC2_clear_mask                      0xFB

#define P3ASDSC3                                 0x3
#define P3ASDSC3_address                         0xEDF
#define P3ASDSC3_position                        0x3
#define P3ASDSC3_size                            0x1
#define P3ASDSC3_value_mask                      0x8
#define P3ASDSC3_clear_mask                      0xF7

#define P3ASDSC4                                 0x4
#define P3ASDSC4_address                         0xEDF
#define P3ASDSC4_position                        0x4
#define P3ASDSC4_size                            0x1
#define P3ASDSC4_value_mask                      0x10
#define P3ASDSC4_clear_mask                      0xEF

#define P3ASDSIN                                 0x7
#define P3ASDSIN_address                         0xEDF
#define P3ASDSIN_position                        0x7
#define P3ASDSIN_size                            0x1
#define P3ASDSIN_value_mask                      0x80
#define P3ASDSIN_clear_mask                      0x7F


/*------------------------------------------------------------------------------#
| PSMC3INT                                                                0xEE0 |
#-------------------------------------------------------------------------------#
| P3TOVIE | P3TPHIE | P3TDCIE | P3TPRIE | P3TOVIF | P3TPHIF | P3TDCIF | P3TPRIF |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define PSMC3INT                                 0x0
#define PSMC3INT_address                         0xEE0
#define PSMC3INT_position                        0x0
#define PSMC3INT_size                            0x8
#define PSMC3INT_value_mask                      0xFF
#define PSMC3INT_clear_mask                      0x0

#define P3TPRIF                                  0x0
#define P3TPRIF_address                          0xEE0
#define P3TPRIF_position                         0x0
#define P3TPRIF_size                             0x1
#define P3TPRIF_value_mask                       0x1
#define P3TPRIF_clear_mask                       0xFE

#define P3TDCIF                                  0x1
#define P3TDCIF_address                          0xEE0
#define P3TDCIF_position                         0x1
#define P3TDCIF_size                             0x1
#define P3TDCIF_value_mask                       0x2
#define P3TDCIF_clear_mask                       0xFD

#define P3TPHIF                                  0x2
#define P3TPHIF_address                          0xEE0
#define P3TPHIF_position                         0x2
#define P3TPHIF_size                             0x1
#define P3TPHIF_value_mask                       0x4
#define P3TPHIF_clear_mask                       0xFB

#define P3TOVIF                                  0x3
#define P3TOVIF_address                          0xEE0
#define P3TOVIF_position                         0x3
#define P3TOVIF_size                             0x1
#define P3TOVIF_value_mask                       0x8
#define P3TOVIF_clear_mask                       0xF7

#define P3TPRIE                                  0x4
#define P3TPRIE_address                          0xEE0
#define P3TPRIE_position                         0x4
#define P3TPRIE_size                             0x1
#define P3TPRIE_value_mask                       0x10
#define P3TPRIE_clear_mask                       0xEF

#define P3TDCIE                                  0x5
#define P3TDCIE_address                          0xEE0
#define P3TDCIE_position                         0x5
#define P3TDCIE_size                             0x1
#define P3TDCIE_value_mask                       0x20
#define P3TDCIE_clear_mask                       0xDF

#define P3TPHIE                                  0x6
#define P3TPHIE_address                          0xEE0
#define P3TPHIE_position                         0x6
#define P3TPHIE_size                             0x1
#define P3TPHIE_value_mask                       0x40
#define P3TPHIE_clear_mask                       0xBF

#define P3TOVIE                                  0x7
#define P3TOVIE_address                          0xEE0
#define P3TOVIE_position                         0x7
#define P3TOVIE_size                             0x1
#define P3TOVIE_value_mask                       0x80
#define P3TOVIE_clear_mask                       0x7F


/*--------------------------------------------------------------------------------------#
| PSMC3PHL                                                                        0xEE1 |
#---------------------------------------------------------------------------------------#
| PSMC3PH7 | PSMC3PH6 | PSMC3PH5 | PSMC3PH4 | PSMC3PH3 | PSMC3PH2 | PSMC3PH1 | PSMC3PH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PSMC3PHL                                 0x0
#define PSMC3PHL_address                         0xEE1
#define PSMC3PHL_position                        0x0
#define PSMC3PHL_size                            0x8
#define PSMC3PHL_value_mask                      0xFF
#define PSMC3PHL_clear_mask                      0x0

#define PSMC3PH0                                 0x0
#define PSMC3PH0_address                         0xEE1
#define PSMC3PH0_position                        0x0
#define PSMC3PH0_size                            0x1
#define PSMC3PH0_value_mask                      0x1
#define PSMC3PH0_clear_mask                      0xFE

#define PSMC3PH1                                 0x1
#define PSMC3PH1_address                         0xEE1
#define PSMC3PH1_position                        0x1
#define PSMC3PH1_size                            0x1
#define PSMC3PH1_value_mask                      0x2
#define PSMC3PH1_clear_mask                      0xFD

#define PSMC3PH2                                 0x2
#define PSMC3PH2_address                         0xEE1
#define PSMC3PH2_position                        0x2
#define PSMC3PH2_size                            0x1
#define PSMC3PH2_value_mask                      0x4
#define PSMC3PH2_clear_mask                      0xFB

#define PSMC3PH3                                 0x3
#define PSMC3PH3_address                         0xEE1
#define PSMC3PH3_position                        0x3
#define PSMC3PH3_size                            0x1
#define PSMC3PH3_value_mask                      0x8
#define PSMC3PH3_clear_mask                      0xF7

#define PSMC3PH4                                 0x4
#define PSMC3PH4_address                         0xEE1
#define PSMC3PH4_position                        0x4
#define PSMC3PH4_size                            0x1
#define PSMC3PH4_value_mask                      0x10
#define PSMC3PH4_clear_mask                      0xEF

#define PSMC3PH5                                 0x5
#define PSMC3PH5_address                         0xEE1
#define PSMC3PH5_position                        0x5
#define PSMC3PH5_size                            0x1
#define PSMC3PH5_value_mask                      0x20
#define PSMC3PH5_clear_mask                      0xDF

#define PSMC3PH6                                 0x6
#define PSMC3PH6_address                         0xEE1
#define PSMC3PH6_position                        0x6
#define PSMC3PH6_size                            0x1
#define PSMC3PH6_value_mask                      0x40
#define PSMC3PH6_clear_mask                      0xBF

#define PSMC3PH7                                 0x7
#define PSMC3PH7_address                         0xEE1
#define PSMC3PH7_position                        0x7
#define PSMC3PH7_size                            0x1
#define PSMC3PH7_value_mask                      0x80
#define PSMC3PH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| PSMC3PHH                                                                              0xEE2 |
#---------------------------------------------------------------------------------------------#
| PSMC3PH15 | PSMC3PH14 | PSMC3PH13 | PSMC3PH12 | PSMC3PH11 | PSMC3PH10 | PSMC3PH9 | PSMC3PH8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define PSMC3PHH                                 0x0
#define PSMC3PHH_address                         0xEE2
#define PSMC3PHH_position                        0x0
#define PSMC3PHH_size                            0x8
#define PSMC3PHH_value_mask                      0xFF
#define PSMC3PHH_clear_mask                      0x0

#define PSMC3PH8                                 0x0
#define PSMC3PH8_address                         0xEE2
#define PSMC3PH8_position                        0x0
#define PSMC3PH8_size                            0x1
#define PSMC3PH8_value_mask                      0x1
#define PSMC3PH8_clear_mask                      0xFE

#define PSMC3PH9                                 0x1
#define PSMC3PH9_address                         0xEE2
#define PSMC3PH9_position                        0x1
#define PSMC3PH9_size                            0x1
#define PSMC3PH9_value_mask                      0x2
#define PSMC3PH9_clear_mask                      0xFD

#define PSMC3PH10                                0x2
#define PSMC3PH10_address                        0xEE2
#define PSMC3PH10_position                       0x2
#define PSMC3PH10_size                           0x1
#define PSMC3PH10_value_mask                     0x4
#define PSMC3PH10_clear_mask                     0xFB

#define PSMC3PH11                                0x3
#define PSMC3PH11_address                        0xEE2
#define PSMC3PH11_position                       0x3
#define PSMC3PH11_size                           0x1
#define PSMC3PH11_value_mask                     0x8
#define PSMC3PH11_clear_mask                     0xF7

#define PSMC3PH12                                0x4
#define PSMC3PH12_address                        0xEE2
#define PSMC3PH12_position                       0x4
#define PSMC3PH12_size                           0x1
#define PSMC3PH12_value_mask                     0x10
#define PSMC3PH12_clear_mask                     0xEF

#define PSMC3PH13                                0x5
#define PSMC3PH13_address                        0xEE2
#define PSMC3PH13_position                       0x5
#define PSMC3PH13_size                           0x1
#define PSMC3PH13_value_mask                     0x20
#define PSMC3PH13_clear_mask                     0xDF

#define PSMC3PH14                                0x6
#define PSMC3PH14_address                        0xEE2
#define PSMC3PH14_position                       0x6
#define PSMC3PH14_size                           0x1
#define PSMC3PH14_value_mask                     0x40
#define PSMC3PH14_clear_mask                     0xBF

#define PSMC3PH15                                0x7
#define PSMC3PH15_address                        0xEE2
#define PSMC3PH15_position                       0x7
#define PSMC3PH15_size                           0x1
#define PSMC3PH15_value_mask                     0x80
#define PSMC3PH15_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| PSMC3DCL                                                                        0xEE3 |
#---------------------------------------------------------------------------------------#
| PSMC3DC7 | PSMC3DC6 | PSMC3DC5 | PSMC3DC4 | PSMC3DC3 | PSMC3DC2 | PSMC3DC1 | PSMC3DC0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PSMC3DCL                                 0x0
#define PSMC3DCL_address                         0xEE3
#define PSMC3DCL_position                        0x0
#define PSMC3DCL_size                            0x8
#define PSMC3DCL_value_mask                      0xFF
#define PSMC3DCL_clear_mask                      0x0

#define PSMC3DC0                                 0x0
#define PSMC3DC0_address                         0xEE3
#define PSMC3DC0_position                        0x0
#define PSMC3DC0_size                            0x1
#define PSMC3DC0_value_mask                      0x1
#define PSMC3DC0_clear_mask                      0xFE

#define PSMC3DC1                                 0x1
#define PSMC3DC1_address                         0xEE3
#define PSMC3DC1_position                        0x1
#define PSMC3DC1_size                            0x1
#define PSMC3DC1_value_mask                      0x2
#define PSMC3DC1_clear_mask                      0xFD

#define PSMC3DC2                                 0x2
#define PSMC3DC2_address                         0xEE3
#define PSMC3DC2_position                        0x2
#define PSMC3DC2_size                            0x1
#define PSMC3DC2_value_mask                      0x4
#define PSMC3DC2_clear_mask                      0xFB

#define PSMC3DC3                                 0x3
#define PSMC3DC3_address                         0xEE3
#define PSMC3DC3_position                        0x3
#define PSMC3DC3_size                            0x1
#define PSMC3DC3_value_mask                      0x8
#define PSMC3DC3_clear_mask                      0xF7

#define PSMC3DC4                                 0x4
#define PSMC3DC4_address                         0xEE3
#define PSMC3DC4_position                        0x4
#define PSMC3DC4_size                            0x1
#define PSMC3DC4_value_mask                      0x10
#define PSMC3DC4_clear_mask                      0xEF

#define PSMC3DC5                                 0x5
#define PSMC3DC5_address                         0xEE3
#define PSMC3DC5_position                        0x5
#define PSMC3DC5_size                            0x1
#define PSMC3DC5_value_mask                      0x20
#define PSMC3DC5_clear_mask                      0xDF

#define PSMC3DC6                                 0x6
#define PSMC3DC6_address                         0xEE3
#define PSMC3DC6_position                        0x6
#define PSMC3DC6_size                            0x1
#define PSMC3DC6_value_mask                      0x40
#define PSMC3DC6_clear_mask                      0xBF

#define PSMC3DC7                                 0x7
#define PSMC3DC7_address                         0xEE3
#define PSMC3DC7_position                        0x7
#define PSMC3DC7_size                            0x1
#define PSMC3DC7_value_mask                      0x80
#define PSMC3DC7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| PSMC3DCH                                                                              0xEE4 |
#---------------------------------------------------------------------------------------------#
| PSMC3DC15 | PSMC3DC14 | PSMC3DC13 | PSMC3DC12 | PSMC3DC11 | PSMC3DC10 | PSMC3DC9 | PSMC3DC8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define PSMC3DCH                                 0x0
#define PSMC3DCH_address                         0xEE4
#define PSMC3DCH_position                        0x0
#define PSMC3DCH_size                            0x8
#define PSMC3DCH_value_mask                      0xFF
#define PSMC3DCH_clear_mask                      0x0

#define PSMC3DC8                                 0x0
#define PSMC3DC8_address                         0xEE4
#define PSMC3DC8_position                        0x0
#define PSMC3DC8_size                            0x1
#define PSMC3DC8_value_mask                      0x1
#define PSMC3DC8_clear_mask                      0xFE

#define PSMC3DC9                                 0x1
#define PSMC3DC9_address                         0xEE4
#define PSMC3DC9_position                        0x1
#define PSMC3DC9_size                            0x1
#define PSMC3DC9_value_mask                      0x2
#define PSMC3DC9_clear_mask                      0xFD

#define PSMC3DC10                                0x2
#define PSMC3DC10_address                        0xEE4
#define PSMC3DC10_position                       0x2
#define PSMC3DC10_size                           0x1
#define PSMC3DC10_value_mask                     0x4
#define PSMC3DC10_clear_mask                     0xFB

#define PSMC3DC11                                0x3
#define PSMC3DC11_address                        0xEE4
#define PSMC3DC11_position                       0x3
#define PSMC3DC11_size                           0x1
#define PSMC3DC11_value_mask                     0x8
#define PSMC3DC11_clear_mask                     0xF7

#define PSMC3DC12                                0x4
#define PSMC3DC12_address                        0xEE4
#define PSMC3DC12_position                       0x4
#define PSMC3DC12_size                           0x1
#define PSMC3DC12_value_mask                     0x10
#define PSMC3DC12_clear_mask                     0xEF

#define PSMC3DC13                                0x5
#define PSMC3DC13_address                        0xEE4
#define PSMC3DC13_position                       0x5
#define PSMC3DC13_size                           0x1
#define PSMC3DC13_value_mask                     0x20
#define PSMC3DC13_clear_mask                     0xDF

#define PSMC3DC14                                0x6
#define PSMC3DC14_address                        0xEE4
#define PSMC3DC14_position                       0x6
#define PSMC3DC14_size                           0x1
#define PSMC3DC14_value_mask                     0x40
#define PSMC3DC14_clear_mask                     0xBF

#define PSMC3DC15                                0x7
#define PSMC3DC15_address                        0xEE4
#define PSMC3DC15_position                       0x7
#define PSMC3DC15_size                           0x1
#define PSMC3DC15_value_mask                     0x80
#define PSMC3DC15_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| PSMC3PRL                                                                        0xEE5 |
#---------------------------------------------------------------------------------------#
| PSMC3PR7 | PSMC3PR6 | PSMC3PR5 | PSMC3PR4 | PSMC3PR3 | PSMC3PR2 | PSMC3PR1 | PSMC3PR0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PSMC3PRL                                 0x0
#define PSMC3PRL_address                         0xEE5
#define PSMC3PRL_position                        0x0
#define PSMC3PRL_size                            0x8
#define PSMC3PRL_value_mask                      0xFF
#define PSMC3PRL_clear_mask                      0x0

#define PSMC3PR0                                 0x0
#define PSMC3PR0_address                         0xEE5
#define PSMC3PR0_position                        0x0
#define PSMC3PR0_size                            0x1
#define PSMC3PR0_value_mask                      0x1
#define PSMC3PR0_clear_mask                      0xFE

#define PSMC3PR1                                 0x1
#define PSMC3PR1_address                         0xEE5
#define PSMC3PR1_position                        0x1
#define PSMC3PR1_size                            0x1
#define PSMC3PR1_value_mask                      0x2
#define PSMC3PR1_clear_mask                      0xFD

#define PSMC3PR2                                 0x2
#define PSMC3PR2_address                         0xEE5
#define PSMC3PR2_position                        0x2
#define PSMC3PR2_size                            0x1
#define PSMC3PR2_value_mask                      0x4
#define PSMC3PR2_clear_mask                      0xFB

#define PSMC3PR3                                 0x3
#define PSMC3PR3_address                         0xEE5
#define PSMC3PR3_position                        0x3
#define PSMC3PR3_size                            0x1
#define PSMC3PR3_value_mask                      0x8
#define PSMC3PR3_clear_mask                      0xF7

#define PSMC3PR4                                 0x4
#define PSMC3PR4_address                         0xEE5
#define PSMC3PR4_position                        0x4
#define PSMC3PR4_size                            0x1
#define PSMC3PR4_value_mask                      0x10
#define PSMC3PR4_clear_mask                      0xEF

#define PSMC3PR5                                 0x5
#define PSMC3PR5_address                         0xEE5
#define PSMC3PR5_position                        0x5
#define PSMC3PR5_size                            0x1
#define PSMC3PR5_value_mask                      0x20
#define PSMC3PR5_clear_mask                      0xDF

#define PSMC3PR6                                 0x6
#define PSMC3PR6_address                         0xEE5
#define PSMC3PR6_position                        0x6
#define PSMC3PR6_size                            0x1
#define PSMC3PR6_value_mask                      0x40
#define PSMC3PR6_clear_mask                      0xBF

#define PSMC3PR7                                 0x7
#define PSMC3PR7_address                         0xEE5
#define PSMC3PR7_position                        0x7
#define PSMC3PR7_size                            0x1
#define PSMC3PR7_value_mask                      0x80
#define PSMC3PR7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| PSMC3PRH                                                                              0xEE6 |
#---------------------------------------------------------------------------------------------#
| PSMC3PR15 | PSMC3PR14 | PSMC3PR13 | PSMC3PR12 | PSMC3PR11 | PSMC3PR10 | PSMC3PR9 | PSMC3PR8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define PSMC3PRH                                 0x0
#define PSMC3PRH_address                         0xEE6
#define PSMC3PRH_position                        0x0
#define PSMC3PRH_size                            0x8
#define PSMC3PRH_value_mask                      0xFF
#define PSMC3PRH_clear_mask                      0x0

#define PSMC3PR8                                 0x0
#define PSMC3PR8_address                         0xEE6
#define PSMC3PR8_position                        0x0
#define PSMC3PR8_size                            0x1
#define PSMC3PR8_value_mask                      0x1
#define PSMC3PR8_clear_mask                      0xFE

#define PSMC3PR9                                 0x1
#define PSMC3PR9_address                         0xEE6
#define PSMC3PR9_position                        0x1
#define PSMC3PR9_size                            0x1
#define PSMC3PR9_value_mask                      0x2
#define PSMC3PR9_clear_mask                      0xFD

#define PSMC3PR10                                0x2
#define PSMC3PR10_address                        0xEE6
#define PSMC3PR10_position                       0x2
#define PSMC3PR10_size                           0x1
#define PSMC3PR10_value_mask                     0x4
#define PSMC3PR10_clear_mask                     0xFB

#define PSMC3PR11                                0x3
#define PSMC3PR11_address                        0xEE6
#define PSMC3PR11_position                       0x3
#define PSMC3PR11_size                           0x1
#define PSMC3PR11_value_mask                     0x8
#define PSMC3PR11_clear_mask                     0xF7

#define PSMC3PR12                                0x4
#define PSMC3PR12_address                        0xEE6
#define PSMC3PR12_position                       0x4
#define PSMC3PR12_size                           0x1
#define PSMC3PR12_value_mask                     0x10
#define PSMC3PR12_clear_mask                     0xEF

#define PSMC3PR13                                0x5
#define PSMC3PR13_address                        0xEE6
#define PSMC3PR13_position                       0x5
#define PSMC3PR13_size                           0x1
#define PSMC3PR13_value_mask                     0x20
#define PSMC3PR13_clear_mask                     0xDF

#define PSMC3PR14                                0x6
#define PSMC3PR14_address                        0xEE6
#define PSMC3PR14_position                       0x6
#define PSMC3PR14_size                           0x1
#define PSMC3PR14_value_mask                     0x40
#define PSMC3PR14_clear_mask                     0xBF

#define PSMC3PR15                                0x7
#define PSMC3PR15_address                        0xEE6
#define PSMC3PR15_position                       0x7
#define PSMC3PR15_size                           0x1
#define PSMC3PR15_value_mask                     0x80
#define PSMC3PR15_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| PSMC3TMRL                                                                               0xEE7 |
#-----------------------------------------------------------------------------------------------#
| PSMC3TMR7 | PSMC3TMR6 | PSMC3TMR5 | PSMC3TMR4 | PSMC3TMR3 | PSMC3TMR2 | PSMC3TMR1 | PSMC3TMR0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PSMC3TMRL                                0x0
#define PSMC3TMRL_address                        0xEE7
#define PSMC3TMRL_position                       0x0
#define PSMC3TMRL_size                           0x8
#define PSMC3TMRL_value_mask                     0xFF
#define PSMC3TMRL_clear_mask                     0x0

#define PSMC3TMR0                                0x0
#define PSMC3TMR0_address                        0xEE7
#define PSMC3TMR0_position                       0x0
#define PSMC3TMR0_size                           0x1
#define PSMC3TMR0_value_mask                     0x1
#define PSMC3TMR0_clear_mask                     0xFE

#define PSMC3TMR1                                0x1
#define PSMC3TMR1_address                        0xEE7
#define PSMC3TMR1_position                       0x1
#define PSMC3TMR1_size                           0x1
#define PSMC3TMR1_value_mask                     0x2
#define PSMC3TMR1_clear_mask                     0xFD

#define PSMC3TMR2                                0x2
#define PSMC3TMR2_address                        0xEE7
#define PSMC3TMR2_position                       0x2
#define PSMC3TMR2_size                           0x1
#define PSMC3TMR2_value_mask                     0x4
#define PSMC3TMR2_clear_mask                     0xFB

#define PSMC3TMR3                                0x3
#define PSMC3TMR3_address                        0xEE7
#define PSMC3TMR3_position                       0x3
#define PSMC3TMR3_size                           0x1
#define PSMC3TMR3_value_mask                     0x8
#define PSMC3TMR3_clear_mask                     0xF7

#define PSMC3TMR4                                0x4
#define PSMC3TMR4_address                        0xEE7
#define PSMC3TMR4_position                       0x4
#define PSMC3TMR4_size                           0x1
#define PSMC3TMR4_value_mask                     0x10
#define PSMC3TMR4_clear_mask                     0xEF

#define PSMC3TMR5                                0x5
#define PSMC3TMR5_address                        0xEE7
#define PSMC3TMR5_position                       0x5
#define PSMC3TMR5_size                           0x1
#define PSMC3TMR5_value_mask                     0x20
#define PSMC3TMR5_clear_mask                     0xDF

#define PSMC3TMR6                                0x6
#define PSMC3TMR6_address                        0xEE7
#define PSMC3TMR6_position                       0x6
#define PSMC3TMR6_size                           0x1
#define PSMC3TMR6_value_mask                     0x40
#define PSMC3TMR6_clear_mask                     0xBF

#define PSMC3TMR7                                0x7
#define PSMC3TMR7_address                        0xEE7
#define PSMC3TMR7_position                       0x7
#define PSMC3TMR7_size                           0x1
#define PSMC3TMR7_value_mask                     0x80
#define PSMC3TMR7_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------------#
| PSMC3TMRH                                                                                     0xEE8 |
#-----------------------------------------------------------------------------------------------------#
| PSMC3TMR15 | PSMC3TMR14 | PSMC3TMR13 | PSMC3TMR12 | PSMC3TMR11 | PSMC3TMR10 | PSMC3TMR9 | PSMC3TMR8 |
#-----------------------------------------------------------------------------------------------------#
| 7          | 6          | 5          | 4          | 3          | 2          | 1         | 0         |
#----------------------------------------------------------------------------------------------------*/

#define PSMC3TMRH                                0x0
#define PSMC3TMRH_address                        0xEE8
#define PSMC3TMRH_position                       0x0
#define PSMC3TMRH_size                           0x8
#define PSMC3TMRH_value_mask                     0xFF
#define PSMC3TMRH_clear_mask                     0x0

#define PSMC3TMR8                                0x0
#define PSMC3TMR8_address                        0xEE8
#define PSMC3TMR8_position                       0x0
#define PSMC3TMR8_size                           0x1
#define PSMC3TMR8_value_mask                     0x1
#define PSMC3TMR8_clear_mask                     0xFE

#define PSMC3TMR9                                0x1
#define PSMC3TMR9_address                        0xEE8
#define PSMC3TMR9_position                       0x1
#define PSMC3TMR9_size                           0x1
#define PSMC3TMR9_value_mask                     0x2
#define PSMC3TMR9_clear_mask                     0xFD

#define PSMC3TMR10                               0x2
#define PSMC3TMR10_address                       0xEE8
#define PSMC3TMR10_position                      0x2
#define PSMC3TMR10_size                          0x1
#define PSMC3TMR10_value_mask                    0x4
#define PSMC3TMR10_clear_mask                    0xFB

#define PSMC3TMR11                               0x3
#define PSMC3TMR11_address                       0xEE8
#define PSMC3TMR11_position                      0x3
#define PSMC3TMR11_size                          0x1
#define PSMC3TMR11_value_mask                    0x8
#define PSMC3TMR11_clear_mask                    0xF7

#define PSMC3TMR12                               0x4
#define PSMC3TMR12_address                       0xEE8
#define PSMC3TMR12_position                      0x4
#define PSMC3TMR12_size                          0x1
#define PSMC3TMR12_value_mask                    0x10
#define PSMC3TMR12_clear_mask                    0xEF

#define PSMC3TMR13                               0x5
#define PSMC3TMR13_address                       0xEE8
#define PSMC3TMR13_position                      0x5
#define PSMC3TMR13_size                          0x1
#define PSMC3TMR13_value_mask                    0x20
#define PSMC3TMR13_clear_mask                    0xDF

#define PSMC3TMR14                               0x6
#define PSMC3TMR14_address                       0xEE8
#define PSMC3TMR14_position                      0x6
#define PSMC3TMR14_size                          0x1
#define PSMC3TMR14_value_mask                    0x40
#define PSMC3TMR14_clear_mask                    0xBF

#define PSMC3TMR15                               0x7
#define PSMC3TMR15_address                       0xEE8
#define PSMC3TMR15_position                      0x7
#define PSMC3TMR15_size                          0x1
#define PSMC3TMR15_value_mask                    0x80
#define PSMC3TMR15_clear_mask                    0x7F


/*----------------------------------------------------------------------------------------------#
| PSMC3DBR                                                                                0xEE9 |
#-----------------------------------------------------------------------------------------------#
| PSMC3DBR7 | PSMC3DBR6 | PSMC3DBR5 | PSMC3DBR4 | PSMC3DBR3 | PSMC3DBR2 | PSMC3DBR1 | PSMC3DBR0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PSMC3DBR                                 0x0
#define PSMC3DBR_address                         0xEE9
#define PSMC3DBR_position                        0x0
#define PSMC3DBR_size                            0x8
#define PSMC3DBR_value_mask                      0xFF
#define PSMC3DBR_clear_mask                      0x0

#define PSMC3DBR0                                0x0
#define PSMC3DBR0_address                        0xEE9
#define PSMC3DBR0_position                       0x0
#define PSMC3DBR0_size                           0x1
#define PSMC3DBR0_value_mask                     0x1
#define PSMC3DBR0_clear_mask                     0xFE

#define PSMC3DBR1                                0x1
#define PSMC3DBR1_address                        0xEE9
#define PSMC3DBR1_position                       0x1
#define PSMC3DBR1_size                           0x1
#define PSMC3DBR1_value_mask                     0x2
#define PSMC3DBR1_clear_mask                     0xFD

#define PSMC3DBR2                                0x2
#define PSMC3DBR2_address                        0xEE9
#define PSMC3DBR2_position                       0x2
#define PSMC3DBR2_size                           0x1
#define PSMC3DBR2_value_mask                     0x4
#define PSMC3DBR2_clear_mask                     0xFB

#define PSMC3DBR3                                0x3
#define PSMC3DBR3_address                        0xEE9
#define PSMC3DBR3_position                       0x3
#define PSMC3DBR3_size                           0x1
#define PSMC3DBR3_value_mask                     0x8
#define PSMC3DBR3_clear_mask                     0xF7

#define PSMC3DBR4                                0x4
#define PSMC3DBR4_address                        0xEE9
#define PSMC3DBR4_position                       0x4
#define PSMC3DBR4_size                           0x1
#define PSMC3DBR4_value_mask                     0x10
#define PSMC3DBR4_clear_mask                     0xEF

#define PSMC3DBR5                                0x5
#define PSMC3DBR5_address                        0xEE9
#define PSMC3DBR5_position                       0x5
#define PSMC3DBR5_size                           0x1
#define PSMC3DBR5_value_mask                     0x20
#define PSMC3DBR5_clear_mask                     0xDF

#define PSMC3DBR6                                0x6
#define PSMC3DBR6_address                        0xEE9
#define PSMC3DBR6_position                       0x6
#define PSMC3DBR6_size                           0x1
#define PSMC3DBR6_value_mask                     0x40
#define PSMC3DBR6_clear_mask                     0xBF

#define PSMC3DBR7                                0x7
#define PSMC3DBR7_address                        0xEE9
#define PSMC3DBR7_position                       0x7
#define PSMC3DBR7_size                           0x1
#define PSMC3DBR7_value_mask                     0x80
#define PSMC3DBR7_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| PSMC3DBF                                                                                0xEEA |
#-----------------------------------------------------------------------------------------------#
| PSMC3DBF7 | PSMC3DBF6 | PSMC3DBF5 | PSMC3DBF4 | PSMC3DBF3 | PSMC3DBF2 | PSMC3DBF1 | PSMC3DBF0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PSMC3DBF                                 0x0
#define PSMC3DBF_address                         0xEEA
#define PSMC3DBF_position                        0x0
#define PSMC3DBF_size                            0x8
#define PSMC3DBF_value_mask                      0xFF
#define PSMC3DBF_clear_mask                      0x0

#define PSMC3DBF0                                0x0
#define PSMC3DBF0_address                        0xEEA
#define PSMC3DBF0_position                       0x0
#define PSMC3DBF0_size                           0x1
#define PSMC3DBF0_value_mask                     0x1
#define PSMC3DBF0_clear_mask                     0xFE

#define PSMC3DBF1                                0x1
#define PSMC3DBF1_address                        0xEEA
#define PSMC3DBF1_position                       0x1
#define PSMC3DBF1_size                           0x1
#define PSMC3DBF1_value_mask                     0x2
#define PSMC3DBF1_clear_mask                     0xFD

#define PSMC3DBF2                                0x2
#define PSMC3DBF2_address                        0xEEA
#define PSMC3DBF2_position                       0x2
#define PSMC3DBF2_size                           0x1
#define PSMC3DBF2_value_mask                     0x4
#define PSMC3DBF2_clear_mask                     0xFB

#define PSMC3DBF3                                0x3
#define PSMC3DBF3_address                        0xEEA
#define PSMC3DBF3_position                       0x3
#define PSMC3DBF3_size                           0x1
#define PSMC3DBF3_value_mask                     0x8
#define PSMC3DBF3_clear_mask                     0xF7

#define PSMC3DBF4                                0x4
#define PSMC3DBF4_address                        0xEEA
#define PSMC3DBF4_position                       0x4
#define PSMC3DBF4_size                           0x1
#define PSMC3DBF4_value_mask                     0x10
#define PSMC3DBF4_clear_mask                     0xEF

#define PSMC3DBF5                                0x5
#define PSMC3DBF5_address                        0xEEA
#define PSMC3DBF5_position                       0x5
#define PSMC3DBF5_size                           0x1
#define PSMC3DBF5_value_mask                     0x20
#define PSMC3DBF5_clear_mask                     0xDF

#define PSMC3DBF6                                0x6
#define PSMC3DBF6_address                        0xEEA
#define PSMC3DBF6_position                       0x6
#define PSMC3DBF6_size                           0x1
#define PSMC3DBF6_value_mask                     0x40
#define PSMC3DBF6_clear_mask                     0xBF

#define PSMC3DBF7                                0x7
#define PSMC3DBF7_address                        0xEEA
#define PSMC3DBF7_position                       0x7
#define PSMC3DBF7_size                           0x1
#define PSMC3DBF7_value_mask                     0x80
#define PSMC3DBF7_clear_mask                     0x7F


/*------------------------------------------------------------------------------------------------------#
| PSMC3BLKR                                                                                       0xEEB |
#-------------------------------------------------------------------------------------------------------#
| PSMC3BLKR7 | PSMC3BLKR6 | PSMC3BLKR5 | PSMC3BLKR4 | PSMC3BLKR3 | PSMC3BLKR2 | PSMC3BLKR1 | PSMC3BLKR0 |
#-------------------------------------------------------------------------------------------------------#
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
#------------------------------------------------------------------------------------------------------*/

#define PSMC3BLKR                                0x0
#define PSMC3BLKR_address                        0xEEB
#define PSMC3BLKR_position                       0x0
#define PSMC3BLKR_size                           0x8
#define PSMC3BLKR_value_mask                     0xFF
#define PSMC3BLKR_clear_mask                     0x0

#define PSMC3BLKR0                               0x0
#define PSMC3BLKR0_address                       0xEEB
#define PSMC3BLKR0_position                      0x0
#define PSMC3BLKR0_size                          0x1
#define PSMC3BLKR0_value_mask                    0x1
#define PSMC3BLKR0_clear_mask                    0xFE

#define PSMC3BLKR1                               0x1
#define PSMC3BLKR1_address                       0xEEB
#define PSMC3BLKR1_position                      0x1
#define PSMC3BLKR1_size                          0x1
#define PSMC3BLKR1_value_mask                    0x2
#define PSMC3BLKR1_clear_mask                    0xFD

#define PSMC3BLKR2                               0x2
#define PSMC3BLKR2_address                       0xEEB
#define PSMC3BLKR2_position                      0x2
#define PSMC3BLKR2_size                          0x1
#define PSMC3BLKR2_value_mask                    0x4
#define PSMC3BLKR2_clear_mask                    0xFB

#define PSMC3BLKR3                               0x3
#define PSMC3BLKR3_address                       0xEEB
#define PSMC3BLKR3_position                      0x3
#define PSMC3BLKR3_size                          0x1
#define PSMC3BLKR3_value_mask                    0x8
#define PSMC3BLKR3_clear_mask                    0xF7

#define PSMC3BLKR4                               0x4
#define PSMC3BLKR4_address                       0xEEB
#define PSMC3BLKR4_position                      0x4
#define PSMC3BLKR4_size                          0x1
#define PSMC3BLKR4_value_mask                    0x10
#define PSMC3BLKR4_clear_mask                    0xEF

#define PSMC3BLKR5                               0x5
#define PSMC3BLKR5_address                       0xEEB
#define PSMC3BLKR5_position                      0x5
#define PSMC3BLKR5_size                          0x1
#define PSMC3BLKR5_value_mask                    0x20
#define PSMC3BLKR5_clear_mask                    0xDF

#define PSMC3BLKR6                               0x6
#define PSMC3BLKR6_address                       0xEEB
#define PSMC3BLKR6_position                      0x6
#define PSMC3BLKR6_size                          0x1
#define PSMC3BLKR6_value_mask                    0x40
#define PSMC3BLKR6_clear_mask                    0xBF

#define PSMC3BLKR7                               0x7
#define PSMC3BLKR7_address                       0xEEB
#define PSMC3BLKR7_position                      0x7
#define PSMC3BLKR7_size                          0x1
#define PSMC3BLKR7_value_mask                    0x80
#define PSMC3BLKR7_clear_mask                    0x7F


/*------------------------------------------------------------------------------------------------------#
| PSMC3BLKF                                                                                       0xEEC |
#-------------------------------------------------------------------------------------------------------#
| PSMC3BLKF7 | PSMC3BLKF6 | PSMC3BLKF5 | PSMC3BLKF4 | PSMC3BLKF3 | PSMC3BLKF2 | PSMC3BLKF1 | PSMC3BLKF0 |
#-------------------------------------------------------------------------------------------------------#
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
#------------------------------------------------------------------------------------------------------*/

#define PSMC3BLKF                                0x0
#define PSMC3BLKF_address                        0xEEC
#define PSMC3BLKF_position                       0x0
#define PSMC3BLKF_size                           0x8
#define PSMC3BLKF_value_mask                     0xFF
#define PSMC3BLKF_clear_mask                     0x0

#define PSMC3BLKF0                               0x0
#define PSMC3BLKF0_address                       0xEEC
#define PSMC3BLKF0_position                      0x0
#define PSMC3BLKF0_size                          0x1
#define PSMC3BLKF0_value_mask                    0x1
#define PSMC3BLKF0_clear_mask                    0xFE

#define PSMC3BLKF1                               0x1
#define PSMC3BLKF1_address                       0xEEC
#define PSMC3BLKF1_position                      0x1
#define PSMC3BLKF1_size                          0x1
#define PSMC3BLKF1_value_mask                    0x2
#define PSMC3BLKF1_clear_mask                    0xFD

#define PSMC3BLKF2                               0x2
#define PSMC3BLKF2_address                       0xEEC
#define PSMC3BLKF2_position                      0x2
#define PSMC3BLKF2_size                          0x1
#define PSMC3BLKF2_value_mask                    0x4
#define PSMC3BLKF2_clear_mask                    0xFB

#define PSMC3BLKF3                               0x3
#define PSMC3BLKF3_address                       0xEEC
#define PSMC3BLKF3_position                      0x3
#define PSMC3BLKF3_size                          0x1
#define PSMC3BLKF3_value_mask                    0x8
#define PSMC3BLKF3_clear_mask                    0xF7

#define PSMC3BLKF4                               0x4
#define PSMC3BLKF4_address                       0xEEC
#define PSMC3BLKF4_position                      0x4
#define PSMC3BLKF4_size                          0x1
#define PSMC3BLKF4_value_mask                    0x10
#define PSMC3BLKF4_clear_mask                    0xEF

#define PSMC3BLKF5                               0x5
#define PSMC3BLKF5_address                       0xEEC
#define PSMC3BLKF5_position                      0x5
#define PSMC3BLKF5_size                          0x1
#define PSMC3BLKF5_value_mask                    0x20
#define PSMC3BLKF5_clear_mask                    0xDF

#define PSMC3BLKF6                               0x6
#define PSMC3BLKF6_address                       0xEEC
#define PSMC3BLKF6_position                      0x6
#define PSMC3BLKF6_size                          0x1
#define PSMC3BLKF6_value_mask                    0x40
#define PSMC3BLKF6_clear_mask                    0xBF

#define PSMC3BLKF7                               0x7
#define PSMC3BLKF7_address                       0xEEC
#define PSMC3BLKF7_position                      0x7
#define PSMC3BLKF7_size                          0x1
#define PSMC3BLKF7_value_mask                    0x80
#define PSMC3BLKF7_clear_mask                    0x7F


/*--------------------------------------------------------------#
| PSMC3FFA                                                0xEED |
#---------------------------------------------------------------#
| - | - | - | - | PSMC3FFA3 | PSMC3FFA2 | PSMC3FFA1 | PSMC3FFA0 |
#---------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3         | 2         | 1         | 0         |
#--------------------------------------------------------------*/

#define PSMC3FFA                                 0x0
#define PSMC3FFA_address                         0xEED
#define PSMC3FFA_position                        0x0
#define PSMC3FFA_size                            0x8
#define PSMC3FFA_value_mask                      0xFF
#define PSMC3FFA_clear_mask                      0x0

#define PSMC3FFA0                                0x0
#define PSMC3FFA0_address                        0xEED
#define PSMC3FFA0_position                       0x0
#define PSMC3FFA0_size                           0x1
#define PSMC3FFA0_value_mask                     0x1
#define PSMC3FFA0_clear_mask                     0xFE

#define PSMC3FFA1                                0x1
#define PSMC3FFA1_address                        0xEED
#define PSMC3FFA1_position                       0x1
#define PSMC3FFA1_size                           0x1
#define PSMC3FFA1_value_mask                     0x2
#define PSMC3FFA1_clear_mask                     0xFD

#define PSMC3FFA2                                0x2
#define PSMC3FFA2_address                        0xEED
#define PSMC3FFA2_position                       0x2
#define PSMC3FFA2_size                           0x1
#define PSMC3FFA2_value_mask                     0x4
#define PSMC3FFA2_clear_mask                     0xFB

#define PSMC3FFA3                                0x3
#define PSMC3FFA3_address                        0xEED
#define PSMC3FFA3_position                       0x3
#define PSMC3FFA3_size                           0x1
#define PSMC3FFA3_value_mask                     0x8
#define PSMC3FFA3_clear_mask                     0xF7


/*----------------------------------------#
| PSMC3STR0                         0xEEE |
#-----------------------------------------#
| - | - | - | - | - | - | P3STRB | P3STRA |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1      | 0      |
#----------------------------------------*/

#define PSMC3STR0                                0x0
#define PSMC3STR0_address                        0xEEE
#define PSMC3STR0_position                       0x0
#define PSMC3STR0_size                           0x8
#define PSMC3STR0_value_mask                     0xFF
#define PSMC3STR0_clear_mask                     0x0

#define P3STRA                                   0x0
#define P3STRA_address                           0xEEE
#define P3STRA_position                          0x0
#define P3STRA_size                              0x1
#define P3STRA_value_mask                        0x1
#define P3STRA_clear_mask                        0xFE

#define P3STRB                                   0x1
#define P3STRB_address                           0xEEE
#define P3STRB_position                          0x1
#define P3STRB_size                              0x1
#define P3STRB_value_mask                        0x2
#define P3STRB_clear_mask                        0xFD


/*------------------------------------------------#
| PSMC3STR1                                 0xEEF |
#-------------------------------------------------#
| P3SSYNC | - | - | - | - | - | P3LSMEN | P3HSMEN |
#-------------------------------------------------#
| 7       | 6 | 5 | 4 | 3 | 2 | 1       | 0       |
#------------------------------------------------*/

#define PSMC3STR1                                0x0
#define PSMC3STR1_address                        0xEEF
#define PSMC3STR1_position                       0x0
#define PSMC3STR1_size                           0x8
#define PSMC3STR1_value_mask                     0xFF
#define PSMC3STR1_clear_mask                     0x0

#define P3HSMEN                                  0x0
#define P3HSMEN_address                          0xEEF
#define P3HSMEN_position                         0x0
#define P3HSMEN_size                             0x1
#define P3HSMEN_value_mask                       0x1
#define P3HSMEN_clear_mask                       0xFE

#define P3LSMEN                                  0x1
#define P3LSMEN_address                          0xEEF
#define P3LSMEN_position                         0x1
#define P3LSMEN_size                             0x1
#define P3LSMEN_value_mask                       0x2
#define P3LSMEN_clear_mask                       0xFD

#define P3SSYNC                                  0x7
#define P3SSYNC_address                          0xEEF
#define P3SSYNC_position                         0x7
#define P3SSYNC_size                             0x1
#define P3SSYNC_value_mask                       0x80
#define P3SSYNC_clear_mask                       0x7F


/*----------------------------------------------------------------------------#
| PSMC4CON                                                              0xF11 |
#-----------------------------------------------------------------------------#
| PSMC4EN | PSMC4LD | P4DBFE | P4DBRE | P4MODE3 | P4MODE2 | P4MODE1 | P4MODE0 |
#-----------------------------------------------------------------------------#
| 7       | 6       | 5      | 4      | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------------------*/

#define PSMC4CON                                 0x0
#define PSMC4CON_address                         0xF11
#define PSMC4CON_position                        0x0
#define PSMC4CON_size                            0x8
#define PSMC4CON_value_mask                      0xFF
#define PSMC4CON_clear_mask                      0x0

#define P4MODE                                   0x0
#define P4MODE_address                           0xF11
#define P4MODE_position                          0x0
#define P4MODE_size                              0x4
#define P4MODE_value_mask                        0xF
#define P4MODE_clear_mask                        0xF0

#define P4MODE0                                  0x0
#define P4MODE0_address                          0xF11
#define P4MODE0_position                         0x0
#define P4MODE0_size                             0x1
#define P4MODE0_value_mask                       0x1
#define P4MODE0_clear_mask                       0xFE

#define P4MODE1                                  0x1
#define P4MODE1_address                          0xF11
#define P4MODE1_position                         0x1
#define P4MODE1_size                             0x1
#define P4MODE1_value_mask                       0x2
#define P4MODE1_clear_mask                       0xFD

#define P4MODE2                                  0x2
#define P4MODE2_address                          0xF11
#define P4MODE2_position                         0x2
#define P4MODE2_size                             0x1
#define P4MODE2_value_mask                       0x4
#define P4MODE2_clear_mask                       0xFB

#define P4MODE3                                  0x3
#define P4MODE3_address                          0xF11
#define P4MODE3_position                         0x3
#define P4MODE3_size                             0x1
#define P4MODE3_value_mask                       0x8
#define P4MODE3_clear_mask                       0xF7

#define P4DBRE                                   0x4
#define P4DBRE_address                           0xF11
#define P4DBRE_position                          0x4
#define P4DBRE_size                              0x1
#define P4DBRE_value_mask                        0x10
#define P4DBRE_clear_mask                        0xEF

#define P4DBFE                                   0x5
#define P4DBFE_address                           0xF11
#define P4DBFE_position                          0x5
#define P4DBFE_size                              0x1
#define P4DBFE_value_mask                        0x20
#define P4DBFE_clear_mask                        0xDF

#define PSMC4LD                                  0x6
#define PSMC4LD_address                          0xF11
#define PSMC4LD_position                         0x6
#define PSMC4LD_size                             0x1
#define PSMC4LD_value_mask                       0x40
#define PSMC4LD_clear_mask                       0xBF

#define PSMC4EN                                  0x7
#define PSMC4EN_address                          0xF11
#define PSMC4EN_position                         0x7
#define PSMC4EN_size                             0x1
#define PSMC4EN_value_mask                       0x80
#define PSMC4EN_clear_mask                       0x7F


/*--------------------------------------------------------------------------#
| PSMC4MDL                                                            0xF12 |
#---------------------------------------------------------------------------#
| P4MDLEN | P4MDLPOL | P4MDLBIT | - | P4MSRC3 | P4MSRC2 | P4MSRC1 | P4MSRC0 |
#---------------------------------------------------------------------------#
| 7       | 6        | 5        | 4 | 3       | 2       | 1       | 0       |
#--------------------------------------------------------------------------*/

#define PSMC4MDL                                 0x0
#define PSMC4MDL_address                         0xF12
#define PSMC4MDL_position                        0x0
#define PSMC4MDL_size                            0x8
#define PSMC4MDL_value_mask                      0xFF
#define PSMC4MDL_clear_mask                      0x0

#define P4MSRC                                   0x0
#define P4MSRC_address                           0xF12
#define P4MSRC_position                          0x0
#define P4MSRC_size                              0x4
#define P4MSRC_value_mask                        0xF
#define P4MSRC_clear_mask                        0xF0

#define P4MSRC0                                  0x0
#define P4MSRC0_address                          0xF12
#define P4MSRC0_position                         0x0
#define P4MSRC0_size                             0x1
#define P4MSRC0_value_mask                       0x1
#define P4MSRC0_clear_mask                       0xFE

#define P4MSRC1                                  0x1
#define P4MSRC1_address                          0xF12
#define P4MSRC1_position                         0x1
#define P4MSRC1_size                             0x1
#define P4MSRC1_value_mask                       0x2
#define P4MSRC1_clear_mask                       0xFD

#define P4MSRC2                                  0x2
#define P4MSRC2_address                          0xF12
#define P4MSRC2_position                         0x2
#define P4MSRC2_size                             0x1
#define P4MSRC2_value_mask                       0x4
#define P4MSRC2_clear_mask                       0xFB

#define P4MSRC3                                  0x3
#define P4MSRC3_address                          0xF12
#define P4MSRC3_position                         0x3
#define P4MSRC3_size                             0x1
#define P4MSRC3_value_mask                       0x8
#define P4MSRC3_clear_mask                       0xF7

#define P4MDLBIT                                 0x5
#define P4MDLBIT_address                         0xF12
#define P4MDLBIT_position                        0x5
#define P4MDLBIT_size                            0x1
#define P4MDLBIT_value_mask                      0x20
#define P4MDLBIT_clear_mask                      0xDF

#define P4MDLPOL                                 0x6
#define P4MDLPOL_address                         0xF12
#define P4MDLPOL_position                        0x6
#define P4MDLPOL_size                            0x1
#define P4MDLPOL_value_mask                      0x40
#define P4MDLPOL_clear_mask                      0xBF

#define P4MDLEN                                  0x7
#define P4MDLEN_address                          0xF12
#define P4MDLEN_position                         0x7
#define P4MDLEN_size                             0x1
#define P4MDLEN_value_mask                       0x80
#define P4MDLEN_clear_mask                       0x7F


/*------------------------------------------------------------------#
| PSMC4SYNC                                                   0xF13 |
#-------------------------------------------------------------------#
| P4POFST | P4PRPOL | P4DCPOL | - | - | P4SYNC2 | P4SYNC1 | P4SYNC0 |
#-------------------------------------------------------------------#
| 7       | 6       | 5       | 4 | 3 | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define PSMC4SYNC                                0x0
#define PSMC4SYNC_address                        0xF13
#define PSMC4SYNC_position                       0x0
#define PSMC4SYNC_size                           0x8
#define PSMC4SYNC_value_mask                     0xFF
#define PSMC4SYNC_clear_mask                     0x0

#define P4SYNC0                                  0x0
#define P4SYNC0_address                          0xF13
#define P4SYNC0_position                         0x0
#define P4SYNC0_size                             0x1
#define P4SYNC0_value_mask                       0x1
#define P4SYNC0_clear_mask                       0xFE

#define P4SYNC1                                  0x1
#define P4SYNC1_address                          0xF13
#define P4SYNC1_position                         0x1
#define P4SYNC1_size                             0x1
#define P4SYNC1_value_mask                       0x2
#define P4SYNC1_clear_mask                       0xFD

#define P4SYNC2                                  0x2
#define P4SYNC2_address                          0xF13
#define P4SYNC2_position                         0x2
#define P4SYNC2_size                             0x1
#define P4SYNC2_value_mask                       0x4
#define P4SYNC2_clear_mask                       0xFB

#define P4DCPOL                                  0x5
#define P4DCPOL_address                          0xF13
#define P4DCPOL_position                         0x5
#define P4DCPOL_size                             0x1
#define P4DCPOL_value_mask                       0x20
#define P4DCPOL_clear_mask                       0xDF

#define P4PRPOL                                  0x6
#define P4PRPOL_address                          0xF13
#define P4PRPOL_position                         0x6
#define P4PRPOL_size                             0x1
#define P4PRPOL_value_mask                       0x40
#define P4PRPOL_clear_mask                       0xBF

#define P4POFST                                  0x7
#define P4POFST_address                          0xF13
#define P4POFST_position                         0x7
#define P4POFST_size                             0x1
#define P4POFST_value_mask                       0x80
#define P4POFST_clear_mask                       0x7F


/*------------------------------------------------------#
| PSMC4CLK                                        0xF14 |
#-------------------------------------------------------#
| - | - | P4CPRE1 | P4CPRE0 | - | - | P4CSRC1 | P4CSRC0 |
#-------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3 | 2 | 1       | 0       |
#------------------------------------------------------*/

#define PSMC4CLK                                 0x0
#define PSMC4CLK_address                         0xF14
#define PSMC4CLK_position                        0x0
#define PSMC4CLK_size                            0x8
#define PSMC4CLK_value_mask                      0xFF
#define PSMC4CLK_clear_mask                      0x0

#define P4CSRC0                                  0x0
#define P4CSRC0_address                          0xF14
#define P4CSRC0_position                         0x0
#define P4CSRC0_size                             0x1
#define P4CSRC0_value_mask                       0x1
#define P4CSRC0_clear_mask                       0xFE

#define P4CSRC                                   0x0
#define P4CSRC_address                           0xF14
#define P4CSRC_position                          0x0
#define P4CSRC_size                              0x2
#define P4CSRC_value_mask                        0x3
#define P4CSRC_clear_mask                        0xFC

#define P4CSRC1                                  0x1
#define P4CSRC1_address                          0xF14
#define P4CSRC1_position                         0x1
#define P4CSRC1_size                             0x1
#define P4CSRC1_value_mask                       0x2
#define P4CSRC1_clear_mask                       0xFD

#define P4CPRE0                                  0x4
#define P4CPRE0_address                          0xF14
#define P4CPRE0_position                         0x4
#define P4CPRE0_size                             0x1
#define P4CPRE0_value_mask                       0x10
#define P4CPRE0_clear_mask                       0xEF

#define P4CPRE                                   0x4
#define P4CPRE_address                           0xF14
#define P4CPRE_position                          0x4
#define P4CPRE_size                              0x2
#define P4CPRE_value_mask                        0x30
#define P4CPRE_clear_mask                        0xCF

#define P4CPRE1                                  0x5
#define P4CPRE1_address                          0xF14
#define P4CPRE1_position                         0x5
#define P4CPRE1_size                             0x1
#define P4CPRE1_value_mask                       0x20
#define P4CPRE1_clear_mask                       0xDF


/*--------------------------------------#
| PSMC4OEN                        0xF15 |
#---------------------------------------#
| - | - | - | - | - | - | P4OEB | P4OEA |
#---------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1     | 0     |
#--------------------------------------*/

#define PSMC4OEN                                 0x0
#define PSMC4OEN_address                         0xF15
#define PSMC4OEN_position                        0x0
#define PSMC4OEN_size                            0x8
#define PSMC4OEN_value_mask                      0xFF
#define PSMC4OEN_clear_mask                      0x0

#define P4OEA                                    0x0
#define P4OEA_address                            0xF15
#define P4OEA_position                           0x0
#define P4OEA_size                               0x1
#define P4OEA_value_mask                         0x1
#define P4OEA_clear_mask                         0xFE

#define P4OEB                                    0x1
#define P4OEB_address                            0xF15
#define P4OEB_position                           0x1
#define P4OEB_size                               0x1
#define P4OEB_value_mask                         0x2
#define P4OEB_clear_mask                         0xFD


/*----------------------------------------------#
| PSMC4POL                                0xF16 |
#-----------------------------------------------#
| - | P4INPOL | - | - | - | - | P4POLB | P4POLA |
#-----------------------------------------------#
| 7 | 6       | 5 | 4 | 3 | 2 | 1      | 0      |
#----------------------------------------------*/

#define PSMC4POL                                 0x0
#define PSMC4POL_address                         0xF16
#define PSMC4POL_position                        0x0
#define PSMC4POL_size                            0x8
#define PSMC4POL_value_mask                      0xFF
#define PSMC4POL_clear_mask                      0x0

#define P4POLA                                   0x0
#define P4POLA_address                           0xF16
#define P4POLA_position                          0x0
#define P4POLA_size                              0x1
#define P4POLA_value_mask                        0x1
#define P4POLA_clear_mask                        0xFE

#define P4POLB                                   0x1
#define P4POLB_address                           0xF16
#define P4POLB_position                          0x1
#define P4POLB_size                              0x1
#define P4POLB_value_mask                        0x2
#define P4POLB_clear_mask                        0xFD

#define P4INPOL                                  0x6
#define P4INPOL_address                          0xF16
#define P4INPOL_position                         0x6
#define P4INPOL_size                             0x1
#define P4INPOL_value_mask                       0x40
#define P4INPOL_clear_mask                       0xBF


/*------------------------------------------------------#
| PSMC4BLNK                                       0xF17 |
#-------------------------------------------------------#
| - | - | P4FEBM1 | P4FEBM0 | - | - | P4REBM1 | P4REBM0 |
#-------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3 | 2 | 1       | 0       |
#------------------------------------------------------*/

#define PSMC4BLNK                                0x0
#define PSMC4BLNK_address                        0xF17
#define PSMC4BLNK_position                       0x0
#define PSMC4BLNK_size                           0x8
#define PSMC4BLNK_value_mask                     0xFF
#define PSMC4BLNK_clear_mask                     0x0

#define P4REBM0                                  0x0
#define P4REBM0_address                          0xF17
#define P4REBM0_position                         0x0
#define P4REBM0_size                             0x1
#define P4REBM0_value_mask                       0x1
#define P4REBM0_clear_mask                       0xFE

#define P4REBM                                   0x0
#define P4REBM_address                           0xF17
#define P4REBM_position                          0x0
#define P4REBM_size                              0x2
#define P4REBM_value_mask                        0x3
#define P4REBM_clear_mask                        0xFC

#define P4REBM1                                  0x1
#define P4REBM1_address                          0xF17
#define P4REBM1_position                         0x1
#define P4REBM1_size                             0x1
#define P4REBM1_value_mask                       0x2
#define P4REBM1_clear_mask                       0xFD

#define P4FEBM0                                  0x4
#define P4FEBM0_address                          0xF17
#define P4FEBM0_position                         0x4
#define P4FEBM0_size                             0x1
#define P4FEBM0_value_mask                       0x10
#define P4FEBM0_clear_mask                       0xEF

#define P4FEBM                                   0x4
#define P4FEBM_address                           0xF17
#define P4FEBM_position                          0x4
#define P4FEBM_size                              0x2
#define P4FEBM_value_mask                        0x30
#define P4FEBM_clear_mask                        0xCF

#define P4FEBM1                                  0x5
#define P4FEBM1_address                          0xF17
#define P4FEBM1_position                         0x5
#define P4FEBM1_size                             0x1
#define P4FEBM1_value_mask                       0x20
#define P4FEBM1_clear_mask                       0xDF


/*-----------------------------------------------------------------#
| PSMC4REBS                                                  0xF18 |
#------------------------------------------------------------------#
| P4REBSIN | - | - | P4REBSC4 | P4REBSC3 | P4REBSC2 | P4REBSC1 | - |
#------------------------------------------------------------------#
| 7        | 6 | 5 | 4        | 3        | 2        | 1        | 0 |
#-----------------------------------------------------------------*/

#define PSMC4REBS                                0x0
#define PSMC4REBS_address                        0xF18
#define PSMC4REBS_position                       0x0
#define PSMC4REBS_size                           0x8
#define PSMC4REBS_value_mask                     0xFF
#define PSMC4REBS_clear_mask                     0x0

#define P4REBSC1                                 0x1
#define P4REBSC1_address                         0xF18
#define P4REBSC1_position                        0x1
#define P4REBSC1_size                            0x1
#define P4REBSC1_value_mask                      0x2
#define P4REBSC1_clear_mask                      0xFD

#define P4REBSC2                                 0x2
#define P4REBSC2_address                         0xF18
#define P4REBSC2_position                        0x2
#define P4REBSC2_size                            0x1
#define P4REBSC2_value_mask                      0x4
#define P4REBSC2_clear_mask                      0xFB

#define P4REBSC3                                 0x3
#define P4REBSC3_address                         0xF18
#define P4REBSC3_position                        0x3
#define P4REBSC3_size                            0x1
#define P4REBSC3_value_mask                      0x8
#define P4REBSC3_clear_mask                      0xF7

#define P4REBSC4                                 0x4
#define P4REBSC4_address                         0xF18
#define P4REBSC4_position                        0x4
#define P4REBSC4_size                            0x1
#define P4REBSC4_value_mask                      0x10
#define P4REBSC4_clear_mask                      0xEF

#define P4REBSIN                                 0x7
#define P4REBSIN_address                         0xF18
#define P4REBSIN_position                        0x7
#define P4REBSIN_size                            0x1
#define P4REBSIN_value_mask                      0x80
#define P4REBSIN_clear_mask                      0x7F


/*-----------------------------------------------------------------#
| PSMC4FEBS                                                  0xF19 |
#------------------------------------------------------------------#
| P4FEBSIN | - | - | P4FEBSC4 | P4FEBSC3 | P4FEBSC2 | P4FEBSC1 | - |
#------------------------------------------------------------------#
| 7        | 6 | 5 | 4        | 3        | 2        | 1        | 0 |
#-----------------------------------------------------------------*/

#define PSMC4FEBS                                0x0
#define PSMC4FEBS_address                        0xF19
#define PSMC4FEBS_position                       0x0
#define PSMC4FEBS_size                           0x8
#define PSMC4FEBS_value_mask                     0xFF
#define PSMC4FEBS_clear_mask                     0x0

#define P4FEBSC1                                 0x1
#define P4FEBSC1_address                         0xF19
#define P4FEBSC1_position                        0x1
#define P4FEBSC1_size                            0x1
#define P4FEBSC1_value_mask                      0x2
#define P4FEBSC1_clear_mask                      0xFD

#define P4FEBSC2                                 0x2
#define P4FEBSC2_address                         0xF19
#define P4FEBSC2_position                        0x2
#define P4FEBSC2_size                            0x1
#define P4FEBSC2_value_mask                      0x4
#define P4FEBSC2_clear_mask                      0xFB

#define P4FEBSC3                                 0x3
#define P4FEBSC3_address                         0xF19
#define P4FEBSC3_position                        0x3
#define P4FEBSC3_size                            0x1
#define P4FEBSC3_value_mask                      0x8
#define P4FEBSC3_clear_mask                      0xF7

#define P4FEBSC4                                 0x4
#define P4FEBSC4_address                         0xF19
#define P4FEBSC4_position                        0x4
#define P4FEBSC4_size                            0x1
#define P4FEBSC4_value_mask                      0x10
#define P4FEBSC4_clear_mask                      0xEF

#define P4FEBSIN                                 0x7
#define P4FEBSIN_address                         0xF19
#define P4FEBSIN_position                        0x7
#define P4FEBSIN_size                            0x1
#define P4FEBSIN_value_mask                      0x80
#define P4FEBSIN_clear_mask                      0x7F


/*-----------------------------------------------------------------#
| PSMC4PHS                                                   0xF1A |
#------------------------------------------------------------------#
| P4PHSIN | - | - | P4PHSC4 | P4PHSC3 | P4PHSC2 | P4PHSC1 | P4PHST |
#------------------------------------------------------------------#
| 7       | 6 | 5 | 4       | 3       | 2       | 1       | 0      |
#-----------------------------------------------------------------*/

#define PSMC4PHS                                 0x0
#define PSMC4PHS_address                         0xF1A
#define PSMC4PHS_position                        0x0
#define PSMC4PHS_size                            0x8
#define PSMC4PHS_value_mask                      0xFF
#define PSMC4PHS_clear_mask                      0x0

#define P4PHST                                   0x0
#define P4PHST_address                           0xF1A
#define P4PHST_position                          0x0
#define P4PHST_size                              0x1
#define P4PHST_value_mask                        0x1
#define P4PHST_clear_mask                        0xFE

#define P4PHSC1                                  0x1
#define P4PHSC1_address                          0xF1A
#define P4PHSC1_position                         0x1
#define P4PHSC1_size                             0x1
#define P4PHSC1_value_mask                       0x2
#define P4PHSC1_clear_mask                       0xFD

#define P4PHSC2                                  0x2
#define P4PHSC2_address                          0xF1A
#define P4PHSC2_position                         0x2
#define P4PHSC2_size                             0x1
#define P4PHSC2_value_mask                       0x4
#define P4PHSC2_clear_mask                       0xFB

#define P4PHSC3                                  0x3
#define P4PHSC3_address                          0xF1A
#define P4PHSC3_position                         0x3
#define P4PHSC3_size                             0x1
#define P4PHSC3_value_mask                       0x8
#define P4PHSC3_clear_mask                       0xF7

#define P4PHSC4                                  0x4
#define P4PHSC4_address                          0xF1A
#define P4PHSC4_position                         0x4
#define P4PHSC4_size                             0x1
#define P4PHSC4_value_mask                       0x10
#define P4PHSC4_clear_mask                       0xEF

#define P4PHSIN                                  0x7
#define P4PHSIN_address                          0xF1A
#define P4PHSIN_position                         0x7
#define P4PHSIN_size                             0x1
#define P4PHSIN_value_mask                       0x80
#define P4PHSIN_clear_mask                       0x7F


/*-----------------------------------------------------------------#
| PSMC4DCS                                                   0xF1B |
#------------------------------------------------------------------#
| P4DCSIN | - | - | P4DCSC4 | P4DCSC3 | P4DCSC2 | P4DCSC1 | P4DCST |
#------------------------------------------------------------------#
| 7       | 6 | 5 | 4       | 3       | 2       | 1       | 0      |
#-----------------------------------------------------------------*/

#define PSMC4DCS                                 0x0
#define PSMC4DCS_address                         0xF1B
#define PSMC4DCS_position                        0x0
#define PSMC4DCS_size                            0x8
#define PSMC4DCS_value_mask                      0xFF
#define PSMC4DCS_clear_mask                      0x0

#define P4DCST                                   0x0
#define P4DCST_address                           0xF1B
#define P4DCST_position                          0x0
#define P4DCST_size                              0x1
#define P4DCST_value_mask                        0x1
#define P4DCST_clear_mask                        0xFE

#define P4DCSC1                                  0x1
#define P4DCSC1_address                          0xF1B
#define P4DCSC1_position                         0x1
#define P4DCSC1_size                             0x1
#define P4DCSC1_value_mask                       0x2
#define P4DCSC1_clear_mask                       0xFD

#define P4DCSC2                                  0x2
#define P4DCSC2_address                          0xF1B
#define P4DCSC2_position                         0x2
#define P4DCSC2_size                             0x1
#define P4DCSC2_value_mask                       0x4
#define P4DCSC2_clear_mask                       0xFB

#define P4DCSC3                                  0x3
#define P4DCSC3_address                          0xF1B
#define P4DCSC3_position                         0x3
#define P4DCSC3_size                             0x1
#define P4DCSC3_value_mask                       0x8
#define P4DCSC3_clear_mask                       0xF7

#define P4DCSC4                                  0x4
#define P4DCSC4_address                          0xF1B
#define P4DCSC4_position                         0x4
#define P4DCSC4_size                             0x1
#define P4DCSC4_value_mask                       0x10
#define P4DCSC4_clear_mask                       0xEF

#define P4DCSIN                                  0x7
#define P4DCSIN_address                          0xF1B
#define P4DCSIN_position                         0x7
#define P4DCSIN_size                             0x1
#define P4DCSIN_value_mask                       0x80
#define P4DCSIN_clear_mask                       0x7F


/*-----------------------------------------------------------------#
| PSMC4PRS                                                   0xF1C |
#------------------------------------------------------------------#
| P4PRSIN | - | - | P4PRSC4 | P4PRSC3 | P4PRSC2 | P4PRSC1 | P4PRST |
#------------------------------------------------------------------#
| 7       | 6 | 5 | 4       | 3       | 2       | 1       | 0      |
#-----------------------------------------------------------------*/

#define PSMC4PRS                                 0x0
#define PSMC4PRS_address                         0xF1C
#define PSMC4PRS_position                        0x0
#define PSMC4PRS_size                            0x8
#define PSMC4PRS_value_mask                      0xFF
#define PSMC4PRS_clear_mask                      0x0

#define P4PRST                                   0x0
#define P4PRST_address                           0xF1C
#define P4PRST_position                          0x0
#define P4PRST_size                              0x1
#define P4PRST_value_mask                        0x1
#define P4PRST_clear_mask                        0xFE

#define P4PRSC1                                  0x1
#define P4PRSC1_address                          0xF1C
#define P4PRSC1_position                         0x1
#define P4PRSC1_size                             0x1
#define P4PRSC1_value_mask                       0x2
#define P4PRSC1_clear_mask                       0xFD

#define P4PRSC2                                  0x2
#define P4PRSC2_address                          0xF1C
#define P4PRSC2_position                         0x2
#define P4PRSC2_size                             0x1
#define P4PRSC2_value_mask                       0x4
#define P4PRSC2_clear_mask                       0xFB

#define P4PRSC3                                  0x3
#define P4PRSC3_address                          0xF1C
#define P4PRSC3_position                         0x3
#define P4PRSC3_size                             0x1
#define P4PRSC3_value_mask                       0x8
#define P4PRSC3_clear_mask                       0xF7

#define P4PRSC4                                  0x4
#define P4PRSC4_address                          0xF1C
#define P4PRSC4_position                         0x4
#define P4PRSC4_size                             0x1
#define P4PRSC4_value_mask                       0x10
#define P4PRSC4_clear_mask                       0xEF

#define P4PRSIN                                  0x7
#define P4PRSIN_address                          0xF1C
#define P4PRSIN_position                         0x7
#define P4PRSIN_size                             0x1
#define P4PRSIN_value_mask                       0x80
#define P4PRSIN_clear_mask                       0x7F


/*----------------------------------------------------#
| PSMC4ASDC                                     0xF1D |
#-----------------------------------------------------#
| P4ASE | P4ASDEN | P4ARSEN | - | - | - | - | P4ASDOV |
#-----------------------------------------------------#
| 7     | 6       | 5       | 4 | 3 | 2 | 1 | 0       |
#----------------------------------------------------*/

#define PSMC4ASDC                                0x0
#define PSMC4ASDC_address                        0xF1D
#define PSMC4ASDC_position                       0x0
#define PSMC4ASDC_size                           0x8
#define PSMC4ASDC_value_mask                     0xFF
#define PSMC4ASDC_clear_mask                     0x0

#define P4ASDOV                                  0x0
#define P4ASDOV_address                          0xF1D
#define P4ASDOV_position                         0x0
#define P4ASDOV_size                             0x1
#define P4ASDOV_value_mask                       0x1
#define P4ASDOV_clear_mask                       0xFE

#define P4ARSEN                                  0x5
#define P4ARSEN_address                          0xF1D
#define P4ARSEN_position                         0x5
#define P4ARSEN_size                             0x1
#define P4ARSEN_value_mask                       0x20
#define P4ARSEN_clear_mask                       0xDF

#define P4ASDEN                                  0x6
#define P4ASDEN_address                          0xF1D
#define P4ASDEN_position                         0x6
#define P4ASDEN_size                             0x1
#define P4ASDEN_value_mask                       0x40
#define P4ASDEN_clear_mask                       0xBF

#define P4ASE                                    0x7
#define P4ASE_address                            0xF1D
#define P4ASE_position                           0x7
#define P4ASE_size                               0x1
#define P4ASE_value_mask                         0x80
#define P4ASE_clear_mask                         0x7F


/*------------------------------------------#
| PSMC4ASDL                           0xF1E |
#-------------------------------------------#
| - | - | - | - | - | - | P4ASDLB | P4ASDLA |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1       | 0       |
#------------------------------------------*/

#define PSMC4ASDL                                0x0
#define PSMC4ASDL_address                        0xF1E
#define PSMC4ASDL_position                       0x0
#define PSMC4ASDL_size                           0x8
#define PSMC4ASDL_value_mask                     0xFF
#define PSMC4ASDL_clear_mask                     0x0

#define P4ASDLA                                  0x0
#define P4ASDLA_address                          0xF1E
#define P4ASDLA_position                         0x0
#define P4ASDLA_size                             0x1
#define P4ASDLA_value_mask                       0x1
#define P4ASDLA_clear_mask                       0xFE

#define P4ASDLB                                  0x1
#define P4ASDLB_address                          0xF1E
#define P4ASDLB_position                         0x1
#define P4ASDLB_size                             0x1
#define P4ASDLB_value_mask                       0x2
#define P4ASDLB_clear_mask                       0xFD


/*-----------------------------------------------------------------#
| PSMC4ASDS                                                  0xF1F |
#------------------------------------------------------------------#
| P4ASDSIN | - | - | P4ASDSC4 | P4ASDSC3 | P4ASDSC2 | P4ASDSC1 | - |
#------------------------------------------------------------------#
| 7        | 6 | 5 | 4        | 3        | 2        | 1        | 0 |
#-----------------------------------------------------------------*/

#define PSMC4ASDS                                0x0
#define PSMC4ASDS_address                        0xF1F
#define PSMC4ASDS_position                       0x0
#define PSMC4ASDS_size                           0x8
#define PSMC4ASDS_value_mask                     0xFF
#define PSMC4ASDS_clear_mask                     0x0

#define P4ASDSC1                                 0x1
#define P4ASDSC1_address                         0xF1F
#define P4ASDSC1_position                        0x1
#define P4ASDSC1_size                            0x1
#define P4ASDSC1_value_mask                      0x2
#define P4ASDSC1_clear_mask                      0xFD

#define P4ASDSC2                                 0x2
#define P4ASDSC2_address                         0xF1F
#define P4ASDSC2_position                        0x2
#define P4ASDSC2_size                            0x1
#define P4ASDSC2_value_mask                      0x4
#define P4ASDSC2_clear_mask                      0xFB

#define P4ASDSC3                                 0x3
#define P4ASDSC3_address                         0xF1F
#define P4ASDSC3_position                        0x3
#define P4ASDSC3_size                            0x1
#define P4ASDSC3_value_mask                      0x8
#define P4ASDSC3_clear_mask                      0xF7

#define P4ASDSC4                                 0x4
#define P4ASDSC4_address                         0xF1F
#define P4ASDSC4_position                        0x4
#define P4ASDSC4_size                            0x1
#define P4ASDSC4_value_mask                      0x10
#define P4ASDSC4_clear_mask                      0xEF

#define P4ASDSIN                                 0x7
#define P4ASDSIN_address                         0xF1F
#define P4ASDSIN_position                        0x7
#define P4ASDSIN_size                            0x1
#define P4ASDSIN_value_mask                      0x80
#define P4ASDSIN_clear_mask                      0x7F


/*------------------------------------------------------------------------------#
| PSMC4INT                                                                0xF20 |
#-------------------------------------------------------------------------------#
| P4TOVIE | P4TPHIE | P4TDCIE | P4TPRIE | P4TOVIF | P4TPHIF | P4TDCIF | P4TPRIF |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define PSMC4INT                                 0x0
#define PSMC4INT_address                         0xF20
#define PSMC4INT_position                        0x0
#define PSMC4INT_size                            0x8
#define PSMC4INT_value_mask                      0xFF
#define PSMC4INT_clear_mask                      0x0

#define P4TPRIF                                  0x0
#define P4TPRIF_address                          0xF20
#define P4TPRIF_position                         0x0
#define P4TPRIF_size                             0x1
#define P4TPRIF_value_mask                       0x1
#define P4TPRIF_clear_mask                       0xFE

#define P4TDCIF                                  0x1
#define P4TDCIF_address                          0xF20
#define P4TDCIF_position                         0x1
#define P4TDCIF_size                             0x1
#define P4TDCIF_value_mask                       0x2
#define P4TDCIF_clear_mask                       0xFD

#define P4TPHIF                                  0x2
#define P4TPHIF_address                          0xF20
#define P4TPHIF_position                         0x2
#define P4TPHIF_size                             0x1
#define P4TPHIF_value_mask                       0x4
#define P4TPHIF_clear_mask                       0xFB

#define P4TOVIF                                  0x3
#define P4TOVIF_address                          0xF20
#define P4TOVIF_position                         0x3
#define P4TOVIF_size                             0x1
#define P4TOVIF_value_mask                       0x8
#define P4TOVIF_clear_mask                       0xF7

#define P4TPRIE                                  0x4
#define P4TPRIE_address                          0xF20
#define P4TPRIE_position                         0x4
#define P4TPRIE_size                             0x1
#define P4TPRIE_value_mask                       0x10
#define P4TPRIE_clear_mask                       0xEF

#define P4TDCIE                                  0x5
#define P4TDCIE_address                          0xF20
#define P4TDCIE_position                         0x5
#define P4TDCIE_size                             0x1
#define P4TDCIE_value_mask                       0x20
#define P4TDCIE_clear_mask                       0xDF

#define P4TPHIE                                  0x6
#define P4TPHIE_address                          0xF20
#define P4TPHIE_position                         0x6
#define P4TPHIE_size                             0x1
#define P4TPHIE_value_mask                       0x40
#define P4TPHIE_clear_mask                       0xBF

#define P4TOVIE                                  0x7
#define P4TOVIE_address                          0xF20
#define P4TOVIE_position                         0x7
#define P4TOVIE_size                             0x1
#define P4TOVIE_value_mask                       0x80
#define P4TOVIE_clear_mask                       0x7F


/*--------------------------------------------------------------------------------------#
| PSMC4PHL                                                                        0xF21 |
#---------------------------------------------------------------------------------------#
| PSMC4PH7 | PSMC4PH6 | PSMC4PH5 | PSMC4PH4 | PSMC4PH3 | PSMC4PH2 | PSMC4PH1 | PSMC4PH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PSMC4PHL                                 0x0
#define PSMC4PHL_address                         0xF21
#define PSMC4PHL_position                        0x0
#define PSMC4PHL_size                            0x8
#define PSMC4PHL_value_mask                      0xFF
#define PSMC4PHL_clear_mask                      0x0

#define PSMC4PH0                                 0x0
#define PSMC4PH0_address                         0xF21
#define PSMC4PH0_position                        0x0
#define PSMC4PH0_size                            0x1
#define PSMC4PH0_value_mask                      0x1
#define PSMC4PH0_clear_mask                      0xFE

#define PSMC4PH1                                 0x1
#define PSMC4PH1_address                         0xF21
#define PSMC4PH1_position                        0x1
#define PSMC4PH1_size                            0x1
#define PSMC4PH1_value_mask                      0x2
#define PSMC4PH1_clear_mask                      0xFD

#define PSMC4PH2                                 0x2
#define PSMC4PH2_address                         0xF21
#define PSMC4PH2_position                        0x2
#define PSMC4PH2_size                            0x1
#define PSMC4PH2_value_mask                      0x4
#define PSMC4PH2_clear_mask                      0xFB

#define PSMC4PH3                                 0x3
#define PSMC4PH3_address                         0xF21
#define PSMC4PH3_position                        0x3
#define PSMC4PH3_size                            0x1
#define PSMC4PH3_value_mask                      0x8
#define PSMC4PH3_clear_mask                      0xF7

#define PSMC4PH4                                 0x4
#define PSMC4PH4_address                         0xF21
#define PSMC4PH4_position                        0x4
#define PSMC4PH4_size                            0x1
#define PSMC4PH4_value_mask                      0x10
#define PSMC4PH4_clear_mask                      0xEF

#define PSMC4PH5                                 0x5
#define PSMC4PH5_address                         0xF21
#define PSMC4PH5_position                        0x5
#define PSMC4PH5_size                            0x1
#define PSMC4PH5_value_mask                      0x20
#define PSMC4PH5_clear_mask                      0xDF

#define PSMC4PH6                                 0x6
#define PSMC4PH6_address                         0xF21
#define PSMC4PH6_position                        0x6
#define PSMC4PH6_size                            0x1
#define PSMC4PH6_value_mask                      0x40
#define PSMC4PH6_clear_mask                      0xBF

#define PSMC4PH7                                 0x7
#define PSMC4PH7_address                         0xF21
#define PSMC4PH7_position                        0x7
#define PSMC4PH7_size                            0x1
#define PSMC4PH7_value_mask                      0x80
#define PSMC4PH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| PSMC4PHH                                                                              0xF22 |
#---------------------------------------------------------------------------------------------#
| PSMC4PH15 | PSMC4PH14 | PSMC4PH13 | PSMC4PH12 | PSMC4PH11 | PSMC4PH10 | PSMC4PH9 | PSMC4PH8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define PSMC4PHH                                 0x0
#define PSMC4PHH_address                         0xF22
#define PSMC4PHH_position                        0x0
#define PSMC4PHH_size                            0x8
#define PSMC4PHH_value_mask                      0xFF
#define PSMC4PHH_clear_mask                      0x0

#define PSMC4PH8                                 0x0
#define PSMC4PH8_address                         0xF22
#define PSMC4PH8_position                        0x0
#define PSMC4PH8_size                            0x1
#define PSMC4PH8_value_mask                      0x1
#define PSMC4PH8_clear_mask                      0xFE

#define PSMC4PH9                                 0x1
#define PSMC4PH9_address                         0xF22
#define PSMC4PH9_position                        0x1
#define PSMC4PH9_size                            0x1
#define PSMC4PH9_value_mask                      0x2
#define PSMC4PH9_clear_mask                      0xFD

#define PSMC4PH10                                0x2
#define PSMC4PH10_address                        0xF22
#define PSMC4PH10_position                       0x2
#define PSMC4PH10_size                           0x1
#define PSMC4PH10_value_mask                     0x4
#define PSMC4PH10_clear_mask                     0xFB

#define PSMC4PH11                                0x3
#define PSMC4PH11_address                        0xF22
#define PSMC4PH11_position                       0x3
#define PSMC4PH11_size                           0x1
#define PSMC4PH11_value_mask                     0x8
#define PSMC4PH11_clear_mask                     0xF7

#define PSMC4PH12                                0x4
#define PSMC4PH12_address                        0xF22
#define PSMC4PH12_position                       0x4
#define PSMC4PH12_size                           0x1
#define PSMC4PH12_value_mask                     0x10
#define PSMC4PH12_clear_mask                     0xEF

#define PSMC4PH13                                0x5
#define PSMC4PH13_address                        0xF22
#define PSMC4PH13_position                       0x5
#define PSMC4PH13_size                           0x1
#define PSMC4PH13_value_mask                     0x20
#define PSMC4PH13_clear_mask                     0xDF

#define PSMC4PH14                                0x6
#define PSMC4PH14_address                        0xF22
#define PSMC4PH14_position                       0x6
#define PSMC4PH14_size                           0x1
#define PSMC4PH14_value_mask                     0x40
#define PSMC4PH14_clear_mask                     0xBF

#define PSMC4PH15                                0x7
#define PSMC4PH15_address                        0xF22
#define PSMC4PH15_position                       0x7
#define PSMC4PH15_size                           0x1
#define PSMC4PH15_value_mask                     0x80
#define PSMC4PH15_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| PSMC4DCL                                                                        0xF23 |
#---------------------------------------------------------------------------------------#
| PSMC4DC7 | PSMC4DC6 | PSMC4DC5 | PSMC4DC4 | PSMC4DC3 | PSMC4DC2 | PSMC4DC1 | PSMC4DC0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PSMC4DCL                                 0x0
#define PSMC4DCL_address                         0xF23
#define PSMC4DCL_position                        0x0
#define PSMC4DCL_size                            0x8
#define PSMC4DCL_value_mask                      0xFF
#define PSMC4DCL_clear_mask                      0x0

#define PSMC4DC0                                 0x0
#define PSMC4DC0_address                         0xF23
#define PSMC4DC0_position                        0x0
#define PSMC4DC0_size                            0x1
#define PSMC4DC0_value_mask                      0x1
#define PSMC4DC0_clear_mask                      0xFE

#define PSMC4DC1                                 0x1
#define PSMC4DC1_address                         0xF23
#define PSMC4DC1_position                        0x1
#define PSMC4DC1_size                            0x1
#define PSMC4DC1_value_mask                      0x2
#define PSMC4DC1_clear_mask                      0xFD

#define PSMC4DC2                                 0x2
#define PSMC4DC2_address                         0xF23
#define PSMC4DC2_position                        0x2
#define PSMC4DC2_size                            0x1
#define PSMC4DC2_value_mask                      0x4
#define PSMC4DC2_clear_mask                      0xFB

#define PSMC4DC3                                 0x3
#define PSMC4DC3_address                         0xF23
#define PSMC4DC3_position                        0x3
#define PSMC4DC3_size                            0x1
#define PSMC4DC3_value_mask                      0x8
#define PSMC4DC3_clear_mask                      0xF7

#define PSMC4DC4                                 0x4
#define PSMC4DC4_address                         0xF23
#define PSMC4DC4_position                        0x4
#define PSMC4DC4_size                            0x1
#define PSMC4DC4_value_mask                      0x10
#define PSMC4DC4_clear_mask                      0xEF

#define PSMC4DC5                                 0x5
#define PSMC4DC5_address                         0xF23
#define PSMC4DC5_position                        0x5
#define PSMC4DC5_size                            0x1
#define PSMC4DC5_value_mask                      0x20
#define PSMC4DC5_clear_mask                      0xDF

#define PSMC4DC6                                 0x6
#define PSMC4DC6_address                         0xF23
#define PSMC4DC6_position                        0x6
#define PSMC4DC6_size                            0x1
#define PSMC4DC6_value_mask                      0x40
#define PSMC4DC6_clear_mask                      0xBF

#define PSMC4DC7                                 0x7
#define PSMC4DC7_address                         0xF23
#define PSMC4DC7_position                        0x7
#define PSMC4DC7_size                            0x1
#define PSMC4DC7_value_mask                      0x80
#define PSMC4DC7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| PSMC4DCH                                                                              0xF24 |
#---------------------------------------------------------------------------------------------#
| PSMC4DC15 | PSMC4DC14 | PSMC4DC13 | PSMC4DC12 | PSMC4DC11 | PSMC4DC10 | PSMC4DC9 | PSMC4DC8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define PSMC4DCH                                 0x0
#define PSMC4DCH_address                         0xF24
#define PSMC4DCH_position                        0x0
#define PSMC4DCH_size                            0x8
#define PSMC4DCH_value_mask                      0xFF
#define PSMC4DCH_clear_mask                      0x0

#define PSMC4DC8                                 0x0
#define PSMC4DC8_address                         0xF24
#define PSMC4DC8_position                        0x0
#define PSMC4DC8_size                            0x1
#define PSMC4DC8_value_mask                      0x1
#define PSMC4DC8_clear_mask                      0xFE

#define PSMC4DC9                                 0x1
#define PSMC4DC9_address                         0xF24
#define PSMC4DC9_position                        0x1
#define PSMC4DC9_size                            0x1
#define PSMC4DC9_value_mask                      0x2
#define PSMC4DC9_clear_mask                      0xFD

#define PSMC4DC10                                0x2
#define PSMC4DC10_address                        0xF24
#define PSMC4DC10_position                       0x2
#define PSMC4DC10_size                           0x1
#define PSMC4DC10_value_mask                     0x4
#define PSMC4DC10_clear_mask                     0xFB

#define PSMC4DC11                                0x3
#define PSMC4DC11_address                        0xF24
#define PSMC4DC11_position                       0x3
#define PSMC4DC11_size                           0x1
#define PSMC4DC11_value_mask                     0x8
#define PSMC4DC11_clear_mask                     0xF7

#define PSMC4DC12                                0x4
#define PSMC4DC12_address                        0xF24
#define PSMC4DC12_position                       0x4
#define PSMC4DC12_size                           0x1
#define PSMC4DC12_value_mask                     0x10
#define PSMC4DC12_clear_mask                     0xEF

#define PSMC4DC13                                0x5
#define PSMC4DC13_address                        0xF24
#define PSMC4DC13_position                       0x5
#define PSMC4DC13_size                           0x1
#define PSMC4DC13_value_mask                     0x20
#define PSMC4DC13_clear_mask                     0xDF

#define PSMC4DC14                                0x6
#define PSMC4DC14_address                        0xF24
#define PSMC4DC14_position                       0x6
#define PSMC4DC14_size                           0x1
#define PSMC4DC14_value_mask                     0x40
#define PSMC4DC14_clear_mask                     0xBF

#define PSMC4DC15                                0x7
#define PSMC4DC15_address                        0xF24
#define PSMC4DC15_position                       0x7
#define PSMC4DC15_size                           0x1
#define PSMC4DC15_value_mask                     0x80
#define PSMC4DC15_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| PSMC4PRL                                                                        0xF25 |
#---------------------------------------------------------------------------------------#
| PSMC4PR7 | PSMC4PR6 | PSMC4PR5 | PSMC4PR4 | PSMC4PR3 | PSMC4PR2 | PSMC4PR1 | PSMC4PR0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PSMC4PRL                                 0x0
#define PSMC4PRL_address                         0xF25
#define PSMC4PRL_position                        0x0
#define PSMC4PRL_size                            0x8
#define PSMC4PRL_value_mask                      0xFF
#define PSMC4PRL_clear_mask                      0x0

#define PSMC4PR0                                 0x0
#define PSMC4PR0_address                         0xF25
#define PSMC4PR0_position                        0x0
#define PSMC4PR0_size                            0x1
#define PSMC4PR0_value_mask                      0x1
#define PSMC4PR0_clear_mask                      0xFE

#define PSMC4PR1                                 0x1
#define PSMC4PR1_address                         0xF25
#define PSMC4PR1_position                        0x1
#define PSMC4PR1_size                            0x1
#define PSMC4PR1_value_mask                      0x2
#define PSMC4PR1_clear_mask                      0xFD

#define PSMC4PR2                                 0x2
#define PSMC4PR2_address                         0xF25
#define PSMC4PR2_position                        0x2
#define PSMC4PR2_size                            0x1
#define PSMC4PR2_value_mask                      0x4
#define PSMC4PR2_clear_mask                      0xFB

#define PSMC4PR3                                 0x3
#define PSMC4PR3_address                         0xF25
#define PSMC4PR3_position                        0x3
#define PSMC4PR3_size                            0x1
#define PSMC4PR3_value_mask                      0x8
#define PSMC4PR3_clear_mask                      0xF7

#define PSMC4PR4                                 0x4
#define PSMC4PR4_address                         0xF25
#define PSMC4PR4_position                        0x4
#define PSMC4PR4_size                            0x1
#define PSMC4PR4_value_mask                      0x10
#define PSMC4PR4_clear_mask                      0xEF

#define PSMC4PR5                                 0x5
#define PSMC4PR5_address                         0xF25
#define PSMC4PR5_position                        0x5
#define PSMC4PR5_size                            0x1
#define PSMC4PR5_value_mask                      0x20
#define PSMC4PR5_clear_mask                      0xDF

#define PSMC4PR6                                 0x6
#define PSMC4PR6_address                         0xF25
#define PSMC4PR6_position                        0x6
#define PSMC4PR6_size                            0x1
#define PSMC4PR6_value_mask                      0x40
#define PSMC4PR6_clear_mask                      0xBF

#define PSMC4PR7                                 0x7
#define PSMC4PR7_address                         0xF25
#define PSMC4PR7_position                        0x7
#define PSMC4PR7_size                            0x1
#define PSMC4PR7_value_mask                      0x80
#define PSMC4PR7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| PSMC4PRH                                                                              0xF26 |
#---------------------------------------------------------------------------------------------#
| PSMC4PR15 | PSMC4PR14 | PSMC4PR13 | PSMC4PR12 | PSMC4PR11 | PSMC4PR10 | PSMC4PR9 | PSMC4PR8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define PSMC4PRH                                 0x0
#define PSMC4PRH_address                         0xF26
#define PSMC4PRH_position                        0x0
#define PSMC4PRH_size                            0x8
#define PSMC4PRH_value_mask                      0xFF
#define PSMC4PRH_clear_mask                      0x0

#define PSMC4PR8                                 0x0
#define PSMC4PR8_address                         0xF26
#define PSMC4PR8_position                        0x0
#define PSMC4PR8_size                            0x1
#define PSMC4PR8_value_mask                      0x1
#define PSMC4PR8_clear_mask                      0xFE

#define PSMC4PR9                                 0x1
#define PSMC4PR9_address                         0xF26
#define PSMC4PR9_position                        0x1
#define PSMC4PR9_size                            0x1
#define PSMC4PR9_value_mask                      0x2
#define PSMC4PR9_clear_mask                      0xFD

#define PSMC4PR10                                0x2
#define PSMC4PR10_address                        0xF26
#define PSMC4PR10_position                       0x2
#define PSMC4PR10_size                           0x1
#define PSMC4PR10_value_mask                     0x4
#define PSMC4PR10_clear_mask                     0xFB

#define PSMC4PR11                                0x3
#define PSMC4PR11_address                        0xF26
#define PSMC4PR11_position                       0x3
#define PSMC4PR11_size                           0x1
#define PSMC4PR11_value_mask                     0x8
#define PSMC4PR11_clear_mask                     0xF7

#define PSMC4PR12                                0x4
#define PSMC4PR12_address                        0xF26
#define PSMC4PR12_position                       0x4
#define PSMC4PR12_size                           0x1
#define PSMC4PR12_value_mask                     0x10
#define PSMC4PR12_clear_mask                     0xEF

#define PSMC4PR13                                0x5
#define PSMC4PR13_address                        0xF26
#define PSMC4PR13_position                       0x5
#define PSMC4PR13_size                           0x1
#define PSMC4PR13_value_mask                     0x20
#define PSMC4PR13_clear_mask                     0xDF

#define PSMC4PR14                                0x6
#define PSMC4PR14_address                        0xF26
#define PSMC4PR14_position                       0x6
#define PSMC4PR14_size                           0x1
#define PSMC4PR14_value_mask                     0x40
#define PSMC4PR14_clear_mask                     0xBF

#define PSMC4PR15                                0x7
#define PSMC4PR15_address                        0xF26
#define PSMC4PR15_position                       0x7
#define PSMC4PR15_size                           0x1
#define PSMC4PR15_value_mask                     0x80
#define PSMC4PR15_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| PSMC4TMRL                                                                               0xF27 |
#-----------------------------------------------------------------------------------------------#
| PSMC4TMR7 | PSMC4TMR6 | PSMC4TMR5 | PSMC4TMR4 | PSMC4TMR3 | PSMC4TMR2 | PSMC4TMR1 | PSMC4TMR0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PSMC4TMRL                                0x0
#define PSMC4TMRL_address                        0xF27
#define PSMC4TMRL_position                       0x0
#define PSMC4TMRL_size                           0x8
#define PSMC4TMRL_value_mask                     0xFF
#define PSMC4TMRL_clear_mask                     0x0

#define PSMC4TMR0                                0x0
#define PSMC4TMR0_address                        0xF27
#define PSMC4TMR0_position                       0x0
#define PSMC4TMR0_size                           0x1
#define PSMC4TMR0_value_mask                     0x1
#define PSMC4TMR0_clear_mask                     0xFE

#define PSMC4TMR1                                0x1
#define PSMC4TMR1_address                        0xF27
#define PSMC4TMR1_position                       0x1
#define PSMC4TMR1_size                           0x1
#define PSMC4TMR1_value_mask                     0x2
#define PSMC4TMR1_clear_mask                     0xFD

#define PSMC4TMR2                                0x2
#define PSMC4TMR2_address                        0xF27
#define PSMC4TMR2_position                       0x2
#define PSMC4TMR2_size                           0x1
#define PSMC4TMR2_value_mask                     0x4
#define PSMC4TMR2_clear_mask                     0xFB

#define PSMC4TMR3                                0x3
#define PSMC4TMR3_address                        0xF27
#define PSMC4TMR3_position                       0x3
#define PSMC4TMR3_size                           0x1
#define PSMC4TMR3_value_mask                     0x8
#define PSMC4TMR3_clear_mask                     0xF7

#define PSMC4TMR4                                0x4
#define PSMC4TMR4_address                        0xF27
#define PSMC4TMR4_position                       0x4
#define PSMC4TMR4_size                           0x1
#define PSMC4TMR4_value_mask                     0x10
#define PSMC4TMR4_clear_mask                     0xEF

#define PSMC4TMR5                                0x5
#define PSMC4TMR5_address                        0xF27
#define PSMC4TMR5_position                       0x5
#define PSMC4TMR5_size                           0x1
#define PSMC4TMR5_value_mask                     0x20
#define PSMC4TMR5_clear_mask                     0xDF

#define PSMC4TMR6                                0x6
#define PSMC4TMR6_address                        0xF27
#define PSMC4TMR6_position                       0x6
#define PSMC4TMR6_size                           0x1
#define PSMC4TMR6_value_mask                     0x40
#define PSMC4TMR6_clear_mask                     0xBF

#define PSMC4TMR7                                0x7
#define PSMC4TMR7_address                        0xF27
#define PSMC4TMR7_position                       0x7
#define PSMC4TMR7_size                           0x1
#define PSMC4TMR7_value_mask                     0x80
#define PSMC4TMR7_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------------#
| PSMC4TMRH                                                                                     0xF28 |
#-----------------------------------------------------------------------------------------------------#
| PSMC4TMR15 | PSMC4TMR14 | PSMC4TMR13 | PSMC4TMR12 | PSMC4TMR11 | PSMC4TMR10 | PSMC4TMR9 | PSMC4TMR8 |
#-----------------------------------------------------------------------------------------------------#
| 7          | 6          | 5          | 4          | 3          | 2          | 1         | 0         |
#----------------------------------------------------------------------------------------------------*/

#define PSMC4TMRH                                0x0
#define PSMC4TMRH_address                        0xF28
#define PSMC4TMRH_position                       0x0
#define PSMC4TMRH_size                           0x8
#define PSMC4TMRH_value_mask                     0xFF
#define PSMC4TMRH_clear_mask                     0x0

#define PSMC4TMR8                                0x0
#define PSMC4TMR8_address                        0xF28
#define PSMC4TMR8_position                       0x0
#define PSMC4TMR8_size                           0x1
#define PSMC4TMR8_value_mask                     0x1
#define PSMC4TMR8_clear_mask                     0xFE

#define PSMC4TMR9                                0x1
#define PSMC4TMR9_address                        0xF28
#define PSMC4TMR9_position                       0x1
#define PSMC4TMR9_size                           0x1
#define PSMC4TMR9_value_mask                     0x2
#define PSMC4TMR9_clear_mask                     0xFD

#define PSMC4TMR10                               0x2
#define PSMC4TMR10_address                       0xF28
#define PSMC4TMR10_position                      0x2
#define PSMC4TMR10_size                          0x1
#define PSMC4TMR10_value_mask                    0x4
#define PSMC4TMR10_clear_mask                    0xFB

#define PSMC4TMR11                               0x3
#define PSMC4TMR11_address                       0xF28
#define PSMC4TMR11_position                      0x3
#define PSMC4TMR11_size                          0x1
#define PSMC4TMR11_value_mask                    0x8
#define PSMC4TMR11_clear_mask                    0xF7

#define PSMC4TMR12                               0x4
#define PSMC4TMR12_address                       0xF28
#define PSMC4TMR12_position                      0x4
#define PSMC4TMR12_size                          0x1
#define PSMC4TMR12_value_mask                    0x10
#define PSMC4TMR12_clear_mask                    0xEF

#define PSMC4TMR13                               0x5
#define PSMC4TMR13_address                       0xF28
#define PSMC4TMR13_position                      0x5
#define PSMC4TMR13_size                          0x1
#define PSMC4TMR13_value_mask                    0x20
#define PSMC4TMR13_clear_mask                    0xDF

#define PSMC4TMR14                               0x6
#define PSMC4TMR14_address                       0xF28
#define PSMC4TMR14_position                      0x6
#define PSMC4TMR14_size                          0x1
#define PSMC4TMR14_value_mask                    0x40
#define PSMC4TMR14_clear_mask                    0xBF

#define PSMC4TMR15                               0x7
#define PSMC4TMR15_address                       0xF28
#define PSMC4TMR15_position                      0x7
#define PSMC4TMR15_size                          0x1
#define PSMC4TMR15_value_mask                    0x80
#define PSMC4TMR15_clear_mask                    0x7F


/*----------------------------------------------------------------------------------------------#
| PSMC4DBR                                                                                0xF29 |
#-----------------------------------------------------------------------------------------------#
| PSMC4DBR7 | PSMC4DBR6 | PSMC4DBR5 | PSMC4DBR4 | PSMC4DBR3 | PSMC4DBR2 | PSMC4DBR1 | PSMC4DBR0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PSMC4DBR                                 0x0
#define PSMC4DBR_address                         0xF29
#define PSMC4DBR_position                        0x0
#define PSMC4DBR_size                            0x8
#define PSMC4DBR_value_mask                      0xFF
#define PSMC4DBR_clear_mask                      0x0

#define PSMC4DBR0                                0x0
#define PSMC4DBR0_address                        0xF29
#define PSMC4DBR0_position                       0x0
#define PSMC4DBR0_size                           0x1
#define PSMC4DBR0_value_mask                     0x1
#define PSMC4DBR0_clear_mask                     0xFE

#define PSMC4DBR1                                0x1
#define PSMC4DBR1_address                        0xF29
#define PSMC4DBR1_position                       0x1
#define PSMC4DBR1_size                           0x1
#define PSMC4DBR1_value_mask                     0x2
#define PSMC4DBR1_clear_mask                     0xFD

#define PSMC4DBR2                                0x2
#define PSMC4DBR2_address                        0xF29
#define PSMC4DBR2_position                       0x2
#define PSMC4DBR2_size                           0x1
#define PSMC4DBR2_value_mask                     0x4
#define PSMC4DBR2_clear_mask                     0xFB

#define PSMC4DBR3                                0x3
#define PSMC4DBR3_address                        0xF29
#define PSMC4DBR3_position                       0x3
#define PSMC4DBR3_size                           0x1
#define PSMC4DBR3_value_mask                     0x8
#define PSMC4DBR3_clear_mask                     0xF7

#define PSMC4DBR4                                0x4
#define PSMC4DBR4_address                        0xF29
#define PSMC4DBR4_position                       0x4
#define PSMC4DBR4_size                           0x1
#define PSMC4DBR4_value_mask                     0x10
#define PSMC4DBR4_clear_mask                     0xEF

#define PSMC4DBR5                                0x5
#define PSMC4DBR5_address                        0xF29
#define PSMC4DBR5_position                       0x5
#define PSMC4DBR5_size                           0x1
#define PSMC4DBR5_value_mask                     0x20
#define PSMC4DBR5_clear_mask                     0xDF

#define PSMC4DBR6                                0x6
#define PSMC4DBR6_address                        0xF29
#define PSMC4DBR6_position                       0x6
#define PSMC4DBR6_size                           0x1
#define PSMC4DBR6_value_mask                     0x40
#define PSMC4DBR6_clear_mask                     0xBF

#define PSMC4DBR7                                0x7
#define PSMC4DBR7_address                        0xF29
#define PSMC4DBR7_position                       0x7
#define PSMC4DBR7_size                           0x1
#define PSMC4DBR7_value_mask                     0x80
#define PSMC4DBR7_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| PSMC4DBF                                                                                0xF2A |
#-----------------------------------------------------------------------------------------------#
| PSMC4DBF7 | PSMC4DBF6 | PSMC4DBF5 | PSMC4DBF4 | PSMC4DBF3 | PSMC4DBF2 | PSMC4DBF1 | PSMC4DBF0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PSMC4DBF                                 0x0
#define PSMC4DBF_address                         0xF2A
#define PSMC4DBF_position                        0x0
#define PSMC4DBF_size                            0x8
#define PSMC4DBF_value_mask                      0xFF
#define PSMC4DBF_clear_mask                      0x0

#define PSMC4DBF0                                0x0
#define PSMC4DBF0_address                        0xF2A
#define PSMC4DBF0_position                       0x0
#define PSMC4DBF0_size                           0x1
#define PSMC4DBF0_value_mask                     0x1
#define PSMC4DBF0_clear_mask                     0xFE

#define PSMC4DBF1                                0x1
#define PSMC4DBF1_address                        0xF2A
#define PSMC4DBF1_position                       0x1
#define PSMC4DBF1_size                           0x1
#define PSMC4DBF1_value_mask                     0x2
#define PSMC4DBF1_clear_mask                     0xFD

#define PSMC4DBF2                                0x2
#define PSMC4DBF2_address                        0xF2A
#define PSMC4DBF2_position                       0x2
#define PSMC4DBF2_size                           0x1
#define PSMC4DBF2_value_mask                     0x4
#define PSMC4DBF2_clear_mask                     0xFB

#define PSMC4DBF3                                0x3
#define PSMC4DBF3_address                        0xF2A
#define PSMC4DBF3_position                       0x3
#define PSMC4DBF3_size                           0x1
#define PSMC4DBF3_value_mask                     0x8
#define PSMC4DBF3_clear_mask                     0xF7

#define PSMC4DBF4                                0x4
#define PSMC4DBF4_address                        0xF2A
#define PSMC4DBF4_position                       0x4
#define PSMC4DBF4_size                           0x1
#define PSMC4DBF4_value_mask                     0x10
#define PSMC4DBF4_clear_mask                     0xEF

#define PSMC4DBF5                                0x5
#define PSMC4DBF5_address                        0xF2A
#define PSMC4DBF5_position                       0x5
#define PSMC4DBF5_size                           0x1
#define PSMC4DBF5_value_mask                     0x20
#define PSMC4DBF5_clear_mask                     0xDF

#define PSMC4DBF6                                0x6
#define PSMC4DBF6_address                        0xF2A
#define PSMC4DBF6_position                       0x6
#define PSMC4DBF6_size                           0x1
#define PSMC4DBF6_value_mask                     0x40
#define PSMC4DBF6_clear_mask                     0xBF

#define PSMC4DBF7                                0x7
#define PSMC4DBF7_address                        0xF2A
#define PSMC4DBF7_position                       0x7
#define PSMC4DBF7_size                           0x1
#define PSMC4DBF7_value_mask                     0x80
#define PSMC4DBF7_clear_mask                     0x7F


/*------------------------------------------------------------------------------------------------------#
| PSMC4BLKR                                                                                       0xF2B |
#-------------------------------------------------------------------------------------------------------#
| PSMC4BLKR7 | PSMC4BLKR6 | PSMC4BLKR5 | PSMC4BLKR4 | PSMC4BLKR3 | PSMC4BLKR2 | PSMC4BLKR1 | PSMC4BLKR0 |
#-------------------------------------------------------------------------------------------------------#
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
#------------------------------------------------------------------------------------------------------*/

#define PSMC4BLKR                                0x0
#define PSMC4BLKR_address                        0xF2B
#define PSMC4BLKR_position                       0x0
#define PSMC4BLKR_size                           0x8
#define PSMC4BLKR_value_mask                     0xFF
#define PSMC4BLKR_clear_mask                     0x0

#define PSMC4BLKR0                               0x0
#define PSMC4BLKR0_address                       0xF2B
#define PSMC4BLKR0_position                      0x0
#define PSMC4BLKR0_size                          0x1
#define PSMC4BLKR0_value_mask                    0x1
#define PSMC4BLKR0_clear_mask                    0xFE

#define PSMC4BLKR1                               0x1
#define PSMC4BLKR1_address                       0xF2B
#define PSMC4BLKR1_position                      0x1
#define PSMC4BLKR1_size                          0x1
#define PSMC4BLKR1_value_mask                    0x2
#define PSMC4BLKR1_clear_mask                    0xFD

#define PSMC4BLKR2                               0x2
#define PSMC4BLKR2_address                       0xF2B
#define PSMC4BLKR2_position                      0x2
#define PSMC4BLKR2_size                          0x1
#define PSMC4BLKR2_value_mask                    0x4
#define PSMC4BLKR2_clear_mask                    0xFB

#define PSMC4BLKR3                               0x3
#define PSMC4BLKR3_address                       0xF2B
#define PSMC4BLKR3_position                      0x3
#define PSMC4BLKR3_size                          0x1
#define PSMC4BLKR3_value_mask                    0x8
#define PSMC4BLKR3_clear_mask                    0xF7

#define PSMC4BLKR4                               0x4
#define PSMC4BLKR4_address                       0xF2B
#define PSMC4BLKR4_position                      0x4
#define PSMC4BLKR4_size                          0x1
#define PSMC4BLKR4_value_mask                    0x10
#define PSMC4BLKR4_clear_mask                    0xEF

#define PSMC4BLKR5                               0x5
#define PSMC4BLKR5_address                       0xF2B
#define PSMC4BLKR5_position                      0x5
#define PSMC4BLKR5_size                          0x1
#define PSMC4BLKR5_value_mask                    0x20
#define PSMC4BLKR5_clear_mask                    0xDF

#define PSMC4BLKR6                               0x6
#define PSMC4BLKR6_address                       0xF2B
#define PSMC4BLKR6_position                      0x6
#define PSMC4BLKR6_size                          0x1
#define PSMC4BLKR6_value_mask                    0x40
#define PSMC4BLKR6_clear_mask                    0xBF

#define PSMC4BLKR7                               0x7
#define PSMC4BLKR7_address                       0xF2B
#define PSMC4BLKR7_position                      0x7
#define PSMC4BLKR7_size                          0x1
#define PSMC4BLKR7_value_mask                    0x80
#define PSMC4BLKR7_clear_mask                    0x7F


/*------------------------------------------------------------------------------------------------------#
| PSMC4BLKF                                                                                       0xF2C |
#-------------------------------------------------------------------------------------------------------#
| PSMC4BLKF7 | PSMC4BLKF6 | PSMC4BLKF5 | PSMC4BLKF4 | PSMC4BLKF3 | PSMC4BLKF2 | PSMC4BLKF1 | PSMC4BLKF0 |
#-------------------------------------------------------------------------------------------------------#
| 7          | 6          | 5          | 4          | 3          | 2          | 1          | 0          |
#------------------------------------------------------------------------------------------------------*/

#define PSMC4BLKF                                0x0
#define PSMC4BLKF_address                        0xF2C
#define PSMC4BLKF_position                       0x0
#define PSMC4BLKF_size                           0x8
#define PSMC4BLKF_value_mask                     0xFF
#define PSMC4BLKF_clear_mask                     0x0

#define PSMC4BLKF0                               0x0
#define PSMC4BLKF0_address                       0xF2C
#define PSMC4BLKF0_position                      0x0
#define PSMC4BLKF0_size                          0x1
#define PSMC4BLKF0_value_mask                    0x1
#define PSMC4BLKF0_clear_mask                    0xFE

#define PSMC4BLKF1                               0x1
#define PSMC4BLKF1_address                       0xF2C
#define PSMC4BLKF1_position                      0x1
#define PSMC4BLKF1_size                          0x1
#define PSMC4BLKF1_value_mask                    0x2
#define PSMC4BLKF1_clear_mask                    0xFD

#define PSMC4BLKF2                               0x2
#define PSMC4BLKF2_address                       0xF2C
#define PSMC4BLKF2_position                      0x2
#define PSMC4BLKF2_size                          0x1
#define PSMC4BLKF2_value_mask                    0x4
#define PSMC4BLKF2_clear_mask                    0xFB

#define PSMC4BLKF3                               0x3
#define PSMC4BLKF3_address                       0xF2C
#define PSMC4BLKF3_position                      0x3
#define PSMC4BLKF3_size                          0x1
#define PSMC4BLKF3_value_mask                    0x8
#define PSMC4BLKF3_clear_mask                    0xF7

#define PSMC4BLKF4                               0x4
#define PSMC4BLKF4_address                       0xF2C
#define PSMC4BLKF4_position                      0x4
#define PSMC4BLKF4_size                          0x1
#define PSMC4BLKF4_value_mask                    0x10
#define PSMC4BLKF4_clear_mask                    0xEF

#define PSMC4BLKF5                               0x5
#define PSMC4BLKF5_address                       0xF2C
#define PSMC4BLKF5_position                      0x5
#define PSMC4BLKF5_size                          0x1
#define PSMC4BLKF5_value_mask                    0x20
#define PSMC4BLKF5_clear_mask                    0xDF

#define PSMC4BLKF6                               0x6
#define PSMC4BLKF6_address                       0xF2C
#define PSMC4BLKF6_position                      0x6
#define PSMC4BLKF6_size                          0x1
#define PSMC4BLKF6_value_mask                    0x40
#define PSMC4BLKF6_clear_mask                    0xBF

#define PSMC4BLKF7                               0x7
#define PSMC4BLKF7_address                       0xF2C
#define PSMC4BLKF7_position                      0x7
#define PSMC4BLKF7_size                          0x1
#define PSMC4BLKF7_value_mask                    0x80
#define PSMC4BLKF7_clear_mask                    0x7F


/*--------------------------------------------------------------#
| PSMC4FFA                                                0xF2D |
#---------------------------------------------------------------#
| - | - | - | - | PSMC4FFA3 | PSMC4FFA2 | PSMC4FFA1 | PSMC4FFA0 |
#---------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3         | 2         | 1         | 0         |
#--------------------------------------------------------------*/

#define PSMC4FFA                                 0x0
#define PSMC4FFA_address                         0xF2D
#define PSMC4FFA_position                        0x0
#define PSMC4FFA_size                            0x8
#define PSMC4FFA_value_mask                      0xFF
#define PSMC4FFA_clear_mask                      0x0

#define PSMC4FFA0                                0x0
#define PSMC4FFA0_address                        0xF2D
#define PSMC4FFA0_position                       0x0
#define PSMC4FFA0_size                           0x1
#define PSMC4FFA0_value_mask                     0x1
#define PSMC4FFA0_clear_mask                     0xFE

#define PSMC4FFA1                                0x1
#define PSMC4FFA1_address                        0xF2D
#define PSMC4FFA1_position                       0x1
#define PSMC4FFA1_size                           0x1
#define PSMC4FFA1_value_mask                     0x2
#define PSMC4FFA1_clear_mask                     0xFD

#define PSMC4FFA2                                0x2
#define PSMC4FFA2_address                        0xF2D
#define PSMC4FFA2_position                       0x2
#define PSMC4FFA2_size                           0x1
#define PSMC4FFA2_value_mask                     0x4
#define PSMC4FFA2_clear_mask                     0xFB

#define PSMC4FFA3                                0x3
#define PSMC4FFA3_address                        0xF2D
#define PSMC4FFA3_position                       0x3
#define PSMC4FFA3_size                           0x1
#define PSMC4FFA3_value_mask                     0x8
#define PSMC4FFA3_clear_mask                     0xF7


/*----------------------------------------#
| PSMC4STR0                         0xF2E |
#-----------------------------------------#
| - | - | - | - | - | - | P4STRB | P4STRA |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1      | 0      |
#----------------------------------------*/

#define PSMC4STR0                                0x0
#define PSMC4STR0_address                        0xF2E
#define PSMC4STR0_position                       0x0
#define PSMC4STR0_size                           0x8
#define PSMC4STR0_value_mask                     0xFF
#define PSMC4STR0_clear_mask                     0x0

#define P4STRA                                   0x0
#define P4STRA_address                           0xF2E
#define P4STRA_position                          0x0
#define P4STRA_size                              0x1
#define P4STRA_value_mask                        0x1
#define P4STRA_clear_mask                        0xFE

#define P4STRB                                   0x1
#define P4STRB_address                           0xF2E
#define P4STRB_position                          0x1
#define P4STRB_size                              0x1
#define P4STRB_value_mask                        0x2
#define P4STRB_clear_mask                        0xFD


/*------------------------------------------------#
| PSMC4STR1                                 0xF2F |
#-------------------------------------------------#
| P4SSYNC | - | - | - | - | - | P4LSMEN | P4HSMEN |
#-------------------------------------------------#
| 7       | 6 | 5 | 4 | 3 | 2 | 1       | 0       |
#------------------------------------------------*/

#define PSMC4STR1                                0x0
#define PSMC4STR1_address                        0xF2F
#define PSMC4STR1_position                       0x0
#define PSMC4STR1_size                           0x8
#define PSMC4STR1_value_mask                     0xFF
#define PSMC4STR1_clear_mask                     0x0

#define P4HSMEN                                  0x0
#define P4HSMEN_address                          0xF2F
#define P4HSMEN_position                         0x0
#define P4HSMEN_size                             0x1
#define P4HSMEN_value_mask                       0x1
#define P4HSMEN_clear_mask                       0xFE

#define P4LSMEN                                  0x1
#define P4LSMEN_address                          0xF2F
#define P4LSMEN_position                         0x1
#define P4LSMEN_size                             0x1
#define P4LSMEN_value_mask                       0x2
#define P4LSMEN_clear_mask                       0xFD

#define P4SSYNC                                  0x7
#define P4SSYNC_address                          0xF2F
#define P4SSYNC_position                         0x7
#define P4SSYNC_size                             0x1
#define P4SSYNC_value_mask                       0x80
#define P4SSYNC_clear_mask                       0x7F


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

#endif // _PIC16LF1788_H_
