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

#ifndef _PIC16LF1716_H_
#define _PIC16LF1716_H_


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


/*------------------------------------------------------------#
| PIR2                                                   0x12 |
#-------------------------------------------------------------#
| OSFIF | C2IF | C1IF | - | BCL1IF | TMR6IF | TMR4IF | CCP2IF |
#-------------------------------------------------------------#
| 7     | 6    | 5    | 4 | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

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

#define TMR4IF                                   0x1
#define TMR4IF_address                           0x012
#define TMR4IF_position                          0x1
#define TMR4IF_size                              0x1
#define TMR4IF_value_mask                        0x2
#define TMR4IF_clear_mask                        0xFD

#define TMR6IF                                   0x2
#define TMR6IF_address                           0x012
#define TMR6IF_position                          0x2
#define TMR6IF_size                              0x1
#define TMR6IF_value_mask                        0x4
#define TMR6IF_clear_mask                        0xFB

#define BCL1IF                                   0x3
#define BCL1IF_address                           0x012
#define BCL1IF_position                          0x3
#define BCL1IF_size                              0x1
#define BCL1IF_value_mask                        0x8
#define BCL1IF_clear_mask                        0xF7

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


/*--------------------------------------------------------------#
| PIR3                                                     0x13 |
#---------------------------------------------------------------#
| - | NCOIF | COGIF | ZCDIF | CLC4IF | CLC3IF | CLC2IF | CLC1IF |
#---------------------------------------------------------------#
| 7 | 6     | 5     | 4     | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------*/

#define PIR3                                     0x0
#define PIR3_address                             0x013
#define PIR3_position                            0x0
#define PIR3_size                                0x8
#define PIR3_value_mask                          0xFF
#define PIR3_clear_mask                          0x0

#define CLC1IF                                   0x0
#define CLC1IF_address                           0x013
#define CLC1IF_position                          0x0
#define CLC1IF_size                              0x1
#define CLC1IF_value_mask                        0x1
#define CLC1IF_clear_mask                        0xFE

#define CLC2IF                                   0x1
#define CLC2IF_address                           0x013
#define CLC2IF_position                          0x1
#define CLC2IF_size                              0x1
#define CLC2IF_value_mask                        0x2
#define CLC2IF_clear_mask                        0xFD

#define CLC3IF                                   0x2
#define CLC3IF_address                           0x013
#define CLC3IF_position                          0x2
#define CLC3IF_size                              0x1
#define CLC3IF_value_mask                        0x4
#define CLC3IF_clear_mask                        0xFB

#define CLC4IF                                   0x3
#define CLC4IF_address                           0x013
#define CLC4IF_position                          0x3
#define CLC4IF_size                              0x1
#define CLC4IF_value_mask                        0x8
#define CLC4IF_clear_mask                        0xF7

#define ZCDIF                                    0x4
#define ZCDIF_address                            0x013
#define ZCDIF_position                           0x4
#define ZCDIF_size                               0x1
#define ZCDIF_value_mask                         0x10
#define ZCDIF_clear_mask                         0xEF

#define COGIF                                    0x5
#define COGIF_address                            0x013
#define COGIF_position                           0x5
#define COGIF_size                               0x1
#define COGIF_value_mask                         0x20
#define COGIF_clear_mask                         0xDF

#define NCOIF                                    0x6
#define NCOIF_address                            0x013
#define NCOIF_position                           0x6
#define NCOIF_size                               0x1
#define NCOIF_value_mask                         0x40
#define NCOIF_clear_mask                         0xBF


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


/*-----------------------------------#
| TRISE                         0x90 |
#------------------------------------#
| - | - | - | - | TRISE3 | - | - | - |
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


/*------------------------------------------------------------#
| PIE2                                                   0x92 |
#-------------------------------------------------------------#
| OSFIE | C2IE | C1IE | - | BCL1IE | TMR6IE | TMR4IE | CCP2IE |
#-------------------------------------------------------------#
| 7     | 6    | 5    | 4 | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

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

#define TMR4IE                                   0x1
#define TMR4IE_address                           0x092
#define TMR4IE_position                          0x1
#define TMR4IE_size                              0x1
#define TMR4IE_value_mask                        0x2
#define TMR4IE_clear_mask                        0xFD

#define TMR6IE                                   0x2
#define TMR6IE_address                           0x092
#define TMR6IE_position                          0x2
#define TMR6IE_size                              0x1
#define TMR6IE_value_mask                        0x4
#define TMR6IE_clear_mask                        0xFB

#define BCL1IE                                   0x3
#define BCL1IE_address                           0x092
#define BCL1IE_position                          0x3
#define BCL1IE_size                              0x1
#define BCL1IE_value_mask                        0x8
#define BCL1IE_clear_mask                        0xF7

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


/*--------------------------------------------------------------#
| PIE3                                                     0x93 |
#---------------------------------------------------------------#
| - | NCOIE | COGIE | ZCDIE | CLC4IE | CLC3IE | CLC2IE | CLC1IE |
#---------------------------------------------------------------#
| 7 | 6     | 5     | 4     | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------*/

#define PIE3                                     0x0
#define PIE3_address                             0x093
#define PIE3_position                            0x0
#define PIE3_size                                0x8
#define PIE3_value_mask                          0xFF
#define PIE3_clear_mask                          0x0

#define CLC1IE                                   0x0
#define CLC1IE_address                           0x093
#define CLC1IE_position                          0x0
#define CLC1IE_size                              0x1
#define CLC1IE_value_mask                        0x1
#define CLC1IE_clear_mask                        0xFE

#define CLC2IE                                   0x1
#define CLC2IE_address                           0x093
#define CLC2IE_position                          0x1
#define CLC2IE_size                              0x1
#define CLC2IE_value_mask                        0x2
#define CLC2IE_clear_mask                        0xFD

#define CLC3IE                                   0x2
#define CLC3IE_address                           0x093
#define CLC3IE_position                          0x2
#define CLC3IE_size                              0x1
#define CLC3IE_value_mask                        0x4
#define CLC3IE_clear_mask                        0xFB

#define CLC4IE                                   0x3
#define CLC4IE_address                           0x093
#define CLC4IE_position                          0x3
#define CLC4IE_size                              0x1
#define CLC4IE_value_mask                        0x8
#define CLC4IE_clear_mask                        0xF7

#define ZCDIE                                    0x4
#define ZCDIE_address                            0x093
#define ZCDIE_position                           0x4
#define ZCDIE_size                               0x1
#define ZCDIE_value_mask                         0x10
#define ZCDIE_clear_mask                         0xEF

#define COGIE                                    0x5
#define COGIE_address                            0x093
#define COGIE_position                           0x5
#define COGIE_size                               0x1
#define COGIE_value_mask                         0x20
#define COGIE_clear_mask                         0xDF

#define NCOIE                                    0x6
#define NCOIE_address                            0x093
#define NCOIE_position                           0x6
#define NCOIE_size                               0x1
#define NCOIE_value_mask                         0x40
#define NCOIE_clear_mask                         0xBF


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


/*-----------------------------------------------------------------#
| OSCSTAT                                                     0x9A |
#------------------------------------------------------------------#
| SOSCR | PLLR | OSTS | HFIOFR | HFIOFL | MFIOFR | LFIOFR | HFIOFS |
#------------------------------------------------------------------#
| 7     | 6    | 5    | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

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

#define SOSCR                                    0x7
#define SOSCR_address                            0x09A
#define SOSCR_position                           0x7
#define SOSCR_size                               0x1
#define SOSCR_value_mask                         0x80
#define SOSCR_clear_mask                         0x7F


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


/*--------------------------------------------------#
| ADCON1                                       0x9E |
#---------------------------------------------------#
| ADFM | ADCS      | - | ADNREF | ADPREF1 | ADPREF0 |
#---------------------------------------------------#
| 7    | 6 | 5 | 4 | 3 | 2      | 1       | 0       |
#--------------------------------------------------*/

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

#define ADCS                                     0x4
#define ADCS_address                             0x09E
#define ADCS_position                            0x4
#define ADCS_size                                0x3
#define ADCS_value_mask                          0x70
#define ADCS_clear_mask                          0x8F

#define ADFM                                     0x7
#define ADFM_address                             0x09E
#define ADFM_position                            0x7
#define ADFM_size                                0x1
#define ADFM_value_mask                          0x80
#define ADFM_clear_mask                          0x7F


/*----------------------------------------------------------#
| ADCON2                                               0x9F |
#-----------------------------------------------------------#
| TRIGSEL3 | TRIGSEL2 | TRIGSEL1 | TRIGSEL0 | - | - | - | - |
#-----------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3 | 2 | 1 | 0 |
#----------------------------------------------------------*/

#define ADCON2                                   0x0
#define ADCON2_address                           0x09F
#define ADCON2_position                          0x0
#define ADCON2_size                              0x8
#define ADCON2_value_mask                        0xFF
#define ADCON2_clear_mask                        0x0

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


/*---------------------------------------------------------#
| CM1CON0                                            0x111 |
#----------------------------------------------------------#
| C1ON | C1OUT | - | C1POL | C1ZLF | C1SP | C1HYS | C1SYNC |
#----------------------------------------------------------#
| 7    | 6     | 5 | 4     | 3     | 2    | 1     | 0      |
#---------------------------------------------------------*/

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


/*---------------------------------------------------------#
| CM2CON0                                            0x113 |
#----------------------------------------------------------#
| C2ON | C2OUT | - | C2POL | C2ZLF | C2SP | C2HYS | C2SYNC |
#----------------------------------------------------------#
| 7    | 6     | 5 | 4     | 3     | 2    | 1     | 0      |
#---------------------------------------------------------*/

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


/*----------------------------------------#
| CMOUT                             0x115 |
#-----------------------------------------#
| - | - | - | - | - | - | MC2OUT | MC1OUT |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1      | 0      |
#----------------------------------------*/

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

#define CDAFVR                                   0x2
#define CDAFVR_address                           0x117
#define CDAFVR_position                          0x2
#define CDAFVR_size                              0x2
#define CDAFVR_value_mask                        0xC
#define CDAFVR_clear_mask                        0xF3

#define CDAFVR0                                  0x2
#define CDAFVR0_address                          0x117
#define CDAFVR0_position                         0x2
#define CDAFVR0_size                             0x1
#define CDAFVR0_value_mask                       0x4
#define CDAFVR0_clear_mask                       0xFB

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


/*-------------------------------------------------------------------------------------------#
| DAC1CON0                                                                             0x118 |
#--------------------------------------------------------------------------------------------#
| DAC1CON0_DACEN | - | DAC1OE1 | DAC1OE2 | DAC1CON0_DACPSS1 | DAC1PSS0 | - | DAC1CON0_DACNSS |
#--------------------------------------------------------------------------------------------#
| 7              | 6 | 5       | 4       | 3                | 2        | 1 | 0               |
#-------------------------------------------------------------------------------------------*/

#define DAC1CON0                                 0x0
#define DAC1CON0_address                         0x118
#define DAC1CON0_position                        0x0
#define DAC1CON0_size                            0x8
#define DAC1CON0_value_mask                      0xFF
#define DAC1CON0_clear_mask                      0x0

#define DAC1CON0_DACNSS                          0x0
#define DAC1CON0_DACNSS_address                  0x118
#define DAC1CON0_DACNSS_position                 0x0
#define DAC1CON0_DACNSS_size                     0x1
#define DAC1CON0_DACNSS_value_mask               0x1
#define DAC1CON0_DACNSS_clear_mask               0xFE

#define DAC1NSS                                  0x0
#define DAC1NSS_address                          0x118
#define DAC1NSS_position                         0x0
#define DAC1NSS_size                             0x1
#define DAC1NSS_value_mask                       0x1
#define DAC1NSS_clear_mask                       0xFE

#define DAC1PSS                                  0x2
#define DAC1PSS_address                          0x118
#define DAC1PSS_position                         0x2
#define DAC1PSS_size                             0x2
#define DAC1PSS_value_mask                       0xC
#define DAC1PSS_clear_mask                       0xF3

#define DAC1CON0_DACPSS                          0x2
#define DAC1CON0_DACPSS_address                  0x118
#define DAC1CON0_DACPSS_position                 0x2
#define DAC1CON0_DACPSS_size                     0x2
#define DAC1CON0_DACPSS_value_mask               0xC
#define DAC1CON0_DACPSS_clear_mask               0xF3

#define DAC1CON0_DACPSS0                         0x2
#define DAC1CON0_DACPSS0_address                 0x118
#define DAC1CON0_DACPSS0_position                0x2
#define DAC1CON0_DACPSS0_size                    0x1
#define DAC1CON0_DACPSS0_value_mask              0x4
#define DAC1CON0_DACPSS0_clear_mask              0xFB

#define DAC1PSS0                                 0x2
#define DAC1PSS0_address                         0x118
#define DAC1PSS0_position                        0x2
#define DAC1PSS0_size                            0x1
#define DAC1PSS0_value_mask                      0x4
#define DAC1PSS0_clear_mask                      0xFB

#define DAC1CON0_DACPSS1                         0x3
#define DAC1CON0_DACPSS1_address                 0x118
#define DAC1CON0_DACPSS1_position                0x3
#define DAC1CON0_DACPSS1_size                    0x1
#define DAC1CON0_DACPSS1_value_mask              0x8
#define DAC1CON0_DACPSS1_clear_mask              0xF7

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

#define DAC1CON0_DACOE1                          0x5
#define DAC1CON0_DACOE1_address                  0x118
#define DAC1CON0_DACOE1_position                 0x5
#define DAC1CON0_DACOE1_size                     0x1
#define DAC1CON0_DACOE1_value_mask               0x20
#define DAC1CON0_DACOE1_clear_mask               0xDF

#define DAC1CON0_DACEN                           0x7
#define DAC1CON0_DACEN_address                   0x118
#define DAC1CON0_DACEN_position                  0x7
#define DAC1CON0_DACEN_size                      0x1
#define DAC1CON0_DACEN_value_mask                0x80
#define DAC1CON0_DACEN_clear_mask                0x7F

#define DAC1EN                                   0x7
#define DAC1EN_address                           0x118
#define DAC1EN_position                          0x7
#define DAC1EN_size                              0x1
#define DAC1EN_value_mask                        0x80
#define DAC1EN_clear_mask                        0x7F


/*-----------------------------------------------------------------------------------------------------------#
| DAC1CON1                                                                                             0x119 |
#------------------------------------------------------------------------------------------------------------#
| DACR7 | DACR6 | DACR5 | DAC1CON1_DACR4 | DAC1CON1_DACR3 | DAC1CON1_DACR2 | DAC1CON1_DACR1 | DAC1CON1_DACR0 |
#------------------------------------------------------------------------------------------------------------#
| 7     | 6     | 5     | 4              | 3              | 2              | 1              | 0              |
#-----------------------------------------------------------------------------------------------------------*/

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

#define DAC1R0                                   0x0
#define DAC1R0_address                           0x119
#define DAC1R0_position                          0x0
#define DAC1R0_size                              0x1
#define DAC1R0_value_mask                        0x1
#define DAC1R0_clear_mask                        0xFE

#define DAC1CON1_DACR0                           0x0
#define DAC1CON1_DACR0_address                   0x119
#define DAC1CON1_DACR0_position                  0x0
#define DAC1CON1_DACR0_size                      0x1
#define DAC1CON1_DACR0_value_mask                0x1
#define DAC1CON1_DACR0_clear_mask                0xFE

#define DAC1R1                                   0x1
#define DAC1R1_address                           0x119
#define DAC1R1_position                          0x1
#define DAC1R1_size                              0x1
#define DAC1R1_value_mask                        0x2
#define DAC1R1_clear_mask                        0xFD

#define DAC1CON1_DACR1                           0x1
#define DAC1CON1_DACR1_address                   0x119
#define DAC1CON1_DACR1_position                  0x1
#define DAC1CON1_DACR1_size                      0x1
#define DAC1CON1_DACR1_value_mask                0x2
#define DAC1CON1_DACR1_clear_mask                0xFD

#define DAC1R2                                   0x2
#define DAC1R2_address                           0x119
#define DAC1R2_position                          0x2
#define DAC1R2_size                              0x1
#define DAC1R2_value_mask                        0x4
#define DAC1R2_clear_mask                        0xFB

#define DAC1CON1_DACR2                           0x2
#define DAC1CON1_DACR2_address                   0x119
#define DAC1CON1_DACR2_position                  0x2
#define DAC1CON1_DACR2_size                      0x1
#define DAC1CON1_DACR2_value_mask                0x4
#define DAC1CON1_DACR2_clear_mask                0xFB

#define DAC1R3                                   0x3
#define DAC1R3_address                           0x119
#define DAC1R3_position                          0x3
#define DAC1R3_size                              0x1
#define DAC1R3_value_mask                        0x8
#define DAC1R3_clear_mask                        0xF7

#define DAC1CON1_DACR3                           0x3
#define DAC1CON1_DACR3_address                   0x119
#define DAC1CON1_DACR3_position                  0x3
#define DAC1CON1_DACR3_size                      0x1
#define DAC1CON1_DACR3_value_mask                0x8
#define DAC1CON1_DACR3_clear_mask                0xF7

#define DAC1R4                                   0x4
#define DAC1R4_address                           0x119
#define DAC1R4_position                          0x4
#define DAC1R4_size                              0x1
#define DAC1R4_value_mask                        0x10
#define DAC1R4_clear_mask                        0xEF

#define DAC1CON1_DACR4                           0x4
#define DAC1CON1_DACR4_address                   0x119
#define DAC1CON1_DACR4_position                  0x4
#define DAC1CON1_DACR4_size                      0x1
#define DAC1CON1_DACR4_value_mask                0x10
#define DAC1CON1_DACR4_clear_mask                0xEF

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


/*-----------------------------------------------------------------------#
| DAC2CON0                                                         0x11A |
#------------------------------------------------------------------------#
| DAC2CON0_DACEN | - | DAC2OE1 | DAC2OE2 | DAC2PSS1 | DAC2PSS0 | - | NSS |
#------------------------------------------------------------------------#
| 7              | 6 | 5       | 4       | 3        | 2        | 1 | 0   |
#-----------------------------------------------------------------------*/

#define DAC2CON0                                 0x0
#define DAC2CON0_address                         0x11A
#define DAC2CON0_position                        0x0
#define DAC2CON0_size                            0x8
#define DAC2CON0_value_mask                      0xFF
#define DAC2CON0_clear_mask                      0x0

#define DAC2CON0_DACNSS                          0x0
#define DAC2CON0_DACNSS_address                  0x11A
#define DAC2CON0_DACNSS_position                 0x0
#define DAC2CON0_DACNSS_size                     0x1
#define DAC2CON0_DACNSS_value_mask               0x1
#define DAC2CON0_DACNSS_clear_mask               0xFE

#define DAC2NSS                                  0x0
#define DAC2NSS_address                          0x11A
#define DAC2NSS_position                         0x0
#define DAC2NSS_size                             0x1
#define DAC2NSS_value_mask                       0x1
#define DAC2NSS_clear_mask                       0xFE

#define NSS                                      0x0
#define NSS_address                              0x11A
#define NSS_position                             0x0
#define NSS_size                                 0x1
#define NSS_value_mask                           0x1
#define NSS_clear_mask                           0xFE

#define DAC2CON0_DACPSS0                         0x2
#define DAC2CON0_DACPSS0_address                 0x11A
#define DAC2CON0_DACPSS0_position                0x2
#define DAC2CON0_DACPSS0_size                    0x1
#define DAC2CON0_DACPSS0_value_mask              0x4
#define DAC2CON0_DACPSS0_clear_mask              0xFB

#define DAC2PSS0                                 0x2
#define DAC2PSS0_address                         0x11A
#define DAC2PSS0_position                        0x2
#define DAC2PSS0_size                            0x1
#define DAC2PSS0_value_mask                      0x4
#define DAC2PSS0_clear_mask                      0xFB

#define DAC2PSS                                  0x2
#define DAC2PSS_address                          0x11A
#define DAC2PSS_position                         0x2
#define DAC2PSS_size                             0x2
#define DAC2PSS_value_mask                       0xC
#define DAC2PSS_clear_mask                       0xF3

#define PSS0                                     0x2
#define PSS0_address                             0x11A
#define PSS0_position                            0x2
#define PSS0_size                                0x1
#define PSS0_value_mask                          0x4
#define PSS0_clear_mask                          0xFB

#define DAC2CON0_DACPSS                          0x2
#define DAC2CON0_DACPSS_address                  0x11A
#define DAC2CON0_DACPSS_position                 0x2
#define DAC2CON0_DACPSS_size                     0x2
#define DAC2CON0_DACPSS_value_mask               0xC
#define DAC2CON0_DACPSS_clear_mask               0xF3

#define PSS                                      0x2
#define PSS_address                              0x11A
#define PSS_position                             0x2
#define PSS_size                                 0x2
#define PSS_value_mask                           0xC
#define PSS_clear_mask                           0xF3

#define DAC2CON0_DACPSS1                         0x3
#define DAC2CON0_DACPSS1_address                 0x11A
#define DAC2CON0_DACPSS1_position                0x3
#define DAC2CON0_DACPSS1_size                    0x1
#define DAC2CON0_DACPSS1_value_mask              0x8
#define DAC2CON0_DACPSS1_clear_mask              0xF7

#define PSS1                                     0x3
#define PSS1_address                             0x11A
#define PSS1_position                            0x3
#define PSS1_size                                0x1
#define PSS1_value_mask                          0x8
#define PSS1_clear_mask                          0xF7

#define DAC2PSS1                                 0x3
#define DAC2PSS1_address                         0x11A
#define DAC2PSS1_position                        0x3
#define DAC2PSS1_size                            0x1
#define DAC2PSS1_value_mask                      0x8
#define DAC2PSS1_clear_mask                      0xF7

#define OE2                                      0x4
#define OE2_address                              0x11A
#define OE2_position                             0x4
#define OE2_size                                 0x1
#define OE2_value_mask                           0x10
#define OE2_clear_mask                           0xEF

#define DACOE2                                   0x4
#define DACOE2_address                           0x11A
#define DACOE2_position                          0x4
#define DACOE2_size                              0x1
#define DACOE2_value_mask                        0x10
#define DACOE2_clear_mask                        0xEF

#define DAC2OE2                                  0x4
#define DAC2OE2_address                          0x11A
#define DAC2OE2_position                         0x4
#define DAC2OE2_size                             0x1
#define DAC2OE2_value_mask                       0x10
#define DAC2OE2_clear_mask                       0xEF

#define OE1                                      0x5
#define OE1_address                              0x11A
#define OE1_position                             0x5
#define OE1_size                                 0x1
#define OE1_value_mask                           0x20
#define OE1_clear_mask                           0xDF

#define DAC2CON0_DACOE1                          0x5
#define DAC2CON0_DACOE1_address                  0x11A
#define DAC2CON0_DACOE1_position                 0x5
#define DAC2CON0_DACOE1_size                     0x1
#define DAC2CON0_DACOE1_value_mask               0x20
#define DAC2CON0_DACOE1_clear_mask               0xDF

#define DAC2OE1                                  0x5
#define DAC2OE1_address                          0x11A
#define DAC2OE1_position                         0x5
#define DAC2OE1_size                             0x1
#define DAC2OE1_value_mask                       0x20
#define DAC2OE1_clear_mask                       0xDF

#define DAC2EN                                   0x7
#define DAC2EN_address                           0x11A
#define DAC2EN_position                          0x7
#define DAC2EN_size                              0x1
#define DAC2EN_value_mask                        0x80
#define DAC2EN_clear_mask                        0x7F

#define DAC2CON0_DACEN                           0x7
#define DAC2CON0_DACEN_address                   0x11A
#define DAC2CON0_DACEN_position                  0x7
#define DAC2CON0_DACEN_size                      0x1
#define DAC2CON0_DACEN_value_mask                0x80
#define DAC2CON0_DACEN_clear_mask                0x7F

#define DAC2CON0_EN                              0x7
#define DAC2CON0_EN_address                      0x11A
#define DAC2CON0_EN_position                     0x7
#define DAC2CON0_EN_size                         0x1
#define DAC2CON0_EN_value_mask                   0x80
#define DAC2CON0_EN_clear_mask                   0x7F


/*-------------------------------------------------------------------------------------------------#
| DAC2REF                                                                                    0x11B |
#--------------------------------------------------------------------------------------------------#
| - | - | DAC2REF5 | DAC2REF_DACR4 | DAC2REF_DACR3 | DAC2REF_DACR2 | DAC2REF_DACR1 | DAC2REF_DACR0 |
#--------------------------------------------------------------------------------------------------#
| 7 | 6 | 5        | 4             | 3             | 2             | 1             | 0             |
#-------------------------------------------------------------------------------------------------*/

#define DAC2REF                                  0x0
#define DAC2REF_address                          0x11B
#define DAC2REF_position                         0x0
#define DAC2REF_size                             0x8
#define DAC2REF_value_mask                       0xFF
#define DAC2REF_clear_mask                       0x0

#define DAC2REF_DACR0                            0x0
#define DAC2REF_DACR0_address                    0x11B
#define DAC2REF_DACR0_position                   0x0
#define DAC2REF_DACR0_size                       0x1
#define DAC2REF_DACR0_value_mask                 0x1
#define DAC2REF_DACR0_clear_mask                 0xFE

#define REF0                                     0x0
#define REF0_address                             0x11B
#define REF0_position                            0x0
#define REF0_size                                0x1
#define REF0_value_mask                          0x1
#define REF0_clear_mask                          0xFE

#define DACR                                     0x0
#define DACR_address                             0x11B
#define DACR_position                            0x0
#define DACR_size                                0x5
#define DACR_value_mask                          0x1F
#define DACR_clear_mask                          0xE0

#define DAC2REF0                                 0x0
#define DAC2REF0_address                         0x11B
#define DAC2REF0_position                        0x0
#define DAC2REF0_size                            0x1
#define DAC2REF0_value_mask                      0x1
#define DAC2REF0_clear_mask                      0xFE

#define R0                                       0x0
#define R0_address                               0x11B
#define R0_position                              0x0
#define R0_size                                  0x1
#define R0_value_mask                            0x1
#define R0_clear_mask                            0xFE

#define DAC2R                                    0x0
#define DAC2R_address                            0x11B
#define DAC2R_position                           0x0
#define DAC2R_size                               0x5
#define DAC2R_value_mask                         0x1F
#define DAC2R_clear_mask                         0xE0

#define DAC2R0                                   0x0
#define DAC2R0_address                           0x11B
#define DAC2R0_position                          0x0
#define DAC2R0_size                              0x1
#define DAC2R0_value_mask                        0x1
#define DAC2R0_clear_mask                        0xFE

#define DAC2REF1                                 0x1
#define DAC2REF1_address                         0x11B
#define DAC2REF1_position                        0x1
#define DAC2REF1_size                            0x1
#define DAC2REF1_value_mask                      0x2
#define DAC2REF1_clear_mask                      0xFD

#define REF1                                     0x1
#define REF1_address                             0x11B
#define REF1_position                            0x1
#define REF1_size                                0x1
#define REF1_value_mask                          0x2
#define REF1_clear_mask                          0xFD

#define DAC2REF_DACR1                            0x1
#define DAC2REF_DACR1_address                    0x11B
#define DAC2REF_DACR1_position                   0x1
#define DAC2REF_DACR1_size                       0x1
#define DAC2REF_DACR1_value_mask                 0x2
#define DAC2REF_DACR1_clear_mask                 0xFD

#define R1                                       0x1
#define R1_address                               0x11B
#define R1_position                              0x1
#define R1_size                                  0x1
#define R1_value_mask                            0x2
#define R1_clear_mask                            0xFD

#define DAC2R1                                   0x1
#define DAC2R1_address                           0x11B
#define DAC2R1_position                          0x1
#define DAC2R1_size                              0x1
#define DAC2R1_value_mask                        0x2
#define DAC2R1_clear_mask                        0xFD

#define DAC2REF2                                 0x2
#define DAC2REF2_address                         0x11B
#define DAC2REF2_position                        0x2
#define DAC2REF2_size                            0x1
#define DAC2REF2_value_mask                      0x4
#define DAC2REF2_clear_mask                      0xFB

#define REF2                                     0x2
#define REF2_address                             0x11B
#define REF2_position                            0x2
#define REF2_size                                0x1
#define REF2_value_mask                          0x4
#define REF2_clear_mask                          0xFB

#define DAC2REF_DACR2                            0x2
#define DAC2REF_DACR2_address                    0x11B
#define DAC2REF_DACR2_position                   0x2
#define DAC2REF_DACR2_size                       0x1
#define DAC2REF_DACR2_value_mask                 0x4
#define DAC2REF_DACR2_clear_mask                 0xFB

#define R2                                       0x2
#define R2_address                               0x11B
#define R2_position                              0x2
#define R2_size                                  0x1
#define R2_value_mask                            0x4
#define R2_clear_mask                            0xFB

#define DAC2R2                                   0x2
#define DAC2R2_address                           0x11B
#define DAC2R2_position                          0x2
#define DAC2R2_size                              0x1
#define DAC2R2_value_mask                        0x4
#define DAC2R2_clear_mask                        0xFB

#define DAC2REF3                                 0x3
#define DAC2REF3_address                         0x11B
#define DAC2REF3_position                        0x3
#define DAC2REF3_size                            0x1
#define DAC2REF3_value_mask                      0x8
#define DAC2REF3_clear_mask                      0xF7

#define REF3                                     0x3
#define REF3_address                             0x11B
#define REF3_position                            0x3
#define REF3_size                                0x1
#define REF3_value_mask                          0x8
#define REF3_clear_mask                          0xF7

#define DAC2REF_DACR3                            0x3
#define DAC2REF_DACR3_address                    0x11B
#define DAC2REF_DACR3_position                   0x3
#define DAC2REF_DACR3_size                       0x1
#define DAC2REF_DACR3_value_mask                 0x8
#define DAC2REF_DACR3_clear_mask                 0xF7

#define R3                                       0x3
#define R3_address                               0x11B
#define R3_position                              0x3
#define R3_size                                  0x1
#define R3_value_mask                            0x8
#define R3_clear_mask                            0xF7

#define DAC2R3                                   0x3
#define DAC2R3_address                           0x11B
#define DAC2R3_position                          0x3
#define DAC2R3_size                              0x1
#define DAC2R3_value_mask                        0x8
#define DAC2R3_clear_mask                        0xF7

#define REF4                                     0x4
#define REF4_address                             0x11B
#define REF4_position                            0x4
#define REF4_size                                0x1
#define REF4_value_mask                          0x10
#define REF4_clear_mask                          0xEF

#define R4                                       0x4
#define R4_address                               0x11B
#define R4_position                              0x4
#define R4_size                                  0x1
#define R4_value_mask                            0x10
#define R4_clear_mask                            0xEF

#define DAC2REF_DACR4                            0x4
#define DAC2REF_DACR4_address                    0x11B
#define DAC2REF_DACR4_position                   0x4
#define DAC2REF_DACR4_size                       0x1
#define DAC2REF_DACR4_value_mask                 0x10
#define DAC2REF_DACR4_clear_mask                 0xEF

#define DAC2REF4                                 0x4
#define DAC2REF4_address                         0x11B
#define DAC2REF4_position                        0x4
#define DAC2REF4_size                            0x1
#define DAC2REF4_value_mask                      0x10
#define DAC2REF4_clear_mask                      0xEF

#define DAC2R4                                   0x4
#define DAC2R4_address                           0x11B
#define DAC2R4_position                          0x4
#define DAC2R4_size                              0x1
#define DAC2R4_value_mask                        0x10
#define DAC2R4_clear_mask                        0xEF

#define REF5                                     0x5
#define REF5_address                             0x11B
#define REF5_position                            0x5
#define REF5_size                                0x1
#define REF5_value_mask                          0x20
#define REF5_clear_mask                          0xDF

#define DAC2REF5                                 0x5
#define DAC2REF5_address                         0x11B
#define DAC2REF5_position                        0x5
#define DAC2REF5_size                            0x1
#define DAC2REF5_value_mask                      0x20
#define DAC2REF5_clear_mask                      0xDF


/*-------------------------------------------------------------#
| ZCD1CON                                                0x11C |
#--------------------------------------------------------------#
| ZCD1EN | - | ZCD1OUT | ZCD1POL | - | - | ZCD1INTP | ZCD1INTN |
#--------------------------------------------------------------#
| 7      | 6 | 5       | 4       | 3 | 2 | 1        | 0        |
#-------------------------------------------------------------*/

#define ZCD1CON                                  0x0
#define ZCD1CON_address                          0x11C
#define ZCD1CON_position                         0x0
#define ZCD1CON_size                             0x8
#define ZCD1CON_value_mask                       0xFF
#define ZCD1CON_clear_mask                       0x0

#define ZCD1INTN                                 0x0
#define ZCD1INTN_address                         0x11C
#define ZCD1INTN_position                        0x0
#define ZCD1INTN_size                            0x1
#define ZCD1INTN_value_mask                      0x1
#define ZCD1INTN_clear_mask                      0xFE

#define ZCD1INTP                                 0x1
#define ZCD1INTP_address                         0x11C
#define ZCD1INTP_position                        0x1
#define ZCD1INTP_size                            0x1
#define ZCD1INTP_value_mask                      0x2
#define ZCD1INTP_clear_mask                      0xFD

#define ZCD1POL                                  0x4
#define ZCD1POL_address                          0x11C
#define ZCD1POL_position                         0x4
#define ZCD1POL_size                             0x1
#define ZCD1POL_value_mask                       0x10
#define ZCD1POL_clear_mask                       0xEF

#define ZCD1OUT                                  0x5
#define ZCD1OUT_address                          0x11C
#define ZCD1OUT_position                         0x5
#define ZCD1OUT_size                             0x1
#define ZCD1OUT_value_mask                       0x20
#define ZCD1OUT_clear_mask                       0xDF

#define ZCD1EN                                   0x7
#define ZCD1EN_address                           0x11C
#define ZCD1EN_position                          0x7
#define ZCD1EN_size                              0x1
#define ZCD1EN_value_mask                        0x80
#define ZCD1EN_clear_mask                        0x7F


/*------------------------------------------------------#
| ANSELA                                          0x18C |
#-------------------------------------------------------#
| - | - | ANSA5 | ANSA4 | ANSA3 | ANSA2 | ANSA1 | ANSA0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define ANSELA                                   0x0
#define ANSELA_address                           0x18C
#define ANSELA_position                          0x0
#define ANSELA_size                              0x8
#define ANSELA_value_mask                        0xFF
#define ANSELA_clear_mask                        0x0

#define ANSA0                                    0x0
#define ANSA0_address                            0x18C
#define ANSA0_position                           0x0
#define ANSA0_size                               0x1
#define ANSA0_value_mask                         0x1
#define ANSA0_clear_mask                         0xFE

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


/*------------------------------------------------------#
| ANSELB                                          0x18D |
#-------------------------------------------------------#
| - | - | ANSB5 | ANSB4 | ANSB3 | ANSB2 | ANSB1 | ANSB0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define ANSELB                                   0x0
#define ANSELB_address                           0x18D
#define ANSELB_position                          0x0
#define ANSELB_size                              0x8
#define ANSELB_value_mask                        0xFF
#define ANSELB_clear_mask                        0x0

#define ANSB0                                    0x0
#define ANSB0_address                            0x18D
#define ANSB0_position                           0x0
#define ANSB0_size                               0x1
#define ANSB0_value_mask                         0x1
#define ANSB0_clear_mask                         0xFE

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

#define WPUA                                     0x0
#define WPUA_address                             0x20C
#define WPUA_position                            0x0
#define WPUA_size                                0x8
#define WPUA_value_mask                          0xFF
#define WPUA_clear_mask                          0x0

#define WPUA0                                    0x0
#define WPUA0_address                            0x20C
#define WPUA0_position                           0x0
#define WPUA0_size                               0x1
#define WPUA0_value_mask                         0x1
#define WPUA0_clear_mask                         0xFE

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

#define WPUB                                     0x0
#define WPUB_address                             0x20D
#define WPUB_position                            0x0
#define WPUB_size                                0x8
#define WPUB_value_mask                          0xFF
#define WPUB_clear_mask                          0x0

#define WPUB0                                    0x0
#define WPUB0_address                            0x20D
#define WPUB0_position                           0x0
#define WPUB0_size                               0x1
#define WPUB0_value_mask                         0x1
#define WPUB0_clear_mask                         0xFE

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

#define WPUC                                     0x0
#define WPUC_address                             0x20E
#define WPUC_position                            0x0
#define WPUC_size                                0x8
#define WPUC_value_mask                          0xFF
#define WPUC_clear_mask                          0x0

#define WPUC0                                    0x0
#define WPUC0_address                            0x20E
#define WPUC0_position                           0x0
#define WPUC0_size                               0x1
#define WPUC0_value_mask                         0x1
#define WPUC0_clear_mask                         0xFE

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


/*------------------------------------------------------#
| ODCONA                                          0x28C |
#-------------------------------------------------------#
| ODA7 | ODA6 | ODA5 | ODA4 | ODA3 | ODA2 | ODA1 | ODA0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define ODCONA                                   0x0
#define ODCONA_address                           0x28C
#define ODCONA_position                          0x0
#define ODCONA_size                              0x8
#define ODCONA_value_mask                        0xFF
#define ODCONA_clear_mask                        0x0

#define ODA0                                     0x0
#define ODA0_address                             0x28C
#define ODA0_position                            0x0
#define ODA0_size                                0x1
#define ODA0_value_mask                          0x1
#define ODA0_clear_mask                          0xFE

#define ODA1                                     0x1
#define ODA1_address                             0x28C
#define ODA1_position                            0x1
#define ODA1_size                                0x1
#define ODA1_value_mask                          0x2
#define ODA1_clear_mask                          0xFD

#define ODA2                                     0x2
#define ODA2_address                             0x28C
#define ODA2_position                            0x2
#define ODA2_size                                0x1
#define ODA2_value_mask                          0x4
#define ODA2_clear_mask                          0xFB

#define ODA3                                     0x3
#define ODA3_address                             0x28C
#define ODA3_position                            0x3
#define ODA3_size                                0x1
#define ODA3_value_mask                          0x8
#define ODA3_clear_mask                          0xF7

#define ODA4                                     0x4
#define ODA4_address                             0x28C
#define ODA4_position                            0x4
#define ODA4_size                                0x1
#define ODA4_value_mask                          0x10
#define ODA4_clear_mask                          0xEF

#define ODA5                                     0x5
#define ODA5_address                             0x28C
#define ODA5_position                            0x5
#define ODA5_size                                0x1
#define ODA5_value_mask                          0x20
#define ODA5_clear_mask                          0xDF

#define ODA6                                     0x6
#define ODA6_address                             0x28C
#define ODA6_position                            0x6
#define ODA6_size                                0x1
#define ODA6_value_mask                          0x40
#define ODA6_clear_mask                          0xBF

#define ODA7                                     0x7
#define ODA7_address                             0x28C
#define ODA7_position                            0x7
#define ODA7_size                                0x1
#define ODA7_value_mask                          0x80
#define ODA7_clear_mask                          0x7F


/*------------------------------------------------------#
| ODCONB                                          0x28D |
#-------------------------------------------------------#
| ODB7 | ODB6 | ODB5 | ODB4 | ODB3 | ODB2 | ODB1 | ODB0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define ODCONB                                   0x0
#define ODCONB_address                           0x28D
#define ODCONB_position                          0x0
#define ODCONB_size                              0x8
#define ODCONB_value_mask                        0xFF
#define ODCONB_clear_mask                        0x0

#define ODB0                                     0x0
#define ODB0_address                             0x28D
#define ODB0_position                            0x0
#define ODB0_size                                0x1
#define ODB0_value_mask                          0x1
#define ODB0_clear_mask                          0xFE

#define ODB1                                     0x1
#define ODB1_address                             0x28D
#define ODB1_position                            0x1
#define ODB1_size                                0x1
#define ODB1_value_mask                          0x2
#define ODB1_clear_mask                          0xFD

#define ODB2                                     0x2
#define ODB2_address                             0x28D
#define ODB2_position                            0x2
#define ODB2_size                                0x1
#define ODB2_value_mask                          0x4
#define ODB2_clear_mask                          0xFB

#define ODB3                                     0x3
#define ODB3_address                             0x28D
#define ODB3_position                            0x3
#define ODB3_size                                0x1
#define ODB3_value_mask                          0x8
#define ODB3_clear_mask                          0xF7

#define ODB4                                     0x4
#define ODB4_address                             0x28D
#define ODB4_position                            0x4
#define ODB4_size                                0x1
#define ODB4_value_mask                          0x10
#define ODB4_clear_mask                          0xEF

#define ODB5                                     0x5
#define ODB5_address                             0x28D
#define ODB5_position                            0x5
#define ODB5_size                                0x1
#define ODB5_value_mask                          0x20
#define ODB5_clear_mask                          0xDF

#define ODB6                                     0x6
#define ODB6_address                             0x28D
#define ODB6_position                            0x6
#define ODB6_size                                0x1
#define ODB6_value_mask                          0x40
#define ODB6_clear_mask                          0xBF

#define ODB7                                     0x7
#define ODB7_address                             0x28D
#define ODB7_position                            0x7
#define ODB7_size                                0x1
#define ODB7_value_mask                          0x80
#define ODB7_clear_mask                          0x7F


/*------------------------------------------------------#
| ODCONC                                          0x28E |
#-------------------------------------------------------#
| ODC7 | ODC6 | ODC5 | ODC4 | ODC3 | ODC2 | ODC1 | ODC0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define ODCONC                                   0x0
#define ODCONC_address                           0x28E
#define ODCONC_position                          0x0
#define ODCONC_size                              0x8
#define ODCONC_value_mask                        0xFF
#define ODCONC_clear_mask                        0x0

#define ODC0                                     0x0
#define ODC0_address                             0x28E
#define ODC0_position                            0x0
#define ODC0_size                                0x1
#define ODC0_value_mask                          0x1
#define ODC0_clear_mask                          0xFE

#define ODC1                                     0x1
#define ODC1_address                             0x28E
#define ODC1_position                            0x1
#define ODC1_size                                0x1
#define ODC1_value_mask                          0x2
#define ODC1_clear_mask                          0xFD

#define ODC2                                     0x2
#define ODC2_address                             0x28E
#define ODC2_position                            0x2
#define ODC2_size                                0x1
#define ODC2_value_mask                          0x4
#define ODC2_clear_mask                          0xFB

#define ODC3                                     0x3
#define ODC3_address                             0x28E
#define ODC3_position                            0x3
#define ODC3_size                                0x1
#define ODC3_value_mask                          0x8
#define ODC3_clear_mask                          0xF7

#define ODC4                                     0x4
#define ODC4_address                             0x28E
#define ODC4_position                            0x4
#define ODC4_size                                0x1
#define ODC4_value_mask                          0x10
#define ODC4_clear_mask                          0xEF

#define ODC5                                     0x5
#define ODC5_address                             0x28E
#define ODC5_position                            0x5
#define ODC5_size                                0x1
#define ODC5_value_mask                          0x20
#define ODC5_clear_mask                          0xDF

#define ODC6                                     0x6
#define ODC6_address                             0x28E
#define ODC6_position                            0x6
#define ODC6_size                                0x1
#define ODC6_value_mask                          0x40
#define ODC6_clear_mask                          0xBF

#define ODC7                                     0x7
#define ODC7_address                             0x28E
#define ODC7_position                            0x7
#define ODC7_size                                0x1
#define ODC7_value_mask                          0x80
#define ODC7_clear_mask                          0x7F


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
| - | - | CCP1X | CCP1Y | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
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

#define CCP1Y                                    0x4
#define CCP1Y_address                            0x293
#define CCP1Y_position                           0x4
#define CCP1Y_size                               0x1
#define CCP1Y_value_mask                         0x10
#define CCP1Y_clear_mask                         0xEF

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

#define CCP1X                                    0x5
#define CCP1X_address                            0x293
#define CCP1X_position                           0x5
#define CCP1X_size                               0x1
#define CCP1X_value_mask                         0x20
#define CCP1X_clear_mask                         0xDF

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

#define CCP2Y                                    0x4
#define CCP2Y_address                            0x29A
#define CCP2Y_position                           0x4
#define CCP2Y_size                               0x1
#define CCP2Y_value_mask                         0x10
#define CCP2Y_clear_mask                         0xEF

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

#define CCP2X                                    0x5
#define CCP2X_address                            0x29A
#define CCP2X_position                           0x5
#define CCP2X_size                               0x1
#define CCP2X_value_mask                         0x20
#define CCP2X_clear_mask                         0xDF


/*------------------------------------------------------------------------------#
| CCPTMRS                                                                 0x29E |
#-------------------------------------------------------------------------------#
| P4TSEL1 | P4TSEL0 | P3TSEL1 | P3TSEL0 | C2TSEL1 | C2TSEL0 | C1TSEL1 | C1TSEL0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define CCPTMRS                                  0x0
#define CCPTMRS_address                          0x29E
#define CCPTMRS_position                         0x0
#define CCPTMRS_size                             0x8
#define CCPTMRS_value_mask                       0xFF
#define CCPTMRS_clear_mask                       0x0

#define C1TSEL0                                  0x0
#define C1TSEL0_address                          0x29E
#define C1TSEL0_position                         0x0
#define C1TSEL0_size                             0x1
#define C1TSEL0_value_mask                       0x1
#define C1TSEL0_clear_mask                       0xFE

#define C1TSEL                                   0x0
#define C1TSEL_address                           0x29E
#define C1TSEL_position                          0x0
#define C1TSEL_size                              0x2
#define C1TSEL_value_mask                        0x3
#define C1TSEL_clear_mask                        0xFC

#define C1TSEL1                                  0x1
#define C1TSEL1_address                          0x29E
#define C1TSEL1_position                         0x1
#define C1TSEL1_size                             0x1
#define C1TSEL1_value_mask                       0x2
#define C1TSEL1_clear_mask                       0xFD

#define C2TSEL0                                  0x2
#define C2TSEL0_address                          0x29E
#define C2TSEL0_position                         0x2
#define C2TSEL0_size                             0x1
#define C2TSEL0_value_mask                       0x4
#define C2TSEL0_clear_mask                       0xFB

#define C2TSEL                                   0x2
#define C2TSEL_address                           0x29E
#define C2TSEL_position                          0x2
#define C2TSEL_size                              0x2
#define C2TSEL_value_mask                        0xC
#define C2TSEL_clear_mask                        0xF3

#define C2TSEL1                                  0x3
#define C2TSEL1_address                          0x29E
#define C2TSEL1_position                         0x3
#define C2TSEL1_size                             0x1
#define C2TSEL1_value_mask                       0x8
#define C2TSEL1_clear_mask                       0xF7

#define P3TSEL                                   0x4
#define P3TSEL_address                           0x29E
#define P3TSEL_position                          0x4
#define P3TSEL_size                              0x2
#define P3TSEL_value_mask                        0x30
#define P3TSEL_clear_mask                        0xCF

#define P3TSEL0                                  0x4
#define P3TSEL0_address                          0x29E
#define P3TSEL0_position                         0x4
#define P3TSEL0_size                             0x1
#define P3TSEL0_value_mask                       0x10
#define P3TSEL0_clear_mask                       0xEF

#define P3TSEL1                                  0x5
#define P3TSEL1_address                          0x29E
#define P3TSEL1_position                         0x5
#define P3TSEL1_size                             0x1
#define P3TSEL1_value_mask                       0x20
#define P3TSEL1_clear_mask                       0xDF

#define P4TSEL0                                  0x6
#define P4TSEL0_address                          0x29E
#define P4TSEL0_position                         0x6
#define P4TSEL0_size                             0x1
#define P4TSEL0_value_mask                       0x40
#define P4TSEL0_clear_mask                       0xBF

#define P4TSEL                                   0x6
#define P4TSEL_address                           0x29E
#define P4TSEL_position                          0x6
#define P4TSEL_size                              0x2
#define P4TSEL_value_mask                        0xC0
#define P4TSEL_clear_mask                        0x3F

#define P4TSEL1                                  0x7
#define P4TSEL1_address                          0x29E
#define P4TSEL1_position                         0x7
#define P4TSEL1_size                             0x1
#define P4TSEL1_value_mask                       0x80
#define P4TSEL1_clear_mask                       0x7F


/*--------------------------------------------------------------#
| SLRCONA                                                 0x30C |
#---------------------------------------------------------------#
| SLRA7 | SLRA6 | SLRA5 | SLRA4 | SLRA3 | SLRA2 | SLRA1 | SLRA0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define SLRCONA                                  0x0
#define SLRCONA_address                          0x30C
#define SLRCONA_position                         0x0
#define SLRCONA_size                             0x8
#define SLRCONA_value_mask                       0xFF
#define SLRCONA_clear_mask                       0x0

#define SLRA0                                    0x0
#define SLRA0_address                            0x30C
#define SLRA0_position                           0x0
#define SLRA0_size                               0x1
#define SLRA0_value_mask                         0x1
#define SLRA0_clear_mask                         0xFE

#define SLRA1                                    0x1
#define SLRA1_address                            0x30C
#define SLRA1_position                           0x1
#define SLRA1_size                               0x1
#define SLRA1_value_mask                         0x2
#define SLRA1_clear_mask                         0xFD

#define SLRA2                                    0x2
#define SLRA2_address                            0x30C
#define SLRA2_position                           0x2
#define SLRA2_size                               0x1
#define SLRA2_value_mask                         0x4
#define SLRA2_clear_mask                         0xFB

#define SLRA3                                    0x3
#define SLRA3_address                            0x30C
#define SLRA3_position                           0x3
#define SLRA3_size                               0x1
#define SLRA3_value_mask                         0x8
#define SLRA3_clear_mask                         0xF7

#define SLRA4                                    0x4
#define SLRA4_address                            0x30C
#define SLRA4_position                           0x4
#define SLRA4_size                               0x1
#define SLRA4_value_mask                         0x10
#define SLRA4_clear_mask                         0xEF

#define SLRA5                                    0x5
#define SLRA5_address                            0x30C
#define SLRA5_position                           0x5
#define SLRA5_size                               0x1
#define SLRA5_value_mask                         0x20
#define SLRA5_clear_mask                         0xDF

#define SLRA6                                    0x6
#define SLRA6_address                            0x30C
#define SLRA6_position                           0x6
#define SLRA6_size                               0x1
#define SLRA6_value_mask                         0x40
#define SLRA6_clear_mask                         0xBF

#define SLRA7                                    0x7
#define SLRA7_address                            0x30C
#define SLRA7_position                           0x7
#define SLRA7_size                               0x1
#define SLRA7_value_mask                         0x80
#define SLRA7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| SLRCONB                                                 0x30D |
#---------------------------------------------------------------#
| SLRB7 | SLRB6 | SLRB5 | SLRB4 | SLRB3 | SLRB2 | SLRB1 | SLRB0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define SLRCONB                                  0x0
#define SLRCONB_address                          0x30D
#define SLRCONB_position                         0x0
#define SLRCONB_size                             0x8
#define SLRCONB_value_mask                       0xFF
#define SLRCONB_clear_mask                       0x0

#define SLRB0                                    0x0
#define SLRB0_address                            0x30D
#define SLRB0_position                           0x0
#define SLRB0_size                               0x1
#define SLRB0_value_mask                         0x1
#define SLRB0_clear_mask                         0xFE

#define SLRB1                                    0x1
#define SLRB1_address                            0x30D
#define SLRB1_position                           0x1
#define SLRB1_size                               0x1
#define SLRB1_value_mask                         0x2
#define SLRB1_clear_mask                         0xFD

#define SLRB2                                    0x2
#define SLRB2_address                            0x30D
#define SLRB2_position                           0x2
#define SLRB2_size                               0x1
#define SLRB2_value_mask                         0x4
#define SLRB2_clear_mask                         0xFB

#define SLRB3                                    0x3
#define SLRB3_address                            0x30D
#define SLRB3_position                           0x3
#define SLRB3_size                               0x1
#define SLRB3_value_mask                         0x8
#define SLRB3_clear_mask                         0xF7

#define SLRB4                                    0x4
#define SLRB4_address                            0x30D
#define SLRB4_position                           0x4
#define SLRB4_size                               0x1
#define SLRB4_value_mask                         0x10
#define SLRB4_clear_mask                         0xEF

#define SLRB5                                    0x5
#define SLRB5_address                            0x30D
#define SLRB5_position                           0x5
#define SLRB5_size                               0x1
#define SLRB5_value_mask                         0x20
#define SLRB5_clear_mask                         0xDF

#define SLRB6                                    0x6
#define SLRB6_address                            0x30D
#define SLRB6_position                           0x6
#define SLRB6_size                               0x1
#define SLRB6_value_mask                         0x40
#define SLRB6_clear_mask                         0xBF

#define SLRB7                                    0x7
#define SLRB7_address                            0x30D
#define SLRB7_position                           0x7
#define SLRB7_size                               0x1
#define SLRB7_value_mask                         0x80
#define SLRB7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| SLRCONC                                                 0x30E |
#---------------------------------------------------------------#
| SLRC7 | SLRC6 | SLRC5 | SLRC4 | SLRC3 | SLRC2 | SLRC1 | SLRC0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define SLRCONC                                  0x0
#define SLRCONC_address                          0x30E
#define SLRCONC_position                         0x0
#define SLRCONC_size                             0x8
#define SLRCONC_value_mask                       0xFF
#define SLRCONC_clear_mask                       0x0

#define SLRC0                                    0x0
#define SLRC0_address                            0x30E
#define SLRC0_position                           0x0
#define SLRC0_size                               0x1
#define SLRC0_value_mask                         0x1
#define SLRC0_clear_mask                         0xFE

#define SLRC1                                    0x1
#define SLRC1_address                            0x30E
#define SLRC1_position                           0x1
#define SLRC1_size                               0x1
#define SLRC1_value_mask                         0x2
#define SLRC1_clear_mask                         0xFD

#define SLRC2                                    0x2
#define SLRC2_address                            0x30E
#define SLRC2_position                           0x2
#define SLRC2_size                               0x1
#define SLRC2_value_mask                         0x4
#define SLRC2_clear_mask                         0xFB

#define SLRC3                                    0x3
#define SLRC3_address                            0x30E
#define SLRC3_position                           0x3
#define SLRC3_size                               0x1
#define SLRC3_value_mask                         0x8
#define SLRC3_clear_mask                         0xF7

#define SLRC4                                    0x4
#define SLRC4_address                            0x30E
#define SLRC4_position                           0x4
#define SLRC4_size                               0x1
#define SLRC4_value_mask                         0x10
#define SLRC4_clear_mask                         0xEF

#define SLRC5                                    0x5
#define SLRC5_address                            0x30E
#define SLRC5_position                           0x5
#define SLRC5_size                               0x1
#define SLRC5_value_mask                         0x20
#define SLRC5_clear_mask                         0xDF

#define SLRC6                                    0x6
#define SLRC6_address                            0x30E
#define SLRC6_position                           0x6
#define SLRC6_size                               0x1
#define SLRC6_value_mask                         0x40
#define SLRC6_clear_mask                         0xBF

#define SLRC7                                    0x7
#define SLRC7_address                            0x30E
#define SLRC7_position                           0x7
#define SLRC7_size                               0x1
#define SLRC7_value_mask                         0x80
#define SLRC7_clear_mask                         0x7F


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
| - | - | - | - | INLVLE3 | - | - | - |
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

#define IOCAF                                    0x0
#define IOCAF_address                            0x393
#define IOCAF_position                           0x0
#define IOCAF_size                               0x8
#define IOCAF_value_mask                         0xFF
#define IOCAF_clear_mask                         0x0

#define IOCAF0                                   0x0
#define IOCAF0_address                           0x393
#define IOCAF0_position                          0x0
#define IOCAF0_size                              0x1
#define IOCAF0_value_mask                        0x1
#define IOCAF0_clear_mask                        0xFE

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

#define IOCBN                                    0x0
#define IOCBN_address                            0x395
#define IOCBN_position                           0x0
#define IOCBN_size                               0x8
#define IOCBN_value_mask                         0xFF
#define IOCBN_clear_mask                         0x0

#define IOCBN0                                   0x0
#define IOCBN0_address                           0x395
#define IOCBN0_position                          0x0
#define IOCBN0_size                              0x1
#define IOCBN0_value_mask                        0x1
#define IOCBN0_clear_mask                        0xFE

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

#define IOCBF                                    0x0
#define IOCBF_address                            0x396
#define IOCBF_position                           0x0
#define IOCBF_size                               0x8
#define IOCBF_value_mask                         0xFF
#define IOCBF_clear_mask                         0x0

#define IOCBF0                                   0x0
#define IOCBF0_address                           0x396
#define IOCBF0_position                          0x0
#define IOCBF0_size                              0x1
#define IOCBF0_value_mask                        0x1
#define IOCBF0_clear_mask                        0xFE

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

#define IOCCP                                    0x0
#define IOCCP_address                            0x397
#define IOCCP_position                           0x0
#define IOCCP_size                               0x8
#define IOCCP_value_mask                         0xFF
#define IOCCP_clear_mask                         0x0

#define IOCCP0                                   0x0
#define IOCCP0_address                           0x397
#define IOCCP0_position                          0x0
#define IOCCP0_size                              0x1
#define IOCCP0_value_mask                        0x1
#define IOCCP0_clear_mask                        0xFE

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

#define IOCCN                                    0x0
#define IOCCN_address                            0x398
#define IOCCN_position                           0x0
#define IOCCN_size                               0x8
#define IOCCN_value_mask                         0xFF
#define IOCCN_clear_mask                         0x0

#define IOCCN0                                   0x0
#define IOCCN0_address                           0x398
#define IOCCN0_position                          0x0
#define IOCCN0_size                              0x1
#define IOCCN0_value_mask                        0x1
#define IOCCN0_clear_mask                        0xFE

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

#define IOCCF                                    0x0
#define IOCCF_address                            0x399
#define IOCCF_position                           0x0
#define IOCCF_size                               0x8
#define IOCCF_value_mask                         0xFF
#define IOCCF_clear_mask                         0x0

#define IOCCF0                                   0x0
#define IOCCF0_address                           0x399
#define IOCCF0_position                          0x0
#define IOCCF0_size                              0x1
#define IOCCF0_value_mask                        0x1
#define IOCCF0_clear_mask                        0xFE

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


/*--------------------------------------------------------------------------------------#
| NCO1ACCL                                                                        0x498 |
#---------------------------------------------------------------------------------------#
| NCO1ACC7 | NCO1ACC6 | NCO1ACC5 | NCO1ACC4 | NCO1ACC3 | NCO1ACC2 | NCO1ACC1 | NCO1ACC0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define NCO1ACCL                                 0x0
#define NCO1ACCL_address                         0x498
#define NCO1ACCL_position                        0x0
#define NCO1ACCL_size                            0x8
#define NCO1ACCL_value_mask                      0xFF
#define NCO1ACCL_clear_mask                      0x0

#define NCO1ACCL_NCO1ACC                         0x0
#define NCO1ACCL_NCO1ACC_address                 0x498
#define NCO1ACCL_NCO1ACC_position                0x0
#define NCO1ACCL_NCO1ACC_size                    0x8
#define NCO1ACCL_NCO1ACC_value_mask              0xFF
#define NCO1ACCL_NCO1ACC_clear_mask              0x0

#define NCO1ACC0                                 0x0
#define NCO1ACC0_address                         0x498
#define NCO1ACC0_position                        0x0
#define NCO1ACC0_size                            0x1
#define NCO1ACC0_value_mask                      0x1
#define NCO1ACC0_clear_mask                      0xFE

#define NCO1ACC1                                 0x1
#define NCO1ACC1_address                         0x498
#define NCO1ACC1_position                        0x1
#define NCO1ACC1_size                            0x1
#define NCO1ACC1_value_mask                      0x2
#define NCO1ACC1_clear_mask                      0xFD

#define NCO1ACC2                                 0x2
#define NCO1ACC2_address                         0x498
#define NCO1ACC2_position                        0x2
#define NCO1ACC2_size                            0x1
#define NCO1ACC2_value_mask                      0x4
#define NCO1ACC2_clear_mask                      0xFB

#define NCO1ACC3                                 0x3
#define NCO1ACC3_address                         0x498
#define NCO1ACC3_position                        0x3
#define NCO1ACC3_size                            0x1
#define NCO1ACC3_value_mask                      0x8
#define NCO1ACC3_clear_mask                      0xF7

#define NCO1ACC4                                 0x4
#define NCO1ACC4_address                         0x498
#define NCO1ACC4_position                        0x4
#define NCO1ACC4_size                            0x1
#define NCO1ACC4_value_mask                      0x10
#define NCO1ACC4_clear_mask                      0xEF

#define NCO1ACC5                                 0x5
#define NCO1ACC5_address                         0x498
#define NCO1ACC5_position                        0x5
#define NCO1ACC5_size                            0x1
#define NCO1ACC5_value_mask                      0x20
#define NCO1ACC5_clear_mask                      0xDF

#define NCO1ACC6                                 0x6
#define NCO1ACC6_address                         0x498
#define NCO1ACC6_position                        0x6
#define NCO1ACC6_size                            0x1
#define NCO1ACC6_value_mask                      0x40
#define NCO1ACC6_clear_mask                      0xBF

#define NCO1ACC7                                 0x7
#define NCO1ACC7_address                         0x498
#define NCO1ACC7_position                        0x7
#define NCO1ACC7_size                            0x1
#define NCO1ACC7_value_mask                      0x80
#define NCO1ACC7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| NCO1ACCH                                                                              0x499 |
#---------------------------------------------------------------------------------------------#
| NCO1ACC15 | NCO1ACC14 | NCO1ACC13 | NCO1ACC12 | NCO1ACC11 | NCO1ACC10 | NCO1ACC9 | NCO1ACC8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define NCO1ACCH                                 0x0
#define NCO1ACCH_address                         0x499
#define NCO1ACCH_position                        0x0
#define NCO1ACCH_size                            0x8
#define NCO1ACCH_value_mask                      0xFF
#define NCO1ACCH_clear_mask                      0x0

#define NCO1ACC8                                 0x0
#define NCO1ACC8_address                         0x499
#define NCO1ACC8_position                        0x0
#define NCO1ACC8_size                            0x1
#define NCO1ACC8_value_mask                      0x1
#define NCO1ACC8_clear_mask                      0xFE

#define NCO1ACCH_NCO1ACC                         0x0
#define NCO1ACCH_NCO1ACC_address                 0x499
#define NCO1ACCH_NCO1ACC_position                0x0
#define NCO1ACCH_NCO1ACC_size                    0x8
#define NCO1ACCH_NCO1ACC_value_mask              0xFF
#define NCO1ACCH_NCO1ACC_clear_mask              0x0

#define NCO1ACC9                                 0x1
#define NCO1ACC9_address                         0x499
#define NCO1ACC9_position                        0x1
#define NCO1ACC9_size                            0x1
#define NCO1ACC9_value_mask                      0x2
#define NCO1ACC9_clear_mask                      0xFD

#define NCO1ACC10                                0x2
#define NCO1ACC10_address                        0x499
#define NCO1ACC10_position                       0x2
#define NCO1ACC10_size                           0x1
#define NCO1ACC10_value_mask                     0x4
#define NCO1ACC10_clear_mask                     0xFB

#define NCO1ACC11                                0x3
#define NCO1ACC11_address                        0x499
#define NCO1ACC11_position                       0x3
#define NCO1ACC11_size                           0x1
#define NCO1ACC11_value_mask                     0x8
#define NCO1ACC11_clear_mask                     0xF7

#define NCO1ACC12                                0x4
#define NCO1ACC12_address                        0x499
#define NCO1ACC12_position                       0x4
#define NCO1ACC12_size                           0x1
#define NCO1ACC12_value_mask                     0x10
#define NCO1ACC12_clear_mask                     0xEF

#define NCO1ACC13                                0x5
#define NCO1ACC13_address                        0x499
#define NCO1ACC13_position                       0x5
#define NCO1ACC13_size                           0x1
#define NCO1ACC13_value_mask                     0x20
#define NCO1ACC13_clear_mask                     0xDF

#define NCO1ACC14                                0x6
#define NCO1ACC14_address                        0x499
#define NCO1ACC14_position                       0x6
#define NCO1ACC14_size                           0x1
#define NCO1ACC14_value_mask                     0x40
#define NCO1ACC14_clear_mask                     0xBF

#define NCO1ACC15                                0x7
#define NCO1ACC15_address                        0x499
#define NCO1ACC15_position                       0x7
#define NCO1ACC15_size                           0x1
#define NCO1ACC15_value_mask                     0x80
#define NCO1ACC15_clear_mask                     0x7F


/*--------------------------------------------------------------#
| NCO1ACCU                                                0x49A |
#---------------------------------------------------------------#
| - | - | - | - | NCO1ACC19 | NCO1ACC18 | NCO1ACC17 | NCO1ACC16 |
#---------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3         | 2         | 1         | 0         |
#--------------------------------------------------------------*/

#define NCO1ACCU                                 0x0
#define NCO1ACCU_address                         0x49A
#define NCO1ACCU_position                        0x0
#define NCO1ACCU_size                            0x8
#define NCO1ACCU_value_mask                      0xFF
#define NCO1ACCU_clear_mask                      0x0

#define NCO1ACCU_NCO1ACC                         0x0
#define NCO1ACCU_NCO1ACC_address                 0x49A
#define NCO1ACCU_NCO1ACC_position                0x0
#define NCO1ACCU_NCO1ACC_size                    0x8
#define NCO1ACCU_NCO1ACC_value_mask              0xFF
#define NCO1ACCU_NCO1ACC_clear_mask              0x0

#define NCO1ACC16                                0x0
#define NCO1ACC16_address                        0x49A
#define NCO1ACC16_position                       0x0
#define NCO1ACC16_size                           0x1
#define NCO1ACC16_value_mask                     0x1
#define NCO1ACC16_clear_mask                     0xFE

#define NCO1ACC17                                0x1
#define NCO1ACC17_address                        0x49A
#define NCO1ACC17_position                       0x1
#define NCO1ACC17_size                           0x1
#define NCO1ACC17_value_mask                     0x2
#define NCO1ACC17_clear_mask                     0xFD

#define NCO1ACC18                                0x2
#define NCO1ACC18_address                        0x49A
#define NCO1ACC18_position                       0x2
#define NCO1ACC18_size                           0x1
#define NCO1ACC18_value_mask                     0x4
#define NCO1ACC18_clear_mask                     0xFB

#define NCO1ACC19                                0x3
#define NCO1ACC19_address                        0x49A
#define NCO1ACC19_position                       0x3
#define NCO1ACC19_size                           0x1
#define NCO1ACC19_value_mask                     0x8
#define NCO1ACC19_clear_mask                     0xF7


/*--------------------------------------------------------------------------------------#
| NCO1INCL                                                                        0x49B |
#---------------------------------------------------------------------------------------#
| NCO1INC7 | NCO1INC6 | NCO1INC5 | NCO1INC4 | NCO1INC3 | NCO1INC2 | NCO1INC1 | NCO1INC0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define NCO1INCL                                 0x0
#define NCO1INCL_address                         0x49B
#define NCO1INCL_position                        0x0
#define NCO1INCL_size                            0x8
#define NCO1INCL_value_mask                      0xFF
#define NCO1INCL_clear_mask                      0x0

#define NCO1INC0                                 0x0
#define NCO1INC0_address                         0x49B
#define NCO1INC0_position                        0x0
#define NCO1INC0_size                            0x1
#define NCO1INC0_value_mask                      0x1
#define NCO1INC0_clear_mask                      0xFE

#define NCO1INCL_NCO1INC                         0x0
#define NCO1INCL_NCO1INC_address                 0x49B
#define NCO1INCL_NCO1INC_position                0x0
#define NCO1INCL_NCO1INC_size                    0x8
#define NCO1INCL_NCO1INC_value_mask              0xFF
#define NCO1INCL_NCO1INC_clear_mask              0x0

#define NCO1INC1                                 0x1
#define NCO1INC1_address                         0x49B
#define NCO1INC1_position                        0x1
#define NCO1INC1_size                            0x1
#define NCO1INC1_value_mask                      0x2
#define NCO1INC1_clear_mask                      0xFD

#define NCO1INC2                                 0x2
#define NCO1INC2_address                         0x49B
#define NCO1INC2_position                        0x2
#define NCO1INC2_size                            0x1
#define NCO1INC2_value_mask                      0x4
#define NCO1INC2_clear_mask                      0xFB

#define NCO1INC3                                 0x3
#define NCO1INC3_address                         0x49B
#define NCO1INC3_position                        0x3
#define NCO1INC3_size                            0x1
#define NCO1INC3_value_mask                      0x8
#define NCO1INC3_clear_mask                      0xF7

#define NCO1INC4                                 0x4
#define NCO1INC4_address                         0x49B
#define NCO1INC4_position                        0x4
#define NCO1INC4_size                            0x1
#define NCO1INC4_value_mask                      0x10
#define NCO1INC4_clear_mask                      0xEF

#define NCO1INC5                                 0x5
#define NCO1INC5_address                         0x49B
#define NCO1INC5_position                        0x5
#define NCO1INC5_size                            0x1
#define NCO1INC5_value_mask                      0x20
#define NCO1INC5_clear_mask                      0xDF

#define NCO1INC6                                 0x6
#define NCO1INC6_address                         0x49B
#define NCO1INC6_position                        0x6
#define NCO1INC6_size                            0x1
#define NCO1INC6_value_mask                      0x40
#define NCO1INC6_clear_mask                      0xBF

#define NCO1INC7                                 0x7
#define NCO1INC7_address                         0x49B
#define NCO1INC7_position                        0x7
#define NCO1INC7_size                            0x1
#define NCO1INC7_value_mask                      0x80
#define NCO1INC7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| NCO1INCH                                                                              0x49C |
#---------------------------------------------------------------------------------------------#
| NCO1INC15 | NCO1INC14 | NCO1INC13 | NCO1INC12 | NCO1INC11 | NCO1INC10 | NCO1INC9 | NCO1INC8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define NCO1INCH                                 0x0
#define NCO1INCH_address                         0x49C
#define NCO1INCH_position                        0x0
#define NCO1INCH_size                            0x8
#define NCO1INCH_value_mask                      0xFF
#define NCO1INCH_clear_mask                      0x0

#define NCO1INCH_NCO1INC                         0x0
#define NCO1INCH_NCO1INC_address                 0x49C
#define NCO1INCH_NCO1INC_position                0x0
#define NCO1INCH_NCO1INC_size                    0x8
#define NCO1INCH_NCO1INC_value_mask              0xFF
#define NCO1INCH_NCO1INC_clear_mask              0x0

#define NCO1INC8                                 0x0
#define NCO1INC8_address                         0x49C
#define NCO1INC8_position                        0x0
#define NCO1INC8_size                            0x1
#define NCO1INC8_value_mask                      0x1
#define NCO1INC8_clear_mask                      0xFE

#define NCO1INC9                                 0x1
#define NCO1INC9_address                         0x49C
#define NCO1INC9_position                        0x1
#define NCO1INC9_size                            0x1
#define NCO1INC9_value_mask                      0x2
#define NCO1INC9_clear_mask                      0xFD

#define NCO1INC10                                0x2
#define NCO1INC10_address                        0x49C
#define NCO1INC10_position                       0x2
#define NCO1INC10_size                           0x1
#define NCO1INC10_value_mask                     0x4
#define NCO1INC10_clear_mask                     0xFB

#define NCO1INC11                                0x3
#define NCO1INC11_address                        0x49C
#define NCO1INC11_position                       0x3
#define NCO1INC11_size                           0x1
#define NCO1INC11_value_mask                     0x8
#define NCO1INC11_clear_mask                     0xF7

#define NCO1INC12                                0x4
#define NCO1INC12_address                        0x49C
#define NCO1INC12_position                       0x4
#define NCO1INC12_size                           0x1
#define NCO1INC12_value_mask                     0x10
#define NCO1INC12_clear_mask                     0xEF

#define NCO1INC13                                0x5
#define NCO1INC13_address                        0x49C
#define NCO1INC13_position                       0x5
#define NCO1INC13_size                           0x1
#define NCO1INC13_value_mask                     0x20
#define NCO1INC13_clear_mask                     0xDF

#define NCO1INC14                                0x6
#define NCO1INC14_address                        0x49C
#define NCO1INC14_position                       0x6
#define NCO1INC14_size                           0x1
#define NCO1INC14_value_mask                     0x40
#define NCO1INC14_clear_mask                     0xBF

#define NCO1INC15                                0x7
#define NCO1INC15_address                        0x49C
#define NCO1INC15_position                       0x7
#define NCO1INC15_size                           0x1
#define NCO1INC15_value_mask                     0x80
#define NCO1INC15_clear_mask                     0x7F


/*--------------------------------------------------------------#
| NCO1INCU                                                0x49D |
#---------------------------------------------------------------#
| - | - | - | - | NCO1INC19 | NCO1INC18 | NCO1INC17 | NCO1INC16 |
#---------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3         | 2         | 1         | 0         |
#--------------------------------------------------------------*/

#define NCO1INCU                                 0x0
#define NCO1INCU_address                         0x49D
#define NCO1INCU_position                        0x0
#define NCO1INCU_size                            0x8
#define NCO1INCU_value_mask                      0xFF
#define NCO1INCU_clear_mask                      0x0

#define NCO1INC16                                0x0
#define NCO1INC16_address                        0x49D
#define NCO1INC16_position                       0x0
#define NCO1INC16_size                           0x1
#define NCO1INC16_value_mask                     0x1
#define NCO1INC16_clear_mask                     0xFE

#define NCO1INCU_NCO1INC                         0x0
#define NCO1INCU_NCO1INC_address                 0x49D
#define NCO1INCU_NCO1INC_position                0x0
#define NCO1INCU_NCO1INC_size                    0x8
#define NCO1INCU_NCO1INC_value_mask              0xFF
#define NCO1INCU_NCO1INC_clear_mask              0x0

#define NCO1INC17                                0x1
#define NCO1INC17_address                        0x49D
#define NCO1INC17_position                       0x1
#define NCO1INC17_size                           0x1
#define NCO1INC17_value_mask                     0x2
#define NCO1INC17_clear_mask                     0xFD

#define NCO1INC18                                0x2
#define NCO1INC18_address                        0x49D
#define NCO1INC18_position                       0x2
#define NCO1INC18_size                           0x1
#define NCO1INC18_value_mask                     0x4
#define NCO1INC18_clear_mask                     0xFB

#define NCO1INC19                                0x3
#define NCO1INC19_address                        0x49D
#define NCO1INC19_position                       0x3
#define NCO1INC19_size                           0x1
#define NCO1INC19_value_mask                     0x8
#define NCO1INC19_clear_mask                     0xF7


/*---------------------------------------------#
| NCO1CON                                0x49E |
#----------------------------------------------#
| N1EN | - | N1OUT | N1POL | - | - | - | N1PFM |
#----------------------------------------------#
| 7    | 6 | 5     | 4     | 3 | 2 | 1 | 0     |
#---------------------------------------------*/

#define NCO1CON                                  0x0
#define NCO1CON_address                          0x49E
#define NCO1CON_position                         0x0
#define NCO1CON_size                             0x8
#define NCO1CON_value_mask                       0xFF
#define NCO1CON_clear_mask                       0x0

#define N1PFM                                    0x0
#define N1PFM_address                            0x49E
#define N1PFM_position                           0x0
#define N1PFM_size                               0x1
#define N1PFM_value_mask                         0x1
#define N1PFM_clear_mask                         0xFE

#define N1POL                                    0x4
#define N1POL_address                            0x49E
#define N1POL_position                           0x4
#define N1POL_size                               0x1
#define N1POL_value_mask                         0x10
#define N1POL_clear_mask                         0xEF

#define N1OUT                                    0x5
#define N1OUT_address                            0x49E
#define N1OUT_position                           0x5
#define N1OUT_size                               0x1
#define N1OUT_value_mask                         0x20
#define N1OUT_clear_mask                         0xDF

#define N1EN                                     0x7
#define N1EN_address                             0x49E
#define N1EN_position                            0x7
#define N1EN_size                                0x1
#define N1EN_value_mask                          0x80
#define N1EN_clear_mask                          0x7F


/*-------------------------------------------------------#
| NCO1CLK                                          0x49F |
#--------------------------------------------------------#
| N1PWS2 | N1PWS1 | N1PWS0 | - | - | - | N1CKS1 | N1CKS0 |
#--------------------------------------------------------#
| 7      | 6      | 5      | 4 | 3 | 2 | 1      | 0      |
#-------------------------------------------------------*/

#define NCO1CLK                                  0x0
#define NCO1CLK_address                          0x49F
#define NCO1CLK_position                         0x0
#define NCO1CLK_size                             0x8
#define NCO1CLK_value_mask                       0xFF
#define NCO1CLK_clear_mask                       0x0

#define N1CKS                                    0x0
#define N1CKS_address                            0x49F
#define N1CKS_position                           0x0
#define N1CKS_size                               0x4
#define N1CKS_value_mask                         0xF
#define N1CKS_clear_mask                         0xF0

#define N1CKS0                                   0x0
#define N1CKS0_address                           0x49F
#define N1CKS0_position                          0x0
#define N1CKS0_size                              0x1
#define N1CKS0_value_mask                        0x1
#define N1CKS0_clear_mask                        0xFE

#define N1CKS1                                   0x1
#define N1CKS1_address                           0x49F
#define N1CKS1_position                          0x1
#define N1CKS1_size                              0x1
#define N1CKS1_value_mask                        0x2
#define N1CKS1_clear_mask                        0xFD

#define N1PWS0                                   0x5
#define N1PWS0_address                           0x49F
#define N1PWS0_position                          0x5
#define N1PWS0_size                              0x1
#define N1PWS0_value_mask                        0x20
#define N1PWS0_clear_mask                        0xDF

#define N1PWS                                    0x5
#define N1PWS_address                            0x49F
#define N1PWS_position                           0x5
#define N1PWS_size                               0x3
#define N1PWS_value_mask                         0xE0
#define N1PWS_clear_mask                         0x1F

#define N1PWS1                                   0x6
#define N1PWS1_address                           0x49F
#define N1PWS1_position                          0x6
#define N1PWS1_size                              0x1
#define N1PWS1_value_mask                        0x40
#define N1PWS1_clear_mask                        0xBF

#define N1PWS2                                   0x7
#define N1PWS2_address                           0x49F
#define N1PWS2_position                          0x7
#define N1PWS2_size                              0x1
#define N1PWS2_value_mask                        0x80
#define N1PWS2_clear_mask                        0x7F


/*-----------------------------------------------------------#
| OPA1CON                                              0x511 |
#------------------------------------------------------------#
| OPA1EN | OPA1SP | - | OPA1UG | - | - | OPA1PCH1 | OPA1PCH0 |
#------------------------------------------------------------#
| 7      | 6      | 5 | 4      | 3 | 2 | 1        | 0        |
#-----------------------------------------------------------*/

#define OPA1CON                                  0x0
#define OPA1CON_address                          0x511
#define OPA1CON_position                         0x0
#define OPA1CON_size                             0x8
#define OPA1CON_value_mask                       0xFF
#define OPA1CON_clear_mask                       0x0

#define OPA1PCH                                  0x0
#define OPA1PCH_address                          0x511
#define OPA1PCH_position                         0x0
#define OPA1PCH_size                             0x2
#define OPA1PCH_value_mask                       0x3
#define OPA1PCH_clear_mask                       0xFC

#define OPA1PCH0                                 0x0
#define OPA1PCH0_address                         0x511
#define OPA1PCH0_position                        0x0
#define OPA1PCH0_size                            0x1
#define OPA1PCH0_value_mask                      0x1
#define OPA1PCH0_clear_mask                      0xFE

#define OPA1PCH1                                 0x1
#define OPA1PCH1_address                         0x511
#define OPA1PCH1_position                        0x1
#define OPA1PCH1_size                            0x1
#define OPA1PCH1_value_mask                      0x2
#define OPA1PCH1_clear_mask                      0xFD

#define OPA1UG                                   0x4
#define OPA1UG_address                           0x511
#define OPA1UG_position                          0x4
#define OPA1UG_size                              0x1
#define OPA1UG_value_mask                        0x10
#define OPA1UG_clear_mask                        0xEF

#define OPA1SP                                   0x6
#define OPA1SP_address                           0x511
#define OPA1SP_position                          0x6
#define OPA1SP_size                              0x1
#define OPA1SP_value_mask                        0x40
#define OPA1SP_clear_mask                        0xBF

#define OPA1EN                                   0x7
#define OPA1EN_address                           0x511
#define OPA1EN_position                          0x7
#define OPA1EN_size                              0x1
#define OPA1EN_value_mask                        0x80
#define OPA1EN_clear_mask                        0x7F


/*-----------------------------------------------------------#
| OPA2CON                                              0x515 |
#------------------------------------------------------------#
| OPA2EN | OPA2SP | - | OPA2UG | - | - | OPA2PCH1 | OPA2PCH0 |
#------------------------------------------------------------#
| 7      | 6      | 5 | 4      | 3 | 2 | 1        | 0        |
#-----------------------------------------------------------*/

#define OPA2CON                                  0x0
#define OPA2CON_address                          0x515
#define OPA2CON_position                         0x0
#define OPA2CON_size                             0x8
#define OPA2CON_value_mask                       0xFF
#define OPA2CON_clear_mask                       0x0

#define OPA2PCH                                  0x0
#define OPA2PCH_address                          0x515
#define OPA2PCH_position                         0x0
#define OPA2PCH_size                             0x2
#define OPA2PCH_value_mask                       0x3
#define OPA2PCH_clear_mask                       0xFC

#define OPA2PCH0                                 0x0
#define OPA2PCH0_address                         0x515
#define OPA2PCH0_position                        0x0
#define OPA2PCH0_size                            0x1
#define OPA2PCH0_value_mask                      0x1
#define OPA2PCH0_clear_mask                      0xFE

#define OPA2PCH1                                 0x1
#define OPA2PCH1_address                         0x515
#define OPA2PCH1_position                        0x1
#define OPA2PCH1_size                            0x1
#define OPA2PCH1_value_mask                      0x2
#define OPA2PCH1_clear_mask                      0xFD

#define OPA2UG                                   0x4
#define OPA2UG_address                           0x515
#define OPA2UG_position                          0x4
#define OPA2UG_size                              0x1
#define OPA2UG_value_mask                        0x10
#define OPA2UG_clear_mask                        0xEF

#define OPA2SP                                   0x6
#define OPA2SP_address                           0x515
#define OPA2SP_position                          0x6
#define OPA2SP_size                              0x1
#define OPA2SP_value_mask                        0x40
#define OPA2SP_clear_mask                        0xBF

#define OPA2EN                                   0x7
#define OPA2EN_address                           0x515
#define OPA2EN_position                          0x7
#define OPA2EN_size                              0x1
#define OPA2EN_value_mask                        0x80
#define OPA2EN_clear_mask                        0x7F


/*--------------------------------------------#
| PWM3DCL                               0x617 |
#---------------------------------------------#
| PWM3DCL1 | PWM3DCL0 | - | - | - | - | - | - |
#---------------------------------------------#
| 7        | 6        | 5 | 4 | 3 | 2 | 1 | 0 |
#--------------------------------------------*/

#define PWM3DCL0                                 0x6
#define PWM3DCL0_address                         0x617
#define PWM3DCL0_position                        0x6
#define PWM3DCL0_size                            0x1
#define PWM3DCL0_value_mask                      0x40
#define PWM3DCL0_clear_mask                      0xBF

#define PWM3DCL                                  0x6
#define PWM3DCL_address                          0x617
#define PWM3DCL_position                         0x6
#define PWM3DCL_size                             0x2
#define PWM3DCL_value_mask                       0xC0
#define PWM3DCL_clear_mask                       0x3F

#define PWM3DCL1                                 0x7
#define PWM3DCL1_address                         0x617
#define PWM3DCL1_position                        0x7
#define PWM3DCL1_size                            0x1
#define PWM3DCL1_value_mask                      0x80
#define PWM3DCL1_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM3DCH                                                                         0x618 |
#---------------------------------------------------------------------------------------#
| PWM3DCH7 | PWM3DCH6 | PWM3DCH5 | PWM3DCH4 | PWM3DCH3 | PWM3DCH2 | PWM3DCH1 | PWM3DCH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM3DCH0                                 0x0
#define PWM3DCH0_address                         0x618
#define PWM3DCH0_position                        0x0
#define PWM3DCH0_size                            0x1
#define PWM3DCH0_value_mask                      0x1
#define PWM3DCH0_clear_mask                      0xFE

#define PWM3DCH                                  0x0
#define PWM3DCH_address                          0x618
#define PWM3DCH_position                         0x0
#define PWM3DCH_size                             0x8
#define PWM3DCH_value_mask                       0xFF
#define PWM3DCH_clear_mask                       0x0

#define PWM3DCH1                                 0x1
#define PWM3DCH1_address                         0x618
#define PWM3DCH1_position                        0x1
#define PWM3DCH1_size                            0x1
#define PWM3DCH1_value_mask                      0x2
#define PWM3DCH1_clear_mask                      0xFD

#define PWM3DCH2                                 0x2
#define PWM3DCH2_address                         0x618
#define PWM3DCH2_position                        0x2
#define PWM3DCH2_size                            0x1
#define PWM3DCH2_value_mask                      0x4
#define PWM3DCH2_clear_mask                      0xFB

#define PWM3DCH3                                 0x3
#define PWM3DCH3_address                         0x618
#define PWM3DCH3_position                        0x3
#define PWM3DCH3_size                            0x1
#define PWM3DCH3_value_mask                      0x8
#define PWM3DCH3_clear_mask                      0xF7

#define PWM3DCH4                                 0x4
#define PWM3DCH4_address                         0x618
#define PWM3DCH4_position                        0x4
#define PWM3DCH4_size                            0x1
#define PWM3DCH4_value_mask                      0x10
#define PWM3DCH4_clear_mask                      0xEF

#define PWM3DCH5                                 0x5
#define PWM3DCH5_address                         0x618
#define PWM3DCH5_position                        0x5
#define PWM3DCH5_size                            0x1
#define PWM3DCH5_value_mask                      0x20
#define PWM3DCH5_clear_mask                      0xDF

#define PWM3DCH6                                 0x6
#define PWM3DCH6_address                         0x618
#define PWM3DCH6_position                        0x6
#define PWM3DCH6_size                            0x1
#define PWM3DCH6_value_mask                      0x40
#define PWM3DCH6_clear_mask                      0xBF

#define PWM3DCH7                                 0x7
#define PWM3DCH7_address                         0x618
#define PWM3DCH7_position                        0x7
#define PWM3DCH7_size                            0x1
#define PWM3DCH7_value_mask                      0x80
#define PWM3DCH7_clear_mask                      0x7F


/*-----------------------------------------------#
| PWM3CON                                  0x619 |
#------------------------------------------------#
| PWM3EN | - | PWM3OUT | PWM3POL | - | - | - | - |
#------------------------------------------------#
| 7      | 6 | 5       | 4       | 3 | 2 | 1 | 0 |
#-----------------------------------------------*/

#define PWM3CON                                  0x0
#define PWM3CON_address                          0x619
#define PWM3CON_position                         0x0
#define PWM3CON_size                             0x8
#define PWM3CON_value_mask                       0xFF
#define PWM3CON_clear_mask                       0x0

#define PWM3POL                                  0x4
#define PWM3POL_address                          0x619
#define PWM3POL_position                         0x4
#define PWM3POL_size                             0x1
#define PWM3POL_value_mask                       0x10
#define PWM3POL_clear_mask                       0xEF

#define PWM3OUT                                  0x5
#define PWM3OUT_address                          0x619
#define PWM3OUT_position                         0x5
#define PWM3OUT_size                             0x1
#define PWM3OUT_value_mask                       0x20
#define PWM3OUT_clear_mask                       0xDF

#define PWM3EN                                   0x7
#define PWM3EN_address                           0x619
#define PWM3EN_position                          0x7
#define PWM3EN_size                              0x1
#define PWM3EN_value_mask                        0x80
#define PWM3EN_clear_mask                        0x7F


/*--------------------------------------------#
| PWM4DCL                               0x61A |
#---------------------------------------------#
| PWM4DCL1 | PWM4DCL0 | - | - | - | - | - | - |
#---------------------------------------------#
| 7        | 6        | 5 | 4 | 3 | 2 | 1 | 0 |
#--------------------------------------------*/

#define PWM4DCL                                  0x6
#define PWM4DCL_address                          0x61A
#define PWM4DCL_position                         0x6
#define PWM4DCL_size                             0x2
#define PWM4DCL_value_mask                       0xC0
#define PWM4DCL_clear_mask                       0x3F

#define PWM4DCL0                                 0x6
#define PWM4DCL0_address                         0x61A
#define PWM4DCL0_position                        0x6
#define PWM4DCL0_size                            0x1
#define PWM4DCL0_value_mask                      0x40
#define PWM4DCL0_clear_mask                      0xBF

#define PWM4DCL1                                 0x7
#define PWM4DCL1_address                         0x61A
#define PWM4DCL1_position                        0x7
#define PWM4DCL1_size                            0x1
#define PWM4DCL1_value_mask                      0x80
#define PWM4DCL1_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM4DCH                                                                         0x61B |
#---------------------------------------------------------------------------------------#
| PWM4DCH7 | PWM4DCH6 | PWM4DCH5 | PWM4DCH4 | PWM4DCH3 | PWM4DCH2 | PWM4DCH1 | PWM4DCH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM4DCH0                                 0x0
#define PWM4DCH0_address                         0x61B
#define PWM4DCH0_position                        0x0
#define PWM4DCH0_size                            0x1
#define PWM4DCH0_value_mask                      0x1
#define PWM4DCH0_clear_mask                      0xFE

#define PWM4DCH                                  0x0
#define PWM4DCH_address                          0x61B
#define PWM4DCH_position                         0x0
#define PWM4DCH_size                             0x8
#define PWM4DCH_value_mask                       0xFF
#define PWM4DCH_clear_mask                       0x0

#define PWM4DCH1                                 0x1
#define PWM4DCH1_address                         0x61B
#define PWM4DCH1_position                        0x1
#define PWM4DCH1_size                            0x1
#define PWM4DCH1_value_mask                      0x2
#define PWM4DCH1_clear_mask                      0xFD

#define PWM4DCH2                                 0x2
#define PWM4DCH2_address                         0x61B
#define PWM4DCH2_position                        0x2
#define PWM4DCH2_size                            0x1
#define PWM4DCH2_value_mask                      0x4
#define PWM4DCH2_clear_mask                      0xFB

#define PWM4DCH3                                 0x3
#define PWM4DCH3_address                         0x61B
#define PWM4DCH3_position                        0x3
#define PWM4DCH3_size                            0x1
#define PWM4DCH3_value_mask                      0x8
#define PWM4DCH3_clear_mask                      0xF7

#define PWM4DCH4                                 0x4
#define PWM4DCH4_address                         0x61B
#define PWM4DCH4_position                        0x4
#define PWM4DCH4_size                            0x1
#define PWM4DCH4_value_mask                      0x10
#define PWM4DCH4_clear_mask                      0xEF

#define PWM4DCH5                                 0x5
#define PWM4DCH5_address                         0x61B
#define PWM4DCH5_position                        0x5
#define PWM4DCH5_size                            0x1
#define PWM4DCH5_value_mask                      0x20
#define PWM4DCH5_clear_mask                      0xDF

#define PWM4DCH6                                 0x6
#define PWM4DCH6_address                         0x61B
#define PWM4DCH6_position                        0x6
#define PWM4DCH6_size                            0x1
#define PWM4DCH6_value_mask                      0x40
#define PWM4DCH6_clear_mask                      0xBF

#define PWM4DCH7                                 0x7
#define PWM4DCH7_address                         0x61B
#define PWM4DCH7_position                        0x7
#define PWM4DCH7_size                            0x1
#define PWM4DCH7_value_mask                      0x80
#define PWM4DCH7_clear_mask                      0x7F


/*-----------------------------------------------#
| PWM4CON                                  0x61C |
#------------------------------------------------#
| PWM4EN | - | PWM4OUT | PWM4POL | - | - | - | - |
#------------------------------------------------#
| 7      | 6 | 5       | 4       | 3 | 2 | 1 | 0 |
#-----------------------------------------------*/

#define PWM4CON                                  0x0
#define PWM4CON_address                          0x61C
#define PWM4CON_position                         0x0
#define PWM4CON_size                             0x8
#define PWM4CON_value_mask                       0xFF
#define PWM4CON_clear_mask                       0x0

#define PWM4POL                                  0x4
#define PWM4POL_address                          0x61C
#define PWM4POL_position                         0x4
#define PWM4POL_size                             0x1
#define PWM4POL_value_mask                       0x10
#define PWM4POL_clear_mask                       0xEF

#define PWM4OUT                                  0x5
#define PWM4OUT_address                          0x61C
#define PWM4OUT_position                         0x5
#define PWM4OUT_size                             0x1
#define PWM4OUT_value_mask                       0x20
#define PWM4OUT_clear_mask                       0xDF

#define PWM4EN                                   0x7
#define PWM4EN_address                           0x61C
#define PWM4EN_position                          0x7
#define PWM4EN_size                              0x1
#define PWM4EN_value_mask                        0x80
#define PWM4EN_clear_mask                        0x7F


/*------------------------------------------------------------#
| COG1PHR                                               0x691 |
#-------------------------------------------------------------#
| - | - | G1PHR5 | G1PHR4 | G1PHR3 | G1PHR2 | G1PHR1 | G1PHR0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define COG1PHR                                  0x0
#define COG1PHR_address                          0x691
#define COG1PHR_position                         0x0
#define COG1PHR_size                             0x8
#define COG1PHR_value_mask                       0xFF
#define COG1PHR_clear_mask                       0x0

#define G1PHR                                    0x0
#define G1PHR_address                            0x691
#define G1PHR_position                           0x0
#define G1PHR_size                               0x6
#define G1PHR_value_mask                         0x3F
#define G1PHR_clear_mask                         0xC0

#define G1PHR0                                   0x0
#define G1PHR0_address                           0x691
#define G1PHR0_position                          0x0
#define G1PHR0_size                              0x1
#define G1PHR0_value_mask                        0x1
#define G1PHR0_clear_mask                        0xFE

#define G1PHR1                                   0x1
#define G1PHR1_address                           0x691
#define G1PHR1_position                          0x1
#define G1PHR1_size                              0x1
#define G1PHR1_value_mask                        0x2
#define G1PHR1_clear_mask                        0xFD

#define G1PHR2                                   0x2
#define G1PHR2_address                           0x691
#define G1PHR2_position                          0x2
#define G1PHR2_size                              0x1
#define G1PHR2_value_mask                        0x4
#define G1PHR2_clear_mask                        0xFB

#define G1PHR3                                   0x3
#define G1PHR3_address                           0x691
#define G1PHR3_position                          0x3
#define G1PHR3_size                              0x1
#define G1PHR3_value_mask                        0x8
#define G1PHR3_clear_mask                        0xF7

#define G1PHR4                                   0x4
#define G1PHR4_address                           0x691
#define G1PHR4_position                          0x4
#define G1PHR4_size                              0x1
#define G1PHR4_value_mask                        0x10
#define G1PHR4_clear_mask                        0xEF

#define G1PHR5                                   0x5
#define G1PHR5_address                           0x691
#define G1PHR5_position                          0x5
#define G1PHR5_size                              0x1
#define G1PHR5_value_mask                        0x20
#define G1PHR5_clear_mask                        0xDF


/*------------------------------------------------------------#
| COG1PHF                                               0x692 |
#-------------------------------------------------------------#
| - | - | G1PHF5 | G1PHF4 | G1PHF3 | G1PHF2 | G1PHF1 | G1PHF0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define COG1PHF                                  0x0
#define COG1PHF_address                          0x692
#define COG1PHF_position                         0x0
#define COG1PHF_size                             0x8
#define COG1PHF_value_mask                       0xFF
#define COG1PHF_clear_mask                       0x0

#define G1PHF0                                   0x0
#define G1PHF0_address                           0x692
#define G1PHF0_position                          0x0
#define G1PHF0_size                              0x1
#define G1PHF0_value_mask                        0x1
#define G1PHF0_clear_mask                        0xFE

#define G1PHF                                    0x0
#define G1PHF_address                            0x692
#define G1PHF_position                           0x0
#define G1PHF_size                               0x6
#define G1PHF_value_mask                         0x3F
#define G1PHF_clear_mask                         0xC0

#define G1PHF1                                   0x1
#define G1PHF1_address                           0x692
#define G1PHF1_position                          0x1
#define G1PHF1_size                              0x1
#define G1PHF1_value_mask                        0x2
#define G1PHF1_clear_mask                        0xFD

#define G1PHF2                                   0x2
#define G1PHF2_address                           0x692
#define G1PHF2_position                          0x2
#define G1PHF2_size                              0x1
#define G1PHF2_value_mask                        0x4
#define G1PHF2_clear_mask                        0xFB

#define G1PHF3                                   0x3
#define G1PHF3_address                           0x692
#define G1PHF3_position                          0x3
#define G1PHF3_size                              0x1
#define G1PHF3_value_mask                        0x8
#define G1PHF3_clear_mask                        0xF7

#define G1PHF4                                   0x4
#define G1PHF4_address                           0x692
#define G1PHF4_position                          0x4
#define G1PHF4_size                              0x1
#define G1PHF4_value_mask                        0x10
#define G1PHF4_clear_mask                        0xEF

#define G1PHF5                                   0x5
#define G1PHF5_address                           0x692
#define G1PHF5_position                          0x5
#define G1PHF5_size                              0x1
#define G1PHF5_value_mask                        0x20
#define G1PHF5_clear_mask                        0xDF


/*------------------------------------------------------------------#
| COG1BLKR                                                    0x693 |
#-------------------------------------------------------------------#
| - | - | G1BLKR5 | G1BLKR4 | G1BLKR3 | G1BLKR2 | G1BLKR1 | G1BLKR0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define COG1BLKR                                 0x0
#define COG1BLKR_address                         0x693
#define COG1BLKR_position                        0x0
#define COG1BLKR_size                            0x8
#define COG1BLKR_value_mask                      0xFF
#define COG1BLKR_clear_mask                      0x0

#define G1BLKR                                   0x0
#define G1BLKR_address                           0x693
#define G1BLKR_position                          0x0
#define G1BLKR_size                              0x6
#define G1BLKR_value_mask                        0x3F
#define G1BLKR_clear_mask                        0xC0

#define G1BLKR0                                  0x0
#define G1BLKR0_address                          0x693
#define G1BLKR0_position                         0x0
#define G1BLKR0_size                             0x1
#define G1BLKR0_value_mask                       0x1
#define G1BLKR0_clear_mask                       0xFE

#define G1BLKR1                                  0x1
#define G1BLKR1_address                          0x693
#define G1BLKR1_position                         0x1
#define G1BLKR1_size                             0x1
#define G1BLKR1_value_mask                       0x2
#define G1BLKR1_clear_mask                       0xFD

#define G1BLKR2                                  0x2
#define G1BLKR2_address                          0x693
#define G1BLKR2_position                         0x2
#define G1BLKR2_size                             0x1
#define G1BLKR2_value_mask                       0x4
#define G1BLKR2_clear_mask                       0xFB

#define G1BLKR3                                  0x3
#define G1BLKR3_address                          0x693
#define G1BLKR3_position                         0x3
#define G1BLKR3_size                             0x1
#define G1BLKR3_value_mask                       0x8
#define G1BLKR3_clear_mask                       0xF7

#define G1BLKR4                                  0x4
#define G1BLKR4_address                          0x693
#define G1BLKR4_position                         0x4
#define G1BLKR4_size                             0x1
#define G1BLKR4_value_mask                       0x10
#define G1BLKR4_clear_mask                       0xEF

#define G1BLKR5                                  0x5
#define G1BLKR5_address                          0x693
#define G1BLKR5_position                         0x5
#define G1BLKR5_size                             0x1
#define G1BLKR5_value_mask                       0x20
#define G1BLKR5_clear_mask                       0xDF


/*------------------------------------------------------------------#
| COG1BLKF                                                    0x694 |
#-------------------------------------------------------------------#
| - | - | G1BLKF5 | G1BLKF4 | G1BLKF3 | G1BLKF2 | G1BLKF1 | G1BLKF0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define COG1BLKF                                 0x0
#define COG1BLKF_address                         0x694
#define COG1BLKF_position                        0x0
#define COG1BLKF_size                            0x8
#define COG1BLKF_value_mask                      0xFF
#define COG1BLKF_clear_mask                      0x0

#define G1BLKF                                   0x0
#define G1BLKF_address                           0x694
#define G1BLKF_position                          0x0
#define G1BLKF_size                              0x6
#define G1BLKF_value_mask                        0x3F
#define G1BLKF_clear_mask                        0xC0

#define G1BLKF0                                  0x0
#define G1BLKF0_address                          0x694
#define G1BLKF0_position                         0x0
#define G1BLKF0_size                             0x1
#define G1BLKF0_value_mask                       0x1
#define G1BLKF0_clear_mask                       0xFE

#define G1BLKF1                                  0x1
#define G1BLKF1_address                          0x694
#define G1BLKF1_position                         0x1
#define G1BLKF1_size                             0x1
#define G1BLKF1_value_mask                       0x2
#define G1BLKF1_clear_mask                       0xFD

#define G1BLKF2                                  0x2
#define G1BLKF2_address                          0x694
#define G1BLKF2_position                         0x2
#define G1BLKF2_size                             0x1
#define G1BLKF2_value_mask                       0x4
#define G1BLKF2_clear_mask                       0xFB

#define G1BLKF3                                  0x3
#define G1BLKF3_address                          0x694
#define G1BLKF3_position                         0x3
#define G1BLKF3_size                             0x1
#define G1BLKF3_value_mask                       0x8
#define G1BLKF3_clear_mask                       0xF7

#define G1BLKF4                                  0x4
#define G1BLKF4_address                          0x694
#define G1BLKF4_position                         0x4
#define G1BLKF4_size                             0x1
#define G1BLKF4_value_mask                       0x10
#define G1BLKF4_clear_mask                       0xEF

#define G1BLKF5                                  0x5
#define G1BLKF5_address                          0x694
#define G1BLKF5_position                         0x5
#define G1BLKF5_size                             0x1
#define G1BLKF5_value_mask                       0x20
#define G1BLKF5_clear_mask                       0xDF


/*------------------------------------------------------------#
| COG1DBR                                               0x695 |
#-------------------------------------------------------------#
| - | - | G1DBR5 | G1DBR4 | G1DBR3 | G1DBR2 | G1DBR1 | G1DBR0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define COG1DBR                                  0x0
#define COG1DBR_address                          0x695
#define COG1DBR_position                         0x0
#define COG1DBR_size                             0x8
#define COG1DBR_value_mask                       0xFF
#define COG1DBR_clear_mask                       0x0

#define G1DBR0                                   0x0
#define G1DBR0_address                           0x695
#define G1DBR0_position                          0x0
#define G1DBR0_size                              0x1
#define G1DBR0_value_mask                        0x1
#define G1DBR0_clear_mask                        0xFE

#define G1DBR                                    0x0
#define G1DBR_address                            0x695
#define G1DBR_position                           0x0
#define G1DBR_size                               0x6
#define G1DBR_value_mask                         0x3F
#define G1DBR_clear_mask                         0xC0

#define G1DBR1                                   0x1
#define G1DBR1_address                           0x695
#define G1DBR1_position                          0x1
#define G1DBR1_size                              0x1
#define G1DBR1_value_mask                        0x2
#define G1DBR1_clear_mask                        0xFD

#define G1DBR2                                   0x2
#define G1DBR2_address                           0x695
#define G1DBR2_position                          0x2
#define G1DBR2_size                              0x1
#define G1DBR2_value_mask                        0x4
#define G1DBR2_clear_mask                        0xFB

#define G1DBR3                                   0x3
#define G1DBR3_address                           0x695
#define G1DBR3_position                          0x3
#define G1DBR3_size                              0x1
#define G1DBR3_value_mask                        0x8
#define G1DBR3_clear_mask                        0xF7

#define G1DBR4                                   0x4
#define G1DBR4_address                           0x695
#define G1DBR4_position                          0x4
#define G1DBR4_size                              0x1
#define G1DBR4_value_mask                        0x10
#define G1DBR4_clear_mask                        0xEF

#define G1DBR5                                   0x5
#define G1DBR5_address                           0x695
#define G1DBR5_position                          0x5
#define G1DBR5_size                              0x1
#define G1DBR5_value_mask                        0x20
#define G1DBR5_clear_mask                        0xDF


/*------------------------------------------------------------#
| COG1DBF                                               0x696 |
#-------------------------------------------------------------#
| - | - | G1DBF5 | G1DBF4 | G1DBF3 | G1DBF2 | G1DBF1 | G1DBF0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define COG1DBF                                  0x0
#define COG1DBF_address                          0x696
#define COG1DBF_position                         0x0
#define COG1DBF_size                             0x8
#define COG1DBF_value_mask                       0xFF
#define COG1DBF_clear_mask                       0x0

#define G1DBF0                                   0x0
#define G1DBF0_address                           0x696
#define G1DBF0_position                          0x0
#define G1DBF0_size                              0x1
#define G1DBF0_value_mask                        0x1
#define G1DBF0_clear_mask                        0xFE

#define G1DBF                                    0x0
#define G1DBF_address                            0x696
#define G1DBF_position                           0x0
#define G1DBF_size                               0x6
#define G1DBF_value_mask                         0x3F
#define G1DBF_clear_mask                         0xC0

#define G1DBF1                                   0x1
#define G1DBF1_address                           0x696
#define G1DBF1_position                          0x1
#define G1DBF1_size                              0x1
#define G1DBF1_value_mask                        0x2
#define G1DBF1_clear_mask                        0xFD

#define G1DBF2                                   0x2
#define G1DBF2_address                           0x696
#define G1DBF2_position                          0x2
#define G1DBF2_size                              0x1
#define G1DBF2_value_mask                        0x4
#define G1DBF2_clear_mask                        0xFB

#define G1DBF3                                   0x3
#define G1DBF3_address                           0x696
#define G1DBF3_position                          0x3
#define G1DBF3_size                              0x1
#define G1DBF3_value_mask                        0x8
#define G1DBF3_clear_mask                        0xF7

#define G1DBF4                                   0x4
#define G1DBF4_address                           0x696
#define G1DBF4_position                          0x4
#define G1DBF4_size                              0x1
#define G1DBF4_value_mask                        0x10
#define G1DBF4_clear_mask                        0xEF

#define G1DBF5                                   0x5
#define G1DBF5_address                           0x696
#define G1DBF5_position                          0x5
#define G1DBF5_size                              0x1
#define G1DBF5_value_mask                        0x20
#define G1DBF5_clear_mask                        0xDF


/*--------------------------------------------------------#
| COG1CON0                                          0x697 |
#---------------------------------------------------------#
| G1EN | G1LD | - | G1CS1 | G1CS0 | G1MD2 | G1MD1 | G1MD0 |
#---------------------------------------------------------#
| 7    | 6    | 5 | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------*/

#define COG1CON0                                 0x0
#define COG1CON0_address                         0x697
#define COG1CON0_position                        0x0
#define COG1CON0_size                            0x8
#define COG1CON0_value_mask                      0xFF
#define COG1CON0_clear_mask                      0x0

#define G1MD0                                    0x0
#define G1MD0_address                            0x697
#define G1MD0_position                           0x0
#define G1MD0_size                               0x1
#define G1MD0_value_mask                         0x1
#define G1MD0_clear_mask                         0xFE

#define G1MD                                     0x0
#define G1MD_address                             0x697
#define G1MD_position                            0x0
#define G1MD_size                                0x3
#define G1MD_value_mask                          0x7
#define G1MD_clear_mask                          0xF8

#define G1MD1                                    0x1
#define G1MD1_address                            0x697
#define G1MD1_position                           0x1
#define G1MD1_size                               0x1
#define G1MD1_value_mask                         0x2
#define G1MD1_clear_mask                         0xFD

#define G1MD2                                    0x2
#define G1MD2_address                            0x697
#define G1MD2_position                           0x2
#define G1MD2_size                               0x1
#define G1MD2_value_mask                         0x4
#define G1MD2_clear_mask                         0xFB

#define G1CS0                                    0x3
#define G1CS0_address                            0x697
#define G1CS0_position                           0x3
#define G1CS0_size                               0x1
#define G1CS0_value_mask                         0x8
#define G1CS0_clear_mask                         0xF7

#define G1CS                                     0x3
#define G1CS_address                             0x697
#define G1CS_position                            0x3
#define G1CS_size                                0x2
#define G1CS_value_mask                          0x18
#define G1CS_clear_mask                          0xE7

#define G1CS1                                    0x4
#define G1CS1_address                            0x697
#define G1CS1_position                           0x4
#define G1CS1_size                               0x1
#define G1CS1_value_mask                         0x10
#define G1CS1_clear_mask                         0xEF

#define G1LD                                     0x6
#define G1LD_address                             0x697
#define G1LD_position                            0x6
#define G1LD_size                                0x1
#define G1LD_value_mask                          0x40
#define G1LD_clear_mask                          0xBF

#define G1EN                                     0x7
#define G1EN_address                             0x697
#define G1EN_position                            0x7
#define G1EN_size                                0x1
#define G1EN_value_mask                          0x80
#define G1EN_clear_mask                          0x7F


/*------------------------------------------------------------#
| COG1CON1                                              0x698 |
#-------------------------------------------------------------#
| G1RDBS | G1FDBS | - | - | G1POLD | G1POLC | G1POLB | G1POLA |
#-------------------------------------------------------------#
| 7      | 6      | 5 | 4 | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define COG1CON1                                 0x0
#define COG1CON1_address                         0x698
#define COG1CON1_position                        0x0
#define COG1CON1_size                            0x8
#define COG1CON1_value_mask                      0xFF
#define COG1CON1_clear_mask                      0x0

#define G1POLA                                   0x0
#define G1POLA_address                           0x698
#define G1POLA_position                          0x0
#define G1POLA_size                              0x1
#define G1POLA_value_mask                        0x1
#define G1POLA_clear_mask                        0xFE

#define G1POLB                                   0x1
#define G1POLB_address                           0x698
#define G1POLB_position                          0x1
#define G1POLB_size                              0x1
#define G1POLB_value_mask                        0x2
#define G1POLB_clear_mask                        0xFD

#define G1POLC                                   0x2
#define G1POLC_address                           0x698
#define G1POLC_position                          0x2
#define G1POLC_size                              0x1
#define G1POLC_value_mask                        0x4
#define G1POLC_clear_mask                        0xFB

#define G1POLD                                   0x3
#define G1POLD_address                           0x698
#define G1POLD_position                          0x3
#define G1POLD_size                              0x1
#define G1POLD_value_mask                        0x8
#define G1POLD_clear_mask                        0xF7

#define G1FDBS                                   0x6
#define G1FDBS_address                           0x698
#define G1FDBS_position                          0x6
#define G1FDBS_size                              0x1
#define G1FDBS_value_mask                        0x40
#define G1FDBS_clear_mask                        0xBF

#define G1RDBS                                   0x7
#define G1RDBS_address                           0x698
#define G1RDBS_position                          0x7
#define G1RDBS_size                              0x1
#define G1RDBS_value_mask                        0x80
#define G1RDBS_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| COG1RIS                                                         0x699 |
#-----------------------------------------------------------------------#
| G1RIS7 | G1RIS6 | G1RIS5 | G1RIS4 | G1RIS3 | G1RIS2 | G1RIS1 | G1RIS0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define COG1RIS                                  0x0
#define COG1RIS_address                          0x699
#define COG1RIS_position                         0x0
#define COG1RIS_size                             0x8
#define COG1RIS_value_mask                       0xFF
#define COG1RIS_clear_mask                       0x0

#define G1RIS0                                   0x0
#define G1RIS0_address                           0x699
#define G1RIS0_position                          0x0
#define G1RIS0_size                              0x1
#define G1RIS0_value_mask                        0x1
#define G1RIS0_clear_mask                        0xFE

#define G1RIS1                                   0x1
#define G1RIS1_address                           0x699
#define G1RIS1_position                          0x1
#define G1RIS1_size                              0x1
#define G1RIS1_value_mask                        0x2
#define G1RIS1_clear_mask                        0xFD

#define G1RIS2                                   0x2
#define G1RIS2_address                           0x699
#define G1RIS2_position                          0x2
#define G1RIS2_size                              0x1
#define G1RIS2_value_mask                        0x4
#define G1RIS2_clear_mask                        0xFB

#define G1RIS3                                   0x3
#define G1RIS3_address                           0x699
#define G1RIS3_position                          0x3
#define G1RIS3_size                              0x1
#define G1RIS3_value_mask                        0x8
#define G1RIS3_clear_mask                        0xF7

#define G1RIS4                                   0x4
#define G1RIS4_address                           0x699
#define G1RIS4_position                          0x4
#define G1RIS4_size                              0x1
#define G1RIS4_value_mask                        0x10
#define G1RIS4_clear_mask                        0xEF

#define G1RIS5                                   0x5
#define G1RIS5_address                           0x699
#define G1RIS5_position                          0x5
#define G1RIS5_size                              0x1
#define G1RIS5_value_mask                        0x20
#define G1RIS5_clear_mask                        0xDF

#define G1RIS6                                   0x6
#define G1RIS6_address                           0x699
#define G1RIS6_position                          0x6
#define G1RIS6_size                              0x1
#define G1RIS6_value_mask                        0x40
#define G1RIS6_clear_mask                        0xBF

#define G1RIS7                                   0x7
#define G1RIS7_address                           0x699
#define G1RIS7_position                          0x7
#define G1RIS7_size                              0x1
#define G1RIS7_value_mask                        0x80
#define G1RIS7_clear_mask                        0x7F


/*------------------------------------------------------------------------------#
| COG1RSIM                                                                0x69A |
#-------------------------------------------------------------------------------#
| G1RSIM7 | G1RSIM6 | G1RSIM5 | G1RSIM4 | G1RSIM3 | G1RSIM2 | G1RSIM1 | G1RSIM0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define COG1RSIM                                 0x0
#define COG1RSIM_address                         0x69A
#define COG1RSIM_position                        0x0
#define COG1RSIM_size                            0x8
#define COG1RSIM_value_mask                      0xFF
#define COG1RSIM_clear_mask                      0x0

#define G1RSIM0                                  0x0
#define G1RSIM0_address                          0x69A
#define G1RSIM0_position                         0x0
#define G1RSIM0_size                             0x1
#define G1RSIM0_value_mask                       0x1
#define G1RSIM0_clear_mask                       0xFE

#define G1RSIM1                                  0x1
#define G1RSIM1_address                          0x69A
#define G1RSIM1_position                         0x1
#define G1RSIM1_size                             0x1
#define G1RSIM1_value_mask                       0x2
#define G1RSIM1_clear_mask                       0xFD

#define G1RSIM2                                  0x2
#define G1RSIM2_address                          0x69A
#define G1RSIM2_position                         0x2
#define G1RSIM2_size                             0x1
#define G1RSIM2_value_mask                       0x4
#define G1RSIM2_clear_mask                       0xFB

#define G1RSIM3                                  0x3
#define G1RSIM3_address                          0x69A
#define G1RSIM3_position                         0x3
#define G1RSIM3_size                             0x1
#define G1RSIM3_value_mask                       0x8
#define G1RSIM3_clear_mask                       0xF7

#define G1RSIM4                                  0x4
#define G1RSIM4_address                          0x69A
#define G1RSIM4_position                         0x4
#define G1RSIM4_size                             0x1
#define G1RSIM4_value_mask                       0x10
#define G1RSIM4_clear_mask                       0xEF

#define G1RSIM5                                  0x5
#define G1RSIM5_address                          0x69A
#define G1RSIM5_position                         0x5
#define G1RSIM5_size                             0x1
#define G1RSIM5_value_mask                       0x20
#define G1RSIM5_clear_mask                       0xDF

#define G1RSIM6                                  0x6
#define G1RSIM6_address                          0x69A
#define G1RSIM6_position                         0x6
#define G1RSIM6_size                             0x1
#define G1RSIM6_value_mask                       0x40
#define G1RSIM6_clear_mask                       0xBF

#define G1RSIM7                                  0x7
#define G1RSIM7_address                          0x69A
#define G1RSIM7_position                         0x7
#define G1RSIM7_size                             0x1
#define G1RSIM7_value_mask                       0x80
#define G1RSIM7_clear_mask                       0x7F


/*----------------------------------------------------------------------#
| COG1FIS                                                         0x69B |
#-----------------------------------------------------------------------#
| G1FIS7 | G1FIS6 | G1FIS5 | G1FIS4 | G1FIS3 | G1FIS2 | G1FIS1 | G1FIS0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define COG1FIS                                  0x0
#define COG1FIS_address                          0x69B
#define COG1FIS_position                         0x0
#define COG1FIS_size                             0x8
#define COG1FIS_value_mask                       0xFF
#define COG1FIS_clear_mask                       0x0

#define G1FIS0                                   0x0
#define G1FIS0_address                           0x69B
#define G1FIS0_position                          0x0
#define G1FIS0_size                              0x1
#define G1FIS0_value_mask                        0x1
#define G1FIS0_clear_mask                        0xFE

#define G1FIS1                                   0x1
#define G1FIS1_address                           0x69B
#define G1FIS1_position                          0x1
#define G1FIS1_size                              0x1
#define G1FIS1_value_mask                        0x2
#define G1FIS1_clear_mask                        0xFD

#define G1FIS2                                   0x2
#define G1FIS2_address                           0x69B
#define G1FIS2_position                          0x2
#define G1FIS2_size                              0x1
#define G1FIS2_value_mask                        0x4
#define G1FIS2_clear_mask                        0xFB

#define G1FIS3                                   0x3
#define G1FIS3_address                           0x69B
#define G1FIS3_position                          0x3
#define G1FIS3_size                              0x1
#define G1FIS3_value_mask                        0x8
#define G1FIS3_clear_mask                        0xF7

#define G1FIS4                                   0x4
#define G1FIS4_address                           0x69B
#define G1FIS4_position                          0x4
#define G1FIS4_size                              0x1
#define G1FIS4_value_mask                        0x10
#define G1FIS4_clear_mask                        0xEF

#define G1FIS5                                   0x5
#define G1FIS5_address                           0x69B
#define G1FIS5_position                          0x5
#define G1FIS5_size                              0x1
#define G1FIS5_value_mask                        0x20
#define G1FIS5_clear_mask                        0xDF

#define G1FIS6                                   0x6
#define G1FIS6_address                           0x69B
#define G1FIS6_position                          0x6
#define G1FIS6_size                              0x1
#define G1FIS6_value_mask                        0x40
#define G1FIS6_clear_mask                        0xBF

#define G1FIS7                                   0x7
#define G1FIS7_address                           0x69B
#define G1FIS7_position                          0x7
#define G1FIS7_size                              0x1
#define G1FIS7_value_mask                        0x80
#define G1FIS7_clear_mask                        0x7F


/*------------------------------------------------------------------------------#
| COG1FSIM                                                                0x69C |
#-------------------------------------------------------------------------------#
| G1FSIM7 | G1FSIM6 | G1FSIM5 | G1FSIM4 | G1FSIM3 | G1FSIM2 | G1FSIM1 | G1FSIM0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define COG1FSIM                                 0x0
#define COG1FSIM_address                         0x69C
#define COG1FSIM_position                        0x0
#define COG1FSIM_size                            0x8
#define COG1FSIM_value_mask                      0xFF
#define COG1FSIM_clear_mask                      0x0

#define G1FSIM0                                  0x0
#define G1FSIM0_address                          0x69C
#define G1FSIM0_position                         0x0
#define G1FSIM0_size                             0x1
#define G1FSIM0_value_mask                       0x1
#define G1FSIM0_clear_mask                       0xFE

#define G1FSIM1                                  0x1
#define G1FSIM1_address                          0x69C
#define G1FSIM1_position                         0x1
#define G1FSIM1_size                             0x1
#define G1FSIM1_value_mask                       0x2
#define G1FSIM1_clear_mask                       0xFD

#define G1FSIM2                                  0x2
#define G1FSIM2_address                          0x69C
#define G1FSIM2_position                         0x2
#define G1FSIM2_size                             0x1
#define G1FSIM2_value_mask                       0x4
#define G1FSIM2_clear_mask                       0xFB

#define G1FSIM3                                  0x3
#define G1FSIM3_address                          0x69C
#define G1FSIM3_position                         0x3
#define G1FSIM3_size                             0x1
#define G1FSIM3_value_mask                       0x8
#define G1FSIM3_clear_mask                       0xF7

#define G1FSIM4                                  0x4
#define G1FSIM4_address                          0x69C
#define G1FSIM4_position                         0x4
#define G1FSIM4_size                             0x1
#define G1FSIM4_value_mask                       0x10
#define G1FSIM4_clear_mask                       0xEF

#define G1FSIM5                                  0x5
#define G1FSIM5_address                          0x69C
#define G1FSIM5_position                         0x5
#define G1FSIM5_size                             0x1
#define G1FSIM5_value_mask                       0x20
#define G1FSIM5_clear_mask                       0xDF

#define G1FSIM6                                  0x6
#define G1FSIM6_address                          0x69C
#define G1FSIM6_position                         0x6
#define G1FSIM6_size                             0x1
#define G1FSIM6_value_mask                       0x40
#define G1FSIM6_clear_mask                       0xBF

#define G1FSIM7                                  0x7
#define G1FSIM7_address                          0x69C
#define G1FSIM7_position                         0x7
#define G1FSIM7_size                             0x1
#define G1FSIM7_value_mask                       0x80
#define G1FSIM7_clear_mask                       0x7F


/*--------------------------------------------------------------------#
| COG1ASD0                                                      0x69D |
#---------------------------------------------------------------------#
| G1ASE | G1ARSEN | G1ASDBD1 | G1ASDBD0 | G1ASDAC1 | G1ASDAC0 | - | - |
#---------------------------------------------------------------------#
| 7     | 6       | 5        | 4        | 3        | 2        | 1 | 0 |
#--------------------------------------------------------------------*/

#define COG1ASD0                                 0x0
#define COG1ASD0_address                         0x69D
#define COG1ASD0_position                        0x0
#define COG1ASD0_size                            0x8
#define COG1ASD0_value_mask                      0xFF
#define COG1ASD0_clear_mask                      0x0

#define G1ASDAC0                                 0x2
#define G1ASDAC0_address                         0x69D
#define G1ASDAC0_position                        0x2
#define G1ASDAC0_size                            0x1
#define G1ASDAC0_value_mask                      0x4
#define G1ASDAC0_clear_mask                      0xFB

#define G1ASDAC                                  0x2
#define G1ASDAC_address                          0x69D
#define G1ASDAC_position                         0x2
#define G1ASDAC_size                             0x2
#define G1ASDAC_value_mask                       0xC
#define G1ASDAC_clear_mask                       0xF3

#define G1ASDAC1                                 0x3
#define G1ASDAC1_address                         0x69D
#define G1ASDAC1_position                        0x3
#define G1ASDAC1_size                            0x1
#define G1ASDAC1_value_mask                      0x8
#define G1ASDAC1_clear_mask                      0xF7

#define G1ASDBD0                                 0x4
#define G1ASDBD0_address                         0x69D
#define G1ASDBD0_position                        0x4
#define G1ASDBD0_size                            0x1
#define G1ASDBD0_value_mask                      0x10
#define G1ASDBD0_clear_mask                      0xEF

#define G1ASDBD                                  0x4
#define G1ASDBD_address                          0x69D
#define G1ASDBD_position                         0x4
#define G1ASDBD_size                             0x2
#define G1ASDBD_value_mask                       0x30
#define G1ASDBD_clear_mask                       0xCF

#define G1ASDBD1                                 0x5
#define G1ASDBD1_address                         0x69D
#define G1ASDBD1_position                        0x5
#define G1ASDBD1_size                            0x1
#define G1ASDBD1_value_mask                      0x20
#define G1ASDBD1_clear_mask                      0xDF

#define G1ARSEN                                  0x6
#define G1ARSEN_address                          0x69D
#define G1ARSEN_position                         0x6
#define G1ARSEN_size                             0x1
#define G1ARSEN_value_mask                       0x40
#define G1ARSEN_clear_mask                       0xBF

#define G1ASE                                    0x7
#define G1ASE_address                            0x69D
#define G1ASE_position                           0x7
#define G1ASE_size                               0x1
#define G1ASE_value_mask                         0x80
#define G1ASE_clear_mask                         0x7F


/*--------------------------------------------------#
| COG1ASD1                                    0x69E |
#---------------------------------------------------#
| - | - | - | - | G1AS3E | G1AS2E | G1AS1E | G1AS0E |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define COG1ASD1                                 0x0
#define COG1ASD1_address                         0x69E
#define COG1ASD1_position                        0x0
#define COG1ASD1_size                            0x8
#define COG1ASD1_value_mask                      0xFF
#define COG1ASD1_clear_mask                      0x0

#define G1AS0E                                   0x0
#define G1AS0E_address                           0x69E
#define G1AS0E_position                          0x0
#define G1AS0E_size                              0x1
#define G1AS0E_value_mask                        0x1
#define G1AS0E_clear_mask                        0xFE

#define G1AS1E                                   0x1
#define G1AS1E_address                           0x69E
#define G1AS1E_position                          0x1
#define G1AS1E_size                              0x1
#define G1AS1E_value_mask                        0x2
#define G1AS1E_clear_mask                        0xFD

#define G1AS2E                                   0x2
#define G1AS2E_address                           0x69E
#define G1AS2E_position                          0x2
#define G1AS2E_size                              0x1
#define G1AS2E_value_mask                        0x4
#define G1AS2E_clear_mask                        0xFB

#define G1AS3E                                   0x3
#define G1AS3E_address                           0x69E
#define G1AS3E_position                          0x3
#define G1AS3E_size                              0x1
#define G1AS3E_value_mask                        0x8
#define G1AS3E_clear_mask                        0xF7


/*--------------------------------------------------------------------------#
| COG1STR                                                             0x69F |
#---------------------------------------------------------------------------#
| G1SDATD | G1SDATC | G1SDATB | G1SDATA | G1STRD | G1STRC | G1STRB | G1STRA |
#---------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------------------*/

#define COG1STR                                  0x0
#define COG1STR_address                          0x69F
#define COG1STR_position                         0x0
#define COG1STR_size                             0x8
#define COG1STR_value_mask                       0xFF
#define COG1STR_clear_mask                       0x0

#define G1STRA                                   0x0
#define G1STRA_address                           0x69F
#define G1STRA_position                          0x0
#define G1STRA_size                              0x1
#define G1STRA_value_mask                        0x1
#define G1STRA_clear_mask                        0xFE

#define G1STRB                                   0x1
#define G1STRB_address                           0x69F
#define G1STRB_position                          0x1
#define G1STRB_size                              0x1
#define G1STRB_value_mask                        0x2
#define G1STRB_clear_mask                        0xFD

#define G1STRC                                   0x2
#define G1STRC_address                           0x69F
#define G1STRC_position                          0x2
#define G1STRC_size                              0x1
#define G1STRC_value_mask                        0x4
#define G1STRC_clear_mask                        0xFB

#define G1STRD                                   0x3
#define G1STRD_address                           0x69F
#define G1STRD_position                          0x3
#define G1STRD_size                              0x1
#define G1STRD_value_mask                        0x8
#define G1STRD_clear_mask                        0xF7

#define G1SDATA                                  0x4
#define G1SDATA_address                          0x69F
#define G1SDATA_position                         0x4
#define G1SDATA_size                             0x1
#define G1SDATA_value_mask                       0x10
#define G1SDATA_clear_mask                       0xEF

#define G1SDATB                                  0x5
#define G1SDATB_address                          0x69F
#define G1SDATB_position                         0x5
#define G1SDATB_size                             0x1
#define G1SDATB_value_mask                       0x20
#define G1SDATB_clear_mask                       0xDF

#define G1SDATC                                  0x6
#define G1SDATC_address                          0x69F
#define G1SDATC_position                         0x6
#define G1SDATC_size                             0x1
#define G1SDATC_value_mask                       0x40
#define G1SDATC_clear_mask                       0xBF

#define G1SDATD                                  0x7
#define G1SDATD_address                          0x69F
#define G1SDATD_position                         0x7
#define G1SDATD_size                             0x1
#define G1SDATD_value_mask                       0x80
#define G1SDATD_clear_mask                       0x7F


/*--------------------------------------#
| PPSLOCK                         0xE0F |
#---------------------------------------#
| - | - | - | - | - | - | - | PPSLOCKED |
#---------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0         |
#--------------------------------------*/

#define PPSLOCK                                  0x0
#define PPSLOCK_address                          0xE0F
#define PPSLOCK_position                         0x0
#define PPSLOCK_size                             0x8
#define PPSLOCK_value_mask                       0xFF
#define PPSLOCK_clear_mask                       0x0

#define PPSLOCKED                                0x0
#define PPSLOCKED_address                        0xE0F
#define PPSLOCKED_position                       0x0
#define PPSLOCKED_size                           0x1
#define PPSLOCKED_value_mask                     0x1
#define PPSLOCKED_clear_mask                     0xFE


/*------------------------------#
| INTPPS                  0xE10 |
#-------------------------------#
| - | - | - | INTPPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define INTPPS                                   0x0
#define INTPPS_address                           0xE10
#define INTPPS_position                          0x0
#define INTPPS_size                              0x5
#define INTPPS_value_mask                        0x1F
#define INTPPS_clear_mask                        0xE0


/*------------------------------#
| T0CKIPPS                0xE11 |
#-------------------------------#
| - | - | - | T0CKIPPS          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T0CKIPPS                                 0x0
#define T0CKIPPS_address                         0xE11
#define T0CKIPPS_position                        0x0
#define T0CKIPPS_size                            0x5
#define T0CKIPPS_value_mask                      0x1F
#define T0CKIPPS_clear_mask                      0xE0


/*------------------------------#
| T1CKIPPS                0xE12 |
#-------------------------------#
| - | - | - | T1CKIPPS          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T1CKIPPS                                 0x0
#define T1CKIPPS_address                         0xE12
#define T1CKIPPS_position                        0x0
#define T1CKIPPS_size                            0x5
#define T1CKIPPS_value_mask                      0x1F
#define T1CKIPPS_clear_mask                      0xE0


/*------------------------------#
| T1GPPS                  0xE13 |
#-------------------------------#
| - | - | - | T1GPPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T1GPPS                                   0x0
#define T1GPPS_address                           0xE13
#define T1GPPS_position                          0x0
#define T1GPPS_size                              0x5
#define T1GPPS_value_mask                        0x1F
#define T1GPPS_clear_mask                        0xE0


/*------------------------------#
| CCP1PPS                 0xE14 |
#-------------------------------#
| - | - | - | CCP1PPS           |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCP1PPS                                  0x0
#define CCP1PPS_address                          0xE14
#define CCP1PPS_position                         0x0
#define CCP1PPS_size                             0x5
#define CCP1PPS_value_mask                       0x1F
#define CCP1PPS_clear_mask                       0xE0


/*------------------------------#
| CCP2PPS                 0xE15 |
#-------------------------------#
| - | - | - | CCP2PPS           |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCP2PPS                                  0x0
#define CCP2PPS_address                          0xE15
#define CCP2PPS_position                         0x0
#define CCP2PPS_size                             0x5
#define CCP2PPS_value_mask                       0x1F
#define CCP2PPS_clear_mask                       0xE0


/*------------------------------#
| COGINPPS                0xE17 |
#-------------------------------#
| - | - | - | COGINPPS          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define COGINPPS                                 0x0
#define COGINPPS_address                         0xE17
#define COGINPPS_position                        0x0
#define COGINPPS_size                            0x5
#define COGINPPS_value_mask                      0x1F
#define COGINPPS_clear_mask                      0xE0


/*------------------------------#
| SSPCLKPPS               0xE20 |
#-------------------------------#
| - | - | - | SSPCLKPPS         |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSPCLKPPS                                0x0
#define SSPCLKPPS_address                        0xE20
#define SSPCLKPPS_position                       0x0
#define SSPCLKPPS_size                           0x5
#define SSPCLKPPS_value_mask                     0x1F
#define SSPCLKPPS_clear_mask                     0xE0


/*------------------------------#
| SSPDATPPS               0xE21 |
#-------------------------------#
| - | - | - | SSPDATPPS         |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSPDATPPS                                0x0
#define SSPDATPPS_address                        0xE21
#define SSPDATPPS_position                       0x0
#define SSPDATPPS_size                           0x5
#define SSPDATPPS_value_mask                     0x1F
#define SSPDATPPS_clear_mask                     0xE0


/*------------------------------#
| SSPSSPPS                0xE22 |
#-------------------------------#
| - | - | - | SSPSSPPS          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSPSSPPS                                 0x0
#define SSPSSPPS_address                         0xE22
#define SSPSSPPS_position                        0x0
#define SSPSSPPS_size                            0x5
#define SSPSSPPS_value_mask                      0x1F
#define SSPSSPPS_clear_mask                      0xE0


/*------------------------------#
| RXPPS                   0xE24 |
#-------------------------------#
| - | - | - | RXPPS             |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RXPPS                                    0x0
#define RXPPS_address                            0xE24
#define RXPPS_position                           0x0
#define RXPPS_size                               0x5
#define RXPPS_value_mask                         0x1F
#define RXPPS_clear_mask                         0xE0


/*------------------------------#
| CKPPS                   0xE25 |
#-------------------------------#
| - | - | - | CKPPS             |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CKPPS                                    0x0
#define CKPPS_address                            0xE25
#define CKPPS_position                           0x0
#define CKPPS_size                               0x5
#define CKPPS_value_mask                         0x1F
#define CKPPS_clear_mask                         0xE0


/*------------------------------#
| CLCIN0PPS               0xE28 |
#-------------------------------#
| - | - | - | CLCIN0PPS         |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CLCIN0PPS                                0x0
#define CLCIN0PPS_address                        0xE28
#define CLCIN0PPS_position                       0x0
#define CLCIN0PPS_size                           0x5
#define CLCIN0PPS_value_mask                     0x1F
#define CLCIN0PPS_clear_mask                     0xE0


/*------------------------------#
| CLCIN1PPS               0xE29 |
#-------------------------------#
| - | - | - | CLCIN1PPS         |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CLCIN1PPS                                0x0
#define CLCIN1PPS_address                        0xE29
#define CLCIN1PPS_position                       0x0
#define CLCIN1PPS_size                           0x5
#define CLCIN1PPS_value_mask                     0x1F
#define CLCIN1PPS_clear_mask                     0xE0


/*------------------------------#
| CLCIN2PPS               0xE2A |
#-------------------------------#
| - | - | - | CLCIN2PPS         |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CLCIN2PPS                                0x0
#define CLCIN2PPS_address                        0xE2A
#define CLCIN2PPS_position                       0x0
#define CLCIN2PPS_size                           0x5
#define CLCIN2PPS_value_mask                     0x1F
#define CLCIN2PPS_clear_mask                     0xE0


/*------------------------------#
| CLCIN3PPS               0xE2B |
#-------------------------------#
| - | - | - | CLCIN3PPS         |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CLCIN3PPS                                0x0
#define CLCIN3PPS_address                        0xE2B
#define CLCIN3PPS_position                       0x0
#define CLCIN3PPS_size                           0x5
#define CLCIN3PPS_value_mask                     0x1F
#define CLCIN3PPS_clear_mask                     0xE0


/*------------------------------#
| RA0PPS                  0xE90 |
#-------------------------------#
| - | - | - | RA0PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RA0PPS                                   0x0
#define RA0PPS_address                           0xE90
#define RA0PPS_position                          0x0
#define RA0PPS_size                              0x5
#define RA0PPS_value_mask                        0x1F
#define RA0PPS_clear_mask                        0xE0


/*------------------------------#
| RA1PPS                  0xE91 |
#-------------------------------#
| - | - | - | RA1PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RA1PPS                                   0x0
#define RA1PPS_address                           0xE91
#define RA1PPS_position                          0x0
#define RA1PPS_size                              0x5
#define RA1PPS_value_mask                        0x1F
#define RA1PPS_clear_mask                        0xE0


/*------------------------------#
| RA2PPS                  0xE92 |
#-------------------------------#
| - | - | - | RA2PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RA2PPS                                   0x0
#define RA2PPS_address                           0xE92
#define RA2PPS_position                          0x0
#define RA2PPS_size                              0x5
#define RA2PPS_value_mask                        0x1F
#define RA2PPS_clear_mask                        0xE0


/*------------------------------#
| RA3PPS                  0xE93 |
#-------------------------------#
| - | - | - | RA3PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RA3PPS                                   0x0
#define RA3PPS_address                           0xE93
#define RA3PPS_position                          0x0
#define RA3PPS_size                              0x5
#define RA3PPS_value_mask                        0x1F
#define RA3PPS_clear_mask                        0xE0


/*------------------------------#
| RA4PPS                  0xE94 |
#-------------------------------#
| - | - | - | RA4PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RA4PPS                                   0x0
#define RA4PPS_address                           0xE94
#define RA4PPS_position                          0x0
#define RA4PPS_size                              0x5
#define RA4PPS_value_mask                        0x1F
#define RA4PPS_clear_mask                        0xE0


/*------------------------------#
| RA5PPS                  0xE95 |
#-------------------------------#
| - | - | - | RA5PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RA5PPS                                   0x0
#define RA5PPS_address                           0xE95
#define RA5PPS_position                          0x0
#define RA5PPS_size                              0x5
#define RA5PPS_value_mask                        0x1F
#define RA5PPS_clear_mask                        0xE0


/*------------------------------#
| RA6PPS                  0xE96 |
#-------------------------------#
| - | - | - | RA6PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RA6PPS                                   0x0
#define RA6PPS_address                           0xE96
#define RA6PPS_position                          0x0
#define RA6PPS_size                              0x5
#define RA6PPS_value_mask                        0x1F
#define RA6PPS_clear_mask                        0xE0


/*------------------------------#
| RA7PPS                  0xE97 |
#-------------------------------#
| - | - | - | RA7PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RA7PPS                                   0x0
#define RA7PPS_address                           0xE97
#define RA7PPS_position                          0x0
#define RA7PPS_size                              0x5
#define RA7PPS_value_mask                        0x1F
#define RA7PPS_clear_mask                        0xE0


/*------------------------------#
| RB0PPS                  0xE98 |
#-------------------------------#
| - | - | - | RB0PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RB0PPS                                   0x0
#define RB0PPS_address                           0xE98
#define RB0PPS_position                          0x0
#define RB0PPS_size                              0x5
#define RB0PPS_value_mask                        0x1F
#define RB0PPS_clear_mask                        0xE0


/*------------------------------#
| RB1PPS                  0xE99 |
#-------------------------------#
| - | - | - | RB1PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RB1PPS                                   0x0
#define RB1PPS_address                           0xE99
#define RB1PPS_position                          0x0
#define RB1PPS_size                              0x5
#define RB1PPS_value_mask                        0x1F
#define RB1PPS_clear_mask                        0xE0


/*------------------------------#
| RB2PPS                  0xE9A |
#-------------------------------#
| - | - | - | RB2PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RB2PPS                                   0x0
#define RB2PPS_address                           0xE9A
#define RB2PPS_position                          0x0
#define RB2PPS_size                              0x5
#define RB2PPS_value_mask                        0x1F
#define RB2PPS_clear_mask                        0xE0


/*------------------------------#
| RB3PPS                  0xE9B |
#-------------------------------#
| - | - | - | RB3PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RB3PPS                                   0x0
#define RB3PPS_address                           0xE9B
#define RB3PPS_position                          0x0
#define RB3PPS_size                              0x5
#define RB3PPS_value_mask                        0x1F
#define RB3PPS_clear_mask                        0xE0


/*------------------------------#
| RB4PPS                  0xE9C |
#-------------------------------#
| - | - | - | RB4PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RB4PPS                                   0x0
#define RB4PPS_address                           0xE9C
#define RB4PPS_position                          0x0
#define RB4PPS_size                              0x5
#define RB4PPS_value_mask                        0x1F
#define RB4PPS_clear_mask                        0xE0


/*------------------------------#
| RB5PPS                  0xE9D |
#-------------------------------#
| - | - | - | RB5PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RB5PPS                                   0x0
#define RB5PPS_address                           0xE9D
#define RB5PPS_position                          0x0
#define RB5PPS_size                              0x5
#define RB5PPS_value_mask                        0x1F
#define RB5PPS_clear_mask                        0xE0


/*------------------------------#
| RB6PPS                  0xE9E |
#-------------------------------#
| - | - | - | RB6PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RB6PPS                                   0x0
#define RB6PPS_address                           0xE9E
#define RB6PPS_position                          0x0
#define RB6PPS_size                              0x5
#define RB6PPS_value_mask                        0x1F
#define RB6PPS_clear_mask                        0xE0


/*------------------------------#
| RB7PPS                  0xE9F |
#-------------------------------#
| - | - | - | RB7PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RB7PPS                                   0x0
#define RB7PPS_address                           0xE9F
#define RB7PPS_position                          0x0
#define RB7PPS_size                              0x5
#define RB7PPS_value_mask                        0x1F
#define RB7PPS_clear_mask                        0xE0


/*------------------------------#
| RC0PPS                  0xEA0 |
#-------------------------------#
| - | - | - | RC0PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RC0PPS                                   0x0
#define RC0PPS_address                           0xEA0
#define RC0PPS_position                          0x0
#define RC0PPS_size                              0x5
#define RC0PPS_value_mask                        0x1F
#define RC0PPS_clear_mask                        0xE0


/*------------------------------#
| RC1PPS                  0xEA1 |
#-------------------------------#
| - | - | - | RC1PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RC1PPS                                   0x0
#define RC1PPS_address                           0xEA1
#define RC1PPS_position                          0x0
#define RC1PPS_size                              0x5
#define RC1PPS_value_mask                        0x1F
#define RC1PPS_clear_mask                        0xE0


/*------------------------------#
| RC2PPS                  0xEA2 |
#-------------------------------#
| - | - | - | RC2PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RC2PPS                                   0x0
#define RC2PPS_address                           0xEA2
#define RC2PPS_position                          0x0
#define RC2PPS_size                              0x5
#define RC2PPS_value_mask                        0x1F
#define RC2PPS_clear_mask                        0xE0


/*------------------------------#
| RC3PPS                  0xEA3 |
#-------------------------------#
| - | - | - | RC3PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RC3PPS                                   0x0
#define RC3PPS_address                           0xEA3
#define RC3PPS_position                          0x0
#define RC3PPS_size                              0x5
#define RC3PPS_value_mask                        0x1F
#define RC3PPS_clear_mask                        0xE0


/*------------------------------#
| RC4PPS                  0xEA4 |
#-------------------------------#
| - | - | - | RC4PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RC4PPS                                   0x0
#define RC4PPS_address                           0xEA4
#define RC4PPS_position                          0x0
#define RC4PPS_size                              0x5
#define RC4PPS_value_mask                        0x1F
#define RC4PPS_clear_mask                        0xE0


/*------------------------------#
| RC5PPS                  0xEA5 |
#-------------------------------#
| - | - | - | RC5PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RC5PPS                                   0x0
#define RC5PPS_address                           0xEA5
#define RC5PPS_position                          0x0
#define RC5PPS_size                              0x5
#define RC5PPS_value_mask                        0x1F
#define RC5PPS_clear_mask                        0xE0


/*------------------------------#
| RC6PPS                  0xEA6 |
#-------------------------------#
| - | - | - | RC6PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RC6PPS                                   0x0
#define RC6PPS_address                           0xEA6
#define RC6PPS_position                          0x0
#define RC6PPS_size                              0x5
#define RC6PPS_value_mask                        0x1F
#define RC6PPS_clear_mask                        0xE0


/*------------------------------#
| RC7PPS                  0xEA7 |
#-------------------------------#
| - | - | - | RC7PPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RC7PPS                                   0x0
#define RC7PPS_address                           0xEA7
#define RC7PPS_position                          0x0
#define RC7PPS_size                              0x5
#define RC7PPS_value_mask                        0x1F
#define RC7PPS_clear_mask                        0xE0


/*-------------------------------------------------------#
| CLCDATA                                          0xF0F |
#--------------------------------------------------------#
| - | - | - | - | MLC4OUT | MLC3OUT | MCLC2OUT | MLC1OUT |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1        | 0       |
#-------------------------------------------------------*/

#define CLCDATA                                  0x0
#define CLCDATA_address                          0xF0F
#define CLCDATA_position                         0x0
#define CLCDATA_size                             0x8
#define CLCDATA_value_mask                       0xFF
#define CLCDATA_clear_mask                       0x0

#define MCLC1OUT                                 0x0
#define MCLC1OUT_address                         0xF0F
#define MCLC1OUT_position                        0x0
#define MCLC1OUT_size                            0x1
#define MCLC1OUT_value_mask                      0x1
#define MCLC1OUT_clear_mask                      0xFE

#define MLC1OUT                                  0x0
#define MLC1OUT_address                          0xF0F
#define MLC1OUT_position                         0x0
#define MLC1OUT_size                             0x1
#define MLC1OUT_value_mask                       0x1
#define MLC1OUT_clear_mask                       0xFE

#define MCLC2OUT                                 0x1
#define MCLC2OUT_address                         0xF0F
#define MCLC2OUT_position                        0x1
#define MCLC2OUT_size                            0x1
#define MCLC2OUT_value_mask                      0x2
#define MCLC2OUT_clear_mask                      0xFD

#define MLC2OUT                                  0x1
#define MLC2OUT_address                          0xF0F
#define MLC2OUT_position                         0x1
#define MLC2OUT_size                             0x1
#define MLC2OUT_value_mask                       0x2
#define MLC2OUT_clear_mask                       0xFD

#define MLC3OUT                                  0x2
#define MLC3OUT_address                          0xF0F
#define MLC3OUT_position                         0x2
#define MLC3OUT_size                             0x1
#define MLC3OUT_value_mask                       0x4
#define MLC3OUT_clear_mask                       0xFB

#define MCLC3OUT                                 0x2
#define MCLC3OUT_address                         0xF0F
#define MCLC3OUT_position                        0x2
#define MCLC3OUT_size                            0x1
#define MCLC3OUT_value_mask                      0x4
#define MCLC3OUT_clear_mask                      0xFB

#define MLC4OUT                                  0x3
#define MLC4OUT_address                          0xF0F
#define MLC4OUT_position                         0x3
#define MLC4OUT_size                             0x1
#define MLC4OUT_value_mask                       0x8
#define MLC4OUT_clear_mask                       0xF7

#define MCLC4OUT                                 0x3
#define MCLC4OUT_address                         0xF0F
#define MCLC4OUT_position                        0x3
#define MCLC4OUT_size                            0x1
#define MCLC4OUT_value_mask                      0x8
#define MCLC4OUT_clear_mask                      0xF7


/*---------------------------------------------------------------------------------------#
| CLC1CON                                                                          0xF10 |
#----------------------------------------------------------------------------------------#
| LC1EN | - | LC1OUT | CLC1CON_INTP | LC1INTN | LC1MODE2 | CLC1CON_MODE1 | CLC1CON_MODE0 |
#----------------------------------------------------------------------------------------#
| 7     | 6 | 5      | 4            | 3       | 2        | 1             | 0             |
#---------------------------------------------------------------------------------------*/

#define CLC1CON                                  0x0
#define CLC1CON_address                          0xF10
#define CLC1CON_position                         0x0
#define CLC1CON_size                             0x8
#define CLC1CON_value_mask                       0xFF
#define CLC1CON_clear_mask                       0x0

#define CLC1CON_MODE                             0x0
#define CLC1CON_MODE_address                     0xF10
#define CLC1CON_MODE_position                    0x0
#define CLC1CON_MODE_size                        0x3
#define CLC1CON_MODE_value_mask                  0x7
#define CLC1CON_MODE_clear_mask                  0xF8

#define LC1MODE0                                 0x0
#define LC1MODE0_address                         0xF10
#define LC1MODE0_position                        0x0
#define LC1MODE0_size                            0x1
#define LC1MODE0_value_mask                      0x1
#define LC1MODE0_clear_mask                      0xFE

#define LC1MODE                                  0x0
#define LC1MODE_address                          0xF10
#define LC1MODE_position                         0x0
#define LC1MODE_size                             0x3
#define LC1MODE_value_mask                       0x7
#define LC1MODE_clear_mask                       0xF8

#define CLC1CON_MODE0                            0x0
#define CLC1CON_MODE0_address                    0xF10
#define CLC1CON_MODE0_position                   0x0
#define CLC1CON_MODE0_size                       0x1
#define CLC1CON_MODE0_value_mask                 0x1
#define CLC1CON_MODE0_clear_mask                 0xFE

#define LC1MODE1                                 0x1
#define LC1MODE1_address                         0xF10
#define LC1MODE1_position                        0x1
#define LC1MODE1_size                            0x1
#define LC1MODE1_value_mask                      0x2
#define LC1MODE1_clear_mask                      0xFD

#define CLC1CON_MODE1                            0x1
#define CLC1CON_MODE1_address                    0xF10
#define CLC1CON_MODE1_position                   0x1
#define CLC1CON_MODE1_size                       0x1
#define CLC1CON_MODE1_value_mask                 0x2
#define CLC1CON_MODE1_clear_mask                 0xFD

#define CLC1CON_MODE2                            0x2
#define CLC1CON_MODE2_address                    0xF10
#define CLC1CON_MODE2_position                   0x2
#define CLC1CON_MODE2_size                       0x1
#define CLC1CON_MODE2_value_mask                 0x4
#define CLC1CON_MODE2_clear_mask                 0xFB

#define LC1MODE2                                 0x2
#define LC1MODE2_address                         0xF10
#define LC1MODE2_position                        0x2
#define LC1MODE2_size                            0x1
#define LC1MODE2_value_mask                      0x4
#define LC1MODE2_clear_mask                      0xFB

#define LC1INTN                                  0x3
#define LC1INTN_address                          0xF10
#define LC1INTN_position                         0x3
#define LC1INTN_size                             0x1
#define LC1INTN_value_mask                       0x8
#define LC1INTN_clear_mask                       0xF7

#define CLC1CON_INTN                             0x3
#define CLC1CON_INTN_address                     0xF10
#define CLC1CON_INTN_position                    0x3
#define CLC1CON_INTN_size                        0x1
#define CLC1CON_INTN_value_mask                  0x8
#define CLC1CON_INTN_clear_mask                  0xF7

#define LC1INTP                                  0x4
#define LC1INTP_address                          0xF10
#define LC1INTP_position                         0x4
#define LC1INTP_size                             0x1
#define LC1INTP_value_mask                       0x10
#define LC1INTP_clear_mask                       0xEF

#define CLC1CON_INTP                             0x4
#define CLC1CON_INTP_address                     0xF10
#define CLC1CON_INTP_position                    0x4
#define CLC1CON_INTP_size                        0x1
#define CLC1CON_INTP_value_mask                  0x10
#define CLC1CON_INTP_clear_mask                  0xEF

#define CLC1CON_OUT                              0x5
#define CLC1CON_OUT_address                      0xF10
#define CLC1CON_OUT_position                     0x5
#define CLC1CON_OUT_size                         0x1
#define CLC1CON_OUT_value_mask                   0x20
#define CLC1CON_OUT_clear_mask                   0xDF

#define LC1OUT                                   0x5
#define LC1OUT_address                           0xF10
#define LC1OUT_position                          0x5
#define LC1OUT_size                              0x1
#define LC1OUT_value_mask                        0x20
#define LC1OUT_clear_mask                        0xDF

#define LC1EN                                    0x7
#define LC1EN_address                            0xF10
#define LC1EN_position                           0x7
#define LC1EN_size                               0x1
#define LC1EN_value_mask                         0x80
#define LC1EN_clear_mask                         0x7F

#define CLC1CON_EN                               0x7
#define CLC1CON_EN_address                       0xF10
#define CLC1CON_EN_position                      0x7
#define CLC1CON_EN_size                          0x1
#define CLC1CON_EN_value_mask                    0x80
#define CLC1CON_EN_clear_mask                    0x7F


/*-------------------------------------------------------------------------#
| CLC1POL                                                            0xF11 |
#--------------------------------------------------------------------------#
| CLC1POL_POL | - | - | - | LC1G4POL | LC1G3POL | CLC1POL_G2POL | LC1G1POL |
#--------------------------------------------------------------------------#
| 7           | 6 | 5 | 4 | 3        | 2        | 1             | 0        |
#-------------------------------------------------------------------------*/

#define CLC1POL                                  0x0
#define CLC1POL_address                          0xF11
#define CLC1POL_position                         0x0
#define CLC1POL_size                             0x8
#define CLC1POL_value_mask                       0xFF
#define CLC1POL_clear_mask                       0x0

#define LC1G1POL                                 0x0
#define LC1G1POL_address                         0xF11
#define LC1G1POL_position                        0x0
#define LC1G1POL_size                            0x1
#define LC1G1POL_value_mask                      0x1
#define LC1G1POL_clear_mask                      0xFE

#define CLC1POL_G1POL                            0x0
#define CLC1POL_G1POL_address                    0xF11
#define CLC1POL_G1POL_position                   0x0
#define CLC1POL_G1POL_size                       0x1
#define CLC1POL_G1POL_value_mask                 0x1
#define CLC1POL_G1POL_clear_mask                 0xFE

#define CLC1POL_G2POL                            0x1
#define CLC1POL_G2POL_address                    0xF11
#define CLC1POL_G2POL_position                   0x1
#define CLC1POL_G2POL_size                       0x1
#define CLC1POL_G2POL_value_mask                 0x2
#define CLC1POL_G2POL_clear_mask                 0xFD

#define LC1G2POL                                 0x1
#define LC1G2POL_address                         0xF11
#define LC1G2POL_position                        0x1
#define LC1G2POL_size                            0x1
#define LC1G2POL_value_mask                      0x2
#define LC1G2POL_clear_mask                      0xFD

#define LC1G3POL                                 0x2
#define LC1G3POL_address                         0xF11
#define LC1G3POL_position                        0x2
#define LC1G3POL_size                            0x1
#define LC1G3POL_value_mask                      0x4
#define LC1G3POL_clear_mask                      0xFB

#define CLC1POL_G3POL                            0x2
#define CLC1POL_G3POL_address                    0xF11
#define CLC1POL_G3POL_position                   0x2
#define CLC1POL_G3POL_size                       0x1
#define CLC1POL_G3POL_value_mask                 0x4
#define CLC1POL_G3POL_clear_mask                 0xFB

#define LC1G4POL                                 0x3
#define LC1G4POL_address                         0xF11
#define LC1G4POL_position                        0x3
#define LC1G4POL_size                            0x1
#define LC1G4POL_value_mask                      0x8
#define LC1G4POL_clear_mask                      0xF7

#define CLC1POL_G4POL                            0x3
#define CLC1POL_G4POL_address                    0xF11
#define CLC1POL_G4POL_position                   0x3
#define CLC1POL_G4POL_size                       0x1
#define CLC1POL_G4POL_value_mask                 0x8
#define CLC1POL_G4POL_clear_mask                 0xF7

#define CLC1POL_POL                              0x7
#define CLC1POL_POL_address                      0xF11
#define CLC1POL_POL_position                     0x7
#define CLC1POL_POL_size                         0x1
#define CLC1POL_POL_value_mask                   0x80
#define CLC1POL_POL_clear_mask                   0x7F

#define LC1POL                                   0x7
#define LC1POL_address                           0xF11
#define LC1POL_position                          0x7
#define LC1POL_size                              0x1
#define LC1POL_value_mask                        0x80
#define LC1POL_clear_mask                        0x7F


/*------------------------------------------------------------------------------------#
| CLC1SEL0                                                                      0xF12 |
#-------------------------------------------------------------------------------------#
| - | - | - | LC1D1S4 | CLC1SEL0_D1S3 | CLC1SEL0_D1S2 | CLC1SEL0_D1S1 | CLC1SEL0_D1S0 |
#-------------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3             | 2             | 1             | 0             |
#------------------------------------------------------------------------------------*/

#define CLC1SEL0                                 0x0
#define CLC1SEL0_address                         0xF12
#define CLC1SEL0_position                        0x0
#define CLC1SEL0_size                            0x8
#define CLC1SEL0_value_mask                      0xFF
#define CLC1SEL0_clear_mask                      0x0

#define CLC1SEL0_D1S0                            0x0
#define CLC1SEL0_D1S0_address                    0xF12
#define CLC1SEL0_D1S0_position                   0x0
#define CLC1SEL0_D1S0_size                       0x1
#define CLC1SEL0_D1S0_value_mask                 0x1
#define CLC1SEL0_D1S0_clear_mask                 0xFE

#define LC1D1S                                   0x0
#define LC1D1S_address                           0xF12
#define LC1D1S_position                          0x0
#define LC1D1S_size                              0x8
#define LC1D1S_value_mask                        0xFF
#define LC1D1S_clear_mask                        0x0

#define LC1D1S0                                  0x0
#define LC1D1S0_address                          0xF12
#define LC1D1S0_position                         0x0
#define LC1D1S0_size                             0x1
#define LC1D1S0_value_mask                       0x1
#define LC1D1S0_clear_mask                       0xFE

#define CLC1SEL0_D1S                             0x0
#define CLC1SEL0_D1S_address                     0xF12
#define CLC1SEL0_D1S_position                    0x0
#define CLC1SEL0_D1S_size                        0x8
#define CLC1SEL0_D1S_value_mask                  0xFF
#define CLC1SEL0_D1S_clear_mask                  0x0

#define CLC1SEL0_D1S1                            0x1
#define CLC1SEL0_D1S1_address                    0xF12
#define CLC1SEL0_D1S1_position                   0x1
#define CLC1SEL0_D1S1_size                       0x1
#define CLC1SEL0_D1S1_value_mask                 0x2
#define CLC1SEL0_D1S1_clear_mask                 0xFD

#define LC1D1S1                                  0x1
#define LC1D1S1_address                          0xF12
#define LC1D1S1_position                         0x1
#define LC1D1S1_size                             0x1
#define LC1D1S1_value_mask                       0x2
#define LC1D1S1_clear_mask                       0xFD

#define CLC1SEL0_D1S2                            0x2
#define CLC1SEL0_D1S2_address                    0xF12
#define CLC1SEL0_D1S2_position                   0x2
#define CLC1SEL0_D1S2_size                       0x1
#define CLC1SEL0_D1S2_value_mask                 0x4
#define CLC1SEL0_D1S2_clear_mask                 0xFB

#define LC1D1S2                                  0x2
#define LC1D1S2_address                          0xF12
#define LC1D1S2_position                         0x2
#define LC1D1S2_size                             0x1
#define LC1D1S2_value_mask                       0x4
#define LC1D1S2_clear_mask                       0xFB

#define CLC1SEL0_D1S3                            0x3
#define CLC1SEL0_D1S3_address                    0xF12
#define CLC1SEL0_D1S3_position                   0x3
#define CLC1SEL0_D1S3_size                       0x1
#define CLC1SEL0_D1S3_value_mask                 0x8
#define CLC1SEL0_D1S3_clear_mask                 0xF7

#define LC1D1S3                                  0x3
#define LC1D1S3_address                          0xF12
#define LC1D1S3_position                         0x3
#define LC1D1S3_size                             0x1
#define LC1D1S3_value_mask                       0x8
#define LC1D1S3_clear_mask                       0xF7

#define CLC1SEL0_D1S4                            0x4
#define CLC1SEL0_D1S4_address                    0xF12
#define CLC1SEL0_D1S4_position                   0x4
#define CLC1SEL0_D1S4_size                       0x1
#define CLC1SEL0_D1S4_value_mask                 0x10
#define CLC1SEL0_D1S4_clear_mask                 0xEF

#define LC1D1S4                                  0x4
#define LC1D1S4_address                          0xF12
#define LC1D1S4_position                         0x4
#define LC1D1S4_size                             0x1
#define LC1D1S4_value_mask                       0x10
#define LC1D1S4_clear_mask                       0xEF


/*------------------------------------------------------------------#
| CLC1SEL1                                                    0xF13 |
#-------------------------------------------------------------------#
| - | - | - | LC1D2S4 | CLC1SEL1_D2S3 | LC1D2S2 | LC1D2S1 | LC1D2S0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3             | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define CLC1SEL1                                 0x0
#define CLC1SEL1_address                         0xF13
#define CLC1SEL1_position                        0x0
#define CLC1SEL1_size                            0x8
#define CLC1SEL1_value_mask                      0xFF
#define CLC1SEL1_clear_mask                      0x0

#define CLC1SEL1_D2S0                            0x0
#define CLC1SEL1_D2S0_address                    0xF13
#define CLC1SEL1_D2S0_position                   0x0
#define CLC1SEL1_D2S0_size                       0x1
#define CLC1SEL1_D2S0_value_mask                 0x1
#define CLC1SEL1_D2S0_clear_mask                 0xFE

#define CLC1SEL1_D2S                             0x0
#define CLC1SEL1_D2S_address                     0xF13
#define CLC1SEL1_D2S_position                    0x0
#define CLC1SEL1_D2S_size                        0x8
#define CLC1SEL1_D2S_value_mask                  0xFF
#define CLC1SEL1_D2S_clear_mask                  0x0

#define LC1D2S                                   0x0
#define LC1D2S_address                           0xF13
#define LC1D2S_position                          0x0
#define LC1D2S_size                              0x8
#define LC1D2S_value_mask                        0xFF
#define LC1D2S_clear_mask                        0x0

#define LC1D2S0                                  0x0
#define LC1D2S0_address                          0xF13
#define LC1D2S0_position                         0x0
#define LC1D2S0_size                             0x1
#define LC1D2S0_value_mask                       0x1
#define LC1D2S0_clear_mask                       0xFE

#define CLC1SEL1_D2S1                            0x1
#define CLC1SEL1_D2S1_address                    0xF13
#define CLC1SEL1_D2S1_position                   0x1
#define CLC1SEL1_D2S1_size                       0x1
#define CLC1SEL1_D2S1_value_mask                 0x2
#define CLC1SEL1_D2S1_clear_mask                 0xFD

#define LC1D2S1                                  0x1
#define LC1D2S1_address                          0xF13
#define LC1D2S1_position                         0x1
#define LC1D2S1_size                             0x1
#define LC1D2S1_value_mask                       0x2
#define LC1D2S1_clear_mask                       0xFD

#define LC1D2S2                                  0x2
#define LC1D2S2_address                          0xF13
#define LC1D2S2_position                         0x2
#define LC1D2S2_size                             0x1
#define LC1D2S2_value_mask                       0x4
#define LC1D2S2_clear_mask                       0xFB

#define CLC1SEL1_D2S2                            0x2
#define CLC1SEL1_D2S2_address                    0xF13
#define CLC1SEL1_D2S2_position                   0x2
#define CLC1SEL1_D2S2_size                       0x1
#define CLC1SEL1_D2S2_value_mask                 0x4
#define CLC1SEL1_D2S2_clear_mask                 0xFB

#define LC1D2S3                                  0x3
#define LC1D2S3_address                          0xF13
#define LC1D2S3_position                         0x3
#define LC1D2S3_size                             0x1
#define LC1D2S3_value_mask                       0x8
#define LC1D2S3_clear_mask                       0xF7

#define CLC1SEL1_D2S3                            0x3
#define CLC1SEL1_D2S3_address                    0xF13
#define CLC1SEL1_D2S3_position                   0x3
#define CLC1SEL1_D2S3_size                       0x1
#define CLC1SEL1_D2S3_value_mask                 0x8
#define CLC1SEL1_D2S3_clear_mask                 0xF7

#define LC1D2S4                                  0x4
#define LC1D2S4_address                          0xF13
#define LC1D2S4_position                         0x4
#define LC1D2S4_size                             0x1
#define LC1D2S4_value_mask                       0x10
#define LC1D2S4_clear_mask                       0xEF

#define CLC1SEL1_D2S4                            0x4
#define CLC1SEL1_D2S4_address                    0xF13
#define CLC1SEL1_D2S4_position                   0x4
#define CLC1SEL1_D2S4_size                       0x1
#define CLC1SEL1_D2S4_value_mask                 0x10
#define CLC1SEL1_D2S4_clear_mask                 0xEF


/*------------------------------------------------------------#
| CLC1SEL2                                              0xF14 |
#-------------------------------------------------------------#
| - | - | - | LC1D3S4 | LC1D3S3 | LC1D3S2 | LC1D3S1 | LC1D3S0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define CLC1SEL2                                 0x0
#define CLC1SEL2_address                         0xF14
#define CLC1SEL2_position                        0x0
#define CLC1SEL2_size                            0x8
#define CLC1SEL2_value_mask                      0xFF
#define CLC1SEL2_clear_mask                      0x0

#define LC1D3S0                                  0x0
#define LC1D3S0_address                          0xF14
#define LC1D3S0_position                         0x0
#define LC1D3S0_size                             0x1
#define LC1D3S0_value_mask                       0x1
#define LC1D3S0_clear_mask                       0xFE

#define CLC1SEL2_D3S                             0x0
#define CLC1SEL2_D3S_address                     0xF14
#define CLC1SEL2_D3S_position                    0x0
#define CLC1SEL2_D3S_size                        0x8
#define CLC1SEL2_D3S_value_mask                  0xFF
#define CLC1SEL2_D3S_clear_mask                  0x0

#define LC1D3S                                   0x0
#define LC1D3S_address                           0xF14
#define LC1D3S_position                          0x0
#define LC1D3S_size                              0x8
#define LC1D3S_value_mask                        0xFF
#define LC1D3S_clear_mask                        0x0

#define CLC1SEL2_D3S0                            0x0
#define CLC1SEL2_D3S0_address                    0xF14
#define CLC1SEL2_D3S0_position                   0x0
#define CLC1SEL2_D3S0_size                       0x1
#define CLC1SEL2_D3S0_value_mask                 0x1
#define CLC1SEL2_D3S0_clear_mask                 0xFE

#define LC1D3S1                                  0x1
#define LC1D3S1_address                          0xF14
#define LC1D3S1_position                         0x1
#define LC1D3S1_size                             0x1
#define LC1D3S1_value_mask                       0x2
#define LC1D3S1_clear_mask                       0xFD

#define CLC1SEL2_D3S1                            0x1
#define CLC1SEL2_D3S1_address                    0xF14
#define CLC1SEL2_D3S1_position                   0x1
#define CLC1SEL2_D3S1_size                       0x1
#define CLC1SEL2_D3S1_value_mask                 0x2
#define CLC1SEL2_D3S1_clear_mask                 0xFD

#define LC1D3S2                                  0x2
#define LC1D3S2_address                          0xF14
#define LC1D3S2_position                         0x2
#define LC1D3S2_size                             0x1
#define LC1D3S2_value_mask                       0x4
#define LC1D3S2_clear_mask                       0xFB

#define CLC1SEL2_D3S2                            0x2
#define CLC1SEL2_D3S2_address                    0xF14
#define CLC1SEL2_D3S2_position                   0x2
#define CLC1SEL2_D3S2_size                       0x1
#define CLC1SEL2_D3S2_value_mask                 0x4
#define CLC1SEL2_D3S2_clear_mask                 0xFB

#define LC1D3S3                                  0x3
#define LC1D3S3_address                          0xF14
#define LC1D3S3_position                         0x3
#define LC1D3S3_size                             0x1
#define LC1D3S3_value_mask                       0x8
#define LC1D3S3_clear_mask                       0xF7

#define CLC1SEL2_D3S3                            0x3
#define CLC1SEL2_D3S3_address                    0xF14
#define CLC1SEL2_D3S3_position                   0x3
#define CLC1SEL2_D3S3_size                       0x1
#define CLC1SEL2_D3S3_value_mask                 0x8
#define CLC1SEL2_D3S3_clear_mask                 0xF7

#define LC1D3S4                                  0x4
#define LC1D3S4_address                          0xF14
#define LC1D3S4_position                         0x4
#define LC1D3S4_size                             0x1
#define LC1D3S4_value_mask                       0x10
#define LC1D3S4_clear_mask                       0xEF

#define CLC1SEL2_D3S4                            0x4
#define CLC1SEL2_D3S4_address                    0xF14
#define CLC1SEL2_D3S4_position                   0x4
#define CLC1SEL2_D3S4_size                       0x1
#define CLC1SEL2_D3S4_value_mask                 0x10
#define CLC1SEL2_D3S4_clear_mask                 0xEF


/*------------------------------------------------------------#
| CLC1SEL3                                              0xF15 |
#-------------------------------------------------------------#
| - | - | - | LC1D4S4 | LC1D4S3 | LC1D4S2 | LC1D4S1 | LC1D4S0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define CLC1SEL3                                 0x0
#define CLC1SEL3_address                         0xF15
#define CLC1SEL3_position                        0x0
#define CLC1SEL3_size                            0x8
#define CLC1SEL3_value_mask                      0xFF
#define CLC1SEL3_clear_mask                      0x0

#define CLC1SEL3_D4S                             0x0
#define CLC1SEL3_D4S_address                     0xF15
#define CLC1SEL3_D4S_position                    0x0
#define CLC1SEL3_D4S_size                        0x8
#define CLC1SEL3_D4S_value_mask                  0xFF
#define CLC1SEL3_D4S_clear_mask                  0x0

#define LC1D4S                                   0x0
#define LC1D4S_address                           0xF15
#define LC1D4S_position                          0x0
#define LC1D4S_size                              0x8
#define LC1D4S_value_mask                        0xFF
#define LC1D4S_clear_mask                        0x0

#define LC1D4S0                                  0x0
#define LC1D4S0_address                          0xF15
#define LC1D4S0_position                         0x0
#define LC1D4S0_size                             0x1
#define LC1D4S0_value_mask                       0x1
#define LC1D4S0_clear_mask                       0xFE

#define CLC1SEL3_D4S0                            0x0
#define CLC1SEL3_D4S0_address                    0xF15
#define CLC1SEL3_D4S0_position                   0x0
#define CLC1SEL3_D4S0_size                       0x1
#define CLC1SEL3_D4S0_value_mask                 0x1
#define CLC1SEL3_D4S0_clear_mask                 0xFE

#define CLC1SEL3_D4S1                            0x1
#define CLC1SEL3_D4S1_address                    0xF15
#define CLC1SEL3_D4S1_position                   0x1
#define CLC1SEL3_D4S1_size                       0x1
#define CLC1SEL3_D4S1_value_mask                 0x2
#define CLC1SEL3_D4S1_clear_mask                 0xFD

#define LC1D4S1                                  0x1
#define LC1D4S1_address                          0xF15
#define LC1D4S1_position                         0x1
#define LC1D4S1_size                             0x1
#define LC1D4S1_value_mask                       0x2
#define LC1D4S1_clear_mask                       0xFD

#define LC1D4S2                                  0x2
#define LC1D4S2_address                          0xF15
#define LC1D4S2_position                         0x2
#define LC1D4S2_size                             0x1
#define LC1D4S2_value_mask                       0x4
#define LC1D4S2_clear_mask                       0xFB

#define CLC1SEL3_D4S2                            0x2
#define CLC1SEL3_D4S2_address                    0xF15
#define CLC1SEL3_D4S2_position                   0x2
#define CLC1SEL3_D4S2_size                       0x1
#define CLC1SEL3_D4S2_value_mask                 0x4
#define CLC1SEL3_D4S2_clear_mask                 0xFB

#define LC1D4S3                                  0x3
#define LC1D4S3_address                          0xF15
#define LC1D4S3_position                         0x3
#define LC1D4S3_size                             0x1
#define LC1D4S3_value_mask                       0x8
#define LC1D4S3_clear_mask                       0xF7

#define CLC1SEL3_D4S3                            0x3
#define CLC1SEL3_D4S3_address                    0xF15
#define CLC1SEL3_D4S3_position                   0x3
#define CLC1SEL3_D4S3_size                       0x1
#define CLC1SEL3_D4S3_value_mask                 0x8
#define CLC1SEL3_D4S3_clear_mask                 0xF7

#define LC1D4S4                                  0x4
#define LC1D4S4_address                          0xF15
#define LC1D4S4_position                         0x4
#define LC1D4S4_size                             0x1
#define LC1D4S4_value_mask                       0x10
#define LC1D4S4_clear_mask                       0xEF

#define CLC1SEL3_D4S4                            0x4
#define CLC1SEL3_D4S4_address                    0xF15
#define CLC1SEL3_D4S4_position                   0x4
#define CLC1SEL3_D4S4_size                       0x1
#define CLC1SEL3_D4S4_value_mask                 0x10
#define CLC1SEL3_D4S4_clear_mask                 0xEF


/*--------------------------------------------------------------------------------------------------#
| CLC1GLS0                                                                                    0xF16 |
#---------------------------------------------------------------------------------------------------#
| LC1G1D4T | CLC1GLS0_D4N | LC1G1D3T | LC1G1D3N | LC1G1D2T | CLC1GLS0_D2N | CLC1GLS0_D1T | LC1G1D1N |
#---------------------------------------------------------------------------------------------------#
| 7        | 6            | 5        | 4        | 3        | 2            | 1            | 0        |
#--------------------------------------------------------------------------------------------------*/

#define CLC1GLS0                                 0x0
#define CLC1GLS0_address                         0xF16
#define CLC1GLS0_position                        0x0
#define CLC1GLS0_size                            0x8
#define CLC1GLS0_value_mask                      0xFF
#define CLC1GLS0_clear_mask                      0x0

#define CLC1GLS0_D1N                             0x0
#define CLC1GLS0_D1N_address                     0xF16
#define CLC1GLS0_D1N_position                    0x0
#define CLC1GLS0_D1N_size                        0x1
#define CLC1GLS0_D1N_value_mask                  0x1
#define CLC1GLS0_D1N_clear_mask                  0xFE

#define LC1G1D1N                                 0x0
#define LC1G1D1N_address                         0xF16
#define LC1G1D1N_position                        0x0
#define LC1G1D1N_size                            0x1
#define LC1G1D1N_value_mask                      0x1
#define LC1G1D1N_clear_mask                      0xFE

#define CLC1GLS0_D1T                             0x1
#define CLC1GLS0_D1T_address                     0xF16
#define CLC1GLS0_D1T_position                    0x1
#define CLC1GLS0_D1T_size                        0x1
#define CLC1GLS0_D1T_value_mask                  0x2
#define CLC1GLS0_D1T_clear_mask                  0xFD

#define LC1G1D1T                                 0x1
#define LC1G1D1T_address                         0xF16
#define LC1G1D1T_position                        0x1
#define LC1G1D1T_size                            0x1
#define LC1G1D1T_value_mask                      0x2
#define LC1G1D1T_clear_mask                      0xFD

#define LC1G1D2N                                 0x2
#define LC1G1D2N_address                         0xF16
#define LC1G1D2N_position                        0x2
#define LC1G1D2N_size                            0x1
#define LC1G1D2N_value_mask                      0x4
#define LC1G1D2N_clear_mask                      0xFB

#define CLC1GLS0_D2N                             0x2
#define CLC1GLS0_D2N_address                     0xF16
#define CLC1GLS0_D2N_position                    0x2
#define CLC1GLS0_D2N_size                        0x1
#define CLC1GLS0_D2N_value_mask                  0x4
#define CLC1GLS0_D2N_clear_mask                  0xFB

#define LC1G1D2T                                 0x3
#define LC1G1D2T_address                         0xF16
#define LC1G1D2T_position                        0x3
#define LC1G1D2T_size                            0x1
#define LC1G1D2T_value_mask                      0x8
#define LC1G1D2T_clear_mask                      0xF7

#define CLC1GLS0_D2T                             0x3
#define CLC1GLS0_D2T_address                     0xF16
#define CLC1GLS0_D2T_position                    0x3
#define CLC1GLS0_D2T_size                        0x1
#define CLC1GLS0_D2T_value_mask                  0x8
#define CLC1GLS0_D2T_clear_mask                  0xF7

#define CLC1GLS0_D3N                             0x4
#define CLC1GLS0_D3N_address                     0xF16
#define CLC1GLS0_D3N_position                    0x4
#define CLC1GLS0_D3N_size                        0x1
#define CLC1GLS0_D3N_value_mask                  0x10
#define CLC1GLS0_D3N_clear_mask                  0xEF

#define LC1G1D3N                                 0x4
#define LC1G1D3N_address                         0xF16
#define LC1G1D3N_position                        0x4
#define LC1G1D3N_size                            0x1
#define LC1G1D3N_value_mask                      0x10
#define LC1G1D3N_clear_mask                      0xEF

#define CLC1GLS0_D3T                             0x5
#define CLC1GLS0_D3T_address                     0xF16
#define CLC1GLS0_D3T_position                    0x5
#define CLC1GLS0_D3T_size                        0x1
#define CLC1GLS0_D3T_value_mask                  0x20
#define CLC1GLS0_D3T_clear_mask                  0xDF

#define LC1G1D3T                                 0x5
#define LC1G1D3T_address                         0xF16
#define LC1G1D3T_position                        0x5
#define LC1G1D3T_size                            0x1
#define LC1G1D3T_value_mask                      0x20
#define LC1G1D3T_clear_mask                      0xDF

#define CLC1GLS0_D4N                             0x6
#define CLC1GLS0_D4N_address                     0xF16
#define CLC1GLS0_D4N_position                    0x6
#define CLC1GLS0_D4N_size                        0x1
#define CLC1GLS0_D4N_value_mask                  0x40
#define CLC1GLS0_D4N_clear_mask                  0xBF

#define LC1G1D4N                                 0x6
#define LC1G1D4N_address                         0xF16
#define LC1G1D4N_position                        0x6
#define LC1G1D4N_size                            0x1
#define LC1G1D4N_value_mask                      0x40
#define LC1G1D4N_clear_mask                      0xBF

#define CLC1GLS0_D4T                             0x7
#define CLC1GLS0_D4T_address                     0xF16
#define CLC1GLS0_D4T_position                    0x7
#define CLC1GLS0_D4T_size                        0x1
#define CLC1GLS0_D4T_value_mask                  0x80
#define CLC1GLS0_D4T_clear_mask                  0x7F

#define LC1G1D4T                                 0x7
#define LC1G1D4T_address                         0xF16
#define LC1G1D4T_position                        0x7
#define LC1G1D4T_size                            0x1
#define LC1G1D4T_value_mask                      0x80
#define LC1G1D4T_clear_mask                      0x7F


/*------------------------------------------------------------------------------------------------------#
| CLC1GLS1                                                                                        0xF17 |
#-------------------------------------------------------------------------------------------------------#
| LC1G2D4T | CLC1GLS1_D4N | LC1G2D3T | CLC1GLS1_D3N | LC1G2D2T | CLC1GLS1_D2N | LC1G2D1T | CLC1GLS1_D1N |
#-------------------------------------------------------------------------------------------------------#
| 7        | 6            | 5        | 4            | 3        | 2            | 1        | 0            |
#------------------------------------------------------------------------------------------------------*/

#define CLC1GLS1                                 0x0
#define CLC1GLS1_address                         0xF17
#define CLC1GLS1_position                        0x0
#define CLC1GLS1_size                            0x8
#define CLC1GLS1_value_mask                      0xFF
#define CLC1GLS1_clear_mask                      0x0

#define CLC1GLS1_D1N                             0x0
#define CLC1GLS1_D1N_address                     0xF17
#define CLC1GLS1_D1N_position                    0x0
#define CLC1GLS1_D1N_size                        0x1
#define CLC1GLS1_D1N_value_mask                  0x1
#define CLC1GLS1_D1N_clear_mask                  0xFE

#define LC1G2D1N                                 0x0
#define LC1G2D1N_address                         0xF17
#define LC1G2D1N_position                        0x0
#define LC1G2D1N_size                            0x1
#define LC1G2D1N_value_mask                      0x1
#define LC1G2D1N_clear_mask                      0xFE

#define LC1G2D1T                                 0x1
#define LC1G2D1T_address                         0xF17
#define LC1G2D1T_position                        0x1
#define LC1G2D1T_size                            0x1
#define LC1G2D1T_value_mask                      0x2
#define LC1G2D1T_clear_mask                      0xFD

#define CLC1GLS1_D1T                             0x1
#define CLC1GLS1_D1T_address                     0xF17
#define CLC1GLS1_D1T_position                    0x1
#define CLC1GLS1_D1T_size                        0x1
#define CLC1GLS1_D1T_value_mask                  0x2
#define CLC1GLS1_D1T_clear_mask                  0xFD

#define CLC1GLS1_D2N                             0x2
#define CLC1GLS1_D2N_address                     0xF17
#define CLC1GLS1_D2N_position                    0x2
#define CLC1GLS1_D2N_size                        0x1
#define CLC1GLS1_D2N_value_mask                  0x4
#define CLC1GLS1_D2N_clear_mask                  0xFB

#define LC1G2D2N                                 0x2
#define LC1G2D2N_address                         0xF17
#define LC1G2D2N_position                        0x2
#define LC1G2D2N_size                            0x1
#define LC1G2D2N_value_mask                      0x4
#define LC1G2D2N_clear_mask                      0xFB

#define LC1G2D2T                                 0x3
#define LC1G2D2T_address                         0xF17
#define LC1G2D2T_position                        0x3
#define LC1G2D2T_size                            0x1
#define LC1G2D2T_value_mask                      0x8
#define LC1G2D2T_clear_mask                      0xF7

#define CLC1GLS1_D2T                             0x3
#define CLC1GLS1_D2T_address                     0xF17
#define CLC1GLS1_D2T_position                    0x3
#define CLC1GLS1_D2T_size                        0x1
#define CLC1GLS1_D2T_value_mask                  0x8
#define CLC1GLS1_D2T_clear_mask                  0xF7

#define CLC1GLS1_D3N                             0x4
#define CLC1GLS1_D3N_address                     0xF17
#define CLC1GLS1_D3N_position                    0x4
#define CLC1GLS1_D3N_size                        0x1
#define CLC1GLS1_D3N_value_mask                  0x10
#define CLC1GLS1_D3N_clear_mask                  0xEF

#define LC1G2D3N                                 0x4
#define LC1G2D3N_address                         0xF17
#define LC1G2D3N_position                        0x4
#define LC1G2D3N_size                            0x1
#define LC1G2D3N_value_mask                      0x10
#define LC1G2D3N_clear_mask                      0xEF

#define LC1G2D3T                                 0x5
#define LC1G2D3T_address                         0xF17
#define LC1G2D3T_position                        0x5
#define LC1G2D3T_size                            0x1
#define LC1G2D3T_value_mask                      0x20
#define LC1G2D3T_clear_mask                      0xDF

#define CLC1GLS1_D3T                             0x5
#define CLC1GLS1_D3T_address                     0xF17
#define CLC1GLS1_D3T_position                    0x5
#define CLC1GLS1_D3T_size                        0x1
#define CLC1GLS1_D3T_value_mask                  0x20
#define CLC1GLS1_D3T_clear_mask                  0xDF

#define CLC1GLS1_D4N                             0x6
#define CLC1GLS1_D4N_address                     0xF17
#define CLC1GLS1_D4N_position                    0x6
#define CLC1GLS1_D4N_size                        0x1
#define CLC1GLS1_D4N_value_mask                  0x40
#define CLC1GLS1_D4N_clear_mask                  0xBF

#define LC1G2D4N                                 0x6
#define LC1G2D4N_address                         0xF17
#define LC1G2D4N_position                        0x6
#define LC1G2D4N_size                            0x1
#define LC1G2D4N_value_mask                      0x40
#define LC1G2D4N_clear_mask                      0xBF

#define LC1G2D4T                                 0x7
#define LC1G2D4T_address                         0xF17
#define LC1G2D4T_position                        0x7
#define LC1G2D4T_size                            0x1
#define LC1G2D4T_value_mask                      0x80
#define LC1G2D4T_clear_mask                      0x7F

#define CLC1GLS1_D4T                             0x7
#define CLC1GLS1_D4T_address                     0xF17
#define CLC1GLS1_D4T_position                    0x7
#define CLC1GLS1_D4T_size                        0x1
#define CLC1GLS1_D4T_value_mask                  0x80
#define CLC1GLS1_D4T_clear_mask                  0x7F


/*------------------------------------------------------------------------------------------#
| CLC1GLS2                                                                            0xF18 |
#-------------------------------------------------------------------------------------------#
| LC1G3D4T | LC1G3D4N | LC1G3D3T | CLC1GLS2_D3N | LC1G3D2T | LC1G3D2N | LC1G3D1T | LC1G3D1N |
#-------------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4            | 3        | 2        | 1        | 0        |
#------------------------------------------------------------------------------------------*/

#define CLC1GLS2                                 0x0
#define CLC1GLS2_address                         0xF18
#define CLC1GLS2_position                        0x0
#define CLC1GLS2_size                            0x8
#define CLC1GLS2_value_mask                      0xFF
#define CLC1GLS2_clear_mask                      0x0

#define CLC1GLS2_D1N                             0x0
#define CLC1GLS2_D1N_address                     0xF18
#define CLC1GLS2_D1N_position                    0x0
#define CLC1GLS2_D1N_size                        0x1
#define CLC1GLS2_D1N_value_mask                  0x1
#define CLC1GLS2_D1N_clear_mask                  0xFE

#define LC1G3D1N                                 0x0
#define LC1G3D1N_address                         0xF18
#define LC1G3D1N_position                        0x0
#define LC1G3D1N_size                            0x1
#define LC1G3D1N_value_mask                      0x1
#define LC1G3D1N_clear_mask                      0xFE

#define LC1G3D1T                                 0x1
#define LC1G3D1T_address                         0xF18
#define LC1G3D1T_position                        0x1
#define LC1G3D1T_size                            0x1
#define LC1G3D1T_value_mask                      0x2
#define LC1G3D1T_clear_mask                      0xFD

#define CLC1GLS2_D1T                             0x1
#define CLC1GLS2_D1T_address                     0xF18
#define CLC1GLS2_D1T_position                    0x1
#define CLC1GLS2_D1T_size                        0x1
#define CLC1GLS2_D1T_value_mask                  0x2
#define CLC1GLS2_D1T_clear_mask                  0xFD

#define LC1G3D2N                                 0x2
#define LC1G3D2N_address                         0xF18
#define LC1G3D2N_position                        0x2
#define LC1G3D2N_size                            0x1
#define LC1G3D2N_value_mask                      0x4
#define LC1G3D2N_clear_mask                      0xFB

#define CLC1GLS2_D2N                             0x2
#define CLC1GLS2_D2N_address                     0xF18
#define CLC1GLS2_D2N_position                    0x2
#define CLC1GLS2_D2N_size                        0x1
#define CLC1GLS2_D2N_value_mask                  0x4
#define CLC1GLS2_D2N_clear_mask                  0xFB

#define LC1G3D2T                                 0x3
#define LC1G3D2T_address                         0xF18
#define LC1G3D2T_position                        0x3
#define LC1G3D2T_size                            0x1
#define LC1G3D2T_value_mask                      0x8
#define LC1G3D2T_clear_mask                      0xF7

#define CLC1GLS2_D2T                             0x3
#define CLC1GLS2_D2T_address                     0xF18
#define CLC1GLS2_D2T_position                    0x3
#define CLC1GLS2_D2T_size                        0x1
#define CLC1GLS2_D2T_value_mask                  0x8
#define CLC1GLS2_D2T_clear_mask                  0xF7

#define CLC1GLS2_D3N                             0x4
#define CLC1GLS2_D3N_address                     0xF18
#define CLC1GLS2_D3N_position                    0x4
#define CLC1GLS2_D3N_size                        0x1
#define CLC1GLS2_D3N_value_mask                  0x10
#define CLC1GLS2_D3N_clear_mask                  0xEF

#define LC1G3D3N                                 0x4
#define LC1G3D3N_address                         0xF18
#define LC1G3D3N_position                        0x4
#define LC1G3D3N_size                            0x1
#define LC1G3D3N_value_mask                      0x10
#define LC1G3D3N_clear_mask                      0xEF

#define LC1G3D3T                                 0x5
#define LC1G3D3T_address                         0xF18
#define LC1G3D3T_position                        0x5
#define LC1G3D3T_size                            0x1
#define LC1G3D3T_value_mask                      0x20
#define LC1G3D3T_clear_mask                      0xDF

#define CLC1GLS2_D3T                             0x5
#define CLC1GLS2_D3T_address                     0xF18
#define CLC1GLS2_D3T_position                    0x5
#define CLC1GLS2_D3T_size                        0x1
#define CLC1GLS2_D3T_value_mask                  0x20
#define CLC1GLS2_D3T_clear_mask                  0xDF

#define LC1G3D4N                                 0x6
#define LC1G3D4N_address                         0xF18
#define LC1G3D4N_position                        0x6
#define LC1G3D4N_size                            0x1
#define LC1G3D4N_value_mask                      0x40
#define LC1G3D4N_clear_mask                      0xBF

#define CLC1GLS2_D4N                             0x6
#define CLC1GLS2_D4N_address                     0xF18
#define CLC1GLS2_D4N_position                    0x6
#define CLC1GLS2_D4N_size                        0x1
#define CLC1GLS2_D4N_value_mask                  0x40
#define CLC1GLS2_D4N_clear_mask                  0xBF

#define LC1G3D4T                                 0x7
#define LC1G3D4T_address                         0xF18
#define LC1G3D4T_position                        0x7
#define LC1G3D4T_size                            0x1
#define LC1G3D4T_value_mask                      0x80
#define LC1G3D4T_clear_mask                      0x7F

#define CLC1GLS2_D4T                             0x7
#define CLC1GLS2_D4T_address                     0xF18
#define CLC1GLS2_D4T_position                    0x7
#define CLC1GLS2_D4T_size                        0x1
#define CLC1GLS2_D4T_value_mask                  0x80
#define CLC1GLS2_D4T_clear_mask                  0x7F


/*--------------------------------------------------------------------------------------------------------------------#
| CLC1GLS3                                                                                                      0xF19 |
#---------------------------------------------------------------------------------------------------------------------#
| LC1G4D4T | CLC1GLS3_G4D4N | LC1G4D3T | LC1G4D3N | CLC1GLS3_G4D2T | CLC1GLS3_G4D2N | CLC1GLS3_G4D1T | CLC1GLS3_G4D1N |
#---------------------------------------------------------------------------------------------------------------------#
| 7        | 6              | 5        | 4        | 3              | 2              | 1              | 0              |
#--------------------------------------------------------------------------------------------------------------------*/

#define CLC1GLS3                                 0x0
#define CLC1GLS3_address                         0xF19
#define CLC1GLS3_position                        0x0
#define CLC1GLS3_size                            0x8
#define CLC1GLS3_value_mask                      0xFF
#define CLC1GLS3_clear_mask                      0x0

#define LC1G4D1N                                 0x0
#define LC1G4D1N_address                         0xF19
#define LC1G4D1N_position                        0x0
#define LC1G4D1N_size                            0x1
#define LC1G4D1N_value_mask                      0x1
#define LC1G4D1N_clear_mask                      0xFE

#define CLC1GLS3_G4D1N                           0x0
#define CLC1GLS3_G4D1N_address                   0xF19
#define CLC1GLS3_G4D1N_position                  0x0
#define CLC1GLS3_G4D1N_size                      0x1
#define CLC1GLS3_G4D1N_value_mask                0x1
#define CLC1GLS3_G4D1N_clear_mask                0xFE

#define LC1G4D1T                                 0x1
#define LC1G4D1T_address                         0xF19
#define LC1G4D1T_position                        0x1
#define LC1G4D1T_size                            0x1
#define LC1G4D1T_value_mask                      0x2
#define LC1G4D1T_clear_mask                      0xFD

#define CLC1GLS3_G4D1T                           0x1
#define CLC1GLS3_G4D1T_address                   0xF19
#define CLC1GLS3_G4D1T_position                  0x1
#define CLC1GLS3_G4D1T_size                      0x1
#define CLC1GLS3_G4D1T_value_mask                0x2
#define CLC1GLS3_G4D1T_clear_mask                0xFD

#define CLC1GLS3_G4D2N                           0x2
#define CLC1GLS3_G4D2N_address                   0xF19
#define CLC1GLS3_G4D2N_position                  0x2
#define CLC1GLS3_G4D2N_size                      0x1
#define CLC1GLS3_G4D2N_value_mask                0x4
#define CLC1GLS3_G4D2N_clear_mask                0xFB

#define LC1G4D2N                                 0x2
#define LC1G4D2N_address                         0xF19
#define LC1G4D2N_position                        0x2
#define LC1G4D2N_size                            0x1
#define LC1G4D2N_value_mask                      0x4
#define LC1G4D2N_clear_mask                      0xFB

#define CLC1GLS3_G4D2T                           0x3
#define CLC1GLS3_G4D2T_address                   0xF19
#define CLC1GLS3_G4D2T_position                  0x3
#define CLC1GLS3_G4D2T_size                      0x1
#define CLC1GLS3_G4D2T_value_mask                0x8
#define CLC1GLS3_G4D2T_clear_mask                0xF7

#define LC1G4D2T                                 0x3
#define LC1G4D2T_address                         0xF19
#define LC1G4D2T_position                        0x3
#define LC1G4D2T_size                            0x1
#define LC1G4D2T_value_mask                      0x8
#define LC1G4D2T_clear_mask                      0xF7

#define LC1G4D3N                                 0x4
#define LC1G4D3N_address                         0xF19
#define LC1G4D3N_position                        0x4
#define LC1G4D3N_size                            0x1
#define LC1G4D3N_value_mask                      0x10
#define LC1G4D3N_clear_mask                      0xEF

#define CLC1GLS3_G4D3N                           0x4
#define CLC1GLS3_G4D3N_address                   0xF19
#define CLC1GLS3_G4D3N_position                  0x4
#define CLC1GLS3_G4D3N_size                      0x1
#define CLC1GLS3_G4D3N_value_mask                0x10
#define CLC1GLS3_G4D3N_clear_mask                0xEF

#define LC1G4D3T                                 0x5
#define LC1G4D3T_address                         0xF19
#define LC1G4D3T_position                        0x5
#define LC1G4D3T_size                            0x1
#define LC1G4D3T_value_mask                      0x20
#define LC1G4D3T_clear_mask                      0xDF

#define CLC1GLS3_G4D3T                           0x5
#define CLC1GLS3_G4D3T_address                   0xF19
#define CLC1GLS3_G4D3T_position                  0x5
#define CLC1GLS3_G4D3T_size                      0x1
#define CLC1GLS3_G4D3T_value_mask                0x20
#define CLC1GLS3_G4D3T_clear_mask                0xDF

#define CLC1GLS3_G4D4N                           0x6
#define CLC1GLS3_G4D4N_address                   0xF19
#define CLC1GLS3_G4D4N_position                  0x6
#define CLC1GLS3_G4D4N_size                      0x1
#define CLC1GLS3_G4D4N_value_mask                0x40
#define CLC1GLS3_G4D4N_clear_mask                0xBF

#define LC1G4D4N                                 0x6
#define LC1G4D4N_address                         0xF19
#define LC1G4D4N_position                        0x6
#define LC1G4D4N_size                            0x1
#define LC1G4D4N_value_mask                      0x40
#define LC1G4D4N_clear_mask                      0xBF

#define CLC1GLS3_G4D4T                           0x7
#define CLC1GLS3_G4D4T_address                   0xF19
#define CLC1GLS3_G4D4T_position                  0x7
#define CLC1GLS3_G4D4T_size                      0x1
#define CLC1GLS3_G4D4T_value_mask                0x80
#define CLC1GLS3_G4D4T_clear_mask                0x7F

#define LC1G4D4T                                 0x7
#define LC1G4D4T_address                         0xF19
#define LC1G4D4T_position                        0x7
#define LC1G4D4T_size                            0x1
#define LC1G4D4T_value_mask                      0x80
#define LC1G4D4T_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| CLC2CON                                                                               0xF1A |
#---------------------------------------------------------------------------------------------#
| LC2EN | - | LC2OUT | CLC2CON_INTP | LC2INTN | CLC2CON_MODE2 | CLC2CON_MODE1 | CLC2CON_MODE0 |
#---------------------------------------------------------------------------------------------#
| 7     | 6 | 5      | 4            | 3       | 2             | 1             | 0             |
#--------------------------------------------------------------------------------------------*/

#define CLC2CON                                  0x0
#define CLC2CON_address                          0xF1A
#define CLC2CON_position                         0x0
#define CLC2CON_size                             0x8
#define CLC2CON_value_mask                       0xFF
#define CLC2CON_clear_mask                       0x0

#define LC2MODE0                                 0x0
#define LC2MODE0_address                         0xF1A
#define LC2MODE0_position                        0x0
#define LC2MODE0_size                            0x1
#define LC2MODE0_value_mask                      0x1
#define LC2MODE0_clear_mask                      0xFE

#define CLC2CON_MODE                             0x0
#define CLC2CON_MODE_address                     0xF1A
#define CLC2CON_MODE_position                    0x0
#define CLC2CON_MODE_size                        0x3
#define CLC2CON_MODE_value_mask                  0x7
#define CLC2CON_MODE_clear_mask                  0xF8

#define LC2MODE                                  0x0
#define LC2MODE_address                          0xF1A
#define LC2MODE_position                         0x0
#define LC2MODE_size                             0x3
#define LC2MODE_value_mask                       0x7
#define LC2MODE_clear_mask                       0xF8

#define CLC2CON_MODE0                            0x0
#define CLC2CON_MODE0_address                    0xF1A
#define CLC2CON_MODE0_position                   0x0
#define CLC2CON_MODE0_size                       0x1
#define CLC2CON_MODE0_value_mask                 0x1
#define CLC2CON_MODE0_clear_mask                 0xFE

#define LC2MODE1                                 0x1
#define LC2MODE1_address                         0xF1A
#define LC2MODE1_position                        0x1
#define LC2MODE1_size                            0x1
#define LC2MODE1_value_mask                      0x2
#define LC2MODE1_clear_mask                      0xFD

#define CLC2CON_MODE1                            0x1
#define CLC2CON_MODE1_address                    0xF1A
#define CLC2CON_MODE1_position                   0x1
#define CLC2CON_MODE1_size                       0x1
#define CLC2CON_MODE1_value_mask                 0x2
#define CLC2CON_MODE1_clear_mask                 0xFD

#define LC2MODE2                                 0x2
#define LC2MODE2_address                         0xF1A
#define LC2MODE2_position                        0x2
#define LC2MODE2_size                            0x1
#define LC2MODE2_value_mask                      0x4
#define LC2MODE2_clear_mask                      0xFB

#define CLC2CON_MODE2                            0x2
#define CLC2CON_MODE2_address                    0xF1A
#define CLC2CON_MODE2_position                   0x2
#define CLC2CON_MODE2_size                       0x1
#define CLC2CON_MODE2_value_mask                 0x4
#define CLC2CON_MODE2_clear_mask                 0xFB

#define LC2INTN                                  0x3
#define LC2INTN_address                          0xF1A
#define LC2INTN_position                         0x3
#define LC2INTN_size                             0x1
#define LC2INTN_value_mask                       0x8
#define LC2INTN_clear_mask                       0xF7

#define CLC2CON_INTN                             0x3
#define CLC2CON_INTN_address                     0xF1A
#define CLC2CON_INTN_position                    0x3
#define CLC2CON_INTN_size                        0x1
#define CLC2CON_INTN_value_mask                  0x8
#define CLC2CON_INTN_clear_mask                  0xF7

#define LC2INTP                                  0x4
#define LC2INTP_address                          0xF1A
#define LC2INTP_position                         0x4
#define LC2INTP_size                             0x1
#define LC2INTP_value_mask                       0x10
#define LC2INTP_clear_mask                       0xEF

#define CLC2CON_INTP                             0x4
#define CLC2CON_INTP_address                     0xF1A
#define CLC2CON_INTP_position                    0x4
#define CLC2CON_INTP_size                        0x1
#define CLC2CON_INTP_value_mask                  0x10
#define CLC2CON_INTP_clear_mask                  0xEF

#define CLC2CON_OUT                              0x5
#define CLC2CON_OUT_address                      0xF1A
#define CLC2CON_OUT_position                     0x5
#define CLC2CON_OUT_size                         0x1
#define CLC2CON_OUT_value_mask                   0x20
#define CLC2CON_OUT_clear_mask                   0xDF

#define LC2OUT                                   0x5
#define LC2OUT_address                           0xF1A
#define LC2OUT_position                          0x5
#define LC2OUT_size                              0x1
#define LC2OUT_value_mask                        0x20
#define LC2OUT_clear_mask                        0xDF

#define CLC2CON_EN                               0x7
#define CLC2CON_EN_address                       0xF1A
#define CLC2CON_EN_position                      0x7
#define CLC2CON_EN_size                          0x1
#define CLC2CON_EN_value_mask                    0x80
#define CLC2CON_EN_clear_mask                    0x7F

#define LC2EN                                    0x7
#define LC2EN_address                            0xF1A
#define LC2EN_position                           0x7
#define LC2EN_size                               0x1
#define LC2EN_value_mask                         0x80
#define LC2EN_clear_mask                         0x7F


/*--------------------------------------------------------------------#
| CLC2POL                                                       0xF1B |
#---------------------------------------------------------------------#
| CLC2POL_POL | - | - | - | LC2G4POL | LC2G3POL | LC2G2POL | LC2G1POL |
#---------------------------------------------------------------------#
| 7           | 6 | 5 | 4 | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------*/

#define CLC2POL                                  0x0
#define CLC2POL_address                          0xF1B
#define CLC2POL_position                         0x0
#define CLC2POL_size                             0x8
#define CLC2POL_value_mask                       0xFF
#define CLC2POL_clear_mask                       0x0

#define LC2G1POL                                 0x0
#define LC2G1POL_address                         0xF1B
#define LC2G1POL_position                        0x0
#define LC2G1POL_size                            0x1
#define LC2G1POL_value_mask                      0x1
#define LC2G1POL_clear_mask                      0xFE

#define CLC2POL_G1POL                            0x0
#define CLC2POL_G1POL_address                    0xF1B
#define CLC2POL_G1POL_position                   0x0
#define CLC2POL_G1POL_size                       0x1
#define CLC2POL_G1POL_value_mask                 0x1
#define CLC2POL_G1POL_clear_mask                 0xFE

#define LC2G2POL                                 0x1
#define LC2G2POL_address                         0xF1B
#define LC2G2POL_position                        0x1
#define LC2G2POL_size                            0x1
#define LC2G2POL_value_mask                      0x2
#define LC2G2POL_clear_mask                      0xFD

#define CLC2POL_G2POL                            0x1
#define CLC2POL_G2POL_address                    0xF1B
#define CLC2POL_G2POL_position                   0x1
#define CLC2POL_G2POL_size                       0x1
#define CLC2POL_G2POL_value_mask                 0x2
#define CLC2POL_G2POL_clear_mask                 0xFD

#define LC2G3POL                                 0x2
#define LC2G3POL_address                         0xF1B
#define LC2G3POL_position                        0x2
#define LC2G3POL_size                            0x1
#define LC2G3POL_value_mask                      0x4
#define LC2G3POL_clear_mask                      0xFB

#define CLC2POL_G3POL                            0x2
#define CLC2POL_G3POL_address                    0xF1B
#define CLC2POL_G3POL_position                   0x2
#define CLC2POL_G3POL_size                       0x1
#define CLC2POL_G3POL_value_mask                 0x4
#define CLC2POL_G3POL_clear_mask                 0xFB

#define LC2G4POL                                 0x3
#define LC2G4POL_address                         0xF1B
#define LC2G4POL_position                        0x3
#define LC2G4POL_size                            0x1
#define LC2G4POL_value_mask                      0x8
#define LC2G4POL_clear_mask                      0xF7

#define CLC2POL_G4POL                            0x3
#define CLC2POL_G4POL_address                    0xF1B
#define CLC2POL_G4POL_position                   0x3
#define CLC2POL_G4POL_size                       0x1
#define CLC2POL_G4POL_value_mask                 0x8
#define CLC2POL_G4POL_clear_mask                 0xF7

#define CLC2POL_POL                              0x7
#define CLC2POL_POL_address                      0xF1B
#define CLC2POL_POL_position                     0x7
#define CLC2POL_POL_size                         0x1
#define CLC2POL_POL_value_mask                   0x80
#define CLC2POL_POL_clear_mask                   0x7F

#define LC2POL                                   0x7
#define LC2POL_address                           0xF1B
#define LC2POL_position                          0x7
#define LC2POL_size                              0x1
#define LC2POL_value_mask                        0x80
#define LC2POL_clear_mask                        0x7F


/*------------------------------------------------------------#
| CLC2SEL0                                              0xF1C |
#-------------------------------------------------------------#
| - | - | - | LC2D1S4 | LC2D1S3 | LC2D1S2 | LC2D1S1 | LC2D1S0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define CLC2SEL0                                 0x0
#define CLC2SEL0_address                         0xF1C
#define CLC2SEL0_position                        0x0
#define CLC2SEL0_size                            0x8
#define CLC2SEL0_value_mask                      0xFF
#define CLC2SEL0_clear_mask                      0x0

#define CLC2SEL0_D1S                             0x0
#define CLC2SEL0_D1S_address                     0xF1C
#define CLC2SEL0_D1S_position                    0x0
#define CLC2SEL0_D1S_size                        0x8
#define CLC2SEL0_D1S_value_mask                  0xFF
#define CLC2SEL0_D1S_clear_mask                  0x0

#define LC2D1S0                                  0x0
#define LC2D1S0_address                          0xF1C
#define LC2D1S0_position                         0x0
#define LC2D1S0_size                             0x1
#define LC2D1S0_value_mask                       0x1
#define LC2D1S0_clear_mask                       0xFE

#define CLC2SEL0_D1S0                            0x0
#define CLC2SEL0_D1S0_address                    0xF1C
#define CLC2SEL0_D1S0_position                   0x0
#define CLC2SEL0_D1S0_size                       0x1
#define CLC2SEL0_D1S0_value_mask                 0x1
#define CLC2SEL0_D1S0_clear_mask                 0xFE

#define LC2D1S                                   0x0
#define LC2D1S_address                           0xF1C
#define LC2D1S_position                          0x0
#define LC2D1S_size                              0x8
#define LC2D1S_value_mask                        0xFF
#define LC2D1S_clear_mask                        0x0

#define LC2D1S1                                  0x1
#define LC2D1S1_address                          0xF1C
#define LC2D1S1_position                         0x1
#define LC2D1S1_size                             0x1
#define LC2D1S1_value_mask                       0x2
#define LC2D1S1_clear_mask                       0xFD

#define CLC2SEL0_D1S1                            0x1
#define CLC2SEL0_D1S1_address                    0xF1C
#define CLC2SEL0_D1S1_position                   0x1
#define CLC2SEL0_D1S1_size                       0x1
#define CLC2SEL0_D1S1_value_mask                 0x2
#define CLC2SEL0_D1S1_clear_mask                 0xFD

#define LC2D1S2                                  0x2
#define LC2D1S2_address                          0xF1C
#define LC2D1S2_position                         0x2
#define LC2D1S2_size                             0x1
#define LC2D1S2_value_mask                       0x4
#define LC2D1S2_clear_mask                       0xFB

#define CLC2SEL0_D1S2                            0x2
#define CLC2SEL0_D1S2_address                    0xF1C
#define CLC2SEL0_D1S2_position                   0x2
#define CLC2SEL0_D1S2_size                       0x1
#define CLC2SEL0_D1S2_value_mask                 0x4
#define CLC2SEL0_D1S2_clear_mask                 0xFB

#define CLC2SEL0_D1S3                            0x3
#define CLC2SEL0_D1S3_address                    0xF1C
#define CLC2SEL0_D1S3_position                   0x3
#define CLC2SEL0_D1S3_size                       0x1
#define CLC2SEL0_D1S3_value_mask                 0x8
#define CLC2SEL0_D1S3_clear_mask                 0xF7

#define LC2D1S3                                  0x3
#define LC2D1S3_address                          0xF1C
#define LC2D1S3_position                         0x3
#define LC2D1S3_size                             0x1
#define LC2D1S3_value_mask                       0x8
#define LC2D1S3_clear_mask                       0xF7

#define LC2D1S4                                  0x4
#define LC2D1S4_address                          0xF1C
#define LC2D1S4_position                         0x4
#define LC2D1S4_size                             0x1
#define LC2D1S4_value_mask                       0x10
#define LC2D1S4_clear_mask                       0xEF

#define CLC2SEL0_D1S4                            0x4
#define CLC2SEL0_D1S4_address                    0xF1C
#define CLC2SEL0_D1S4_position                   0x4
#define CLC2SEL0_D1S4_size                       0x1
#define CLC2SEL0_D1S4_value_mask                 0x10
#define CLC2SEL0_D1S4_clear_mask                 0xEF


/*------------------------------------------------------------#
| CLC2SEL1                                              0xF1D |
#-------------------------------------------------------------#
| - | - | - | LC2D2S4 | LC2D2S3 | LC2D2S2 | LC2D2S1 | LC2D2S0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define CLC2SEL1                                 0x0
#define CLC2SEL1_address                         0xF1D
#define CLC2SEL1_position                        0x0
#define CLC2SEL1_size                            0x8
#define CLC2SEL1_value_mask                      0xFF
#define CLC2SEL1_clear_mask                      0x0

#define LC2D2S0                                  0x0
#define LC2D2S0_address                          0xF1D
#define LC2D2S0_position                         0x0
#define LC2D2S0_size                             0x1
#define LC2D2S0_value_mask                       0x1
#define LC2D2S0_clear_mask                       0xFE

#define CLC2SEL1_D2S0                            0x0
#define CLC2SEL1_D2S0_address                    0xF1D
#define CLC2SEL1_D2S0_position                   0x0
#define CLC2SEL1_D2S0_size                       0x1
#define CLC2SEL1_D2S0_value_mask                 0x1
#define CLC2SEL1_D2S0_clear_mask                 0xFE

#define LC2D2S                                   0x0
#define LC2D2S_address                           0xF1D
#define LC2D2S_position                          0x0
#define LC2D2S_size                              0x8
#define LC2D2S_value_mask                        0xFF
#define LC2D2S_clear_mask                        0x0

#define CLC2SEL1_D2S                             0x0
#define CLC2SEL1_D2S_address                     0xF1D
#define CLC2SEL1_D2S_position                    0x0
#define CLC2SEL1_D2S_size                        0x8
#define CLC2SEL1_D2S_value_mask                  0xFF
#define CLC2SEL1_D2S_clear_mask                  0x0

#define LC2D2S1                                  0x1
#define LC2D2S1_address                          0xF1D
#define LC2D2S1_position                         0x1
#define LC2D2S1_size                             0x1
#define LC2D2S1_value_mask                       0x2
#define LC2D2S1_clear_mask                       0xFD

#define CLC2SEL1_D2S1                            0x1
#define CLC2SEL1_D2S1_address                    0xF1D
#define CLC2SEL1_D2S1_position                   0x1
#define CLC2SEL1_D2S1_size                       0x1
#define CLC2SEL1_D2S1_value_mask                 0x2
#define CLC2SEL1_D2S1_clear_mask                 0xFD

#define LC2D2S2                                  0x2
#define LC2D2S2_address                          0xF1D
#define LC2D2S2_position                         0x2
#define LC2D2S2_size                             0x1
#define LC2D2S2_value_mask                       0x4
#define LC2D2S2_clear_mask                       0xFB

#define CLC2SEL1_D2S2                            0x2
#define CLC2SEL1_D2S2_address                    0xF1D
#define CLC2SEL1_D2S2_position                   0x2
#define CLC2SEL1_D2S2_size                       0x1
#define CLC2SEL1_D2S2_value_mask                 0x4
#define CLC2SEL1_D2S2_clear_mask                 0xFB

#define LC2D2S3                                  0x3
#define LC2D2S3_address                          0xF1D
#define LC2D2S3_position                         0x3
#define LC2D2S3_size                             0x1
#define LC2D2S3_value_mask                       0x8
#define LC2D2S3_clear_mask                       0xF7

#define CLC2SEL1_D2S3                            0x3
#define CLC2SEL1_D2S3_address                    0xF1D
#define CLC2SEL1_D2S3_position                   0x3
#define CLC2SEL1_D2S3_size                       0x1
#define CLC2SEL1_D2S3_value_mask                 0x8
#define CLC2SEL1_D2S3_clear_mask                 0xF7

#define LC2D2S4                                  0x4
#define LC2D2S4_address                          0xF1D
#define LC2D2S4_position                         0x4
#define LC2D2S4_size                             0x1
#define LC2D2S4_value_mask                       0x10
#define LC2D2S4_clear_mask                       0xEF

#define CLC2SEL1_D2S4                            0x4
#define CLC2SEL1_D2S4_address                    0xF1D
#define CLC2SEL1_D2S4_position                   0x4
#define CLC2SEL1_D2S4_size                       0x1
#define CLC2SEL1_D2S4_value_mask                 0x10
#define CLC2SEL1_D2S4_clear_mask                 0xEF


/*------------------------------------------------------------------#
| CLC2SEL2                                                    0xF1E |
#-------------------------------------------------------------------#
| - | - | - | LC2D3S4 | LC2D3S3 | LC2D3S2 | CLC2SEL2_D3S1 | LC2D3S0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1             | 0       |
#------------------------------------------------------------------*/

#define CLC2SEL2                                 0x0
#define CLC2SEL2_address                         0xF1E
#define CLC2SEL2_position                        0x0
#define CLC2SEL2_size                            0x8
#define CLC2SEL2_value_mask                      0xFF
#define CLC2SEL2_clear_mask                      0x0

#define CLC2SEL2_D3S                             0x0
#define CLC2SEL2_D3S_address                     0xF1E
#define CLC2SEL2_D3S_position                    0x0
#define CLC2SEL2_D3S_size                        0x8
#define CLC2SEL2_D3S_value_mask                  0xFF
#define CLC2SEL2_D3S_clear_mask                  0x0

#define LC2D3S0                                  0x0
#define LC2D3S0_address                          0xF1E
#define LC2D3S0_position                         0x0
#define LC2D3S0_size                             0x1
#define LC2D3S0_value_mask                       0x1
#define LC2D3S0_clear_mask                       0xFE

#define CLC2SEL2_D3S0                            0x0
#define CLC2SEL2_D3S0_address                    0xF1E
#define CLC2SEL2_D3S0_position                   0x0
#define CLC2SEL2_D3S0_size                       0x1
#define CLC2SEL2_D3S0_value_mask                 0x1
#define CLC2SEL2_D3S0_clear_mask                 0xFE

#define LC2D3S                                   0x0
#define LC2D3S_address                           0xF1E
#define LC2D3S_position                          0x0
#define LC2D3S_size                              0x8
#define LC2D3S_value_mask                        0xFF
#define LC2D3S_clear_mask                        0x0

#define CLC2SEL2_D3S1                            0x1
#define CLC2SEL2_D3S1_address                    0xF1E
#define CLC2SEL2_D3S1_position                   0x1
#define CLC2SEL2_D3S1_size                       0x1
#define CLC2SEL2_D3S1_value_mask                 0x2
#define CLC2SEL2_D3S1_clear_mask                 0xFD

#define LC2D3S1                                  0x1
#define LC2D3S1_address                          0xF1E
#define LC2D3S1_position                         0x1
#define LC2D3S1_size                             0x1
#define LC2D3S1_value_mask                       0x2
#define LC2D3S1_clear_mask                       0xFD

#define LC2D3S2                                  0x2
#define LC2D3S2_address                          0xF1E
#define LC2D3S2_position                         0x2
#define LC2D3S2_size                             0x1
#define LC2D3S2_value_mask                       0x4
#define LC2D3S2_clear_mask                       0xFB

#define CLC2SEL2_D3S2                            0x2
#define CLC2SEL2_D3S2_address                    0xF1E
#define CLC2SEL2_D3S2_position                   0x2
#define CLC2SEL2_D3S2_size                       0x1
#define CLC2SEL2_D3S2_value_mask                 0x4
#define CLC2SEL2_D3S2_clear_mask                 0xFB

#define LC2D3S3                                  0x3
#define LC2D3S3_address                          0xF1E
#define LC2D3S3_position                         0x3
#define LC2D3S3_size                             0x1
#define LC2D3S3_value_mask                       0x8
#define LC2D3S3_clear_mask                       0xF7

#define CLC2SEL2_D3S3                            0x3
#define CLC2SEL2_D3S3_address                    0xF1E
#define CLC2SEL2_D3S3_position                   0x3
#define CLC2SEL2_D3S3_size                       0x1
#define CLC2SEL2_D3S3_value_mask                 0x8
#define CLC2SEL2_D3S3_clear_mask                 0xF7

#define LC2D3S4                                  0x4
#define LC2D3S4_address                          0xF1E
#define LC2D3S4_position                         0x4
#define LC2D3S4_size                             0x1
#define LC2D3S4_value_mask                       0x10
#define LC2D3S4_clear_mask                       0xEF

#define CLC2SEL2_D3S4                            0x4
#define CLC2SEL2_D3S4_address                    0xF1E
#define CLC2SEL2_D3S4_position                   0x4
#define CLC2SEL2_D3S4_size                       0x1
#define CLC2SEL2_D3S4_value_mask                 0x10
#define CLC2SEL2_D3S4_clear_mask                 0xEF


/*------------------------------------------------------------#
| CLC2SEL3                                              0xF1F |
#-------------------------------------------------------------#
| - | - | - | LC2D4S4 | LC2D4S3 | LC2D4S2 | LC2D4S1 | LC2D4S0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define CLC2SEL3                                 0x0
#define CLC2SEL3_address                         0xF1F
#define CLC2SEL3_position                        0x0
#define CLC2SEL3_size                            0x8
#define CLC2SEL3_value_mask                      0xFF
#define CLC2SEL3_clear_mask                      0x0

#define LC2D4S                                   0x0
#define LC2D4S_address                           0xF1F
#define LC2D4S_position                          0x0
#define LC2D4S_size                              0x8
#define LC2D4S_value_mask                        0xFF
#define LC2D4S_clear_mask                        0x0

#define LC2D4S0                                  0x0
#define LC2D4S0_address                          0xF1F
#define LC2D4S0_position                         0x0
#define LC2D4S0_size                             0x1
#define LC2D4S0_value_mask                       0x1
#define LC2D4S0_clear_mask                       0xFE

#define CLC2SEL3_D4S                             0x0
#define CLC2SEL3_D4S_address                     0xF1F
#define CLC2SEL3_D4S_position                    0x0
#define CLC2SEL3_D4S_size                        0x8
#define CLC2SEL3_D4S_value_mask                  0xFF
#define CLC2SEL3_D4S_clear_mask                  0x0

#define CLC2SEL3_D4S0                            0x0
#define CLC2SEL3_D4S0_address                    0xF1F
#define CLC2SEL3_D4S0_position                   0x0
#define CLC2SEL3_D4S0_size                       0x1
#define CLC2SEL3_D4S0_value_mask                 0x1
#define CLC2SEL3_D4S0_clear_mask                 0xFE

#define LC2D4S1                                  0x1
#define LC2D4S1_address                          0xF1F
#define LC2D4S1_position                         0x1
#define LC2D4S1_size                             0x1
#define LC2D4S1_value_mask                       0x2
#define LC2D4S1_clear_mask                       0xFD

#define CLC2SEL3_D4S1                            0x1
#define CLC2SEL3_D4S1_address                    0xF1F
#define CLC2SEL3_D4S1_position                   0x1
#define CLC2SEL3_D4S1_size                       0x1
#define CLC2SEL3_D4S1_value_mask                 0x2
#define CLC2SEL3_D4S1_clear_mask                 0xFD

#define LC2D4S2                                  0x2
#define LC2D4S2_address                          0xF1F
#define LC2D4S2_position                         0x2
#define LC2D4S2_size                             0x1
#define LC2D4S2_value_mask                       0x4
#define LC2D4S2_clear_mask                       0xFB

#define CLC2SEL3_D4S2                            0x2
#define CLC2SEL3_D4S2_address                    0xF1F
#define CLC2SEL3_D4S2_position                   0x2
#define CLC2SEL3_D4S2_size                       0x1
#define CLC2SEL3_D4S2_value_mask                 0x4
#define CLC2SEL3_D4S2_clear_mask                 0xFB

#define CLC2SEL3_D4S3                            0x3
#define CLC2SEL3_D4S3_address                    0xF1F
#define CLC2SEL3_D4S3_position                   0x3
#define CLC2SEL3_D4S3_size                       0x1
#define CLC2SEL3_D4S3_value_mask                 0x8
#define CLC2SEL3_D4S3_clear_mask                 0xF7

#define LC2D4S3                                  0x3
#define LC2D4S3_address                          0xF1F
#define LC2D4S3_position                         0x3
#define LC2D4S3_size                             0x1
#define LC2D4S3_value_mask                       0x8
#define LC2D4S3_clear_mask                       0xF7

#define LC2D4S4                                  0x4
#define LC2D4S4_address                          0xF1F
#define LC2D4S4_position                         0x4
#define LC2D4S4_size                             0x1
#define LC2D4S4_value_mask                       0x10
#define LC2D4S4_clear_mask                       0xEF

#define CLC2SEL3_D4S4                            0x4
#define CLC2SEL3_D4S4_address                    0xF1F
#define CLC2SEL3_D4S4_position                   0x4
#define CLC2SEL3_D4S4_size                       0x1
#define CLC2SEL3_D4S4_value_mask                 0x10
#define CLC2SEL3_D4S4_clear_mask                 0xEF


/*------------------------------------------------------------------------------------------------------#
| CLC2GLS0                                                                                        0xF20 |
#-------------------------------------------------------------------------------------------------------#
| CLC2GLS0_D4T | LC2G1D4N | CLC2GLS0_D3T | LC2G1D3N | CLC2GLS0_D2T | LC2G1D2N | CLC2GLS0_D1T | LC2G1D1N |
#-------------------------------------------------------------------------------------------------------#
| 7            | 6        | 5            | 4        | 3            | 2        | 1            | 0        |
#------------------------------------------------------------------------------------------------------*/

#define CLC2GLS0                                 0x0
#define CLC2GLS0_address                         0xF20
#define CLC2GLS0_position                        0x0
#define CLC2GLS0_size                            0x8
#define CLC2GLS0_value_mask                      0xFF
#define CLC2GLS0_clear_mask                      0x0

#define LC2G1D1N                                 0x0
#define LC2G1D1N_address                         0xF20
#define LC2G1D1N_position                        0x0
#define LC2G1D1N_size                            0x1
#define LC2G1D1N_value_mask                      0x1
#define LC2G1D1N_clear_mask                      0xFE

#define CLC2GLS0_D1N                             0x0
#define CLC2GLS0_D1N_address                     0xF20
#define CLC2GLS0_D1N_position                    0x0
#define CLC2GLS0_D1N_size                        0x1
#define CLC2GLS0_D1N_value_mask                  0x1
#define CLC2GLS0_D1N_clear_mask                  0xFE

#define CLC2GLS0_D1T                             0x1
#define CLC2GLS0_D1T_address                     0xF20
#define CLC2GLS0_D1T_position                    0x1
#define CLC2GLS0_D1T_size                        0x1
#define CLC2GLS0_D1T_value_mask                  0x2
#define CLC2GLS0_D1T_clear_mask                  0xFD

#define LC2G1D1T                                 0x1
#define LC2G1D1T_address                         0xF20
#define LC2G1D1T_position                        0x1
#define LC2G1D1T_size                            0x1
#define LC2G1D1T_value_mask                      0x2
#define LC2G1D1T_clear_mask                      0xFD

#define LC2G1D2N                                 0x2
#define LC2G1D2N_address                         0xF20
#define LC2G1D2N_position                        0x2
#define LC2G1D2N_size                            0x1
#define LC2G1D2N_value_mask                      0x4
#define LC2G1D2N_clear_mask                      0xFB

#define CLC2GLS0_D2N                             0x2
#define CLC2GLS0_D2N_address                     0xF20
#define CLC2GLS0_D2N_position                    0x2
#define CLC2GLS0_D2N_size                        0x1
#define CLC2GLS0_D2N_value_mask                  0x4
#define CLC2GLS0_D2N_clear_mask                  0xFB

#define CLC2GLS0_D2T                             0x3
#define CLC2GLS0_D2T_address                     0xF20
#define CLC2GLS0_D2T_position                    0x3
#define CLC2GLS0_D2T_size                        0x1
#define CLC2GLS0_D2T_value_mask                  0x8
#define CLC2GLS0_D2T_clear_mask                  0xF7

#define LC2G1D2T                                 0x3
#define LC2G1D2T_address                         0xF20
#define LC2G1D2T_position                        0x3
#define LC2G1D2T_size                            0x1
#define LC2G1D2T_value_mask                      0x8
#define LC2G1D2T_clear_mask                      0xF7

#define LC2G1D3N                                 0x4
#define LC2G1D3N_address                         0xF20
#define LC2G1D3N_position                        0x4
#define LC2G1D3N_size                            0x1
#define LC2G1D3N_value_mask                      0x10
#define LC2G1D3N_clear_mask                      0xEF

#define CLC2GLS0_D3N                             0x4
#define CLC2GLS0_D3N_address                     0xF20
#define CLC2GLS0_D3N_position                    0x4
#define CLC2GLS0_D3N_size                        0x1
#define CLC2GLS0_D3N_value_mask                  0x10
#define CLC2GLS0_D3N_clear_mask                  0xEF

#define CLC2GLS0_D3T                             0x5
#define CLC2GLS0_D3T_address                     0xF20
#define CLC2GLS0_D3T_position                    0x5
#define CLC2GLS0_D3T_size                        0x1
#define CLC2GLS0_D3T_value_mask                  0x20
#define CLC2GLS0_D3T_clear_mask                  0xDF

#define LC2G1D3T                                 0x5
#define LC2G1D3T_address                         0xF20
#define LC2G1D3T_position                        0x5
#define LC2G1D3T_size                            0x1
#define LC2G1D3T_value_mask                      0x20
#define LC2G1D3T_clear_mask                      0xDF

#define LC2G1D4N                                 0x6
#define LC2G1D4N_address                         0xF20
#define LC2G1D4N_position                        0x6
#define LC2G1D4N_size                            0x1
#define LC2G1D4N_value_mask                      0x40
#define LC2G1D4N_clear_mask                      0xBF

#define CLC2GLS0_D4N                             0x6
#define CLC2GLS0_D4N_address                     0xF20
#define CLC2GLS0_D4N_position                    0x6
#define CLC2GLS0_D4N_size                        0x1
#define CLC2GLS0_D4N_value_mask                  0x40
#define CLC2GLS0_D4N_clear_mask                  0xBF

#define CLC2GLS0_D4T                             0x7
#define CLC2GLS0_D4T_address                     0xF20
#define CLC2GLS0_D4T_position                    0x7
#define CLC2GLS0_D4T_size                        0x1
#define CLC2GLS0_D4T_value_mask                  0x80
#define CLC2GLS0_D4T_clear_mask                  0x7F

#define LC2G1D4T                                 0x7
#define LC2G1D4T_address                         0xF20
#define LC2G1D4T_position                        0x7
#define LC2G1D4T_size                            0x1
#define LC2G1D4T_value_mask                      0x80
#define LC2G1D4T_clear_mask                      0x7F


/*------------------------------------------------------------------------------------------------------#
| CLC2GLS1                                                                                        0xF21 |
#-------------------------------------------------------------------------------------------------------#
| CLC2GLS1_D4T | LC2G2D4N | CLC2GLS1_D3T | LC2G2D3N | CLC2GLS1_D2T | LC2G2D2N | LC2G2D1T | CLC2GLS1_D1N |
#-------------------------------------------------------------------------------------------------------#
| 7            | 6        | 5            | 4        | 3            | 2        | 1        | 0            |
#------------------------------------------------------------------------------------------------------*/

#define CLC2GLS1                                 0x0
#define CLC2GLS1_address                         0xF21
#define CLC2GLS1_position                        0x0
#define CLC2GLS1_size                            0x8
#define CLC2GLS1_value_mask                      0xFF
#define CLC2GLS1_clear_mask                      0x0

#define CLC2GLS1_D1N                             0x0
#define CLC2GLS1_D1N_address                     0xF21
#define CLC2GLS1_D1N_position                    0x0
#define CLC2GLS1_D1N_size                        0x1
#define CLC2GLS1_D1N_value_mask                  0x1
#define CLC2GLS1_D1N_clear_mask                  0xFE

#define LC2G2D1N                                 0x0
#define LC2G2D1N_address                         0xF21
#define LC2G2D1N_position                        0x0
#define LC2G2D1N_size                            0x1
#define LC2G2D1N_value_mask                      0x1
#define LC2G2D1N_clear_mask                      0xFE

#define CLC2GLS1_D1T                             0x1
#define CLC2GLS1_D1T_address                     0xF21
#define CLC2GLS1_D1T_position                    0x1
#define CLC2GLS1_D1T_size                        0x1
#define CLC2GLS1_D1T_value_mask                  0x2
#define CLC2GLS1_D1T_clear_mask                  0xFD

#define LC2G2D1T                                 0x1
#define LC2G2D1T_address                         0xF21
#define LC2G2D1T_position                        0x1
#define LC2G2D1T_size                            0x1
#define LC2G2D1T_value_mask                      0x2
#define LC2G2D1T_clear_mask                      0xFD

#define CLC2GLS1_D2N                             0x2
#define CLC2GLS1_D2N_address                     0xF21
#define CLC2GLS1_D2N_position                    0x2
#define CLC2GLS1_D2N_size                        0x1
#define CLC2GLS1_D2N_value_mask                  0x4
#define CLC2GLS1_D2N_clear_mask                  0xFB

#define LC2G2D2N                                 0x2
#define LC2G2D2N_address                         0xF21
#define LC2G2D2N_position                        0x2
#define LC2G2D2N_size                            0x1
#define LC2G2D2N_value_mask                      0x4
#define LC2G2D2N_clear_mask                      0xFB

#define CLC2GLS1_D2T                             0x3
#define CLC2GLS1_D2T_address                     0xF21
#define CLC2GLS1_D2T_position                    0x3
#define CLC2GLS1_D2T_size                        0x1
#define CLC2GLS1_D2T_value_mask                  0x8
#define CLC2GLS1_D2T_clear_mask                  0xF7

#define LC2G2D2T                                 0x3
#define LC2G2D2T_address                         0xF21
#define LC2G2D2T_position                        0x3
#define LC2G2D2T_size                            0x1
#define LC2G2D2T_value_mask                      0x8
#define LC2G2D2T_clear_mask                      0xF7

#define LC2G2D3N                                 0x4
#define LC2G2D3N_address                         0xF21
#define LC2G2D3N_position                        0x4
#define LC2G2D3N_size                            0x1
#define LC2G2D3N_value_mask                      0x10
#define LC2G2D3N_clear_mask                      0xEF

#define CLC2GLS1_D3N                             0x4
#define CLC2GLS1_D3N_address                     0xF21
#define CLC2GLS1_D3N_position                    0x4
#define CLC2GLS1_D3N_size                        0x1
#define CLC2GLS1_D3N_value_mask                  0x10
#define CLC2GLS1_D3N_clear_mask                  0xEF

#define LC2G2D3T                                 0x5
#define LC2G2D3T_address                         0xF21
#define LC2G2D3T_position                        0x5
#define LC2G2D3T_size                            0x1
#define LC2G2D3T_value_mask                      0x20
#define LC2G2D3T_clear_mask                      0xDF

#define CLC2GLS1_D3T                             0x5
#define CLC2GLS1_D3T_address                     0xF21
#define CLC2GLS1_D3T_position                    0x5
#define CLC2GLS1_D3T_size                        0x1
#define CLC2GLS1_D3T_value_mask                  0x20
#define CLC2GLS1_D3T_clear_mask                  0xDF

#define LC2G2D4N                                 0x6
#define LC2G2D4N_address                         0xF21
#define LC2G2D4N_position                        0x6
#define LC2G2D4N_size                            0x1
#define LC2G2D4N_value_mask                      0x40
#define LC2G2D4N_clear_mask                      0xBF

#define CLC2GLS1_D4N                             0x6
#define CLC2GLS1_D4N_address                     0xF21
#define CLC2GLS1_D4N_position                    0x6
#define CLC2GLS1_D4N_size                        0x1
#define CLC2GLS1_D4N_value_mask                  0x40
#define CLC2GLS1_D4N_clear_mask                  0xBF

#define LC2G2D4T                                 0x7
#define LC2G2D4T_address                         0xF21
#define LC2G2D4T_position                        0x7
#define LC2G2D4T_size                            0x1
#define LC2G2D4T_value_mask                      0x80
#define LC2G2D4T_clear_mask                      0x7F

#define CLC2GLS1_D4T                             0x7
#define CLC2GLS1_D4T_address                     0xF21
#define CLC2GLS1_D4T_position                    0x7
#define CLC2GLS1_D4T_size                        0x1
#define CLC2GLS1_D4T_value_mask                  0x80
#define CLC2GLS1_D4T_clear_mask                  0x7F


/*------------------------------------------------------------------------------------------------------#
| CLC2GLS2                                                                                        0xF22 |
#-------------------------------------------------------------------------------------------------------#
| LC2G3D4T | CLC2GLS2_D4N | CLC2GLS2_D3T | LC2G3D3N | LC2G3D2T | CLC2GLS2_D2N | CLC2GLS2_D1T | LC2G3D1N |
#-------------------------------------------------------------------------------------------------------#
| 7        | 6            | 5            | 4        | 3        | 2            | 1            | 0        |
#------------------------------------------------------------------------------------------------------*/

#define CLC2GLS2                                 0x0
#define CLC2GLS2_address                         0xF22
#define CLC2GLS2_position                        0x0
#define CLC2GLS2_size                            0x8
#define CLC2GLS2_value_mask                      0xFF
#define CLC2GLS2_clear_mask                      0x0

#define LC2G3D1N                                 0x0
#define LC2G3D1N_address                         0xF22
#define LC2G3D1N_position                        0x0
#define LC2G3D1N_size                            0x1
#define LC2G3D1N_value_mask                      0x1
#define LC2G3D1N_clear_mask                      0xFE

#define CLC2GLS2_D1N                             0x0
#define CLC2GLS2_D1N_address                     0xF22
#define CLC2GLS2_D1N_position                    0x0
#define CLC2GLS2_D1N_size                        0x1
#define CLC2GLS2_D1N_value_mask                  0x1
#define CLC2GLS2_D1N_clear_mask                  0xFE

#define CLC2GLS2_D1T                             0x1
#define CLC2GLS2_D1T_address                     0xF22
#define CLC2GLS2_D1T_position                    0x1
#define CLC2GLS2_D1T_size                        0x1
#define CLC2GLS2_D1T_value_mask                  0x2
#define CLC2GLS2_D1T_clear_mask                  0xFD

#define LC2G3D1T                                 0x1
#define LC2G3D1T_address                         0xF22
#define LC2G3D1T_position                        0x1
#define LC2G3D1T_size                            0x1
#define LC2G3D1T_value_mask                      0x2
#define LC2G3D1T_clear_mask                      0xFD

#define CLC2GLS2_D2N                             0x2
#define CLC2GLS2_D2N_address                     0xF22
#define CLC2GLS2_D2N_position                    0x2
#define CLC2GLS2_D2N_size                        0x1
#define CLC2GLS2_D2N_value_mask                  0x4
#define CLC2GLS2_D2N_clear_mask                  0xFB

#define LC2G3D2N                                 0x2
#define LC2G3D2N_address                         0xF22
#define LC2G3D2N_position                        0x2
#define LC2G3D2N_size                            0x1
#define LC2G3D2N_value_mask                      0x4
#define LC2G3D2N_clear_mask                      0xFB

#define LC2G3D2T                                 0x3
#define LC2G3D2T_address                         0xF22
#define LC2G3D2T_position                        0x3
#define LC2G3D2T_size                            0x1
#define LC2G3D2T_value_mask                      0x8
#define LC2G3D2T_clear_mask                      0xF7

#define CLC2GLS2_D2T                             0x3
#define CLC2GLS2_D2T_address                     0xF22
#define CLC2GLS2_D2T_position                    0x3
#define CLC2GLS2_D2T_size                        0x1
#define CLC2GLS2_D2T_value_mask                  0x8
#define CLC2GLS2_D2T_clear_mask                  0xF7

#define CLC2GLS2_D3N                             0x4
#define CLC2GLS2_D3N_address                     0xF22
#define CLC2GLS2_D3N_position                    0x4
#define CLC2GLS2_D3N_size                        0x1
#define CLC2GLS2_D3N_value_mask                  0x10
#define CLC2GLS2_D3N_clear_mask                  0xEF

#define LC2G3D3N                                 0x4
#define LC2G3D3N_address                         0xF22
#define LC2G3D3N_position                        0x4
#define LC2G3D3N_size                            0x1
#define LC2G3D3N_value_mask                      0x10
#define LC2G3D3N_clear_mask                      0xEF

#define CLC2GLS2_D3T                             0x5
#define CLC2GLS2_D3T_address                     0xF22
#define CLC2GLS2_D3T_position                    0x5
#define CLC2GLS2_D3T_size                        0x1
#define CLC2GLS2_D3T_value_mask                  0x20
#define CLC2GLS2_D3T_clear_mask                  0xDF

#define LC2G3D3T                                 0x5
#define LC2G3D3T_address                         0xF22
#define LC2G3D3T_position                        0x5
#define LC2G3D3T_size                            0x1
#define LC2G3D3T_value_mask                      0x20
#define LC2G3D3T_clear_mask                      0xDF

#define CLC2GLS2_D4N                             0x6
#define CLC2GLS2_D4N_address                     0xF22
#define CLC2GLS2_D4N_position                    0x6
#define CLC2GLS2_D4N_size                        0x1
#define CLC2GLS2_D4N_value_mask                  0x40
#define CLC2GLS2_D4N_clear_mask                  0xBF

#define LC2G3D4N                                 0x6
#define LC2G3D4N_address                         0xF22
#define LC2G3D4N_position                        0x6
#define LC2G3D4N_size                            0x1
#define LC2G3D4N_value_mask                      0x40
#define LC2G3D4N_clear_mask                      0xBF

#define LC2G3D4T                                 0x7
#define LC2G3D4T_address                         0xF22
#define LC2G3D4T_position                        0x7
#define LC2G3D4T_size                            0x1
#define LC2G3D4T_value_mask                      0x80
#define LC2G3D4T_clear_mask                      0x7F

#define CLC2GLS2_D4T                             0x7
#define CLC2GLS2_D4T_address                     0xF22
#define CLC2GLS2_D4T_position                    0x7
#define CLC2GLS2_D4T_size                        0x1
#define CLC2GLS2_D4T_value_mask                  0x80
#define CLC2GLS2_D4T_clear_mask                  0x7F


/*--------------------------------------------------------------------------------------------------------#
| CLC2GLS3                                                                                          0xF23 |
#---------------------------------------------------------------------------------------------------------#
| CLC2GLS3_G4D4T | LC2G4D4N | CLC2GLS3_G4D3T | LC2G4D3N | LC2G4D2T | CLC2GLS3_G4D2N | LC2G4D1T | LC2G4D1N |
#---------------------------------------------------------------------------------------------------------#
| 7              | 6        | 5              | 4        | 3        | 2              | 1        | 0        |
#--------------------------------------------------------------------------------------------------------*/

#define CLC2GLS3                                 0x0
#define CLC2GLS3_address                         0xF23
#define CLC2GLS3_position                        0x0
#define CLC2GLS3_size                            0x8
#define CLC2GLS3_value_mask                      0xFF
#define CLC2GLS3_clear_mask                      0x0

#define LC2G4D1N                                 0x0
#define LC2G4D1N_address                         0xF23
#define LC2G4D1N_position                        0x0
#define LC2G4D1N_size                            0x1
#define LC2G4D1N_value_mask                      0x1
#define LC2G4D1N_clear_mask                      0xFE

#define CLC2GLS3_G4D1N                           0x0
#define CLC2GLS3_G4D1N_address                   0xF23
#define CLC2GLS3_G4D1N_position                  0x0
#define CLC2GLS3_G4D1N_size                      0x1
#define CLC2GLS3_G4D1N_value_mask                0x1
#define CLC2GLS3_G4D1N_clear_mask                0xFE

#define CLC2GLS3_G4D1T                           0x1
#define CLC2GLS3_G4D1T_address                   0xF23
#define CLC2GLS3_G4D1T_position                  0x1
#define CLC2GLS3_G4D1T_size                      0x1
#define CLC2GLS3_G4D1T_value_mask                0x2
#define CLC2GLS3_G4D1T_clear_mask                0xFD

#define LC2G4D1T                                 0x1
#define LC2G4D1T_address                         0xF23
#define LC2G4D1T_position                        0x1
#define LC2G4D1T_size                            0x1
#define LC2G4D1T_value_mask                      0x2
#define LC2G4D1T_clear_mask                      0xFD

#define CLC2GLS3_G4D2N                           0x2
#define CLC2GLS3_G4D2N_address                   0xF23
#define CLC2GLS3_G4D2N_position                  0x2
#define CLC2GLS3_G4D2N_size                      0x1
#define CLC2GLS3_G4D2N_value_mask                0x4
#define CLC2GLS3_G4D2N_clear_mask                0xFB

#define LC2G4D2N                                 0x2
#define LC2G4D2N_address                         0xF23
#define LC2G4D2N_position                        0x2
#define LC2G4D2N_size                            0x1
#define LC2G4D2N_value_mask                      0x4
#define LC2G4D2N_clear_mask                      0xFB

#define LC2G4D2T                                 0x3
#define LC2G4D2T_address                         0xF23
#define LC2G4D2T_position                        0x3
#define LC2G4D2T_size                            0x1
#define LC2G4D2T_value_mask                      0x8
#define LC2G4D2T_clear_mask                      0xF7

#define CLC2GLS3_G4D2T                           0x3
#define CLC2GLS3_G4D2T_address                   0xF23
#define CLC2GLS3_G4D2T_position                  0x3
#define CLC2GLS3_G4D2T_size                      0x1
#define CLC2GLS3_G4D2T_value_mask                0x8
#define CLC2GLS3_G4D2T_clear_mask                0xF7

#define CLC2GLS3_G4D3N                           0x4
#define CLC2GLS3_G4D3N_address                   0xF23
#define CLC2GLS3_G4D3N_position                  0x4
#define CLC2GLS3_G4D3N_size                      0x1
#define CLC2GLS3_G4D3N_value_mask                0x10
#define CLC2GLS3_G4D3N_clear_mask                0xEF

#define LC2G4D3N                                 0x4
#define LC2G4D3N_address                         0xF23
#define LC2G4D3N_position                        0x4
#define LC2G4D3N_size                            0x1
#define LC2G4D3N_value_mask                      0x10
#define LC2G4D3N_clear_mask                      0xEF

#define CLC2GLS3_G4D3T                           0x5
#define CLC2GLS3_G4D3T_address                   0xF23
#define CLC2GLS3_G4D3T_position                  0x5
#define CLC2GLS3_G4D3T_size                      0x1
#define CLC2GLS3_G4D3T_value_mask                0x20
#define CLC2GLS3_G4D3T_clear_mask                0xDF

#define LC2G4D3T                                 0x5
#define LC2G4D3T_address                         0xF23
#define LC2G4D3T_position                        0x5
#define LC2G4D3T_size                            0x1
#define LC2G4D3T_value_mask                      0x20
#define LC2G4D3T_clear_mask                      0xDF

#define LC2G4D4N                                 0x6
#define LC2G4D4N_address                         0xF23
#define LC2G4D4N_position                        0x6
#define LC2G4D4N_size                            0x1
#define LC2G4D4N_value_mask                      0x40
#define LC2G4D4N_clear_mask                      0xBF

#define CLC2GLS3_G4D4N                           0x6
#define CLC2GLS3_G4D4N_address                   0xF23
#define CLC2GLS3_G4D4N_position                  0x6
#define CLC2GLS3_G4D4N_size                      0x1
#define CLC2GLS3_G4D4N_value_mask                0x40
#define CLC2GLS3_G4D4N_clear_mask                0xBF

#define CLC2GLS3_G4D4T                           0x7
#define CLC2GLS3_G4D4T_address                   0xF23
#define CLC2GLS3_G4D4T_position                  0x7
#define CLC2GLS3_G4D4T_size                      0x1
#define CLC2GLS3_G4D4T_value_mask                0x80
#define CLC2GLS3_G4D4T_clear_mask                0x7F

#define LC2G4D4T                                 0x7
#define LC2G4D4T_address                         0xF23
#define LC2G4D4T_position                        0x7
#define LC2G4D4T_size                            0x1
#define LC2G4D4T_value_mask                      0x80
#define LC2G4D4T_clear_mask                      0x7F


/*-----------------------------------------------------------------------------#
| CLC3CON                                                                0xF24 |
#------------------------------------------------------------------------------#
| LC3EN | - | LC3OUT | CLC3CON_INTP | LC3INTN | LC3MODE2 | LC3MODE1 | LC3MODE0 |
#------------------------------------------------------------------------------#
| 7     | 6 | 5      | 4            | 3       | 2        | 1        | 0        |
#-----------------------------------------------------------------------------*/

#define CLC3CON                                  0x0
#define CLC3CON_address                          0xF24
#define CLC3CON_position                         0x0
#define CLC3CON_size                             0x8
#define CLC3CON_value_mask                       0xFF
#define CLC3CON_clear_mask                       0x0

#define LC3MODE0                                 0x0
#define LC3MODE0_address                         0xF24
#define LC3MODE0_position                        0x0
#define LC3MODE0_size                            0x1
#define LC3MODE0_value_mask                      0x1
#define LC3MODE0_clear_mask                      0xFE

#define CLC3CON_MODE0                            0x0
#define CLC3CON_MODE0_address                    0xF24
#define CLC3CON_MODE0_position                   0x0
#define CLC3CON_MODE0_size                       0x1
#define CLC3CON_MODE0_value_mask                 0x1
#define CLC3CON_MODE0_clear_mask                 0xFE

#define CLC3CON_MODE                             0x0
#define CLC3CON_MODE_address                     0xF24
#define CLC3CON_MODE_position                    0x0
#define CLC3CON_MODE_size                        0x3
#define CLC3CON_MODE_value_mask                  0x7
#define CLC3CON_MODE_clear_mask                  0xF8

#define LC3MODE                                  0x0
#define LC3MODE_address                          0xF24
#define LC3MODE_position                         0x0
#define LC3MODE_size                             0x3
#define LC3MODE_value_mask                       0x7
#define LC3MODE_clear_mask                       0xF8

#define LC3MODE1                                 0x1
#define LC3MODE1_address                         0xF24
#define LC3MODE1_position                        0x1
#define LC3MODE1_size                            0x1
#define LC3MODE1_value_mask                      0x2
#define LC3MODE1_clear_mask                      0xFD

#define CLC3CON_MODE1                            0x1
#define CLC3CON_MODE1_address                    0xF24
#define CLC3CON_MODE1_position                   0x1
#define CLC3CON_MODE1_size                       0x1
#define CLC3CON_MODE1_value_mask                 0x2
#define CLC3CON_MODE1_clear_mask                 0xFD

#define LC3MODE2                                 0x2
#define LC3MODE2_address                         0xF24
#define LC3MODE2_position                        0x2
#define LC3MODE2_size                            0x1
#define LC3MODE2_value_mask                      0x4
#define LC3MODE2_clear_mask                      0xFB

#define CLC3CON_MODE2                            0x2
#define CLC3CON_MODE2_address                    0xF24
#define CLC3CON_MODE2_position                   0x2
#define CLC3CON_MODE2_size                       0x1
#define CLC3CON_MODE2_value_mask                 0x4
#define CLC3CON_MODE2_clear_mask                 0xFB

#define LC3INTN                                  0x3
#define LC3INTN_address                          0xF24
#define LC3INTN_position                         0x3
#define LC3INTN_size                             0x1
#define LC3INTN_value_mask                       0x8
#define LC3INTN_clear_mask                       0xF7

#define CLC3CON_INTN                             0x3
#define CLC3CON_INTN_address                     0xF24
#define CLC3CON_INTN_position                    0x3
#define CLC3CON_INTN_size                        0x1
#define CLC3CON_INTN_value_mask                  0x8
#define CLC3CON_INTN_clear_mask                  0xF7

#define CLC3CON_INTP                             0x4
#define CLC3CON_INTP_address                     0xF24
#define CLC3CON_INTP_position                    0x4
#define CLC3CON_INTP_size                        0x1
#define CLC3CON_INTP_value_mask                  0x10
#define CLC3CON_INTP_clear_mask                  0xEF

#define LC3INTP                                  0x4
#define LC3INTP_address                          0xF24
#define LC3INTP_position                         0x4
#define LC3INTP_size                             0x1
#define LC3INTP_value_mask                       0x10
#define LC3INTP_clear_mask                       0xEF

#define CLC3CON_OUT                              0x5
#define CLC3CON_OUT_address                      0xF24
#define CLC3CON_OUT_position                     0x5
#define CLC3CON_OUT_size                         0x1
#define CLC3CON_OUT_value_mask                   0x20
#define CLC3CON_OUT_clear_mask                   0xDF

#define LC3OUT                                   0x5
#define LC3OUT_address                           0xF24
#define LC3OUT_position                          0x5
#define LC3OUT_size                              0x1
#define LC3OUT_value_mask                        0x20
#define LC3OUT_clear_mask                        0xDF

#define LC3EN                                    0x7
#define LC3EN_address                            0xF24
#define LC3EN_position                           0x7
#define LC3EN_size                               0x1
#define LC3EN_value_mask                         0x80
#define LC3EN_clear_mask                         0x7F

#define CLC3CON_EN                               0x7
#define CLC3CON_EN_address                       0xF24
#define CLC3CON_EN_position                      0x7
#define CLC3CON_EN_size                          0x1
#define CLC3CON_EN_value_mask                    0x80
#define CLC3CON_EN_clear_mask                    0x7F


/*-------------------------------------------------------------------------#
| CLC3POL                                                            0xF25 |
#--------------------------------------------------------------------------#
| LC3POL | - | - | - | LC3G4POL | CLC3POL_G3POL | CLC3POL_G2POL | LC3G1POL |
#--------------------------------------------------------------------------#
| 7      | 6 | 5 | 4 | 3        | 2             | 1             | 0        |
#-------------------------------------------------------------------------*/

#define CLC3POL                                  0x0
#define CLC3POL_address                          0xF25
#define CLC3POL_position                         0x0
#define CLC3POL_size                             0x8
#define CLC3POL_value_mask                       0xFF
#define CLC3POL_clear_mask                       0x0

#define LC3G1POL                                 0x0
#define LC3G1POL_address                         0xF25
#define LC3G1POL_position                        0x0
#define LC3G1POL_size                            0x1
#define LC3G1POL_value_mask                      0x1
#define LC3G1POL_clear_mask                      0xFE

#define CLC3POL_G1POL                            0x0
#define CLC3POL_G1POL_address                    0xF25
#define CLC3POL_G1POL_position                   0x0
#define CLC3POL_G1POL_size                       0x1
#define CLC3POL_G1POL_value_mask                 0x1
#define CLC3POL_G1POL_clear_mask                 0xFE

#define LC3G2POL                                 0x1
#define LC3G2POL_address                         0xF25
#define LC3G2POL_position                        0x1
#define LC3G2POL_size                            0x1
#define LC3G2POL_value_mask                      0x2
#define LC3G2POL_clear_mask                      0xFD

#define CLC3POL_G2POL                            0x1
#define CLC3POL_G2POL_address                    0xF25
#define CLC3POL_G2POL_position                   0x1
#define CLC3POL_G2POL_size                       0x1
#define CLC3POL_G2POL_value_mask                 0x2
#define CLC3POL_G2POL_clear_mask                 0xFD

#define CLC3POL_G3POL                            0x2
#define CLC3POL_G3POL_address                    0xF25
#define CLC3POL_G3POL_position                   0x2
#define CLC3POL_G3POL_size                       0x1
#define CLC3POL_G3POL_value_mask                 0x4
#define CLC3POL_G3POL_clear_mask                 0xFB

#define LC3G3POL                                 0x2
#define LC3G3POL_address                         0xF25
#define LC3G3POL_position                        0x2
#define LC3G3POL_size                            0x1
#define LC3G3POL_value_mask                      0x4
#define LC3G3POL_clear_mask                      0xFB

#define LC3G4POL                                 0x3
#define LC3G4POL_address                         0xF25
#define LC3G4POL_position                        0x3
#define LC3G4POL_size                            0x1
#define LC3G4POL_value_mask                      0x8
#define LC3G4POL_clear_mask                      0xF7

#define CLC3POL_G4POL                            0x3
#define CLC3POL_G4POL_address                    0xF25
#define CLC3POL_G4POL_position                   0x3
#define CLC3POL_G4POL_size                       0x1
#define CLC3POL_G4POL_value_mask                 0x8
#define CLC3POL_G4POL_clear_mask                 0xF7

#define LC3POL                                   0x7
#define LC3POL_address                           0xF25
#define LC3POL_position                          0x7
#define LC3POL_size                              0x1
#define LC3POL_value_mask                        0x80
#define LC3POL_clear_mask                        0x7F

#define CLC3POL_POL                              0x7
#define CLC3POL_POL_address                      0xF25
#define CLC3POL_POL_position                     0x7
#define CLC3POL_POL_size                         0x1
#define CLC3POL_POL_value_mask                   0x80
#define CLC3POL_POL_clear_mask                   0x7F


/*------------------------------------------------------------#
| CLC3SEL0                                              0xF26 |
#-------------------------------------------------------------#
| - | - | - | LC3D1S4 | LC3D1S3 | LC3D1S2 | LC3D1S1 | LC3D1S0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define CLC3SEL0                                 0x0
#define CLC3SEL0_address                         0xF26
#define CLC3SEL0_position                        0x0
#define CLC3SEL0_size                            0x8
#define CLC3SEL0_value_mask                      0xFF
#define CLC3SEL0_clear_mask                      0x0

#define CLC3SEL0_D1S0                            0x0
#define CLC3SEL0_D1S0_address                    0xF26
#define CLC3SEL0_D1S0_position                   0x0
#define CLC3SEL0_D1S0_size                       0x1
#define CLC3SEL0_D1S0_value_mask                 0x1
#define CLC3SEL0_D1S0_clear_mask                 0xFE

#define LC3D1S0                                  0x0
#define LC3D1S0_address                          0xF26
#define LC3D1S0_position                         0x0
#define LC3D1S0_size                             0x1
#define LC3D1S0_value_mask                       0x1
#define LC3D1S0_clear_mask                       0xFE

#define LC3D1S                                   0x0
#define LC3D1S_address                           0xF26
#define LC3D1S_position                          0x0
#define LC3D1S_size                              0x8
#define LC3D1S_value_mask                        0xFF
#define LC3D1S_clear_mask                        0x0

#define CLC3SEL0_D1S                             0x0
#define CLC3SEL0_D1S_address                     0xF26
#define CLC3SEL0_D1S_position                    0x0
#define CLC3SEL0_D1S_size                        0x8
#define CLC3SEL0_D1S_value_mask                  0xFF
#define CLC3SEL0_D1S_clear_mask                  0x0

#define LC3D1S1                                  0x1
#define LC3D1S1_address                          0xF26
#define LC3D1S1_position                         0x1
#define LC3D1S1_size                             0x1
#define LC3D1S1_value_mask                       0x2
#define LC3D1S1_clear_mask                       0xFD

#define CLC3SEL0_D1S1                            0x1
#define CLC3SEL0_D1S1_address                    0xF26
#define CLC3SEL0_D1S1_position                   0x1
#define CLC3SEL0_D1S1_size                       0x1
#define CLC3SEL0_D1S1_value_mask                 0x2
#define CLC3SEL0_D1S1_clear_mask                 0xFD

#define LC3D1S2                                  0x2
#define LC3D1S2_address                          0xF26
#define LC3D1S2_position                         0x2
#define LC3D1S2_size                             0x1
#define LC3D1S2_value_mask                       0x4
#define LC3D1S2_clear_mask                       0xFB

#define CLC3SEL0_D1S2                            0x2
#define CLC3SEL0_D1S2_address                    0xF26
#define CLC3SEL0_D1S2_position                   0x2
#define CLC3SEL0_D1S2_size                       0x1
#define CLC3SEL0_D1S2_value_mask                 0x4
#define CLC3SEL0_D1S2_clear_mask                 0xFB

#define LC3D1S3                                  0x3
#define LC3D1S3_address                          0xF26
#define LC3D1S3_position                         0x3
#define LC3D1S3_size                             0x1
#define LC3D1S3_value_mask                       0x8
#define LC3D1S3_clear_mask                       0xF7

#define CLC3SEL0_D1S3                            0x3
#define CLC3SEL0_D1S3_address                    0xF26
#define CLC3SEL0_D1S3_position                   0x3
#define CLC3SEL0_D1S3_size                       0x1
#define CLC3SEL0_D1S3_value_mask                 0x8
#define CLC3SEL0_D1S3_clear_mask                 0xF7

#define LC3D1S4                                  0x4
#define LC3D1S4_address                          0xF26
#define LC3D1S4_position                         0x4
#define LC3D1S4_size                             0x1
#define LC3D1S4_value_mask                       0x10
#define LC3D1S4_clear_mask                       0xEF

#define CLC3SEL0_D1S4                            0x4
#define CLC3SEL0_D1S4_address                    0xF26
#define CLC3SEL0_D1S4_position                   0x4
#define CLC3SEL0_D1S4_size                       0x1
#define CLC3SEL0_D1S4_value_mask                 0x10
#define CLC3SEL0_D1S4_clear_mask                 0xEF


/*------------------------------------------------------------#
| CLC3SEL1                                              0xF27 |
#-------------------------------------------------------------#
| - | - | - | LC3D2S4 | LC3D2S3 | LC3D2S2 | LC3D2S1 | LC3D2S0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define CLC3SEL1                                 0x0
#define CLC3SEL1_address                         0xF27
#define CLC3SEL1_position                        0x0
#define CLC3SEL1_size                            0x8
#define CLC3SEL1_value_mask                      0xFF
#define CLC3SEL1_clear_mask                      0x0

#define CLC3SEL1_D2S                             0x0
#define CLC3SEL1_D2S_address                     0xF27
#define CLC3SEL1_D2S_position                    0x0
#define CLC3SEL1_D2S_size                        0x8
#define CLC3SEL1_D2S_value_mask                  0xFF
#define CLC3SEL1_D2S_clear_mask                  0x0

#define CLC3SEL1_D2S0                            0x0
#define CLC3SEL1_D2S0_address                    0xF27
#define CLC3SEL1_D2S0_position                   0x0
#define CLC3SEL1_D2S0_size                       0x1
#define CLC3SEL1_D2S0_value_mask                 0x1
#define CLC3SEL1_D2S0_clear_mask                 0xFE

#define LC3D2S                                   0x0
#define LC3D2S_address                           0xF27
#define LC3D2S_position                          0x0
#define LC3D2S_size                              0x8
#define LC3D2S_value_mask                        0xFF
#define LC3D2S_clear_mask                        0x0

#define LC3D2S0                                  0x0
#define LC3D2S0_address                          0xF27
#define LC3D2S0_position                         0x0
#define LC3D2S0_size                             0x1
#define LC3D2S0_value_mask                       0x1
#define LC3D2S0_clear_mask                       0xFE

#define CLC3SEL1_D2S1                            0x1
#define CLC3SEL1_D2S1_address                    0xF27
#define CLC3SEL1_D2S1_position                   0x1
#define CLC3SEL1_D2S1_size                       0x1
#define CLC3SEL1_D2S1_value_mask                 0x2
#define CLC3SEL1_D2S1_clear_mask                 0xFD

#define LC3D2S1                                  0x1
#define LC3D2S1_address                          0xF27
#define LC3D2S1_position                         0x1
#define LC3D2S1_size                             0x1
#define LC3D2S1_value_mask                       0x2
#define LC3D2S1_clear_mask                       0xFD

#define CLC3SEL1_D2S2                            0x2
#define CLC3SEL1_D2S2_address                    0xF27
#define CLC3SEL1_D2S2_position                   0x2
#define CLC3SEL1_D2S2_size                       0x1
#define CLC3SEL1_D2S2_value_mask                 0x4
#define CLC3SEL1_D2S2_clear_mask                 0xFB

#define LC3D2S2                                  0x2
#define LC3D2S2_address                          0xF27
#define LC3D2S2_position                         0x2
#define LC3D2S2_size                             0x1
#define LC3D2S2_value_mask                       0x4
#define LC3D2S2_clear_mask                       0xFB

#define CLC3SEL1_D2S3                            0x3
#define CLC3SEL1_D2S3_address                    0xF27
#define CLC3SEL1_D2S3_position                   0x3
#define CLC3SEL1_D2S3_size                       0x1
#define CLC3SEL1_D2S3_value_mask                 0x8
#define CLC3SEL1_D2S3_clear_mask                 0xF7

#define LC3D2S3                                  0x3
#define LC3D2S3_address                          0xF27
#define LC3D2S3_position                         0x3
#define LC3D2S3_size                             0x1
#define LC3D2S3_value_mask                       0x8
#define LC3D2S3_clear_mask                       0xF7

#define LC3D2S4                                  0x4
#define LC3D2S4_address                          0xF27
#define LC3D2S4_position                         0x4
#define LC3D2S4_size                             0x1
#define LC3D2S4_value_mask                       0x10
#define LC3D2S4_clear_mask                       0xEF

#define CLC3SEL1_D2S4                            0x4
#define CLC3SEL1_D2S4_address                    0xF27
#define CLC3SEL1_D2S4_position                   0x4
#define CLC3SEL1_D2S4_size                       0x1
#define CLC3SEL1_D2S4_value_mask                 0x10
#define CLC3SEL1_D2S4_clear_mask                 0xEF


/*------------------------------------------------------------#
| CLC3SEL2                                              0xF28 |
#-------------------------------------------------------------#
| - | - | - | LC3D3S4 | LC3D3S3 | LC3D3S2 | LC3D3S1 | LC3D3S0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define CLC3SEL2                                 0x0
#define CLC3SEL2_address                         0xF28
#define CLC3SEL2_position                        0x0
#define CLC3SEL2_size                            0x8
#define CLC3SEL2_value_mask                      0xFF
#define CLC3SEL2_clear_mask                      0x0

#define CLC3SEL2_D3S0                            0x0
#define CLC3SEL2_D3S0_address                    0xF28
#define CLC3SEL2_D3S0_position                   0x0
#define CLC3SEL2_D3S0_size                       0x1
#define CLC3SEL2_D3S0_value_mask                 0x1
#define CLC3SEL2_D3S0_clear_mask                 0xFE

#define LC3D3S                                   0x0
#define LC3D3S_address                           0xF28
#define LC3D3S_position                          0x0
#define LC3D3S_size                              0x8
#define LC3D3S_value_mask                        0xFF
#define LC3D3S_clear_mask                        0x0

#define CLC3SEL2_D3S                             0x0
#define CLC3SEL2_D3S_address                     0xF28
#define CLC3SEL2_D3S_position                    0x0
#define CLC3SEL2_D3S_size                        0x8
#define CLC3SEL2_D3S_value_mask                  0xFF
#define CLC3SEL2_D3S_clear_mask                  0x0

#define LC3D3S0                                  0x0
#define LC3D3S0_address                          0xF28
#define LC3D3S0_position                         0x0
#define LC3D3S0_size                             0x1
#define LC3D3S0_value_mask                       0x1
#define LC3D3S0_clear_mask                       0xFE

#define LC3D3S1                                  0x1
#define LC3D3S1_address                          0xF28
#define LC3D3S1_position                         0x1
#define LC3D3S1_size                             0x1
#define LC3D3S1_value_mask                       0x2
#define LC3D3S1_clear_mask                       0xFD

#define CLC3SEL2_D3S1                            0x1
#define CLC3SEL2_D3S1_address                    0xF28
#define CLC3SEL2_D3S1_position                   0x1
#define CLC3SEL2_D3S1_size                       0x1
#define CLC3SEL2_D3S1_value_mask                 0x2
#define CLC3SEL2_D3S1_clear_mask                 0xFD

#define LC3D3S2                                  0x2
#define LC3D3S2_address                          0xF28
#define LC3D3S2_position                         0x2
#define LC3D3S2_size                             0x1
#define LC3D3S2_value_mask                       0x4
#define LC3D3S2_clear_mask                       0xFB

#define CLC3SEL2_D3S2                            0x2
#define CLC3SEL2_D3S2_address                    0xF28
#define CLC3SEL2_D3S2_position                   0x2
#define CLC3SEL2_D3S2_size                       0x1
#define CLC3SEL2_D3S2_value_mask                 0x4
#define CLC3SEL2_D3S2_clear_mask                 0xFB

#define LC3D3S3                                  0x3
#define LC3D3S3_address                          0xF28
#define LC3D3S3_position                         0x3
#define LC3D3S3_size                             0x1
#define LC3D3S3_value_mask                       0x8
#define LC3D3S3_clear_mask                       0xF7

#define CLC3SEL2_D3S3                            0x3
#define CLC3SEL2_D3S3_address                    0xF28
#define CLC3SEL2_D3S3_position                   0x3
#define CLC3SEL2_D3S3_size                       0x1
#define CLC3SEL2_D3S3_value_mask                 0x8
#define CLC3SEL2_D3S3_clear_mask                 0xF7

#define LC3D3S4                                  0x4
#define LC3D3S4_address                          0xF28
#define LC3D3S4_position                         0x4
#define LC3D3S4_size                             0x1
#define LC3D3S4_value_mask                       0x10
#define LC3D3S4_clear_mask                       0xEF

#define CLC3SEL2_D3S4                            0x4
#define CLC3SEL2_D3S4_address                    0xF28
#define CLC3SEL2_D3S4_position                   0x4
#define CLC3SEL2_D3S4_size                       0x1
#define CLC3SEL2_D3S4_value_mask                 0x10
#define CLC3SEL2_D3S4_clear_mask                 0xEF


/*------------------------------------------------------------#
| CLC3SEL3                                              0xF29 |
#-------------------------------------------------------------#
| - | - | - | LC3D4S4 | LC3D4S3 | LC3D4S2 | LC3D4S1 | LC3D4S0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define CLC3SEL3                                 0x0
#define CLC3SEL3_address                         0xF29
#define CLC3SEL3_position                        0x0
#define CLC3SEL3_size                            0x8
#define CLC3SEL3_value_mask                      0xFF
#define CLC3SEL3_clear_mask                      0x0

#define CLC3SEL3_D4S0                            0x0
#define CLC3SEL3_D4S0_address                    0xF29
#define CLC3SEL3_D4S0_position                   0x0
#define CLC3SEL3_D4S0_size                       0x1
#define CLC3SEL3_D4S0_value_mask                 0x1
#define CLC3SEL3_D4S0_clear_mask                 0xFE

#define LC3D4S0                                  0x0
#define LC3D4S0_address                          0xF29
#define LC3D4S0_position                         0x0
#define LC3D4S0_size                             0x1
#define LC3D4S0_value_mask                       0x1
#define LC3D4S0_clear_mask                       0xFE

#define LC3D4S                                   0x0
#define LC3D4S_address                           0xF29
#define LC3D4S_position                          0x0
#define LC3D4S_size                              0x8
#define LC3D4S_value_mask                        0xFF
#define LC3D4S_clear_mask                        0x0

#define CLC3SEL3_D4S                             0x0
#define CLC3SEL3_D4S_address                     0xF29
#define CLC3SEL3_D4S_position                    0x0
#define CLC3SEL3_D4S_size                        0x8
#define CLC3SEL3_D4S_value_mask                  0xFF
#define CLC3SEL3_D4S_clear_mask                  0x0

#define LC3D4S1                                  0x1
#define LC3D4S1_address                          0xF29
#define LC3D4S1_position                         0x1
#define LC3D4S1_size                             0x1
#define LC3D4S1_value_mask                       0x2
#define LC3D4S1_clear_mask                       0xFD

#define CLC3SEL3_D4S1                            0x1
#define CLC3SEL3_D4S1_address                    0xF29
#define CLC3SEL3_D4S1_position                   0x1
#define CLC3SEL3_D4S1_size                       0x1
#define CLC3SEL3_D4S1_value_mask                 0x2
#define CLC3SEL3_D4S1_clear_mask                 0xFD

#define LC3D4S2                                  0x2
#define LC3D4S2_address                          0xF29
#define LC3D4S2_position                         0x2
#define LC3D4S2_size                             0x1
#define LC3D4S2_value_mask                       0x4
#define LC3D4S2_clear_mask                       0xFB

#define CLC3SEL3_D4S2                            0x2
#define CLC3SEL3_D4S2_address                    0xF29
#define CLC3SEL3_D4S2_position                   0x2
#define CLC3SEL3_D4S2_size                       0x1
#define CLC3SEL3_D4S2_value_mask                 0x4
#define CLC3SEL3_D4S2_clear_mask                 0xFB

#define LC3D4S3                                  0x3
#define LC3D4S3_address                          0xF29
#define LC3D4S3_position                         0x3
#define LC3D4S3_size                             0x1
#define LC3D4S3_value_mask                       0x8
#define LC3D4S3_clear_mask                       0xF7

#define CLC3SEL3_D4S3                            0x3
#define CLC3SEL3_D4S3_address                    0xF29
#define CLC3SEL3_D4S3_position                   0x3
#define CLC3SEL3_D4S3_size                       0x1
#define CLC3SEL3_D4S3_value_mask                 0x8
#define CLC3SEL3_D4S3_clear_mask                 0xF7

#define LC3D4S4                                  0x4
#define LC3D4S4_address                          0xF29
#define LC3D4S4_position                         0x4
#define LC3D4S4_size                             0x1
#define LC3D4S4_value_mask                       0x10
#define LC3D4S4_clear_mask                       0xEF

#define CLC3SEL3_D4S4                            0x4
#define CLC3SEL3_D4S4_address                    0xF29
#define CLC3SEL3_D4S4_position                   0x4
#define CLC3SEL3_D4S4_size                       0x1
#define CLC3SEL3_D4S4_value_mask                 0x10
#define CLC3SEL3_D4S4_clear_mask                 0xEF


/*------------------------------------------------------------------------------------------------------#
| CLC3GLS0                                                                                        0xF2A |
#-------------------------------------------------------------------------------------------------------#
| CLC3GLS0_D4T | LC3G1D4N | LC3G1D3T | CLC3GLS0_D3N | CLC3GLS0_D2T | LC3G1D2N | LC3G1D1T | CLC3GLS0_D1N |
#-------------------------------------------------------------------------------------------------------#
| 7            | 6        | 5        | 4            | 3            | 2        | 1        | 0            |
#------------------------------------------------------------------------------------------------------*/

#define CLC3GLS0                                 0x0
#define CLC3GLS0_address                         0xF2A
#define CLC3GLS0_position                        0x0
#define CLC3GLS0_size                            0x8
#define CLC3GLS0_value_mask                      0xFF
#define CLC3GLS0_clear_mask                      0x0

#define CLC3GLS0_D1N                             0x0
#define CLC3GLS0_D1N_address                     0xF2A
#define CLC3GLS0_D1N_position                    0x0
#define CLC3GLS0_D1N_size                        0x1
#define CLC3GLS0_D1N_value_mask                  0x1
#define CLC3GLS0_D1N_clear_mask                  0xFE

#define LC3G1D1N                                 0x0
#define LC3G1D1N_address                         0xF2A
#define LC3G1D1N_position                        0x0
#define LC3G1D1N_size                            0x1
#define LC3G1D1N_value_mask                      0x1
#define LC3G1D1N_clear_mask                      0xFE

#define LC3G1D1T                                 0x1
#define LC3G1D1T_address                         0xF2A
#define LC3G1D1T_position                        0x1
#define LC3G1D1T_size                            0x1
#define LC3G1D1T_value_mask                      0x2
#define LC3G1D1T_clear_mask                      0xFD

#define CLC3GLS0_D1T                             0x1
#define CLC3GLS0_D1T_address                     0xF2A
#define CLC3GLS0_D1T_position                    0x1
#define CLC3GLS0_D1T_size                        0x1
#define CLC3GLS0_D1T_value_mask                  0x2
#define CLC3GLS0_D1T_clear_mask                  0xFD

#define LC3G1D2N                                 0x2
#define LC3G1D2N_address                         0xF2A
#define LC3G1D2N_position                        0x2
#define LC3G1D2N_size                            0x1
#define LC3G1D2N_value_mask                      0x4
#define LC3G1D2N_clear_mask                      0xFB

#define CLC3GLS0_D2N                             0x2
#define CLC3GLS0_D2N_address                     0xF2A
#define CLC3GLS0_D2N_position                    0x2
#define CLC3GLS0_D2N_size                        0x1
#define CLC3GLS0_D2N_value_mask                  0x4
#define CLC3GLS0_D2N_clear_mask                  0xFB

#define CLC3GLS0_D2T                             0x3
#define CLC3GLS0_D2T_address                     0xF2A
#define CLC3GLS0_D2T_position                    0x3
#define CLC3GLS0_D2T_size                        0x1
#define CLC3GLS0_D2T_value_mask                  0x8
#define CLC3GLS0_D2T_clear_mask                  0xF7

#define LC3G1D2T                                 0x3
#define LC3G1D2T_address                         0xF2A
#define LC3G1D2T_position                        0x3
#define LC3G1D2T_size                            0x1
#define LC3G1D2T_value_mask                      0x8
#define LC3G1D2T_clear_mask                      0xF7

#define CLC3GLS0_D3N                             0x4
#define CLC3GLS0_D3N_address                     0xF2A
#define CLC3GLS0_D3N_position                    0x4
#define CLC3GLS0_D3N_size                        0x1
#define CLC3GLS0_D3N_value_mask                  0x10
#define CLC3GLS0_D3N_clear_mask                  0xEF

#define LC3G1D3N                                 0x4
#define LC3G1D3N_address                         0xF2A
#define LC3G1D3N_position                        0x4
#define LC3G1D3N_size                            0x1
#define LC3G1D3N_value_mask                      0x10
#define LC3G1D3N_clear_mask                      0xEF

#define LC3G1D3T                                 0x5
#define LC3G1D3T_address                         0xF2A
#define LC3G1D3T_position                        0x5
#define LC3G1D3T_size                            0x1
#define LC3G1D3T_value_mask                      0x20
#define LC3G1D3T_clear_mask                      0xDF

#define CLC3GLS0_D3T                             0x5
#define CLC3GLS0_D3T_address                     0xF2A
#define CLC3GLS0_D3T_position                    0x5
#define CLC3GLS0_D3T_size                        0x1
#define CLC3GLS0_D3T_value_mask                  0x20
#define CLC3GLS0_D3T_clear_mask                  0xDF

#define CLC3GLS0_D4N                             0x6
#define CLC3GLS0_D4N_address                     0xF2A
#define CLC3GLS0_D4N_position                    0x6
#define CLC3GLS0_D4N_size                        0x1
#define CLC3GLS0_D4N_value_mask                  0x40
#define CLC3GLS0_D4N_clear_mask                  0xBF

#define LC3G1D4N                                 0x6
#define LC3G1D4N_address                         0xF2A
#define LC3G1D4N_position                        0x6
#define LC3G1D4N_size                            0x1
#define LC3G1D4N_value_mask                      0x40
#define LC3G1D4N_clear_mask                      0xBF

#define CLC3GLS0_D4T                             0x7
#define CLC3GLS0_D4T_address                     0xF2A
#define CLC3GLS0_D4T_position                    0x7
#define CLC3GLS0_D4T_size                        0x1
#define CLC3GLS0_D4T_value_mask                  0x80
#define CLC3GLS0_D4T_clear_mask                  0x7F

#define LC3G1D4T                                 0x7
#define LC3G1D4T_address                         0xF2A
#define LC3G1D4T_position                        0x7
#define LC3G1D4T_size                            0x1
#define LC3G1D4T_value_mask                      0x80
#define LC3G1D4T_clear_mask                      0x7F


/*------------------------------------------------------------------------------------------------------#
| CLC3GLS1                                                                                        0xF2B |
#-------------------------------------------------------------------------------------------------------#
| LC3G2D4T | CLC3GLS1_D4N | CLC3GLS1_D3T | LC3G2D3N | LC3G2D2T | CLC3GLS1_D2N | CLC3GLS1_D1T | LC3G2D1N |
#-------------------------------------------------------------------------------------------------------#
| 7        | 6            | 5            | 4        | 3        | 2            | 1            | 0        |
#------------------------------------------------------------------------------------------------------*/

#define CLC3GLS1                                 0x0
#define CLC3GLS1_address                         0xF2B
#define CLC3GLS1_position                        0x0
#define CLC3GLS1_size                            0x8
#define CLC3GLS1_value_mask                      0xFF
#define CLC3GLS1_clear_mask                      0x0

#define LC3G2D1N                                 0x0
#define LC3G2D1N_address                         0xF2B
#define LC3G2D1N_position                        0x0
#define LC3G2D1N_size                            0x1
#define LC3G2D1N_value_mask                      0x1
#define LC3G2D1N_clear_mask                      0xFE

#define CLC3GLS1_D1N                             0x0
#define CLC3GLS1_D1N_address                     0xF2B
#define CLC3GLS1_D1N_position                    0x0
#define CLC3GLS1_D1N_size                        0x1
#define CLC3GLS1_D1N_value_mask                  0x1
#define CLC3GLS1_D1N_clear_mask                  0xFE

#define CLC3GLS1_D1T                             0x1
#define CLC3GLS1_D1T_address                     0xF2B
#define CLC3GLS1_D1T_position                    0x1
#define CLC3GLS1_D1T_size                        0x1
#define CLC3GLS1_D1T_value_mask                  0x2
#define CLC3GLS1_D1T_clear_mask                  0xFD

#define LC3G2D1T                                 0x1
#define LC3G2D1T_address                         0xF2B
#define LC3G2D1T_position                        0x1
#define LC3G2D1T_size                            0x1
#define LC3G2D1T_value_mask                      0x2
#define LC3G2D1T_clear_mask                      0xFD

#define LC3G2D2N                                 0x2
#define LC3G2D2N_address                         0xF2B
#define LC3G2D2N_position                        0x2
#define LC3G2D2N_size                            0x1
#define LC3G2D2N_value_mask                      0x4
#define LC3G2D2N_clear_mask                      0xFB

#define CLC3GLS1_D2N                             0x2
#define CLC3GLS1_D2N_address                     0xF2B
#define CLC3GLS1_D2N_position                    0x2
#define CLC3GLS1_D2N_size                        0x1
#define CLC3GLS1_D2N_value_mask                  0x4
#define CLC3GLS1_D2N_clear_mask                  0xFB

#define LC3G2D2T                                 0x3
#define LC3G2D2T_address                         0xF2B
#define LC3G2D2T_position                        0x3
#define LC3G2D2T_size                            0x1
#define LC3G2D2T_value_mask                      0x8
#define LC3G2D2T_clear_mask                      0xF7

#define CLC3GLS1_D2T                             0x3
#define CLC3GLS1_D2T_address                     0xF2B
#define CLC3GLS1_D2T_position                    0x3
#define CLC3GLS1_D2T_size                        0x1
#define CLC3GLS1_D2T_value_mask                  0x8
#define CLC3GLS1_D2T_clear_mask                  0xF7

#define LC3G2D3N                                 0x4
#define LC3G2D3N_address                         0xF2B
#define LC3G2D3N_position                        0x4
#define LC3G2D3N_size                            0x1
#define LC3G2D3N_value_mask                      0x10
#define LC3G2D3N_clear_mask                      0xEF

#define CLC3GLS1_D3N                             0x4
#define CLC3GLS1_D3N_address                     0xF2B
#define CLC3GLS1_D3N_position                    0x4
#define CLC3GLS1_D3N_size                        0x1
#define CLC3GLS1_D3N_value_mask                  0x10
#define CLC3GLS1_D3N_clear_mask                  0xEF

#define CLC3GLS1_D3T                             0x5
#define CLC3GLS1_D3T_address                     0xF2B
#define CLC3GLS1_D3T_position                    0x5
#define CLC3GLS1_D3T_size                        0x1
#define CLC3GLS1_D3T_value_mask                  0x20
#define CLC3GLS1_D3T_clear_mask                  0xDF

#define LC3G2D3T                                 0x5
#define LC3G2D3T_address                         0xF2B
#define LC3G2D3T_position                        0x5
#define LC3G2D3T_size                            0x1
#define LC3G2D3T_value_mask                      0x20
#define LC3G2D3T_clear_mask                      0xDF

#define LC3G2D4N                                 0x6
#define LC3G2D4N_address                         0xF2B
#define LC3G2D4N_position                        0x6
#define LC3G2D4N_size                            0x1
#define LC3G2D4N_value_mask                      0x40
#define LC3G2D4N_clear_mask                      0xBF

#define CLC3GLS1_D4N                             0x6
#define CLC3GLS1_D4N_address                     0xF2B
#define CLC3GLS1_D4N_position                    0x6
#define CLC3GLS1_D4N_size                        0x1
#define CLC3GLS1_D4N_value_mask                  0x40
#define CLC3GLS1_D4N_clear_mask                  0xBF

#define LC3G2D4T                                 0x7
#define LC3G2D4T_address                         0xF2B
#define LC3G2D4T_position                        0x7
#define LC3G2D4T_size                            0x1
#define LC3G2D4T_value_mask                      0x80
#define LC3G2D4T_clear_mask                      0x7F

#define CLC3GLS1_D4T                             0x7
#define CLC3GLS1_D4T_address                     0xF2B
#define CLC3GLS1_D4T_position                    0x7
#define CLC3GLS1_D4T_size                        0x1
#define CLC3GLS1_D4T_value_mask                  0x80
#define CLC3GLS1_D4T_clear_mask                  0x7F


/*--------------------------------------------------------------------------------------------------#
| CLC3GLS2                                                                                    0xF2C |
#---------------------------------------------------------------------------------------------------#
| LC3G3D4T | CLC3GLS2_D4N | LC3G3D3T | LC3G3D3N | CLC3GLS2_D2T | LC3G3D2N | LC3G3D1T | CLC3GLS2_D1N |
#---------------------------------------------------------------------------------------------------#
| 7        | 6            | 5        | 4        | 3            | 2        | 1        | 0            |
#--------------------------------------------------------------------------------------------------*/

#define CLC3GLS2                                 0x0
#define CLC3GLS2_address                         0xF2C
#define CLC3GLS2_position                        0x0
#define CLC3GLS2_size                            0x8
#define CLC3GLS2_value_mask                      0xFF
#define CLC3GLS2_clear_mask                      0x0

#define LC3G3D1N                                 0x0
#define LC3G3D1N_address                         0xF2C
#define LC3G3D1N_position                        0x0
#define LC3G3D1N_size                            0x1
#define LC3G3D1N_value_mask                      0x1
#define LC3G3D1N_clear_mask                      0xFE

#define CLC3GLS2_D1N                             0x0
#define CLC3GLS2_D1N_address                     0xF2C
#define CLC3GLS2_D1N_position                    0x0
#define CLC3GLS2_D1N_size                        0x1
#define CLC3GLS2_D1N_value_mask                  0x1
#define CLC3GLS2_D1N_clear_mask                  0xFE

#define LC3G3D1T                                 0x1
#define LC3G3D1T_address                         0xF2C
#define LC3G3D1T_position                        0x1
#define LC3G3D1T_size                            0x1
#define LC3G3D1T_value_mask                      0x2
#define LC3G3D1T_clear_mask                      0xFD

#define CLC3GLS2_D1T                             0x1
#define CLC3GLS2_D1T_address                     0xF2C
#define CLC3GLS2_D1T_position                    0x1
#define CLC3GLS2_D1T_size                        0x1
#define CLC3GLS2_D1T_value_mask                  0x2
#define CLC3GLS2_D1T_clear_mask                  0xFD

#define CLC3GLS2_D2N                             0x2
#define CLC3GLS2_D2N_address                     0xF2C
#define CLC3GLS2_D2N_position                    0x2
#define CLC3GLS2_D2N_size                        0x1
#define CLC3GLS2_D2N_value_mask                  0x4
#define CLC3GLS2_D2N_clear_mask                  0xFB

#define LC3G3D2N                                 0x2
#define LC3G3D2N_address                         0xF2C
#define LC3G3D2N_position                        0x2
#define LC3G3D2N_size                            0x1
#define LC3G3D2N_value_mask                      0x4
#define LC3G3D2N_clear_mask                      0xFB

#define CLC3GLS2_D2T                             0x3
#define CLC3GLS2_D2T_address                     0xF2C
#define CLC3GLS2_D2T_position                    0x3
#define CLC3GLS2_D2T_size                        0x1
#define CLC3GLS2_D2T_value_mask                  0x8
#define CLC3GLS2_D2T_clear_mask                  0xF7

#define LC3G3D2T                                 0x3
#define LC3G3D2T_address                         0xF2C
#define LC3G3D2T_position                        0x3
#define LC3G3D2T_size                            0x1
#define LC3G3D2T_value_mask                      0x8
#define LC3G3D2T_clear_mask                      0xF7

#define CLC3GLS2_D3N                             0x4
#define CLC3GLS2_D3N_address                     0xF2C
#define CLC3GLS2_D3N_position                    0x4
#define CLC3GLS2_D3N_size                        0x1
#define CLC3GLS2_D3N_value_mask                  0x10
#define CLC3GLS2_D3N_clear_mask                  0xEF

#define LC3G3D3N                                 0x4
#define LC3G3D3N_address                         0xF2C
#define LC3G3D3N_position                        0x4
#define LC3G3D3N_size                            0x1
#define LC3G3D3N_value_mask                      0x10
#define LC3G3D3N_clear_mask                      0xEF

#define LC3G3D3T                                 0x5
#define LC3G3D3T_address                         0xF2C
#define LC3G3D3T_position                        0x5
#define LC3G3D3T_size                            0x1
#define LC3G3D3T_value_mask                      0x20
#define LC3G3D3T_clear_mask                      0xDF

#define CLC3GLS2_D3T                             0x5
#define CLC3GLS2_D3T_address                     0xF2C
#define CLC3GLS2_D3T_position                    0x5
#define CLC3GLS2_D3T_size                        0x1
#define CLC3GLS2_D3T_value_mask                  0x20
#define CLC3GLS2_D3T_clear_mask                  0xDF

#define CLC3GLS2_D4N                             0x6
#define CLC3GLS2_D4N_address                     0xF2C
#define CLC3GLS2_D4N_position                    0x6
#define CLC3GLS2_D4N_size                        0x1
#define CLC3GLS2_D4N_value_mask                  0x40
#define CLC3GLS2_D4N_clear_mask                  0xBF

#define LC3G3D4N                                 0x6
#define LC3G3D4N_address                         0xF2C
#define LC3G3D4N_position                        0x6
#define LC3G3D4N_size                            0x1
#define LC3G3D4N_value_mask                      0x40
#define LC3G3D4N_clear_mask                      0xBF

#define CLC3GLS2_D4T                             0x7
#define CLC3GLS2_D4T_address                     0xF2C
#define CLC3GLS2_D4T_position                    0x7
#define CLC3GLS2_D4T_size                        0x1
#define CLC3GLS2_D4T_value_mask                  0x80
#define CLC3GLS2_D4T_clear_mask                  0x7F

#define LC3G3D4T                                 0x7
#define LC3G3D4T_address                         0xF2C
#define LC3G3D4T_position                        0x7
#define LC3G3D4T_size                            0x1
#define LC3G3D4T_value_mask                      0x80
#define LC3G3D4T_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------------------------------#
| CLC3GLS3                                                                                                      0xF2D |
#---------------------------------------------------------------------------------------------------------------------#
| LC3G4D4T | CLC3GLS3_G4D4N | CLC3GLS3_G4D3T | LC3G4D3N | CLC3GLS3_G4D2T | LC3G4D2N | CLC3GLS3_G4D1T | CLC3GLS3_G4D1N |
#---------------------------------------------------------------------------------------------------------------------#
| 7        | 6              | 5              | 4        | 3              | 2        | 1              | 0              |
#--------------------------------------------------------------------------------------------------------------------*/

#define CLC3GLS3                                 0x0
#define CLC3GLS3_address                         0xF2D
#define CLC3GLS3_position                        0x0
#define CLC3GLS3_size                            0x8
#define CLC3GLS3_value_mask                      0xFF
#define CLC3GLS3_clear_mask                      0x0

#define LC3G4D1N                                 0x0
#define LC3G4D1N_address                         0xF2D
#define LC3G4D1N_position                        0x0
#define LC3G4D1N_size                            0x1
#define LC3G4D1N_value_mask                      0x1
#define LC3G4D1N_clear_mask                      0xFE

#define CLC3GLS3_G4D1N                           0x0
#define CLC3GLS3_G4D1N_address                   0xF2D
#define CLC3GLS3_G4D1N_position                  0x0
#define CLC3GLS3_G4D1N_size                      0x1
#define CLC3GLS3_G4D1N_value_mask                0x1
#define CLC3GLS3_G4D1N_clear_mask                0xFE

#define LC3G4D1T                                 0x1
#define LC3G4D1T_address                         0xF2D
#define LC3G4D1T_position                        0x1
#define LC3G4D1T_size                            0x1
#define LC3G4D1T_value_mask                      0x2
#define LC3G4D1T_clear_mask                      0xFD

#define CLC3GLS3_G4D1T                           0x1
#define CLC3GLS3_G4D1T_address                   0xF2D
#define CLC3GLS3_G4D1T_position                  0x1
#define CLC3GLS3_G4D1T_size                      0x1
#define CLC3GLS3_G4D1T_value_mask                0x2
#define CLC3GLS3_G4D1T_clear_mask                0xFD

#define LC3G4D2N                                 0x2
#define LC3G4D2N_address                         0xF2D
#define LC3G4D2N_position                        0x2
#define LC3G4D2N_size                            0x1
#define LC3G4D2N_value_mask                      0x4
#define LC3G4D2N_clear_mask                      0xFB

#define CLC3GLS3_G4D2N                           0x2
#define CLC3GLS3_G4D2N_address                   0xF2D
#define CLC3GLS3_G4D2N_position                  0x2
#define CLC3GLS3_G4D2N_size                      0x1
#define CLC3GLS3_G4D2N_value_mask                0x4
#define CLC3GLS3_G4D2N_clear_mask                0xFB

#define CLC3GLS3_G4D2T                           0x3
#define CLC3GLS3_G4D2T_address                   0xF2D
#define CLC3GLS3_G4D2T_position                  0x3
#define CLC3GLS3_G4D2T_size                      0x1
#define CLC3GLS3_G4D2T_value_mask                0x8
#define CLC3GLS3_G4D2T_clear_mask                0xF7

#define LC3G4D2T                                 0x3
#define LC3G4D2T_address                         0xF2D
#define LC3G4D2T_position                        0x3
#define LC3G4D2T_size                            0x1
#define LC3G4D2T_value_mask                      0x8
#define LC3G4D2T_clear_mask                      0xF7

#define LC3G4D3N                                 0x4
#define LC3G4D3N_address                         0xF2D
#define LC3G4D3N_position                        0x4
#define LC3G4D3N_size                            0x1
#define LC3G4D3N_value_mask                      0x10
#define LC3G4D3N_clear_mask                      0xEF

#define CLC3GLS3_G4D3N                           0x4
#define CLC3GLS3_G4D3N_address                   0xF2D
#define CLC3GLS3_G4D3N_position                  0x4
#define CLC3GLS3_G4D3N_size                      0x1
#define CLC3GLS3_G4D3N_value_mask                0x10
#define CLC3GLS3_G4D3N_clear_mask                0xEF

#define CLC3GLS3_G4D3T                           0x5
#define CLC3GLS3_G4D3T_address                   0xF2D
#define CLC3GLS3_G4D3T_position                  0x5
#define CLC3GLS3_G4D3T_size                      0x1
#define CLC3GLS3_G4D3T_value_mask                0x20
#define CLC3GLS3_G4D3T_clear_mask                0xDF

#define LC3G4D3T                                 0x5
#define LC3G4D3T_address                         0xF2D
#define LC3G4D3T_position                        0x5
#define LC3G4D3T_size                            0x1
#define LC3G4D3T_value_mask                      0x20
#define LC3G4D3T_clear_mask                      0xDF

#define LC3G4D4N                                 0x6
#define LC3G4D4N_address                         0xF2D
#define LC3G4D4N_position                        0x6
#define LC3G4D4N_size                            0x1
#define LC3G4D4N_value_mask                      0x40
#define LC3G4D4N_clear_mask                      0xBF

#define CLC3GLS3_G4D4N                           0x6
#define CLC3GLS3_G4D4N_address                   0xF2D
#define CLC3GLS3_G4D4N_position                  0x6
#define CLC3GLS3_G4D4N_size                      0x1
#define CLC3GLS3_G4D4N_value_mask                0x40
#define CLC3GLS3_G4D4N_clear_mask                0xBF

#define LC3G4D4T                                 0x7
#define LC3G4D4T_address                         0xF2D
#define LC3G4D4T_position                        0x7
#define LC3G4D4T_size                            0x1
#define LC3G4D4T_value_mask                      0x80
#define LC3G4D4T_clear_mask                      0x7F

#define CLC3GLS3_G4D4T                           0x7
#define CLC3GLS3_G4D4T_address                   0xF2D
#define CLC3GLS3_G4D4T_position                  0x7
#define CLC3GLS3_G4D4T_size                      0x1
#define CLC3GLS3_G4D4T_value_mask                0x80
#define CLC3GLS3_G4D4T_clear_mask                0x7F


/*--------------------------------------------------------------------------------------------#
| CLC4CON                                                                               0xF2E |
#---------------------------------------------------------------------------------------------#
| CLC4CON_EN | - | LC4OUT | CLC4CON_INTP | LC4INTN | LC4MODE2 | CLC4CON_MODE1 | CLC4CON_MODE0 |
#---------------------------------------------------------------------------------------------#
| 7          | 6 | 5      | 4            | 3       | 2        | 1             | 0             |
#--------------------------------------------------------------------------------------------*/

#define CLC4CON                                  0x0
#define CLC4CON_address                          0xF2E
#define CLC4CON_position                         0x0
#define CLC4CON_size                             0x8
#define CLC4CON_value_mask                       0xFF
#define CLC4CON_clear_mask                       0x0

#define LC4MODE                                  0x0
#define LC4MODE_address                          0xF2E
#define LC4MODE_position                         0x0
#define LC4MODE_size                             0x3
#define LC4MODE_value_mask                       0x7
#define LC4MODE_clear_mask                       0xF8

#define CLC4CON_MODE                             0x0
#define CLC4CON_MODE_address                     0xF2E
#define CLC4CON_MODE_position                    0x0
#define CLC4CON_MODE_size                        0x3
#define CLC4CON_MODE_value_mask                  0x7
#define CLC4CON_MODE_clear_mask                  0xF8

#define LC4MODE0                                 0x0
#define LC4MODE0_address                         0xF2E
#define LC4MODE0_position                        0x0
#define LC4MODE0_size                            0x1
#define LC4MODE0_value_mask                      0x1
#define LC4MODE0_clear_mask                      0xFE

#define CLC4CON_MODE0                            0x0
#define CLC4CON_MODE0_address                    0xF2E
#define CLC4CON_MODE0_position                   0x0
#define CLC4CON_MODE0_size                       0x1
#define CLC4CON_MODE0_value_mask                 0x1
#define CLC4CON_MODE0_clear_mask                 0xFE

#define LC4MODE1                                 0x1
#define LC4MODE1_address                         0xF2E
#define LC4MODE1_position                        0x1
#define LC4MODE1_size                            0x1
#define LC4MODE1_value_mask                      0x2
#define LC4MODE1_clear_mask                      0xFD

#define CLC4CON_MODE1                            0x1
#define CLC4CON_MODE1_address                    0xF2E
#define CLC4CON_MODE1_position                   0x1
#define CLC4CON_MODE1_size                       0x1
#define CLC4CON_MODE1_value_mask                 0x2
#define CLC4CON_MODE1_clear_mask                 0xFD

#define LC4MODE2                                 0x2
#define LC4MODE2_address                         0xF2E
#define LC4MODE2_position                        0x2
#define LC4MODE2_size                            0x1
#define LC4MODE2_value_mask                      0x4
#define LC4MODE2_clear_mask                      0xFB

#define CLC4CON_MODE2                            0x2
#define CLC4CON_MODE2_address                    0xF2E
#define CLC4CON_MODE2_position                   0x2
#define CLC4CON_MODE2_size                       0x1
#define CLC4CON_MODE2_value_mask                 0x4
#define CLC4CON_MODE2_clear_mask                 0xFB

#define LC4INTN                                  0x3
#define LC4INTN_address                          0xF2E
#define LC4INTN_position                         0x3
#define LC4INTN_size                             0x1
#define LC4INTN_value_mask                       0x8
#define LC4INTN_clear_mask                       0xF7

#define CLC4CON_INTN                             0x3
#define CLC4CON_INTN_address                     0xF2E
#define CLC4CON_INTN_position                    0x3
#define CLC4CON_INTN_size                        0x1
#define CLC4CON_INTN_value_mask                  0x8
#define CLC4CON_INTN_clear_mask                  0xF7

#define CLC4CON_INTP                             0x4
#define CLC4CON_INTP_address                     0xF2E
#define CLC4CON_INTP_position                    0x4
#define CLC4CON_INTP_size                        0x1
#define CLC4CON_INTP_value_mask                  0x10
#define CLC4CON_INTP_clear_mask                  0xEF

#define LC4INTP                                  0x4
#define LC4INTP_address                          0xF2E
#define LC4INTP_position                         0x4
#define LC4INTP_size                             0x1
#define LC4INTP_value_mask                       0x10
#define LC4INTP_clear_mask                       0xEF

#define CLC4CON_OUT                              0x5
#define CLC4CON_OUT_address                      0xF2E
#define CLC4CON_OUT_position                     0x5
#define CLC4CON_OUT_size                         0x1
#define CLC4CON_OUT_value_mask                   0x20
#define CLC4CON_OUT_clear_mask                   0xDF

#define LC4OUT                                   0x5
#define LC4OUT_address                           0xF2E
#define LC4OUT_position                          0x5
#define LC4OUT_size                              0x1
#define LC4OUT_value_mask                        0x20
#define LC4OUT_clear_mask                        0xDF

#define CLC4CON_EN                               0x7
#define CLC4CON_EN_address                       0xF2E
#define CLC4CON_EN_position                      0x7
#define CLC4CON_EN_size                          0x1
#define CLC4CON_EN_value_mask                    0x80
#define CLC4CON_EN_clear_mask                    0x7F

#define LC4EN                                    0x7
#define LC4EN_address                            0xF2E
#define LC4EN_position                           0x7
#define LC4EN_size                               0x1
#define LC4EN_value_mask                         0x80
#define LC4EN_clear_mask                         0x7F


/*------------------------------------------------------------------------------#
| CLC4POL                                                                 0xF2F |
#-------------------------------------------------------------------------------#
| LC4POL | - | - | - | LC4G4POL | CLC4POL_G3POL | CLC4POL_G2POL | CLC4POL_G1POL |
#-------------------------------------------------------------------------------#
| 7      | 6 | 5 | 4 | 3        | 2             | 1             | 0             |
#------------------------------------------------------------------------------*/

#define CLC4POL                                  0x0
#define CLC4POL_address                          0xF2F
#define CLC4POL_position                         0x0
#define CLC4POL_size                             0x8
#define CLC4POL_value_mask                       0xFF
#define CLC4POL_clear_mask                       0x0

#define CLC4POL_G1POL                            0x0
#define CLC4POL_G1POL_address                    0xF2F
#define CLC4POL_G1POL_position                   0x0
#define CLC4POL_G1POL_size                       0x1
#define CLC4POL_G1POL_value_mask                 0x1
#define CLC4POL_G1POL_clear_mask                 0xFE

#define LC4G1POL                                 0x0
#define LC4G1POL_address                         0xF2F
#define LC4G1POL_position                        0x0
#define LC4G1POL_size                            0x1
#define LC4G1POL_value_mask                      0x1
#define LC4G1POL_clear_mask                      0xFE

#define CLC4POL_G2POL                            0x1
#define CLC4POL_G2POL_address                    0xF2F
#define CLC4POL_G2POL_position                   0x1
#define CLC4POL_G2POL_size                       0x1
#define CLC4POL_G2POL_value_mask                 0x2
#define CLC4POL_G2POL_clear_mask                 0xFD

#define LC4G2POL                                 0x1
#define LC4G2POL_address                         0xF2F
#define LC4G2POL_position                        0x1
#define LC4G2POL_size                            0x1
#define LC4G2POL_value_mask                      0x2
#define LC4G2POL_clear_mask                      0xFD

#define CLC4POL_G3POL                            0x2
#define CLC4POL_G3POL_address                    0xF2F
#define CLC4POL_G3POL_position                   0x2
#define CLC4POL_G3POL_size                       0x1
#define CLC4POL_G3POL_value_mask                 0x4
#define CLC4POL_G3POL_clear_mask                 0xFB

#define LC4G3POL                                 0x2
#define LC4G3POL_address                         0xF2F
#define LC4G3POL_position                        0x2
#define LC4G3POL_size                            0x1
#define LC4G3POL_value_mask                      0x4
#define LC4G3POL_clear_mask                      0xFB

#define LC4G4POL                                 0x3
#define LC4G4POL_address                         0xF2F
#define LC4G4POL_position                        0x3
#define LC4G4POL_size                            0x1
#define LC4G4POL_value_mask                      0x8
#define LC4G4POL_clear_mask                      0xF7

#define CLC4POL_G4POL                            0x3
#define CLC4POL_G4POL_address                    0xF2F
#define CLC4POL_G4POL_position                   0x3
#define CLC4POL_G4POL_size                       0x1
#define CLC4POL_G4POL_value_mask                 0x8
#define CLC4POL_G4POL_clear_mask                 0xF7

#define LC4POL                                   0x7
#define LC4POL_address                           0xF2F
#define LC4POL_position                          0x7
#define LC4POL_size                              0x1
#define LC4POL_value_mask                        0x80
#define LC4POL_clear_mask                        0x7F

#define CLC4POL_POL                              0x7
#define CLC4POL_POL_address                      0xF2F
#define CLC4POL_POL_position                     0x7
#define CLC4POL_POL_size                         0x1
#define CLC4POL_POL_value_mask                   0x80
#define CLC4POL_POL_clear_mask                   0x7F


/*------------------------------------------------------------------------------------------#
| CLC4SEL0                                                                            0xF30 |
#-------------------------------------------------------------------------------------------#
| - | - | - | CLC4SEL0_D1S4 | CLC4SEL0_D1S3 | CLC4SEL0_D1S2 | CLC4SEL0_D1S1 | CLC4SEL0_D1S0 |
#-------------------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4             | 3             | 2             | 1             | 0             |
#------------------------------------------------------------------------------------------*/

#define CLC4SEL0                                 0x0
#define CLC4SEL0_address                         0xF30
#define CLC4SEL0_position                        0x0
#define CLC4SEL0_size                            0x8
#define CLC4SEL0_value_mask                      0xFF
#define CLC4SEL0_clear_mask                      0x0

#define CLC4SEL0_D1S0                            0x0
#define CLC4SEL0_D1S0_address                    0xF30
#define CLC4SEL0_D1S0_position                   0x0
#define CLC4SEL0_D1S0_size                       0x1
#define CLC4SEL0_D1S0_value_mask                 0x1
#define CLC4SEL0_D1S0_clear_mask                 0xFE

#define LC4D1S0                                  0x0
#define LC4D1S0_address                          0xF30
#define LC4D1S0_position                         0x0
#define LC4D1S0_size                             0x1
#define LC4D1S0_value_mask                       0x1
#define LC4D1S0_clear_mask                       0xFE

#define CLC4SEL0_D1S                             0x0
#define CLC4SEL0_D1S_address                     0xF30
#define CLC4SEL0_D1S_position                    0x0
#define CLC4SEL0_D1S_size                        0x8
#define CLC4SEL0_D1S_value_mask                  0xFF
#define CLC4SEL0_D1S_clear_mask                  0x0

#define LC4D1S                                   0x0
#define LC4D1S_address                           0xF30
#define LC4D1S_position                          0x0
#define LC4D1S_size                              0x8
#define LC4D1S_value_mask                        0xFF
#define LC4D1S_clear_mask                        0x0

#define CLC4SEL0_D1S1                            0x1
#define CLC4SEL0_D1S1_address                    0xF30
#define CLC4SEL0_D1S1_position                   0x1
#define CLC4SEL0_D1S1_size                       0x1
#define CLC4SEL0_D1S1_value_mask                 0x2
#define CLC4SEL0_D1S1_clear_mask                 0xFD

#define LC4D1S1                                  0x1
#define LC4D1S1_address                          0xF30
#define LC4D1S1_position                         0x1
#define LC4D1S1_size                             0x1
#define LC4D1S1_value_mask                       0x2
#define LC4D1S1_clear_mask                       0xFD

#define CLC4SEL0_D1S2                            0x2
#define CLC4SEL0_D1S2_address                    0xF30
#define CLC4SEL0_D1S2_position                   0x2
#define CLC4SEL0_D1S2_size                       0x1
#define CLC4SEL0_D1S2_value_mask                 0x4
#define CLC4SEL0_D1S2_clear_mask                 0xFB

#define LC4D1S2                                  0x2
#define LC4D1S2_address                          0xF30
#define LC4D1S2_position                         0x2
#define LC4D1S2_size                             0x1
#define LC4D1S2_value_mask                       0x4
#define LC4D1S2_clear_mask                       0xFB

#define CLC4SEL0_D1S3                            0x3
#define CLC4SEL0_D1S3_address                    0xF30
#define CLC4SEL0_D1S3_position                   0x3
#define CLC4SEL0_D1S3_size                       0x1
#define CLC4SEL0_D1S3_value_mask                 0x8
#define CLC4SEL0_D1S3_clear_mask                 0xF7

#define LC4D1S3                                  0x3
#define LC4D1S3_address                          0xF30
#define LC4D1S3_position                         0x3
#define LC4D1S3_size                             0x1
#define LC4D1S3_value_mask                       0x8
#define LC4D1S3_clear_mask                       0xF7

#define CLC4SEL0_D1S4                            0x4
#define CLC4SEL0_D1S4_address                    0xF30
#define CLC4SEL0_D1S4_position                   0x4
#define CLC4SEL0_D1S4_size                       0x1
#define CLC4SEL0_D1S4_value_mask                 0x10
#define CLC4SEL0_D1S4_clear_mask                 0xEF

#define LC4D1S4                                  0x4
#define LC4D1S4_address                          0xF30
#define LC4D1S4_position                         0x4
#define LC4D1S4_size                             0x1
#define LC4D1S4_value_mask                       0x10
#define LC4D1S4_clear_mask                       0xEF


/*------------------------------------------------------------#
| CLC4SEL1                                              0xF31 |
#-------------------------------------------------------------#
| - | - | - | LC4D2S4 | LC4D2S3 | LC4D2S2 | LC4D2S1 | LC4D2S0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define CLC4SEL1                                 0x0
#define CLC4SEL1_address                         0xF31
#define CLC4SEL1_position                        0x0
#define CLC4SEL1_size                            0x8
#define CLC4SEL1_value_mask                      0xFF
#define CLC4SEL1_clear_mask                      0x0

#define LC4D2S                                   0x0
#define LC4D2S_address                           0xF31
#define LC4D2S_position                          0x0
#define LC4D2S_size                              0x8
#define LC4D2S_value_mask                        0xFF
#define LC4D2S_clear_mask                        0x0

#define LC4D2S0                                  0x0
#define LC4D2S0_address                          0xF31
#define LC4D2S0_position                         0x0
#define LC4D2S0_size                             0x1
#define LC4D2S0_value_mask                       0x1
#define LC4D2S0_clear_mask                       0xFE

#define CLC4SEL1_D2S                             0x0
#define CLC4SEL1_D2S_address                     0xF31
#define CLC4SEL1_D2S_position                    0x0
#define CLC4SEL1_D2S_size                        0x8
#define CLC4SEL1_D2S_value_mask                  0xFF
#define CLC4SEL1_D2S_clear_mask                  0x0

#define CLC4SEL1_D2S0                            0x0
#define CLC4SEL1_D2S0_address                    0xF31
#define CLC4SEL1_D2S0_position                   0x0
#define CLC4SEL1_D2S0_size                       0x1
#define CLC4SEL1_D2S0_value_mask                 0x1
#define CLC4SEL1_D2S0_clear_mask                 0xFE

#define LC4D2S1                                  0x1
#define LC4D2S1_address                          0xF31
#define LC4D2S1_position                         0x1
#define LC4D2S1_size                             0x1
#define LC4D2S1_value_mask                       0x2
#define LC4D2S1_clear_mask                       0xFD

#define CLC4SEL1_D2S1                            0x1
#define CLC4SEL1_D2S1_address                    0xF31
#define CLC4SEL1_D2S1_position                   0x1
#define CLC4SEL1_D2S1_size                       0x1
#define CLC4SEL1_D2S1_value_mask                 0x2
#define CLC4SEL1_D2S1_clear_mask                 0xFD

#define LC4D2S2                                  0x2
#define LC4D2S2_address                          0xF31
#define LC4D2S2_position                         0x2
#define LC4D2S2_size                             0x1
#define LC4D2S2_value_mask                       0x4
#define LC4D2S2_clear_mask                       0xFB

#define CLC4SEL1_D2S2                            0x2
#define CLC4SEL1_D2S2_address                    0xF31
#define CLC4SEL1_D2S2_position                   0x2
#define CLC4SEL1_D2S2_size                       0x1
#define CLC4SEL1_D2S2_value_mask                 0x4
#define CLC4SEL1_D2S2_clear_mask                 0xFB

#define LC4D2S3                                  0x3
#define LC4D2S3_address                          0xF31
#define LC4D2S3_position                         0x3
#define LC4D2S3_size                             0x1
#define LC4D2S3_value_mask                       0x8
#define LC4D2S3_clear_mask                       0xF7

#define CLC4SEL1_D2S3                            0x3
#define CLC4SEL1_D2S3_address                    0xF31
#define CLC4SEL1_D2S3_position                   0x3
#define CLC4SEL1_D2S3_size                       0x1
#define CLC4SEL1_D2S3_value_mask                 0x8
#define CLC4SEL1_D2S3_clear_mask                 0xF7

#define LC4D2S4                                  0x4
#define LC4D2S4_address                          0xF31
#define LC4D2S4_position                         0x4
#define LC4D2S4_size                             0x1
#define LC4D2S4_value_mask                       0x10
#define LC4D2S4_clear_mask                       0xEF

#define CLC4SEL1_D2S4                            0x4
#define CLC4SEL1_D2S4_address                    0xF31
#define CLC4SEL1_D2S4_position                   0x4
#define CLC4SEL1_D2S4_size                       0x1
#define CLC4SEL1_D2S4_value_mask                 0x10
#define CLC4SEL1_D2S4_clear_mask                 0xEF


/*------------------------------------------------------------#
| CLC4SEL2                                              0xF32 |
#-------------------------------------------------------------#
| - | - | - | LC4D3S4 | LC4D3S3 | LC4D3S2 | LC4D3S1 | LC4D3S0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define CLC4SEL2                                 0x0
#define CLC4SEL2_address                         0xF32
#define CLC4SEL2_position                        0x0
#define CLC4SEL2_size                            0x8
#define CLC4SEL2_value_mask                      0xFF
#define CLC4SEL2_clear_mask                      0x0

#define LC4D3S                                   0x0
#define LC4D3S_address                           0xF32
#define LC4D3S_position                          0x0
#define LC4D3S_size                              0x8
#define LC4D3S_value_mask                        0xFF
#define LC4D3S_clear_mask                        0x0

#define CLC4SEL2_D3S                             0x0
#define CLC4SEL2_D3S_address                     0xF32
#define CLC4SEL2_D3S_position                    0x0
#define CLC4SEL2_D3S_size                        0x8
#define CLC4SEL2_D3S_value_mask                  0xFF
#define CLC4SEL2_D3S_clear_mask                  0x0

#define CLC4SEL2_D3S0                            0x0
#define CLC4SEL2_D3S0_address                    0xF32
#define CLC4SEL2_D3S0_position                   0x0
#define CLC4SEL2_D3S0_size                       0x1
#define CLC4SEL2_D3S0_value_mask                 0x1
#define CLC4SEL2_D3S0_clear_mask                 0xFE

#define LC4D3S0                                  0x0
#define LC4D3S0_address                          0xF32
#define LC4D3S0_position                         0x0
#define LC4D3S0_size                             0x1
#define LC4D3S0_value_mask                       0x1
#define LC4D3S0_clear_mask                       0xFE

#define LC4D3S1                                  0x1
#define LC4D3S1_address                          0xF32
#define LC4D3S1_position                         0x1
#define LC4D3S1_size                             0x1
#define LC4D3S1_value_mask                       0x2
#define LC4D3S1_clear_mask                       0xFD

#define CLC4SEL2_D3S1                            0x1
#define CLC4SEL2_D3S1_address                    0xF32
#define CLC4SEL2_D3S1_position                   0x1
#define CLC4SEL2_D3S1_size                       0x1
#define CLC4SEL2_D3S1_value_mask                 0x2
#define CLC4SEL2_D3S1_clear_mask                 0xFD

#define CLC4SEL2_D3S2                            0x2
#define CLC4SEL2_D3S2_address                    0xF32
#define CLC4SEL2_D3S2_position                   0x2
#define CLC4SEL2_D3S2_size                       0x1
#define CLC4SEL2_D3S2_value_mask                 0x4
#define CLC4SEL2_D3S2_clear_mask                 0xFB

#define LC4D3S2                                  0x2
#define LC4D3S2_address                          0xF32
#define LC4D3S2_position                         0x2
#define LC4D3S2_size                             0x1
#define LC4D3S2_value_mask                       0x4
#define LC4D3S2_clear_mask                       0xFB

#define CLC4SEL2_D3S3                            0x3
#define CLC4SEL2_D3S3_address                    0xF32
#define CLC4SEL2_D3S3_position                   0x3
#define CLC4SEL2_D3S3_size                       0x1
#define CLC4SEL2_D3S3_value_mask                 0x8
#define CLC4SEL2_D3S3_clear_mask                 0xF7

#define LC4D3S3                                  0x3
#define LC4D3S3_address                          0xF32
#define LC4D3S3_position                         0x3
#define LC4D3S3_size                             0x1
#define LC4D3S3_value_mask                       0x8
#define LC4D3S3_clear_mask                       0xF7

#define LC4D3S4                                  0x4
#define LC4D3S4_address                          0xF32
#define LC4D3S4_position                         0x4
#define LC4D3S4_size                             0x1
#define LC4D3S4_value_mask                       0x10
#define LC4D3S4_clear_mask                       0xEF

#define CLC4SEL2_D3S4                            0x4
#define CLC4SEL2_D3S4_address                    0xF32
#define CLC4SEL2_D3S4_position                   0x4
#define CLC4SEL2_D3S4_size                       0x1
#define CLC4SEL2_D3S4_value_mask                 0x10
#define CLC4SEL2_D3S4_clear_mask                 0xEF


/*------------------------------------------------------------#
| CLC4SEL3                                              0xF33 |
#-------------------------------------------------------------#
| - | - | - | LC4D4S4 | LC4D4S3 | LC4D4S2 | LC4D4S1 | LC4D4S0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define CLC4SEL3                                 0x0
#define CLC4SEL3_address                         0xF33
#define CLC4SEL3_position                        0x0
#define CLC4SEL3_size                            0x8
#define CLC4SEL3_value_mask                      0xFF
#define CLC4SEL3_clear_mask                      0x0

#define LC4D4S0                                  0x0
#define LC4D4S0_address                          0xF33
#define LC4D4S0_position                         0x0
#define LC4D4S0_size                             0x1
#define LC4D4S0_value_mask                       0x1
#define LC4D4S0_clear_mask                       0xFE

#define LC4D4S                                   0x0
#define LC4D4S_address                           0xF33
#define LC4D4S_position                          0x0
#define LC4D4S_size                              0x8
#define LC4D4S_value_mask                        0xFF
#define LC4D4S_clear_mask                        0x0

#define CLC4SEL3_D4S0                            0x0
#define CLC4SEL3_D4S0_address                    0xF33
#define CLC4SEL3_D4S0_position                   0x0
#define CLC4SEL3_D4S0_size                       0x1
#define CLC4SEL3_D4S0_value_mask                 0x1
#define CLC4SEL3_D4S0_clear_mask                 0xFE

#define CLC4SEL3_D4S                             0x0
#define CLC4SEL3_D4S_address                     0xF33
#define CLC4SEL3_D4S_position                    0x0
#define CLC4SEL3_D4S_size                        0x8
#define CLC4SEL3_D4S_value_mask                  0xFF
#define CLC4SEL3_D4S_clear_mask                  0x0

#define LC4D4S1                                  0x1
#define LC4D4S1_address                          0xF33
#define LC4D4S1_position                         0x1
#define LC4D4S1_size                             0x1
#define LC4D4S1_value_mask                       0x2
#define LC4D4S1_clear_mask                       0xFD

#define CLC4SEL3_D4S1                            0x1
#define CLC4SEL3_D4S1_address                    0xF33
#define CLC4SEL3_D4S1_position                   0x1
#define CLC4SEL3_D4S1_size                       0x1
#define CLC4SEL3_D4S1_value_mask                 0x2
#define CLC4SEL3_D4S1_clear_mask                 0xFD

#define LC4D4S2                                  0x2
#define LC4D4S2_address                          0xF33
#define LC4D4S2_position                         0x2
#define LC4D4S2_size                             0x1
#define LC4D4S2_value_mask                       0x4
#define LC4D4S2_clear_mask                       0xFB

#define CLC4SEL3_D4S2                            0x2
#define CLC4SEL3_D4S2_address                    0xF33
#define CLC4SEL3_D4S2_position                   0x2
#define CLC4SEL3_D4S2_size                       0x1
#define CLC4SEL3_D4S2_value_mask                 0x4
#define CLC4SEL3_D4S2_clear_mask                 0xFB

#define LC4D4S3                                  0x3
#define LC4D4S3_address                          0xF33
#define LC4D4S3_position                         0x3
#define LC4D4S3_size                             0x1
#define LC4D4S3_value_mask                       0x8
#define LC4D4S3_clear_mask                       0xF7

#define CLC4SEL3_D4S3                            0x3
#define CLC4SEL3_D4S3_address                    0xF33
#define CLC4SEL3_D4S3_position                   0x3
#define CLC4SEL3_D4S3_size                       0x1
#define CLC4SEL3_D4S3_value_mask                 0x8
#define CLC4SEL3_D4S3_clear_mask                 0xF7

#define LC4D4S4                                  0x4
#define LC4D4S4_address                          0xF33
#define LC4D4S4_position                         0x4
#define LC4D4S4_size                             0x1
#define LC4D4S4_value_mask                       0x10
#define LC4D4S4_clear_mask                       0xEF

#define CLC4SEL3_D4S4                            0x4
#define CLC4SEL3_D4S4_address                    0xF33
#define CLC4SEL3_D4S4_position                   0x4
#define CLC4SEL3_D4S4_size                       0x1
#define CLC4SEL3_D4S4_value_mask                 0x10
#define CLC4SEL3_D4S4_clear_mask                 0xEF


/*------------------------------------------------------------------------------------------------------#
| CLC4GLS0                                                                                        0xF34 |
#-------------------------------------------------------------------------------------------------------#
| LC4G1D4T | LC4G1D4N | LC4G1D3T | CLC4GLS0_D3N | CLC4GLS0_D2T | CLC4GLS0_D2N | LC4G1D1T | CLC4GLS0_D1N |
#-------------------------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4            | 3            | 2            | 1        | 0            |
#------------------------------------------------------------------------------------------------------*/

#define CLC4GLS0                                 0x0
#define CLC4GLS0_address                         0xF34
#define CLC4GLS0_position                        0x0
#define CLC4GLS0_size                            0x8
#define CLC4GLS0_value_mask                      0xFF
#define CLC4GLS0_clear_mask                      0x0

#define CLC4GLS0_D1N                             0x0
#define CLC4GLS0_D1N_address                     0xF34
#define CLC4GLS0_D1N_position                    0x0
#define CLC4GLS0_D1N_size                        0x1
#define CLC4GLS0_D1N_value_mask                  0x1
#define CLC4GLS0_D1N_clear_mask                  0xFE

#define LC4G1D1N                                 0x0
#define LC4G1D1N_address                         0xF34
#define LC4G1D1N_position                        0x0
#define LC4G1D1N_size                            0x1
#define LC4G1D1N_value_mask                      0x1
#define LC4G1D1N_clear_mask                      0xFE

#define CLC4GLS0_D1T                             0x1
#define CLC4GLS0_D1T_address                     0xF34
#define CLC4GLS0_D1T_position                    0x1
#define CLC4GLS0_D1T_size                        0x1
#define CLC4GLS0_D1T_value_mask                  0x2
#define CLC4GLS0_D1T_clear_mask                  0xFD

#define LC4G1D1T                                 0x1
#define LC4G1D1T_address                         0xF34
#define LC4G1D1T_position                        0x1
#define LC4G1D1T_size                            0x1
#define LC4G1D1T_value_mask                      0x2
#define LC4G1D1T_clear_mask                      0xFD

#define CLC4GLS0_D2N                             0x2
#define CLC4GLS0_D2N_address                     0xF34
#define CLC4GLS0_D2N_position                    0x2
#define CLC4GLS0_D2N_size                        0x1
#define CLC4GLS0_D2N_value_mask                  0x4
#define CLC4GLS0_D2N_clear_mask                  0xFB

#define LC4G1D2N                                 0x2
#define LC4G1D2N_address                         0xF34
#define LC4G1D2N_position                        0x2
#define LC4G1D2N_size                            0x1
#define LC4G1D2N_value_mask                      0x4
#define LC4G1D2N_clear_mask                      0xFB

#define CLC4GLS0_D2T                             0x3
#define CLC4GLS0_D2T_address                     0xF34
#define CLC4GLS0_D2T_position                    0x3
#define CLC4GLS0_D2T_size                        0x1
#define CLC4GLS0_D2T_value_mask                  0x8
#define CLC4GLS0_D2T_clear_mask                  0xF7

#define LC4G1D2T                                 0x3
#define LC4G1D2T_address                         0xF34
#define LC4G1D2T_position                        0x3
#define LC4G1D2T_size                            0x1
#define LC4G1D2T_value_mask                      0x8
#define LC4G1D2T_clear_mask                      0xF7

#define CLC4GLS0_D3N                             0x4
#define CLC4GLS0_D3N_address                     0xF34
#define CLC4GLS0_D3N_position                    0x4
#define CLC4GLS0_D3N_size                        0x1
#define CLC4GLS0_D3N_value_mask                  0x10
#define CLC4GLS0_D3N_clear_mask                  0xEF

#define LC4G1D3N                                 0x4
#define LC4G1D3N_address                         0xF34
#define LC4G1D3N_position                        0x4
#define LC4G1D3N_size                            0x1
#define LC4G1D3N_value_mask                      0x10
#define LC4G1D3N_clear_mask                      0xEF

#define CLC4GLS0_D3T                             0x5
#define CLC4GLS0_D3T_address                     0xF34
#define CLC4GLS0_D3T_position                    0x5
#define CLC4GLS0_D3T_size                        0x1
#define CLC4GLS0_D3T_value_mask                  0x20
#define CLC4GLS0_D3T_clear_mask                  0xDF

#define LC4G1D3T                                 0x5
#define LC4G1D3T_address                         0xF34
#define LC4G1D3T_position                        0x5
#define LC4G1D3T_size                            0x1
#define LC4G1D3T_value_mask                      0x20
#define LC4G1D3T_clear_mask                      0xDF

#define CLC4GLS0_D4N                             0x6
#define CLC4GLS0_D4N_address                     0xF34
#define CLC4GLS0_D4N_position                    0x6
#define CLC4GLS0_D4N_size                        0x1
#define CLC4GLS0_D4N_value_mask                  0x40
#define CLC4GLS0_D4N_clear_mask                  0xBF

#define LC4G1D4N                                 0x6
#define LC4G1D4N_address                         0xF34
#define LC4G1D4N_position                        0x6
#define LC4G1D4N_size                            0x1
#define LC4G1D4N_value_mask                      0x40
#define LC4G1D4N_clear_mask                      0xBF

#define CLC4GLS0_D4T                             0x7
#define CLC4GLS0_D4T_address                     0xF34
#define CLC4GLS0_D4T_position                    0x7
#define CLC4GLS0_D4T_size                        0x1
#define CLC4GLS0_D4T_value_mask                  0x80
#define CLC4GLS0_D4T_clear_mask                  0x7F

#define LC4G1D4T                                 0x7
#define LC4G1D4T_address                         0xF34
#define LC4G1D4T_position                        0x7
#define LC4G1D4T_size                            0x1
#define LC4G1D4T_value_mask                      0x80
#define LC4G1D4T_clear_mask                      0x7F


/*------------------------------------------------------------------------------------------------------#
| CLC4GLS1                                                                                        0xF35 |
#-------------------------------------------------------------------------------------------------------#
| LC4G2D4T | CLC4GLS1_D4N | LC4G2D3T | CLC4GLS1_D3N | LC4G2D2T | CLC4GLS1_D2N | CLC4GLS1_D1T | LC4G2D1N |
#-------------------------------------------------------------------------------------------------------#
| 7        | 6            | 5        | 4            | 3        | 2            | 1            | 0        |
#------------------------------------------------------------------------------------------------------*/

#define CLC4GLS1                                 0x0
#define CLC4GLS1_address                         0xF35
#define CLC4GLS1_position                        0x0
#define CLC4GLS1_size                            0x8
#define CLC4GLS1_value_mask                      0xFF
#define CLC4GLS1_clear_mask                      0x0

#define CLC4GLS1_D1N                             0x0
#define CLC4GLS1_D1N_address                     0xF35
#define CLC4GLS1_D1N_position                    0x0
#define CLC4GLS1_D1N_size                        0x1
#define CLC4GLS1_D1N_value_mask                  0x1
#define CLC4GLS1_D1N_clear_mask                  0xFE

#define LC4G2D1N                                 0x0
#define LC4G2D1N_address                         0xF35
#define LC4G2D1N_position                        0x0
#define LC4G2D1N_size                            0x1
#define LC4G2D1N_value_mask                      0x1
#define LC4G2D1N_clear_mask                      0xFE

#define CLC4GLS1_D1T                             0x1
#define CLC4GLS1_D1T_address                     0xF35
#define CLC4GLS1_D1T_position                    0x1
#define CLC4GLS1_D1T_size                        0x1
#define CLC4GLS1_D1T_value_mask                  0x2
#define CLC4GLS1_D1T_clear_mask                  0xFD

#define LC4G2D1T                                 0x1
#define LC4G2D1T_address                         0xF35
#define LC4G2D1T_position                        0x1
#define LC4G2D1T_size                            0x1
#define LC4G2D1T_value_mask                      0x2
#define LC4G2D1T_clear_mask                      0xFD

#define LC4G2D2N                                 0x2
#define LC4G2D2N_address                         0xF35
#define LC4G2D2N_position                        0x2
#define LC4G2D2N_size                            0x1
#define LC4G2D2N_value_mask                      0x4
#define LC4G2D2N_clear_mask                      0xFB

#define CLC4GLS1_D2N                             0x2
#define CLC4GLS1_D2N_address                     0xF35
#define CLC4GLS1_D2N_position                    0x2
#define CLC4GLS1_D2N_size                        0x1
#define CLC4GLS1_D2N_value_mask                  0x4
#define CLC4GLS1_D2N_clear_mask                  0xFB

#define LC4G2D2T                                 0x3
#define LC4G2D2T_address                         0xF35
#define LC4G2D2T_position                        0x3
#define LC4G2D2T_size                            0x1
#define LC4G2D2T_value_mask                      0x8
#define LC4G2D2T_clear_mask                      0xF7

#define CLC4GLS1_D2T                             0x3
#define CLC4GLS1_D2T_address                     0xF35
#define CLC4GLS1_D2T_position                    0x3
#define CLC4GLS1_D2T_size                        0x1
#define CLC4GLS1_D2T_value_mask                  0x8
#define CLC4GLS1_D2T_clear_mask                  0xF7

#define CLC4GLS1_D3N                             0x4
#define CLC4GLS1_D3N_address                     0xF35
#define CLC4GLS1_D3N_position                    0x4
#define CLC4GLS1_D3N_size                        0x1
#define CLC4GLS1_D3N_value_mask                  0x10
#define CLC4GLS1_D3N_clear_mask                  0xEF

#define LC4G2D3N                                 0x4
#define LC4G2D3N_address                         0xF35
#define LC4G2D3N_position                        0x4
#define LC4G2D3N_size                            0x1
#define LC4G2D3N_value_mask                      0x10
#define LC4G2D3N_clear_mask                      0xEF

#define LC4G2D3T                                 0x5
#define LC4G2D3T_address                         0xF35
#define LC4G2D3T_position                        0x5
#define LC4G2D3T_size                            0x1
#define LC4G2D3T_value_mask                      0x20
#define LC4G2D3T_clear_mask                      0xDF

#define CLC4GLS1_D3T                             0x5
#define CLC4GLS1_D3T_address                     0xF35
#define CLC4GLS1_D3T_position                    0x5
#define CLC4GLS1_D3T_size                        0x1
#define CLC4GLS1_D3T_value_mask                  0x20
#define CLC4GLS1_D3T_clear_mask                  0xDF

#define CLC4GLS1_D4N                             0x6
#define CLC4GLS1_D4N_address                     0xF35
#define CLC4GLS1_D4N_position                    0x6
#define CLC4GLS1_D4N_size                        0x1
#define CLC4GLS1_D4N_value_mask                  0x40
#define CLC4GLS1_D4N_clear_mask                  0xBF

#define LC4G2D4N                                 0x6
#define LC4G2D4N_address                         0xF35
#define LC4G2D4N_position                        0x6
#define LC4G2D4N_size                            0x1
#define LC4G2D4N_value_mask                      0x40
#define LC4G2D4N_clear_mask                      0xBF

#define CLC4GLS1_D4T                             0x7
#define CLC4GLS1_D4T_address                     0xF35
#define CLC4GLS1_D4T_position                    0x7
#define CLC4GLS1_D4T_size                        0x1
#define CLC4GLS1_D4T_value_mask                  0x80
#define CLC4GLS1_D4T_clear_mask                  0x7F

#define LC4G2D4T                                 0x7
#define LC4G2D4T_address                         0xF35
#define LC4G2D4T_position                        0x7
#define LC4G2D4T_size                            0x1
#define LC4G2D4T_value_mask                      0x80
#define LC4G2D4T_clear_mask                      0x7F


/*----------------------------------------------------------------------------------------------------------#
| CLC4GLS2                                                                                            0xF36 |
#-----------------------------------------------------------------------------------------------------------#
| LC4G3D4T | CLC4GLS2_D4N | CLC4GLS2_D3T | CLC4GLS2_D3N | CLC4GLS2_D2T | CLC4GLS2_D2N | LC4G3D1T | LC4G3D1N |
#-----------------------------------------------------------------------------------------------------------#
| 7        | 6            | 5            | 4            | 3            | 2            | 1        | 0        |
#----------------------------------------------------------------------------------------------------------*/

#define CLC4GLS2                                 0x0
#define CLC4GLS2_address                         0xF36
#define CLC4GLS2_position                        0x0
#define CLC4GLS2_size                            0x8
#define CLC4GLS2_value_mask                      0xFF
#define CLC4GLS2_clear_mask                      0x0

#define CLC4GLS2_D1N                             0x0
#define CLC4GLS2_D1N_address                     0xF36
#define CLC4GLS2_D1N_position                    0x0
#define CLC4GLS2_D1N_size                        0x1
#define CLC4GLS2_D1N_value_mask                  0x1
#define CLC4GLS2_D1N_clear_mask                  0xFE

#define LC4G3D1N                                 0x0
#define LC4G3D1N_address                         0xF36
#define LC4G3D1N_position                        0x0
#define LC4G3D1N_size                            0x1
#define LC4G3D1N_value_mask                      0x1
#define LC4G3D1N_clear_mask                      0xFE

#define CLC4GLS2_D1T                             0x1
#define CLC4GLS2_D1T_address                     0xF36
#define CLC4GLS2_D1T_position                    0x1
#define CLC4GLS2_D1T_size                        0x1
#define CLC4GLS2_D1T_value_mask                  0x2
#define CLC4GLS2_D1T_clear_mask                  0xFD

#define LC4G3D1T                                 0x1
#define LC4G3D1T_address                         0xF36
#define LC4G3D1T_position                        0x1
#define LC4G3D1T_size                            0x1
#define LC4G3D1T_value_mask                      0x2
#define LC4G3D1T_clear_mask                      0xFD

#define LC4G3D2N                                 0x2
#define LC4G3D2N_address                         0xF36
#define LC4G3D2N_position                        0x2
#define LC4G3D2N_size                            0x1
#define LC4G3D2N_value_mask                      0x4
#define LC4G3D2N_clear_mask                      0xFB

#define CLC4GLS2_D2N                             0x2
#define CLC4GLS2_D2N_address                     0xF36
#define CLC4GLS2_D2N_position                    0x2
#define CLC4GLS2_D2N_size                        0x1
#define CLC4GLS2_D2N_value_mask                  0x4
#define CLC4GLS2_D2N_clear_mask                  0xFB

#define LC4G3D2T                                 0x3
#define LC4G3D2T_address                         0xF36
#define LC4G3D2T_position                        0x3
#define LC4G3D2T_size                            0x1
#define LC4G3D2T_value_mask                      0x8
#define LC4G3D2T_clear_mask                      0xF7

#define CLC4GLS2_D2T                             0x3
#define CLC4GLS2_D2T_address                     0xF36
#define CLC4GLS2_D2T_position                    0x3
#define CLC4GLS2_D2T_size                        0x1
#define CLC4GLS2_D2T_value_mask                  0x8
#define CLC4GLS2_D2T_clear_mask                  0xF7

#define CLC4GLS2_D3N                             0x4
#define CLC4GLS2_D3N_address                     0xF36
#define CLC4GLS2_D3N_position                    0x4
#define CLC4GLS2_D3N_size                        0x1
#define CLC4GLS2_D3N_value_mask                  0x10
#define CLC4GLS2_D3N_clear_mask                  0xEF

#define LC4G3D3N                                 0x4
#define LC4G3D3N_address                         0xF36
#define LC4G3D3N_position                        0x4
#define LC4G3D3N_size                            0x1
#define LC4G3D3N_value_mask                      0x10
#define LC4G3D3N_clear_mask                      0xEF

#define CLC4GLS2_D3T                             0x5
#define CLC4GLS2_D3T_address                     0xF36
#define CLC4GLS2_D3T_position                    0x5
#define CLC4GLS2_D3T_size                        0x1
#define CLC4GLS2_D3T_value_mask                  0x20
#define CLC4GLS2_D3T_clear_mask                  0xDF

#define LC4G3D3T                                 0x5
#define LC4G3D3T_address                         0xF36
#define LC4G3D3T_position                        0x5
#define LC4G3D3T_size                            0x1
#define LC4G3D3T_value_mask                      0x20
#define LC4G3D3T_clear_mask                      0xDF

#define LC4G3D4N                                 0x6
#define LC4G3D4N_address                         0xF36
#define LC4G3D4N_position                        0x6
#define LC4G3D4N_size                            0x1
#define LC4G3D4N_value_mask                      0x40
#define LC4G3D4N_clear_mask                      0xBF

#define CLC4GLS2_D4N                             0x6
#define CLC4GLS2_D4N_address                     0xF36
#define CLC4GLS2_D4N_position                    0x6
#define CLC4GLS2_D4N_size                        0x1
#define CLC4GLS2_D4N_value_mask                  0x40
#define CLC4GLS2_D4N_clear_mask                  0xBF

#define LC4G3D4T                                 0x7
#define LC4G3D4T_address                         0xF36
#define LC4G3D4T_position                        0x7
#define LC4G3D4T_size                            0x1
#define LC4G3D4T_value_mask                      0x80
#define LC4G3D4T_clear_mask                      0x7F

#define CLC4GLS2_D4T                             0x7
#define CLC4GLS2_D4T_address                     0xF36
#define CLC4GLS2_D4T_position                    0x7
#define CLC4GLS2_D4T_size                        0x1
#define CLC4GLS2_D4T_value_mask                  0x80
#define CLC4GLS2_D4T_clear_mask                  0x7F


/*--------------------------------------------------------------------------------------------------------------#
| CLC4GLS3                                                                                                0xF37 |
#---------------------------------------------------------------------------------------------------------------#
| CLC4GLS3_G4D4T | LC4G4D4N | CLC4GLS3_G4D3T | LC4G4D3N | CLC4GLS3_G4D2T | LC4G4D2N | LC4G4D1T | CLC4GLS3_G4D1N |
#---------------------------------------------------------------------------------------------------------------#
| 7              | 6        | 5              | 4        | 3              | 2        | 1        | 0              |
#--------------------------------------------------------------------------------------------------------------*/

#define CLC4GLS3                                 0x0
#define CLC4GLS3_address                         0xF37
#define CLC4GLS3_position                        0x0
#define CLC4GLS3_size                            0x8
#define CLC4GLS3_value_mask                      0xFF
#define CLC4GLS3_clear_mask                      0x0

#define CLC4GLS3_G4D1N                           0x0
#define CLC4GLS3_G4D1N_address                   0xF37
#define CLC4GLS3_G4D1N_position                  0x0
#define CLC4GLS3_G4D1N_size                      0x1
#define CLC4GLS3_G4D1N_value_mask                0x1
#define CLC4GLS3_G4D1N_clear_mask                0xFE

#define LC4G4D1N                                 0x0
#define LC4G4D1N_address                         0xF37
#define LC4G4D1N_position                        0x0
#define LC4G4D1N_size                            0x1
#define LC4G4D1N_value_mask                      0x1
#define LC4G4D1N_clear_mask                      0xFE

#define LC4G4D1T                                 0x1
#define LC4G4D1T_address                         0xF37
#define LC4G4D1T_position                        0x1
#define LC4G4D1T_size                            0x1
#define LC4G4D1T_value_mask                      0x2
#define LC4G4D1T_clear_mask                      0xFD

#define CLC4GLS3_G4D1T                           0x1
#define CLC4GLS3_G4D1T_address                   0xF37
#define CLC4GLS3_G4D1T_position                  0x1
#define CLC4GLS3_G4D1T_size                      0x1
#define CLC4GLS3_G4D1T_value_mask                0x2
#define CLC4GLS3_G4D1T_clear_mask                0xFD

#define LC4G4D2N                                 0x2
#define LC4G4D2N_address                         0xF37
#define LC4G4D2N_position                        0x2
#define LC4G4D2N_size                            0x1
#define LC4G4D2N_value_mask                      0x4
#define LC4G4D2N_clear_mask                      0xFB

#define CLC4GLS3_G4D2N                           0x2
#define CLC4GLS3_G4D2N_address                   0xF37
#define CLC4GLS3_G4D2N_position                  0x2
#define CLC4GLS3_G4D2N_size                      0x1
#define CLC4GLS3_G4D2N_value_mask                0x4
#define CLC4GLS3_G4D2N_clear_mask                0xFB

#define LC4G4D2T                                 0x3
#define LC4G4D2T_address                         0xF37
#define LC4G4D2T_position                        0x3
#define LC4G4D2T_size                            0x1
#define LC4G4D2T_value_mask                      0x8
#define LC4G4D2T_clear_mask                      0xF7

#define CLC4GLS3_G4D2T                           0x3
#define CLC4GLS3_G4D2T_address                   0xF37
#define CLC4GLS3_G4D2T_position                  0x3
#define CLC4GLS3_G4D2T_size                      0x1
#define CLC4GLS3_G4D2T_value_mask                0x8
#define CLC4GLS3_G4D2T_clear_mask                0xF7

#define CLC4GLS3_G4D3N                           0x4
#define CLC4GLS3_G4D3N_address                   0xF37
#define CLC4GLS3_G4D3N_position                  0x4
#define CLC4GLS3_G4D3N_size                      0x1
#define CLC4GLS3_G4D3N_value_mask                0x10
#define CLC4GLS3_G4D3N_clear_mask                0xEF

#define LC4G4D3N                                 0x4
#define LC4G4D3N_address                         0xF37
#define LC4G4D3N_position                        0x4
#define LC4G4D3N_size                            0x1
#define LC4G4D3N_value_mask                      0x10
#define LC4G4D3N_clear_mask                      0xEF

#define CLC4GLS3_G4D3T                           0x5
#define CLC4GLS3_G4D3T_address                   0xF37
#define CLC4GLS3_G4D3T_position                  0x5
#define CLC4GLS3_G4D3T_size                      0x1
#define CLC4GLS3_G4D3T_value_mask                0x20
#define CLC4GLS3_G4D3T_clear_mask                0xDF

#define LC4G4D3T                                 0x5
#define LC4G4D3T_address                         0xF37
#define LC4G4D3T_position                        0x5
#define LC4G4D3T_size                            0x1
#define LC4G4D3T_value_mask                      0x20
#define LC4G4D3T_clear_mask                      0xDF

#define LC4G4D4N                                 0x6
#define LC4G4D4N_address                         0xF37
#define LC4G4D4N_position                        0x6
#define LC4G4D4N_size                            0x1
#define LC4G4D4N_value_mask                      0x40
#define LC4G4D4N_clear_mask                      0xBF

#define CLC4GLS3_G4D4N                           0x6
#define CLC4GLS3_G4D4N_address                   0xF37
#define CLC4GLS3_G4D4N_position                  0x6
#define CLC4GLS3_G4D4N_size                      0x1
#define CLC4GLS3_G4D4N_value_mask                0x40
#define CLC4GLS3_G4D4N_clear_mask                0xBF

#define LC4G4D4T                                 0x7
#define LC4G4D4T_address                         0xF37
#define LC4G4D4T_position                        0x7
#define LC4G4D4T_size                            0x1
#define LC4G4D4T_value_mask                      0x80
#define LC4G4D4T_clear_mask                      0x7F

#define CLC4GLS3_G4D4T                           0x7
#define CLC4GLS3_G4D4T_address                   0xF37
#define CLC4GLS3_G4D4T_position                  0x7
#define CLC4GLS3_G4D4T_size                      0x1
#define CLC4GLS3_G4D4T_value_mask                0x80
#define CLC4GLS3_G4D4T_clear_mask                0x7F


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

#endif // _PIC16LF1716_H_
