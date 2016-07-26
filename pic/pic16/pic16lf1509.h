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

#ifndef _PIC16LF1509_H_
#define _PIC16LF1509_H_


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


/*------------------------------------------#
| PORTA                                 0xC |
#-------------------------------------------#
| - | - | RA5 | RA4 | RA3 | RA2 | RA1 | RA0 |
#-------------------------------------------#
| 7 | 6 | 5   | 4   | 3   | 2   | 1   | 0   |
#------------------------------------------*/

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


/*--------------------------------------#
| PORTB                             0xD |
#---------------------------------------#
| RB7 | RB6 | RB5 | RB4 | - | - | - | - |
#---------------------------------------#
| 7   | 6   | 5   | 4   | 3 | 2 | 1 | 0 |
#--------------------------------------*/

#define PORTB                                    0x0
#define PORTB_address                            0x00D
#define PORTB_position                           0x0
#define PORTB_size                               0x8
#define PORTB_value_mask                         0xFF
#define PORTB_clear_mask                         0x0

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


/*------------------------------------------------------------#
| PIR1                                                   0x11 |
#-------------------------------------------------------------#
| TMR1GIF | ADIF | RCIF | TXIF | SSP1IF | - | TMR2IF | TMR1IF |
#-------------------------------------------------------------#
| 7       | 6    | 5    | 4    | 3      | 2 | 1      | 0      |
#------------------------------------------------------------*/

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


/*--------------------------------------------------#
| PIR2                                         0x12 |
#---------------------------------------------------#
| OSFIF | C2IF | C1IF | - | BCL1IF | NCO1IF | - | - |
#---------------------------------------------------#
| 7     | 6    | 5    | 4 | 3      | 2      | 1 | 0 |
#--------------------------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0x012
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

#define NCO1IF                                   0x2
#define NCO1IF_address                           0x012
#define NCO1IF_position                          0x2
#define NCO1IF_size                              0x1
#define NCO1IF_value_mask                        0x4
#define NCO1IF_clear_mask                        0xFB

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


/*--------------------------------------------------#
| PIR3                                         0x13 |
#---------------------------------------------------#
| - | - | - | - | CLC4IF | CLC3IF | CLC2IF | CLC1IF |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

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


/*------------------------------------------------------------#
| TRISA                                                  0x8C |
#-------------------------------------------------------------#
| - | - | TRISA5 | TRISA4 | TRISA3 | TRISA2 | TRISA1 | TRISA0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

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


/*--------------------------------------------------#
| TRISB                                        0x8D |
#---------------------------------------------------#
| TRISB7 | TRISB6 | TRISB5 | TRISB4 | - | - | - | - |
#---------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2 | 1 | 0 |
#--------------------------------------------------*/

#define TRISB                                    0x0
#define TRISB_address                            0x08D
#define TRISB_position                           0x0
#define TRISB_size                               0x8
#define TRISB_value_mask                         0xFF
#define TRISB_clear_mask                         0x0

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


/*------------------------------------------------------------#
| PIE1                                                   0x91 |
#-------------------------------------------------------------#
| TMR1GIE | ADIE | RCIE | TXIE | SSP1IE | - | TMR2IE | TMR1IE |
#-------------------------------------------------------------#
| 7       | 6    | 5    | 4    | 3      | 2 | 1      | 0      |
#------------------------------------------------------------*/

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


/*--------------------------------------------------#
| PIE2                                         0x92 |
#---------------------------------------------------#
| OSFIE | C2IE | C1IE | - | BCL1IE | NCO1IE | - | - |
#---------------------------------------------------#
| 7     | 6    | 5    | 4 | 3      | 2      | 1 | 0 |
#--------------------------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0x092
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

#define NCO1IE                                   0x2
#define NCO1IE_address                           0x092
#define NCO1IE_position                          0x2
#define NCO1IE_size                              0x1
#define NCO1IE_value_mask                        0x4
#define NCO1IE_clear_mask                        0xFB

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


/*--------------------------------------------------#
| PIE3                                         0x93 |
#---------------------------------------------------#
| - | - | - | - | CLC4IE | CLC3IE | CLC2IE | CLC1IE |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

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


/*---------------------------------------------#
| ADCON1                                  0x9E |
#----------------------------------------------#
| ADFM | ADCS      | - | - | ADPREF1 | ADPREF0 |
#----------------------------------------------#
| 7    | 6 | 5 | 4 | 3 | 2 | 1       | 0       |
#---------------------------------------------*/

#define ADCON1                                   0x0
#define ADCON1_address                           0x09E
#define ADCON1_position                          0x0
#define ADCON1_size                              0x8
#define ADCON1_value_mask                        0xFF
#define ADCON1_clear_mask                        0x0

#define ADPREF                                   0x0
#define ADPREF_address                           0x09E
#define ADPREF_position                          0x0
#define ADPREF_size                              0x2
#define ADPREF_value_mask                        0x3
#define ADPREF_clear_mask                        0xFC

#define ADPREF0                                  0x0
#define ADPREF0_address                          0x09E
#define ADPREF0_position                         0x0
#define ADPREF0_size                             0x1
#define ADPREF0_value_mask                       0x1
#define ADPREF0_clear_mask                       0xFE

#define ADPREF1                                  0x1
#define ADPREF1_address                          0x09E
#define ADPREF1_position                         0x1
#define ADPREF1_size                             0x1
#define ADPREF1_value_mask                       0x2
#define ADPREF1_clear_mask                       0xFD

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


/*--------------------------------------------------#
| LATA                                        0x10C |
#---------------------------------------------------#
| - | - | LATA5 | LATA4 | - | LATA2 | LATA1 | LATA0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2     | 1     | 0     |
#--------------------------------------------------*/

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


/*----------------------------------------------#
| LATB                                    0x10D |
#-----------------------------------------------#
| LATB7 | LATB6 | LATB5 | LATB4 | - | - | - | - |
#-----------------------------------------------#
| 7     | 6     | 5     | 4     | 3 | 2 | 1 | 0 |
#----------------------------------------------*/

#define LATB                                     0x0
#define LATB_address                             0x10D
#define LATB_position                            0x0
#define LATB_size                                0x8
#define LATB_value_mask                          0xFF
#define LATB_clear_mask                          0x0

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


/*--------------------------------------------------------#
| CM1CON0                                           0x111 |
#---------------------------------------------------------#
| C1ON | C1OUT | C1OE | C1POL | - | C1SP | C1HYS | C1SYNC |
#---------------------------------------------------------#
| 7    | 6     | 5    | 4     | 3 | 2    | 1     | 0      |
#--------------------------------------------------------*/

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


/*-----------------------------------------------------------------#
| CM1CON1                                                    0x112 |
#------------------------------------------------------------------#
| C1INTP | C1INTN | C1PCH1 | C1PCH0 | - | C1NCH2 | C1NCH1 | C1NCH0 |
#------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

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

#define C1PCH                                    0x4
#define C1PCH_address                            0x112
#define C1PCH_position                           0x4
#define C1PCH_size                               0x2
#define C1PCH_value_mask                         0x30
#define C1PCH_clear_mask                         0xCF

#define C1PCH0                                   0x4
#define C1PCH0_address                           0x112
#define C1PCH0_position                          0x4
#define C1PCH0_size                              0x1
#define C1PCH0_value_mask                        0x10
#define C1PCH0_clear_mask                        0xEF

#define C1PCH1                                   0x5
#define C1PCH1_address                           0x112
#define C1PCH1_position                          0x5
#define C1PCH1_size                              0x1
#define C1PCH1_value_mask                        0x20
#define C1PCH1_clear_mask                        0xDF

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


/*--------------------------------------------------------#
| CM2CON0                                           0x113 |
#---------------------------------------------------------#
| C2ON | C2OUT | C2OE | C2POL | - | C2SP | C2HYS | C2SYNC |
#---------------------------------------------------------#
| 7    | 6     | 5    | 4     | 3 | 2    | 1     | 0      |
#--------------------------------------------------------*/

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


/*-----------------------------------------------------------------#
| CM2CON1                                                    0x114 |
#------------------------------------------------------------------#
| C2INTP | C2INTN | C2PCH1 | C2PCH0 | - | C2NCH2 | C2NCH1 | C2NCH0 |
#------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

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

#define C2PCH                                    0x4
#define C2PCH_address                            0x114
#define C2PCH_position                           0x4
#define C2PCH_size                               0x2
#define C2PCH_value_mask                         0x30
#define C2PCH_clear_mask                         0xCF

#define C2PCH0                                   0x4
#define C2PCH0_address                           0x114
#define C2PCH0_position                          0x4
#define C2PCH0_size                              0x1
#define C2PCH0_value_mask                        0x10
#define C2PCH0_clear_mask                        0xEF

#define C2PCH1                                   0x5
#define C2PCH1_address                           0x114
#define C2PCH1_position                          0x5
#define C2PCH1_size                              0x1
#define C2PCH1_value_mask                        0x20
#define C2PCH1_clear_mask                        0xDF

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


/*-------------------------------------------------#
| DACCON0                                    0x118 |
#--------------------------------------------------#
| DACEN | - | DACOE1 | DACOE2 | - | DACPSS | - | - |
#--------------------------------------------------#
| 7     | 6 | 5      | 4      | 3 | 2      | 1 | 0 |
#-------------------------------------------------*/

#define DACCON0                                  0x0
#define DACCON0_address                          0x118
#define DACCON0_position                         0x0
#define DACCON0_size                             0x8
#define DACCON0_value_mask                       0xFF
#define DACCON0_clear_mask                       0x0

#define DACPSS                                   0x2
#define DACPSS_address                           0x118
#define DACPSS_position                          0x2
#define DACPSS_size                              0x1
#define DACPSS_value_mask                        0x4
#define DACPSS_clear_mask                        0xFB

#define DACOE2                                   0x4
#define DACOE2_address                           0x118
#define DACOE2_position                          0x4
#define DACOE2_size                              0x1
#define DACOE2_value_mask                        0x10
#define DACOE2_clear_mask                        0xEF

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


/*--------------------------------------------------#
| DACCON1                                     0x119 |
#---------------------------------------------------#
| - | - | - | DACR4 | DACR3 | DACR2 | DACR1 | DACR0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------*/

#define DACCON1                                  0x0
#define DACCON1_address                          0x119
#define DACCON1_position                         0x0
#define DACCON1_size                             0x8
#define DACCON1_value_mask                       0xFF
#define DACCON1_clear_mask                       0x0

#define DACR0                                    0x0
#define DACR0_address                            0x119
#define DACR0_position                           0x0
#define DACR0_size                               0x1
#define DACR0_value_mask                         0x1
#define DACR0_clear_mask                         0xFE

#define DACR                                     0x0
#define DACR_address                             0x119
#define DACR_position                            0x0
#define DACR_size                                0x5
#define DACR_value_mask                          0x1F
#define DACR_clear_mask                          0xE0

#define DACR1                                    0x1
#define DACR1_address                            0x119
#define DACR1_position                           0x1
#define DACR1_size                               0x1
#define DACR1_value_mask                         0x2
#define DACR1_clear_mask                         0xFD

#define DACR2                                    0x2
#define DACR2_address                            0x119
#define DACR2_position                           0x2
#define DACR2_size                               0x1
#define DACR2_value_mask                         0x4
#define DACR2_clear_mask                         0xFB

#define DACR3                                    0x3
#define DACR3_address                            0x119
#define DACR3_position                           0x3
#define DACR3_size                               0x1
#define DACR3_value_mask                         0x8
#define DACR3_clear_mask                         0xF7

#define DACR4                                    0x4
#define DACR4_address                            0x119
#define DACR4_position                           0x4
#define DACR4_size                               0x1
#define DACR4_value_mask                         0x10
#define DACR4_clear_mask                         0xEF


/*---------------------------------------------------#
| APFCON                                       0x11D |
#----------------------------------------------------#
| - | - | - | SSSEL | T1GSEL | - | CLC1SEL | NCO1SEL |
#----------------------------------------------------#
| 7 | 6 | 5 | 4     | 3      | 2 | 1       | 0       |
#---------------------------------------------------*/

#define APFCON                                   0x0
#define APFCON_address                           0x11D
#define APFCON_position                          0x0
#define APFCON_size                              0x8
#define APFCON_value_mask                        0xFF
#define APFCON_clear_mask                        0x0

#define NCO1SEL                                  0x0
#define NCO1SEL_address                          0x11D
#define NCO1SEL_position                         0x0
#define NCO1SEL_size                             0x1
#define NCO1SEL_value_mask                       0x1
#define NCO1SEL_clear_mask                       0xFE

#define CLC1SEL                                  0x1
#define CLC1SEL_address                          0x11D
#define CLC1SEL_position                         0x1
#define CLC1SEL_size                             0x1
#define CLC1SEL_value_mask                       0x2
#define CLC1SEL_clear_mask                       0xFD

#define T1GSEL                                   0x3
#define T1GSEL_address                           0x11D
#define T1GSEL_position                          0x3
#define T1GSEL_size                              0x1
#define T1GSEL_value_mask                        0x8
#define T1GSEL_clear_mask                        0xF7

#define SSSEL                                    0x4
#define SSSEL_address                            0x11D
#define SSSEL_position                           0x4
#define SSSEL_size                               0x1
#define SSSEL_value_mask                         0x10
#define SSSEL_clear_mask                         0xEF


/*----------------------------------------------#
| ANSELA                                  0x18C |
#-----------------------------------------------#
| - | - | - | ANSA4 | - | ANSA2 | ANSA1 | ANSA0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4     | 3 | 2     | 1     | 0     |
#----------------------------------------------*/

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

#define ANSA4                                    0x4
#define ANSA4_address                            0x18C
#define ANSA4_position                           0x4
#define ANSA4_size                               0x1
#define ANSA4_value_mask                         0x10
#define ANSA4_clear_mask                         0xEF


/*--------------------------------------#
| ANSELB                          0x18D |
#---------------------------------------#
| - | - | ANSB5 | ANSB4 | - | - | - | - |
#---------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2 | 1 | 0 |
#--------------------------------------*/

#define ANSELB                                   0x0
#define ANSELB_address                           0x18D
#define ANSELB_position                          0x0
#define ANSELB_size                              0x8
#define ANSELB_value_mask                        0xFF
#define ANSELB_clear_mask                        0x0

#define ANSB4                                    0x4
#define ANSB4_address                            0x18D
#define ANSB4_position                           0x4
#define ANSB4_size                               0x1
#define ANSB4_value_mask                         0x10
#define ANSB4_clear_mask                         0xEF

#define ANSB                                     0x4
#define ANSB_address                             0x18D
#define ANSB_position                            0x4
#define ANSB_size                                0x4
#define ANSB_value_mask                          0xF0
#define ANSB_clear_mask                          0xF

#define ANSB5                                    0x5
#define ANSB5_address                            0x18D
#define ANSB5_position                           0x5
#define ANSB5_size                               0x1
#define ANSB5_value_mask                         0x20
#define ANSB5_clear_mask                         0xDF


/*------------------------------------------------------#
| ANSELC                                          0x18E |
#-------------------------------------------------------#
| ANSC7 | ANSC6 | - | - | ANSC3 | ANSC2 | ANSC1 | ANSC0 |
#-------------------------------------------------------#
| 7     | 6     | 5 | 4 | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

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


/*------------------------------------------------------#
| WPUA                                            0x20C |
#-------------------------------------------------------#
| - | - | WPUA5 | WPUA4 | WPUA3 | WPUA2 | WPUA1 | WPUA0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define WPUA0                                    0x0
#define WPUA0_address                            0x20C
#define WPUA0_position                           0x0
#define WPUA0_size                               0x1
#define WPUA0_value_mask                         0x1
#define WPUA0_clear_mask                         0xFE

#define WPUA                                     0x0
#define WPUA_address                             0x20C
#define WPUA_position                            0x0
#define WPUA_size                                0x6
#define WPUA_value_mask                          0x3F
#define WPUA_clear_mask                          0xC0

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


/*----------------------------------------------#
| WPUB                                    0x20D |
#-----------------------------------------------#
| WPUB7 | WPUB6 | WPUB5 | WPUB4 | - | - | - | - |
#-----------------------------------------------#
| 7     | 6     | 5     | 4     | 3 | 2 | 1 | 0 |
#----------------------------------------------*/

#define WPUB                                     0x4
#define WPUB_address                             0x20D
#define WPUB_position                            0x4
#define WPUB_size                                0x4
#define WPUB_value_mask                          0xF0
#define WPUB_clear_mask                          0xF

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


/*------------------------------#
| SSP1BUF                 0x211 |
#-------------------------------#
| SSPBUF                        |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1BUF                                  0x0
#define SSP1BUF_address                          0x211
#define SSP1BUF_position                         0x0
#define SSP1BUF_size                             0x8
#define SSP1BUF_value_mask                       0xFF
#define SSP1BUF_clear_mask                       0x0

#define SSPBUF                                   0x0
#define SSPBUF_address                           0x211
#define SSPBUF_position                          0x0
#define SSPBUF_size                              0x8
#define SSPBUF_value_mask                        0xFF
#define SSPBUF_clear_mask                        0x0


/*------------------------------#
| SSP1ADD                 0x212 |
#-------------------------------#
| ADD                           |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1ADD                                  0x0
#define SSP1ADD_address                          0x212
#define SSP1ADD_position                         0x0
#define SSP1ADD_size                             0x8
#define SSP1ADD_value_mask                       0xFF
#define SSP1ADD_clear_mask                       0x0

#define ADD                                      0x0
#define ADD_address                              0x212
#define ADD_position                             0x0
#define ADD_size                                 0x8
#define ADD_value_mask                           0xFF
#define ADD_clear_mask                           0x0


/*------------------------------#
| SSP1MSK                 0x213 |
#-------------------------------#
| MSK                           |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1MSK                                  0x0
#define SSP1MSK_address                          0x213
#define SSP1MSK_position                         0x0
#define SSP1MSK_size                             0x8
#define SSP1MSK_value_mask                       0xFF
#define SSP1MSK_clear_mask                       0x0

#define MSK                                      0x0
#define MSK_address                              0x213
#define MSK_position                             0x0
#define MSK_size                                 0x8
#define MSK_value_mask                           0xFF
#define MSK_clear_mask                           0x0


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


/*------------------------------------------------------------#
| IOCAP                                                 0x391 |
#-------------------------------------------------------------#
| - | - | IOCAP5 | IOCAP4 | IOCAP3 | IOCAP2 | IOCAP1 | IOCAP0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define IOCAP                                    0x0
#define IOCAP_address                            0x391
#define IOCAP_position                           0x0
#define IOCAP_size                               0x6
#define IOCAP_value_mask                         0x3F
#define IOCAP_clear_mask                         0xC0

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


/*------------------------------------------------------------#
| IOCAN                                                 0x392 |
#-------------------------------------------------------------#
| - | - | IOCAN5 | IOCAN4 | IOCAN3 | IOCAN2 | IOCAN1 | IOCAN0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define IOCAN0                                   0x0
#define IOCAN0_address                           0x392
#define IOCAN0_position                          0x0
#define IOCAN0_size                              0x1
#define IOCAN0_value_mask                        0x1
#define IOCAN0_clear_mask                        0xFE

#define IOCAN                                    0x0
#define IOCAN_address                            0x392
#define IOCAN_position                           0x0
#define IOCAN_size                               0x6
#define IOCAN_value_mask                         0x3F
#define IOCAN_clear_mask                         0xC0

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


/*------------------------------------------------------------#
| IOCAF                                                 0x393 |
#-------------------------------------------------------------#
| - | - | IOCAF5 | IOCAF4 | IOCAF3 | IOCAF2 | IOCAF1 | IOCAF0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define IOCAF0                                   0x0
#define IOCAF0_address                           0x393
#define IOCAF0_position                          0x0
#define IOCAF0_size                              0x1
#define IOCAF0_value_mask                        0x1
#define IOCAF0_clear_mask                        0xFE

#define IOCAF                                    0x0
#define IOCAF_address                            0x393
#define IOCAF_position                           0x0
#define IOCAF_size                               0x6
#define IOCAF_value_mask                         0x3F
#define IOCAF_clear_mask                         0xC0

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


/*--------------------------------------------------#
| IOCBP                                       0x394 |
#---------------------------------------------------#
| IOCBP7 | IOCBP6 | IOCBP5 | IOCBP4 | - | - | - | - |
#---------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2 | 1 | 0 |
#--------------------------------------------------*/

#define IOCBP                                    0x4
#define IOCBP_address                            0x394
#define IOCBP_position                           0x4
#define IOCBP_size                               0x4
#define IOCBP_value_mask                         0xF0
#define IOCBP_clear_mask                         0xF

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


/*--------------------------------------------------#
| IOCBN                                       0x395 |
#---------------------------------------------------#
| IOCBN7 | IOCBN6 | IOCBN5 | IOCBN4 | - | - | - | - |
#---------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2 | 1 | 0 |
#--------------------------------------------------*/

#define IOCBN4                                   0x4
#define IOCBN4_address                           0x395
#define IOCBN4_position                          0x4
#define IOCBN4_size                              0x1
#define IOCBN4_value_mask                        0x10
#define IOCBN4_clear_mask                        0xEF

#define IOCBN                                    0x4
#define IOCBN_address                            0x395
#define IOCBN_position                           0x4
#define IOCBN_size                               0x4
#define IOCBN_value_mask                         0xF0
#define IOCBN_clear_mask                         0xF

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


/*--------------------------------------------------#
| IOCBF                                       0x396 |
#---------------------------------------------------#
| IOCBF7 | IOCBF6 | IOCBF5 | IOCBF4 | - | - | - | - |
#---------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2 | 1 | 0 |
#--------------------------------------------------*/

#define IOCBF4                                   0x4
#define IOCBF4_address                           0x396
#define IOCBF4_position                          0x4
#define IOCBF4_size                              0x1
#define IOCBF4_value_mask                        0x10
#define IOCBF4_clear_mask                        0xEF

#define IOCBF                                    0x4
#define IOCBF_address                            0x396
#define IOCBF_position                           0x4
#define IOCBF_size                               0x4
#define IOCBF_value_mask                         0xF0
#define IOCBF_clear_mask                         0xF

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


/*------------------------------------------------#
| NCO1CON                                   0x49E |
#-------------------------------------------------#
| N1EN | N1OE | N1OUT | N1POL | - | - | - | N1PFM |
#-------------------------------------------------#
| 7    | 6    | 5     | 4     | 3 | 2 | 1 | 0     |
#------------------------------------------------*/

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

#define N1OE                                     0x6
#define N1OE_address                             0x49E
#define N1OE_position                            0x6
#define N1OE_size                                0x1
#define N1OE_value_mask                          0x40
#define N1OE_clear_mask                          0xBF

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


/*----------------------------------------------------#
| PWM1CON                                       0x613 |
#-----------------------------------------------------#
| PWM1EN | PWM1OE | PWM1OUT | PWM1POL | - | - | - | - |
#-----------------------------------------------------#
| 7      | 6      | 5       | 4       | 3 | 2 | 1 | 0 |
#----------------------------------------------------*/

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

#define PWM1OE                                   0x6
#define PWM1OE_address                           0x613
#define PWM1OE_position                          0x6
#define PWM1OE_size                              0x1
#define PWM1OE_value_mask                        0x40
#define PWM1OE_clear_mask                        0xBF

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


/*----------------------------------------------------#
| PWM2CON                                       0x616 |
#-----------------------------------------------------#
| PWM2EN | PWM2OE | PWM2OUT | PWM2POL | - | - | - | - |
#-----------------------------------------------------#
| 7      | 6      | 5       | 4       | 3 | 2 | 1 | 0 |
#----------------------------------------------------*/

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

#define PWM2OE                                   0x6
#define PWM2OE_address                           0x616
#define PWM2OE_position                          0x6
#define PWM2OE_size                              0x1
#define PWM2OE_value_mask                        0x40
#define PWM2OE_clear_mask                        0xBF

#define PWM2EN                                   0x7
#define PWM2EN_address                           0x616
#define PWM2EN_position                          0x7
#define PWM2EN_size                              0x1
#define PWM2EN_value_mask                        0x80
#define PWM2EN_clear_mask                        0x7F


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


/*----------------------------------------------------#
| PWM3CON                                       0x619 |
#-----------------------------------------------------#
| PWM3EN | PWM3OE | PWM3OUT | PWM3POL | - | - | - | - |
#-----------------------------------------------------#
| 7      | 6      | 5       | 4       | 3 | 2 | 1 | 0 |
#----------------------------------------------------*/

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

#define PWM3OE                                   0x6
#define PWM3OE_address                           0x619
#define PWM3OE_position                          0x6
#define PWM3OE_size                              0x1
#define PWM3OE_value_mask                        0x40
#define PWM3OE_clear_mask                        0xBF

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


/*----------------------------------------------------#
| PWM4CON                                       0x61C |
#-----------------------------------------------------#
| PWM4EN | PWM4OE | PWM4OUT | PWM4POL | - | - | - | - |
#-----------------------------------------------------#
| 7      | 6      | 5       | 4       | 3 | 2 | 1 | 0 |
#----------------------------------------------------*/

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

#define PWM4OE                                   0x6
#define PWM4OE_address                           0x61C
#define PWM4OE_position                          0x6
#define PWM4OE_size                              0x1
#define PWM4OE_value_mask                        0x40
#define PWM4OE_clear_mask                        0xBF

#define PWM4EN                                   0x7
#define PWM4EN_address                           0x61C
#define PWM4EN_position                          0x7
#define PWM4EN_size                              0x1
#define PWM4EN_value_mask                        0x80
#define PWM4EN_clear_mask                        0x7F


/*------------------------------------------------------------------------#
| CWG1DBR                                                           0x691 |
#-------------------------------------------------------------------------#
| - | - | CWG1DBR5 | CWG1DBR4 | CWG1DBR3 | CWG1DBR2 | CWG1DBR1 | CWG1DBR0 |
#-------------------------------------------------------------------------#
| 7 | 6 | 5        | 4        | 3        | 2        | 1        | 0        |
#------------------------------------------------------------------------*/

#define CWG1DBR0                                 0x0
#define CWG1DBR0_address                         0x691
#define CWG1DBR0_position                        0x0
#define CWG1DBR0_size                            0x1
#define CWG1DBR0_value_mask                      0x1
#define CWG1DBR0_clear_mask                      0xFE

#define CWG1DBR                                  0x0
#define CWG1DBR_address                          0x691
#define CWG1DBR_position                         0x0
#define CWG1DBR_size                             0x6
#define CWG1DBR_value_mask                       0x3F
#define CWG1DBR_clear_mask                       0xC0

#define CWG1DBR1                                 0x1
#define CWG1DBR1_address                         0x691
#define CWG1DBR1_position                        0x1
#define CWG1DBR1_size                            0x1
#define CWG1DBR1_value_mask                      0x2
#define CWG1DBR1_clear_mask                      0xFD

#define CWG1DBR2                                 0x2
#define CWG1DBR2_address                         0x691
#define CWG1DBR2_position                        0x2
#define CWG1DBR2_size                            0x1
#define CWG1DBR2_value_mask                      0x4
#define CWG1DBR2_clear_mask                      0xFB

#define CWG1DBR3                                 0x3
#define CWG1DBR3_address                         0x691
#define CWG1DBR3_position                        0x3
#define CWG1DBR3_size                            0x1
#define CWG1DBR3_value_mask                      0x8
#define CWG1DBR3_clear_mask                      0xF7

#define CWG1DBR4                                 0x4
#define CWG1DBR4_address                         0x691
#define CWG1DBR4_position                        0x4
#define CWG1DBR4_size                            0x1
#define CWG1DBR4_value_mask                      0x10
#define CWG1DBR4_clear_mask                      0xEF

#define CWG1DBR5                                 0x5
#define CWG1DBR5_address                         0x691
#define CWG1DBR5_position                        0x5
#define CWG1DBR5_size                            0x1
#define CWG1DBR5_value_mask                      0x20
#define CWG1DBR5_clear_mask                      0xDF


/*------------------------------------------------------------------------#
| CWG1DBF                                                           0x692 |
#-------------------------------------------------------------------------#
| - | - | CWG1DBF5 | CWG1DBF4 | CWG1DBF3 | CWG1DBF2 | CWG1DBF1 | CWG1DBF0 |
#-------------------------------------------------------------------------#
| 7 | 6 | 5        | 4        | 3        | 2        | 1        | 0        |
#------------------------------------------------------------------------*/

#define CWG1DBF                                  0x0
#define CWG1DBF_address                          0x692
#define CWG1DBF_position                         0x0
#define CWG1DBF_size                             0x6
#define CWG1DBF_value_mask                       0x3F
#define CWG1DBF_clear_mask                       0xC0

#define CWG1DBF0                                 0x0
#define CWG1DBF0_address                         0x692
#define CWG1DBF0_position                        0x0
#define CWG1DBF0_size                            0x1
#define CWG1DBF0_value_mask                      0x1
#define CWG1DBF0_clear_mask                      0xFE

#define CWG1DBF1                                 0x1
#define CWG1DBF1_address                         0x692
#define CWG1DBF1_position                        0x1
#define CWG1DBF1_size                            0x1
#define CWG1DBF1_value_mask                      0x2
#define CWG1DBF1_clear_mask                      0xFD

#define CWG1DBF2                                 0x2
#define CWG1DBF2_address                         0x692
#define CWG1DBF2_position                        0x2
#define CWG1DBF2_size                            0x1
#define CWG1DBF2_value_mask                      0x4
#define CWG1DBF2_clear_mask                      0xFB

#define CWG1DBF3                                 0x3
#define CWG1DBF3_address                         0x692
#define CWG1DBF3_position                        0x3
#define CWG1DBF3_size                            0x1
#define CWG1DBF3_value_mask                      0x8
#define CWG1DBF3_clear_mask                      0xF7

#define CWG1DBF4                                 0x4
#define CWG1DBF4_address                         0x692
#define CWG1DBF4_position                        0x4
#define CWG1DBF4_size                            0x1
#define CWG1DBF4_value_mask                      0x10
#define CWG1DBF4_clear_mask                      0xEF

#define CWG1DBF5                                 0x5
#define CWG1DBF5_address                         0x692
#define CWG1DBF5_position                        0x5
#define CWG1DBF5_size                            0x1
#define CWG1DBF5_value_mask                      0x20
#define CWG1DBF5_clear_mask                      0xDF


/*-------------------------------------------------------#
| CWG1CON0                                         0x693 |
#--------------------------------------------------------#
| G1EN | G1OEB | G1OEA | G1POLB | G1POLA | - | - | G1CS0 |
#--------------------------------------------------------#
| 7    | 6     | 5     | 4      | 3      | 2 | 1 | 0     |
#-------------------------------------------------------*/

#define CWG1CON0                                 0x0
#define CWG1CON0_address                         0x693
#define CWG1CON0_position                        0x0
#define CWG1CON0_size                            0x8
#define CWG1CON0_value_mask                      0xFF
#define CWG1CON0_clear_mask                      0x0

#define G1CS0                                    0x0
#define G1CS0_address                            0x693
#define G1CS0_position                           0x0
#define G1CS0_size                               0x1
#define G1CS0_value_mask                         0x1
#define G1CS0_clear_mask                         0xFE

#define G1CS                                     0x0
#define G1CS_address                             0x693
#define G1CS_position                            0x0
#define G1CS_size                                0x2
#define G1CS_value_mask                          0x3
#define G1CS_clear_mask                          0xFC

#define G1POLA                                   0x3
#define G1POLA_address                           0x693
#define G1POLA_position                          0x3
#define G1POLA_size                              0x1
#define G1POLA_value_mask                        0x8
#define G1POLA_clear_mask                        0xF7

#define G1POLB                                   0x4
#define G1POLB_address                           0x693
#define G1POLB_position                          0x4
#define G1POLB_size                              0x1
#define G1POLB_value_mask                        0x10
#define G1POLB_clear_mask                        0xEF

#define G1OEA                                    0x5
#define G1OEA_address                            0x693
#define G1OEA_position                           0x5
#define G1OEA_size                               0x1
#define G1OEA_value_mask                         0x20
#define G1OEA_clear_mask                         0xDF

#define G1OEB                                    0x6
#define G1OEB_address                            0x693
#define G1OEB_position                           0x6
#define G1OEB_size                               0x1
#define G1OEB_value_mask                         0x40
#define G1OEB_clear_mask                         0xBF

#define G1EN                                     0x7
#define G1EN_address                             0x693
#define G1EN_position                            0x7
#define G1EN_size                                0x1
#define G1EN_value_mask                          0x80
#define G1EN_clear_mask                          0x7F


/*----------------------------------------------------------------------#
| CWG1CON1                                                        0x694 |
#-----------------------------------------------------------------------#
| G1ASDLB1 | G1ASDLB0 | G1ASDLA1 | G1ASDLA0 | - | G1IS2 | G1IS1 | G1IS0 |
#-----------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3 | 2     | 1     | 0     |
#----------------------------------------------------------------------*/

#define CWG1CON1                                 0x0
#define CWG1CON1_address                         0x694
#define CWG1CON1_position                        0x0
#define CWG1CON1_size                            0x8
#define CWG1CON1_value_mask                      0xFF
#define CWG1CON1_clear_mask                      0x0

#define G1IS0                                    0x0
#define G1IS0_address                            0x694
#define G1IS0_position                           0x0
#define G1IS0_size                               0x1
#define G1IS0_value_mask                         0x1
#define G1IS0_clear_mask                         0xFE

#define G1IS                                     0x0
#define G1IS_address                             0x694
#define G1IS_position                            0x0
#define G1IS_size                                0x4
#define G1IS_value_mask                          0xF
#define G1IS_clear_mask                          0xF0

#define G1IS1                                    0x1
#define G1IS1_address                            0x694
#define G1IS1_position                           0x1
#define G1IS1_size                               0x1
#define G1IS1_value_mask                         0x2
#define G1IS1_clear_mask                         0xFD

#define G1IS2                                    0x2
#define G1IS2_address                            0x694
#define G1IS2_position                           0x2
#define G1IS2_size                               0x1
#define G1IS2_value_mask                         0x4
#define G1IS2_clear_mask                         0xFB

#define G1ASDLA                                  0x4
#define G1ASDLA_address                          0x694
#define G1ASDLA_position                         0x4
#define G1ASDLA_size                             0x2
#define G1ASDLA_value_mask                       0x30
#define G1ASDLA_clear_mask                       0xCF

#define G1ASDLA0                                 0x4
#define G1ASDLA0_address                         0x694
#define G1ASDLA0_position                        0x4
#define G1ASDLA0_size                            0x1
#define G1ASDLA0_value_mask                      0x10
#define G1ASDLA0_clear_mask                      0xEF

#define G1ASDLA1                                 0x5
#define G1ASDLA1_address                         0x694
#define G1ASDLA1_position                        0x5
#define G1ASDLA1_size                            0x1
#define G1ASDLA1_value_mask                      0x20
#define G1ASDLA1_clear_mask                      0xDF

#define G1ASDLB                                  0x6
#define G1ASDLB_address                          0x694
#define G1ASDLB_position                         0x6
#define G1ASDLB_size                             0x2
#define G1ASDLB_value_mask                       0xC0
#define G1ASDLB_clear_mask                       0x3F

#define G1ASDLB0                                 0x6
#define G1ASDLB0_address                         0x694
#define G1ASDLB0_position                        0x6
#define G1ASDLB0_size                            0x1
#define G1ASDLB0_value_mask                      0x40
#define G1ASDLB0_clear_mask                      0xBF

#define G1ASDLB1                                 0x7
#define G1ASDLB1_address                         0x694
#define G1ASDLB1_position                        0x7
#define G1ASDLB1_size                            0x1
#define G1ASDLB1_value_mask                      0x80
#define G1ASDLB1_clear_mask                      0x7F


/*-----------------------------------------------------------------------#
| CWG1CON2                                                         0x695 |
#------------------------------------------------------------------------#
| G1ASE | G1ARSEN | - | - | G1ASDSC2 | G1ASDSC1 | G1ASDSFLT | G1ASDSCLC2 |
#------------------------------------------------------------------------#
| 7     | 6       | 5 | 4 | 3        | 2        | 1         | 0          |
#-----------------------------------------------------------------------*/

#define CWG1CON2                                 0x0
#define CWG1CON2_address                         0x695
#define CWG1CON2_position                        0x0
#define CWG1CON2_size                            0x8
#define CWG1CON2_value_mask                      0xFF
#define CWG1CON2_clear_mask                      0x0

#define G1ASDSCLC2                               0x0
#define G1ASDSCLC2_address                       0x695
#define G1ASDSCLC2_position                      0x0
#define G1ASDSCLC2_size                          0x1
#define G1ASDSCLC2_value_mask                    0x1
#define G1ASDSCLC2_clear_mask                    0xFE

#define G1ASDSFLT                                0x1
#define G1ASDSFLT_address                        0x695
#define G1ASDSFLT_position                       0x1
#define G1ASDSFLT_size                           0x1
#define G1ASDSFLT_value_mask                     0x2
#define G1ASDSFLT_clear_mask                     0xFD

#define G1ASDSC1                                 0x2
#define G1ASDSC1_address                         0x695
#define G1ASDSC1_position                        0x2
#define G1ASDSC1_size                            0x1
#define G1ASDSC1_value_mask                      0x4
#define G1ASDSC1_clear_mask                      0xFB

#define G1ASDSC2                                 0x3
#define G1ASDSC2_address                         0x695
#define G1ASDSC2_position                        0x3
#define G1ASDSC2_size                            0x1
#define G1ASDSC2_value_mask                      0x8
#define G1ASDSC2_clear_mask                      0xF7

#define G1ARSEN                                  0x6
#define G1ARSEN_address                          0x695
#define G1ARSEN_position                         0x6
#define G1ARSEN_size                             0x1
#define G1ARSEN_value_mask                       0x40
#define G1ARSEN_clear_mask                       0xBF

#define G1ASE                                    0x7
#define G1ASE_address                            0x695
#define G1ASE_position                           0x7
#define G1ASE_size                               0x1
#define G1ASE_value_mask                         0x80
#define G1ASE_clear_mask                         0x7F


/*----------------------------------------------------------#
| CLCDATA                                             0xF0F |
#-----------------------------------------------------------#
| - | - | - | - | MCLC4OUT | MCLC3OUT | MCLC2OUT | MCLC1OUT |
#-----------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2        | 1        | 0        |
#----------------------------------------------------------*/

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

#define MCLC2OUT                                 0x1
#define MCLC2OUT_address                         0xF0F
#define MCLC2OUT_position                        0x1
#define MCLC2OUT_size                            0x1
#define MCLC2OUT_value_mask                      0x2
#define MCLC2OUT_clear_mask                      0xFD

#define MCLC3OUT                                 0x2
#define MCLC3OUT_address                         0xF0F
#define MCLC3OUT_position                        0x2
#define MCLC3OUT_size                            0x1
#define MCLC3OUT_value_mask                      0x4
#define MCLC3OUT_clear_mask                      0xFB

#define MCLC4OUT                                 0x3
#define MCLC4OUT_address                         0xF0F
#define MCLC4OUT_position                        0x3
#define MCLC4OUT_size                            0x1
#define MCLC4OUT_value_mask                      0x8
#define MCLC4OUT_clear_mask                      0xF7


/*---------------------------------------------------------------------------------------------------------------#
| CLC1CON                                                                                                  0xF10 |
#----------------------------------------------------------------------------------------------------------------#
| LC1EN | CLC1CON_LCOE | LC1OUT | CLC1CON_LCINTP | LC1INTN | CLC1CON_LCMODE2 | CLC1CON_LCMODE1 | CLC1CON_LCMODE0 |
#----------------------------------------------------------------------------------------------------------------#
| 7     | 6            | 5      | 4              | 3       | 2               | 1               | 0               |
#---------------------------------------------------------------------------------------------------------------*/

#define CLC1CON                                  0x0
#define CLC1CON_address                          0xF10
#define CLC1CON_position                         0x0
#define CLC1CON_size                             0x8
#define CLC1CON_value_mask                       0xFF
#define CLC1CON_clear_mask                       0x0

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

#define CLC1CON_LCMODE0                          0x0
#define CLC1CON_LCMODE0_address                  0xF10
#define CLC1CON_LCMODE0_position                 0x0
#define CLC1CON_LCMODE0_size                     0x1
#define CLC1CON_LCMODE0_value_mask               0x1
#define CLC1CON_LCMODE0_clear_mask               0xFE

#define LC1MODE1                                 0x1
#define LC1MODE1_address                         0xF10
#define LC1MODE1_position                        0x1
#define LC1MODE1_size                            0x1
#define LC1MODE1_value_mask                      0x2
#define LC1MODE1_clear_mask                      0xFD

#define CLC1CON_LCMODE1                          0x1
#define CLC1CON_LCMODE1_address                  0xF10
#define CLC1CON_LCMODE1_position                 0x1
#define CLC1CON_LCMODE1_size                     0x1
#define CLC1CON_LCMODE1_value_mask               0x2
#define CLC1CON_LCMODE1_clear_mask               0xFD

#define CLC1CON_LCMODE2                          0x2
#define CLC1CON_LCMODE2_address                  0xF10
#define CLC1CON_LCMODE2_position                 0x2
#define CLC1CON_LCMODE2_size                     0x1
#define CLC1CON_LCMODE2_value_mask               0x4
#define CLC1CON_LCMODE2_clear_mask               0xFB

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

#define CLC1CON_LCINTN                           0x3
#define CLC1CON_LCINTN_address                   0xF10
#define CLC1CON_LCINTN_position                  0x3
#define CLC1CON_LCINTN_size                      0x1
#define CLC1CON_LCINTN_value_mask                0x8
#define CLC1CON_LCINTN_clear_mask                0xF7

#define LC1INTP                                  0x4
#define LC1INTP_address                          0xF10
#define LC1INTP_position                         0x4
#define LC1INTP_size                             0x1
#define LC1INTP_value_mask                       0x10
#define LC1INTP_clear_mask                       0xEF

#define CLC1CON_LCINTP                           0x4
#define CLC1CON_LCINTP_address                   0xF10
#define CLC1CON_LCINTP_position                  0x4
#define CLC1CON_LCINTP_size                      0x1
#define CLC1CON_LCINTP_value_mask                0x10
#define CLC1CON_LCINTP_clear_mask                0xEF

#define CLC1CON_LCOUT                            0x5
#define CLC1CON_LCOUT_address                    0xF10
#define CLC1CON_LCOUT_position                   0x5
#define CLC1CON_LCOUT_size                       0x1
#define CLC1CON_LCOUT_value_mask                 0x20
#define CLC1CON_LCOUT_clear_mask                 0xDF

#define LC1OUT                                   0x5
#define LC1OUT_address                           0xF10
#define LC1OUT_position                          0x5
#define LC1OUT_size                              0x1
#define LC1OUT_value_mask                        0x20
#define LC1OUT_clear_mask                        0xDF

#define LC1OE                                    0x6
#define LC1OE_address                            0xF10
#define LC1OE_position                           0x6
#define LC1OE_size                               0x1
#define LC1OE_value_mask                         0x40
#define LC1OE_clear_mask                         0xBF

#define CLC1CON_LCOE                             0x6
#define CLC1CON_LCOE_address                     0xF10
#define CLC1CON_LCOE_position                    0x6
#define CLC1CON_LCOE_size                        0x1
#define CLC1CON_LCOE_value_mask                  0x40
#define CLC1CON_LCOE_clear_mask                  0xBF

#define LC1EN                                    0x7
#define LC1EN_address                            0xF10
#define LC1EN_position                           0x7
#define LC1EN_size                               0x1
#define LC1EN_value_mask                         0x80
#define LC1EN_clear_mask                         0x7F

#define CLC1CON_LCEN                             0x7
#define CLC1CON_LCEN_address                     0xF10
#define CLC1CON_LCEN_position                    0x7
#define CLC1CON_LCEN_size                        0x1
#define CLC1CON_LCEN_value_mask                  0x80
#define CLC1CON_LCEN_clear_mask                  0x7F


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
| - | LC1D2S2 | LC1D2S1 | LC1D2S0 | - | CLC1SEL0_D1S2 | CLC1SEL0_D1S1 | CLC1SEL0_D1S0 |
#-------------------------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3 | 2             | 1             | 0             |
#------------------------------------------------------------------------------------*/

#define CLC1SEL0                                 0x0
#define CLC1SEL0_address                         0xF12
#define CLC1SEL0_position                        0x0
#define CLC1SEL0_size                            0x8
#define CLC1SEL0_value_mask                      0xFF
#define CLC1SEL0_clear_mask                      0x0

#define LC1D1S                                   0x0
#define LC1D1S_address                           0xF12
#define LC1D1S_position                          0x0
#define LC1D1S_size                              0x3
#define LC1D1S_value_mask                        0x7
#define LC1D1S_clear_mask                        0xF8

#define CLC1SEL0_D1S0                            0x0
#define CLC1SEL0_D1S0_address                    0xF12
#define CLC1SEL0_D1S0_position                   0x0
#define CLC1SEL0_D1S0_size                       0x1
#define CLC1SEL0_D1S0_value_mask                 0x1
#define CLC1SEL0_D1S0_clear_mask                 0xFE

#define LC1D1S0                                  0x0
#define LC1D1S0_address                          0xF12
#define LC1D1S0_position                         0x0
#define LC1D1S0_size                             0x1
#define LC1D1S0_value_mask                       0x1
#define LC1D1S0_clear_mask                       0xFE

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

#define LC1D2S                                   0x4
#define LC1D2S_address                           0xF12
#define LC1D2S_position                          0x4
#define LC1D2S_size                              0x3
#define LC1D2S_value_mask                        0x70
#define LC1D2S_clear_mask                        0x8F

#define LC1D2S0                                  0x4
#define LC1D2S0_address                          0xF12
#define LC1D2S0_position                         0x4
#define LC1D2S0_size                             0x1
#define LC1D2S0_value_mask                       0x10
#define LC1D2S0_clear_mask                       0xEF

#define CLC1SEL0_D2S0                            0x4
#define CLC1SEL0_D2S0_address                    0xF12
#define CLC1SEL0_D2S0_position                   0x4
#define CLC1SEL0_D2S0_size                       0x1
#define CLC1SEL0_D2S0_value_mask                 0x10
#define CLC1SEL0_D2S0_clear_mask                 0xEF

#define LC1D2S1                                  0x5
#define LC1D2S1_address                          0xF12
#define LC1D2S1_position                         0x5
#define LC1D2S1_size                             0x1
#define LC1D2S1_value_mask                       0x20
#define LC1D2S1_clear_mask                       0xDF

#define CLC1SEL0_D2S1                            0x5
#define CLC1SEL0_D2S1_address                    0xF12
#define CLC1SEL0_D2S1_position                   0x5
#define CLC1SEL0_D2S1_size                       0x1
#define CLC1SEL0_D2S1_value_mask                 0x20
#define CLC1SEL0_D2S1_clear_mask                 0xDF

#define LC1D2S2                                  0x6
#define LC1D2S2_address                          0xF12
#define LC1D2S2_position                         0x6
#define LC1D2S2_size                             0x1
#define LC1D2S2_value_mask                       0x40
#define LC1D2S2_clear_mask                       0xBF

#define CLC1SEL0_D2S2                            0x6
#define CLC1SEL0_D2S2_address                    0xF12
#define CLC1SEL0_D2S2_position                   0x6
#define CLC1SEL0_D2S2_size                       0x1
#define CLC1SEL0_D2S2_value_mask                 0x40
#define CLC1SEL0_D2S2_clear_mask                 0xBF


/*------------------------------------------------------------------#
| CLC1SEL1                                                    0xF13 |
#-------------------------------------------------------------------#
| - | LC1D4S2 | LC1D4S1 | LC1D4S0 | - | LC1D3S2 | LC1D3S1 | LC1D3S0 |
#-------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3 | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define CLC1SEL1                                 0x0
#define CLC1SEL1_address                         0xF13
#define CLC1SEL1_position                        0x0
#define CLC1SEL1_size                            0x8
#define CLC1SEL1_value_mask                      0xFF
#define CLC1SEL1_clear_mask                      0x0

#define LC1D3S0                                  0x0
#define LC1D3S0_address                          0xF13
#define LC1D3S0_position                         0x0
#define LC1D3S0_size                             0x1
#define LC1D3S0_value_mask                       0x1
#define LC1D3S0_clear_mask                       0xFE

#define CLC1SEL1_D3S0                            0x0
#define CLC1SEL1_D3S0_address                    0xF13
#define CLC1SEL1_D3S0_position                   0x0
#define CLC1SEL1_D3S0_size                       0x1
#define CLC1SEL1_D3S0_value_mask                 0x1
#define CLC1SEL1_D3S0_clear_mask                 0xFE

#define LC1D3S                                   0x0
#define LC1D3S_address                           0xF13
#define LC1D3S_position                          0x0
#define LC1D3S_size                              0x3
#define LC1D3S_value_mask                        0x7
#define LC1D3S_clear_mask                        0xF8

#define LC1D3S1                                  0x1
#define LC1D3S1_address                          0xF13
#define LC1D3S1_position                         0x1
#define LC1D3S1_size                             0x1
#define LC1D3S1_value_mask                       0x2
#define LC1D3S1_clear_mask                       0xFD

#define CLC1SEL1_D3S1                            0x1
#define CLC1SEL1_D3S1_address                    0xF13
#define CLC1SEL1_D3S1_position                   0x1
#define CLC1SEL1_D3S1_size                       0x1
#define CLC1SEL1_D3S1_value_mask                 0x2
#define CLC1SEL1_D3S1_clear_mask                 0xFD

#define LC1D3S2                                  0x2
#define LC1D3S2_address                          0xF13
#define LC1D3S2_position                         0x2
#define LC1D3S2_size                             0x1
#define LC1D3S2_value_mask                       0x4
#define LC1D3S2_clear_mask                       0xFB

#define CLC1SEL1_D3S2                            0x2
#define CLC1SEL1_D3S2_address                    0xF13
#define CLC1SEL1_D3S2_position                   0x2
#define CLC1SEL1_D3S2_size                       0x1
#define CLC1SEL1_D3S2_value_mask                 0x4
#define CLC1SEL1_D3S2_clear_mask                 0xFB

#define LC1D4S                                   0x4
#define LC1D4S_address                           0xF13
#define LC1D4S_position                          0x4
#define LC1D4S_size                              0x3
#define LC1D4S_value_mask                        0x70
#define LC1D4S_clear_mask                        0x8F

#define LC1D4S0                                  0x4
#define LC1D4S0_address                          0xF13
#define LC1D4S0_position                         0x4
#define LC1D4S0_size                             0x1
#define LC1D4S0_value_mask                       0x10
#define LC1D4S0_clear_mask                       0xEF

#define CLC1SEL1_D4S0                            0x4
#define CLC1SEL1_D4S0_address                    0xF13
#define CLC1SEL1_D4S0_position                   0x4
#define CLC1SEL1_D4S0_size                       0x1
#define CLC1SEL1_D4S0_value_mask                 0x10
#define CLC1SEL1_D4S0_clear_mask                 0xEF

#define LC1D4S1                                  0x5
#define LC1D4S1_address                          0xF13
#define LC1D4S1_position                         0x5
#define LC1D4S1_size                             0x1
#define LC1D4S1_value_mask                       0x20
#define LC1D4S1_clear_mask                       0xDF

#define CLC1SEL1_D4S1                            0x5
#define CLC1SEL1_D4S1_address                    0xF13
#define CLC1SEL1_D4S1_position                   0x5
#define CLC1SEL1_D4S1_size                       0x1
#define CLC1SEL1_D4S1_value_mask                 0x20
#define CLC1SEL1_D4S1_clear_mask                 0xDF

#define LC1D4S2                                  0x6
#define LC1D4S2_address                          0xF13
#define LC1D4S2_position                         0x6
#define LC1D4S2_size                             0x1
#define LC1D4S2_value_mask                       0x40
#define LC1D4S2_clear_mask                       0xBF

#define CLC1SEL1_D4S2                            0x6
#define CLC1SEL1_D4S2_address                    0xF13
#define CLC1SEL1_D4S2_position                   0x6
#define CLC1SEL1_D4S2_size                       0x1
#define CLC1SEL1_D4S2_value_mask                 0x40
#define CLC1SEL1_D4S2_clear_mask                 0xBF


/*--------------------------------------------------------------------------------------------------#
| CLC1GLS0                                                                                    0xF14 |
#---------------------------------------------------------------------------------------------------#
| LC1G1D4T | CLC1GLS0_D4N | LC1G1D3T | LC1G1D3N | LC1G1D2T | CLC1GLS0_D2N | CLC1GLS0_D1T | LC1G1D1N |
#---------------------------------------------------------------------------------------------------#
| 7        | 6            | 5        | 4        | 3        | 2            | 1            | 0        |
#--------------------------------------------------------------------------------------------------*/

#define CLC1GLS0                                 0x0
#define CLC1GLS0_address                         0xF14
#define CLC1GLS0_position                        0x0
#define CLC1GLS0_size                            0x8
#define CLC1GLS0_value_mask                      0xFF
#define CLC1GLS0_clear_mask                      0x0

#define CLC1GLS0_D1N                             0x0
#define CLC1GLS0_D1N_address                     0xF14
#define CLC1GLS0_D1N_position                    0x0
#define CLC1GLS0_D1N_size                        0x1
#define CLC1GLS0_D1N_value_mask                  0x1
#define CLC1GLS0_D1N_clear_mask                  0xFE

#define LC1G1D1N                                 0x0
#define LC1G1D1N_address                         0xF14
#define LC1G1D1N_position                        0x0
#define LC1G1D1N_size                            0x1
#define LC1G1D1N_value_mask                      0x1
#define LC1G1D1N_clear_mask                      0xFE

#define CLC1GLS0_D1T                             0x1
#define CLC1GLS0_D1T_address                     0xF14
#define CLC1GLS0_D1T_position                    0x1
#define CLC1GLS0_D1T_size                        0x1
#define CLC1GLS0_D1T_value_mask                  0x2
#define CLC1GLS0_D1T_clear_mask                  0xFD

#define LC1G1D1T                                 0x1
#define LC1G1D1T_address                         0xF14
#define LC1G1D1T_position                        0x1
#define LC1G1D1T_size                            0x1
#define LC1G1D1T_value_mask                      0x2
#define LC1G1D1T_clear_mask                      0xFD

#define LC1G1D2N                                 0x2
#define LC1G1D2N_address                         0xF14
#define LC1G1D2N_position                        0x2
#define LC1G1D2N_size                            0x1
#define LC1G1D2N_value_mask                      0x4
#define LC1G1D2N_clear_mask                      0xFB

#define CLC1GLS0_D2N                             0x2
#define CLC1GLS0_D2N_address                     0xF14
#define CLC1GLS0_D2N_position                    0x2
#define CLC1GLS0_D2N_size                        0x1
#define CLC1GLS0_D2N_value_mask                  0x4
#define CLC1GLS0_D2N_clear_mask                  0xFB

#define LC1G1D2T                                 0x3
#define LC1G1D2T_address                         0xF14
#define LC1G1D2T_position                        0x3
#define LC1G1D2T_size                            0x1
#define LC1G1D2T_value_mask                      0x8
#define LC1G1D2T_clear_mask                      0xF7

#define CLC1GLS0_D2T                             0x3
#define CLC1GLS0_D2T_address                     0xF14
#define CLC1GLS0_D2T_position                    0x3
#define CLC1GLS0_D2T_size                        0x1
#define CLC1GLS0_D2T_value_mask                  0x8
#define CLC1GLS0_D2T_clear_mask                  0xF7

#define CLC1GLS0_D3N                             0x4
#define CLC1GLS0_D3N_address                     0xF14
#define CLC1GLS0_D3N_position                    0x4
#define CLC1GLS0_D3N_size                        0x1
#define CLC1GLS0_D3N_value_mask                  0x10
#define CLC1GLS0_D3N_clear_mask                  0xEF

#define LC1G1D3N                                 0x4
#define LC1G1D3N_address                         0xF14
#define LC1G1D3N_position                        0x4
#define LC1G1D3N_size                            0x1
#define LC1G1D3N_value_mask                      0x10
#define LC1G1D3N_clear_mask                      0xEF

#define CLC1GLS0_D3T                             0x5
#define CLC1GLS0_D3T_address                     0xF14
#define CLC1GLS0_D3T_position                    0x5
#define CLC1GLS0_D3T_size                        0x1
#define CLC1GLS0_D3T_value_mask                  0x20
#define CLC1GLS0_D3T_clear_mask                  0xDF

#define LC1G1D3T                                 0x5
#define LC1G1D3T_address                         0xF14
#define LC1G1D3T_position                        0x5
#define LC1G1D3T_size                            0x1
#define LC1G1D3T_value_mask                      0x20
#define LC1G1D3T_clear_mask                      0xDF

#define CLC1GLS0_D4N                             0x6
#define CLC1GLS0_D4N_address                     0xF14
#define CLC1GLS0_D4N_position                    0x6
#define CLC1GLS0_D4N_size                        0x1
#define CLC1GLS0_D4N_value_mask                  0x40
#define CLC1GLS0_D4N_clear_mask                  0xBF

#define LC1G1D4N                                 0x6
#define LC1G1D4N_address                         0xF14
#define LC1G1D4N_position                        0x6
#define LC1G1D4N_size                            0x1
#define LC1G1D4N_value_mask                      0x40
#define LC1G1D4N_clear_mask                      0xBF

#define CLC1GLS0_D4T                             0x7
#define CLC1GLS0_D4T_address                     0xF14
#define CLC1GLS0_D4T_position                    0x7
#define CLC1GLS0_D4T_size                        0x1
#define CLC1GLS0_D4T_value_mask                  0x80
#define CLC1GLS0_D4T_clear_mask                  0x7F

#define LC1G1D4T                                 0x7
#define LC1G1D4T_address                         0xF14
#define LC1G1D4T_position                        0x7
#define LC1G1D4T_size                            0x1
#define LC1G1D4T_value_mask                      0x80
#define LC1G1D4T_clear_mask                      0x7F


/*------------------------------------------------------------------------------------------------------#
| CLC1GLS1                                                                                        0xF15 |
#-------------------------------------------------------------------------------------------------------#
| LC1G2D4T | CLC1GLS1_D4N | LC1G2D3T | CLC1GLS1_D3N | LC1G2D2T | CLC1GLS1_D2N | LC1G2D1T | CLC1GLS1_D1N |
#-------------------------------------------------------------------------------------------------------#
| 7        | 6            | 5        | 4            | 3        | 2            | 1        | 0            |
#------------------------------------------------------------------------------------------------------*/

#define CLC1GLS1                                 0x0
#define CLC1GLS1_address                         0xF15
#define CLC1GLS1_position                        0x0
#define CLC1GLS1_size                            0x8
#define CLC1GLS1_value_mask                      0xFF
#define CLC1GLS1_clear_mask                      0x0

#define CLC1GLS1_D1N                             0x0
#define CLC1GLS1_D1N_address                     0xF15
#define CLC1GLS1_D1N_position                    0x0
#define CLC1GLS1_D1N_size                        0x1
#define CLC1GLS1_D1N_value_mask                  0x1
#define CLC1GLS1_D1N_clear_mask                  0xFE

#define LC1G2D1N                                 0x0
#define LC1G2D1N_address                         0xF15
#define LC1G2D1N_position                        0x0
#define LC1G2D1N_size                            0x1
#define LC1G2D1N_value_mask                      0x1
#define LC1G2D1N_clear_mask                      0xFE

#define LC1G2D1T                                 0x1
#define LC1G2D1T_address                         0xF15
#define LC1G2D1T_position                        0x1
#define LC1G2D1T_size                            0x1
#define LC1G2D1T_value_mask                      0x2
#define LC1G2D1T_clear_mask                      0xFD

#define CLC1GLS1_D1T                             0x1
#define CLC1GLS1_D1T_address                     0xF15
#define CLC1GLS1_D1T_position                    0x1
#define CLC1GLS1_D1T_size                        0x1
#define CLC1GLS1_D1T_value_mask                  0x2
#define CLC1GLS1_D1T_clear_mask                  0xFD

#define CLC1GLS1_D2N                             0x2
#define CLC1GLS1_D2N_address                     0xF15
#define CLC1GLS1_D2N_position                    0x2
#define CLC1GLS1_D2N_size                        0x1
#define CLC1GLS1_D2N_value_mask                  0x4
#define CLC1GLS1_D2N_clear_mask                  0xFB

#define LC1G2D2N                                 0x2
#define LC1G2D2N_address                         0xF15
#define LC1G2D2N_position                        0x2
#define LC1G2D2N_size                            0x1
#define LC1G2D2N_value_mask                      0x4
#define LC1G2D2N_clear_mask                      0xFB

#define LC1G2D2T                                 0x3
#define LC1G2D2T_address                         0xF15
#define LC1G2D2T_position                        0x3
#define LC1G2D2T_size                            0x1
#define LC1G2D2T_value_mask                      0x8
#define LC1G2D2T_clear_mask                      0xF7

#define CLC1GLS1_D2T                             0x3
#define CLC1GLS1_D2T_address                     0xF15
#define CLC1GLS1_D2T_position                    0x3
#define CLC1GLS1_D2T_size                        0x1
#define CLC1GLS1_D2T_value_mask                  0x8
#define CLC1GLS1_D2T_clear_mask                  0xF7

#define CLC1GLS1_D3N                             0x4
#define CLC1GLS1_D3N_address                     0xF15
#define CLC1GLS1_D3N_position                    0x4
#define CLC1GLS1_D3N_size                        0x1
#define CLC1GLS1_D3N_value_mask                  0x10
#define CLC1GLS1_D3N_clear_mask                  0xEF

#define LC1G2D3N                                 0x4
#define LC1G2D3N_address                         0xF15
#define LC1G2D3N_position                        0x4
#define LC1G2D3N_size                            0x1
#define LC1G2D3N_value_mask                      0x10
#define LC1G2D3N_clear_mask                      0xEF

#define LC1G2D3T                                 0x5
#define LC1G2D3T_address                         0xF15
#define LC1G2D3T_position                        0x5
#define LC1G2D3T_size                            0x1
#define LC1G2D3T_value_mask                      0x20
#define LC1G2D3T_clear_mask                      0xDF

#define CLC1GLS1_D3T                             0x5
#define CLC1GLS1_D3T_address                     0xF15
#define CLC1GLS1_D3T_position                    0x5
#define CLC1GLS1_D3T_size                        0x1
#define CLC1GLS1_D3T_value_mask                  0x20
#define CLC1GLS1_D3T_clear_mask                  0xDF

#define CLC1GLS1_D4N                             0x6
#define CLC1GLS1_D4N_address                     0xF15
#define CLC1GLS1_D4N_position                    0x6
#define CLC1GLS1_D4N_size                        0x1
#define CLC1GLS1_D4N_value_mask                  0x40
#define CLC1GLS1_D4N_clear_mask                  0xBF

#define LC1G2D4N                                 0x6
#define LC1G2D4N_address                         0xF15
#define LC1G2D4N_position                        0x6
#define LC1G2D4N_size                            0x1
#define LC1G2D4N_value_mask                      0x40
#define LC1G2D4N_clear_mask                      0xBF

#define LC1G2D4T                                 0x7
#define LC1G2D4T_address                         0xF15
#define LC1G2D4T_position                        0x7
#define LC1G2D4T_size                            0x1
#define LC1G2D4T_value_mask                      0x80
#define LC1G2D4T_clear_mask                      0x7F

#define CLC1GLS1_D4T                             0x7
#define CLC1GLS1_D4T_address                     0xF15
#define CLC1GLS1_D4T_position                    0x7
#define CLC1GLS1_D4T_size                        0x1
#define CLC1GLS1_D4T_value_mask                  0x80
#define CLC1GLS1_D4T_clear_mask                  0x7F


/*------------------------------------------------------------------------------------------#
| CLC1GLS2                                                                            0xF16 |
#-------------------------------------------------------------------------------------------#
| LC1G3D4T | LC1G3D4N | LC1G3D3T | CLC1GLS2_D3N | LC1G3D2T | LC1G3D2N | LC1G3D1T | LC1G3D1N |
#-------------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4            | 3        | 2        | 1        | 0        |
#------------------------------------------------------------------------------------------*/

#define CLC1GLS2                                 0x0
#define CLC1GLS2_address                         0xF16
#define CLC1GLS2_position                        0x0
#define CLC1GLS2_size                            0x8
#define CLC1GLS2_value_mask                      0xFF
#define CLC1GLS2_clear_mask                      0x0

#define CLC1GLS2_D1N                             0x0
#define CLC1GLS2_D1N_address                     0xF16
#define CLC1GLS2_D1N_position                    0x0
#define CLC1GLS2_D1N_size                        0x1
#define CLC1GLS2_D1N_value_mask                  0x1
#define CLC1GLS2_D1N_clear_mask                  0xFE

#define LC1G3D1N                                 0x0
#define LC1G3D1N_address                         0xF16
#define LC1G3D1N_position                        0x0
#define LC1G3D1N_size                            0x1
#define LC1G3D1N_value_mask                      0x1
#define LC1G3D1N_clear_mask                      0xFE

#define LC1G3D1T                                 0x1
#define LC1G3D1T_address                         0xF16
#define LC1G3D1T_position                        0x1
#define LC1G3D1T_size                            0x1
#define LC1G3D1T_value_mask                      0x2
#define LC1G3D1T_clear_mask                      0xFD

#define CLC1GLS2_D1T                             0x1
#define CLC1GLS2_D1T_address                     0xF16
#define CLC1GLS2_D1T_position                    0x1
#define CLC1GLS2_D1T_size                        0x1
#define CLC1GLS2_D1T_value_mask                  0x2
#define CLC1GLS2_D1T_clear_mask                  0xFD

#define LC1G3D2N                                 0x2
#define LC1G3D2N_address                         0xF16
#define LC1G3D2N_position                        0x2
#define LC1G3D2N_size                            0x1
#define LC1G3D2N_value_mask                      0x4
#define LC1G3D2N_clear_mask                      0xFB

#define CLC1GLS2_D2N                             0x2
#define CLC1GLS2_D2N_address                     0xF16
#define CLC1GLS2_D2N_position                    0x2
#define CLC1GLS2_D2N_size                        0x1
#define CLC1GLS2_D2N_value_mask                  0x4
#define CLC1GLS2_D2N_clear_mask                  0xFB

#define LC1G3D2T                                 0x3
#define LC1G3D2T_address                         0xF16
#define LC1G3D2T_position                        0x3
#define LC1G3D2T_size                            0x1
#define LC1G3D2T_value_mask                      0x8
#define LC1G3D2T_clear_mask                      0xF7

#define CLC1GLS2_D2T                             0x3
#define CLC1GLS2_D2T_address                     0xF16
#define CLC1GLS2_D2T_position                    0x3
#define CLC1GLS2_D2T_size                        0x1
#define CLC1GLS2_D2T_value_mask                  0x8
#define CLC1GLS2_D2T_clear_mask                  0xF7

#define CLC1GLS2_D3N                             0x4
#define CLC1GLS2_D3N_address                     0xF16
#define CLC1GLS2_D3N_position                    0x4
#define CLC1GLS2_D3N_size                        0x1
#define CLC1GLS2_D3N_value_mask                  0x10
#define CLC1GLS2_D3N_clear_mask                  0xEF

#define LC1G3D3N                                 0x4
#define LC1G3D3N_address                         0xF16
#define LC1G3D3N_position                        0x4
#define LC1G3D3N_size                            0x1
#define LC1G3D3N_value_mask                      0x10
#define LC1G3D3N_clear_mask                      0xEF

#define LC1G3D3T                                 0x5
#define LC1G3D3T_address                         0xF16
#define LC1G3D3T_position                        0x5
#define LC1G3D3T_size                            0x1
#define LC1G3D3T_value_mask                      0x20
#define LC1G3D3T_clear_mask                      0xDF

#define CLC1GLS2_D3T                             0x5
#define CLC1GLS2_D3T_address                     0xF16
#define CLC1GLS2_D3T_position                    0x5
#define CLC1GLS2_D3T_size                        0x1
#define CLC1GLS2_D3T_value_mask                  0x20
#define CLC1GLS2_D3T_clear_mask                  0xDF

#define LC1G3D4N                                 0x6
#define LC1G3D4N_address                         0xF16
#define LC1G3D4N_position                        0x6
#define LC1G3D4N_size                            0x1
#define LC1G3D4N_value_mask                      0x40
#define LC1G3D4N_clear_mask                      0xBF

#define CLC1GLS2_D4N                             0x6
#define CLC1GLS2_D4N_address                     0xF16
#define CLC1GLS2_D4N_position                    0x6
#define CLC1GLS2_D4N_size                        0x1
#define CLC1GLS2_D4N_value_mask                  0x40
#define CLC1GLS2_D4N_clear_mask                  0xBF

#define LC1G3D4T                                 0x7
#define LC1G3D4T_address                         0xF16
#define LC1G3D4T_position                        0x7
#define LC1G3D4T_size                            0x1
#define LC1G3D4T_value_mask                      0x80
#define LC1G3D4T_clear_mask                      0x7F

#define CLC1GLS2_D4T                             0x7
#define CLC1GLS2_D4T_address                     0xF16
#define CLC1GLS2_D4T_position                    0x7
#define CLC1GLS2_D4T_size                        0x1
#define CLC1GLS2_D4T_value_mask                  0x80
#define CLC1GLS2_D4T_clear_mask                  0x7F


/*--------------------------------------------------------------------------------------------------------------------#
| CLC1GLS3                                                                                                      0xF17 |
#---------------------------------------------------------------------------------------------------------------------#
| LC1G4D4T | CLC1GLS3_G4D4N | LC1G4D3T | LC1G4D3N | CLC1GLS3_G4D2T | CLC1GLS3_G4D2N | CLC1GLS3_G4D1T | CLC1GLS3_G4D1N |
#---------------------------------------------------------------------------------------------------------------------#
| 7        | 6              | 5        | 4        | 3              | 2              | 1              | 0              |
#--------------------------------------------------------------------------------------------------------------------*/

#define CLC1GLS3                                 0x0
#define CLC1GLS3_address                         0xF17
#define CLC1GLS3_position                        0x0
#define CLC1GLS3_size                            0x8
#define CLC1GLS3_value_mask                      0xFF
#define CLC1GLS3_clear_mask                      0x0

#define LC1G4D1N                                 0x0
#define LC1G4D1N_address                         0xF17
#define LC1G4D1N_position                        0x0
#define LC1G4D1N_size                            0x1
#define LC1G4D1N_value_mask                      0x1
#define LC1G4D1N_clear_mask                      0xFE

#define CLC1GLS3_G4D1N                           0x0
#define CLC1GLS3_G4D1N_address                   0xF17
#define CLC1GLS3_G4D1N_position                  0x0
#define CLC1GLS3_G4D1N_size                      0x1
#define CLC1GLS3_G4D1N_value_mask                0x1
#define CLC1GLS3_G4D1N_clear_mask                0xFE

#define LC1G4D1T                                 0x1
#define LC1G4D1T_address                         0xF17
#define LC1G4D1T_position                        0x1
#define LC1G4D1T_size                            0x1
#define LC1G4D1T_value_mask                      0x2
#define LC1G4D1T_clear_mask                      0xFD

#define CLC1GLS3_G4D1T                           0x1
#define CLC1GLS3_G4D1T_address                   0xF17
#define CLC1GLS3_G4D1T_position                  0x1
#define CLC1GLS3_G4D1T_size                      0x1
#define CLC1GLS3_G4D1T_value_mask                0x2
#define CLC1GLS3_G4D1T_clear_mask                0xFD

#define CLC1GLS3_G4D2N                           0x2
#define CLC1GLS3_G4D2N_address                   0xF17
#define CLC1GLS3_G4D2N_position                  0x2
#define CLC1GLS3_G4D2N_size                      0x1
#define CLC1GLS3_G4D2N_value_mask                0x4
#define CLC1GLS3_G4D2N_clear_mask                0xFB

#define LC1G4D2N                                 0x2
#define LC1G4D2N_address                         0xF17
#define LC1G4D2N_position                        0x2
#define LC1G4D2N_size                            0x1
#define LC1G4D2N_value_mask                      0x4
#define LC1G4D2N_clear_mask                      0xFB

#define CLC1GLS3_G4D2T                           0x3
#define CLC1GLS3_G4D2T_address                   0xF17
#define CLC1GLS3_G4D2T_position                  0x3
#define CLC1GLS3_G4D2T_size                      0x1
#define CLC1GLS3_G4D2T_value_mask                0x8
#define CLC1GLS3_G4D2T_clear_mask                0xF7

#define LC1G4D2T                                 0x3
#define LC1G4D2T_address                         0xF17
#define LC1G4D2T_position                        0x3
#define LC1G4D2T_size                            0x1
#define LC1G4D2T_value_mask                      0x8
#define LC1G4D2T_clear_mask                      0xF7

#define LC1G4D3N                                 0x4
#define LC1G4D3N_address                         0xF17
#define LC1G4D3N_position                        0x4
#define LC1G4D3N_size                            0x1
#define LC1G4D3N_value_mask                      0x10
#define LC1G4D3N_clear_mask                      0xEF

#define CLC1GLS3_G4D3N                           0x4
#define CLC1GLS3_G4D3N_address                   0xF17
#define CLC1GLS3_G4D3N_position                  0x4
#define CLC1GLS3_G4D3N_size                      0x1
#define CLC1GLS3_G4D3N_value_mask                0x10
#define CLC1GLS3_G4D3N_clear_mask                0xEF

#define LC1G4D3T                                 0x5
#define LC1G4D3T_address                         0xF17
#define LC1G4D3T_position                        0x5
#define LC1G4D3T_size                            0x1
#define LC1G4D3T_value_mask                      0x20
#define LC1G4D3T_clear_mask                      0xDF

#define CLC1GLS3_G4D3T                           0x5
#define CLC1GLS3_G4D3T_address                   0xF17
#define CLC1GLS3_G4D3T_position                  0x5
#define CLC1GLS3_G4D3T_size                      0x1
#define CLC1GLS3_G4D3T_value_mask                0x20
#define CLC1GLS3_G4D3T_clear_mask                0xDF

#define CLC1GLS3_G4D4N                           0x6
#define CLC1GLS3_G4D4N_address                   0xF17
#define CLC1GLS3_G4D4N_position                  0x6
#define CLC1GLS3_G4D4N_size                      0x1
#define CLC1GLS3_G4D4N_value_mask                0x40
#define CLC1GLS3_G4D4N_clear_mask                0xBF

#define LC1G4D4N                                 0x6
#define LC1G4D4N_address                         0xF17
#define LC1G4D4N_position                        0x6
#define LC1G4D4N_size                            0x1
#define LC1G4D4N_value_mask                      0x40
#define LC1G4D4N_clear_mask                      0xBF

#define CLC1GLS3_G4D4T                           0x7
#define CLC1GLS3_G4D4T_address                   0xF17
#define CLC1GLS3_G4D4T_position                  0x7
#define CLC1GLS3_G4D4T_size                      0x1
#define CLC1GLS3_G4D4T_value_mask                0x80
#define CLC1GLS3_G4D4T_clear_mask                0x7F

#define LC1G4D4T                                 0x7
#define LC1G4D4T_address                         0xF17
#define LC1G4D4T_position                        0x7
#define LC1G4D4T_size                            0x1
#define LC1G4D4T_value_mask                      0x80
#define LC1G4D4T_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------------------#
| CLC2CON                                                                                           0xF18 |
#---------------------------------------------------------------------------------------------------------#
| LC2EN | CLC2CON_LCOE | LC2OUT | LC2INTP | LC2INTN | CLC2CON_LCMODE2 | CLC2CON_LCMODE1 | CLC2CON_LCMODE0 |
#---------------------------------------------------------------------------------------------------------#
| 7     | 6            | 5      | 4       | 3       | 2               | 1               | 0               |
#--------------------------------------------------------------------------------------------------------*/

#define CLC2CON                                  0x0
#define CLC2CON_address                          0xF18
#define CLC2CON_position                         0x0
#define CLC2CON_size                             0x8
#define CLC2CON_value_mask                       0xFF
#define CLC2CON_clear_mask                       0x0

#define LC2MODE0                                 0x0
#define LC2MODE0_address                         0xF18
#define LC2MODE0_position                        0x0
#define LC2MODE0_size                            0x1
#define LC2MODE0_value_mask                      0x1
#define LC2MODE0_clear_mask                      0xFE

#define LC2MODE                                  0x0
#define LC2MODE_address                          0xF18
#define LC2MODE_position                         0x0
#define LC2MODE_size                             0x3
#define LC2MODE_value_mask                       0x7
#define LC2MODE_clear_mask                       0xF8

#define CLC2CON_LCMODE0                          0x0
#define CLC2CON_LCMODE0_address                  0xF18
#define CLC2CON_LCMODE0_position                 0x0
#define CLC2CON_LCMODE0_size                     0x1
#define CLC2CON_LCMODE0_value_mask               0x1
#define CLC2CON_LCMODE0_clear_mask               0xFE

#define LC2MODE1                                 0x1
#define LC2MODE1_address                         0xF18
#define LC2MODE1_position                        0x1
#define LC2MODE1_size                            0x1
#define LC2MODE1_value_mask                      0x2
#define LC2MODE1_clear_mask                      0xFD

#define CLC2CON_LCMODE1                          0x1
#define CLC2CON_LCMODE1_address                  0xF18
#define CLC2CON_LCMODE1_position                 0x1
#define CLC2CON_LCMODE1_size                     0x1
#define CLC2CON_LCMODE1_value_mask               0x2
#define CLC2CON_LCMODE1_clear_mask               0xFD

#define LC2MODE2                                 0x2
#define LC2MODE2_address                         0xF18
#define LC2MODE2_position                        0x2
#define LC2MODE2_size                            0x1
#define LC2MODE2_value_mask                      0x4
#define LC2MODE2_clear_mask                      0xFB

#define CLC2CON_LCMODE2                          0x2
#define CLC2CON_LCMODE2_address                  0xF18
#define CLC2CON_LCMODE2_position                 0x2
#define CLC2CON_LCMODE2_size                     0x1
#define CLC2CON_LCMODE2_value_mask               0x4
#define CLC2CON_LCMODE2_clear_mask               0xFB

#define LC2INTN                                  0x3
#define LC2INTN_address                          0xF18
#define LC2INTN_position                         0x3
#define LC2INTN_size                             0x1
#define LC2INTN_value_mask                       0x8
#define LC2INTN_clear_mask                       0xF7

#define CLC2CON_LCINTN                           0x3
#define CLC2CON_LCINTN_address                   0xF18
#define CLC2CON_LCINTN_position                  0x3
#define CLC2CON_LCINTN_size                      0x1
#define CLC2CON_LCINTN_value_mask                0x8
#define CLC2CON_LCINTN_clear_mask                0xF7

#define LC2INTP                                  0x4
#define LC2INTP_address                          0xF18
#define LC2INTP_position                         0x4
#define LC2INTP_size                             0x1
#define LC2INTP_value_mask                       0x10
#define LC2INTP_clear_mask                       0xEF

#define CLC2CON_LCINTP                           0x4
#define CLC2CON_LCINTP_address                   0xF18
#define CLC2CON_LCINTP_position                  0x4
#define CLC2CON_LCINTP_size                      0x1
#define CLC2CON_LCINTP_value_mask                0x10
#define CLC2CON_LCINTP_clear_mask                0xEF

#define CLC2CON_LCOUT                            0x5
#define CLC2CON_LCOUT_address                    0xF18
#define CLC2CON_LCOUT_position                   0x5
#define CLC2CON_LCOUT_size                       0x1
#define CLC2CON_LCOUT_value_mask                 0x20
#define CLC2CON_LCOUT_clear_mask                 0xDF

#define LC2OUT                                   0x5
#define LC2OUT_address                           0xF18
#define LC2OUT_position                          0x5
#define LC2OUT_size                              0x1
#define LC2OUT_value_mask                        0x20
#define LC2OUT_clear_mask                        0xDF

#define LC2OE                                    0x6
#define LC2OE_address                            0xF18
#define LC2OE_position                           0x6
#define LC2OE_size                               0x1
#define LC2OE_value_mask                         0x40
#define LC2OE_clear_mask                         0xBF

#define CLC2CON_LCOE                             0x6
#define CLC2CON_LCOE_address                     0xF18
#define CLC2CON_LCOE_position                    0x6
#define CLC2CON_LCOE_size                        0x1
#define CLC2CON_LCOE_value_mask                  0x40
#define CLC2CON_LCOE_clear_mask                  0xBF

#define CLC2CON_LCEN                             0x7
#define CLC2CON_LCEN_address                     0xF18
#define CLC2CON_LCEN_position                    0x7
#define CLC2CON_LCEN_size                        0x1
#define CLC2CON_LCEN_value_mask                  0x80
#define CLC2CON_LCEN_clear_mask                  0x7F

#define LC2EN                                    0x7
#define LC2EN_address                            0xF18
#define LC2EN_position                           0x7
#define LC2EN_size                               0x1
#define LC2EN_value_mask                         0x80
#define LC2EN_clear_mask                         0x7F


/*--------------------------------------------------------------------#
| CLC2POL                                                       0xF19 |
#---------------------------------------------------------------------#
| CLC2POL_POL | - | - | - | LC2G4POL | LC2G3POL | LC2G2POL | LC2G1POL |
#---------------------------------------------------------------------#
| 7           | 6 | 5 | 4 | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------*/

#define CLC2POL                                  0x0
#define CLC2POL_address                          0xF19
#define CLC2POL_position                         0x0
#define CLC2POL_size                             0x8
#define CLC2POL_value_mask                       0xFF
#define CLC2POL_clear_mask                       0x0

#define LC2G1POL                                 0x0
#define LC2G1POL_address                         0xF19
#define LC2G1POL_position                        0x0
#define LC2G1POL_size                            0x1
#define LC2G1POL_value_mask                      0x1
#define LC2G1POL_clear_mask                      0xFE

#define CLC2POL_G1POL                            0x0
#define CLC2POL_G1POL_address                    0xF19
#define CLC2POL_G1POL_position                   0x0
#define CLC2POL_G1POL_size                       0x1
#define CLC2POL_G1POL_value_mask                 0x1
#define CLC2POL_G1POL_clear_mask                 0xFE

#define LC2G2POL                                 0x1
#define LC2G2POL_address                         0xF19
#define LC2G2POL_position                        0x1
#define LC2G2POL_size                            0x1
#define LC2G2POL_value_mask                      0x2
#define LC2G2POL_clear_mask                      0xFD

#define CLC2POL_G2POL                            0x1
#define CLC2POL_G2POL_address                    0xF19
#define CLC2POL_G2POL_position                   0x1
#define CLC2POL_G2POL_size                       0x1
#define CLC2POL_G2POL_value_mask                 0x2
#define CLC2POL_G2POL_clear_mask                 0xFD

#define LC2G3POL                                 0x2
#define LC2G3POL_address                         0xF19
#define LC2G3POL_position                        0x2
#define LC2G3POL_size                            0x1
#define LC2G3POL_value_mask                      0x4
#define LC2G3POL_clear_mask                      0xFB

#define CLC2POL_G3POL                            0x2
#define CLC2POL_G3POL_address                    0xF19
#define CLC2POL_G3POL_position                   0x2
#define CLC2POL_G3POL_size                       0x1
#define CLC2POL_G3POL_value_mask                 0x4
#define CLC2POL_G3POL_clear_mask                 0xFB

#define LC2G4POL                                 0x3
#define LC2G4POL_address                         0xF19
#define LC2G4POL_position                        0x3
#define LC2G4POL_size                            0x1
#define LC2G4POL_value_mask                      0x8
#define LC2G4POL_clear_mask                      0xF7

#define CLC2POL_G4POL                            0x3
#define CLC2POL_G4POL_address                    0xF19
#define CLC2POL_G4POL_position                   0x3
#define CLC2POL_G4POL_size                       0x1
#define CLC2POL_G4POL_value_mask                 0x8
#define CLC2POL_G4POL_clear_mask                 0xF7

#define CLC2POL_POL                              0x7
#define CLC2POL_POL_address                      0xF19
#define CLC2POL_POL_position                     0x7
#define CLC2POL_POL_size                         0x1
#define CLC2POL_POL_value_mask                   0x80
#define CLC2POL_POL_clear_mask                   0x7F

#define LC2POL                                   0x7
#define LC2POL_address                           0xF19
#define LC2POL_position                          0x7
#define LC2POL_size                              0x1
#define LC2POL_value_mask                        0x80
#define LC2POL_clear_mask                        0x7F


/*------------------------------------------------------------------#
| CLC2SEL0                                                    0xF1A |
#-------------------------------------------------------------------#
| - | LC2D2S2 | LC2D2S1 | LC2D2S0 | - | LC2D1S2 | LC2D1S1 | LC2D1S0 |
#-------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3 | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define CLC2SEL0                                 0x0
#define CLC2SEL0_address                         0xF1A
#define CLC2SEL0_position                        0x0
#define CLC2SEL0_size                            0x8
#define CLC2SEL0_value_mask                      0xFF
#define CLC2SEL0_clear_mask                      0x0

#define LC2D1S0                                  0x0
#define LC2D1S0_address                          0xF1A
#define LC2D1S0_position                         0x0
#define LC2D1S0_size                             0x1
#define LC2D1S0_value_mask                       0x1
#define LC2D1S0_clear_mask                       0xFE

#define CLC2SEL0_D1S0                            0x0
#define CLC2SEL0_D1S0_address                    0xF1A
#define CLC2SEL0_D1S0_position                   0x0
#define CLC2SEL0_D1S0_size                       0x1
#define CLC2SEL0_D1S0_value_mask                 0x1
#define CLC2SEL0_D1S0_clear_mask                 0xFE

#define LC2D1S                                   0x0
#define LC2D1S_address                           0xF1A
#define LC2D1S_position                          0x0
#define LC2D1S_size                              0x3
#define LC2D1S_value_mask                        0x7
#define LC2D1S_clear_mask                        0xF8

#define LC2D1S1                                  0x1
#define LC2D1S1_address                          0xF1A
#define LC2D1S1_position                         0x1
#define LC2D1S1_size                             0x1
#define LC2D1S1_value_mask                       0x2
#define LC2D1S1_clear_mask                       0xFD

#define CLC2SEL0_D1S1                            0x1
#define CLC2SEL0_D1S1_address                    0xF1A
#define CLC2SEL0_D1S1_position                   0x1
#define CLC2SEL0_D1S1_size                       0x1
#define CLC2SEL0_D1S1_value_mask                 0x2
#define CLC2SEL0_D1S1_clear_mask                 0xFD

#define LC2D1S2                                  0x2
#define LC2D1S2_address                          0xF1A
#define LC2D1S2_position                         0x2
#define LC2D1S2_size                             0x1
#define LC2D1S2_value_mask                       0x4
#define LC2D1S2_clear_mask                       0xFB

#define CLC2SEL0_D1S2                            0x2
#define CLC2SEL0_D1S2_address                    0xF1A
#define CLC2SEL0_D1S2_position                   0x2
#define CLC2SEL0_D1S2_size                       0x1
#define CLC2SEL0_D1S2_value_mask                 0x4
#define CLC2SEL0_D1S2_clear_mask                 0xFB

#define LC2D2S0                                  0x4
#define LC2D2S0_address                          0xF1A
#define LC2D2S0_position                         0x4
#define LC2D2S0_size                             0x1
#define LC2D2S0_value_mask                       0x10
#define LC2D2S0_clear_mask                       0xEF

#define LC2D2S                                   0x4
#define LC2D2S_address                           0xF1A
#define LC2D2S_position                          0x4
#define LC2D2S_size                              0x3
#define LC2D2S_value_mask                        0x70
#define LC2D2S_clear_mask                        0x8F

#define CLC2SEL0_D2S0                            0x4
#define CLC2SEL0_D2S0_address                    0xF1A
#define CLC2SEL0_D2S0_position                   0x4
#define CLC2SEL0_D2S0_size                       0x1
#define CLC2SEL0_D2S0_value_mask                 0x10
#define CLC2SEL0_D2S0_clear_mask                 0xEF

#define LC2D2S1                                  0x5
#define LC2D2S1_address                          0xF1A
#define LC2D2S1_position                         0x5
#define LC2D2S1_size                             0x1
#define LC2D2S1_value_mask                       0x20
#define LC2D2S1_clear_mask                       0xDF

#define CLC2SEL0_D2S1                            0x5
#define CLC2SEL0_D2S1_address                    0xF1A
#define CLC2SEL0_D2S1_position                   0x5
#define CLC2SEL0_D2S1_size                       0x1
#define CLC2SEL0_D2S1_value_mask                 0x20
#define CLC2SEL0_D2S1_clear_mask                 0xDF

#define LC2D2S2                                  0x6
#define LC2D2S2_address                          0xF1A
#define LC2D2S2_position                         0x6
#define LC2D2S2_size                             0x1
#define LC2D2S2_value_mask                       0x40
#define LC2D2S2_clear_mask                       0xBF

#define CLC2SEL0_D2S2                            0x6
#define CLC2SEL0_D2S2_address                    0xF1A
#define CLC2SEL0_D2S2_position                   0x6
#define CLC2SEL0_D2S2_size                       0x1
#define CLC2SEL0_D2S2_value_mask                 0x40
#define CLC2SEL0_D2S2_clear_mask                 0xBF


/*------------------------------------------------------------------#
| CLC2SEL1                                                    0xF1B |
#-------------------------------------------------------------------#
| - | LC2D4S2 | LC2D4S1 | LC2D4S0 | - | LC2D3S2 | LC2D3S1 | LC2D3S0 |
#-------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3 | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define CLC2SEL1                                 0x0
#define CLC2SEL1_address                         0xF1B
#define CLC2SEL1_position                        0x0
#define CLC2SEL1_size                            0x8
#define CLC2SEL1_value_mask                      0xFF
#define CLC2SEL1_clear_mask                      0x0

#define CLC2SEL1_D3S0                            0x0
#define CLC2SEL1_D3S0_address                    0xF1B
#define CLC2SEL1_D3S0_position                   0x0
#define CLC2SEL1_D3S0_size                       0x1
#define CLC2SEL1_D3S0_value_mask                 0x1
#define CLC2SEL1_D3S0_clear_mask                 0xFE

#define LC2D3S0                                  0x0
#define LC2D3S0_address                          0xF1B
#define LC2D3S0_position                         0x0
#define LC2D3S0_size                             0x1
#define LC2D3S0_value_mask                       0x1
#define LC2D3S0_clear_mask                       0xFE

#define LC2D3S                                   0x0
#define LC2D3S_address                           0xF1B
#define LC2D3S_position                          0x0
#define LC2D3S_size                              0x3
#define LC2D3S_value_mask                        0x7
#define LC2D3S_clear_mask                        0xF8

#define LC2D3S1                                  0x1
#define LC2D3S1_address                          0xF1B
#define LC2D3S1_position                         0x1
#define LC2D3S1_size                             0x1
#define LC2D3S1_value_mask                       0x2
#define LC2D3S1_clear_mask                       0xFD

#define CLC2SEL1_D3S1                            0x1
#define CLC2SEL1_D3S1_address                    0xF1B
#define CLC2SEL1_D3S1_position                   0x1
#define CLC2SEL1_D3S1_size                       0x1
#define CLC2SEL1_D3S1_value_mask                 0x2
#define CLC2SEL1_D3S1_clear_mask                 0xFD

#define LC2D3S2                                  0x2
#define LC2D3S2_address                          0xF1B
#define LC2D3S2_position                         0x2
#define LC2D3S2_size                             0x1
#define LC2D3S2_value_mask                       0x4
#define LC2D3S2_clear_mask                       0xFB

#define CLC2SEL1_D3S2                            0x2
#define CLC2SEL1_D3S2_address                    0xF1B
#define CLC2SEL1_D3S2_position                   0x2
#define CLC2SEL1_D3S2_size                       0x1
#define CLC2SEL1_D3S2_value_mask                 0x4
#define CLC2SEL1_D3S2_clear_mask                 0xFB

#define LC2D4S                                   0x4
#define LC2D4S_address                           0xF1B
#define LC2D4S_position                          0x4
#define LC2D4S_size                              0x3
#define LC2D4S_value_mask                        0x70
#define LC2D4S_clear_mask                        0x8F

#define LC2D4S0                                  0x4
#define LC2D4S0_address                          0xF1B
#define LC2D4S0_position                         0x4
#define LC2D4S0_size                             0x1
#define LC2D4S0_value_mask                       0x10
#define LC2D4S0_clear_mask                       0xEF

#define CLC2SEL1_D4S0                            0x4
#define CLC2SEL1_D4S0_address                    0xF1B
#define CLC2SEL1_D4S0_position                   0x4
#define CLC2SEL1_D4S0_size                       0x1
#define CLC2SEL1_D4S0_value_mask                 0x10
#define CLC2SEL1_D4S0_clear_mask                 0xEF

#define LC2D4S1                                  0x5
#define LC2D4S1_address                          0xF1B
#define LC2D4S1_position                         0x5
#define LC2D4S1_size                             0x1
#define LC2D4S1_value_mask                       0x20
#define LC2D4S1_clear_mask                       0xDF

#define CLC2SEL1_D4S1                            0x5
#define CLC2SEL1_D4S1_address                    0xF1B
#define CLC2SEL1_D4S1_position                   0x5
#define CLC2SEL1_D4S1_size                       0x1
#define CLC2SEL1_D4S1_value_mask                 0x20
#define CLC2SEL1_D4S1_clear_mask                 0xDF

#define LC2D4S2                                  0x6
#define LC2D4S2_address                          0xF1B
#define LC2D4S2_position                         0x6
#define LC2D4S2_size                             0x1
#define LC2D4S2_value_mask                       0x40
#define LC2D4S2_clear_mask                       0xBF

#define CLC2SEL1_D4S2                            0x6
#define CLC2SEL1_D4S2_address                    0xF1B
#define CLC2SEL1_D4S2_position                   0x6
#define CLC2SEL1_D4S2_size                       0x1
#define CLC2SEL1_D4S2_value_mask                 0x40
#define CLC2SEL1_D4S2_clear_mask                 0xBF


/*------------------------------------------------------------------------------------------------------#
| CLC2GLS0                                                                                        0xF1C |
#-------------------------------------------------------------------------------------------------------#
| CLC2GLS0_D4T | LC2G1D4N | CLC2GLS0_D3T | LC2G1D3N | CLC2GLS0_D2T | LC2G1D2N | CLC2GLS0_D1T | LC2G1D1N |
#-------------------------------------------------------------------------------------------------------#
| 7            | 6        | 5            | 4        | 3            | 2        | 1            | 0        |
#------------------------------------------------------------------------------------------------------*/

#define CLC2GLS0                                 0x0
#define CLC2GLS0_address                         0xF1C
#define CLC2GLS0_position                        0x0
#define CLC2GLS0_size                            0x8
#define CLC2GLS0_value_mask                      0xFF
#define CLC2GLS0_clear_mask                      0x0

#define LC2G1D1N                                 0x0
#define LC2G1D1N_address                         0xF1C
#define LC2G1D1N_position                        0x0
#define LC2G1D1N_size                            0x1
#define LC2G1D1N_value_mask                      0x1
#define LC2G1D1N_clear_mask                      0xFE

#define CLC2GLS0_D1N                             0x0
#define CLC2GLS0_D1N_address                     0xF1C
#define CLC2GLS0_D1N_position                    0x0
#define CLC2GLS0_D1N_size                        0x1
#define CLC2GLS0_D1N_value_mask                  0x1
#define CLC2GLS0_D1N_clear_mask                  0xFE

#define CLC2GLS0_D1T                             0x1
#define CLC2GLS0_D1T_address                     0xF1C
#define CLC2GLS0_D1T_position                    0x1
#define CLC2GLS0_D1T_size                        0x1
#define CLC2GLS0_D1T_value_mask                  0x2
#define CLC2GLS0_D1T_clear_mask                  0xFD

#define LC2G1D1T                                 0x1
#define LC2G1D1T_address                         0xF1C
#define LC2G1D1T_position                        0x1
#define LC2G1D1T_size                            0x1
#define LC2G1D1T_value_mask                      0x2
#define LC2G1D1T_clear_mask                      0xFD

#define LC2G1D2N                                 0x2
#define LC2G1D2N_address                         0xF1C
#define LC2G1D2N_position                        0x2
#define LC2G1D2N_size                            0x1
#define LC2G1D2N_value_mask                      0x4
#define LC2G1D2N_clear_mask                      0xFB

#define CLC2GLS0_D2N                             0x2
#define CLC2GLS0_D2N_address                     0xF1C
#define CLC2GLS0_D2N_position                    0x2
#define CLC2GLS0_D2N_size                        0x1
#define CLC2GLS0_D2N_value_mask                  0x4
#define CLC2GLS0_D2N_clear_mask                  0xFB

#define CLC2GLS0_D2T                             0x3
#define CLC2GLS0_D2T_address                     0xF1C
#define CLC2GLS0_D2T_position                    0x3
#define CLC2GLS0_D2T_size                        0x1
#define CLC2GLS0_D2T_value_mask                  0x8
#define CLC2GLS0_D2T_clear_mask                  0xF7

#define LC2G1D2T                                 0x3
#define LC2G1D2T_address                         0xF1C
#define LC2G1D2T_position                        0x3
#define LC2G1D2T_size                            0x1
#define LC2G1D2T_value_mask                      0x8
#define LC2G1D2T_clear_mask                      0xF7

#define LC2G1D3N                                 0x4
#define LC2G1D3N_address                         0xF1C
#define LC2G1D3N_position                        0x4
#define LC2G1D3N_size                            0x1
#define LC2G1D3N_value_mask                      0x10
#define LC2G1D3N_clear_mask                      0xEF

#define CLC2GLS0_D3N                             0x4
#define CLC2GLS0_D3N_address                     0xF1C
#define CLC2GLS0_D3N_position                    0x4
#define CLC2GLS0_D3N_size                        0x1
#define CLC2GLS0_D3N_value_mask                  0x10
#define CLC2GLS0_D3N_clear_mask                  0xEF

#define CLC2GLS0_D3T                             0x5
#define CLC2GLS0_D3T_address                     0xF1C
#define CLC2GLS0_D3T_position                    0x5
#define CLC2GLS0_D3T_size                        0x1
#define CLC2GLS0_D3T_value_mask                  0x20
#define CLC2GLS0_D3T_clear_mask                  0xDF

#define LC2G1D3T                                 0x5
#define LC2G1D3T_address                         0xF1C
#define LC2G1D3T_position                        0x5
#define LC2G1D3T_size                            0x1
#define LC2G1D3T_value_mask                      0x20
#define LC2G1D3T_clear_mask                      0xDF

#define LC2G1D4N                                 0x6
#define LC2G1D4N_address                         0xF1C
#define LC2G1D4N_position                        0x6
#define LC2G1D4N_size                            0x1
#define LC2G1D4N_value_mask                      0x40
#define LC2G1D4N_clear_mask                      0xBF

#define CLC2GLS0_D4N                             0x6
#define CLC2GLS0_D4N_address                     0xF1C
#define CLC2GLS0_D4N_position                    0x6
#define CLC2GLS0_D4N_size                        0x1
#define CLC2GLS0_D4N_value_mask                  0x40
#define CLC2GLS0_D4N_clear_mask                  0xBF

#define CLC2GLS0_D4T                             0x7
#define CLC2GLS0_D4T_address                     0xF1C
#define CLC2GLS0_D4T_position                    0x7
#define CLC2GLS0_D4T_size                        0x1
#define CLC2GLS0_D4T_value_mask                  0x80
#define CLC2GLS0_D4T_clear_mask                  0x7F

#define LC2G1D4T                                 0x7
#define LC2G1D4T_address                         0xF1C
#define LC2G1D4T_position                        0x7
#define LC2G1D4T_size                            0x1
#define LC2G1D4T_value_mask                      0x80
#define LC2G1D4T_clear_mask                      0x7F


/*------------------------------------------------------------------------------------------------------#
| CLC2GLS1                                                                                        0xF1D |
#-------------------------------------------------------------------------------------------------------#
| CLC2GLS1_D4T | LC2G2D4N | CLC2GLS1_D3T | LC2G2D3N | CLC2GLS1_D2T | LC2G2D2N | LC2G2D1T | CLC2GLS1_D1N |
#-------------------------------------------------------------------------------------------------------#
| 7            | 6        | 5            | 4        | 3            | 2        | 1        | 0            |
#------------------------------------------------------------------------------------------------------*/

#define CLC2GLS1                                 0x0
#define CLC2GLS1_address                         0xF1D
#define CLC2GLS1_position                        0x0
#define CLC2GLS1_size                            0x8
#define CLC2GLS1_value_mask                      0xFF
#define CLC2GLS1_clear_mask                      0x0

#define CLC2GLS1_D1N                             0x0
#define CLC2GLS1_D1N_address                     0xF1D
#define CLC2GLS1_D1N_position                    0x0
#define CLC2GLS1_D1N_size                        0x1
#define CLC2GLS1_D1N_value_mask                  0x1
#define CLC2GLS1_D1N_clear_mask                  0xFE

#define LC2G2D1N                                 0x0
#define LC2G2D1N_address                         0xF1D
#define LC2G2D1N_position                        0x0
#define LC2G2D1N_size                            0x1
#define LC2G2D1N_value_mask                      0x1
#define LC2G2D1N_clear_mask                      0xFE

#define CLC2GLS1_D1T                             0x1
#define CLC2GLS1_D1T_address                     0xF1D
#define CLC2GLS1_D1T_position                    0x1
#define CLC2GLS1_D1T_size                        0x1
#define CLC2GLS1_D1T_value_mask                  0x2
#define CLC2GLS1_D1T_clear_mask                  0xFD

#define LC2G2D1T                                 0x1
#define LC2G2D1T_address                         0xF1D
#define LC2G2D1T_position                        0x1
#define LC2G2D1T_size                            0x1
#define LC2G2D1T_value_mask                      0x2
#define LC2G2D1T_clear_mask                      0xFD

#define CLC2GLS1_D2N                             0x2
#define CLC2GLS1_D2N_address                     0xF1D
#define CLC2GLS1_D2N_position                    0x2
#define CLC2GLS1_D2N_size                        0x1
#define CLC2GLS1_D2N_value_mask                  0x4
#define CLC2GLS1_D2N_clear_mask                  0xFB

#define LC2G2D2N                                 0x2
#define LC2G2D2N_address                         0xF1D
#define LC2G2D2N_position                        0x2
#define LC2G2D2N_size                            0x1
#define LC2G2D2N_value_mask                      0x4
#define LC2G2D2N_clear_mask                      0xFB

#define CLC2GLS1_D2T                             0x3
#define CLC2GLS1_D2T_address                     0xF1D
#define CLC2GLS1_D2T_position                    0x3
#define CLC2GLS1_D2T_size                        0x1
#define CLC2GLS1_D2T_value_mask                  0x8
#define CLC2GLS1_D2T_clear_mask                  0xF7

#define LC2G2D2T                                 0x3
#define LC2G2D2T_address                         0xF1D
#define LC2G2D2T_position                        0x3
#define LC2G2D2T_size                            0x1
#define LC2G2D2T_value_mask                      0x8
#define LC2G2D2T_clear_mask                      0xF7

#define LC2G2D3N                                 0x4
#define LC2G2D3N_address                         0xF1D
#define LC2G2D3N_position                        0x4
#define LC2G2D3N_size                            0x1
#define LC2G2D3N_value_mask                      0x10
#define LC2G2D3N_clear_mask                      0xEF

#define CLC2GLS1_D3N                             0x4
#define CLC2GLS1_D3N_address                     0xF1D
#define CLC2GLS1_D3N_position                    0x4
#define CLC2GLS1_D3N_size                        0x1
#define CLC2GLS1_D3N_value_mask                  0x10
#define CLC2GLS1_D3N_clear_mask                  0xEF

#define LC2G2D3T                                 0x5
#define LC2G2D3T_address                         0xF1D
#define LC2G2D3T_position                        0x5
#define LC2G2D3T_size                            0x1
#define LC2G2D3T_value_mask                      0x20
#define LC2G2D3T_clear_mask                      0xDF

#define CLC2GLS1_D3T                             0x5
#define CLC2GLS1_D3T_address                     0xF1D
#define CLC2GLS1_D3T_position                    0x5
#define CLC2GLS1_D3T_size                        0x1
#define CLC2GLS1_D3T_value_mask                  0x20
#define CLC2GLS1_D3T_clear_mask                  0xDF

#define LC2G2D4N                                 0x6
#define LC2G2D4N_address                         0xF1D
#define LC2G2D4N_position                        0x6
#define LC2G2D4N_size                            0x1
#define LC2G2D4N_value_mask                      0x40
#define LC2G2D4N_clear_mask                      0xBF

#define CLC2GLS1_D4N                             0x6
#define CLC2GLS1_D4N_address                     0xF1D
#define CLC2GLS1_D4N_position                    0x6
#define CLC2GLS1_D4N_size                        0x1
#define CLC2GLS1_D4N_value_mask                  0x40
#define CLC2GLS1_D4N_clear_mask                  0xBF

#define LC2G2D4T                                 0x7
#define LC2G2D4T_address                         0xF1D
#define LC2G2D4T_position                        0x7
#define LC2G2D4T_size                            0x1
#define LC2G2D4T_value_mask                      0x80
#define LC2G2D4T_clear_mask                      0x7F

#define CLC2GLS1_D4T                             0x7
#define CLC2GLS1_D4T_address                     0xF1D
#define CLC2GLS1_D4T_position                    0x7
#define CLC2GLS1_D4T_size                        0x1
#define CLC2GLS1_D4T_value_mask                  0x80
#define CLC2GLS1_D4T_clear_mask                  0x7F


/*------------------------------------------------------------------------------------------------------#
| CLC2GLS2                                                                                        0xF1E |
#-------------------------------------------------------------------------------------------------------#
| LC2G3D4T | CLC2GLS2_D4N | CLC2GLS2_D3T | LC2G3D3N | LC2G3D2T | CLC2GLS2_D2N | CLC2GLS2_D1T | LC2G3D1N |
#-------------------------------------------------------------------------------------------------------#
| 7        | 6            | 5            | 4        | 3        | 2            | 1            | 0        |
#------------------------------------------------------------------------------------------------------*/

#define CLC2GLS2                                 0x0
#define CLC2GLS2_address                         0xF1E
#define CLC2GLS2_position                        0x0
#define CLC2GLS2_size                            0x8
#define CLC2GLS2_value_mask                      0xFF
#define CLC2GLS2_clear_mask                      0x0

#define LC2G3D1N                                 0x0
#define LC2G3D1N_address                         0xF1E
#define LC2G3D1N_position                        0x0
#define LC2G3D1N_size                            0x1
#define LC2G3D1N_value_mask                      0x1
#define LC2G3D1N_clear_mask                      0xFE

#define CLC2GLS2_D1N                             0x0
#define CLC2GLS2_D1N_address                     0xF1E
#define CLC2GLS2_D1N_position                    0x0
#define CLC2GLS2_D1N_size                        0x1
#define CLC2GLS2_D1N_value_mask                  0x1
#define CLC2GLS2_D1N_clear_mask                  0xFE

#define CLC2GLS2_D1T                             0x1
#define CLC2GLS2_D1T_address                     0xF1E
#define CLC2GLS2_D1T_position                    0x1
#define CLC2GLS2_D1T_size                        0x1
#define CLC2GLS2_D1T_value_mask                  0x2
#define CLC2GLS2_D1T_clear_mask                  0xFD

#define LC2G3D1T                                 0x1
#define LC2G3D1T_address                         0xF1E
#define LC2G3D1T_position                        0x1
#define LC2G3D1T_size                            0x1
#define LC2G3D1T_value_mask                      0x2
#define LC2G3D1T_clear_mask                      0xFD

#define CLC2GLS2_D2N                             0x2
#define CLC2GLS2_D2N_address                     0xF1E
#define CLC2GLS2_D2N_position                    0x2
#define CLC2GLS2_D2N_size                        0x1
#define CLC2GLS2_D2N_value_mask                  0x4
#define CLC2GLS2_D2N_clear_mask                  0xFB

#define LC2G3D2N                                 0x2
#define LC2G3D2N_address                         0xF1E
#define LC2G3D2N_position                        0x2
#define LC2G3D2N_size                            0x1
#define LC2G3D2N_value_mask                      0x4
#define LC2G3D2N_clear_mask                      0xFB

#define LC2G3D2T                                 0x3
#define LC2G3D2T_address                         0xF1E
#define LC2G3D2T_position                        0x3
#define LC2G3D2T_size                            0x1
#define LC2G3D2T_value_mask                      0x8
#define LC2G3D2T_clear_mask                      0xF7

#define CLC2GLS2_D2T                             0x3
#define CLC2GLS2_D2T_address                     0xF1E
#define CLC2GLS2_D2T_position                    0x3
#define CLC2GLS2_D2T_size                        0x1
#define CLC2GLS2_D2T_value_mask                  0x8
#define CLC2GLS2_D2T_clear_mask                  0xF7

#define CLC2GLS2_D3N                             0x4
#define CLC2GLS2_D3N_address                     0xF1E
#define CLC2GLS2_D3N_position                    0x4
#define CLC2GLS2_D3N_size                        0x1
#define CLC2GLS2_D3N_value_mask                  0x10
#define CLC2GLS2_D3N_clear_mask                  0xEF

#define LC2G3D3N                                 0x4
#define LC2G3D3N_address                         0xF1E
#define LC2G3D3N_position                        0x4
#define LC2G3D3N_size                            0x1
#define LC2G3D3N_value_mask                      0x10
#define LC2G3D3N_clear_mask                      0xEF

#define CLC2GLS2_D3T                             0x5
#define CLC2GLS2_D3T_address                     0xF1E
#define CLC2GLS2_D3T_position                    0x5
#define CLC2GLS2_D3T_size                        0x1
#define CLC2GLS2_D3T_value_mask                  0x20
#define CLC2GLS2_D3T_clear_mask                  0xDF

#define LC2G3D3T                                 0x5
#define LC2G3D3T_address                         0xF1E
#define LC2G3D3T_position                        0x5
#define LC2G3D3T_size                            0x1
#define LC2G3D3T_value_mask                      0x20
#define LC2G3D3T_clear_mask                      0xDF

#define CLC2GLS2_D4N                             0x6
#define CLC2GLS2_D4N_address                     0xF1E
#define CLC2GLS2_D4N_position                    0x6
#define CLC2GLS2_D4N_size                        0x1
#define CLC2GLS2_D4N_value_mask                  0x40
#define CLC2GLS2_D4N_clear_mask                  0xBF

#define LC2G3D4N                                 0x6
#define LC2G3D4N_address                         0xF1E
#define LC2G3D4N_position                        0x6
#define LC2G3D4N_size                            0x1
#define LC2G3D4N_value_mask                      0x40
#define LC2G3D4N_clear_mask                      0xBF

#define LC2G3D4T                                 0x7
#define LC2G3D4T_address                         0xF1E
#define LC2G3D4T_position                        0x7
#define LC2G3D4T_size                            0x1
#define LC2G3D4T_value_mask                      0x80
#define LC2G3D4T_clear_mask                      0x7F

#define CLC2GLS2_D4T                             0x7
#define CLC2GLS2_D4T_address                     0xF1E
#define CLC2GLS2_D4T_position                    0x7
#define CLC2GLS2_D4T_size                        0x1
#define CLC2GLS2_D4T_value_mask                  0x80
#define CLC2GLS2_D4T_clear_mask                  0x7F


/*--------------------------------------------------------------------------------------------------------#
| CLC2GLS3                                                                                          0xF1F |
#---------------------------------------------------------------------------------------------------------#
| CLC2GLS3_G4D4T | LC2G4D4N | CLC2GLS3_G4D3T | LC2G4D3N | LC2G4D2T | CLC2GLS3_G4D2N | LC2G4D1T | LC2G4D1N |
#---------------------------------------------------------------------------------------------------------#
| 7              | 6        | 5              | 4        | 3        | 2              | 1        | 0        |
#--------------------------------------------------------------------------------------------------------*/

#define CLC2GLS3                                 0x0
#define CLC2GLS3_address                         0xF1F
#define CLC2GLS3_position                        0x0
#define CLC2GLS3_size                            0x8
#define CLC2GLS3_value_mask                      0xFF
#define CLC2GLS3_clear_mask                      0x0

#define LC2G4D1N                                 0x0
#define LC2G4D1N_address                         0xF1F
#define LC2G4D1N_position                        0x0
#define LC2G4D1N_size                            0x1
#define LC2G4D1N_value_mask                      0x1
#define LC2G4D1N_clear_mask                      0xFE

#define CLC2GLS3_G4D1N                           0x0
#define CLC2GLS3_G4D1N_address                   0xF1F
#define CLC2GLS3_G4D1N_position                  0x0
#define CLC2GLS3_G4D1N_size                      0x1
#define CLC2GLS3_G4D1N_value_mask                0x1
#define CLC2GLS3_G4D1N_clear_mask                0xFE

#define CLC2GLS3_G4D1T                           0x1
#define CLC2GLS3_G4D1T_address                   0xF1F
#define CLC2GLS3_G4D1T_position                  0x1
#define CLC2GLS3_G4D1T_size                      0x1
#define CLC2GLS3_G4D1T_value_mask                0x2
#define CLC2GLS3_G4D1T_clear_mask                0xFD

#define LC2G4D1T                                 0x1
#define LC2G4D1T_address                         0xF1F
#define LC2G4D1T_position                        0x1
#define LC2G4D1T_size                            0x1
#define LC2G4D1T_value_mask                      0x2
#define LC2G4D1T_clear_mask                      0xFD

#define CLC2GLS3_G4D2N                           0x2
#define CLC2GLS3_G4D2N_address                   0xF1F
#define CLC2GLS3_G4D2N_position                  0x2
#define CLC2GLS3_G4D2N_size                      0x1
#define CLC2GLS3_G4D2N_value_mask                0x4
#define CLC2GLS3_G4D2N_clear_mask                0xFB

#define LC2G4D2N                                 0x2
#define LC2G4D2N_address                         0xF1F
#define LC2G4D2N_position                        0x2
#define LC2G4D2N_size                            0x1
#define LC2G4D2N_value_mask                      0x4
#define LC2G4D2N_clear_mask                      0xFB

#define LC2G4D2T                                 0x3
#define LC2G4D2T_address                         0xF1F
#define LC2G4D2T_position                        0x3
#define LC2G4D2T_size                            0x1
#define LC2G4D2T_value_mask                      0x8
#define LC2G4D2T_clear_mask                      0xF7

#define CLC2GLS3_G4D2T                           0x3
#define CLC2GLS3_G4D2T_address                   0xF1F
#define CLC2GLS3_G4D2T_position                  0x3
#define CLC2GLS3_G4D2T_size                      0x1
#define CLC2GLS3_G4D2T_value_mask                0x8
#define CLC2GLS3_G4D2T_clear_mask                0xF7

#define CLC2GLS3_G4D3N                           0x4
#define CLC2GLS3_G4D3N_address                   0xF1F
#define CLC2GLS3_G4D3N_position                  0x4
#define CLC2GLS3_G4D3N_size                      0x1
#define CLC2GLS3_G4D3N_value_mask                0x10
#define CLC2GLS3_G4D3N_clear_mask                0xEF

#define LC2G4D3N                                 0x4
#define LC2G4D3N_address                         0xF1F
#define LC2G4D3N_position                        0x4
#define LC2G4D3N_size                            0x1
#define LC2G4D3N_value_mask                      0x10
#define LC2G4D3N_clear_mask                      0xEF

#define CLC2GLS3_G4D3T                           0x5
#define CLC2GLS3_G4D3T_address                   0xF1F
#define CLC2GLS3_G4D3T_position                  0x5
#define CLC2GLS3_G4D3T_size                      0x1
#define CLC2GLS3_G4D3T_value_mask                0x20
#define CLC2GLS3_G4D3T_clear_mask                0xDF

#define LC2G4D3T                                 0x5
#define LC2G4D3T_address                         0xF1F
#define LC2G4D3T_position                        0x5
#define LC2G4D3T_size                            0x1
#define LC2G4D3T_value_mask                      0x20
#define LC2G4D3T_clear_mask                      0xDF

#define LC2G4D4N                                 0x6
#define LC2G4D4N_address                         0xF1F
#define LC2G4D4N_position                        0x6
#define LC2G4D4N_size                            0x1
#define LC2G4D4N_value_mask                      0x40
#define LC2G4D4N_clear_mask                      0xBF

#define CLC2GLS3_G4D4N                           0x6
#define CLC2GLS3_G4D4N_address                   0xF1F
#define CLC2GLS3_G4D4N_position                  0x6
#define CLC2GLS3_G4D4N_size                      0x1
#define CLC2GLS3_G4D4N_value_mask                0x40
#define CLC2GLS3_G4D4N_clear_mask                0xBF

#define CLC2GLS3_G4D4T                           0x7
#define CLC2GLS3_G4D4T_address                   0xF1F
#define CLC2GLS3_G4D4T_position                  0x7
#define CLC2GLS3_G4D4T_size                      0x1
#define CLC2GLS3_G4D4T_value_mask                0x80
#define CLC2GLS3_G4D4T_clear_mask                0x7F

#define LC2G4D4T                                 0x7
#define LC2G4D4T_address                         0xF1F
#define LC2G4D4T_position                        0x7
#define LC2G4D4T_size                            0x1
#define LC2G4D4T_value_mask                      0x80
#define LC2G4D4T_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------------------#
| CLC3CON                                                                                           0xF20 |
#---------------------------------------------------------------------------------------------------------#
| LC3EN | CLC3CON_LCOE | LC3OUT | CLC3CON_LCINTP | CLC3CON_LCINTN | CLC3CON_LCMODE2 | LC3MODE1 | LC3MODE0 |
#---------------------------------------------------------------------------------------------------------#
| 7     | 6            | 5      | 4              | 3              | 2               | 1        | 0        |
#--------------------------------------------------------------------------------------------------------*/

#define CLC3CON                                  0x0
#define CLC3CON_address                          0xF20
#define CLC3CON_position                         0x0
#define CLC3CON_size                             0x8
#define CLC3CON_value_mask                       0xFF
#define CLC3CON_clear_mask                       0x0

#define LC3MODE                                  0x0
#define LC3MODE_address                          0xF20
#define LC3MODE_position                         0x0
#define LC3MODE_size                             0x3
#define LC3MODE_value_mask                       0x7
#define LC3MODE_clear_mask                       0xF8

#define CLC3CON_LCMODE0                          0x0
#define CLC3CON_LCMODE0_address                  0xF20
#define CLC3CON_LCMODE0_position                 0x0
#define CLC3CON_LCMODE0_size                     0x1
#define CLC3CON_LCMODE0_value_mask               0x1
#define CLC3CON_LCMODE0_clear_mask               0xFE

#define LC3MODE0                                 0x0
#define LC3MODE0_address                         0xF20
#define LC3MODE0_position                        0x0
#define LC3MODE0_size                            0x1
#define LC3MODE0_value_mask                      0x1
#define LC3MODE0_clear_mask                      0xFE

#define CLC3CON_LCMODE1                          0x1
#define CLC3CON_LCMODE1_address                  0xF20
#define CLC3CON_LCMODE1_position                 0x1
#define CLC3CON_LCMODE1_size                     0x1
#define CLC3CON_LCMODE1_value_mask               0x2
#define CLC3CON_LCMODE1_clear_mask               0xFD

#define LC3MODE1                                 0x1
#define LC3MODE1_address                         0xF20
#define LC3MODE1_position                        0x1
#define LC3MODE1_size                            0x1
#define LC3MODE1_value_mask                      0x2
#define LC3MODE1_clear_mask                      0xFD

#define CLC3CON_LCMODE2                          0x2
#define CLC3CON_LCMODE2_address                  0xF20
#define CLC3CON_LCMODE2_position                 0x2
#define CLC3CON_LCMODE2_size                     0x1
#define CLC3CON_LCMODE2_value_mask               0x4
#define CLC3CON_LCMODE2_clear_mask               0xFB

#define LC3MODE2                                 0x2
#define LC3MODE2_address                         0xF20
#define LC3MODE2_position                        0x2
#define LC3MODE2_size                            0x1
#define LC3MODE2_value_mask                      0x4
#define LC3MODE2_clear_mask                      0xFB

#define LC3INTN                                  0x3
#define LC3INTN_address                          0xF20
#define LC3INTN_position                         0x3
#define LC3INTN_size                             0x1
#define LC3INTN_value_mask                       0x8
#define LC3INTN_clear_mask                       0xF7

#define CLC3CON_LCINTN                           0x3
#define CLC3CON_LCINTN_address                   0xF20
#define CLC3CON_LCINTN_position                  0x3
#define CLC3CON_LCINTN_size                      0x1
#define CLC3CON_LCINTN_value_mask                0x8
#define CLC3CON_LCINTN_clear_mask                0xF7

#define LC3INTP                                  0x4
#define LC3INTP_address                          0xF20
#define LC3INTP_position                         0x4
#define LC3INTP_size                             0x1
#define LC3INTP_value_mask                       0x10
#define LC3INTP_clear_mask                       0xEF

#define CLC3CON_LCINTP                           0x4
#define CLC3CON_LCINTP_address                   0xF20
#define CLC3CON_LCINTP_position                  0x4
#define CLC3CON_LCINTP_size                      0x1
#define CLC3CON_LCINTP_value_mask                0x10
#define CLC3CON_LCINTP_clear_mask                0xEF

#define CLC3CON_LCOUT                            0x5
#define CLC3CON_LCOUT_address                    0xF20
#define CLC3CON_LCOUT_position                   0x5
#define CLC3CON_LCOUT_size                       0x1
#define CLC3CON_LCOUT_value_mask                 0x20
#define CLC3CON_LCOUT_clear_mask                 0xDF

#define LC3OUT                                   0x5
#define LC3OUT_address                           0xF20
#define LC3OUT_position                          0x5
#define LC3OUT_size                              0x1
#define LC3OUT_value_mask                        0x20
#define LC3OUT_clear_mask                        0xDF

#define CLC3CON_LCOE                             0x6
#define CLC3CON_LCOE_address                     0xF20
#define CLC3CON_LCOE_position                    0x6
#define CLC3CON_LCOE_size                        0x1
#define CLC3CON_LCOE_value_mask                  0x40
#define CLC3CON_LCOE_clear_mask                  0xBF

#define LC3OE                                    0x6
#define LC3OE_address                            0xF20
#define LC3OE_position                           0x6
#define LC3OE_size                               0x1
#define LC3OE_value_mask                         0x40
#define LC3OE_clear_mask                         0xBF

#define LC3EN                                    0x7
#define LC3EN_address                            0xF20
#define LC3EN_position                           0x7
#define LC3EN_size                               0x1
#define LC3EN_value_mask                         0x80
#define LC3EN_clear_mask                         0x7F

#define CLC3CON_LCEN                             0x7
#define CLC3CON_LCEN_address                     0xF20
#define CLC3CON_LCEN_position                    0x7
#define CLC3CON_LCEN_size                        0x1
#define CLC3CON_LCEN_value_mask                  0x80
#define CLC3CON_LCEN_clear_mask                  0x7F


/*-------------------------------------------------------------------------#
| CLC3POL                                                            0xF21 |
#--------------------------------------------------------------------------#
| LC3POL | - | - | - | LC3G4POL | CLC3POL_G3POL | CLC3POL_G2POL | LC3G1POL |
#--------------------------------------------------------------------------#
| 7      | 6 | 5 | 4 | 3        | 2             | 1             | 0        |
#-------------------------------------------------------------------------*/

#define CLC3POL                                  0x0
#define CLC3POL_address                          0xF21
#define CLC3POL_position                         0x0
#define CLC3POL_size                             0x8
#define CLC3POL_value_mask                       0xFF
#define CLC3POL_clear_mask                       0x0

#define LC3G1POL                                 0x0
#define LC3G1POL_address                         0xF21
#define LC3G1POL_position                        0x0
#define LC3G1POL_size                            0x1
#define LC3G1POL_value_mask                      0x1
#define LC3G1POL_clear_mask                      0xFE

#define CLC3POL_G1POL                            0x0
#define CLC3POL_G1POL_address                    0xF21
#define CLC3POL_G1POL_position                   0x0
#define CLC3POL_G1POL_size                       0x1
#define CLC3POL_G1POL_value_mask                 0x1
#define CLC3POL_G1POL_clear_mask                 0xFE

#define LC3G2POL                                 0x1
#define LC3G2POL_address                         0xF21
#define LC3G2POL_position                        0x1
#define LC3G2POL_size                            0x1
#define LC3G2POL_value_mask                      0x2
#define LC3G2POL_clear_mask                      0xFD

#define CLC3POL_G2POL                            0x1
#define CLC3POL_G2POL_address                    0xF21
#define CLC3POL_G2POL_position                   0x1
#define CLC3POL_G2POL_size                       0x1
#define CLC3POL_G2POL_value_mask                 0x2
#define CLC3POL_G2POL_clear_mask                 0xFD

#define CLC3POL_G3POL                            0x2
#define CLC3POL_G3POL_address                    0xF21
#define CLC3POL_G3POL_position                   0x2
#define CLC3POL_G3POL_size                       0x1
#define CLC3POL_G3POL_value_mask                 0x4
#define CLC3POL_G3POL_clear_mask                 0xFB

#define LC3G3POL                                 0x2
#define LC3G3POL_address                         0xF21
#define LC3G3POL_position                        0x2
#define LC3G3POL_size                            0x1
#define LC3G3POL_value_mask                      0x4
#define LC3G3POL_clear_mask                      0xFB

#define LC3G4POL                                 0x3
#define LC3G4POL_address                         0xF21
#define LC3G4POL_position                        0x3
#define LC3G4POL_size                            0x1
#define LC3G4POL_value_mask                      0x8
#define LC3G4POL_clear_mask                      0xF7

#define CLC3POL_G4POL                            0x3
#define CLC3POL_G4POL_address                    0xF21
#define CLC3POL_G4POL_position                   0x3
#define CLC3POL_G4POL_size                       0x1
#define CLC3POL_G4POL_value_mask                 0x8
#define CLC3POL_G4POL_clear_mask                 0xF7

#define LC3POL                                   0x7
#define LC3POL_address                           0xF21
#define LC3POL_position                          0x7
#define LC3POL_size                              0x1
#define LC3POL_value_mask                        0x80
#define LC3POL_clear_mask                        0x7F

#define CLC3POL_POL                              0x7
#define CLC3POL_POL_address                      0xF21
#define CLC3POL_POL_position                     0x7
#define CLC3POL_POL_size                         0x1
#define CLC3POL_POL_value_mask                   0x80
#define CLC3POL_POL_clear_mask                   0x7F


/*------------------------------------------------------------------------------------#
| CLC3SEL0                                                                      0xF22 |
#-------------------------------------------------------------------------------------#
| - | CLC3SEL0_D2S2 | CLC3SEL0_D2S1 | CLC3SEL0_D2S0 | - | LC3D1S2 | LC3D1S1 | LC3D1S0 |
#-------------------------------------------------------------------------------------#
| 7 | 6             | 5             | 4             | 3 | 2       | 1       | 0       |
#------------------------------------------------------------------------------------*/

#define CLC3SEL0                                 0x0
#define CLC3SEL0_address                         0xF22
#define CLC3SEL0_position                        0x0
#define CLC3SEL0_size                            0x8
#define CLC3SEL0_value_mask                      0xFF
#define CLC3SEL0_clear_mask                      0x0

#define LC3D1S0                                  0x0
#define LC3D1S0_address                          0xF22
#define LC3D1S0_position                         0x0
#define LC3D1S0_size                             0x1
#define LC3D1S0_value_mask                       0x1
#define LC3D1S0_clear_mask                       0xFE

#define LC3D1S                                   0x0
#define LC3D1S_address                           0xF22
#define LC3D1S_position                          0x0
#define LC3D1S_size                              0x3
#define LC3D1S_value_mask                        0x7
#define LC3D1S_clear_mask                        0xF8

#define CLC3SEL0_D1S0                            0x0
#define CLC3SEL0_D1S0_address                    0xF22
#define CLC3SEL0_D1S0_position                   0x0
#define CLC3SEL0_D1S0_size                       0x1
#define CLC3SEL0_D1S0_value_mask                 0x1
#define CLC3SEL0_D1S0_clear_mask                 0xFE

#define LC3D1S1                                  0x1
#define LC3D1S1_address                          0xF22
#define LC3D1S1_position                         0x1
#define LC3D1S1_size                             0x1
#define LC3D1S1_value_mask                       0x2
#define LC3D1S1_clear_mask                       0xFD

#define CLC3SEL0_D1S1                            0x1
#define CLC3SEL0_D1S1_address                    0xF22
#define CLC3SEL0_D1S1_position                   0x1
#define CLC3SEL0_D1S1_size                       0x1
#define CLC3SEL0_D1S1_value_mask                 0x2
#define CLC3SEL0_D1S1_clear_mask                 0xFD

#define LC3D1S2                                  0x2
#define LC3D1S2_address                          0xF22
#define LC3D1S2_position                         0x2
#define LC3D1S2_size                             0x1
#define LC3D1S2_value_mask                       0x4
#define LC3D1S2_clear_mask                       0xFB

#define CLC3SEL0_D1S2                            0x2
#define CLC3SEL0_D1S2_address                    0xF22
#define CLC3SEL0_D1S2_position                   0x2
#define CLC3SEL0_D1S2_size                       0x1
#define CLC3SEL0_D1S2_value_mask                 0x4
#define CLC3SEL0_D1S2_clear_mask                 0xFB

#define LC3D2S                                   0x4
#define LC3D2S_address                           0xF22
#define LC3D2S_position                          0x4
#define LC3D2S_size                              0x3
#define LC3D2S_value_mask                        0x70
#define LC3D2S_clear_mask                        0x8F

#define CLC3SEL0_D2S0                            0x4
#define CLC3SEL0_D2S0_address                    0xF22
#define CLC3SEL0_D2S0_position                   0x4
#define CLC3SEL0_D2S0_size                       0x1
#define CLC3SEL0_D2S0_value_mask                 0x10
#define CLC3SEL0_D2S0_clear_mask                 0xEF

#define LC3D2S0                                  0x4
#define LC3D2S0_address                          0xF22
#define LC3D2S0_position                         0x4
#define LC3D2S0_size                             0x1
#define LC3D2S0_value_mask                       0x10
#define LC3D2S0_clear_mask                       0xEF

#define CLC3SEL0_D2S1                            0x5
#define CLC3SEL0_D2S1_address                    0xF22
#define CLC3SEL0_D2S1_position                   0x5
#define CLC3SEL0_D2S1_size                       0x1
#define CLC3SEL0_D2S1_value_mask                 0x20
#define CLC3SEL0_D2S1_clear_mask                 0xDF

#define LC3D2S1                                  0x5
#define LC3D2S1_address                          0xF22
#define LC3D2S1_position                         0x5
#define LC3D2S1_size                             0x1
#define LC3D2S1_value_mask                       0x20
#define LC3D2S1_clear_mask                       0xDF

#define CLC3SEL0_D2S2                            0x6
#define CLC3SEL0_D2S2_address                    0xF22
#define CLC3SEL0_D2S2_position                   0x6
#define CLC3SEL0_D2S2_size                       0x1
#define CLC3SEL0_D2S2_value_mask                 0x40
#define CLC3SEL0_D2S2_clear_mask                 0xBF

#define LC3D2S2                                  0x6
#define LC3D2S2_address                          0xF22
#define LC3D2S2_position                         0x6
#define LC3D2S2_size                             0x1
#define LC3D2S2_value_mask                       0x40
#define LC3D2S2_clear_mask                       0xBF


/*------------------------------------------------------------------------------#
| CLC3SEL1                                                                0xF23 |
#-------------------------------------------------------------------------------#
| - | LC3D4S2 | LC3D4S1 | LC3D4S0 | - | CLC3SEL1_D3S2 | CLC3SEL1_D3S1 | LC3D3S0 |
#-------------------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3 | 2             | 1             | 0       |
#------------------------------------------------------------------------------*/

#define CLC3SEL1                                 0x0
#define CLC3SEL1_address                         0xF23
#define CLC3SEL1_position                        0x0
#define CLC3SEL1_size                            0x8
#define CLC3SEL1_value_mask                      0xFF
#define CLC3SEL1_clear_mask                      0x0

#define LC3D3S                                   0x0
#define LC3D3S_address                           0xF23
#define LC3D3S_position                          0x0
#define LC3D3S_size                              0x3
#define LC3D3S_value_mask                        0x7
#define LC3D3S_clear_mask                        0xF8

#define CLC3SEL1_D3S0                            0x0
#define CLC3SEL1_D3S0_address                    0xF23
#define CLC3SEL1_D3S0_position                   0x0
#define CLC3SEL1_D3S0_size                       0x1
#define CLC3SEL1_D3S0_value_mask                 0x1
#define CLC3SEL1_D3S0_clear_mask                 0xFE

#define LC3D3S0                                  0x0
#define LC3D3S0_address                          0xF23
#define LC3D3S0_position                         0x0
#define LC3D3S0_size                             0x1
#define LC3D3S0_value_mask                       0x1
#define LC3D3S0_clear_mask                       0xFE

#define CLC3SEL1_D3S1                            0x1
#define CLC3SEL1_D3S1_address                    0xF23
#define CLC3SEL1_D3S1_position                   0x1
#define CLC3SEL1_D3S1_size                       0x1
#define CLC3SEL1_D3S1_value_mask                 0x2
#define CLC3SEL1_D3S1_clear_mask                 0xFD

#define LC3D3S1                                  0x1
#define LC3D3S1_address                          0xF23
#define LC3D3S1_position                         0x1
#define LC3D3S1_size                             0x1
#define LC3D3S1_value_mask                       0x2
#define LC3D3S1_clear_mask                       0xFD

#define CLC3SEL1_D3S2                            0x2
#define CLC3SEL1_D3S2_address                    0xF23
#define CLC3SEL1_D3S2_position                   0x2
#define CLC3SEL1_D3S2_size                       0x1
#define CLC3SEL1_D3S2_value_mask                 0x4
#define CLC3SEL1_D3S2_clear_mask                 0xFB

#define LC3D3S2                                  0x2
#define LC3D3S2_address                          0xF23
#define LC3D3S2_position                         0x2
#define LC3D3S2_size                             0x1
#define LC3D3S2_value_mask                       0x4
#define LC3D3S2_clear_mask                       0xFB

#define LC3D4S0                                  0x4
#define LC3D4S0_address                          0xF23
#define LC3D4S0_position                         0x4
#define LC3D4S0_size                             0x1
#define LC3D4S0_value_mask                       0x10
#define LC3D4S0_clear_mask                       0xEF

#define LC3D4S                                   0x4
#define LC3D4S_address                           0xF23
#define LC3D4S_position                          0x4
#define LC3D4S_size                              0x3
#define LC3D4S_value_mask                        0x70
#define LC3D4S_clear_mask                        0x8F

#define CLC3SEL1_D4S0                            0x4
#define CLC3SEL1_D4S0_address                    0xF23
#define CLC3SEL1_D4S0_position                   0x4
#define CLC3SEL1_D4S0_size                       0x1
#define CLC3SEL1_D4S0_value_mask                 0x10
#define CLC3SEL1_D4S0_clear_mask                 0xEF

#define LC3D4S1                                  0x5
#define LC3D4S1_address                          0xF23
#define LC3D4S1_position                         0x5
#define LC3D4S1_size                             0x1
#define LC3D4S1_value_mask                       0x20
#define LC3D4S1_clear_mask                       0xDF

#define CLC3SEL1_D4S1                            0x5
#define CLC3SEL1_D4S1_address                    0xF23
#define CLC3SEL1_D4S1_position                   0x5
#define CLC3SEL1_D4S1_size                       0x1
#define CLC3SEL1_D4S1_value_mask                 0x20
#define CLC3SEL1_D4S1_clear_mask                 0xDF

#define LC3D4S2                                  0x6
#define LC3D4S2_address                          0xF23
#define LC3D4S2_position                         0x6
#define LC3D4S2_size                             0x1
#define LC3D4S2_value_mask                       0x40
#define LC3D4S2_clear_mask                       0xBF

#define CLC3SEL1_D4S2                            0x6
#define CLC3SEL1_D4S2_address                    0xF23
#define CLC3SEL1_D4S2_position                   0x6
#define CLC3SEL1_D4S2_size                       0x1
#define CLC3SEL1_D4S2_value_mask                 0x40
#define CLC3SEL1_D4S2_clear_mask                 0xBF


/*------------------------------------------------------------------------------------------------------#
| CLC3GLS0                                                                                        0xF24 |
#-------------------------------------------------------------------------------------------------------#
| CLC3GLS0_D4T | LC3G1D4N | LC3G1D3T | CLC3GLS0_D3N | CLC3GLS0_D2T | LC3G1D2N | LC3G1D1T | CLC3GLS0_D1N |
#-------------------------------------------------------------------------------------------------------#
| 7            | 6        | 5        | 4            | 3            | 2        | 1        | 0            |
#------------------------------------------------------------------------------------------------------*/

#define CLC3GLS0                                 0x0
#define CLC3GLS0_address                         0xF24
#define CLC3GLS0_position                        0x0
#define CLC3GLS0_size                            0x8
#define CLC3GLS0_value_mask                      0xFF
#define CLC3GLS0_clear_mask                      0x0

#define CLC3GLS0_D1N                             0x0
#define CLC3GLS0_D1N_address                     0xF24
#define CLC3GLS0_D1N_position                    0x0
#define CLC3GLS0_D1N_size                        0x1
#define CLC3GLS0_D1N_value_mask                  0x1
#define CLC3GLS0_D1N_clear_mask                  0xFE

#define LC3G1D1N                                 0x0
#define LC3G1D1N_address                         0xF24
#define LC3G1D1N_position                        0x0
#define LC3G1D1N_size                            0x1
#define LC3G1D1N_value_mask                      0x1
#define LC3G1D1N_clear_mask                      0xFE

#define LC3G1D1T                                 0x1
#define LC3G1D1T_address                         0xF24
#define LC3G1D1T_position                        0x1
#define LC3G1D1T_size                            0x1
#define LC3G1D1T_value_mask                      0x2
#define LC3G1D1T_clear_mask                      0xFD

#define CLC3GLS0_D1T                             0x1
#define CLC3GLS0_D1T_address                     0xF24
#define CLC3GLS0_D1T_position                    0x1
#define CLC3GLS0_D1T_size                        0x1
#define CLC3GLS0_D1T_value_mask                  0x2
#define CLC3GLS0_D1T_clear_mask                  0xFD

#define LC3G1D2N                                 0x2
#define LC3G1D2N_address                         0xF24
#define LC3G1D2N_position                        0x2
#define LC3G1D2N_size                            0x1
#define LC3G1D2N_value_mask                      0x4
#define LC3G1D2N_clear_mask                      0xFB

#define CLC3GLS0_D2N                             0x2
#define CLC3GLS0_D2N_address                     0xF24
#define CLC3GLS0_D2N_position                    0x2
#define CLC3GLS0_D2N_size                        0x1
#define CLC3GLS0_D2N_value_mask                  0x4
#define CLC3GLS0_D2N_clear_mask                  0xFB

#define CLC3GLS0_D2T                             0x3
#define CLC3GLS0_D2T_address                     0xF24
#define CLC3GLS0_D2T_position                    0x3
#define CLC3GLS0_D2T_size                        0x1
#define CLC3GLS0_D2T_value_mask                  0x8
#define CLC3GLS0_D2T_clear_mask                  0xF7

#define LC3G1D2T                                 0x3
#define LC3G1D2T_address                         0xF24
#define LC3G1D2T_position                        0x3
#define LC3G1D2T_size                            0x1
#define LC3G1D2T_value_mask                      0x8
#define LC3G1D2T_clear_mask                      0xF7

#define CLC3GLS0_D3N                             0x4
#define CLC3GLS0_D3N_address                     0xF24
#define CLC3GLS0_D3N_position                    0x4
#define CLC3GLS0_D3N_size                        0x1
#define CLC3GLS0_D3N_value_mask                  0x10
#define CLC3GLS0_D3N_clear_mask                  0xEF

#define LC3G1D3N                                 0x4
#define LC3G1D3N_address                         0xF24
#define LC3G1D3N_position                        0x4
#define LC3G1D3N_size                            0x1
#define LC3G1D3N_value_mask                      0x10
#define LC3G1D3N_clear_mask                      0xEF

#define LC3G1D3T                                 0x5
#define LC3G1D3T_address                         0xF24
#define LC3G1D3T_position                        0x5
#define LC3G1D3T_size                            0x1
#define LC3G1D3T_value_mask                      0x20
#define LC3G1D3T_clear_mask                      0xDF

#define CLC3GLS0_D3T                             0x5
#define CLC3GLS0_D3T_address                     0xF24
#define CLC3GLS0_D3T_position                    0x5
#define CLC3GLS0_D3T_size                        0x1
#define CLC3GLS0_D3T_value_mask                  0x20
#define CLC3GLS0_D3T_clear_mask                  0xDF

#define CLC3GLS0_D4N                             0x6
#define CLC3GLS0_D4N_address                     0xF24
#define CLC3GLS0_D4N_position                    0x6
#define CLC3GLS0_D4N_size                        0x1
#define CLC3GLS0_D4N_value_mask                  0x40
#define CLC3GLS0_D4N_clear_mask                  0xBF

#define LC3G1D4N                                 0x6
#define LC3G1D4N_address                         0xF24
#define LC3G1D4N_position                        0x6
#define LC3G1D4N_size                            0x1
#define LC3G1D4N_value_mask                      0x40
#define LC3G1D4N_clear_mask                      0xBF

#define CLC3GLS0_D4T                             0x7
#define CLC3GLS0_D4T_address                     0xF24
#define CLC3GLS0_D4T_position                    0x7
#define CLC3GLS0_D4T_size                        0x1
#define CLC3GLS0_D4T_value_mask                  0x80
#define CLC3GLS0_D4T_clear_mask                  0x7F

#define LC3G1D4T                                 0x7
#define LC3G1D4T_address                         0xF24
#define LC3G1D4T_position                        0x7
#define LC3G1D4T_size                            0x1
#define LC3G1D4T_value_mask                      0x80
#define LC3G1D4T_clear_mask                      0x7F


/*------------------------------------------------------------------------------------------------------#
| CLC3GLS1                                                                                        0xF25 |
#-------------------------------------------------------------------------------------------------------#
| LC3G2D4T | CLC3GLS1_D4N | CLC3GLS1_D3T | LC3G2D3N | LC3G2D2T | CLC3GLS1_D2N | CLC3GLS1_D1T | LC3G2D1N |
#-------------------------------------------------------------------------------------------------------#
| 7        | 6            | 5            | 4        | 3        | 2            | 1            | 0        |
#------------------------------------------------------------------------------------------------------*/

#define CLC3GLS1                                 0x0
#define CLC3GLS1_address                         0xF25
#define CLC3GLS1_position                        0x0
#define CLC3GLS1_size                            0x8
#define CLC3GLS1_value_mask                      0xFF
#define CLC3GLS1_clear_mask                      0x0

#define LC3G2D1N                                 0x0
#define LC3G2D1N_address                         0xF25
#define LC3G2D1N_position                        0x0
#define LC3G2D1N_size                            0x1
#define LC3G2D1N_value_mask                      0x1
#define LC3G2D1N_clear_mask                      0xFE

#define CLC3GLS1_D1N                             0x0
#define CLC3GLS1_D1N_address                     0xF25
#define CLC3GLS1_D1N_position                    0x0
#define CLC3GLS1_D1N_size                        0x1
#define CLC3GLS1_D1N_value_mask                  0x1
#define CLC3GLS1_D1N_clear_mask                  0xFE

#define CLC3GLS1_D1T                             0x1
#define CLC3GLS1_D1T_address                     0xF25
#define CLC3GLS1_D1T_position                    0x1
#define CLC3GLS1_D1T_size                        0x1
#define CLC3GLS1_D1T_value_mask                  0x2
#define CLC3GLS1_D1T_clear_mask                  0xFD

#define LC3G2D1T                                 0x1
#define LC3G2D1T_address                         0xF25
#define LC3G2D1T_position                        0x1
#define LC3G2D1T_size                            0x1
#define LC3G2D1T_value_mask                      0x2
#define LC3G2D1T_clear_mask                      0xFD

#define LC3G2D2N                                 0x2
#define LC3G2D2N_address                         0xF25
#define LC3G2D2N_position                        0x2
#define LC3G2D2N_size                            0x1
#define LC3G2D2N_value_mask                      0x4
#define LC3G2D2N_clear_mask                      0xFB

#define CLC3GLS1_D2N                             0x2
#define CLC3GLS1_D2N_address                     0xF25
#define CLC3GLS1_D2N_position                    0x2
#define CLC3GLS1_D2N_size                        0x1
#define CLC3GLS1_D2N_value_mask                  0x4
#define CLC3GLS1_D2N_clear_mask                  0xFB

#define LC3G2D2T                                 0x3
#define LC3G2D2T_address                         0xF25
#define LC3G2D2T_position                        0x3
#define LC3G2D2T_size                            0x1
#define LC3G2D2T_value_mask                      0x8
#define LC3G2D2T_clear_mask                      0xF7

#define CLC3GLS1_D2T                             0x3
#define CLC3GLS1_D2T_address                     0xF25
#define CLC3GLS1_D2T_position                    0x3
#define CLC3GLS1_D2T_size                        0x1
#define CLC3GLS1_D2T_value_mask                  0x8
#define CLC3GLS1_D2T_clear_mask                  0xF7

#define LC3G2D3N                                 0x4
#define LC3G2D3N_address                         0xF25
#define LC3G2D3N_position                        0x4
#define LC3G2D3N_size                            0x1
#define LC3G2D3N_value_mask                      0x10
#define LC3G2D3N_clear_mask                      0xEF

#define CLC3GLS1_D3N                             0x4
#define CLC3GLS1_D3N_address                     0xF25
#define CLC3GLS1_D3N_position                    0x4
#define CLC3GLS1_D3N_size                        0x1
#define CLC3GLS1_D3N_value_mask                  0x10
#define CLC3GLS1_D3N_clear_mask                  0xEF

#define CLC3GLS1_D3T                             0x5
#define CLC3GLS1_D3T_address                     0xF25
#define CLC3GLS1_D3T_position                    0x5
#define CLC3GLS1_D3T_size                        0x1
#define CLC3GLS1_D3T_value_mask                  0x20
#define CLC3GLS1_D3T_clear_mask                  0xDF

#define LC3G2D3T                                 0x5
#define LC3G2D3T_address                         0xF25
#define LC3G2D3T_position                        0x5
#define LC3G2D3T_size                            0x1
#define LC3G2D3T_value_mask                      0x20
#define LC3G2D3T_clear_mask                      0xDF

#define LC3G2D4N                                 0x6
#define LC3G2D4N_address                         0xF25
#define LC3G2D4N_position                        0x6
#define LC3G2D4N_size                            0x1
#define LC3G2D4N_value_mask                      0x40
#define LC3G2D4N_clear_mask                      0xBF

#define CLC3GLS1_D4N                             0x6
#define CLC3GLS1_D4N_address                     0xF25
#define CLC3GLS1_D4N_position                    0x6
#define CLC3GLS1_D4N_size                        0x1
#define CLC3GLS1_D4N_value_mask                  0x40
#define CLC3GLS1_D4N_clear_mask                  0xBF

#define LC3G2D4T                                 0x7
#define LC3G2D4T_address                         0xF25
#define LC3G2D4T_position                        0x7
#define LC3G2D4T_size                            0x1
#define LC3G2D4T_value_mask                      0x80
#define LC3G2D4T_clear_mask                      0x7F

#define CLC3GLS1_D4T                             0x7
#define CLC3GLS1_D4T_address                     0xF25
#define CLC3GLS1_D4T_position                    0x7
#define CLC3GLS1_D4T_size                        0x1
#define CLC3GLS1_D4T_value_mask                  0x80
#define CLC3GLS1_D4T_clear_mask                  0x7F


/*--------------------------------------------------------------------------------------------------#
| CLC3GLS2                                                                                    0xF26 |
#---------------------------------------------------------------------------------------------------#
| LC3G3D4T | CLC3GLS2_D4N | LC3G3D3T | LC3G3D3N | CLC3GLS2_D2T | LC3G3D2N | LC3G3D1T | CLC3GLS2_D1N |
#---------------------------------------------------------------------------------------------------#
| 7        | 6            | 5        | 4        | 3            | 2        | 1        | 0            |
#--------------------------------------------------------------------------------------------------*/

#define CLC3GLS2                                 0x0
#define CLC3GLS2_address                         0xF26
#define CLC3GLS2_position                        0x0
#define CLC3GLS2_size                            0x8
#define CLC3GLS2_value_mask                      0xFF
#define CLC3GLS2_clear_mask                      0x0

#define LC3G3D1N                                 0x0
#define LC3G3D1N_address                         0xF26
#define LC3G3D1N_position                        0x0
#define LC3G3D1N_size                            0x1
#define LC3G3D1N_value_mask                      0x1
#define LC3G3D1N_clear_mask                      0xFE

#define CLC3GLS2_D1N                             0x0
#define CLC3GLS2_D1N_address                     0xF26
#define CLC3GLS2_D1N_position                    0x0
#define CLC3GLS2_D1N_size                        0x1
#define CLC3GLS2_D1N_value_mask                  0x1
#define CLC3GLS2_D1N_clear_mask                  0xFE

#define LC3G3D1T                                 0x1
#define LC3G3D1T_address                         0xF26
#define LC3G3D1T_position                        0x1
#define LC3G3D1T_size                            0x1
#define LC3G3D1T_value_mask                      0x2
#define LC3G3D1T_clear_mask                      0xFD

#define CLC3GLS2_D1T                             0x1
#define CLC3GLS2_D1T_address                     0xF26
#define CLC3GLS2_D1T_position                    0x1
#define CLC3GLS2_D1T_size                        0x1
#define CLC3GLS2_D1T_value_mask                  0x2
#define CLC3GLS2_D1T_clear_mask                  0xFD

#define CLC3GLS2_D2N                             0x2
#define CLC3GLS2_D2N_address                     0xF26
#define CLC3GLS2_D2N_position                    0x2
#define CLC3GLS2_D2N_size                        0x1
#define CLC3GLS2_D2N_value_mask                  0x4
#define CLC3GLS2_D2N_clear_mask                  0xFB

#define LC3G3D2N                                 0x2
#define LC3G3D2N_address                         0xF26
#define LC3G3D2N_position                        0x2
#define LC3G3D2N_size                            0x1
#define LC3G3D2N_value_mask                      0x4
#define LC3G3D2N_clear_mask                      0xFB

#define CLC3GLS2_D2T                             0x3
#define CLC3GLS2_D2T_address                     0xF26
#define CLC3GLS2_D2T_position                    0x3
#define CLC3GLS2_D2T_size                        0x1
#define CLC3GLS2_D2T_value_mask                  0x8
#define CLC3GLS2_D2T_clear_mask                  0xF7

#define LC3G3D2T                                 0x3
#define LC3G3D2T_address                         0xF26
#define LC3G3D2T_position                        0x3
#define LC3G3D2T_size                            0x1
#define LC3G3D2T_value_mask                      0x8
#define LC3G3D2T_clear_mask                      0xF7

#define CLC3GLS2_D3N                             0x4
#define CLC3GLS2_D3N_address                     0xF26
#define CLC3GLS2_D3N_position                    0x4
#define CLC3GLS2_D3N_size                        0x1
#define CLC3GLS2_D3N_value_mask                  0x10
#define CLC3GLS2_D3N_clear_mask                  0xEF

#define LC3G3D3N                                 0x4
#define LC3G3D3N_address                         0xF26
#define LC3G3D3N_position                        0x4
#define LC3G3D3N_size                            0x1
#define LC3G3D3N_value_mask                      0x10
#define LC3G3D3N_clear_mask                      0xEF

#define LC3G3D3T                                 0x5
#define LC3G3D3T_address                         0xF26
#define LC3G3D3T_position                        0x5
#define LC3G3D3T_size                            0x1
#define LC3G3D3T_value_mask                      0x20
#define LC3G3D3T_clear_mask                      0xDF

#define CLC3GLS2_D3T                             0x5
#define CLC3GLS2_D3T_address                     0xF26
#define CLC3GLS2_D3T_position                    0x5
#define CLC3GLS2_D3T_size                        0x1
#define CLC3GLS2_D3T_value_mask                  0x20
#define CLC3GLS2_D3T_clear_mask                  0xDF

#define CLC3GLS2_D4N                             0x6
#define CLC3GLS2_D4N_address                     0xF26
#define CLC3GLS2_D4N_position                    0x6
#define CLC3GLS2_D4N_size                        0x1
#define CLC3GLS2_D4N_value_mask                  0x40
#define CLC3GLS2_D4N_clear_mask                  0xBF

#define LC3G3D4N                                 0x6
#define LC3G3D4N_address                         0xF26
#define LC3G3D4N_position                        0x6
#define LC3G3D4N_size                            0x1
#define LC3G3D4N_value_mask                      0x40
#define LC3G3D4N_clear_mask                      0xBF

#define CLC3GLS2_D4T                             0x7
#define CLC3GLS2_D4T_address                     0xF26
#define CLC3GLS2_D4T_position                    0x7
#define CLC3GLS2_D4T_size                        0x1
#define CLC3GLS2_D4T_value_mask                  0x80
#define CLC3GLS2_D4T_clear_mask                  0x7F

#define LC3G3D4T                                 0x7
#define LC3G3D4T_address                         0xF26
#define LC3G3D4T_position                        0x7
#define LC3G3D4T_size                            0x1
#define LC3G3D4T_value_mask                      0x80
#define LC3G3D4T_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------------------------------#
| CLC3GLS3                                                                                                      0xF27 |
#---------------------------------------------------------------------------------------------------------------------#
| LC3G4D4T | CLC3GLS3_G4D4N | CLC3GLS3_G4D3T | LC3G4D3N | CLC3GLS3_G4D2T | LC3G4D2N | CLC3GLS3_G4D1T | CLC3GLS3_G4D1N |
#---------------------------------------------------------------------------------------------------------------------#
| 7        | 6              | 5              | 4        | 3              | 2        | 1              | 0              |
#--------------------------------------------------------------------------------------------------------------------*/

#define CLC3GLS3                                 0x0
#define CLC3GLS3_address                         0xF27
#define CLC3GLS3_position                        0x0
#define CLC3GLS3_size                            0x8
#define CLC3GLS3_value_mask                      0xFF
#define CLC3GLS3_clear_mask                      0x0

#define LC3G4D1N                                 0x0
#define LC3G4D1N_address                         0xF27
#define LC3G4D1N_position                        0x0
#define LC3G4D1N_size                            0x1
#define LC3G4D1N_value_mask                      0x1
#define LC3G4D1N_clear_mask                      0xFE

#define CLC3GLS3_G4D1N                           0x0
#define CLC3GLS3_G4D1N_address                   0xF27
#define CLC3GLS3_G4D1N_position                  0x0
#define CLC3GLS3_G4D1N_size                      0x1
#define CLC3GLS3_G4D1N_value_mask                0x1
#define CLC3GLS3_G4D1N_clear_mask                0xFE

#define LC3G4D1T                                 0x1
#define LC3G4D1T_address                         0xF27
#define LC3G4D1T_position                        0x1
#define LC3G4D1T_size                            0x1
#define LC3G4D1T_value_mask                      0x2
#define LC3G4D1T_clear_mask                      0xFD

#define CLC3GLS3_G4D1T                           0x1
#define CLC3GLS3_G4D1T_address                   0xF27
#define CLC3GLS3_G4D1T_position                  0x1
#define CLC3GLS3_G4D1T_size                      0x1
#define CLC3GLS3_G4D1T_value_mask                0x2
#define CLC3GLS3_G4D1T_clear_mask                0xFD

#define LC3G4D2N                                 0x2
#define LC3G4D2N_address                         0xF27
#define LC3G4D2N_position                        0x2
#define LC3G4D2N_size                            0x1
#define LC3G4D2N_value_mask                      0x4
#define LC3G4D2N_clear_mask                      0xFB

#define CLC3GLS3_G4D2N                           0x2
#define CLC3GLS3_G4D2N_address                   0xF27
#define CLC3GLS3_G4D2N_position                  0x2
#define CLC3GLS3_G4D2N_size                      0x1
#define CLC3GLS3_G4D2N_value_mask                0x4
#define CLC3GLS3_G4D2N_clear_mask                0xFB

#define CLC3GLS3_G4D2T                           0x3
#define CLC3GLS3_G4D2T_address                   0xF27
#define CLC3GLS3_G4D2T_position                  0x3
#define CLC3GLS3_G4D2T_size                      0x1
#define CLC3GLS3_G4D2T_value_mask                0x8
#define CLC3GLS3_G4D2T_clear_mask                0xF7

#define LC3G4D2T                                 0x3
#define LC3G4D2T_address                         0xF27
#define LC3G4D2T_position                        0x3
#define LC3G4D2T_size                            0x1
#define LC3G4D2T_value_mask                      0x8
#define LC3G4D2T_clear_mask                      0xF7

#define LC3G4D3N                                 0x4
#define LC3G4D3N_address                         0xF27
#define LC3G4D3N_position                        0x4
#define LC3G4D3N_size                            0x1
#define LC3G4D3N_value_mask                      0x10
#define LC3G4D3N_clear_mask                      0xEF

#define CLC3GLS3_G4D3N                           0x4
#define CLC3GLS3_G4D3N_address                   0xF27
#define CLC3GLS3_G4D3N_position                  0x4
#define CLC3GLS3_G4D3N_size                      0x1
#define CLC3GLS3_G4D3N_value_mask                0x10
#define CLC3GLS3_G4D3N_clear_mask                0xEF

#define CLC3GLS3_G4D3T                           0x5
#define CLC3GLS3_G4D3T_address                   0xF27
#define CLC3GLS3_G4D3T_position                  0x5
#define CLC3GLS3_G4D3T_size                      0x1
#define CLC3GLS3_G4D3T_value_mask                0x20
#define CLC3GLS3_G4D3T_clear_mask                0xDF

#define LC3G4D3T                                 0x5
#define LC3G4D3T_address                         0xF27
#define LC3G4D3T_position                        0x5
#define LC3G4D3T_size                            0x1
#define LC3G4D3T_value_mask                      0x20
#define LC3G4D3T_clear_mask                      0xDF

#define LC3G4D4N                                 0x6
#define LC3G4D4N_address                         0xF27
#define LC3G4D4N_position                        0x6
#define LC3G4D4N_size                            0x1
#define LC3G4D4N_value_mask                      0x40
#define LC3G4D4N_clear_mask                      0xBF

#define CLC3GLS3_G4D4N                           0x6
#define CLC3GLS3_G4D4N_address                   0xF27
#define CLC3GLS3_G4D4N_position                  0x6
#define CLC3GLS3_G4D4N_size                      0x1
#define CLC3GLS3_G4D4N_value_mask                0x40
#define CLC3GLS3_G4D4N_clear_mask                0xBF

#define LC3G4D4T                                 0x7
#define LC3G4D4T_address                         0xF27
#define LC3G4D4T_position                        0x7
#define LC3G4D4T_size                            0x1
#define LC3G4D4T_value_mask                      0x80
#define LC3G4D4T_clear_mask                      0x7F

#define CLC3GLS3_G4D4T                           0x7
#define CLC3GLS3_G4D4T_address                   0xF27
#define CLC3GLS3_G4D4T_position                  0x7
#define CLC3GLS3_G4D4T_size                      0x1
#define CLC3GLS3_G4D4T_value_mask                0x80
#define CLC3GLS3_G4D4T_clear_mask                0x7F


/*---------------------------------------------------------------------------------------------------------------#
| CLC4CON                                                                                                  0xF28 |
#----------------------------------------------------------------------------------------------------------------#
| CLC4CON_LCEN | LC4OE | LC4OUT | CLC4CON_LCINTP | LC4INTN | CLC4CON_LCMODE2 | CLC4CON_LCMODE1 | CLC4CON_LCMODE0 |
#----------------------------------------------------------------------------------------------------------------#
| 7            | 6     | 5      | 4              | 3       | 2               | 1               | 0               |
#---------------------------------------------------------------------------------------------------------------*/

#define CLC4CON                                  0x0
#define CLC4CON_address                          0xF28
#define CLC4CON_position                         0x0
#define CLC4CON_size                             0x8
#define CLC4CON_value_mask                       0xFF
#define CLC4CON_clear_mask                       0x0

#define LC4MODE                                  0x0
#define LC4MODE_address                          0xF28
#define LC4MODE_position                         0x0
#define LC4MODE_size                             0x3
#define LC4MODE_value_mask                       0x7
#define LC4MODE_clear_mask                       0xF8

#define LC4MODE0                                 0x0
#define LC4MODE0_address                         0xF28
#define LC4MODE0_position                        0x0
#define LC4MODE0_size                            0x1
#define LC4MODE0_value_mask                      0x1
#define LC4MODE0_clear_mask                      0xFE

#define CLC4CON_LCMODE0                          0x0
#define CLC4CON_LCMODE0_address                  0xF28
#define CLC4CON_LCMODE0_position                 0x0
#define CLC4CON_LCMODE0_size                     0x1
#define CLC4CON_LCMODE0_value_mask               0x1
#define CLC4CON_LCMODE0_clear_mask               0xFE

#define CLC4CON_LCMODE1                          0x1
#define CLC4CON_LCMODE1_address                  0xF28
#define CLC4CON_LCMODE1_position                 0x1
#define CLC4CON_LCMODE1_size                     0x1
#define CLC4CON_LCMODE1_value_mask               0x2
#define CLC4CON_LCMODE1_clear_mask               0xFD

#define LC4MODE1                                 0x1
#define LC4MODE1_address                         0xF28
#define LC4MODE1_position                        0x1
#define LC4MODE1_size                            0x1
#define LC4MODE1_value_mask                      0x2
#define LC4MODE1_clear_mask                      0xFD

#define LC4MODE2                                 0x2
#define LC4MODE2_address                         0xF28
#define LC4MODE2_position                        0x2
#define LC4MODE2_size                            0x1
#define LC4MODE2_value_mask                      0x4
#define LC4MODE2_clear_mask                      0xFB

#define CLC4CON_LCMODE2                          0x2
#define CLC4CON_LCMODE2_address                  0xF28
#define CLC4CON_LCMODE2_position                 0x2
#define CLC4CON_LCMODE2_size                     0x1
#define CLC4CON_LCMODE2_value_mask               0x4
#define CLC4CON_LCMODE2_clear_mask               0xFB

#define CLC4CON_LCINTN                           0x3
#define CLC4CON_LCINTN_address                   0xF28
#define CLC4CON_LCINTN_position                  0x3
#define CLC4CON_LCINTN_size                      0x1
#define CLC4CON_LCINTN_value_mask                0x8
#define CLC4CON_LCINTN_clear_mask                0xF7

#define LC4INTN                                  0x3
#define LC4INTN_address                          0xF28
#define LC4INTN_position                         0x3
#define LC4INTN_size                             0x1
#define LC4INTN_value_mask                       0x8
#define LC4INTN_clear_mask                       0xF7

#define CLC4CON_LCINTP                           0x4
#define CLC4CON_LCINTP_address                   0xF28
#define CLC4CON_LCINTP_position                  0x4
#define CLC4CON_LCINTP_size                      0x1
#define CLC4CON_LCINTP_value_mask                0x10
#define CLC4CON_LCINTP_clear_mask                0xEF

#define LC4INTP                                  0x4
#define LC4INTP_address                          0xF28
#define LC4INTP_position                         0x4
#define LC4INTP_size                             0x1
#define LC4INTP_value_mask                       0x10
#define LC4INTP_clear_mask                       0xEF

#define LC4OUT                                   0x5
#define LC4OUT_address                           0xF28
#define LC4OUT_position                          0x5
#define LC4OUT_size                              0x1
#define LC4OUT_value_mask                        0x20
#define LC4OUT_clear_mask                        0xDF

#define CLC4CON_LCOUT                            0x5
#define CLC4CON_LCOUT_address                    0xF28
#define CLC4CON_LCOUT_position                   0x5
#define CLC4CON_LCOUT_size                       0x1
#define CLC4CON_LCOUT_value_mask                 0x20
#define CLC4CON_LCOUT_clear_mask                 0xDF

#define CLC4CON_LCOE                             0x6
#define CLC4CON_LCOE_address                     0xF28
#define CLC4CON_LCOE_position                    0x6
#define CLC4CON_LCOE_size                        0x1
#define CLC4CON_LCOE_value_mask                  0x40
#define CLC4CON_LCOE_clear_mask                  0xBF

#define LC4OE                                    0x6
#define LC4OE_address                            0xF28
#define LC4OE_position                           0x6
#define LC4OE_size                               0x1
#define LC4OE_value_mask                         0x40
#define LC4OE_clear_mask                         0xBF

#define CLC4CON_LCEN                             0x7
#define CLC4CON_LCEN_address                     0xF28
#define CLC4CON_LCEN_position                    0x7
#define CLC4CON_LCEN_size                        0x1
#define CLC4CON_LCEN_value_mask                  0x80
#define CLC4CON_LCEN_clear_mask                  0x7F

#define LC4EN                                    0x7
#define LC4EN_address                            0xF28
#define LC4EN_position                           0x7
#define LC4EN_size                               0x1
#define LC4EN_value_mask                         0x80
#define LC4EN_clear_mask                         0x7F


/*------------------------------------------------------------------------------#
| CLC4POL                                                                 0xF29 |
#-------------------------------------------------------------------------------#
| LC4POL | - | - | - | LC4G4POL | CLC4POL_G3POL | CLC4POL_G2POL | CLC4POL_G1POL |
#-------------------------------------------------------------------------------#
| 7      | 6 | 5 | 4 | 3        | 2             | 1             | 0             |
#------------------------------------------------------------------------------*/

#define CLC4POL                                  0x0
#define CLC4POL_address                          0xF29
#define CLC4POL_position                         0x0
#define CLC4POL_size                             0x8
#define CLC4POL_value_mask                       0xFF
#define CLC4POL_clear_mask                       0x0

#define CLC4POL_G1POL                            0x0
#define CLC4POL_G1POL_address                    0xF29
#define CLC4POL_G1POL_position                   0x0
#define CLC4POL_G1POL_size                       0x1
#define CLC4POL_G1POL_value_mask                 0x1
#define CLC4POL_G1POL_clear_mask                 0xFE

#define LC4G1POL                                 0x0
#define LC4G1POL_address                         0xF29
#define LC4G1POL_position                        0x0
#define LC4G1POL_size                            0x1
#define LC4G1POL_value_mask                      0x1
#define LC4G1POL_clear_mask                      0xFE

#define CLC4POL_G2POL                            0x1
#define CLC4POL_G2POL_address                    0xF29
#define CLC4POL_G2POL_position                   0x1
#define CLC4POL_G2POL_size                       0x1
#define CLC4POL_G2POL_value_mask                 0x2
#define CLC4POL_G2POL_clear_mask                 0xFD

#define LC4G2POL                                 0x1
#define LC4G2POL_address                         0xF29
#define LC4G2POL_position                        0x1
#define LC4G2POL_size                            0x1
#define LC4G2POL_value_mask                      0x2
#define LC4G2POL_clear_mask                      0xFD

#define CLC4POL_G3POL                            0x2
#define CLC4POL_G3POL_address                    0xF29
#define CLC4POL_G3POL_position                   0x2
#define CLC4POL_G3POL_size                       0x1
#define CLC4POL_G3POL_value_mask                 0x4
#define CLC4POL_G3POL_clear_mask                 0xFB

#define LC4G3POL                                 0x2
#define LC4G3POL_address                         0xF29
#define LC4G3POL_position                        0x2
#define LC4G3POL_size                            0x1
#define LC4G3POL_value_mask                      0x4
#define LC4G3POL_clear_mask                      0xFB

#define LC4G4POL                                 0x3
#define LC4G4POL_address                         0xF29
#define LC4G4POL_position                        0x3
#define LC4G4POL_size                            0x1
#define LC4G4POL_value_mask                      0x8
#define LC4G4POL_clear_mask                      0xF7

#define CLC4POL_G4POL                            0x3
#define CLC4POL_G4POL_address                    0xF29
#define CLC4POL_G4POL_position                   0x3
#define CLC4POL_G4POL_size                       0x1
#define CLC4POL_G4POL_value_mask                 0x8
#define CLC4POL_G4POL_clear_mask                 0xF7

#define LC4POL                                   0x7
#define LC4POL_address                           0xF29
#define LC4POL_position                          0x7
#define LC4POL_size                              0x1
#define LC4POL_value_mask                        0x80
#define LC4POL_clear_mask                        0x7F

#define CLC4POL_POL                              0x7
#define CLC4POL_POL_address                      0xF29
#define CLC4POL_POL_position                     0x7
#define CLC4POL_POL_size                         0x1
#define CLC4POL_POL_value_mask                   0x80
#define CLC4POL_POL_clear_mask                   0x7F


/*------------------------------------------------------------------------------------#
| CLC4SEL0                                                                      0xF2A |
#-------------------------------------------------------------------------------------#
| - | LC4D2S2 | LC4D2S1 | LC4D2S0 | - | CLC4SEL0_D1S2 | CLC4SEL0_D1S1 | CLC4SEL0_D1S0 |
#-------------------------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3 | 2             | 1             | 0             |
#------------------------------------------------------------------------------------*/

#define CLC4SEL0                                 0x0
#define CLC4SEL0_address                         0xF2A
#define CLC4SEL0_position                        0x0
#define CLC4SEL0_size                            0x8
#define CLC4SEL0_value_mask                      0xFF
#define CLC4SEL0_clear_mask                      0x0

#define CLC4SEL0_D1S0                            0x0
#define CLC4SEL0_D1S0_address                    0xF2A
#define CLC4SEL0_D1S0_position                   0x0
#define CLC4SEL0_D1S0_size                       0x1
#define CLC4SEL0_D1S0_value_mask                 0x1
#define CLC4SEL0_D1S0_clear_mask                 0xFE

#define LC4D1S0                                  0x0
#define LC4D1S0_address                          0xF2A
#define LC4D1S0_position                         0x0
#define LC4D1S0_size                             0x1
#define LC4D1S0_value_mask                       0x1
#define LC4D1S0_clear_mask                       0xFE

#define LC4D1S                                   0x0
#define LC4D1S_address                           0xF2A
#define LC4D1S_position                          0x0
#define LC4D1S_size                              0x3
#define LC4D1S_value_mask                        0x7
#define LC4D1S_clear_mask                        0xF8

#define CLC4SEL0_D1S1                            0x1
#define CLC4SEL0_D1S1_address                    0xF2A
#define CLC4SEL0_D1S1_position                   0x1
#define CLC4SEL0_D1S1_size                       0x1
#define CLC4SEL0_D1S1_value_mask                 0x2
#define CLC4SEL0_D1S1_clear_mask                 0xFD

#define LC4D1S1                                  0x1
#define LC4D1S1_address                          0xF2A
#define LC4D1S1_position                         0x1
#define LC4D1S1_size                             0x1
#define LC4D1S1_value_mask                       0x2
#define LC4D1S1_clear_mask                       0xFD

#define CLC4SEL0_D1S2                            0x2
#define CLC4SEL0_D1S2_address                    0xF2A
#define CLC4SEL0_D1S2_position                   0x2
#define CLC4SEL0_D1S2_size                       0x1
#define CLC4SEL0_D1S2_value_mask                 0x4
#define CLC4SEL0_D1S2_clear_mask                 0xFB

#define LC4D1S2                                  0x2
#define LC4D1S2_address                          0xF2A
#define LC4D1S2_position                         0x2
#define LC4D1S2_size                             0x1
#define LC4D1S2_value_mask                       0x4
#define LC4D1S2_clear_mask                       0xFB

#define LC4D2S                                   0x4
#define LC4D2S_address                           0xF2A
#define LC4D2S_position                          0x4
#define LC4D2S_size                              0x3
#define LC4D2S_value_mask                        0x70
#define LC4D2S_clear_mask                        0x8F

#define LC4D2S0                                  0x4
#define LC4D2S0_address                          0xF2A
#define LC4D2S0_position                         0x4
#define LC4D2S0_size                             0x1
#define LC4D2S0_value_mask                       0x10
#define LC4D2S0_clear_mask                       0xEF

#define CLC4SEL0_D2S0                            0x4
#define CLC4SEL0_D2S0_address                    0xF2A
#define CLC4SEL0_D2S0_position                   0x4
#define CLC4SEL0_D2S0_size                       0x1
#define CLC4SEL0_D2S0_value_mask                 0x10
#define CLC4SEL0_D2S0_clear_mask                 0xEF

#define LC4D2S1                                  0x5
#define LC4D2S1_address                          0xF2A
#define LC4D2S1_position                         0x5
#define LC4D2S1_size                             0x1
#define LC4D2S1_value_mask                       0x20
#define LC4D2S1_clear_mask                       0xDF

#define CLC4SEL0_D2S1                            0x5
#define CLC4SEL0_D2S1_address                    0xF2A
#define CLC4SEL0_D2S1_position                   0x5
#define CLC4SEL0_D2S1_size                       0x1
#define CLC4SEL0_D2S1_value_mask                 0x20
#define CLC4SEL0_D2S1_clear_mask                 0xDF

#define LC4D2S2                                  0x6
#define LC4D2S2_address                          0xF2A
#define LC4D2S2_position                         0x6
#define LC4D2S2_size                             0x1
#define LC4D2S2_value_mask                       0x40
#define LC4D2S2_clear_mask                       0xBF

#define CLC4SEL0_D2S2                            0x6
#define CLC4SEL0_D2S2_address                    0xF2A
#define CLC4SEL0_D2S2_position                   0x6
#define CLC4SEL0_D2S2_size                       0x1
#define CLC4SEL0_D2S2_value_mask                 0x40
#define CLC4SEL0_D2S2_clear_mask                 0xBF


/*------------------------------------------------------------------------------#
| CLC4SEL1                                                                0xF2B |
#-------------------------------------------------------------------------------#
| - | LC4D4S2 | LC4D4S1 | LC4D4S0 | - | LC4D3S2 | CLC4SEL1_D3S1 | CLC4SEL1_D3S0 |
#-------------------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3 | 2       | 1             | 0             |
#------------------------------------------------------------------------------*/

#define CLC4SEL1                                 0x0
#define CLC4SEL1_address                         0xF2B
#define CLC4SEL1_position                        0x0
#define CLC4SEL1_size                            0x8
#define CLC4SEL1_value_mask                      0xFF
#define CLC4SEL1_clear_mask                      0x0

#define LC4D3S                                   0x0
#define LC4D3S_address                           0xF2B
#define LC4D3S_position                          0x0
#define LC4D3S_size                              0x3
#define LC4D3S_value_mask                        0x7
#define LC4D3S_clear_mask                        0xF8

#define CLC4SEL1_D3S0                            0x0
#define CLC4SEL1_D3S0_address                    0xF2B
#define CLC4SEL1_D3S0_position                   0x0
#define CLC4SEL1_D3S0_size                       0x1
#define CLC4SEL1_D3S0_value_mask                 0x1
#define CLC4SEL1_D3S0_clear_mask                 0xFE

#define LC4D3S0                                  0x0
#define LC4D3S0_address                          0xF2B
#define LC4D3S0_position                         0x0
#define LC4D3S0_size                             0x1
#define LC4D3S0_value_mask                       0x1
#define LC4D3S0_clear_mask                       0xFE

#define CLC4SEL1_D3S1                            0x1
#define CLC4SEL1_D3S1_address                    0xF2B
#define CLC4SEL1_D3S1_position                   0x1
#define CLC4SEL1_D3S1_size                       0x1
#define CLC4SEL1_D3S1_value_mask                 0x2
#define CLC4SEL1_D3S1_clear_mask                 0xFD

#define LC4D3S1                                  0x1
#define LC4D3S1_address                          0xF2B
#define LC4D3S1_position                         0x1
#define LC4D3S1_size                             0x1
#define LC4D3S1_value_mask                       0x2
#define LC4D3S1_clear_mask                       0xFD

#define CLC4SEL1_D3S2                            0x2
#define CLC4SEL1_D3S2_address                    0xF2B
#define CLC4SEL1_D3S2_position                   0x2
#define CLC4SEL1_D3S2_size                       0x1
#define CLC4SEL1_D3S2_value_mask                 0x4
#define CLC4SEL1_D3S2_clear_mask                 0xFB

#define LC4D3S2                                  0x2
#define LC4D3S2_address                          0xF2B
#define LC4D3S2_position                         0x2
#define LC4D3S2_size                             0x1
#define LC4D3S2_value_mask                       0x4
#define LC4D3S2_clear_mask                       0xFB

#define LC4D4S                                   0x4
#define LC4D4S_address                           0xF2B
#define LC4D4S_position                          0x4
#define LC4D4S_size                              0x3
#define LC4D4S_value_mask                        0x70
#define LC4D4S_clear_mask                        0x8F

#define LC4D4S0                                  0x4
#define LC4D4S0_address                          0xF2B
#define LC4D4S0_position                         0x4
#define LC4D4S0_size                             0x1
#define LC4D4S0_value_mask                       0x10
#define LC4D4S0_clear_mask                       0xEF

#define CLC4SEL1_D4S0                            0x4
#define CLC4SEL1_D4S0_address                    0xF2B
#define CLC4SEL1_D4S0_position                   0x4
#define CLC4SEL1_D4S0_size                       0x1
#define CLC4SEL1_D4S0_value_mask                 0x10
#define CLC4SEL1_D4S0_clear_mask                 0xEF

#define LC4D4S1                                  0x5
#define LC4D4S1_address                          0xF2B
#define LC4D4S1_position                         0x5
#define LC4D4S1_size                             0x1
#define LC4D4S1_value_mask                       0x20
#define LC4D4S1_clear_mask                       0xDF

#define CLC4SEL1_D4S1                            0x5
#define CLC4SEL1_D4S1_address                    0xF2B
#define CLC4SEL1_D4S1_position                   0x5
#define CLC4SEL1_D4S1_size                       0x1
#define CLC4SEL1_D4S1_value_mask                 0x20
#define CLC4SEL1_D4S1_clear_mask                 0xDF

#define LC4D4S2                                  0x6
#define LC4D4S2_address                          0xF2B
#define LC4D4S2_position                         0x6
#define LC4D4S2_size                             0x1
#define LC4D4S2_value_mask                       0x40
#define LC4D4S2_clear_mask                       0xBF

#define CLC4SEL1_D4S2                            0x6
#define CLC4SEL1_D4S2_address                    0xF2B
#define CLC4SEL1_D4S2_position                   0x6
#define CLC4SEL1_D4S2_size                       0x1
#define CLC4SEL1_D4S2_value_mask                 0x40
#define CLC4SEL1_D4S2_clear_mask                 0xBF


/*------------------------------------------------------------------------------------------------------#
| CLC4GLS0                                                                                        0xF2C |
#-------------------------------------------------------------------------------------------------------#
| LC4G1D4T | LC4G1D4N | LC4G1D3T | CLC4GLS0_D3N | CLC4GLS0_D2T | CLC4GLS0_D2N | LC4G1D1T | CLC4GLS0_D1N |
#-------------------------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4            | 3            | 2            | 1        | 0            |
#------------------------------------------------------------------------------------------------------*/

#define CLC4GLS0                                 0x0
#define CLC4GLS0_address                         0xF2C
#define CLC4GLS0_position                        0x0
#define CLC4GLS0_size                            0x8
#define CLC4GLS0_value_mask                      0xFF
#define CLC4GLS0_clear_mask                      0x0

#define CLC4GLS0_D1N                             0x0
#define CLC4GLS0_D1N_address                     0xF2C
#define CLC4GLS0_D1N_position                    0x0
#define CLC4GLS0_D1N_size                        0x1
#define CLC4GLS0_D1N_value_mask                  0x1
#define CLC4GLS0_D1N_clear_mask                  0xFE

#define LC4G1D1N                                 0x0
#define LC4G1D1N_address                         0xF2C
#define LC4G1D1N_position                        0x0
#define LC4G1D1N_size                            0x1
#define LC4G1D1N_value_mask                      0x1
#define LC4G1D1N_clear_mask                      0xFE

#define CLC4GLS0_D1T                             0x1
#define CLC4GLS0_D1T_address                     0xF2C
#define CLC4GLS0_D1T_position                    0x1
#define CLC4GLS0_D1T_size                        0x1
#define CLC4GLS0_D1T_value_mask                  0x2
#define CLC4GLS0_D1T_clear_mask                  0xFD

#define LC4G1D1T                                 0x1
#define LC4G1D1T_address                         0xF2C
#define LC4G1D1T_position                        0x1
#define LC4G1D1T_size                            0x1
#define LC4G1D1T_value_mask                      0x2
#define LC4G1D1T_clear_mask                      0xFD

#define CLC4GLS0_D2N                             0x2
#define CLC4GLS0_D2N_address                     0xF2C
#define CLC4GLS0_D2N_position                    0x2
#define CLC4GLS0_D2N_size                        0x1
#define CLC4GLS0_D2N_value_mask                  0x4
#define CLC4GLS0_D2N_clear_mask                  0xFB

#define LC4G1D2N                                 0x2
#define LC4G1D2N_address                         0xF2C
#define LC4G1D2N_position                        0x2
#define LC4G1D2N_size                            0x1
#define LC4G1D2N_value_mask                      0x4
#define LC4G1D2N_clear_mask                      0xFB

#define CLC4GLS0_D2T                             0x3
#define CLC4GLS0_D2T_address                     0xF2C
#define CLC4GLS0_D2T_position                    0x3
#define CLC4GLS0_D2T_size                        0x1
#define CLC4GLS0_D2T_value_mask                  0x8
#define CLC4GLS0_D2T_clear_mask                  0xF7

#define LC4G1D2T                                 0x3
#define LC4G1D2T_address                         0xF2C
#define LC4G1D2T_position                        0x3
#define LC4G1D2T_size                            0x1
#define LC4G1D2T_value_mask                      0x8
#define LC4G1D2T_clear_mask                      0xF7

#define CLC4GLS0_D3N                             0x4
#define CLC4GLS0_D3N_address                     0xF2C
#define CLC4GLS0_D3N_position                    0x4
#define CLC4GLS0_D3N_size                        0x1
#define CLC4GLS0_D3N_value_mask                  0x10
#define CLC4GLS0_D3N_clear_mask                  0xEF

#define LC4G1D3N                                 0x4
#define LC4G1D3N_address                         0xF2C
#define LC4G1D3N_position                        0x4
#define LC4G1D3N_size                            0x1
#define LC4G1D3N_value_mask                      0x10
#define LC4G1D3N_clear_mask                      0xEF

#define CLC4GLS0_D3T                             0x5
#define CLC4GLS0_D3T_address                     0xF2C
#define CLC4GLS0_D3T_position                    0x5
#define CLC4GLS0_D3T_size                        0x1
#define CLC4GLS0_D3T_value_mask                  0x20
#define CLC4GLS0_D3T_clear_mask                  0xDF

#define LC4G1D3T                                 0x5
#define LC4G1D3T_address                         0xF2C
#define LC4G1D3T_position                        0x5
#define LC4G1D3T_size                            0x1
#define LC4G1D3T_value_mask                      0x20
#define LC4G1D3T_clear_mask                      0xDF

#define CLC4GLS0_D4N                             0x6
#define CLC4GLS0_D4N_address                     0xF2C
#define CLC4GLS0_D4N_position                    0x6
#define CLC4GLS0_D4N_size                        0x1
#define CLC4GLS0_D4N_value_mask                  0x40
#define CLC4GLS0_D4N_clear_mask                  0xBF

#define LC4G1D4N                                 0x6
#define LC4G1D4N_address                         0xF2C
#define LC4G1D4N_position                        0x6
#define LC4G1D4N_size                            0x1
#define LC4G1D4N_value_mask                      0x40
#define LC4G1D4N_clear_mask                      0xBF

#define CLC4GLS0_D4T                             0x7
#define CLC4GLS0_D4T_address                     0xF2C
#define CLC4GLS0_D4T_position                    0x7
#define CLC4GLS0_D4T_size                        0x1
#define CLC4GLS0_D4T_value_mask                  0x80
#define CLC4GLS0_D4T_clear_mask                  0x7F

#define LC4G1D4T                                 0x7
#define LC4G1D4T_address                         0xF2C
#define LC4G1D4T_position                        0x7
#define LC4G1D4T_size                            0x1
#define LC4G1D4T_value_mask                      0x80
#define LC4G1D4T_clear_mask                      0x7F


/*------------------------------------------------------------------------------------------------------#
| CLC4GLS1                                                                                        0xF2D |
#-------------------------------------------------------------------------------------------------------#
| LC4G2D4T | CLC4GLS1_D4N | LC4G2D3T | CLC4GLS1_D3N | LC4G2D2T | CLC4GLS1_D2N | CLC4GLS1_D1T | LC4G2D1N |
#-------------------------------------------------------------------------------------------------------#
| 7        | 6            | 5        | 4            | 3        | 2            | 1            | 0        |
#------------------------------------------------------------------------------------------------------*/

#define CLC4GLS1                                 0x0
#define CLC4GLS1_address                         0xF2D
#define CLC4GLS1_position                        0x0
#define CLC4GLS1_size                            0x8
#define CLC4GLS1_value_mask                      0xFF
#define CLC4GLS1_clear_mask                      0x0

#define CLC4GLS1_D1N                             0x0
#define CLC4GLS1_D1N_address                     0xF2D
#define CLC4GLS1_D1N_position                    0x0
#define CLC4GLS1_D1N_size                        0x1
#define CLC4GLS1_D1N_value_mask                  0x1
#define CLC4GLS1_D1N_clear_mask                  0xFE

#define LC4G2D1N                                 0x0
#define LC4G2D1N_address                         0xF2D
#define LC4G2D1N_position                        0x0
#define LC4G2D1N_size                            0x1
#define LC4G2D1N_value_mask                      0x1
#define LC4G2D1N_clear_mask                      0xFE

#define CLC4GLS1_D1T                             0x1
#define CLC4GLS1_D1T_address                     0xF2D
#define CLC4GLS1_D1T_position                    0x1
#define CLC4GLS1_D1T_size                        0x1
#define CLC4GLS1_D1T_value_mask                  0x2
#define CLC4GLS1_D1T_clear_mask                  0xFD

#define LC4G2D1T                                 0x1
#define LC4G2D1T_address                         0xF2D
#define LC4G2D1T_position                        0x1
#define LC4G2D1T_size                            0x1
#define LC4G2D1T_value_mask                      0x2
#define LC4G2D1T_clear_mask                      0xFD

#define LC4G2D2N                                 0x2
#define LC4G2D2N_address                         0xF2D
#define LC4G2D2N_position                        0x2
#define LC4G2D2N_size                            0x1
#define LC4G2D2N_value_mask                      0x4
#define LC4G2D2N_clear_mask                      0xFB

#define CLC4GLS1_D2N                             0x2
#define CLC4GLS1_D2N_address                     0xF2D
#define CLC4GLS1_D2N_position                    0x2
#define CLC4GLS1_D2N_size                        0x1
#define CLC4GLS1_D2N_value_mask                  0x4
#define CLC4GLS1_D2N_clear_mask                  0xFB

#define LC4G2D2T                                 0x3
#define LC4G2D2T_address                         0xF2D
#define LC4G2D2T_position                        0x3
#define LC4G2D2T_size                            0x1
#define LC4G2D2T_value_mask                      0x8
#define LC4G2D2T_clear_mask                      0xF7

#define CLC4GLS1_D2T                             0x3
#define CLC4GLS1_D2T_address                     0xF2D
#define CLC4GLS1_D2T_position                    0x3
#define CLC4GLS1_D2T_size                        0x1
#define CLC4GLS1_D2T_value_mask                  0x8
#define CLC4GLS1_D2T_clear_mask                  0xF7

#define CLC4GLS1_D3N                             0x4
#define CLC4GLS1_D3N_address                     0xF2D
#define CLC4GLS1_D3N_position                    0x4
#define CLC4GLS1_D3N_size                        0x1
#define CLC4GLS1_D3N_value_mask                  0x10
#define CLC4GLS1_D3N_clear_mask                  0xEF

#define LC4G2D3N                                 0x4
#define LC4G2D3N_address                         0xF2D
#define LC4G2D3N_position                        0x4
#define LC4G2D3N_size                            0x1
#define LC4G2D3N_value_mask                      0x10
#define LC4G2D3N_clear_mask                      0xEF

#define LC4G2D3T                                 0x5
#define LC4G2D3T_address                         0xF2D
#define LC4G2D3T_position                        0x5
#define LC4G2D3T_size                            0x1
#define LC4G2D3T_value_mask                      0x20
#define LC4G2D3T_clear_mask                      0xDF

#define CLC4GLS1_D3T                             0x5
#define CLC4GLS1_D3T_address                     0xF2D
#define CLC4GLS1_D3T_position                    0x5
#define CLC4GLS1_D3T_size                        0x1
#define CLC4GLS1_D3T_value_mask                  0x20
#define CLC4GLS1_D3T_clear_mask                  0xDF

#define CLC4GLS1_D4N                             0x6
#define CLC4GLS1_D4N_address                     0xF2D
#define CLC4GLS1_D4N_position                    0x6
#define CLC4GLS1_D4N_size                        0x1
#define CLC4GLS1_D4N_value_mask                  0x40
#define CLC4GLS1_D4N_clear_mask                  0xBF

#define LC4G2D4N                                 0x6
#define LC4G2D4N_address                         0xF2D
#define LC4G2D4N_position                        0x6
#define LC4G2D4N_size                            0x1
#define LC4G2D4N_value_mask                      0x40
#define LC4G2D4N_clear_mask                      0xBF

#define CLC4GLS1_D4T                             0x7
#define CLC4GLS1_D4T_address                     0xF2D
#define CLC4GLS1_D4T_position                    0x7
#define CLC4GLS1_D4T_size                        0x1
#define CLC4GLS1_D4T_value_mask                  0x80
#define CLC4GLS1_D4T_clear_mask                  0x7F

#define LC4G2D4T                                 0x7
#define LC4G2D4T_address                         0xF2D
#define LC4G2D4T_position                        0x7
#define LC4G2D4T_size                            0x1
#define LC4G2D4T_value_mask                      0x80
#define LC4G2D4T_clear_mask                      0x7F


/*----------------------------------------------------------------------------------------------------------#
| CLC4GLS2                                                                                            0xF2E |
#-----------------------------------------------------------------------------------------------------------#
| LC4G3D4T | CLC4GLS2_D4N | CLC4GLS2_D3T | CLC4GLS2_D3N | CLC4GLS2_D2T | CLC4GLS2_D2N | LC4G3D1T | LC4G3D1N |
#-----------------------------------------------------------------------------------------------------------#
| 7        | 6            | 5            | 4            | 3            | 2            | 1        | 0        |
#----------------------------------------------------------------------------------------------------------*/

#define CLC4GLS2                                 0x0
#define CLC4GLS2_address                         0xF2E
#define CLC4GLS2_position                        0x0
#define CLC4GLS2_size                            0x8
#define CLC4GLS2_value_mask                      0xFF
#define CLC4GLS2_clear_mask                      0x0

#define CLC4GLS2_D1N                             0x0
#define CLC4GLS2_D1N_address                     0xF2E
#define CLC4GLS2_D1N_position                    0x0
#define CLC4GLS2_D1N_size                        0x1
#define CLC4GLS2_D1N_value_mask                  0x1
#define CLC4GLS2_D1N_clear_mask                  0xFE

#define LC4G3D1N                                 0x0
#define LC4G3D1N_address                         0xF2E
#define LC4G3D1N_position                        0x0
#define LC4G3D1N_size                            0x1
#define LC4G3D1N_value_mask                      0x1
#define LC4G3D1N_clear_mask                      0xFE

#define CLC4GLS2_D1T                             0x1
#define CLC4GLS2_D1T_address                     0xF2E
#define CLC4GLS2_D1T_position                    0x1
#define CLC4GLS2_D1T_size                        0x1
#define CLC4GLS2_D1T_value_mask                  0x2
#define CLC4GLS2_D1T_clear_mask                  0xFD

#define LC4G3D1T                                 0x1
#define LC4G3D1T_address                         0xF2E
#define LC4G3D1T_position                        0x1
#define LC4G3D1T_size                            0x1
#define LC4G3D1T_value_mask                      0x2
#define LC4G3D1T_clear_mask                      0xFD

#define LC4G3D2N                                 0x2
#define LC4G3D2N_address                         0xF2E
#define LC4G3D2N_position                        0x2
#define LC4G3D2N_size                            0x1
#define LC4G3D2N_value_mask                      0x4
#define LC4G3D2N_clear_mask                      0xFB

#define CLC4GLS2_D2N                             0x2
#define CLC4GLS2_D2N_address                     0xF2E
#define CLC4GLS2_D2N_position                    0x2
#define CLC4GLS2_D2N_size                        0x1
#define CLC4GLS2_D2N_value_mask                  0x4
#define CLC4GLS2_D2N_clear_mask                  0xFB

#define LC4G3D2T                                 0x3
#define LC4G3D2T_address                         0xF2E
#define LC4G3D2T_position                        0x3
#define LC4G3D2T_size                            0x1
#define LC4G3D2T_value_mask                      0x8
#define LC4G3D2T_clear_mask                      0xF7

#define CLC4GLS2_D2T                             0x3
#define CLC4GLS2_D2T_address                     0xF2E
#define CLC4GLS2_D2T_position                    0x3
#define CLC4GLS2_D2T_size                        0x1
#define CLC4GLS2_D2T_value_mask                  0x8
#define CLC4GLS2_D2T_clear_mask                  0xF7

#define CLC4GLS2_D3N                             0x4
#define CLC4GLS2_D3N_address                     0xF2E
#define CLC4GLS2_D3N_position                    0x4
#define CLC4GLS2_D3N_size                        0x1
#define CLC4GLS2_D3N_value_mask                  0x10
#define CLC4GLS2_D3N_clear_mask                  0xEF

#define LC4G3D3N                                 0x4
#define LC4G3D3N_address                         0xF2E
#define LC4G3D3N_position                        0x4
#define LC4G3D3N_size                            0x1
#define LC4G3D3N_value_mask                      0x10
#define LC4G3D3N_clear_mask                      0xEF

#define CLC4GLS2_D3T                             0x5
#define CLC4GLS2_D3T_address                     0xF2E
#define CLC4GLS2_D3T_position                    0x5
#define CLC4GLS2_D3T_size                        0x1
#define CLC4GLS2_D3T_value_mask                  0x20
#define CLC4GLS2_D3T_clear_mask                  0xDF

#define LC4G3D3T                                 0x5
#define LC4G3D3T_address                         0xF2E
#define LC4G3D3T_position                        0x5
#define LC4G3D3T_size                            0x1
#define LC4G3D3T_value_mask                      0x20
#define LC4G3D3T_clear_mask                      0xDF

#define LC4G3D4N                                 0x6
#define LC4G3D4N_address                         0xF2E
#define LC4G3D4N_position                        0x6
#define LC4G3D4N_size                            0x1
#define LC4G3D4N_value_mask                      0x40
#define LC4G3D4N_clear_mask                      0xBF

#define CLC4GLS2_D4N                             0x6
#define CLC4GLS2_D4N_address                     0xF2E
#define CLC4GLS2_D4N_position                    0x6
#define CLC4GLS2_D4N_size                        0x1
#define CLC4GLS2_D4N_value_mask                  0x40
#define CLC4GLS2_D4N_clear_mask                  0xBF

#define LC4G3D4T                                 0x7
#define LC4G3D4T_address                         0xF2E
#define LC4G3D4T_position                        0x7
#define LC4G3D4T_size                            0x1
#define LC4G3D4T_value_mask                      0x80
#define LC4G3D4T_clear_mask                      0x7F

#define CLC4GLS2_D4T                             0x7
#define CLC4GLS2_D4T_address                     0xF2E
#define CLC4GLS2_D4T_position                    0x7
#define CLC4GLS2_D4T_size                        0x1
#define CLC4GLS2_D4T_value_mask                  0x80
#define CLC4GLS2_D4T_clear_mask                  0x7F


/*--------------------------------------------------------------------------------------------------------------#
| CLC4GLS3                                                                                                0xF2F |
#---------------------------------------------------------------------------------------------------------------#
| CLC4GLS3_G4D4T | LC4G4D4N | CLC4GLS3_G4D3T | LC4G4D3N | CLC4GLS3_G4D2T | LC4G4D2N | LC4G4D1T | CLC4GLS3_G4D1N |
#---------------------------------------------------------------------------------------------------------------#
| 7              | 6        | 5              | 4        | 3              | 2        | 1        | 0              |
#--------------------------------------------------------------------------------------------------------------*/

#define CLC4GLS3                                 0x0
#define CLC4GLS3_address                         0xF2F
#define CLC4GLS3_position                        0x0
#define CLC4GLS3_size                            0x8
#define CLC4GLS3_value_mask                      0xFF
#define CLC4GLS3_clear_mask                      0x0

#define CLC4GLS3_G4D1N                           0x0
#define CLC4GLS3_G4D1N_address                   0xF2F
#define CLC4GLS3_G4D1N_position                  0x0
#define CLC4GLS3_G4D1N_size                      0x1
#define CLC4GLS3_G4D1N_value_mask                0x1
#define CLC4GLS3_G4D1N_clear_mask                0xFE

#define LC4G4D1N                                 0x0
#define LC4G4D1N_address                         0xF2F
#define LC4G4D1N_position                        0x0
#define LC4G4D1N_size                            0x1
#define LC4G4D1N_value_mask                      0x1
#define LC4G4D1N_clear_mask                      0xFE

#define LC4G4D1T                                 0x1
#define LC4G4D1T_address                         0xF2F
#define LC4G4D1T_position                        0x1
#define LC4G4D1T_size                            0x1
#define LC4G4D1T_value_mask                      0x2
#define LC4G4D1T_clear_mask                      0xFD

#define CLC4GLS3_G4D1T                           0x1
#define CLC4GLS3_G4D1T_address                   0xF2F
#define CLC4GLS3_G4D1T_position                  0x1
#define CLC4GLS3_G4D1T_size                      0x1
#define CLC4GLS3_G4D1T_value_mask                0x2
#define CLC4GLS3_G4D1T_clear_mask                0xFD

#define LC4G4D2N                                 0x2
#define LC4G4D2N_address                         0xF2F
#define LC4G4D2N_position                        0x2
#define LC4G4D2N_size                            0x1
#define LC4G4D2N_value_mask                      0x4
#define LC4G4D2N_clear_mask                      0xFB

#define CLC4GLS3_G4D2N                           0x2
#define CLC4GLS3_G4D2N_address                   0xF2F
#define CLC4GLS3_G4D2N_position                  0x2
#define CLC4GLS3_G4D2N_size                      0x1
#define CLC4GLS3_G4D2N_value_mask                0x4
#define CLC4GLS3_G4D2N_clear_mask                0xFB

#define LC4G4D2T                                 0x3
#define LC4G4D2T_address                         0xF2F
#define LC4G4D2T_position                        0x3
#define LC4G4D2T_size                            0x1
#define LC4G4D2T_value_mask                      0x8
#define LC4G4D2T_clear_mask                      0xF7

#define CLC4GLS3_G4D2T                           0x3
#define CLC4GLS3_G4D2T_address                   0xF2F
#define CLC4GLS3_G4D2T_position                  0x3
#define CLC4GLS3_G4D2T_size                      0x1
#define CLC4GLS3_G4D2T_value_mask                0x8
#define CLC4GLS3_G4D2T_clear_mask                0xF7

#define CLC4GLS3_G4D3N                           0x4
#define CLC4GLS3_G4D3N_address                   0xF2F
#define CLC4GLS3_G4D3N_position                  0x4
#define CLC4GLS3_G4D3N_size                      0x1
#define CLC4GLS3_G4D3N_value_mask                0x10
#define CLC4GLS3_G4D3N_clear_mask                0xEF

#define LC4G4D3N                                 0x4
#define LC4G4D3N_address                         0xF2F
#define LC4G4D3N_position                        0x4
#define LC4G4D3N_size                            0x1
#define LC4G4D3N_value_mask                      0x10
#define LC4G4D3N_clear_mask                      0xEF

#define CLC4GLS3_G4D3T                           0x5
#define CLC4GLS3_G4D3T_address                   0xF2F
#define CLC4GLS3_G4D3T_position                  0x5
#define CLC4GLS3_G4D3T_size                      0x1
#define CLC4GLS3_G4D3T_value_mask                0x20
#define CLC4GLS3_G4D3T_clear_mask                0xDF

#define LC4G4D3T                                 0x5
#define LC4G4D3T_address                         0xF2F
#define LC4G4D3T_position                        0x5
#define LC4G4D3T_size                            0x1
#define LC4G4D3T_value_mask                      0x20
#define LC4G4D3T_clear_mask                      0xDF

#define LC4G4D4N                                 0x6
#define LC4G4D4N_address                         0xF2F
#define LC4G4D4N_position                        0x6
#define LC4G4D4N_size                            0x1
#define LC4G4D4N_value_mask                      0x40
#define LC4G4D4N_clear_mask                      0xBF

#define CLC4GLS3_G4D4N                           0x6
#define CLC4GLS3_G4D4N_address                   0xF2F
#define CLC4GLS3_G4D4N_position                  0x6
#define CLC4GLS3_G4D4N_size                      0x1
#define CLC4GLS3_G4D4N_value_mask                0x40
#define CLC4GLS3_G4D4N_clear_mask                0xBF

#define LC4G4D4T                                 0x7
#define LC4G4D4T_address                         0xF2F
#define LC4G4D4T_position                        0x7
#define LC4G4D4T_size                            0x1
#define LC4G4D4T_value_mask                      0x80
#define LC4G4D4T_clear_mask                      0x7F

#define CLC4GLS3_G4D4T                           0x7
#define CLC4GLS3_G4D4T_address                   0xF2F
#define CLC4GLS3_G4D4T_position                  0x7
#define CLC4GLS3_G4D4T_size                      0x1
#define CLC4GLS3_G4D4T_value_mask                0x80
#define CLC4GLS3_G4D4T_clear_mask                0x7F


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


/*------------------------------------------------#
| DEVSEL                                    0xF95 |
#-------------------------------------------------#
| - | - | - | - | - | DEVSEL2 | DEVSEL1 | DEVSEL0 |
#-------------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2       | 1       | 0       |
#------------------------------------------------*/

#define DEVSEL                                   0x0
#define DEVSEL_address                           0xF95
#define DEVSEL_position                          0x0
#define DEVSEL_size                              0x8
#define DEVSEL_value_mask                        0xFF
#define DEVSEL_clear_mask                        0x0

#define DEVSEL0                                  0x0
#define DEVSEL0_address                          0xF95
#define DEVSEL0_position                         0x0
#define DEVSEL0_size                             0x1
#define DEVSEL0_value_mask                       0x1
#define DEVSEL0_clear_mask                       0xFE

#define DEVSEL1                                  0x1
#define DEVSEL1_address                          0xF95
#define DEVSEL1_position                         0x1
#define DEVSEL1_size                             0x1
#define DEVSEL1_value_mask                       0x2
#define DEVSEL1_clear_mask                       0xFD

#define DEVSEL2                                  0x2
#define DEVSEL2_address                          0xF95
#define DEVSEL2_position                         0x2
#define DEVSEL2_size                             0x1
#define DEVSEL2_value_mask                       0x4
#define DEVSEL2_clear_mask                       0xFB


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

#endif // _PIC16LF1509_H_
